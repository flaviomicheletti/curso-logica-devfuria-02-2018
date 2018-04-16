#
# Definimos uma classe vazia (como em JS)
#
class Juros(object):
    pass


#
# Instanciamos a classe
#
juros = Juros()

#
# Definimos um método através do recurso `lambda`
#
juros.simples = lambda obj: obj.capital * obj.taxa * obj.periodo


#
# Teste
#
# Como em JS, também não instanciamos a classe
#
juros.capital = 16000
juros.taxa    = 0.04
juros.periodo = 4
assert 2560 == juros.simples(juros)
