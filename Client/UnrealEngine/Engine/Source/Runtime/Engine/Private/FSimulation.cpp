// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 50

// FSimulation @ 148250a10

/* WARNING: Type propagation algorithm not settling */

FSimulation * __thiscall ImmediatePhysics_Chaos::FSimulation::FSimulation(FSimulation *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  FString *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FSharedReferencer<1> FVar10;
  FImplementation *pFVar11;
  FImplementation *pFVar12;
  atomic<int> *paVar13;
  bool bVar14;
  FName local_res8;
  
  pFVar12 = (FImplementation *)0x0;
  (this->CVDContextData).OwnerID = -1;
  (this->CVDContextData).Id = -1;
  (this->Implementation).Ptr = (FImplementation *)0x0;
  (this->DebugName).ComparisonIndex = 0;
  (this->DebugName).Number = 0;
  (this->CVDContextData).Attributes = 0;
  (this->CVDContextData).Type = -1;
  (this->CVDContextData).CurrentDataChannel.Object = CVDDC_Default.Object;
  FVar10 = CVDDC_Default.SharedReferenceCount;
  (this->CVDContextData).CurrentDataChannel.SharedReferenceCount.ReferenceController =
       CVDDC_Default.SharedReferenceCount.ReferenceController;
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar13 = &(FVar10.ReferenceController)->SharedReferenceCount;
    *paVar13 = (atomic<int>)((int)*paVar13 + 1);
    UNLOCK();
  }
  (this->DDSimulationTimeline).Object = (FChaosDDTimeline *)0x0;
  (this->DDSimulationTimeline).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar11 = ::operator_new(0xf70);
  if (pFVar11 != (FImplementation *)0x0) {
    pFVar12 = FImplementation::FImplementation(pFVar11);
  }
  if (this == (FSimulation *)&stack0xffffffffffffffe8) {
    if (pFVar12 == (FImplementation *)0x0) goto LAB_148250aba;
    FImplementation::~FImplementation(pFVar12);
  }
  else {
    pFVar11 = (this->Implementation).Ptr;
    (this->Implementation).Ptr = pFVar12;
    if (pFVar11 == (FImplementation *)0x0) goto LAB_148250aba;
    FImplementation::~FImplementation(pFVar11);
    pFVar12 = pFVar11;
  }
  ::operator_delete(pFVar12,0xf70);
LAB_148250aba:
  ::FName::FName(&stack0x00000008,L"RBAN");
  pFVar12 = (this->Implementation).Ptr;
  this->DebugName = local_res8;
  Chaos::FPBDCollisionConstraints::DisableHandles(&pFVar12->Collisions);
  pFVar12 = (this->Implementation).Ptr;
  pTVar7 = (pFVar12->Collisions).DetectorSettings.EvolutionName.Name.SharedReferenceCount.
           ReferenceController;
  dVar1 = (pFVar12->Collisions).DetectorSettings.BoundsExpansion;
  dVar2 = (pFVar12->Collisions).DetectorSettings.BoundsVelocityInflation;
  dVar3 = (pFVar12->Collisions).DetectorSettings.MaxVelocityBoundsExpansion;
  dVar4 = (pFVar12->Collisions).DetectorSettings.BoundsVelocityInflationMACD;
  dVar5 = (pFVar12->Collisions).DetectorSettings.MaxVelocityBoundsExpansionMACD;
  bVar6 = (pFVar12->Collisions).DetectorSettings.bAllowManifolds;
  pFVar8 = (pFVar12->Collisions).DetectorSettings.EvolutionName.Name.Object;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    paVar13 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar13 = &pTVar7->SharedReferenceCount;
    LOCK();
    *paVar13 = (atomic<int>)((int)*paVar13 + 1);
    UNLOCK();
  }
  bVar14 = ChaosImmediate_Collision_DeferNarrowPhase != 0;
  pFVar12 = (this->Implementation).Ptr;
  (pFVar12->Collisions).DetectorSettings.BoundsExpansion = dVar1;
  (pFVar12->Collisions).DetectorSettings.BoundsVelocityInflation = dVar2;
  (pFVar12->Collisions).DetectorSettings.MaxVelocityBoundsExpansion = dVar3;
  (pFVar12->Collisions).DetectorSettings.BoundsVelocityInflationMACD = dVar4;
  (pFVar12->Collisions).DetectorSettings.MaxVelocityBoundsExpansionMACD = dVar5;
  (pFVar12->Collisions).DetectorSettings.bFilteringEnabled = false;
  (pFVar12->Collisions).DetectorSettings.bDeferNarrowPhase = bVar14;
  (pFVar12->Collisions).DetectorSettings.bAllowManifolds = bVar6;
  (pFVar12->Collisions).DetectorSettings.bAllowManifoldReuse = false;
  (pFVar12->Collisions).DetectorSettings.bAllowCCD = false;
  (pFVar12->Collisions).DetectorSettings.bAllowMACD = false;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar13 = (atomic<int>)((int)*paVar13 + 1);
    UNLOCK();
  }
  pTVar9 = (pFVar12->Collisions).DetectorSettings.EvolutionName.Name.SharedReferenceCount.
           ReferenceController;
  (pFVar12->Collisions).DetectorSettings.EvolutionName.Name.Object = pFVar8;
  (pFVar12->Collisions).DetectorSettings.EvolutionName.Name.SharedReferenceCount.ReferenceController
       = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return this;
}

// ~FSimulation @ 148253280

void __thiscall ImmediatePhysics_Chaos::FSimulation::~FSimulation(FSimulation *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FImplementation *pFVar4;
  void *pvVar5;
  uint *puVar6;
  FChaosVDThreadContext *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  code *local_38;
  undefined1 *local_30;
  
  puVar6 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar7 = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar6);
  FChaosVDThreadContext::PushContext(pFVar7,&this->CVDContextData);
  pFVar4 = (this->Implementation).Ptr;
  pFVar8 = (pFVar4->JointHandles).AllocatorInstance.Data;
  iVar3 = (pFVar4->JointHandles).ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((pFVar4->JointHandles).ArrayNum != iVar3) {
      `TCheckedPointerIterator<ImmediatePhysics_Chaos::FJointHandle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    pvVar5 = *(void **)pFVar8;
    if (pvVar5 != (void *)0x0) {
      Chaos::FPBDJointConstraintHandle::SetConstraintEnabled
                (*(FPBDJointConstraintHandle **)((longlong)pvVar5 + 0x18),false);
      Chaos::FPBDJointConstraints::RemoveConstraint
                (*(FPBDJointConstraints **)(*(longlong *)((longlong)pvVar5 + 0x18) + 8),
                 *(int *)(*(longlong *)((longlong)pvVar5 + 0x18) + 0x18));
      ::operator_delete(pvVar5,0x20);
    }
    pFVar8 = pFVar8 + 8;
  }
  pFVar4 = (this->Implementation).Ptr;
  piVar1 = &(pFVar4->JointHandles).ArrayMax;
  (pFVar4->JointHandles).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(pFVar4->JointHandles).AllocatorInstance,0,piVar1);
  }
  pFVar4 = (this->Implementation).Ptr;
  pFVar8 = (pFVar4->ActorHandles).AllocatorInstance.Data;
  iVar3 = (pFVar4->ActorHandles).ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((pFVar4->ActorHandles).ArrayNum != iVar3) {
      `TCheckedPointerIterator<ImmediatePhysics_Chaos::FActorHandle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    pvVar5 = *(void **)pFVar8;
    if (pvVar5 != (void *)0x0) {
      if (*(TGeometryParticleHandleImp<double,3,1> **)((longlong)pvVar5 + 0x10) !=
          (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        Chaos::FPBDRigidsSOAs::DestroyParticle
                  (*(FPBDRigidsSOAs **)((longlong)pvVar5 + 8),
                   *(TGeometryParticleHandleImp<double,3,1> **)((longlong)pvVar5 + 0x10));
        *(undefined8 *)((longlong)pvVar5 + 0x10) = 0;
      }
      ::operator_delete(pvVar5,0x30);
    }
    pFVar8 = pFVar8 + 8;
  }
  pFVar4 = (this->Implementation).Ptr;
  piVar1 = &(pFVar4->ActorHandles).ArrayMax;
  (pFVar4->ActorHandles).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(pFVar4->ActorHandles).AllocatorInstance,0,piVar1);
  }
  puVar6 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar7 = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar6);
  FChaosVDThreadContext::PopContext(pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DDSimulationTimeline).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CVDContextData).CurrentDataChannel.SharedReferenceCount.ReferenceController);
  pFVar4 = (this->Implementation).Ptr;
  if (pFVar4 != (FImplementation *)0x0) {
    FImplementation::~FImplementation(pFVar4);
    ::operator_delete(pFVar4,0xf70);
  }
  return;
}

// AddToCollidingPairs @ 1482664e0

