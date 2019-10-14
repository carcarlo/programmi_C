#include <stdio.h>


int main(){
	
    int x = 10;
    int *Ptr;
    Ptr = &x;
	
	printf("%p\n",(void*)x);
    printf("%p\n",(void*)&x);
	
	printf("%i\n",x);
	printf("%p\n",x);
	printf("%p\n",&x);
	
   return 0;
}

/*
0xa
0x7fffe3139f8c

10
0xa
0x7fffe3139f8c
*/