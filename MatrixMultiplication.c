#include<stdio.h>

int main(){
	//Declare variables
	int r1, c1, r2, c2, i, j, sum = 0, k;

	//Get input from the user
    printf("Enter the number for how many rows in first matrix: ");
	scanf("%d",&r1);

    printf("Enter the number for how many rows in first matrix: ");
    scanf("%d",&c1);

    printf("Enter the number for how many rows in second matrix: ");
    scanf("%d",&r2);

    printf("Enter the number for how many rows in second matrix: ");
    scanf("%d",&c2);
    
    //Put the size of matrices array
    int arr[r1][c1], arr1[r2][c2], multi[r1][c2];

	// Check the column (c1) of the first matrix (arr[r1][c1]) is equal to the row (r2) of the second matrix (arr1[r2][c2]) 
    if(c1 == r2){
    	
    	//Take the elements of first matrix from the user
        printf("Enter the element of first matrix %d * %d\n", r1, c1);
        for(i = 0; i < r1; i++){
            for(j = 0; j < c1; j++){
                scanf("%d", &arr[i][j]);
            }
            printf("\n");
        }

        //Take the elements of second matrix from the user
		printf("Enter the element of first matrix %d * %d\n", r2, c2);
        for(i = 0; i < r2; i++){
            for(j = 0; j < c2; j++){
                scanf("%d", &arr1[i][j]);
            }
            printf("\n");
        }
		
		//Multiply two matrices
        for(i = 0; i < r1; i++){
            for(j = 0; j < c2; j++){
                for(k = 0; k < r2; k++){
                        sum += arr[i][k] * arr1[k][j];
                }
                multi[i][j] = sum;
                sum = 0;
            }
            printf("\n");
        }
		
		//Print the final results...
        for( i = 0; i < r1; i++) {
            for ( j = 0; j < c2; j++) {
                printf("%d",multi[i][j]);
        	}
            printf("\n");
        }
    }
    
    //If column (c1) of the first matrix (arr[r1][c1]) is not equal to the row (r2) of the second matrix (arr1[r2][c2])
    else
	{
        printf("\nError: Here the column of first matrix is not equal to the row of second matrix");
    }
	return 0;
}

