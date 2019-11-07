# Secuencia fibonacci

def fibonacci(terminos):
    anterior = 0
    actual = 1
    contador = 1
    print(anterior, end = " ")

    while contador < terminos:
        print(actual, end = " ")
        siguiente = actual + anterior
        anterior = actual
        actual = siguiente
        contador += 1
    print()

def main():
    terminos = int(input("Dame cuántos términos quieres: "))
    fibonacci(terminos)

main()