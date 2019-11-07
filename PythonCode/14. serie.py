# Serie harmónica

def serie_harmonica(terminos):
    suma = 0
    for termino in range(1, terminos+1):
        suma += 1/termino
        print(f"1/{termino}", end = " ")
        if termino < terminos:
            print("+", end = " ")
    
    print(f": {round(suma, 4)}")

def main():
    terminos = int(input("Dame cuántos terminos de la serie quieres: "))
    serie_harmonica(terminos)

main()