#include <stdio.h>
int main(){
	int i;int t[7];
	int a,b;
		for(i=0;i<7;i++){
		scanf("%d %d", &a,&b);
		int c,d; c=a+b;
		if(c>8){
			t[i]=c;
		}
		else t[i]=0;
	}int max; max=t[0]; int cham; 
	for(i=1;i<8;i++){
		if(t[i-1]>max) max=t[i-1]; cham=i; 
	}
	if(max=0){
		printf(0) ;
	} else printf("%d",cham);
}
