########################################################################
# tupla são usadas para dar um valor, separar valores
class ContaCorrente:
    def __init__(self, codigo):
        self.codigo = codigo
        self.saldo = 0

def __str__(self): #substitui o print, quando usar o print vai ser executado a linha abaixo
    return f"[>>Código {self.codigo} Saldo {self.saldo}<<]"

#gui = ('gui', 100, 23)
#liza = ('liza', 200, 56)  # valor é imutável!!
#leandro = (29, 103, 'lea')  # ruim!

conta_gui = ContaCorrente(132)
conta_dan =  ContaCorrente(1232)

conta_dan = ('Daniel', 231, 1999)
conta_gui = ('Guilherme', 321, 1999)
#conta_gui.append #não funciona pois tupla não é mutável

def deposita(conta):
    novo_saldo = conta[1] + 100
    codigo = conta[0]
    print(conta)
    return (codigo, novo_saldo)

conta_dan = deposita(conta_dan)
print(conta_dan)

usuarios = [conta_dan, conta_gui]
print(usuarios)
usuarios.append(('Paulo', 540, 1999))
print(usuarios)

