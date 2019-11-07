# Cuadrado de asteriscos

def cuadrado(width, height):

    if width % 2 == 0:
        width += 1
    if height % 2 ==  0:
        height +=1
        
    for row in range(height):
        for col in range(width):
            if 0 < row < height - 1 and 0 < col < width - 1:
                print(" ", end = "")
            elif col % 2 == 0:
                print("+", end = "")
            else:
                print("-", end = "")
        print()

def main():
    alto = int(input("Dame el alto del cuadrado: "))
    ancho = int(input("Dame el ancho del cuadrado: "))

    cuadrado(ancho, alto)

main()