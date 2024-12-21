def valid_parentheses(s: str) -> bool:
    """
    Function to check if a given string of parentheses is valid.

    Args:
        s (str): The input string containing parentheses.

    Returns:
        bool: True if the string is valid, False otherwise.
    """
    # Map of matching parentheses
    parentheses = {
        '(': ')',
        '{': '}',
        '[': ']'
    }

    stack = []

    # Traverse the string
    for char in s:
        # If it's an opening bracket, push it onto the stack
        if char in parentheses:
            stack.append(char)
        # If it's a closing bracket
        else:
            # If the stack is empty or the top of the stack doesn't match
            if not stack or parentheses[stack.pop()] != char:
                return False

    # If the stack is empty, the string is valid
    return not stack


# Main block to test the function
if __name__ == "__main__":
    testing_string = "[({})]"

    if valid_parentheses(testing_string):
        print("The string is valid.")
    else:
        print("The string is invalid.")
