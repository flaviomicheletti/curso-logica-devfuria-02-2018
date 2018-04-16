# -*- coding: utf-8 -*-

#
# Definimos uma classe vazia (como em JS)
#
class Juros(object):
    pass

#
# Atenção: este método não faz parte da classe acima...
#
def simples(obj):
    return obj.capital * obj.taxa * obj.periodo

#
# ... para tal, precisaremos instanciar a classe
# e atribuir a função ao método do objeto `juros`.
juros = Juros()
juros.simples = simples

#
# Teste
#
juros.capital = 16000
juros.taxa    = 0.04
juros.periodo = 4
assert 2560 == juros.simples(juros)
