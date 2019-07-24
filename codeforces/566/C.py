n = int(input())

dict = {'a':[], 'e':[], 'i':[], 'o':[], 'u':[]}

for i in range(n):
    w = input()
    cnt = 0
    last = 'z' 
    for ch in w:
        if ch in "aeiou":
            cnt+=1
            last = ch
    print(last, cnt)
    if last is not 'z' and cnt!=0:
        dict[last][cnt]+=1
