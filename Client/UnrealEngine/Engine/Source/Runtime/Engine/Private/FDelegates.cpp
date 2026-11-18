// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FDelegates @ 1473799a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDelegates * __thiscall FNavigationSystem::FDelegates::FDelegates(FDelegates *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  *(undefined8 *)&this->SupportsDynamicChangesDelegate = 0;
  *(undefined8 *)&(this->SupportsDynamicChangesDelegate).field_0x8 = 0;
  puVar1 = &(this->UpdateNavigationElementDelegate).field_0x8;
  *(undefined4 *)&(this->SupportsDynamicChangesDelegate).field_0x10 = 0;
  puVar2 = &(this->RemoveNavigationElementDelegate).field_0x8;
  puVar3 = &(this->AddNavigationElementDelegate).field_0x8;
  *(undefined8 *)&this->UpdateNavigationElementDelegate = 0;
  puVar4 = &(this->UpdateNavigationElementBoundsDelegate).field_0x8;
  *(undefined8 *)puVar3 = 0;
  puVar5 = &(this->RegisterNavRelevantObject).field_0x8;
  *(undefined4 *)&(this->AddNavigationElementDelegate).field_0x10 = 0;
  *(undefined8 *)&this->AddNavigationElementDelegate = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&(this->UpdateNavigationElementDelegate).field_0x10 = 0;
  *(undefined8 *)&this->RemoveNavigationElementDelegate = 0;
  *(undefined8 *)puVar2 = 0;
  *(undefined4 *)&(this->RemoveNavigationElementDelegate).field_0x10 = 0;
  *(undefined8 *)&this->UpdateNavigationElementBoundsDelegate = 0;
  *(undefined8 *)puVar4 = 0;
  *(undefined4 *)&(this->UpdateNavigationElementBoundsDelegate).field_0x10 = 0;
  *(undefined8 *)&this->RegisterNavRelevantObject = 0;
  *(undefined8 *)puVar5 = 0;
  *(undefined4 *)&(this->RegisterNavRelevantObject).field_0x10 = 0;
  *(undefined8 *)&this->UpdateNavRelevantObject = 0;
  *(undefined8 *)&(this->UpdateNavRelevantObject).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateNavRelevantObject).field_0x10 = 0;
  *(undefined8 *)&this->UnregisterNavRelevantObject = 0;
  *(undefined8 *)&(this->UnregisterNavRelevantObject).field_0x8 = 0;
  *(undefined4 *)&(this->UnregisterNavRelevantObject).field_0x10 = 0;
  *(undefined8 *)&this->OnObjectBoundsChanged = 0;
  *(undefined8 *)&(this->OnObjectBoundsChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnObjectBoundsChanged).field_0x10 = 0;
  *(undefined8 *)&this->UpdateActorData = 0;
  *(undefined8 *)&(this->UpdateActorData).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateActorData).field_0x10 = 0;
  *(undefined8 *)&this->UpdateComponentData = 0;
  *(undefined8 *)&(this->UpdateComponentData).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateComponentData).field_0x10 = 0;
  *(undefined8 *)&this->UpdateComponentDataAfterMove = 0;
  *(undefined8 *)&(this->UpdateComponentDataAfterMove).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateComponentDataAfterMove).field_0x10 = 0;
  *(undefined8 *)&this->OnActorBoundsChanged = 0;
  *(undefined8 *)&(this->OnActorBoundsChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnActorBoundsChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnPostEditActorMove = 0;
  *(undefined8 *)&(this->OnPostEditActorMove).field_0x8 = 0;
  *(undefined4 *)&(this->OnPostEditActorMove).field_0x10 = 0;
  *(undefined8 *)&this->OnComponentTransformChanged = 0;
  *(undefined8 *)&(this->OnComponentTransformChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnComponentTransformChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnActorRegistered = 0;
  *(undefined8 *)&(this->OnActorRegistered).field_0x8 = 0;
  *(undefined4 *)&(this->OnActorRegistered).field_0x10 = 0;
  *(undefined8 *)&this->OnActorUnregistered = 0;
  *(undefined8 *)&(this->OnActorUnregistered).field_0x8 = 0;
  *(undefined4 *)&(this->OnActorUnregistered).field_0x10 = 0;
  *(undefined8 *)&this->OnComponentRegistered = 0;
  *(undefined8 *)&(this->OnComponentRegistered).field_0x8 = 0;
  *(undefined4 *)&(this->OnComponentRegistered).field_0x10 = 0;
  *(undefined8 *)&this->OnComponentUnregistered = 0;
  *(undefined8 *)&(this->OnComponentUnregistered).field_0x8 = 0;
  *(undefined4 *)&(this->OnComponentUnregistered).field_0x10 = 0;
  *(undefined8 *)&this->RegisterComponent = 0;
  *(undefined8 *)&(this->RegisterComponent).field_0x8 = 0;
  *(undefined4 *)&(this->RegisterComponent).field_0x10 = 0;
  *(undefined8 *)&this->UnregisterComponent = 0;
  *(undefined8 *)&(this->UnregisterComponent).field_0x8 = 0;
  *(undefined4 *)&(this->UnregisterComponent).field_0x10 = 0;
  *(undefined8 *)&this->RemoveActorData = 0;
  *(undefined8 *)&(this->RemoveActorData).field_0x8 = 0;
  *(undefined4 *)&(this->RemoveActorData).field_0x10 = 0;
  *(undefined8 *)&this->StopMovement = 0;
  *(undefined8 *)&(this->StopMovement).field_0x8 = 0;
  *(undefined4 *)&(this->StopMovement).field_0x10 = 0;
  *(undefined8 *)&this->IsFollowingAPath = 0;
  *(undefined8 *)&(this->IsFollowingAPath).field_0x8 = 0;
  *(undefined4 *)&(this->IsFollowingAPath).field_0x10 = 0;
  *(undefined8 *)&this->HasComponentData = 0;
  *(undefined8 *)&(this->HasComponentData).field_0x8 = 0;
  *(undefined4 *)&(this->HasComponentData).field_0x10 = 0;
  *(undefined8 *)&this->GetDefaultSupportedAgent = 0;
  *(undefined8 *)&(this->GetDefaultSupportedAgent).field_0x8 = 0;
  *(undefined4 *)&(this->GetDefaultSupportedAgent).field_0x10 = 0;
  *(undefined8 *)&this->GetBiggestSupportedAgent = 0;
  *(undefined8 *)&(this->GetBiggestSupportedAgent).field_0x8 = 0;
  *(undefined4 *)&(this->GetBiggestSupportedAgent).field_0x10 = 0;
  *(undefined8 *)&this->UpdateActorAndComponentData = 0;
  *(undefined8 *)&(this->UpdateActorAndComponentData).field_0x8 = 0;
  *(undefined4 *)&(this->UpdateActorAndComponentData).field_0x10 = 0;
  *(undefined8 *)&this->GetNavDataForActor = 0;
  *(undefined8 *)&(this->GetNavDataForActor).field_0x8 = 0;
  *(undefined4 *)&(this->GetNavDataForActor).field_0x10 = 0;
  *(undefined8 *)&this->GetDefaultNavDataClass = 0;
  *(undefined8 *)&(this->GetDefaultNavDataClass).field_0x8 = 0;
  *(undefined4 *)&(this->GetDefaultNavDataClass).field_0x10 = 0;
  *(undefined8 *)&this->VerifyNavigationRenderingComponents = 0;
  *(undefined8 *)&(this->VerifyNavigationRenderingComponents).field_0x8 = 0;
  *(undefined4 *)&(this->VerifyNavigationRenderingComponents).field_0x10 = 0;
  *(undefined8 *)&this->Build = 0;
  *(undefined8 *)&(this->Build).field_0x8 = 0;
  *(undefined4 *)&(this->Build).field_0x10 = 0;
  *(undefined8 *)&this->OnNavigationInitStart = 0;
  *(undefined8 *)&(this->OnNavigationInitStart).field_0x8 = 0;
  *(undefined8 *)&(this->OnNavigationInitStart).field_0x10 = 0;
  *(undefined8 *)&(this->OnNavigationInitStart).field_0x18 = 2;
  *(undefined8 *)&this->OnNavigationInitDone = 0;
  *(undefined8 *)&(this->OnNavigationInitDone).field_0x8 = 0;
  *(undefined8 *)&(this->OnNavigationInitDone).field_0x10 = 0;
  *(undefined8 *)&(this->OnNavigationInitDone).field_0x18 = 2;
  *(undefined8 *)&this->OnNavAreaRegistered = 0;
  *(undefined8 *)&(this->OnNavAreaRegistered).field_0x8 = 0;
  *(undefined8 *)&(this->OnNavAreaRegistered).field_0x10 = 0;
  *(undefined8 *)&(this->OnNavAreaRegistered).field_0x18 = 2;
  *(undefined8 *)&this->OnNavAreaUnregistered = 0;
  *(undefined8 *)&(this->OnNavAreaUnregistered).field_0x8 = 0;
  *(undefined8 *)&(this->OnNavAreaUnregistered).field_0x10 = 0;
  *(undefined8 *)&(this->OnNavAreaUnregistered).field_0x18 = 2;
  *(undefined8 *)&this->OnComponentBoundsChanged = 0;
  *(undefined8 *)&(this->OnComponentBoundsChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnComponentBoundsChanged).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->AddNavigationElementDelegate,(FWriteAccessScope *)&local_48);
  local_30 = puVar3;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar3);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFNavigationElementHandle__PEAVUWorld____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AUFNavigationElementHandle__PEAVUWorld____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->UpdateNavigationElementDelegate,(FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar1);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFNavigationElementHandle____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVUWorld__UFNavigationElementHandle____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->RemoveNavigationElementDelegate,(FWriteAccessScope *)&local_48);
  local_30 = puVar2;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar2);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFNavigationElementHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVUWorld__UFNavigationElementHandle___ZUFDefaultDelegateUserPolicy__V<lambda_3>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->UpdateNavigationElementBoundsDelegate,(FWriteAccessScope *)&local_48);
  local_30 = puVar4;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar4);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFNavigationElementHandle__AEBU__TBox_N_Math_UE__V__TArrayView___CBU__TBox_N_Math_UE__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVUWorld__UFNavigationElementHandle__AEBU__TBox_N_Math_UE__V__TArrayView___CBU__TBox_N_Math_UE__H___ZUFDefaultDelegateUserPolicy__V<lambda_4>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->RegisterNavRelevantObject,(FWriteAccessScope *)&local_48);
  local_30 = puVar5;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puVar5);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy__V<lambda_5>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->UpdateNavRelevantObject,(FWriteAccessScope *)&local_48);
  local_30 = &(this->UpdateNavRelevantObject).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy__V<lambda_6>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->UnregisterNavRelevantObject,(FWriteAccessScope *)&local_48);
  local_30 = &(this->UnregisterNavRelevantObject).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy__V<lambda_7>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnObjectBoundsChanged,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->OnObjectBoundsChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject__AEBU__TBox_N_Math_UE__V__TArrayView___CBU__TBox_N_Math_UE__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVUObject__AEBU__TBox_N_Math_UE__V__TArrayView___CBU__TBox_N_Math_UE__H___ZUFDefaultDelegateUserPolicy__V<lambda_8>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->UpdateActorData,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->UpdateActorData).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy__V<lambda_9>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->UpdateComponentData,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->UpdateComponentData).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy__V<lambda_10>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->UpdateComponentDataAfterMove,(FWriteAccessScope *)&local_48);
  local_30 = &(this->UpdateComponentDataAfterMove).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUSceneComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVUSceneComponent___ZUFDefaultDelegateUserPolicy__V<lambda_11>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnActorBoundsChanged,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->OnActorBoundsChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy__V<lambda_12>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPostEditActorMove,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->OnPostEditActorMove).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy__V<lambda_13>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnComponentTransformChanged,(FWriteAccessScope *)&local_48);
  local_30 = &(this->OnComponentTransformChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUSceneComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVUSceneComponent___ZUFDefaultDelegateUserPolicy__V<lambda_14>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnActorRegistered,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->OnActorRegistered).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy__V<lambda_15>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnActorUnregistered,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->OnActorUnregistered).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy__V<lambda_16>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnComponentRegistered,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->OnComponentRegistered).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy__V<lambda_17>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnComponentUnregistered,(FWriteAccessScope *)&local_48);
  local_30 = &(this->OnComponentUnregistered).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy__V<lambda_18>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->RegisterComponent,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->RegisterComponent).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy__V<lambda_19>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->UnregisterComponent,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->UnregisterComponent).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy__V<lambda_20>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->RemoveActorData,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->RemoveActorData).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy__V<lambda_21>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->StopMovement,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->StopMovement).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVAController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEBVAController___ZUFDefaultDelegateUserPolicy__V<lambda_22>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->IsFollowingAPath,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->IsFollowingAPath).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBVAController___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NAEBVAController___ZUFDefaultDelegateUserPolicy__V<lambda_23>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->HasComponentData,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->HasComponentData).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6A_NAEAVUActorComponent___ZUFDefaultDelegateUserPolicy__V<lambda_24>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->GetDefaultSupportedAgent,(FWriteAccessScope *)&local_48);
  local_30 = &(this->GetDefaultSupportedAgent).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AAEBUFNavDataConfig__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6AAEBUFNavDataConfig__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = GetFallbackSupportedAgent;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->GetBiggestSupportedAgent,(FWriteAccessScope *)&local_48);
  local_30 = &(this->GetBiggestSupportedAgent).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AAEBUFNavDataConfig__PEBVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6AAEBUFNavDataConfig__PEBVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = GetFallbackSupportedAgent;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->UpdateActorAndComponentData,(FWriteAccessScope *)&local_48);
  local_30 = &(this->UpdateActorAndComponentData).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVAActor___N_ZUFDefaultDelegateUserPolicy__V<lambda_25>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnComponentBoundsChanged,(FWriteAccessScope *)&local_48);
  local_30 = &(this->OnComponentBoundsChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent__AEBU__TBox_N_Math_UE__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVUActorComponent__AEBU__TBox_N_Math_UE__1_ZUFDefaultDelegateUserPolicy__V<lambda_26>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->GetNavDataForActor,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->GetNavDataForActor).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6APEAVINavigationDataInterface__AEBVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6APEAVINavigationDataInterface__AEBVAActor___ZUFDefaultDelegateUserPolicy__V<lambda_27>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->GetDefaultNavDataClass
             ,(FWriteAccessScope *)&local_48);
  local_30 = &(this->GetDefaultNavDataClass).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSubclassOf_VAActor____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AV__TSubclassOf_VAActor____XZUFDefaultDelegateUserPolicy__V<lambda_28>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->VerifyNavigationRenderingComponents,(FWriteAccessScope *)&local_48);
  local_30 = &(this->VerifyNavigationRenderingComponents).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUWorld___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVUWorld___N_ZUFDefaultDelegateUserPolicy__V<lambda_29>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Build,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->Build).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXAEAVUWorld___ZUFDefaultDelegateUserPolicy__V<lambda_30>__1___0FDelegates_FNavigationSystem__QEAA_XZ___V__6B_
    ;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return this;
}

