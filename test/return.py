from cs50 import get_int

def main():

    x = get_int("x: ")
    print(square(x))

def square(x):

    return x**2

if __name__ == "__main__":

    main()