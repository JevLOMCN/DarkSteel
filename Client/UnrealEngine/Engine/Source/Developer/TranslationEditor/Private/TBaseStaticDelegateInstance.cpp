// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 22

// CreateCopy @ 146ba84e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFTranslationPickerTextItem___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFTranslationPickerTextItem___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146ba8560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFTranslationPickerTextItem___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFTranslationPickerTextItem___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 146ba85b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFTranslationPickerTextItem___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFTranslationPickerTextItem___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146ba8650

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,enum_ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VILocalizationServiceOperation___00__W4Type_ELocalizationServiceOperationCommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TSharedRef_VILocalizationServiceOperation___00__W4Type_ELocalizationServiceOperationCommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146ba86d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,enum_ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VILocalizationServiceOperation___00__W4Type_ELocalizationServiceOperationCommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TSharedRef_VILocalizationServiceOperation___00__W4Type_ELocalizationServiceOperationCommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 146ba8720

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,enum_ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VILocalizationServiceOperation___00__W4Type_ELocalizationServiceOperationCommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TSharedRef_VILocalizationServiceOperation___00__W4Type_ELocalizationServiceOperationCommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146ba9e80

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
          *this,FString *__return_storage_ptr__,TSharedPtr<FTranslationPickerTextItem,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<FTranslationPickerTextItem,1> *p_Var1;
  TSharedPtr<FTranslationPickerTextItem,1> local_18;
  
  local_18.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FTranslationPickerTextItem *)0x0;
  (*p_Var1)(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 146ba9ee0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,enum_ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,TSharedRef<ILocalizationServiceOperation,1> *param_1,Type param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146ba9eed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this + 0x18))(param_1,param_2);
  return;
}

// ExecuteIfSafe @ 146baaa00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<FTranslationPickerTextItem,1> *param_1)

{
  _func___cdecl_FString_TSharedPtr<FTranslationPickerTextItem,1> *p_Var1;
  TSharedPtr<FTranslationPickerTextItem,1> local_28;
  FString local_18;
  
  local_28.Object = param_1->Object;
  p_Var1 = this->StaticFuncPtr;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FTranslationPickerTextItem *)0x0;
  (*p_Var1)(&local_18,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 146baaa60

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,enum_ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,TSharedRef<ILocalizationServiceOperation,1> *param_1,Type param_2)

{
  (**(code **)((longlong)this + 0x18))(param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146bac3b0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146bac3c0

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,enum_ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 146baf2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146baf300

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,enum_ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 146bb0590

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146bb05a0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,enum_ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146bb1100

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146bb1110

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,enum_ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146bb2f80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146bb2f90

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,enum_ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146bc22d0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146bc22e0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TSharedRef<ILocalizationServiceOperation,1>_const_&,enum_ELocalizationServiceOperationCommandResult::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

