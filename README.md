# Ericsson-zadania

Task 1.
Complete a short function to verify whether a given character is a digit, lowercase/uppercase character
or something else.
Complete an implementation of a function solution, that should return a string describing first character
of the given string: "digit" for a digit, "lower" for a lowercase letter, "upper" for an uppercase letter and
"other" for other characters. You can assume the characters are ASCII.

Task 2.
Compute n over k if smaller than 1 billion.

The binomial coefficient B(N, K) is defined for integers N and K such that 0 ≤ K ≤ N as follows:
B(N, K) = factorial(N) / (factorial(K) * factorial(N−K))
factorial(0) = 1
factorial(L) = 1 * 2 * 3 * ... * (L−1) * L if L > 0
For example, B(5, 3) = 10, because:
B(5, 3) = factorial(5) / (factorial(3) * factorial(2))
= (1*2*3*4*5) / ((1*2*3) * (1*2))
= 120 / (6 * 2)
= 120 / 12
= 10
Write a function:
int solution(int N, int K);
that, given two integers N and K, returns the value of B(N, K).
The function should return −1 if the result exceeds 1,000,000,000.
The function should return −1 if the result is undefined.

For example, given N = 5 and K = 3 the function should return 10, as explained above.
Given N = 40 and K = 20, the function should return −1, because B(40, 20) exceeds 1,000,000,000
(indeed, B(40, 20) = 137,846,528,820).
Given N = 3 and K = 5, the function should return −1, because the result is undefined.

Write an efficient algorithm for the following assumptions:
N and K are integers within the range [−2,147,483,648..2,147,483,647].

Task 3.
Calculate the Fibonacci sequence and factorial (two different methods) by recursion for the ranges of
input numbers for which this is possible using recursion. Then, try to find the biggest possible value of the
Fibonacci sequence and factorial.
