trials = int(input())

for i in range(trials):
    ip = input().split()
    x, y, l = [int(x) for x in ip]
    if l%4==0 and l>=4*y and l<=4*(x+y) and 4*(x-y)<=l:
        print('yes')
    else:
        print('no')
