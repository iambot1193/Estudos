from datetime import datetime, timedelta

class DatasBr:
    def __init__(self):
        self.momento_cadastro = datetime.today()

    def mes_cadastro(self):
        meses_do_ano=[
            "janeiro","fevereiro","março","abril",
            "maio","junho","julho","agosto","setembro",
            "outubro","novembro","dezembro"



        ]
        mes_cadatro = self.momento_cadastro.month -1
        return meses_do_ano[mes_cadatro]#ou pode se colocar um espaço vazio nas opções da lista

    def dia_semana(self):
        dia_semana = ["segunda", "terça", "quarta", "quinta", "sexta", "sábado", "domingo"]
        dia_semananum = self.momento_cadastro.weekday()
        return print(dia_semana[dia_semananum])

    def tempo_numero(self):
        hj_numero = self.momento_cadastro.strftime("%d/%m/%Y")
        return print(hj_numero)

    def tempo_letra(self):
        dia_semana = ["segunda", "terça", "quarta", "quinta", "sexta", "sábado", "domingo"]
        meses_do_ano = ["janeiro", "fevereiro", "março", "abril",
                        "maio", "junho", "julho", "agosto", "setembro",
                        "outubro", "novembro", "dezembro"]
        dia_semananum = self.momento_cadastro.weekday()
        mes_cadatro = self.momento_cadastro.month - 1
        ano = self.momento_cadastro.strftime("%Y")
        dia_numero = self.momento_cadastro.strftime("%d")
        return print(f'{dia_semana[dia_semananum]}, {dia_numero}\{meses_do_ano[mes_cadatro]}\{ano}')

