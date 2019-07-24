import bisect
def sieve(n): 
    prime = [True for i in range(n+1)] 
    p = 2
    while (p*p <= n): 
        if (prime[p] == True): 
            for i in range(p * p, n+1, p): 
                prime[i] = False
        p += 1
    r = []  
    for p in range(2, n): 
        if prime[p]: 
            r.append(p)
    return r

def solution(N, P, Q):
    ans = []
    primez = sieve(25000)
    # print(primez)
    s = len(P)
    for i in range(s):
        # lower = P[i]
        lower = 2
        l = bisect.bisect_left(primez,lower)
        upper = Q[i]
        # print(lower,upper)
        temp = int(upper/primez[l])
        if(temp>lower):
            upper=temp
        r = bisect.bisect_right(primez,upper)
        # print(lower,upper)
        # print(l,r)
        # print(primez[l:r])
        prime_set = primez[l:r] 

        start = 0
        end = len(prime_set)-1
        count = 0
        while(start<=end):
            if(prime_set[start]*prime_set[end]<=Q[i] and prime_set[start]*prime_set[end]>=P[i]):
                count+= (end-start+1)
                start+=1
            else:
                end-=1
        ans.append(count)
    return(ans)

# print(solution(1,[1,4,16],[26,10,20]))