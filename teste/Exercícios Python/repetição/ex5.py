popA =  int(input(f'Populacao A: '))
popB = int(input(f'Populacao B: '))

cresA = float(input(f'Crescimento A: '))
cresB = float(input(f'Crescimento B: '))

anos = 0

while (popA < popB):
    anos += 1
    popA = popA + (popA * cresA)
    popB = popB + (popB * cresB)

print("Após %i anos o país A ultrapassou o país B em número de habitantes." % anos)
print("País A: %.0f" % popA)
print("País B: %.0f" % popB)