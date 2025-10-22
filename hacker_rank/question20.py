def alphaNumeric(s):
    V = False
    for i in s:
        if i.isalnum() :
            V = True
        if V:
            print(V)
            return
    print(V)

def alphabetical(s):
    V = False
    for i in s:
        if i.isalpha() :
            V = True
        if V:
            print(V)
            return
    print(V)

def digits(s):
    V = False
    for i in s:
        if i.isdigit() :
            V = True
        if V:
            print(V)
            return
    print(V)

def lower(s):
    V = False
    for i in s:
        if i.islower() :
            V = True
        if V:
            print(V)
            return
    print(V)

def upper(s):
    V = False
    for i in s:
        if i.isupper() :
            V = True
        if V:
            print(V)
            return
    print(V)

s = input()
alphaNumeric(s)
alphabetical(s)
digits(s)
lower(s)
upper(s)