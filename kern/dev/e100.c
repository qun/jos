// LAB 6: Your driver code here
#include <inc/stdio.h>
#include <inc/x86.h>
#include <dev/e100.h>

#define debug 1

static struct pci_func e100_pci;

static void delay_10us(void)
{
	int i;

	// each inb() takes about 1.25us
	for (i = 0; i < 8; i++)
		inb(0x84);
}

// invoked when the ethernet device is found
int e100_attach(struct pci_func *pcif)
{
	if (debug)
		cprintf("e100_attach invoked!\n");

	// enable the pci device
	// then, reg_base and reg_size are valid.
	// the meaning of these registers are described in Table 1.
	// reg_base[0]:	CSR Memory Mapped Base Address Register
	// reg_base[1]:	CSR I/O Mapped Base Address Register
	// reg_base[2]:	Flash Memory Mapped Base Address Register
	pci_func_enable(pcif);

	// save it
	e100_pci = *pcif;

	// software reset (write to PORT in CSR)
	outl(e100_pci.reg_base[CSR_IO_BAR_INDEX] + 0x8, 0x0);

	// delay for 10us, see 6.3.3.1
	delay_10us();

	return 1;
}

