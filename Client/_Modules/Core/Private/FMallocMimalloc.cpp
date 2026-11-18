// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// FMallocMimalloc @ 1416d6360

FMallocMimalloc * __thiscall FMallocMimalloc::FMallocMimalloc(FMallocMimalloc *this)

{
  *this = (FMallocMimalloc)&___7FMallocMimalloc__6B_;
  FWindowsPlatformMemory::MiMallocInit();
  mi_option_set(mi_option_reset_delay,GMiMallocMemoryResetDelay);
  return this;
}

// Free @ 1416f0a30

void __thiscall FMallocMimalloc::Free(FMallocMimalloc *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    mi_free(param_1);
    return;
  }
  return;
}

// GetAllocationSize @ 1416f1e60

bool __thiscall
FMallocMimalloc::GetAllocationSize(FMallocMimalloc *this,void *param_1,ulong64 *param_2)

{
  ulong64 uVar1;
  
  uVar1 = mi_malloc_size(param_1);
  *param_2 = uVar1;
  return true;
}

// GetDescriptiveName @ 1416f7d40

wchar_t * __thiscall FMallocMimalloc::GetDescriptiveName(FMallocMimalloc *this)

{
  return L"Mimalloc";
}

// IsInternallyThreadSafe @ 141702500

bool __thiscall FMallocMimalloc::IsInternallyThreadSafe(FMallocMimalloc *this)

{
  return true;
}

// Malloc @ 1417045f0

void * __thiscall FMallocMimalloc::Malloc(FMallocMimalloc *this,ulong64 param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  ulong64 uVar4;
  
  if ((FMalloc::MaxSingleAlloc == (TAtomic<unsigned___int64>)0x0) ||
     (param_1 <= (ulonglong)FMalloc::MaxSingleAlloc)) {
    uVar4 = 8;
    if (param_2 == 0) {
      if (0xf < param_1) {
        uVar4 = 0x10;
      }
    }
    else {
      uVar3 = 8;
      if (0xf < param_1) {
        uVar3 = 0x10;
      }
      uVar1 = param_2;
      if (param_2 < uVar3) {
        uVar1 = uVar3;
      }
      uVar4 = (ulong64)uVar1;
    }
    pvVar2 = mi_malloc_aligned(param_1,uVar4);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
  }
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    OutOfMemory(this,param_1,param_2);
  }
  return (void *)0x0;
}

// MallocZeroed @ 141704910

void * __thiscall FMallocMimalloc::MallocZeroed(FMallocMimalloc *this,ulong64 param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  ulong64 uVar4;
  
  if ((FMalloc::MaxSingleAlloc == (TAtomic<unsigned___int64>)0x0) ||
     (param_1 <= (ulonglong)FMalloc::MaxSingleAlloc)) {
    uVar4 = 8;
    if (param_2 == 0) {
      if (0xf < param_1) {
        uVar4 = 0x10;
      }
    }
    else {
      uVar3 = 8;
      if (0xf < param_1) {
        uVar3 = 0x10;
      }
      uVar1 = param_2;
      if (param_2 < uVar3) {
        uVar1 = uVar3;
      }
      uVar4 = (ulong64)uVar1;
    }
    pvVar2 = mi_zalloc_aligned(param_1,uVar4);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
  }
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    OutOfMemory(this,param_1,param_2);
  }
  return (void *)0x0;
}

// OutOfMemory @ 141707300

void __thiscall FMallocMimalloc::OutOfMemory(FMallocMimalloc *this,ulong64 param_1,uint param_2)

{
                    /* WARNING: Subroutine does not return */
  FGenericPlatformMemory::OnOutOfMemory(param_1,param_2);
}

// Realloc @ 141708cd0

void * __thiscall
FMallocMimalloc::Realloc(FMallocMimalloc *this,void *param_1,ulong64 param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  
  if ((FMalloc::MaxSingleAlloc == (TAtomic<unsigned___int64>)0x0) ||
     (param_2 <= (ulonglong)FMalloc::MaxSingleAlloc)) {
    if (param_2 == 0) {
      mi_free(param_1);
      return (void *)0x0;
    }
    if (param_3 == 0) {
      pvVar2 = mi_realloc(param_1,param_2);
    }
    else {
      uVar3 = 8;
      if (0xf < param_2) {
        uVar3 = 0x10;
      }
      uVar1 = param_3;
      if (param_3 < uVar3) {
        uVar1 = uVar3;
      }
      pvVar2 = mi_realloc_aligned(param_1,param_2,(ulonglong)uVar1);
    }
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
  }
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    OutOfMemory(this,param_2,param_3);
  }
  return (void *)0x0;
}

// Trim @ 141716f60

void __thiscall FMallocMimalloc::Trim(FMallocMimalloc *this,bool param_1)

{
  mi_collect(param_1);
  return;
}

// TryMalloc @ 141717a00

void * __thiscall FMallocMimalloc::TryMalloc(FMallocMimalloc *this,ulong64 param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  ulong64 uVar3;
  
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
    pvVar1 = mi_malloc_aligned(param_1,(ulonglong)param_2);
    return pvVar1;
  }
  if (0xf < param_1) {
    uVar3 = 0x10;
  }
  pvVar1 = mi_malloc_aligned(param_1,uVar3);
  return pvVar1;
}

// TryMallocZeroed @ 141717d60

void * __thiscall
FMallocMimalloc::TryMallocZeroed(FMallocMimalloc *this,ulong64 param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  ulong64 uVar3;
  
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
    pvVar1 = mi_zalloc_aligned(param_1,(ulonglong)param_2);
    return pvVar1;
  }
  if (0xf < param_1) {
    uVar3 = 0x10;
  }
  pvVar1 = mi_zalloc_aligned(param_1,uVar3);
  return pvVar1;
}

// TryRealloc @ 141717df0

void * __thiscall
FMallocMimalloc::TryRealloc(FMallocMimalloc *this,void *param_1,ulong64 param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  
  if ((FMalloc::MaxSingleAlloc == (TAtomic<unsigned___int64>)0x0) ||
     (param_2 <= (ulonglong)FMalloc::MaxSingleAlloc)) {
    if (param_2 != 0) {
      if (param_3 != 0) {
        uVar1 = 8;
        if (0xf < param_2) {
          uVar1 = 0x10;
        }
        if (param_3 < uVar1) {
          param_3 = uVar1;
        }
        pvVar2 = mi_realloc_aligned(param_1,param_2,(ulonglong)param_3);
        return pvVar2;
      }
      pvVar2 = mi_realloc(param_1,param_2);
      return pvVar2;
    }
    mi_free(param_1);
  }
  return (void *)0x0;
}