void __thiscall
ImmediatePhysics_Chaos::FSimulation::AddToCollidingPairs(FSimulation *this,FActorHandle *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FImplementation *pFVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  FImplementation *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  TGeometryParticleHandleImp<double,3,1> *pTVar9;
  FScriptContainerElement *pFVar10;
  TGeometryParticleHandleImp<double,3,1> *pTVar11;
  undefined1 local_res8 [8];
  FActorHandle *local_res10;
  TGeometryParticleHandleImp<double,3,1> *local_res18;
  
  local_res18 = param_1->ParticleHandle;
  pFVar4 = (this->Implementation).Ptr;
  pFVar10 = (pFVar4->ActorHandles).AllocatorInstance.Data;
  iVar3 = (pFVar4->ActorHandles).ArrayNum;
  pTVar11 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&local_res18->_padding_ + 4)) {
    pTVar11 = local_res18;
  }
  pFVar2 = pFVar10 + (longlong)iVar3 * 8;
  local_res10 = param_1;
  do {
    if ((pFVar4->ActorHandles).ArrayNum != iVar3) {
      `TCheckedPointerIterator<ImmediatePhysics_Chaos::FActorHandle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
      param_1 = local_res10;
    }
    if (pFVar10 == pFVar2) {
      ((this->Implementation).Ptr)->bActorsDirty = true;
      return;
    }
    pTVar5 = (*(FActorHandle **)pFVar10)->ParticleHandle;
    if (*(FActorHandle **)pFVar10 != param_1) {
      if (pTVar11 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pTVar9 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar5->_padding_ + 4)) {
          pTVar9 = pTVar5;
        }
        if (pTVar9 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_1482665bd;
      }
      pFVar6 = (this->Implementation).Ptr;
      iVar8 = (pFVar6->PotentiallyCollidingPairs).ArrayNum;
      piVar1 = &(pFVar6->PotentiallyCollidingPairs).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(pFVar6->PotentiallyCollidingPairs).AllocatorInstance,piVar1);
        param_1 = local_res10;
      }
      (pFVar6->PotentiallyCollidingPairs).ArrayNum = iVar8 + 1;
      pFVar7 = (pFVar6->PotentiallyCollidingPairs).AllocatorInstance.Data;
      *(TGeometryParticleHandleImp<double,3,1> **)(pFVar7 + (longlong)iVar8 * 0x10) = local_res18;
      *(TGeometryParticleHandleImp<double,3,1> **)(pFVar7 + (longlong)iVar8 * 0x10 + 8) = pTVar5;
    }
LAB_1482665bd:
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// CreateActor @ 148271780

FActorHandle * __thiscall
ImmediatePhysics_Chaos::FSimulation::CreateActor(FSimulation *this,FActorSetup *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  uint uVar6;
  FImplementation *pFVar7;
  FScriptContainerElement *pFVar8;
  FChaosPhysicsMaterial *pFVar9;
  void *pvVar10;
  longlong lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  FActorHandle *pFVar17;
  TVector<double,3> *pTVar18;
  TRotation<double,3> *pTVar19;
  uint uVar20;
  TArray<ImmediatePhysics_Chaos::FActorHandle_*,TSizedDefaultAllocator<32>_> *pTVar21;
  longlong lVar22;
  TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_> *pTVar23;
  FActorHandle *local_58 [8];
  
  pFVar17 = ::operator_new(0x30);
  local_58[0] = (FActorHandle *)0x0;
  if (pFVar17 != (FActorHandle *)0x0) {
    pFVar7 = (this->Implementation).Ptr;
    (pFVar17->Name).ComparisonIndex = 0;
    (pFVar17->Name).Number = 0;
    pFVar17->ParticleHandle = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    pFVar17->ParticlePrevXs = &pFVar7->ParticlePrevXs;
    pFVar17->Particles = &pFVar7->Particles;
    pFVar17->ParticlePrevRs = &pFVar7->ParticlePrevRs;
    FActorHandle::CreateParticleHandle(pFVar17,param_1);
    local_58[0] = pFVar17;
  }
  pFVar7 = (this->Implementation).Ptr;
  pTVar21 = &pFVar7->ActorHandles;
  pFVar8 = (pTVar21->AllocatorInstance).Data;
  if (((pFVar8 <= (FScriptContainerElement *)local_58) &&
      ((FScriptContainerElement *)local_58 < pFVar8 + (longlong)(pFVar7->ActorHandles).ArrayMax * 8)
      ) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
    pcVar12 = (code *)swi(3);
    pFVar17 = (FActorHandle *)(*pcVar12)();
    return pFVar17;
  }
  iVar16 = (pFVar7->ActorHandles).ArrayNum;
  piVar1 = &(pFVar7->ActorHandles).ArrayMax;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar21->AllocatorInstance,piVar1);
  }
  (pFVar7->ActorHandles).ArrayNum = iVar16 + 1;
  pTVar23 = &param_1->Material;
  *(FActorHandle **)((pTVar21->AllocatorInstance).Data + (longlong)iVar16 * 8) = local_58[0];
  pFVar7 = (this->Implementation).Ptr;
  pFVar9 = pTVar23->Ptr;
  uVar6 = local_58[0]->ParticleHandle->HandleIdx;
  uVar20 = 0;
  if ((int)uVar6 < *(int *)&(pFVar7->ParticleMaterials).field_0x10) {
    uVar20 = ~uVar6 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar12 = (code *)swi(3);
    pFVar17 = (FActorHandle *)(*pcVar12)();
    return pFVar17;
  }
  *(FChaosPhysicsMaterial **)
   (*(longlong *)&(pFVar7->ParticleMaterials).field_0x8 + (longlong)(int)uVar6 * 8) = pFVar9;
  pFVar7 = (this->Implementation).Ptr;
  uVar6 = local_58[0]->ParticleHandle->HandleIdx;
  uVar20 = 0;
  if ((int)uVar6 < *(int *)&(pFVar7->PerParticleMaterials).field_0x10) {
    uVar20 = ~uVar6 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar12 = (code *)swi(3);
    pFVar17 = (FActorHandle *)(*pcVar12)();
    return pFVar17;
  }
  puVar2 = (undefined8 *)
           (*(longlong *)&(pFVar7->PerParticleMaterials).field_0x8 + (longlong)(int)uVar6 * 8);
  if ((TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_> *)
      puVar2 != pTVar23) {
    pvVar10 = (void *)*puVar2;
    *puVar2 = pTVar23->Ptr;
    pTVar23->Ptr = (FChaosPhysicsMaterial *)0x0;
    ::operator_delete(pvVar10,0x80);
  }
  pFVar7 = (this->Implementation).Ptr;
  uVar6 = local_58[0]->ParticleHandle->HandleIdx;
  uVar20 = 0;
  if ((int)uVar6 < *(int *)&(pFVar7->CollidedParticles).field_0x10) {
    uVar20 = ~uVar6 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar12 = (code *)swi(3);
    pFVar17 = (FActorHandle *)(*pcVar12)();
    return pFVar17;
  }
  *(undefined1 *)((longlong)(int)uVar6 + *(longlong *)&(pFVar7->CollidedParticles).field_0x8) = 0;
  pTVar18 = Chaos::TParticles<double,3>::GetX
                      ((TParticles<double,3> *)local_58[0]->ParticleHandle->_padding_,
                       (int)local_58[0]->ParticleHandle->_padding_);
  uVar13 = *(undefined8 *)pTVar18;
  uVar14 = *(undefined8 *)&pTVar18->field_0x8;
  uVar5 = *(undefined8 *)&pTVar18->field_0x10;
  pTVar18 = Chaos::TGeometryParticleHandleImp<double,3,1>::
            AuxilaryValue<Chaos::TArrayCollectionArray<Chaos::TVector<double,3>_>_>
                      (local_58[0]->ParticleHandle,&((this->Implementation).Ptr)->ParticlePrevXs);
  *(undefined8 *)pTVar18 = uVar13;
  *(undefined8 *)&pTVar18->field_0x8 = uVar14;
  *(undefined8 *)&pTVar18->field_0x10 = uVar5;
  uVar6 = (uint)local_58[0]->ParticleHandle->_padding_;
  lVar22 = (longlong)(int)uVar6;
  lVar11 = local_58[0]->ParticleHandle->_padding_;
  uVar20 = 0;
  if ((int)uVar6 < *(int *)(lVar11 + 0x50)) {
    uVar20 = ~uVar6 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar12 = (code *)swi(3);
    pFVar17 = (FActorHandle *)(*pcVar12)();
    return pFVar17;
  }
  lVar11 = *(longlong *)(lVar11 + 0x48);
  fVar3 = *(float *)(lVar11 + lVar22 * 0x10);
  fVar4 = *(float *)(lVar11 + 0xc + lVar22 * 0x10);
  uVar5 = *(undefined8 *)(lVar11 + 4 + lVar22 * 0x10);
  pTVar19 = Chaos::TGeometryParticleHandleImp<double,3,1>::
            AuxilaryValue<Chaos::TArrayCollectionArray<Chaos::TRotation<double,3>_>_>
                      (local_58[0]->ParticleHandle,&((this->Implementation).Ptr)->ParticlePrevRs);
  *(double *)pTVar19 = (double)fVar3;
  *(double *)&pTVar19->field_0x8 = (double)(float)uVar5;
  *(double *)&pTVar19->field_0x10 = (double)(float)((ulonglong)uVar5 >> 0x20);
  *(double *)&pTVar19->field_0x18 = (double)fVar4;
  ((this->Implementation).Ptr)->bActorsDirty = true;
  return local_58[0];
}

// CreateActor @ 148271b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FActorHandle * __thiscall
ImmediatePhysics_Chaos::FSimulation::CreateActor
          (FSimulation *this,EActorType param_1,FBodyInstance *param_2,TTransform<double> *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  FActorSetup *pFVar3;
  FActorHandle *pFVar4;
  undefined1 auStack_168 [48];
  FActorSetup local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  pFVar3 = ImmediatePhysics::MakeActorSetup(&local_138,param_1,param_2,param_3);
  pFVar4 = CreateActor(this,pFVar3);
  ::operator_delete(local_138.Material.Ptr,0x80);
  DestructItems<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,int>
            ((TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *)
             local_138.Shapes.AllocatorInstance.Data,local_138.Shapes.ArrayNum);
  if (local_138.Shapes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Shapes.AllocatorInstance.Data);
  }
  if (local_138.Geometry.Reference != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &(local_138.Geometry.Reference)->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) &&
       (*(int *)((longlong)&(local_138.Geometry.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_138.Geometry.Reference)->_padding_)(local_138.Geometry.Reference,1);
    }
  }
  return pFVar4;
}

// CreateDynamicActor @ 148272960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FActorHandle * __thiscall
ImmediatePhysics_Chaos::FSimulation::CreateDynamicActor
          (FSimulation *this,FBodyInstance *param_1,TTransform<double> *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  FActorSetup *pFVar3;
  FActorHandle *pFVar4;
  undefined1 auStack_168 [48];
  FActorSetup local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  pFVar3 = ImmediatePhysics::MakeActorSetup(&local_138,DynamicActor,param_1,param_2);
  pFVar4 = CreateActor(this,pFVar3);
  ::operator_delete(local_138.Material.Ptr,0x80);
  DestructItems<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,int>
            ((TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *)
             local_138.Shapes.AllocatorInstance.Data,local_138.Shapes.ArrayNum);
  if (local_138.Shapes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Shapes.AllocatorInstance.Data);
  }
  if (local_138.Geometry.Reference != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &(local_138.Geometry.Reference)->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) &&
       (*(int *)((longlong)&(local_138.Geometry.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_138.Geometry.Reference)->_padding_)(local_138.Geometry.Reference,1);
    }
  }
  return pFVar4;
}

// CreateJoint @ 1482752d0

FJointHandle * __thiscall
ImmediatePhysics_Chaos::FSimulation::CreateJoint(FSimulation *this,FJointSetup *param_1)

{
  int *piVar1;
  FImplementation *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FJointHandle *pFVar7;
  TArray<ImmediatePhysics_Chaos::FJointHandle_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FJointHandle *local_18;
  FJointHandle *local_10;
  
  if ((param_1->ConstraintSettings).bUseLinearSolver == false) {
    pFVar7 = ::operator_new(0x20);
    local_10 = (FJointHandle *)0x0;
    if (pFVar7 != (FJointHandle *)0x0) {
      local_10 = FJointHandle::FJointHandle
                           (pFVar7,&(((this->Implementation).Ptr)->Joints).NonLinearConstraints,
                            param_1);
    }
    pFVar2 = (this->Implementation).Ptr;
    pTVar8 = &pFVar2->JointHandles;
    pFVar3 = (pTVar8->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_10) &&
       ((FScriptContainerElement *)&local_10 <
        pFVar3 + (longlong)(pFVar2->JointHandles).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FJointHandle *)(*pcVar4)();
        return pFVar7;
      }
    }
    iVar6 = (pFVar2->JointHandles).ArrayNum;
    piVar1 = &(pFVar2->JointHandles).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar8->AllocatorInstance,piVar1);
    }
    (pFVar2->JointHandles).ArrayNum = iVar6 + 1;
    *(FJointHandle **)((pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_10;
    return local_10;
  }
  pFVar7 = ::operator_new(0x20);
  local_18 = (FJointHandle *)0x0;
  if (pFVar7 != (FJointHandle *)0x0) {
    local_18 = FJointHandle::FJointHandle
                         (pFVar7,&(((this->Implementation).Ptr)->Joints).LinearConstraints,param_1);
  }
  pFVar2 = (this->Implementation).Ptr;
  pTVar8 = &pFVar2->JointHandles;
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar3 + (longlong)(pFVar2->JointHandles).ArrayMax * 8)
     ) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FJointHandle *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (pFVar2->JointHandles).ArrayNum;
  piVar1 = &(pFVar2->JointHandles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar8->AllocatorInstance,piVar1);
  }
  (pFVar2->JointHandles).ArrayNum = iVar6 + 1;
  *(FJointHandle **)((pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18;
  return local_18;
}

// CreateJoint @ 1482754b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FJointHandle * __thiscall
ImmediatePhysics_Chaos::FSimulation::CreateJoint
          (FSimulation *this,FConstraintInstance *param_1,FActorHandle *param_2,
          FActorHandle *param_3)

{
  FJointSetup *pFVar1;
  FJointHandle *pFVar2;
  undefined1 auStack_368 [32];
  FJointSetup local_348;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_368;
  pFVar1 = ImmediatePhysics::MakeJointSetup(&local_348,param_1,param_2,param_3);
  pFVar2 = CreateJoint(this,pFVar1);
  return pFVar2;
}

// CreateKinematicActor @ 148275a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FActorHandle * __thiscall
ImmediatePhysics_Chaos::FSimulation::CreateKinematicActor
          (FSimulation *this,FBodyInstance *param_1,TTransform<double> *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  FActorSetup *pFVar3;
  FActorHandle *pFVar4;
  undefined1 auStack_168 [48];
  FActorSetup local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  pFVar3 = ImmediatePhysics::MakeActorSetup(&local_138,KinematicActor,param_1,param_2);
  pFVar4 = CreateActor(this,pFVar3);
  ::operator_delete(local_138.Material.Ptr,0x80);
  DestructItems<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,int>
            ((TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *)
             local_138.Shapes.AllocatorInstance.Data,local_138.Shapes.ArrayNum);
  if (local_138.Shapes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Shapes.AllocatorInstance.Data);
  }
  if (local_138.Geometry.Reference != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &(local_138.Geometry.Reference)->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) &&
       (*(int *)((longlong)&(local_138.Geometry.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_138.Geometry.Reference)->_padding_)(local_138.Geometry.Reference,1);
    }
  }
  return pFVar4;
}

// CreateStaticActor @ 1482775f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FActorHandle * __thiscall
ImmediatePhysics_Chaos::FSimulation::CreateStaticActor(FSimulation *this,FBodyInstance *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  TTransform<double> *pTVar3;
  FActorSetup *pFVar4;
  FActorHandle *pFVar5;
  undefined1 auStack_1c8 [48];
  FActorSetup local_198;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pTVar3 = FBodyInstance::GetUnrealWorldTransform(param_1,&local_78,true,false);
  pFVar4 = ImmediatePhysics::MakeActorSetup(&local_198,StaticActor,param_1,pTVar3);
  pFVar5 = CreateActor(this,pFVar4);
  ::operator_delete(local_198.Material.Ptr,0x80);
  DestructItems<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>,int>
            ((TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_> *)
             local_198.Shapes.AllocatorInstance.Data,local_198.Shapes.ArrayNum);
  if (local_198.Shapes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Shapes.AllocatorInstance.Data);
  }
  if (local_198.Geometry.Reference != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &(local_198.Geometry.Reference)->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) &&
       (*(int *)((longlong)&(local_198.Geometry.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_198.Geometry.Reference)->_padding_)(local_198.Geometry.Reference,1);
    }
  }
  return pFVar5;
}

// DebugDraw @ 148277e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall ImmediatePhysics_Chaos::FSimulation::DebugDraw(FSimulation *this)

{
  FImplementation *pFVar1;
  double dVar2;
  float fVar3;
  FDebugDrawQueue *pFVar4;
  undefined1 auStackY_e8 [32];
  FChaosDDScopeTimelineContext local_b8;
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
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  ChaosDD::Private::FChaosDDScopeTimelineContext::FChaosDDScopeTimelineContext
            (&local_b8,&this->DDSimulationTimeline,0.0,0.0);
  pFVar4 = Chaos::FDebugDrawQueue::GetInstance();
  dVar2 = __real_3ff0000000000000;
  if (pFVar4->bEnableDebugDrawing != false) {
    pFVar4 = Chaos::FDebugDrawQueue::GetInstance();
    if ((0 < pFVar4->NumConsumers) && (bChaosImmediate_DebugDrawShowStatics != false)) {
      if (bChaosImmediate_DebugDrawParticles != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_88 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_80 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleTransforms
                  ((TRigidTransform<double,3> *)&local_88,
                   &(pFVar1->Particles).ActiveStaticParticlesView,
                   &ChaosImmPhysDebugDebugDrawSettings);
      }
      if (bChaosImmediate_DebugDrawShapes != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_88 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_80 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleShapes
                  ((TRigidTransform<double,3> *)&local_88,
                   &(pFVar1->Particles).ActiveStaticParticlesView,dVar2,
                   &ChaosImmPhysDebugDebugDrawSettings);
      }
      if (bChaosImmediate_DebugDrawBounds != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_88 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_80 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleBounds
                  ((TRigidTransform<double,3> *)&local_88,
                   &(pFVar1->Particles).ActiveStaticParticlesView,0.0,
                   &ChaosImmPhysDebugDebugDrawSettings);
      }
    }
  }
  pFVar4 = Chaos::FDebugDrawQueue::GetInstance();
  if (pFVar4->bEnableDebugDrawing != false) {
    pFVar4 = Chaos::FDebugDrawQueue::GetInstance();
    if ((0 < pFVar4->NumConsumers) && (bChaosImmediate_DebugDrawShowKinematics != false)) {
      if (bChaosImmediate_DebugDrawParticles != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_88 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_80 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleTransforms
                  ((TRigidTransform<double,3> *)&local_88,
                   &(pFVar1->Particles).ActiveKinematicParticlesView,
                   &ChaosImmPhysDebugDebugDrawSettings);
      }
      if (bChaosImmediate_DebugDrawShapes != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_88 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_80 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleShapes
                  ((TRigidTransform<double,3> *)&local_88,
                   &(pFVar1->Particles).ActiveKinematicParticlesView,dVar2,
                   &ChaosImmPhysDebugDebugDrawSettings);
      }
      if (bChaosImmediate_DebugDrawBounds != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_88 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_80 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleBounds
                  ((TRigidTransform<double,3> *)&local_88,
                   &(pFVar1->Particles).ActiveKinematicParticlesView,0.0,
                   &ChaosImmPhysDebugDebugDrawSettings);
      }
    }
  }
  pFVar4 = Chaos::FDebugDrawQueue::GetInstance();
  if (pFVar4->bEnableDebugDrawing != false) {
    pFVar4 = Chaos::FDebugDrawQueue::GetInstance();
    if ((0 < pFVar4->NumConsumers) && (bChaosImmediate_DebugDrawShowDynamics != false)) {
      if (bChaosImmediate_DebugDrawParticles != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_88 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_80 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleTransforms
                  ((TRigidTransform<double,3> *)&local_88,&(pFVar1->Particles).ActiveParticlesView,
                   &ChaosImmPhysDebugDebugDrawSettings);
      }
      if (bChaosImmediate_DebugDrawShapes != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_88 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_80 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleShapes
                  ((TRigidTransform<double,3> *)&local_88,&(pFVar1->Particles).ActiveParticlesView,
                   dVar2,&ChaosImmPhysDebugDebugDrawSettings);
      }
      if (bChaosImmediate_DebugDrawBounds != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_88 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_80 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleBounds
                  ((TRigidTransform<double,3> *)&local_88,&(pFVar1->Particles).ActiveParticlesView,
                   0.0,&ChaosImmPhysDebugDebugDrawSettings);
      }
    }
  }
  pFVar4 = Chaos::FDebugDrawQueue::GetInstance();
  if (pFVar4->bEnableDebugDrawing != false) {
    pFVar4 = Chaos::FDebugDrawQueue::GetInstance();
    fVar3 = __real_3f800000;
    if (0 < pFVar4->NumConsumers) {
      if (bChaosImmediate_DebugDrawCollisions != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_88 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_80 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawCollisions
                  ((TRigidTransform<double,3> *)&local_88,&(pFVar1->Collisions).ConstraintAllocator,
                   __real_3f800000,&ChaosImmPhysDebugDebugDrawSettings);
      }
      if (bChaosImmediate_DebugDrawJoints != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_88 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_80 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawJointConstraints
                  ((TRigidTransform<double,3> *)&local_88,&(pFVar1->Joints).LinearConstraints,fVar3,
                   &ChaosImmediate_DebugDrawJointFeatures,&ChaosImmPhysDebugDebugDrawSettings);
        pFVar1 = (this->Implementation).Ptr;
        local_88 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_80 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawJointConstraints
                  ((TRigidTransform<double,3> *)&local_88,&(pFVar1->Joints).NonLinearConstraints,
                   fVar3,&ChaosImmediate_DebugDrawJointFeatures,&ChaosImmPhysDebugDebugDrawSettings)
        ;
      }
    }
  }
  pFVar4 = Chaos::FDebugDrawQueue::GetInstance();
  if (pFVar4->bEnableDebugDrawing != false) {
    pFVar4 = Chaos::FDebugDrawQueue::GetInstance();
    if ((0 < pFVar4->NumConsumers) && (bChaosImmediate_DebugDrawSimulationSpace != false)) {
      pFVar1 = (this->Implementation).Ptr;
      Chaos::DebugDraw::DrawSimulationSpace
                (&pFVar1->SimulationSpaceTransform,&pFVar1->SimulationSpace,
                 &ChaosImmPhysDebugDebugDrawSettings);
    }
  }
  ChaosDD::Private::FChaosDDScopeTimelineContext::~FChaosDDScopeTimelineContext(&local_b8);
  return;
}

// DebugDrawConstraints @ 148278450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall ImmediatePhysics_Chaos::FSimulation::DebugDrawConstraints(FSimulation *this)

{
  FImplementation *pFVar1;
  FDebugDrawQueue *pFVar2;
  undefined1 auStackY_a8 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pFVar2 = Chaos::FDebugDrawQueue::GetInstance();
  if ((pFVar2->bEnableDebugDrawing != false) &&
     (pFVar2 = Chaos::FDebugDrawQueue::GetInstance(), 0 < pFVar2->NumConsumers)) {
    if (bChaosImmediate_DebugDrawCollisions != false) {
      pFVar1 = (this->Implementation).Ptr;
      local_78 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
      dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
      local_68 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
      dStack_60 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
      local_58 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
      dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
      local_48 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
      dStack_40 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
      local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
      dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
      local_28 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
      dStack_20 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
      Chaos::DebugDraw::DrawCollisions
                ((TRigidTransform<double,3> *)&local_78,&(pFVar1->Collisions).ConstraintAllocator,
                 __real_3f800000,&ChaosImmPhysDebugDebugDrawSettings);
    }
    if (bChaosImmediate_DebugDrawJoints != false) {
      pFVar1 = (this->Implementation).Ptr;
      local_78 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
      dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
      local_68 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
      dStack_60 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
      local_58 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
      dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
      local_48 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
      dStack_40 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
      local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
      dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
      local_28 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
      dStack_20 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
      Chaos::DebugDraw::DrawJointConstraints
                ((TRigidTransform<double,3> *)&local_78,&(pFVar1->Joints).LinearConstraints,
                 __real_3f800000,&ChaosImmediate_DebugDrawJointFeatures,
                 &ChaosImmPhysDebugDebugDrawSettings);
      pFVar1 = (this->Implementation).Ptr;
      local_78 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
      dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
      local_68 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
      dStack_60 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
      local_58 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
      dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
      local_48 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
      dStack_40 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
      local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
      dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
      local_28 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
      dStack_20 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
      Chaos::DebugDraw::DrawJointConstraints
                ((TRigidTransform<double,3> *)&local_78,&(pFVar1->Joints).NonLinearConstraints,
                 __real_3f800000,&ChaosImmediate_DebugDrawJointFeatures,
                 &ChaosImmPhysDebugDebugDrawSettings);
    }
  }
  return;
}

// DebugDrawDynamicParticles @ 148278630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall ImmediatePhysics_Chaos::FSimulation::DebugDrawDynamicParticles(FSimulation *this)

{
  FImplementation *pFVar1;
  FDebugDrawQueue *pFVar2;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar2 = Chaos::FDebugDrawQueue::GetInstance();
  if (pFVar2->bEnableDebugDrawing != false) {
    pFVar2 = Chaos::FDebugDrawQueue::GetInstance();
    if ((0 < pFVar2->NumConsumers) && (bChaosImmediate_DebugDrawShowDynamics != false)) {
      if (bChaosImmediate_DebugDrawParticles != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_28 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_20 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleTransforms
                  ((TRigidTransform<double,3> *)&local_78,&(pFVar1->Particles).ActiveParticlesView,
                   &ChaosImmPhysDebugDebugDrawSettings);
      }
      if (bChaosImmediate_DebugDrawShapes != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_28 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_20 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleShapes
                  ((TRigidTransform<double,3> *)&local_78,&(pFVar1->Particles).ActiveParticlesView,
                   __real_3ff0000000000000,&ChaosImmPhysDebugDebugDrawSettings);
      }
      if (bChaosImmediate_DebugDrawBounds != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_28 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_20 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleBounds
                  ((TRigidTransform<double,3> *)&local_78,&(pFVar1->Particles).ActiveParticlesView,
                   0.0,&ChaosImmPhysDebugDebugDrawSettings);
      }
    }
  }
  return;
}

// DebugDrawKinematicParticles @ 1482787f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall ImmediatePhysics_Chaos::FSimulation::DebugDrawKinematicParticles(FSimulation *this)

{
  FImplementation *pFVar1;
  FDebugDrawQueue *pFVar2;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar2 = Chaos::FDebugDrawQueue::GetInstance();
  if (pFVar2->bEnableDebugDrawing != false) {
    pFVar2 = Chaos::FDebugDrawQueue::GetInstance();
    if ((0 < pFVar2->NumConsumers) && (bChaosImmediate_DebugDrawShowKinematics != false)) {
      if (bChaosImmediate_DebugDrawParticles != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_28 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_20 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleTransforms
                  ((TRigidTransform<double,3> *)&local_78,
                   &(pFVar1->Particles).ActiveKinematicParticlesView,
                   &ChaosImmPhysDebugDebugDrawSettings);
      }
      if (bChaosImmediate_DebugDrawShapes != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_28 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_20 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleShapes
                  ((TRigidTransform<double,3> *)&local_78,
                   &(pFVar1->Particles).ActiveKinematicParticlesView,__real_3ff0000000000000,
                   &ChaosImmPhysDebugDebugDrawSettings);
      }
      if (bChaosImmediate_DebugDrawBounds != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_28 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_20 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleBounds
                  ((TRigidTransform<double,3> *)&local_78,
                   &(pFVar1->Particles).ActiveKinematicParticlesView,0.0,
                   &ChaosImmPhysDebugDebugDrawSettings);
      }
    }
  }
  return;
}

// DebugDrawSimulationSpace @ 1482789c0

void __thiscall ImmediatePhysics_Chaos::FSimulation::DebugDrawSimulationSpace(FSimulation *this)

{
  FImplementation *pFVar1;
  FDebugDrawQueue *pFVar2;
  
  pFVar2 = Chaos::FDebugDrawQueue::GetInstance();
  if (pFVar2->bEnableDebugDrawing != false) {
    pFVar2 = Chaos::FDebugDrawQueue::GetInstance();
    if ((0 < pFVar2->NumConsumers) && (bChaosImmediate_DebugDrawSimulationSpace != false)) {
      pFVar1 = (this->Implementation).Ptr;
      Chaos::DebugDraw::DrawSimulationSpace
                (&pFVar1->SimulationSpaceTransform,&pFVar1->SimulationSpace,
                 &ChaosImmPhysDebugDebugDrawSettings);
      return;
    }
  }
  return;
}

// DebugDrawStaticParticles @ 148278a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall ImmediatePhysics_Chaos::FSimulation::DebugDrawStaticParticles(FSimulation *this)

{
  FImplementation *pFVar1;
  FDebugDrawQueue *pFVar2;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar2 = Chaos::FDebugDrawQueue::GetInstance();
  if (pFVar2->bEnableDebugDrawing != false) {
    pFVar2 = Chaos::FDebugDrawQueue::GetInstance();
    if ((0 < pFVar2->NumConsumers) && (bChaosImmediate_DebugDrawShowStatics != false)) {
      if (bChaosImmediate_DebugDrawParticles != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_28 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_20 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleTransforms
                  ((TRigidTransform<double,3> *)&local_78,
                   &(pFVar1->Particles).ActiveStaticParticlesView,
                   &ChaosImmPhysDebugDebugDrawSettings);
      }
      if (bChaosImmediate_DebugDrawShapes != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_28 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_20 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleShapes
                  ((TRigidTransform<double,3> *)&local_78,
                   &(pFVar1->Particles).ActiveStaticParticlesView,__real_3ff0000000000000,
                   &ChaosImmPhysDebugDebugDrawSettings);
      }
      if (bChaosImmediate_DebugDrawBounds != false) {
        pFVar1 = (this->Implementation).Ptr;
        local_78 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
        dStack_70 = (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
        local_68 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
        dStack_60 = (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
        local_58 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
        dStack_50 = (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
        local_48 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
        dStack_40 = (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
        local_38 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
        dStack_30 = (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
        local_28 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
        dStack_20 = (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleBounds
                  ((TRigidTransform<double,3> *)&local_78,
                   &(pFVar1->Particles).ActiveStaticParticlesView,0.0,
                   &ChaosImmPhysDebugDebugDrawSettings);
      }
    }
  }
  return;
}

// DestroyActor @ 148279610

void __thiscall
ImmediatePhysics_Chaos::FSimulation::DestroyActor(FSimulation *this,FActorHandle *param_1)

{
  int iVar1;
  FImplementation *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  FActorHandle *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  int iVar12;
  ForAnyElementType FVar13;
  int iVar14;
  FActorHandle *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  int local_80;
  longlong *local_78;
  longlong *local_70;
  uint local_68;
  FImplementation *local_60;
  FScriptContainerElement *local_58;
  FImplementation *local_50;
  
  pFVar2 = (this->Implementation).Ptr;
  iVar1 = (pFVar2->PotentiallyCollidingPairs).ArrayNum;
  pFVar9 = (pFVar2->PotentiallyCollidingPairs).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
  local_res10 = param_1;
  while( true ) {
    if ((pFVar2->PotentiallyCollidingPairs).ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar9 == pFVar10) break;
    if ((*(TGeometryParticleHandleImp<double,3,1> **)pFVar9 == param_1->ParticleHandle) ||
       (*(TGeometryParticleHandleImp<double,3,1> **)(pFVar9 + 8) == param_1->ParticleHandle)) {
      *(longlong *)pFVar9 = 0;
      *(longlong *)(pFVar9 + 8) = 0;
    }
    pFVar9 = pFVar9 + 0x10;
  }
  ((this->Implementation).Ptr)->bActorsDirty = true;
  Chaos::Private::FCollisionConstraintAllocator::RemoveParticle
            (&(((this->Implementation).Ptr)->Collisions).ConstraintAllocator,
             local_res10->ParticleHandle);
  pFVar2 = (this->Implementation).Ptr;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88._0_4_ = 0;
  local_88._4_4_ = 0;
  pFVar10 = (pFVar2->JointHandles).AllocatorInstance.Data;
  iVar1 = (pFVar2->JointHandles).ArrayNum;
  pFVar9 = pFVar10 + (longlong)iVar1 * 8;
  while( true ) {
    if ((pFVar2->JointHandles).ArrayNum != iVar1) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<ImmediatePhysics_Chaos::FJointHandle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar10 == pFVar9) break;
    local_70 = *(longlong **)pFVar10;
    if ((local_70 != (longlong *)0x0) &&
       (((FActorHandle *)*local_70 == local_res10 || ((FActorHandle *)local_70[1] == local_res10))))
    {
      if ((local_90.Data <= (FScriptContainerElement *)&local_70) &&
         (((FScriptContainerElement *)&local_70 < local_90.Data + (longlong)(int)local_88._4_4_ * 8
          && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uint)local_88 == local_88._4_4_) {
        local_88._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_90,(int *)((longlong)&local_88 + 4));
      }
      lVar6 = (longlong)(int)(uint)local_88;
      local_88._0_4_ = (uint)local_88 + 1;
      *(longlong **)(local_90.Data + lVar6 * 8) = local_70;
    }
    pFVar10 = pFVar10 + 8;
  }
  uVar7 = (ulonglong)(int)(uint)local_88;
  local_68 = (uint)local_88;
  local_60 = (FImplementation *)(local_90.Data + uVar7 * 8);
  FVar13.Data = local_90.Data;
  while( true ) {
    pFVar2 = local_60;
    local_58 = FVar13.Data;
    if ((uint)local_88 != (uint)uVar7) {
      local_98[0] = 0;
      `TCheckedPointerIterator<ImmediatePhysics_Chaos::FJointHandle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_98);
    }
    if ((FImplementation *)FVar13.Data == pFVar2) break;
    pFVar2 = (this->Implementation).Ptr;
    local_78 = *(longlong **)FVar13.Data;
    pFVar9 = (pFVar2->JointHandles).AllocatorInstance.Data;
    local_50 = pFVar2;
    if (((pFVar9 <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 <
         pFVar9 + (longlong)(pFVar2->JointHandles).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (pFVar2->JointHandles).ArrayNum;
    if (iVar1 != 0) {
      pFVar9 = (pFVar2->JointHandles).AllocatorInstance.Data;
      iVar5 = 0;
      local_80 = 0;
      lVar6 = 0;
      bVar4 = *(longlong **)pFVar9 != local_78;
      plVar11 = local_78;
      iVar14 = 0;
      do {
        iVar12 = iVar14;
        do {
          lVar6 = lVar6 + 1;
          iVar12 = iVar12 + 1;
          if (iVar1 <= lVar6) break;
          iVar5 = local_80;
        } while (bVar4 == (*(longlong **)(pFVar9 + lVar6 * 8) != plVar11));
        if (bVar4 != false) {
          if (iVar5 != iVar14) {
            memmove(pFVar9 + (longlong)iVar5 * 8,pFVar9 + (longlong)iVar14 * 8,
                    (longlong)(iVar12 - iVar14) << 3);
            plVar11 = local_78;
            iVar5 = local_80;
          }
          iVar5 = iVar5 + (iVar12 - iVar14);
          local_80 = iVar5;
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar14 = iVar12;
      } while (lVar6 < iVar1);
      (local_50->JointHandles).ArrayNum = iVar5;
      FVar13.Data = local_58;
    }
    plVar11 = local_78;
    if (local_78 != (longlong *)0x0) {
      Chaos::FPBDJointConstraintHandle::SetConstraintEnabled
                ((FPBDJointConstraintHandle *)local_78[3],false);
      lVar6 = plVar11[3];
      Chaos::FPBDJointConstraints::RemoveConstraint
                (*(FPBDJointConstraints **)(lVar6 + 8),*(int *)(lVar6 + 0x18));
      ::operator_delete(plVar11,0x20);
    }
    uVar7 = (ulonglong)local_68;
    FVar13.Data = FVar13.Data + 8;
  }
  bVar4 = local_88._4_4_ != 0;
  local_88 = (ulonglong)local_88._4_4_ << 0x20;
  if (bVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_90,0,(int *)((longlong)&local_88 + 4));
  }
  pFVar2 = (this->Implementation).Ptr;
  pFVar9 = (pFVar2->ActorHandles).AllocatorInstance.Data;
  local_60 = pFVar2;
  if (((pFVar9 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar9 + (longlong)(pFVar2->ActorHandles).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (pFVar2->ActorHandles).ArrayNum;
  if (iVar1 != 0) {
    pFVar9 = (pFVar2->ActorHandles).AllocatorInstance.Data;
    iVar14 = 0;
    bVar4 = *(FActorHandle **)pFVar9 != local_res10;
    lVar6 = 0;
    pFVar8 = local_res10;
    iVar5 = 0;
    do {
      iVar12 = iVar5;
      do {
        lVar6 = lVar6 + 1;
        iVar12 = iVar12 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(FActorHandle **)(pFVar9 + lVar6 * 8) != pFVar8));
      if (bVar4 != false) {
        if (iVar14 != iVar5) {
          memmove(pFVar9 + (longlong)iVar14 * 8,pFVar9 + (longlong)iVar5 * 8,
                  (longlong)(iVar12 - iVar5) << 3);
          pFVar8 = local_res10;
        }
        iVar14 = iVar14 + (iVar12 - iVar5);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar5 = iVar12;
    } while (lVar6 < iVar1);
    (local_60->ActorHandles).ArrayNum = iVar14;
  }
  pFVar8 = local_res10;
  if (local_res10 != (FActorHandle *)0x0) {
    if (local_res10->ParticleHandle != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      Chaos::FPBDRigidsSOAs::DestroyParticle(local_res10->Particles,local_res10->ParticleHandle);
      pFVar8->ParticleHandle = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    }
    ::operator_delete(pFVar8,0x30);
  }
  ((this->Implementation).Ptr)->bActorsDirty = true;
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

// DestroyActorCollisions @ 148279b10

void __thiscall
ImmediatePhysics_Chaos::FSimulation::DestroyActorCollisions(FSimulation *this,FActorHandle *param_1)

{
  Chaos::Private::FCollisionConstraintAllocator::RemoveParticle
            (&(((this->Implementation).Ptr)->Collisions).ConstraintAllocator,param_1->ParticleHandle
            );
  return;
}

// DestroyJoint @ 14827a320

void __thiscall
ImmediatePhysics_Chaos::FSimulation::DestroyJoint(FSimulation *this,FJointHandle *param_1)

{
  int iVar1;
  FImplementation *pFVar2;
  FScriptContainerElement *pFVar3;
  FPBDJointConstraintHandle *pFVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  FJointHandle *pFVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FJointHandle *local_res10;
  
  pFVar2 = (this->Implementation).Ptr;
  pFVar3 = (pFVar2->JointHandles).AllocatorInstance.Data;
  local_res10 = param_1;
  if (((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar3 + (longlong)(pFVar2->JointHandles).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar1 = (pFVar2->JointHandles).ArrayNum;
  if (iVar1 != 0) {
    iVar11 = 0;
    pFVar3 = (pFVar2->JointHandles).AllocatorInstance.Data;
    bVar6 = *(FJointHandle **)pFVar3 != local_res10;
    lVar7 = 0;
    pFVar8 = local_res10;
    iVar9 = 0;
    do {
      iVar10 = iVar9;
      do {
        lVar7 = lVar7 + 1;
        iVar10 = iVar10 + 1;
        if (iVar1 <= lVar7) break;
      } while (bVar6 == (*(FJointHandle **)(pFVar3 + lVar7 * 8) != pFVar8));
      if (bVar6 != false) {
        if (iVar11 != iVar9) {
          memmove(pFVar3 + (longlong)iVar11 * 8,pFVar3 + (longlong)iVar9 * 8,
                  (longlong)(iVar10 - iVar9) << 3);
          pFVar8 = local_res10;
        }
        iVar11 = iVar11 + (iVar10 - iVar9);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar9 = iVar10;
    } while (lVar7 < iVar1);
    (pFVar2->JointHandles).ArrayNum = iVar11;
  }
  pFVar8 = local_res10;
  if (local_res10 != (FJointHandle *)0x0) {
    Chaos::FPBDJointConstraintHandle::SetConstraintEnabled(local_res10->ConstraintHandle,false);
    pFVar4 = pFVar8->ConstraintHandle;
    Chaos::FPBDJointConstraints::RemoveConstraint
              ((FPBDJointConstraints *)pFVar4->_padding_,(int)pFVar4->_padding_);
    ::operator_delete(pFVar8,0x20);
  }
  return;
}

// EnableDisableJoints @ 14827bc80

void __thiscall ImmediatePhysics_Chaos::FSimulation::EnableDisableJoints(FSimulation *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FImplementation *pFVar3;
  longlong *plVar4;
  bool *pbVar5;
  char cVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  char cVar9;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Implementation).Ptr;
  pFVar8 = (pFVar3->JointHandles).AllocatorInstance.Data;
  iVar2 = (pFVar3->JointHandles).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar3->JointHandles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<ImmediatePhysics_Chaos::FJointHandle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    plVar4 = *(longlong **)pFVar8;
    pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)(*plVar4 + 0x10))->field_0xc) {
      pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)(*plVar4 + 0x10);
    }
    if (pTVar7 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      cVar9 = '\0';
    }
    else {
      pbVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled(pTVar7);
      cVar9 = *pbVar5;
    }
    pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)(plVar4[1] + 0x10))->field_0xc) {
      pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)(plVar4[1] + 0x10);
    }
    cVar6 = '\0';
    if (pTVar7 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pbVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled(pTVar7);
      cVar6 = *pbVar5;
    }
    if ((cVar9 == '\0') && (cVar6 == '\0')) {
      Chaos::FPBDJointConstraintHandle::SetConstraintEnabled
                ((FPBDJointConstraintHandle *)plVar4[3],true);
      pFVar8 = pFVar8 + 8;
    }
    else {
      Chaos::FPBDJointConstraintHandle::SetConstraintEnabled
                ((FPBDJointConstraintHandle *)plVar4[3],false);
      pFVar8 = pFVar8 + 8;
    }
  }
  return;
}

