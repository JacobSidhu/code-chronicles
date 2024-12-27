def find_majority_element(nums):
    try:
        # Step 1: Find the candidate for majority
        candidate, count = None, 0
        for num in nums:
            if count == 0:
                candidate = num
            count += (1 if num == candidate else -1)

        # Step 2: Verify if the candidate is a majority element
        count = 0
        for num in nums:
            if num == candidate:
                count += 1

        if count > len(nums) // 2:
            return candidate
        else:
            raise ValueError("No majority element found.")

    except Exception as e:
        return str(e)


# Main execution block
nums = [3, 3, 4, 2, 3, 3, 3]
result = find_majority_element(nums)
print("Majority Element:", result)
