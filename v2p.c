#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    printf(1,"\n ---ADDRESS TRANSLATION---\n");
    char *va;
    va = argv[1];

    printf(1,"\n Entered virtual address [hex]: %s\n", va);

    if(getpa(va))
      printf(1,"\n Success...\n");
    else
      printf(1,"\n Failed...\n");

    exit();
}
