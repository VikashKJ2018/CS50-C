#include<stdio.h>


int get_input_from_user(void);
void main(void)
	{
		int height = get_input_from_user();


		for(int i = 0; i<=height; i++){
			for(int j = 0; j<=i; j++){
				printf("#");
			}
			printf("\n");
		}

	}



int get_input_from_user(void)
{
	int n;
	do
	{
		printf("Enter the height of the pyramid: ");
		scanf("%d", &n);

	}
	while (n<1 || n>10);
	return n;
}

