def two_sum(array, target):
    """
    Function to find the indices of two numbers in an array that add up to the target.

    Parameters:
        array (list): The list of integers to search.
        target (int): The target sum to find.

    Returns:
        str: A string with the indices of the two numbers if found, or an error message.
    """
    # Validate input
    if target <= 1:
        return "Error: Target value is too small to find a match."
    elif len(array) <= 1:
        return "Error: Array is too small to determine two indices."

    # Iterate through the array to find a valid pair
    for x in range(len(array) - 1):
        for y in range(x + 1, len(array)):
            if array[x] + array[y] == target:
                return f"[ {x}, {y} ]"

    # Return a message if no combination is found
    return "[] No Combination Found!"


# Main execution block
if __name__ == "__main__":
    # Input array and target value
    arr = [2, 7, 11, 15]
    target_value = 9

    # Display the result
    print("Input Array:", arr)
    print("Target Value:", target_value)
    print("Result:", two_sum(arr, target_value))
