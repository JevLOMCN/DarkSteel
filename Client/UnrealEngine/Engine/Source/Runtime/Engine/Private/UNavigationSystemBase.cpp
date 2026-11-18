// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 44

// UNavigationSystemBase @ 14737ccf0

UNavigationSystemBase * __thiscall
UNavigationSystemBase::UNavigationSystemBase(UNavigationSystemBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNavigationSystemBase__6B_;
  return this;
}

// UNavigationSystemBase @ 14737cd20

UNavigationSystemBase * __thiscall
UNavigationSystemBase::UNavigationSystemBase
          (UNavigationSystemBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNavigationSystemBase__6B_;
  return this;
}

// BuildDelegate @ 147385360

TDelegate<void___cdecl(UWorld_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::BuildDelegate(void)

{
  return &FNavigationSystem::Delegates.Build;
}

// GetAddNavigationElementDelegate @ 147397b40

TDelegate<FNavigationElementHandle___cdecl(UWorld_*,FNavigationElement_&&),FDefaultDelegateUserPolicy>
* __cdecl UNavigationSystemBase::GetAddNavigationElementDelegate(void)

{
  return &FNavigationSystem::Delegates.AddNavigationElementDelegate;
}

// GetBiggestSupportedAgentDelegate @ 147399730

TDelegate<FNavDataConfig_const_&___cdecl(UWorld_const_*),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::GetBiggestSupportedAgentDelegate(void)

{
  return &FNavigationSystem::Delegates.GetBiggestSupportedAgent;
}

// GetDefaultNavDataClassDelegate @ 14739ae70

TDelegate<TSubclassOf<AActor>___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::GetDefaultNavDataClassDelegate(void)

{
  return &FNavigationSystem::Delegates.GetDefaultNavDataClass;
}

// GetDefaultSupportedAgentDelegate @ 14739af10

TDelegate<FNavDataConfig_const_&___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::GetDefaultSupportedAgentDelegate(void)

{
  return &FNavigationSystem::Delegates.GetDefaultSupportedAgent;
}

// GetNavDataForActorDelegate @ 14739e4e0

TDelegate<INavigationDataInterface_*___cdecl(AActor_const_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::GetNavDataForActorDelegate(void)

{
  return &FNavigationSystem::Delegates.GetNavDataForActor;
}

// GetPrivateStaticClass @ 1473a0c00

UClass * __cdecl UNavigationSystemBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationSystemBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavigationSystemBase",
               &Z_Registration_Info_UClass_UNavigationSystemBase.InnerSingleton,
               StaticRegisterNativesUNavigationSystemBase,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<UNavigationSystemBase>,
               InternalVTableHelperCtorCaller<UNavigationSystemBase>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationSystemBase.InnerSingleton;
}

// GetRemoveNavigationElementDelegate @ 1473a0eb0

TDelegate<void___cdecl(UWorld_*,FNavigationElementHandle),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::GetRemoveNavigationElementDelegate(void)

{
  return &FNavigationSystem::Delegates.RemoveNavigationElementDelegate;
}

// GetSupportsDynamicChangesDelegate @ 1473a1660

TDelegate<bool___cdecl(UWorld_*),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::GetSupportsDynamicChangesDelegate(void)

{
  return &FNavigationSystem::Delegates.SupportsDynamicChangesDelegate;
}

// GetUpdateNavigationElementBoundsDelegate @ 1473a1aa0

TDelegate<void___cdecl(UWorld_*,FNavigationElementHandle,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy>
* __cdecl UNavigationSystemBase::GetUpdateNavigationElementBoundsDelegate(void)

{
  return &FNavigationSystem::Delegates.UpdateNavigationElementBoundsDelegate;
}

// GetUpdateNavigationElementDelegate @ 1473a1ab0

TDelegate<void___cdecl(UWorld_*,FNavigationElementHandle,FNavigationElement_&&),FDefaultDelegateUserPolicy>
* __cdecl UNavigationSystemBase::GetUpdateNavigationElementDelegate(void)

{
  return &FNavigationSystem::Delegates.UpdateNavigationElementDelegate;
}

// HasComponentDataDelegate @ 1473a24b0

TDelegate<bool___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::HasComponentDataDelegate(void)

{
  return &FNavigationSystem::Delegates.HasComponentData;
}

// OnActorBoundsChangedDelegate @ 1473aa2d0

TDelegate<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::OnActorBoundsChangedDelegate(void)

{
  return &FNavigationSystem::Delegates.OnActorBoundsChanged;
}

// OnActorRegisteredDelegate @ 1473aa330

TDelegate<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::OnActorRegisteredDelegate(void)

{
  return &FNavigationSystem::Delegates.OnActorRegistered;
}

// OnActorUnregisteredDelegate @ 1473aa390

TDelegate<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::OnActorUnregisteredDelegate(void)

{
  return &FNavigationSystem::Delegates.OnActorUnregistered;
}

// OnComponentBoundsChangedDelegate @ 1473aa470

TDelegate<void___cdecl(UActorComponent_&,UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_const_&),FDefaultDelegateUserPolicy>
* __cdecl UNavigationSystemBase::OnComponentBoundsChangedDelegate(void)

{
  return &FNavigationSystem::Delegates.OnComponentBoundsChanged;
}

// OnComponentRegisteredDelegate @ 1473aa4d0

TDelegate<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::OnComponentRegisteredDelegate(void)

{
  return &FNavigationSystem::Delegates.OnComponentRegistered;
}

// OnComponentTransformChangedDelegate @ 1473aa530

TDelegate<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::OnComponentTransformChangedDelegate(void)

{
  return &FNavigationSystem::Delegates.OnComponentTransformChanged;
}

// OnComponentUnregisteredDelegate @ 1473aa590

TDelegate<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::OnComponentUnregisteredDelegate(void)

{
  return &FNavigationSystem::Delegates.OnComponentUnregistered;
}

// OnNavAreaRegisteredDelegate @ 1473aa5b0

TMulticastDelegate<void___cdecl(UWorld_const_&,UClass_const_*),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::OnNavAreaRegisteredDelegate(void)

{
  return &FNavigationSystem::Delegates.OnNavAreaRegistered;
}

// OnNavAreaUnregisteredDelegate @ 1473aa5c0

TMulticastDelegate<void___cdecl(UWorld_const_&,UClass_const_*),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::OnNavAreaUnregisteredDelegate(void)

{
  return &FNavigationSystem::Delegates.OnNavAreaUnregistered;
}

// OnNavigationInitDoneStaticDelegate @ 1473aa670

TMulticastDelegate<void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::OnNavigationInitDoneStaticDelegate(void)

{
  return &FNavigationSystem::Delegates.OnNavigationInitDone;
}

// OnNavigationInitStartStaticDelegate @ 1473aa680

TMulticastDelegate<void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::OnNavigationInitStartStaticDelegate(void)

{
  return &FNavigationSystem::Delegates.OnNavigationInitStart;
}

// OnObjectBoundsChangedDelegate @ 1473aa710

TDelegate<void___cdecl(UObject_&,UE::Math::TBox<double>_const_&,TArrayView<UE::Math::TBox<double>_const_,int>),FDefaultDelegateUserPolicy>
* __cdecl UNavigationSystemBase::OnObjectBoundsChangedDelegate(void)

{
  return &FNavigationSystem::Delegates.OnObjectBoundsChanged;
}

// OnPostEditActorMoveDelegate @ 1473aa770

TDelegate<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::OnPostEditActorMoveDelegate(void)

{
  return &FNavigationSystem::Delegates.OnPostEditActorMove;
}

// RegisterComponentDelegate @ 1473afb90

TDelegate<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::RegisterComponentDelegate(void)

{
  return &FNavigationSystem::Delegates.RegisterComponent;
}

// RegisterNavRelevantObjectDelegate @ 1473afd60

TDelegate<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::RegisterNavRelevantObjectDelegate(void)

{
  return &FNavigationSystem::Delegates.RegisterNavRelevantObject;
}

// RemoveActorDataDelegate @ 1473b1a10

TDelegate<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::RemoveActorDataDelegate(void)

{
  return &FNavigationSystem::Delegates.RemoveActorData;
}

// ResetEventDelegates @ 1473b3670

void __cdecl UNavigationSystemBase::ResetEventDelegates(void)

{
  FNavigationSystem::FDelegates::FDelegates(&FNavigationSystem::Delegates);
  return;
}

// SetCoordTransform @ 1473b6770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UNavigationSystemBase::SetCoordTransform
          (Type param_1,Type param_2,TTransform<double> *param_3,bool param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  int iVar15;
  TTransform<double> *pTVar16;
  undefined4 uVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  TTransform<double> local_c8 [2];
  
  dVar3 = (param_3->Rotation).XY.m128d_f64[0];
  dVar4 = (param_3->Rotation).XY.m128d_f64[1];
  dVar5 = (param_3->Rotation).ZW.m128d_f64[0];
  dVar6 = (param_3->Rotation).ZW.m128d_f64[1];
  dVar7 = (param_3->Translation).XY.m128d_f64[0];
  dVar8 = (param_3->Translation).XY.m128d_f64[1];
  dVar9 = (param_3->Translation).ZW.m128d_f64[0];
  dVar10 = (param_3->Translation).ZW.m128d_f64[1];
  dVar11 = (param_3->Scale3D).XY.m128d_f64[0];
  dVar12 = (param_3->Scale3D).XY.m128d_f64[1];
  dVar13 = (param_3->Scale3D).ZW.m128d_f64[0];
  dVar14 = (param_3->Scale3D).ZW.m128d_f64[1];
  uVar17 = 0x551e93c4;
  pTVar16 = FNavigationSystem::FCoordTransforms::Get(&CoordTypeTransforms,param_1,param_2);
  (pTVar16->Rotation).XY.m128d_f64[0] = dVar3;
  (pTVar16->Rotation).XY.m128d_f64[1] = dVar4;
  (pTVar16->Rotation).ZW.m128d_f64[0] = dVar5;
  (pTVar16->Rotation).ZW.m128d_f64[1] = dVar6;
  (pTVar16->Translation).XY.m128d_f64[0] = dVar7;
  (pTVar16->Translation).XY.m128d_f64[1] = dVar8;
  (pTVar16->Translation).ZW.m128d_f64[0] = dVar9;
  (pTVar16->Translation).ZW.m128d_f64[1] = dVar10;
  (pTVar16->Scale3D).XY.m128d_f64[0] = dVar11;
  (pTVar16->Scale3D).XY.m128d_f64[1] = dVar12;
  (pTVar16->Scale3D).ZW.m128d_f64[0] = dVar13;
  (pTVar16->Scale3D).ZW.m128d_f64[1] = dVar14;
  if (param_4) {
    auVar20._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          *(uint *)(param_3->Scale3D).XY.m128d_f64);
    auVar20._8_4_ = _UNK_15061cc88 & *(uint *)((param_3->Scale3D).XY.m128d_f64 + 1);
    auVar20._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc);
    auVar2._8_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                    (double)CONCAT44(_UNK_15061cc8c &
                                     *(uint *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 0xc),
                                     _UNK_15061cc88 & *(uint *)((param_3->Scale3D).ZW.m128d_f64 + 1)
                                    ));
    auVar2._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                    (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                     *(uint *)((longlong)(param_3->Scale3D).ZW.m128d_f64 + 4),
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                     *(uint *)(param_3->Scale3D).ZW.m128d_f64));
    uVar18 = movmskpd(uVar17,auVar2);
    lVar19 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar20._8_8_);
    auVar1._8_4_ = (int)lVar19;
    auVar1._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar20._0_8_);
    auVar1._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    iVar15 = movmskpd((int)pTVar16,auVar1);
    if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
      local_c8[0].Rotation.XY.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      local_c8[0].Rotation.XY.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      local_c8[0].Rotation.XY.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      local_c8[0].Rotation.XY.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      local_c8[0].Rotation.ZW.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      local_c8[0].Rotation.ZW.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      local_c8[0].Rotation.ZW.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      local_c8[0].Rotation.ZW.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      local_c8[0].Translation.XY.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      local_c8[0].Translation.XY.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      local_c8[0].Translation.XY.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      local_c8[0].Translation.XY.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
      local_c8[0].Translation.ZW.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      local_c8[0].Translation.ZW.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      local_c8[0].Translation.ZW.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
      local_c8[0].Translation.ZW.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
      local_c8[0].Scale3D.XY.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
      local_c8[0].Scale3D.XY.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
      local_c8[0].Scale3D.XY.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
      local_c8[0].Scale3D.XY.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
      local_c8[0].Scale3D.ZW.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      local_c8[0].Scale3D.ZW.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      local_c8[0].Scale3D.ZW.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      local_c8[0].Scale3D.ZW.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(param_3,local_c8);
    }
    pTVar16 = FNavigationSystem::FCoordTransforms::Get(&CoordTypeTransforms,param_2,param_1);
    *(undefined4 *)(pTVar16->Rotation).XY.m128d_f64 = local_c8[0].Rotation.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(pTVar16->Rotation).XY.m128d_f64 + 4) =
         local_c8[0].Rotation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((pTVar16->Rotation).XY.m128d_f64 + 1) =
         local_c8[0].Rotation.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(pTVar16->Rotation).XY.m128d_f64 + 0xc) =
         local_c8[0].Rotation.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(pTVar16->Rotation).ZW.m128d_f64 = local_c8[0].Rotation.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(pTVar16->Rotation).ZW.m128d_f64 + 4) =
         local_c8[0].Rotation.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((pTVar16->Rotation).ZW.m128d_f64 + 1) =
         local_c8[0].Rotation.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(pTVar16->Rotation).ZW.m128d_f64 + 0xc) =
         local_c8[0].Rotation.ZW.m128d_f64[1]._4_4_;
    *(undefined4 *)(pTVar16->Translation).XY.m128d_f64 =
         local_c8[0].Translation.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(pTVar16->Translation).XY.m128d_f64 + 4) =
         local_c8[0].Translation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((pTVar16->Translation).XY.m128d_f64 + 1) =
         local_c8[0].Translation.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(pTVar16->Translation).XY.m128d_f64 + 0xc) =
         local_c8[0].Translation.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(pTVar16->Translation).ZW.m128d_f64 =
         local_c8[0].Translation.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(pTVar16->Translation).ZW.m128d_f64 + 4) =
         local_c8[0].Translation.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((pTVar16->Translation).ZW.m128d_f64 + 1) =
         local_c8[0].Translation.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(pTVar16->Translation).ZW.m128d_f64 + 0xc) =
         local_c8[0].Translation.ZW.m128d_f64[1]._4_4_;
    *(undefined4 *)(pTVar16->Scale3D).XY.m128d_f64 = local_c8[0].Scale3D.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(pTVar16->Scale3D).XY.m128d_f64 + 4) =
         local_c8[0].Scale3D.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((pTVar16->Scale3D).XY.m128d_f64 + 1) = local_c8[0].Scale3D.XY.m128d_f64[1]._0_4_
    ;
    *(undefined4 *)((longlong)(pTVar16->Scale3D).XY.m128d_f64 + 0xc) =
         local_c8[0].Scale3D.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(pTVar16->Scale3D).ZW.m128d_f64 = local_c8[0].Scale3D.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(pTVar16->Scale3D).ZW.m128d_f64 + 4) =
         local_c8[0].Scale3D.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((pTVar16->Scale3D).ZW.m128d_f64 + 1) = local_c8[0].Scale3D.ZW.m128d_f64[1]._0_4_
    ;
    *(undefined4 *)((longlong)(pTVar16->Scale3D).ZW.m128d_f64 + 0xc) =
         local_c8[0].Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  return;
}

