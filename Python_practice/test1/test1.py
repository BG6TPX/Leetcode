from os import *


num_list = []
for num in range(2000,3201):
    if (num%5 != 0) and (num%7 == 0):
        num_list.append(str(num))
    else:
        num = num+1

print("num is ", num_list)