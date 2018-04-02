# -*- coding: utf-8 -*-

#
# Sua lógica...
#
def haDuplicados(lista):
    if len(lista) != len(set(lista)):
        return True
    else:
        return False




#
# Testes
#
assert haDuplicados([100, 200, 300, 300, 500])
assert not haDuplicados([100, 200, 300, 400, 500])
