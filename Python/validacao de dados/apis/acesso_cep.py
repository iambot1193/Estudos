import requests
class BuscarEndereco:

    def __init__(self, cep):
        cep = str(cep)
        if self.cep_e_valido(cep):
            self.cep = cep
        else:
            raise ValueError("CEP é inválido!")

    def __str__(self):
        return self.format_cep()

    def cep_e_valido(self, cep):
        if len(cep) == 8:
            return True
        else:
            return False

    def format_cep(self):
        return (f'{self.cep[:4]}{self.cep[4:]}')

    def acessa_via_request(self):
        url = (f"https://viacep.com.br/ws/{self.cep}/json/")
        r = requests.get(url)
        return r