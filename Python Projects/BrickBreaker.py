import pygame
import sys

# Initialize pygame
pygame.init()

# Screen dimensions
SCREEN_WIDTH = 800
SCREEN_HEIGHT = 600

# Colors
WHITE = (255, 255, 255)
RED = (255, 0, 0)
YELLOW = (255, 255, 0)
BLACK = (0, 0, 0)

# Game settings
BRICK_ROWS = 5
BRICK_COLS = 8
BRICK_WIDTH = 75
BRICK_HEIGHT = 30
BRICK_PADDING = 10
PADDLE_WIDTH = 100
PADDLE_HEIGHT = 20
BALL_RADIUS = 10

# Initialize screen
screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
pygame.display.set_caption("Brick Breaker")

# Clock for controlling frame rate
clock = pygame.time.Clock()

# Paddle
paddle = pygame.Rect((SCREEN_WIDTH // 2 - PADDLE_WIDTH // 2, SCREEN_HEIGHT - 50), (PADDLE_WIDTH, PADDLE_HEIGHT))

# Ball
ball = pygame.Rect((paddle.centerx, paddle.top - BALL_RADIUS * 2), (BALL_RADIUS * 2, BALL_RADIUS * 2))
ball_speed = [4, -4]
ball_on_paddle = True

# Bricks
bricks = []
for row in range(BRICK_ROWS):
    for col in range(BRICK_COLS):
        x = col * (BRICK_WIDTH + BRICK_PADDING) + BRICK_PADDING
        y = row * (BRICK_HEIGHT + BRICK_PADDING) + BRICK_PADDING
        brick = pygame.Rect(x, y, BRICK_WIDTH, BRICK_HEIGHT)
        bricks.append(brick)

# Game loop
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

        # Launch the ball
        if event.type == pygame.KEYDOWN and ball_on_paddle:
            if event.key == pygame.K_SPACE:
                ball_on_paddle = False

    # Move paddle
    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT] and paddle.left > 0:
        paddle.move_ip(-8, 0)
    if keys[pygame.K_RIGHT] and paddle.right < SCREEN_WIDTH:
        paddle.move_ip(8, 0)

    # Move ball
    if not ball_on_paddle:
        ball.x += ball_speed[0]
        ball.y += ball_speed[1]

        # Ball collision with walls
        if ball.left <= 0 or ball.right >= SCREEN_WIDTH:
            ball_speed[0] = -ball_speed[0]
        if ball.top <= 0:
            ball_speed[1] = -ball_speed[1]

        # Ball collision with paddle
        if ball.colliderect(paddle):
            ball_speed[1] = -ball_speed[1]

        # Ball collision with bricks
        for brick in bricks[:]:
            if ball.colliderect(brick):
                ball_speed[1] = -ball_speed[1]
                bricks.remove(brick)
                break

        # Ball falls below screen
        if ball.top > SCREEN_HEIGHT:
            ball_on_paddle = True
            ball.x = paddle.centerx - BALL_RADIUS
            ball.y = paddle.top - BALL_RADIUS * 2

    else:
        # Keep ball on paddle
        ball.x = paddle.centerx - BALL_RADIUS
        ball.y = paddle.top - BALL_RADIUS * 2

    # Drawing everything
    screen.fill(BLACK)
    
    # Draw paddle
    pygame.draw.rect(screen, WHITE, paddle)

    # Draw ball
    pygame.draw.ellipse(screen, RED, ball)

    # Draw bricks
    for brick in bricks:
        pygame.draw.rect(screen, YELLOW, brick)

    # Check for win
    if not bricks:
        font = pygame.font.Font(None, 74)
        text = font.render("You Win!", True, WHITE)
        screen.blit(text, (SCREEN_WIDTH // 2 - text.get_width() // 2, SCREEN_HEIGHT // 2 - text.get_height() // 2))
        pygame.display.flip()
        pygame.time.wait(3000)
        running = False

    pygame.display.flip()
    clock.tick(60)

pygame.quit()
sys.exit()