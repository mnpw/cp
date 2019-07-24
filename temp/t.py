def fibonacciUpTo(n):
    fib = [0 , 1]
    while True:
        new_fib = fib[-1]+fib[-2]
        if new_fib > n:
            break
        else:
            fib.append(new_fib)
    return fib[1:] #slight modification to omit 0 - it would require additional checks later on



def solution(A):
    A.append(1) #the last 1 marks the other side of the river
    fib = fibonacciUpTo(len(A))
    print(fib)

    reachable = [-1] * len(A) #will mark in how many jumps we can get to specific point
    for jump in fib:
        reachable[jump - 1] = 1 #initialize reachable destinations by checking where we can get from initiali position of x=-1
    print(reachable)
    for x, leaf in enumerate(A):
        if reachable[x]>0 and leaf == 1:    #if position is reachable and there is a leaf we can hop on
            print("YOLO")
            for jump in fib:    #check where we can get from there
                if jump + x >= len(A):  #too far
                    break
                else:
                    if reachable[x+jump]<0 or reachable[x+jump] > reachable[x]+1:   #if the place was unreachable before or if we found faster way there
                        reachable[x+jump] = reachable[x]+1  #write down in how many jumps we can go there
    
    return reachable[-1]

A = [0,0,0,1,1,0,1,0,0,0,0]
print(solution(A))