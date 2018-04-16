# -*- coding: utf-8 -*-

#
# função
#
def contagemRegressiva(n):
    if n == 0:
        print('Decolar!')
    else:
        print(n)
        contagemRegressiva(n-1)

#
# executando
#
contagemRegressiva(5)
