# -*- coding: utf-8 -*-

def eh_multiplo_de(numero, multiplo):
    return numero % multiplo == 0

def soma_multiplos_abaixo_de(limite):
    soma = 0
    for numero in range(limite):
        if eh_multiplo_de(numero, 3) or eh_multiplo_de(numero, 5):
            soma += numero
    return soma

#
# Testes
#
assert eh_multiplo_de(3, 3)
assert not eh_multiplo_de(4, 3)
assert eh_multiplo_de(5, 5)

assert 23 == soma_multiplos_abaixo_de(10) # 3 + 5 + 6 + 9
assert 78 == soma_multiplos_abaixo_de(20) # 3 + 5 + 6 + 9 + 10 + 12 + 15 + 18

#
# Resultado
#
print( soma_multiplos_abaixo_de(1000) )