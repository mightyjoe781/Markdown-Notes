#### Two Phase Method

Its computationally more efficient than the M-method.

- Phase I
  - construct an auxiliary LPP (always min. type) (standard. form)
  - $ Min \ r = R_1 +R_2$
  - optimal solution will give a starting BFS for the original problem.
- Phase II
  - Start with basic feasible solution from the Phase-I to reach optimal solution
- Note in phase 1, artificial variables remain at zero level in the basis, then solution is said to be a <u>degenerate BFS</u>.

#### Infeasible Solution

- Inconsistent constraints (i.e. *other than $\le $ type*) have <u>no feasible</u> solutions.
- If *artificial variable* remains positive in optimum iteration, then solution space will be <u>infeasible</u>.
- During Simplex method, tie for a leaving variable ( same min. ratio) gives rise to <u>degeneracy</u>
- Optimal simplex table, one of the non-basic variable is zero level in the z-Row then <u>alternate</u> optimal solutions.

#### Matrix Formulation of LPP

Consider the LPP (standard form)
$$
\begin{align}
Max\  (or \ Min) : z &= c_1x_1+c_2x_2 +...+c_nx_n\\
Subject \  to: \\
a_{11}x_1 &+a_{12}x_2 +...+ = b_1 \\
a_{21}x_1 &+a_{22}x_2 +...+ = b_2 \\
...\\
a_{m1}x_1 &+a_{m2}x_2 +...+ = b_m \\
here\ x_1,&..x_n\ge 0,b_1,..b_n\ge0
\end{align}
$$
Above LPP can be formulated as 
$$
\begin{align*}
Max(or \ Min) : z &= CX\\
Subject\ to \ : AX&=b \\
X\ge&0,b\ge0
\end{align*}
$$
Note $A:m\times n $ matrix , $ C : 1 \times n $ matrix ( row ) , $X,b : n\times 1 \  and \ m\times 1$ respectively (col)

$X_B$ denotes current basic solutions

$c_B $ denotes the reduced objective function so that $ c^T x = c_B^T x_B $

$B$ is basis selected subset of $m$ vectors from $A$ and must be linearly independent (To make it <u>non singular</u>)

$ x_B = B^{-1}b$

*Original LPP*
$$
\begin{array}{cc|c}
-c^T & 0 & 0 \\ \hline
A & I & b
\end{array}
$$
*Optimized Table*
$$
\begin{array}{cc|c}
c_B^T B^{-1}A-c^T & c_B^T B^{-1} & c_B^T B^{-1}b \\ \hline
B^{-1}A & B^{-1} & B^{-1}b 
\end{array}
$$

#### Revised Simplex Method

computationally more efficient as computations are based on matrix rather than row operations

1. construct a starting BFS, and let $B$ and $c_B$ be associated basis and objective coefficients
2. compute $B^{-1}$
3. for each non-basic variable $x_j$ compute
   - $ z_j - c_j = c_B B^{-1}A_j - c_j $
   - if above value is $\ge$ (Maximization Problem) for all non-basic variables $x_j$ then stop Optimal solution is 
   - $X_B = B^{-1}b$
   - $ z = c_BX_B$
4. else determine *entering variable* as the non basic variable $x_j$ with most negative $z_j-c_j$ in Maximization problem
5. compute $b^{-1} A_j$ corresponding to the *entering variable* $x_j$
6. compute $B^{-1}b$ and hence determine the *leaving variable* $x_i$ using minimum Ratio Test.
7. From current basis $B$ form a new basis by replacing the *leaving vector $A_i$* with the entering variable $A_j$ go to step and repeat.

why prefer this

- less accumulatio of round off errors
- less amount of new information need to be stored in memory
- for large number of variables its computationally efficient

#### Dual LPP

Consider primal LPP defined above

Its dual will be
$$
\begin{align}
Min\ : w &= c=b_1y_1+b_2y_2 +...+b_my_m\\
Subject \  to: \\
a_{11}y_1 &+a_{12}y_2 +...+ \ge c_1 \\
a_{21}y_1 &+a_{22}y_2 +...+ \ge  c_2 \\
...\\
a_{n1}y_1 &+a_{n2}y_2 +...+ \ge c_n \\
here\ y_1,&..y_n \ unrestricted\ signs
\end{align}
$$
***For max form just change $\ge \ to \ \le$ .***

Constraints and variables swap.

In matrix form
$$
\begin{align*}
Min : w &= b^TY\\
Subject\ to \ : A^TY&\ge C^T \\
Y  \ Unrestricted& \ in \ sign \\
where \ Y& = (y_1 ..y_m)^T
\end{align*}
$$

- Unrestricted sign in primal variables always corresponds to equality dual constraint 

- The dual of the dual is the Primal

- Weak Duality Theorem : for any pair of <u>feasible</u> primal and dual solutions (X,Y) the value of objective function in the minimization problem is an <u>upper bound</u> for the value of objective function in the maximization problem.

- Corollary : if $X^*$ is a feasible solution of the primal and $Y^*$ is a feasible solution of the dual such that

  $ z ^*  = cX^*  = b^T Y^* = w^*$

  then $X^*$ is an optimal solution of the primal and $Y^*$ is an optimal solution of the dual.

  Optimal solution of dual problem is

  ​	$Y^{T} = c_B B^{-1}$

- Four possibilities

  1. Primal optimal, dual optimal 
  2. Primal Unbounded, dual infeasible
  3. Primal infeasible , dual unbounded
  4. Primal infeasible, dual infeasible

- Corollary : if one of problems has an unbounded solution then the other has an infeasible solution. *Converse may not be true*

#### Dual Simplex Method

Simplex : *Basic Solution(Feasible) $\rightarrow$ Optimal*

Dual Simplex : *Optimal(infeasible) $\rightarrow$ Basic (feasible)*

To start with Dual Simplex

1. objective function must satisfy the optimality conditions of Simplex method.
2. all constraints of $ \le $ type.
3. all variable of $ \ge 0 $ type.

*decide **leaving** variable first the **entering** variables*

- leaving variable $x_i$ is the basic variable with most negative value.
- break ties arbitrarily.

deciding entering variable $x_j$

- calculate

  $ \{| \frac{Coeff. \ of \ x_j \ in \ z - row  }{a_{ij}}| \}$ is minimized

  