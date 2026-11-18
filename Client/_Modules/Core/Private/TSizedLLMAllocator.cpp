// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ResizeAllocation @ 1416bedb0

void __thiscall
TSizedLLMAllocator<32>::ForAnyElementType::ResizeAllocation
          (ForAnyElementType *this,int param_1,int param_2,ulong64 param_3)

{
  void *pvVar1;
  
  if ((this->Data != (void *)0x0) || (param_2 != 0)) {
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidLLMAllocatorNum(0x20,(longlong)param_2,param_3);
    }
    pvVar1 = UE::LLMPrivate::FLLMAllocator::Realloc
                       (Allocator,this->Data,this->Size,(longlong)param_2 * param_3);
    this->Size = (longlong)param_2 * param_3;
    this->Data = pvVar1;
  }
  return;
}

// ResizeAllocation @ 1416bee20

void __thiscall
TSizedLLMAllocator<64>::ForAnyElementType::ResizeAllocation
          (ForAnyElementType *this,long64 param_1,long64 param_2,ulong64 param_3)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  
  if ((this->Data != (void *)0x0) || (param_2 != 0)) {
    if ((param_2 < 0) ||
       ((0x7ffffffe < param_3 - 1 ||
        (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
        SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / auVar1,0) < (ulonglong)param_2))
       )) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidLLMAllocatorNum(0x40,param_2,param_3);
    }
    pvVar2 = UE::LLMPrivate::FLLMAllocator::Realloc
                       (Allocator,this->Data,this->Size,param_2 * param_3);
    this->Data = pvVar2;
    this->Size = param_2 * param_3;
  }
  return;
}

