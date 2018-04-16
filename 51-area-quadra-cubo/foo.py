# -*- coding: utf-8 -*-

#
# Classe
#
class Area(object):
    def quadrada(self):
        return self.lado1 * self.lado2

    def cubica(self):
        return self.lado1 * self.lado2 * self.lado3


#
# Testes
#
area = Area()

# testando a área quadrada
area.lado1 = 3
area.lado2 = 9
assert 27 == area.quadrada()

# testando a área cúbica
area.lado1 = 3
area.lado2 = 6
area.lado3 = 2
assert 36 == area.cubica()
