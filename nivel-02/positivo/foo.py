# -*- coding: utf-8 -*-

# Função que descobre se um número é positivo ou negativo
#
# retornará 1 caso positivo
# retornará 0 caso negativo
#
def ehPositivo(numero):
    if numero >= 0:
    	return 1
    else:
        return 0

#
# Seus testes
#
assert ehPositivo(100) == 1
assert ehPositivo(0) == 1
assert ehPositivo(-100) == 0
