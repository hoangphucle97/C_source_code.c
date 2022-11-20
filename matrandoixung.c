#include<stdio.h>
#include<conio.h>
#include<math.h>
 
void main ()
{
int a[100][100], n, m, i, j;

 printf("Nhập ma trận n x m: ");
 scanf("%d%d",&n, &m);
    for(i=0;i<n;i++){
        for(j=0;j< n;j++)
        {
         printf("a[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
         }
         printf("\n");}
 
   for(i=0;i < n;i++){
        for(j=0;j<n;j++){
         printf("%d",a[i][j]);}
         printf("\n");}

}