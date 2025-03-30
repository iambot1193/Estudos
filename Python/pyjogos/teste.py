import pygame

pygame.init()

screen = pygame.display.set_mode((400, 300))
pygame.display.set_caption("Fechar em breve")
font = pygame.font.Font(None, 50)

time_limit = 5000  # Tempo limite em milissegundos (10 segundos)
start_time = pygame.time.get_ticks()

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            exit()

    # Tempo restante
    remaining_time = max(0, (time_limit - (pygame.time.get_ticks() - start_time)) // 1000)

    # Atualizar tela com o tempo restante
    screen.fill((0, 0, 0))  # Fundo preto
    text = font.render(f"{remaining_time}s", True, (255, 255, 255))
    screen.blit(text, text.get_rect(center=(200, 150)))
    pygame.display.flip()

    # Fechar após o tempo limite
    if remaining_time == 0:
        break

pygame.quit()
