// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 6

// CopyFrom<FDefaultTSDelegateUserPolicy> @ 14314a8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy>::
CopyFrom<FDefaultTSDelegateUserPolicy>
          (TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy> *this,
          TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy> *param_1)

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
    if (param_1 == (TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy> *)0x0) {
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
    if (this == (TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy> *)0x0) {
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

// operator= @ 1431512e0

TDelegate<void___cdecl(TSharedRef<IHttpRequest,1>_const_&),FDefaultDelegateUserPolicy> * __thiscall
TDelegate<void___cdecl(TSharedRef<IHttpRequest,1>_const_&),FDefaultDelegateUserPolicy>::operator=
          (TDelegate<void___cdecl(TSharedRef<IHttpRequest,1>_const_&),FDefaultDelegateUserPolicy>
           *this,TDelegate<void___cdecl(TSharedRef<IHttpRequest,1>_const_&),FDefaultDelegateUserPolicy>
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

// ExecuteIfBound @ 14315d710

bool __thiscall
TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfBound(TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
                 *this,TSharedPtr<IHttpRequest,1> *param_1,FString *param_2,FString *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  IHttpRequest *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if (this == (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
               *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ((*(int *)&this->field_0x30 == 0) ||
     (plVar1 = *(longlong **)&this->field_0x28, plVar1 == (longlong *)0x0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    uVar4 = 0;
  }
  else {
    pcVar2 = *(code **)(*plVar1 + 0x68);
    local_18 = param_1->Object;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (IHttpRequest *)0x0;
    uVar4 = (*pcVar2)(plVar1,&local_18,param_2,param_3);
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
  }
  return (bool)uVar4;
}

// ExecuteIfBound @ 14315d7f0

bool __thiscall
TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>::ExecuteIfBound
          (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
           *this,TSharedPtr<IHttpRequest,1> *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  IHttpRequest *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if (this == (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
               *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ((*(int *)&this->field_0x30 != 0) &&
     (plVar1 = *(longlong **)&this->field_0x28, plVar1 != (longlong *)0x0)) {
    pcVar2 = *(code **)(*plVar1 + 0x68);
    local_18 = param_1->Object;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (IHttpRequest *)0x0;
    uVar4 = (*pcVar2)(plVar1,&local_18,param_2);
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (bool)uVar4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfBound @ 14315d8d0

bool __thiscall
TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::ExecuteIfBound(TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                 *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
                bool param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  IHttpResponse *local_28;
  TReferenceControllerBase<1> *local_20;
  IHttpRequest *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if (this == (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
               *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ((*(int *)&this->field_0x30 == 0) ||
     (plVar1 = *(longlong **)&this->field_0x28, plVar1 == (longlong *)0x0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    uVar4 = 0;
  }
  else {
    pcVar2 = *(code **)(*plVar1 + 0x68);
    local_28 = param_2->Object;
    param_2->Object = (IHttpResponse *)0x0;
    local_20 = (param_2->SharedReferenceCount).ReferenceController;
    (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_18 = param_1->Object;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (IHttpRequest *)0x0;
    uVar4 = (*pcVar2)(plVar1,&local_18,&local_28,param_3);
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
  }
  return (bool)uVar4;
}

// ExecuteIfBound @ 14315d9e0

bool __thiscall
TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
::ExecuteIfBound(TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
                 *this,TSharedPtr<IHttpRequest,1> *param_1,ulong64 param_2,ulong64 param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  IHttpRequest *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if (this == (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
               *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ((*(int *)&this->field_0x30 == 0) ||
     (plVar1 = *(longlong **)&this->field_0x28, plVar1 == (longlong *)0x0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    uVar4 = 0;
  }
  else {
    pcVar2 = *(code **)(*plVar1 + 0x68);
    local_18 = param_1->Object;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (IHttpRequest *)0x0;
    uVar4 = (*pcVar2)(plVar1,&local_18,param_2,param_3);
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
  }
  return (bool)uVar4;
}

