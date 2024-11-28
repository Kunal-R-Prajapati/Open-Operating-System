#include "types.h"
#include "gdt.h"

typedef void (*constructor)();
extern "C" constructor start_ctors;
extern "C" constructor end_ctors;
extern "C" void callConstructors()
{ 
    for (constructor* i = &start_ctors; i != &end_ctors; i++)
        (*i)();
    
}
void printf(char* str)
{
    uint16_t* VideoMemory = (uint16_t*)0xb8000;
     static uint32_t index = 0;
    for (int i = 0; str[i] !='\0'; i++)
    {
        VideoMemory[index++] = (VideoMemory[index] & 0xFF00) | str[i];
    }
    
}


extern "C" void kernelMain(void* multiboot_structure, uint32_t magicnumber)
{
    
    printf("Hello world ---- ");
    GlobalDescriptorTable gdt;
    while (1);
    
}