
class Conta:

    def __init__(self, numero, titular, saldo, limite): #é um objeto
        print("Construindo objeto ... {}".format(self))
        self.__numero = numero #colocando 2 __ o atributo fica privado
        self.__titular = titular
        self.__saldo = saldo
        self.__limite = limite

    def extrato(self):
        print("O saldo do {} é {}".format(self.__titular, self.__saldo))

    def depositar(self, valor): # é um método
        self.__saldo += valor

    def __pode_sacar(self, valor_a_sacar):
        valor_disponivel = self.__saldo + self.__limite
        return valor_a_sacar <= valor_disponivel

    def sacar(self, valor):
        if(self.__pode_sacar(valor)):
            self.__saldo -= valor
        else:
            print("o valor {} passou o limite!".format(valor))

    def transferir(self, valor, destino):
        self.sacar(valor)
        destino.depositar(valor)

    ###########################################
    @property
    def saldo(self):
        return self.__saldo

    @property
    def titular(self):
        return self.__titular

    @property
    def limite(self):
        return self.__limite

    @limite.setter
    def limite(self, limite):
        self.__limite = limite

    @staticmethod
    def codigo_banco(self):
        return "001"

    @staticmethod
    def codigos_bancos():
        return {'BB': '001', 'Caixa': '104', 'Bradesco': '237'}
    ############################################
