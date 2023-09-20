def minion_game(string):
    # Initialize the scores for Kevin and Stuart
    kevin_score = 0
    stuart_score = 0
    
    n = len(string)
    
    for i in range(n):
    
        if string[i] in 'AEIOU':
            kevin_score += n - i
     
        else:
            stuart_score += n - i
    

    if kevin_score > stuart_score:
        print("Kevin", kevin_score)
    elif kevin_score < stuart_score:
        print("Stuart", stuart_score)
    else:
        print("Draw")


s = input()
minion_game(s)