from collections import Counter

texto1 = "9219414146"

Counter(texto1)

aparicoes = Counter(texto1.lower())
total_de_caracteres = sum(aparicoes.values())
for letra, frequencia in aparicoes.items():
    tupla = ((letra, (frequencia / total_de_caracteres)*100))
    tuplar_format = "{:.2f}".format(tupla[1])
    print(f'{tupla[0]} , {tuplar_format}%')

print(f'total de caracteres = {total_de_caracteres}')

