#include <iostream>
#include <cstdlib> // ��� ������ � �������� system()
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdint.h>


int main(int argc, char** argv) {
	uint8_t tmp=5;
	
	for(;tmp<15;tmp++){
	printf("Hello world!  %d\r\n",tmp);	
	}
	printf("6 commit  \r\n");
	system("pause"); // ������� �������� ������
	return 0;
}
