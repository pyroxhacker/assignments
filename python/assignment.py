# Get the number of elements
n = int(input("Enter the number of elements: "))

# Input the list elements
arr = []
print(f"Enter {n} numbers:")
for _ in range(n):
    num = int(input())
    arr.append(num)

# Input the new element to insert
ele = int(input("Enter your value: "))

# Show array before insertion
print("Before insertion:")
print(' '.join(map(str, arr)))

# Insert the new element
arr.append(ele)

# Show array after insertion
print("After insertion:")
print(' '.join(map(str, arr)))
