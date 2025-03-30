import requests
from acesso_cep import BuscarEndereco

cep = 44556677
objeto_cep = BuscarEndereco(cep)
print(objeto_cep)

r = requests.get("https://viacep.com.br/ws/01001000/json/")
print(r)