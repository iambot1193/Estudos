import  forca
import adivinhacion

print("(1) forca (2)jogo da adivinhação")
jogo_numero = input("Escolha o jogo: ")
jogo_numero = int(jogo_numero)
if (jogo_numero == 1):
    print("executar jogo da forca!")
    forca.jogar()
elif(jogo_numero == 2):
    print("executar jogo da adivinhação!")
    adivinhacion.jogar()
else:
    print("erro tente novamente.")
