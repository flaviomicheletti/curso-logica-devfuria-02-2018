# -*- coding: utf-8 -*-

#
# Retorna o custo final da fabricação de um carro
#
def custoFinal(custoFabrica):
	custoDistribuidor = custoFabrica * 0.28
	custoImpostos     = custoFabrica * 0.45
	return custoFabrica + custoDistribuidor + custoImpostos

#
# Teste
#
assert 17300 == custoFinal(10000), "'custoFinal' deve ser igual a 17300"
