# -*- coding: utf-8 -*-

#
# 1
#
def reverseString1(text):
    l = list(text)
    l.reverse()
    return ''.join(l)

#
# 2
#
def reverseString2(text):
    return ''.join(reversed(text))

#
# 3
#
def reverseString3(text):
    return text[::-1]


#
# Seu teste
#
palavra = "animal"
assert "lamina" == reverseString1(palavra)
assert "lamina" == reverseString2(palavra)
assert "lamina" == reverseString3(palavra)
