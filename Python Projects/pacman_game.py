import pygame
import sys
import random

# Initialize Pygame
pygame.init()

# Screen dimensions
SCREEN_WIDTH, SCREEN_HEIGHT = 600, 600
screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
pygame.display.set_caption("Pac-Man")

# Colors
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
RED = (255, 0, 0)

# Load images
PACMAN_OPEN = pygame.image.load("assets/pacman_open.png")
PACMAN_CLOSED = pygame.image.load("assets/pacman_closed.png")
BACKGROUND = pygame.image.load("assets/maze.png")
GHOST = pygame.image.load("assets/ghost.png")
DOT = pygame.image.load("assets/dot.png")

# Scale images
PACMAN_OPEN = pygame.transform.scale(PACMAN_OPEN, (30, 30))
PACMAN_CLOSED = pygame.transform.scale(PACMAN_CLOSED, (30, 30))
PACMAN = PACMAN_OPEN
GHOST = pygame.transform.scale(GHOST, (30, 30))
DOT = pygame.transform.scale(DOT, (10, 10))

# Game variables
clock = pygame.time.Clock()
pacman_x, pacman_y = 300, 300
pacman_speed = 3
direction = None
animation_toggle = False

# Ghosts
ghosts = [
    {"x": random.randint(0, SCREEN_WIDTH - 30), "y": random.randint(0, SCREEN_HEIGHT - 30), "dx": 2, "dy": 2}
    for _ in range(3)
]

# Dots
dots = [{"x": random.randint(20, SCREEN_WIDTH - 20), "y": random.randint(20, SCREEN_HEIGHT - 20)} for _ in range(15)]

# Score
score = 0

# Font
font = pygame.font.Font(None, 36)

# Main game loop
running = True
while running:
    screen.fill(BLACK)
    screen.blit(BACKGROUND, (0, 0))

    # Event handling
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_UP:
                direction = "UP"
            elif event.key == pygame.K_DOWN:
                direction = "DOWN"
            elif event.key == pygame.K_LEFT:
                direction = "LEFT"
            elif event.key == pygame.K_RIGHT:
                direction = "RIGHT"

    # Movement logic
    if direction == "UP":
        pacman_y -= pacman_speed
    elif direction == "DOWN":
        pacman_y += pacman_speed
    elif direction == "LEFT":
        pacman_x -= pacman_speed
    elif direction == "RIGHT":
        pacman_x += pacman_speed

    # Boundary conditions
    pacman_x = max(0, min(SCREEN_WIDTH - 30, pacman_x))
    pacman_y = max(0, min(SCREEN_HEIGHT - 30, pacman_y))

    # Animation toggle
    animation_toggle = not animation_toggle
    PACMAN = PACMAN_OPEN if animation_toggle else PACMAN_CLOSED

    # Draw dots
    for dot in dots:
        screen.blit(DOT, (dot["x"], dot["y"]))

    # Collision detection with dots
    for dot in dots[:]:
        if pygame.Rect(pacman_x, pacman_y, 30, 30).colliderect(pygame.Rect(dot["x"], dot["y"], 10, 10)):
            dots.remove(dot)
            score += 10

    # Draw ghosts and move them
    for ghost in ghosts:
        ghost["x"] += ghost["dx"]
        ghost["y"] += ghost["dy"]

        # Bounce ghosts off walls
        if ghost["x"] <= 0 or ghost["x"] >= SCREEN_WIDTH - 30:
            ghost["dx"] *= -1
        if ghost["y"] <= 0 or ghost["y"] >= SCREEN_HEIGHT - 30:
            ghost["dy"] *= -1

        # Draw ghost
        screen.blit(GHOST, (ghost["x"], ghost["y"]))

        # Collision detection with ghosts
        if pygame.Rect(pacman_x, pacman_y, 30, 30).colliderect(pygame.Rect(ghost["x"], ghost["y"], 30, 30)):
            running = False  # End game on collision

    # Draw Pac-Man
    screen.blit(PACMAN, (pacman_x, pacman_y))

    # Display score
    score_text = font.render(f"Score: {score}", True, WHITE)
    screen.blit(score_text, (10, 10))

    # Check if all dots are eaten
    if not dots:
        win_text = font.render("You Win!", True, WHITE)
        screen.blit(win_text, (SCREEN_WIDTH // 2 - 50, SCREEN_HEIGHT // 2))
        pygame.display.flip()
        pygame.time.wait(2000)
        running = False

    # Update the display
    pygame.display.flip()

    # Frame rate
    clock.tick(10)

# Quit the game
pygame.quit()
sys.exit()
