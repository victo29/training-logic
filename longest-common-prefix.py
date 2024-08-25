def longestCommonPrefix( strs) -> str:
    sizeElement = len(strs[0])
    for j in strs:
        if sizeElement > len(j):
            sizeElement = len(j)
       

    prefix = ""
    for i in range(0,sizeElement):
        
        flag = False
        for element in strs:
            if  strs[0][i] == element[i]:
                flag = True
            else: 
                flag = False
                break
        if flag:
            prefix += strs[0][i]
        else:
            break
        
    if prefix:
        return prefix
    else:
        return ""
        


print(longestCommonPrefix(["c","acc","ccc"]))