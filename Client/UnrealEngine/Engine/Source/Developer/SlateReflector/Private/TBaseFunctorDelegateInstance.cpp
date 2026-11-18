// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 264

// TryGetBoundFunctionName @ 142ddf1c0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 142ddf1d0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 142ddf1e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 142ddf1f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
           *this)

{
  return 0;
}

// HasSameObject @ 142ddf200

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142ddf210

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
                  *this)

{
  return true;
}

// CreateCopy @ 142ddf220

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142ddf2c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142ddf340

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld__AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 142ddf380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
         FOutputDevice *param_3)

{
  SlateNavigationSimulationInternal::<lambda_5>::operator()(&this->Functor,param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 142ddf390

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
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,SlateNavigationSimulationInternal::<lambda_5>_>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
               FOutputDevice *param_3)

{
  SlateNavigationSimulationInternal::<lambda_5>::operator()(&this->Functor,param_1,param_2,param_3);
  return true;
}

// CreateCopy @ 142e57f30

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedPtr_UFNavigationSimulationWidgetNode___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e57fb0

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedPtr_UFNavigationSimulationWidgetNode___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142e58000

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedPtr_UFNavigationSimulationWidgetNode___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e580a0

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>::GenerateColumns'::__l27::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedPtr_UFWidgetListEntry___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e58120

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedPtr_UFWidgetListEntry___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142e58170

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>::GenerateColumns'::__l27::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedPtr_UFWidgetListEntry___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e58210

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedRef_UFIntermediateResultNode_WidgetHittestGridInternal___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e58290

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedRef_UFIntermediateResultNode_WidgetHittestGridInternal___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142e582e0

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedRef_UFIntermediateResultNode_WidgetHittestGridInternal___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e58380

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::GenerateColumns'::__l27::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedRef_VFWidgetReflectorNodeBase___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e58400

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedRef_VFWidgetReflectorNodeBase___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142e58450

void __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::GenerateColumns'::__l27::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedRef_VFWidgetReflectorNodeBase___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e584f0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,``WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,``WidgetReflectorImpl::SWidgetReflector::Construct'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 4),
               (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x20));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e58580

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,``WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,``WidgetReflectorImpl::SWidgetReflector::Construct'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 4),
               (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x20));
    return;
  }
  return;
}

// CreateCopy @ 142e585e0

void __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,``WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,``WidgetReflectorImpl::SWidgetReflector::Construct'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                *)(puVar3 + 4),
               (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x20));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e58690

void __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddMenuEntry'::`5'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e58710

void __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddMenuEntry'::`5'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142e58760

void __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddMenuEntry'::`5'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e58800

void __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddSubMenuEntry'::`5'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e58880

void __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddSubMenuEntry'::`5'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142e588d0

void __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddSubMenuEntry'::`5'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e58970

void __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ECheckBoxState___cdecl(void)>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AW4ECheckBoxState__XZ____V__6B_
    ;
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)((longlong)this + 0x48);
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e58a20

