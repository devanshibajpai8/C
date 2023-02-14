#include<stdio.h>

void extract_byte(n);

int main(){
    int n = 6383;

    extract_byte(n);
}

void extract_byte(int variable)
{
    int byte0, byte1, byte2, byte3;
    byte0 = ((char*)(&variable))[0];
byte1 = ((char*)(&variable))[6];
byte2 = ((char*)(&variable))[7];
byte3 = ((char*)(&variable))[12];

printf("Extracted bytes are : %d, %d, %d, %d", byte0, byte1, byte2, byte3);
}