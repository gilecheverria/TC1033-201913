# Regresa el promedio de una lista de números

import random

def promedio(numeros):

    promedio = 0
            
    for num in numeros:
        promedio += num
    
    promedio /= len(numeros)
    
    return promedio

def main():
    terminos = int(input("Cuántos numeros quieres que tenga la lista: "))
    numeros = []
    for id in range(terminos):
        numeros.append(random.randint(1, 100))

    print("Tu lista es: ", numeros)
    print("El promedio de tu lista es: ", promedio(numeros))

main()