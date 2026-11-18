// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 11

// CreateCopy @ 14abd4a40

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VFUpdateContextPrivate___00__VFTaskEvent_Tasks_UE____6B_
    ;
    puVar2[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[3] = 0;
    lVar1 = this->_padding_;
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + 1;
      UNLOCK();
    }
    puVar2[4] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VFUpdateContextPrivate___00__VFTaskEvent_Tasks_UE____6B_
    ;
    puVar2[5] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14abd4b00

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VFUpdateContextPrivate___00__VFTaskEvent_Tasks_UE____6B_
    ;
    puVar2[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[3] = 0;
    lVar1 = this->_padding_;
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + 1;
      UNLOCK();
    }
    puVar2[4] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VFUpdateContextPrivate___00__VFTaskEvent_Tasks_UE____6B_
    ;
    puVar2[5] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14abd4b80

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VFUpdateContextPrivate___00__VFTaskEvent_Tasks_UE____6B_
    ;
    puVar4[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar4[3] = 0;
    lVar1 = this->_padding_;
    puVar4[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + 1;
      UNLOCK();
    }
    puVar4[4] = this->_padding_;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedRef_VFUpdateContextPrivate___00__VFTaskEvent_Tasks_UE____6B_
    ;
    puVar4[5] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14abd7040

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
::Execute(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
          *this)

{
  _func___cdecl_void_TSharedRef<FUpdateContextPrivate,1>_FTaskEvent *p_Var1;
  longlong local_res8 [4];
  TSharedRef<FUpdateContextPrivate,1> local_18;
  
  local_res8[0] = this->_padding_;
  p_Var1 = this->StaticFuncPtr;
  if (local_res8[0] != 0) {
    LOCK();
    *(int *)(local_res8[0] + 0x30) = *(int *)(local_res8[0] + 0x30) + 1;
    UNLOCK();
  }
  local_18.Object = (FUpdateContextPrivate *)this->_padding_;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_
  ;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(&local_18,(FTaskEvent)local_res8);
  return;
}

// ExecuteIfSafe @ 14abd70b0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
                *this)

{
  _func___cdecl_void_TSharedRef<FUpdateContextPrivate,1>_FTaskEvent *p_Var1;
  longlong local_res8 [4];
  TSharedRef<FUpdateContextPrivate,1> local_18;
  
  local_res8[0] = this->_padding_;
  p_Var1 = this->StaticFuncPtr;
  if (local_res8[0] != 0) {
    LOCK();
    *(int *)(local_res8[0] + 0x30) = *(int *)(local_res8[0] + 0x30) + 1;
    UNLOCK();
  }
  local_18.Object = (FUpdateContextPrivate *)this->_padding_;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_
  ;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(&local_18,(FTaskEvent)local_res8);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14abd9ab0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 14abdc990

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 14abe1480

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14abe1530

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14abe41a0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14abf22f0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FUpdateContextPrivate,1>,UE::Tasks::FTaskEvent>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

