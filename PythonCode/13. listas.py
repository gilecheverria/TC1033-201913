# Cuenta todos los números enteros que estén en una lista
import random

def cuenta_pares(numeros):
    cuenta = 0
    for numero in numeros:
        if numero % 2 == 0:
            cuenta += 1
    
    return cuenta

def cuenta_impares(numeros):
    cuenta = 0
    for idx in range(len(numeros)):
        if numeros[idx] % 2 != 0:
            cuenta += 1
    
    return cuenta

def main():

    terminos = int(input("Cuántos numeros quieres que tenga la lista: "))
    numeros = []
    for id in range(terminos):
        numeros.append(random.randint(1, 20))
    
    pares = cuenta_pares(numeros)
    impares = cuenta_impares(numeros)

    print("Tu lista es: ", numeros)
    print(f"Tu lista tiene {pares} numeros pares")
    print(f"Tu lista tiene {impares} numeros impares")

main()
