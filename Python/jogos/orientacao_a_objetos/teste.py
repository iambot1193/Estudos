#numero
#titular
#saldo
#limite
#conta = {"numero" : 123, "titular": tiago, "saldo": 55.0, "limite" : 1000}

def criar_conta(numero, titular, saldo, limite): #falando as variaveis necessárias
    conta = {"numero" : numero, "titular": titular, "saldo": saldo, "limite" : limite} #atribuindo valor
    return conta #dando o valor para a variavel

def depositar(conta, valor):
    conta["saldo"] = conta["saldo"] + valor

def sacar(conta, valor):
    conta["saldo"] = conta["saldo"] - valor

def extrato(conta):
    print(conta["O saldo da conta é {}".format(conta["saldo"])])
