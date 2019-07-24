def centers(matrix,w,h):
    center = []
    for i in range(1,w-1):
        for j in range(1,h-1):
            if(matrix[i][j]=='*' and matrix[i-1][j]=='*' and matrix[i+1][j]=='*' and matrix[i][j-1]=='*' and matrix[i][j+1]=='*'):
                center.append([i,j])
    return center

def valid(matrix,w,h):
    verdicts = []
    center = centers(matrix,w,h)
    #print(center)
    if(w>0 and h>0):
        for c in center:
            verdict = True
            for i in range(w):
                for j in range(h):
                    #print("i=",i,"j=",j,"c[0]=",c[0],"c[1]=",c[1],"matrix[i][j]=",matrix[i][j])
                    if(i!=c[0] and j!=c[1] and matrix[i][j]=='*'):
                        verdict = False
                        break
            verdicts.append(verdict)
    final = False
    for v in verdicts:
        final = final or v
    return final

w,h = map(int, input().split(" "))
#print(w,type(w),h,type(h))
print_map = {True:"YES", False:"NO"}

matrix = []
for i in range(w):
    matrix.append(list(input()))
#print(matrix)
print(print_map[valid(matrix,w,h)]) 