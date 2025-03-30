numero = 42

numerotxt =  input("digite um número: ")
numerochute = int(numerotxt)

acertou= numerochute == numero
alto = numerochute > numero
baixo = numerochute < numero


if (alto):
    print("errou! Chutou alto")
else:
    if (baixo):
        print("errou! Chutou baixo")
    if (acertou):
        print("acertou!")



