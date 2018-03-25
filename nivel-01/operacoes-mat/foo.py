# -*- coding: utf-8 -*-

# as funções são tão pequenas e tão concisas
# que nem precisam de comentários

def somar(num, add):
    return num + add

def subtrair(num, sub):
    return num - sub

def multiplicar(num, mult):
    return num * mult

def dividir(num, divisor):
    return num / divisor

#
# Testes
# 
assert 12 == somar(10, 2)
assert 8 == subtrair(10, 2)
assert 20 == multiplicar(10, 2)
assert 5 == dividir(10, 2)
