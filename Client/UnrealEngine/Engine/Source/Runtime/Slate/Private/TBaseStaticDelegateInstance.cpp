// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 123

// CreateCopy @ 1426b5c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__UFKey___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFReply__UFKey___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1426b5d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__UFKey___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFReply__UFKey___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1426b5d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__UFKey___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFReply__UFKey___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1426b9a00

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy> *this,
          FReply *__return_storage_ptr__,FKey *param_1)

{
  _func___cdecl_FReply_FKey *p_Var1;
  FKey local_28;
  
  local_28.KeyName = param_1->KeyName;
  p_Var1 = this->StaticFuncPtr;
  local_28.KeyDetails.Object = (param_1->KeyDetails).Object;
  local_28.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  (param_1->KeyDetails).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->KeyDetails).Object = (FKeyDetails *)0x0;
  (*p_Var1)(__return_storage_ptr__,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 1426b9d50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy> *this,
          FKey *param_1)

{
  _func___cdecl_FReply_FKey *p_Var1;
  FKey local_d8;
  FReply local_c0;
  
  local_d8.KeyName = param_1->KeyName;
  p_Var1 = this->StaticFuncPtr;
  local_d8.KeyDetails.Object = (param_1->KeyDetails).Object;
  local_d8.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  (param_1->KeyDetails).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->KeyDetails).Object = (FKeyDetails *)0x0;
  (*p_Var1)(&local_c0,&local_d8);
  FReply::~FReply(&local_c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1426bcae0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 1426be4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetUObject @ 1426bfb60

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1426c14e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1426c2a00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy> *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1426e2aa0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FReply___cdecl(FKey),FDefaultDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1427290b0

void __thiscall
TBaseStaticDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_NXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 8));
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_NXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142729150

void __thiscall
TBaseStaticDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_NXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar1 + 1),
               (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 8));
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_NXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar1[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  return;
}

// CreateCopy @ 1427291c0

void __thiscall
TBaseStaticDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_NXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar3 + 1),
               (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 8));
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V__TDelegate___A6A_NXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142729280

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142729300

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142729350

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1427293f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
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
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__V__TWeakPtr_UFTabSpawnerEntry___00____6B_
    ;
    puVar2[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy__V__TWeakPtr_UFTabSpawnerEntry___00____6B_
    ;
    puVar2[4] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142729490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__V__TWeakPtr_UFTabSpawnerEntry___00____6B_
    ;
    puVar2[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy__V__TWeakPtr_UFTabSpawnerEntry___00____6B_
    ;
    puVar2[4] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142729500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
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
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__V__TWeakPtr_UFTabSpawnerEntry___00____6B_
    ;
    puVar4[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar4[3] = this->_padding_;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy__V__TWeakPtr_UFTabSpawnerEntry___00____6B_
    ;
    puVar4[4] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142731490

ECheckBoxState __thiscall
TBaseStaticDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
::Execute(void *this)

{
  code *pcVar1;
  ECheckBoxState EVar2;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  pcVar1 = *(code **)((longlong)this + 0x28);
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_28,
             (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 8));
  EVar2 = (*pcVar1)(&local_28);
  return EVar2;
}

// Execute @ 1427314d0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001427314d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*this->StaticFuncPtr)();
  return bVar1;
}

// Execute @ 1427314e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
::Execute(TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
          *this)

{
  _func___cdecl_bool_TWeakPtr<FTabSpawnerEntry,1> *p_Var1;
  bool bVar2;
  TWeakPtr<FTabSpawnerEntry,1> local_18;
  
  local_18.Object = (FTabSpawnerEntry *)this->_padding_;
  p_Var1 = this->StaticFuncPtr;
  local_18.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = (*p_Var1)(&local_18);
  return bVar2;
}

// ExecuteIfSafe @ 142734160

bool __thiscall
TBaseStaticDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
::ExecuteIfSafe(void *this)

{
  code *pcVar1;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  pcVar1 = *(code **)((longlong)this + 0x28);
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_28,
             (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 8));
  (*pcVar1)(&local_28);
  return true;
}

