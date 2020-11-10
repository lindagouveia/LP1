nota = int(input('Digite uma nota entre 0 e 10: '))

while True:

    if (nota > 0) and (nota < 10):

        print('nota valida')

        break

    else:

        print('nota invalida')
        nota = int(input('Digite uma nota entre 0 e 10: '))