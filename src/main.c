// main.c -- Defines the C-code kernel entry point, calls initialisation routines.
// Made for JamesM's tutorials 

#include "monitor.h"
#include "common.h"

int main(struct multiboot *mboot_ptr)
{
  // All our initialisation calls will go in here.
  
  //init descriptor tables
  init_descriptor_tables();
  //Testing screen instructions
  monitor_clear();
  monitor_write("Hello World");
  u32int n = 0xDEADBABA;

  monitor_write("\n");
  monitor_write_hex(n);
  
  monitor_write("\n");
  n = 1234567890;
  
  monitor_write_dec(n);

  asm volatile ("int $0x1");
  //asm volatile ("int $0x4");

  return 0xDEADBABA;
}
