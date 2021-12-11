#!/usr/bin/env python3
# re solve

def get(n):
    ans = 0
    sum = 0
    n = float(n)
    list = []
    m = int(n ** 0.5)
    if m*m == n:
        ans += 1
        list.append(m)
    for i in range(m+1):
        if i != 0 and n % i == 0:
            ans += 2
            list.append(n/i)
            list.append(n/(n/i))
    for j in range(ans):
        sum += list[j]
    sum = sum - n
    return sum


status = True
while(status == True):
    num = int(input())
    x = int(get(num))
    y = int(get(x))

    if(num != 0):
        if(x == num):
            print(f'={num}')

        elif(num == y):
            print(x)

        else:
            print(f'0')

    if(num == 0):
        status = False
