print("*********************************************")
print("Bem vindo ao jogo de adivinhacion", end="!\n")
print("*********************************************")

numero_secreto = 42

chute = input("digite um numero: ")
print("você chutou ",chute)

numero = int(chute)
if(numero_secreto==numero):
    print("Acertou!")
else:
    print("Errou!")



