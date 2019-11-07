import math

def ecuacion_1(x):
    x_rad = math.radians(x)
    return (math.sin(1/x_rad)**2) / x

def ecuacion_2(x):
    x_rad = math.radians(x)
    return (math.pow(math.sin(x_rad), (1/3))) / (4*x) + (5 * math.pi * x) * (math.tan(x_rad**2))

def main():
    x = float(input("Dame un valor para x: "))
    print(f"El resultado de la primera ecuacione es {ecuacion_1(x)}")
    print(f"El resultado de la segunda ecuacione es {ecuacion_2(x)}")

main()
