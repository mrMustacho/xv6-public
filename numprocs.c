#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void) {
	cprintf("\n-->Number of procs.: ");
	cprintf("%d", getprocs());
	cprintf("<--\n");
	exit();
}
