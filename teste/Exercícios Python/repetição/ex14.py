cont = 0
cont2 = 0

for i in range (0, 4):

    n = int(input('Digite um numero: '))

    if (n % 2 == 0):

        cont = cont + 1

    else:

        cont2 = cont2 + 1


print(f'Pares: {cont}  Impares: {cont2}')