// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 55

// CreateCopy @ 146b12880

void __thiscall
TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this,
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146b12900

void __thiscall
TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146b12950

void __thiscall
TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this,
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146b129f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy> *this,
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146b12a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146b12ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy> *this,
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146b12b60

void __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy> *this,
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146b12be0

void __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146b12c30

void __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy> *this,
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146b12cd0

void __thiscall
TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146b12d50

void __thiscall
TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146b12da0

void __thiscall
TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146b12e40

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBVFString__AEBVFText__AEAV2__ZUFDefaultDelegateUserPolicy__V1___6B_
    ;
    ::FString::FString((FString *)(puVar1 + 1),(FString *)&this->_padding_);
    puVar1[3] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBVFString__AEBVFText__AEAV2__ZUFDefaultDelegateUserPolicy__V1___6B_
    ;
    puVar1[4] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146b12ed0

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBVFString__AEBVFText__AEAV2__ZUFDefaultDelegateUserPolicy__V1___6B_
    ;
    ::FString::FString((FString *)(puVar1 + 1),(FString *)&this->_padding_);
    puVar1[3] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBVFString__AEBVFText__AEAV2__ZUFDefaultDelegateUserPolicy__V1___6B_
    ;
    puVar1[4] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146b12f40

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
::CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBVFString__AEBVFText__AEAV2__ZUFDefaultDelegateUserPolicy__V1___6B_
    ;
    ::FString::FString((FString *)(puVar3 + 1),(FString *)&this->_padding_);
    puVar3[3] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBVFString__AEBVFText__AEAV2__ZUFDefaultDelegateUserPolicy__V1___6B_
    ;
    puVar3[4] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146b145f0

EVisibility __thiscall
TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  TEnumAsByte<EVisibility::Private> in_DL;
  
  (*this->StaticFuncPtr)();
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)in_DL.Value;
}

// Execute @ 146b14620

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy> *this,
          FReply *__return_storage_ptr__)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 146b14650

FText * __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy> *this,
          FText *__return_storage_ptr__)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 146b14680

FSlateBrush * __thiscall
TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FSlateBrush *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146b14680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (*this->StaticFuncPtr)();
  return pFVar1;
}

// Execute @ 146b14690

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
::Execute(TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
          *this,FString *param_1,FText *param_2,FText *param_3)

{
  _func___cdecl_bool_FString_ptr_FText_ptr_FText_ptr_FString *p_Var1;
  bool bVar2;
  FString *pFVar3;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  pFVar3 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  bVar2 = (*p_Var1)(param_1,param_2,param_3,pFVar3);
  return bVar2;
}

// ExecuteIfSafe @ 146b15560

bool __thiscall
TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  undefined1 local_res8 [32];
  
  (*this->StaticFuncPtr)(local_res8);
  return true;
}

// ExecuteIfSafe @ 146b15580

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  FReply local_c8;
  
  (*this->StaticFuncPtr)(&local_c8);
  FReply::~FReply(&local_c8);
  return true;
}

// ExecuteIfSafe @ 146b155b0

bool __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  FText local_18;
  
  (*this->StaticFuncPtr)(&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 146b155e0

bool __thiscall
TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  (*this->StaticFuncPtr)();
  return true;
}

// ExecuteIfSafe @ 146b15600

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
::ExecuteIfSafe(TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
                *this,FString *param_1,FText *param_2,FText *param_3)

{
  _func___cdecl_bool_FString_ptr_FText_ptr_FText_ptr_FString *p_Var1;
  FString *pFVar2;
  FString local_18;
  
  p_Var1 = this->StaticFuncPtr;
  pFVar2 = ::FString::FString(&local_18,(FString *)&this->_padding_);
  (*p_Var1)(param_1,param_2,param_3,pFVar2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146b16dd0

ulong64 __thiscall
TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146b16de0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146b16df0

ulong64 __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146b16e00

ulong64 __thiscall
TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146b16e10

ulong64 __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 146b19250

void * __thiscall
TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146b19260

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146b19270

void * __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146b19280

void * __thiscall
TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146b19290

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 146b1af50

UObject * __thiscall
TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1af60

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1af70

UObject * __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1af80

UObject * __thiscall
TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1af90

UObject * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
::GetUObject(TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146b1b690

bool __thiscall
TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 146b1b6a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 146b1b6b0

bool __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 146b1b6c0

bool __thiscall
TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146b1b6d0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
::HasSameObject(TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146b1c160

bool __thiscall
TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return true;
}

// IsSafeToExecute @ 146b1c170

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return true;
}

// IsSafeToExecute @ 146b1c180

bool __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  return true;
}

// IsSafeToExecute @ 146b1c190

bool __thiscall
TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 146b1c1a0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
::IsSafeToExecute(TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146b296d0

FName __thiscall
TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b296e0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b296f0

FName __thiscall
TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy>::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b29700

FName __thiscall
TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b29710

FName __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<bool___cdecl(FString_const_&,FText_const_&,FText_&),FDefaultDelegateUserPolicy,FString>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

