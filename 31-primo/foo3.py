# -*- coding: utf-8 -*-

#
# Função que descobre se o número é ou não primo.
#
def ehPrimo(num):
    if num < 2:
        return False
    else:
        for n in range(2, num):
            if num % n == 0:
               return False
        return True


#
# Testes
#

assert ehPrimo(2)
assert ehPrimo(3)
assert ehPrimo(5)
assert ehPrimo(7)
assert ehPrimo(11)
assert ehPrimo(13)

assert not ehPrimo(4)
assert not ehPrimo(6)
assert not ehPrimo(8)
assert not ehPrimo(9)
assert not ehPrimo(10)
assert not ehPrimo(12)
