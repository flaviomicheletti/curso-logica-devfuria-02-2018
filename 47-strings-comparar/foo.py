# -*- coding: utf-8 -*-

#
# Seu código
#
def compararString(a, b):
    i = 0
    while i < len(a):
        if a[i] != b[i]:
            return False
            break
        i += 1
    return True

#
# Seu teste
#
cor1 = "laranja"
cor2 = "amarelo"
assert not compararString(cor1, cor2)
assert compararString(cor1, cor1)
