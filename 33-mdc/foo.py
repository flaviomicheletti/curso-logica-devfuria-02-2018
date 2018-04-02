# -*- coding: utf-8 -*-

#
# Função que calcula o MDC entre dois números
#
def mdc(num1, num2):
    resto = None
    while resto is not 0:
        resto = num1 % num2
        num1  = num2
        num2  = resto

    return num1


#
# Testes
#
assert 3 == mdc(24, 9)
assert 10 == mdc(30, 20)
