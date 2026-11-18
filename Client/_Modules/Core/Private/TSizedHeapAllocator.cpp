// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// ForAnyElementType @ 141586920

ForAnyElementType * __thiscall
TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(ForAnyElementType *this)

{
  this->Data = (FScriptContainerElement *)0x0;
  return this;
}

// GetInitialCapacity @ 1415c7260

int __thiscall
TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity(ForAnyElementType *this)

{
  return 0;
}

// ResizeAllocation @ 1415eb820

void __thiscall
TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
          (ForAnyElementType *this,int param_1,int param_2,ulong64 param_3)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->Data != (FScriptContainerElement *)0x0) || (param_2 != 0)) {
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSizedHeapAllocatorNum(0x20,(longlong)param_2,param_3);
    }
    pFVar1 = FMemory::Realloc(this->Data,(longlong)param_2 * param_3,0);
    this->Data = pFVar1;
  }
  return;
}

// ResizeAllocation @ 1415eb880

void __thiscall
TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
          (ForAnyElementType *this,int param_1,int param_2,ulong64 param_3,uint param_4)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->Data != (FScriptContainerElement *)0x0) || (param_2 != 0)) {
    if ((param_2 < 0) || (0x7ffffffe < param_3 - 1)) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSizedHeapAllocatorNum(0x20,(longlong)param_2,param_3);
    }
    pFVar1 = FMemory::Realloc(this->Data,(longlong)param_2 * param_3,param_4);
    this->Data = pFVar1;
  }
  return;
}

// ResizeAllocation @ 1415eb8e0

void __thiscall
TSizedHeapAllocator<64,FMemory>::ForAnyElementType::ResizeAllocation
          (ForAnyElementType *this,long64 param_1,long64 param_2,ulong64 param_3)

{
  undefined1 auVar1 [16];
  FScriptContainerElement *pFVar2;
  
  if ((this->Data != (FScriptContainerElement *)0x0) || (param_2 != 0)) {
    if ((param_2 < 0) ||
       ((0x7ffffffe < param_3 - 1 ||
        (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
        SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / auVar1,0) < (ulonglong)param_2))
       )) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSizedHeapAllocatorNum(0x40,param_2,param_3);
    }
    pFVar2 = FMemory::Realloc(this->Data,param_2 * param_3,0);
    this->Data = pFVar2;
  }
  return;
}

// ResizeAllocation @ 1415eb950

void __thiscall
TSizedHeapAllocator<64,FMemory>::ForAnyElementType::ResizeAllocation
          (ForAnyElementType *this,long64 param_1,long64 param_2,ulong64 param_3,uint param_4)

{
  undefined1 auVar1 [16];
  FScriptContainerElement *pFVar2;
  
  if ((this->Data != (FScriptContainerElement *)0x0) || (param_2 != 0)) {
    if ((param_2 < 0) ||
       ((0x7ffffffe < param_3 - 1 ||
        (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
        SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / auVar1,0) < (ulonglong)param_2))
       )) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSizedHeapAllocatorNum(0x40,param_2,param_3);
    }
    pFVar2 = FMemory::Realloc(this->Data,param_2 * param_3,param_4);
    this->Data = pFVar2;
  }
  return;
}

