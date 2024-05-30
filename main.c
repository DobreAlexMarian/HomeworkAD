#include <stdio.h>
#include <stdio.h>
int main()
{

 float c[9], g[9], ef[9], gr, man, castig = 0;
 int n, i, man1, inv, ordine[9];
 printf("Net's capacity: "); scanf("%f",&gr);
 printf("\nNumber of lobsters: "); scanf("%d",&n);
for( i = 1; i <= n; ++i ){
 ordine[i] = i;
 printf("\nSize %d = ", i);
 scanf("%f",&g[i]);
 printf(" Value %d = ", i);
 scanf("%f",&c[i]);
 ef[i] = c[i] / g[i];
 }
do {
inv = 0;
for ( i = 1; i < n; ++i)
 if ( ef[i] < ef[i + 1] ){
 man = ef[i], ef[i] = ef[i + 1], ef[i + 1] = man;
 man = c[i], c[i] = c[i + 1], c[i + 1] = man;
 man = g[i], g[i] = g[i + 1], g[i + 1] = man;
 man1 = ordine[i], ordine[i] = ordine[i + 1], ordine[i + 1] = man1;
 inv = 1;
 }
} while(inv);
i = 1;
while ( gr > 0 && i <= n){
if ( gr > g[i] ) {
 printf("\n The lobster %d: 1 \n", ordine[i]);
 gr -= g[i];
 castig += c[i];
}
else {
 printf(" The lobster %d: %.2f \n", ordine[i], gr/g[i]);
 castig += c[i] * (gr/g[i]);
 gr = 0;
}
++i;
}
printf("\nTotal earnings = %.3f", castig);
return 0;
}
