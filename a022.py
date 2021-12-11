#!/usr/bin/env python3

h, m = map(int, input().split())
if(h == 7):
    if(m >= 30):
        print("At School")
    else:
        print("Off School")
elif(h > 7 and h < 17):
    print("At School")

else:
    print("Off School")
