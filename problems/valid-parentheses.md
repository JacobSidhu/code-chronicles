# **P2 - Valid Parentheses**

## **Problem Statement**
Given a string `s` containing just the characters `(`, `)`, `{`, `}`, `[` and `]`, determine if the input string is valid.

An input string is valid if:
1. Open brackets are closed by the same type of brackets.
2. Open brackets are closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.

---

## **Constraints**
- \(1 \leq \text{length of } s \leq 10^4\)
- The string only contains the characters `(`, `)`, `{`, `}`, `[` and `]`.

---

## **Input Format**
A string `s` containing only the characters `()[]{}`.

---

## **Output Format**
- Return `true` if the string is valid.
- Return `false` otherwise.

---

## **Examples**

### **Example 1**
**Input:**
```plaintext
s = "()"