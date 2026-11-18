// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 275

// TryGetBoundFunctionName @ 146d60ce0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 146d60cf0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 146d60d00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146d60d10

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
           *this)

{
  return 0;
}

// HasSameObject @ 146d60d20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146d60d30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
                  *this)

{
  return true;
}

// CreateCopy @ 146d60d40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
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

// CreateCopy @ 146d60de0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
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

// CreateCopy @ 146d60e60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
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

// Execute @ 146d60ea0

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
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
         FOutputDevice *param_3)

{
  UE::Navigation::Private::<lambda_25>::operator()(&this->Functor,param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 146d60eb0

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
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_25>_>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
               FOutputDevice *param_3)

{
  UE::Navigation::Private::<lambda_25>::operator()(&this->Functor,param_1,param_2,param_3);
  return true;
}

// TryGetBoundFunctionName @ 146d618a0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 146d618b0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 146d618c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146d618d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
           *this)

{
  return 0;
}

// HasSameObject @ 146d618e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146d618f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
                  *this)

{
  return true;
}

// CreateCopy @ 146d61900

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
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

// CreateCopy @ 146d619a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
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

// CreateCopy @ 146d61a20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
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

// Execute @ 146d61a60

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
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
         FOutputDevice *param_3)

{
  UE::Navigation::Private::<lambda_26>::operator()(&this->Functor,param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 146d61a70

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
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_26>_>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
               FOutputDevice *param_3)

{
  UE::Navigation::Private::<lambda_26>::operator()(&this->Functor,param_1,param_2,param_3);
  return true;
}

// TryGetBoundFunctionName @ 146d61ac0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 146d61ad0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 146d61ae0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146d61af0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
           *this)

{
  return 0;
}

// HasSameObject @ 146d61b00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146d61b10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
                  *this)

{
  return true;
}

// CreateCopy @ 146d61b20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
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

// CreateCopy @ 146d61bc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
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

// CreateCopy @ 146d61c40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
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

// Execute @ 146d61c80

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
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
         FOutputDevice *param_3)

{
  UE::Navigation::Private::<lambda_27>::operator()(&this->Functor,param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 146d61c90

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
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_27>_>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
               FOutputDevice *param_3)

{
  UE::Navigation::Private::<lambda_27>::operator()(&this->Functor,param_1,param_2,param_3);
  return true;
}

// TryGetBoundFunctionName @ 146d61ce0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 146d61cf0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 146d61d00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146d61d10

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
           *this)

{
  return 0;
}

// HasSameObject @ 146d61d20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146d61d30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
                  *this)

{
  return true;
}

// CreateCopy @ 146d61d40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
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

// CreateCopy @ 146d61de0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
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

// CreateCopy @ 146d61e60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
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

// Execute @ 146d61ea0

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
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
         FOutputDevice *param_3)

{
  bool bVar1;
  UNavigationSystemV1 *this_00;
  
  if (param_2 != (UWorld *)0x0) {
    this_00 = (UNavigationSystemV1 *)(param_2->NavigationSystem).field0_0x0.DebugPtr;
    if ((this_00 == (UNavigationSystemV1 *)0x0) ||
       (bVar1 = UObjectBaseUtility::IsA<UNavigationSystemV1>((UObjectBaseUtility *)this_00), !bVar1)
       ) {
      this_00 = (UNavigationSystemV1 *)0x0;
    }
    if (this_00 != (UNavigationSystemV1 *)0x0) {
      UNavigationSystemV1::DebugLogInvokers(this_00,param_3);
    }
  }
  return;
}

// ExecuteIfSafe @ 146d61ef0

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
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy,UE::Navigation::Private::<lambda_28>_>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
               FOutputDevice *param_3)

