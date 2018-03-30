# -*- coding: utf-8 -*-

#
# Converte fahrenheit em celsius
#
def toCelsius(fahrenheit):
	return 5 * (fahrenheit - 32) / 9;

#
# Converte celsius em fahrenheit
#
def toFahrenheit(celsius):
	return celsius / 5 * 9 + 32;

#
# Testes
#
celsius    = 100
fahrenheit = 212

assert celsius == toCelsius(fahrenheit)
assert fahrenheit == toFahrenheit(celsius)
