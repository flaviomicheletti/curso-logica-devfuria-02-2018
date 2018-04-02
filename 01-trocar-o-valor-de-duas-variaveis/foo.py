# -*- coding: utf-8 -*-

#
# Variáveis
#
a = 999
b = 555

#
# Sua lógica
#
temp = a
a = b
b = temp


#
# Testes
#
assert a == 555
assert b == 999