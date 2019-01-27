#include<stdio.h>

int main(){
	int i=1,j=1,arraylength,tmp;
	printf ("Please enter the array length:");
	scanf("%d",&arraylength);

	int array[arraylength];

	for (i=1;i<=arraylength;i++){
		printf ("\nPlease enter the NO.%d object:",i);
    scanf ("%d",&array[i]);
    }

	printf("\nThe original array is:");
	for (i=1;i<=arraylength;i++){
		printf ("%d ",array[i]);
		}

//write a block

	for (;j!=0;){
		j=0;
		for (i=1;i<=(arraylength-1);i++){
			if (array[i]>array[i+1]){
				tmp=array[i];
				array[i]=array[i+1];
				array[i+1]=tmp;
				j++;
			}
		}
	}

	printf("\nThe arranged array is:");
	for (i=1;i<=arraylength;i++){
		printf ("%d ",array[i]);
		}
	return 0;
}
