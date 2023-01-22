#include <stdio.h>
// #include <time.h> 
#include <sys/time.h>

int main(){
	// Read input as specified in the question.
	// Print output as specified in the question.
	//Write your code here

	int Si[8]={21,22,22,2,23,4,2,3};
	int arr[4][4];
    int arr2[4];
	int a,sum1=0,sum2=0,sum3=0,T=0,var=0;
	// for(int i =0;i<8;i++){
    //     printf("%d.",i+1);
	// 	scanf("%d",&a);
	// 	Si[i]=a;
	// }

	// for (int i = 0; i < 8; i++)
	// {
	// 	printf("%d ",Si[i]);
	// }
	
	for(int i=0;i<4;i++){
		for(int j=i;j<i+4;j++){
			sum1+= Si[i];
		}
		for(int x=i+4;x<8;x++){
			sum2+=Si[x];
			var += 1;
		}
		for (int u = 0; u < 4-var; u++)
		{
			sum2+=Si[u];
		}
		
		if(sum1>sum2){
			for(int y=i;y<i+4;y++){
				arr[i][T]=Si[y];
				T++;
			}
		}
		if(sum2>sum1){
			for(int z=i+4;z<8;z++){
				arr[i][T]=Si[z];
				T++;
			}
			for (int g = 0; g <4-var ; g++)
			{
				arr[i][T]=Si[g];
				T++;
			}
		}

		T=0;
		sum1=0;
		sum2=0;
		var=0;
	}

	// printf("\n");
	// for (int i = 0; i < 4; i++)
	// {
	// 	for (int j = 0; j < 4; j++)
	// 	{
	// 		printf("%d \t",arr[i][j]);
	// 	}
	// 	printf("\n");
	// }
	// printf("\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum3 += arr[i][j];
        }
        arr2[i] = sum3;
        sum3=0;
    }
    int maximum = arr2[0];
    for (int c = 1; c < 4; c++)
    {
        if (arr2[c] > maximum)
        {
            maximum  = arr2[c];
        }
    }
    printf("%d",maximum);
}