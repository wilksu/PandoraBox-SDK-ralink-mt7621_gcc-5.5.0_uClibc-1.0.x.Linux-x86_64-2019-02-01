	.section .mdebug.abi32
	.previous
	.nan	legacy
	.module	softfloat
	.module	oddspreg

 # -G value = 0, Arch = mips32r2, ISA = 33
 # GNU C89 (PandoraBox GCC 5.5.0 2019-02-01-git-93f2639a7) version 5.5.0 (mipsel-openwrt-linux-uclibc)
 #	compiled by GNU C version 7.3.0, GMP version 5.1.3, MPFR version 3.1.2, MPC version 1.0.2
 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed:  -nostdinc
 # -I /home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/arch/mips/include
 # -I arch/mips/include/generated -I include
 # -I /home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/arch/mips/include/uapi
 # -I arch/mips/include/generated/uapi
 # -I /home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/include/uapi
 # -I include/generated/uapi
 # -I /home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/arch/mips/include/asm/mach-ralink
 # -I /home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/arch/mips/include/asm/mach-generic
 # -idirafter /home/lintel/PandoraBox-MT7621/staging_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/usr/include
 # -D __KERNEL__ -D VMLINUX_LOAD_ADDRESS=0xffffffff80001000 -D DATAOFFSET=0
 # -D GAS_HAS_SET_HARDFLOAT -D CC_HAVE_ASM_GOTO -D KBUILD_STR(s)=#s
 # -D KBUILD_BASENAME=KBUILD_STR(asm_offsets)
 # -D KBUILD_MODNAME=KBUILD_STR(asm_offsets)
 # -isystem /home/lintel/PandoraBox-MT7621/staging_dir/toolchain-mipsel_1004kc+dsp_gcc-5.5.0_uClibc-1.0.x/lib/gcc/mipsel-openwrt-linux-uclibc/5.5.0/include
 # -include /home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/include/linux/kconfig.h
 # -MD arch/mips/kernel/.asm-offsets.s.d arch/mips/kernel/asm-offsets.c
 # -G 0 -mel -mno-check-zero-division -mabi=32 -mno-abicalls
 # -mno-branch-likely -msoft-float -march=mips32r2 -mtune=1004kc -mllsc
 # -mplt -mips32r2 -mno-shared
 # -auxbase-strip arch/mips/kernel/asm-offsets.s -g -Os -Wall -Wundef
 # -Wstrict-prototypes -Wno-trigraphs -Werror=implicit-function-declaration
 # -Wno-format-security -Wno-maybe-uninitialized -Wframe-larger-than=2048
 # -Wno-unused-but-set-variable -Wdeclaration-after-statement
 # -Wno-pointer-sign -Werror=implicit-int -Werror=strict-prototypes
 # -Werror=date-time -std=gnu90 -fno-strict-aliasing -fno-common
 # -fno-delete-null-pointer-checks -fno-caller-saves -fno-pic
 # -ffreestanding -fstack-protector -fomit-frame-pointer
 # -fno-var-tracking-assignments -femit-struct-debug-baseonly
 # -fno-var-tracking -fno-strict-overflow -fconserve-stack
 # -ffunction-sections -fdata-sections -fverbose-asm
 # options enabled:  -faggressive-loop-optimizations -falign-functions
 # -falign-jumps -falign-labels -falign-loops -fauto-inc-dec
 # -fbranch-count-reg -fchkp-check-incomplete-type -fchkp-check-read
 # -fchkp-check-write -fchkp-instrument-calls -fchkp-narrow-bounds
 # -fchkp-optimize -fchkp-store-bounds -fchkp-use-static-bounds
 # -fchkp-use-static-const-bounds -fchkp-use-wrappers
 # -fcombine-stack-adjustments -fcompare-elim -fcprop-registers
 # -fcrossjumping -fcse-follow-jumps -fdata-sections -fdefer-pop
 # -fdelayed-branch -fdevirtualize -fdevirtualize-speculatively
 # -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-types
 # -fexpensive-optimizations -fforward-propagate -ffunction-cse
 # -ffunction-sections -fgcse -fgcse-lm -fgnu-runtime -fgnu-unique
 # -fguess-branch-probability -fhoist-adjacent-loads -fident
 # -fif-conversion -fif-conversion2 -findirect-inlining -finline
 # -finline-atomics -finline-functions -finline-functions-called-once
 # -finline-small-functions -fipa-cp -fipa-cp-alignment -fipa-icf
 # -fipa-icf-functions -fipa-icf-variables -fipa-profile -fipa-pure-const
 # -fipa-ra -fipa-reference -fipa-sra -fira-hoist-pressure
 # -fira-share-save-slots -fira-share-spill-slots
 # -fisolate-erroneous-paths-dereference -fivopts -fkeep-static-consts
 # -fleading-underscore -flifetime-dse -flra-remat -flto-odr-type-merging
 # -fmath-errno -fmerge-constants -fmerge-debug-strings
 # -fmove-loop-invariants -fomit-frame-pointer -foptimize-sibling-calls
 # -fpartial-inlining -fpcc-struct-return -fpeephole -fpeephole2 -fplt
 # -fprefetch-loop-arrays -freorder-blocks -freorder-functions
 # -frerun-cse-after-loop -fsched-critical-path-heuristic
 # -fsched-dep-count-heuristic -fsched-group-heuristic -fsched-interblock
 # -fsched-last-insn-heuristic -fsched-rank-heuristic -fsched-spec
 # -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fschedule-fusion
 # -fschedule-insns2 -fsemantic-interposition -fshow-column -fshrink-wrap
 # -fsigned-zeros -fsplit-ivs-in-unroller -fsplit-wide-types -fssa-phiopt
 # -fstack-protector -fstdarg-opt -fstrict-volatile-bitfields
 # -fsync-libcalls -fthread-jumps -ftoplevel-reorder -ftrapping-math
 # -ftree-bit-ccp -ftree-builtin-call-dce -ftree-ccp -ftree-ch
 # -ftree-coalesce-vars -ftree-copy-prop -ftree-copyrename -ftree-cselim
 # -ftree-dce -ftree-dominator-opts -ftree-dse -ftree-forwprop -ftree-fre
 # -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
 # -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
 # -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr
 # -ftree-sra -ftree-switch-conversion -ftree-tail-merge -ftree-ter
 # -ftree-vrp -funit-at-a-time -fverbose-asm -fzero-initialized-in-bss
 # -mdivide-traps -mdouble-float -mel -mexplicit-relocs -mextern-sdata
 # -mfp-exceptions -mfp32 -mfused-madd -mgp32 -mgpopt -mimadd -mllsc
 # -mlocal-sdata -mlong32 -mlra -mmemcpy -mno-mdmx -mno-mips16 -mno-mips3d
 # -modd-spreg -mplt -msoft-float -msplit-addresses -muclibc

	.text
$Ltext0:
	.cfi_sections	.debug_frame
	.section	.text.output_ptreg_defines,"ax",@progbits
	.align	2
	.globl	output_ptreg_defines
$LFB1992 = .
	.file 1 "arch/mips/kernel/asm-offsets.c"
	.loc 1 23 0
	.cfi_startproc
	.set	nomips16
	.set	nomicromips
	.ent	output_ptreg_defines
	.type	output_ptreg_defines, @function
output_ptreg_defines:
	.frame	$sp,0,$31		# vars= 0, regs= 0/0, args= 0, gp= 0
	.mask	0x00000000,0
	.fmask	0x00000000,0
	.loc 1 24 0
#APP
 # 24 "arch/mips/kernel/asm-offsets.c" 1
	
