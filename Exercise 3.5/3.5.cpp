#include <stdio.h>

int main() {
	int a[10];
	int c[10];
	int b ,j ,i;
	printf("store in array : ");
	scanf("%d", &a[0]);
	for(i = 1 ;i <= a[0] ;i++) {
		printf("Element[%d]: ",i);
		scanf("%d", &b);
		a[i] = b;
	}
		for(i = 1 ;i <= a[0];i++) {
			if(a[i] < 100){
				c[i] = 1;
				for(j = i+1 ;j<= a[0];j++) {
					if(a[i] < 100){
						if(a[i] == a[j]){
							c[i] = c[i] + 1;
							a[j] = 100;
						}
					}
				}
			}
		}
	printf("------------\n");
	for(i = 1 ;i <= a[0];i++) {
		if(a[i] < 100){
			printf("%d --> %d\n",a[i],c[i]);
		}
	}
}
