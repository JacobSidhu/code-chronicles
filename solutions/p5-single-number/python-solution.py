def single_number(nums):
    """
    Function to find the single number in an array where every element appears twice except for one.

    Args:
        nums (list): List of integers.

    Returns:
        int: The single number.
    """
    result = 0
    for num in nums:
        result ^= num  # XOR operation
    return result

# Example usage
nums = [4, 1, 2, 1, 2]
print("The single number is:", single_number(nums))