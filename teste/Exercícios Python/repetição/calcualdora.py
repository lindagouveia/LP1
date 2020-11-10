while True:

    dig = int(input('digite 1 para soma, 2 para subtracao, 3 para multiplicacao, 4 para divisao ou 5 para sair: '))

    if dig == 5:

        break

    n1 = float(input('primeiro numero: '))
    n2 = float(input('segundo numero: '))

    if dig == 1:

        valor = n1 + n2

        print(valor)

    elif dig == 2:

        valor = n1 - n2
        print(valor)

    elif dig == 3:

        valor = n1 * n2
        print(valor)

    elif dig == 4:

        valor = n1/n2
        print(valor)

    else:

        print('digito e valor nao encontrado')
