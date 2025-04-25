arr = input()
lis = list(map(int,arr.split()))
first = float('-inf')
runner = float('-inf')
for i in lis:
    if(i>first):
        runner = first
        first = i 
print(runner)
    