// ExecuteIfSafe @ 1427341a0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  (*this->StaticFuncPtr)();
  return true;
}

// ExecuteIfSafe @ 1427341c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
                *this)

{
  _func___cdecl_bool_TWeakPtr<FTabSpawnerEntry,1> *p_Var1;
  TWeakPtr<FTabSpawnerEntry,1> local_18;
  
  local_18.Object = (FTabSpawnerEntry *)this->_padding_;
  p_Var1 = this->StaticFuncPtr;
  local_18.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(&local_18);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14273ae30

ulong64 __thiscall
TBaseStaticDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 14273ae40

ulong64 __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14273ae50

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 142741ea0

void * __thiscall
TBaseStaticDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142741eb0

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy>::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142741ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 142745a50

UObject * __thiscall
TBaseStaticDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142745a60

UObject * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142745a70

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
::GetUObject(TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142748a30

bool __thiscall
TBaseStaticDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142748a40

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 142748a50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
::HasSameObject(TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14274e0d0

bool __thiscall
TBaseStaticDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14274e0e0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return true;
}

// IsSafeToExecute @ 14274e0f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14278e9b0

FName __thiscall
TBaseStaticDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14278e9c0

FName __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy>::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14278e9d0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<FTabSpawnerEntry,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_> @ 1427a9b10

TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
* __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
::
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
           *this,TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
                 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TAttribute_VFText____V__TSharedPtr___CBVFUICommandInfo___00____6B_
  ;
  this->_padding_ = 0;
  plVar1 = (longlong *)param_1->_padding_;
  this->_padding_ = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,local_res8);
  }
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  this->_padding_ = param_1->_padding_;
  lVar2 = param_1->_padding_;
  this->_padding_ = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseStaticDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TAttribute_VFText____V__TSharedPtr___CBVFUICommandInfo___00____6B_
  ;
  this->StaticFuncPtr = param_1->StaticFuncPtr;
  return this;
}

// TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText> @ 1427a9bc0

/* WARNING: Enum "Type": Some values do not have unique names */

TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
* __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
::
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
          (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
           *this,TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
                 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  this->_padding_ =
       (longlong)
       &
       ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFSlateAsyncTaskNotificationImpl___00__V__TSharedPtr_VSNotificationItem___00__VFText__V4_V4_V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____V4___6B_
  ;
  this->_padding_ = param_1->_padding_;
  lVar1 = param_1->_padding_;
  this->_padding_ = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  this->_padding_ = param_1->_padding_;
  lVar1 = param_1->_padding_;
  this->_padding_ = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  this->_padding_ = 0;
  plVar2 = (longlong *)param_1->_padding_;
  this->_padding_ = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,local_res8);
  }
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = 0;
  plVar2 = (longlong *)param_1->_padding_;
  this->_padding_ = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,local_res8);
  }
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = 0;
  plVar2 = (longlong *)param_1->_padding_;
  this->_padding_ = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,local_res8);
  }
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  this->_padding_ = 0;
  plVar2 = (longlong *)param_1->_padding_;
  this->_padding_ = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,local_res8);
  }
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ =
       (longlong)
       &
       ___7__TBaseStaticDelegateInstance___A6A_NM_ZUFDefaultDelegateUserPolicy__V__TWeakPtr_VFSlateAsyncTaskNotificationImpl___00__V__TSharedPtr_VSNotificationItem___00__VFText__V4_V4_V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy____V4___6B_
  ;
  this->StaticFuncPtr = param_1->StaticFuncPtr;
  return this;
}

