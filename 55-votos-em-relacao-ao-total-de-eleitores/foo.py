# -*- coding: utf-8 -*-

#
# Classe Votos
#
class Votos(object):

    def __init__(self, total_eleitores):
        self.total_eleitores = total_eleitores
        self.validos = 0;
        self.brancos = 0;
        self.nulos   = 0;

    def percValidos(self):
        return self.validos / self.total_eleitores

    def percBrancos(self):
        return self.brancos / self.total_eleitores

    def percNulos(self):
        return self.nulos / self.total_eleitores


#
# Testes
#
votos = Votos(1000)
votos.validos = 800;
votos.brancos = 150;
votos.nulos   = 50;

assert 0.8  == votos.percValidos(), "'percValidos' deve ser igual a 0.8"
assert 0.15 == votos.percBrancos(), "'percBrancos' deve ser igual a 0.15"
assert 0.05 == votos.percNulos(),   "percNulos deve ser igual a 0.05"
