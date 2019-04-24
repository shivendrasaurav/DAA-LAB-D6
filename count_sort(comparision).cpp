#include<stdio.h>
int arr[100],pos[100]={0},sort[100]={0};
int count(int n){
	int i,j;
	for(i=0;i<n+1;i++){
		for(j=i+1;j<n+1;j++){
			if(arr[i]>=arr[j])
				pos[i]=pos[i]+1;
			else
				pos[j]=pos[j]+1;
		}
	}
	printf("\n\n");
	for(i=0;i<n+1;i++)
		sort[pos[i]]=arr[i];
	for(i=0;i<n+1;i++)
		printf("%d, ",sort[i]);
}
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n+1;i++)
		scanf("%d",&arr[i]);
	count(n);
}
