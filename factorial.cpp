/**
 * @file factorial.cpp
 * @author David Russell
 * @brief Factorial in CPP
 * @version 0.1
 * @date 2022-04-27
 *
 */
#include <iostream>

// This is a recursive function that relies on a typed input and
// returns the type
//
// This process is recursive thus communication relies on the stack
// and is possible both in the subsequent step and returns the value
// to the previous step.
int factorialInt(int x);

int main()
{
    // Cout is an Object of the Output Stream which returns itself. Thus it can be
    // chained like below.
    // This is an example of Object Oriented Programming by representing the
    // std out as an object.
    std::cout << factorialInt(5) << std::endl;

    return 0;
}

/**
 * @brief This is a recursive function or a feature of the Functional Paradigm
 *
 * @param x
 * @return int
 */
int factorialInt(int x)
{
    if (x == 1 || x == 0)
        return 1;

    return (x * factorialInt(x - 1));
}