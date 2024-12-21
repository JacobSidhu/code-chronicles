#include <iostream>
#include <stack>
#include <map>

bool validParentheses(const std::string& str) {
    // Map of matching parentheses
    std::map<char, char> parentheses = {
        {'(', ')'},
        {'{', '}'},
        {'[', ']'}
    };

    std::stack<char> stack;

    // Traverse the string
    for (char ch : str) {
        // If it's an opening bracket, push it onto the stack
        if (parentheses.count(ch)) {
            stack.push(ch);
        }
        // If it's a closing bracket
        else {
            // If the stack is empty or the top of the stack doesn't match
            if (stack.empty() || parentheses[stack.top()] != ch) {
                return false;
            }
            // Pop the matching opening bracket
            stack.pop();
        }
    }

    // If the stack is empty, the string is valid
    return stack.empty();
}

int main() {
    std::string testingString = "[({}]";

    if (validParentheses(testingString)) {
        std::cout << "The string is valid." << std::endl;
    } else {
        std::cout << "The string is invalid." << std::endl;
    }

    return 0;
}
