#!/usr/bin/python3
def uniq_add(my_list=[]):
    newlist = []
    for i in my_list:
        if i not in newlist:
            newlist.append(i)
    sum = 0
    for x in newlist:
        sum = sum + x
    return sum
