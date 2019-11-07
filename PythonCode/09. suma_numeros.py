# Suma de números mientras el número sea diferente de cero
def main():
  numero = ""
  suma = 0

  while numero != 0:
    numero = int(input("Dame un numero (cero para terminar): "))
    suma += numero

  print("la suma es:", suma)

main()