// SetDefaultObstacleArea @ 1473b6910

void __cdecl UNavigationSystemBase::SetDefaultObstacleArea(TSubclassOf<UNavAreaBase> param_1)

{
  TObjectPtr<UClass> TVar1;
  
  if (!UE::GC::GIsIncrementalReachabilityPending) {
    FNavigationSystem::DefaultObstacleArea.Class.field0_0x0 =
         (TObjectPtr<UClass>)(TObjectPtr<UClass>)*(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0
    ;
    return;
  }
  TVar1.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  if (TVar1.field0_0x0 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
    FNavigationSystem::DefaultObstacleArea.Class.field0_0x0 =
         (TObjectPtr<UClass>)(TObjectPtr<UClass>)*(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0
    ;
    return;
  }
  FNavigationSystem::DefaultObstacleArea.Class.field0_0x0 =
       (TObjectPtr<UClass>)(TObjectPtr<UClass>)TVar1.field0_0x0;
  return;
}

// SetDefaultWalkableArea @ 1473b6970

void __cdecl UNavigationSystemBase::SetDefaultWalkableArea(TSubclassOf<UNavAreaBase> param_1)

{
  TObjectPtr<UClass> TVar1;
  
  if (!UE::GC::GIsIncrementalReachabilityPending) {
    FNavigationSystem::DefaultWalkableArea.Class.field0_0x0 =
         (TObjectPtr<UClass>)(TObjectPtr<UClass>)*(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0
    ;
    return;
  }
  TVar1.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  if (TVar1.field0_0x0 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
    FNavigationSystem::DefaultWalkableArea.Class.field0_0x0 =
         (TObjectPtr<UClass>)(TObjectPtr<UClass>)*(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0
    ;
    return;
  }
  FNavigationSystem::DefaultWalkableArea.Class.field0_0x0 =
       (TObjectPtr<UClass>)(TObjectPtr<UClass>)TVar1.field0_0x0;
  return;
}

// SetWantsComponentChangeNotifies @ 1473b8590

void __cdecl UNavigationSystemBase::SetWantsComponentChangeNotifies(bool param_1)

{
  FNavigationSystem::bWantsComponentChangeNotifies = param_1;
  return;
}

// StaticRegisterNativesUNavigationSystemBase @ 1473b8970

void __cdecl UNavigationSystemBase::StaticRegisterNativesUNavigationSystemBase(void)

{
  return;
}

// UnregisterComponentDelegate @ 1473bb590

TDelegate<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::UnregisterComponentDelegate(void)

{
  return &FNavigationSystem::Delegates.UnregisterComponent;
}

// UnregisterNavRelevantObjectDelegate @ 1473bb5f0

TDelegate<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::UnregisterNavRelevantObjectDelegate(void)

{
  return &FNavigationSystem::Delegates.UnregisterNavRelevantObject;
}

// UpdateActorAndComponentDataDelegate @ 1473bb790

TDelegate<void___cdecl(AActor_&,bool),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::UpdateActorAndComponentDataDelegate(void)

{
  return &FNavigationSystem::Delegates.UpdateActorAndComponentData;
}

// UpdateActorDataDelegate @ 1473bb7f0

TDelegate<void___cdecl(AActor_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::UpdateActorDataDelegate(void)

{
  return &FNavigationSystem::Delegates.UpdateActorData;
}

// UpdateComponentDataAfterMoveDelegate @ 1473bbdc0

TDelegate<void___cdecl(USceneComponent_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::UpdateComponentDataAfterMoveDelegate(void)

{
  return &FNavigationSystem::Delegates.UpdateComponentDataAfterMove;
}

// UpdateComponentDataDelegate @ 1473bbdd0

TDelegate<void___cdecl(UActorComponent_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::UpdateComponentDataDelegate(void)

{
  return &FNavigationSystem::Delegates.UpdateComponentData;
}

// UpdateNavRelevantObjectDelegate @ 1473bc500

TDelegate<void___cdecl(UObject_&),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::UpdateNavRelevantObjectDelegate(void)

{
  return &FNavigationSystem::Delegates.UpdateNavRelevantObject;
}

// VerifyNavigationRenderingComponentsDelegate @ 1473bd940

TDelegate<void___cdecl(UWorld_&,bool),FDefaultDelegateUserPolicy> * __cdecl
UNavigationSystemBase::VerifyNavigationRenderingComponentsDelegate(void)

{
  return &FNavigationSystem::Delegates.VerifyNavigationRenderingComponents;
}

