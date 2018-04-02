# -*- coding: utf-8 -*-
import math

#
# Retorna o valor de delta
#
def delta(a, b, c):
    return b * b -4 * a * c

#
# Retorna o valor da primeira raiz
#
def raiz1(a, b, c):
    return (-b + math.sqrt(delta(a, b, c))) / 2 * a

#
# Retorna o valor da segunda raiz
#
def raiz2(a, b, c):
    return (-b - math.sqrt(delta(a, b, c))) / 2 * a

#
# Testes
#
a = 1
b = 0
c = -16

assert 64 == delta(a, b, c)
assert  4 == raiz1(a, b, c)
assert -4 == raiz2(a, b, c)
