#include <stdio.h>
int main() {
	int pass, x=10;

	while (x!=0)
	{
	printf("\nInput Your password: ");
	scanf("%d",&pass);

	if (pass==1980)
	{
		printf("Correct password");
		x=0;
		printf("\n     ####      ##    #" );
		printf("\n   ##    ##    ##  #" );
		printf("\n   ##    ##    ###" );
		printf("\n   ##    ##    ##  #" );
        printf("\n     ####      ##    #" );

    }
    else
    {
       printf("Wrong password, try another");
	}
	printf("\n");
   }
	return 0;
}
