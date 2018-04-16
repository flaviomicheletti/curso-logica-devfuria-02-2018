# -*- coding: utf-8 -*-

def somarDigitos():
    numStr = [int(i) for i in str(2015)]
    soma = 0

    for n in numStr:
        soma += n

    return soma


assert 8 == somarDigitos(), "a soma dos dígitos de 2015 devem ser 8"