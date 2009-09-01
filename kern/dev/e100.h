#ifndef JOS_DEV_E100_H
#define JOS_DEV_E100_H 1

#include <dev/pci.h>

// Vendor ID
#define VENDOR_ID_82559		0x8086

// Device ID
#define DEVICE_ID_82559ER	0x1209

// Declaration
int e100_attach(struct pci_func *pcif);

#endif	// !JOS_DEV_E100_H
