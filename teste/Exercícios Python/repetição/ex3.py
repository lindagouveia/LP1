while True:

    nome = input('nome: ')
    id = int(input('idade: '))
    sal = float(input('salario: '))
    sexo = input('sexo: ')
    ec = input('estado civil: ')

    if len(nome) > 3:

        print('nome valido')

    else:

        print('nome invalido')

    if (id > 0) and (id < 150):

        print('idade valida')

    else:

        print('idade invalida')

    if sal > 0:

        print('salario valido')

    else:

        print('salario invalido')

    if (sexo == 'f') or (sexo == 'm'):

        print('sexo valido')

    else:

        print('sexo invalido')

    if (ec == 's') or (ec == 'c') or (ec == 'v') or (ec == 'd'):

        print('estado civil valido')

    else:

        print('estado civil invalido')