->#MIPS pt_regs offsets.
 # 0 "" 2
	.loc 1 25 0
 # 25 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R0 32 offsetof(struct pt_regs, regs[0])	 #
 # 0 "" 2
	.loc 1 26 0
 # 26 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R1 36 offsetof(struct pt_regs, regs[1])	 #
 # 0 "" 2
	.loc 1 27 0
 # 27 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R2 40 offsetof(struct pt_regs, regs[2])	 #
 # 0 "" 2
	.loc 1 28 0
 # 28 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R3 44 offsetof(struct pt_regs, regs[3])	 #
 # 0 "" 2
	.loc 1 29 0
 # 29 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R4 48 offsetof(struct pt_regs, regs[4])	 #
 # 0 "" 2
	.loc 1 30 0
 # 30 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R5 52 offsetof(struct pt_regs, regs[5])	 #
 # 0 "" 2
	.loc 1 31 0
 # 31 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R6 56 offsetof(struct pt_regs, regs[6])	 #
 # 0 "" 2
	.loc 1 32 0
 # 32 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R7 60 offsetof(struct pt_regs, regs[7])	 #
 # 0 "" 2
	.loc 1 33 0
 # 33 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R8 64 offsetof(struct pt_regs, regs[8])	 #
 # 0 "" 2
	.loc 1 34 0
 # 34 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R9 68 offsetof(struct pt_regs, regs[9])	 #
 # 0 "" 2
	.loc 1 35 0
 # 35 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R10 72 offsetof(struct pt_regs, regs[10])	 #
 # 0 "" 2
	.loc 1 36 0
 # 36 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R11 76 offsetof(struct pt_regs, regs[11])	 #
 # 0 "" 2
	.loc 1 37 0
 # 37 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R12 80 offsetof(struct pt_regs, regs[12])	 #
 # 0 "" 2
	.loc 1 38 0
 # 38 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R13 84 offsetof(struct pt_regs, regs[13])	 #
 # 0 "" 2
	.loc 1 39 0
 # 39 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R14 88 offsetof(struct pt_regs, regs[14])	 #
 # 0 "" 2
	.loc 1 40 0
 # 40 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R15 92 offsetof(struct pt_regs, regs[15])	 #
 # 0 "" 2
	.loc 1 41 0
 # 41 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R16 96 offsetof(struct pt_regs, regs[16])	 #
 # 0 "" 2
	.loc 1 42 0
 # 42 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R17 100 offsetof(struct pt_regs, regs[17])	 #
 # 0 "" 2
	.loc 1 43 0
 # 43 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R18 104 offsetof(struct pt_regs, regs[18])	 #
 # 0 "" 2
	.loc 1 44 0
 # 44 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R19 108 offsetof(struct pt_regs, regs[19])	 #
 # 0 "" 2
	.loc 1 45 0
 # 45 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R20 112 offsetof(struct pt_regs, regs[20])	 #
 # 0 "" 2
	.loc 1 46 0
 # 46 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R21 116 offsetof(struct pt_regs, regs[21])	 #
 # 0 "" 2
	.loc 1 47 0
 # 47 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R22 120 offsetof(struct pt_regs, regs[22])	 #
 # 0 "" 2
	.loc 1 48 0
 # 48 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R23 124 offsetof(struct pt_regs, regs[23])	 #
 # 0 "" 2
	.loc 1 49 0
 # 49 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R24 128 offsetof(struct pt_regs, regs[24])	 #
 # 0 "" 2
	.loc 1 50 0
 # 50 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R25 132 offsetof(struct pt_regs, regs[25])	 #
 # 0 "" 2
	.loc 1 51 0
 # 51 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R26 136 offsetof(struct pt_regs, regs[26])	 #
 # 0 "" 2
	.loc 1 52 0
 # 52 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R27 140 offsetof(struct pt_regs, regs[27])	 #
 # 0 "" 2
	.loc 1 53 0
 # 53 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R28 144 offsetof(struct pt_regs, regs[28])	 #
 # 0 "" 2
	.loc 1 54 0
 # 54 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R29 148 offsetof(struct pt_regs, regs[29])	 #
 # 0 "" 2
	.loc 1 55 0
 # 55 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R30 152 offsetof(struct pt_regs, regs[30])	 #
 # 0 "" 2
	.loc 1 56 0
 # 56 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_R31 156 offsetof(struct pt_regs, regs[31])	 #
 # 0 "" 2
	.loc 1 57 0
 # 57 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_LO 168 offsetof(struct pt_regs, lo)	 #
 # 0 "" 2
	.loc 1 58 0
 # 58 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_HI 164 offsetof(struct pt_regs, hi)	 #
 # 0 "" 2
	.loc 1 62 0
 # 62 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_EPC 180 offsetof(struct pt_regs, cp0_epc)	 #
 # 0 "" 2
	.loc 1 63 0
 # 63 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_BVADDR 172 offsetof(struct pt_regs, cp0_badvaddr)	 #
 # 0 "" 2
	.loc 1 64 0
 # 64 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_STATUS 160 offsetof(struct pt_regs, cp0_status)	 #
 # 0 "" 2
	.loc 1 65 0
 # 65 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_CAUSE 176 offsetof(struct pt_regs, cp0_cause)	 #
 # 0 "" 2
	.loc 1 73 0
 # 73 "arch/mips/kernel/asm-offsets.c" 1
	
->PT_SIZE 184 sizeof(struct pt_regs)	 #
 # 0 "" 2
	.loc 1 74 0
 # 74 "arch/mips/kernel/asm-offsets.c" 1
	
->
 # 0 "" 2
#NO_APP
	j	$31
	.end	output_ptreg_defines
	.cfi_endproc
$LFE1992:
	.size	output_ptreg_defines, .-output_ptreg_defines
	.section	.text.output_task_defines,"ax",@progbits
	.align	2
	.globl	output_task_defines
$LFB1993 = .
	.loc 1 78 0
	.cfi_startproc
	.set	nomips16
	.set	nomicromips
	.ent	output_task_defines
	.type	output_task_defines, @function
output_task_defines:
	.frame	$sp,0,$31		# vars= 0, regs= 0/0, args= 0, gp= 0
	.mask	0x00000000,0
	.fmask	0x00000000,0
	.loc 1 79 0
#APP
 # 79 "arch/mips/kernel/asm-offsets.c" 1
	
->#MIPS task_struct offsets.
 # 0 "" 2
	.loc 1 80 0
 # 80 "arch/mips/kernel/asm-offsets.c" 1
	
->TASK_STATE 0 offsetof(struct task_struct, state)	 #
 # 0 "" 2
	.loc 1 81 0
 # 81 "arch/mips/kernel/asm-offsets.c" 1
	
->TASK_THREAD_INFO 4 offsetof(struct task_struct, stack)	 #
 # 0 "" 2
	.loc 1 82 0
 # 82 "arch/mips/kernel/asm-offsets.c" 1
	
->TASK_FLAGS 12 offsetof(struct task_struct, flags)	 #
 # 0 "" 2
	.loc 1 83 0
 # 83 "arch/mips/kernel/asm-offsets.c" 1
	
->TASK_MM 448 offsetof(struct task_struct, mm)	 #
 # 0 "" 2
	.loc 1 84 0
 # 84 "arch/mips/kernel/asm-offsets.c" 1
	
->TASK_PID 520 offsetof(struct task_struct, pid)	 #
 # 0 "" 2
	.loc 1 86 0
 # 86 "arch/mips/kernel/asm-offsets.c" 1
	
->TASK_STACK_CANARY 528 offsetof(struct task_struct, stack_canary)	 #
 # 0 "" 2
	.loc 1 88 0
 # 88 "arch/mips/kernel/asm-offsets.c" 1
	
->TASK_STRUCT_SIZE 1608 sizeof(struct task_struct)	 #
 # 0 "" 2
	.loc 1 89 0
 # 89 "arch/mips/kernel/asm-offsets.c" 1
	
->
 # 0 "" 2
#NO_APP
	j	$31
	.end	output_task_defines
	.cfi_endproc
$LFE1993:
	.size	output_task_defines, .-output_task_defines
	.section	.text.output_thread_info_defines,"ax",@progbits
	.align	2
	.globl	output_thread_info_defines
$LFB1994 = .
	.loc 1 93 0
	.cfi_startproc
	.set	nomips16
	.set	nomicromips
	.ent	output_thread_info_defines
	.type	output_thread_info_defines, @function
output_thread_info_defines:
	.frame	$sp,0,$31		# vars= 0, regs= 0/0, args= 0, gp= 0
	.mask	0x00000000,0
	.fmask	0x00000000,0
	.loc 1 94 0
#APP
 # 94 "arch/mips/kernel/asm-offsets.c" 1
	
->#MIPS thread_info offsets.
 # 0 "" 2
	.loc 1 95 0
 # 95 "arch/mips/kernel/asm-offsets.c" 1
	
->TI_TASK 0 offsetof(struct thread_info, task)	 #
 # 0 "" 2
	.loc 1 96 0
 # 96 "arch/mips/kernel/asm-offsets.c" 1
	
->TI_EXEC_DOMAIN 4 offsetof(struct thread_info, exec_domain)	 #
 # 0 "" 2
	.loc 1 97 0
 # 97 "arch/mips/kernel/asm-offsets.c" 1
	
->TI_FLAGS 8 offsetof(struct thread_info, flags)	 #
 # 0 "" 2
	.loc 1 98 0
 # 98 "arch/mips/kernel/asm-offsets.c" 1
	
->TI_TP_VALUE 12 offsetof(struct thread_info, tp_value)	 #
 # 0 "" 2
	.loc 1 99 0
 # 99 "arch/mips/kernel/asm-offsets.c" 1
	
->TI_CPU 16 offsetof(struct thread_info, cpu)	 #
 # 0 "" 2
	.loc 1 100 0
 # 100 "arch/mips/kernel/asm-offsets.c" 1
	
->TI_PRE_COUNT 20 offsetof(struct thread_info, preempt_count)	 #
 # 0 "" 2
	.loc 1 101 0
 # 101 "arch/mips/kernel/asm-offsets.c" 1
	
->TI_ADDR_LIMIT 24 offsetof(struct thread_info, addr_limit)	 #
 # 0 "" 2
	.loc 1 102 0
 # 102 "arch/mips/kernel/asm-offsets.c" 1
	
->TI_RESTART_BLOCK 32 offsetof(struct thread_info, restart_block)	 #
 # 0 "" 2
	.loc 1 103 0
 # 103 "arch/mips/kernel/asm-offsets.c" 1
	
->TI_REGS 72 offsetof(struct thread_info, regs)	 #
 # 0 "" 2
	.loc 1 104 0
 # 104 "arch/mips/kernel/asm-offsets.c" 1
	
->_THREAD_SIZE 8192 THREAD_SIZE	 #
 # 0 "" 2
	.loc 1 105 0
 # 105 "arch/mips/kernel/asm-offsets.c" 1
	
->_THREAD_MASK 8191 THREAD_MASK	 #
 # 0 "" 2
	.loc 1 106 0
 # 106 "arch/mips/kernel/asm-offsets.c" 1
	
->_IRQ_STACK_SIZE 8192 IRQ_STACK_SIZE	 #
 # 0 "" 2
	.loc 1 107 0
 # 107 "arch/mips/kernel/asm-offsets.c" 1
	
