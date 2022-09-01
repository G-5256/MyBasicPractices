import array as arr

a=arr.array('q',[1,2,3])

for i in range(0,3):
    print(a[i])

#reverse.a()
b=a[::-1]
print(b)
#float array 
c=arr.array('d',[1.1,1.2,1.3])
c.insert(1,1.0)#append(1,1.0)
print(c)
#update  insert

a.insert(1,4)
print(a)

#reverse Array


print('Reverse of Array a is :',a[::-1],"")
#join a and b array
print(a+b)
print(set(a+b))
print()
#max array 
print(max(a))

#2D array

d=[[1,2,3],[4,5,6],[7,8,9]]
print(d)

del(d[1][0])

print("2D Array: d=[[1,2,3],[4,5,6]] :")
for x in d:
    for i in x: 
         print(i,end=" ")
    print()

#diagonal of 2D array
print("Diagonal of 2d array: ",end=" ")
for i in range(3):
    print(d[i][i],end=" ")

#print another diagonal 
print("\nAnother diaginal of 2d array  :",end=" ")
k=2
for i in range(3):
    print(d[i][k],end=" ")
    k-=1

list1=[5,4,3,2]
ar=arr.array('i',list1)

print("lsit to array :\n",str(ar))

#Array to list
array_to_lst=arr.array('i',[5,3,2,1])

list_I=array_to_lst.tolist()
print(list_I,"\n################")


print("Matrix ADDITION :#######################")
M1=[[1,2,3],[4,5,6],[7,8,9]]
M2=[[0,8,7],[6,5,4],[3,2,1]]



for i in range(len(M1)):
    print(" ")
    for j in range(len(M1[0])):
        print(M1[i][j]+M2[i][j],end=" ")

#Transposing Array 
print(zip())


#Matrix Multi

