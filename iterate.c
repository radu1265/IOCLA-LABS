#include <stdio.h>

/**
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

int main() {
	int i;
    char c;
    int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};
    char *p=(char*)v;
    short *q=(short*)v;
    int *r=v;
    for(i = 0; i < 5; i++){
	printf("VALOARE %d ",v[i]);
	printf("ADRESA %p\n",v+i);
    }
    printf("\n");
    for(i = 0; i < sizeof(v); i++){
        p++;
        printf("%p ",p);
    }
    printf("\n");
     for(i = 0; i < sizeof(short)(v); i++){
        q++;
        printf("%p ",q);
    }
    printf("\n");
     for(i = 0; i < sizeof(int)(v); i++){
        r++;
        printf("%p ",r);
    }
    printf("\n");
    return 0;
}