->
 # 0 "" 2
#NO_APP
	j	$31
	.end	output_thread_info_defines
	.cfi_endproc
$LFE1994:
	.size	output_thread_info_defines, .-output_thread_info_defines
	.section	.text.output_thread_defines,"ax",@progbits
	.align	2
	.globl	output_thread_defines
$LFB1995 = .
	.loc 1 111 0
	.cfi_startproc
	.set	nomips16
	.set	nomicromips
	.ent	output_thread_defines
	.type	output_thread_defines, @function
output_thread_defines:
	.frame	$sp,0,$31		# vars= 0, regs= 0/0, args= 0, gp= 0
	.mask	0x00000000,0
	.fmask	0x00000000,0
	.loc 1 112 0
#APP
 # 112 "arch/mips/kernel/asm-offsets.c" 1
	
->#MIPS specific thread_struct offsets.
 # 0 "" 2
	.loc 1 113 0
 # 113 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_REG16 784 offsetof(struct task_struct, thread.reg16)	 #
 # 0 "" 2
	.loc 1 114 0
 # 114 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_REG17 788 offsetof(struct task_struct, thread.reg17)	 #
 # 0 "" 2
	.loc 1 115 0
 # 115 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_REG18 792 offsetof(struct task_struct, thread.reg18)	 #
 # 0 "" 2
	.loc 1 116 0
 # 116 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_REG19 796 offsetof(struct task_struct, thread.reg19)	 #
 # 0 "" 2
	.loc 1 117 0
 # 117 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_REG20 800 offsetof(struct task_struct, thread.reg20)	 #
 # 0 "" 2
	.loc 1 118 0
 # 118 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_REG21 804 offsetof(struct task_struct, thread.reg21)	 #
 # 0 "" 2
	.loc 1 119 0
 # 119 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_REG22 808 offsetof(struct task_struct, thread.reg22)	 #
 # 0 "" 2
	.loc 1 120 0
 # 120 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_REG23 812 offsetof(struct task_struct, thread.reg23)	 #
 # 0 "" 2
	.loc 1 121 0
 # 121 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_REG29 816 offsetof(struct task_struct, thread.reg29)	 #
 # 0 "" 2
	.loc 1 122 0
 # 122 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_REG30 820 offsetof(struct task_struct, thread.reg30)	 #
 # 0 "" 2
	.loc 1 123 0
 # 123 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_REG31 824 offsetof(struct task_struct, thread.reg31)	 #
 # 0 "" 2
	.loc 1 124 0
 # 124 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_STATUS 828 offsetof(struct task_struct, thread.cp0_status)	 #
 # 0 "" 2
	.loc 1 126 0
 # 126 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPU 832 offsetof(struct task_struct, thread.fpu)	 #
 # 0 "" 2
	.loc 1 128 0
 # 128 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_BVADDR 1156 offsetof(struct task_struct, thread.cp0_badvaddr)	 #
 # 0 "" 2
	.loc 1 130 0
 # 130 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_BUADDR 1160 offsetof(struct task_struct, thread.cp0_baduaddr)	 #
 # 0 "" 2
	.loc 1 132 0
 # 132 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_ECODE 1164 offsetof(struct task_struct, thread.error_code)	 #
 # 0 "" 2
	.loc 1 134 0
 # 134 "arch/mips/kernel/asm-offsets.c" 1
	
->
 # 0 "" 2
#NO_APP
	j	$31
	.end	output_thread_defines
	.cfi_endproc
$LFE1995:
	.size	output_thread_defines, .-output_thread_defines
	.section	.text.output_thread_fpu_defines,"ax",@progbits
	.align	2
	.globl	output_thread_fpu_defines
$LFB1996 = .
	.loc 1 138 0
	.cfi_startproc
	.set	nomips16
	.set	nomicromips
	.ent	output_thread_fpu_defines
	.type	output_thread_fpu_defines, @function
output_thread_fpu_defines:
	.frame	$sp,0,$31		# vars= 0, regs= 0/0, args= 0, gp= 0
	.mask	0x00000000,0
	.fmask	0x00000000,0
	.loc 1 139 0
#APP
 # 139 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR0 832 offsetof(struct task_struct, thread.fpu.fpr[0])	 #
 # 0 "" 2
	.loc 1 140 0
 # 140 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR1 840 offsetof(struct task_struct, thread.fpu.fpr[1])	 #
 # 0 "" 2
	.loc 1 141 0
 # 141 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR2 848 offsetof(struct task_struct, thread.fpu.fpr[2])	 #
 # 0 "" 2
	.loc 1 142 0
 # 142 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR3 856 offsetof(struct task_struct, thread.fpu.fpr[3])	 #
 # 0 "" 2
	.loc 1 143 0
 # 143 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR4 864 offsetof(struct task_struct, thread.fpu.fpr[4])	 #
 # 0 "" 2
	.loc 1 144 0
 # 144 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR5 872 offsetof(struct task_struct, thread.fpu.fpr[5])	 #
 # 0 "" 2
	.loc 1 145 0
 # 145 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR6 880 offsetof(struct task_struct, thread.fpu.fpr[6])	 #
 # 0 "" 2
	.loc 1 146 0
 # 146 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR7 888 offsetof(struct task_struct, thread.fpu.fpr[7])	 #
 # 0 "" 2
	.loc 1 147 0
 # 147 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR8 896 offsetof(struct task_struct, thread.fpu.fpr[8])	 #
 # 0 "" 2
	.loc 1 148 0
 # 148 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR9 904 offsetof(struct task_struct, thread.fpu.fpr[9])	 #
 # 0 "" 2
	.loc 1 149 0
 # 149 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR10 912 offsetof(struct task_struct, thread.fpu.fpr[10])	 #
 # 0 "" 2
	.loc 1 150 0
 # 150 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR11 920 offsetof(struct task_struct, thread.fpu.fpr[11])	 #
 # 0 "" 2
	.loc 1 151 0
 # 151 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR12 928 offsetof(struct task_struct, thread.fpu.fpr[12])	 #
 # 0 "" 2
	.loc 1 152 0
 # 152 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR13 936 offsetof(struct task_struct, thread.fpu.fpr[13])	 #
 # 0 "" 2
	.loc 1 153 0
 # 153 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR14 944 offsetof(struct task_struct, thread.fpu.fpr[14])	 #
 # 0 "" 2
	.loc 1 154 0
 # 154 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR15 952 offsetof(struct task_struct, thread.fpu.fpr[15])	 #
 # 0 "" 2
	.loc 1 155 0
 # 155 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR16 960 offsetof(struct task_struct, thread.fpu.fpr[16])	 #
 # 0 "" 2
	.loc 1 156 0
 # 156 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR17 968 offsetof(struct task_struct, thread.fpu.fpr[17])	 #
 # 0 "" 2
	.loc 1 157 0
 # 157 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR18 976 offsetof(struct task_struct, thread.fpu.fpr[18])	 #
 # 0 "" 2
	.loc 1 158 0
 # 158 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR19 984 offsetof(struct task_struct, thread.fpu.fpr[19])	 #
 # 0 "" 2
	.loc 1 159 0
 # 159 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR20 992 offsetof(struct task_struct, thread.fpu.fpr[20])	 #
 # 0 "" 2
	.loc 1 160 0
 # 160 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR21 1000 offsetof(struct task_struct, thread.fpu.fpr[21])	 #
 # 0 "" 2
	.loc 1 161 0
 # 161 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR22 1008 offsetof(struct task_struct, thread.fpu.fpr[22])	 #
 # 0 "" 2
	.loc 1 162 0
 # 162 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR23 1016 offsetof(struct task_struct, thread.fpu.fpr[23])	 #
 # 0 "" 2
	.loc 1 163 0
 # 163 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR24 1024 offsetof(struct task_struct, thread.fpu.fpr[24])	 #
 # 0 "" 2
	.loc 1 164 0
 # 164 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR25 1032 offsetof(struct task_struct, thread.fpu.fpr[25])	 #
 # 0 "" 2
	.loc 1 165 0
 # 165 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR26 1040 offsetof(struct task_struct, thread.fpu.fpr[26])	 #
 # 0 "" 2
	.loc 1 166 0
 # 166 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR27 1048 offsetof(struct task_struct, thread.fpu.fpr[27])	 #
 # 0 "" 2
	.loc 1 167 0
 # 167 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR28 1056 offsetof(struct task_struct, thread.fpu.fpr[28])	 #
 # 0 "" 2
	.loc 1 168 0
 # 168 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR29 1064 offsetof(struct task_struct, thread.fpu.fpr[29])	 #
 # 0 "" 2
	.loc 1 169 0
 # 169 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR30 1072 offsetof(struct task_struct, thread.fpu.fpr[30])	 #
 # 0 "" 2
	.loc 1 170 0
 # 170 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FPR31 1080 offsetof(struct task_struct, thread.fpu.fpr[31])	 #
 # 0 "" 2
	.loc 1 172 0
 # 172 "arch/mips/kernel/asm-offsets.c" 1
	
->THREAD_FCR31 1088 offsetof(struct task_struct, thread.fpu.fcr31)	 #
 # 0 "" 2
	.loc 1 173 0
 # 173 "arch/mips/kernel/asm-offsets.c" 1
	
->
 # 0 "" 2
#NO_APP
	j	$31
	.end	output_thread_fpu_defines
	.cfi_endproc
