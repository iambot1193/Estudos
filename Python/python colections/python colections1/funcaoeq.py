class ContaSalario:



    def __init__(self, codigo):
      self._codigo = codigo
      self._saldo = 0

    #def __eq__(self,outro):
    # if type(outro) != ContaSalario:
    #return false
    #isinstance(ContaCorrente(3), Conta), filho/filha pai e mão = mesmo tipo

    def __eq__(self, outro):
      return self._codigo == outro._codigo

    def deposita(self, valor):
      self._saldo += valor

    def __str__(self):
      return "[>>Codigo {} Saldo {}<<]".format(self._codigo, self._saldo)
