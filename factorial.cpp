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
    std::cout << factorialInt(5) << std::endl; // Change 5 to whatever number you want factorialed

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
    // CPP Is a statically typed programming language
    // This means that int he function defintion and protoype
    // the type must be declared. This is to prevent compliation
    // errors that would be result from a type mismatch.
    // You can cast the results from one type to another but the
    // variable will always be of type that you decared it as.
    if (x == 1 || x == 0)
        return 1;

    return (x * factorialInt(x - 1));
}