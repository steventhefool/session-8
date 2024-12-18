#include <stdio.h>
using namespace std;
int main (){
	int cnt,c,r,max_cnt=0,n;
	printf ("nhap so cot cua mang: ");
	scanf ("%d",&c);
	printf ("nhap so hang cua mang: ");
	scanf ("%d",&r);
	int a[r-1][c-1];
	for (int i =0; i <= c-1; i++){
		for (int j=0;j<=r-1; j++){
			printf ("nhap phan tu cot %d hang %d: ",i+1,j+1);
			scanf ("%d",&a[j][i]);
		}
	}
	for (int i =0; i <= c-1; i++){
		for (int j=0;j<=r-1; j++){
			printf ("%d  ",a[j][i]);
		}
		printf ("\n");
	}
	for (int i =0;i<=c-1;i++){
		for (int j=0;j<=r-1;j++){
			int cnt=0;
			for (int n=0;n<c;n++){
				for (int m=0;m<r;m++){
					if (a[m][n] == a[j][i]){
						cnt++;
					}
				}
			}
			if (cnt > max_cnt){
				max_cnt = cnt;
				n=a[j][i];
		}
		}
	}
	printf ("phan tu xuat hien nhieu nhat la: %d\n",n);
	printf ("so lan xuat hien cua %d la: %d\n",n,max_cnt);
	return 0;
}
