# Area y volumen de una esfera

import math

def area_esfera(radio):
    return 4 * math.pi * (radio ** 2)

def volumen_esfera(radio):
    return (4/3) * math.pi * (radio ** 3)

def main():
    print("Calculo de area y volumen")
    radio = float(input("Dame el radio de la esfera: "))
    
    area = area_esfera(radio)
    volumen = volumen_esfera(radio)

    print(f"Area: {round(area, 3)} Volumen: {round(volumen,3)}")

main()