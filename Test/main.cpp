#include <iostream>
#include <cstdlib> // Для работы с функцией system()
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdint.h>


int main(int argc, char** argv) {
	uint8_t tmp=5;
	
	for(;tmp<15;tmp++){
	printf("Hello world!  %d\n",tmp);	
	
	}
	for(tmp=0;tmp<15;tmp++){
	printf("Hello world!  %d\n",tmp);	
	
	}
	
	system("pause"); // Команда задержки экрана
	return 0;
}
