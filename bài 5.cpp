#include <stdio.h>
using namespace std;
int main (){
	int a[100][100],c,r,sum;
	printf ("nhap so cot cua mang: ");
	scanf ("%d",&c);
	printf ("nhap so hang cua mang: ");
	scanf ("%d",&r);
	for (int i =0; i<=c-1; i++){
		for (int j=0;j<=r-1;j++){
			printf ("nhap phan tu o cot %d hang %d: ",j+1,i+1);
			scanf ("%d",&a[i][j]);
		}
	}
	printf ("cac phan tu trong mang la: \n");
	for (int i =0; i<=c-1;i++){
		for (int j=0; j<=r-1;j++){
			printf ("%d  ",a[i][j]);
		}
		printf ("\n");
	}
	for (int i=0; i <= c-1; i++){
		sum += a[i][0];
	}
	for (int i=1; i <=r-1; i++){
		sum+= a[0][i];
	}
	for (int i=1; i <=c-1; i++){
		sum += a[i][r-1];
	}
	for (int i=1; i < r-1; i++){
		sum+= a[c-1][i];
	}
	printf ("tong cac chu so o bien la: %d",sum);
	return 0;
}