// GetActorHandle @ 148283b20

FActorHandle * __thiscall
ImmediatePhysics_Chaos::FSimulation::GetActorHandle(FSimulation *this,int param_1)

{
  FImplementation *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FActorHandle *pFVar5;
  
  pFVar1 = (this->Implementation).Ptr;
  uVar4 = 0;
  if (param_1 < (pFVar1->ActorHandles).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FActorHandle *)(*pcVar2)();
      return pFVar5;
    }
  }
  return *(FActorHandle **)((pFVar1->ActorHandles).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetActorHandle @ 148283ba0

FActorHandle * __thiscall
ImmediatePhysics_Chaos::FSimulation::GetActorHandle(FSimulation *this,int param_1)

{
  FImplementation *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FActorHandle *pFVar5;
  
  pFVar1 = (this->Implementation).Ptr;
  uVar4 = 0;
  if (param_1 < (pFVar1->ActorHandles).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FActorHandle *)(*pcVar2)();
      return pFVar5;
    }
  }
  return *(FActorHandle **)((pFVar1->ActorHandles).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetCollisionDetectorSettings @ 148286700

FCollisionDetectorSettings * __thiscall
ImmediatePhysics_Chaos::FSimulation::GetCollisionDetectorSettings(FSimulation *this)

{
  return &(((this->Implementation).Ptr)->Collisions).DetectorSettings;
}

// GetSimulationSpaceSettings @ 14828e1a0

FSimulationSpaceSettings * __thiscall
ImmediatePhysics_Chaos::FSimulation::GetSimulationSpaceSettings(FSimulation *this)

{
  return &(((this->Implementation).Ptr)->Evolution).SimulationSpaceSettings;
}

// InitSimulationSpace @ 148293ba0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
ImmediatePhysics_Chaos::FSimulation::InitSimulationSpace
          (FSimulation *this,TTransform<double> *param_1)

{
  FImplementation *pFVar1;
  double dVar2;
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
  undefined8 uVar13;
  undefined8 uVar14;
  
  pFVar1 = (this->Implementation).Ptr;
  dVar2 = (param_1->Rotation).XY.m128d_f64[1];
  dVar3 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar4 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar5 = (param_1->Translation).XY.m128d_f64[0];
  dVar6 = (param_1->Translation).XY.m128d_f64[1];
  dVar7 = (param_1->Translation).ZW.m128d_f64[0];
  dVar8 = (param_1->Translation).ZW.m128d_f64[1];
  dVar9 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar10 = (param_1->Scale3D).XY.m128d_f64[1];
  dVar11 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar12 = (param_1->Scale3D).ZW.m128d_f64[1];
  (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (pFVar1->SimulationSpaceTransform).Rotation.XY.m128d_f64[1] = dVar2;
  (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0] = dVar3;
  (pFVar1->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1] = dVar4;
  (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[0] = dVar5;
  (pFVar1->SimulationSpaceTransform).Translation.XY.m128d_f64[1] = dVar6;
  (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[0] = dVar7;
  (pFVar1->SimulationSpaceTransform).Translation.ZW.m128d_f64[1] = dVar8;
  (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0] = dVar9;
  (pFVar1->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1] = dVar10;
  (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0] = dVar11;
  (pFVar1->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1] = dVar12;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pFVar1 = (this->Implementation).Ptr;
  *(double *)&(pFVar1->SimulationSpace).LinearAcceleration =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&(pFVar1->SimulationSpace).LinearAcceleration.field_0x8 = uVar13;
  *(undefined8 *)&(pFVar1->SimulationSpace).LinearAcceleration.field_0x10 = uVar14;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pFVar1 = (this->Implementation).Ptr;
  *(double *)&(pFVar1->SimulationSpace).AngularAcceleration =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&(pFVar1->SimulationSpace).AngularAcceleration.field_0x8 = uVar13;
  *(undefined8 *)&(pFVar1->SimulationSpace).AngularAcceleration.field_0x10 = uVar14;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pFVar1 = (this->Implementation).Ptr;
  *(double *)&(pFVar1->SimulationSpace).LinearVelocity =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&(pFVar1->SimulationSpace).LinearVelocity.field_0x8 = uVar13;
  *(undefined8 *)&(pFVar1->SimulationSpace).LinearVelocity.field_0x10 = uVar14;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pFVar1 = (this->Implementation).Ptr;
  *(double *)&(pFVar1->SimulationSpace).AngularVelocity =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&(pFVar1->SimulationSpace).AngularVelocity.field_0x8 = uVar13;
  *(undefined8 *)&(pFVar1->SimulationSpace).AngularVelocity.field_0x10 = uVar14;
  return;
}

// NumActors @ 148296f90

int __thiscall ImmediatePhysics_Chaos::FSimulation::NumActors(FSimulation *this)

{
  return (((this->Implementation).Ptr)->ActorHandles).ArrayNum;
}

// PackCollidingPairs @ 14829af60

void __thiscall ImmediatePhysics_Chaos::FSimulation::PackCollidingPairs(FSimulation *this)

{
  int *piVar1;
  TArray<Chaos::TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  FImplementation *pFVar18;
  uint uVar19;
  longlong local_res8;
  
  pFVar18 = (this->Implementation).Ptr;
  uVar12 = 0;
  uVar15 = 0;
  if (0 < (pFVar18->PotentiallyCollidingPairs).ArrayNum) {
    local_res8 = 0;
    do {
      uVar19 = ~uVar15 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar15 < (pFVar18->PotentiallyCollidingPairs).ArrayNum) {
        uVar11 = uVar19;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((pFVar18->PotentiallyCollidingPairs).AllocatorInstance.Data + local_res8) ==
          0) {
        pFVar18 = (this->Implementation).Ptr;
        uVar11 = uVar15 + 1;
        if ((int)(uVar15 + 1) < (int)uVar12) {
          uVar11 = uVar12;
        }
        uVar14 = (ulonglong)(int)uVar11;
        if ((int)uVar11 < (pFVar18->PotentiallyCollidingPairs).ArrayNum) {
          lVar16 = uVar14 << 4;
          do {
            uVar11 = (uint)uVar14;
            uVar12 = 0;
            if ((int)uVar11 < (pFVar18->PotentiallyCollidingPairs).ArrayNum) {
              uVar12 = ~uVar11 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(longlong *)((pFVar18->PotentiallyCollidingPairs).AllocatorInstance.Data + lVar16)
                != 0) break;
            pFVar18 = (this->Implementation).Ptr;
            uVar11 = uVar11 + 1;
            uVar14 = (ulonglong)uVar11;
            lVar16 = lVar16 + 0x10;
          } while ((int)uVar11 < (pFVar18->PotentiallyCollidingPairs).ArrayNum);
        }
        pFVar18 = (this->Implementation).Ptr;
        pTVar2 = &pFVar18->PotentiallyCollidingPairs;
        piVar1 = &(pFVar18->PotentiallyCollidingPairs).ArrayNum;
        iVar13 = *piVar1;
        if ((pFVar18->PotentiallyCollidingPairs).ArrayNum <= (int)uVar11) {
          if (iVar13 < (int)uVar15) {
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar15 - iVar13,&pTVar2->AllocatorInstance,piVar1,
                       &(pFVar18->PotentiallyCollidingPairs).ArrayMax);
            return;
          }
          if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
          }
          if (iVar13 <= (int)uVar15) {
            return;
          }
          iVar13 = iVar13 - uVar15;
          if ((-1 < (char)((byte)(~uVar15 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18))) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (iVar13 == 0) {
            return;
          }
          pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x10;
          iVar9 = ((pFVar18->PotentiallyCollidingPairs).ArrayNum - iVar13) - uVar15;
          if (iVar9 != 0) {
            memmove(pFVar10,pFVar10 + (longlong)iVar13 * 0x10,(longlong)iVar9 << 4);
          }
          iVar13 = (pFVar18->PotentiallyCollidingPairs).ArrayNum - iVar13;
          (pFVar18->PotentiallyCollidingPairs).ArrayNum = iVar13;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&pTVar2->AllocatorInstance,iVar13,
                     &(pFVar18->PotentiallyCollidingPairs).ArrayMax);
          return;
        }
        uVar17 = ~uVar11 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar11 < iVar13) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar18 = (this->Implementation).Ptr;
        lVar16 = (longlong)(int)uVar11;
        pFVar10 = (pTVar2->AllocatorInstance).Data + lVar16 * 0x10;
        uVar4 = *(undefined4 *)pFVar10;
        uVar5 = *(undefined4 *)(pFVar10 + 4);
        uVar6 = *(undefined4 *)(pFVar10 + 8);
        uVar7 = *(undefined4 *)(pFVar10 + 0xc);
        uVar12 = 0;
        if ((int)uVar15 < (pFVar18->PotentiallyCollidingPairs).ArrayNum) {
          uVar12 = uVar19;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10 = (pFVar18->PotentiallyCollidingPairs).AllocatorInstance.Data + local_res8;
        *(undefined4 *)pFVar10 = uVar4;
        *(undefined4 *)(pFVar10 + 4) = uVar5;
        *(undefined4 *)(pFVar10 + 8) = uVar6;
        *(undefined4 *)(pFVar10 + 0xc) = uVar7;
        pFVar18 = (this->Implementation).Ptr;
        uVar12 = 0;
        if ((int)uVar11 < (pFVar18->PotentiallyCollidingPairs).ArrayNum) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined8 *)((pFVar18->PotentiallyCollidingPairs).AllocatorInstance.Data + lVar16 * 0x10)
             = 0;
        pFVar18 = (this->Implementation).Ptr;
        uVar12 = 0;
        if ((int)uVar11 < (pFVar18->PotentiallyCollidingPairs).ArrayNum) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar12 = uVar11 + 1;
        *(undefined8 *)
         ((pFVar18->PotentiallyCollidingPairs).AllocatorInstance.Data + lVar16 * 0x10 + 8) = 0;
      }
      pFVar18 = (this->Implementation).Ptr;
      local_res8 = local_res8 + 0x10;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (pFVar18->PotentiallyCollidingPairs).ArrayNum);
  }
  return;
}

// RemoveFromCollidingPairs @ 1482a4180

