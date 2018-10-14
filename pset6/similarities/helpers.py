from enum import Enum


class Operation(Enum):
    """Operations"""

    DELETED = 1
    INSERTED = 2
    SUBSTITUTED = 3

    def __str__(self):
        return str(self.name.lower())


def distances(a, b):
    """Calculate edit distance from a to b"""

    # TODO

    row=len(b)+1
    column=len(a)+1

    matrix = [[(0, None) for x in range(len(b) + 1)] for y in range(len(a) + 1)]

    for i in range(1,row):
        matrix[0][i]= (i,Operation.INSERTED)
    for i in range(1,column):
        matrix[i][0]= (i,Operation.DELETED)

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

    return matrix




