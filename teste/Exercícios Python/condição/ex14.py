# João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso.
# Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João
# deverá pagar. Imprima os dados do programa com as mensagens adequadas.

peso = float(input('Peso dos peixes: '))

if(peso > 50):

    excesso = peso - 50
    multa = 4*excesso

    print('Excesso:', excesso, 'Multa a ser paga:', multa)

else:
    print('Sem excesso')

