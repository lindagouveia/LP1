#Peça para cada eleitor votar e ao final mostrar o número de votos de cada candidato.

n = int(input('Total de eleitores: '))
i = 1
soma1 = 0
soma2 = 0
soma3 = 0

while i <= n:

    v = int(input('Vote no candidato 1, 2 ou 3: '))

    if v == 1:

        soma1 = soma1 + 1

    elif v == 2:

        soma2 = soma2 + 1

    else:

        soma3 = soma3 + 1

    i = i + 1

print(f'Votos no candidato 1: {soma1}   Votos no candidato 2: {soma2}    Votos no candidato 3: {soma3}')

