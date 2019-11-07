# Calculo de indice de masa coproral

def bmi(altura, peso):
    indice = peso /altura ** 2

    print(indice)

    if indice < 20:
        print("Peso bajo")
    elif indice < 25:
        print("Normal")
    elif indice < 30:
        print("Sobre peso")
    elif indice < 40:
        print("Obesidad")
    else:
        print("Obesidad morbida")


def main():    
    peso = float(input("Dame tu peso: " ))
    altura = float(input("Dame tu altura: "))

    bmi(altura, peso)

main()