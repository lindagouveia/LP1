#ao final o programa devera verificar se a média de idade da turma varia entre 0 e 25,26 e 60 e maior que 60;
# e então, dizer se a turma é jovem, adulta ou idosa, conforme a média calculada.

n = int(input('Quantidade de pessoas: '))
i = 1

while i <= n:

    idade = int(input(f'idade {i}: '))
    i += 1

    if (idade >= 0) and (idade <= 25):

        print('Jovem')

    elif (idade >= 26) and (idade <= 60):

        print('Adulto')

    else:

        print('idosa')
