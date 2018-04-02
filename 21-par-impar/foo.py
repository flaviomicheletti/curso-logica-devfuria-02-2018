# -*- coding: utf-8 -*-

#
# Função que descobre se um número é par ou ímpar
#
def ehPar(numero):
	if numero % 2 == 0:
		return True
	else:
		return False

#
# Testes
#
assert ehPar(8)
assert not ehPar(7)
assert ehPar(0)
