from sys import stdout

PRIMES = [x for x in range(2,100) if 0 not in [x%i for i in range(2,x)]]

NORMAL = PRIMES[:15]
SQUARES = [x*x for x in PRIMES[:4]]

for ele in SQUARES:
    print(ele)
    stdout.flush()
    x = input()
    if x == "yes":
        print("composite")
        exit(0)

yes = 0
for ele in NORMAL:
    print(ele)
    stdout.flush()
    x = input()
    if x == "yes":
        yes += 1

print("prime" if yes < 2 else "composite")