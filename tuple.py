#tuple  int  to float


from ctypes import sizeof

m=float(input())
print(m)

tup=(1,2,3)

print(str(tup))

# res=float('.'.join(str(ele) for ele in tup))

# print(str(res))

#tuple to set OR remove dupli. from tuple

tup_1=(1,2,1,2,1,2,3,3)
res1=tuple(set(tup_1))
print(res1)
print(str(res1))

#maX MiN INT TUPLE

print(max(res1))

k=2
res2=[]
tup_1=list(sorted(tup_1))
for i,val in enumerate(tup_1):
    if(i <k or i>=len(tup_1)-k):
        res2.append(val)
res2=tuple(res2)
print(res2)

#sum of tuple
sum=0
for i in range(len(tup)+1):
    sum=sum+i

print("Sum of Tuple ",tup," is ",sum)

#list tuple
test_list=[(3,4,5),(1,2,3),(32)]
# countLenTup=sum([len(str(ele)) for ele in tup])
# test_list.sort(key=str(countLenTup))

# print("The Original Tuple ",test_list)

# res3=sum(list(test_list))
# print("sum of test_tup is ",res3)

#modulo in tuple
tp1=(10,2,1,2)
tp2=(3,2,2,3)
res4=tuple(ele1 % ele2 for ele1,ele2 in zip(tp1,tp2))
print("The modulo of :",tp1,"\nand",tp2,"\nis",res4)

# ✅ filter a tuple
my_tuple = (1, 3, 5, 7, 9, 12)

filtered_tuple = tuple(
    filter(lambda item: item > 5, my_tuple)
)

# 👇️ (7, 9, 12)
print(filtered_tuple)

# -----------------------------------------------------

# ✅ filter a list of tuples
list_of_tuples = [('Alice', 1), ('Bob', 2), ('Carl', 3), ('Delilah', 4)]

filtered_list = [tup for tup in list_of_tuples if tup[1] > 2]

# 👇️ [('Carl', 3), ('Delilah', 4)]
print(filtered_list)

print(sizeof(tup))
