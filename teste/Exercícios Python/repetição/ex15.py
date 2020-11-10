n = int(input('Digite um número de termo para sequência Fibonacci: '))

cont = 1
n1 = 0
n2 = 1
n3 = 1

while cont <= n:
     print(n1, end='-')
     cont += 1
     n3 = n2 + n1
     n1 = n2
     n2 = n3

     if n1 > 500:
          print(n1, end='-')

          break

print('Fim')