// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 18

// FMallocWrapper @ 141986870

FMallocWrapper * __thiscall FMallocWrapper::FMallocWrapper(FMallocWrapper *this,FMalloc *param_1)

{
  this->InnerMalloc = param_1;
  this->_padding_ = (longlong)&___7FMallocWrapper__6B_;
  return this;
}

// DumpAllocatorStats @ 1419917c0

void __thiscall FMallocWrapper::DumpAllocatorStats(FMallocWrapper *this,FOutputDevice *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001419917c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->InnerMalloc + 0xb0))();
  return;
}

// Free @ 141994520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMallocWrapper::Free(FMallocWrapper *this,void *param_1)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  if (param_1 != (void *)0x0) {
    local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
    if (GTraceAllowed) {
      if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xbb4) == '\0') && (-1 < CallstackChannel->Enabled)) &&
         (FBacktracer::Instance != (FBacktracer *)0x0)) {
        uVar1 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
      }
      else {
        uVar1 = 0;
      }
      if (-1 < MemAllocChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FMemoryFreeSystemFields>((TLogScope<0> *)&local_28);
        *local_28 = param_1;
        *(uint *)(local_28 + 1) = uVar1;
        *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
      }
      MemoryTrace_UpdateInternal();
    }
    (**(code **)((longlong)*this->InnerMalloc + 0x48))(this->InnerMalloc,param_1);
  }
  return;
}

// GetActualAlignment @ 141994880

uint __cdecl FMallocWrapper::GetActualAlignment(ulong64 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 8;
  if (0xf < param_1) {
    uVar1 = 0x10;
  }
  if (param_2 < uVar1) {
    param_2 = uVar1;
  }
  return param_2;
}

// GetAllocationSize @ 1419948a0

bool __thiscall
FMallocWrapper::GetAllocationSize(FMallocWrapper *this,void *param_1,ulong64 *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001419948a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->InnerMalloc + 0x68))();
  return (bool)uVar1;
}

// GetAllocatorStats @ 1419948c0

void __thiscall FMallocWrapper::GetAllocatorStats(FMallocWrapper *this,FGenericMemoryStats *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001419948c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->InnerMalloc + 0xa8))();
  return;
}

// GetDescriptiveName @ 141995230

wchar_t * __thiscall FMallocWrapper::GetDescriptiveName(FMallocWrapper *this)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141995237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = (wchar_t *)(**(code **)((longlong)*this->InnerMalloc + 200))();
  return pwVar1;
}

// IsInternallyThreadSafe @ 1419a0b80

bool __thiscall FMallocWrapper::IsInternallyThreadSafe(FMallocWrapper *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001419a0b87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->InnerMalloc + 0xb8))();
  return (bool)uVar1;
}

// Malloc @ 1419a20c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall FMallocWrapper::Malloc(FMallocWrapper *this,ulong64 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar2 = 8;
  if (0xf < param_1) {
    uVar2 = 0x10;
  }
  if (param_2 < uVar2) {
    param_2 = uVar2;
  }
  pvVar3 = (void *)(**(code **)((longlong)*this->InnerMalloc + 0x28))(this->InnerMalloc,param_1);
  if (GTraceAllowed != false) {
    iVar1 = 0;
    if (param_2 != 0) {
      for (; (param_2 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    iVar4 = 0;
    if (param_2 != 0) {
      iVar4 = iVar1;
    }
    if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xbb4) == '\0') && (-1 < CallstackChannel->Enabled)) &&
       (FBacktracer::Instance != (FBacktracer *)0x0)) {
      uVar2 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
    }
    else {
      uVar2 = 0;
    }
    if (-1 < MemAllocChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMemoryAllocSystemFields>((TLogScope<0> *)&local_38);
      *local_38 = pvVar3;
      *(uint *)(local_38 + 1) = uVar2;
      *(int *)((longlong)local_38 + 0xc) = (int)(param_1 >> 3);
      *(byte *)(local_38 + 2) = (byte)(iVar4 << 3) | (byte)param_1 & 7;
      *(undefined8 *)(local_30 + 0x28) = *(undefined8 *)(local_30 + 0x20);
    }
    MemoryTrace_UpdateInternal();
  }
  return pvVar3;
}

