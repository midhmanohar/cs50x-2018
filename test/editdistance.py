from enum import Enum


class Operation(Enum):
    """Operations"""

    DELETED = 1
    INSERTED = 2
    SUBSTITUTED = 3

    def __str__(self):
        return str(self.name.lower())

a="cat"
b="ate"

row=len(b)+1
column=len(a)+1

matrix = [[(0, None) for x in range(len(b) + 1)] for y in range(len(a) + 1)]

for i in range(1,row):
    matrix[0][i]= (i,Operation.INSERTED)
for i in range(1,column):
    matrix[i][0]= (i,Operation.DELETED)

# The underscore is also used for ignoring the specific values. If you don’t need the specific values or the values are not used, just assign the values to underscore
# Ignore a value when unpacking
# x, _, y = (1, 2, 3) ->  # x = 1, y = 3
# Ignore the multiple values. It is called "Extended Unpacking" which is available in only Python 3.x
# x, *_, y = (1, 2, 3, 4, 5) --> # x = 1, y = 5
# Ignore the index

# for _ in range(10):
#     do_something()

# Ignore a value of specific location

# for _, val in list_of_tuple:
#     do_something()

for i in range(len(a)):
   for j in range(len(b)):

       insertion,_ = matrix[i+1][j]
       replace,_ = matrix[i][j]
       deletion,_ = matrix[i][j+1]

       insertion+=1
       deletion+=1

       if(a[i]==b[j]):
           matrix[i+1][j+1]=replace,Operation.SUBSTITUTED
       else:
           if(insertion<=deletion and insertion<=replace):
               matrix[i+1][j+1]=(insertion,Operation.INSERTED)
           elif(deletion<=insertion and deletion<=replace):
               matrix[i+1][j+1]=(deletion,Operation.DELETED)
           else:
               replace+=1
               matrix[i+1][j+1]=(replace,Operation.SUBSTITUTED)

print(matrix)


# >>> list=[[("a",1),("b",2)],[("c",3),("d",4)]]
# >>> list[0][1]
# ('b', 2)
# >>> list[0][1][0]
# 'b'