void __thiscall
ImmediatePhysics_Chaos::FSimulation::RemoveFromCollidingPairs
          (FSimulation *this,FActorHandle *param_1)

{
  int iVar1;
  FImplementation *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar2 = (this->Implementation).Ptr;
  iVar1 = (pFVar2->PotentiallyCollidingPairs).ArrayNum;
  pFVar3 = (pFVar2->PotentiallyCollidingPairs).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((pFVar2->PotentiallyCollidingPairs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if ((*(TGeometryParticleHandleImp<double,3,1> **)pFVar3 == param_1->ParticleHandle) ||
       (*(TGeometryParticleHandleImp<double,3,1> **)(pFVar3 + 8) == param_1->ParticleHandle)) {
      *(longlong *)pFVar3 = 0;
      *(longlong *)(pFVar3 + 8) = 0;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  ((this->Implementation).Ptr)->bActorsDirty = true;
  return;
}

// SetCollisionDetectorSettings @ 1482aa370

void __thiscall
ImmediatePhysics_Chaos::FSimulation::SetCollisionDetectorSettings
          (FSimulation *this,FCollisionDetectorSettings *param_1)

{
  Chaos::FPBDCollisionConstraints::SetDetectorSettings
            (&((this->Implementation).Ptr)->Collisions,param_1);
  return;
}

// SetDebugDrawScene @ 1482aa4f0

void __thiscall
ImmediatePhysics_Chaos::FSimulation::SetDebugDrawScene
          (FSimulation *this,FString *param_1,TSharedPtr<ChaosDD::Private::FChaosDDScene,1> *param_2
          )

{
  TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> *pTVar1;
  TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> *pTVar2;
  TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> local_18;
  
  if ((param_2->Object != (FChaosDDScene *)0x0) &&
     (pTVar2 = &this->DDSimulationTimeline, pTVar2->Object == (FChaosDDTimeline *)0x0)) {
    pTVar1 = ChaosDD::Private::FChaosDDScene::CreateTimeline(param_2->Object,&local_18,param_1);
    if (pTVar2 != pTVar1) {
      pTVar2->Object = pTVar1->Object;
      pTVar1->Object = (FChaosDDTimeline *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->DDSimulationTimeline).SharedReferenceCount,&pTVar1->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetEnabled @ 1482aac50

void __thiscall
ImmediatePhysics_Chaos::FSimulation::SetEnabled
          (FSimulation *this,FActorHandle *param_1,bool param_2)

{
  EObjectStateType EVar1;
  bool *pbVar2;
  char cVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  
  pTVar4 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&param_1->ParticleHandle->_padding_ + 4)) {
    pTVar4 = param_1->ParticleHandle;
  }
  cVar3 = '\0';
  if (pTVar4 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pbVar2 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled
                       ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar4);
    cVar3 = *pbVar2;
  }
  if (param_2 != (cVar3 == '\0')) {
    pTVar4 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&param_1->ParticleHandle->_padding_ + 4)) {
      pTVar4 = param_1->ParticleHandle;
    }
    if (pTVar4 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar1 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar4);
      if (EVar1 == Dynamic) {
        Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetDisabled
                  ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar4,!param_2);
      }
    }
    ((this->Implementation).Ptr)->bActorsDirty = true;
    (((this->Implementation).Ptr)->Joints).LinearConstraints.bJointsDirty = true;
    (((this->Implementation).Ptr)->Joints).NonLinearConstraints.bJointsDirty = true;
  }
  return;
}

// SetHasCollision @ 1482aae70

void __thiscall
ImmediatePhysics_Chaos::FSimulation::SetHasCollision
          (FSimulation *this,FActorHandle *param_1,bool param_2)

{
  bool *pbVar1;
  
  pbVar1 = Chaos::TGeometryParticlesImp<double,3,0>::HasCollision
                     ((TGeometryParticlesImp<double,3,0> *)param_1->ParticleHandle->_padding_,
                      (int)param_1->ParticleHandle->_padding_);
  if (param_2 != *pbVar1) {
    pbVar1 = Chaos::TGeometryParticlesImp<double,3,0>::HasCollision
                       ((TGeometryParticlesImp<double,3,0> *)param_1->ParticleHandle->_padding_,
                        (int)param_1->ParticleHandle->_padding_);
    *pbVar1 = param_2;
    ((this->Implementation).Ptr)->bActorsDirty = true;
  }
  return;
}

// SetIgnoreCollisionActors @ 1482aaed0

void __thiscall
ImmediatePhysics_Chaos::FSimulation::SetIgnoreCollisionActors
          (FSimulation *this,
          TArray<ImmediatePhysics_Chaos::FActorHandle_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pFVar9 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<ImmediatePhysics_Chaos::FActorHandle_*_const,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    plVar8 = (longlong *)0x0;
    if (1 < *(byte *)((longlong)*(longlong **)(*(longlong *)pFVar9 + 0x10) + 0xc)) {
      plVar8 = *(longlong **)(*(longlong *)pFVar9 + 0x10);
    }
    if (plVar8 != (longlong *)0x0) {
      uVar3 = *(uint *)(plVar8 + 1);
      lVar4 = *plVar8;
      uVar7 = 0;
      if ((int)uVar3 < *(int *)(lVar4 + 0x2e0)) {
        uVar7 = ~uVar3 >> 0x1f;
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
      if (*(char *)(*(longlong *)(lVar4 + 0x2d8) + 0xb + (longlong)(int)uVar3 * 0x10) == '\x04') {
        uVar3 = *(uint *)(plVar8 + 1);
        lVar4 = *plVar8;
        uVar7 = 0;
        if ((int)uVar3 < *(int *)(lVar4 + 0x2e0)) {
          uVar7 = ~uVar3 >> 0x1f;
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
        *(undefined4 *)(*(longlong *)(lVar4 + 0x2d8) + (longlong)(int)uVar3 * 0x10) = 0xffffffff;
      }
    }
    pFVar9 = pFVar9 + 8;
  }
  ((this->Implementation).Ptr)->bActorsDirty = true;
  return;
}

// SetIgnoreCollisionPairTable @ 1482ab040

void __thiscall
ImmediatePhysics_Chaos::FSimulation::SetIgnoreCollisionPairTable
          (FSimulation *this,
          TArray<ImmediatePhysics_Chaos::FSimulation::FIgnorePair,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  FImplementation *pFVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>
  *pTVar9;
  ulonglong *puVar10;
  FImplementation *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  ulonglong *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 local_res8 [8];
  uint local_res10;
  TGeometryParticleHandleImp<double,3,1> *local_res18;
  TGeometryParticleHandleImp<double,3,1> *local_res20;
  TGeometryParticleHandleImp<double,3,1> *local_70;
  TGeometryParticleHandleImp<double,3,1> *local_68;
  longlong local_60;
  longlong local_58;
  
  TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *)&((this->Implementation).Ptr)->IgnoreCollisionParticlePairTable);
  iVar8 = param_1->ArrayNum;
  pFVar16 = (param_1->AllocatorInstance).Data;
  pFVar17 = pFVar16 + (longlong)iVar8 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<ImmediatePhysics_Chaos::FSimulation::FIgnorePair_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar16 == pFVar17) break;
    if ((*(longlong *)pFVar16 != 0) && (*(longlong *)(pFVar16 + 8) != 0)) {
      local_68 = *(TGeometryParticleHandleImp<double,3,1> **)(*(longlong *)pFVar16 + 0x10);
      local_70 = *(TGeometryParticleHandleImp<double,3,1> **)(*(longlong *)(pFVar16 + 8) + 0x10);
      uVar12 = ((uint)((ulonglong)local_68 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_68 >> 4)) *
               -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      pTVar9 = TMapBase<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>,0>_>
               ::FindOrAddImpl<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_const_&>
                         ((TMapBase<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>,0>_>
                           *)&((this->Implementation).Ptr)->IgnoreCollisionParticlePairTable,
                          uVar12 >> 0x10 ^ uVar12,&local_68);
      TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>
      ::Emplace<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_const_&>
                (pTVar9,&local_res18,(bool *)&local_70);
      uVar12 = ((uint)((ulonglong)local_70 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_70 >> 4)) *
               -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      pTVar9 = TMapBase<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>,0>_>
               ::FindOrAddImpl<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_const_&>
                         ((TMapBase<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>,0>_>
                           *)&((this->Implementation).Ptr)->IgnoreCollisionParticlePairTable,
                          uVar12 >> 0x10 ^ uVar12,&local_70);
      TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>
      ::Emplace<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_const_&>
                (pTVar9,&local_res20,(bool *)&local_68);
    }
    pFVar16 = pFVar16 + 0x10;
  }
  pFVar11 = (this->Implementation).Ptr;
  piVar1 = &(pFVar11->PotentiallyCollidingPairs).ArrayMax;
  (pFVar11->PotentiallyCollidingPairs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(pFVar11->PotentiallyCollidingPairs).AllocatorInstance,0,piVar1);
  }
  pFVar11 = (this->Implementation).Ptr;
  lVar21 = (longlong)(pFVar11->ActorHandles).ArrayNum;
  if (0 < lVar21) {
    local_58 = 1;
    local_60 = 0;
    lVar19 = lVar21;
    uVar12 = 0;
    do {
      lVar22 = local_58;
      lVar20 = local_60;
      pFVar11 = (this->Implementation).Ptr;
      uVar13 = 0;
      if ((int)uVar12 < (pFVar11->ActorHandles).ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = uVar12 + 1;
      uVar2 = *(ulonglong *)
               (*(longlong *)((pFVar11->ActorHandles).AllocatorInstance.Data + lVar20) + 0x10);
      lVar20 = lVar22;
      local_res10 = uVar12;
      if (lVar22 < lVar21) {
        uVar13 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
LAB_1482ab2a0:
        pFVar11 = (this->Implementation).Ptr;
        uVar14 = 0;
        if ((int)uVar12 < (pFVar11->ActorHandles).ArrayNum) {
          uVar14 = ~uVar12 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = (this->Implementation).Ptr;
        uVar4 = *(ulonglong *)
                 (*(longlong *)((pFVar11->ActorHandles).AllocatorInstance.Data + lVar22 * 8) + 0x10)
        ;
        if (*(int *)&(pFVar3->IgnoreCollisionParticlePairTable).field_0x8 !=
            *(int *)&(pFVar3->IgnoreCollisionParticlePairTable).field_0x34) {
          puVar5 = *(undefined1 **)&(pFVar3->IgnoreCollisionParticlePairTable).field_0x40;
          puVar15 = &(pFVar3->IgnoreCollisionParticlePairTable).field_0x38;
          if (puVar5 != (undefined1 *)0x0) {
            puVar15 = puVar5;
          }
          iVar8 = *(int *)(puVar15 +
                          (ulonglong)
                          (*(int *)&(pFVar3->IgnoreCollisionParticlePairTable).field_0x48 - 1U &
                          (uVar13 >> 0x10 ^ uVar13)) * 4);
          if (iVar8 != -1) {
            do {
              puVar10 = (ulonglong *)
                        ((longlong)iVar8 * 0x60 +
                        *(longlong *)&pFVar3->IgnoreCollisionParticlePairTable);
              if (*puVar10 == uVar2) {
                puVar18 = puVar10 + 1;
                if (puVar10 == (ulonglong *)0x0) {
                  puVar18 = (ulonglong *)0x0;
                }
                if ((puVar18 != (ulonglong *)0x0) &&
                   (uVar14 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595,
                   uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb,
                   (int)puVar18[1] != *(int *)((longlong)puVar18 + 0x34))) {
                  puVar10 = puVar18 + 7;
                  if ((ulonglong *)puVar18[8] != (ulonglong *)0x0) {
                    puVar10 = (ulonglong *)puVar18[8];
                  }
                  iVar8 = *(int *)((longlong)puVar10 +
                                  (ulonglong)((int)puVar18[9] - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4)
                  ;
                  if (iVar8 != -1) {
                    goto LAB_1482ab3e0;
                  }
                }
                break;
              }
              iVar8 = (int)puVar10[0xb];
            } while (iVar8 != -1);
          }
        }
        goto LAB_1482ab3f5;
      }
LAB_1482ab459:
      local_58 = lVar20 + 1;
      local_60 = local_60 + 8;
      lVar19 = lVar19 + -1;
      uVar12 = local_res10;
    } while (lVar19 != 0);
    pFVar11 = (this->Implementation).Ptr;
  }
  pFVar11->bActorsDirty = true;
  return;
  while (iVar8 = *(int *)(*puVar18 + 8 + (longlong)iVar8 * 0x10), iVar8 != -1) {
LAB_1482ab3e0:
    if (*(ulonglong *)(*puVar18 + (longlong)iVar8 * 0x10) == uVar4) goto LAB_1482ab43a;
  }
LAB_1482ab3f5:
  iVar8 = (pFVar3->PotentiallyCollidingPairs).ArrayNum;
  piVar1 = &(pFVar3->PotentiallyCollidingPairs).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(pFVar3->PotentiallyCollidingPairs).AllocatorInstance,piVar1);
  }
  (pFVar3->PotentiallyCollidingPairs).ArrayNum = iVar8 + 1;
  pFVar16 = (pFVar3->PotentiallyCollidingPairs).AllocatorInstance.Data;
  *(ulonglong *)(pFVar16 + (longlong)iVar8 * 0x10) = uVar2;
  *(ulonglong *)(pFVar16 + (longlong)iVar8 * 0x10 + 8) = uVar4;
LAB_1482ab43a:
  uVar12 = uVar12 + 1;
  lVar22 = lVar22 + 1;
  lVar20 = local_58;
  if (lVar21 <= lVar22) goto LAB_1482ab459;
  goto LAB_1482ab2a0;
}

// SetIsKinematic @ 1482ab830

void __thiscall
ImmediatePhysics_Chaos::FSimulation::SetIsKinematic
          (FSimulation *this,FActorHandle *param_1,bool param_2)

{
  char cVar1;
  EObjectStateType EVar2;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  
  pTVar3 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&param_1->ParticleHandle->_padding_ + 4) != '\0') {
    pTVar3 = param_1->ParticleHandle;
  }
  if (pTVar3 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    EVar2 = Static;
  }
  else {
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar3->_padding_ + 4)) {
      this_00 = pTVar3;
    }
    if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar2 = Kinematic;
    }
    else {
      EVar2 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    }
  }
  if (param_2 == (EVar2 == Kinematic)) {
    return;
  }
  pTVar3 = param_1->ParticleHandle;
  if (((pTVar3 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
      (cVar1 = *(char *)((longlong)&pTVar3->_padding_ + 4), cVar1 != '\x01')) && (cVar1 == '\x02'))
  {
    EVar2 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                      ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar3);
    if ((EVar2 == Kinematic) || (!param_2)) {
      EVar2 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar3);
      if ((EVar2 != Kinematic) || (param_2)) goto LAB_1482ab8ce;
      EVar2 = Dynamic;
    }
    else {
      EVar2 = Kinematic;
    }
    Chaos::TPBDRigidParticles<double,3>::SetObjectState
              ((TPBDRigidParticles<double,3> *)pTVar3->_padding_,(int)pTVar3->_padding_,EVar2);
  }
LAB_1482ab8ce:
  ((this->Implementation).Ptr)->bActorsDirty = true;
  (((this->Implementation).Ptr)->Joints).LinearConstraints.bJointsDirty = true;
  (((this->Implementation).Ptr)->Joints).NonLinearConstraints.bJointsDirty = true;
  return;
}

// SetMaxNumRollingAverageStepTimes @ 1482ad6e0

void __thiscall
ImmediatePhysics_Chaos::FSimulation::SetMaxNumRollingAverageStepTimes(FSimulation *this,int param_1)

{
  if (-1 < param_1) {
    ((this->Implementation).Ptr)->MaxNumRollingAverageStepTimes = param_1;
  }
  return;
}

// SetNumActiveBodies @ 1482ad700

void __thiscall
ImmediatePhysics_Chaos::FSimulation::SetNumActiveBodies
          (FSimulation *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  EObjectStateType EVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar10;
  FImplementation *pFVar11;
  uint uVar12;
  longlong lVar13;
  
  pFVar11 = (this->Implementation).Ptr;
  if ((param_1 == pFVar11->NumActiveDynamicActorHandles) &&
     (ChaosImmediate_DisableInactiveByIndex == 0)) {
    pFVar9 = (param_2->AllocatorInstance).Data;
  }
  else {
    pFVar11->NumActiveDynamicActorHandles = 0;
    pFVar11 = (this->Implementation).Ptr;
    uVar12 = 0;
    if (0 < (pFVar11->ActorHandles).ArrayNum) {
      lVar13 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar12 < (pFVar11->ActorHandles).ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)((pFVar11->ActorHandles).AllocatorInstance.Data + lVar13);
        pTVar10 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if ((*(TPBDRigidParticleHandleImp<double,3,1> **)(lVar2 + 0x10))->field_0xc != '\0') {
          pTVar10 = *(TPBDRigidParticleHandleImp<double,3,1> **)(lVar2 + 0x10);
        }
        if (pTVar10 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_1482ad7ea:
          if (ChaosImmediate_DisableInactiveByIndex == 0) {
            pTVar10 = *(TPBDRigidParticleHandleImp<double,3,1> **)(lVar2 + 0x10);
            if (((this->Implementation).Ptr)->NumActiveDynamicActorHandles < param_1) {
              pTVar8 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
              if (1 < (byte)pTVar10->field_0xc) {
                pTVar8 = pTVar10;
              }
LAB_1482ad84c:
              if ((pTVar8 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
                 (EVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar8),
                 EVar5 == Dynamic)) {
                Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetDisabled(pTVar8,false);
              }
              piVar1 = &((this->Implementation).Ptr)->NumActiveDynamicActorHandles;
              *piVar1 = *piVar1 + 1;
              goto LAB_1482ad894;
            }
            pTVar8 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (1 < (byte)pTVar10->field_0xc) {
              pTVar8 = pTVar10;
            }
          }
          else {
            pFVar7 = (param_2->AllocatorInstance).Data;
            pFVar9 = pFVar7 + (longlong)param_2->ArrayNum * 4;
            for (; pFVar7 != pFVar9; pFVar7 = pFVar7 + 4) {
              if (*(uint *)pFVar7 == uVar12) {
                pTVar8 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
                if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)(lVar2 + 0x10))->
                              field_0xc) {
                  pTVar8 = *(TPBDRigidParticleHandleImp<double,3,1> **)(lVar2 + 0x10);
                }
                goto LAB_1482ad84c;
              }
            }
            pTVar8 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)(lVar2 + 0x10))->field_0xc) {
              pTVar8 = *(TPBDRigidParticleHandleImp<double,3,1> **)(lVar2 + 0x10);
            }
          }
          if ((pTVar8 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
             (EVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar8),
             EVar5 == Dynamic)) {
            Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetDisabled(pTVar8,true);
          }
        }
        else {
          pTVar8 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar10->field_0xc) {
            pTVar8 = pTVar10;
          }
          if (pTVar8 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            EVar5 = Kinematic;
          }
          else {
            EVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar8);
          }
          if (EVar5 != Kinematic) goto LAB_1482ad7ea;
        }
LAB_1482ad894:
        pFVar11 = (this->Implementation).Ptr;
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 8;
      } while ((int)uVar12 < (pFVar11->ActorHandles).ArrayNum);
    }
    pFVar11->bActorsDirty = true;
    pFVar9 = (param_2->AllocatorInstance).Data;
  }
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
    return;
  }
  return;
}

// SetRewindVelocities @ 1482ae860

void __thiscall
ImmediatePhysics_Chaos::FSimulation::SetRewindVelocities(FSimulation *this,bool param_1)

{
  (((this->Implementation).Ptr)->Evolution).bRewindVelocities = param_1;
  return;
}

// SetSimulationSpaceSettings @ 1482ae960

void __thiscall
ImmediatePhysics_Chaos::FSimulation::SetSimulationSpaceSettings
          (FSimulation *this,FSimulationSpaceSettings *param_1)

