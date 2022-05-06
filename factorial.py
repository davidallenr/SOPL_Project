"""
@file factorial.py
@author David Russell
@brief Factorial in Python
@version 0.1
@date 2022-04-27
"""

# This is an iterative approach to factorial
# Compared to the recursive approach in the C++
# It relies on the for loop and stack management to
# compute the factorial of n
#
# Communcation is between is step is a one way street
# as the value for result is changed after each step


def factorial(n):
    # Python is a dynamically typed programming language.
    # In this example we would be able to change n from an integer to a float
    # or even a string and return those results without errors during
    # runtime.
    result = 1
    for i in range(1, n+1):
        result *= i
    return result


if __name__ == "__main__":
    print(factorial(5))  # Change 5 to whatever number you want factorialed
