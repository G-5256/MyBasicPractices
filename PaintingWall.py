# def paintingWall(numOfIntWall,numOfExtWall):

#     return numOfIntWall*numOfExtWall

from sys import float_repr_style


IntWalls = int(input("Enter the number of interior walls: "))
ExtWalls = int(input("Enter the number of exterior walls: "))
intWalls=[]
extWalls=[]


for i in range(IntWalls):
    intWalls.append(float(input()))

for i in range(ExtWalls):
        extWalls.append(float(input()))

print("Painting cost of walls :",sum(intWalls)*18 + sum(extWalls)*12,"INR")


