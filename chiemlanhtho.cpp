#include<stdio.h>
#include<string.h> 
main(){
	int n, i; 
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		int w, h, x, y; 
		scanf("%d%d%d%d", &w, &h, &x, &y);
		char VTR[2];
		scanf("%s", VTR); 
		char U[2]="U", D[2]="D", L[2]="L", R[2]="R"; 
		if(strcmp(VTR,U)==0){
			int a=x, b=y-1;
			int A=b-1, B=h-y; 
			if(A<B){
				printf("BLUE\n");
			} 
			if(A>B){
				printf("RED\n"); 
			}
			if(A==B){
				printf("DRAW\n"); 
			}
		} 
		if(strcmp(VTR,D)==0){
			int a=x, b=y+1;
			int A=y-1, B=h-b; 
			
			if(A<B){
				printf("RED\n"); 
			} 
			if(A>B){
				printf("BLUE\n");  
			}
			if(A==B){
				printf("DRAW\n"); 
			} 
		} 
		if(strcmp(VTR,L)==0){
			int a=x-1, b=y; 
			if(a-1>w-x){
				printf("RED\n"); 
			} 
			if(a-1<w-x){
				printf("BLUE\n"); 
			}
			if(a-1==w-x){
				printf("DRAW\n"); 
			} 
		}
		if(strcmp(VTR,R)==0){
			int a=x+1, b=y; 
			if(x-1>w-a){
				printf("BLUE\n"); 
			} 
			if(x-1<w-a){
				printf("RED\n"); 
			}
			if(x-1==w-a){
				printf("DRAW\n"); 
			}
		}
	} 
}