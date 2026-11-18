// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 22

// CreateCopy @ 145f87610

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *this,
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 145f87690

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 145f876e0

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::CreateCopy
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *this,
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 145f87780

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___NAEAV__TMap_PEAVUObject__PEAV1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVUObject__PEAV1__0A_____AEAV__TArray_PEAVUObject__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___NAEAV__TMap_PEAVUObject__PEAV1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVUObject__PEAV1__0A_____AEAV__TArray_PEAVUObject__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 145f87800

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___NAEAV__TMap_PEAVUObject__PEAV1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVUObject__PEAV1__0A_____AEAV__TArray_PEAVUObject__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___NAEAV__TMap_PEAVUObject__PEAV1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVUObject__PEAV1__0A_____AEAV__TArray_PEAVUObject__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 145f87850

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___NAEAV__TMap_PEAVUObject__PEAV1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVUObject__PEAV1__0A_____AEAV__TArray_PEAVUObject__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___NAEAV__TMap_PEAVUObject__PEAV1_VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVUObject__PEAV1__0A_____AEAV__TArray_PEAVUObject__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 145f8bb30

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::Execute
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *this,
          UWorld *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145f8bb37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1);
  return;
}

// Execute @ 145f8bb40

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *this,UWorld *param_1,bool param_2,
         TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
         *param_3,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145f8bb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->StaticFuncPtr)(param_1,param_2,param_3,param_4);
  return;
}

// ExecuteIfSafe @ 145f8c160

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *this,
          UWorld *param_1)

{
  (*this->StaticFuncPtr)(param_1);
  return true;
}

// ExecuteIfSafe @ 145f8c180

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1,bool param_2,
               TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
               *param_3,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_4)

{
  (*this->StaticFuncPtr)(param_1,param_2,param_3,param_4);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 145f8e790

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 145f8e7a0

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 145f93230

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 145f93240

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetUObject @ 145f961f0

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::GetUObject
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 145f96200

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 145f96dc0

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::HasSameObject
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *this,
          void *param_1)

{
  return false;
}

// HasSameObject @ 145f96dd0

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 145f98010

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::IsSafeToExecute
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *this)

{
  return true;
}

// IsSafeToExecute @ 145f98020

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 145fa5eb0

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*),FDefaultTSDelegateUserPolicy> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 145fa5ec0

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*,bool,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

