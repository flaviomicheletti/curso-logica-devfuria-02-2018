# -*- coding: utf-8 -*-

class Calc(object):

    def antecessor(num):
        return num - 1

    def sucessor(num):
        return num + 1

assert 9 == Calc.antecessor(10)
assert 11 == Calc.sucessor(10)