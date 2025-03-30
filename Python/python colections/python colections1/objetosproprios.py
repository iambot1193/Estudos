class ContaCorrente:
    def __init__(self, codigo):
        self.codigo = codigo
        self.saldo = 0

    def deposita(self, valor):
        self.saldo += valor

    def __str__(self): #substitui o print, quando usar o print vai ser executado a linha abaixo
        return f"[>>Código {self.codigo} Saldo {self.saldo}<<]"

    def deposita_todas(contas):
        for conta in contas:
            conta.deposita(100)


