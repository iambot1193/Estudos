import re


class ExtratorURL:
    def __init__(self, url):
        self.url = self.sanitizar_url(url)
        self.validar_url()

    def sanitizar_url(self, url):
        return url.strip()

    def validar_url(self):
        if not (self.url):
            raise ValueError("a sua url está vazia")

        padrao_url = re.compile('(http(s)?://)?(www.)?bytebank.com(.br)?/cambio')
        match = padrao_url.match(self.url)
        if not match:
            raise ValueError("A URL não é válida.")






    def get_base (self):
        indice_interrogacao = self.url.find('?')
        url_base = self[:indice_interrogacao]
        return url_base

    def get_parametros(self):
        indice_interrogacao = self.url.find('?')
        url_parametros = self.url[indice_interrogacao + 1:]
        return url_parametros

    def buscar_parametro(self, valor_buscado):
        parametro = self.get_parametros().find(valor_buscado)
        inicio_palavra = parametro + len(valor_buscado)+1
        indice_e_comercial = self.get_parametros().find('&', inicio_palavra)

        if indice_e_comercial == -1:
           valor = self.get_parametros()[parametro:]
        else:
           valor = self.get_parametros()[inicio_palavra:indice_e_comercial]
        return valor

    def __len__(self):
        return len(self.url)

    def __str__(self):
        return self.url + "\n" + "Parâmetros: " + self.get_parametros() + "\n" + "URL Base: " + self.get_base()

    def __eq__(self, other):
        return self.url == other.url



url = "bytebank.com/cambio?quantidade=100&moedaOrigem=dolar&moedaDestino=real"
extrator_url = ExtratorURL(url)


valor_quantidade = extrator_url.buscar_parametro("quantidade")
print(valor_quantidade)
print(f'O tamanho da URL é: ')

#is true = é exatamente a mesma coisa?
#true = é igual?

### DESAFIO ###
# Conversão de dólar para real
VALOR_DOLAR = 5.50  # 1 dólar = 5.50 reais
moeda_origem = url.buscar_parametro('moedaOrigem')
moeda_destino = url.buscar_parametro("moedaDestino")
quantidade = url.buscar_parametro("quantidade")

if moeda_origem == "real" and moeda_destino == "dolar":
    valor_conversao = int(quantidade) / VALOR_DOLAR
    print("O valor de R$" + quantidade + " reais é igual a $" + str(valor_conversao) + " dólares.")
elif moeda_origem == "dolar" and moeda_destino == "real":
    valor_conversao = int(quantidade) * VALOR_DOLAR
    print("O valor de $" + quantidade + " dólares é igual a R$" + str(valor_conversao) + " reais.")
else:
    print(f"Câmbio de {moeda_origem} para {moeda_destino} não está disponível.")


