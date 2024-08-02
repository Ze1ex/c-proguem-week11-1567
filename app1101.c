#include <stdio.h>
#include "add.c"
#include "scb.c"
#include "mul.c"
int addCall();
int subCall();
int mulCall();
void main() 
{
    mulCall();
    // subCall();
    // addCall();
}

int mulCall()
{
    mul();
    return 0;
}

int subCall()
{
    sub();
    return 0;
}

int addCall(){
    add();
    return 0;
}