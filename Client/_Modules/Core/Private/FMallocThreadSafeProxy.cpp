// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// DumpAllocatorStats @ 1416ec0e0

void __thiscall
FMallocThreadSafeProxy::DumpAllocatorStats(FMallocThreadSafeProxy *this,FOutputDevice *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)((longlong)*this->UsedMalloc + 0xb0))(this->UsedMalloc,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001416ec129. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Exec @ 1416ed120

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
FMallocThreadSafeProxy::Exec
          (FMallocThreadSafeProxy *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 uVar1;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = (**(code **)((longlong)*this->UsedMalloc + 8))(this->UsedMalloc,param_1,param_2,param_3)
    ;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Free @ 1416f0e00

void __thiscall FMallocThreadSafeProxy::Free(FMallocThreadSafeProxy *this,void *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  if (param_1 != (void *)0x0) {
    lpCriticalSection = &this->SynchronizationObject;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)((longlong)*this->UsedMalloc + 0x48))(this->UsedMalloc,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// GetAllocationSize @ 1416f1f20

bool __thiscall
FMallocThreadSafeProxy::GetAllocationSize
          (FMallocThreadSafeProxy *this,void *param_1,ulong64 *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 uVar1;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = (**(code **)((longlong)*this->UsedMalloc + 0x68))(this->UsedMalloc,param_1,param_2);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetAllocatorStats @ 1416f20b0

void __thiscall
FMallocThreadSafeProxy::GetAllocatorStats(FMallocThreadSafeProxy *this,FGenericMemoryStats *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)((longlong)*this->UsedMalloc + 0xa8))(this->UsedMalloc,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001416f20f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetDescriptiveName @ 1416f7da0

wchar_t * __thiscall FMallocThreadSafeProxy::GetDescriptiveName(FMallocThreadSafeProxy *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->UsedMalloc == (FMalloc *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UsedMalloc",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocThreadSafeProxy.h"
                       ,0x72,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  pwVar3 = (wchar_t *)(**(code **)((longlong)*this->UsedMalloc + 200))();
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pwVar3;
}

// InitializeStatsMetadata @ 141700cd0

void __thiscall FMallocThreadSafeProxy::InitializeStatsMetadata(FMallocThreadSafeProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141700cd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0x98))();
  return;
}

// IsInternallyThreadSafe @ 141702540

bool __thiscall FMallocThreadSafeProxy::IsInternallyThreadSafe(FMallocThreadSafeProxy *this)

{
  return true;
}

// Malloc @ 1417047c0

void * __thiscall
FMallocThreadSafeProxy::Malloc(FMallocThreadSafeProxy *this,ulong64 param_1,uint param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  void *pvVar1;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pvVar1 = (void *)(**(code **)((longlong)*this->UsedMalloc + 0x28))
                               (this->UsedMalloc,param_1,param_2);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnMallocInitialized @ 141706170

void __thiscall FMallocThreadSafeProxy::OnMallocInitialized(FMallocThreadSafeProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141706177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xd0))();
  return;
}

// OnPostFork @ 141706270

void __thiscall FMallocThreadSafeProxy::OnPostFork(FMallocThreadSafeProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141706277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xe0))();
  return;
}

// OnPreFork @ 1417063e0

void __thiscall FMallocThreadSafeProxy::OnPreFork(FMallocThreadSafeProxy *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001417063e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->UsedMalloc + 0xd8))();
  return;
}

// Realloc @ 141708fa0

void * __thiscall
FMallocThreadSafeProxy::Realloc
          (FMallocThreadSafeProxy *this,void *param_1,ulong64 param_2,uint param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  void *pvVar1;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pvVar1 = (void *)(**(code **)((longlong)*this->UsedMalloc + 0x38))
                               (this->UsedMalloc,param_1,param_2,param_3);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Trim @ 141716fc0

void __thiscall FMallocThreadSafeProxy::Trim(FMallocThreadSafeProxy *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->UsedMalloc == (FMalloc *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UsedMalloc",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocThreadSafeProxy.h"
                       ,0x79,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)((longlong)*this->UsedMalloc + 0x70))(this->UsedMalloc,param_1);
                    /* WARNING: Could not recover jumptable at 0x000141717034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ValidateHeap @ 14171a870

bool __thiscall FMallocThreadSafeProxy::ValidateHeap(FMallocThreadSafeProxy *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 uVar1;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = (**(code **)((longlong)*this->UsedMalloc + 0xc0))();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

