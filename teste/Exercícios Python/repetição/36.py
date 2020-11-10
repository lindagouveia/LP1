while True:

    n = int(input('Quantidade de clientes: '))
    cod = int(input('codigo: '))
    if (cod == 0):

        print('Fim')
        break
    peso = float(input('peso: '))
    h = float(input('altura: '))
    i = 1
    maiorh = h
    menorh = h
    maiorp = peso
    menorp = peso

    if h > maiorh:

        maiorh = h

    elif h < menorh:

        menorh = h

    elif peso > maiorp:

        maiorp = peso

    elif peso < menorp:

        menorp = peso


print(f'Maior altura: {maiorh}    Menor altura: {menorh}     Maior peso: {maiorp}     Menor peso: {menorp}')
