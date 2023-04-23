/* linker script code for Arm Cortex M3
   Author: Ibrahim Yosry             */

MEMORY
{
	Flash (rx)  : o = 0x08000000, l = 128K
	SRAM  (rwx) : o = 0x20000000, l = 20K
}

SECTIONS
{	
	.text :
	{
		_S_text = .;
		*(.vectors)
		. = ALIGN(4);
		*(.text)
		. = ALIGN(4);
		_E_text = .;
	}>Flash

	.rodata :
	{
		_S_rodata = .;
		*(.rodata)
		. = ALIGN(4);
		_E_rodata = .;
	}>Flash
	
	.data :
	{
		_S_data = .;
		*(.data)
		. = ALIGN(4);
		_E_data = .;
	}>SRAM AT>Flash
	
	.bss :
	{
		_S_bss = .;
		*(.bss)
		. = ALIGN(4);
		_E_bss = .;
	}>SRAM

	. = . + 0x1000;
	_stack_top = .;
}