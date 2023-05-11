#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	ifstream myfile;
       char sv_text;
       
       myfile.open("Daftar Perguruan Tinggi di Indonesia.txt");
       
    FILE *ptr;
    char ch;
    ptr = fopen("data.txt", "r");

    if (NULL == ptr)
    {
        printf("Daftar Perguruan Tinggi di Jawa Barat\n");
    }

    printf(" 1. Universitas Padjadjaran \n 2. Universitas Singaperbangsa Karawang\n 3. Universitas Siliwangi\n 4. Universitas Pendidikan Indonesia");
    do
    {
        ch = fgetc(ptr);
        printf("%c", ch);

    } while (ch != EOF);

    fclose(ptr);
    return 0;
}

