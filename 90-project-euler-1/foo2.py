# -*- coding: utf-8 -*-

def soma_multiplos_abaixo_de(limite):
    sum = 0
    for i in range(limite):
        if i%3 == 0 or i%5 == 0:
            sum += i
    return sum

#
# Resultado
#
print( soma_multiplos_abaixo_de(1000) )