{
  FImplementation *pFVar1;
  double dVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  
  dVar2 = param_1->Alpha;
  pFVar1 = (this->Implementation).Ptr;
  (pFVar1->Evolution).SimulationSpaceSettings.MasterAlpha = param_1->MasterAlpha;
  (pFVar1->Evolution).SimulationSpaceSettings.Alpha = dVar2;
  uVar4 = *(undefined7 *)&param_1->field_0x11;
  dVar2 = param_1->LinearAccelerationAlpha;
  (pFVar1->Evolution).SimulationSpaceSettings.bEnabled = param_1->bEnabled;
  *(undefined7 *)&(pFVar1->Evolution).SimulationSpaceSettings.field_0x11 = uVar4;
  (pFVar1->Evolution).SimulationSpaceSettings.LinearAccelerationAlpha = dVar2;
  dVar2 = param_1->CentrifugalAlpha;
  (pFVar1->Evolution).SimulationSpaceSettings.CoriolisAlpha = param_1->CoriolisAlpha;
  (pFVar1->Evolution).SimulationSpaceSettings.CentrifugalAlpha = dVar2;
  dVar2 = param_1->AngularAccelerationAlpha;
  (pFVar1->Evolution).SimulationSpaceSettings.EulerAlpha = param_1->EulerAlpha;
  (pFVar1->Evolution).SimulationSpaceSettings.AngularAccelerationAlpha = dVar2;
  dVar2 = param_1->AngularVelocityAlpha;
  (pFVar1->Evolution).SimulationSpaceSettings.LinearVelocityAlpha = param_1->LinearVelocityAlpha;
  (pFVar1->Evolution).SimulationSpaceSettings.AngularVelocityAlpha = dVar2;
  uVar3 = *(undefined8 *)&(param_1->ExternalLinearEtherDrag).field_0x8;
  *(undefined8 *)&(pFVar1->Evolution).SimulationSpaceSettings.ExternalLinearEtherDrag =
       *(undefined8 *)&param_1->ExternalLinearEtherDrag;
  *(undefined8 *)&(pFVar1->Evolution).SimulationSpaceSettings.ExternalLinearEtherDrag.field_0x8 =
       uVar3;
  *(undefined8 *)&(pFVar1->Evolution).SimulationSpaceSettings.ExternalLinearEtherDrag.field_0x10 =
       *(undefined8 *)&(param_1->ExternalLinearEtherDrag).field_0x10;
  return;
}

// SetSimulationSpaceSettings @ 1482ae9c0

void __thiscall
ImmediatePhysics_Chaos::FSimulation::SetSimulationSpaceSettings
          (FSimulation *this,bool param_1,double param_2,TVector<double> *param_3)

{
  double dVar1;
  FImplementation *pFVar2;
  double dVar3;
  
  pFVar2 = (this->Implementation).Ptr;
  (pFVar2->Evolution).SimulationSpaceSettings.bEnabled = param_1;
  (pFVar2->Evolution).SimulationSpaceSettings.LinearVelocityAlpha = param_2;
  (pFVar2->Evolution).SimulationSpaceSettings.AngularVelocityAlpha = param_2;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  *(double *)&(pFVar2->Evolution).SimulationSpaceSettings.ExternalLinearEtherDrag =
       (param_3->field0_0x0)._s_0.X;
  *(double *)&(pFVar2->Evolution).SimulationSpaceSettings.ExternalLinearEtherDrag.field_0x8 = dVar3;
  *(double *)&(pFVar2->Evolution).SimulationSpaceSettings.ExternalLinearEtherDrag.field_0x10 = dVar1
  ;
  (pFVar2->Evolution).SimulationSpaceSettings.CentrifugalAlpha =
       (double)ChaosImmediate_Evolution_SimSpaceCentrifugalAlpha;
  (pFVar2->Evolution).SimulationSpaceSettings.CoriolisAlpha =
       (double)ChaosImmediate_Evolution_SimSpaceCoriolisAlpha;
  (pFVar2->Evolution).SimulationSpaceSettings.EulerAlpha =
       (double)ChaosImmediate_Evolution_SimSpaceEulerAlpha;
  return;
}

// SetSolverSettings @ 1482aeb40

void __thiscall
ImmediatePhysics_Chaos::FSimulation::SetSolverSettings
          (FSimulation *this,double param_1,double param_2,double param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8)

{
  FImplementation *pFVar1;
  undefined3 uVar2;
  int iVar3;
  undefined1 uVar4;
  FPBDSceneConstraintGroupSolver *pFVar5;
  
  if (0.0 <= param_1) {
    ((this->Implementation).Ptr)->FixedStepTime = param_1;
  }
  if (0.0 <= param_2) {
    (((this->Implementation).Ptr)->Collisions).DetectorSettings.BoundsExpansion = param_2;
  }
  if (0.0 <= param_3) {
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    (((this->Implementation).Ptr)->Collisions).SolverSettings.MaxPushOutVelocity = param_3;
  }
  if (-1 < param_5) {
    pFVar1 = (this->Implementation).Ptr;
    iVar3 = 0x7f;
    if (param_5 < 0x7f) {
      iVar3 = param_5;
    }
    param_5 = CONCAT13(param_5._3_1_,*(undefined3 *)&(pFVar1->Evolution).ConstraintSolver.field_0xb0
                      );
    uVar4 = 0xff;
    if (-1 < iVar3) {
      uVar4 = (char)iVar3;
    }
    param_5 = CONCAT31(param_5._1_3_,uVar4);
    pFVar5 = &(pFVar1->Evolution).ConstraintSolver;
    (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5,&param_5);
  }
  if (-1 < param_6) {
    pFVar1 = (this->Implementation).Ptr;
    iVar3 = 0x7f;
    if (param_6 < 0x7f) {
      iVar3 = param_6;
    }
    uVar2 = *(undefined3 *)&(pFVar1->Evolution).ConstraintSolver.field_0xb0;
    param_5 = CONCAT13(param_5._3_1_,uVar2);
    uVar4 = 0xff;
    if (-1 < iVar3) {
      uVar4 = (char)iVar3;
    }
    param_5._0_2_ = CONCAT11(uVar4,(char)uVar2);
    pFVar5 = &(pFVar1->Evolution).ConstraintSolver;
    (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5,&param_5);
  }
  if (-1 < param_7) {
    pFVar1 = (this->Implementation).Ptr;
    iVar3 = 0x7f;
    if (param_7 < 0x7f) {
      iVar3 = param_7;
    }
    uVar4 = 0xff;
    if (-1 < iVar3) {
      uVar4 = (char)iVar3;
    }
    pFVar5 = &(pFVar1->Evolution).ConstraintSolver;
    param_5._0_3_ = CONCAT12(uVar4,*(undefined2 *)&(pFVar1->Evolution).ConstraintSolver.field_0xb0);
    (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5,&param_5);
  }
  if (-1 < param_4) {
    pFVar1 = (this->Implementation).Ptr;
    if (param_4 == 0) {
      iVar3 = Chaos::FPBDJointConstraints::NumConstraints(&(pFVar1->Joints).LinearConstraints);
      if (0 < iVar3) {
        Chaos::FPBDJointCombinedConstraints::MergeLinearConstraintsIntoNonLinearConstraints
                  (&((this->Implementation).Ptr)->Joints);
      }
    }
    else {
      iVar3 = Chaos::FPBDJointConstraints::NumConstraints(&(pFVar1->Joints).NonLinearConstraints);
      if (0 < iVar3) {
        Chaos::FPBDJointCombinedConstraints::MergeNonLinearConstraintsIntoLinearConstraints
                  (&((this->Implementation).Ptr)->Joints);
      }
    }
    (((this->Implementation).Ptr)->Joints).LinearConstraints.Settings.bUseSimd =
         bChaosImmediate_UseSimdForLinearSolver;
  }
  if (-1 < param_8) {
    (((this->Implementation).Ptr)->Collisions).DetectorSettings.bAllowManifolds = param_8 != 0;
  }
  return;
}

// SetUseFixedStepTolerance @ 1482aeda0

void __thiscall
ImmediatePhysics_Chaos::FSimulation::SetUseFixedStepTolerance(FSimulation *this,bool param_1)

{
  ((this->Implementation).Ptr)->bUseFixedStepTolerance = param_1;
  return;
}

// SetUseMinStepTime @ 1482aedb0

void __thiscall
ImmediatePhysics_Chaos::FSimulation::SetUseMinStepTime(FSimulation *this,bool param_1)

{
  ((this->Implementation).Ptr)->bUseMinStepTime = param_1;
  return;
}

// Simulate @ 1482af400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ImmediatePhysics_Chaos::FSimulation::Simulate
          (FSimulation *this,double param_1,double param_2,int param_3,TVector<double> *param_4,
          FPBDJointSolverSettings *param_5,FPBDCollisionSolverSettings *param_6,
          FCollisionDetectorSettings *param_7)

