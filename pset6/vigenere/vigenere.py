import sys
from cs50 import get_string

if(len(sys.argv)!=2):
     print("Usage: ./vigenere k")
     exit(1)
k=sys.argv[1]

for i in k:
    if(i.isalpha()):
        continue
    else:
        print("Usage: ./vigenere k")
        exit(1)

l=len(k)
p=get_string("plaintext: ")
print("ciphertext:",end=" ")

j=0
key=0
for i in p:
    if(i.isalpha()):
        if(k[j%l].isalpha()):
            if(k[j%l].isupper()):
                key=chr(ord(k[j%l])-ord('A'))
            if(k[j%l].islower()):
                key=chr(ord(k[j%l])-ord('a'))
        else:
            print(i,end="")

        if(i.isupper()):
            print("{}".format(chr((((ord(i)-ord('A'))+ord(key))%26)+ord('A'))),end="")
            j=j+1
        if(i.islower()):
            print("{}".format(chr((((ord(i)-ord('a'))+ord(key))%26)+ord('a'))),end="")
            j=j+1
    else:
        print("{}".format(i),end="")

print()




