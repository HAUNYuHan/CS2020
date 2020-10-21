#include <stdio.h>
#include <stdlib.h>

int fib(int);       /* fib() 函數的原型宣告 */

int main(void)
{
    int i,n;
    print("請輸入要計算到第幾個費是數列:");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)       /*計算前1n個費式數列*/
        print("fib(%d)=%d\n",i,fib(i));
        
        
     return 0;
 }
 
 int fib(int n)     /*定義函數fib()*/
 {
 
    if (n==0)
        return 0; /*如果n=0 則傳回 */
    else if(n==1｜｜n==2) /*如果n=1或n=2，則傳回1 */
        return 1;
    else                /*否則傳回 fib(n=1)+fib(n-2)*/
        return(fib(n-1)+fib(n-2));
 }
