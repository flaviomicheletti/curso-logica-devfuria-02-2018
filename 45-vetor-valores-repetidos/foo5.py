# -*- coding: utf-8 -*-

# Descobre se há duplicados em duas etapas.
# 1- remove os duplicados `set()`
# 2- compara se os tamanhos foram alterados
def haDuplicados(lista):
    return len(lista) != len(set(lista))


#
# Testes
#
assert haDuplicados([100, 200, 300, 300, 500])
assert not haDuplicados([100, 200, 300, 400, 500])
