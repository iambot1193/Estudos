def jogar():

    import random


    numero = int(random.randrange(1,101))
    rodada = 1
    numero_de_tentativas = 0
    pontos = 1000

    while(numero_de_tentativas== 0):
        print("fácil(1) médio(2) dificíl(3)")
        dificuldade = int(input("digite a dificuldade: "))

        if(dificuldade == 1):
            numero_de_tentativas = 50
        elif(dificuldade == 2):
            numero_de_tentativas = 25
        elif(dificuldade == 3):
            numero_de_tentativas = 10
        else: print("erro!")


    for rodade in range(1,numero_de_tentativas+1):

        print("numero de chances sobrando, {} de {} ".format(rodada ,numero_de_tentativas))
        chute_str = input("digite um número entre entre 1 e 100: ")
        chute = int(chute_str)
        #print(numero)

        acertou = chute == numero
        alto = chute > numero
        baixo = chute < numero

        pontos_perdidos = abs(numero - chute)  # abs = desconsiderar o sinal do numero, -/+ | é uma função build-in
        pontos = pontos - pontos_perdidos

        if (chute <1 or chute >100):
            print("chute um numero de 1 a 100!!!!")
            continue


        if(acertou):
            print("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
            print("VOCÊ GANHOUUUUUUUUUU")
            print("Você fez {} pontos".format(pontos))
            print("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
            break
        else:
            if(alto):
                print("")
                print(">>>>>>>>>>>>>>>>>>")
                print("Errou! chutou alto")
                print(">>>>>>>>>>>>>>>>>>")
                print("")


            elif(baixo):
                print("")
                print("<<<<<<<<<<<<<<<<<<<")
                print("Errou! chutou baixo")
                print("<<<<<<<<<<<<<<<<<<<")
                print("")



        rodada = rodada+1

    print("Fim de jogo")

if(__name__ == "__main__"): #serve para executar memso quando não chamamos a função principal, jogar()
    jogar()