// CreateCopy @ 1427fd520

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSToolTip___00__AEBV__TAttribute_VFText____AEBV__TSharedPtr_VSWidget___00__AEBV__TSharedPtr___CBVFUICommandInfo___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSToolTip___00__AEBV__TAttribute_VFText____AEBV__TSharedPtr_VSWidget___00__AEBV__TSharedPtr___CBVFUICommandInfo___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1427fd5a0

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSToolTip___00__AEBV__TAttribute_VFText____AEBV__TSharedPtr_VSWidget___00__AEBV__TSharedPtr___CBVFUICommandInfo___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSToolTip___00__AEBV__TAttribute_VFText____AEBV__TSharedPtr_VSWidget___00__AEBV__TSharedPtr___CBVFUICommandInfo___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1427fd5f0

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSToolTip___00__AEBV__TAttribute_VFText____AEBV__TSharedPtr_VSWidget___00__AEBV__TSharedPtr___CBVFUICommandInfo___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSToolTip___00__AEBV__TAttribute_VFText____AEBV__TSharedPtr_VSWidget___00__AEBV__TSharedPtr___CBVFUICommandInfo___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1427fd690

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VSWidget___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VSWidget___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1427fd710

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VSWidget___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VSWidget___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1427fd760

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VSWidget___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VSWidget___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1427fd800

void __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
::CreateCopy(TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x58,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
       *)0x0) {
    TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1427fd870

void __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
::CreateCopy(TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x58,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
       *)0x0) {
    TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 1427fd8b0

void __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
::CreateCopy(TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
  *this_00;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  this_00 = UE::Core::Private::DelegateAllocate(0x58,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
       *)0x0) {
    TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1427fd940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
  *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x90,(FDelegateAllocation *)local_10);
  if (this_00 !=
      (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
       *)0x0) {
    TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1427fd9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
  *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x90,(FDelegateAllocation *)param_1);
  if (this_00 !=
      (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
       *)0x0) {
    TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 1427fd9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
  *this_00;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  this_00 = UE::Core::Private::DelegateAllocate(0x90,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 !=
      (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
       *)0x0) {
    TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1428053c0

TSharedRef<SToolTip,1> * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
          *this,TSharedRef<SToolTip,1> *__return_storage_ptr__,TAttribute<FText> *param_1,
         TSharedPtr<SWidget,1> *param_2,TSharedPtr<FUICommandInfo_const_,1> *param_3,bool param_4)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__,param_1,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// Execute @ 142805410

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::
Execute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>
        *this,FString *__return_storage_ptr__,TSharedPtr<SWidget,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<SWidget,1> *p_Var1;
  TSharedPtr<SWidget,1> local_18;
  
  local_18.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (SWidget *)0x0;
  (*p_Var1)(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 142805470

FText * __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
::Execute(TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
          *this,FText *__return_storage_ptr__)

{
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
  ::ApplyAfter<FText_(__cdecl*const_&)(TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>)>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1>,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
              *)&this->_padding_,__return_storage_ptr__,&this->StaticFuncPtr);
  return __return_storage_ptr__;
}

// Execute @ 1428054a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
::Execute(TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
          *this,float param_1)

{
  bool bVar1;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  bVar1 = UE::Core::Private::Tuple::
          TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
          ::
          ApplyAfter<bool_(__cdecl*const_&)(float,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText),float>
                    ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
                      *)&this->_padding_,&this->StaticFuncPtr,local_res10);
  return bVar1;
}

// ExecuteIfSafe @ 142808420

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
                *this,TAttribute<FText> *param_1,TSharedPtr<SWidget,1> *param_2,
               TSharedPtr<FUICommandInfo_const_,1> *param_3,bool param_4)