// ~FDelegates @ 14737d710

void __thiscall FNavigationSystem::FDelegates::~FDelegates(FDelegates *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnComponentBoundsChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNavAreaUnregistered).field_0x8,
             *(int *)&(this->OnNavAreaUnregistered).field_0x10);
  pvVar1 = *(void **)&(this->OnNavAreaUnregistered).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNavAreaUnregistered);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNavAreaRegistered).field_0x8,*(int *)&(this->OnNavAreaRegistered).field_0x10
            );
  pvVar1 = *(void **)&(this->OnNavAreaRegistered).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNavAreaRegistered);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNavigationInitDone).field_0x8,
             *(int *)&(this->OnNavigationInitDone).field_0x10);
  pvVar1 = *(void **)&(this->OnNavigationInitDone).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNavigationInitDone);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNavigationInitStart).field_0x8,
             *(int *)&(this->OnNavigationInitStart).field_0x10);
  pvVar1 = *(void **)&(this->OnNavigationInitStart).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNavigationInitStart);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Build);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->VerifyNavigationRenderingComponents
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GetDefaultNavDataClass);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GetNavDataForActor);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdateActorAndComponentData);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GetBiggestSupportedAgent);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GetDefaultSupportedAgent);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->HasComponentData);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->IsFollowingAPath);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StopMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RemoveActorData);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UnregisterComponent);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RegisterComponent);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnComponentUnregistered);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnComponentRegistered);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnActorUnregistered);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnActorRegistered);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnComponentTransformChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPostEditActorMove);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnActorBoundsChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdateComponentDataAfterMove);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdateComponentData);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdateActorData);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnObjectBoundsChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UnregisterNavRelevantObject);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdateNavRelevantObject);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RegisterNavRelevantObject);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->UpdateNavigationElementBoundsDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RemoveNavigationElementDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdateNavigationElementDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->AddNavigationElementDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  return;
}

