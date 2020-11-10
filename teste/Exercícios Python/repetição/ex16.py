#Faça um programa que, dado um conjunto de N números, determine o menor valor, o maior valor e a soma dos valores

qntd = int(input('Quantidade de numeros: '))
n = int(input('Numero: '))
maior = n
menor = n

for i in range(1, qntd):

    n = int(input('Numero: '))

    if (n > maior):

        maior = n

    elif (n < menor):

        menor = n

print (maior, menor)