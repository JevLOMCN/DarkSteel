// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 132

// CreateCopy @ 142fb4ff0

void __thiscall
TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_V__TTransform2_M____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AU__TOptional_V__TTransform2_M____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fb5070

void __thiscall
TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_V__TTransform2_M____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AU__TOptional_V__TTransform2_M____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142fb50c0

void __thiscall
TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_V__TTransform2_M____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AU__TOptional_V__TTransform2_M____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fb5160

void __thiscall
TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fb51e0

void __thiscall
TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142fb5230

void __thiscall
TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fb52d0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VFTestData___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VFTestData___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fb5350

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VFTestData___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VFTestData___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142fb53a0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VFTestData___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VFTestData___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142fb5440

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_W4Type_ESelectionMode___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_W4Type_ESelectionMode___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142fb54c0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_W4Type_ESelectionMode___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_W4Type_ESelectionMode___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142fb5510

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_W4Type_ESelectionMode___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_W4Type_ESelectionMode___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142fbd240

TOptional<TTransform2<float>_> * __thiscall
TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
          *this,TOptional<TTransform2<float>_> *__return_storage_ptr__)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 142fbd270

TVector2<double> * __thiscall
TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
        *this,TVector2<double> *__return_storage_ptr__)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 142fbd2a0

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
Execute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
        *this,FString *__return_storage_ptr__,TSharedPtr<FTestData,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<FTestData,1> *p_Var1;
  TSharedPtr<FTestData,1> local_18;
  
  local_18.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FTestData *)0x0;
  (*p_Var1)(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 142fbd300

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
::Execute(void *this,FString *__return_storage_ptr__,TSharedPtr<ESelectionMode::Type,1> *param_1)

{
  code *pcVar1;
  Type *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_18 = param_1->Object;
  pcVar1 = *(code **)((longlong)this + 0x18);
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (Type *)0x0;
  (*pcVar1)(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 142fc3820

bool __thiscall
TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  TOptional<TTransform2<float>_> local_28;
  
  (*this->StaticFuncPtr)(&local_28);
  return true;
}

// ExecuteIfSafe @ 142fc3840

bool __thiscall
TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  TVector2<double> local_18;
  
  (*this->StaticFuncPtr)(&local_18);
  return true;
}

// ExecuteIfSafe @ 142fc3860

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
              *this,TSharedPtr<FTestData,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<FTestData,1> *p_Var1;
  TSharedPtr<FTestData,1> local_28;
  FString local_18;
  
  local_28.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FTestData *)0x0;
  (*p_Var1)(&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142fc38c0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,TSharedPtr<ESelectionMode::Type,1> *param_1)

