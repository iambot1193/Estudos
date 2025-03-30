


numero = 42
numero_de_tentativas = 3
rodada = 1

for rodade in range(1,numero_de_tentativas+1):

    print("numero de chances sobrando, {} de {} ".format(rodada ,numero_de_tentativas))
    chute_str = input("digite um número entre entre 1 e 100: ")
    chute = int(chute_str)

    acertou = chute == numero
    alto = chute > numero
    baixo = chute < numero

    if (chute <1 or chute >100):
        print("chute um numero de 1 a 100!!!!")
        continue


    if (alto):
        print("errou! Chutou alto")
    else:
        if (baixo):
            print("errou! Chutou baixo")
        elif (acertou):
            print("acertou!!!!!!!!")
            break

    rodada = rodada+1

print("Fim de jogo")