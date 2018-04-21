#include <stdio.h>


int main(){
	
	int i;
	char nim[9];
	for(i=0;i<9;i++){
		scanf("%c", &nim[i]);
	}
	if(nim[0]=='A'||nim[0]=='a') printf("Fakultas Pertanian\n");
	else if(nim[0]=='B'||nim[0]=='b') printf("Fakultas Kedokteran Hewan\n");
	else if(nim[0]=='C'||nim[0]=='c') printf("Fakultas Perikanan\n");
	else if(nim[0]=='D'||nim[0]=='d') printf("Fakultas Peternakan\n");
	else if(nim[0]=='E'||nim[0]=='e') printf("Fakultas Kehutanan\n");
	else if(nim[0]=='F'||nim[0]=='f') printf("Fakultas Teknik Pertanian\n");
	else if(nim[0]=='G'||nim[0]=='g') printf("Fakultas Matematika dan Ilmu Pengetahuan Alam\n");
	else if(nim[0]=='H'||nim[0]=='h') printf("Fakultas Ekonomi dan Manajemen\n");
	else if(nim[0]=='I'||nim[0]=='i') printf("Fakultas Ekologi Manusia\n");
	else
	
	return 0;
	
	
	}
