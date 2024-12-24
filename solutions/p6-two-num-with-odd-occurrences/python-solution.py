from collections import Counter

# Function to find two numbers with odd occurrences in the array
def two_numbers_with_odd_occurrences(arr):
    try:
        # Step 1: Count the occurrences of each number using Counter
        # Counter creates a dictionary where keys are array elements, and values are their counts
        occurrence = Counter(arr)

        # Step 2: Filter out numbers that have odd counts
        # We use a list comprehension to collect numbers that occur an odd number of times
        result = [num for num, count in occurrence.items() if count % 2 != 0]

        # Step 3: Validate the result
        # Ensure there are exactly two numbers with odd occurrences
        if len(result) != 2:
            # If not, raise an error with a meaningful message
            raise ValueError("The array must have exactly two numbers with odd occurrences.")

        # Step 4: Return the result
        return result
    except Exception as e:
        # Handle any errors and print them out for the user
        print(f"Error: {e}")
        # Return an empty list if something went wrong
        return []

# Main section of the program
# Define the input array
array = [4, 7, 2, 7, 4, 4, 5, 2, 5, 9]

# Call the function and store the result
result = two_numbers_with_odd_occurrences(array)

# Display the result if we found it
if result:
    print("Numbers with odd occurrences:", result)