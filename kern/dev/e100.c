// LAB 6: Your driver code here
#include <inc/stdio.h>
#include <dev/e100.h>

#define debug 1

// invoked when the ethernet device is found
int e100_attach(struct pci_func *pcif)
{
	if (debug)
		cprintf("e100_attach invoked!\n");
	return 0;
}

