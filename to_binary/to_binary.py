print("Input number")
num = int(input(">> "))
count = 1
gar_num = num
i = 0
k = 0
gar_rem = 0
while count >=0:
    if gar_num == 0:
        break
    count = gar_num // 2 
    i += 1
    gar_num = count
div = 0
for gar in range(0, i+1):
    div = num // (2**gar)
    if div % 2 == 0:
        rem = 0
    elif div % 2 == 1:
        rem = 1
    ans = gar_rem + rem * (10**gar)
    gar_rem = ans
print(ans)