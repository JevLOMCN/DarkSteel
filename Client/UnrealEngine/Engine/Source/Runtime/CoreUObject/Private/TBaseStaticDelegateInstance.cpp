// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 143

// CreateCopy @ 141e94a30

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVFString__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141e94ab0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVFString__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141e94b00

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVFString__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 141e99450

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *this,FString *param_1,FString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141e9945d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2);
  return;
}

// ExecuteIfSafe @ 141e995b0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *this,FString *param_1,FString *param_2)

{
  (*this->StaticFuncPtr)(param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 141e9f660

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 141ea19d0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 141ea30d0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 141ea4f20

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 141ea9e20

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141ec1700

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 141f2be60

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141f2bee0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 141f2bf30

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 141f2e620

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,FString *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141f2e627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// ExecuteIfSafe @ 141f2e7a0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,FString *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 141f33280

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 141f34f50

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 141f36f90

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 141f37120

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 141f3a530

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// TryGetBoundFunctionName @ 141f4e380

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 141f519a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 141f519b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 141f519c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 141f519d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// HasSameObject @ 141f519e0

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
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 141f519f0

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
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// CreateCopy @ 141f51a00

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
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
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
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141f51aa0

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
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
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
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141f51b20

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
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// Execute @ 141f51b70

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
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141f51b7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2);
  return;
}

// ExecuteIfSafe @ 141f51b90

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
TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  (*this->StaticFuncPtr)(param_1,param_2);
  return true;
}

// TryGetBoundFunctionName @ 141fb4f60

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_ELogVerbosity::Type,char_const_*,int,FText_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 141fb4f70

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_ELogVerbosity::Type,char_const_*,int,FText_const_&),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 141fb4f80

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_ELogVerbosity::Type,char_const_*,int,FText_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 141fb4f90

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_ELogVerbosity::Type,char_const_*,int,FText_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x18);
}

// HasSameObject @ 141fb4fa0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_ELogVerbosity::Type,char_const_*,int,FText_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 141fb4fb0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_ELogVerbosity::Type,char_const_*,int,FText_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// CreateCopy @ 141fb4fc0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_ELogVerbosity::Type,char_const_*,int,FText_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4Type_ELogVerbosity__PEBDHAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXW4Type_ELogVerbosity__PEBDHAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 141fb5060

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_ELogVerbosity::Type,char_const_*,int,FText_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4Type_ELogVerbosity__PEBDHAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXW4Type_ELogVerbosity__PEBDHAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 141fb50e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_ELogVerbosity::Type,char_const_*,int,FText_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4Type_ELogVerbosity__PEBDHAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXW4Type_ELogVerbosity__PEBDHAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// Execute @ 141fb5130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_ELogVerbosity::Type,char_const_*,int,FText_const_&),FDefaultDelegateUserPolicy>
::Execute(void *this,Type param_1,char *param_2,int param_3,FText *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000141fb514e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this + 0x18))(param_1,param_2,param_3,param_4);
  return;
}

// ExecuteIfSafe @ 141fb5160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_ELogVerbosity::Type,char_const_*,int,FText_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,Type param_1,char *param_2,int param_3,FText *param_4)

{
  (**(code **)((longlong)this + 0x18))(param_1,param_2,param_3,param_4);
  return true;
}

// CreateCopy @ 1420f5530

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1420f55b0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1420f5600

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBVIPakFile___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1420f56a0

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy> *this,
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
              ___7__TCommonDelegateInstanceState___A6A_NVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1420f5720

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1420f5770

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy> *this,
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
              ___7__TCommonDelegateInstanceState___A6A_NVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_NVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1420f6b70

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
           *this,IPakFile *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001420f6b77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// Execute @ 1420f6b80

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy> *this,
          FName param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001420f6b87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*this->StaticFuncPtr)(param_1);
  return bVar1;
}

// ExecuteIfSafe @ 1420f6b90

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
              *this,IPakFile *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// ExecuteIfSafe @ 1420f6bb0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy> *this,
          FName param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1420f9d80

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 1420f9d90

ulong64 __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 1420fafc0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1420fafd0

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetUObject @ 1420fd990

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1420fd9a0

UObject * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1420fe5e0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1420fe5f0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1420ffae0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 1420ffaf0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy> *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142117440

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142117450

FName __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy>::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1421c3620

void __thiscall
TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_U__TTuple_VFName__UFRemoteWorkPriority___NV__TFunction___A6AXXZ______XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AU__TOptional_U__TTuple_VFName__UFRemoteWorkPriority___NV__TFunction___A6AXXZ______XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1421c36a0

void __thiscall
TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_U__TTuple_VFName__UFRemoteWorkPriority___NV__TFunction___A6AXXZ______XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AU__TOptional_U__TTuple_VFName__UFRemoteWorkPriority___NV__TFunction___A6AXXZ______XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1421c36f0

void __thiscall
TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_U__TTuple_VFName__UFRemoteWorkPriority___NV__TFunction___A6AXXZ______XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AU__TOptional_U__TTuple_VFName__UFRemoteWorkPriority___NV__TFunction___A6AXXZ______XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1421c3790

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFMigrateSendParams_Transfer_RemoteObject_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFMigrateSendParams_Transfer_RemoteObject_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1421c3810

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFMigrateSendParams_Transfer_RemoteObject_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFMigrateSendParams_Transfer_RemoteObject_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1421c3860

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFMigrateSendParams_Transfer_RemoteObject_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFMigrateSendParams_Transfer_RemoteObject_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1421c3900

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFUObjectMigrationContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFUObjectMigrationContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1421c3980

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFUObjectMigrationContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFUObjectMigrationContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 1421c39d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFUObjectMigrationContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFUObjectMigrationContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1421c7b00

TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_> * __thiscall
TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
          *this,TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>
                *__return_storage_ptr__)

{
  (*this->StaticFuncPtr)(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Execute @ 1421c7b30

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
          *this,FMigrateSendParams *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001421c7b37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// Execute @ 1421c7b40

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
          *this,FUObjectMigrationContext *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001421c7b47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// ExecuteIfSafe @ 1421c7b90

bool __thiscall
TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  longlong *plVar1;
  undefined1 local_68 [80];
  bool local_18;
  
  (*this->StaticFuncPtr)
            ((TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_> *)
             local_68);
  if ((local_18 != false) && (local_68._32_8_ != 0)) {
    plVar1 = (longlong *)(local_68 + 0x30);
    if ((longlong *)local_68._72_8_ != (longlong *)0x0) {
      plVar1 = (longlong *)local_68._72_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return true;
}

// ExecuteIfSafe @ 1421c7be0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
                *this,FMigrateSendParams *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// ExecuteIfSafe @ 1421c7c00

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
                *this,FUObjectMigrationContext *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1421cf050

ulong64 __thiscall
TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 1421cf060

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 1421cf070

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 1421d00f0

void * __thiscall
TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1421d0100

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1421d0110

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 1421d0f20

UObject * __thiscall
TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1421d0f30

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1421d0f40

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1421d2c20

bool __thiscall
TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1421d2c30

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1421d2c40

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1421d3970

bool __thiscall
TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1421d3980

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1421d3990

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1421eb1a0

FName __thiscall
TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<TOptional<TTuple<FName,FRemoteWorkPriority,bool,TFunction<void___cdecl(void)>_>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1421eb1b0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UE::RemoteObject::Transfer::FMigrateSendParams_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1421eb1c0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FUObjectMigrationContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14223d4d0

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 14223d4e0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 14223d4f0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14223d500

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// HasSameObject @ 14223d510

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14223d520

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// CreateCopy @ 14223d530

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFConfigModificationTracker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEBVFConfigModificationTracker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14223d5d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVFConfigModificationTracker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEBVFConfigModificationTracker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14223d650

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVFConfigModificationTracker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEBVFConfigModificationTracker___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// Execute @ 14223d6a0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
          *this,FConfigModificationTracker *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014223d6a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// ExecuteIfSafe @ 14223d6b0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(FConfigModificationTracker_const_*),FDefaultDelegateUserPolicy>
                *this,FConfigModificationTracker *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// CreateCopy @ 142267750

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1422677d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142267820

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1422678c0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *this,
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
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142267940

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142267990

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *this,
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
              ___7__TCommonDelegateInstanceState___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXVFName___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142267a30

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142267ab0

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 142267b00

void __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_NV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_NV__TArrayView___CBVFName__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14226bc80

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
Execute(TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
        *this,TArrayView<FName_const_,int> *param_1)

{
  TArrayView<FName_const_,int> local_18;
  
  local_18.DataPtr._0_4_ = *(undefined4 *)&param_1->DataPtr;
  local_18.DataPtr._4_4_ = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (*this->StaticFuncPtr)(&local_18);
  return;
}

// Execute @ 14226bcb0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *this,
          FName param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014226bcbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2);
  return;
}

// Execute @ 14226bcd0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
Execute(TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
        *this,TArrayView<FName_const_,int> *param_1)

{
  bool bVar1;
  TArrayView<FName_const_,int> local_18;
  
  local_18.DataPtr._0_4_ = *(undefined4 *)&param_1->DataPtr;
  local_18.DataPtr._4_4_ = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar1 = (*this->StaticFuncPtr)(&local_18);
  return bVar1;
}

// ExecuteIfSafe @ 14226bd40

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
              *this,TArrayView<FName_const_,int> *param_1)

{
  TArrayView<FName_const_,int> local_18;
  
  local_18.DataPtr._0_4_ = *(undefined4 *)&param_1->DataPtr;
  local_18.DataPtr._4_4_ = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (*this->StaticFuncPtr)(&local_18);
  return true;
}

// ExecuteIfSafe @ 14226bd70

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *this,
          FName param_1,bool param_2)

{
  (*this->StaticFuncPtr)(param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14226bda0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
              *this,TArrayView<FName_const_,int> *param_1)

{
  TArrayView<FName_const_,int> local_18;
  
  local_18.DataPtr._0_4_ = *(undefined4 *)&param_1->DataPtr;
  local_18.DataPtr._4_4_ = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (*this->StaticFuncPtr)(&local_18);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14226f080

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14226f090

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 14226f0a0

ulong64 __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 14226ffe0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14226fff0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 142270000

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 142271760

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
GetUObject(TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142271770

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142271780

UObject * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
GetUObject(TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142272b50

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// HasSameObject @ 142272b60

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 142272b70

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1422753b0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 1422753c0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *this)

{
  return true;
}

// IsSafeToExecute @ 1422753d0

bool __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14228cb60

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14228cb70

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(FName,bool),FDefaultDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14228cb80

FName __thiscall
TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<bool___cdecl(TArrayView<FName_const_,int>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

