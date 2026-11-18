// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// Free @ 1416f0de0

void __thiscall FMallocTBB::Free(FMallocTBB *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    scalable_free(param_1);
    return;
  }
  return;
}

// GetAllocationSize @ 1416f1ef0

bool __thiscall FMallocTBB::GetAllocationSize(FMallocTBB *this,void *param_1,ulong64 *param_2)

{
  ulong64 uVar1;
  
  uVar1 = scalable_msize(param_1);
  *param_2 = uVar1;
  return true;
}

// Malloc @ 141704730

void * __thiscall FMallocTBB::Malloc(FMallocTBB *this,ulong64 param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  
  if ((FMalloc::MaxSingleAlloc == (TAtomic<unsigned___int64>)0x0) ||
     (param_1 <= (ulonglong)FMalloc::MaxSingleAlloc)) {
    if (param_2 == 0) {
      uVar3 = 8;
      if (0xf < param_1) {
        uVar3 = 0x10;
      }
    }
    else {
      uVar2 = 8;
      if (0xf < param_1) {
        uVar2 = 0x10;
      }
      uVar3 = param_2;
      if (param_2 < uVar2) {
        uVar3 = uVar2;
      }
    }
    pvVar1 = (void *)scalable_aligned_malloc(param_1,uVar3);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
  }
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    OutOfMemory(this,param_1,param_2);
  }
  return (void *)0x0;
}

// OutOfMemory @ 141707320

void __thiscall FMallocTBB::OutOfMemory(FMallocTBB *this,ulong64 param_1,uint param_2)

{
                    /* WARNING: Subroutine does not return */
  FGenericPlatformMemory::OnOutOfMemory(param_1,param_2);
}

// Realloc @ 141708f00

void * __thiscall FMallocTBB::Realloc(FMallocTBB *this,void *param_1,ulong64 param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  
  if ((FMalloc::MaxSingleAlloc == (TAtomic<unsigned___int64>)0x0) ||
     (param_2 <= (ulonglong)FMalloc::MaxSingleAlloc)) {
    if (param_3 == 0) {
      uVar3 = 8;
      if (0xf < param_2) {
        uVar3 = 0x10;
      }
    }
    else {
      uVar2 = 8;
      if (0xf < param_2) {
        uVar2 = 0x10;
      }
      uVar3 = param_3;
      if (param_3 < uVar2) {
        uVar3 = uVar2;
      }
    }
    pvVar1 = (void *)scalable_aligned_realloc(param_1,param_2,uVar3);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
  }
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    OutOfMemory(this,param_2,param_3);
  }
  return (void *)0x0;
}

// Trim @ 141716fb0

void __thiscall FMallocTBB::Trim(FMallocTBB *this,bool param_1)

{
  return;
}

// TryMalloc @ 141717cc0

void * __thiscall FMallocTBB::TryMalloc(FMallocTBB *this,ulong64 param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if ((FMalloc::MaxSingleAlloc != (TAtomic<unsigned___int64>)0x0) &&
     ((ulonglong)FMalloc::MaxSingleAlloc < param_1)) {
    return (void *)0x0;
  }
  uVar3 = 8;
  if (param_2 != 0) {
    uVar2 = 8;
    if (0xf < param_1) {
      uVar2 = 0x10;
    }
    if (param_2 < uVar2) {
      param_2 = uVar2;
    }
    pvVar1 = (void *)scalable_aligned_malloc(param_1,param_2);
    return pvVar1;
  }
  if (0xf < param_1) {
    uVar3 = 0x10;
  }
  pvVar1 = (void *)scalable_aligned_malloc(param_1,uVar3);
  return pvVar1;
}

// TryRealloc @ 141717f00

void * __thiscall
FMallocTBB::TryRealloc(FMallocTBB *this,void *param_1,ulong64 param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if ((FMalloc::MaxSingleAlloc != (TAtomic<unsigned___int64>)0x0) &&
     ((ulonglong)FMalloc::MaxSingleAlloc < param_2)) {
    return (void *)0x0;
  }
  uVar3 = 8;
  if (param_3 != 0) {
    uVar2 = 8;
    if (0xf < param_2) {
      uVar2 = 0x10;
    }
    if (param_3 < uVar2) {
      param_3 = uVar2;
    }
    pvVar1 = (void *)scalable_aligned_realloc(param_1,param_2,param_3);
    return pvVar1;
  }
  if (0xf < param_2) {
    uVar3 = 0x10;
  }
  pvVar1 = (void *)scalable_aligned_realloc(param_1,param_2,uVar3);
  return pvVar1;
}

// GetDescriptiveName @ 141aa83f0

wchar_t * __thiscall FMallocTBB::GetDescriptiveName(FMallocTBB *this)

{
  return L"TBB";
}

// IsInternallyThreadSafe @ 141ab2f10

bool __thiscall FMallocTBB::IsInternallyThreadSafe(FMallocTBB *this)

{
  return true;
}

