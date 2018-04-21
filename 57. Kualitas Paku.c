#include <stdio.h>
#include <math.h>
#define size 100


int main(){
	float data[size], x, y, per, rugi,paku=0,harga;
	int n, i,jum=0;
	
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%f", &data[i]);
	}
	scanf("%f %f", &x, &y);
	scanf("%f", &harga);
	
	for(i=0;i<n;i++){
		if(data[i]>=x&&data[i]<=y){
			jum++;}
		else paku+=ceil(data[i]);
	}

	per=(jum*100.0/n);
	rugi=paku*harga; 
	if(per!=100){
	printf("%.0f%% paku memenuhi standar, kerugian %.0f rupiah\n", per, rugi);}
	else{
	printf("%.0f%% paku memenuhi standar\n", per);}
	return 0;
	
	
	
	
	
	
	}
