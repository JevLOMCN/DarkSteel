// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputCore
// Functions: 11

// CreateCopy @ 14238f040

void __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey>::CreateCopy
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey> *this,
          TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy__UFKey____6B_
    ;
    puVar2[1] = this->_padding_;
    puVar2[2] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[4] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__UFKey____6B_
    ;
    puVar2[5] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14238f0f0

void __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey>::CreateCopy
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy__UFKey____6B_
    ;
    puVar2[1] = this->_padding_;
    puVar2[2] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[4] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__UFKey____6B_
    ;
    puVar2[5] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14238f160

void __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey>::CreateCopy
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey> *this,
          TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy__UFKey____6B_
    ;
    puVar4[1] = this->_padding_;
    puVar4[2] = this->_padding_;
    lVar1 = this->_padding_;
    puVar4[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar4[4] = this->_padding_;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__UFKey____6B_
    ;
    puVar4[5] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14238f790

FText * __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey>::Execute
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey> *this,
          FText *__return_storage_ptr__)

{
  _func___cdecl_FText_FKey *p_Var1;
  FKey local_28;
  
  local_28.KeyName = (FName)this->_padding_;
  p_Var1 = this->StaticFuncPtr;
  local_28.KeyDetails.Object = (FKeyDetails *)this->_padding_;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)this->_padding_;
  if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  (*p_Var1)(__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 14238f7e0

bool __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey> *this)

{
  _func___cdecl_FText_FKey *p_Var1;
  FText local_38;
  FKey local_28;
  
  local_28.KeyName = (FName)this->_padding_;
  p_Var1 = this->StaticFuncPtr;
  local_28.KeyDetails.Object = (FKeyDetails *)this->_padding_;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)this->_padding_;
  if (local_28.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  (*p_Var1)(&local_38,&local_28);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14238fc70

ulong64 __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 1423923c0

void * __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey> *this)

{
  return (void *)0x0;
}

// GetUObject @ 1423933a0

UObject * __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey>::GetUObject
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey> *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1423934a0

bool __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey>::HasSameObject
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey> *this,
          void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1423b69c0

bool __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey>::IsSafeToExecute
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey> *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1423b7be0

FName __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,FKey> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

