from my_quadrangle import Quadrangle
import my_quadrangle


def main():
    n = int(input("How much quadrangles do you want to create?\n"))
    arr = []

    for i in range(n):
        a = Quadrangle()
        arr.append(a)
    
    for quad in arr:
        quad:Quadrangle
        quad.set_coordinates(int(input('Enter coordinates of the convex quadrangle:\n')), int(input()), int(input()), int(input()), int(input()), int(input()), int(input()), int(input()))
    
    i = 0  
    for quad in arr:
        i += 1
        quad:Quadrangle
        print(f'{i}-th quadrangle\'s perimeter is: {quad.get_perimeter()}')

if __name__ == "__main__":
    main()