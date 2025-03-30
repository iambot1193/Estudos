
numero = 42
numero_de_tentativas = 3

while (numero_de_tentativas > 0):

    print("numero de chances sobrando:{} ".format(numero_de_tentativas))
    chute_str = input("digite um número: ")
    chute = int(chute_str)

    acertou = chute == numero
    alto = chute > numero
    baixo = chute < numero

    if (alto):
        print("errou! Chutou alto")
    else:
        if (baixo):
            print("errou! Chutou baixo")
        elif (acertou):
            print("acertou!")

    numero_de_tentativas -= 1

print("Fim de jogo")