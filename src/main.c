// main.c -- Defines the C-code kernel entry point, calls initialisation routines.
// Made for JamesM's tutorials 

#include "monitor.h"
#include "common.h"

int main(struct multiboot *mboot_ptr)
{
  // All our initialisation calls will go in here.

  //Testing screen instructions
  monitor_clear();
  monitor_write("Hello World");

  return 0xDEADBABA;
}
