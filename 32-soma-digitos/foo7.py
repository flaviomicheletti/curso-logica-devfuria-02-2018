# -*- coding: utf-8 -*-


def somarDigitos(numero):
    return sum(int(i) for i in numero)


assert 8 == somarDigitos("2015"), "a soma dos dígitos de 2015 devem ser 8"


#
# https://pt.stackoverflow.com/questions/194098/calcular-soma-de-d%C3%ADgitos-de-um-n%C3%BAmero
#