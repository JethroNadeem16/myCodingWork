import pygame
import math
import random

# Initialize pygame
pygame.init()

# Screen dimensions
WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Asteroids")

# Colors
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)

# Clock for controlling frame rate
clock = pygame.time.Clock()
FPS = 60

# Font for score
font = pygame.font.Font(None, 36)

# Spaceship class
class Spaceship:
    def __init__(self):
        self.x = WIDTH // 2
        self.y = HEIGHT // 2
        self.angle = 0
        self.speed = 0
        self.radius = 15
        self.vel_x = 0
        self.vel_y = 0

    def rotate(self, direction):
        self.angle += direction * 5

    def accelerate(self):
        self.vel_x += math.cos(math.radians(self.angle)) * 0.2
        self.vel_y += math.sin(math.radians(self.angle)) * 0.2

    def move(self):
        self.x += self.vel_x
        self.y += self.vel_y

        # Wrap around screen edges
        self.x %= WIDTH
        self.y %= HEIGHT

    def draw(self):
        # Calculate the ship's points
        tip_x = self.x + math.cos(math.radians(self.angle)) * self.radius
        tip_y = self.y + math.sin(math.radians(self.angle)) * self.radius
        left_x = self.x + math.cos(math.radians(self.angle + 120)) * self.radius
        left_y = self.y + math.sin(math.radians(self.angle + 120)) * self.radius
        right_x = self.x + math.cos(math.radians(self.angle - 120)) * self.radius
        right_y = self.y + math.sin(math.radians(self.angle - 120)) * self.radius

        pygame.draw.polygon(screen, WHITE, [(tip_x, tip_y), (left_x, left_y), (right_x, right_y)])

# Asteroid class
class Asteroid:
    def __init__(self, x, y, size):
        self.x = x
        self.y = y
        self.size = size
        self.radius = size * 10
        self.vel_x = random.uniform(-2, 2)
        self.vel_y = random.uniform(-2, 2)

    def move(self):
        self.x += self.vel_x
        self.y += self.vel_y

        # Wrap around screen edges
        self.x %= WIDTH
        self.y %= HEIGHT

    def draw(self):
        pygame.draw.circle(screen, WHITE, (int(self.x), int(self.y)), self.radius, 1)

# Bullet class
class Bullet:
    def __init__(self, x, y, angle):
        self.x = x
        self.y = y
        self.angle = angle
        self.speed = 5
        self.lifetime = 60

    def move(self):
        self.x += math.cos(math.radians(self.angle)) * self.speed
        self.y += math.sin(math.radians(self.angle)) * self.speed

        # Wrap around screen edges
        self.x %= WIDTH
        self.y %= HEIGHT

        self.lifetime -= 1

    def draw(self):
        pygame.draw.circle(screen, WHITE, (int(self.x), int(self.y)), 3)

# Initialize game objects
ship = Spaceship()
asteroids = [Asteroid(random.randint(0, WIDTH), random.randint(0, HEIGHT), random.randint(1, 3)) for _ in range(5)]
bullets = []

# Initialize score
score = 0

# Game loop
running = True
while running:
    screen.fill(BLACK)

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Controls
    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT]:
        ship.rotate(-1)
    if keys[pygame.K_RIGHT]:
        ship.rotate(1)
    if keys[pygame.K_UP]:
        ship.accelerate()
    if keys[pygame.K_SPACE]:
        if len(bullets) < 10:  # Limit bullets on screen
            bullets.append(Bullet(ship.x, ship.y, ship.angle))

    # Update game objects
    ship.move()
    for asteroid in asteroids:
        asteroid.move()
    for bullet in bullets[:]:
        bullet.move()
        if bullet.lifetime <= 0:
            bullets.remove(bullet)

    # Collision detection
    for bullet in bullets[:]:
        for asteroid in asteroids[:]:
            distance = math.hypot(bullet.x - asteroid.x, bullet.y - asteroid.y)
            if distance < asteroid.radius:
                bullets.remove(bullet)
                asteroids.remove(asteroid)
                score += 10  # Increment score
                if asteroid.size > 1:
                    # Split asteroid into smaller pieces
                    asteroids.append(Asteroid(asteroid.x, asteroid.y, asteroid.size - 1))
                    asteroids.append(Asteroid(asteroid.x, asteroid.y, asteroid.size - 1))
                break

    # Draw game objects
    ship.draw()
    for asteroid in asteroids:
        asteroid.draw()
    for bullet in bullets:
        bullet.draw()

    # Draw score
    score_text = font.render(f"Score: {score}", True, WHITE)
    screen.blit(score_text, (10, 10))

    pygame.display.flip()
    clock.tick(FPS)

pygame.quit()
