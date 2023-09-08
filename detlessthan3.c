//Codesign-FinalProject-GoltaHaghighi-HadisGanji 
#include <stdio.h>
#include <stdlib.h>
int m,n;
int det(int B[m][n]);
int main() {
    int determinant;
    register int row,column;
    printf("Enter rows :");
     scanf("%d",&m);
    printf("Enter columns : ");
    scanf("%d",&n);
    if (m != n) {
        printf("*****invalid*****\n");
        exit(1);
    }
    if (m >= 3 ){
    	printf("The number of rows and columns is more than 2 so  HARDWARE CALCULATING is needed\n");
    	exit(1);
	}
    int A[m][n];
    printf("Enter matrix elements\n");
    for(row = 0; row < m; row++)
        for(column = 0; column < n; column++)
            scanf("%d",&A[row][column]);	        
    determinant = det(A);
    printf("determinant = %d \n",determinant);

    return 0;
}
int det(int B[m][n]) {
    int row_size = m;
    int column_size = n;
    if (row_size == 1)
        return (B[0][0]);
    else if (row_size == 2)
        return (B[0][0]*B[1][1] - B[1][0]*B[0][1]);
    return 0;
  } 
  
