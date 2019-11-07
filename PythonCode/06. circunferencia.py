# Punto dentro o fuera de una circunferencia
import math

def dentro_fuera(punto_x, punto_y, centro_x, centro_y, radio):

    distancia = math.sqrt((punto_x-centro_x)**2 + (punto_y-centro_y)**2)

    if distancia > radio:
        print("Fuera de la circunferencia")
    elif distancia < radio:
        print("Dentro de la circunferencia")
    else:
        print("Sobre la circunferencia")

def main():
    
    radio = float(input("Dame el radio: "))

    centro_x = float(input("Dame la coordenada x del centro: "))
    centro_y = float(input("Dame la coordenada y del centro: "))

    punto_x = float(input("Dame la coordenada x del punto: "))
    punto_y = float(input("Dame la coordenada y del punto: "))

    dentro_fuera(punto_x, punto_y, centro_x, centro_y, radio)

main()