{
  bool bVar1;
  UNavigationSystemV1 *this_00;
  
  if (param_2 == (UWorld *)0x0) {
    return true;
  }
  this_00 = (UNavigationSystemV1 *)(param_2->NavigationSystem).field0_0x0.DebugPtr;
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    bVar1 = UObjectBaseUtility::IsA<UNavigationSystemV1>((UObjectBaseUtility *)this_00);
    if (bVar1) goto LAB_146d61f1d;
  }
  this_00 = (UNavigationSystemV1 *)0x0;
LAB_146d61f1d:
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    UNavigationSystemV1::DebugLogInvokers(this_00,param_3);
  }
  return true;
}

// CreateCopy @ 146d892c0

void __thiscall
TBaseFunctorDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_18>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSubclassOf_VAActor____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_18>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d89340

void __thiscall
TBaseFunctorDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_18>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSubclassOf_VAActor____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_18>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d89380

void __thiscall
TBaseFunctorDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_18>_>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSubclassOf_VAActor____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_18>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d89420

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_10>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_10>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d894a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_10>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_10>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d894e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_10>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_10>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d89580

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_15>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_15>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d89600

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_15>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_15>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d89640

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_15>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_15>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d896e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_6>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_6>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d89760

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_6>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d897a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_6>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_6>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d89840

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_7>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_7>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d898c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_7>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_7>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d89900

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_7>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_7>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d899a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_9>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_9>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d89a20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_9>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_9>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d89a60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_9>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_9>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d89b00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_11>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_11>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d89b80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_11>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_11>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d89bc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_11>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_11>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d89c60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_12>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_12>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d89ce0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_12>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_12>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d89d20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_12>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_12>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d89dc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_13>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_13>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d89e40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_13>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_13>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d89e80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_13>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_13>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d89f20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_14>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_14>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d89fa0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_14>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_14>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d89fe0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_14>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_14>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8a080

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_17>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent__AEBU__TBox_N_Math_UE__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_17>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8a100

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_17>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent__AEBU__TBox_N_Math_UE__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_17>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d8a140

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_17>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent__AEBU__TBox_N_Math_UE__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_17>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8a1e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8a260

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d8a2a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8a340

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8a3c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d8a400

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8a4a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject__AEBU__TBox_N_Math_UE__V__TArrayView___CBU__TBox_N_Math_UE__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_4>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8a520

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_4>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject__AEBU__TBox_N_Math_UE__V__TArrayView___CBU__TBox_N_Math_UE__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_4>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d8a560

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_4>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject__AEBU__TBox_N_Math_UE__V__TArrayView___CBU__TBox_N_Math_UE__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_4>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8a600

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUSceneComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_5>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8a680

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_5>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUSceneComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_5>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d8a6c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_5>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUSceneComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_5>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8a760

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_8>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUSceneComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_8>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8a7e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_8>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUSceneComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_8>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d8a820

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_8>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUSceneComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_8>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8a8c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_20>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_20>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8a940

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_20>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_20>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d8a980

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_20>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_20>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8aa20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_19>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUWorld___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_19>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8aaa0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_19>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUWorld___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_19>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d8aae0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_19>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVUWorld___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_19>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8ab80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFNavigationElementHandle__AEBU__TBox_N_Math_UE__V__TArrayView___CBU__TBox_N_Math_UE__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8ac00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFNavigationElementHandle__AEBU__TBox_N_Math_UE__V__TArrayView___CBU__TBox_N_Math_UE__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d8ac40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFNavigationElementHandle__AEBU__TBox_N_Math_UE__V__TArrayView___CBU__TBox_N_Math_UE__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146d8ace0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_16>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_16>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146d8ad60

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_16>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_16>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 146d8ada0

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_16>_>
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
              ___7__TCommonDelegateInstanceState___A6A_NAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_16>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146d92df0

TSubclassOf<AActor> __thiscall
TBaseFunctorDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_18>_>
::Execute(void *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<AActor>)in_RDX.field0_0x0;
}

// Execute @ 146d92e30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_10>_>
::Execute(void *this,AActor *param_1)

