/*1 Write a C program to find sum of all natural numbers between 1 to n using recursion.
 
*/
#include<stdio.h>
int sum(int);
int main(){
	int n;
	printf("Enter the range\n");
	scanf("%d",&n);
	printf("%d is the sum from 1 till %d\n",sum(n),n);
	return 0;
}
int sum(int x){
	if(x!=1)
	return x+sum(x-1);

}
