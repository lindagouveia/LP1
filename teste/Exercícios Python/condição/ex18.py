#Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link
# de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).

tamanho = float(input('Tamanho do arquivo em MB: '))

velocidade = float(input('Velocidade do link em Mbps: '))

tempo = (tamanho/velocidade)

minutos = tempo/60

print('Tempo aproximado do download:', minutos, 'minutos')