$LFE1996:
	.size	output_thread_fpu_defines, .-output_thread_fpu_defines
	.section	.text.output_mm_defines,"ax",@progbits
	.align	2
	.globl	output_mm_defines
$LFB1997 = .
	.loc 1 177 0
	.cfi_startproc
	.set	nomips16
	.set	nomicromips
	.ent	output_mm_defines
	.type	output_mm_defines, @function
output_mm_defines:
	.frame	$sp,0,$31		# vars= 0, regs= 0/0, args= 0, gp= 0
	.mask	0x00000000,0
	.fmask	0x00000000,0
	.loc 1 178 0
#APP
 # 178 "arch/mips/kernel/asm-offsets.c" 1
	
->#Size of struct page
 # 0 "" 2
	.loc 1 179 0
 # 179 "arch/mips/kernel/asm-offsets.c" 1
	
->STRUCT_PAGE_SIZE 32 sizeof(struct page)	 #
 # 0 "" 2
	.loc 1 180 0
 # 180 "arch/mips/kernel/asm-offsets.c" 1
	
->
 # 0 "" 2
	.loc 1 181 0
 # 181 "arch/mips/kernel/asm-offsets.c" 1
	
->#Linux mm_struct offsets.
 # 0 "" 2
	.loc 1 182 0
 # 182 "arch/mips/kernel/asm-offsets.c" 1
	
->MM_USERS 36 offsetof(struct mm_struct, mm_users)	 #
 # 0 "" 2
	.loc 1 183 0
 # 183 "arch/mips/kernel/asm-offsets.c" 1
	
->MM_PGD 32 offsetof(struct mm_struct, pgd)	 #
 # 0 "" 2
	.loc 1 184 0
 # 184 "arch/mips/kernel/asm-offsets.c" 1
	
->MM_CONTEXT 348 offsetof(struct mm_struct, context)	 #
 # 0 "" 2
	.loc 1 185 0
 # 185 "arch/mips/kernel/asm-offsets.c" 1
	
->
 # 0 "" 2
	.loc 1 186 0
 # 186 "arch/mips/kernel/asm-offsets.c" 1
	
->_PGD_T_SIZE 4 sizeof(pgd_t)	 #
 # 0 "" 2
	.loc 1 187 0
 # 187 "arch/mips/kernel/asm-offsets.c" 1
	
->_PMD_T_SIZE 4 sizeof(pmd_t)	 #
 # 0 "" 2
	.loc 1 188 0
 # 188 "arch/mips/kernel/asm-offsets.c" 1
	
->_PTE_T_SIZE 4 sizeof(pte_t)	 #
 # 0 "" 2
	.loc 1 189 0
 # 189 "arch/mips/kernel/asm-offsets.c" 1
	
->
 # 0 "" 2
	.loc 1 190 0
 # 190 "arch/mips/kernel/asm-offsets.c" 1
	
->_PGD_T_LOG2 2 PGD_T_LOG2	 #
 # 0 "" 2
	.loc 1 194 0
 # 194 "arch/mips/kernel/asm-offsets.c" 1
	
->_PTE_T_LOG2 2 PTE_T_LOG2	 #
 # 0 "" 2
	.loc 1 195 0
 # 195 "arch/mips/kernel/asm-offsets.c" 1
	
->
 # 0 "" 2
	.loc 1 196 0
 # 196 "arch/mips/kernel/asm-offsets.c" 1
	
->_PGD_ORDER 0 PGD_ORDER	 #
 # 0 "" 2
	.loc 1 200 0
 # 200 "arch/mips/kernel/asm-offsets.c" 1
	
->_PTE_ORDER 0 PTE_ORDER	 #
 # 0 "" 2
	.loc 1 201 0
 # 201 "arch/mips/kernel/asm-offsets.c" 1
	
->
 # 0 "" 2
	.loc 1 202 0
 # 202 "arch/mips/kernel/asm-offsets.c" 1
	
->_PMD_SHIFT 22 PMD_SHIFT	 #
 # 0 "" 2
	.loc 1 203 0
 # 203 "arch/mips/kernel/asm-offsets.c" 1
	
->_PGDIR_SHIFT 22 PGDIR_SHIFT	 #
 # 0 "" 2
	.loc 1 204 0
 # 204 "arch/mips/kernel/asm-offsets.c" 1
	
->
 # 0 "" 2
	.loc 1 205 0
 # 205 "arch/mips/kernel/asm-offsets.c" 1
	
->_PTRS_PER_PGD 1024 PTRS_PER_PGD	 #
 # 0 "" 2
	.loc 1 206 0
 # 206 "arch/mips/kernel/asm-offsets.c" 1
	
->_PTRS_PER_PMD 1 PTRS_PER_PMD	 #
 # 0 "" 2
	.loc 1 207 0
 # 207 "arch/mips/kernel/asm-offsets.c" 1
	
->_PTRS_PER_PTE 1024 PTRS_PER_PTE	 #
 # 0 "" 2
	.loc 1 208 0
 # 208 "arch/mips/kernel/asm-offsets.c" 1
	
->
 # 0 "" 2
	.loc 1 209 0
 # 209 "arch/mips/kernel/asm-offsets.c" 1
	
->_PAGE_SHIFT 12 PAGE_SHIFT	 #
 # 0 "" 2
	.loc 1 210 0
 # 210 "arch/mips/kernel/asm-offsets.c" 1
	
->_PAGE_SIZE 4096 PAGE_SIZE	 #
 # 0 "" 2
	.loc 1 211 0
 # 211 "arch/mips/kernel/asm-offsets.c" 1
	
->
 # 0 "" 2
#NO_APP
	j	$31
	.end	output_mm_defines
	.cfi_endproc
$LFE1997:
	.size	output_mm_defines, .-output_mm_defines
	.section	.text.output_sc_defines,"ax",@progbits
	.align	2
	.globl	output_sc_defines
$LFB1998 = .
	.loc 1 216 0
	.cfi_startproc
	.set	nomips16
	.set	nomicromips
	.ent	output_sc_defines
	.type	output_sc_defines, @function
output_sc_defines:
	.frame	$sp,0,$31		# vars= 0, regs= 0/0, args= 0, gp= 0
	.mask	0x00000000,0
	.fmask	0x00000000,0
	.loc 1 217 0
#APP
 # 217 "arch/mips/kernel/asm-offsets.c" 1
	
->#Linux sigcontext offsets.
 # 0 "" 2
	.loc 1 218 0
 # 218 "arch/mips/kernel/asm-offsets.c" 1
	
->SC_REGS 16 offsetof(struct sigcontext, sc_regs)	 #
 # 0 "" 2
	.loc 1 219 0
 # 219 "arch/mips/kernel/asm-offsets.c" 1
	
->SC_FPREGS 272 offsetof(struct sigcontext, sc_fpregs)	 #
 # 0 "" 2
	.loc 1 220 0
 # 220 "arch/mips/kernel/asm-offsets.c" 1
	
->SC_ACX 528 offsetof(struct sigcontext, sc_acx)	 #
 # 0 "" 2
	.loc 1 221 0
 # 221 "arch/mips/kernel/asm-offsets.c" 1
	
->SC_MDHI 552 offsetof(struct sigcontext, sc_mdhi)	 #
 # 0 "" 2
	.loc 1 222 0
 # 222 "arch/mips/kernel/asm-offsets.c" 1
	
->SC_MDLO 560 offsetof(struct sigcontext, sc_mdlo)	 #
 # 0 "" 2
	.loc 1 223 0
 # 223 "arch/mips/kernel/asm-offsets.c" 1
	
->SC_PC 8 offsetof(struct sigcontext, sc_pc)	 #
 # 0 "" 2
	.loc 1 224 0
 # 224 "arch/mips/kernel/asm-offsets.c" 1
	
->SC_FPC_CSR 532 offsetof(struct sigcontext, sc_fpc_csr)	 #
 # 0 "" 2
	.loc 1 225 0
 # 225 "arch/mips/kernel/asm-offsets.c" 1
	
->SC_FPC_EIR 536 offsetof(struct sigcontext, sc_fpc_eir)	 #
 # 0 "" 2
	.loc 1 226 0
 # 226 "arch/mips/kernel/asm-offsets.c" 1
	
->SC_HI1 568 offsetof(struct sigcontext, sc_hi1)	 #
 # 0 "" 2
	.loc 1 227 0
 # 227 "arch/mips/kernel/asm-offsets.c" 1
	
->SC_LO1 572 offsetof(struct sigcontext, sc_lo1)	 #
 # 0 "" 2
	.loc 1 228 0
 # 228 "arch/mips/kernel/asm-offsets.c" 1
	
->SC_HI2 576 offsetof(struct sigcontext, sc_hi2)	 #
 # 0 "" 2
	.loc 1 229 0
 # 229 "arch/mips/kernel/asm-offsets.c" 1
	
->SC_LO2 580 offsetof(struct sigcontext, sc_lo2)	 #
 # 0 "" 2
	.loc 1 230 0
 # 230 "arch/mips/kernel/asm-offsets.c" 1
	
->SC_HI3 584 offsetof(struct sigcontext, sc_hi3)	 #
 # 0 "" 2
	.loc 1 231 0
 # 231 "arch/mips/kernel/asm-offsets.c" 1
	
->SC_LO3 588 offsetof(struct sigcontext, sc_lo3)	 #
 # 0 "" 2
	.loc 1 232 0
 # 232 "arch/mips/kernel/asm-offsets.c" 1
	
->
 # 0 "" 2
