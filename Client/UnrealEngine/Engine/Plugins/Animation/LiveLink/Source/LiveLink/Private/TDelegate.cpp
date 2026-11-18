// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 21

// CopyFrom<FDefaultDelegateUserPolicy> @ 14cffbdb0

void __thiscall
TDelegate<FString___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy>::
CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<FString___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy>
           *this,TDelegate<FString___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy>
                 *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

// CopyFrom<FDefaultDelegateUserPolicy> @ 14cffbeb0

void __thiscall
TDelegate<FString___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
::CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<FString___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
           *this,TDelegate<FString___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
                 *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

// CopyFrom<FDefaultDelegateUserPolicy> @ 14cffbfb0

void __thiscall
TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>::
CopyFrom<FDefaultDelegateUserPolicy>
          (TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>
           *this,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>
                 *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

// CopyFrom<FDefaultTSDelegateUserPolicy> @ 14cffc0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::CopyFrom<FDefaultTSDelegateUserPolicy>
          (TDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
           *this,TDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                 *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_78 [32];
  _RTL_CRITICAL_SECTION local_58;
  ForAnyElementType local_30;
  int local_28;
  ulonglong local_20;
  
  if (param_1 != this) {
    local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
    InitializeCriticalSectionAndSpinCount(&local_58,4000);
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    if (param_1 ==
        (TDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
         *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)param_1);
    if ((*(int *)&param_1->field_0x30 != 0) &&
       (*(longlong **)&param_1->field_0x28 != (longlong *)0x0)) {
      (**(code **)(**(longlong **)&param_1->field_0x28 + 0x58))();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
    EnterCriticalSection(&local_58);
    iVar3 = local_28;
    FVar2.Data = local_30.Data;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    LeaveCriticalSection(&local_58);
    if (this == (TDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                 *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if ((*(int *)&this->field_0x30 != 0) && (*(undefined8 **)&this->field_0x28 != (undefined8 *)0x0)
       ) {
      (**(code **)**(undefined8 **)&this->field_0x28)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x28,0,0,0x10);
      *(undefined4 *)&this->field_0x30 = 0;
    }
    if (*(void **)&this->field_0x28 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x28);
    }
    *(FScriptContainerElement **)&this->field_0x28 = FVar2.Data;
    *(int *)&this->field_0x30 = iVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    EnterCriticalSection(&local_58);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    LeaveCriticalSection(&local_58);
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    DeleteCriticalSection(&local_58);
  }
  return;
}

// CopyFrom<FDefaultTSDelegateUserPolicy> @ 14cffc290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
::CopyFrom<FDefaultTSDelegateUserPolicy>
          (TDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
           *this,TDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
                 *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_78 [32];
  _RTL_CRITICAL_SECTION local_58;
  ForAnyElementType local_30;
  int local_28;
  ulonglong local_20;
  
  if (param_1 != this) {
    local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
    InitializeCriticalSectionAndSpinCount(&local_58,4000);
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    if (param_1 ==
        (TDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
         *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)param_1);
    if ((*(int *)&param_1->field_0x30 != 0) &&
       (*(longlong **)&param_1->field_0x28 != (longlong *)0x0)) {
      (**(code **)(**(longlong **)&param_1->field_0x28 + 0x58))();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
    EnterCriticalSection(&local_58);
    iVar3 = local_28;
    FVar2.Data = local_30.Data;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    LeaveCriticalSection(&local_58);
    if (this == (TDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
                 *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if ((*(int *)&this->field_0x30 != 0) && (*(undefined8 **)&this->field_0x28 != (undefined8 *)0x0)
       ) {
      (**(code **)**(undefined8 **)&this->field_0x28)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x28,0,0,0x10);
      *(undefined4 *)&this->field_0x30 = 0;
    }
    if (*(void **)&this->field_0x28 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x28);
    }
    *(FScriptContainerElement **)&this->field_0x28 = FVar2.Data;
    *(int *)&this->field_0x30 = iVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    EnterCriticalSection(&local_58);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    LeaveCriticalSection(&local_58);
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    DeleteCriticalSection(&local_58);
  }
  return;
}

// CopyFrom<FDefaultTSDelegateUserPolicy> @ 14cffc470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::CopyFrom<FDefaultTSDelegateUserPolicy>
          (TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
           *this,TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                 *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_78 [32];
  _RTL_CRITICAL_SECTION local_58;
  ForAnyElementType local_30;
  int local_28;
  ulonglong local_20;
  
  if (param_1 != this) {
    local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
    InitializeCriticalSectionAndSpinCount(&local_58,4000);
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    if (param_1 ==
        (TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
         *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)param_1);
    if ((*(int *)&param_1->field_0x30 != 0) &&
       (*(longlong **)&param_1->field_0x28 != (longlong *)0x0)) {
      (**(code **)(**(longlong **)&param_1->field_0x28 + 0x58))();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
    EnterCriticalSection(&local_58);
    iVar3 = local_28;
    FVar2.Data = local_30.Data;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    LeaveCriticalSection(&local_58);
    if (this == (TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                 *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if ((*(int *)&this->field_0x30 != 0) && (*(undefined8 **)&this->field_0x28 != (undefined8 *)0x0)
       ) {
      (**(code **)**(undefined8 **)&this->field_0x28)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x28,0,0,0x10);
      *(undefined4 *)&this->field_0x30 = 0;
    }
    if (*(void **)&this->field_0x28 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x28);
    }
    *(FScriptContainerElement **)&this->field_0x28 = FVar2.Data;
    *(int *)&this->field_0x30 = iVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    EnterCriticalSection(&local_58);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    LeaveCriticalSection(&local_58);
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    DeleteCriticalSection(&local_58);
  }
  return;
}

// CopyFrom<FDefaultTSDelegateUserPolicy> @ 14cffc650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
::CopyFrom<FDefaultTSDelegateUserPolicy>
          (TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
           *this,TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
                 *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_78 [32];
  _RTL_CRITICAL_SECTION local_58;
  ForAnyElementType local_30;
  int local_28;
  ulonglong local_20;
  
  if (param_1 != this) {
    local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
    InitializeCriticalSectionAndSpinCount(&local_58,4000);
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    if (param_1 ==
        (TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
         *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)param_1);
    if ((*(int *)&param_1->field_0x30 != 0) &&
       (*(longlong **)&param_1->field_0x28 != (longlong *)0x0)) {
      (**(code **)(**(longlong **)&param_1->field_0x28 + 0x58))();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
    EnterCriticalSection(&local_58);
    iVar3 = local_28;
    FVar2.Data = local_30.Data;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    LeaveCriticalSection(&local_58);
    if (this == (TDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
                 *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if ((*(int *)&this->field_0x30 != 0) && (*(undefined8 **)&this->field_0x28 != (undefined8 *)0x0)
       ) {
      (**(code **)**(undefined8 **)&this->field_0x28)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x28,0,0,0x10);
      *(undefined4 *)&this->field_0x30 = 0;
    }
    if (*(void **)&this->field_0x28 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x28);
    }
    *(FScriptContainerElement **)&this->field_0x28 = FVar2.Data;
    *(int *)&this->field_0x30 = iVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    EnterCriticalSection(&local_58);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    LeaveCriticalSection(&local_58);
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    DeleteCriticalSection(&local_58);
  }
  return;
}

// TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy> @ 14d00dc80

TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy> *
__thiscall
TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>::
TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
          (TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
           *this,TDelegate<void___cdecl(TSharedPtr<ILiveLinkSource,1>,FString),FDefaultDelegateUserPolicy>
                 *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  if (param_1 != this) {
    local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,&local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    iVar3 = local_38;
    FVar2.Data = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_30);
    if ((*(int *)&this->field_0x10 != 0) && (*(undefined8 **)&this->field_0x8 != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)&this->field_0x8)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x8,0,0,0x10);
      *(undefined4 *)&this->field_0x10 = 0;
    }
    if (*(void **)&this->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x8);
    }
    *(FScriptContainerElement **)&this->field_0x8 = FVar2.Data;
    *(int *)&this->field_0x10 = iVar3;
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_48,(FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  }
  return this;
}

// operator= @ 14d017720

TDelegate<TOptional<EItemDropZone>___cdecl(FDragDropEvent_const_&,EItemDropZone,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>
::operator=(void *this,
           TDelegate<TOptional<EItemDropZone>___cdecl(FDragDropEvent_const_&,EItemDropZone,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>
           *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              (this,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 14d017820

TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::operator=(TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
            *this,TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                  *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 14d017920

TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::operator=(TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
            *this,TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                  *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 14d017a20

TDelegate<FReply___cdecl(FDragDropEvent_const_&,EItemDropZone,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>
::operator=(void *this,
           TDelegate<FReply___cdecl(FDragDropEvent_const_&,EItemDropZone,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>
           *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              (this,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 14d017b20

TDelegate<void___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy>
           *this,TDelegate<void___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy>
                 *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// operator= @ 14d017c20

TDelegate<void___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
* __thiscall
TDelegate<void___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
::operator=(TDelegate<void___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
            *this,TDelegate<void___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
                  *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != this) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return this;
}

// Execute @ 14d03dda0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy>
::Execute(void *this,FDragDropEvent *param_1,EItemDropZone param_2,
         TSharedPtr<FLiveLinkDebugUIEntry,1> *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined4 in_register_00000084;
  undefined8 *in_stack_00000028;
  undefined8 local_38;
  undefined8 local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  plVar2 = (longlong *)0x0;
  if (*(int *)((longlong)this + 0x10) != 0) {
    plVar2 = *(longlong **)((longlong)this + 8);
  }
  pcVar1 = *(code **)(*plVar2 + 0x60);
  local_38 = *in_stack_00000028;
  local_30 = in_stack_00000028[1];
  in_stack_00000028[1] = 0;
  *in_stack_00000028 = 0;
  (*pcVar1)(plVar2,param_1,CONCAT44(in_register_00000084,param_2),(ulonglong)param_3 & 0xffffffff,
            &local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_stack_00000028[1]);
  return (TOptional<EItemDropZone>)param_1;
}

// Execute @ 14d03de50

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
::Execute(void *this,FDragDropEvent *param_1,EItemDropZone param_2,
         TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined4 in_register_00000084;
  undefined8 *in_stack_00000028;
  undefined8 local_38;
  undefined8 local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  plVar2 = (longlong *)0x0;
  if (*(int *)((longlong)this + 0x10) != 0) {
    plVar2 = *(longlong **)((longlong)this + 8);
  }
  pcVar1 = *(code **)(*plVar2 + 0x60);
  local_38 = *in_stack_00000028;
  local_30 = in_stack_00000028[1];
  in_stack_00000028[1] = 0;
  *in_stack_00000028 = 0;
  (*pcVar1)(plVar2,param_1,CONCAT44(in_register_00000084,param_2),(ulonglong)param_3 & 0xffffffff,
            &local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_stack_00000028[1]);
  return (TOptional<EItemDropZone>)param_1;
}

// Execute @ 14d03df00

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>
::Execute(void *this,FDragDropEvent *param_1,EItemDropZone param_2,
         TSharedPtr<FProviderPollResult,1> *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined4 in_register_00000084;
  undefined8 *in_stack_00000028;
  undefined8 local_38;
  undefined8 local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  plVar2 = (longlong *)0x0;
  if (*(int *)((longlong)this + 0x10) != 0) {
    plVar2 = *(longlong **)((longlong)this + 8);
  }
  pcVar1 = *(code **)(*plVar2 + 0x60);
  local_38 = *in_stack_00000028;
  local_30 = in_stack_00000028[1];
  in_stack_00000028[1] = 0;
  *in_stack_00000028 = 0;
  (*pcVar1)(plVar2,param_1,CONCAT44(in_register_00000084,param_2),(ulonglong)param_3 & 0xffffffff,
            &local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_stack_00000028[1]);
  return (TOptional<EItemDropZone>)param_1;
}

// Execute @ 14d03dfb0

bool __thiscall
TDelegate<bool___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy>::Execute
          (TDelegate<bool___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy>
           *this,TSharedPtr<FLiveLinkDebugUIEntry,1> *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FLiveLinkDebugUIEntry *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  plVar3 = (longlong *)0x0;
  if (*(int *)&this->field_0x10 != 0) {
    plVar3 = *(longlong **)&this->field_0x8;
  }
  pcVar1 = *(code **)(*plVar3 + 0x60);
  local_38 = param_1->Object;
  local_30 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FLiveLinkDebugUIEntry *)0x0;
  uVar2 = (*pcVar1)(plVar3,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar2;
}

// Execute @ 14d03e030

bool __thiscall
TDelegate<bool___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
::Execute(TDelegate<bool___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FLiveLinkSource *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  plVar3 = (longlong *)0x0;
  if (*(int *)&this->field_0x10 != 0) {
    plVar3 = *(longlong **)&this->field_0x8;
  }
  pcVar1 = *(code **)(*plVar3 + 0x60);
  local_38 = param_1->Object;
  local_30 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FLiveLinkSource *)0x0;
  uVar2 = (*pcVar1)(plVar3,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (bool)uVar2;
}

// ExecuteIfBound @ 14d03e0b0

bool __thiscall
TDelegate<void___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy>::
ExecuteIfBound(TDelegate<void___cdecl(TSharedPtr<FLiveLinkDebugUIEntry,1>),FDefaultDelegateUserPolicy>
               *this,TSharedPtr<FLiveLinkDebugUIEntry,1> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  FLiveLinkDebugUIEntry *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&this->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&this->field_0x8, plVar1 != (longlong *)0x0)) {
    pcVar2 = *(code **)(*plVar1 + 0x68);
    local_38 = param_1->Object;
    local_30 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FLiveLinkDebugUIEntry *)0x0;
    uVar3 = (*pcVar2)(plVar1,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (bool)uVar3;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfBound @ 14d03e150

bool __thiscall
TDelegate<void___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
::ExecuteIfBound(TDelegate<void___cdecl(TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>),FDefaultDelegateUserPolicy>
                 *this,TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  FLiveLinkSource *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&this->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&this->field_0x8, plVar1 != (longlong *)0x0)) {
    pcVar2 = *(code **)(*plVar1 + 0x68);
    local_38 = param_1->Object;
    local_30 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FLiveLinkSource *)0x0;
    uVar3 = (*pcVar2)(plVar1,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (bool)uVar3;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

