from cs50 import get_int
while(True):
    height=get_int("Height: ")
    if(height>=0 and height<=23):
        break

for j in range(2,height+2):
    for i in range(height+1,0,-1):
        if(i<=j):
            print("#",end="")
        else:
            print("",end=" ")
    print()