{
  TSharedRef<SToolTip,1> local_18;
  
  (*this->StaticFuncPtr)(&local_18,param_1,param_2,param_3,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142808450

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>
              *this,TSharedPtr<SWidget,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<SWidget,1> *p_Var1;
  TSharedPtr<SWidget,1> local_28;
  FString local_18;
  
  local_28.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (SWidget *)0x0;
  (*p_Var1)(&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 1428084b0

bool __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
                *this)

{
  _func___cdecl_FText_TAttribute<FText>_TSharedPtr<FUICommandInfo_const_,1> *p_Var1;
  undefined1 local_res8 [8];
  TSharedPtr<FUICommandInfo_const_,1> local_58;
  FText local_48;
  TAttribute<FText> local_38;
  
  local_58.Object = (FUICommandInfo *)this->_padding_;
  p_Var1 = this->StaticFuncPtr;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_
  ;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Value.TextData.Reference = (ITextData *)this->_padding_;
  if (local_38.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.Value.TextData.Reference + 8))
              (local_38.Value.TextData.Reference,local_res8);
  }
  local_38.Value.Flags = (uint)this->_padding_;
  local_38.bIsSet = SUB81(this->_padding_,0);
  local_38.Getter._0_8_ = 0;
  local_38.Getter._8_8_ = 0;
  local_38.Getter._16_4_ = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_38.Getter,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
  (*p_Var1)(&local_48,&local_38,&local_58);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 142808560

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
::ExecuteIfSafe(TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
                *this,float param_1)

{
  float local_res10 [6];
  
  local_res10[0] = param_1;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
  ::
  ApplyAfter<bool_(__cdecl*const_&)(float,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText),float>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
              *)&this->_padding_,&this->StaticFuncPtr,local_res10);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14280dfe0

ulong64 __thiscall
TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14280dff0

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14280e000

ulong64 __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14280e010

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 142813390

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1428133a0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1428133b0

void * __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1428133c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 142816430

UObject * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142816440

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::
GetUObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142816450

UObject * __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
::GetUObject(TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142816460

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
::GetUObject(TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14281a230

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14281a240

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14281a250

bool __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
::HasSameObject(TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14281a260

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
::HasSameObject(TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14281f500

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14281f510

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 14281f520

bool __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14281f530

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
::IsSafeToExecute(TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142838090

FName __thiscall
TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<TSharedRef<SToolTip,1>___cdecl(TAttribute<FText>_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FUICommandInfo_const_,1>_const_&,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1428380a0

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1428380b0

FName __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,TAttribute<FText>,TSharedPtr<FUICommandInfo_const_,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1428380c0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>,FText,FText,FText,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FText>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 142923a70

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142923af0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142923b40

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VFString___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14292dec0

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
Execute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
        *this,FString *__return_storage_ptr__,TSharedPtr<FString,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<FString,1> *p_Var1;
  TSharedPtr<FString,1> local_18;
  
  local_18.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FString *)0x0;
  (*p_Var1)(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 142934420

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
              *this,TSharedPtr<FString,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<FString,1> *p_Var1;
  TSharedPtr<FString,1> local_28;
  FString local_18;
  
  local_28.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FString *)0x0;
  (*p_Var1)(&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14293ce40

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 142946270

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 14294aec0

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
GetUObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142951d80

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142956dc0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1429ad060

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1429e3040

void __thiscall
TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429e30c0

void __thiscall
TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1429e3110

void __thiscall
TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1429e31b0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1429e3230

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1429e3280

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVSWidget___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1429e6400

float __thiscall
TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001429e6400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (*this->StaticFuncPtr)();
  return fVar1;
}

// Execute @ 1429e6410

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
Execute(TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
        *this,SWidget *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001429e6417. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// ExecuteIfSafe @ 1429e7b30

bool __thiscall
TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  (*this->StaticFuncPtr)();
  return true;
}

// ExecuteIfSafe @ 1429e7b50

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
              *this,SWidget *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1429e9120

ulong64 __thiscall
TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 1429e9130

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 1429ecd20

void * __thiscall
TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1429ecd30

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 1429ef9e0

UObject * __thiscall
TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1429ef9f0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
GetUObject(TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1429f3e20

bool __thiscall
TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 1429f3e30

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1429f63a0

bool __thiscall
TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return true;
}

// IsSafeToExecute @ 1429f63b0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142a10e80

FName __thiscall
TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy>::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<float___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142a10e90

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(SWidget_&),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

