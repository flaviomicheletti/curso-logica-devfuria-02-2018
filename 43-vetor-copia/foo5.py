# -*- coding: utf-8 -*-

def copiarLista(lista1):
    nova_lista = []
    for i in lista1:
        nova_lista.append(i)
    return nova_lista

#
# Testes
#
assert [10, 20, 30] == copiarLista([10, 20, 30])