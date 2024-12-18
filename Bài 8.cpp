#include <stdio.h>
using namespace std;
int main (){
	int a[100][100],c,sum;
	printf ("nhap canh cua mang hinh vuong: ");
	scanf ("%d",&c);
	for (int i =0; i<=c-1;i++){
		for (int j=0; j<=c-1;j++){
			printf ("nhap phan tu o cot %d hang %d: ",j+1,i+1);
			scanf ("%d", &a[j][i]);
		}
	}
	printf ("Cac phan tu duoc bieu dien tren ma tran la: \n");
	for (int i =0; i<=c-1;i++){
		for (int j=0; j<=c-1;j++){
			printf ("%d  ", a[j][i]);
		}
		printf ("\n");
	}
	printf ("phan tu tren duong cheo phu cua ma tran la: \n");
	for (int i=c-1,j=0; i >=0;i--){
		printf ("%d ", a[i][j]);
		j++;
	}
	printf ("\n");
	for (int i=c-1,j=0; i >=0;i--){
		sum+=a[i][j];
		j++;
	}
	printf ("tong cac phan tu tren duong cheo phu cua ma tran la: %d", sum);
	return 0;
}
