/* linker script code for Arm Cortex M3
   Author: Ibrahim Yosry             */

MEMORY
{
	Flash (rx)  : o = 0x00000000, l = 256K
	SRAM  (rwx) : o = 0x20000000, l = 32K
}

SECTIONS
{	
	.text :
	{
		. = ALIGN(4);
		_S_text = .;
		*(.vectors)
		*(.text)
		*(.rodata)
		. = ALIGN(4);
		_E_text = .;
	}>Flash
	
	.data :
	{
		. = ALIGN(4);
		_S_data = .;
		*(.data)
		. = ALIGN(4);
		_E_data = .;
	}>SRAM AT>Flash
	
	.bss :
	{
		. = ALIGN(4);
		_S_bss = .;
		*(.bss)
		. = ALIGN(4);
		_E_bss = .;
	}>SRAM
}