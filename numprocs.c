#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void) {
	printf(1, "\n-->Number of procs.: ");
	printf(1, "%d", getprocs());
	printf(1, "<--\n");
	exit();
}
