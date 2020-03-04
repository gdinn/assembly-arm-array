# Assembly arm array

The goal of the project was to implementate the C code below using inline ASM with ARM:

....<br>
int i;<br>
for(i=0;i<8;i++){<br>
     w[i]=x[i]*y[i];<br>
}<br>
....<br>

Where x and y are arrays with 8 elements with fixed numbers. W also has 8 elements but its values will only depend of x and y.<br>

It was used a display to check if the assembly code was returning correct values.


Components used: <br>
STM32F103c8t6 <br>
LCD NOKIA5110 <br>

IDE: <br>
STM32CubeIde <br>
STM23CubeProgrammer (Writing inline asm programs doesnt let me rewrite the programs on the chip without hardware reset)<br>

All the credits of the LCD library goes to Borges Corporation on http://borgescorporation.blogspot.com/search?q=5110 <br>

Interesting links for inline assembly: <br>
https://gcc.gnu.org/onlinedocs/gcc/Extended-Asm.html#OutputOperands <br>
https://gcc.gnu.org/onlinedocs/gcc/Simple-Constraints.html#Simple-Constraints <br>
https://gcc.gnu.org/onlinedocs/gcc/Extended-Asm.html <br>
