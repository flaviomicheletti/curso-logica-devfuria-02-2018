# -*- coding: utf-8 -*-

#
# Seu código
#
def somarLista(lista):
    soma = 0
    for n in lista:
        soma += n
    return soma

#
# Seu teste
#
lista = [10, 20, 30, 0]
assert 60 == somarLista(lista)
