
    class Cliente:

        def __init__(self, nome):
            self.__nome = nome #arquivo.nome = nome colocado no console


        @property #quando colocar cliente.nome vai rodar essa linha de código
        #vai funcionar como se estivesse usando o comando novamente
        def nome(self):
            print("chamando @property nome()")
            self.__nome.title() #.title() serve para colocar a primeira letra em maiúsculo

         #continua com a sintaxe como se fosse acesso direto, a sintaxe continua simples
        @nome.setter
        def nome(self, nome):
            print("chamando setter nome()")
            self.__nome = nome
