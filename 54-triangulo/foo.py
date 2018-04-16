# -*- coding: utf-8 -*-

class Triangulo(object):

    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c

    def validarForma(self):
        if (self.a < (self.b + self.c)):
            if (self.b < (self.a + self.c)):
                if (self.c < (self.a + self.b)):
                    return True

        return False


# Caso positivo
triangulo = Triangulo(3, 4, 5)
assert triangulo.validarForma()

# Caso negativo
triangulo = Triangulo(1, 4, 5)
assert not triangulo.validarForma()