#NO_APP
	j	$31
	.end	output_sc_defines
	.cfi_endproc
$LFE1998:
	.size	output_sc_defines, .-output_sc_defines
	.section	.text.output_signal_defined,"ax",@progbits
	.align	2
	.globl	output_signal_defined
$LFB1999 = .
	.loc 1 262 0
	.cfi_startproc
	.set	nomips16
	.set	nomicromips
	.ent	output_signal_defined
	.type	output_signal_defined, @function
output_signal_defined:
	.frame	$sp,0,$31		# vars= 0, regs= 0/0, args= 0, gp= 0
	.mask	0x00000000,0
	.fmask	0x00000000,0
	.loc 1 263 0
#APP
 # 263 "arch/mips/kernel/asm-offsets.c" 1
	
->#Linux signal numbers.
 # 0 "" 2
	.loc 1 264 0
 # 264 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGHUP 1 SIGHUP	 #
 # 0 "" 2
	.loc 1 265 0
 # 265 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGINT 2 SIGINT	 #
 # 0 "" 2
	.loc 1 266 0
 # 266 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGQUIT 3 SIGQUIT	 #
 # 0 "" 2
	.loc 1 267 0
 # 267 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGILL 4 SIGILL	 #
 # 0 "" 2
	.loc 1 268 0
 # 268 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGTRAP 5 SIGTRAP	 #
 # 0 "" 2
	.loc 1 269 0
 # 269 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGIOT 6 SIGIOT	 #
 # 0 "" 2
	.loc 1 270 0
 # 270 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGABRT 6 SIGABRT	 #
 # 0 "" 2
	.loc 1 271 0
 # 271 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGEMT 7 SIGEMT	 #
 # 0 "" 2
	.loc 1 272 0
 # 272 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGFPE 8 SIGFPE	 #
 # 0 "" 2
	.loc 1 273 0
 # 273 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGKILL 9 SIGKILL	 #
 # 0 "" 2
	.loc 1 274 0
 # 274 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGBUS 10 SIGBUS	 #
 # 0 "" 2
	.loc 1 275 0
 # 275 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGSEGV 11 SIGSEGV	 #
 # 0 "" 2
	.loc 1 276 0
 # 276 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGSYS 12 SIGSYS	 #
 # 0 "" 2
	.loc 1 277 0
 # 277 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGPIPE 13 SIGPIPE	 #
 # 0 "" 2
	.loc 1 278 0
 # 278 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGALRM 14 SIGALRM	 #
 # 0 "" 2
	.loc 1 279 0
 # 279 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGTERM 15 SIGTERM	 #
 # 0 "" 2
	.loc 1 280 0
 # 280 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGUSR1 16 SIGUSR1	 #
 # 0 "" 2
	.loc 1 281 0
 # 281 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGUSR2 17 SIGUSR2	 #
 # 0 "" 2
	.loc 1 282 0
 # 282 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGCHLD 18 SIGCHLD	 #
 # 0 "" 2
	.loc 1 283 0
 # 283 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGPWR 19 SIGPWR	 #
 # 0 "" 2
	.loc 1 284 0
 # 284 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGWINCH 20 SIGWINCH	 #
 # 0 "" 2
	.loc 1 285 0
 # 285 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGURG 21 SIGURG	 #
 # 0 "" 2
	.loc 1 286 0
 # 286 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGIO 22 SIGIO	 #
 # 0 "" 2
	.loc 1 287 0
 # 287 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGSTOP 23 SIGSTOP	 #
 # 0 "" 2
	.loc 1 288 0
 # 288 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGTSTP 24 SIGTSTP	 #
 # 0 "" 2
	.loc 1 289 0
 # 289 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGCONT 25 SIGCONT	 #
 # 0 "" 2
	.loc 1 290 0
 # 290 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGTTIN 26 SIGTTIN	 #
 # 0 "" 2
	.loc 1 291 0
 # 291 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGTTOU 27 SIGTTOU	 #
 # 0 "" 2
	.loc 1 292 0
 # 292 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGVTALRM 28 SIGVTALRM	 #
 # 0 "" 2
	.loc 1 293 0
 # 293 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGPROF 29 SIGPROF	 #
 # 0 "" 2
	.loc 1 294 0
 # 294 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGXCPU 30 SIGXCPU	 #
 # 0 "" 2
	.loc 1 295 0
 # 295 "arch/mips/kernel/asm-offsets.c" 1
	
->_SIGXFSZ 31 SIGXFSZ	 #
 # 0 "" 2
	.loc 1 296 0
 # 296 "arch/mips/kernel/asm-offsets.c" 1
	
->
 # 0 "" 2
#NO_APP
	j	$31
	.end	output_signal_defined
	.cfi_endproc
$LFE1999:
	.size	output_signal_defined, .-output_signal_defined
	.section	.text.output_kvm_defines,"ax",@progbits
	.align	2
	.globl	output_kvm_defines
$LFB2000 = .
	.loc 1 339 0
	.cfi_startproc
	.set	nomips16
	.set	nomicromips
	.ent	output_kvm_defines
	.type	output_kvm_defines, @function
output_kvm_defines:
	.frame	$sp,0,$31		# vars= 0, regs= 0/0, args= 0, gp= 0
	.mask	0x00000000,0
	.fmask	0x00000000,0
	.loc 1 340 0
#APP
 # 340 "arch/mips/kernel/asm-offsets.c" 1
	
-># KVM/MIPS Specfic offsets. 
 # 0 "" 2
	.loc 1 341 0
 # 341 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_ARCH_SIZE 2384 sizeof(struct kvm_vcpu_arch)	 #
 # 0 "" 2
	.loc 1 342 0
 # 342 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_RUN 48 offsetof(struct kvm_vcpu, run)	 #
 # 0 "" 2
	.loc 1 343 0
 # 343 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_HOST_ARCH 224 offsetof(struct kvm_vcpu, arch)	 #
 # 0 "" 2
	.loc 1 345 0
 # 345 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_HOST_EBASE 0 offsetof(struct kvm_vcpu_arch, host_ebase)	 #
 # 0 "" 2
	.loc 1 346 0
 # 346 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_GUEST_EBASE 4 offsetof(struct kvm_vcpu_arch, guest_ebase)	 #
 # 0 "" 2
	.loc 1 348 0
 # 348 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_HOST_STACK 12 offsetof(struct kvm_vcpu_arch, host_stack)	 #
 # 0 "" 2
	.loc 1 349 0
 # 349 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_HOST_GP 16 offsetof(struct kvm_vcpu_arch, host_gp)	 #
 # 0 "" 2
	.loc 1 351 0
 # 351 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_HOST_CP0_BADVADDR 20 offsetof(struct kvm_vcpu_arch, host_cp0_badvaddr)	 #
 # 0 "" 2
	.loc 1 352 0
 # 352 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_HOST_CP0_CAUSE 24 offsetof(struct kvm_vcpu_arch, host_cp0_cause)	 #
 # 0 "" 2
	.loc 1 353 0
 # 353 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_HOST_EPC 28 offsetof(struct kvm_vcpu_arch, host_cp0_epc)	 #
 # 0 "" 2
	.loc 1 354 0
 # 354 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_HOST_ENTRYHI 32 offsetof(struct kvm_vcpu_arch, host_cp0_entryhi)	 #
 # 0 "" 2
	.loc 1 356 0
 # 356 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_GUEST_INST 36 offsetof(struct kvm_vcpu_arch, guest_inst)	 #
 # 0 "" 2
	.loc 1 358 0
 # 358 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R0 40 offsetof(struct kvm_vcpu_arch, gprs[0])	 #
 # 0 "" 2
	.loc 1 359 0
 # 359 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R1 44 offsetof(struct kvm_vcpu_arch, gprs[1])	 #
 # 0 "" 2
	.loc 1 360 0
 # 360 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R2 48 offsetof(struct kvm_vcpu_arch, gprs[2])	 #
 # 0 "" 2
	.loc 1 361 0
 # 361 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R3 52 offsetof(struct kvm_vcpu_arch, gprs[3])	 #
 # 0 "" 2
	.loc 1 362 0
 # 362 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R4 56 offsetof(struct kvm_vcpu_arch, gprs[4])	 #
 # 0 "" 2
	.loc 1 363 0
 # 363 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R5 60 offsetof(struct kvm_vcpu_arch, gprs[5])	 #
 # 0 "" 2
	.loc 1 364 0
 # 364 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R6 64 offsetof(struct kvm_vcpu_arch, gprs[6])	 #
 # 0 "" 2
	.loc 1 365 0
 # 365 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R7 68 offsetof(struct kvm_vcpu_arch, gprs[7])	 #
 # 0 "" 2
	.loc 1 366 0
 # 366 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R8 72 offsetof(struct kvm_vcpu_arch, gprs[8])	 #
 # 0 "" 2
	.loc 1 367 0
 # 367 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R9 76 offsetof(struct kvm_vcpu_arch, gprs[9])	 #
 # 0 "" 2
	.loc 1 368 0
 # 368 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R10 80 offsetof(struct kvm_vcpu_arch, gprs[10])	 #
 # 0 "" 2
	.loc 1 369 0
 # 369 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R11 84 offsetof(struct kvm_vcpu_arch, gprs[11])	 #
 # 0 "" 2
	.loc 1 370 0
 # 370 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R12 88 offsetof(struct kvm_vcpu_arch, gprs[12])	 #
 # 0 "" 2
	.loc 1 371 0
 # 371 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R13 92 offsetof(struct kvm_vcpu_arch, gprs[13])	 #
 # 0 "" 2
	.loc 1 372 0
 # 372 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R14 96 offsetof(struct kvm_vcpu_arch, gprs[14])	 #
 # 0 "" 2
	.loc 1 373 0
 # 373 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R15 100 offsetof(struct kvm_vcpu_arch, gprs[15])	 #
 # 0 "" 2
	.loc 1 374 0
 # 374 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R16 104 offsetof(struct kvm_vcpu_arch, gprs[16])	 #
 # 0 "" 2
	.loc 1 375 0
 # 375 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R17 108 offsetof(struct kvm_vcpu_arch, gprs[17])	 #
 # 0 "" 2
	.loc 1 376 0
 # 376 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R18 112 offsetof(struct kvm_vcpu_arch, gprs[18])	 #
 # 0 "" 2
	.loc 1 377 0
 # 377 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R19 116 offsetof(struct kvm_vcpu_arch, gprs[19])	 #
 # 0 "" 2
	.loc 1 378 0
 # 378 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R20 120 offsetof(struct kvm_vcpu_arch, gprs[20])	 #
 # 0 "" 2
	.loc 1 379 0
 # 379 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R21 124 offsetof(struct kvm_vcpu_arch, gprs[21])	 #
 # 0 "" 2
	.loc 1 380 0
 # 380 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R22 128 offsetof(struct kvm_vcpu_arch, gprs[22])	 #
 # 0 "" 2
	.loc 1 381 0
 # 381 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R23 132 offsetof(struct kvm_vcpu_arch, gprs[23])	 #
 # 0 "" 2
	.loc 1 382 0
 # 382 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R24 136 offsetof(struct kvm_vcpu_arch, gprs[24])	 #
 # 0 "" 2
	.loc 1 383 0
 # 383 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R25 140 offsetof(struct kvm_vcpu_arch, gprs[25])	 #
 # 0 "" 2
	.loc 1 384 0
 # 384 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R26 144 offsetof(struct kvm_vcpu_arch, gprs[26])	 #
 # 0 "" 2
	.loc 1 385 0
 # 385 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R27 148 offsetof(struct kvm_vcpu_arch, gprs[27])	 #
 # 0 "" 2
	.loc 1 386 0
 # 386 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R28 152 offsetof(struct kvm_vcpu_arch, gprs[28])	 #
 # 0 "" 2
	.loc 1 387 0
 # 387 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R29 156 offsetof(struct kvm_vcpu_arch, gprs[29])	 #
 # 0 "" 2
	.loc 1 388 0
 # 388 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R30 160 offsetof(struct kvm_vcpu_arch, gprs[30])	 #
 # 0 "" 2
	.loc 1 389 0
 # 389 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_R31 164 offsetof(struct kvm_vcpu_arch, gprs[31])	 #
 # 0 "" 2
	.loc 1 390 0
 # 390 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_LO 172 offsetof(struct kvm_vcpu_arch, lo)	 #
 # 0 "" 2
	.loc 1 391 0
 # 391 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_HI 168 offsetof(struct kvm_vcpu_arch, hi)	 #
 # 0 "" 2
	.loc 1 392 0
 # 392 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_PC 176 offsetof(struct kvm_vcpu_arch, pc)	 #
 # 0 "" 2
	.loc 1 393 0
 # 393 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_COP0 448 offsetof(struct kvm_vcpu_arch, cop0)	 #
 # 0 "" 2
	.loc 1 394 0
 # 394 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_GUEST_KERNEL_ASID 1520 offsetof(struct kvm_vcpu_arch, guest_kernel_asid)	 #
 # 0 "" 2
	.loc 1 395 0
 # 395 "arch/mips/kernel/asm-offsets.c" 1
	
