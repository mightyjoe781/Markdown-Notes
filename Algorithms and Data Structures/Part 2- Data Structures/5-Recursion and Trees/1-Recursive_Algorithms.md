## Recursive Algorithms

Concept of recursion is Fundamental in mathematics. A recursion program is one that calls itself with a *termination condition*.

- *Trees* are data structures which are recursively defined.
- **Definition-** A *recursive algorithm* is one that solves a program by solving one or more smaller instances of the same problem.

***Factorial function (recursive implementation***

````c++
int factorial(int N){
    if (N == 0) return 1;
    return N*factorial(N-1);
}
````

- <u>Its always possible to convert a recursive program into a non-recursive one.</u>

***A questionable recursive program***

````c++
int puzzle(int N)
{
    if (N == 1) return 1;
    if (N % 2 == 0)
        return puzzle(N/2);
    else return puzzle(3 * (N+1));
}
````

