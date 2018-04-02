# -*- coding: utf-8 -*-

#
# Função mmc
#
def mmc(num1, num2):
    a = num1
    b = num2

    resto = None
    while resto is not 0:
        resto = a % b
        a  = b
        b  = resto

    return (num1 * num2) / a

#
# Teste
#
# 2 * 2 * 3 * 5 = 60
assert 60 == mmc(12, 20)
