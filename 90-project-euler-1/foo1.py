# -*- coding: utf-8 -*-

def soma_multiplos_abaixo_de(limite):
    k = list(range(limite))
    x = list()
    for i in k:
        if i%3 == 0 or i%5 == 0:
            x.append(i)
        else:
            continue
    return sum(x)

#
# Resultado
#
print( soma_multiplos_abaixo_de(1000) )