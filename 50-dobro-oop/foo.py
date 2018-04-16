# -*- coding: utf-8 -*-

#
# Classe
#
class Calc(object):

    # o dobro de um número qualquer
    def dobro(self, num):
        return num * 2


#
# Teste
#
calc = Calc()
assert 10 == calc.dobro(5)
