// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 38

// GetOrCreateErrorInterpolationData<FProxyInterpolationError> @ 1440c28d0

FProxyInterpolationError * __thiscall
Chaos::FClusterUnionPhysicsProxy::GetOrCreateErrorInterpolationData<FProxyInterpolationError>
          (FClusterUnionPhysicsProxy *this)

{
  int iVar1;
  FProxyInterpolationBase *pFVar2;
  undefined8 uVar3;
  double dVar4;
  int iVar5;
  FProxyInterpolationError *pFVar6;
  FProxyInterpolationError *pFVar7;
  
  pFVar2 = (this->InterpolationData).Ptr;
  if (pFVar2 == (FProxyInterpolationBase *)0x0) {
    pFVar6 = ::operator_new(0xa0);
    pFVar7 = (FProxyInterpolationError *)0x0;
    if (pFVar6 != (FProxyInterpolationError *)0x0) {
      *(undefined4 *)&pFVar6->field_0x8 = 0xffffffff;
      *(undefined ***)pFVar6 = &___7FProxyInterpolationError__6B_;
      *(undefined8 *)&pFVar6->field_0xc = 0;
      pFVar6->SimTicks = 0;
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pFVar6->EndDecayTick = 0;
      *(double *)&pFVar6->ErrorX = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)&(pFVar6->ErrorX).field_0x8 = uVar3;
      *(double *)&(pFVar6->ErrorX).field_0x10 =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      *(double *)&pFVar6->ErrorXPrev = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)&(pFVar6->ErrorXPrev).field_0x8 = uVar3;
      *(double *)&(pFVar6->ErrorXPrev).field_0x10 =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar4 = UE::Math::TQuat<double>::Identity.Y;
      (pFVar6->ErrorR).X = UE::Math::TQuat<double>::Identity.X;
      (pFVar6->ErrorR).Y = dVar4;
      dVar4 = UE::Math::TQuat<double>::Identity.W;
      (pFVar6->ErrorR).Z = UE::Math::TQuat<double>::Identity.Z;
      (pFVar6->ErrorR).W = dVar4;
      dVar4 = UE::Math::TQuat<double>::Identity.Y;
      (pFVar6->ErrorRPrev).X = UE::Math::TQuat<double>::Identity.X;
      (pFVar6->ErrorRPrev).Y = dVar4;
      dVar4 = UE::Math::TQuat<double>::Identity.W;
      (pFVar6->ErrorRPrev).Z = UE::Math::TQuat<double>::Identity.Z;
      (pFVar6->ErrorRPrev).W = dVar4;
      (pFVar6->ErrorInterpolationSettings).Ptr = (FErrorInterpolationSettings *)0x0;
      pFVar7 = pFVar6;
    }
  }
  else {
    iVar5 = (**(code **)(pFVar2->_padding_ + 8))();
    if (iVar5 == 1) goto LAB_1440c2a6a;
    pFVar2 = (this->InterpolationData).Ptr;
    iVar5 = pFVar2->InterpChannel_External;
    iVar1 = pFVar2->PullDataInterpIdx_External;
    pFVar6 = ::operator_new(0xa0);
    pFVar7 = (FProxyInterpolationError *)0x0;
    if (pFVar6 != (FProxyInterpolationError *)0x0) {
      *(int *)&pFVar6->field_0x8 = iVar1;
      *(undefined ***)pFVar6 = &___7FProxyInterpolationError__6B_;
      *(int *)&pFVar6->field_0xc = iVar5;
      pFVar6->LastSimTick = 0;
      pFVar6->SimTicks = 0;
      pFVar6->EndDecayTick = 0;
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      *(double *)&pFVar6->ErrorX = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)&(pFVar6->ErrorX).field_0x8 = uVar3;
      *(double *)&(pFVar6->ErrorX).field_0x10 =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      *(double *)&pFVar6->ErrorXPrev = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)&(pFVar6->ErrorXPrev).field_0x8 = uVar3;
      *(double *)&(pFVar6->ErrorXPrev).field_0x10 =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar4 = UE::Math::TQuat<double>::Identity.Y;
      (pFVar6->ErrorR).X = UE::Math::TQuat<double>::Identity.X;
      (pFVar6->ErrorR).Y = dVar4;
      dVar4 = UE::Math::TQuat<double>::Identity.W;
      (pFVar6->ErrorR).Z = UE::Math::TQuat<double>::Identity.Z;
      (pFVar6->ErrorR).W = dVar4;
      dVar4 = UE::Math::TQuat<double>::Identity.Y;
      (pFVar6->ErrorRPrev).X = UE::Math::TQuat<double>::Identity.X;
      (pFVar6->ErrorRPrev).Y = dVar4;
      dVar4 = UE::Math::TQuat<double>::Identity.W;
      (pFVar6->ErrorRPrev).Z = UE::Math::TQuat<double>::Identity.Z;
      (pFVar6->ErrorRPrev).W = dVar4;
      (pFVar6->ErrorInterpolationSettings).Ptr = (FErrorInterpolationSettings *)0x0;
      pFVar7 = pFVar6;
    }
  }
  pFVar2 = (this->InterpolationData).Ptr;
  (this->InterpolationData).Ptr = (FProxyInterpolationBase *)pFVar7;
  if (pFVar2 == (FProxyInterpolationBase *)0x0) {
    return pFVar7;
  }
  (**(code **)pFVar2->_padding_)(pFVar2,1);
LAB_1440c2a6a:
  return (FProxyInterpolationError *)(this->InterpolationData).Ptr;
}

// <lambda_1> @ 1440ca700

<lambda_1> * __thiscall
`Chaos::FClusterUnionPhysicsProxy::RemovePhysicsObjects_External'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  undefined8 *puVar1;
  TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
  *pTVar2;
  undefined1 *_Src;
  
  puVar1 = (undefined8 *)((longlong)this + 8);
  *(FClusterUnionPhysicsProxy **)this = param_1->__this;
  *puVar1 = 0;
  pTVar2 = &param_1->Objects;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x34) = 0x80;
  *(undefined4 *)((longlong)this + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  if ((TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
       *)puVar1 != pTVar2) {
    *puVar1 = *(undefined8 *)&pTVar2->Elements;
    *(undefined8 *)&pTVar2->Elements = 0;
    *(undefined4 *)((longlong)this + 0x10) = *(undefined4 *)&(param_1->Objects).Elements.field_0x8;
    _Src = &(param_1->Objects).Elements.field_0x10;
    *(undefined4 *)((longlong)this + 0x14) = *(undefined4 *)&(param_1->Objects).Elements.field_0xc;
    *(undefined8 *)&(param_1->Objects).Elements.field_0x8 = 0;
    if ((undefined1 *)((longlong)this + 0x18) != _Src) {
      if (*(longlong *)&(param_1->Objects).Elements.field_0x20 == 0) {
        memmove((undefined1 *)((longlong)this + 0x18),_Src,0x10);
      }
      if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)this + 0x28));
      }
      *(undefined8 *)((longlong)this + 0x28) =
           *(undefined8 *)&(param_1->Objects).Elements.field_0x20;
      *(undefined8 *)&(param_1->Objects).Elements.field_0x20 = 0;
      *(undefined4 *)((longlong)this + 0x30) =
           *(undefined4 *)&(param_1->Objects).Elements.field_0x28;
      *(undefined4 *)((longlong)this + 0x34) =
           *(undefined4 *)&(param_1->Objects).Elements.field_0x2c;
      *(undefined8 *)&(param_1->Objects).Elements.field_0x28 = 0;
    }
    *(undefined4 *)((longlong)this + 0x38) = *(undefined4 *)&(param_1->Objects).Elements.field_0x30;
    *(undefined4 *)((longlong)this + 0x3c) = *(undefined4 *)&(param_1->Objects).Elements.field_0x34;
    *(undefined4 *)&(param_1->Objects).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Objects).Elements.field_0x34 = 0;
  }
  if ((param_1->Objects).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)((longlong)this + 0x40) = *(undefined4 *)(param_1->Objects).Hash.InlineData;
  }
  if (*(void **)((longlong)this + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x48));
  }
  *(ForElementType<FSetElementId> *)((longlong)this + 0x48) = (param_1->Objects).Hash.SecondaryData;
  (param_1->Objects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(int *)((longlong)this + 0x50) = (param_1->Objects).HashSize;
  (param_1->Objects).HashSize = 0;
  return this;
}

// FClusterUnionPhysicsProxy @ 1440cac80

/* WARNING: Type propagation algorithm not settling */

FClusterUnionPhysicsProxy * __thiscall
Chaos::FClusterUnionPhysicsProxy::FClusterUnionPhysicsProxy
          (FClusterUnionPhysicsProxy *this,UObject *param_1,FClusterCreationParameters *param_2,
          FClusterUnionInitData *param_3)

{
  TUniquePtr<FProxyInterpolationBase,TDefaultDelete<FProxyInterpolationBase>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  double dVar4;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined6 uVar12;
  bool bVar13;
  FProxyInterpolationBase *pFVar14;
  FClusterUnionPhysicsProxy *pFVar15;
  undefined8 *puVar16;
  FProxyInterpolationBase *pFVar17;
  FProxyInterpolationBase *pFVar18;
  int *piVar19;
  undefined8 local_38 [2];
  
  pFVar14 = ::operator_new(0xb0);
  pFVar17 = (FProxyInterpolationBase *)0x0;
  if (pFVar14 == (FProxyInterpolationBase *)0x0) {
    pFVar18 = (FProxyInterpolationBase *)&DAT_00000010;
    piVar19 = (int *)&DAT_00000008;
    pFVar14 = pFVar17;
  }
  else {
    pFVar14->PullDataInterpIdx_External = 1;
    pFVar14->InterpChannel_External = 1;
    pFVar14->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFClusterUnionProxyTimestamp___00_SharedPointerInternals__6B_
    ;
    memset(pFVar14 + 1,0,0xa0);
    *(undefined4 *)&pFVar14[3]._padding_ = 0xffffffff;
    pFVar18 = pFVar14 + 1;
    *(undefined4 *)&pFVar14[6]._padding_ = 0xffffffff;
    pFVar14[8].PullDataInterpIdx_External = -1;
    pFVar14[10].PullDataInterpIdx_External = -1;
    if ((pFVar18 == (FProxyInterpolationBase *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      pFVar15 = (FClusterUnionPhysicsProxy *)(*pcVar3)();
      return pFVar15;
    }
    piVar19 = &pFVar14->PullDataInterpIdx_External;
    LOCK();
    *piVar19 = *piVar19 + 1;
    UNLOCK();
  }
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IPhysicsProxyBase__6B_;
  this->_padding_ = (longlong)pFVar18;
  this->_padding_ = (longlong)param_1;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xc;
  this->_padding_ = (longlong)pFVar14;
  if (pFVar14 != (FProxyInterpolationBase *)0x0) {
    LOCK();
    *piVar19 = *piVar19 + 1;
    UNLOCK();
  }
  this->_padding_ = 0;
  this->_padding_ = -1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  this->bIsInitializedOnPhysicsThread = false;
  this->bEnableStrainOnCollision_Internal = true;
  this->_padding_ = (longlong)&___7FClusterUnionPhysicsProxy_Chaos__6B_;
  iVar7 = param_2->MaxNumConnections;
  bVar13 = param_2->bCleanCollisionParticles;
  bVar8 = param_2->bCopyCollisionParticles;
  bVar9 = param_2->bGenerateConnectionGraph;
  uVar10 = param_2->field_0xf;
  (this->ClusterParameters).CoillisionThicknessPercent = param_2->CoillisionThicknessPercent;
  (this->ClusterParameters).MaxNumConnections = iVar7;
  (this->ClusterParameters).bCleanCollisionParticles = bVar13;
  (this->ClusterParameters).bCopyCollisionParticles = bVar8;
  (this->ClusterParameters).bGenerateConnectionGraph = bVar9;
  (this->ClusterParameters).field_0xf = uVar10;
  uVar11 = *(undefined4 *)&param_2->field_0x14;
  dVar4 = param_2->ConnectionGraphBoundsFilteringMargin;
  (this->ClusterParameters).ConnectionMethod = param_2->ConnectionMethod;
  *(undefined4 *)&(this->ClusterParameters).field_0x14 = uVar11;
  (this->ClusterParameters).ConnectionGraphBoundsFilteringMargin = dVar4;
  pTVar5 = param_2->ClusterParticleHandle;
  (this->ClusterParameters).CollisionParticles = param_2->CollisionParticles;
  (this->ClusterParameters).ClusterParticleHandle = pTVar5;
  uVar6 = *(undefined8 *)&(param_2->Scale).field_0x8;
  *(undefined8 *)&(this->ClusterParameters).Scale = *(undefined8 *)&param_2->Scale;
  *(undefined8 *)&(this->ClusterParameters).Scale.field_0x8 = uVar6;
  bVar13 = param_2->bIsAnchored;
  bVar8 = param_2->bEnableStrainOnCollision;
  uVar12 = *(undefined6 *)&param_2->field_0x4a;
  *(undefined8 *)&(this->ClusterParameters).Scale.field_0x10 =
       *(undefined8 *)&(param_2->Scale).field_0x10;
  (this->ClusterParameters).bIsAnchored = bVar13;
  (this->ClusterParameters).bEnableStrainOnCollision = bVar8;
  *(undefined6 *)&(this->ClusterParameters).field_0x4a = uVar12;
  (this->InitData).UserData = param_3->UserData;
  dVar4 = (param_3->InitialTransform).Rotation.XY.m128d_f64[1];
  (this->InitData).InitialTransform.Rotation.XY.m128d_f64[0] =
       (param_3->InitialTransform).Rotation.XY.m128d_f64[0];
  (this->InitData).InitialTransform.Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_3->InitialTransform).Rotation.ZW.m128d_f64[1];
  (this->InitData).InitialTransform.Rotation.ZW.m128d_f64[0] =
       (param_3->InitialTransform).Rotation.ZW.m128d_f64[0];
  (this->InitData).InitialTransform.Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_3->InitialTransform).Translation.XY.m128d_f64[1];
  (this->InitData).InitialTransform.Translation.XY.m128d_f64[0] =
       (param_3->InitialTransform).Translation.XY.m128d_f64[0];
  (this->InitData).InitialTransform.Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_3->InitialTransform).Translation.ZW.m128d_f64[1];
  (this->InitData).InitialTransform.Translation.ZW.m128d_f64[0] =
       (param_3->InitialTransform).Translation.ZW.m128d_f64[0];
  (this->InitData).InitialTransform.Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_3->InitialTransform).Scale3D.XY.m128d_f64[1];
  (this->InitData).InitialTransform.Scale3D.XY.m128d_f64[0] =
       (param_3->InitialTransform).Scale3D.XY.m128d_f64[0];
  (this->InitData).InitialTransform.Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_3->InitialTransform).Scale3D.ZW.m128d_f64[1];
  (this->InitData).InitialTransform.Scale3D.ZW.m128d_f64[0] =
       (param_3->InitialTransform).Scale3D.ZW.m128d_f64[0];
  (this->InitData).InitialTransform.Scale3D.ZW.m128d_f64[1] = dVar4;
  (this->InitData).ActorId = param_3->ActorId;
  (this->InitData).ComponentId = param_3->ComponentId;
  (this->InitData).bCheckConnectivity = param_3->bCheckConnectivity;
  (this->InitData).bUnbreakable = param_3->bUnbreakable;
  (this->InitData).bGenerateConnectivityEdges = param_3->bGenerateConnectivityEdges;
  (this->InitData).GravityGroupOverride = param_3->GravityGroupOverride;
  (this->InitData).bCCDEnabled = param_3->bCCDEnabled;
  (this->InitData).bMACDEnabled = param_3->bMACDEnabled;
  (this->InitData).DebugName.Object = (param_3->DebugName).Object;
  pTVar2 = (param_3->DebugName).SharedReferenceCount.ReferenceController;
  (this->InitData).DebugName.SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->InterpolationData;
  (this->PhysicsObject).Ptr = (FPhysicsObject *)0x0;
  pTVar1->Ptr = (FProxyInterpolationBase *)0x0;
  (this->Particle_External).Ptr = (TPBDRigidParticle<double,3> *)0x0;
  (this->SyncedData_External).bIsAnchored = true;
  (this->SyncedData_External).bDidSyncGeometry = false;
  (this->SyncedData_External).ChildParticles.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SyncedData_External).ChildParticles.ArrayNum = 0;
  (this->SyncedData_External).ChildParticles.ArrayMax = 0;
  this->Particle_Internal = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  this->ClusterUnionIndex = -1;
  (this->GeometryChildParticles_External).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometryChildParticles_External).ArrayNum = 0;
  (this->GeometryChildParticles_External).ArrayMax = 0;
  pFVar14 = ::operator_new(0x10);
  if (pFVar14 != (FProxyInterpolationBase *)0x0) {
    pFVar14->PullDataInterpIdx_External = -1;
    pFVar14->_padding_ = (longlong)&___7FProxyInterpolationBase__6B_;
    pFVar14->InterpChannel_External = 0;
    pFVar17 = pFVar14;
  }
  if (pTVar1 == (TUniquePtr<FProxyInterpolationBase,TDefaultDelete<FProxyInterpolationBase>_> *)
                local_38) {
    if (pFVar17 == (FProxyInterpolationBase *)0x0) {
      return this;
    }
    puVar16 = (undefined8 *)pFVar17->_padding_;
  }
  else {
    pFVar14 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar17;
    if (pFVar14 == (FProxyInterpolationBase *)0x0) {
      return this;
    }
    puVar16 = (undefined8 *)pFVar14->_padding_;
    pFVar17 = pFVar14;
  }
  (*(code *)*puVar16)(pFVar17,1);
  return this;
}

// operator() @ 1440cdb10

void __thiscall
`Chaos::FClusterUnionPhysicsProxy::AddPhysicsObjects_External'::__l2::<lambda_1>::operator()
          (void *this)