{
  int *piVar1;
  FPBDSceneConstraintGroupSolver *pFVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  double dVar9;
  int iVar10;
  undefined3 uVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  undefined4 uVar15;
  double dVar16;
  int iVar17;
  int iVar18;
  FSharedReferencer<1> FVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_Chaos> FVar27;
  FPBDJointSolverSettings *pFVar28;
  bool *pbVar29;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined1 uVar30;
  char cVar31;
  uint uVar32;
  FPBDJointCombinedConstraints *this_02;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar33;
  FNameEntryId FVar34;
  FName FVar35;
  FScriptContainerElement *pFVar36;
  FImplementation *pFVar37;
  char cVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auStackY_288 [32];
  FColor_u_0 local_224;
  undefined1 local_220 [8];
  FString local_218;
  FName local_208;
  LARGE_INTEGER local_200;
  FName local_1f8;
  FStatMessage local_1e8;
  FPBDJointSolverSettings *local_1d8;
  FPBDJointSolverSettings local_1c8;
  undefined1 local_f8 [16];
  FChaosVDOptionalDataChannel *local_e8;
  FSharedReferencer<1> FStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  FString *local_c8;
  FSharedReferencer<1> FStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_1e8.StatData.Pad = (uchar  [8])param_7;
  local_1d8 = param_5;
  FVar27 = StatPtr_STAT_ImmediateSimulate_Chaos;
  local_200 = (LARGE_INTEGER)this;
  if (StatPtr_STAT_ImmediateSimulate_Chaos ==
      (FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_Chaos>)0x0) {
    pFVar26 = ::FName::FName(&local_208,"STAT_ImmediateSimulate_Chaos");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_Chaos>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImmediateSimulate_Chaos,*pFVar26,
                        L"FSimulation::Simulate_Chaos","STATGROUP_ImmediatePhysics",
                        "STATCAT_Advanced",L"Immediate Physics",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar35 = *(FName *)FVar27;
  bVar12 = false;
  bVar13 = false;
  local_1f8.ComparisonIndex.Value = 0;
  local_1f8.Number = 0;
  bVar22 = false;
  bVar6 = false;
  FVar34 = FVar35.ComparisonIndex.Value;
  uVar32 = FVar35.Number;
  if ((FVar34.Value == 0) && (uVar32 == 0)) {
LAB_1482af5a4:
    bVar13 = bVar6;
    bVar12 = bVar22;
    bVar22 = false;
    local_208 = local_1f8;
    FVar35 = local_1f8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_224.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_224._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar12 = false;
      bVar13 = true;
      bVar22 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_218.Data.AllocatorInstance.Data._0_4_ = FVar34.Value;
        local_218.Data.AllocatorInstance.Data._4_4_ = uVar32;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_218,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ImmediatePhysics\\ImmediatePhysicsChaos\\ImmediatePhysicsSimulation_Chaos.cpp"
                   ,0x39d);
        bVar12 = true;
        bVar13 = true;
        bVar22 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1482af5a4;
    local_218.Data.AllocatorInstance.Data._0_4_ = FVar34.Value;
    local_218.Data.AllocatorInstance.Data._4_4_ = uVar32;
    local_208 = FVar35;
    local_1f8 = FVar35;
    FThreadStats::AddMessage(FVar35,CycleScopeStart);
    bVar22 = true;
  }
  FVar19.ReferenceController = CVDDC_Default.SharedReferenceCount.ReferenceController;
  if (CVDDC_Default.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (CVDDC_Default.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(CVDDC_Default.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e8 = (this->CVDContextData).CurrentDataChannel.Object;
  local_f8._0_8_ = *(undefined8 *)&this->CVDContextData;
  local_f8._8_8_ = *(undefined8 *)&(this->CVDContextData).Type;
  FStack_e0.ReferenceController =
       (this->CVDContextData).CurrentDataChannel.SharedReferenceCount.ReferenceController;
  if (FStack_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  ::FName::ToString(&this->DebugName,&local_218);
  FChaosVisualDebuggerTrace::TraceSolverFrameStart((FChaosVDContext *)local_f8,&local_218,-1);
  if ((void *)CONCAT44(local_218.Data.AllocatorInstance.Data._4_4_,
                       local_218.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_218.Data.AllocatorInstance.Data._4_4_,
                                   local_218.Data.AllocatorInstance.Data._0_4_));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_e0.ReferenceController);
  pFVar37 = (this->Implementation).Ptr;
  local_f8._0_8_ = (pFVar37->SimulationSpaceTransform).Rotation.XY.m128d_f64[0];
  local_f8._8_8_ = (pFVar37->SimulationSpaceTransform).Rotation.XY.m128d_f64[1];
  local_e8 = (FChaosVDOptionalDataChannel *)
             (pFVar37->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
  FStack_e0.ReferenceController =
       (TReferenceControllerBase<1> *)(pFVar37->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
  local_d8 = (pFVar37->SimulationSpaceTransform).Translation.XY.m128d_f64[0];
  uStack_d0 = (pFVar37->SimulationSpaceTransform).Translation.XY.m128d_f64[1];
  local_c8 = (FString *)(pFVar37->SimulationSpaceTransform).Translation.ZW.m128d_f64[0];
  FStack_c0.ReferenceController =
       (TReferenceControllerBase<1> *)
       (pFVar37->SimulationSpaceTransform).Translation.ZW.m128d_f64[1];
  local_b8 = (pFVar37->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
  dStack_b0 = (pFVar37->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
  local_a8 = (pFVar37->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
  dStack_a0 = (pFVar37->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
  FChaosVisualDebuggerTrace::TraceSolverSimulationSpace((TRigidTransform<double,3> *)local_f8);
  pFVar37 = (this->Implementation).Ptr;
  dVar41 = (double)param_3 * param_2;
  if (param_1 <= (double)param_3 * param_2) {
    dVar41 = param_1;
  }
  if (pFVar37->NumRollingAverageStepTimes < 2) {
    pFVar37->NumRollingAverageStepTimes = pFVar37->MaxNumRollingAverageStepTimes;
    dVar4 = dVar41;
    if (param_2 <= dVar41) {
      dVar4 = param_2;
    }
    ((this->Implementation).Ptr)->RollingAverageStepTime = dVar4;
  }
  else {
    pFVar37->RollingAverageStepTime =
         (dVar41 - pFVar37->RollingAverageStepTime) / (double)pFVar37->NumRollingAverageStepTimes +
         pFVar37->RollingAverageStepTime;
    pFVar37 = (this->Implementation).Ptr;
    dVar4 = pFVar37->RollingAverageStepTime;
    if (param_2 <= dVar4) {
      dVar4 = param_2;
    }
    pFVar37->RollingAverageStepTime = dVar4;
    pFVar37 = (this->Implementation).Ptr;
    iVar23 = pFVar37->NumRollingAverageStepTimes + 1;
    iVar25 = pFVar37->MaxNumRollingAverageStepTimes;
    if (iVar23 < pFVar37->MaxNumRollingAverageStepTimes) {
      iVar25 = iVar23;
    }
    pFVar37->NumRollingAverageStepTimes = iVar25;
  }
  iVar18 = ChaosImmediate_Joint_UseLinearSolver;
  iVar17 = ChaosImmediate_Evolution_ProjectionIterations;
  iVar23 = ChaosImmediate_Evolution_VelocityIterations;
  iVar25 = ChaosImmediate_Evolution_PositionIterations;
  dVar16 = __real_3fe0000000000000;
  pFVar37 = (this->Implementation).Ptr;
  dVar9 = 0.0;
  dVar4 = pFVar37->RollingAverageStepTime;
  dVar39 = (double)ChaosImmediate_Collision_MaxDepenetrationVelocity;
  iVar24 = (int)ROUND((dVar41 + dVar41) / dVar4 + __real_3fe0000000000000) >> 1;
  dVar40 = (double)ChaosImmediate_Collision_CullDistance;
  if (iVar24 < param_3) {
    param_3 = iVar24;
  }
  local_218.Data.AllocatorInstance.Data._0_4_ = ChaosImmediate_Collision_UseManifolds;
  iVar24 = 1;
  if (1 < param_3) {
    iVar24 = param_3;
  }
  if (0.0 <= (double)ChaosImmediate_Evolution_FixedStepTime) {
    pFVar37->FixedStepTime = (double)ChaosImmediate_Evolution_FixedStepTime;
    pFVar37 = (this->Implementation).Ptr;
  }
  if (0.0 <= dVar40) {
    (pFVar37->Collisions).DetectorSettings.BoundsExpansion = dVar40;
    pFVar37 = (this->Implementation).Ptr;
  }
  if (0.0 <= dVar39) {
    if (dVar39 <= 0.0) {
      dVar39 = 0.0;
    }
    (pFVar37->Collisions).SolverSettings.MaxPushOutVelocity = dVar39;
    pFVar37 = (this->Implementation).Ptr;
  }
  if (-1 < iVar25) {
    iVar10 = 0x7f;
    if (iVar25 < 0x7f) {
      iVar10 = iVar25;
    }
    local_224.Bits._0_3_ = *(undefined3 *)&(pFVar37->Evolution).ConstraintSolver.field_0xb0;
    uVar30 = 0xff;
    if (-1 < iVar10) {
      uVar30 = (char)iVar10;
    }
    local_224._s_0.B = uVar30;
    pFVar2 = &(pFVar37->Evolution).ConstraintSolver;
    (**(code **)(*(longlong *)pFVar2 + 8))(pFVar2,&local_224);
    pFVar37 = (this->Implementation).Ptr;
  }
  if (-1 < iVar23) {
    uVar11 = *(undefined3 *)&(pFVar37->Evolution).ConstraintSolver.field_0xb0;
    iVar25 = 0x7f;
    if (iVar23 < 0x7f) {
      iVar25 = iVar23;
    }
    local_224.Bits._0_3_ = uVar11;
    uVar30 = 0xff;
    if (-1 < iVar25) {
      uVar30 = (char)iVar25;
    }
    local_224._s_0.B = (uchar)uVar11;
    local_224._s_0.G = uVar30;
    pFVar2 = &(pFVar37->Evolution).ConstraintSolver;
    (**(code **)(*(longlong *)pFVar2 + 8))(pFVar2,&local_224);
    pFVar37 = (this->Implementation).Ptr;
  }
  if (-1 < iVar17) {
    iVar25 = 0x7f;
    if (iVar17 < 0x7f) {
      iVar25 = iVar17;
    }
    uVar30 = 0xff;
    if (-1 < iVar25) {
      uVar30 = (char)iVar25;
    }
    local_224._s_0.R = uVar30;
    local_224.Bits._0_2_ = *(undefined2 *)&(pFVar37->Evolution).ConstraintSolver.field_0xb0;
    pFVar2 = &(pFVar37->Evolution).ConstraintSolver;
    (**(code **)(*(longlong *)pFVar2 + 8))(pFVar2,&local_224);
    pFVar37 = (this->Implementation).Ptr;
  }
  if (-1 < iVar18) {
    if (iVar18 == 0) {
      iVar25 = Chaos::FPBDJointConstraints::NumConstraints(&(pFVar37->Joints).LinearConstraints);
      if (0 < iVar25) {
        Chaos::FPBDJointCombinedConstraints::MergeLinearConstraintsIntoNonLinearConstraints
                  (&((this->Implementation).Ptr)->Joints);
      }
    }
    else {
      iVar25 = Chaos::FPBDJointConstraints::NumConstraints(&(pFVar37->Joints).NonLinearConstraints);
      if (0 < iVar25) {
        Chaos::FPBDJointCombinedConstraints::MergeNonLinearConstraintsIntoLinearConstraints
                  (&((this->Implementation).Ptr)->Joints);
      }
    }
    (((this->Implementation).Ptr)->Joints).LinearConstraints.Settings.bUseSimd =
         bChaosImmediate_UseSimdForLinearSolver;
    pFVar37 = (this->Implementation).Ptr;
  }
  pFVar28 = local_1d8;
  if (-1 < (int)local_218.Data.AllocatorInstance.Data._0_4_) {
    (pFVar37->Collisions).DetectorSettings.bAllowManifolds =
         local_218.Data.AllocatorInstance.Data._0_4_ != 0;
    pFVar37 = (this->Implementation).Ptr;
  }
  if (-1 < ChaosImmediate_Evolution_DeltaTimeCount) {
    pFVar37->MaxNumRollingAverageStepTimes = ChaosImmediate_Evolution_DeltaTimeCount;
  }
  this_02 = &((this->Implementation).Ptr)->Joints;
  if (local_1d8 == (FPBDJointSolverSettings *)0x0) {
    pFVar28 = Chaos::FPBDJointConstraints::GetSettings(&this_02->LinearConstraints);
    Chaos::FPBDJointSolverSettings::FPBDJointSolverSettings(&local_1c8,pFVar28);
    local_1c8.bSolvePositionLast = ChaosImmediate_Joint_SolvePositionLast != 0;
    local_1c8.bUsePositionBasedDrives = ChaosImmediate_Joint_UsePositionBasedDrives != 0;
    local_1c8.bEnableTwistLimits = ChaosImmediate_Joint_EnableTwistLimits != 0;
    local_1c8.SwingTwistAngleTolerance = (double)ChaosImmediate_Joint_SwingTwistAngleTolerance;
    local_1c8.NumShockPropagationIterations = ChaosImmediate_Joint_NumShockPropagationIterations;
    local_1c8.bSortEnabled = true;
    local_1c8.PositionTolerance = (double)ChaosImmediate_Joint_PositionTolerance;
    local_1c8.bEnableSwingLimits = ChaosImmediate_Joint_EnableSwingLimits != 0;
    local_1c8.AngleTolerance = (double)ChaosImmediate_Joint_AngleTolerance;
    local_1c8.bEnableDrives = ChaosImmediate_Joint_EnableDrives != 0;
    local_1c8.MaxInertiaRatio = (double)ChaosImmediate_Joint_MaxInertiaRatio;
    local_1c8.MinParentMassRatio = (double)ChaosImmediate_Joint_MinParentMassRatio;
    local_1c8.LinearStiffnessOverride = (double)ChaosImmediate_Joint_Stiffness;
    local_1c8.LinearProjectionOverride = (double)ChaosImmediate_Joint_LinearProjection;
    local_1c8.AngularProjectionOverride = (double)ChaosImmediate_Joint_AngularProjection;
    local_1c8.ShockPropagationOverride = (double)ChaosImmediate_Joint_ShockPropagation;
    local_1c8.SoftLinearStiffnessOverride = (double)ChaosImmediate_Joint_SoftLinearStiffness;
    local_1c8.SoftTwistStiffnessOverride = (double)ChaosImmediate_Joint_SoftTwistStiffness;
    local_1c8.SoftTwistDampingOverride = (double)ChaosImmediate_Joint_SoftTwistDamping;
    local_1c8.SoftSwingStiffnessOverride = (double)ChaosImmediate_Joint_SoftSwingStiffness;
    local_1c8.SoftSwingDampingOverride = (double)ChaosImmediate_Joint_SoftSwingDamping;
    local_1c8.LinearDriveStiffnessOverride = (double)ChaosImmediate_Joint_LinearDriveStiffness;
    local_1c8.LinearDriveDampingOverride = (double)ChaosImmediate_Joint_LinearDriveDamping;
    local_1c8.AngularDriveStiffnessOverride = (double)ChaosImmediate_Joint_AngularDriveStiffness;
    local_1c8.AngularDriveDampingOverride = (double)ChaosImmediate_Joint_AngularDriveDamping;
    local_1c8.TwistStiffnessOverride = local_1c8.LinearStiffnessOverride;
    local_1c8.SwingStiffnessOverride = local_1c8.LinearStiffnessOverride;
    Chaos::FPBDJointConstraints::SetSettings
              (&(((this->Implementation).Ptr)->Joints).LinearConstraints,&local_1c8);
    pFVar28 = &local_1c8;
  }
  else {
    Chaos::FPBDJointConstraints::SetSettings(&this_02->LinearConstraints,local_1d8);
  }
  Chaos::FPBDJointConstraints::SetSettings
            (&(((this->Implementation).Ptr)->Joints).NonLinearConstraints,pFVar28);
  pFVar37 = (this->Implementation).Ptr;
  if (param_6 == (FPBDCollisionSolverSettings *)0x0) {
    (pFVar37->Collisions).SolverSettings.NumPositionFrictionIterations =
         ChaosImmediate_Collision_NumPositionFrictionIterations;
    (((this->Implementation).Ptr)->Collisions).SolverSettings.NumVelocityFrictionIterations =
         ChaosImmediate_Collision_NumVelocityFrictionIterations;
    (((this->Implementation).Ptr)->Collisions).SolverSettings.NumPositionShockPropagationIterations
         = ChaosImmediate_Collision_NumPositionShockPropagationIterations;
    (((this->Implementation).Ptr)->Collisions).SolverSettings.NumVelocityShockPropagationIterations
         = ChaosImmediate_Collision_NumVelocityShockPropagationIterations;
    (((this->Implementation).Ptr)->Collisions).bEnableRestitution =
         ChaosImmediate_Collision_RestitutionEnabled != 0;
    dVar39 = (param_4->field0_0x0)._s_0.X;
    dVar40 = (param_4->field0_0x0)._s_0.Y;
    dVar5 = (param_4->field0_0x0)._s_0.Z;
    auVar42._0_8_ = dVar40 * dVar40 + dVar39 * dVar39 + dVar5 * dVar5;
    auVar42._8_8_ = 0;
    auVar42 = sqrtpd(auVar42,auVar42);
    (((this->Implementation).Ptr)->Collisions).RestitutionThreshold =
         auVar42._0_8_ * (double)ChaosImmediate_Collision_RestitutionThresholdMultiplier;
    (((this->Implementation).Ptr)->Collisions).bEnableCollisions =
         ChaosImmediate_Collision_Enabled != 0;
    pFVar37 = (this->Implementation).Ptr;
    Chaos::FPBDMinEvolution::SetConstraintContainerPriority
              (&pFVar37->Evolution,(int)(pFVar37->Collisions)._padding_,
               ChaosImmediate_Collision_Priority);
  }
  else {
    fVar14 = param_6->DepenetrationVelocity;
    iVar25 = param_6->NumPositionFrictionIterations;
    (pFVar37->Collisions).SolverSettings.MaxPushOutVelocity = param_6->MaxPushOutVelocity;
    (pFVar37->Collisions).SolverSettings.DepenetrationVelocity = fVar14;
    (pFVar37->Collisions).SolverSettings.NumPositionFrictionIterations = iVar25;
    iVar25 = param_6->NumPositionShockPropagationIterations;
    iVar23 = param_6->NumVelocityShockPropagationIterations;
    uVar15 = *(undefined4 *)&param_6->field_0x1c;
    (pFVar37->Collisions).SolverSettings.NumVelocityFrictionIterations =
         param_6->NumVelocityFrictionIterations;
    (pFVar37->Collisions).SolverSettings.NumPositionShockPropagationIterations = iVar25;
    (pFVar37->Collisions).SolverSettings.NumVelocityShockPropagationIterations = iVar23;
    *(undefined4 *)&(pFVar37->Collisions).SolverSettings.field_0x1c = uVar15;
  }
  dVar39 = uStack_d0;
  pFVar37 = (this->Implementation).Ptr;
  if (local_1e8.StatData.Pad == (uchar  [8])0x0) {
    bVar6 = (pFVar37->Collisions).DetectorSettings.bFilteringEnabled;
    local_f8._0_8_ = (pFVar37->Collisions).DetectorSettings.BoundsExpansion;
    local_f8._8_8_ = (pFVar37->Collisions).DetectorSettings.BoundsVelocityInflation;
    uStack_d0._0_4_ = (uint)(pFVar37->Collisions).DetectorSettings.bAllowManifolds << 0x10;
    uStack_d0._4_1_ = (pFVar37->Collisions).DetectorSettings.bAllowCCD;
    local_e8 = (FChaosVDOptionalDataChannel *)
               (pFVar37->Collisions).DetectorSettings.MaxVelocityBoundsExpansion;
    FStack_e0.ReferenceController =
         (TReferenceControllerBase<1> *)
         (pFVar37->Collisions).DetectorSettings.BoundsVelocityInflationMACD;
    uStack_d0._6_2_ = SUB82(dVar39,6);
    uStack_d0._5_1_ = (pFVar37->Collisions).DetectorSettings.bAllowMACD;
    uVar20 = uStack_d0;
    local_c8 = (pFVar37->Collisions).DetectorSettings.EvolutionName.Name.Object;
    FStack_c0.ReferenceController =
         (pFVar37->Collisions).DetectorSettings.EvolutionName.Name.SharedReferenceCount.
         ReferenceController;
    local_d8 = (pFVar37->Collisions).DetectorSettings.MaxVelocityBoundsExpansionMACD;
    if (FStack_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_c0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_c0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uStack_d0._1_1_ = ChaosImmediate_Collision_DeferNarrowPhase != 0;
    uStack_d0._0_1_ = bVar6;
    uVar21 = uStack_d0;
    uStack_d0._4_4_ = SUB84(uVar20,4);
    uStack_d0._0_4_ = (uint)(uint3)uVar21;
    Chaos::FPBDCollisionConstraints::SetDetectorSettings
              (&((this->Implementation).Ptr)->Collisions,(FCollisionDetectorSettings *)local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_c0.ReferenceController);
  }
  else {
    Chaos::FPBDCollisionConstraints::SetDetectorSettings
              (&pFVar37->Collisions,(FCollisionDetectorSettings *)local_1e8.StatData.Pad);
  }
  if (0.0 < ChaosImmediate_Evolution_StepTime) {
    dVar4 = (double)ChaosImmediate_Evolution_StepTime;
  }
  if (0 < ChaosImmediate_Evolution_NumSteps) {
    iVar24 = ChaosImmediate_Evolution_NumSteps;
  }
  pFVar37 = (this->Implementation).Ptr;
  dVar39 = pFVar37->FixedStepTime;
  if (pFVar37->bUseMinStepTime == false) {
LAB_1482afd88:
    if (dVar39 <= 0.0) goto LAB_1482afdf5;
  }
  else if (dVar39 <= 0.0) {
    if (dVar4 < (double)ChaosImmediate_Evolution_MinStepTime) {
      dVar39 = (double)ChaosImmediate_Evolution_MinStepTime;
    }
    goto LAB_1482afd88;
  }
  dVar4 = dVar39;
  iVar24 = (int)((longlong)ROUND((dVar41 + dVar41) / dVar4 - dVar16) >> 1);
  dVar41 = dVar41 - (double)iVar24 * dVar4;
  if ((pFVar37->bUseFixedStepTolerance == false) ||
     ((double)ChaosImmediate_Evolution_FixedStepTolerance * dVar4 < dVar41)) {
    iVar24 = iVar24 + 1;
    dVar9 = dVar4 - dVar41;
  }
  if (iVar24 < 1) {
    iVar24 = 1;
  }
LAB_1482afdf5:
  if (pFVar37->bActorsDirty != false) {
    PackCollidingPairs(this);
    UpdateActivePotentiallyCollidingPairs(this);
    pFVar37 = (this->Implementation).Ptr;
    pFVar36 = (pFVar37->JointHandles).AllocatorInstance.Data;
    iVar25 = (pFVar37->JointHandles).ArrayNum;
    pFVar3 = pFVar36 + (longlong)iVar25 * 8;
    while( true ) {
      if ((pFVar37->JointHandles).ArrayNum != iVar25) {
        `TCheckedPointerIterator<ImmediatePhysics_Chaos::FJointHandle_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_220);
      }
      if (pFVar36 == pFVar3) break;
      plVar7 = *(longlong **)pFVar36;
      pTVar33 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)(*plVar7 + 0x10))->field_0xc) {
        pTVar33 = *(TPBDRigidParticleHandleImp<double,3,1> **)(*plVar7 + 0x10);
      }
      if (pTVar33 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        cVar38 = '\0';
      }
      else {
        pbVar29 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled(pTVar33);
        cVar38 = *pbVar29;
      }
      pTVar33 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)(plVar7[1] + 0x10))->field_0xc) {
        pTVar33 = *(TPBDRigidParticleHandleImp<double,3,1> **)(plVar7[1] + 0x10);
      }
      cVar31 = '\0';
      if (pTVar33 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pbVar29 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled(pTVar33);
        cVar31 = *pbVar29;
      }
      if ((cVar38 == '\0') && (cVar31 == '\0')) {
        Chaos::FPBDJointConstraintHandle::SetConstraintEnabled
                  ((FPBDJointConstraintHandle *)plVar7[3],true);
        pFVar36 = pFVar36 + 8;
      }
      else {
        Chaos::FPBDJointConstraintHandle::SetConstraintEnabled
                  ((FPBDJointConstraintHandle *)plVar7[3],false);
        pFVar36 = pFVar36 + 8;
      }
    }
    *(undefined1 *)(*(longlong *)local_200 + 0xf6a) = 0;
    FVar35 = local_208;
    this = (FSimulation *)local_200;
  }
  UpdateInertiaConditioning(this,param_4);
  if (5 < (byte)LogChaosJoint._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosJoint);
  }
  lVar8 = *(longlong *)this;
  dVar41 = (param_4->field0_0x0)._s_0.Y;
  *(double *)(lVar8 + 0xd18) = (param_4->field0_0x0)._s_0.X;
  *(double *)(lVar8 + 0xd20) = dVar41;
  *(double *)(lVar8 + 0xd28) = (param_4->field0_0x0)._s_0.Z;
  lVar8 = *(longlong *)this;
  *(undefined8 *)(lVar8 + 0xd98) = *(undefined8 *)(lVar8 + 0xe88);
  *(undefined8 *)(lVar8 + 0xda0) = *(undefined8 *)(lVar8 + 0xe90);
  *(undefined8 *)(lVar8 + 0xda8) = *(undefined8 *)(lVar8 + 0xe98);
  *(undefined8 *)(lVar8 + 0xdb0) = *(undefined8 *)(lVar8 + 0xea0);
  *(undefined8 *)(lVar8 + 0xdb8) = *(undefined8 *)(lVar8 + 0xea8);
  *(undefined8 *)(lVar8 + 0xdc0) = *(undefined8 *)(lVar8 + 0xeb0);
  *(undefined8 *)(lVar8 + 0xdc8) = *(undefined8 *)(lVar8 + 0xeb8);
  *(undefined8 *)(lVar8 + 0xdd0) = *(undefined8 *)(lVar8 + 0xec0);
  *(undefined8 *)(lVar8 + 0xdd8) = *(undefined8 *)(lVar8 + 0xec8);
  *(undefined8 *)(lVar8 + 0xde0) = *(undefined8 *)(lVar8 + 0xed0);
  *(undefined8 *)(lVar8 + 0xde8) = *(undefined8 *)(lVar8 + 0xed8);
  *(undefined8 *)(lVar8 + 0xdf0) = *(undefined8 *)(lVar8 + 0xee0);
  Chaos::FPBDMinEvolution::Advance
            ((FPBDMinEvolution *)(*(longlong *)this + 0xc30),dVar4,iVar24,dVar9);
  UpdateStatCounters(this);
  if (bChaosImmediate_DebugDrawOnSimulate != false) {
    DebugDraw(this);
  }
  FVar19.ReferenceController = CVDDC_Default.SharedReferenceCount.ReferenceController;
  if (CVDDC_Default.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (CVDDC_Default.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(CVDDC_Default.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e8 = ((TSharedRef<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1> *)
             ((longlong)this + 0x20))->Object;
  local_f8._0_8_ = *(undefined8 *)((longlong)this + 0x10);
  local_f8._8_8_ = *(undefined8 *)((longlong)this + 0x18);
  FStack_e0.ReferenceController =
       ((FSharedReferencer<1> *)((longlong)this + 0x28))->ReferenceController;
  if (FStack_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  FChaosVisualDebuggerTrace::TraceSolverFrameEnd((FChaosVDContext *)local_f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_e0.ReferenceController);
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar22) && (FVar35 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1e8.NameAndInfo.Index.Value = local_1f8.ComparisonIndex.Value;
      local_1e8.NameAndInfo.Number = FVar35.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_200);
      local_1e8.StatData.Pad = (uchar  [8])(local_200.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_1e8);
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

// UpdateActivePotentiallyCollidingPairs @ 1482b63e0

void __thiscall
ImmediatePhysics_Chaos::FSimulation::UpdateActivePotentiallyCollidingPairs(FSimulation *this)

{
  int iVar1;
  FImplementation *pFVar2;
  FImplementation *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  int *piVar7;
  EObjectStateType EVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  bool *pbVar12;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar13;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  FGenericParticleHandleImp local_res10;
  
  pFVar2 = (this->Implementation).Ptr;
  (pFVar2->ActivePotentiallyCollidingPairs).ArrayNum = 0;
  if ((pFVar2->ActivePotentiallyCollidingPairs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)pFVar2,0,
               &(pFVar2->ActivePotentiallyCollidingPairs).ArrayMax);
  }
  pFVar2 = (this->Implementation).Ptr;
  iVar1 = (pFVar2->PotentiallyCollidingPairs).ArrayNum;
  pFVar15 = (pFVar2->PotentiallyCollidingPairs).AllocatorInstance.Data;
  pFVar16 = pFVar15 + (longlong)iVar1 * 0x10;
  do {
    if ((pFVar2->PotentiallyCollidingPairs).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar16) {
      return;
    }
    pTVar14 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar15;
    if ((pTVar14 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
       (*(longlong *)(pFVar15 + 8) != 0)) {
      pTVar13 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar14->field_0xc) {
        pTVar13 = pTVar14;
      }
      if (pTVar13 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_1482b64a8:
        pTVar14 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)(pFVar15 + 8))->field_0xc) {
          pTVar14 = *(TPBDRigidParticleHandleImp<double,3,1> **)(pFVar15 + 8);
        }
        if (pTVar14 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          pbVar12 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled(pTVar14);
          if (*pbVar12 != false) goto LAB_1482b64c5;
        }
        bVar10 = false;
      }
      else {
        pbVar12 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled(pTVar13);
        if (*pbVar12 == false) goto LAB_1482b64a8;
LAB_1482b64c5:
        bVar10 = true;
      }
      pTVar14 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar15;
      pTVar13 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (pTVar14->field_0xc != '\0') {
        pTVar13 = pTVar14;
      }
      if (pTVar13 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_1482b64fb:
        pTVar13 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (pTVar14->field_0xc != '\0') {
          pTVar13 = pTVar14;
        }
        if (pTVar13 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          pTVar14 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar13->field_0xc) {
            pTVar14 = pTVar13;
          }
          if (pTVar14 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            EVar8 = Kinematic;
          }
          else {
            EVar8 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar14);
          }
          if (EVar8 == Sleeping) goto LAB_1482b6548;
        }
        local_res10.MHandle = *(TGeometryParticleHandleImp<double,3,1> **)(pFVar15 + 8);
        bVar9 = Chaos::FGenericParticleHandleImp::IsDynamic(&local_res10);
        if (bVar9) goto LAB_1482b6548;
        bVar9 = false;
      }
      else {
        this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar13->field_0xc) {
          this_00 = pTVar13;
        }
        if (this_00 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          EVar8 = Kinematic;
        }
        else {
          EVar8 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_00);
        }
        if (EVar8 != Dynamic) goto LAB_1482b64fb;
LAB_1482b6548:
        bVar9 = true;
      }
      pbVar12 = Chaos::TGeometryParticlesImp<double,3,0>::HasCollision
                          ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)pFVar15,
                           *(int *)(*(undefined8 **)pFVar15 + 1));
      if (*pbVar12 != false) {
        pbVar12 = Chaos::TGeometryParticlesImp<double,3,0>::HasCollision
                            ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)(pFVar15 + 8),
                             *(int *)(*(undefined8 **)(pFVar15 + 8) + 1));
        if (((*pbVar12 != false) && (bVar9)) && (!bVar10)) {
          pFVar3 = (this->Implementation).Ptr;
          pFVar4 = (pFVar3->ActivePotentiallyCollidingPairs).AllocatorInstance.Data;
          if ((pFVar4 <= pFVar15) &&
             (pFVar15 < pFVar4 + (longlong)(pFVar3->ActivePotentiallyCollidingPairs).ArrayMax * 0x10
             )) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar11 = (pFVar3->ActivePotentiallyCollidingPairs).ArrayNum;
          piVar7 = &(pFVar3->ActivePotentiallyCollidingPairs).ArrayMax;
          if (iVar11 == *piVar7) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)pFVar3,piVar7);
          }
          (pFVar3->ActivePotentiallyCollidingPairs).ArrayNum = iVar11 + 1;
          lVar6 = *(longlong *)(pFVar15 + 8);
          pFVar4 = (pFVar3->ActivePotentiallyCollidingPairs).AllocatorInstance.Data +
                   (longlong)iVar11 * 0x10;
          *(longlong *)pFVar4 = *(longlong *)pFVar15;
          *(longlong *)(pFVar4 + 8) = lVar6;
        }
      }
    }
    pFVar15 = pFVar15 + 0x10;
  } while( true );
}

// UpdateInertiaConditioning @ 1482ba2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ImmediatePhysics_Chaos::FSimulation::UpdateInertiaConditioning
          (FSimulation *this,TVector<double> *param_1)

{
  byte *pbVar1;
  FActorHandle *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  longlong lVar3;
  FImplementation *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  FName FVar22;
  undefined8 uVar23;
  bool bVar24;
  bool bVar25;
  EObjectStateType EVar26;
  int iVar27;
  FName *pFVar28;
  FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_Chaos_InertiaConditioning> FVar29;
  TAABB<double,3> *pTVar30;
  TTransform<double> *pTVar31;
  FPBDJointSettings *pFVar32;
  TVector<float,3> *pTVar33;
  TGeometryParticleHandleImp<double,3,1> *pTVar34;
  double *pdVar35;
  TGeometryParticleHandleImp<double,3,1> *pTVar36;
  TGeometryParticleHandleImp<double,3,1> *pTVar37;
  char cVar38;
  byte bVar39;
  ulonglong uVar40;
  FScriptContainerElement *pFVar41;
  FName FVar42;
  FName FVar43;
  FScriptContainerElement *pFVar44;
  uint uVar45;
  undefined4 uVar46;
  uint uVar47;
  undefined4 uVar48;
  uint uVar49;
  double dVar50;
  double dVar51;
  uint uVar61;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  undefined1 auStackY_448 [32];
  undefined1 local_3e7;
  undefined1 local_3e6 [6];
  FName local_3e0;
  FColor_u_0 local_3d8;
  float local_3d4;
  float local_3d0;
  float local_3cc;
  uint local_3c8;
  FGenericParticleHandleImp local_3c0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  FName local_3a8;
  FScriptContainerElement *local_3a0;
  FSimulation *local_398;
  FName local_390;
  FName local_388;
  FInertiaConditioningTolerances local_378;
  float local_368;
  float local_364;
  float local_360;
  TVector<float,3> local_358;
  TVector<float,3> local_34c;
  FImplementation *local_340;
  FName local_338;
  double local_330;
  double local_328;
  TVector<float,3> local_320;
  FName local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  undefined1 local_2f0 [16];
  double local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined1 local_2c0 [16];
  double local_2b0;
  double local_298;
  TAABB<double,3> local_290;
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_448;
  FVar29 = StatPtr_STAT_ImmediateSimulate_Chaos_InertiaConditioning;
  local_398 = this;
  if (StatPtr_STAT_ImmediateSimulate_Chaos_InertiaConditioning ==
      (FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_Chaos_InertiaConditioning>)0x0) {
    pFVar28 = ::FName::FName(&local_310,"STAT_ImmediateSimulate_Chaos_InertiaConditioning");
    FVar29 = (FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_Chaos_InertiaConditioning>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ImmediateSimulate_Chaos_InertiaConditioning,*pFVar28,
                        L"FSimulation::Simulate_Chaos::InertiaConditioning",
                        "STATGROUP_ImmediatePhysics","STATCAT_Advanced",L"Immediate Physics",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar42 = *(FName *)FVar29;
  bVar17 = false;
  bVar19 = false;
  local_388.ComparisonIndex.Value = 0;
  local_388.Number = 0;
  bVar24 = false;
  bVar25 = false;
  if ((FVar42.ComparisonIndex.Value.Value != 0) ||
     (bVar16 = bVar17, bVar18 = bVar19, FVar42.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3d8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3d8._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
      bVar17 = false;
      bVar19 = true;
      bVar24 = false;
      bVar25 = true;
      if (-1 < CpuChannel->Enabled) {
        local_3a8.ComparisonIndex.Value = FVar42.ComparisonIndex.Value.Value;
        local_3a8.Number = FVar42.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_3a8,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ImmediatePhysics\\ImmediatePhysicsChaos\\ImmediatePhysicsSimulation_Chaos.cpp"
                   ,0x43f);
        bVar17 = true;
        bVar19 = true;
        bVar24 = true;
        bVar25 = true;
      }
    }
    bVar16 = bVar17;
    bVar18 = bVar19;
    if (FThreadStats::bPrimaryEnable != false) {
      local_3e0 = FVar42;
      local_390 = FVar42;
      FThreadStats::AddMessage(FVar42,CycleScopeStart);
      bVar24 = true;
      goto LAB_1482ba466;
    }
  }
  bVar19 = bVar25;
  bVar17 = bVar24;
  bVar24 = false;
  local_390 = local_388;
  FVar42 = local_388;
LAB_1482ba466:
  iVar27 = Chaos::FPBDJointConstraints::NumConstraints
                     (&(((this->Implementation).Ptr)->Joints).LinearConstraints);
  uVar21 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar20 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  cVar38 = bChaosImmediate_NonLinearInertiaConditioningEnabled;
  if (0 < iVar27) {
    cVar38 = bChaosImmediate_LinearInertiaConditioningEnabled;
  }
  if (cVar38 != '\0') {
    local_340 = (this->Implementation).Ptr;
    local_3c8 = (local_340->ActorHandles).ArrayNum;
    uVar40 = (ulonglong)(int)local_3c8;
    FVar43 = (FName)(local_340->ActorHandles).AllocatorInstance.Data;
    uVar46 = (undefined4)__real_3fe0000000000000;
    uVar48 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
    local_338 = (FName)((longlong)FVar43 + uVar40 * 8);
    local_3d0 = ChaosImmediate_InertiaConditioningRotationRatio;
    local_3cc = ChaosImmediate_InertiaConditioningDistance;
    local_3d4 = ChaosImmediate_MaxInvInertiaComponentRatio;
    while( true ) {
      FVar22 = local_338;
      uVar61 = 0;
      uVar49 = 0;
      local_3e0 = FVar43;
      if ((local_340->ActorHandles).ArrayNum != (int)uVar40) {
        local_3e7 = 0;
        `TCheckedPointerIterator<ImmediatePhysics_Chaos::FActorHandle_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_3e7);
      }
      FVar42 = local_390;
      bVar16 = bVar17;
      bVar18 = bVar19;
      if (FVar43 == FVar22) break;
      this_00 = *(FActorHandle **)FVar43;
      pTVar2 = this_00->ParticleHandle;
      pTVar36 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar2->_padding_ + 4)) {
        pTVar36 = pTVar2;
      }
      if (pTVar36 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        uVar77 = (uint)pTVar36->_padding_;
        lVar3 = pTVar36->_padding_;
        uVar78 = 0;
        if ((int)uVar77 < *(int *)(lVar3 + 0x2e0)) {
          uVar78 = ~uVar77 >> 0x1f;
        }
        if ((uVar78 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((*(byte *)(*(longlong *)(lVar3 + 0x2d8) + 10 + (longlong)(int)uVar77 * 0x10) & 1) != 0)
        {
          bVar39 = *(byte *)((longlong)&pTVar2->_padding_ + 4);
          pTVar36 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (bVar39 != 0) {
            pTVar36 = pTVar2;
          }
          if (pTVar36 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_1482ba638:
            pTVar36 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (bVar39 != 0) {
              pTVar36 = pTVar2;
            }
            if (pTVar36 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              pTVar34 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (1 < *(byte *)((longlong)&pTVar36->_padding_ + 4)) {
                pTVar34 = pTVar36;
              }
              if (pTVar34 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                EVar26 = Kinematic;
              }
              else {
                EVar26 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                   ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar34);
                bVar39 = *(byte *)((longlong)&pTVar2->_padding_ + 4);
              }
              if (EVar26 == Sleeping) goto LAB_1482ba666;
            }
LAB_1482ba685:
            bVar25 = false;
          }
          else {
            pTVar34 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar36->_padding_ + 4)) {
              pTVar34 = pTVar36;
            }
            if (pTVar34 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              EVar26 = Kinematic;
            }
            else {
              EVar26 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                 ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar34);
              bVar39 = *(byte *)((longlong)&pTVar2->_padding_ + 4);
            }
            if (EVar26 != Dynamic) goto LAB_1482ba638;
LAB_1482ba666:
            pTVar36 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < bVar39) {
              pTVar36 = pTVar2;
            }
            if (pTVar36 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_1482ba685;
            bVar25 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InertiaConditioningEnabled
                               ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar36);
            bVar39 = *(byte *)((longlong)&pTVar2->_padding_ + 4);
            if (!bVar25) goto LAB_1482ba685;
            bVar25 = true;
          }
          if (bVar25) {
            pTVar30 = Chaos::TGeometryParticlesImp<double,3,0>::LocalBounds
                                ((TGeometryParticlesImp<double,3,0> *)pTVar2->_padding_,
                                 (int)pTVar2->_padding_);
            pTVar31 = FActorHandle::GetLocalCoMTransform(this_00,&local_258);
            local_138 = (pTVar31->Rotation).XY.m128d_f64[0];
            dStack_130 = (pTVar31->Rotation).XY.m128d_f64[1];
            local_128 = (pTVar31->Rotation).ZW.m128d_f64[0];
            dStack_120 = (pTVar31->Rotation).ZW.m128d_f64[1];
            local_118 = (pTVar31->Translation).XY.m128d_f64[0];
            dStack_110 = (pTVar31->Translation).XY.m128d_f64[1];
            local_108 = (pTVar31->Translation).ZW.m128d_f64[0];
            dStack_100 = (pTVar31->Translation).ZW.m128d_f64[1];
            local_f8 = (pTVar31->Scale3D).XY.m128d_f64[0];
            dStack_f0 = (pTVar31->Scale3D).XY.m128d_f64[1];
            local_e8 = *(undefined1 (*) [16])(pTVar31->Scale3D).ZW.m128d_f64;
            pTVar30 = Chaos::TAABB<double,3>::InverseTransformedAABB
                                (pTVar30,&local_290,(TRigidTransform<double,3> *)&local_138);
            pFVar4 = (this->Implementation).Ptr;
            pFVar44 = (pFVar4->JointHandles).AllocatorInstance.Data;
            iVar27 = (pFVar4->JointHandles).ArrayNum;
            local_330 = (*(double *)&pTVar30->MMax - *(double *)&pTVar30->MMin) *
                        (double)CONCAT44(uVar48,uVar46);
            pFVar41 = pFVar44 + (longlong)iVar27 * 8;
            local_328 = (*(double *)&(pTVar30->MMax).field_0x8 -
                        *(double *)&(pTVar30->MMin).field_0x8) * (double)CONCAT44(uVar48,uVar46);
            local_3c0.MHandle =
                 (TGeometryParticleHandleImp<double,3,1> *)
                 ((*(double *)&(pTVar30->MMax).field_0x10 - *(double *)&(pTVar30->MMin).field_0x10)
                 * (double)CONCAT44(uVar48,uVar46));
            uVar77 = uVar49;
            uVar78 = uVar61;
            uVar79 = uVar49;
            uVar80 = uVar61;
            local_3a0 = pFVar41;
            while( true ) {
              if ((pFVar4->JointHandles).ArrayNum != iVar27) {
                local_3e6[0] = 0;
                `TCheckedPointerIterator<ImmediatePhysics_Chaos::FJointHandle_*,int,0>::operator!='
                ::__l2::<lambda_1>::operator()(local_3e6);
              }
              if (pFVar44 == pFVar41) break;
              puVar5 = *(undefined8 **)pFVar44;
              pFVar32 = Chaos::FPBDJointConstraintHandle::GetSettings
                                  ((FPBDJointConstraintHandle *)puVar5[3]);
              bVar25 = Chaos::FPBDJointUtilities::GetLinearIsFree(pFVar32);
              uVar45 = uVar77;
              uVar47 = uVar78;
              uVar75 = uVar79;
              uVar76 = uVar80;
              if (!bVar25) {
                dVar7 = 0.0;
                dVar8 = 0.0;
                if ((FActorHandle *)*puVar5 == this_00) {
                  pTVar31 = FActorHandle::GetLocalCoMTransform(this_00,&local_1f8);
                  pFVar32 = Chaos::FPBDJointConstraintHandle::GetSettings
                                      ((FPBDJointConstraintHandle *)puVar5[3]);
                  dVar7 = (pTVar31->Rotation).XY.m128d_f64[0] *
                          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                  dVar8 = (pTVar31->Rotation).XY.m128d_f64[1] *
                          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                  local_2f8 = *(double *)&(pFVar32->ConnectorTransforms).V[0].field_0x30;
                  local_308 = *(double *)&(pFVar32->ConnectorTransforms).V[0].field_0x20;
                  dStack_300 = *(double *)&(pFVar32->ConnectorTransforms).V[0].field_0x28;
                  dVar50 = local_2f8 - (pTVar31->Translation).ZW.m128d_f64[0];
                  dVar51 = (pTVar31->Rotation).ZW.m128d_f64[0] *
                           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                  dVar10 = (pTVar31->Rotation).ZW.m128d_f64[1] *
                           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                  auVar66._8_4_ = SUB84(dVar8,0);
                  auVar66._0_8_ = dVar7;
                  auVar66._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
                  auVar9._8_4_ = SUB84(dVar10,0);
                  auVar9._0_8_ = dVar51;
                  auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
                  auVar67 = blendpd(auVar66,auVar9,2);
                  dVar12 = local_308 - (pTVar31->Translation).XY.m128d_f64[0];
                  dVar13 = dStack_300 - (pTVar31->Translation).XY.m128d_f64[1];
                  uVar46 = (undefined4)((ulonglong)dVar13 >> 0x20);
                  auVar69._8_4_ = SUB84(dVar13,0);
                  auVar69._0_8_ = dVar12;
                  auVar69._12_4_ = uVar46;
                  auVar52._8_4_ = SUB84(dVar13,0);
                  auVar52._0_8_ = dVar12;
                  auVar52._12_4_ = uVar46;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = dVar50;
                  auVar53 = blendpd(auVar52,auVar11,2);
                  auVar70._0_8_ = auVar69._8_8_ * dVar7 - dVar8 * dVar12;
                  auVar70._8_8_ = dVar50 * dVar8 - dVar51 * dVar13;
                  auVar54._0_8_ = auVar53._0_8_ * dVar51 - dVar50 * auVar67._0_8_;
                  auVar54._8_8_ = auVar53._8_8_ * dVar10 - auVar67._8_8_ * 0.0;
                  auVar53 = blendpd(auVar70,auVar54,2);
                  dVar14 = auVar70._8_8_ + auVar70._8_8_;
                  dVar15 = auVar54._0_8_ + auVar54._0_8_;
                  uVar46 = (undefined4)((ulonglong)dVar15 >> 0x20);
                  auVar71._0_8_ = auVar53._0_8_ + auVar53._0_8_;
                  auVar71._8_8_ = auVar53._8_8_ + auVar53._8_8_;
                  auVar62._8_4_ = SUB84(dVar15,0);
                  auVar62._0_8_ = dVar14;
                  auVar62._12_4_ = uVar46;
                  auVar55._8_4_ = SUB84(dVar15,0);
                  auVar55._0_8_ = dVar14;
                  auVar55._12_4_ = uVar46;
                  auVar53 = blendpd(auVar55,auVar71,2);
                  auVar63._0_8_ = auVar62._8_8_ * dVar7 - dVar14 * dVar8;
                  auVar63._8_8_ = auVar71._0_8_ * dVar8 - dVar15 * dVar51;
                  auVar56._0_8_ = auVar53._0_8_ * dVar51 - auVar71._0_8_ * auVar67._0_8_;
                  auVar56._8_8_ = auVar53._8_8_ * dVar10 - auVar71._8_8_ * auVar67._8_8_;
                  auVar53 = blendpd(auVar63,auVar56,2);
                  dVar7 = dVar14 * dVar10 + dVar12 + auVar63._8_8_;
                  dVar8 = dVar15 * dVar10 + dVar13 + auVar56._0_8_;
                  local_2e0 = auVar71._0_8_ * dVar10 + dVar50 + auVar53._0_8_;
                  local_2f0._8_4_ = SUB84(dVar8,0);
                  local_2f0._0_8_ = dVar7;
                  local_2f0._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
                  pFVar41 = local_3a0;
                  local_298 = local_2e0;
                  dVar51 = local_2e0;
                }
                else {
                  dVar51 = 0.0;
                  if ((FActorHandle *)puVar5[1] == this_00) {
                    pTVar31 = FActorHandle::GetLocalCoMTransform(this_00,&local_198);
                    pFVar32 = Chaos::FPBDJointConstraintHandle::GetSettings
                                        ((FPBDJointConstraintHandle *)puVar5[3]);
                    dVar7 = (pTVar31->Rotation).XY.m128d_f64[0] *
                            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                    dVar8 = (pTVar31->Rotation).XY.m128d_f64[1] *
                            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                    local_2c8 = *(double *)&(pFVar32->ConnectorTransforms).V[1].field_0x30;
                    local_2d8 = *(double *)&(pFVar32->ConnectorTransforms).V[1].field_0x20;
                    dStack_2d0 = *(double *)&(pFVar32->ConnectorTransforms).V[1].field_0x28;
                    dVar50 = local_2c8 - (pTVar31->Translation).ZW.m128d_f64[0];
                    dVar51 = (pTVar31->Rotation).ZW.m128d_f64[0] *
                             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                    dVar10 = (pTVar31->Rotation).ZW.m128d_f64[1] *
                             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                    auVar68._8_4_ = SUB84(dVar8,0);
                    auVar68._0_8_ = dVar7;
                    auVar68._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
                    auVar53._8_4_ = SUB84(dVar10,0);
                    auVar53._0_8_ = dVar51;
                    auVar53._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
                    auVar68 = blendpd(auVar68,auVar53,2);
                    dVar12 = local_2d8 - (pTVar31->Translation).XY.m128d_f64[0];
                    dVar13 = dStack_2d0 - (pTVar31->Translation).XY.m128d_f64[1];
                    uVar46 = (undefined4)((ulonglong)dVar13 >> 0x20);
                    auVar72._8_4_ = SUB84(dVar13,0);
                    auVar72._0_8_ = dVar12;
                    auVar72._12_4_ = uVar46;
                    auVar57._8_4_ = SUB84(dVar13,0);
                    auVar57._0_8_ = dVar12;
                    auVar57._12_4_ = uVar46;
                    auVar67._8_8_ = 0;
                    auVar67._0_8_ = dVar50;
                    auVar53 = blendpd(auVar57,auVar67,2);
                    auVar73._0_8_ = auVar72._8_8_ * dVar7 - dVar8 * dVar12;
                    auVar73._8_8_ = dVar50 * dVar8 - dVar51 * dVar13;
                    auVar58._0_8_ = auVar53._0_8_ * dVar51 - dVar50 * auVar68._0_8_;
                    auVar58._8_8_ = auVar53._8_8_ * dVar10 - auVar68._8_8_ * 0.0;
                    auVar53 = blendpd(auVar73,auVar58,2);
                    dVar14 = auVar73._8_8_ + auVar73._8_8_;
                    dVar15 = auVar58._0_8_ + auVar58._0_8_;
                    uVar46 = (undefined4)((ulonglong)dVar15 >> 0x20);
                    auVar74._0_8_ = auVar53._0_8_ + auVar53._0_8_;
                    auVar74._8_8_ = auVar53._8_8_ + auVar53._8_8_;
                    auVar64._8_4_ = SUB84(dVar15,0);
                    auVar64._0_8_ = dVar14;
                    auVar64._12_4_ = uVar46;
                    auVar59._8_4_ = SUB84(dVar15,0);
                    auVar59._0_8_ = dVar14;
                    auVar59._12_4_ = uVar46;
                    auVar53 = blendpd(auVar59,auVar74,2);
                    auVar65._0_8_ = auVar64._8_8_ * dVar7 - dVar14 * dVar8;
                    auVar65._8_8_ = auVar74._0_8_ * dVar8 - dVar15 * dVar51;
                    auVar60._0_8_ = auVar53._0_8_ * dVar51 - auVar74._0_8_ * auVar68._0_8_;
                    auVar60._8_8_ = auVar53._8_8_ * dVar10 - auVar74._8_8_ * auVar68._8_8_;
                    auVar53 = blendpd(auVar65,auVar60,2);
                    dVar7 = dVar14 * dVar10 + dVar12 + auVar65._8_8_;
                    dVar8 = dVar15 * dVar10 + dVar13 + auVar60._0_8_;
                    local_2b0 = auVar74._0_8_ * dVar10 + dVar50 + auVar53._0_8_;
                    local_2c0._8_4_ = SUB84(dVar8,0);
                    local_2c0._0_8_ = dVar7;
                    local_2c0._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
                    pFVar41 = local_3a0;
                    local_298 = local_2b0;
                    dVar51 = local_2b0;
                  }
                }
                dVar51 = (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) & uVar21,
                                          SUB84(dVar51,0) & uVar20);
                if (dVar51 <= (double)CONCAT44(uVar61,uVar49)) {
                  dVar51 = (double)CONCAT44(uVar61,uVar49);
                }
                uVar75 = SUB84(dVar8,0) & uVar20;
                uVar76 = (uint)((ulonglong)dVar8 >> 0x20) & uVar21;
                uVar45 = SUB84(dVar7,0) & uVar20;
                uVar47 = (uint)((ulonglong)dVar7 >> 0x20) & uVar21;
                if ((double)CONCAT44(uVar76,uVar75) <= (double)CONCAT44(uVar80,uVar79)) {
                  uVar75 = uVar79;
                  uVar76 = uVar80;
                }
                if ((double)CONCAT44(uVar47,uVar45) <= (double)CONCAT44(uVar78,uVar77)) {
                  uVar45 = uVar77;
                  uVar47 = uVar78;
                }
                uVar49 = SUB84(dVar51,0);
                uVar61 = (uint)((ulonglong)dVar51 >> 0x20);
              }
              pFVar44 = pFVar44 + 8;
              uVar77 = uVar45;
              uVar78 = uVar47;
              uVar79 = uVar75;
              uVar80 = uVar76;
            }
            pTVar36 = this_00->ParticleHandle;
            local_378.InvMassTolerance = 1e-20;
            local_378.InvInertiaTolerance = 0.0001;
            local_378.ExtentTolerance = 1e-08;
            local_368 = (float)local_330;
            if ((float)local_330 <= (float)(double)CONCAT44(uVar78,uVar77)) {
              local_368 = (float)(double)CONCAT44(uVar78,uVar77);
            }
            local_364 = (float)local_328;
            if ((float)local_328 <= (float)(double)CONCAT44(uVar80,uVar79)) {
              local_364 = (float)(double)CONCAT44(uVar80,uVar79);
            }
            local_360 = (float)(double)local_3c0.MHandle;
            if ((float)(double)local_3c0.MHandle <= (float)(double)CONCAT44(uVar61,uVar49)) {
              local_360 = (float)(double)CONCAT44(uVar61,uVar49);
            }
            local_3c0.MHandle = pTVar36;
            bVar25 = Chaos::FGenericParticleHandleImp::IsDynamic(&local_3c0);
            if (bVar25) {
              pTVar34 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (1 < *(byte *)((longlong)&pTVar36->_padding_ + 4)) {
                pTVar34 = pTVar36;
              }
              pTVar33 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvI
                                  ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar34);
              local_3b0 = *(undefined4 *)&pTVar33->field_0x8;
              local_3b8 = *(undefined8 *)pTVar33;
              local_358._4_4_ = SUB84((ulonglong)local_3b8 >> 0x20,0);
            }
            else {
              local_358._4_4_ = 0;
              local_3b8 = 0;
              local_3b0 = 0;
            }
            pTVar36 = this_00->ParticleHandle;
            local_358._0_4_ = SUB84(local_3b8,0);
            pTVar34 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (*(char *)((longlong)&pTVar36->_padding_ + 4) != '\0') {
              pTVar34 = pTVar36;
            }
            local_358._8_4_ = local_3b0;
            if (pTVar34 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_1482bab71:
              pTVar34 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (*(char *)((longlong)&pTVar36->_padding_ + 4) != '\0') {
                pTVar34 = pTVar36;
              }
              if (pTVar34 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                pTVar37 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
                if (1 < *(byte *)((longlong)&pTVar34->_padding_ + 4)) {
                  pTVar37 = pTVar34;
                }
                if (pTVar37 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                  EVar26 = Kinematic;
                }
                else {
                  EVar26 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                     ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar37);
                }
                if (EVar26 == Sleeping) goto LAB_1482bab9c;
              }
              uVar46 = 0;
              uVar48 = 0;
            }
            else {
              pTVar37 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (1 < *(byte *)((longlong)&pTVar34->_padding_ + 4)) {
                pTVar37 = pTVar34;
              }
              if (pTVar37 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                EVar26 = Kinematic;
              }
              else {
                EVar26 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                   ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar37);
              }
              if (EVar26 != Dynamic) goto LAB_1482bab71;
LAB_1482bab9c:
              pTVar34 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (1 < *(byte *)((longlong)&pTVar36->_padding_ + 4)) {
                pTVar34 = pTVar36;
              }
              pdVar35 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvM
                                  ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar34);
              uVar46 = SUB84(*pdVar35,0);
              uVar48 = (undefined4)((ulonglong)*pdVar35 >> 0x20);
            }
            Chaos::CalculateInertiaConditioning
                      (&local_320,(float)(double)CONCAT44(uVar48,uVar46),&local_358,
                       (TVector<float,3> *)&local_368,local_3cc,local_3d0,local_3d4,&local_378);
            uVar46 = local_320._8_4_;
            uVar23 = local_320._0_8_;
            pTVar36 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar2->_padding_ + 4)) {
              pTVar36 = pTVar2;
            }
            if (pTVar36 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              uVar49 = (uint)pTVar36->_padding_;
              lVar3 = pTVar36->_padding_;
              uVar61 = 0;
              if ((int)uVar49 < *(int *)(lVar3 + 0x3b8)) {
                uVar61 = ~uVar49 >> 0x1f;
              }
              if ((uVar61 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar3 = *(longlong *)(lVar3 + 0x3b0);
              *(undefined8 *)(lVar3 + (longlong)(int)uVar49 * 0xc) = uVar23;
              *(undefined4 *)(lVar3 + 8 + (longlong)(int)uVar49 * 0xc) = uVar46;
            }
            uVar46 = (undefined4)__real_3fe0000000000000;
            uVar48 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
            FVar43 = local_3e0;
            this = local_398;
          }
          else {
            local_34c._0_4_ = 0x3f800000;
            local_34c._4_4_ = 0x3f800000;
            local_34c._8_4_ = 0x3f800000;
            pTVar36 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < bVar39) {
              pTVar36 = pTVar2;
            }
            if (pTVar36 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInvIConditioning
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar36,&local_34c);
            }
          }
          pTVar36 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&pTVar2->_padding_ + 4)) {
            pTVar36 = pTVar2;
          }
          if (pTVar36 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            uVar49 = (uint)pTVar36->_padding_;
            lVar3 = pTVar36->_padding_;
            uVar61 = 0;
            if ((int)uVar49 < *(int *)(lVar3 + 0x2e0)) {
              uVar61 = ~uVar49 >> 0x1f;
            }
            if ((uVar61 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pbVar1 = (byte *)((longlong)(int)uVar49 * 0x10 + 10 + *(longlong *)(lVar3 + 0x2d8));
            *pbVar1 = *pbVar1 & 0xfe;
          }
        }
      }
      FVar43 = (FName)((longlong)FVar43 + 8);
      uVar40 = (ulonglong)local_3c8;
    }
  }
  if (bVar18) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar24) {
    FThreadStats::AddMessage(FVar42,CycleScopeEnd);
  }
  return;
}

// UpdateSimulationSpace @ 1482bd2e0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
ImmediatePhysics_Chaos::FSimulation::UpdateSimulationSpace
          (FSimulation *this,TTransform<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5)

{
  double dVar1;
  FImplementation *pFVar2;
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
  
  pFVar2 = (this->Implementation).Ptr;
  dVar1 = (param_1->Rotation).XY.m128d_f64[1];
  dVar3 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar4 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar5 = (param_1->Translation).XY.m128d_f64[0];
  dVar6 = (param_1->Translation).XY.m128d_f64[1];
  dVar7 = (param_1->Translation).ZW.m128d_f64[0];
  dVar8 = (param_1->Translation).ZW.m128d_f64[1];
  dVar9 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar10 = (param_1->Scale3D).XY.m128d_f64[1];
  dVar11 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar12 = (param_1->Scale3D).ZW.m128d_f64[1];
  (pFVar2->SimulationSpaceTransform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (pFVar2->SimulationSpaceTransform).Rotation.XY.m128d_f64[1] = dVar1;
  (pFVar2->SimulationSpaceTransform).Rotation.ZW.m128d_f64[0] = dVar3;
  (pFVar2->SimulationSpaceTransform).Rotation.ZW.m128d_f64[1] = dVar4;
  (pFVar2->SimulationSpaceTransform).Translation.XY.m128d_f64[0] = dVar5;
  (pFVar2->SimulationSpaceTransform).Translation.XY.m128d_f64[1] = dVar6;
  (pFVar2->SimulationSpaceTransform).Translation.ZW.m128d_f64[0] = dVar7;
  (pFVar2->SimulationSpaceTransform).Translation.ZW.m128d_f64[1] = dVar8;
  (pFVar2->SimulationSpaceTransform).Scale3D.XY.m128d_f64[0] = dVar9;
  (pFVar2->SimulationSpaceTransform).Scale3D.XY.m128d_f64[1] = dVar10;
  (pFVar2->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[0] = dVar11;
  (pFVar2->SimulationSpaceTransform).Scale3D.ZW.m128d_f64[1] = dVar12;
  dVar3 = (param_4->field0_0x0)._s_0.Y;
  dVar1 = (param_4->field0_0x0)._s_0.Z;
  pFVar2 = (this->Implementation).Ptr;
  *(double *)&(pFVar2->SimulationSpace).LinearAcceleration = (param_4->field0_0x0)._s_0.X;
  *(double *)&(pFVar2->SimulationSpace).LinearAcceleration.field_0x8 = dVar3;
  *(double *)&(pFVar2->SimulationSpace).LinearAcceleration.field_0x10 = dVar1;
  dVar3 = (param_5->field0_0x0)._s_0.Y;
  dVar1 = (param_5->field0_0x0)._s_0.Z;
  pFVar2 = (this->Implementation).Ptr;
  *(double *)&(pFVar2->SimulationSpace).AngularAcceleration = (param_5->field0_0x0)._s_0.X;
  *(double *)&(pFVar2->SimulationSpace).AngularAcceleration.field_0x8 = dVar3;
  *(double *)&(pFVar2->SimulationSpace).AngularAcceleration.field_0x10 = dVar1;
  pFVar2 = (this->Implementation).Ptr;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  *(double *)&(pFVar2->SimulationSpace).LinearVelocity = (param_2->field0_0x0)._s_0.X;
  *(double *)&(pFVar2->SimulationSpace).LinearVelocity.field_0x8 = dVar3;
  *(double *)&(pFVar2->SimulationSpace).LinearVelocity.field_0x10 = dVar1;
  pFVar2 = (this->Implementation).Ptr;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  *(double *)&(pFVar2->SimulationSpace).AngularVelocity = (param_3->field0_0x0)._s_0.X;
  *(double *)&(pFVar2->SimulationSpace).AngularVelocity.field_0x8 = dVar3;
  *(double *)&(pFVar2->SimulationSpace).AngularVelocity.field_0x10 = dVar1;
  return;
}

// UpdateStatCounters @ 1482bd3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ImmediatePhysics_Chaos::FSimulation::UpdateStatCounters(FSimulation *this)

{
  FName FVar1;
  FImplementation *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_ChaosCounter_NumBodies> FVar8;
  FThreadStats *pFVar9;
  FThreadStatsPool *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_ChaosCounter_NumDynamicBodies> FVar11;
  FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_ChaosCounter_NumKinematicBodies> FVar12;
  FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_ChaosCounter_NumContacts> FVar13;
  FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_ChaosCounter_NumJoints> FVar14;
  uchar auVar15 [8];
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_c8;
  FStatMessage local_c0;
  FStatMessage local_b0;
  FStatMessage local_a0;
  FStatMessage local_90;
  FStatMessage local_80;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  auVar15 = (uchar  [8])
            (longlong)*(int *)&(((this->Implementation).Ptr)->Particles).NonDisabledView.field_0x10;
  if ((auVar15 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable)) {
    FVar8 = StatPtr_STAT_ImmediateSimulate_ChaosCounter_NumBodies;
    if (StatPtr_STAT_ImmediateSimulate_ChaosCounter_NumBodies ==
        (FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_ChaosCounter_NumBodies>)0x0) {
      pFVar7 = ::FName::FName(&local_70,"STAT_ImmediateSimulate_ChaosCounter_NumBodies");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_ChaosCounter_NumBodies>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_ImmediateSimulate_ChaosCounter_NumBodies,*pFVar7,
                         L"FSimulation::NumBodies","STATGROUP_ImmediatePhysicsCounters",
                         "STATCAT_Advanced",L"Immediate Physics Counters",true,true,ST_int64,false,
                         false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar8;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_c0.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res10 = FVar1;
      local_c0.StatData.Pad = auVar15;
      local_c0.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar9,&local_c0);
      FStatsTrace::Add(&local_res10,(long64)auVar15);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  auVar15 = (uchar  [8])
            (longlong)
            *(int *)&(((this->Implementation).Ptr)->Particles).NonDisabledDynamicView.field_0x10;
  if ((auVar15 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar11 = StatPtr_STAT_ImmediateSimulate_ChaosCounter_NumDynamicBodies;
    if (StatPtr_STAT_ImmediateSimulate_ChaosCounter_NumDynamicBodies ==
        (FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_ChaosCounter_NumDynamicBodies>)0x0) {
      pFVar7 = ::FName::FName(&local_68,"STAT_ImmediateSimulate_ChaosCounter_NumDynamicBodies");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_ChaosCounter_NumDynamicBodies>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ImmediateSimulate_ChaosCounter_NumDynamicBodies,*pFVar7,
                          L"FSimulation::NumDynamicBodies","STATGROUP_ImmediatePhysicsCounters",
                          "STATCAT_Advanced",L"Immediate Physics Counters",true,true,ST_int64,false,
                          false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar11;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_b0.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res18 = FVar1;
      local_b0.StatData.Pad = auVar15;
      local_b0.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar9,&local_b0);
      FStatsTrace::Add(&local_res18,(long64)auVar15);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  auVar15 = (uchar  [8])
            (longlong)
            *(int *)&(((this->Implementation).Ptr)->Particles).ActiveKinematicParticlesView.
                     field_0x10;
  if ((auVar15 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar12 = StatPtr_STAT_ImmediateSimulate_ChaosCounter_NumKinematicBodies;
    if (StatPtr_STAT_ImmediateSimulate_ChaosCounter_NumKinematicBodies ==
        (FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_ChaosCounter_NumKinematicBodies>)0x0) {
      pFVar7 = ::FName::FName(&local_60,"STAT_ImmediateSimulate_ChaosCounter_NumKinematicBodies");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_ChaosCounter_NumKinematicBodies>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ImmediateSimulate_ChaosCounter_NumKinematicBodies,*pFVar7,
                          L"FSimulation::NumKinematicBodies","STATGROUP_ImmediatePhysicsCounters",
                          "STATCAT_Advanced",L"Immediate Physics Counters",true,true,ST_int64,false,
                          false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar12;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_a0.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_a0.StatData.Pad = auVar15;
      local_a0.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar9,&local_a0);
      FStatsTrace::Add(&local_res8,(long64)auVar15);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  iVar5 = (((this->Implementation).Ptr)->Collisions).ConstraintAllocator.ActiveConstraints.ArrayNum;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (iVar5 == 0) goto LAB_1482bd905;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar13 = StatPtr_STAT_ImmediateSimulate_ChaosCounter_NumContacts;
    if (StatPtr_STAT_ImmediateSimulate_ChaosCounter_NumContacts ==
        (FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_ChaosCounter_NumContacts>)0x0) {
      pFVar7 = ::FName::FName(&local_58,"STAT_ImmediateSimulate_ChaosCounter_NumContacts");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_ChaosCounter_NumContacts>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ImmediateSimulate_ChaosCounter_NumContacts,*pFVar7,
                          L"FSimulation::NumContacts","STATGROUP_ImmediatePhysicsCounters",
                          "STATCAT_Advanced",L"Immediate Physics Counters",true,true,ST_int64,false,
                          false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar13;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_90.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res20 = FVar1;
      local_90.StatData.Pad = (uchar  [8])(longlong)iVar5;
      local_90.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar9,&local_90);
      FStatsTrace::Add(&local_res20,(longlong)iVar5);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
LAB_1482bd905:
  pFVar2 = (this->Implementation).Ptr;
  iVar5 = Chaos::FPBDJointConstraints::NumConstraints(&(pFVar2->Joints).NonLinearConstraints);
  iVar6 = Chaos::FPBDJointConstraints::NumConstraints(&(pFVar2->Joints).LinearConstraints);
  iVar5 = iVar5 + iVar6;
  if ((iVar5 != 0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar14 = StatPtr_STAT_ImmediateSimulate_ChaosCounter_NumJoints;
    if (StatPtr_STAT_ImmediateSimulate_ChaosCounter_NumJoints ==
        (FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_ChaosCounter_NumJoints>)0x0) {
      pFVar7 = ::FName::FName(local_50,"STAT_ImmediateSimulate_ChaosCounter_NumJoints");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_ImmediateSimulate_ChaosCounter_NumJoints>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ImmediateSimulate_ChaosCounter_NumJoints,*pFVar7,
                          L"FSimulation::NumJoints","STATGROUP_ImmediatePhysicsCounters",
                          "STATCAT_Advanced",L"Immediate Physics Counters",true,true,ST_int64,false,
                          false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar14;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_80.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_c8 = FVar1;
      local_80.StatData.Pad = (uchar  [8])(longlong)iVar5;
      local_80.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar9,&local_80);
      FStatsTrace::Add(&local_c8,(longlong)iVar5);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  return;
}

// UpdateStepTime @ 1482bda80

double __thiscall
ImmediatePhysics_Chaos::FSimulation::UpdateStepTime(FSimulation *this,double param_1,double param_2)

{
  double dVar1;
  FImplementation *pFVar2;
  int iVar3;
  int iVar4;
  
  pFVar2 = (this->Implementation).Ptr;
  if (1 < pFVar2->NumRollingAverageStepTimes) {
    pFVar2->RollingAverageStepTime =
         (param_1 - pFVar2->RollingAverageStepTime) / (double)pFVar2->NumRollingAverageStepTimes +
         pFVar2->RollingAverageStepTime;
    pFVar2 = (this->Implementation).Ptr;
    dVar1 = pFVar2->RollingAverageStepTime;
    if (param_2 <= dVar1) {
      dVar1 = param_2;
    }
    pFVar2->RollingAverageStepTime = dVar1;
    pFVar2 = (this->Implementation).Ptr;
    iVar3 = pFVar2->NumRollingAverageStepTimes + 1;
    iVar4 = pFVar2->MaxNumRollingAverageStepTimes;
    if (iVar3 < pFVar2->MaxNumRollingAverageStepTimes) {
      iVar4 = iVar3;
    }
    pFVar2->NumRollingAverageStepTimes = iVar4;
    return ((this->Implementation).Ptr)->RollingAverageStepTime;
  }
  if (param_2 <= param_1) {
    param_1 = param_2;
  }
  pFVar2->NumRollingAverageStepTimes = pFVar2->MaxNumRollingAverageStepTimes;
  ((this->Implementation).Ptr)->RollingAverageStepTime = param_1;
  return ((this->Implementation).Ptr)->RollingAverageStepTime;
}

// VisitCollisions @ 1482bf460

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

void __thiscall
ImmediatePhysics_Chaos::FSimulation::VisitCollisions
          (FSimulation *this,
          TFunction<void___cdecl(ImmediatePhysics_Chaos::FSimulation::FCollisionData_const_&)>
          *param_1,ECollisionVisitorFlags param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FImplementation *pFVar3;
  ECollisionVisitorResult EVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_28 [8];
  <lambda_1> local_20;
  
  pFVar3 = (this->Implementation).Ptr;
  pFVar6 = (pFVar3->Collisions).ConstraintAllocator.ParticlePairMidPhases.AllocatorInstance.Data;
  iVar2 = (pFVar3->Collisions).ConstraintAllocator.ParticlePairMidPhases.ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  local_20.Visitor = param_1;
  while( true ) {
    if ((pFVar3->Collisions).ConstraintAllocator.ParticlePairMidPhases.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FParticlePairMidPhase,TDefaultDelete<Chaos::FParticlePairMidPhase>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_28);
    }
    if (pFVar6 == pFVar1) break;
    EVar4 = Chaos::FParticlePairMidPhase::
            VisitConstCollisions<_ImmediatePhysics_Chaos::FSimulation::VisitCollisions_::__l2::<lambda_1>_>
                      (*(FParticlePairMidPhase **)pFVar6,&local_20,param_2);
    if (EVar4 == Stop) break;
    pFVar6 = pFVar6 + 8;
  }
  if (*(longlong *)param_1 != 0) {
    plVar5 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

