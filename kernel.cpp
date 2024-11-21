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
    unsigned short* VideoMemory = (unsigned short*)0xb8000;
     static unsigned int index = 0;
    for (int i = 0; str[i] !='\0'; i++)
    {
        VideoMemory[index++] = (VideoMemory[index] & 0xFF00) | str[i];
    }
    
}


extern "C" void kernelMain(void* multiboot_structure, unsigned int magicnumber)
{
    
    printf("Hello world ---- ");

    while (1);
    
}