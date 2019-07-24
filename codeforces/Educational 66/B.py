n = int(input())
stack = [1]
curr = 0
count = 0
flag = 0
ip = []
for i in range(n):
    l = input()
    ip.append(l)

for i in ip:
    a = i.split()
    if a[0] == 'for':
        stack.append(0)
        stack[curr+1] = ((int(a[1])*stack[curr]))
        curr += 1
    elif a[0] == 'end':
        curr-=1
    elif a[0] == 'add':
        count+=stack[curr]
    # print(stack)
    if count>(2**32 - 1):
        flag = 1
        break
if flag:
    print("OVERFLOW!!!")
else:
    print(count)