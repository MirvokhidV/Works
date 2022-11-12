print("Mn", " Tu ", "We ", "Th ", "Fr ", "St ", "Sn ")
for line in range(1,32):
    if len(str(line)) == 1:
        print(line, end='   ')
    else:
        print(line, end='  ')
    if line%7==0:
        print("\n")
    if line == 32:
        break