#ifndef __ASM_OFFSETS_H__
#define __ASM_OFFSETS_H__
/*
 * DO NOT MODIFY.
 *
 * This file was generated by Kbuild
 */

#define PV_IRQ_adjust_exception_frame 48 /* offsetof(struct pv_irq_ops, adjust_exception_frame) */
#define PV_CPU_usergs_sysret64 248 /* offsetof(struct pv_cpu_ops, usergs_sysret64) */
#define PV_CPU_swapgs 264 /* offsetof(struct pv_cpu_ops, swapgs) */

#define KVM_STEAL_TIME_preempted 16 /* offsetof(struct kvm_steal_time, preempted) */

#define pt_regs_bx 40 /* offsetof(struct pt_regs, bx) */
#define pt_regs_cx 88 /* offsetof(struct pt_regs, cx) */
#define pt_regs_dx 96 /* offsetof(struct pt_regs, dx) */
#define pt_regs_sp 152 /* offsetof(struct pt_regs, sp) */
#define pt_regs_bp 32 /* offsetof(struct pt_regs, bp) */
#define pt_regs_si 104 /* offsetof(struct pt_regs, si) */
#define pt_regs_di 112 /* offsetof(struct pt_regs, di) */
#define pt_regs_r8 72 /* offsetof(struct pt_regs, r8) */
#define pt_regs_r9 64 /* offsetof(struct pt_regs, r9) */
#define pt_regs_r10 56 /* offsetof(struct pt_regs, r10) */
#define pt_regs_r11 48 /* offsetof(struct pt_regs, r11) */
#define pt_regs_r12 24 /* offsetof(struct pt_regs, r12) */
#define pt_regs_r13 16 /* offsetof(struct pt_regs, r13) */
#define pt_regs_r14 8 /* offsetof(struct pt_regs, r14) */
#define pt_regs_r15 0 /* offsetof(struct pt_regs, r15) */
#define pt_regs_flags 144 /* offsetof(struct pt_regs, flags) */

#define saved_context_cr0 202 /* offsetof(struct saved_context, cr0) */
#define saved_context_cr2 210 /* offsetof(struct saved_context, cr2) */
#define saved_context_cr3 218 /* offsetof(struct saved_context, cr3) */
#define saved_context_cr4 226 /* offsetof(struct saved_context, cr4) */
#define saved_context_cr8 234 /* offsetof(struct saved_context, cr8) */
#define saved_context_gdt_desc 277 /* offsetof(struct saved_context, gdt_desc) */

#define TSS_ist 36 /* offsetof(struct tss_struct, x86_tss.ist) */
#define TSS_sp0 4 /* offsetof(struct tss_struct, x86_tss.sp0) */

#define stack_canary_offset 40 /* offsetof(union irq_stack_union, stack_canary) */

#define __NR_syscall_max 547 /* sizeof(syscalls_64) - 1 */
#define NR_syscalls 548 /* sizeof(syscalls_64) */
#define __NR_syscall_compat_max 384 /* sizeof(syscalls_ia32) - 1 */
#define IA32_NR_syscalls 385 /* sizeof(syscalls_ia32) */

#define TASK_threadsp 4832 /* offsetof(struct task_struct, thread.sp) */
#define TASK_stack_canary 2312 /* offsetof(struct task_struct, stack_canary) */

#define TASK_TI_flags 0 /* offsetof(struct task_struct, thread_info.flags) */
#define TASK_addr_limit 4968 /* offsetof(struct task_struct, thread.addr_limit) */

#define crypto_tfm_ctx_offset 64 /* offsetof(struct crypto_tfm, __crt_ctx) */

#define pbe_address 0 /* offsetof(struct pbe, address) */
#define pbe_orig_address 8 /* offsetof(struct pbe, orig_address) */
#define pbe_next 16 /* offsetof(struct pbe, next) */

#define IA32_SIGCONTEXT_ax 44 /* offsetof(struct sigcontext_32, ax) */
#define IA32_SIGCONTEXT_bx 32 /* offsetof(struct sigcontext_32, bx) */
#define IA32_SIGCONTEXT_cx 40 /* offsetof(struct sigcontext_32, cx) */
#define IA32_SIGCONTEXT_dx 36 /* offsetof(struct sigcontext_32, dx) */
#define IA32_SIGCONTEXT_si 20 /* offsetof(struct sigcontext_32, si) */
#define IA32_SIGCONTEXT_di 16 /* offsetof(struct sigcontext_32, di) */
#define IA32_SIGCONTEXT_bp 24 /* offsetof(struct sigcontext_32, bp) */
#define IA32_SIGCONTEXT_sp 28 /* offsetof(struct sigcontext_32, sp) */
#define IA32_SIGCONTEXT_ip 56 /* offsetof(struct sigcontext_32, ip) */

#define IA32_RT_SIGFRAME_sigcontext 164 /* offsetof(struct rt_sigframe_ia32, uc.uc_mcontext) */

#define PARAVIRT_PATCH_pv_cpu_ops 24 /* offsetof(struct paravirt_patch_template, pv_cpu_ops) */
#define PARAVIRT_PATCH_pv_irq_ops 312 /* offsetof(struct paravirt_patch_template, pv_irq_ops) */
#define PV_IRQ_irq_disable 16 /* offsetof(struct pv_irq_ops, irq_disable) */
#define PV_IRQ_irq_enable 24 /* offsetof(struct pv_irq_ops, irq_enable) */
#define PV_CPU_iret 256 /* offsetof(struct pv_cpu_ops, iret) */
#define PV_CPU_read_cr0 16 /* offsetof(struct pv_cpu_ops, read_cr0) */
#define PV_MMU_read_cr2 0 /* offsetof(struct pv_mmu_ops, read_cr2) */

#define XEN_vcpu_info_mask 1 /* offsetof(struct vcpu_info, evtchn_upcall_mask) */
#define XEN_vcpu_info_pending 0 /* offsetof(struct vcpu_info, evtchn_upcall_pending) */

#define BP_scratch 484 /* offsetof(struct boot_params, scratch) */
#define BP_secure_boot 492 /* offsetof(struct boot_params, secure_boot) */
#define BP_loadflags 529 /* offsetof(struct boot_params, hdr.loadflags) */
#define BP_hardware_subarch 572 /* offsetof(struct boot_params, hdr.hardware_subarch) */
#define BP_version 518 /* offsetof(struct boot_params, hdr.version) */
#define BP_kernel_alignment 560 /* offsetof(struct boot_params, hdr.kernel_alignment) */
#define BP_init_size 608 /* offsetof(struct boot_params, hdr.init_size) */
#define BP_pref_address 600 /* offsetof(struct boot_params, hdr.pref_address) */
#define BP_code32_start 532 /* offsetof(struct boot_params, hdr.code32_start) */

#define PTREGS_SIZE 168 /* sizeof(struct pt_regs) */

#endif
