# -*- coding: utf-8 -*-

lista  = [6, 10, 4, 21, 9]
iMaior = 0
iMenor = 0

for index, item in enumerate(lista):

    if lista[index] > lista[iMaior]:
        iMaior = index

    if lista[index] < lista[iMenor]:
        iMenor = index

#
# Testes
#
assert iMaior == 3
assert iMenor == 2
