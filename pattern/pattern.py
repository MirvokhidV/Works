print("Input number to see pattern")
num = int(input(">> "))
length = len(str(num))  
for line in range(0,length):
    line_p = num // (10**line)
    print(line_p)
print(length*"-")
for line1 in range(-length+1, 1):
    linep = num * (10**line1)
    print(int(linep))
