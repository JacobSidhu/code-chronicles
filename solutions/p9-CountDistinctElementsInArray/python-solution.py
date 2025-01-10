# Input array size
n = int(input())

# Input array elements
arr = list(map(int, input().split()))

# Use a set to store distinct elements
distinct_elements = set(arr)

# Output the count of distinct elements
print(len(distinct_elements))