def isPalindrome(x: int) -> bool:
    numberInString = str(x)
    tamanhoString = len(numberInString)
    StringReverse = ""
    for i in range(tamanhoString-1,-1,-1):
        StringReverse += numberInString[i]
    
    if StringReverse == numberInString:
        return True
    else:
        return False


print(isPalindrome(12))
            