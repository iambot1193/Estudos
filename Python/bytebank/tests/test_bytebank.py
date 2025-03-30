from codigo.bytebank import Funcionario
class TestClass:
    def test_quando_idade_recebe_13_03_2000_deve_retornar_22(self):
        entrada = '13/03/2000'
        esperado =  24
        # Given

        funcionario_teste = Funcionario('Teste', entrada, 1111)
        resultado = funcionario_teste.idade()
        #When

        assert resultado == esperado
        #Then

    def test_quando_sobrenome_recebe_Lucas_Carvalho_deve_retornar_Carvalho(self):

        entrada = ' Lucas Carvalho '
        esperado = 'Carvalho'

        lucas = Funcionario(entrada, '11/11/2000', 1111)
        resultado = lucas.sobrenome()

        assert resultado == esperado

    def test_quando_decressimo_salario_recebe_100000_deve_retornar_90000(self):
        entrada_salario = 100000
        entrada_nome = 'Paulo Bragança'
        esperado = 90000

        funcionario_teste = Funcionario(entrada_nome, '11/11/2000', entrada_salario)
        funcionario_teste.decressimo_salario()
        resultado = funcionario_teste.salario

        assert resultado == esperado

