.global entry

.data                 /* data section*/
        .word 0x0001
        .word 0xFFFF   /* result goes here */
.text                /* code goes to text section*/
.ent entry
	j entry
	nop
	nop
	and $t0, $t0, 0x0
	rfe


entry:
        lw $t0, 0x200         /* t0 = 1*/
loop:
        add $t0, $t0, 0x1     
	add $t0, $t0, 0x1 
	add $t0, $t0, 0x1 
	add $t0, $t0, 0x1 
	add $t0, $t0, 0x1 
	add $t0, $t0, 0x1 
	add $t0, $t0, 0x1 
	add $t0, $t0, 0x1 
	add $t0, $t0, 0x1 
	add $t0, $t0, 0x1 
	add $t0, $t0, 0x1 
	add $t0, $t0, 0x1 
	add $t0, $t0, 0x1 
	add $t0, $t0, 0x1 
	add $t0, $t0, 0x1 
	add $t0, $t0, 0x1 
	add $t0, $t0, 0x1 
	add $t0, $t0, 0x1 
	j loop
.end entry