// MarkTLSCachesAsUnusedOnCurrentThread @ 1419a2430

void __thiscall FMallocWrapper::MarkTLSCachesAsUnusedOnCurrentThread(FMallocWrapper *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001419a2437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->InnerMalloc + 0x88))();
  return;
}

// MarkTLSCachesAsUsedOnCurrentThread @ 1419a2450

void __thiscall FMallocWrapper::MarkTLSCachesAsUsedOnCurrentThread(FMallocWrapper *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001419a2457. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->InnerMalloc + 0x80))();
  return;
}

// OnMallocInitialized @ 1419a4580

void __thiscall FMallocWrapper::OnMallocInitialized(FMallocWrapper *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001419a4587. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->InnerMalloc + 0xd0))();
  return;
}

// OnPostFork @ 1419a45c0

void __thiscall FMallocWrapper::OnPostFork(FMallocWrapper *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001419a45c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->InnerMalloc + 0xe0))();
  return;
}

// OnPreFork @ 1419a4600

void __thiscall FMallocWrapper::OnPreFork(FMallocWrapper *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001419a4607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->InnerMalloc + 0xd8))();
  return;
}

// Realloc @ 1419a6c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall
FMallocWrapper::Realloc(FMallocWrapper *this,void *param_1,ulong64 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (param_1 == (void *)0x0) {
    pvVar3 = (void *)(**(code **)(this->_padding_ + 0x28))(this,param_2,param_3);
  }
  else {
    if (GTraceAllowed) {
      if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xbb4) == '\0') && (-1 < CallstackChannel->Enabled)) &&
         (FBacktracer::Instance != (FBacktracer *)0x0)) {
        uVar2 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
      }
      else {
        uVar2 = 0;
      }
      if (-1 < MemAllocChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FMemoryReallocFreeSystemFields>
                  ((TLogScope<0> *)&local_58);
        *local_58 = param_1;
        *(uint *)(local_58 + 1) = uVar2;
        *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
      }
      MemoryTrace_UpdateInternal();
    }
    pvVar3 = (void *)(**(code **)((longlong)*this->InnerMalloc + 0x38))
                               (this->InnerMalloc,param_1,param_2,param_3);
    uVar2 = 8;
    if (0xf < param_2) {
      uVar2 = 0x10;
    }
    if (param_3 < uVar2) {
      param_3 = uVar2;
    }
    if (GTraceAllowed != false) {
      iVar1 = 0;
      if (param_3 != 0) {
        for (; (param_3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
        }
      }
      iVar4 = 0;
      if (param_3 != 0) {
        iVar4 = iVar1;
      }
      uVar2 = 0;
      if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xbb4) == '\0') && (uVar2 = 0, -1 < CallstackChannel->Enabled)) &&
         (FBacktracer::Instance != (FBacktracer *)0x0)) {
        uVar2 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
      }
      if (-1 < MemAllocChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FMemoryReallocAllocSystemFields>
                  ((TLogScope<0> *)&local_58);
        *local_58 = pvVar3;
        *(uint *)(local_58 + 1) = uVar2;
        *(int *)((longlong)local_58 + 0xc) = (int)(param_2 >> 3);
        *(byte *)(local_58 + 2) = (byte)(iVar4 << 3) | (byte)param_2 & 7;
        *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
      }
      MemoryTrace_UpdateInternal();
    }
  }
  return pvVar3;
}

// SetupTLSCachesOnCurrentThread @ 1419ab630

void __thiscall FMallocWrapper::SetupTLSCachesOnCurrentThread(FMallocWrapper *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001419ab637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->InnerMalloc + 0x78))();
  return;
}

// UpdateStats @ 1419b1140

void __thiscall FMallocWrapper::UpdateStats(FMallocWrapper *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001419b1147. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->InnerMalloc + 0xa0))();
  return;
}

// ValidateHeap @ 1419b11b0

bool __thiscall FMallocWrapper::ValidateHeap(FMallocWrapper *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001419b11b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->InnerMalloc + 0xc0))();
  return (bool)uVar1;
}

