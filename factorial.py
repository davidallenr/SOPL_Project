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


def factorial(n):
    result = 1
    for i in range(1, n+1):
        result *= i
    return result


if __name__ == "__main__":
    print(factorial(5))
