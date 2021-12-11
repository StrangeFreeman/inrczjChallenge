m, n = map(int, input().split())
nmax = max(m,n)
nmin = min(m,n)
sum = nmin+nmax
temp1 = 1
#temp
for i in range(sum, nmax, -1):
    temp1 *= i

temp2 = 1
#nmin
if nmin == 0: 
    nmin = 1
else: 
    for j in range(1, nmin+1, 1):
        temp2 *= j
        

print(int(temp1/temp2))