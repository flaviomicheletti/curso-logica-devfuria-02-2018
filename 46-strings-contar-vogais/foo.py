# -*- coding: utf-8 -*-

#
# Função para contar quantidade de vogais de determinada string
#
def contarVogais(palavra):
    vogais = "aeiou"
    totalVogal = 0

    for letra in palavra:
        if letra in vogais:
            totalVogal += 1

    return totalVogal

#
# Teste
#
palavra = "abecedario";
assert 6 == contarVogais(palavra)
