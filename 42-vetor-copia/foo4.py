# -*- coding: utf-8 -*-

def copiarLista(lista1):
    nova_lista = []
    for i in lista1:
        nova_lista.append(i)
    return nova_lista

#
# Será que as listas são iguais?
#
lista1 = [10, 20, 30]
lista2 = copiarLista(lista1)
assert lista1 == lista2
