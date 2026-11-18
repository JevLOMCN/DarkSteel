// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// FMallocAnsi @ 141678d10

FMallocAnsi * __thiscall FMallocAnsi::FMallocAnsi(FMallocAnsi *this)

{
  HANDLE HeapHandle;
  undefined4 local_res8 [8];
  
  *this = (FMallocAnsi)&___7FMallocAnsi__6B_;
  HeapHandle = (HANDLE)_get_heap_handle();
  local_res8[0] = 2;
  HeapSetInformation(HeapHandle,HeapCompatibilityInformation,local_res8,4);
  return this;
}

// Free @ 141695b40

void __thiscall FMallocAnsi::Free(FMallocAnsi *this,void *param_1)

{
  MemoryTrace_Free((ulong64)param_1,0,0);
                    /* WARNING: Could not recover jumptable at 0x000141695b5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _aligned_free(param_1);
  return;
}

// GetAllocationSize @ 141698620

bool __thiscall FMallocAnsi::GetAllocationSize(FMallocAnsi *this,void *param_1,ulong64 *param_2)

{
  return false;
}

// GetDescriptiveName @ 141699550

wchar_t * __thiscall FMallocAnsi::GetDescriptiveName(FMallocAnsi *this)

{
  return L"ANSI";
}

// IsInternallyThreadSafe @ 1416b0b90

bool __thiscall FMallocAnsi::IsInternallyThreadSafe(FMallocAnsi *this)

{
  return true;
}

// Malloc @ 1416b20a0

void * __thiscall FMallocAnsi::Malloc(FMallocAnsi *this,ulong64 param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  
  if ((FMalloc::MaxSingleAlloc == (TAtomic<unsigned___int64>)0x0) ||
     (param_1 <= (ulonglong)FMalloc::MaxSingleAlloc)) {
    uVar3 = 8;
    if (0xf < param_1) {
      uVar3 = 0x10;
    }
    uVar1 = param_2;
    if (param_2 < uVar3) {
      uVar1 = uVar3;
    }
    pvVar2 = _aligned_malloc(param_1,(ulonglong)uVar1);
    MemoryTrace_Alloc((ulong64)pvVar2,param_1,uVar1,0,0);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
  }
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FGenericPlatformMemory::OnOutOfMemory(param_1,param_2);
  }
  return (void *)0x0;
}

// Realloc @ 1416ba160

void * __thiscall FMallocAnsi::Realloc(FMallocAnsi *this,void *param_1,ulong64 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  
  if ((FMalloc::MaxSingleAlloc == (TAtomic<unsigned___int64>)0x0) ||
     (param_2 <= (ulonglong)FMalloc::MaxSingleAlloc)) {
    uVar2 = 8;
    if (0xf < param_2) {
      uVar2 = 0x10;
    }
    uVar1 = param_3;
    if (param_3 < uVar2) {
      uVar1 = uVar2;
    }
    MemoryTrace_ReallocFree((ulong64)param_1,0,0);
    if (param_1 == (void *)0x0) {
      pvVar3 = _aligned_malloc(param_2,(ulonglong)uVar1);
    }
    else {
      if (param_2 == 0) {
        _aligned_free(param_1);
        MemoryTrace_ReallocAlloc(0,0,uVar1,0,0);
        return (void *)0x0;
      }
      pvVar3 = _aligned_realloc(param_1,param_2,(ulonglong)uVar1);
    }
    MemoryTrace_ReallocAlloc((ulong64)pvVar3,param_2,uVar1,0,0);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
  }
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FGenericPlatformMemory::OnOutOfMemory(param_2,param_3);
  }
  return (void *)0x0;
}

// TryMalloc @ 1416c33e0

void * __thiscall FMallocAnsi::TryMalloc(FMallocAnsi *this,ulong64 param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  
  if ((FMalloc::MaxSingleAlloc != (TAtomic<unsigned___int64>)0x0) &&
     ((ulonglong)FMalloc::MaxSingleAlloc < param_1)) {
    return (void *)0x0;
  }
  uVar1 = 8;
  if (0xf < param_1) {
    uVar1 = 0x10;
  }
  if (param_2 < uVar1) {
    param_2 = uVar1;
  }
  pvVar2 = _aligned_malloc(param_1,(ulonglong)param_2);
  MemoryTrace_Alloc((ulong64)pvVar2,param_1,param_2,0,0);
  return pvVar2;
}

// TryRealloc @ 1416c3470

void * __thiscall
FMallocAnsi::TryRealloc(FMallocAnsi *this,void *param_1,ulong64 param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  
  if ((FMalloc::MaxSingleAlloc != (TAtomic<unsigned___int64>)0x0) &&
     ((ulonglong)FMalloc::MaxSingleAlloc < param_2)) {
    return (void *)0x0;
  }
  uVar1 = 8;
  if (0xf < param_2) {
    uVar1 = 0x10;
  }
  if (param_3 < uVar1) {
    param_3 = uVar1;
  }
  MemoryTrace_ReallocFree((ulong64)param_1,0,0);
  if (param_1 == (void *)0x0) {
    pvVar2 = _aligned_malloc(param_2,(ulonglong)param_3);
  }
  else if (param_2 == 0) {
    _aligned_free(param_1);
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = _aligned_realloc(param_1,param_2,(ulonglong)param_3);
  }
  MemoryTrace_ReallocAlloc((ulong64)pvVar2,param_2,param_3,0,0);
  return pvVar2;
}

// ValidateHeap @ 1416c7940

bool __thiscall FMallocAnsi::ValidateHeap(FMallocAnsi *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = _heapchk();
  if (iVar4 == -3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result != (-3)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocAnsi.cpp"
                       ,0x102,L"");
    if (bVar2) {
code_r0x0001416c79fc:
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else if (iVar4 == -4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result != (-4)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocAnsi.cpp"
                       ,0x103,L"");
    if (bVar2) goto code_r0x0001416c79fc;
  }
  else if (iVar4 == -6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result != (-6)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocAnsi.cpp"
                       ,0x104,L"");
    if (bVar2) goto code_r0x0001416c79fc;
  }
  else if (iVar4 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result != (-1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocAnsi.cpp"
                       ,0x105,L"");
    if (bVar2) goto code_r0x0001416c79fc;
  }
  else if (iVar4 == -2) {
    return true;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result == (-2)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocAnsi.cpp"
                     ,0x106,L"");
  if (!bVar2) {
    return true;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

