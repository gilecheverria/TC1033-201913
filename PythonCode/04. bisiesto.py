# Calculo de año bisiesto

def bisiesto(año):
    if año % 4 == 0 and (año % 100 != 0 or año % 400 == 0):
        print("Año bisiesto")
    else:
        print("Año normal")

def main():
    año = int(input("Dame un año: "))
    bisiesto(año)

main()
