# -*- coding: utf-8 -*-

def somarDigitos(numero):
    soma = 0

    while numero is not 0:
        soma   += numero % 10
        numero  = int(numero / 10) # <---- atenção

    return soma


assert 8 == somarDigitos(2015), "a soma dos dígitos de 2015 devem ser 8"
assert 15 == somarDigitos(456), "a soma dos dígitos de 456 devem ser 15"
