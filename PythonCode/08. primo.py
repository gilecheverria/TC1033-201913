# Determina si un numero es primo o no

def primo(numero):

    if numero <= 1:
        return False
    
    contador = 2
    while contador < numero:
        if numero % contador == 0:
            return False
        contador += 1
    
    return True

def main():
    numero = int(input("Dame un número: "))
    es_primo = primo(numero)
    if es_primo:
        print("El número es primo")
    else:
        print("El número no es primo")

main()