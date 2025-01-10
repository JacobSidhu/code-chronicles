def first_missing_positive(nums):
    n = len(nums)
    for i in range(n):
        while 1 <= nums[i] <= n and nums[nums[i] - 1] != nums[i]:
            nums[nums[i] - 1], nums[i] = nums[i], nums[nums[i] - 1]
    
    for i in range(n):
        if nums[i] != i + 1:
            return i + 1
    return n + 1

test_cases = [
    ([1, 2, 0], 3),
    ([3, 4, -1, 1], 2),
    ([7, 8, 9, 11, 12], 1),
    ([2, 3, 7, 6, 8, -1, -10, 15], 1),
    ([1, 1, 0, -1, -2], 2)
]

for case, expected in test_cases:
    result = first_missing_positive(case)
    print(f"Input: {case}\nOutput: {result}")
    print("Test " + ("Passed" if result == expected else "Failed") + "\n")
