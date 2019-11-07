# Adivinar un número
import random

def juego_adivinar(intentos):
    numero = random.randint(0, 10)

    for i in range(intentos):
        print("Tienes", intentos - i, "intentos")
        intento = int(input("Adivina un número entre 0 y 10: "))
        if intento == numero:
            print("Adivinaste!")
            break
        else:
            print("Fallaste!")
            if intento < numero:
                print("El número que elegiste es menor al que buscas...")
            else:
                print("El número que elegiste es mayor al que buscas...")

def main():
    juego_adivinar(5)

main()
