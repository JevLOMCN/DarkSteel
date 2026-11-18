// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 6

// FDelegatesInitializer @ 146d72bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDelegatesInitializer * __thiscall
`UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer
          (void *this)

{
  TDelegate<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
  *this_01;
  TDelegate<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy> *this_02;
  TDelegate<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
  *this_03;
  TDelegate<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy>
  *this_04;
  TDelegate<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> *pTVar3;
  TDelegate<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy>
  *this_05;
  TDelegate<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> *pTVar4;
  TDelegate<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy> *pTVar5;
  TDelegate<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy> *pTVar6;
  TDelegate<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy> *this_06;
  TDelegate<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy> *this_07;
  TDelegate<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy> *this_08;
  TDelegate<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy> *this_09;
  TDelegate<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
  *this_10;
  TDelegate<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy> *this_11;
  TDelegate<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy> *this_12;
  TDelegate<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy> *this_13;
  TDelegate<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy> *this_14;
  undefined1 local_res8 [8];
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  this_00 = UNavigationSystemBase::GetSupportsDynamicChangesDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_38);
  local_20 = &this_00->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = UNavigationSystemV1::SupportsDynamicChanges;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  this_01 = UNavigationSystemBase::GetAddNavigationElementDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
             (FWriteAccessScope *)&local_38);
  local_20 = &this_01->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFNavigationElementHandle__PEAVUWorld____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AUFNavigationElementHandle__PEAVUWorld____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = UNavigationSystemV1::AddNavigationElement;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  this_02 = UNavigationSystemBase::GetRemoveNavigationElementDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,
             (FWriteAccessScope *)&local_38);
  local_20 = &this_02->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFNavigationElementHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld__UFNavigationElementHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = UNavigationSystemV1::RemoveNavigationElement;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  this_03 = UNavigationSystemBase::GetUpdateNavigationElementDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_03,
             (FWriteAccessScope *)&local_38);
  local_20 = &this_03->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFNavigationElementHandle____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld__UFNavigationElementHandle____QEAUFNavigationElement___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = UNavigationSystemV1::OnNavigationElementUpdated;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  this_04 = UNavigationSystemBase::GetUpdateNavigationElementBoundsDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_04,
             (FWriteAccessScope *)&local_38);
  local_20 = &this_04->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__UFNavigationElementHandle__AEBU__TBox_N_Math_UE__V__TArrayView___CBU__TBox_N_Math_UE__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar3 = UNavigationSystemBase::RegisterNavRelevantObjectDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar3,
             (FWriteAccessScope *)&local_38);
  local_20 = &pTVar3->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar3 = UNavigationSystemBase::UpdateNavRelevantObjectDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar3,
             (FWriteAccessScope *)&local_38);
  local_20 = &pTVar3->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = UNavigationSystemV1::UpdateNavRelevantObjectInNavOctree;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar3 = UNavigationSystemBase::UnregisterNavRelevantObjectDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar3,
             (FWriteAccessScope *)&local_38);
  local_20 = &pTVar3->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  this_05 = UNavigationSystemBase::OnObjectBoundsChangedDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_05,
             (FWriteAccessScope *)&local_38);
  local_20 = &this_05->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUObject__AEBU__TBox_N_Math_UE__V__TArrayView___CBU__TBox_N_Math_UE__H___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_4>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar4 = UNavigationSystemBase::UpdateActorDataDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar4,
             (FWriteAccessScope *)&local_38);
  local_20 = &pTVar4->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = UNavigationSystemV1::UpdateActorInNavOctree;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar5 = UNavigationSystemBase::UpdateComponentDataDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar5,
             (FWriteAccessScope *)&local_38);
  local_20 = &pTVar5->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = UNavigationSystemV1::UpdateComponentInNavOctree;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar6 = UNavigationSystemBase::UpdateComponentDataAfterMoveDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar6,
             (FWriteAccessScope *)&local_38);
  local_20 = &pTVar6->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUSceneComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_5>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar4 = UNavigationSystemBase::OnActorBoundsChangedDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar4,
             (FWriteAccessScope *)&local_38);
  local_20 = &pTVar4->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_6>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar4 = UNavigationSystemBase::OnPostEditActorMoveDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar4,
             (FWriteAccessScope *)&local_38);
  local_20 = &pTVar4->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_7>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar6 = UNavigationSystemBase::OnComponentTransformChangedDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar6,
             (FWriteAccessScope *)&local_38);
  local_20 = &pTVar6->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUSceneComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_8>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar4 = UNavigationSystemBase::OnActorRegisteredDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar4,
             (FWriteAccessScope *)&local_38);
  local_20 = &pTVar4->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_9>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar4 = UNavigationSystemBase::OnActorUnregisteredDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar4,
             (FWriteAccessScope *)&local_38);
  local_20 = &pTVar4->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_10>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar5 = UNavigationSystemBase::OnComponentRegisteredDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar5,
             (FWriteAccessScope *)&local_38);
  local_20 = &pTVar5->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_11>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar5 = UNavigationSystemBase::OnComponentUnregisteredDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar5,
             (FWriteAccessScope *)&local_38);
  local_20 = &pTVar5->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_12>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar5 = UNavigationSystemBase::RegisterComponentDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar5,
             (FWriteAccessScope *)&local_38);
  local_20 = &pTVar5->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_13>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar5 = UNavigationSystemBase::UnregisterComponentDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar5,
             (FWriteAccessScope *)&local_38);
  local_20 = &pTVar5->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_14>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pTVar4 = UNavigationSystemBase::RemoveActorDataDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar4,
             (FWriteAccessScope *)&local_38);
  local_20 = &pTVar4->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(AActor_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_15>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  this_06 = UNavigationSystemBase::HasComponentDataDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_06,
             (FWriteAccessScope *)&local_38);
  local_20 = &this_06->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_16>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  this_07 = UNavigationSystemBase::GetDefaultSupportedAgentDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_07,
             (FWriteAccessScope *)&local_38);
  local_20 = &this_07->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AAEBUFNavDataConfig__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AAEBUFNavDataConfig__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = UNavigationSystemV1::GetDefaultSupportedAgent;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  this_08 = UNavigationSystemBase::GetBiggestSupportedAgentDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_08,
             (FWriteAccessScope *)&local_38);
  local_20 = &this_08->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AAEBUFNavDataConfig__PEBVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AAEBUFNavDataConfig__PEBVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = UNavigationSystemV1::GetBiggestSupportedAgent;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  this_09 = UNavigationSystemBase::UpdateActorAndComponentDataDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_09,
             (FWriteAccessScope *)&local_38);
  local_20 = &this_09->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVAActor___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVAActor___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = UNavigationSystemV1::UpdateActorAndComponentsInNavOctree;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  this_10 = UNavigationSystemBase::OnComponentBoundsChangedDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_10,
             (FWriteAccessScope *)&local_38);
  local_20 = &this_10->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUActorComponent__AEBU__TBox_N_Math_UE__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_17>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  this_11 = UNavigationSystemBase::GetNavDataForActorDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_11,
             (FWriteAccessScope *)&local_38);
  local_20 = &this_11->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6APEAVINavigationDataInterface__AEBVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6APEAVINavigationDataInterface__AEBVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = UNavigationSystemV1::GetNavDataForActor;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  this_12 = UNavigationSystemBase::GetDefaultNavDataClassDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_12,
             (FWriteAccessScope *)&local_38);
  local_20 = &this_12->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSubclassOf_VAActor____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_18>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  this_13 = UNavigationSystemBase::VerifyNavigationRenderingComponentsDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_13,
             (FWriteAccessScope *)&local_38);
  local_20 = &this_13->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUWorld___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_19>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  this_14 = UNavigationSystemBase::BuildDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_14,
             (FWriteAccessScope *)&local_38);
  local_20 = &this_14->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy,``UNavigationSystemV1::UNavigationSystemV1'::`2'::FDelegatesInitializer::FDelegatesInitializer'::`2'::<lambda_20>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TMulticastDelegateRegistration<void___cdecl(UObject_const_*,FName_const_&,enum_ELogVerbosity::Type,UE::Math::TBox<double>_const_&,UWorld_const_&,FVisualLogEntry_&),FDefaultDelegateUserPolicy>
  ::AddStatic<>(&FVisualLogger::NavigationDataDumpDelegate,
                (_func___cdecl_void_UObject_ptr_FName_ptr_Type_TBox<double>_ptr_UWorld_ptr_FVisualLogEntry_ptr
                 *)local_res8);
  return this;
}

// operator() @ 146d7a790

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
``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::
__l2::<lambda_16>::operator()(void *this,UActorComponent *param_1)

{
  int iVar1;
  FWeakObjectPtr FVar2;
  bool bVar3;
  UWorld *pUVar4;
  UClass *pUVar5;
  FOctreeElementId2 *pFVar6;
  UNavigationSystemBase *pUVar7;
  UActorComponent *local_res10 [3];
  FWeakObjectPtr local_38;
  undefined8 uStack_30;
  FNavigationElementHandle local_28 [2];
  
  pUVar4 = param_1->WorldPrivate;
  if (((pUVar4 != (UWorld *)0x0) ||
      (pUVar4 = UActorComponent::GetWorld_Uncached(param_1), pUVar4 != (UWorld *)0x0)) &&
     (pUVar7 = (pUVar4->NavigationSystem).field0_0x0.DebugPtr,
     pUVar7 != (UNavigationSystemBase *)0x0)) {
    pUVar5 = UNavigationSystemV1::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_146d7a7e8;
  }
  pUVar7 = (UNavigationSystemBase *)0x0;
LAB_146d7a7e8:
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  local_res10[0] = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_38,(FObjectPtr)local_res10);
  FVar2 = local_38;
  uStack_30 = 0xffffffffffffffff;
  if (pUVar7 != (UNavigationSystemBase *)0x0) {
    local_28[0].OwnerUObject.WeakPtr = local_38;
    local_28[0].SubElementId = 0xffffffffffffffff;
    if ((*(longlong *)&pUVar7[0x16].field_0x18 != 0) &&
       (pFVar6 = TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                 ::Find((TMapBase<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
                         *)(*(longlong *)&pUVar7[0x16].field_0x18 + 0xf8),local_28),
       pFVar6 != (FOctreeElementId2 *)0x0)) {
      return true;
    }
    local_28[0].OwnerUObject.WeakPtr = FVar2;
    local_28[0].SubElementId = 0xffffffffffffffff;
    bVar3 = FNavigationOctreeController::HasPendingUpdateForElement
                      ((FNavigationOctreeController *)&pUVar7[0x12].field_0x18,local_28);
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// operator() @ 146d7a8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::
__l2::<lambda_17>::operator()
          (void *this,UActorComponent *param_1,TBox<double> *param_2,TBox<double> *param_3)

{
  int iVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UNavigationSystemV1 *this_00;
  undefined1 auStack_a8 [32];
  TArrayView<UE::Math::TBox<double>_const_,int> local_88;
  FWeakObjectPtr local_78;
  undefined8 uStack_70;
  FNavigationElementHandle local_68;
  TVector<double>_u_0 local_58;
  double dStack_40;
  double local_38;
  double dStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pUVar2 = param_1->WorldPrivate;
  if (pUVar2 == (UWorld *)0x0) {
    pUVar2 = UActorComponent::GetWorld_Uncached(param_1);
    if (pUVar2 != (UWorld *)0x0) goto LAB_146d7a8f3;
  }
  else {
LAB_146d7a8f3:
    this_00 = (UNavigationSystemV1 *)(pUVar2->NavigationSystem).field0_0x0.DebugPtr;
    if (this_00 != (UNavigationSystemV1 *)0x0) {
      pUVar3 = UNavigationSystemV1::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) goto LAB_146d7a924;
    }
  }
  this_00 = (UNavigationSystemV1 *)0x0;
LAB_146d7a924:
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    local_58._s_0.X = (param_3->Min).field0_0x0._s_0.X;
    local_58._s_0.Y = (param_3->Min).field0_0x0._s_0.Y;
    local_88.DataPtr = (TBox<double> *)&local_58;
    local_58._s_0.Z = (param_3->Min).field0_0x0._s_0.Z;
    dStack_40 = (param_3->Max).field0_0x0._s_0.X;
    local_88.ArrayNum = 1;
    local_38 = (param_3->Max).field0_0x0._s_0.Y;
    dStack_30 = (param_3->Max).field0_0x0._s_0.Z;
    local_28._0_1_ = param_3->IsValid;
    local_28._1_1_ = param_3->Pad[0];
    local_28._2_1_ = param_3->Pad[1];
    local_28._3_1_ = param_3->Pad[2];
    local_28._4_1_ = param_3->Pad[3];
    local_28._5_1_ = param_3->Pad[4];
    local_28._6_1_ = param_3->Pad[5];
    local_28._7_1_ = param_3->Pad[6];
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_78.ObjectIndex = 0;
    local_78.ObjectSerialNumber = 0;
    local_68.OwnerUObject.WeakPtr = (FWeakObjectPtr)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_68);
    uStack_70 = 0xffffffffffffffff;
    local_68.OwnerUObject.WeakPtr = local_78;
    local_68.SubElementId = 0xffffffffffffffff;
    UNavigationSystemV1::UpdateNavOctreeElementBounds(this_00,&local_68,param_2,&local_88);
  }
  return;
}

// operator() @ 146d7aa10

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
``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::
__l2::<lambda_19>::operator()(void *this,UWorld *param_1,bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  ANavigationData *pAVar3;
  UPrimitiveComponent *this_00;
  UNavigationSystemV1 *this_01;
  
  if (param_1 == (UWorld *)0x0) {
    return;
  }
  this_01 = (UNavigationSystemV1 *)(param_1->NavigationSystem).field0_0x0.DebugPtr;
  if (this_01 != (UNavigationSystemV1 *)0x0) {
    pUVar2 = UNavigationSystemV1::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_01->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_146d7aa58;
  }
  this_01 = (UNavigationSystemV1 *)0x0;
LAB_146d7aa58:
  if (this_01 != (UNavigationSystemV1 *)0x0) {
    pAVar3 = UNavigationSystemV1::GetDefaultNavDataInstance(this_01,DontCreate);
    if (pAVar3 == (ANavigationData *)0x0) {
      if (2 < (byte)LogNavigation._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
        return;
      }
    }
    else if ((pAVar3->RenderingComp).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0) {
      this_00 = (UPrimitiveComponent *)(**(code **)(pAVar3->_padding_ + 0x8e0))(pAVar3);
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (this_00 == (UPrimitiveComponent *)0x0)) {
        (pAVar3->RenderingComp).field0_0x0.DebugPtr = this_00;
        if (this_00 == (UPrimitiveComponent *)0x0) {
          return;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)this_00);
        (pAVar3->RenderingComp).field0_0x0.DebugPtr = this_00;
      }
      USceneComponent::SetVisibility((USceneComponent *)this_00,param_2,DirtyOnly);
      UActorComponent::RegisterComponent
                ((UActorComponent *)(pAVar3->RenderingComp).field0_0x0.DebugPtr);
    }
  }
  return;
}

// operator() @ 146d7c0d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::
__l2::<lambda_4>::operator()
          (void *this,UObject *param_1,TBox<double> *param_2,
          TArrayView<UE::Math::TBox<double>_const_,int> *param_3)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  UNavigationSystemV1 *this_00;
  UObject *local_res10;
  FWeakObjectPtr local_38;
  undefined8 uStack_30;
  TArrayView<UE::Math::TBox<double>_const_,int> local_28;
  FNavigationElementHandle local_18;
  
  lVar2 = (**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  if (lVar2 == 0) {
    return;
  }
  this_00 = *(UNavigationSystemV1 **)(lVar2 + 0x1a0);
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    pUVar3 = UNavigationSystemV1::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146d7c133;
  }
  this_00 = (UNavigationSystemV1 *)0x0;
LAB_146d7c133:
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res10);
    local_28.DataPtr = param_3->DataPtr;
    local_28.ArrayNum = param_3->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
    uStack_30 = 0xffffffffffffffff;
    local_18.OwnerUObject.WeakPtr = local_38;
    local_18.SubElementId = 0xffffffffffffffff;
    UNavigationSystemV1::UpdateNavOctreeElementBounds(this_00,&local_18,param_2,&local_28);
  }
  return;
}

// operator() @ 146d7c1d0

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
``UNavigationSystemV1::UNavigationSystemV1'::__l2::FDelegatesInitializer::FDelegatesInitializer'::
__l2::<lambda_7>::operator()(void *this,AActor *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_18;
  
  UNavigationSystemV1::UpdateNavOctreeBounds(param_1);
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  AActor::GetAttachedActors(param_1,&local_18,true,false);
  uVar4 = 0;
  if (0 < local_18.ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < local_18.ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UNavigationSystemV1::UpdateNavOctreeBounds
                (*(AActor **)(local_18.AllocatorInstance.Data + lVar5));
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < local_18.ArrayNum);
  }
  if ((bool)param_1->bHasRegisteredAllComponents) {
    UNavigationSystemV1::UpdateActorAndComponentsInNavOctree(param_1,true);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

