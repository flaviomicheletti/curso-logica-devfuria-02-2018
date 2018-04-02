# -*- coding: utf-8 -*-

def somarDigitos():
    numStr = map(int, str(2015))
    soma = 0

    for n in numStr:
        soma += n

    return soma


assert 8 == somarDigitos(), "a soma dos dígitos de 2015 devem ser 8"
# assert 15 == somarDigitos(456), "a soma dos dígitos de 456 devem ser 15"
