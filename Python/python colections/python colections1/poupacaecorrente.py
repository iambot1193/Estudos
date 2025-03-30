
class Conta:
    def __init__(self, codigo):
        self._codigo = codigo
        self._saldo = 0

    def deposita(self, valor):
        self._saldo += valor

    def __str__(self):
        return f"[>>Código: {self._codigo} Saldo: {self._saldo}<<]"

class ContaCorrente(Conta):
    def passarmes(self):
        self._saldo -= 2
class ContaPoupanca(Conta):
    def paasarmes(self):
        self._saldo *=1.01
        self._saldo -= 3

conta1 = ContaCorrente(1)#
conta1.deposita(1000)
conta1.passarmes()
print(conta1)


