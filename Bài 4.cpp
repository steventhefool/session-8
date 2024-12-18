#include <stdio.h>
using namespace std;
int main (){
	int a[5][5]= {{10,42,53,64,75}, {16,27,38,49,10}, {11,12,13,14,15}, {16,17,18,19,20},{21,24,22,29,23}};
	int max;
	for (int i =0; i<=4;i++){
		for (int j=0; j<=4;j++){
			printf ("%d ",a[i][j]);
		}
		printf ("\n");
	}
	int n,m;
	max = a[0][0];
	for (n =0; n<=4;n++){
		for (m=0; m<=4;m++){
			if (max < a[n][m]){
				max = a[n][m];
			}
		}
		}
	printf ("%d", max);
	return 0;
}
