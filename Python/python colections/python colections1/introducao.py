idade1 = 39
idade2 = 20
idade3 = 12

print(idade1)
print(idade2)
print(idade3)

idades = [20,51,34,24,65] #é uma lista
type(idades) #= lista

len(idades) #mostra quantos elementos tem
print(idades) #mostra todos os valores

print(idades[0]) #=20

idades.append(15) #adiciona o valor 15 no final da lista

for idade in idades:
    print(idade) #mostra todos os valores

idades.remove(34)# tira o valor 34

idades.clear() #remove todos os valores dentro

#É IMPORTANTE PROCURAR DOCUMENTAÇÃO
#!!!!!!!!!!!!
#!!!!!!!!!!!!!!
#!!!!!!!!!!!!
#!!!!!!!!!!!!!!

15 in idades #pergunta se o elemento esta dentro da lista-> if 15 in idades: print("algo")

idades.append()#adiciona valor no final
idades.insert() #insereo valor no lugar (index e valor)
##########################################################################################
idades.extend([23, 123, 22, 56]) #adiciona todos os valores colocados #############################################
idade_ano_que_vem = []#############################################
for idade in idades:                        #############################################
    idade_ano_que_vem.append(idades+1)

[(idade+1) for idade in idades]#############################################
 ##########################################################################

[(idade+1) for idade in idades if idade > 21]

    #ou

def proximo_ano(idade):
    return idade+1

[proximo_ano(idade) for idade in idades if idade>21]

def faz_processamento_de_views(lista):
    print(len(lista))

idades.clear()
idades = [16, 21, 19,  56, 40]
faz_processamento_de_views(idades)

