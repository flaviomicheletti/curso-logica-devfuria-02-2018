# -*- coding: utf-8 -*-

#
# Sua lógica...
#
def haDuplicados(lista):
    _lis = []

    # removendo duplicados
    for x in lista:
        if x not in _lis:
            _lis.append(x)

    # comparando os tamanhos
    if len(lista) != len(_lis):
        return True
    else:
        return False




#
# Testes
#
assert haDuplicados([100, 200, 300, 300, 500])
assert not haDuplicados([100, 200, 300, 400, 500])