{
  code *pcVar1;
  Type *local_28;
  TReferenceControllerBase<1> *local_20;
  void *local_18 [2];
  
  local_28 = param_1->Object;
  pcVar1 = *(code **)((longlong)this + 0x18);
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (Type *)0x0;
  (*pcVar1)(local_18,&local_28);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 142fd1200

ulong64 __thiscall
TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 142fd1210

ulong64 __thiscall
TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 142fd1220

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 142fd1230

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 142fd7730

void * __thiscall
TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd7740

void * __thiscall
TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd7750

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142fd7760

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 142fdb0d0

UObject * __thiscall
TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fdb0e0

UObject * __thiscall
TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fdb0f0

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
GetUObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142fdb100

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142fe2020

bool __thiscall
TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fe2030

bool __thiscall
TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fe2040

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142fe2050

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142fe5010

bool __thiscall
TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142fe5020

bool __thiscall
TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 142fe5030

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 142fe5040

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1430148c0

FName __thiscall
TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1430148d0

FName __thiscall
TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1430148e0

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1430148f0

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<enum_ESelectionMode::Type,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1430b37f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1430b3870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1430b38c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1430b3960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__VFName____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__VFName____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1430b39f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__VFName____6B_
    ;
    puVar1[1] = this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__VFName____6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1430b3a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
::CreateCopy(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__VFName____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__VFName____6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1430b3af0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFFontFamily_FTextStyles___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFFontFamily_FTextStyles___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1430b3b70

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFFontFamily_FTextStyles___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFFontFamily_FTextStyles___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1430b3bc0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFFontFamily_FTextStyles___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFFontFamily_FTextStyles___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1430b3c60

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedRef_UFDocumentInfo_SDocumentsTest___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedRef_UFDocumentInfo_SDocumentsTest___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1430b3ce0

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedRef_UFDocumentInfo_SDocumentsTest___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedRef_UFDocumentInfo_SDocumentsTest___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1430b3d30

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedRef_UFDocumentInfo_SDocumentsTest___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedRef_UFDocumentInfo_SDocumentsTest___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1430b3dd0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TMap_VFString__V1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFString__V1__0A______ZUFDefaultDelegateUserPolicy__V__TSharedRef_VSWidget___00____6B_
    ;
    puVar2[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TMap_VFString__V1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFString__V1__0A______ZUFDefaultDelegateUserPolicy__V__TSharedRef_VSWidget___00____6B_
    ;
    puVar2[4] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1430b3e70

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TMap_VFString__V1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFString__V1__0A______ZUFDefaultDelegateUserPolicy__V__TSharedRef_VSWidget___00____6B_
    ;
    puVar2[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[3] = this->_padding_;
    *puVar2 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TMap_VFString__V1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFString__V1__0A______ZUFDefaultDelegateUserPolicy__V__TSharedRef_VSWidget___00____6B_
    ;
    puVar2[4] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1430b3ee0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TMap_VFString__V1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFString__V1__0A______ZUFDefaultDelegateUserPolicy__V__TSharedRef_VSWidget___00____6B_
    ;
    puVar4[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar4[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar4[3] = this->_padding_;
    *puVar4 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TMap_VFString__V1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFString__V1__0A______ZUFDefaultDelegateUserPolicy__V__TSharedRef_VSWidget___00____6B_
    ;
    puVar4[4] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1430b3fa0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy> *this,
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1430b4020

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1430b4070

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy> *this,
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1430b4110

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int> *this,
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1430b41a0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1430b41f0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int> *this,
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1430b4290

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int>::CreateCopy
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int> *this,
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy__H__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1430b4320

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int>::CreateCopy
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy__H__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1430b4370

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int>::CreateCopy
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int> *this,
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy__H__6B_;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1430ba050

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 1430ba080

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
::Execute(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
          *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__,param_1,(FName)this->_padding_);
  return __return_storage_ptr__;
}

// Execute @ 1430ba0b0

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
          *this,FString *__return_storage_ptr__,TSharedPtr<FTextStyles::FFontFamily,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<FTextStyles::FFontFamily,1> *p_Var1;
  TSharedPtr<FTextStyles::FFontFamily,1> local_18;
  
  local_18.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FFontFamily *)0x0;
  (*p_Var1)(__return_storage_ptr__,&local_18);
  TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(param_1);
  return __return_storage_ptr__;
}

// Execute @ 1430ba110

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
          *this,FString *__return_storage_ptr__,TSharedRef<SDocumentsTest::FDocumentInfo,1> *param_1
         )

{
  _func___cdecl_FString_TSharedRef<SDocumentsTest::FDocumentInfo,1> *p_Var1;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> local_18;
  
  p_Var1 = this->StaticFuncPtr;
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(__return_storage_ptr__,&local_18);
  TSharedRef<SDocumentsTest::FDocumentInfo,1>::~TSharedRef<SDocumentsTest::FDocumentInfo,1>(param_1)
  ;
  return __return_storage_ptr__;
}

// Execute @ 1430ba170

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
::Execute(TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
          *this,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *param_1)

{
  _func___cdecl_void_TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_ptr_TSharedRef<SWidget,1>
  *p_Var1;
  TSharedRef<SWidget,1> local_18;
  
  local_18.Object = (SWidget *)this->_padding_;
  p_Var1 = this->StaticFuncPtr;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_
  ;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(param_1,&local_18);
  return;
}

// Execute @ 1430ba1b0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy> *this,
          float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001430ba1b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// Execute @ 1430ba1c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001430ba1c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)((int)this->_padding_);
  return;
}

// Execute @ 1430ba1d0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int>::Execute
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001430ba1d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*this->StaticFuncPtr)((int)this->_padding_);
  return bVar1;
}

