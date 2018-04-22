# -*- coding: utf-8 -*-

def soma_multiplos_abaixo_de(limite):
    return sum(filter(lambda x : (x%3 == 0) or (x%5 == 0), range (limite)))

#
# Resultado
#
print( soma_multiplos_abaixo_de(1000) )