void __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ECheckBoxState___cdecl(void)>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AW4ECheckBoxState__XZ____V__6B_
    ;
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)((longlong)this + 0x48);
      }
                    /* WARNING: Could not recover jumptable at 0x000142e58a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)();
      return;
    }
  }
  return;
}

// CreateCopy @ 142e58aa0

void __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ECheckBoxState___cdecl(void)>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AW4ECheckBoxState__XZ____V__6B_
    ;
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)((longlong)this + 0x48);
      }
      (**(code **)*puVar4)();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e58b60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_V__TSharedRef_VFWidgetReflectorNodeBase___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e58c00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_V__TSharedRef_VFWidgetReflectorNodeBase___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  return;
}

// CreateCopy @ 142e58c60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_V__TSharedRef_VFWidgetReflectorNodeBase___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e58d10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e58d90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142e58de0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e58e80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedRef_VSDockTab___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e58f20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedRef_VSDockTab___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  return;
}

// CreateCopy @ 142e58f80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedRef_VSDockTab___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e59030

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e590b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142e59100

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::`2'::<lambda_4>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e591a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddMenuEntry'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e59220

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddMenuEntry'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142e59270

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddMenuEntry'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e59310

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddSubMenuEntry'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e59390

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddSubMenuEntry'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142e593e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddSubMenuEntry'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e59480

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::`52'::<lambda_2>_>
               ::_vftable_;
    ::FString::FString((FString *)(puVar1 + 3),(FString *)((longlong)this + 0x18));
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e59510

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::`52'::<lambda_2>_>
               ::_vftable_;
    ::FString::FString((FString *)(puVar1 + 3),(FString *)((longlong)this + 0x18));
    return;
  }
  return;
}

// CreateCopy @ 142e59570

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::`52'::<lambda_2>_>
               ::_vftable_;
    ::FString::FString((FString *)(puVar3 + 3),(FString *)((longlong)this + 0x18));
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e59610

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_SReflectorTreeWidgetItem::GenerateWidgetForColumn_::__l52::<lambda_3>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e59680

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_SReflectorTreeWidgetItem::GenerateWidgetForColumn_::__l52::<lambda_3>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 142e596c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_SReflectorTreeWidgetItem::GenerateWidgetForColumn_::__l52::<lambda_3>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e59750

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e597f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AX_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  return;
}

// CreateCopy @ 142e59850

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AX_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e59900

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e59980

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142e599d0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e59a70

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenu'::__l2::<lambda_1>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenu'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e59af0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenu'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenu'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142e59b40

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenu'::__l2::<lambda_1>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenu'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e59be0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_2>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::`2'::<lambda_2>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e59c60

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::`2'::<lambda_2>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142e59cb0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_2>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::`2'::<lambda_2>_>
               ::_vftable_;
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e59d50

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_2>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddMenuEntry'::`5'::<lambda_2>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e59dd0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddMenuEntry'::`5'::<lambda_2>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142e59e20

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_2>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddMenuEntry'::`5'::<lambda_2>_>
               ::_vftable_;
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e59ec0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_2>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddSubMenuEntry'::`5'::<lambda_2>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e59f40

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddSubMenuEntry'::`5'::<lambda_2>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142e59f90

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_2>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddSubMenuEntry'::`5'::<lambda_2>_>
               ::_vftable_;
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142e5a030

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_3>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::`2'::<lambda_3>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142e5a0b0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::`2'::<lambda_3>_>
               ::_vftable_;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 142e5a100

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_3>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::`2'::<lambda_3>_>
               ::_vftable_;
    *(undefined1 *)(puVar3 + 3) = *(undefined1 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142e741c0

FOptionalSize __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::Execute(void *this)

{
  float *pfVar1;
  float *in_RDX;
  
  pfVar1 = TAttribute<float>::Get
                     ((TAttribute<float> *)(*(longlong *)((longlong)this + 0x18) + 0x98));
  *in_RDX = *pfVar1;
  return (FOptionalSize)SUB84(in_RDX,0);
}

// Execute @ 142e741f0

FOptionalSize __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::Execute(void *this)

{
  float *pfVar1;
  float *in_RDX;
  
  pfVar1 = TAttribute<float>::Get
                     ((TAttribute<float> *)(*(longlong *)((longlong)this + 0x18) + 0x98));
  *in_RDX = *pfVar1;
  return (FOptionalSize)SUB84(in_RDX,0);
}

// Execute @ 142e74220

FOptionalSize __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::Execute(void *this)

{
  float *pfVar1;
  float *in_RDX;
  
  pfVar1 = TAttribute<float>::Get
                     ((TAttribute<float> *)(*(longlong *)((longlong)this + 0x18) + 0x98));
  *in_RDX = *pfVar1;
  return (FOptionalSize)SUB84(in_RDX,0);
}

// Execute @ 142e74250

FOptionalSize __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::Execute(void *this)

{
  float *pfVar1;
  float *in_RDX;
  
  pfVar1 = TAttribute<float>::Get
                     ((TAttribute<float> *)(*(longlong *)((longlong)this + 0x18) + 0x98));
  *in_RDX = *pfVar1;
  return (FOptionalSize)SUB84(in_RDX,0);
}

// Execute @ 142e74280

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,``WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::Execute(void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  ``WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()'::__l2::
  <lambda_1>::operator()((void *)((longlong)this + 0x18),__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Execute @ 142e742b0

ECheckBoxState __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_3>_>
::Execute(void *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 0xc0))();
  return cVar1 != '\0';
}

// Execute @ 142e742e0

ECheckBoxState __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_3>_>
::Execute(void *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 0xc0))();
  return cVar1 != '\0';
}

// Execute @ 142e74310

ECheckBoxState __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ECheckBoxState___cdecl(void)>_>
::Execute(void *this)

{
  code *UNRECOVERED_JUMPTABLE;
  ECheckBoxState EVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)this + 0x20);
  plVar3 = (longlong *)((longlong)this + 0x30);
  if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x48);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000142e7434f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2);
  return EVar1;
}

// Execute @ 142e74360

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_2>_>
::Execute(void *this,
         TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  `WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 142e74370

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_2>_>
::Execute(void *this,float param_1,Type param_2)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  *(float *)(*(longlong *)((longlong)this + 0x18) + 0x4e8) = param_1;
  return;
}

// Execute @ 142e74390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_1>_>
::Execute(void *this,TSharedRef<SDockTab,1> *param_1)

{
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker_::__l2::<lambda_1>_&,TSharedRef<SDockTab,1>_>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_1> *)((longlong)this + 0x18),param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 142e743c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_4>_>
::Execute(void *this,ECheckBoxState param_1)

{
  *(bool *)(*(longlong *)((longlong)this + 0x18) + 0x4ed) = param_1 == Checked;
  return;
}

// Execute @ 142e743e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_1>_>
::Execute(void *this)

{
  ``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 142e743f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_1>_>
::Execute(void *this)

{
  ``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 142e74400

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>_>
::Execute(void *this)

{
  `SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 142e74410

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>_>
::Execute(void *this)

{
  `SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 142e74420

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_3>_>
::Execute(void *this,ulong64 param_1)

{
  `WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 142e74430

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_1>_>
::Execute(void *this)

{
  return *(char *)((longlong)this + 0x18) == '\0';
}

// Execute @ 142e74440

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenu'::__l2::<lambda_1>_>
::Execute(void *this)

{
  return (bool)*(undefined1 *)((longlong)this + 0x18);
}

// Execute @ 142e74450

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_2>_>
::Execute(void *this)

{
  return *(char *)((longlong)this + 0x18) == '\0';
}

// Execute @ 142e74460

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_2>_>
::Execute(void *this)

{
  return (bool)*(undefined1 *)((longlong)this + 0x18);
}

// Execute @ 142e74470

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_2>_>
::Execute(void *this)

{
  return (bool)*(undefined1 *)((longlong)this + 0x18);
}

// Execute @ 142e74480

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_3>_>
::Execute(void *this)

{
  return *(char *)((longlong)this + 0x18) == '\0';
}

// ExecuteIfSafe @ 142e7abb0

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  TAttribute<float>::Get((TAttribute<float> *)(*(longlong *)((longlong)this + 0x18) + 0x98));
  return true;
}

// ExecuteIfSafe @ 142e7abe0

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  TAttribute<float>::Get((TAttribute<float> *)(*(longlong *)((longlong)this + 0x18) + 0x98));
  return true;
}

// ExecuteIfSafe @ 142e7ac10

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  TAttribute<float>::Get((TAttribute<float> *)(*(longlong *)((longlong)this + 0x18) + 0x98));
  return true;
}

// ExecuteIfSafe @ 142e7ac40

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  TAttribute<float>::Get((TAttribute<float> *)(*(longlong *)((longlong)this + 0x18) + 0x98));
  return true;
}

// ExecuteIfSafe @ 142e7ac70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,``WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FSpawnTabArgs *param_1)

{
  TSharedRef<SDockTab,1> local_18;
  
  ``WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()'::__l2::
  <lambda_1>::operator()((void *)((longlong)this + 0x18),&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142e7aca0

bool __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  (**(code **)(**(longlong **)((longlong)this + 0x18) + 0xc0))();
  return true;
}

// ExecuteIfSafe @ 142e7acc0

bool __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  (**(code **)(**(longlong **)((longlong)this + 0x18) + 0xc0))();
  return true;
}

// ExecuteIfSafe @ 142e7ace0

bool __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ECheckBoxState___cdecl(void)>_>
::ExecuteIfSafe(void *this)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x20));
  pcVar1 = *(code **)((longlong)this + 0x20);
  plVar3 = (longlong *)((longlong)this + 0x30);
  if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x48);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  return true;
}

// ExecuteIfSafe @ 142e7ad30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,
               TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  `WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 142e7ad50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,float param_1,Type param_2)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  *(float *)(*(longlong *)((longlong)this + 0x18) + 0x4e8) = param_1;
  return true;
}

// ExecuteIfSafe @ 142e7ad70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,TSharedRef<SDockTab,1> *param_1)

{
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker_::__l2::<lambda_1>_&,TSharedRef<SDockTab,1>_>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_1> *)((longlong)this + 0x18),param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteIfSafe @ 142e7ada0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_4>_>
::ExecuteIfSafe(void *this,ECheckBoxState param_1)

{
  *(bool *)(*(longlong *)((longlong)this + 0x18) + 0x4ed) = param_1 == Checked;
  return true;
}

// ExecuteIfSafe @ 142e7adc0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  ``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 142e7ade0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  ``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 142e7ae00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  `SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 142e7ae20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  `SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 142e7ae40

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,ulong64 param_1)

{
  `WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 142e7ae60

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 142e7ae70

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenu'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 142e7ae80

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 142e7ae90

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 142e7aea0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_2>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// ExecuteIfSafe @ 142e7aeb0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  return true;
}

// GetBoundProgramCounterForTimerManager @ 142e99730

ulong64 __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e99740

ulong64 __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e99750

ulong64 __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e99760

ulong64 __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e99770

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,``WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e99780

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e99790

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e997a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ECheckBoxState___cdecl(void)>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e997b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e997c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e997d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e997e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e997f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e99800

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e99810

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e99820

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e99830

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e99840

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e99850

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenu'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e99860

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e99870

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e99880

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 142e99890

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 142ea09f0

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0a00

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0a10

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0a20

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0a30

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,``WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0a40

void * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0a50

void * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0a60

void * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ECheckBoxState___cdecl(void)>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0a70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0a80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0a90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0aa0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0ab0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0ac0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0ad0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0ae0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0af0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0b00

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0b10

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenu'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0b20

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0b30

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0b40

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142ea0b50

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 142ea89c0

UObject * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea89d0

UObject * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea89e0

UObject * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea89f0

UObject * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8a00

UObject * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,``WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8a10

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8a20

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8a30

UObject * __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ECheckBoxState___cdecl(void)>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8a40

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8a50

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8a60

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8a70

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8a80

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8a90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8aa0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8ab0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8ac0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8ad0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8ae0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenu'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8af0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8b00

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8b10

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142ea8b20

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142eb7390

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb73a0

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb73b0

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb73c0

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb73d0

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,``WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb73e0

bool __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb73f0

bool __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb7400

bool __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ECheckBoxState___cdecl(void)>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb7410

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb7420

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb7430

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb7440

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb7450

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb7460

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb7470

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb7480

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb7490

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb74a0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb74b0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenu'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb74c0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb74d0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb74e0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142eb74f0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142ebd5e0

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd5f0

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd600

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd610

bool __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd620

bool __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,``WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd630

bool __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd640

bool __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd650

bool __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ECheckBoxState___cdecl(void)>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd660

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd670

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd680

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd690

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd6a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd6b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd6c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd6d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd6e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd6f0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd700

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenu'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd710

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd720

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd730

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 142ebd740

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142f10a60

FName __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10a70

FName __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10a80

FName __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10a90

FName __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10aa0

FName __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,``WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10ab0

FName __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10ac0

FName __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10ad0

FName __thiscall
TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,TFunction<enum_ECheckBoxState___cdecl(void)>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10ae0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10af0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10b00

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10b10

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10b20

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10b30

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10b40

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10b50

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SReflectorTreeWidgetItem::GenerateWidgetForColumn'::__l52::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10b60

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10b70

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10b80

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenu'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10b90

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10ba0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10bb0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142f10bc0

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

