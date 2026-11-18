// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 22

// ClearAndDisableTLSCachesOnCurrentThread @ 1416e30c0

void __thiscall
FMallocPoisonProxy::ClearAndDisableTLSCachesOnCurrentThread(FMallocPoisonProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001416e30c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x90))();
  return;
}

// DumpAllocatorStats @ 1416ec090

void __thiscall
FMallocPoisonProxy::DumpAllocatorStats(FMallocPoisonProxy *this,FOutputDevice *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001416ec097. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xb0))();
  return;
}

// Exec @ 1416ed0d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FMallocPoisonProxy::Exec
          (FMallocPoisonProxy *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416ed0d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->UsedMalloc + 8))();
  return (bool)uVar1;
}

// Free @ 1416f0a50

void __thiscall FMallocPoisonProxy::Free(FMallocPoisonProxy *this,void *param_1)

{
  char cVar1;
  size_t local_res10 [3];
  
  if (param_1 != (void *)0x0) {
    cVar1 = (**(code **)(this->_padding_ + 0x68))(this,param_1,local_res10);
    if ((cVar1 != '\0') && (local_res10[0] != 0)) {
      memset(param_1,0xdd,local_res10[0]);
    }
    (**(code **)((longlong)*this->UsedMalloc + 0x48))(this->UsedMalloc,param_1);
  }
  return;
}

// GetAllocationSize @ 1416f1e90

bool __thiscall
FMallocPoisonProxy::GetAllocationSize(FMallocPoisonProxy *this,void *param_1,ulong64 *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416f1e97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->UsedMalloc + 0x68))();
  return (bool)uVar1;
}

// GetAllocatorStats @ 1416f2070

void __thiscall
FMallocPoisonProxy::GetAllocatorStats(FMallocPoisonProxy *this,FGenericMemoryStats *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001416f2077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xa8))();
  return;
}

// GetDescriptiveName @ 1416f7d50

wchar_t * __thiscall FMallocPoisonProxy::GetDescriptiveName(FMallocPoisonProxy *this)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001416f7d57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = (wchar_t *)(**(code **)((longlong)*this->UsedMalloc + 200))();
  return pwVar1;
}

// InitializeStatsMetadata @ 141700c90

void __thiscall FMallocPoisonProxy::InitializeStatsMetadata(FMallocPoisonProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141700c97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x98))();
  return;
}

// IsInternallyThreadSafe @ 141702510

bool __thiscall FMallocPoisonProxy::IsInternallyThreadSafe(FMallocPoisonProxy *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141702517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->UsedMalloc + 0xb8))();
  return (bool)uVar1;
}

// Malloc @ 141704680

void * __thiscall FMallocPoisonProxy::Malloc(FMallocPoisonProxy *this,ulong64 param_1,uint param_2)

{
  void *_Dst;
  undefined4 in_register_00000084;
  
  _Dst = (void *)(**(code **)((longlong)*this->UsedMalloc + 0x28))
                           (this->UsedMalloc,param_1,CONCAT44(in_register_00000084,param_2));
  if ((_Dst != (void *)0x0) && (param_1 != 0)) {
    memset(_Dst,0xcd,param_1);
  }
  return _Dst;
}

// MallocZeroed @ 1417049a0

void * __thiscall
FMallocPoisonProxy::MallocZeroed(FMallocPoisonProxy *this,ulong64 param_1,uint param_2)

{
  void *_Dst;
  undefined4 in_register_00000084;
  
  _Dst = (void *)(**(code **)((longlong)*this->UsedMalloc + 0x28))
                           (this->UsedMalloc,param_1,CONCAT44(in_register_00000084,param_2));
  if ((_Dst != (void *)0x0) && (param_1 != 0)) {
    memset(_Dst,0,param_1);
  }
  return _Dst;
}

// MarkTLSCachesAsUnusedOnCurrentThread @ 141704af0

void __thiscall FMallocPoisonProxy::MarkTLSCachesAsUnusedOnCurrentThread(FMallocPoisonProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141704af7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x88))();
  return;
}

// MarkTLSCachesAsUsedOnCurrentThread @ 141704b70

void __thiscall FMallocPoisonProxy::MarkTLSCachesAsUsedOnCurrentThread(FMallocPoisonProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141704b77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x80))();
  return;
}

// OnMallocInitialized @ 141706130

void __thiscall FMallocPoisonProxy::OnMallocInitialized(FMallocPoisonProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141706137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xd0))();
  return;
}

// OnPostFork @ 141706230

void __thiscall FMallocPoisonProxy::OnPostFork(FMallocPoisonProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141706237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xe0))();
  return;
}

// OnPreFork @ 1417063a0

void __thiscall FMallocPoisonProxy::OnPreFork(FMallocPoisonProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001417063a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xd8))();
  return;
}

// QuantizeSize @ 141708640

ulong64 __thiscall
FMallocPoisonProxy::QuantizeSize(FMallocPoisonProxy *this,ulong64 param_1,uint param_2)

{
  ulong64 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141708647. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->UsedMalloc + 0x60))();
  return uVar1;
}

// Realloc @ 141708d70

void * __thiscall
FMallocPoisonProxy::Realloc(FMallocPoisonProxy *this,void *param_1,ulong64 param_2,uint param_3)

{
  char cVar1;
  void *pvVar2;
  ulonglong local_res8;
  
  local_res8 = 0;
  if ((((param_1 != (void *)0x0) &&
       (cVar1 = (**(code **)(this->_padding_ + 0x68))(this,param_1,&local_res8), cVar1 != '\0')) &&
      (local_res8 != 0)) && (param_2 < local_res8)) {
    memset((void *)((longlong)param_1 + param_2),0xdd,local_res8 - param_2);
  }
  pvVar2 = (void *)(**(code **)((longlong)*this->UsedMalloc + 0x38))
                             (this->UsedMalloc,param_1,param_2,param_3);
  if (((pvVar2 != (void *)0x0) && (local_res8 != 0)) && (local_res8 < param_2)) {
    memset((void *)((longlong)pvVar2 + local_res8),0xcd,param_2 - local_res8);
  }
  return pvVar2;
}

// SetupTLSCachesOnCurrentThread @ 141712830

void __thiscall FMallocPoisonProxy::SetupTLSCachesOnCurrentThread(FMallocPoisonProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141712837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x78))();
  return;
}

// Trim @ 141716f70

void __thiscall FMallocPoisonProxy::Trim(FMallocPoisonProxy *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141716f77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x70))();
  return;
}

// UpdateStats @ 14171a7c0

void __thiscall FMallocPoisonProxy::UpdateStats(FMallocPoisonProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014171a7c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xa0))();
  return;
}

// ValidateHeap @ 14171a820

bool __thiscall FMallocPoisonProxy::ValidateHeap(FMallocPoisonProxy *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014171a827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->UsedMalloc + 0xc0))();
  return (bool)uVar1;
}

