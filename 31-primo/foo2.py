# -*- coding: utf-8 -*-

#
# Função que descobre se o número é ou não primo.
#
def ehPrimo(num):
    divisores = 0
    for i in range(1, num + 1):
        if num % i == 0 :
            divisores = divisores + 1

    if divisores == 2:
        return True
    else:
        return False


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
