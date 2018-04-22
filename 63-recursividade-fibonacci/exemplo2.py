# -*- coding: utf-8 -*-

def fib(n):
    if n == 0: return 0

    a, b = 1, 1

    for i in range(n-1):
        a, b = b, a + b

        # Não funciona porque ?
        #
        # a = b
        # b = a + b

    return a

assert fib(0) == 0
assert fib(1) == 1
assert fib(2) == 1
assert fib(3) == 2
assert fib(4) == 3
assert fib(5) == 5
assert fib(6) == 8