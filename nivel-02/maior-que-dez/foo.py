# -*- coding: utf-8 -*-

# Função que descobre se um número é ou não maior que 10
#
# retornará 1 caso seja maior
# retornará 0 caso seja menor
#
def ehMaiorQue10(valorQualquer):
    if valorQualquer > 10:
        return 1
    else:
        return 0

#
# Testes
#
assert 1 == ehMaiorQue10(17)
assert 0 == ehMaiorQue10(9)
