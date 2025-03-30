numero = 42

numerotxt =  input("digite um número: ")
numerochute = int(numerotxt)

if (numerochute > numero):
    print("errou! Chutou alto")
else:
    if (numerochute < numero):
        print("errou! Chutou baixo")
    if (numerochute == numero):
        print("acertou!")



