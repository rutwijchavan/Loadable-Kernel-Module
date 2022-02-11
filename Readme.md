# Loadable-Kernel-Module
 Loadable-Kernel-Module script

Objectives:
1. Write a Loadable Kernel module.
Procedure/steps:
1. Create Makefile and C file using “touch” command in terminal and store both
file in same directory.
2. After that edit the Makefile and C file in text editor and save .
3. For compiling and creating object file run “make” command in terminal
4. After that to insert module use “insmod “module_name”.ko ” command. After
that to check module is included in kernel space use “lsmod | grep
“module_name” ”
5. To debug the module run command “dmesg | tail”
6. And last to remove the module use “rmmod “module_name”.ko “ . 



INFERENCE:
1. To load the kernel module in kernel space we need super user access . for
that we have to use sudo command.
2. In makefile name M should be capital M otherwise make command not
working.
3. Before compling and using make command we have to install “GCC” and
“make” using commands “sudo apt install gcc” and “sudo apt install make”
4. While writing the makefile and C file we have to use proper Indentation 
