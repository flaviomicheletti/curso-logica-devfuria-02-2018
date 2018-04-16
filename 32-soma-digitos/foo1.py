# -*- coding: utf-8 -*-

#
# Código bugado..
#

def somarDigitos(numero):
    soma = 0

    while numero is not 0:
        soma   += numero % 10
        numero  = numero / 10

    return soma


assert 8 == somarDigitos(2015), "a soma dos dígitos de 2015 devem ser 8"
assert 15 == somarDigitos(456), "a soma dos dígitos de 456 devem ser 15"


"""
O mais legal é que o código acima possui um bug, entra em loop infinito.

Você consegue dizer o porquê?

No momento em que atribuímos numero / 10 à variável numero a linguagem C converte
o valor decimal para inteiro, pois o tipo da variável numero é int. Só que essa
conversão implica em um arredondamento… e esse arredondamento está implícito em
nossa lógica ao resolver o problema desse jeito.
"""