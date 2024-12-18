#include <iostream>
using namespace std;
int main (){
	int a[100],n;
	printf ("nhap so phan tu trong mang: ");
	scanf ("%d", &n);
	for (int i = 0; i < n; i++){
		printf ("nhap gia tri phan tu thu %d: ", i+1);
		scanf ("%d", &a[i]);
	}
	while (n>0){
		printf ("%d ", a[n-1]);
		n--;
	}
	return 0;
}
