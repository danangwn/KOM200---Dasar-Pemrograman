#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *text = NULL;
    int n;
    int i;

    // baca jumlah karakter (n)
    scanf("%d\n", &n);

    // alokasi memori sebanyak n karakter
    text=(int *) malloc (n* sizeof(int));

    // baca n buah karakter
    for(i=0;i<n;i++){
		scanf("%c", &text[i]);}

    // cetak terbalik dari belakang
    for(i=n-1;i>=0;i--){
		printf("%c", text[i]);
	}
	printf("\n");
    // bebaskan ruang memori dan kosongkan alamat yang ditunjuk oleh text
    free(text);

    return 0;
}