// ExecuteIfSafe @ 1430bf080

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                *this,FSpawnTabArgs *param_1)

{
  TSharedRef<SDockTab,1> local_18;
  
  (*this->StaticFuncPtr)(&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 1430bf0b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
::ExecuteIfSafe(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
                *this,FSpawnTabArgs *param_1)

{
  TSharedRef<SDockTab,1> local_18;
  
  (*this->StaticFuncPtr)(&local_18,param_1,(FName)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 1430bf0e0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<FTextStyles::FFontFamily,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<FTextStyles::FFontFamily,1> *p_Var1;
  TSharedPtr<FTextStyles::FFontFamily,1> local_28;
  FString local_18;
  
  local_28.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FFontFamily *)0x0;
  (*p_Var1)(&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(param_1);
  return true;
}

// ExecuteIfSafe @ 1430bf140

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
                *this,TSharedRef<SDocumentsTest::FDocumentInfo,1> *param_1)

{
  _func___cdecl_FString_TSharedRef<SDocumentsTest::FDocumentInfo,1> *p_Var1;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> local_28;
  FString local_18;
  
  local_28.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  TSharedRef<SDocumentsTest::FDocumentInfo,1>::~TSharedRef<SDocumentsTest::FDocumentInfo,1>(param_1)
  ;
  return true;
}

// ExecuteIfSafe @ 1430bf1a0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
                *this,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *param_1)

{
  _func___cdecl_void_TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_ptr_TSharedRef<SWidget,1>
  *p_Var1;
  TSharedRef<SWidget,1> local_18;
  
  local_18.Object = (SWidget *)this->_padding_;
  p_Var1 = this->StaticFuncPtr;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_
  ;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*p_Var1)(param_1,&local_18);
  return true;
}

// ExecuteIfSafe @ 1430bf1e0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy> *this,
          float param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// ExecuteIfSafe @ 1430bf200

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  (*this->StaticFuncPtr)((int)this->_padding_);
  return true;
}

// ExecuteIfSafe @ 1430bf220

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  (*this->StaticFuncPtr)((int)this->_padding_);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1430c8490

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 1430c84a0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 1430c84b0

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 1430c84c0

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 1430c84d0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 1430c84e0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 1430c84f0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 1430c8500

ulong64 __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 1430cc360

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1430cc370

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1430cc380

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1430cc390

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1430cc3a0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1430cc3b0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1430cc3c0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1430cc3d0

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  return (void *)0x0;
}

// GetUObject @ 1430ce730

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1430ce740

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
::GetUObject(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1430ce750

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1430ce760

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1430ce770

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1430ce780

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1430ce790

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1430ce7a0

UObject * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int>::GetUObject
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1430d2a90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1430d2aa0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
::HasSameObject(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1430d2ab0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1430d2ac0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1430d2ad0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1430d2ae0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 1430d2af0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int>::HasSameObject
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 1430d2b00

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int>::HasSameObject
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int> *this,
          void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1430d4f80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1430d4f90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
::IsSafeToExecute(TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1430d4fa0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1430d4fb0

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1430d4fc0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1430d4fd0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy> *this)

{
  return true;
}

// IsSafeToExecute @ 1430d4fe0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int>::IsSafeToExecute
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  return true;
}

// IsSafeToExecute @ 1430d4ff0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int>::IsSafeToExecute
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1431064a0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1431064b0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1431064c0

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1431064d0

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1431064e0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1431064f0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy>::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143106500

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 143106510

FName __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