{
  if ((!UNavigationSystemV1::bStaticRuntimeNavigation) && (param_1 != (AActor *)0x0)) {
    UNavigationSystemV1::UnregisterNavRelevantObjectStatic((UObject *)param_1);
    return;
  }
  return;
}

// Execute @ 146d92e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_15>_>
::Execute(void *this,AActor *param_1)

{
  UNavigationSystemV1::ClearNavOctreeAll(param_1);
  return;
}

// Execute @ 146d92e60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_6>_>
::Execute(void *this,AActor *param_1)

{
  UNavigationSystemV1::UpdateNavOctreeBounds(param_1);
  return;
}

// Execute @ 146d92e70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_7>_>
::Execute(void *this,AActor *param_1)

{
  ``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::
  __l2::<lambda_7>::operator()((void *)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 146d92e80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_9>_>
::Execute(void *this,AActor *param_1)

{
  UNavigationSystemV1::OnActorRegistered(param_1);
  return;
}

// Execute @ 146d92e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_11>_>
::Execute(void *this,UActorComponent *param_1)

{
  UNavigationSystemV1::RegisterComponentToNavOctree(param_1);
  return;
}

// Execute @ 146d92ea0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_12>_>
::Execute(void *this,UActorComponent *param_1)

{
  if ((param_1 != (UActorComponent *)0x0) &&
     (((!UE::Navigation::Private::bComponentShouldWaitForActorToRegister ||
       (param_1->OwnerPrivate == (AActor *)0x0)) ||
      ((bool)param_1->OwnerPrivate->bHasRegisteredAllComponents)))) {
    UNavigationSystemV1::UnregisterNavRelevantObjectStatic((UObject *)param_1);
    return;
  }
  return;
}

// Execute @ 146d92ed0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_13>_>
::Execute(void *this,UActorComponent *param_1)

{
  UNavigationSystemV1::RegisterComponentToNavOctree(param_1);
  return;
}

// Execute @ 146d92ee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_14>_>
::Execute(void *this,UActorComponent *param_1)

{
  if ((param_1 != (UActorComponent *)0x0) &&
     (((!UE::Navigation::Private::bComponentShouldWaitForActorToRegister ||
       (param_1->OwnerPrivate == (AActor *)0x0)) ||
      ((bool)param_1->OwnerPrivate->bHasRegisteredAllComponents)))) {
    UNavigationSystemV1::UnregisterNavRelevantObjectStatic((UObject *)param_1);
    return;
  }
  return;
}

// Execute @ 146d92f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_17>_>
::Execute(void *this,UActorComponent *param_1,TBox<double> *param_2,TBox<double> *param_3)

{
  ``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::
  __l2::<lambda_17>::operator()((void *)((longlong)this + 0x18),param_1,param_2,param_3);
  return;
}

// Execute @ 146d92f20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_2>_>
::Execute(void *this,UObject *param_1)

{
  UClass *pUVar1;
  INavRelevantInterface *pIVar2;
  
  if ((!UNavigationSystemV1::bStaticRuntimeNavigation) && (param_1 != (UObject *)0x0)) {
    pUVar1 = Z_Construct_UClass_UNavRelevantInterface_NoRegister();
    pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    if (pIVar2 != (INavRelevantInterface *)0x0) {
      UNavigationSystemV1::RegisterNavRelevantObjectStatic(pIVar2,param_1);
      return;
    }
  }
  return;
}

// Execute @ 146d92f70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_3>_>
::Execute(void *this,UObject *param_1)

{
  UNavigationSystemV1::UnregisterNavRelevantObjectStatic(param_1);
  return;
}

// Execute @ 146d92f80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_4>_>
::Execute(void *this,UObject *param_1,TBox<double> *param_2,
         TArrayView<UE::Math::TBox<double>_const_,int> *param_3)

{
  TArrayView<UE::Math::TBox<double>_const_,int> local_18;
  
  local_18.DataPtr = param_3->DataPtr;
  local_18.ArrayNum = param_3->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  ``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::
  __l2::<lambda_4>::operator()((void *)((longlong)this + 0x18),param_1,param_2,&local_18);
  return;
}

// Execute @ 146d92fb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_5>_>
::Execute(void *this,USceneComponent *param_1)

{
  AActor *pAVar1;
  
  pAVar1 = (AActor *)param_1->_padding_;
  if ((pAVar1 != (AActor *)0x0) && ((pAVar1->RootComponent).field0_0x0.DebugPtr == param_1)) {
    UNavigationSystemV1::UpdateActorAndComponentsInNavOctree(pAVar1,true);
    return;
  }
  return;
}

// Execute @ 146d92fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_8>_>
::Execute(void *this,USceneComponent *param_1)

{
  AActor *pAVar1;
  
  if ((((UNavigationSystemV1::bUpdateNavOctreeOnComponentChange) &&
       (!UNavigationSystemV1::bStaticRuntimeNavigation)) &&
      (pAVar1 = (AActor *)param_1->_padding_, pAVar1 != (AActor *)0x0)) &&
     ((pAVar1->RootComponent).field0_0x0.DebugPtr == param_1)) {
    UNavigationSystemV1::UpdateActorAndComponentsInNavOctree(pAVar1,true);
    return;
  }
  return;
}

// Execute @ 146d93020

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
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_20>_>
::Execute(void *this,UWorld *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UNavigationSystemBase *pUVar3;
  
  if (param_1 == (UWorld *)0x0) {
    return;
  }
  pUVar3 = (param_1->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar3 != (UNavigationSystemBase *)0x0) {
    pUVar2 = UNavigationSystemV1::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_146d9305f;
  }
  pUVar3 = (UNavigationSystemBase *)0x0;
LAB_146d9305f:
  if (pUVar3 == (UNavigationSystemBase *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146d93073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar3 + 0x408))(pUVar3);
  return;
}

// Execute @ 146d93090

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
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_19>_>
::Execute(void *this,UWorld *param_1,bool param_2)

{
  ``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::
  __l2::<lambda_19>::operator()((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 146d930a0

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
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_1>_>
::Execute(void *this,UWorld *param_1,FNavigationElementHandle *param_2,TBox<double> *param_3,
         TArrayView<UE::Math::TBox<double>_const_,int> *param_4)

{
  int iVar1;
  UClass *pUVar2;
  UNavigationSystemV1 *this_00;
  TArrayView<UE::Math::TBox<double>_const_,int> local_28;
  FNavigationElementHandle local_18;
  
  if (param_1 == (UWorld *)0x0) {
    return;
  }
  this_00 = (UNavigationSystemV1 *)(param_1->NavigationSystem).field0_0x0.DebugPtr;
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    pUVar2 = UNavigationSystemV1::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_146d930ef;
  }
  this_00 = (UNavigationSystemV1 *)0x0;
LAB_146d930ef:
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    local_18.OwnerUObject.WeakPtr = (param_2->OwnerUObject).WeakPtr;
    local_18.SubElementId = param_2->SubElementId;
    local_28.DataPtr = param_4->DataPtr;
    local_28.ArrayNum = param_4->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_4->field_0xc;
    UNavigationSystemV1::UpdateNavOctreeElementBounds(this_00,&local_18,param_3,&local_28);
  }
  return;
}

// Execute @ 146d93140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_16>_>
::Execute(void *this,UActorComponent *param_1)

{
  bool bVar1;
  
  bVar1 = ``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::
          FDelegatesInitializer'::__l2::<lambda_16>::operator()
                    ((void *)((longlong)this + 0x18),param_1);
  return bVar1;
}

// ExecuteIfSafe @ 146d93870

bool __thiscall
TBaseFunctorDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_18>_>
::ExecuteIfSafe(void *this)

{
  Z_Construct_UClass_ARecastNavMesh_NoRegister();
  return true;
}

// ExecuteIfSafe @ 146d93890

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_10>_>
::ExecuteIfSafe(void *this,AActor *param_1)

{
  if ((!UNavigationSystemV1::bStaticRuntimeNavigation) && (param_1 != (AActor *)0x0)) {
    UNavigationSystemV1::UnregisterNavRelevantObjectStatic((UObject *)param_1);
  }
  return true;
}

// ExecuteIfSafe @ 146d938c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_15>_>
::ExecuteIfSafe(void *this,AActor *param_1)

{
  UNavigationSystemV1::ClearNavOctreeAll(param_1);
  return true;
}

// ExecuteIfSafe @ 146d938e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_6>_>
::ExecuteIfSafe(void *this,AActor *param_1)

{
  UNavigationSystemV1::UpdateNavOctreeBounds(param_1);
  return true;
}

// ExecuteIfSafe @ 146d93900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_7>_>
::ExecuteIfSafe(void *this,AActor *param_1)

{
  ``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::
  __l2::<lambda_7>::operator()((void *)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 146d93920

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_9>_>
::ExecuteIfSafe(void *this,AActor *param_1)

{
  UNavigationSystemV1::OnActorRegistered(param_1);
  return true;
}

// ExecuteIfSafe @ 146d93940

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_11>_>
::ExecuteIfSafe(void *this,UActorComponent *param_1)

{
  UNavigationSystemV1::RegisterComponentToNavOctree(param_1);
  return true;
}

// ExecuteIfSafe @ 146d93960

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_12>_>
::ExecuteIfSafe(void *this,UActorComponent *param_1)

{
  if ((param_1 != (UActorComponent *)0x0) &&
     (((!UE::Navigation::Private::bComponentShouldWaitForActorToRegister ||
       (param_1->OwnerPrivate == (AActor *)0x0)) ||
      ((bool)param_1->OwnerPrivate->bHasRegisteredAllComponents)))) {
    UNavigationSystemV1::UnregisterNavRelevantObjectStatic((UObject *)param_1);
  }
  return true;
}

// ExecuteIfSafe @ 146d939a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_13>_>
::ExecuteIfSafe(void *this,UActorComponent *param_1)

{
  UNavigationSystemV1::RegisterComponentToNavOctree(param_1);
  return true;
}

// ExecuteIfSafe @ 146d939c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_14>_>
::ExecuteIfSafe(void *this,UActorComponent *param_1)

{
  if ((param_1 != (UActorComponent *)0x0) &&
     (((!UE::Navigation::Private::bComponentShouldWaitForActorToRegister ||
       (param_1->OwnerPrivate == (AActor *)0x0)) ||
      ((bool)param_1->OwnerPrivate->bHasRegisteredAllComponents)))) {
    UNavigationSystemV1::UnregisterNavRelevantObjectStatic((UObject *)param_1);
  }
  return true;
}

// ExecuteIfSafe @ 146d93a00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_17>_>
::ExecuteIfSafe(void *this,UActorComponent *param_1,TBox<double> *param_2,TBox<double> *param_3)

{
  ``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::
  __l2::<lambda_17>::operator()((void *)((longlong)this + 0x18),param_1,param_2,param_3);
  return true;
}

// ExecuteIfSafe @ 146d93a20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,UObject *param_1)

{
  UClass *pUVar1;
  INavRelevantInterface *pIVar2;
  
  if ((!UNavigationSystemV1::bStaticRuntimeNavigation) && (param_1 != (UObject *)0x0)) {
    pUVar1 = Z_Construct_UClass_UNavRelevantInterface_NoRegister();
    pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    if (pIVar2 != (INavRelevantInterface *)0x0) {
      UNavigationSystemV1::RegisterNavRelevantObjectStatic(pIVar2,param_1);
    }
  }
  return true;
}

// ExecuteIfSafe @ 146d93a70

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,UObject *param_1)

{
  UNavigationSystemV1::UnregisterNavRelevantObjectStatic(param_1);
  return true;
}

// ExecuteIfSafe @ 146d93a90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_4>_>
::ExecuteIfSafe(void *this,UObject *param_1,TBox<double> *param_2,
               TArrayView<UE::Math::TBox<double>_const_,int> *param_3)

{
  TArrayView<UE::Math::TBox<double>_const_,int> local_18;
  
  local_18.DataPtr = param_3->DataPtr;
  local_18.ArrayNum = param_3->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_3->field_0xc;
  ``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::
  __l2::<lambda_4>::operator()((void *)((longlong)this + 0x18),param_1,param_2,&local_18);
  return true;
}

// ExecuteIfSafe @ 146d93ac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_5>_>
::ExecuteIfSafe(void *this,USceneComponent *param_1)

{
  AActor *pAVar1;
  
  pAVar1 = (AActor *)param_1->_padding_;
  if ((pAVar1 != (AActor *)0x0) && ((pAVar1->RootComponent).field0_0x0.DebugPtr == param_1)) {
    UNavigationSystemV1::UpdateActorAndComponentsInNavOctree(pAVar1,true);
  }
  return true;
}

// ExecuteIfSafe @ 146d93af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_8>_>
::ExecuteIfSafe(void *this,USceneComponent *param_1)

{
  AActor *pAVar1;
  
  if ((((UNavigationSystemV1::bUpdateNavOctreeOnComponentChange) &&
       (!UNavigationSystemV1::bStaticRuntimeNavigation)) &&
      (pAVar1 = (AActor *)param_1->_padding_, pAVar1 != (AActor *)0x0)) &&
     ((pAVar1->RootComponent).field0_0x0.DebugPtr == param_1)) {
    UNavigationSystemV1::UpdateActorAndComponentsInNavOctree(pAVar1,true);
  }
  return true;
}

// ExecuteIfSafe @ 146d93b30

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
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_20>_>
::ExecuteIfSafe(void *this,UWorld *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UNavigationSystemBase *pUVar3;
  
  if (param_1 == (UWorld *)0x0) {
    return true;
  }
  pUVar3 = (param_1->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar3 != (UNavigationSystemBase *)0x0) {
    pUVar2 = UNavigationSystemV1::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_146d93b6f;
  }
  pUVar3 = (UNavigationSystemBase *)0x0;
LAB_146d93b6f:
  if (pUVar3 != (UNavigationSystemBase *)0x0) {
    (**(code **)(*(longlong *)pUVar3 + 0x408))(pUVar3);
  }
  return true;
}

// ExecuteIfSafe @ 146d93ba0

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
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_19>_>
::ExecuteIfSafe(void *this,UWorld *param_1,bool param_2)

{
  ``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::
  __l2::<lambda_19>::operator()((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 146d93bc0

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
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UWorld *param_1,FNavigationElementHandle *param_2,TBox<double> *param_3,
               TArrayView<UE::Math::TBox<double>_const_,int> *param_4)

{
  int iVar1;
  UClass *pUVar2;
  UNavigationSystemV1 *this_00;
  TArrayView<UE::Math::TBox<double>_const_,int> local_28;
  FNavigationElementHandle local_18;
  
  if (param_1 == (UWorld *)0x0) {
    return true;
  }
  this_00 = (UNavigationSystemV1 *)(param_1->NavigationSystem).field0_0x0.DebugPtr;
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    pUVar2 = UNavigationSystemV1::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_146d93c0b;
  }
  this_00 = (UNavigationSystemV1 *)0x0;
LAB_146d93c0b:
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    local_18.OwnerUObject.WeakPtr = (param_2->OwnerUObject).WeakPtr;
    local_18.SubElementId = param_2->SubElementId;
    local_28.DataPtr = param_4->DataPtr;
    local_28.ArrayNum = param_4->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_4->field_0xc;
    UNavigationSystemV1::UpdateNavOctreeElementBounds(this_00,&local_18,param_3,&local_28);
  }
  return true;
}

// ExecuteIfSafe @ 146d93c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_16>_>
::ExecuteIfSafe(void *this,UActorComponent *param_1)

{
  ``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::
  __l2::<lambda_16>::operator()((void *)((longlong)this + 0x18),param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146d99be0

ulong64 __thiscall
TBaseFunctorDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_18>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99bf0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_10>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99c00

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_15>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99c10

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_6>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99c20

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_7>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99c30

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_9>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99c40

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_11>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99c50

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_12>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99c60

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_13>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99c70

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_14>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99c80

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_17>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99c90

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99ca0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99cb0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_4>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99cc0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_5>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99cd0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_8>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99ce0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_20>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99cf0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_19>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99d00

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 146d99d10

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_16>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 146d9e4f0

void * __thiscall
TBaseFunctorDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_18>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e500

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_10>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e510

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_15>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e520

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_6>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e530

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_7>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e540

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_9>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e550

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_11>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e560

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_12>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e570

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_13>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e580

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_14>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e590

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_17>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e5a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e5b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e5c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_4>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e5d0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_5>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e5e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_8>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e5f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_20>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e600

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_19>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e610

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146d9e620

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_16>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 146da29f0

UObject * __thiscall
TBaseFunctorDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_18>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2a00

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_10>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2a10

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_15>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2a20

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_6>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2a30

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_7>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2a40

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_9>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2a50

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_11>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2a60

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_12>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2a70

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_13>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2a80

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_14>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2a90

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_17>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2aa0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2ab0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2ac0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_4>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2ad0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_5>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2ae0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_8>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2af0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_20>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2b00

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_19>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2b10

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146da2b20

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_16>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146da3820

bool __thiscall
TBaseFunctorDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_18>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3830

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_10>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3840

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_15>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3850

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_6>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3860

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_7>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3870

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_9>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3880

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_11>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3890

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_12>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da38a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_13>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da38b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_14>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da38c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_17>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da38d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da38e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da38f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_4>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3900

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_5>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3910

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_8>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3920

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_20>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3930

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_19>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3940

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146da3950

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_16>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146da51c0

bool __thiscall
TBaseFunctorDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_18>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da51d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_10>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da51e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_15>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da51f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_6>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da5200

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_7>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da5210

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_9>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da5220

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_11>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da5230

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_12>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da5240

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_13>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da5250

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_14>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da5260

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_17>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da5270

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da5280

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da5290

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_4>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da52a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_5>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da52b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_8>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da52c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_20>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da52d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_19>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da52e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 146da52f0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_16>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146dbdb50

FName __thiscall
TBaseFunctorDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_18>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdb60

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_10>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdb70

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_15>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdb80

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_6>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdb90

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_7>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdba0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_9>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdbb0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_11>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdbc0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_12>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdbd0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_13>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdbe0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_14>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdbf0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_17>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdc00

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdc10

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdc20

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_4>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdc30

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_5>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdc40

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_8>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdc50

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_20>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdc60

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_19>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdc70

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dbdc80

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::__l2::<lambda_16>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146dc9590

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 146dc95a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 146dc95b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146dc95d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this)

{
  return 0;
}

// HasSameObject @ 146dc95e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146dc95f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
                  *this)

{
  return true;
}

// CreateCopy @ 146dc9600

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146dc96a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146dc9720

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 146dc9760

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
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  ::<lambda_25>::operator()(&this->Functor,param_1,param_2);
  return;
}

// ExecuteIfSafe @ 146dc9770

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
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  ::<lambda_25>::operator()(&this->Functor,param_1,param_2);
  return true;
}

