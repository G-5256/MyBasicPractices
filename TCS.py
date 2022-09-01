import sys
# n=int(input("Enter No. of student :"))
# names=input()

'''
map
filter

'''
test_dict = {"Geeks" : 1, "for" : 6, "geeks" : 5,"GFG":4}
print(test_dict.keys())
print()
#PRint Size f dict using sys.getsizeof(dict)
print(str(sys.getsizeof(test_dict)))
print()
print(len(test_dict))



#print reverse dict ,Sort dict using lamda,

lst=[{"n":"G","age":5},
{"n":"P","age":6},
{"n":"Y","age":7}
]

print(lst)

print("The lsit print sort with age :")
print(sorted(lst,key=lambda i:i['age']))

print("lst print sort with age and name :")
print(sorted(lst,key=lambda i:(i['n'],i['age']) ))

print("Reverse Order lsy :",sorted(lst,key=lambda i:i['age'],reverse=True))

#merge two dict
#using update function

dct1={1:"One",2:"Two"}
dct2={2:"Three",4:"Four"}
print()
print(dct1,dct2)
print("dct1.upadte(dct2)\n")
print(dct1.update(dct2))

#lst add 
#