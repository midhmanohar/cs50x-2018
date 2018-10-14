from cs50 import get_float
from math import floor

while(True):
    change=get_float("Change owed: ")
    if(change>0):
        break
count=0
change=floor(change*100)  #for float multiplication error
print("{}".format(change))
while(change>=1):

    if( change/25 > 0 ):
        count+=floor(change/25)
        change=change%25
    if (change/10 > 0):
        count += floor(change/10)
        change = change%10
    if (change/5 > 0):
        count += floor(change/5)
        change = change%5
    if (change/1 > 0):
        count += floor(change/1)
        change = change%1

print("{}".format(count))
