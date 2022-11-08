def output_prime_numbers(prime_num):
    prime_nums = 3
    print("\nThere are numbers: ")
    while prime_nums <= prime_num:
        x = 2
        a = 0
        dev = prime_nums/2
        while(x <= int(dev)):
            if prime_nums % x == 0:
                a = 1
                break
            x +=1
        if a ==0:
            print(prime_nums)
        prime_nums += 1

def checking_prime_number(number):
    i = 2
    c = 0
    while i <= number/2:
        if number % i == 0:
            c =1
            print("Your number is not a prime")
            break
        i +=1
    if c == 0:
        print("Your number is a prime")

print("There is two exe")
print("1. Checking number prime or not \n2. Showing prime numbers until entered number")
print("\nWhich one do you want to see? ")
exe = input('>> ')
print("Enter number")
a = 0
num = 0
while(a <= 1):
    num = int(input(">> "))
    if num == 1 or num == 2:
        print("\nPrime number should be more than two")
        a = 0
    else:
        a = 1
        break
if exe == str(1):
    checking_prime_number(num)
if exe == str(2):
    output_prime_numbers(num)