{
  int iVar1;
  longlong lVar2;
  FPhysicsObject **ppFVar3;
  code *pcVar4;
  bool bVar5;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FReadPhysicsObjectInterface<1> local_res8 [8];
  undefined4 uStack_2c;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_28;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_res8[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
  if (((*(longlong *)this != 0) && (lVar2 = *(longlong *)(*(longlong *)this + 8), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0xbd0), lVar2 != 0)) {
    ppFVar3 = *(FPhysicsObject ***)((longlong)this + 8);
    iVar1 = *(int *)((longlong)this + 0x10);
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_28._12_4_ = uStack_2c;
    local_28.ArrayNum = iVar1;
    local_28.DataPtr = ppFVar3;
    pTVar6 = Chaos::FReadPhysicsObjectInterface<1>::GetAllRigidParticles
                       (local_res8,&local_18,&local_28,false);
    Chaos::FClusterUnionManager::AddPendingClusterIndexOperation
              ((FClusterUnionManager *)(lVar2 + 0x660),*(int *)(*(longlong *)this + 0x170),Add,
               pTVar6);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1440ce7b0

void __thiscall
`Chaos::FClusterUnionPhysicsProxy::BulkSetChildToParent_External'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  FReadPhysicsObjectInterface<1> local_res8 [8];
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_38;
  FPhysicsObject **local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_18;
  
  local_res8[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
  iStack_20 = *(int *)((longlong)this + 0x10);
  local_28 = *(FPhysicsObject ***)((longlong)this + 8);
  if (iStack_20 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iStack_20;
  local_18.DataPtr = local_28;
  Chaos::FReadPhysicsObjectInterface<1>::GetAllRigidParticles(local_res8,&local_38,&local_18,true);
  if (local_38.ArrayNum == *(int *)((longlong)this + 0x10)) {
    Chaos::FClusterUnionManager::UpdateClusterUnionParticlesChildToParent
              ((FClusterUnionManager *)
               (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0xbd0) + 0x660),
               *(int *)(*(longlong *)this + 0x170),&local_38,
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)this + 0x18),*(bool *)((longlong)this + 0x28));
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2667941677485784170>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                       ,0x396,"Particles.Num() == Objects.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1440ce930

void __thiscall
`Chaos::FClusterUnionPhysicsProxy::ChangeMainParticleStatus_External'::__l2::<lambda_1>::operator()
          (void *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  FClusterUnion *pFVar9;
  uint uVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  ForAnyElementType FVar13;
  FReadPhysicsObjectInterface<1> local_res8 [8];
  undefined1 local_res10 [8];
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_58;
  FPhysicsObject **local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_38;
  
  local_res8[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
  iStack_40 = *(int *)((longlong)this + 0x10);
  local_48 = *(FPhysicsObject ***)((longlong)this + 8);
  if ((iStack_40 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iStack_40;
  local_38.DataPtr = local_48;
  Chaos::FReadPhysicsObjectInterface<1>::GetAllRigidParticles(local_res8,&local_58,&local_38,false);
  pFVar9 = Chaos::FClusterUnionManager::FindClusterUnion
                     ((FClusterUnionManager *)
                      (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0xbd0) + 0x660),
                      *(int *)(*(longlong *)this + 0x170));
  iVar6 = local_58.ArrayNum;
  if (pFVar9 != (FClusterUnion *)0x0) {
    pFVar1 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
    FVar13.Data = local_58.AllocatorInstance.Data;
    while( true ) {
      if (local_58.ArrayNum != iVar6) {
        `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar13.Data == pFVar1) break;
      uVar3 = *(ulonglong *)FVar13.Data;
      uVar10 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      if (*(int *)&(pFVar9->ChildProperties).field_0x8 ==
          *(int *)&(pFVar9->ChildProperties).field_0x34) {
LAB_1440ceac1:
        FVar13.Data = FVar13.Data + 8;
      }
      else {
        puVar4 = *(undefined1 **)&(pFVar9->ChildProperties).field_0x40;
        puVar11 = &(pFVar9->ChildProperties).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar11 = puVar4;
        }
        iVar8 = *(int *)(puVar11 +
                        (ulonglong)
                        (*(int *)&(pFVar9->ChildProperties).field_0x48 - 1U &
                        (uVar10 >> 0x10 ^ uVar10)) * 4);
        if (iVar8 == -1) goto LAB_1440ceac1;
        do {
          lVar2 = *(longlong *)&pFVar9->ChildProperties + (longlong)iVar8 * 0x18;
          if (*(ulonglong *)(*(longlong *)&pFVar9->ChildProperties + (longlong)iVar8 * 0x18) ==
              uVar3) {
            pbVar12 = (byte *)(lVar2 + 8);
            if (lVar2 == 0) {
              pbVar12 = (byte *)0x0;
            }
            if (pbVar12 != (byte *)0x0) {
              *pbVar12 = *(char *)((longlong)this + 0x18) == '\0' | *pbVar12 & 0xfe;
            }
            goto LAB_1440ceac1;
          }
          iVar8 = *(int *)(lVar2 + 0x10);
        } while (iVar8 != -1);
        FVar13.Data = FVar13.Data + 8;
      }
    }
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1440ceb10

void __thiscall
`Chaos::FClusterUnionPhysicsProxy::RemovePhysicsObjects_External'::__l2::<lambda_1>::operator()
          (void *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FReadPhysicsObjectInterface<1> local_res8 [8];
  undefined4 uStack_3c;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_38;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_28;
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_res8[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
  if (((*(longlong *)this != 0) && (lVar2 = *(longlong *)(*(longlong *)this + 8), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0xbd0), lVar2 != 0)) {
    pTVar5 = TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
             ::Array((TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
                      *)((longlong)this + 8),&local_18);
    local_38.DataPtr = (FPhysicsObject **)(pTVar5->AllocatorInstance).Data;
    iVar1 = pTVar5->ArrayNum;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_38._12_4_ = uStack_3c;
    local_38.ArrayNum = iVar1;
    pTVar6 = Chaos::FReadPhysicsObjectInterface<1>::GetAllRigidParticles
                       (local_res8,&local_28,&local_38,false);
    Chaos::FClusterUnionManager::AddPendingClusterIndexOperation
              ((FClusterUnionManager *)(lVar2 + 0x660),*(int *)(*(longlong *)this + 0x170),Remove,
               pTVar6);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1440cec20

void __thiscall
`Chaos::FClusterUnionPhysicsProxy::SetGeometry_External'::__l2::<lambda_1>::operator()(void *this)

{
  TGeometryParticle<double,3> *this_00;
  FImplicitObject *pFVar1;
  FImplicitObject *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  IPhysicsProxyBase *pIVar5;
  
  this_00 = *(TGeometryParticle<double,3> **)(*(longlong *)this + 0x148);
  pFVar1 = (FImplicitObject *)**(undefined8 **)((longlong)this + 8);
  plVar4 = &pFVar1->_padding_;
  if (pFVar1 == (FImplicitObject *)0x0) {
    pIVar5 = this_00->Proxy;
    plVar4 = (longlong *)&DAT_00000008;
  }
  else {
    LOCK();
    *(int *)plVar4 = (int)*plVar4 + 1;
    UNLOCK();
    pIVar5 = this_00->Proxy;
    LOCK();
    *(int *)plVar4 = (int)*plVar4 + 1;
    UNLOCK();
  }
  pFVar2 = (this_00->MNonFrequentData).Property.MGeometry.Reference;
  if (pFVar2 != pFVar1) {
    (this_00->MNonFrequentData).Property.MGeometry.Reference = pFVar1;
    if (pFVar1 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)plVar4 = (int)*plVar4 + 1;
      UNLOCK();
    }
    if (pFVar2 != (FImplicitObject *)0x0) {
      LOCK();
      plVar4 = &pFVar2->_padding_;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
  if (pFVar1 != (FImplicitObject *)0x0) {
    LOCK();
    plVar4 = &pFVar1->_padding_;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar1->_padding_ + 4) == 0)) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
  }
  (this_00->MDirtyFlags).Bits = (this_00->MDirtyFlags).Bits | 0x10;
  if ((pIVar5 != (IPhysicsProxyBase *)0x0) && (pIVar5->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar5->Solver,pIVar5);
  }
  Chaos::TGeometryParticle<double,3>::UpdateShapesArray(this_00);
  if (pFVar1 != (FImplicitObject *)0x0) {
    LOCK();
    plVar4 = &pFVar1->_padding_;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar1->_padding_ + 4) == 0)) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
  }
  return;
}

// operator() @ 1440ced30

void __thiscall
`Chaos::FClusterUnionPhysicsProxy::SetIsAnchored_External'::__l2::<lambda_1>::operator()(void *this)

{
  char cVar1;
  FRigidClusteredFlags FVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FRigidClusteredFlags_u_0 *pFVar5;
  FClusterUnion *pFVar6;
  
  lVar3 = *(longlong *)this;
  puVar4 = *(undefined8 **)(lVar3 + 0x168);
  if ((((puVar4 != (undefined8 *)0x0) && (lVar3 != 0)) && (*(longlong *)(lVar3 + 8) != 0)) &&
     (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0xbd0), lVar3 != 0)) {
    pFVar5 = &Chaos::TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                        ((TPBDRigidClusteredParticles<double,3> *)*puVar4,*(int *)(puVar4 + 1))->
              field0_0x0;
    cVar1 = *(char *)((longlong)this + 8);
    FVar2.field0_0x0 = (FRigidClusteredFlags_u_0)pFVar5->Bits;
    pFVar5 = &Chaos::TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                        ((TPBDRigidClusteredParticles<double,3> *)
                         **(undefined8 **)(*(longlong *)this + 0x168),
                         *(int *)(*(undefined8 **)(*(longlong *)this + 0x168) + 1))->field0_0x0;
    pFVar5->Bits = pFVar5->Bits ^ (cVar1 * '\x02' ^ pFVar5->Bits) & 2;
    pFVar6 = Chaos::FClusterUnionManager::FindClusterUnion
                       ((FClusterUnionManager *)(lVar3 + 0x660),*(int *)(*(longlong *)this + 0x170))
    ;
    if (pFVar6 != (FClusterUnion *)0x0) {
      pFVar6->bAnchorLock = true;
    }
    if (((byte)FVar2.field0_0x0 >> 1 & 1) != *(byte *)((longlong)this + 8)) {
      Chaos::FClusterUnionManager::RequestDeferredClusterPropertiesUpdate
                ((FClusterUnionManager *)(lVar3 + 0x660),*(int *)(*(longlong *)this + 0x170),
                 UpdateKinematicProperties);
    }
  }
  return;
}

// operator() @ 1440cee20

void __thiscall
`Chaos::FClusterUnionPhysicsProxy::SetMass_External'::__l2::<lambda_1>::operator()(void *this)

{
  float fVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  plVar3 = *(longlong **)(*(longlong *)this + 0x168);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = *plVar3;
    uVar2 = *(uint *)(plVar3 + 1);
    fVar1 = *(float *)((longlong)this + 8);
    uVar7 = 0;
    if ((int)uVar2 < *(int *)(lVar4 + 0x3d0)) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(double *)(*(longlong *)(lVar4 + 0x3c8) + (longlong)(int)uVar2 * 8) = (double)fVar1;
    fVar1 = *(float *)((longlong)this + 0xc);
    uVar2 = *(uint *)(*(longlong **)(*(longlong *)this + 0x168) + 1);
    lVar4 = **(longlong **)(*(longlong *)this + 0x168);
    uVar7 = 0;
    if ((int)uVar2 < *(int *)(lVar4 + 1000)) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(double *)(*(longlong *)(lVar4 + 0x3e0) + (longlong)(int)uVar2 * 8) = (double)fVar1;
    Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetI
              (*(TPBDRigidParticleHandleImp<double,3,1> **)(*(longlong *)this + 0x168),
               (TVector<float,3> *)((longlong)this + 0x10));
    Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInvI
              (*(TPBDRigidParticleHandleImp<double,3,1> **)(*(longlong *)this + 0x168),
               (TVector<float,3> *)((longlong)this + 0x1c));
  }
  return;
}

// operator() @ 1440d02e0

bool __thiscall
`Chaos::FClusterUnionPhysicsProxy::PullFromPhysicsState'::__l11::<lambda_1>::operator()
          (void *this,TVector<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)((longlong)this + 8);
  if (dVar2 <= 0.0) {
    return false;
  }
  dVar1 = dVar2 * *(double *)&param_1->field_0x8;
  dVar3 = dVar2 * *(double *)&param_1->field_0x10;
  dVar2 = dVar1 * dVar1 + dVar2 * *(double *)param_1 * dVar2 * *(double *)param_1 + dVar3 * dVar3;
  return *(double *)this <= dVar2 && dVar2 != *(double *)this;
}

// AddPhysicsObjects_External @ 1440d3020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FClusterUnionPhysicsProxy::AddPhysicsObjects_External
          (FClusterUnionPhysicsProxy *this,
          TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  FSimCallbackCommandObject *pFVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  FSimCallbackCommandObject *pFVar8;
  FSimCallbackCommandObject *pFVar9;
  undefined1 auStackY_c8 [32];
  undefined1 local_88 [8];
  FClusterUnionPhysicsProxy *local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  undefined4 local_68;
  FSimCallbackCommandObject *local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  lVar2 = this->_padding_;
  pFVar8 = (FSimCallbackCommandObject *)0x0;
  local_68 = 0;
  if (lVar2 != 0) {
    iVar1 = param_1->ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = CONCAT44(local_70._4_4_,iVar1);
    local_80 = this;
    if (iVar1 == 0) {
      local_70 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,0,&local_78,iVar1,(int *)((longlong)&local_70 + 4));
      memcpy(local_78.Data,_Src,(longlong)iVar1 << 3);
    }
    if (((CVars::bEnableAsyncInitBody == false) && (bVar4 = IsInGameThread(), !bVar4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                           ,0x1b3,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar5 = ::operator_new(0xc0);
    pFVar9 = pFVar8;
    if (pFVar5 != (FSimCallbackCommandObject *)0x0) {
      local_58 = (FSimCallbackCommandObject *)0x0;
      puVar6 = FMemory::Malloc(0x20,8);
      *puVar6 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::AddPhysicsObjects_External'::`2'::<lambda_1>,1,1>
                 ::_vftable_;
      puVar6[1] = local_80;
      puVar6[2] = 0;
      puVar6[2] = local_78.Data;
      local_78.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(puVar6 + 3) = (undefined4)local_70;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = local_70._4_4_;
      local_70 = 0;
      if (puVar6 + 1 != (undefined8 *)0x0) {
        local_58 = (FSimCallbackCommandObject *)
                   UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::AddPhysicsObjects_External'::__l2::<lambda_1>,void>
                   ::Call;
      }
      *(undefined ***)pFVar5 = &___7FSimCallbackCommandObject_Chaos__6B_;
      *(undefined2 *)&pFVar5->field_0x8 = 0;
      *(undefined8 *)&pFVar5->field_0x10 = 0;
      *(undefined8 *)&pFVar5->field_0x18 = 0;
      *(undefined8 *)&pFVar5->field_0x20 = 0;
      *(undefined8 *)&pFVar5->field_0x28 = 0;
      *(undefined2 *)&pFVar5->field_0x40 = 1;
      *(FSimCallbackCommandObject **)&pFVar5->Func = local_58;
      *(undefined8 **)&(pFVar5->Func).field_0x28 = puVar6;
      local_30 = (longlong *)0x0;
      *(longlong *)&(pFVar5->Func).field_0x10 = local_48;
      *(undefined8 *)&(pFVar5->Func).field_0x18 = uStack_40;
      *(undefined8 *)&(pFVar5->Func).field_0x20 = local_38;
      if (*(longlong *)&pFVar5->Func != 0) {
        local_58 = pFVar8;
      }
      *(undefined8 *)&pFVar5->Func2 = 0;
      *(undefined8 *)&(pFVar5->Func2).field_0x28 = 0;
      pFVar5->bFuncHasTimeParameters = false;
      pFVar5->ExecuteOnStep = -1;
      if (*(longlong *)&pFVar5->Func == 0) {
        `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                  (local_88);
      }
      pFVar8 = (FSimCallbackCommandObject *)&DAT_00000001;
      pFVar9 = pFVar5;
    }
    if ((pFVar8 != (FSimCallbackCommandObject *)0x0) &&
       (local_58 != (FSimCallbackCommandObject *)0x0)) {
      plVar7 = &local_48;
      if (local_30 != (longlong *)0x0) {
        plVar7 = local_30;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    FChaosMarshallingManager::RegisterSimCommand_External
              ((FChaosMarshallingManager *)(lVar2 + 0x98),pFVar9);
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
  }
  return;
}

// BufferPhysicsResults_External @ 1440d4890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionPhysicsProxy::BufferPhysicsResults_External
          (FClusterUnionPhysicsProxy *this,FDirtyClusterUnionData *param_1)

{
  int *piVar1;
  TArray<Chaos::FDirtyClusterUnionParticleData,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  int iVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsExternal>
  FVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_178 [32];
  undefined1 local_118 [8];
  FName local_110;
  FColor_u_0 local_108 [2];
  FName local_100;
  FName local_f8;
  FName local_e8 [2];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  FVar14 = StatPtr_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsExternal;
  if (StatPtr_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsExternal ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsExternal>
      )0x0) {
    pFVar13 = ::FName::FName(local_e8,"STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsExternal");
    FVar14 = (FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsExternal>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsExternal,
                          *pFVar13,L"FClusterUnionPhysicsProxy::BufferPhysicsResults_External",
                          "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar14;
  bVar8 = false;
  bVar10 = false;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  if ((FVar5.ComparisonIndex.Value.Value != 0) || (FVar5.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_100.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
        local_100.Number = FVar5.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_100,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                   ,0x319);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_110 = FVar5;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      bVar9 = true;
      goto LAB_1440d49e8;
    }
  }
  bVar9 = false;
  local_110 = local_f8;
LAB_1440d49e8:
  Chaos::`anonymous_namespace'::BufferPhysicsResultsImp<Chaos::TPBDRigidParticle<double,3>_>
            (this,(this->Particle_External).Ptr,param_1);
  pTVar2 = &param_1->ChildParticles;
  param_1->bIsAnchored = (this->SyncedData_External).bIsAnchored;
  uVar3 = (this->SyncedData_External).ChildParticles.ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &(param_1->ChildParticles).ArrayMax;
  (param_1->ChildParticles).ArrayNum = 0;
  if (*piVar1 != uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,uVar3,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar4 = (this->SyncedData_External).ChildParticles.ArrayNum;
  pFVar16 = (this->SyncedData_External).ChildParticles.AllocatorInstance.Data;
  pFVar17 = pFVar16 + (longlong)iVar4 * 0x90;
  while( true ) {
    if ((this->SyncedData_External).ChildParticles.ArrayNum != iVar4) {
      local_118[0] = 0;
      `TCheckedPointerIterator<Chaos::FClusterUnionChildData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_118);
    }
    FVar5 = local_110;
    if (pFVar16 == pFVar17) break;
    local_d8 = *(undefined4 *)pFVar16;
    local_c8 = *(undefined8 *)(pFVar16 + 0x10);
    uStack_c0 = *(undefined8 *)(pFVar16 + 0x18);
    local_b8 = *(undefined8 *)(pFVar16 + 0x20);
    uStack_b0 = *(undefined8 *)(pFVar16 + 0x28);
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    local_68 = *(undefined8 *)(pFVar16 + 0x70);
    uStack_60 = *(undefined8 *)(pFVar16 + 0x78);
    local_58 = *(undefined4 *)(pFVar16 + 0x80);
    local_a8 = *(undefined8 *)(pFVar16 + 0x30);
    uStack_a0 = *(undefined8 *)(pFVar16 + 0x38);
    local_98 = *(undefined8 *)(pFVar16 + 0x40);
    uStack_90 = *(undefined8 *)(pFVar16 + 0x48);
    local_88 = *(undefined8 *)(pFVar16 + 0x50);
    uStack_80 = *(undefined8 *)(pFVar16 + 0x58);
    local_78 = *(undefined8 *)(pFVar16 + 0x60);
    uStack_70 = *(undefined8 *)(pFVar16 + 0x68);
    if ((pFVar6 <= (FScriptContainerElement *)&local_d8) &&
       ((FScriptContainerElement *)&local_d8 < pFVar6 + (longlong)*piVar1 * 0x90)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar12 = (param_1->ChildParticles).ArrayNum;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1090,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_1->ChildParticles).ArrayNum = iVar12 + 1;
    lVar15 = (longlong)iVar12;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    pFVar16 = pFVar16 + 0x90;
    *(ulonglong *)(pFVar6 + lVar15 * 0x90) = CONCAT44(uStack_d4,local_d8);
    *(undefined8 *)(pFVar6 + lVar15 * 0x90 + 8) = uStack_d0;
    *(undefined8 *)(pFVar6 + lVar15 * 0x90 + 0x10) = local_c8;
    *(undefined8 *)(pFVar6 + lVar15 * 0x90 + 0x10 + 8) = uStack_c0;
    *(undefined8 *)(pFVar6 + lVar15 * 0x90 + 0x20) = local_b8;
    *(undefined8 *)(pFVar6 + lVar15 * 0x90 + 0x20 + 8) = uStack_b0;
    *(undefined8 *)(pFVar6 + lVar15 * 0x90 + 0x30) = local_a8;
    *(undefined8 *)(pFVar6 + lVar15 * 0x90 + 0x30 + 8) = uStack_a0;
    *(undefined8 *)(pFVar6 + lVar15 * 0x90 + 0x40) = local_98;
    *(undefined8 *)(pFVar6 + lVar15 * 0x90 + 0x40 + 8) = uStack_90;
    *(undefined8 *)(pFVar6 + lVar15 * 0x90 + 0x50) = local_88;
    *(undefined8 *)(pFVar6 + lVar15 * 0x90 + 0x50 + 8) = uStack_80;
    *(undefined8 *)(pFVar6 + lVar15 * 0x90 + 0x60) = local_78;
    *(undefined8 *)(pFVar6 + lVar15 * 0x90 + 0x60 + 8) = uStack_70;
    *(undefined8 *)(pFVar6 + lVar15 * 0x90 + 0x70) = local_68;
    *(undefined8 *)(pFVar6 + lVar15 * 0x90 + 0x70 + 8) = uStack_60;
    *(ulonglong *)(pFVar6 + lVar15 * 0x90 + 0x80) = CONCAT44(uStack_54,local_58);
    *(undefined8 *)(pFVar6 + lVar15 * 0x90 + 0x80 + 8) = uStack_50;
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar5,CycleScopeEnd);
  }
  return;
}

// BufferPhysicsResults_Internal @ 1440d4d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionPhysicsProxy::BufferPhysicsResults_Internal
          (FClusterUnionPhysicsProxy *this,FDirtyClusterUnionData *param_1)

{
  longlong *plVar1;
  int *piVar2;
  TArray<Chaos::FDirtyClusterUnionParticleData,TSizedDefaultAllocator<32>_> *pTVar3;
  TRefCountPtr<Chaos::FImplicitObject> *pTVar4;
  uint uVar5;
  FImplicitObject *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uchar uVar12;
  uint uVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsInternal>
  FVar16;
  FName FVar17;
  FUniqueIdx *pFVar18;
  TRigidTransform<double,3> *pTVar19;
  TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int> *pTVar20;
  longlong lVar21;
  FImplicitObjectUnion *pFVar22;
  FImplicitObjectUnion *pFVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  FImplicitObjectUnion *this_00;
  FScriptContainerElement *pFVar26;
  FName FVar27;
  FScriptContainerElement *pFVar28;
  FDirtyClusterUnionData *pFVar29;
  undefined1 auStackY_1a8 [32];
  undefined1 local_147 [3];
  uint local_144;
  FName local_140;
  FDirtyClusterUnionData *local_138;
  TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> local_130;
  FColor_u_0 local_120 [2];
  FName local_118;
  FScriptContainerElement *local_110;
  FName local_108;
  FName local_100;
  undefined8 *local_f0;
  FName local_e8;
  undefined8 local_e0;
  int local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  undefined1 local_78 [16];
  longlong local_68;
  longlong lStack_60;
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pFVar23 = (FImplicitObjectUnion *)0x0;
  FVar16 = StatPtr_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsInternal;
  local_138 = param_1;
  if (StatPtr_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsInternal ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsInternal>
      )0x0) {
    pFVar15 = ::FName::FName(&local_e8,"STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsInternal");
    FVar16 = (FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsInternal>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ClusterUnionPhysicsProxyBufferPhysicsResultsInternal,
                          *pFVar15,L"FClusterUnionPhysicsProxy::BufferPhysicsResults_Internal",
                          "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar16;
  bVar8 = false;
  bVar9 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  bVar10 = false;
  bVar11 = false;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_120[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_120[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_118.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                   ,0x2c9);
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140 = FVar27;
      local_108 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar10 = true;
      goto LAB_1440d4e76;
    }
  }
  bVar9 = bVar11;
  bVar8 = bVar10;
  bVar10 = false;
  local_108 = local_100;
  FVar27 = local_100;
LAB_1440d4e76:
  Chaos::`anonymous_namespace'::
  BufferPhysicsResultsImp<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>
            (this,this->Particle_Internal,param_1);
  FVar17 = (FName)FClusterUnionManager::FindClusterUnion
                            ((FClusterUnionManager *)
                             (*(longlong *)(this->_padding_ + 0xbd0) + 0x660),
                             this->ClusterUnionIndex);
  local_140 = FVar17;
  if (FVar17 != (FName)0x0) {
    uVar5 = (((FClusterUnion *)FVar17)->ChildParticles).ArrayNum;
    pTVar3 = &param_1->ChildParticles;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    piVar2 = &(param_1->ChildParticles).ArrayMax;
    (param_1->ChildParticles).ArrayNum = 0;
    if (*piVar2 != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,0x10,uVar5,&pTVar3->AllocatorInstance,0,piVar2);
    }
    local_144 = (((FClusterUnion *)FVar17)->ChildParticles).ArrayNum;
    uVar25 = (ulonglong)(int)local_144;
    pFVar26 = (((FClusterUnion *)FVar17)->ChildParticles).AllocatorInstance.Data;
    local_110 = pFVar26 + uVar25 * 8;
    pFVar28 = local_110;
    pFVar29 = param_1;
    while( true ) {
      if ((((FClusterUnion *)FVar17)->ChildParticles).ArrayNum != (int)uVar25) {
        local_147[0] = 0;
        `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_147);
      }
      FVar27 = local_108;
      if (pFVar26 == pFVar28) break;
      pFVar22 = *(FImplicitObjectUnion **)pFVar26;
      if (pFVar22 == (FImplicitObjectUnion *)0x0) {
        bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_2667941677485784363>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                            ,0x2d5,"Particle");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
LAB_1440d524e:
        pFVar26 = pFVar26 + 8;
        uVar25 = (ulonglong)local_144;
        FVar17 = local_140;
      }
      else {
        uVar5 = (uint)pFVar22->_padding_;
        lVar21 = pFVar22->_padding_;
        uVar13 = 0;
        if ((int)uVar5 < *(int *)(lVar21 + 0xd0)) {
          uVar13 = ~uVar5 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar21 = *(longlong *)(*(longlong *)(lVar21 + 200) + (longlong)(int)uVar5 * 8);
        pFVar28 = local_110;
        pFVar29 = local_138;
        if (lVar21 == 0) goto LAB_1440d524e;
        local_d8 = 0xffffffff;
        local_58 = -1;
        local_c8[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_c8[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_c8[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_b8[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_b8[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_b8[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_a8[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_a8[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_a8[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_98[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_98[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_98[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_88[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_88[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_88[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_78._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_78._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        local_68 = 0;
        lStack_60 = 0;
        pFVar18 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)pFVar22->_padding_,
                             (int)pFVar22->_padding_);
        local_d8 = pFVar18->Idx;
        this_00 = pFVar23;
        if (2 < *(byte *)((longlong)&pFVar22->_padding_ + 4)) {
          this_00 = pFVar22;
        }
        if (this_00 == (FImplicitObjectUnion *)0x0) {
          local_c8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_c8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          local_b8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_b8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          local_a8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          local_a8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          local_98[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_98[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          local_78._0_4_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
          local_78._4_4_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
          local_78._8_4_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
          local_78._12_4_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
          local_88[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          local_88[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
        }
        else {
          pTVar19 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ChildToParent
                              ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)this_00);
          local_c8[0] = *(double *)&pTVar19->field_0x0;
          local_c8[1] = *(double *)&pTVar19->field_0x8;
          local_b8[0] = *(double *)&pTVar19->field_0x10;
          local_b8[1] = *(double *)&pTVar19->field_0x18;
          local_a8[0] = *(double *)&pTVar19->field_0x20;
          local_a8[1] = *(double *)&pTVar19->field_0x28;
          local_98[0] = *(double *)&pTVar19->field_0x30;
          local_98[1] = *(double *)&pTVar19->field_0x38;
          local_88[0] = *(double *)&pTVar19->field_0x40;
          local_88[1] = *(double *)&pTVar19->field_0x48;
          local_78._0_4_ = *(undefined4 *)&pTVar19->field_0x50;
          local_78._4_4_ = *(undefined4 *)&pTVar19->field_0x54;
          local_78._8_4_ = *(undefined4 *)&pTVar19->field_0x58;
          local_78._12_4_ = *(undefined4 *)&pTVar19->field_0x5c;
        }
        lStack_60 = *(longlong *)(lVar21 + 0x10);
        local_68 = lVar21;
        if (*(int *)(lVar21 + 0x1c) == 2) {
          pTVar20 = TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                            *)(lVar21 + 0x350),(TPBDRigidParticleHandleImp<double,3,1> *)pFVar22);
          pFVar22 = (FImplicitObjectUnion *)&pTVar20->field_0x8;
          if (pTVar20 == (TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int> *)0x0) {
            pFVar22 = pFVar23;
          }
          local_58 = -1;
          if (pFVar22 != (FImplicitObjectUnion *)0x0) {
            local_58 = (int)pFVar22->_padding_;
          }
        }
        else if (*(int *)(lVar21 + 0x1c) == 0xb) {
          local_58 = (local_138->ChildParticles).ArrayNum;
        }
        pFVar29 = local_138;
        pFVar28 = (pTVar3->AllocatorInstance).Data;
        piVar2 = &(param_1->ChildParticles).ArrayMax;
        if (((pFVar28 <= (FScriptContainerElement *)&local_d8) &&
            ((FScriptContainerElement *)&local_d8 < pFVar28 + (longlong)*piVar2 * 0x90)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar14 = (param_1->ChildParticles).ArrayNum;
        if (iVar14 == *piVar2) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1090,&pTVar3->AllocatorInstance,piVar2);
        }
        (param_1->ChildParticles).ArrayNum = iVar14 + 1;
        lVar21 = (longlong)iVar14;
        pFVar28 = (pTVar3->AllocatorInstance).Data;
        pFVar26 = pFVar26 + 8;
        *(ulonglong *)(pFVar28 + lVar21 * 0x90) = CONCAT44(uStack_d4,local_d8);
        *(undefined8 *)(pFVar28 + lVar21 * 0x90 + 8) = uStack_d0;
        *(double *)(pFVar28 + lVar21 * 0x90 + 0x10) = local_c8[0];
        *(double *)(pFVar28 + lVar21 * 0x90 + 0x10 + 8) = local_c8[1];
        *(double *)(pFVar28 + lVar21 * 0x90 + 0x20) = local_b8[0];
        *(double *)(pFVar28 + lVar21 * 0x90 + 0x20 + 8) = local_b8[1];
        *(double *)(pFVar28 + lVar21 * 0x90 + 0x30) = local_a8[0];
        *(double *)(pFVar28 + lVar21 * 0x90 + 0x30 + 8) = local_a8[1];
        *(double *)(pFVar28 + lVar21 * 0x90 + 0x40) = local_98[0];
        *(double *)(pFVar28 + lVar21 * 0x90 + 0x40 + 8) = local_98[1];
        *(double *)(pFVar28 + lVar21 * 0x90 + 0x50) = local_88[0];
        *(double *)(pFVar28 + lVar21 * 0x90 + 0x50 + 8) = local_88[1];
        *(undefined8 *)(pFVar28 + lVar21 * 0x90 + 0x60) = local_78._0_8_;
        *(undefined8 *)(pFVar28 + lVar21 * 0x90 + 0x60 + 8) = local_78._8_8_;
        *(longlong *)(pFVar28 + lVar21 * 0x90 + 0x70) = local_68;
        *(longlong *)(pFVar28 + lVar21 * 0x90 + 0x70 + 8) = lStack_60;
        *(ulonglong *)(pFVar28 + lVar21 * 0x90 + 0x80) = CONCAT44(uStack_54,local_58);
        *(undefined8 *)(pFVar28 + lVar21 * 0x90 + 0x80 + 8) = uStack_50;
        uVar25 = (ulonglong)local_144;
        pFVar28 = local_110;
        FVar17 = local_140;
      }
    }
    if ((FVar17->bGeometryModified) && ((((FClusterUnion *)FVar17)->ChildParticles).ArrayNum != 0))
    {
      pFVar22 = (FImplicitObjectUnion *)(((FClusterUnion *)FVar17)->Geometry).Reference;
      uVar12 = FImplicitObject::GetType((FImplicitObject *)pFVar22);
      if ((uVar12 == '\x05') || (uVar12 == '\x0f')) {
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
      if (!bVar11) {
        pFVar22 = pFVar23;
      }
      if ((GShallowCopyClusterUnionGeometryOnUpdate == 0) ||
         (pFVar22 == (FImplicitObjectUnion *)0x0)) {
        pFVar6 = (((FClusterUnion *)FVar17)->Geometry).Reference;
        puVar24 = (undefined8 *)(**(code **)(pFVar6->_padding_ + 0x48))(pFVar6,&local_f0);
        pTVar4 = &pFVar29->Geometry;
        if (pTVar4 != (TRefCountPtr<Chaos::FImplicitObject> *)puVar24) {
          pFVar6 = pTVar4->Reference;
          pTVar4->Reference = (FImplicitObject *)*puVar24;
          *puVar24 = 0;
          if (pFVar6 != (FImplicitObject *)0x0) {
            LOCK();
            plVar1 = &pFVar6->_padding_;
            lVar21 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if (((int)lVar21 == 1) && (*(int *)((longlong)&pFVar6->_padding_ + 4) == 0)) {
              (**(code **)pFVar6->_padding_)(pFVar6,1);
            }
          }
        }
        if (local_f0 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(local_f0 + 1);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((iVar14 == 1) && (*(int *)((longlong)local_f0 + 0xc) == 0)) {
            (**(code **)*local_f0)(local_f0,1);
          }
        }
      }
      else {
        iVar14 = (pFVar22->MObjects).ArrayNum;
        pFVar26 = (pFVar22->MObjects).AllocatorInstance.Data;
        local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_130.ArrayNum = iVar14;
        if (iVar14 == 0) {
          local_130.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar14,0,&local_130.AllocatorInstance,iVar14,&local_130.ArrayMax);
          ConstructItems<TRefCountPtr<Chaos::FImplicitObject>,TRefCountPtr<Chaos::FImplicitObject>,int>
                    (local_130.AllocatorInstance.Data,
                     (TRefCountPtr<Chaos::FImplicitObject> *)pFVar26,iVar14);
        }
        pFVar22 = ::operator_new(0x70);
        if ((pFVar22 != (FImplicitObjectUnion *)0x0) &&
           (pFVar23 = FImplicitObjectUnion::FImplicitObjectUnion(pFVar22,&local_130),
           pFVar23 != (FImplicitObjectUnion *)0x0)) {
          LOCK();
          *(int *)&pFVar23->_padding_ = (int)pFVar23->_padding_ + 1;
          UNLOCK();
        }
        pTVar4 = &pFVar29->Geometry;
        if (pTVar4 == (TRefCountPtr<Chaos::FImplicitObject> *)&local_e0) {
          if (pFVar23 != (FImplicitObjectUnion *)0x0) {
            LOCK();
            plVar1 = &pFVar23->_padding_;
            lVar21 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if (((int)lVar21 == 1) && (*(int *)((longlong)&pFVar23->_padding_ + 4) == 0)) {
              puVar24 = (undefined8 *)pFVar23->_padding_;
              goto LAB_1440d5386;
            }
          }
        }
        else {
          pFVar22 = (FImplicitObjectUnion *)pTVar4->Reference;
          pTVar4->Reference = (FImplicitObject *)pFVar23;
          if (pFVar22 != (FImplicitObjectUnion *)0x0) {
            LOCK();
            plVar1 = &pFVar22->_padding_;
            lVar21 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if (((int)lVar21 == 1) && (*(int *)((longlong)&pFVar22->_padding_ + 4) == 0)) {
              puVar24 = (undefined8 *)pFVar22->_padding_;
              pFVar23 = pFVar22;
LAB_1440d5386:
              (*(code *)*puVar24)(pFVar23,1);
            }
          }
        }
        DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
                  ((TRefCountPtr<Chaos::FImplicitObject> *)local_130.AllocatorInstance.Data,
                   local_130.ArrayNum);
        FVar17 = local_140;
        if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.AllocatorInstance.Data);
          FVar17 = local_140;
        }
      }
      pFVar23 = (FImplicitObjectUnion *)(pFVar29->Geometry).Reference;
      uVar12 = FImplicitObject::GetType((FImplicitObject *)pFVar23);
      if (((uVar12 == '\x05') || (uVar12 == '\x0f')) && (pFVar23 != (FImplicitObjectUnion *)0x0)) {
        FImplicitObjectUnion::SetLockedRecursive(pFVar23,true);
      }
      FVar17->bGeometryModified = false;
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  return;
}

// BulkSetChildToParent_External @ 1440d5a80

void __thiscall
Chaos::FClusterUnionPhysicsProxy::BulkSetChildToParent_External
          (FClusterUnionPhysicsProxy *this,
          TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FPhysicsSolverBase *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  <lambda_1> local_48;
  
  this_00 = (FPhysicsSolverBase *)this->_padding_;
  if (this_00 != (FPhysicsSolverBase *)0x0) {
    if ((this->Particle_External).Ptr == (TPBDRigidParticle<double,3> *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2667941677485784180>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                         ,0x38c,"Particle_External");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      local_48.Objects.ArrayNum = param_1->ArrayNum;
      lVar4 = (longlong)local_48.Objects.ArrayNum;
      if (local_48.Objects.ArrayNum == param_2->ArrayNum) {
        pFVar1 = (param_1->AllocatorInstance).Data;
        local_48.Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.__this = this;
        if (local_48.Objects.ArrayNum == 0) {
          local_48.Objects.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_48.Objects.ArrayNum,0,&local_48.Objects.AllocatorInstance,
                     local_48.Objects.ArrayNum,&local_48.Objects.ArrayMax);
          memcpy(local_48.Objects.AllocatorInstance.Data,pFVar1,lVar4 << 3);
        }
        local_48.Transforms.ArrayNum = param_2->ArrayNum;
        lVar4 = (longlong)local_48.Transforms.ArrayNum;
        pFVar1 = (param_2->AllocatorInstance).Data;
        local_48.Transforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_48.Transforms.ArrayNum == 0) {
          local_48.Transforms.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,local_48.Transforms.ArrayNum,0,&local_48.Transforms.AllocatorInstance
                     ,local_48.Transforms.ArrayNum,&local_48.Transforms.ArrayMax);
          memcpy(local_48.Transforms.AllocatorInstance.Data,pFVar1,lVar4 * 0x60);
        }
        local_48.bLock = param_3;
        if (((CVars::bEnableAsyncInitBody == false) && (bVar3 = IsInGameThread(), !bVar3)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                               ,0x1b3,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FPhysicsSolverBase::
        RegisterSimOneShotCallback<_Chaos::FClusterUnionPhysicsProxy::BulkSetChildToParent_External_::__l2::<lambda_1>_>
                  (this_00,&local_48);
        if (local_48.Transforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Transforms.AllocatorInstance.Data);
        }
        if (local_48.Objects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Objects.AllocatorInstance.Data);
        }
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2667941677485784180>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                           ,0x38c,"Objects.Num() == Transforms.Num()");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  return;
}

// ChangeMainParticleStatus_External @ 1440d7090

void __thiscall
Chaos::FClusterUnionPhysicsProxy::ChangeMainParticleStatus_External
          (FClusterUnionPhysicsProxy *this,
          TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FPhysicsSolverBase *this_00;
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  <lambda_1> local_28;
  
  this_00 = (FPhysicsSolverBase *)this->_padding_;
  if (this_00 != (FPhysicsSolverBase *)0x0) {
    local_28.Objects.ArrayNum = param_1->ArrayNum;
    lVar3 = (longlong)local_28.Objects.ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    local_28.Objects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.__this = this;
    if (local_28.Objects.ArrayNum == 0) {
      local_28.Objects.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_28.Objects.ArrayNum,0,&local_28.Objects.AllocatorInstance,
                 local_28.Objects.ArrayNum,&local_28.Objects.ArrayMax);
      memcpy(local_28.Objects.AllocatorInstance.Data,_Src,lVar3 << 3);
    }
    local_28.bIsMain = param_2;
    if (CVars::bEnableAsyncInitBody == false) {
      bVar2 = IsInGameThread();
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                           ,0x1b3,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    FPhysicsSolverBase::
    RegisterSimOneShotCallback<_Chaos::FClusterUnionPhysicsProxy::ChangeMainParticleStatus_External_::__l2::<lambda_1>_>
              (this_00,&local_28);
    if (local_28.Objects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Objects.AllocatorInstance.Data);
    }
  }
  return;
}

// ClearAccumulatedData @ 1440d7380

void __thiscall
Chaos::FClusterUnionPhysicsProxy::ClearAccumulatedData(FClusterUnionPhysicsProxy *this)

{
  TPBDRigidParticle<double,3> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  pTVar1 = (this->Particle_External).Ptr;
  if (pTVar1 == (TPBDRigidParticle<double,3> *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2667941677485784248>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                       ,0x348,"Particle_External");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    *(undefined4 *)&pTVar1->field_0x9c = 0;
  }
  return;
}

// GetHandleUnsafe @ 1440e4ee0

void * __thiscall Chaos::FClusterUnionPhysicsProxy::GetHandleUnsafe(FClusterUnionPhysicsProxy *this)

{
  return this->Particle_Internal;
}

// GetObjectState_External @ 1440e4f50

EObjectStateType __thiscall
Chaos::FClusterUnionPhysicsProxy::GetObjectState_External(FClusterUnionPhysicsProxy *this)

{
  TPBDRigidParticle<double,3> *pTVar1;
  code *pcVar2;
  bool bVar3;
  EObjectStateType EVar4;
  
  pTVar1 = (this->Particle_External).Ptr;
  if (pTVar1 != (TPBDRigidParticle<double,3> *)0x0) {
    return (pTVar1->MMiscData).Property.MObjectState;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2667941677485784831>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                     ,0x101,"Particle_External");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  return Uninitialized;
}

// HasChildren_Internal @ 1440e5e10

bool __thiscall
Chaos::FClusterUnionPhysicsProxy::HasChildren_Internal(FClusterUnionPhysicsProxy *this)

{
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar1;
  ClusterId *pCVar2;
  
  pTVar1 = this->Particle_Internal;
  if (pTVar1 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    return false;
  }
  pCVar2 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                     (*(TPBDRigidClusteredParticles<double,3> **)pTVar1,*(int *)&pTVar1->field_0x8);
  return 0 < pCVar2->NumChildren;
}

// Initialize_External @ 1440e6b50

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FClusterUnionPhysicsProxy::Initialize_External(FClusterUnionPhysicsProxy *this)

{
  TUniquePtr<Chaos::TPBDRigidParticle<double,3>,TDefaultDelete<Chaos::TPBDRigidParticle<double,3>_>_>
  *pTVar1;
  TUniquePtr<Chaos::FPhysicsObject,Chaos::FPhysicsObjectDeleter> *this_00;
  longlong *plVar2;
  double dVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FString *pFVar6;
  IPhysicsProxyBase *pIVar7;
  longlong lVar8;
  FPhysicsObject *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  TPBDRigidParticle<double,3> *pTVar14;
  TPBDRigidParticle<double,3> *pTVar15;
  undefined8 *puVar16;
  TUniquePtr<Chaos::FPhysicsObject,Chaos::FPhysicsObjectDeleter> TVar17;
  longlong *plVar18;
  undefined1 local_res8 [8];
  FPBDRigidParticleParameters local_res10 [2];
  undefined8 local_res18;
  FPhysicsObject *local_res20;
  longlong local_98 [4];
  undefined8 local_78;
  TReferenceControllerBase<1> *pTStack_70;
  
  local_res10[0]._padding_ = '\0';
  local_res10[0].bStartSleeping = false;
  local_res10[0].bGravityEnabled = true;
  local_res10[0].bCCDEnabled = false;
  pTVar14 = ::operator_new(0x1c0);
  pTVar15 = (TPBDRigidParticle<double,3> *)0x0;
  if (pTVar14 != (TPBDRigidParticle<double,3> *)0x0) {
    pTVar15 = TPBDRigidParticle<double,3>::TPBDRigidParticle<double,3>(pTVar14,local_res10);
  }
  pTVar1 = &this->Particle_External;
  if (pTVar1 == (TUniquePtr<Chaos::TPBDRigidParticle<double,3>,TDefaultDelete<Chaos::TPBDRigidParticle<double,3>_>_>
                 *)local_98) {
    if (pTVar15 == (TPBDRigidParticle<double,3> *)0x0) goto LAB_1440e6bcc;
    puVar16 = *(undefined8 **)pTVar15;
  }
  else {
    pTVar14 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar15;
    if (pTVar14 == (TPBDRigidParticle<double,3> *)0x0) goto LAB_1440e6bcc;
    puVar16 = *(undefined8 **)pTVar14;
    pTVar15 = pTVar14;
  }
  (*(code *)*puVar16)(pTVar15,1);
LAB_1440e6bcc:
  if ((pTVar1->Ptr == (TPBDRigidParticle<double,3> *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particle_External != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                          ,0x5a,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar15 = pTVar1->Ptr;
  pTVar5 = (this->InitData).DebugName.SharedReferenceCount.ReferenceController;
  pFVar6 = (this->InitData).DebugName.Object;
  pIVar7 = *(IPhysicsProxyBase **)&pTVar15->field_0x10;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = *(undefined8 *)&pTVar15->field_0x68;
  pTStack_70 = *(TReferenceControllerBase<1> **)&pTVar15->field_0x70;
  *(FString **)&pTVar15->field_0x68 = pFVar6;
  *(TReferenceControllerBase<1> **)&pTVar15->field_0x70 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  *(uint *)&pTVar15->field_0x9c = *(uint *)&pTVar15->field_0x9c | 0x10;
  if ((pIVar7 != (IPhysicsProxyBase *)0x0) && (pIVar7->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar7->Solver,pIVar7);
  }
  pTVar15 = pTVar1->Ptr;
  *(FClusterUnionPhysicsProxy **)&pTVar15->field_0x10 = this;
  if ((*(int *)&pTVar15->field_0x9c != 0) &&
     ((FPhysicsSolverBase *)this->_padding_ != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy
              ((FPhysicsSolverBase *)this->_padding_,(IPhysicsProxyBase *)this);
  }
  iVar4 = *(int *)&pTVar15->field_0x90;
  plVar18 = *(longlong **)&pTVar15->field_0x88;
  if (*(longlong **)&pTVar15->field_0x88 == (longlong *)0x0) {
    plVar18 = (longlong *)&pTVar15->field_0x80;
  }
  plVar2 = plVar18 + iVar4;
  while( true ) {
    if (*(int *)&pTVar15->field_0x90 != iVar4) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar18 == plVar2) break;
    pIVar7 = *(IPhysicsProxyBase **)&pTVar15->field_0x10;
    lVar8 = *plVar18;
    *(IPhysicsProxyBase **)(lVar8 + 0x48) = pIVar7;
    if (((pIVar7 != (IPhysicsProxyBase *)0x0) && (*(int *)(lVar8 + 0xc) != 0)) &&
       (pIVar7->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxyShape(pIVar7->Solver,pIVar7,*(uint *)(lVar8 + 8) >> 3);
    }
    plVar18 = plVar18 + 1;
  }
  *(void **)&pTVar1->Ptr->field_0x78 = (this->InitData).UserData;
  pTVar15 = pTVar1->Ptr;
  dVar11 = (this->InitData).InitialTransform.Translation.XY.m128d_f64[1];
  dVar3 = (this->InitData).InitialTransform.Translation.ZW.m128d_f64[0];
  pIVar7 = *(IPhysicsProxyBase **)&pTVar15->field_0x10;
  *(double *)&pTVar15->field_0x20 = (this->InitData).InitialTransform.Translation.XY.m128d_f64[0];
  *(double *)&pTVar15->field_0x28 = dVar11;
  *(double *)&pTVar15->field_0x30 = dVar3;
  *(uint *)&pTVar15->field_0x9c = *(uint *)&pTVar15->field_0x9c | 1;
  if ((pIVar7 != (IPhysicsProxyBase *)0x0) && (pIVar7->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar7->Solver,pIVar7);
  }
  dVar3 = (this->InitData).InitialTransform.Rotation.XY.m128d_f64[1];
  dVar11 = (this->InitData).InitialTransform.Rotation.ZW.m128d_f64[0];
  dVar12 = (this->InitData).InitialTransform.Rotation.ZW.m128d_f64[1];
  pTVar15 = pTVar1->Ptr;
  pIVar7 = *(IPhysicsProxyBase **)&pTVar15->field_0x10;
  *(float *)&pTVar15->field_0x40 = (float)(this->InitData).InitialTransform.Rotation.XY.m128d_f64[0]
  ;
  *(float *)&pTVar15->field_0x44 = (float)dVar3;
  *(float *)&pTVar15->field_0x48 = (float)dVar11;
  *(float *)&pTVar15->field_0x4c = (float)dVar12;
  *(uint *)&pTVar15->field_0x9c = *(uint *)&pTVar15->field_0x9c | 1;
  if ((pIVar7 != (IPhysicsProxyBase *)0x0) && (pIVar7->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar7->Solver,pIVar7);
  }
  pTVar15 = pTVar1->Ptr;
  pIVar7 = *(IPhysicsProxyBase **)&pTVar15->field_0x10;
  (pTVar15->MMiscData).Property.MControlFlags.field0_0x0.Bits =
       (ushort)((this->InitData).bCCDEnabled & 1) * 2 |
       (pTVar15->MMiscData).Property.MControlFlags.field0_0x0.Bits & 0xfffd;
  *(uint *)&pTVar15->field_0x9c = *(uint *)&pTVar15->field_0x9c | 8;
  if ((pIVar7 != (IPhysicsProxyBase *)0x0) && (pIVar7->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar7->Solver,pIVar7);
  }
  pTVar15 = pTVar1->Ptr;
  pIVar7 = *(IPhysicsProxyBase **)&pTVar15->field_0x10;
  (pTVar15->MMiscData).Property.MControlFlags.field0_0x0.Bits =
       (ushort)((this->InitData).bMACDEnabled & 1) << 9 |
       (pTVar15->MMiscData).Property.MControlFlags.field0_0x0.Bits & 0xfdff;
  *(uint *)&pTVar15->field_0x9c = *(uint *)&pTVar15->field_0x9c | 8;
  if ((pIVar7 != (IPhysicsProxyBase *)0x0) && (pIVar7->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar7->Solver,pIVar7);
  }
  local_res18 = 0;
  *(undefined4 *)&pTVar1->Ptr->field_0x9c = 0;
  TVar17 = FPhysicsObjectFactory::CreatePhysicsObject
                     ((IPhysicsProxyBase *)&local_res20,(int)this,(FName *)&DAT_ffffffff);
  this_00 = &this->PhysicsObject;
  if ((FPhysicsObject *)this_00 != TVar17.Ptr) {
    pFVar9 = this_00->Ptr;
    this_00->Ptr = (FPhysicsObject *)(TVar17.Ptr)->Proxy;
    (TVar17.Ptr)->Proxy = (IPhysicsProxyBase *)0x0;
    FPhysicsObjectDeleter::operator()((FPhysicsObjectDeleter *)this_00,pFVar9);
  }
  FPhysicsObjectDeleter::operator()((FPhysicsObjectDeleter *)&local_res20,local_res20);
  return;
}

// Initialize_Internal @ 1440e6eb0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FClusterUnionPhysicsProxy::Initialize_Internal
          (FClusterUnionPhysicsProxy *this,FPBDRigidsSolver *param_1,FPBDRigidsSOAs *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  TPBDRigidParticle<double,3> *pTVar3;
  FPBDRigidsEvolutionGBF *pFVar4;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar5;
  longlong lVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FClusterUnion *pFVar11;
  TGeometryParticle<double,3> **ppTVar12;
  FRigidClusteredFlags_u_0 *pFVar13;
  TVector<double,3> *pTVar14;
  byte bVar15;
  uint uVar16;
  FUniqueIdx local_res10 [2];
  TVector<float,3> local_108;
  TVector<float,3> local_fc;
  FClusterUnionCreationParameters local_f0;
  double local_d0;
  double local_c8;
  double local_c0;
  TRotation<float,3> local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  
  if (param_1 == (FPBDRigidsSolver *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2667941677485784974>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                       ,0x72,"RigidsSolver");
    if (!bVar9) {
      return;
    }
  }
  else {
    pTVar3 = (this->Particle_External).Ptr;
    if (pTVar3 == (TPBDRigidParticle<double,3> *)0x0) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2667941677485784974>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                         ,0x72,"Particle_External != nullptr");
      if (!bVar9) {
        return;
      }
    }
    else {
      bVar15 = this->field_0x40 | 1;
      this->field_0x40 =
           ((this->ClusterParameters).bEnableStrainOnCollision * '\x02' ^ bVar15) & 2 ^ bVar15;
      pFVar4 = (param_1->MEvolution).Ptr;
      if (pFVar4 != (FPBDRigidsEvolutionGBF *)0x0) {
        local_res10[0].Idx = *(int *)&pTVar3->field_0x58;
        local_f0.UniqueIndex = local_res10;
        local_f0.ExplicitIndex = -1;
        local_f0.ActorId = (this->InitData).ActorId;
        local_f0.ComponentId = (this->InitData).ComponentId;
        local_f0.GravityGroupOverride = (this->InitData).GravityGroupOverride;
        iVar10 = FClusterUnionManager::CreateNewClusterUnion
                           (&(pFVar4->Clustering).ClusterUnionManager,&this->ClusterParameters,
                            &local_f0);
        this->ClusterUnionIndex = iVar10;
        pFVar11 = FClusterUnionManager::FindClusterUnion
                            (&(pFVar4->Clustering).ClusterUnionManager,iVar10);
        if (pFVar11 == (FClusterUnion *)0x0) {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2667941677485784949>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                             ,0x8b,"ClusterUnion != nullptr");
          if (bVar9) goto code_r0x0001440e7040;
        }
        else {
          pTVar5 = pFVar11->InternalCluster;
          this->Particle_Internal = pTVar5;
          uVar2 = *(uint *)&pTVar5->field_0x8;
          lVar6 = *(longlong *)pTVar5;
          uVar16 = 0;
          if ((int)uVar2 < *(int *)(lVar6 + 0xd0)) {
            uVar16 = ~uVar2 >> 0x1f;
          }
          if (uVar16 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          *(FClusterUnionPhysicsProxy **)(*(longlong *)(lVar6 + 200) + (longlong)(int)uVar2 * 8) =
               this;
          pTVar3 = (this->Particle_External).Ptr;
          ppTVar12 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                               (*(TGeometryParticlesImp<double,3,0> **)this->Particle_Internal,
                                *(int *)&this->Particle_Internal->field_0x8);
          *ppTVar12 = (TGeometryParticle<double,3> *)pTVar3;
          bVar9 = (this->InitData).bUnbreakable;
          pFVar13 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                               (*(TPBDRigidClusteredParticles<double,3> **)this->Particle_Internal,
                                *(int *)&this->Particle_Internal->field_0x8)->field0_0x0;
          pFVar13->Bits = pFVar13->Bits ^ (bVar9 << 2 ^ pFVar13->Bits) & 4;
          local_a8 = (this->InitData).InitialTransform.Translation.XY.m128d_f64[0];
          dStack_a0 = (this->InitData).InitialTransform.Translation.XY.m128d_f64[1];
          local_98 = (this->InitData).InitialTransform.Translation.ZW.m128d_f64[0];
          local_48 = local_a8;
          dStack_40 = dStack_a0;
          local_38 = local_98;
          TGeometryParticleHandleImp<double,3,1>::SetX
                    ((TGeometryParticleHandleImp<double,3,1> *)this->Particle_Internal,
                     (TVector<double,3> *)&local_a8,false);
          local_88 = (this->InitData).InitialTransform.Rotation.XY.m128d_f64[0];
          dStack_80 = (this->InitData).InitialTransform.Rotation.XY.m128d_f64[1];
          local_78 = (this->InitData).InitialTransform.Rotation.ZW.m128d_f64[0];
          dStack_70 = (this->InitData).InitialTransform.Rotation.ZW.m128d_f64[1];
          TGeometryParticleHandleImp<double,3,1>::SetR
                    ((TGeometryParticleHandleImp<double,3,1> *)this->Particle_Internal,
                     (TRotation<double,3> *)&local_88,false);
          local_108._0_8_ = 0;
          local_108._8_4_ = 0;
          TKinematicGeometryParticleHandleImp<double,3,1>::SetVf
                    ((TKinematicGeometryParticleHandleImp<double,3,1> *)this->Particle_Internal,
                     &local_108,false);
          local_fc._0_8_ = 0;
          local_fc._8_4_ = 0;
          TKinematicGeometryParticleHandleImp<double,3,1>::SetWf
                    ((TKinematicGeometryParticleHandleImp<double,3,1> *)this->Particle_Internal,
                     &local_fc,false);
          pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)this->Particle_Internal;
          pTVar14 = TParticles<double,3>::GetX
                              (*(TParticles<double,3> **)pTVar7,*(int *)&pTVar7->field_0x8);
          TPBDRigidParticleHandleImp<double,3,1>::SetP(pTVar7,pTVar14);
          pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)this->Particle_Internal;
          uVar2 = *(uint *)&pTVar7->field_0x8;
          lVar6 = *(longlong *)pTVar7;
          uVar16 = 0;
          if ((int)uVar2 < *(int *)(lVar6 + 0x50)) {
            uVar16 = ~uVar2 >> 0x1f;
          }
          if (uVar16 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          puVar1 = (undefined8 *)(*(longlong *)(lVar6 + 0x48) + (longlong)(int)uVar2 * 0x10);
          local_b8._0_8_ = *puVar1;
          local_b8._8_8_ = puVar1[1];
          TPBDRigidParticleHandleImp<double,3,1>::SetQf(pTVar7,&local_b8);
          local_d0 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          local_c8 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          local_c0 = (double)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          TPBDRigidParticleHandleImp<double,3,1>::SetCenterOfMass
                    ((TPBDRigidParticleHandleImp<double,3,1> *)this->Particle_Internal,
                     (TVector<double,3> *)&local_d0,false);
          local_68 = UE::Math::TQuat<double>::Identity.X;
          dStack_60 = UE::Math::TQuat<double>::Identity.Y;
          local_58 = UE::Math::TQuat<double>::Identity.Z;
          dStack_50 = UE::Math::TQuat<double>::Identity.W;
          TPBDRigidParticleHandleImp<double,3,1>::SetRotationOfMass
                    ((TPBDRigidParticleHandleImp<double,3,1> *)this->Particle_Internal,
                     (TRotation<double,3> *)&local_68,false);
          TPBDRigidParticleHandleImp<double,3,1>::SetCCDEnabled
                    ((TPBDRigidParticleHandleImp<double,3,1> *)this->Particle_Internal,
                     (this->InitData).bCCDEnabled);
          TPBDRigidParticleHandleImp<double,3,1>::SetMACDEnabled
                    ((TPBDRigidParticleHandleImp<double,3,1> *)this->Particle_Internal,
                     (this->InitData).bMACDEnabled);
          pTVar3 = (this->Particle_External).Ptr;
          if (pTVar3 != (TPBDRigidParticle<double,3> *)0x0) {
            TGeometryParticleHandleImp<double,3,1>::SetDebugName
                      ((TGeometryParticleHandleImp<double,3,1> *)this->Particle_Internal,
                       (TSharedPtr<FString,1> *)&pTVar3->field_0x68);
          }
          pFVar11->bNeedsXRInitialization = false;
          bVar15 = ((this->InitData).bCheckConnectivity << 2 ^ pFVar11->field_0xf8) & 4U ^
                   pFVar11->field_0xf8;
          pFVar11->field_0xf8 = bVar15;
          pFVar11->field_0xf8 =
               ((this->InitData).bGenerateConnectivityEdges << 3 ^ bVar15) & 8 ^ bVar15;
        }
        return;
      }
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2667941677485784964>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                         ,0x7c,"Evolution");
      if (!bVar9) {
        return;
      }
    }
  }
code_r0x0001440e7040:
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// MergeGeometry_External @ 1440e88d0

void __thiscall
Chaos::FClusterUnionPhysicsProxy::MergeGeometry_External
          (FClusterUnionPhysicsProxy *this,
          TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> *pTVar5;
  <lambda_1> local_28;
  
  if ((this->Particle_External).Ptr != (TPBDRigidParticle<double,3> *)0x0) {
    local_28.ImplicitGeometries.ArrayNum = param_1->ArrayNum;
    if (local_28.ImplicitGeometries.ArrayNum == param_2->ArrayNum) {
      local_28.ImplicitGeometries.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
      (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_28.ImplicitGeometries.ArrayMax = param_1->ArrayMax;
      param_1->ArrayNum = 0;
      param_1->ArrayMax = 0;
      local_28.__this = this;
      ModifyAdditionOfChildrenToClusterUnionGeometry<Chaos::TPBDRigidParticle<double,3>,Chaos::TPBDRigidParticle<double,3>,_Chaos::FClusterUnionPhysicsProxy::MergeGeometry_External_::__l2::<lambda_1>_>
                ((this->Particle_External).Ptr,param_2,(this->InitData).ActorId,
                 (this->InitData).ComponentId,&local_28);
      DestructItems<TRefCountPtr<Chaos::FImplicitObject>,int>
                ((TRefCountPtr<Chaos::FImplicitObject> *)
                 local_28.ImplicitGeometries.AllocatorInstance.Data,
                 local_28.ImplicitGeometries.ArrayNum);
      if (local_28.ImplicitGeometries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.ImplicitGeometries.AllocatorInstance.Data);
      }
      pTVar5 = &this->GeometryChildParticles_External;
      if ((pTVar5 == param_2) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = param_2->ArrayNum;
      if (iVar1 != 0) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar1,&pTVar5->AllocatorInstance,
                           &(this->GeometryChildParticles_External).ArrayNum,
                           &(this->GeometryChildParticles_External).ArrayMax);
        memcpy((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8,
               (param_2->AllocatorInstance).Data,(longlong)iVar1 << 3);
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2667941677485784725>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                         ,0x16b,"ImplicitGeometries.Num() == ShapeParticles.Num()");
      if (bVar3) goto code_r0x0001440e8959;
    }
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2667941677485784725>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                     ,0x16b,"Particle_External");
  if (!bVar3) {
    return;
  }
code_r0x0001440e8959:
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// PullFromPhysicsState @ 1440e9280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Chaos::FClusterUnionPhysicsProxy::PullFromPhysicsState
          (FClusterUnionPhysicsProxy *this,FDirtyClusterUnionData *param_1,int param_2,
          FDirtyClusterUnionData *param_3,float *param_4,
          FDirtyRigidParticleReplicationErrorData *param_5,double param_6)

{
  int *piVar1;
  TArray<Chaos::FClusterUnionChildData,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  FImplicitObject *pFVar8;
  longlong lVar9;
  IPhysicsProxyBase *pIVar10;
  FShapeInstanceProxy *this_00;
  TThreadedSingleParticlePhysicsProxyBase<1> *this_01;
  TReferenceControllerBase<1> *pTVar11;
  code *pcVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  FDirtyRigidParticleReplicationErrorData *pFVar19;
  bool bVar20;
  undefined1 uVar21;
  int iVar22;
  TStatId TVar23;
  FProxyInterpolationError *pFVar24;
  longlong lVar25;
  double *pdVar26;
  TQuat<double> *pTVar27;
  TVector<double,3> *pTVar28;
  FDebugDrawQueue *pFVar29;
  FColor *pFVar30;
  TPBDRigidParticle<double,3> *pTVar31;
  int iVar32;
  FCollisionFilterData *pFVar33;
  FDirtyClusterUnionData *pFVar34;
  uint uVar35;
  FDirtyClusterUnionData *pFVar36;
  FScriptContainerElement *pFVar37;
  undefined1 *puVar38;
  FDirtyClusterUnionData *pFVar39;
  uint uVar40;
  longlong lVar41;
  FDirtyClusterUnionData *pFVar42;
  FScriptContainerElement *pFVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar58;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  uint uVar60;
  undefined1 auVar61 [16];
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar65;
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar70;
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auStackY_728 [32];
  char local_6d8;
  char local_6d7;
  undefined1 local_6d6;
  undefined1 local_6d5 [5];
  longlong local_6d0;
  float *local_6c8;
  int local_6c0;
  FCycleCounter local_6b8;
  FDirtyClusterUnionData *local_6a8;
  uint local_6a0;
  FDirtyClusterUnionData *local_698;
  FDirtyClusterUnionData *local_690;
  FProxyInterpolationError *local_688;
  FClusterUnionPhysicsProxy *local_680;
  double local_678;
  double local_670;
  FImplicitObject *local_668;
  IPhysicsProxyBase *local_660;
  TPBDRigidParticle<double,3> *local_658;
  FDirtyRigidParticleReplicationErrorData *local_650;
  double local_648;
  double dStack_640;
  undefined1 local_638 [16];
  undefined1 local_628 [16];
  double local_618;
  undefined8 local_610;
  float local_608;
  undefined8 local_604;
  float local_5fc;
  FSourceLocation local_5f8;
  TVector<double>_u_0 local_5d8;
  TVector<double>_u_0 local_5c0;
  TVector<double>_u_0 local_5a8;
  double local_590;
  double local_588;
  double local_580;
  double local_578;
  double local_570;
  double local_568;
  TVector<double>_u_0 local_558;
  TVector<double>_u_0 local_540;
  TVector<double>_u_0 local_528;
  TVector<double>_u_0 local_510;
  TVector<double>_u_0 local_4f8;
  TVector<double>_u_0 local_4e0;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  double local_4a0;
  double local_498;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  TVector<double>_u_0 local_468;
  TVector<double>_u_0 local_450;
  TVector<double>_u_0 local_438;
  FCollisionFilterData local_420;
  TQuat<double> local_408;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  undefined1 local_3c8 [16];
  double local_3b8;
  undefined1 local_3b0 [16];
  double local_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [24];
  undefined1 local_320 [56];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  TQuat<double> local_2a8;
  undefined1 local_288 [32];
  TQuat<double> local_268;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_728;
  local_6c8 = param_4;
  local_650 = param_5;
  local_6c0 = param_2;
  local_698 = param_1;
  local_690 = param_3;
  local_680 = this;
  TVar23 = FThreadSafeStaticStatInner<Chaos::FStat_STAT_ClusterUnionPhysicsProxyPullFromPhysicsState,1>
           ::GetStatId((FThreadSafeStaticStatInner<Chaos::FStat_STAT_ClusterUnionPhysicsProxyPullFromPhysicsState,1>
                        *)&StatPtr_STAT_ClusterUnionPhysicsProxyPullFromPhysicsState);
  local_5f8.Impl._Line = 0x1de;
  local_5f8.Impl._Column = 3;
  local_5f8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
  ;
  local_6b8.StatId.ComparisonIndex.Value = 0;
  local_6b8.StatId.Number = 0;
  local_6b8.EmittedEvent = 0;
  local_5f8.Impl._Function =
       "bool __cdecl Chaos::FClusterUnionPhysicsProxy::PullFromPhysicsState(const struct Chaos::FDirtyClusterUnionData &,int,const struct Chaos::FDirtyClusterUnionData *,const float *,const struct Chaos::FDirtyRigidParticleReplicationErrorData *,const double)"
  ;
  FCycleCounter::Start
            (&local_6b8,*(TStatIdData **)&(TVar23.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_5f8);
  dVar6 = __real_4000000000000000;
  if ((this->Particle_External).Ptr == (TPBDRigidParticle<double,3> *)0x0) {
    bVar20 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2667941677485784609>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                        ,0x1df,"Particle_External");
    if (bVar20) {
      pcVar12 = (code *)swi(3);
      uVar21 = (*pcVar12)();
      return (bool)uVar21;
    }
  }
  else {
    pFVar36 = param_1;
    if (param_3 != (FDirtyClusterUnionData *)0x0) {
      pFVar36 = param_3;
    }
    local_6a8 = (FDirtyClusterUnionData *)pFVar36->_padding_;
    if (local_6a8 != (FDirtyClusterUnionData *)0x0) {
      local_688 = (FProxyInterpolationError *)(this->InterpolationData).Ptr;
      if (param_5 != (FDirtyRigidParticleReplicationErrorData *)0x0) {
        pFVar24 = GetOrCreateErrorInterpolationData<FProxyInterpolationError>(this);
        local_688 = pFVar24;
        if ((pFVar24 == (FProxyInterpolationError *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("InterpData",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                                ,0x1ef,L""), bVar20)) {
          pcVar12 = (code *)swi(3);
          uVar21 = (*pcVar12)();
          return (bool)uVar21;
        }
        fVar4 = RenderInterpolationCVars::RenderInterpMaximumErrorCorrectionDesyncTimeBeforeSnapping
        ;
        fVar3 = RenderInterpolationCVars::RenderInterpMaximumErrorCorrectionBeforeSnapping;
        dVar5 = *(double *)&(param_5->ErrorX).field_0x8;
        dVar52 = *(double *)&(param_5->ErrorX).field_0x10;
        dVar5 = dVar5 * dVar5 + *(double *)&param_5->ErrorX * *(double *)&param_5->ErrorX +
                dVar52 * dVar52;
        lVar25 = (**(code **)(*(longlong *)pFVar24 + 0x68))(pFVar24);
        if (lVar25 != 0) {
          fVar3 = *(float *)(lVar25 + 4);
          fVar4 = *(float *)(lVar25 + 8);
        }
        local_670 = (double)fVar4;
        local_678 = dVar5;
        if ((double)fVar3 * (double)fVar3 <= dVar5) {
          pTVar31 = (this->Particle_External).Ptr;
          local_590 = (double)*(float *)&pTVar31->field_0xa0;
          local_588 = (double)*(float *)&pTVar31->field_0xa4;
          local_580 = (double)*(float *)&pTVar31->field_0xa8;
          bVar20 = `Chaos::FClusterUnionPhysicsProxy::PullFromPhysicsState'::__l11::<lambda_1>::
                   operator()(&local_678,(TVector<double,3> *)&local_590);
          if (((!bVar20) &&
              (bVar20 = `Chaos::FClusterUnionPhysicsProxy::PullFromPhysicsState'::__l11::<lambda_1>
                        ::operator()(&local_678,&param_1->V), !bVar20)) &&
             (param_3 != (FDirtyClusterUnionData *)0x0)) {
            `Chaos::FClusterUnionPhysicsProxy::PullFromPhysicsState'::__l11::<lambda_1>::operator()
                      (&local_678,&param_3->V);
          }
        }
        local_3e8 = (param_5->ErrorR).X;
        dStack_3e0 = (param_5->ErrorR).Y;
        local_3d8 = (param_5->ErrorR).Z;
        dStack_3d0 = (param_5->ErrorR).W;
        local_488 = *(undefined8 *)&param_5->ErrorX;
        uStack_480 = *(undefined8 *)&(param_5->ErrorX).field_0x8;
        local_478 = *(undefined8 *)&(param_5->ErrorX).field_0x10;
        (**(code **)(*(longlong *)pFVar24 + 0x28))(pFVar24,&local_488,&local_3e8);
      }
      pTVar2 = &(this->SyncedData_External).ChildParticles;
      (this->SyncedData_External).bIsAnchored = pFVar36->bIsAnchored;
      (this->SyncedData_External).bDidSyncGeometry = false;
      uVar35 = (pFVar36->ChildParticles).ArrayNum;
      if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
      }
      piVar1 = &(this->SyncedData_External).ChildParticles.ArrayMax;
      (this->SyncedData_External).ChildParticles.ArrayNum = 0;
      if (*piVar1 != uVar35) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x90,0x10,uVar35,&pTVar2->AllocatorInstance,0,piVar1);
      }
      iVar32 = (pFVar36->ChildParticles).ArrayNum;
      pFVar43 = (pFVar36->ChildParticles).AllocatorInstance.Data;
      pFVar37 = pFVar43 + (longlong)iVar32 * 0x90;
      while( true ) {
        if ((pFVar36->ChildParticles).ArrayNum != iVar32) {
          local_6d6 = 0;
          `TCheckedPointerIterator<Chaos::FDirtyClusterUnionParticleData_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(&local_6d6);
        }
        pFVar39 = local_690;
        pFVar42 = local_698;
        if (pFVar43 == pFVar37) break;
        local_238 = *(undefined8 *)(pFVar43 + 0x10);
        uStack_230 = *(undefined8 *)(pFVar43 + 0x18);
        local_248 = *(undefined4 *)pFVar43;
        local_228 = *(undefined8 *)(pFVar43 + 0x20);
        uStack_220 = *(undefined8 *)(pFVar43 + 0x28);
        pFVar7 = (pTVar2->AllocatorInstance).Data;
        local_1d8 = *(undefined8 *)(pFVar43 + 0x70);
        uStack_1d0 = *(undefined8 *)(pFVar43 + 0x78);
        local_218 = *(undefined8 *)(pFVar43 + 0x30);
        uStack_210 = *(undefined8 *)(pFVar43 + 0x38);
        local_1c8 = *(undefined4 *)(pFVar43 + 0x80);
        local_208 = *(undefined8 *)(pFVar43 + 0x40);
        uStack_200 = *(undefined8 *)(pFVar43 + 0x48);
        local_1f8 = *(undefined8 *)(pFVar43 + 0x50);
        uStack_1f0 = *(undefined8 *)(pFVar43 + 0x58);
        local_1e8 = *(undefined8 *)(pFVar43 + 0x60);
        uStack_1e0 = *(undefined8 *)(pFVar43 + 0x68);
        if (((pFVar7 <= (FScriptContainerElement *)&local_248) &&
            ((FScriptContainerElement *)&local_248 < pFVar7 + (longlong)*piVar1 * 0x90)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar12 = (code *)swi(3);
          uVar21 = (*pcVar12)();
          return (bool)uVar21;
        }
        iVar22 = (this->SyncedData_External).ChildParticles.ArrayNum;
        if (iVar22 == *piVar1) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1090,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->SyncedData_External).ChildParticles.ArrayNum = iVar22 + 1;
        lVar25 = (longlong)iVar22;
        pFVar7 = (pTVar2->AllocatorInstance).Data;
        pFVar43 = pFVar43 + 0x90;
        *(ulonglong *)(pFVar7 + lVar25 * 0x90) = CONCAT44(uStack_244,local_248);
        *(undefined8 *)(pFVar7 + lVar25 * 0x90 + 8) = uStack_240;
        *(undefined8 *)(pFVar7 + lVar25 * 0x90 + 0x10) = local_238;
        *(undefined8 *)(pFVar7 + lVar25 * 0x90 + 0x10 + 8) = uStack_230;
        *(undefined8 *)(pFVar7 + lVar25 * 0x90 + 0x20) = local_228;
        *(undefined8 *)(pFVar7 + lVar25 * 0x90 + 0x20 + 8) = uStack_220;
        *(undefined8 *)(pFVar7 + lVar25 * 0x90 + 0x30) = local_218;
        *(undefined8 *)(pFVar7 + lVar25 * 0x90 + 0x30 + 8) = uStack_210;
        *(undefined8 *)(pFVar7 + lVar25 * 0x90 + 0x40) = local_208;
        *(undefined8 *)(pFVar7 + lVar25 * 0x90 + 0x40 + 8) = uStack_200;
        *(undefined8 *)(pFVar7 + lVar25 * 0x90 + 0x50) = local_1f8;
        *(undefined8 *)(pFVar7 + lVar25 * 0x90 + 0x50 + 8) = uStack_1f0;
        *(undefined8 *)(pFVar7 + lVar25 * 0x90 + 0x60) = local_1e8;
        *(undefined8 *)(pFVar7 + lVar25 * 0x90 + 0x60 + 8) = uStack_1e0;
        *(undefined8 *)(pFVar7 + lVar25 * 0x90 + 0x70) = local_1d8;
        *(undefined8 *)(pFVar7 + lVar25 * 0x90 + 0x70 + 8) = uStack_1d0;
        *(ulonglong *)(pFVar7 + lVar25 * 0x90 + 0x80) = CONCAT44(uStack_1c4,local_1c8);
        *(undefined8 *)(pFVar7 + lVar25 * 0x90 + 0x80 + 8) = uStack_1c0;
      }
      pFVar8 = (pFVar36->Geometry).Reference;
      if (pFVar8 != (FImplicitObject *)0x0) {
        pTVar31 = (this->Particle_External).Ptr;
        LOCK();
        *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
        UNLOCK();
        local_668 = pFVar8;
        TGeometryParticle<double,3>::SetGeometry
                  ((TGeometryParticle<double,3> *)pTVar31,(FImplicitObject *)&local_668);
        (this->SyncedData_External).bDidSyncGeometry = true;
      }
      dVar5 = __real_3ff0000000000000;
      dVar52 = (double)pFVar36->Mass;
      if (dVar52 <= 0.0) {
        dVar46 = 0.0;
      }
      else {
        dVar46 = __real_3ff0000000000000 / dVar52;
      }
      (((this->Particle_External).Ptr)->MMassProps).Property.MM = dVar52;
      (((this->Particle_External).Ptr)->MMassProps).Property.MInvM = dVar46;
      local_610 = *(undefined8 *)&pFVar36->Inertia;
      local_608 = *(float *)&(pFVar36->Inertia).field_0x8;
      dVar46 = (double)*(float *)&pFVar36->Inertia;
      dVar52 = (double)*(float *)&(pFVar36->Inertia).field_0x4;
      if (((dVar46 == 0.0) && (dVar52 == 0.0)) && ((double)local_608 == 0.0)) {
        dVar62 = 0.0;
        dVar52 = 0.0;
        dVar46 = 0.0;
      }
      else {
        dVar62 = dVar5 / (double)local_608;
        dVar52 = dVar5 / dVar52;
        dVar46 = dVar5 / dVar46;
      }
      pTVar31 = (this->Particle_External).Ptr;
      *(undefined8 *)&(pTVar31->MMassProps).Property.MI = local_610;
      *(float *)&(pTVar31->MMassProps).Property.MI.field_0x8 = local_608;
      pTVar31 = (this->Particle_External).Ptr;
      local_5fc = (float)dVar62;
      local_604 = CONCAT44((float)dVar52,(float)dVar46);
      *(undefined8 *)&(pTVar31->MMassProps).Property.MInvI = local_604;
      *(float *)&(pTVar31->MMassProps).Property.MInvI.field_0x8 = local_5fc;
      TPBDRigidParticle<double,3>::SetObjectState
                ((this->Particle_External).Ptr,pFVar36->ObjectState,true,false);
      pTVar31 = (this->Particle_External).Ptr;
      uVar35 = 0;
      iVar32 = *(int *)&pTVar31->field_0x90;
      local_658 = pTVar31;
      if (0 < iVar32) {
        lVar25 = 0;
        local_6d0 = 0;
        lVar41 = 0;
        do {
          pTVar31 = local_658;
          puVar38 = &local_658->field_0x80;
          uVar40 = ~uVar35 >> 0x1f;
          uVar60 = 0;
          if ((int)uVar35 < iVar32) {
            uVar60 = uVar40;
          }
          if ((uVar60 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar12 = (code *)swi(3);
            uVar21 = (*pcVar12)();
            return (bool)uVar21;
          }
          if (*(undefined1 **)&pTVar31->field_0x88 != (undefined1 *)0x0) {
            puVar38 = *(undefined1 **)&pTVar31->field_0x88;
          }
          lVar9 = *(longlong *)(puVar38 + lVar25 * 8);
          if ((lVar9 != 0) && (-1 < (int)uVar35)) {
            if ((int)uVar35 < (pFVar36->CollisionData).ArrayNum) {
              uVar60 = 0;
              if ((int)uVar35 < (pFVar36->CollisionData).ArrayNum) {
                uVar60 = uVar40;
              }
              if ((uVar60 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar12 = (code *)swi(3);
                uVar21 = (*pcVar12)();
                return (bool)uVar21;
              }
              pFVar43 = (pFVar36->CollisionData).AllocatorInstance.Data;
              uVar14 = *(undefined8 *)(pFVar43 + lVar41);
              uVar15 = *(undefined8 *)(pFVar43 + lVar41 + 8);
              if ((*(uint *)(lVar9 + 8) & 3) == 0) {
                pIVar10 = *(IPhysicsProxyBase **)(lVar9 + 0x48);
                *(undefined8 *)(lVar9 + 0x50) = uVar14;
                *(undefined8 *)(lVar9 + 0x58) = uVar15;
                *(undefined1 (*) [16])(lVar9 + 0x60) =
                     *(undefined1 (*) [16])(pFVar43 + lVar41 + 0x10);
                *(undefined1 (*) [16])(lVar9 + 0x70) =
                     *(undefined1 (*) [16])(pFVar43 + lVar41 + 0x20);
                uVar60 = *(uint *)(lVar9 + 0xc);
                *(uint *)(lVar9 + 0xc) = uVar60 | 1;
                if (((uVar60 == 0) && (pIVar10 != (IPhysicsProxyBase *)0x0)) &&
                   (pIVar10->Solver != (FPhysicsSolverBase *)0x0)) {
                  FPhysicsSolverBase::AddDirtyProxyShape
                            (pIVar10->Solver,pIVar10,*(uint *)(lVar9 + 8) >> 3);
                }
              }
              else {
                *(undefined8 *)(lVar9 + 0x48) = uVar14;
                *(undefined8 *)(lVar9 + 0x50) = uVar15;
                *(undefined1 (*) [16])(lVar9 + 0x58) =
                     *(undefined1 (*) [16])(pFVar43 + lVar41 + 0x10);
                *(undefined1 (*) [16])(lVar9 + 0x68) =
                     *(undefined1 (*) [16])(pFVar43 + lVar41 + 0x20);
              }
            }
            if ((int)uVar35 < (pFVar36->QueryData).ArrayNum) {
              lVar9 = *(longlong *)(puVar38 + lVar25 * 8);
              uVar60 = 0;
              if ((int)uVar35 < (pFVar36->QueryData).ArrayNum) {
                uVar60 = uVar40;
              }
              if ((uVar60 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar12 = (code *)swi(3);
                uVar21 = (*pcVar12)();
                return (bool)uVar21;
              }
              pFVar33 = (FCollisionFilterData *)
                        ((pFVar36->QueryData).AllocatorInstance.Data + local_6d0);
              if ((*(uint *)(lVar9 + 8) & 3) == 0) {
                local_420.Word0 = pFVar33->Word0;
                local_420.Word1 = pFVar33->Word1;
                local_420.Word2 = pFVar33->Word2;
                local_420.Word3 = pFVar33->Word3;
                local_6a0 = *(uint *)(lVar9 + 8) >> 3;
                local_660 = *(IPhysicsProxyBase **)&((FCollisionData *)(lVar9 + 0x48))->QueryData;
                FCollisionData::SetQueryData((FCollisionData *)(lVar9 + 0x50),&local_420);
                uVar60 = *(uint *)(lVar9 + 0xc);
                *(uint *)(lVar9 + 0xc) = uVar60 | 1;
                if (((uVar60 == 0) && (local_660 != (IPhysicsProxyBase *)0x0)) &&
                   (local_660->Solver != (FPhysicsSolverBase *)0x0)) {
                  FPhysicsSolverBase::AddDirtyProxyShape(local_660->Solver,local_660,local_6a0);
                }
              }
              else {
                FCollisionData::SetQueryData((FCollisionData *)(lVar9 + 0x48),pFVar33);
              }
            }
            else if ((int)uVar35 < 0) goto LAB_1440e9bea;
            if ((int)uVar35 < (pFVar36->SimData).ArrayNum) {
              this_00 = *(FShapeInstanceProxy **)(puVar38 + lVar25 * 8);
              uVar60 = 0;
              if ((int)uVar35 < (pFVar36->SimData).ArrayNum) {
                uVar60 = uVar40;
              }
              if ((uVar60 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar12 = (code *)swi(3);
                uVar21 = (*pcVar12)();
                return (bool)uVar21;
              }
              pFVar33 = (FCollisionFilterData *)
                        ((pFVar36->SimData).AllocatorInstance.Data + (longlong)(int)uVar35 * 0x10);
              if ((this_00->_padding_ & 3) == 0) {
                FShapeInstanceProxy::SetSimData(this_00,pFVar33);
              }
              else {
                FCollisionData::SetSimData((FCollisionData *)&this_00->Proxy,pFVar33);
              }
            }
          }
LAB_1440e9bea:
          local_6d0 = local_6d0 + 0x10;
          uVar35 = uVar35 + 1;
          lVar25 = lVar25 + 1;
          lVar41 = lVar41 + 0x30;
          iVar32 = *(int *)&local_658->field_0x90;
        } while ((int)uVar35 < iVar32);
        pTVar31 = (local_680->Particle_External).Ptr;
        pFVar39 = local_690;
        this = local_680;
        pFVar42 = local_698;
      }
      pFVar24 = local_688;
      iVar32 = local_6c0;
      if (pFVar39 == (FDirtyClusterUnionData *)0x0) {
        if (*(int *)&(local_6a8->X).field_0x8 <= local_6c0) {
          uVar14 = *(undefined8 *)&(pFVar42->X).field_0x8;
          *(undefined8 *)&pTVar31->field_0x20 = *(undefined8 *)&(pFVar42->X).field_0x0;
          *(undefined8 *)&pTVar31->field_0x28 = uVar14;
          *(undefined8 *)&pTVar31->field_0x30 = *(undefined8 *)&(pFVar42->X).field_0x10;
          pTVar31 = (this->Particle_External).Ptr;
        }
        if (*(int *)&local_6a8->V <= local_6c0) {
          local_4c8 = (pFVar42->R).X;
          dStack_4c0 = (pFVar42->R).Y;
          local_4b8 = (pFVar42->R).Z;
          dStack_4b0 = (pFVar42->R).W;
          *(float *)&pTVar31->field_0x40 = (float)local_4c8;
          *(float *)&pTVar31->field_0x44 = (float)dStack_4c0;
          *(float *)&pTVar31->field_0x48 = (float)local_4b8;
          *(float *)&pTVar31->field_0x4c = (float)dStack_4b0;
          pTVar31 = (this->Particle_External).Ptr;
        }
        if (*(int *)&(local_6a8->W).field_0x10 <= local_6c0) {
          dVar6 = *(double *)&(pFVar42->V).field_0x8;
          dVar5 = *(double *)&(pFVar42->V).field_0x10;
          *(float *)&pTVar31->field_0xa0 = (float)*(double *)&pFVar42->V;
          *(float *)&pTVar31->field_0xa4 = (float)dVar6;
          *(float *)&pTVar31->field_0xa8 = (float)dVar5;
          pTVar31 = (this->Particle_External).Ptr;
        }
        if (*(int *)&(local_6a8->ChildParticles).AllocatorInstance.Data <= local_6c0) {
          dVar6 = *(double *)&(pFVar42->W).field_0x8;
          dVar5 = *(double *)&(pFVar42->W).field_0x10;
          *(float *)&pTVar31->field_0xac = (float)*(double *)&pFVar42->W;
          *(float *)&pTVar31->field_0xb0 = (float)dVar6;
          *(float *)&pTVar31->field_0xb4 = (float)dVar5;
        }
      }
      else {
        if (local_688 == (FProxyInterpolationError *)0x0) {
          local_6d8 = '\0';
        }
        else {
          (**(code **)(*(longlong *)local_688 + 0x30))(local_688,local_6c0,SUB84(param_6,0));
          local_6d8 = (**(code **)(*(longlong *)pFVar24 + 0x10))(pFVar24);
        }
        pTVar28 = (TVector<double,3> *)&local_6a8->_padding_;
        local_6d7 = '\0';
        iVar22 = *(int *)&(local_6a8->X).field_0x8;
        if (iVar22 <= iVar32) {
          if (iVar22 < iVar32) {
            pTVar28 = &pFVar42->X;
          }
          if (pTVar28 != (TVector<double,3> *)0x0) {
            if (pFVar24 != (FProxyInterpolationError *)0x0) {
              local_578 = *(double *)&pFVar39->X - *(double *)pTVar28;
              local_570 = *(double *)&(pFVar39->X).field_0x8 - *(double *)&pTVar28->field_0x8;
              local_568 = *(double *)&(pFVar39->X).field_0x10 - *(double *)&pTVar28->field_0x10;
              local_6d7 = (**(code **)(*(longlong *)pFVar24 + 0x38))
                                    (pFVar24,&local_578,
                                     RenderInterpolationCVars::
                                     RenderInterpErrorDirectionalDecayMultiplier);
            }
            dVar52 = *(double *)&pTVar28->field_0x10;
            dVar46 = *(double *)&pTVar28->field_0x8;
            dVar66 = *(double *)&(pFVar39->X).field_0x10 - dVar52;
            dVar62 = *(double *)&pFVar39->X;
            dVar70 = *(double *)&(pFVar39->X).field_0x8 - dVar46;
            if (local_6d8 == '\0') {
              dVar58 = (double)*local_6c8;
              dVar62 = (dVar62 - *(double *)pTVar28) * dVar58 + *(double *)pTVar28;
              local_3b8 = dVar58 * dVar66 + dVar52;
              dVar46 = dVar58 * dVar70 + dVar46;
            }
            else {
              dVar58 = *(double *)pTVar28;
              dVar65 = (double)*local_6c8;
              pdVar26 = (double *)(**(code **)(*(longlong *)pFVar24 + 0x18))(pFVar24,local_338);
              local_3b8 = dVar65 * dVar66 + dVar52 + pdVar26[2];
              dVar46 = dVar65 * dVar70 + dVar46 + pdVar26[1];
              dVar62 = (dVar62 - dVar58) * dVar65 + dVar58 + *pdVar26;
            }
            pTVar31 = (this->Particle_External).Ptr;
            local_3c8._8_8_ = dVar46;
            local_3c8._0_8_ = dVar62;
            *(undefined1 (*) [16])&pTVar31->field_0x20 = local_3c8;
            *(double *)&pTVar31->field_0x30 = local_3b8;
          }
        }
        if (*(int *)&local_6a8->V <= iVar32) {
          pFVar34 = local_6a8;
          if (*(int *)&local_6a8->V < iVar32) {
            pFVar34 = pFVar42;
          }
          pTVar27 = &pFVar34->R;
          if (pTVar27 != (TQuat<double> *)0x0) {
            auVar59._0_8_ = (double)*local_6c8;
            auVar59._8_8_ = 0;
            if (local_6d8 == '\0') {
              pTVar27 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                  (&local_268,pTVar27,&pFVar39->R,auVar59._0_8_);
              local_498 = __real_3e45798ee0000000;
              dVar52 = pTVar27->X;
              dVar46 = pTVar27->Y;
              dVar62 = pTVar27->Z;
              dVar66 = pTVar27->W;
              dVar70 = dVar52 * dVar52 + dVar62 * dVar62;
              dVar58 = dVar46 * dVar46 + dVar66 * dVar66;
              auVar63._8_4_ = SUB84(dVar58,0);
              auVar63._0_8_ = dVar70;
              auVar63._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
              auVar51._0_8_ = auVar63._8_8_ + dVar70;
              auVar51._8_8_ = dVar70 + dVar58;
              auVar59 = sqrtpd(auVar59,auVar51);
              uVar44 = -(ulonglong)(__real_3e45798ee0000000 <= auVar51._0_8_);
              uVar45 = -(ulonglong)(__real_3e45798ee0000000 <= auVar51._8_8_);
              auVar63 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              auVar59);
              uVar35 = (uint)(uVar44 >> 0x20);
              uVar60 = (uint)(uVar45 >> 0x20);
              auVar68._0_8_ = uVar44 & (ulonglong)(auVar63._0_8_ * dVar52);
              uVar13 = uVar45 & (ulonglong)(auVar63._8_8_ * dVar46);
              auVar68._8_4_ = (undefined4)uVar13;
              auVar68._12_4_ = (undefined4)(uVar13 >> 0x20);
              auVar56._0_4_ =
                   ~(uint)uVar44 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
              auVar56._4_4_ =
                   ~uVar35 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0]
                                   >> 0x20);
              auVar56._8_4_ =
                   ~(uint)uVar45 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              auVar56._12_4_ =
                   ~uVar60 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1]
                                   >> 0x20);
              auVar69 = auVar68 | auVar56;
              auVar59 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar59);
              auVar72._0_4_ =
                   ~(uint)uVar44 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
              auVar72._4_4_ =
                   ~uVar35 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2]
                                   >> 0x20);
              auVar72._8_4_ =
                   ~(uint)uVar45 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              auVar72._12_4_ =
                   ~uVar60 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3]
                                   >> 0x20);
              auVar57._0_8_ = (ulonglong)(auVar59._0_8_ * dVar62) & uVar44;
              uVar45 = (ulonglong)(auVar59._8_8_ * dVar66) & uVar45;
              auVar57._8_4_ = (undefined4)uVar45;
              auVar57._12_4_ = (undefined4)(uVar45 >> 0x20);
              auVar73 = auVar72 | auVar57;
              local_398 = auVar69;
              local_388 = auVar73;
            }
            else {
              pTVar27 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                  (&local_2a8,pTVar27,&pFVar39->R,auVar59._0_8_);
              local_378 = pTVar27->X;
              dStack_370 = pTVar27->Y;
              local_368 = pTVar27->Z;
              dStack_360 = pTVar27->W;
              dVar52 = local_378 * local_378 + local_368 * local_368;
              dVar46 = dStack_370 * dStack_370 + dStack_360 * dStack_360;
              local_4a0 = __real_3e45798ee0000000;
              auVar47._8_4_ = SUB84(dVar46,0);
              auVar47._0_8_ = dVar52;
              auVar47._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
              auVar48._0_8_ = auVar47._8_8_ + dVar52;
              auVar48._8_8_ = dVar52 + dVar46;
              auVar59 = sqrtpd(auVar59,auVar48);
              uVar44 = -(ulonglong)(__real_3e45798ee0000000 <= auVar48._0_8_);
              uVar45 = -(ulonglong)(__real_3e45798ee0000000 <= auVar48._8_8_);
              auVar63 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                              auVar59);
              uVar35 = (uint)(uVar44 >> 0x20);
              uVar60 = (uint)(uVar45 >> 0x20);
              auVar64._0_8_ = uVar44 & (ulonglong)(auVar63._0_8_ * local_378);
              uVar13 = uVar45 & (ulonglong)(auVar63._8_8_ * dStack_370);
              auVar64._8_4_ = (undefined4)uVar13;
              auVar64._12_4_ = (undefined4)(uVar13 >> 0x20);
              auVar53._0_4_ =
                   ~(uint)uVar44 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
              auVar53._4_4_ =
                   ~uVar35 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0]
                                   >> 0x20);
              auVar53._8_4_ =
                   ~(uint)uVar45 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              auVar53._12_4_ =
                   ~uVar60 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1]
                                   >> 0x20);
              auVar64 = auVar64 | auVar53;
              auVar59 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                              auVar59);
              auVar61._0_4_ =
                   ~(uint)uVar44 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
              auVar61._4_4_ =
                   ~uVar35 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2]
                                   >> 0x20);
              auVar61._8_4_ =
                   ~(uint)uVar45 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              auVar61._12_4_ =
                   ~uVar60 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3]
                                   >> 0x20);
              auVar54._0_8_ = (ulonglong)(auVar59._0_8_ * local_368) & uVar44;
              uVar45 = (ulonglong)(auVar59._8_8_ * dStack_360) & uVar45;
              auVar54._8_4_ = (undefined4)uVar45;
              auVar54._12_4_ = (undefined4)(uVar45 >> 0x20);
              auVar61 = auVar61 | auVar54;
              pdVar26 = (double *)
                        (**(code **)(*(longlong *)pFVar24 + 0x20))(pFVar24,local_288,*local_6c8);
              dVar71 = auVar64._0_8_;
              dVar65 = auVar64._8_8_;
              auVar67._8_4_ = auVar64._0_4_;
              auVar67._0_8_ = dVar71;
              auVar67._12_4_ = auVar64._4_4_;
              dVar70 = auVar61._0_8_;
              dVar58 = auVar61._8_8_;
              auVar49._8_4_ = auVar61._8_4_;
              auVar49._0_8_ = dVar58;
              auVar49._12_4_ = auVar61._12_4_;
              dVar52 = *pdVar26;
              dVar46 = pdVar26[1];
              auVar55._8_4_ = auVar64._8_4_;
              auVar55._0_8_ = dVar65;
              auVar55._12_4_ = auVar64._12_4_;
              dVar62 = SUB168(*(undefined1 (*) [16])(pdVar26 + 2),0);
              dVar66 = SUB168(*(undefined1 (*) [16])(pdVar26 + 2),8);
              auVar50._8_4_ = auVar61._0_4_;
              auVar50._0_8_ = dVar70;
              auVar50._12_4_ = auVar61._4_4_;
              auVar69._0_8_ =
                   dVar71 * dVar66 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                   + dVar58 * dVar52 +
                   dVar65 * dVar62 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                   + dVar70 * dVar46 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              auVar69._8_8_ =
                   auVar67._8_8_ * dVar62 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   auVar49._8_8_ * dVar46 +
                   auVar55._8_8_ * dVar66 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   auVar50._8_8_ * dVar52 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              auVar73._0_8_ =
                   dVar71 * dVar46 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                   + dVar58 * dVar62 +
                   dVar65 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                   + dVar70 * dVar66 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
              auVar73._8_8_ =
                   dVar71 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                   + dVar58 * dVar66 +
                   dVar65 * dVar46 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                   + dVar70 * dVar62 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              local_358 = auVar69;
              local_348 = auVar73;
            }
            pTVar31 = (this->Particle_External).Ptr;
            *(float *)&pTVar31->field_0x40 = (float)auVar69._0_8_;
            *(float *)&pTVar31->field_0x44 = (float)auVar69._8_8_;
            *(float *)&pTVar31->field_0x48 = (float)auVar73._0_8_;
            *(float *)&pTVar31->field_0x4c = (float)auVar73._8_8_;
          }
        }
        iVar22 = *(int *)&(local_6a8->W).field_0x10;
        pTVar28 = (TVector<double,3> *)&(local_6a8->V).field_0x10;
        if (iVar22 <= iVar32) {
          if (iVar22 < iVar32) {
            pTVar28 = &pFVar42->V;
          }
          if (pTVar28 != (TVector<double,3> *)0x0) {
            dVar52 = *(double *)&(pFVar39->V).field_0x8;
            dVar46 = *(double *)&pTVar28->field_0x8;
            dVar62 = *(double *)&(pFVar39->V).field_0x10;
            dVar66 = *(double *)&pTVar28->field_0x10;
            dVar65 = (double)*local_6c8;
            dVar70 = *(double *)&pTVar28->field_0x8;
            dVar58 = *(double *)&pTVar28->field_0x10;
            pTVar31 = (this->Particle_External).Ptr;
            *(float *)&pTVar31->field_0xa0 =
                 (float)((*(double *)&pFVar39->V - *(double *)pTVar28) * dVar65 + *(double *)pTVar28
                        );
            *(float *)&pTVar31->field_0xa4 = (float)((dVar52 - dVar46) * dVar65 + dVar70);
            *(float *)&pTVar31->field_0xa8 = (float)((dVar62 - dVar66) * dVar65 + dVar58);
          }
        }
        pTVar28 = (TVector<double,3> *)&local_6a8->Mass;
        iVar22 = *(int *)&(local_6a8->ChildParticles).AllocatorInstance.Data;
        if (iVar22 <= iVar32) {
          if (iVar22 < iVar32) {
            pTVar28 = &pFVar42->W;
          }
          if (pTVar28 != (TVector<double,3> *)0x0) {
            dVar52 = *(double *)&(pFVar39->W).field_0x8;
            dVar46 = *(double *)&pTVar28->field_0x8;
            dVar62 = *(double *)&(pFVar39->W).field_0x10;
            dVar66 = *(double *)&pTVar28->field_0x10;
            dVar65 = (double)*local_6c8;
            dVar70 = *(double *)&pTVar28->field_0x8;
            dVar58 = *(double *)&pTVar28->field_0x10;
            pTVar31 = (this->Particle_External).Ptr;
            *(float *)&pTVar31->field_0xac =
                 (float)((*(double *)&pFVar39->W - *(double *)pTVar28) * dVar65 + *(double *)pTVar28
                        );
            *(float *)&pTVar31->field_0xb0 = (float)((dVar52 - dVar46) * dVar65 + dVar70);
            *(float *)&pTVar31->field_0xb4 = (float)((dVar62 - dVar66) * dVar65 + dVar58);
          }
        }
        if (RenderInterpolationCVars::bRenderInterpDebugDraw != false) {
          dVar52 = (double)RenderInterpolationCVars::RenderInterpDebugDrawZOffset;
          pFVar29 = FDebugDrawQueue::GetInstance();
          fVar4 = __real_40a00000;
          fVar3 = __real_3f000000;
          local_468._s_0.X = ___xmm_3ff00000000000004000000000000000;
          local_468._s_0.Y = _UNK_15076b828;
          local_558._s_0.X = (double)*(undefined8 *)&pFVar39->X;
          local_558._s_0.Y = (double)*(undefined8 *)&(pFVar39->X).field_0x8;
          local_468._s_0.Z = dVar5;
          local_558._s_0.Z = dVar52 + *(double *)&(pFVar39->X).field_0x10;
          FDebugDrawQueue::DrawDebugBox
                    (pFVar29,(TVector<double> *)&local_558._s_0,(TVector<double> *)&local_468._s_0,
                     &pFVar39->R,&FColor::Yellow,false,__real_40a00000,'\0',__real_3f000000);
          pFVar29 = FDebugDrawQueue::GetInstance();
          local_540._s_0.X = (double)*(undefined8 *)&pFVar39->X;
          local_540._s_0.Y = (double)*(undefined8 *)&(pFVar39->X).field_0x8;
          local_540._s_0.Z = dVar52 + *(double *)&(pFVar39->X).field_0x10;
          local_528._s_0.X = (double)*(undefined8 *)&pFVar42->X;
          local_528._s_0.Y = (double)*(undefined8 *)&(pFVar42->X).field_0x8;
          local_528._s_0.Z = dVar52 + *(double *)&(pFVar42->X).field_0x10;
          FDebugDrawQueue::DrawDebugDirectionalArrow
                    (pFVar29,(TVector<double> *)&local_528._s_0,(TVector<double> *)&local_540._s_0,
                     fVar3,&FColor::Yellow,false,fVar4,'\0',fVar3);
          pFVar29 = FDebugDrawQueue::GetInstance();
          pTVar31 = (this->Particle_External).Ptr;
          pFVar30 = &FColor::Green;
          local_408.X = (double)*(float *)&pTVar31->field_0x40;
          local_408.Y = (double)*(float *)&pTVar31->field_0x44;
          local_408.Z = (double)(float)*(undefined8 *)&pTVar31->field_0x48;
          local_408.W = (double)(float)((ulonglong)*(undefined8 *)&pTVar31->field_0x48 >> 0x20);
          local_510._s_0.X = (double)*(undefined8 *)&pTVar31->field_0x20;
          local_510._s_0.Y = (double)*(undefined8 *)&pTVar31->field_0x28;
          local_450._8_8_ = _UNK_15076b828;
          local_450._0_8_ = ___xmm_3ff00000000000004000000000000000;
          local_450._s_0.Z = dVar5;
          local_510._s_0.Z = dVar52 + *(double *)&pTVar31->field_0x30;
          if (local_6d7 != '\0') {
            pFVar30 = &FColor::Cyan;
          }
          FDebugDrawQueue::DrawDebugBox
                    (pFVar29,(TVector<double> *)&local_510._s_0,(TVector<double> *)&local_450._s_0,
                     &local_408,pFVar30,false,fVar4,'\0',fVar3);
          pFVar19 = local_650;
          fVar18 = __real_3f800000;
          if (local_6d8 != '\0') {
            if (local_650 != (FDirtyRigidParticleReplicationErrorData *)0x0) {
              pFVar29 = FDebugDrawQueue::GetInstance();
              local_438._s_0.X = ___xmm_40000000000000004010000000000000;
              local_438._s_0.Y = _UNK_150b4c808;
              local_4f8._s_0.X = (double)*(undefined8 *)&pFVar42->X;
              local_4f8._s_0.Y = (double)*(undefined8 *)&(pFVar42->X).field_0x8;
              local_438._s_0.Z = dVar6;
              local_4f8._s_0.Z = dVar52 + *(double *)&(pFVar42->X).field_0x10;
              FDebugDrawQueue::DrawDebugBox
                        (pFVar29,(TVector<double> *)&local_4f8._s_0,
                         (TVector<double> *)&local_438._s_0,&pFVar42->R,&FColor::Red,false,fVar4,
                         '\0',fVar3);
              pFVar29 = FDebugDrawQueue::GetInstance();
              dVar6 = *(double *)&(pFVar42->X).field_0x10;
              local_4e0._s_0.X = (double)*(undefined8 *)&pFVar42->X;
              local_4e0._s_0.Y = (double)*(undefined8 *)&(pFVar42->X).field_0x8;
              local_4e0._s_0.Z = dVar52 + dVar6;
              local_5d8._s_0.X = local_4e0._s_0.X + *(double *)&pFVar19->ErrorX;
              local_5d8._s_0.Z = dVar6 + *(double *)&(pFVar19->ErrorX).field_0x10 + dVar52;
              local_5d8._s_0.Y = local_4e0._s_0.Y + *(double *)&(pFVar19->ErrorX).field_0x8;
              FDebugDrawQueue::DrawDebugDirectionalArrow
                        (pFVar29,(TVector<double> *)&local_5d8._s_0,
                         (TVector<double> *)&local_4e0._s_0,fVar18,&FColor::Red,false,fVar4,'\0',
                         fVar3);
            }
            pFVar29 = FDebugDrawQueue::GetInstance();
            pTVar31 = (this->Particle_External).Ptr;
            local_5c0._s_0.X = (double)*(undefined8 *)&pTVar31->field_0x20;
            local_5c0._s_0.Y = (double)*(undefined8 *)&pTVar31->field_0x28;
            local_5c0._s_0.Z = dVar52 + *(double *)&pTVar31->field_0x30;
            pdVar26 = (double *)
                      (**(code **)(*(longlong *)pFVar24 + 0x18))(pFVar24,local_320,*local_6c8);
            local_5a8._s_0.X = *(double *)&pTVar31->field_0x20 - *pdVar26;
            local_5a8._s_0.Y = *(double *)&pTVar31->field_0x28 - pdVar26[1];
            local_5a8._s_0.Z = (*(double *)&pTVar31->field_0x30 - pdVar26[2]) + dVar52;
            FDebugDrawQueue::DrawDebugDirectionalArrow
                      (pFVar29,(TVector<double> *)&local_5a8._s_0,(TVector<double> *)&local_5c0._s_0
                       ,fVar18,&FColor::Blue,false,fVar4,'\0',fVar3);
          }
        }
      }
      dVar46 = _UNK_150689688;
      dVar52 = ___xmm_3ff00000000000003ff0000000000000;
      dVar5 = _UNK_150689518;
      dVar6 = ___xmm_00000000000000003ff0000000000000;
      if (CVars::bChaosEnableOverrideSingleParticleTypeToCluster != false) {
        iVar32 = (pFVar36->ChildParticles).ArrayNum;
        pFVar43 = (pFVar36->ChildParticles).AllocatorInstance.Data;
        pFVar37 = pFVar43 + (longlong)iVar32 * 0x90;
        while( true ) {
          if ((pFVar36->ChildParticles).ArrayNum != iVar32) {
            local_6d5[0] = 0;
            `TCheckedPointerIterator<Chaos::FDirtyClusterUnionParticleData_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_6d5);
          }
          if (pFVar43 == pFVar37) break;
          this_01 = *(TThreadedSingleParticlePhysicsProxyBase<1> **)(pFVar43 + 0x70);
          if ((this_01 != (TThreadedSingleParticlePhysicsProxyBase<1> *)0x0) &&
             (*(int *)&this_01->field_0x1c == 0xb)) {
            pTVar31 = (this->Particle_External).Ptr;
            local_158.Scale3D.XY.m128d_f64[0] = dVar52;
            local_158.Scale3D.XY.m128d_f64[1] = dVar46;
            local_158.Scale3D.ZW.m128d_f64[0] = dVar6;
            local_158.Scale3D.ZW.m128d_f64[1] = dVar5;
            local_158.Rotation.XY.m128d_f64[0] = (double)*(float *)&pTVar31->field_0x40;
            local_158.Rotation.XY.m128d_f64[1] = (double)*(float *)&pTVar31->field_0x44;
            local_158.Translation.ZW.m128d_f64[0] = *(double *)&pTVar31->field_0x30;
            local_158.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)*(float *)&pTVar31->field_0x4c,0);
            local_158.Rotation.ZW.m128d_f64[0] = (double)*(float *)&pTVar31->field_0x48;
            local_158.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)*(float *)&pTVar31->field_0x4c >> 0x20);
            local_158.Translation.XY.m128d_f64[0]._0_4_ = *(undefined4 *)&pTVar31->field_0x20;
            local_158.Translation.XY.m128d_f64[0]._4_4_ = *(undefined4 *)&pTVar31->field_0x24;
            local_158.Translation.XY.m128d_f64[1]._0_4_ =
                 (undefined4)*(undefined8 *)&pTVar31->field_0x28;
            local_158.Translation.XY.m128d_f64[1]._4_4_ =
                 (undefined4)((ulonglong)*(undefined8 *)&pTVar31->field_0x28 >> 0x20);
            local_158.Translation.ZW.m128d_f64[1] = 0.0;
            local_1b8.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_1b8.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_1b8.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_1b8.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_1b8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_1b8.Translation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_1b8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_1b8.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_1b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
            ;
            local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_1b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            UE::Math::TTransform<double>::Multiply
                      (&local_1b8,(TTransform<double> *)(pFVar43 + 0x10),&local_158);
            dVar66 = local_1b8.Rotation.XY.m128d_f64[1];
            dVar62 = local_1b8.Rotation.XY.m128d_f64[0];
            local_628._8_8_ = local_1b8.Translation.XY.m128d_f64[1];
            local_628._0_8_ = local_1b8.Translation.XY.m128d_f64[0];
            auVar17._8_8_ = local_1b8.Rotation.ZW.m128d_f64[1];
            auVar17._0_8_ = local_1b8.Rotation.ZW.m128d_f64[0];
            local_2d8 = local_1b8.Translation.ZW.m128d_f64[0];
            dStack_2d0 = local_1b8.Translation.ZW.m128d_f64[1];
            local_2c8 = local_1b8.Scale3D.XY.m128d_f64[0];
            dStack_2c0 = local_1b8.Scale3D.XY.m128d_f64[1];
            local_2b8 = local_1b8.Scale3D.ZW.m128d_f64[0];
            dStack_2b0 = local_1b8.Scale3D.ZW.m128d_f64[1];
            local_3a0 = local_1b8.Translation.ZW.m128d_f64[0];
            local_618 = local_1b8.Translation.ZW.m128d_f64[0];
            local_3b0 = local_628;
            local_2e8 = local_628;
            TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext(this_01);
            TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext(this_01);
            lVar25 = *(longlong *)&this_01->field_0x40;
            if ((1 < *(byte *)(lVar25 + 0x98)) && (*(char *)(lVar25 + 0x19c) == '\x01')) {
              pIVar10 = *(IPhysicsProxyBase **)(lVar25 + 0x10);
              *(undefined1 *)(lVar25 + 0x1b1) = 1;
              *(undefined1 *)(lVar25 + 0x19c) = 4;
              *(uint *)(lVar25 + 0x9c) = *(uint *)(lVar25 + 0x9c) | 8;
              if ((pIVar10 != (IPhysicsProxyBase *)0x0) &&
                 (pIVar10->Solver != (FPhysicsSolverBase *)0x0)) {
                FPhysicsSolverBase::AddDirtyProxy(pIVar10->Solver,pIVar10);
              }
            }
            pIVar10 = *(IPhysicsProxyBase **)(lVar25 + 0x10);
            *(undefined8 *)(lVar25 + 0x20) = local_628._0_8_;
            *(undefined8 *)(lVar25 + 0x28) = local_628._8_8_;
            *(double *)(lVar25 + 0x30) = local_618;
            *(uint *)(lVar25 + 0x9c) = *(uint *)(lVar25 + 0x9c) | 1;
            if ((pIVar10 != (IPhysicsProxyBase *)0x0) &&
               (pIVar10->Solver != (FPhysicsSolverBase *)0x0)) {
              FPhysicsSolverBase::AddDirtyProxy(pIVar10->Solver,pIVar10);
            }
            pTVar11 = *(TReferenceControllerBase<1> **)&this_01->field_0x28;
            lVar25 = *(longlong *)&this_01->field_0x20;
            if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((lVar25 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar20)) {
              pcVar12 = (code *)swi(3);
              uVar21 = (*pcVar12)();
              return (bool)uVar21;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar11);
            iVar22 = IPhysicsProxyBase::GetSolverSyncTimestamp_External
                               ((IPhysicsProxyBase *)this_01);
            *(int *)(lVar25 + 0x20) = iVar22;
            *(undefined8 *)(lVar25 + 8) = local_628._0_8_;
            *(undefined8 *)(lVar25 + 0x10) = local_628._8_8_;
            *(double *)(lVar25 + 0x18) = local_618;
            local_648 = dVar62;
            dStack_640 = dVar66;
            local_638 = auVar17;
            TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext(this_01);
            TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext(this_01);
            lVar25 = *(longlong *)&this_01->field_0x40;
            if ((1 < *(byte *)(lVar25 + 0x98)) && (*(char *)(lVar25 + 0x19c) == '\x01')) {
              pIVar10 = *(IPhysicsProxyBase **)(lVar25 + 0x10);
              *(undefined1 *)(lVar25 + 0x1b1) = 1;
              *(undefined1 *)(lVar25 + 0x19c) = 4;
              *(uint *)(lVar25 + 0x9c) = *(uint *)(lVar25 + 0x9c) | 8;
              if ((pIVar10 != (IPhysicsProxyBase *)0x0) &&
                 (pIVar10->Solver != (FPhysicsSolverBase *)0x0)) {
                FPhysicsSolverBase::AddDirtyProxy(pIVar10->Solver,pIVar10);
              }
            }
            pIVar10 = *(IPhysicsProxyBase **)(lVar25 + 0x10);
            *(float *)(lVar25 + 0x40) = (float)local_648;
            *(float *)(lVar25 + 0x44) = (float)dStack_640;
            *(float *)(lVar25 + 0x48) = (float)(double)local_638._0_8_;
            *(float *)(lVar25 + 0x4c) = (float)(double)local_638._8_8_;
            *(uint *)(lVar25 + 0x9c) = *(uint *)(lVar25 + 0x9c) | 1;
            if ((pIVar10 != (IPhysicsProxyBase *)0x0) &&
               (pIVar10->Solver != (FPhysicsSolverBase *)0x0)) {
              FPhysicsSolverBase::AddDirtyProxy(pIVar10->Solver,pIVar10);
            }
            pTVar11 = *(TReferenceControllerBase<1> **)&this_01->field_0x28;
            lVar25 = *(longlong *)&this_01->field_0x20;
            if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((lVar25 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar20)) {
              pcVar12 = (code *)swi(3);
              uVar21 = (*pcVar12)();
              return (bool)uVar21;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar11);
            iVar22 = IPhysicsProxyBase::GetSolverSyncTimestamp_External
                               ((IPhysicsProxyBase *)this_01);
            auVar16._8_8_ = dStack_640;
            auVar16._0_8_ = local_648;
            *(undefined1 (*) [16])(lVar25 + 0x30) = auVar16;
            *(int *)(lVar25 + 0x50) = iVar22;
            *(undefined1 (*) [16])(lVar25 + 0x40) = local_638;
          }
          pFVar43 = pFVar43 + 0x90;
          this = local_680;
        }
      }
      TGeometryParticle<double,3>::UpdateShapeBounds
                ((TGeometryParticle<double,3> *)(this->Particle_External).Ptr);
      bVar20 = true;
      goto LAB_1440eaa5c;
    }
  }
  bVar20 = false;
LAB_1440eaa5c:
  if ((local_6b8.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_6b8.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_6b8.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_6b8.StatId,CycleScopeEnd);
  }
  return bVar20;
}

// PushToPhysicsState @ 1440ece00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionPhysicsProxy::PushToPhysicsState
          (FClusterUnionPhysicsProxy *this,FDirtyPropertiesManager *param_1,int param_2,
          FDirtyProxy *param_3)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  FUniqueIdx FVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  FSpatialAccelerationIdx FVar15;
  undefined2 uVar16;
  undefined7 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterUnionPhysicsProxyPushToPhysicsState> FVar25;
  FParticlePositionRotation *pFVar26;
  FClusterUnion *pFVar27;
  FRigidClusteredFlags_u_0 *pFVar28;
  TVector<double,3> *pTVar29;
  TTransform<double> *pTVar30;
  ClusterId *pCVar31;
  IPhysicsProxyBase *pIVar32;
  IPhysicsProxyBase *pIVar33;
  bool *pbVar34;
  FUniqueIdx *pFVar35;
  FPendingSpatialData *pFVar36;
  TGeometryParticle<double,3> **ppTVar37;
  FSpatialAccelerationIdx *pFVar38;
  FPendingSpatialData *pFVar39;
  FParticleVelocities *pFVar40;
  longlong *plVar41;
  longlong lVar42;
  TGeometryParticleHandleImp<double,3,1> *pTVar43;
  longlong lVar44;
  FScriptContainerElement *pFVar45;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  FName FVar46;
  FScriptContainerElement *pFVar47;
  FClusterUnionManager *this_01;
  FName FVar48;
  undefined1 auStackY_3b8 [32];
  undefined1 local_358 [8];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_350;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_340;
  longlong *local_330;
  FName local_328;
  int local_320;
  FColor_u_0 local_31c;
  FScriptContainerElement *local_318;
  FName local_310;
  FName local_308;
  FDirtyPropertiesManager *local_300;
  TGeometryParticle<double,3> *local_2f8;
  TGeometryParticleHandleImp<double,3,1> *pTStack_2f0;
  int local_2e8;
  FCollisionFilterData FStack_2e4;
  FCollisionFilterData FStack_2d4;
  uint local_2c4;
  FName local_2c0;
  TVector<float,3> local_2b0;
  FClusterUnionPhysicsProxy *local_2a0;
  FClusterUnionManager *local_298;
  FDirtyProxy *local_290;
  FName local_288;
  TVector<double,3> local_280;
  undefined1 local_268 [16];
  double local_258;
  double local_248;
  double local_240;
  undefined1 local_238 [16];
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  FVar25 = StatPtr_STAT_ClusterUnionPhysicsProxyPushToPhysicsState;
  local_320 = param_2;
  local_300 = param_1;
  local_2a0 = this;
  local_290 = param_3;
  if (StatPtr_STAT_ClusterUnionPhysicsProxyPushToPhysicsState ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterUnionPhysicsProxyPushToPhysicsState>)0x0) {
    pFVar24 = ::FName::FName(&local_288,"STAT_ClusterUnionPhysicsProxyPushToPhysicsState");
    FVar25 = (FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterUnionPhysicsProxyPushToPhysicsState>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ClusterUnionPhysicsProxyPushToPhysicsState,*pFVar24,
                        L"FClusterUnionPhysicsProxy::PushToPhysicsState","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_2c0.ComparisonIndex.Value = 0;
  local_2c0.Number = 0;
  bVar11 = false;
  bVar13 = false;
  FVar48 = *(FName *)FVar25;
  if ((FVar48.ComparisonIndex.Value.Value == 0) && (FVar48.Number == 0)) {
LAB_1440ecf73:
    bVar12 = false;
    local_308 = local_2c0;
    FVar48 = local_2c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_31c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_31c._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar11 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_310.ComparisonIndex.Value = FVar48.ComparisonIndex.Value.Value;
        local_310.Number = FVar48.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_310,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                   ,0x198);
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1440ecf73;
    local_328 = FVar48;
    local_308 = FVar48;
    FThreadStats::AddMessage(FVar48,CycleScopeStart);
    bVar12 = true;
  }
  if (this->_padding_ == 0) {
    bVar21 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2667941677485784679>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                        ,0x199,"Solver");
    if (bVar21) {
code_r0x0001440ed02e:
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    goto LAB_1440ed83e;
  }
  if (this->Particle_Internal == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    bVar21 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2667941677485784679>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                        ,0x199,"Particle_Internal");
    if (bVar21) goto code_r0x0001440ed02e;
    goto LAB_1440ed83e;
  }
  FVar46 = *(FName *)(this->_padding_ + 0xbd0);
  local_328 = FVar46;
  if (FVar46 == (FName)0x0) {
    bVar21 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2667941677485784672>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                        ,0x1a0,"RigidsSolver.GetEvolution()");
    if (bVar21) goto code_r0x0001440ed02e;
    goto LAB_1440ed83e;
  }
  if (((param_3->PropertyData).Flags.Bits & 0x40000U) == 0) {
    pFVar26 = (FParticlePositionRotation *)0x0;
  }
  else {
    pFVar26 = TDirtyElementPool<Chaos::FParticlePositionRotation>::GetElement
                        (&param_1->ClusterXRPool,param_2);
  }
  dVar20 = _UNK_150689688;
  dVar19 = ___xmm_3ff00000000000003ff0000000000000;
  dVar18 = _UNK_150689518;
  dVar8 = ___xmm_00000000000000003ff0000000000000;
  if (pFVar26 != (FParticlePositionRotation *)0x0) {
    this_01 = (FClusterUnionManager *)((longlong)FVar46 + 0x660);
    uVar2 = *(undefined8 *)&(pFVar26->MR).field_0x8;
    local_228.Rotation.ZW.m128d_f64[0] = (double)(float)uVar2;
    local_228.Rotation.ZW.m128d_f64[1] = (double)(float)((ulonglong)uVar2 >> 0x20);
    local_340.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_340.ArrayNum = 0;
    local_340.ArrayMax = 0;
    local_350.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_350.ArrayNum = 0;
    local_350.ArrayMax = 0;
    local_228.Translation.XY.m128d_f64[0] = *(double *)&pFVar26->MX;
    local_228.Translation.XY.m128d_f64[1] = *(double *)&(pFVar26->MX).field_0x8;
    local_228.Translation.ZW.m128d_f64[0] = *(double *)&(pFVar26->MX).field_0x10;
    dVar9 = (double)*(float *)&(pFVar26->MR).field_0x4;
    local_228.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
    local_228.Rotation.XY.m128d_f64[0] = (double)*(float *)&pFVar26->MR;
    local_228.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_228.Translation.ZW.m128d_f64[1] = 0.0;
    local_228.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_228.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_228.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_228.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_298 = this_01;
    pFVar27 = FClusterUnionManager::FindClusterUnion(this_01,this->ClusterUnionIndex);
    if ((pFVar27 != (FClusterUnion *)0x0) && (!pFVar27->bNeedsXRInitialization)) {
      pFVar47 = (pFVar27->ChildParticles).AllocatorInstance.Data;
      iVar3 = (pFVar27->ChildParticles).ArrayNum;
      pFVar45 = pFVar47 + (longlong)iVar3 * 8;
      local_318 = pFVar45;
      while( true ) {
        if ((pFVar27->ChildParticles).ArrayNum != iVar3) {
          local_358[0] = 0;
          `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_358);
        }
        FVar46 = local_328;
        this_01 = local_298;
        FVar48 = local_308;
        this = local_2a0;
        if (pFVar47 == pFVar45) break;
        local_330 = *(longlong **)pFVar47;
        plVar41 = (longlong *)0x0;
        if (2 < *(byte *)((longlong)local_330 + 0xc)) {
          plVar41 = local_330;
        }
        if ((plVar41 != (longlong *)0x0) &&
           (pFVar28 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                                 ((TPBDRigidClusteredParticles<double,3> *)*plVar41,(int)plVar41[1])
                       ->field0_0x0, (pFVar28->Bits & 8) == 0)) {
          if ((local_340.AllocatorInstance.Data <= (FScriptContainerElement *)&local_330) &&
             (((FScriptContainerElement *)&local_330 <
               local_340.AllocatorInstance.Data + (longlong)local_340.ArrayMax * 8 &&
              (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar21)))) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar22 = local_340.ArrayNum;
          if (local_340.ArrayNum == local_340.ArrayMax) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_340.AllocatorInstance,&local_340.ArrayMax);
          }
          local_340.ArrayNum = iVar22 + 1;
          *(longlong **)(local_340.AllocatorInstance.Data + (longlong)iVar22 * 8) = local_330;
          uVar4 = *(uint *)(local_330 + 1);
          lVar44 = (longlong)(int)uVar4;
          lVar42 = *local_330;
          uVar23 = 0;
          if ((int)uVar4 < *(int *)(lVar42 + 0x50)) {
            uVar23 = ~uVar4 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar42 = *(longlong *)(lVar42 + 0x48);
          fVar1 = *(float *)(lVar42 + lVar44 * 0x10);
          uVar2 = *(undefined8 *)(lVar42 + 8 + lVar44 * 0x10);
          dVar9 = (double)(float)((ulonglong)uVar2 >> 0x20);
          dVar10 = (double)*(float *)(lVar42 + 4 + lVar44 * 0x10);
          pTVar29 = TParticles<double,3>::GetX((TParticles<double,3> *)*local_330,(int)local_330[1])
          ;
          local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
          local_1c8.Rotation.ZW.m128d_f64[0] = (double)(float)uVar2;
          local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_1c8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
          local_1c8.Rotation.XY.m128d_f64[0] = (double)fVar1;
          local_1c8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_1c8.Translation.ZW.m128d_f64[0] = *(double *)&pTVar29->field_0x10;
          local_1c8.Translation.XY.m128d_f64[0] = *(double *)pTVar29;
          local_1c8.Translation.XY.m128d_f64[1] = *(double *)&pTVar29->field_0x8;
          local_1c8.Translation.ZW.m128d_f64[1] = 0.0;
          local_1c8.Scale3D.XY.m128d_f64[0] = dVar19;
          local_1c8.Scale3D.XY.m128d_f64[1] = dVar20;
          local_1c8.Scale3D.ZW.m128d_f64[0] = dVar8;
          local_1c8.Scale3D.ZW.m128d_f64[1] = dVar18;
          pTVar30 = UE::Math::TTransform<double>::GetRelativeTransform
                              (&local_1c8,&local_108,&local_228);
          if (((local_350.AllocatorInstance.Data <= pTVar30) &&
              (pTVar30 < (TTransform<double> *)
                         (local_350.AllocatorInstance.Data + (longlong)local_350.ArrayMax * 0x60)))
             && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar21)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar22 = local_350.ArrayNum;
          if (local_350.ArrayNum == local_350.ArrayMax) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&local_350.AllocatorInstance,&local_350.ArrayMax);
          }
          local_350.ArrayNum = iVar22 + 1;
          dVar9 = (pTVar30->Rotation).XY.m128d_f64[1];
          lVar42 = (longlong)iVar22 * 0x60;
          *(double *)&local_350.AllocatorInstance.Data[lVar42].field_0x0 =
               (pTVar30->Rotation).XY.m128d_f64[0];
          *(double *)(local_350.AllocatorInstance.Data + lVar42 + 8) = dVar9;
          dVar9 = (pTVar30->Rotation).ZW.m128d_f64[1];
          *(double *)(local_350.AllocatorInstance.Data + lVar42 + 0x10) =
               (pTVar30->Rotation).ZW.m128d_f64[0];
          *(double *)(local_350.AllocatorInstance.Data + lVar42 + 0x10 + 8) = dVar9;
          dVar9 = (pTVar30->Translation).XY.m128d_f64[1];
          *(double *)(local_350.AllocatorInstance.Data + lVar42 + 0x20) =
               (pTVar30->Translation).XY.m128d_f64[0];
          *(double *)(local_350.AllocatorInstance.Data + lVar42 + 0x20 + 8) = dVar9;
          dVar9 = (pTVar30->Translation).ZW.m128d_f64[1];
          *(double *)(local_350.AllocatorInstance.Data + lVar42 + 0x30) =
               (pTVar30->Translation).ZW.m128d_f64[0];
          *(double *)(local_350.AllocatorInstance.Data + lVar42 + 0x30 + 8) = dVar9;
          dVar9 = (pTVar30->Scale3D).XY.m128d_f64[1];
          *(double *)(local_350.AllocatorInstance.Data + lVar42 + 0x40) =
               (pTVar30->Scale3D).XY.m128d_f64[0];
          *(double *)(local_350.AllocatorInstance.Data + lVar42 + 0x40 + 8) = dVar9;
          dVar9 = (pTVar30->Scale3D).ZW.m128d_f64[1];
          *(double *)(local_350.AllocatorInstance.Data + lVar42 + 0x50) =
               (pTVar30->Scale3D).ZW.m128d_f64[0];
          *(double *)(local_350.AllocatorInstance.Data + lVar42 + 0x50 + 8) = dVar9;
          pFVar45 = local_318;
        }
        pFVar47 = pFVar47 + 8;
      }
    }
    local_248 = (double)*(float *)&pFVar26->MR;
    local_240 = (double)*(float *)&(pFVar26->MR).field_0x4;
    uVar2 = *(undefined8 *)&(pFVar26->MR).field_0x8;
    dVar9 = (double)(float)((ulonglong)uVar2 >> 0x20);
    local_238._8_4_ = SUB84(dVar9,0);
    local_238._0_8_ = (double)(float)uVar2;
    local_238._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    FPBDRigidsEvolutionGBF::SetParticleTransform
              ((FPBDRigidsEvolutionGBF *)FVar46,
               (TGeometryParticleHandleImp<double,3,1> *)this->Particle_Internal,&pFVar26->MX,
               (TRotation<double,3> *)&local_248,true,true);
    if ((local_340.ArrayNum != 0) && (local_350.ArrayNum != 0)) {
      FClusterUnionManager::UpdateClusterUnionParticlesChildToParent
                (this_01,this->ClusterUnionIndex,&local_340,&local_350,false);
    }
    FPBDRigidsSOAs::MarkTransientDirtyParticle
              (*(FPBDRigidsSOAs **)((longlong)FVar46 + 0x2d8),
               (TGeometryParticleHandleImp<double,3,1> *)this->Particle_Internal,true);
    pTVar29 = TParticles<double,3>::GetX
                        (*(TParticles<double,3> **)this->Particle_Internal,
                         *(int *)&this->Particle_Internal->field_0x8);
    uVar4 = *(uint *)&this->Particle_Internal->field_0x8;
    lVar44 = (longlong)(int)uVar4;
    lVar42 = *(longlong *)this->Particle_Internal;
    uVar23 = 0;
    if ((int)uVar4 < *(int *)(lVar42 + 0x50)) {
      uVar23 = ~uVar4 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar42 = *(longlong *)(lVar42 + 0x48);
    local_280._16_8_ = 0;
    uVar2 = *(undefined8 *)(lVar42 + 8 + lVar44 * 0x10);
    local_158 = (double)(float)uVar2;
    dStack_150 = (double)(float)((ulonglong)uVar2 >> 0x20);
    dVar9 = (double)*(float *)(lVar42 + 4 + lVar44 * 0x10);
    local_168._8_4_ = SUB84(dVar9,0);
    local_168._0_8_ = (double)*(float *)(lVar42 + lVar44 * 0x10);
    local_168._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_138 = *(undefined8 *)&pTVar29->field_0x10;
    local_148 = *(undefined8 *)pTVar29;
    uStack_140 = *(undefined8 *)&pTVar29->field_0x8;
    uStack_130 = 0;
    local_128 = dVar19;
    dStack_120 = dVar20;
    local_118 = dVar8;
    dStack_110 = dVar18;
    local_280._0_8_ = 0;
    local_280._8_8_ = 0;
    TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
              (*(TGeometryParticlesImp<double,3,0> **)this->Particle_Internal,
               *(int *)&this->Particle_Internal->field_0x8,(TRigidTransform<double,3> *)local_168,
               &local_280);
    pTVar6 = (TGeometryParticleHandleImp<double,3,1> *)this->Particle_Internal;
    pTVar43 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar6->_padding_ + 4)) {
      pTVar43 = pTVar6;
    }
    if ((pTVar43 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
       (bVar21 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                           ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar43), !bVar21)) {
LAB_1440ed662:
      pbVar34 = TGeometryParticlesImp<double,3,0>::HasCollision
                          ((TGeometryParticlesImp<double,3,0> *)pTVar6->_padding_,
                           (int)pTVar6->_padding_);
      if ((*pbVar34 != false) || (ForceNoCollisionIntoSQ != 0)) {
        pFVar35 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)pTVar6->_padding_,
                             (int)pTVar6->_padding_);
        FVar46 = local_328;
        FVar5.Idx = pFVar35->Idx;
        pFVar36 = FPendingSpatialInternalDataQueue::Add
                            ((FPendingSpatialInternalDataQueue *)((longlong)local_328 + 0x398),0,
                             FVar5,Add);
        pFVar36->Operation = Update;
        ppTVar37 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                             ((TGeometryParticlesImp<double,3,0> *)pTVar6->_padding_,
                              (int)pTVar6->_padding_);
        local_2f8 = *ppTVar37;
        pTStack_2f0 = pTVar6;
        pFVar35 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)pTVar6->_padding_,
                             (int)pTVar6->_padding_);
        local_2e8 = pFVar35->Idx;
        FStack_2e4.Word2 = 0;
        FStack_2e4.Word3 = 0;
        FStack_2e4.Word0 = 0;
        FStack_2e4.Word1 = 0;
        FStack_2d4.Word2 = 0;
        FStack_2d4.Word3 = 0;
        FStack_2d4.Word0 = 0;
        FStack_2d4.Word1 = 0;
        local_2c4 = local_2c4 & 0xffffff00;
        if ((local_2e8 == -1) &&
           (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_3133560516564217994>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                ,0xf76,"CachedUniqueIdx.IsValid()"), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FAccelerationStructureHandle::
        ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (pTVar6,&FStack_2e4);
        FAccelerationStructureHandle::
        ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (pTVar6,&FStack_2d4);
        local_2c4 = CONCAT31(local_2c4._1_3_,1);
        (pFVar36->AccelerationHandle).ExternalGeometryParticle = local_2f8;
        (pFVar36->AccelerationHandle).GeometryParticleHandle = pTStack_2f0;
        (pFVar36->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_2e8;
        (pFVar36->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_2e4.Word0;
        (pFVar36->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_2e4.Word1;
        (pFVar36->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_2e4.Word2;
        *(ulonglong *)&(pFVar36->AccelerationHandle).UnionQueryFilterData.Word3 =
             CONCAT44(FStack_2d4.Word0,FStack_2e4.Word3);
        (pFVar36->AccelerationHandle).UnionSimFilterData.Word1 = FStack_2d4.Word1;
        (pFVar36->AccelerationHandle).UnionSimFilterData.Word2 = FStack_2d4.Word2;
        *(ulonglong *)&(pFVar36->AccelerationHandle).UnionSimFilterData.Word3 =
             CONCAT44(local_2c4,FStack_2d4.Word3);
        pFVar38 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                            ((TGeometryParticlesImp<double,3,0> *)pTVar6->_padding_,
                             (int)pTVar6->_padding_);
        pFVar36->SpatialIdx = *pFVar38;
        pFVar39 = FPendingSpatialDataQueue::FindOrAdd
                            ((FPendingSpatialDataQueue *)((longlong)FVar46 + 0x3d0),FVar5,Add);
        pTVar6 = (pFVar36->AccelerationHandle).GeometryParticleHandle;
        (pFVar39->AccelerationHandle).ExternalGeometryParticle =
             (pFVar36->AccelerationHandle).ExternalGeometryParticle;
        (pFVar39->AccelerationHandle).GeometryParticleHandle = pTVar6;
        uVar4 = (pFVar36->AccelerationHandle).UnionQueryFilterData.Word0;
        uVar23 = (pFVar36->AccelerationHandle).UnionQueryFilterData.Word1;
        uVar14 = (pFVar36->AccelerationHandle).UnionQueryFilterData.Word2;
        (pFVar39->AccelerationHandle).CachedUniqueIdx =
             (FUniqueIdx)(pFVar36->AccelerationHandle).CachedUniqueIdx.Idx;
        (pFVar39->AccelerationHandle).UnionQueryFilterData.Word0 = uVar4;
        (pFVar39->AccelerationHandle).UnionQueryFilterData.Word1 = uVar23;
        (pFVar39->AccelerationHandle).UnionQueryFilterData.Word2 = uVar14;
        uVar4 = (pFVar36->AccelerationHandle).UnionSimFilterData.Word1;
        uVar23 = (pFVar36->AccelerationHandle).UnionSimFilterData.Word2;
        *(undefined8 *)&(pFVar39->AccelerationHandle).UnionQueryFilterData.Word3 =
             *(undefined8 *)&(pFVar36->AccelerationHandle).UnionQueryFilterData.Word3;
        (pFVar39->AccelerationHandle).UnionSimFilterData.Word1 = uVar4;
        (pFVar39->AccelerationHandle).UnionSimFilterData.Word2 = uVar23;
        FVar15 = pFVar36->SpatialIdx;
        uVar16 = *(undefined2 *)&pFVar36->field_0x3a;
        iVar3 = pFVar36->SyncTimestamp;
        *(undefined8 *)&(pFVar39->AccelerationHandle).UnionSimFilterData.Word3 =
             *(undefined8 *)&(pFVar36->AccelerationHandle).UnionSimFilterData.Word3;
        pFVar39->SpatialIdx = FVar15;
        *(undefined2 *)&pFVar39->field_0x3a = uVar16;
        pFVar39->SyncTimestamp = iVar3;
        uVar17 = *(undefined7 *)&pFVar36->field_0x41;
        pFVar39->Operation = pFVar36->Operation;
        *(undefined7 *)&pFVar39->field_0x41 = uVar17;
      }
    }
    else {
      pTVar43 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (2 < *(byte *)((longlong)&pTVar6->_padding_ + 4)) {
        pTVar43 = pTVar6;
      }
      if (pTVar43 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pCVar31 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                            ((TPBDRigidClusteredParticles<double,3> *)pTVar43->_padding_,
                             (int)pTVar43->_padding_);
        pTVar43 = (TGeometryParticleHandleImp<double,3,1> *)pCVar31->Id;
        if (pTVar43 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (2 < *(byte *)((longlong)&pTVar43->_padding_ + 4)) {
            this_00 = pTVar43;
          }
          if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            bVar21 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2113888976451403243>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                                ,0x215,"false");
            if (bVar21) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          else {
            pFVar28 = &TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                                 ((TPBDRigidClusteredParticles<double,3> *)this_00->_padding_,
                                  (int)this_00->_padding_)->field0_0x0;
            if ((pFVar28->Bits & 1) != 0) {
              pIVar32 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(this_00);
              pIVar33 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(pTVar6);
              if (pIVar32 == pIVar33) goto LAB_1440ed662;
            }
          }
        }
      }
    }
    if ((TTransform<double> *)local_350.AllocatorInstance.Data != (TTransform<double> *)0x0) {
      FMemory::Free(local_350.AllocatorInstance.Data);
    }
    FVar46 = local_328;
    param_1 = local_300;
    param_2 = local_320;
    if (local_340.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_340.AllocatorInstance.Data);
      FVar46 = local_328;
      param_1 = local_300;
      param_2 = local_320;
    }
  }
  if ((((local_290->PropertyData).Flags.Bits & 0x80000U) != 0) &&
     (pFVar40 = TDirtyElementPool<Chaos::FParticleVelocities>::GetElement
                          (&param_1->ClusterVelocitiesPool,param_2),
     pFVar40 != (FParticleVelocities *)0x0)) {
    local_2b0._0_4_ = *(undefined4 *)&pFVar40->MW;
    local_2b0._4_4_ = *(undefined4 *)&(pFVar40->MW).field_0x4;
    local_2b0._8_4_ = *(undefined4 *)&(pFVar40->MW).field_0x8;
    dVar8 = (double)(float)((ulonglong)*(undefined8 *)&pFVar40->MV >> 0x20);
    local_268._8_4_ = SUB84(dVar8,0);
    local_268._0_8_ = (double)(float)*(undefined8 *)&pFVar40->MV;
    local_268._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    local_258 = (double)*(float *)&(pFVar40->MV).field_0x8;
    FPBDRigidsEvolutionGBF::SetParticleVelocities
              ((FPBDRigidsEvolutionGBF *)FVar46,
               (TGeometryParticleHandleImp<double,3,1> *)this->Particle_Internal,
               (TVector<double,3> *)local_268,&local_2b0);
  }
LAB_1440ed83e:
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar48,CycleScopeEnd);
  }
  return;
}

// RemovePhysicsObjects_External @ 1440eef10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClusterUnionPhysicsProxy::RemovePhysicsObjects_External
          (FClusterUnionPhysicsProxy *this,
          TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined8 *this_00;
  longlong lVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  FSimCallbackCommandObject *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [4];
  undefined4 local_c4;
  code *local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [32];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  lVar1 = this->_padding_;
  pcVar7 = (code *)0x0;
  local_c4 = 0;
  if ((lVar1 != 0) &&
     (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34)) {
    local_58 = ___xmm_00000000ffffffff0000008000000000;
    uStack_50 = _UNK_150631d98;
    local_80._0_8_ = (FScriptContainerElement *)0x0;
    local_80._8_8_ = 0;
    local_60 = (void *)0x0;
    local_40 = (ForElementType<FSetElementId>)0x0;
    local_38 = 0;
    local_88 = (undefined1  [8])this;
    TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>::
    operator=((TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
               *)local_80,param_1);
    if (CVars::bEnableAsyncInitBody == false) {
      bVar4 = IsInGameThread();
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                           ,0x1b3,L"");
        if (bVar4) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    pFVar5 = ::operator_new(0xc0);
    if (pFVar5 == (FSimCallbackCommandObject *)0x0) {
      pFVar5 = (FSimCallbackCommandObject *)0x0;
    }
    else {
      local_b8 = (code *)0x0;
      local_90 = FMemory::Malloc(0x60,8);
      this_00 = local_90 + 1;
      *local_90 = (longlong)
                  &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::RemovePhysicsObjects_External'::`2'::<lambda_1>,1,1>
                   ::_vftable_;
      `Chaos::FClusterUnionPhysicsProxy::RemovePhysicsObjects_External'::__l2::<lambda_1>::
      <lambda_1>(this_00,(<lambda_1> *)local_88);
      if (this_00 != (undefined8 *)0x0) {
        local_b8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::RemovePhysicsObjects_External'::__l2::<lambda_1>,void>
                   ::Call;
      }
      *(undefined ***)pFVar5 = &___7FSimCallbackCommandObject_Chaos__6B_;
      *(undefined2 *)&pFVar5->field_0x8 = 0;
      *(undefined8 *)&pFVar5->field_0x10 = 0;
      *(undefined8 *)&pFVar5->field_0x18 = 0;
      *(undefined8 *)&pFVar5->field_0x20 = 0;
      *(undefined8 *)&pFVar5->field_0x28 = 0;
      *(undefined2 *)&pFVar5->field_0x40 = 1;
      *(code **)&pFVar5->Func = local_b8;
      *(longlong **)&(pFVar5->Func).field_0x28 = local_90;
      local_90 = (longlong *)0x0;
      *(longlong *)&(pFVar5->Func).field_0x10 = local_a8;
      *(undefined8 *)&(pFVar5->Func).field_0x18 = uStack_a0;
      *(undefined8 *)&(pFVar5->Func).field_0x20 = local_98;
      if (*(longlong *)&pFVar5->Func != 0) {
        local_b8 = pcVar7;
      }
      *(undefined8 *)&pFVar5->Func2 = 0;
      *(undefined8 *)&(pFVar5->Func2).field_0x28 = 0;
      pFVar5->bFuncHasTimeParameters = false;
      pFVar5->ExecuteOnStep = -1;
      pcVar7 = (code *)0x1;
      if (*(longlong *)&pFVar5->Func == 0) {
        `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                  (local_c8);
      }
    }
    if ((pcVar7 != (code *)0x0) && (local_b8 != (code *)0x0)) {
      plVar6 = &local_a8;
      if (local_90 != (longlong *)0x0) {
        plVar6 = local_90;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    FChaosMarshallingManager::RegisterSimCommand_External
              ((FChaosMarshallingManager *)(lVar1 + 0x98),pFVar5);
    local_38 = 0;
    if (local_40 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_40);
    }
    iVar2 = SUB84(local_80._8_8_,4);
    local_80._8_8_ = local_80._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_80,0,(int *)(local_80 + 0xc));
    }
    uVar3 = local_58._4_4_;
    uStack_50 = 0xffffffff;
    local_58 = (ulonglong)local_58._4_4_ << 0x20;
    if (0x80 < uVar3) {
      local_58 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_80 + 0x10),0);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    if ((FScriptContainerElement *)local_80._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_80._0_8_);
    }
  }
  return;
}

// RemoveShapes_External @ 1440ef1a0

void __thiscall
Chaos::FClusterUnionPhysicsProxy::RemoveShapes_External
          (FClusterUnionPhysicsProxy *this,
          TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> *param_1)

{
  RemoveParticlesFromClusterUnionGeometry<Chaos::TPBDRigidParticle<double,3>,Chaos::TPBDRigidParticle<double,3>_>
            ((this->Particle_External).Ptr,param_1,&this->GeometryChildParticles_External);
  return;
}

// SetAngularVelocity_External @ 1440f0530

void __thiscall
Chaos::FClusterUnionPhysicsProxy::SetAngularVelocity_External
          (FClusterUnionPhysicsProxy *this,TVector<double> *param_1)

{
  undefined1 *puVar1;
  double dVar2;
  TPBDRigidParticle<double,3> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  
  pTVar3 = (this->Particle_External).Ptr;
  if (pTVar3 == (TPBDRigidParticle<double,3> *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2667941677485784204>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                       ,0x374,"Particle_External");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    dVar7 = (param_1->field0_0x0)._s_0.Y;
    dVar2 = (param_1->field0_0x0)._s_0.Z;
    *(float *)&pTVar3->field_0xac = (float)(param_1->field0_0x0)._s_0.X;
    *(float *)&pTVar3->field_0xb0 = (float)dVar7;
    *(float *)&pTVar3->field_0xb4 = (float)dVar2;
    puVar1 = &((this->Particle_External).Ptr)->field_0x9c;
    *(uint *)puVar1 = *(uint *)puVar1 | 0x80000;
    pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
    lVar5 = this->_padding_;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar5 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    dVar7 = (param_1->field0_0x0)._s_0.X;
    dVar8 = (param_1->field0_0x0)._s_0.Y;
    dVar2 = (param_1->field0_0x0)._s_0.Z;
    iVar10 = IPhysicsProxyBase::GetSolverSyncTimestamp_External((IPhysicsProxyBase *)this);
    *(double *)(lVar5 + 0x80) = dVar7;
    *(double *)(lVar5 + 0x88) = dVar8;
    *(int *)(lVar5 + 0x98) = iVar10;
    *(double *)(lVar5 + 0x90) = dVar2;
    FPhysicsSolverBase::AddDirtyProxy
              ((FPhysicsSolverBase *)this->_padding_,(IPhysicsProxyBase *)this);
  }
  return;
}

// SetChildToParent_External @ 1440f06a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FClusterUnionPhysicsProxy::SetChildToParent_External
          (FClusterUnionPhysicsProxy *this,FPhysicsObject *param_1,TTransform<double> *param_2,
          bool param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStackY_148 [32];
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> local_108;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_f8 [2];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (param_1 == (FPhysicsObject *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2667941677485784188>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                       ,900,"Child != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_d8 = (param_2->Rotation).XY.m128d_f64[0];
    dStack_d0 = (param_2->Rotation).XY.m128d_f64[1];
    local_c8 = (param_2->Rotation).ZW.m128d_f64[0];
    dStack_c0 = (param_2->Rotation).ZW.m128d_f64[1];
    local_b8 = (param_2->Translation).XY.m128d_f64[0];
    dStack_b0 = (param_2->Translation).XY.m128d_f64[1];
    local_a8 = (param_2->Translation).ZW.m128d_f64[0];
    dStack_a0 = (param_2->Translation).ZW.m128d_f64[1];
    local_98 = (param_2->Scale3D).XY.m128d_f64[0];
    dStack_90 = (param_2->Scale3D).XY.m128d_f64[1];
    local_88 = (param_2->Scale3D).ZW.m128d_f64[0];
    dStack_80 = (param_2->Scale3D).ZW.m128d_f64[1];
    local_f8[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8[0].ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,1,0,&local_f8[0].AllocatorInstance,1,&local_f8[0].ArrayMax);
    *(double *)local_f8[0].AllocatorInstance.Data = local_d8;
    *(double *)(local_f8[0].AllocatorInstance.Data + 8) = dStack_d0;
    *(double *)(local_f8[0].AllocatorInstance.Data + 0x10) = local_c8;
    *(double *)(local_f8[0].AllocatorInstance.Data + 0x18) = dStack_c0;
    *(double *)(local_f8[0].AllocatorInstance.Data + 0x20) = local_b8;
    *(double *)(local_f8[0].AllocatorInstance.Data + 0x28) = dStack_b0;
    *(double *)(local_f8[0].AllocatorInstance.Data + 0x30) = local_a8;
    *(double *)(local_f8[0].AllocatorInstance.Data + 0x38) = dStack_a0;
    *(double *)(local_f8[0].AllocatorInstance.Data + 0x40) = local_98;
    *(double *)(local_f8[0].AllocatorInstance.Data + 0x48) = dStack_90;
    *(double *)(local_f8[0].AllocatorInstance.Data + 0x50) = local_88;
    *(double *)(local_f8[0].AllocatorInstance.Data + 0x58) = dStack_80;
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
    *(FPhysicsObject **)local_108.AllocatorInstance.Data = param_1;
    BulkSetChildToParent_External(this,&local_108,local_f8,param_3);
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    if (local_f8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8[0].AllocatorInstance.Data);
    }
  }
  return;
}

// SetEnableStrainOnCollision_External @ 1440f0890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FClusterUnionPhysicsProxy::SetEnableStrainOnCollision_External
          (FClusterUnionPhysicsProxy *this,bool param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FSimCallbackCommandObject *pFVar4;
  undefined ***pppuVar5;
  FSimCallbackCommandObject *pFVar6;
  FSimCallbackCommandObject *pFVar7;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined4 local_67;
  undefined2 local_63;
  undefined1 local_61;
  FSimCallbackCommandObject *local_58;
  undefined **local_48;
  FClusterUnionPhysicsProxy *pFStack_40;
  bool local_38;
  undefined4 uStack_37;
  undefined2 uStack_33;
  undefined1 uStack_31;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  lVar1 = this->_padding_;
  pFVar6 = (FSimCallbackCommandObject *)0x0;
  local_74 = 0;
  if (lVar1 != 0) {
    if ((this->Particle_External).Ptr == (TPBDRigidParticle<double,3> *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2667941677485784158>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                         ,0x3a2,"Particle_External");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      if (((!CVars::bEnableAsyncInitBody) && (bVar3 = IsInGameThread(), !bVar3)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                             ,0x1b3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar4 = ::operator_new(0xc0);
      pFVar7 = pFVar6;
      if (pFVar4 != (FSimCallbackCommandObject *)0x0) {
        pFStack_40 = this;
        local_48 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetEnableStrainOnCollision_External'::`5'::<lambda_1>,1,0>
                    ::_vftable_;
        uStack_37 = local_67;
        uStack_33 = local_63;
        uStack_31 = local_61;
        local_30 = (undefined ***)0x0;
        local_38 = param_1;
        *(undefined ***)pFVar4 = &___7FSimCallbackCommandObject_Chaos__6B_;
        *(undefined2 *)&pFVar4->field_0x8 = 0;
        *(undefined8 *)&pFVar4->field_0x10 = 0;
        *(undefined8 *)&pFVar4->field_0x18 = 0;
        *(undefined8 *)&pFVar4->field_0x20 = 0;
        *(undefined8 *)&pFVar4->field_0x28 = 0;
        *(undefined2 *)&pFVar4->field_0x40 = 1;
        *(code **)&pFVar4->Func =
             UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::SetEnableStrainOnCollision_External'::__l5::<lambda_1>,void>
             ::Call;
        *(undefined8 *)&(pFVar4->Func).field_0x28 = 0;
        *(undefined ***)&(pFVar4->Func).field_0x10 =
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetEnableStrainOnCollision_External'::`5'::<lambda_1>,1,0>
              ::_vftable_;
        *(FClusterUnionPhysicsProxy **)&(pFVar4->Func).field_0x18 = this;
        *(ulonglong *)&(pFVar4->Func).field_0x20 =
             CONCAT17(local_61,CONCAT25(local_63,CONCAT41(local_67,param_1)));
        local_58 = (FSimCallbackCommandObject *)
                   UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::SetEnableStrainOnCollision_External'::__l5::<lambda_1>,void>
                   ::Call;
        if (*(longlong *)&pFVar4->Func != 0) {
          local_58 = pFVar6;
        }
        *(undefined8 *)&pFVar4->Func2 = 0;
        *(undefined8 *)&(pFVar4->Func2).field_0x28 = 0;
        pFVar4->bFuncHasTimeParameters = false;
        pFVar4->ExecuteOnStep = -1;
        if (*(longlong *)&pFVar4->Func == 0) {
          `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
          operator()(local_78);
        }
        pFVar6 = pFVar4;
        pFVar7 = (FSimCallbackCommandObject *)&DAT_00000001;
      }
      if ((pFVar7 != (FSimCallbackCommandObject *)0x0) &&
         (local_58 != (FSimCallbackCommandObject *)0x0)) {
        pppuVar5 = &local_48;
        if (local_30 != (undefined ***)0x0) {
          pppuVar5 = local_30;
        }
        (*(code *)(*pppuVar5)[2])();
      }
      FChaosMarshallingManager::RegisterSimCommand_External
                ((FChaosMarshallingManager *)(lVar1 + 0x98),pFVar6);
    }
  }
  return;
}

// SetGeometry_External @ 1440f0ad0

void __thiscall
Chaos::FClusterUnionPhysicsProxy::SetGeometry_External
          (FClusterUnionPhysicsProxy *this,TRefCountPtr<Chaos::FImplicitObject> *param_1,
          TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  TPBDRigidParticle<double,3> *pTVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  TArray<Chaos::TPBDRigidParticle<double,3>_*,TSizedDefaultAllocator<32>_> *pTVar7;
  <lambda_1> local_18;
  
  pTVar4 = (this->Particle_External).Ptr;
  if (pTVar4 == (TPBDRigidParticle<double,3> *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2667941677485784703>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                       ,0x181,"Particle_External");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    local_18.__this = this;
    local_18.Geometry = param_1;
    ModifyAdditionOfChildrenToClusterUnionGeometry<Chaos::TPBDRigidParticle<double,3>,Chaos::TPBDRigidParticle<double,3>,_Chaos::FClusterUnionPhysicsProxy::SetGeometry_External_::__l2::<lambda_1>_>
              (pTVar4,param_2,(this->InitData).ActorId,(this->InitData).ComponentId,&local_18);
    pTVar7 = &this->GeometryChildParticles_External;
    if (pTVar7 != param_2) {
      iVar2 = (this->GeometryChildParticles_External).ArrayMax;
      piVar1 = &(this->GeometryChildParticles_External).ArrayMax;
      iVar3 = param_2->ArrayNum;
      _Src = (param_2->AllocatorInstance).Data;
      (this->GeometryChildParticles_External).ArrayNum = iVar3;
      if ((iVar3 == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
        return;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar3,iVar2,&pTVar7->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar7->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
      }
    }
  }
  return;
}

// SetIsAnchored_External @ 1440f0be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FClusterUnionPhysicsProxy::SetIsAnchored_External
          (FClusterUnionPhysicsProxy *this,bool param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FSimCallbackCommandObject *pFVar4;
  undefined ***pppuVar5;
  FSimCallbackCommandObject *pFVar6;
  FSimCallbackCommandObject *pFVar7;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined4 local_67;
  undefined2 local_63;
  undefined1 local_61;
  FSimCallbackCommandObject *local_58;
  undefined **local_48;
  FClusterUnionPhysicsProxy *pFStack_40;
  bool local_38;
  undefined4 uStack_37;
  undefined2 uStack_33;
  undefined1 uStack_31;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  lVar1 = this->_padding_;
  pFVar6 = (FSimCallbackCommandObject *)0x0;
  local_74 = 0;
  if (lVar1 != 0) {
    if ((this->Particle_External).Ptr == (TPBDRigidParticle<double,3> *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2667941677485784866>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                         ,0xde,"Particle_External");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      if (((!CVars::bEnableAsyncInitBody) && (bVar3 = IsInGameThread(), !bVar3)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                             ,0x1b3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar4 = ::operator_new(0xc0);
      pFVar7 = pFVar6;
      if (pFVar4 != (FSimCallbackCommandObject *)0x0) {
        pFStack_40 = this;
        local_48 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetIsAnchored_External'::`2'::<lambda_1>,1,0>
                    ::_vftable_;
        uStack_37 = local_67;
        uStack_33 = local_63;
        uStack_31 = local_61;
        local_30 = (undefined ***)0x0;
        local_38 = param_1;
        *(undefined ***)pFVar4 = &___7FSimCallbackCommandObject_Chaos__6B_;
        *(undefined2 *)&pFVar4->field_0x8 = 0;
        *(undefined8 *)&pFVar4->field_0x10 = 0;
        *(undefined8 *)&pFVar4->field_0x18 = 0;
        *(undefined8 *)&pFVar4->field_0x20 = 0;
        *(undefined8 *)&pFVar4->field_0x28 = 0;
        *(undefined2 *)&pFVar4->field_0x40 = 1;
        *(code **)&pFVar4->Func =
             UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::SetIsAnchored_External'::__l2::<lambda_1>,void>
             ::Call;
        *(undefined8 *)&(pFVar4->Func).field_0x28 = 0;
        *(undefined ***)&(pFVar4->Func).field_0x10 =
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetIsAnchored_External'::`2'::<lambda_1>,1,0>
              ::_vftable_;
        *(FClusterUnionPhysicsProxy **)&(pFVar4->Func).field_0x18 = this;
        *(ulonglong *)&(pFVar4->Func).field_0x20 =
             CONCAT17(local_61,CONCAT25(local_63,CONCAT41(local_67,param_1)));
        local_58 = (FSimCallbackCommandObject *)
                   UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::SetIsAnchored_External'::__l2::<lambda_1>,void>
                   ::Call;
        if (*(longlong *)&pFVar4->Func != 0) {
          local_58 = pFVar6;
        }
        *(undefined8 *)&pFVar4->Func2 = 0;
        *(undefined8 *)&(pFVar4->Func2).field_0x28 = 0;
        pFVar4->bFuncHasTimeParameters = false;
        pFVar4->ExecuteOnStep = -1;
        if (*(longlong *)&pFVar4->Func == 0) {
          `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
          operator()(local_78);
        }
        pFVar6 = pFVar4;
        pFVar7 = (FSimCallbackCommandObject *)&DAT_00000001;
      }
      if ((pFVar7 != (FSimCallbackCommandObject *)0x0) &&
         (local_58 != (FSimCallbackCommandObject *)0x0)) {
        pppuVar5 = &local_48;
        if (local_30 != (undefined ***)0x0) {
          pppuVar5 = local_30;
        }
        (*(code *)(*pppuVar5)[2])();
      }
      FChaosMarshallingManager::RegisterSimCommand_External
                ((FChaosMarshallingManager *)(lVar1 + 0x98),pFVar6);
    }
  }
  return;
}

// SetLinearVelocity_External @ 1440f0df0

void __thiscall
Chaos::FClusterUnionPhysicsProxy::SetLinearVelocity_External
          (FClusterUnionPhysicsProxy *this,TVector<double> *param_1)

{
  undefined1 *puVar1;
  double dVar2;
  TPBDRigidParticle<double,3> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  
  if (this->_padding_ != 0) {
    pTVar3 = (this->Particle_External).Ptr;
    if (pTVar3 == (TPBDRigidParticle<double,3> *)0x0) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2667941677485784220>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                         ,0x364,"Particle_External");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      dVar7 = (param_1->field0_0x0)._s_0.Y;
      dVar2 = (param_1->field0_0x0)._s_0.Z;
      *(float *)&pTVar3->field_0xa0 = (float)(param_1->field0_0x0)._s_0.X;
      *(float *)&pTVar3->field_0xa4 = (float)dVar7;
      *(float *)&pTVar3->field_0xa8 = (float)dVar2;
      puVar1 = &((this->Particle_External).Ptr)->field_0x9c;
      *(uint *)puVar1 = *(uint *)puVar1 | 0x80000;
      pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
      lVar5 = this->_padding_;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar5 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      dVar7 = (param_1->field0_0x0)._s_0.X;
      dVar8 = (param_1->field0_0x0)._s_0.Y;
      dVar2 = (param_1->field0_0x0)._s_0.Z;
      iVar10 = IPhysicsProxyBase::GetSolverSyncTimestamp_External((IPhysicsProxyBase *)this);
      *(double *)(lVar5 + 0x60) = dVar7;
      *(double *)(lVar5 + 0x68) = dVar8;
      *(int *)(lVar5 + 0x78) = iVar10;
      *(double *)(lVar5 + 0x70) = dVar2;
      FPhysicsSolverBase::AddDirtyProxy
                ((FPhysicsSolverBase *)this->_padding_,(IPhysicsProxyBase *)this);
    }
  }
  return;
}

// SetMass_External @ 1440f0f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FClusterUnionPhysicsProxy::SetMass_External(FClusterUnionPhysicsProxy *this,double param_1)

{
  TPBDRigidParticle<double,3> *pTVar1;
  IPhysicsProxyBase *pIVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FSimCallbackCommandObject *pFVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  FSimCallbackCommandObject *pFVar9;
  FSimCallbackCommandObject *pFVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined4 local_b0;
  FClusterUnionPhysicsProxy *local_a8;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  FSimCallbackCommandObject *local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar9 = (FSimCallbackCommandObject *)0x0;
  local_b0 = 0;
  if (this->_padding_ != 0) {
    pTVar1 = (this->Particle_External).Ptr;
    if (pTVar1 == (TPBDRigidParticle<double,3> *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2667941677485784776>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                         ,0x138,"Particle_External");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      fVar13 = 0.0;
      fVar14 = (float)param_1;
      local_d0 = 0;
      local_c8 = 0.0;
      local_c0 = 0;
      local_b8 = 0.0;
      if (0.0 < fVar14) {
        fVar11 = (float)(pTVar1->MMassProps).Property.MM;
        fVar13 = __real_3f800000 / fVar14;
        if (0.0 < fVar11) {
          fVar11 = fVar14 / fVar11;
          fVar12 = __real_3f800000 / fVar11;
          local_c8 = fVar11 * *(float *)&(pTVar1->MMassProps).Property.MI.field_0x8;
          local_d0 = CONCAT44(fVar11 * *(float *)&(pTVar1->MMassProps).Property.MI.field_0x4,
                              fVar11 * *(float *)&(pTVar1->MMassProps).Property.MI);
          local_b8 = fVar12 * *(float *)&(pTVar1->MMassProps).Property.MInvI.field_0x8;
          local_c0 = CONCAT44(fVar12 * *(float *)&(pTVar1->MMassProps).Property.MInvI.field_0x4,
                              fVar12 * *(float *)&(pTVar1->MMassProps).Property.MInvI);
        }
      }
      pIVar2 = *(IPhysicsProxyBase **)&pTVar1->field_0x10;
      (pTVar1->MMassProps).Property.MM = (double)fVar14;
      *(uint *)&pTVar1->field_0x9c = *(uint *)&pTVar1->field_0x9c | 0x20;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      pTVar1 = (this->Particle_External).Ptr;
      pIVar2 = *(IPhysicsProxyBase **)&pTVar1->field_0x10;
      (pTVar1->MMassProps).Property.MInvM = (double)fVar13;
      *(uint *)&pTVar1->field_0x9c = *(uint *)&pTVar1->field_0x9c | 0x20;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      pTVar1 = (this->Particle_External).Ptr;
      pIVar2 = *(IPhysicsProxyBase **)&pTVar1->field_0x10;
      *(undefined8 *)&(pTVar1->MMassProps).Property.MI = local_d0;
      *(float *)&(pTVar1->MMassProps).Property.MI.field_0x8 = local_c8;
      *(uint *)&pTVar1->field_0x9c = *(uint *)&pTVar1->field_0x9c | 0x20;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      pTVar1 = (this->Particle_External).Ptr;
      pIVar2 = *(IPhysicsProxyBase **)&pTVar1->field_0x10;
      *(undefined8 *)&(pTVar1->MMassProps).Property.MInvI = local_c0;
      *(float *)&(pTVar1->MMassProps).Property.MInvI.field_0x8 = local_b8;
      *(uint *)&pTVar1->field_0x9c = *(uint *)&pTVar1->field_0x9c | 0x20;
      if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
      }
      lVar3 = this->_padding_;
      local_98 = local_d0;
      fStack_90 = local_c8;
      uStack_8c = (undefined4)local_c0;
      uStack_88 = (undefined4)((ulonglong)local_c0 >> 0x20);
      fStack_84 = local_b8;
      local_a8 = this;
      fStack_a0 = fVar14;
      fStack_9c = fVar13;
      if (((CVars::bEnableAsyncInitBody == false) && (bVar5 = IsInGameThread(), !bVar5)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                             ,0x1b3,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar6 = ::operator_new(0xc0);
      pFVar10 = pFVar9;
      if (pFVar6 != (FSimCallbackCommandObject *)0x0) {
        local_78 = (FSimCallbackCommandObject *)0x0;
        puVar7 = FMemory::Malloc(0x30,8);
        *puVar7 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetMass_External'::`2'::<lambda_1>,1,1>
                   ::_vftable_;
        puVar7[1] = local_a8;
        puVar7[2] = CONCAT44(fStack_9c,fStack_a0);
        puVar7[3] = local_98;
        puVar7[4] = CONCAT44(uStack_8c,fStack_90);
        puVar7[5] = CONCAT44(fStack_84,uStack_88);
        if (puVar7 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_78 = (FSimCallbackCommandObject *)
                     UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::SetMass_External'::__l2::<lambda_1>,void>
                     ::Call;
        }
        *(undefined ***)pFVar6 = &___7FSimCallbackCommandObject_Chaos__6B_;
        *(undefined2 *)&pFVar6->field_0x8 = 0;
        *(undefined8 *)&pFVar6->field_0x10 = 0;
        *(undefined8 *)&pFVar6->field_0x18 = 0;
        *(undefined8 *)&pFVar6->field_0x20 = 0;
        *(undefined8 *)&pFVar6->field_0x28 = 0;
        *(undefined2 *)&pFVar6->field_0x40 = 1;
        *(FSimCallbackCommandObject **)&pFVar6->Func = local_78;
        *(undefined8 **)&(pFVar6->Func).field_0x28 = puVar7;
        local_50 = (longlong *)0x0;
        *(longlong *)&(pFVar6->Func).field_0x10 = local_68;
        *(undefined8 *)&(pFVar6->Func).field_0x18 = uStack_60;
        *(undefined8 *)&(pFVar6->Func).field_0x20 = local_58;
        if (*(longlong *)&pFVar6->Func != 0) {
          local_78 = pFVar9;
        }
        *(undefined8 *)&pFVar6->Func2 = 0;
        *(undefined8 *)&(pFVar6->Func2).field_0x28 = 0;
        pFVar6->bFuncHasTimeParameters = false;
        pFVar6->ExecuteOnStep = -1;
        if (*(longlong *)&pFVar6->Func == 0) {
          `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
          operator()(local_d8);
        }
        pFVar9 = pFVar6;
        pFVar10 = (FSimCallbackCommandObject *)&DAT_00000001;
      }
      if ((pFVar10 != (FSimCallbackCommandObject *)0x0) &&
         (local_78 != (FSimCallbackCommandObject *)0x0)) {
        plVar8 = &local_68;
        if (local_50 != (longlong *)0x0) {
          plVar8 = local_50;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      FChaosMarshallingManager::RegisterSimCommand_External
                ((FChaosMarshallingManager *)(lVar3 + 0x98),pFVar9);
    }
  }
  return;
}

// SetObjectState_External @ 1440f15c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FClusterUnionPhysicsProxy::SetObjectState_External
          (FClusterUnionPhysicsProxy *this,EObjectStateType param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FSimCallbackCommandObject *pFVar4;
  undefined ***pppuVar5;
  FSimCallbackCommandObject *pFVar6;
  FSimCallbackCommandObject *pFVar7;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined4 local_67;
  undefined2 local_63;
  undefined1 local_61;
  FSimCallbackCommandObject *local_58;
  undefined **local_48;
  FClusterUnionPhysicsProxy *pFStack_40;
  EObjectStateType local_38;
  undefined4 uStack_37;
  undefined2 uStack_33;
  undefined1 uStack_31;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  lVar1 = this->_padding_;
  pFVar6 = (FSimCallbackCommandObject *)0x0;
  local_74 = 0;
  if (lVar1 != 0) {
    if ((this->Particle_External).Ptr == (TPBDRigidParticle<double,3> *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2667941677485784821>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                         ,0x10b,"Particle_External");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      if (((!CVars::bEnableAsyncInitBody) && (bVar3 = IsInGameThread(), !bVar3)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                             ,0x1b3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar4 = ::operator_new(0xc0);
      pFVar7 = pFVar6;
      if (pFVar4 != (FSimCallbackCommandObject *)0x0) {
        pFStack_40 = this;
        local_48 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetObjectState_External'::`2'::<lambda_1>,1,0>
                    ::_vftable_;
        uStack_37 = local_67;
        uStack_33 = local_63;
        uStack_31 = local_61;
        local_30 = (undefined ***)0x0;
        local_38 = param_1;
        *(undefined ***)pFVar4 = &___7FSimCallbackCommandObject_Chaos__6B_;
        *(undefined2 *)&pFVar4->field_0x8 = 0;
        *(undefined8 *)&pFVar4->field_0x10 = 0;
        *(undefined8 *)&pFVar4->field_0x18 = 0;
        *(undefined8 *)&pFVar4->field_0x20 = 0;
        *(undefined8 *)&pFVar4->field_0x28 = 0;
        *(undefined2 *)&pFVar4->field_0x40 = 1;
        *(code **)&pFVar4->Func =
             UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::SetObjectState_External'::__l2::<lambda_1>,void>
             ::Call;
        *(undefined8 *)&(pFVar4->Func).field_0x28 = 0;
        *(undefined ***)&(pFVar4->Func).field_0x10 =
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::SetObjectState_External'::`2'::<lambda_1>,1,0>
              ::_vftable_;
        *(FClusterUnionPhysicsProxy **)&(pFVar4->Func).field_0x18 = this;
        *(ulonglong *)&(pFVar4->Func).field_0x20 =
             CONCAT17(local_61,CONCAT25(local_63,CONCAT41(local_67,param_1)));
        local_58 = (FSimCallbackCommandObject *)
                   UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::SetObjectState_External'::__l2::<lambda_1>,void>
                   ::Call;
        if (*(longlong *)&pFVar4->Func != 0) {
          local_58 = pFVar6;
        }
        *(undefined8 *)&pFVar4->Func2 = 0;
        *(undefined8 *)&(pFVar4->Func2).field_0x28 = 0;
        pFVar4->bFuncHasTimeParameters = false;
        pFVar4->ExecuteOnStep = -1;
        if (*(longlong *)&pFVar4->Func == 0) {
          `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
          operator()(local_78);
        }
        pFVar6 = pFVar4;
        pFVar7 = (FSimCallbackCommandObject *)&DAT_00000001;
      }
      if ((pFVar7 != (FSimCallbackCommandObject *)0x0) &&
         (local_58 != (FSimCallbackCommandObject *)0x0)) {
        pppuVar5 = &local_48;
        if (local_30 != (undefined ***)0x0) {
          pppuVar5 = local_30;
        }
        (*(code *)(*pppuVar5)[2])();
      }
      FChaosMarshallingManager::RegisterSimCommand_External
                ((FChaosMarshallingManager *)(lVar1 + 0x98),pFVar6);
    }
  }
  return;
}

// SetXR_External @ 1440f20b0

void __thiscall
Chaos::FClusterUnionPhysicsProxy::SetXR_External
          (FClusterUnionPhysicsProxy *this,TVector<double> *param_1,TQuat<double> *param_2)

{
  undefined1 *puVar1;
  double dVar2;
  TPBDRigidParticle<double,3> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  
  if (this->_padding_ != 0) {
    pTVar3 = (this->Particle_External).Ptr;
    if (pTVar3 == (TPBDRigidParticle<double,3> *)0x0) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2667941677485784238>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                          ,0x352,"Particle_External");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      dVar2 = (param_1->field0_0x0)._s_0.Y;
      *(double *)&pTVar3->field_0x20 = (param_1->field0_0x0)._s_0.X;
      *(double *)&pTVar3->field_0x28 = dVar2;
      *(double *)&pTVar3->field_0x30 = (param_1->field0_0x0)._s_0.Z;
      dVar2 = param_2->Y;
      dVar7 = param_2->Z;
      dVar8 = param_2->W;
      pTVar3 = (this->Particle_External).Ptr;
      *(float *)&pTVar3->field_0x40 = (float)param_2->X;
      *(float *)&pTVar3->field_0x44 = (float)dVar2;
      *(float *)&pTVar3->field_0x48 = (float)dVar7;
      *(float *)&pTVar3->field_0x4c = (float)dVar8;
      puVar1 = &((this->Particle_External).Ptr)->field_0x9c;
      *(uint *)puVar1 = *(uint *)puVar1 | 0x40000;
      pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
      lVar5 = this->_padding_;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar5 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L"");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      dVar7 = (param_1->field0_0x0)._s_0.X;
      dVar8 = (param_1->field0_0x0)._s_0.Y;
      dVar2 = (param_1->field0_0x0)._s_0.Z;
      iVar11 = IPhysicsProxyBase::GetSolverSyncTimestamp_External((IPhysicsProxyBase *)this);
      *(double *)(lVar5 + 8) = dVar7;
      *(double *)(lVar5 + 0x10) = dVar8;
      *(int *)(lVar5 + 0x20) = iVar11;
      *(double *)(lVar5 + 0x18) = dVar2;
      dVar2 = param_2->X;
      dVar7 = param_2->Y;
      dVar8 = param_2->Z;
      dVar9 = param_2->W;
      iVar11 = IPhysicsProxyBase::GetSolverSyncTimestamp_External((IPhysicsProxyBase *)this);
      *(double *)(lVar5 + 0x30) = dVar2;
      *(double *)(lVar5 + 0x38) = dVar7;
      *(int *)(lVar5 + 0x50) = iVar11;
      *(double *)(lVar5 + 0x40) = dVar8;
      *(double *)(lVar5 + 0x48) = dVar9;
      FPhysicsSolverBase::AddDirtyProxy
                ((FPhysicsSolverBase *)this->_padding_,(IPhysicsProxyBase *)this);
    }
  }
  return;
}

// SyncRemoteData @ 1440f2db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClusterUnionPhysicsProxy::SyncRemoteData
          (FClusterUnionPhysicsProxy *this,FDirtyPropertiesManager *param_1,int param_2,
          FDirtyChaosProperties *param_3)

{
  int *piVar1;
  uint uVar2;
  TPBDRigidParticle<double,3> *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterUnionPhysicsProxySyncRemoteData> FVar10;
  FParticlePositionRotation *pFVar11;
  FParticleVelocities *pFVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  LARGE_INTEGER LVar14;
  ulonglong local_res8;
  FName local_78;
  LARGE_INTEGER local_70;
  undefined8 uStack_68;
  FName local_60;
  longlong lStack_58;
  LARGE_INTEGER local_50;
  FStatMessage local_40;
  
  FVar10 = StatPtr_STAT_ClusterUnionPhysicsProxySyncRemoteData;
  if (StatPtr_STAT_ClusterUnionPhysicsProxySyncRemoteData ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterUnionPhysicsProxySyncRemoteData>)0x0) {
    pFVar9 = ::FName::FName(&local_60,"STAT_ClusterUnionPhysicsProxySyncRemoteData");
    FVar10 = (FThreadSafeStaticStat<Chaos::FStat_STAT_ClusterUnionPhysicsProxySyncRemoteData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ClusterUnionPhysicsProxySyncRemoteData,*pFVar9,
                        L"FClusterUnionPhysicsProxy::SyncRemoteData","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar14 = *(LARGE_INTEGER *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_50.s.LowPart = 0;
  local_50.s.HighPart = 0;
  if ((LVar14.s.LowPart != 0) || (LVar14.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8 = local_res8 & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = LVar14.s.LowPart;
        local_78.Number = LVar14.s.HighPart;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                   ,0x32d);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_70 = LVar14;
      FThreadStats::AddMessage((FName)LVar14.s,CycleScopeStart);
      bVar6 = true;
      goto LAB_1440f2f0d;
    }
  }
  bVar6 = false;
  LVar14 = local_50;
LAB_1440f2f0d:
  pTVar3 = (this->Particle_External).Ptr;
  if (pTVar3 == (TPBDRigidParticle<double,3> *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2667941677485784274>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                       ,0x32e,"Particle_External");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    param_3->ParticleBufferType = pTVar3->field_0x98;
    uVar2 = *(uint *)&((this->Particle_External).Ptr)->field_0x9c;
    uVar13 = uVar2 & 0xfffc0000;
    (param_3->Flags).Bits = uVar13;
    if ((uVar2 >> 0x12 & 1) != 0) {
      pTVar3 = (this->Particle_External).Ptr;
      local_40.StatData.Pad[0] = pTVar3->field_0x20;
      local_40.StatData.Pad[1] = pTVar3->field_0x21;
      local_40.StatData.Pad[2] = pTVar3->field_0x22;
      local_40.StatData.Pad[3] = pTVar3->field_0x23;
      local_40.StatData.Pad[4] = pTVar3->field_0x24;
      local_40.StatData.Pad[5] = pTVar3->field_0x25;
      local_40.StatData.Pad[6] = pTVar3->field_0x26;
      local_40.StatData.Pad[7] = pTVar3->field_0x27;
      local_40.NameAndInfo.Index.Value = *(uint *)&pTVar3->field_0x28;
      local_40.NameAndInfo.Number = *(int *)&pTVar3->field_0x2c;
      local_60.ComparisonIndex.Value = *(uint *)&pTVar3->field_0x30;
      local_60.Number = *(uint *)&pTVar3->field_0x34;
      lStack_58 = *(longlong *)&pTVar3->field_0x38;
      local_70 = *(LARGE_INTEGER *)&pTVar3->field_0x40;
      uStack_68 = *(undefined8 *)&pTVar3->field_0x48;
      pFVar11 = TDirtyElementPool<Chaos::FParticlePositionRotation>::GetElement
                          (&param_1->ClusterXRPool,param_2);
      (pFVar11->MX).field_0x0 = local_40.StatData.Pad[0];
      (pFVar11->MX).field_0x1 = local_40.StatData.Pad[1];
      (pFVar11->MX).field_0x2 = local_40.StatData.Pad[2];
      (pFVar11->MX).field_0x3 = local_40.StatData.Pad[3];
      (pFVar11->MX).field_0x4 = local_40.StatData.Pad[4];
      (pFVar11->MX).field_0x5 = local_40.StatData.Pad[5];
      (pFVar11->MX).field_0x6 = local_40.StatData.Pad[6];
      (pFVar11->MX).field_0x7 = local_40.StatData.Pad[7];
      *(uint *)&(pFVar11->MX).field_0x8 = local_40.NameAndInfo.Index.Value;
      *(int *)&(pFVar11->MX).field_0xc = local_40.NameAndInfo.Number;
      *(uint *)&(pFVar11->MX).field_0x10 = local_60.ComparisonIndex.Value;
      *(uint *)&(pFVar11->MX).field_0x14 = local_60.Number;
      pFVar11->_padding_ = lStack_58;
      *(LARGE_INTEGER *)&pFVar11->MR = local_70;
      *(undefined8 *)&(pFVar11->MR).field_0x8 = uStack_68;
      uVar13 = (param_3->Flags).Bits;
    }
    if ((uVar13 >> 0x13 & 1) != 0) {
      pTVar3 = (this->Particle_External).Ptr;
      local_40.StatData.Pad[0] = pTVar3->field_0xa0;
      local_40.StatData.Pad[1] = pTVar3->field_0xa1;
      local_40.StatData.Pad[2] = pTVar3->field_0xa2;
      local_40.StatData.Pad[3] = pTVar3->field_0xa3;
      local_40.StatData.Pad[4] = pTVar3->field_0xa4;
      local_40.StatData.Pad[5] = pTVar3->field_0xa5;
      local_40.StatData.Pad[6] = pTVar3->field_0xa6;
      local_40.StatData.Pad[7] = pTVar3->field_0xa7;
      local_40.NameAndInfo.Index.Value = *(uint *)&pTVar3->field_0xa8;
      local_40.NameAndInfo.Number = *(int *)&pTVar3->field_0xac;
      local_res8 = *(ulonglong *)&pTVar3->field_0xb0;
      pFVar12 = TDirtyElementPool<Chaos::FParticleVelocities>::GetElement
                          (&param_1->ClusterVelocitiesPool,param_2);
      (pFVar12->MV).field_0x0 = local_40.StatData.Pad[0];
      (pFVar12->MV).field_0x1 = local_40.StatData.Pad[1];
      (pFVar12->MV).field_0x2 = local_40.StatData.Pad[2];
      (pFVar12->MV).field_0x3 = local_40.StatData.Pad[3];
      (pFVar12->MV).field_0x4 = local_40.StatData.Pad[4];
      (pFVar12->MV).field_0x5 = local_40.StatData.Pad[5];
      (pFVar12->MV).field_0x6 = local_40.StatData.Pad[6];
      (pFVar12->MV).field_0x7 = local_40.StatData.Pad[7];
      *(FStatNameAndInfo *)&(pFVar12->MV).field_0x8 = local_40.NameAndInfo;
      *(ulonglong *)&(pFVar12->MW).field_0x4 = local_res8;
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && ((FName)LVar14.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo =
           (FStatNameAndInfo)(LVar14.QuadPart & 0xffff6fffffffffffU | 0x600000000000);
      QueryPerformanceCounter(&local_70);
      local_40.StatData.Pad = (uchar  [8])(local_70.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_40);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Wake_External @ 1440f7e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Chaos::FClusterUnionPhysicsProxy::Wake_External(FClusterUnionPhysicsProxy *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FSimCallbackCommandObject *pFVar4;
  undefined ***pppuVar5;
  FSimCallbackCommandObject *pFVar6;
  FSimCallbackCommandObject *pFVar7;
  undefined1 auStackY_88 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  FSimCallbackCommandObject *local_48;
  undefined **local_38;
  FClusterUnionPhysicsProxy *pFStack_30;
  undefined8 local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  lVar1 = this->_padding_;
  pFVar6 = (FSimCallbackCommandObject *)0x0;
  local_54 = 0;
  if (lVar1 != 0) {
    if ((this->Particle_External).Ptr == (TPBDRigidParticle<double,3> *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2667941677485784797>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                         ,0x123,"Particle_External");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      if (((!CVars::bEnableAsyncInitBody) && (bVar3 = IsInGameThread(), !bVar3)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                             ,0x1b3,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar4 = ::operator_new(0xc0);
      pFVar7 = pFVar6;
      if (pFVar4 != (FSimCallbackCommandObject *)0x0) {
        pFStack_30 = this;
        local_38 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::Wake_External'::`2'::<lambda_1>,1,0>
                    ::_vftable_;
        local_20 = (undefined ***)0x0;
        *(undefined ***)pFVar4 = &___7FSimCallbackCommandObject_Chaos__6B_;
        *(undefined2 *)&pFVar4->field_0x8 = 0;
        *(undefined8 *)&pFVar4->field_0x10 = 0;
        *(undefined8 *)&pFVar4->field_0x18 = 0;
        *(undefined8 *)&pFVar4->field_0x20 = 0;
        *(undefined8 *)&pFVar4->field_0x28 = 0;
        *(undefined2 *)&pFVar4->field_0x40 = 1;
        *(code **)&pFVar4->Func =
             UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::Wake_External'::__l2::<lambda_1>,void>
             ::Call;
        *(undefined8 *)&(pFVar4->Func).field_0x28 = 0;
        *(undefined ***)&(pFVar4->Func).field_0x10 =
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`Chaos::FClusterUnionPhysicsProxy::Wake_External'::`2'::<lambda_1>,1,0>
              ::_vftable_;
        *(FClusterUnionPhysicsProxy **)&(pFVar4->Func).field_0x18 = this;
        *(undefined8 *)&(pFVar4->Func).field_0x20 = local_28;
        local_48 = (FSimCallbackCommandObject *)
                   UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::Wake_External'::__l2::<lambda_1>,void>
                   ::Call;
        if (*(longlong *)&pFVar4->Func != 0) {
          local_48 = pFVar6;
        }
        *(undefined8 *)&pFVar4->Func2 = 0;
        *(undefined8 *)&(pFVar4->Func2).field_0x28 = 0;
        pFVar4->bFuncHasTimeParameters = false;
        pFVar4->ExecuteOnStep = -1;
        if (*(longlong *)&pFVar4->Func == 0) {
          `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
          operator()(local_58);
        }
        pFVar6 = pFVar4;
        pFVar7 = (FSimCallbackCommandObject *)&DAT_00000001;
      }
      if ((pFVar7 != (FSimCallbackCommandObject *)0x0) &&
         (local_48 != (FSimCallbackCommandObject *)0x0)) {
        pppuVar5 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar5 = local_20;
        }
        (*(code *)(*pppuVar5)[2])();
      }
      FChaosMarshallingManager::RegisterSimCommand_External
                ((FChaosMarshallingManager *)(lVar1 + 0x98),pFVar6);
    }
  }
  return;
}

