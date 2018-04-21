#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *text = NULL;
    char ch;
    int i,cek;
	int memory=1;
	text=(char*) malloc(memory);
    
    scanf("%c", &ch);
    for (i = 0; ch != '\n'; i++) {          // lakukan pembacaan karakter selama belum bertemu dengan newline
        // tambahkan satu ruang memori untuk text
        memory++;
        text[i]=ch ;          // masukkan karakter ch ke text
        scanf("%c", &ch);
    }

    for(cek=memory-1;cek>=0;cek--)// cetak terbalik dari belakang
    {
			printf("%c", text[cek]);
			}

    // bebaskan ruang memori dan kosongkan alamat yang ditunjuk oleh text
    free(text);

    return 0;
}
