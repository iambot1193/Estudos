class Usuario:
  def __init__(self, nome, idade):
    self.nome = nome
    self.idade = idade

snker = Usuario("Snker", 33)
eu = Usuario("Eu", 10)
jou = Usuario("jou", 25)

usuarios = [snker, eu, jou]

for usuario in usuarios:
    print(usuario.idade)
