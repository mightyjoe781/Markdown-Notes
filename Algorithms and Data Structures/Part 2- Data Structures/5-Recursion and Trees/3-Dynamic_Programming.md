## Dynamic Programming

An essential characteristic of divide-and-conquer algorithms was that they partition into independent subproblems. When the subproblems are not independent, the situation is more complicated and simple algorithms can take up a lot of time to run.

Sometimes these computation can take up exponential time.

Classic Example is Fibonacci Sequence whose recursive implementation requires more time and most in efficient thing is that we are calculating already calculated recursive call again and again wasting time.

By contrast, it is easy to compute using an array in linear time.

````c++
F[0] =0; F[1] =1;
for(i=2;i<= N; i++)
    F[i]=F[i-1]+F[i-2];
````

Numbers grow exponentially, so array size is small ,say $ f_{45} $ is largest Fibonacci number that can be represented as a 32- bit integer, so array of size 46 will do.

`A recurrence is a recursive function with integer values.` We can evaluate any such function values starting at the smallest, using previously computed values at each step. This technique is known as *bottom-up dynamic programming*.

*Top-down dynamic programming* is even simpler view of the technique that allows us to execute recursive functions at same cost( or less than) bottom-up approach.

**Top to down dynamic programming is often called Memoization**

***Fibonacci numbers(recursive implementation)***

````c++
int F(int i)
{
    if(i<1) return 0;
    if (i==1) return 1;
    return F(i-1) + F(i-2);
}
````

***Knapsack Problem***

- A thief robbing a safe finds it filled with N types of item of varying size and value, but has only a small knapsack of capacity M to use to carry the goods.

  The knapsack problem is to find the combination of item which the thief should choose for the knapsack in order to maximize the total value of all the stolen items.