->VCPU_GUEST_USER_ASID 1504 offsetof(struct kvm_vcpu_arch, guest_user_asid)	 #
 # 0 "" 2
	.loc 1 397 0
 # 397 "arch/mips/kernel/asm-offsets.c" 1
	
->COP0_TLB_HI 320 offsetof(struct mips_coproc, reg[10][0])	 #
 # 0 "" 2
	.loc 1 398 0
 # 398 "arch/mips/kernel/asm-offsets.c" 1
	
->COP0_STATUS 384 offsetof(struct mips_coproc, reg[12][0])	 #
 # 0 "" 2
	.loc 1 399 0
 # 399 "arch/mips/kernel/asm-offsets.c" 1
	
->
 # 0 "" 2
#NO_APP
	j	$31
	.end	output_kvm_defines
	.cfi_endproc
$LFE2000:
	.size	output_kvm_defines, .-output_kvm_defines
	.text
$Letext0:
	.file 2 "include/linux/types.h"
	.file 3 "include/asm-generic/atomic-long.h"
	.file 4 "/home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/arch/mips/include/asm/page.h"
	.file 5 "/home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/arch/mips/include/asm/cpu-info.h"
	.file 6 "include/linux/printk.h"
	.file 7 "include/linux/kernel.h"
	.file 8 "include/linux/cpumask.h"
	.file 9 "include/linux/time.h"
	.file 10 "/home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/arch/mips/include/asm/smp.h"
	.file 11 "/home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/arch/mips/include/asm/smp-ops.h"
	.file 12 "/home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/arch/mips/include/asm/io.h"
	.file 13 "include/linux/mm.h"
	.file 14 "include/linux/projid.h"
	.file 15 "include/linux/sched.h"
	.file 16 "include/asm-generic/percpu.h"
	.file 17 "include/linux/mmzone.h"
	.file 18 "include/linux/workqueue.h"
	.file 19 "include/linux/percpu_counter.h"
	.file 20 "include/linux/debug_locks.h"
	.file 21 "/home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/arch/mips/include/asm/pgtable-32.h"
	.file 22 "/home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/arch/mips/include/asm/pgtable.h"
	.file 23 "include/asm-generic/pgtable.h"
	.file 24 "include/linux/vmstat.h"
	.file 25 "include/linux/slab.h"
	.file 26 "include/linux/dcache.h"
	.file 27 "include/linux/jump_label.h"
	.file 28 "include/linux/quota.h"
	.file 29 "include/linux/cgroup_subsys.h"
	.file 30 "/home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/arch/mips/include/asm/irq.h"
	.file 31 "include/linux/memcontrol.h"
	.file 32 "include/linux/ioport.h"
	.file 33 "include/linux/swap.h"
	.file 34 "include/linux/freezer.h"
	.file 35 "include/linux/suspend.h"
	.file 36 "include/linux/interrupt.h"
	.section	.debug_info,"",@progbits
