#ifndef JOS_DEV_E100_H
#define JOS_DEV_E100_H 1

#include <dev/pci.h>

// Vendor ID
#define VENDOR_ID_82559		0x8086

// Device ID
#define DEVICE_ID_82559ER	0x1209

// Index of Base Address Register
#define CSR_MM_BAR_INDEX	0x0
#define CSR_IO_BAR_INDEX	0x1
#define CSR_FLASH_BAR_INDEX	0x2

// Declaration
int e100_attach(struct pci_func *pcif);

#endif	// !JOS_DEV_E100_H
