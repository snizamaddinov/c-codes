array = []

size = int(input("Enter the length of array: "))

for i in range(size):
    elem = int(input())
    array.append(elem)
    
for i in range(size):
    print('array[', i, '] = ', array[i])