$Ldebug_info0:
	.4byte	0x4c7
	.2byte	0x4
	.4byte	$Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.4byte	$LASF89
	.byte	0x1
	.4byte	$LASF90
	.4byte	$LASF91
	.4byte	$Ldebug_ranges0+0
	.4byte	0
	.4byte	$Ldebug_line0
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.4byte	$LASF0
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.4byte	$LASF1
	.uleb128 0x2
	.byte	0x2
	.byte	0x5
	.4byte	$LASF2
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.4byte	$LASF3
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.ascii	"int\000"
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	$LASF4
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.4byte	$LASF5
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.4byte	$LASF6
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	$LASF7
	.uleb128 0x2
	.byte	0x4
	.byte	0x5
	.4byte	$LASF8
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.4byte	$LASF9
	.uleb128 0x4
	.4byte	$LASF11
	.byte	0x2
	.byte	0x1d
	.4byte	0x7d
	.uleb128 0x2
	.byte	0x1
	.byte	0x2
	.4byte	$LASF10
	.uleb128 0x5
	.uleb128 0x4
	.4byte	$LASF12
	.byte	0x2
	.byte	0xb1
	.4byte	0x84
	.uleb128 0x6
	.4byte	$LASF13
	.uleb128 0x6
	.4byte	$LASF14
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	$LASF15
	.uleb128 0x4
	.4byte	$LASF16
	.byte	0x3
	.byte	0x8d
	.4byte	0x85
	.uleb128 0x7
	.byte	0x4
	.uleb128 0x6
	.4byte	$LASF17
	.uleb128 0x5
	.uleb128 0x4
	.4byte	$LASF18
	.byte	0x4
	.byte	0x82
	.4byte	0xb3
	.uleb128 0x8
	.byte	0x4
	.4byte	0xc5
	.uleb128 0x6
	.4byte	$LASF19
	.uleb128 0x9
	.ascii	"pid\000"
	.uleb128 0x8
	.byte	0x4
	.4byte	0xd5
	.uleb128 0xa
	.4byte	0xe0
	.uleb128 0xb
	.4byte	0x5d
	.byte	0
	.uleb128 0x6
	.4byte	$LASF20
	.uleb128 0x6
	.4byte	$LASF21
	.uleb128 0x6
	.4byte	$LASF22
	.uleb128 0x6
	.4byte	$LASF23
	.uleb128 0x6
	.4byte	$LASF24
	.uleb128 0x6
	.4byte	$LASF25
	.uleb128 0xc
	.4byte	0x6b
	.uleb128 0x6
	.4byte	$LASF26
	.uleb128 0x6
	.4byte	$LASF27
	.uleb128 0x6
	.4byte	$LASF28
	.uleb128 0xd
	.4byte	$LASF29
	.byte	0x1
	.byte	0x16
	.4byte	$LFB1992
	.4byte	$LFE1992-$LFB1992
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xd
	.4byte	$LASF30
	.byte	0x1
	.byte	0x4d
	.4byte	$LFB1993
	.4byte	$LFE1993-$LFB1993
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xd
	.4byte	$LASF31
	.byte	0x1
	.byte	0x5c
	.4byte	$LFB1994
	.4byte	$LFE1994-$LFB1994
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xd
	.4byte	$LASF32
	.byte	0x1
	.byte	0x6e
	.4byte	$LFB1995
	.4byte	$LFE1995-$LFB1995
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xd
	.4byte	$LASF33
	.byte	0x1
	.byte	0x89
	.4byte	$LFB1996
	.4byte	$LFE1996-$LFB1996
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xd
	.4byte	$LASF34
	.byte	0x1
	.byte	0xb0
	.4byte	$LFB1997
	.4byte	$LFE1997-$LFB1997
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xd
	.4byte	$LASF35
	.byte	0x1
	.byte	0xd7
	.4byte	$LFB1998
	.4byte	$LFE1998-$LFB1998
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xe
	.4byte	$LASF36
	.byte	0x1
	.2byte	0x105
	.4byte	$LFB1999
	.4byte	$LFE1999-$LFB1999
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xe
	.4byte	$LASF37
	.byte	0x1
	.2byte	0x152
	.4byte	$LFB2000
	.4byte	$LFE2000-$LFB2000
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x6
	.4byte	$LASF38
	.uleb128 0x6
	.4byte	$LASF39
	.uleb128 0x6
	.4byte	$LASF40
	.uleb128 0xf
	.4byte	0x90
	.4byte	0x1c7
	.uleb128 0x10
	.byte	0
	.uleb128 0x11
	.4byte	$LASF41
	.byte	0x5
	.byte	0x57
	.4byte	0x1bc
	.uleb128 0xf
	.4byte	0x41
	.4byte	0x1dd
	.uleb128 0x10
	.byte	0
	.uleb128 0x11
	.4byte	$LASF42
	.byte	0x6
	.byte	0x25
	.4byte	0x1d2
	.uleb128 0x12
	.4byte	$LASF43
	.byte	0x7
	.2byte	0x1a8
	.4byte	0x41
	.uleb128 0xf
	.4byte	0xfe
	.4byte	0x1ff
	.uleb128 0x10
	.byte	0
	.uleb128 0x12
	.4byte	$LASF44
	.byte	0x7
	.2byte	0x1d9
	.4byte	0x20b
	.uleb128 0xc
	.4byte	0x1f4
	.uleb128 0x12
	.4byte	$LASF45
	.byte	0x7
	.2byte	0x1e4
	.4byte	0x21c
	.uleb128 0xc
	.4byte	0x1f4
	.uleb128 0x11
	.4byte	$LASF46
	.byte	0x8
	.byte	0x1c
	.4byte	0x41
	.uleb128 0x11
	.4byte	$LASF47
	.byte	0x8
	.byte	0x50
	.4byte	0x242
	.uleb128 0x8
	.byte	0x4
	.4byte	0x23d
	.uleb128 0xc
	.4byte	0x95
	.uleb128 0xc
	.4byte	0x237
	.uleb128 0xf
	.4byte	0x25d
	.4byte	0x25d
	.uleb128 0x13
	.4byte	0x9a
	.byte	0x20
	.uleb128 0x13
	.4byte	0x9a
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x5d
	.uleb128 0x12
	.4byte	$LASF48
	.byte	0x8
	.2byte	0x2f9
	.4byte	0x26e
	.uleb128 0xc
	.4byte	0x247
	.uleb128 0x11
	.4byte	$LASF49
	.byte	0x9
	.byte	0x76
	.4byte	0x72
	.uleb128 0x11
	.4byte	$LASF50
	.byte	0xa
	.byte	0x5b
	.4byte	0x289
	.uleb128 0x8
	.byte	0x4
	.4byte	0xae
	.uleb128 0x11
	.4byte	$LASF51
	.byte	0xb
	.byte	0x40
	.4byte	0xae
	.uleb128 0x11
	.4byte	$LASF52
	.byte	0xb
	.byte	0x4d
	.4byte	0xae
	.uleb128 0x11
	.4byte	$LASF53
	.byte	0xb
	.byte	0x5a
	.4byte	0xae
	.uleb128 0x11
	.4byte	$LASF54
	.byte	0x4
	.byte	0x58
	.4byte	0x5d
	.uleb128 0x11
	.4byte	$LASF55
	.byte	0x4
	.byte	0x65
	.4byte	0xcf
	.uleb128 0x11
	.4byte	$LASF56
	.byte	0xc
	.byte	0x3f
	.4byte	0x25d
	.uleb128 0x11
	.4byte	$LASF57
	.byte	0xd
	.byte	0x1e
	.4byte	0x5d
	.uleb128 0x11
	.4byte	$LASF58
	.byte	0xe
	.byte	0x11
	.4byte	0x1ad
	.uleb128 0x12
	.4byte	$LASF59
	.byte	0xf
	.2byte	0x873
	.4byte	0x1b2
	.uleb128 0xf
	.4byte	0x5d
	.4byte	0x303
	.uleb128 0x13
	.4byte	0x9a
	.byte	0x3
	.byte	0
	.uleb128 0x11
	.4byte	$LASF60
	.byte	0x10
	.byte	0x12
	.4byte	0x2f3
	.uleb128 0x11
	.4byte	$LASF61
	.byte	0x11
	.byte	0x4c
	.4byte	0x41
	.uleb128 0x12
	.4byte	$LASF62
	.byte	0x11
	.2byte	0x2df
	.4byte	0xbf
	.uleb128 0x12
	.4byte	$LASF63
	.byte	0x12
	.2byte	0x178
	.4byte	0x331
	.uleb128 0x8
	.byte	0x4
	.4byte	0x1b7
	.uleb128 0x12
	.4byte	$LASF64
	.byte	0x12
	.2byte	0x17b
	.4byte	0x331
	.uleb128 0x12
	.4byte	$LASF65
	.byte	0x11
	.2byte	0x3a7
	.4byte	0xe0
	.uleb128 0x11
	.4byte	$LASF66
	.byte	0x13
	.byte	0x1b
	.4byte	0x41
	.uleb128 0x12
	.4byte	$LASF67
	.byte	0xf
	.2byte	0x345
	.4byte	0x41
	.uleb128 0x12
	.4byte	$LASF68
	.byte	0xf
	.2byte	0x6ef
	.4byte	0x372
	.uleb128 0x8
	.byte	0x4
	.4byte	0xca
	.uleb128 0x11
	.4byte	$LASF69
	.byte	0x14
	.byte	0xa
	.4byte	0x41
	.uleb128 0xf
	.4byte	0xb4
	.4byte	0x394
	.uleb128 0x14
	.4byte	0x9a
	.2byte	0x3ff
	.byte	0
	.uleb128 0x11
	.4byte	$LASF70
	.byte	0x15
	.byte	0x48
	.4byte	0x383
	.uleb128 0x11
	.4byte	$LASF71
	.byte	0x16
	.byte	0x4d
	.4byte	0x5d
	.uleb128 0x12
	.4byte	$LASF72
	.byte	0x17
	.2byte	0x1fc
	.4byte	0x5d
	.uleb128 0x11
	.4byte	$LASF73
	.byte	0x18
	.byte	0x1c
	.4byte	0xea
	.uleb128 0xf
	.4byte	0xa1
	.4byte	0x3d1
	.uleb128 0x13
	.4byte	0x9a
	.byte	0x1d
	.byte	0
	.uleb128 0x11
	.4byte	$LASF74
	.byte	0x18
	.byte	0x65
	.4byte	0x3c1
	.uleb128 0xf
	.4byte	0x6b
	.4byte	0x3e7
	.uleb128 0x10
	.byte	0
	.uleb128 0x12
	.4byte	$LASF75
	.byte	0xd
	.2byte	0x63e
	.4byte	0x3dc
	.uleb128 0x12
	.4byte	$LASF76
	.byte	0xd
	.2byte	0x63e
	.4byte	0x3dc
	.uleb128 0xf
	.4byte	0x40f
	.4byte	0x40f
	.uleb128 0x13
	.4byte	0x9a
	.byte	0xd
	.byte	0
	.uleb128 0x8
	.byte	0x4
	.4byte	0xef
	.uleb128 0x11
	.4byte	$LASF77
	.byte	0x19
	.byte	0xf6
	.4byte	0x3ff
	.uleb128 0x12
	.4byte	$LASF78
	.byte	0x1a
	.2byte	0x1d5
	.4byte	0x41
	.uleb128 0x11
	.4byte	$LASF79
	.byte	0x1b
	.byte	0x35
	.4byte	0x72
	.uleb128 0x11
	.4byte	$LASF25
	.byte	0x1c
	.byte	0xfd
	.4byte	0xf9
	.uleb128 0x11
	.4byte	$LASF80
	.byte	0x1d
	.byte	0x17
	.4byte	0x103
	.uleb128 0xf
	.4byte	0xac
	.4byte	0x45d
	.uleb128 0x13
	.4byte	0x9a
	.byte	0x3
	.byte	0
	.uleb128 0x11
	.4byte	$LASF81
	.byte	0x1e
	.byte	0x16
	.4byte	0x44d
	.uleb128 0x11
	.4byte	$LASF82
	.byte	0x1f
	.byte	0xad
	.4byte	0x85
	.uleb128 0x12
	.4byte	$LASF83
	.byte	0x1f
	.2byte	0x1d1
	.4byte	0xf4
	.uleb128 0x11
	.4byte	$LASF84
	.byte	0x20
	.byte	0x8a
	.4byte	0x108
	.uleb128 0x12
	.4byte	$LASF85
	.byte	0x21
	.2byte	0x182
	.4byte	0xa1
	.uleb128 0x12
	.4byte	$LASF86
	.byte	0x21
	.2byte	0x183
	.4byte	0x64
	.uleb128 0x11
	.4byte	$LASF87
	.byte	0x22
	.byte	0xc
	.4byte	0x85
	.uleb128 0x11
	.4byte	$LASF28
	.byte	0x23
	.byte	0x4a
	.4byte	0x10d
	.uleb128 0x12
	.4byte	$LASF88
	.byte	0x24
	.2byte	0x1b4
	.4byte	0x4c4
	.uleb128 0x8
	.byte	0x4
	.4byte	0xe5
	.byte	0
	.section	.debug_abbrev,"",@progbits
$Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x13
	.byte	0
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x13
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x13
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x15
	.byte	0x1
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x21
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x14
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x5
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.4byte	0x5c
	.2byte	0x2
	.4byte	$Ldebug_info0
	.byte	0x4
	.byte	0
	.2byte	0
	.2byte	0
	.4byte	$LFB1992
	.4byte	$LFE1992-$LFB1992
	.4byte	$LFB1993
	.4byte	$LFE1993-$LFB1993
	.4byte	$LFB1994
	.4byte	$LFE1994-$LFB1994
	.4byte	$LFB1995
	.4byte	$LFE1995-$LFB1995
	.4byte	$LFB1996
	.4byte	$LFE1996-$LFB1996
	.4byte	$LFB1997
	.4byte	$LFE1997-$LFB1997
	.4byte	$LFB1998
	.4byte	$LFE1998-$LFB1998
	.4byte	$LFB1999
	.4byte	$LFE1999-$LFB1999
	.4byte	$LFB2000
	.4byte	$LFE2000-$LFB2000
	.4byte	0
	.4byte	0
	.section	.debug_ranges,"",@progbits
$Ldebug_ranges0:
	.4byte	$LFB1992
	.4byte	$LFE1992
	.4byte	$LFB1993
	.4byte	$LFE1993
	.4byte	$LFB1994
	.4byte	$LFE1994
	.4byte	$LFB1995
	.4byte	$LFE1995
	.4byte	$LFB1996
	.4byte	$LFE1996
	.4byte	$LFB1997
	.4byte	$LFE1997
	.4byte	$LFB1998
	.4byte	$LFE1998
	.4byte	$LFB1999
	.4byte	$LFE1999
	.4byte	$LFB2000
	.4byte	$LFE2000
	.4byte	0
	.4byte	0
	.section	.debug_line,"",@progbits
$Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
$LASF17:
	.ascii	"plat_smp_ops\000"
$LASF41:
	.ascii	"cpu_data\000"
$LASF38:
	.ascii	"user_namespace\000"
$LASF85:
	.ascii	"nr_swap_pages\000"
$LASF76:
	.ascii	"__init_end\000"
$LASF57:
	.ascii	"max_mapnr\000"
$LASF68:
	.ascii	"cad_pid\000"
$LASF43:
	.ascii	"panic_timeout\000"
$LASF78:
	.ascii	"sysctl_vfs_cache_pressure\000"
$LASF32:
	.ascii	"output_thread_defines\000"
$LASF35:
	.ascii	"output_sc_defines\000"
$LASF15:
	.ascii	"sizetype\000"
$LASF87:
	.ascii	"system_freezing_cnt\000"
$LASF84:
	.ascii	"ioport_resource\000"
$LASF83:
	.ascii	"memcg_kmem_enabled_key\000"
$LASF21:
	.ascii	"task_struct\000"
$LASF5:
	.ascii	"long long int\000"
$LASF59:
	.ascii	"init_pid_ns\000"
$LASF86:
	.ascii	"total_swap_pages\000"
$LASF2:
	.ascii	"short int\000"
$LASF64:
	.ascii	"system_freezable_wq\000"
$LASF53:
	.ascii	"vsmp_smp_ops\000"
$LASF58:
	.ascii	"init_user_ns\000"
$LASF69:
	.ascii	"debug_locks\000"
$LASF39:
	.ascii	"pid_namespace\000"
$LASF42:
	.ascii	"console_printk\000"
$LASF50:
	.ascii	"mp_ops\000"
$LASF27:
	.ascii	"resource\000"
$LASF29:
	.ascii	"output_ptreg_defines\000"
$LASF13:
	.ascii	"cpuinfo_mips\000"
$LASF88:
	.ascii	"ksoftirqd\000"
$LASF11:
	.ascii	"bool\000"
$LASF90:
	.ascii	"arch/mips/kernel/asm-offsets.c\000"
$LASF75:
	.ascii	"__init_begin\000"
$LASF28:
	.ascii	"suspend_stats\000"
$LASF63:
	.ascii	"system_wq\000"
$LASF80:
	.ascii	"mem_cgroup_subsys\000"
$LASF74:
	.ascii	"vm_stat\000"
$LASF37:
	.ascii	"output_kvm_defines\000"
$LASF60:
	.ascii	"__per_cpu_offset\000"
$LASF66:
	.ascii	"percpu_counter_batch\000"
$LASF19:
	.ascii	"page\000"
$LASF8:
	.ascii	"long int\000"
$LASF56:
	.ascii	"mips_io_port_base\000"
$LASF33:
	.ascii	"output_thread_fpu_defines\000"
$LASF34:
	.ascii	"output_mm_defines\000"
$LASF89:
	.ascii	"GNU C89 5.5.0 -G 0 -mel -mno-check-zero-division -mabi=3"
	.ascii	"2 -mno-abicalls -mno-branch-likely -msoft-float -march=m"
	.ascii	"ips32r2 -mtune=1004kc -mllsc -mplt -mips32r2 -mno-shared"
	.ascii	" -g -Os -std=gnu90 -fno-strict-aliasing -fno-common -fno"
	.ascii	"-delete-null-pointer-checks -fno-caller-saves -fno-pic -"
	.ascii	"ffreestanding -fstack-protector -fomit-frame-pointer -fn"
	.ascii	"o-var-tracking-assignments -femit-struct-debug-baseonly "
	.ascii	"-fno-var-tracking -fno-strict-overflow -fconserve-stack "
	.ascii	"-ffunction-sections -fdata-sections\000"
$LASF91:
	.ascii	"/home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1"
	.ascii	"004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79"
	.ascii	"\000"
$LASF36:
	.ascii	"output_signal_defined\000"
$LASF51:
	.ascii	"up_smp_ops\000"
$LASF31:
	.ascii	"output_thread_info_defines\000"
$LASF73:
	.ascii	"vm_event_states\000"
$LASF26:
	.ascii	"cgroup_subsys\000"
$LASF16:
	.ascii	"atomic_long_t\000"
$LASF1:
	.ascii	"unsigned char\000"
$LASF61:
	.ascii	"page_group_by_mobility_disabled\000"
$LASF18:
	.ascii	"pte_t\000"
$LASF0:
	.ascii	"signed char\000"
$LASF62:
	.ascii	"mem_map\000"
$LASF6:
	.ascii	"long long unsigned int\000"
$LASF24:
	.ascii	"static_key\000"
$LASF4:
	.ascii	"unsigned int\000"
$LASF47:
	.ascii	"cpu_online_mask\000"
$LASF25:
	.ascii	"dqstats\000"
$LASF52:
	.ascii	"cmp_smp_ops\000"
$LASF3:
	.ascii	"short unsigned int\000"
$LASF20:
	.ascii	"pglist_data\000"
$LASF71:
	.ascii	"zero_page_mask\000"
$LASF22:
	.ascii	"vm_event_state\000"
$LASF9:
	.ascii	"char\000"
$LASF54:
	.ascii	"shm_align_mask\000"
$LASF14:
	.ascii	"cpumask\000"
$LASF10:
	.ascii	"_Bool\000"
$LASF67:
	.ascii	"delayacct_on\000"
$LASF81:
	.ascii	"irq_stack\000"
$LASF46:
	.ascii	"nr_cpu_ids\000"
$LASF7:
	.ascii	"long unsigned int\000"
$LASF70:
	.ascii	"invalid_pte_table\000"
$LASF49:
	.ascii	"persistent_clock_exist\000"
$LASF77:
	.ascii	"kmalloc_caches\000"
$LASF44:
	.ascii	"hex_asc\000"
$LASF30:
	.ascii	"output_task_defines\000"
$LASF48:
	.ascii	"cpu_bit_bitmap\000"
$LASF72:
	.ascii	"zero_pfn\000"
$LASF23:
	.ascii	"kmem_cache\000"
$LASF82:
	.ascii	"memcg_moving\000"
$LASF55:
	.ascii	"flush_data_cache_page\000"
$LASF40:
	.ascii	"workqueue_struct\000"
$LASF65:
	.ascii	"contig_page_data\000"
$LASF79:
	.ascii	"static_key_initialized\000"
$LASF12:
	.ascii	"atomic_t\000"
$LASF45:
	.ascii	"hex_asc_upper\000"
	.ident	"GCC: (PandoraBox GCC 5.5.0 2019-02-01-git-93f2639a7) 5.5.0"
	.section	.note.GNU-stack,"",@progbits
