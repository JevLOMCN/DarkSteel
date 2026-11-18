// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 33

// CreateCopy @ 14630e780

void __thiscall
TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFChaosVDParticleMetadata__PEBVIPhysicsProxyBase__PEBV__TGeometryParticleHandleImp_N_02_00_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AUFChaosVDParticleMetadata__PEBVIPhysicsProxyBase__PEBV__TGeometryParticleHandleImp_N_02_00_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14630e800

void __thiscall
TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFChaosVDParticleMetadata__PEBVIPhysicsProxyBase__PEBV__TGeometryParticleHandleImp_N_02_00_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AUFChaosVDParticleMetadata__PEBVIPhysicsProxyBase__PEBV__TGeometryParticleHandleImp_N_02_00_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14630e850

void __thiscall
TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AUFChaosVDParticleMetadata__PEBVIPhysicsProxyBase__PEBV__TGeometryParticleHandleImp_N_02_00_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_AUFChaosVDParticleMetadata__PEBVIPhysicsProxyBase__PEBV__TGeometryParticleHandleImp_N_02_00_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14630e8f0

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFWorldInitializationValues___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld__UFWorldInitializationValues___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14630e970

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFWorldInitializationValues___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld__UFWorldInitializationValues___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14630e9c0

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFWorldInitializationValues___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld__UFWorldInitializationValues___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14630ea60

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14630eae0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14630eb30

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1463116a0

FChaosVDParticleMetadata * __thiscall
TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
          *this,FChaosVDParticleMetadata *__return_storage_ptr__,IPhysicsProxyBase *param_1,
         TGeometryParticleHandleImp<double,3,1> *param_2)

{
  ulong64 uVar1;
  FName FVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  FNameEntryId FVar9;
  FChaosVDParticleMetadata *pFVar10;
  FChaosVDParticleMetadata local_58;
  
  pFVar10 = (*this->StaticFuncPtr)(&local_58,param_1,param_2);
  FVar2 = pFVar10->ComponentName;
  FVar3 = pFVar10->BoneName;
  iVar8 = pFVar10->Index;
  FVar9.Value = (pFVar10->MapAssetPath).PackageName.ComparisonIndex.Value;
  __return_storage_ptr__->OwnerName = pFVar10->OwnerName;
  __return_storage_ptr__->ComponentName = FVar2;
  uVar4 = *(undefined8 *)&(pFVar10->MapAssetPath).PackageName.Number;
  uVar5 = *(undefined8 *)&(pFVar10->MapAssetPath).AssetName.Number;
  __return_storage_ptr__->BoneName = FVar3;
  __return_storage_ptr__->Index = iVar8;
  (__return_storage_ptr__->MapAssetPath).PackageName.ComparisonIndex = (FNameEntryId)FVar9.Value;
  uVar6 = *(undefined8 *)&(pFVar10->OwnerAssetPath).PackageName.Number;
  uVar7 = *(undefined8 *)&(pFVar10->OwnerAssetPath).AssetName.Number;
  *(undefined8 *)&(__return_storage_ptr__->MapAssetPath).PackageName.Number = uVar4;
  *(undefined8 *)&(__return_storage_ptr__->MapAssetPath).AssetName.Number = uVar5;
  uVar1 = pFVar10->MetadataID;
  *(undefined8 *)&(__return_storage_ptr__->OwnerAssetPath).PackageName.Number = uVar6;
  *(undefined8 *)&(__return_storage_ptr__->OwnerAssetPath).AssetName.Number = uVar7;
  __return_storage_ptr__->MetadataID = uVar1;
  return __return_storage_ptr__;
}

// Execute @ 146311700

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::Execute(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
          *this,UWorld *param_1,FWorldInitializationValues *param_2)

{
  _func___cdecl_void_UWorld_ptr_FWorldInitializationValues *p_Var1;
  FWorldInitializationValues *pFVar2;
  FWorldInitializationValues local_18;
  
  p_Var1 = this->StaticFuncPtr;
  pFVar2 = FWorldInitializationValues::FWorldInitializationValues(&local_18,param_2);
  (*p_Var1)(param_1,pFVar2);
  return;
}

// Execute @ 146311740

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::Execute(void *this,UWorld *param_1,ELevelTick param_2,float param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000146311750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this + 0x18))(param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 146311940

bool __thiscall
TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
                *this,IPhysicsProxyBase *param_1,TGeometryParticleHandleImp<double,3,1> *param_2)

{
  FChaosVDParticleMetadata local_58;
  
  (*this->StaticFuncPtr)(&local_58,param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 146311960

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1,FWorldInitializationValues *param_2)

{
  _func___cdecl_void_UWorld_ptr_FWorldInitializationValues *p_Var1;
  FWorldInitializationValues *pFVar2;
  FWorldInitializationValues local_18;
  
  p_Var1 = this->StaticFuncPtr;
  pFVar2 = FWorldInitializationValues::FWorldInitializationValues(&local_18,param_2);
  (*p_Var1)(param_1,pFVar2);
  return true;
}

// ExecuteIfSafe @ 1463119a0

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,UWorld *param_1,ELevelTick param_2,float param_3)

{
  (**(code **)((longlong)this + 0x18))(param_1,param_2,param_3);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146312350

ulong64 __thiscall
TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146312360

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetBoundProgramCounterForTimerManager @ 146312370

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 146313010

void * __thiscall
TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146313020

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
           *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 146313030

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 146313e90

UObject * __thiscall
TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146313ea0

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::GetUObject(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146313eb0

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146317a40

bool __thiscall
TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146317a50

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return false;
}

// HasSameObject @ 146317a60

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1463188f0

bool __thiscall
TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146318900

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 146318910

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146320ef0

FName __thiscall
TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146320f00

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
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146320f10

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

