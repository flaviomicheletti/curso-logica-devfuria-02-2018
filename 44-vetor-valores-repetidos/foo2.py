# -*- coding: utf-8 -*-

#
# Sua lógica...
#
def removerDuplicados(duplicado):
    _lis = []

    for x in duplicado:
        if x not in _lis:
            _lis.append(x)

    return _lis

def haDuplicados(lista):
    if len(lista) != len(removerDuplicados(lista)):
        return True
    else:
        return False





#
# Testes
#
assert haDuplicados([100, 200, 300, 300, 500])
assert not haDuplicados([100, 200, 300, 400, 500])
