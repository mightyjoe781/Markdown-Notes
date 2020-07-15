# Code Reference for the Chapters

#### Using Big Int to Calculate Factorials

````java
import java.util.Scanner;
import java.math.BigInteger;
class Main{
	public static void main(String[] args){
        BigInteger fac = BigInteger.ONE;
        for(int i=0; i<=25;i++)
            fac = fac.multiply(BigInteger.valueOf(i));
        System.out.println(fac);
    }
}
````

#### Euclidean GCD

O(log(a+b))

````c++
int gcd(int a,int b){
    while(b) {int r = a%b; a=b; b=r;}
    return a;
}
````





