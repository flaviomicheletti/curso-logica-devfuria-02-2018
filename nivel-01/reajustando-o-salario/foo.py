# -*- coding: utf-8 -*-

#
# Reajusta o salário
#
def reajustar_salario(salario, reajuste):
    return salario * reajuste;

# Este é o nosso teste.
# Sabemos que 1000 * 0.15 = 150, logo...
assert 150 == reajustar_salario(1000, 0.15), 'reajustar_salario deve retornar 150'
