#include <stdio.h>
using namespace std;
int main (){
	int a[10]= {1,2,3,4,5,6,7,8,9,10};
	int n,cnt=0;
	printf ("nhap so can tim kiem trong mang: ");
	scanf ("%d", &n);
	for (int i =0; i <10;i++){
		if (n==a[i]){
			printf ("vi tri cua phan tu trong mang la: %d\n", i);
			cnt++;
		}
	}
	if (cnt==0){
		printf ("phan tu khong ton tai trong mang.\n");
	}
	return 0;
}
