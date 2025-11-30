//C代码
int add_a_and_b(int a, int b) {
   return a + b;
}

int main() {
   return add_a_and_b(2, 3);
}

/*
_add_a_and_b:
   push   %ebx  表示将EBX寄存器里面的值，写入_add_a_and_b这个帧
   mov    %eax, [%esp+8]  move指令将某个值写入某个寄存器 , 先将ESP寄存器里面的地址加上8个字节， 得到一个新地址，取出的是2， 再将2写入eax寄存器
   mov    %ebx, [%esp+12] 
   add    %eax, %ebx         将得到的结果5， 写入一个运算子EAX寄存器 
   pop    %ebx  pop指令用于取出Stack最近一个写入的值，并将这个值写入运算子指定的位置， 取出Stack最近写入的值，再将这个值写会EBX寄存器
   ret  终止当前函数的执行， 将运行权交还给上层函数， 也就是当前函数的帧将被回收

_main:
   push   3
   push   2
   call   _add_a_and_b 
   add    %esp, 8          表示将ESP寄存器里面的地址，手动加上8个字节， 再写回ESP寄存器
   ret

   */

// push指令 
// push 3  push指令用于将运算子放入stack, 这里是将3写入main这个帧
// push 有一个前置操作，会先取出ESP寄存器里面的地址， 将其减去4个字节，然后将新地址写入ESP寄存器
// STack从高位向低位发展， 3就会写入这个地址开始的4个字节

// call指令，用来调用函数

