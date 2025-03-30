class Programa:  # herança de classe é usado para "economizar" assim deixando o código mais legivel
    def __init__(self, nome, ano):
        self._nome = nome
        self.ano = ano
        self._likes = 0

    @property
    def likes(self):
        return self._likes

    def dar_like(self):
        self._likes += 1


@property
def nome(self):
    return self._nome


@nome.setter
def nome(self, novo_nome):
    self._nome = novo_nome.title()


def imprime(self):
    print(f' {self._nome} - {self.ano} - {self._likes} Likes')


class Filmes(Programa):
    def __init__(self, nome, ano, duracao):
        super().__init__(nome, ano)
        self.duracao = duracao

    # transformando a informação de filmes para texto
    def __str__(self):
        return f'{self._nome} - {self.ano} - {self.duracao} - {self.likes}'


class Series(Programa):
    def __init__(self, nome, ano, temporadas):
        super().__init__(nome, ano)
        self.temporadas = temporadas

    # transformando a informação de séries para texto
    # representação textual de um objeto
    def __str__(self):
        return f'{self._nome} - {self.ano} - {self.temporadas} - {self.likes}'


class Playlist():
    def __init__(self, nome, programas):
        self.nome = nome
        self._programas = programas

    def __getitem__(self, item): #transforma em iterable
        return self._programas[item]

    @property
    def listagem(self):
        return self._programas

    def __len__(self):
        return len(self._programas)     #método
    # conta o numero de programas dentro da lista
    # LEN

############################
vingadores = Filmes("vingadores", 2018, 160)
tmep = Filmes("Todo mundo em pânico", 1999, 100)        #series e filmes
Demolidor = Series("demolidor", 2016 , 2)
umbrela_academy = Series("Umbrela Academy", 2020, 3)

########################
Demolidor.dar_like()
tmep.dar_like()
vingadores.dar_like()               #likes
umbrela_academy.dar_like()
umbrela_academy.dar_like()
###################################


filmeseseries = [vingadores, umbrela_academy, tmep, Demolidor]
mplaylist = Playlist('fim de semana', filmeseseries)


for Programa in mplaylist.listagem:
    print(Programa)

print(vingadores in mplaylist)

print(f'Tamanho: {len(mplaylist.listagem)}')
#esqueci do listagem
print(vingadores in mplaylist)
