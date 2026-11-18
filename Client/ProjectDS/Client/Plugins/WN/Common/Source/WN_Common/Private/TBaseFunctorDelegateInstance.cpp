// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 22

// TryGetBoundFunctionName @ 149483c40

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 149483c50

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 149483c60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 149483c70

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this)

{
  return 0;
}

// HasSameObject @ 149483c80

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 149483c90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
                  *this)

{
  return true;
}

// CreateCopy @ 149483ca0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
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

// CreateCopy @ 149483d40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
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

// CreateCopy @ 149483dc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
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

// Execute @ 149483e00

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
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  ::<lambda_5>::operator()(&this->Functor,param_1,param_2);
  return;
}

// ExecuteIfSafe @ 149483f10

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
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  ::<lambda_5>::operator()(&this->Functor,param_1,param_2);
  return true;
}

// CreateCopy @ 14949aa70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UWN_NiagaraTODDataInterface::GetVMExternalFunction'::__l5::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UWN_NiagaraTODDataInterface::GetVMExternalFunction'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14949aaf0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UWN_NiagaraTODDataInterface::GetVMExternalFunction'::__l5::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UWN_NiagaraTODDataInterface::GetVMExternalFunction'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14949ab40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UWN_NiagaraTODDataInterface::GetVMExternalFunction'::__l5::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UWN_NiagaraTODDataInterface::GetVMExternalFunction'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14949df30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UWN_NiagaraTODDataInterface::GetVMExternalFunction'::__l5::<lambda_1>_>
::Execute(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `UWN_NiagaraTODDataInterface::GetVMExternalFunction'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// ExecuteIfSafe @ 14949ec10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UWN_NiagaraTODDataInterface::GetVMExternalFunction'::__l5::<lambda_1>_>
::ExecuteIfSafe(void *this,FVectorVMExternalFunctionContext *param_1)

{
  `UWN_NiagaraTODDataInterface::GetVMExternalFunction'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1494a0530

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UWN_NiagaraTODDataInterface::GetVMExternalFunction'::__l5::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1494a0b90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UWN_NiagaraTODDataInterface::GetVMExternalFunction'::__l5::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1494a3720

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UWN_NiagaraTODDataInterface::GetVMExternalFunction'::__l5::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1494a4580

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UWN_NiagaraTODDataInterface::GetVMExternalFunction'::__l5::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1494a5c90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UWN_NiagaraTODDataInterface::GetVMExternalFunction'::__l5::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1494aead0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UWN_NiagaraTODDataInterface::GetVMExternalFunction'::__l5::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

