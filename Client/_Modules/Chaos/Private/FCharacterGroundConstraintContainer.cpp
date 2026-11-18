// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 16

// FCharacterGroundConstraintContainer @ 14388a430

FCharacterGroundConstraintContainer * __thiscall
Chaos::FCharacterGroundConstraintContainer::FCharacterGroundConstraintContainer
          (FCharacterGroundConstraintContainer *this)

{
  FConstraintHandleTypeID *pFVar1;
  FConstraintHandleTypeID local_18;
  
  pFVar1 = FCharacterGroundConstraintHandle::StaticType();
  local_18.TypeName = pFVar1->TypeName;
  local_18.BaseType = pFVar1->BaseType;
  FPBDConstraintContainer::FPBDConstraintContainer((FPBDConstraintContainer *)this,&local_18);
  this->_padding_ = (longlong)&___7FCharacterGroundConstraintContainer_Chaos__6B_;
  (this->ConstraintPool).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintPool).Blocks.ArrayNum = 0;
  (this->ConstraintPool).Blocks.ArrayMax = 0;
  (this->ConstraintPool).FreeCount = 0;
  (this->ConstraintPool).NumPerBlock = 0x10;
  (this->ConstraintPool).Capacity = 0;
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  return this;
}

// ~FCharacterGroundConstraintContainer @ 14388c890

void __thiscall
Chaos::FCharacterGroundConstraintContainer::~FCharacterGroundConstraintContainer
          (FCharacterGroundConstraintContainer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FCharacterGroundConstraintContainer_Chaos__6B_;
  pFVar1 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TObjectPool<Chaos::FCharacterGroundConstraintHandle>::
  ~TObjectPool<Chaos::FCharacterGroundConstraintHandle>(&this->ConstraintPool);
  FPBDConstraintContainer::~FPBDConstraintContainer((FPBDConstraintContainer *)this);
  return;
}

// AddConstraint @ 143899e60

FCharacterGroundConstraintHandle * __thiscall
Chaos::FCharacterGroundConstraintContainer::AddConstraint
          (FCharacterGroundConstraintContainer *this,FCharacterGroundConstraintSettings *param_1,
          FCharacterGroundConstraintDynamicData *param_2,
          TGeometryParticleHandleImp<double,3,1> *param_3,
          TGeometryParticleHandleImp<double,3,1> *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  FCharacterGroundConstraintHandle *pFVar8;
  bool *pbVar9;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  FCharacterGroundConstraintHandle *local_18 [2];
  
  local_18[0] = TObjectPool<Chaos::FCharacterGroundConstraintHandle>::Alloc<>(&this->ConstraintPool)
  ;
  pFVar2 = (this->Constraints).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Constraints).ArrayMax * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FCharacterGroundConstraintHandle *)(*pcVar3)();
      return pFVar8;
    }
  }
  iVar7 = (this->Constraints).ArrayNum;
  piVar1 = &(this->Constraints).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Constraints).AllocatorInstance,piVar1);
  }
  (this->Constraints).ArrayNum = iVar7 + 1;
  *(FCharacterGroundConstraintHandle **)
   ((this->Constraints).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_18[0];
  if (param_3 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CharacterParticle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Character\\CharacterGroundConstraintContainer.cpp"
                       ,0x3b,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FCharacterGroundConstraintHandle *)(*pcVar3)();
      return pFVar8;
    }
  }
  TGeometryParticlesImp<double,3,0>::AddConstraintHandle
            ((TGeometryParticlesImp<double,3,0> *)param_3->_padding_,(int *)&param_3->_padding_,
             (FConstraintHandle *)local_18[0]);
  if (param_4 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    TGeometryParticlesImp<double,3,0>::AddConstraintHandle
              ((TGeometryParticlesImp<double,3,0> *)param_4->_padding_,(int *)&param_4->_padding_,
               (FConstraintHandle *)local_18[0]);
  }
  local_18[0]->CharacterParticle = param_3;
  local_18[0]->GroundParticle = param_4;
  uVar4 = *(undefined8 *)&(param_1->VerticalAxis).field_0x8;
  *(undefined8 *)&(local_18[0]->Settings).VerticalAxis = *(undefined8 *)&param_1->VerticalAxis;
  *(undefined8 *)&(local_18[0]->Settings).VerticalAxis.field_0x8 = uVar4;
  dVar5 = param_1->TargetHeight;
  *(undefined8 *)&(local_18[0]->Settings).VerticalAxis.field_0x10 =
       *(undefined8 *)&(param_1->VerticalAxis).field_0x10;
  (local_18[0]->Settings).TargetHeight = dVar5;
  dVar5 = param_1->FrictionForceLimit;
  (local_18[0]->Settings).RadialForceLimit = param_1->RadialForceLimit;
  (local_18[0]->Settings).FrictionForceLimit = dVar5;
  dVar5 = param_1->SwingTorqueLimit;
  (local_18[0]->Settings).TwistTorqueLimit = param_1->TwistTorqueLimit;
  (local_18[0]->Settings).SwingTorqueLimit = dVar5;
  dVar5 = param_1->DampingFactor;
  (local_18[0]->Settings).CosMaxWalkableSlopeAngle = param_1->CosMaxWalkableSlopeAngle;
  (local_18[0]->Settings).DampingFactor = dVar5;
  dVar5 = param_1->MotionTargetMassBias;
  (local_18[0]->Settings).AssumedOnGroundHeight = param_1->AssumedOnGroundHeight;
  (local_18[0]->Settings).MotionTargetMassBias = dVar5;
  dVar5 = param_1->MaxCharacterGroundMassRatio;
  (local_18[0]->Settings).RadialForceMotionTargetScaling = param_1->RadialForceMotionTargetScaling;
  (local_18[0]->Settings).MaxCharacterGroundMassRatio = dVar5;
  (local_18[0]->Settings).UserData = param_1->UserData;
  uVar4 = *(undefined8 *)&(param_2->GroundNormal).field_0x8;
  *(undefined8 *)&(local_18[0]->Data).GroundNormal = *(undefined8 *)&param_2->GroundNormal;
  *(undefined8 *)&(local_18[0]->Data).GroundNormal.field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&param_2->TargetDeltaPosition;
  *(undefined8 *)&(local_18[0]->Data).GroundNormal.field_0x10 =
       *(undefined8 *)&(param_2->GroundNormal).field_0x10;
  *(undefined8 *)&(local_18[0]->Data).TargetDeltaPosition = uVar4;
  uVar4 = *(undefined8 *)&(param_2->TargetDeltaPosition).field_0x10;
  *(undefined8 *)&(local_18[0]->Data).TargetDeltaPosition.field_0x8 =
       *(undefined8 *)&(param_2->TargetDeltaPosition).field_0x8;
  *(undefined8 *)&(local_18[0]->Data).TargetDeltaPosition.field_0x10 = uVar4;
  dVar5 = param_2->GroundDistance;
  (local_18[0]->Data).TargetDeltaFacing = param_2->TargetDeltaFacing;
  (local_18[0]->Data).GroundDistance = dVar5;
  (local_18[0]->Data).CosMaxWalkableSlopeAngle = param_2->CosMaxWalkableSlopeAngle;
  local_18[0]->_padding_ = (longlong)this;
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&param_3->_padding_ + 4)) {
    this_00 = param_3;
  }
  if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_18[0]->bDisabled = false;
  }
  else {
    pbVar9 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                       ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    local_18[0]->bDisabled = *pbVar9;
  }
  return local_18[0];
}

// AddConstraintsToGraph @ 14389a4d0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FCharacterGroundConstraintContainer::AddConstraintsToGraph
          (FCharacterGroundConstraintContainer *this,FPBDIslandManager *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FCharacterGroundConstraintHandle *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar11;
  TGeometryParticleHandleImp<double,3,1> *local_58 [4];
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> local_38;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> local_28;
  
  iVar2 = (this->Constraints).ArrayNum;
  pFVar10 = (this->Constraints).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  do {
    if (pFVar10 == pFVar1) {
      return;
    }
    pFVar3 = *(FCharacterGroundConstraintHandle **)pFVar10;
    lVar9 = pFVar3->_padding_;
    if ((pFVar3->bDisabled == false) && (bVar8 = CanEvaluate(this,pFVar3), bVar8)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if ((pFVar3->GroundParticle == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
       ((pFVar3->DirtyFlags & 1) == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar8) {
      if (lVar9 == 0) {
        local_58[0] = pFVar3->CharacterParticle;
        local_58[1] = pFVar3->GroundParticle;
        lVar9 = 0;
        do {
          *(undefined8 *)((longlong)&local_38 + lVar9) = *(undefined8 *)((longlong)local_58 + lVar9)
          ;
          uVar7 = lVar9 + 8;
          lVar9 = lVar9 + 8;
        } while ((TGeometryParticleHandleImp<double,3,1> **)((longlong)local_58 + uVar7) !=
                 local_58 + 2);
        pTVar11 = &local_38;
LAB_14389a625:
        Chaos::Private::FPBDIslandManager::AddConstraint
                  (param_1,(int)this->_padding_,(FConstraintHandle *)pFVar3,pTVar11);
      }
      else {
LAB_14389a5bc:
        if (bVar8) {
          if (bVar5) {
            Chaos::Private::FPBDIslandManager::RemoveConstraint(param_1,(FConstraintHandle *)pFVar3)
            ;
            local_58[2] = pFVar3->CharacterParticle;
            local_58[3] = pFVar3->GroundParticle;
            lVar9 = 0;
            do {
              *(undefined8 *)((longlong)local_28.V + lVar9) =
                   *(undefined8 *)((longlong)local_58 + lVar9 + 0x10U);
              lVar6 = lVar9 + 0xfffffffffffffff8;
              lVar9 = lVar9 + 8;
            } while ((TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)
                     ((longlong)&local_38 + lVar6) != &local_38);
            pTVar11 = &local_28;
            goto LAB_14389a625;
          }
        }
        else {
          Chaos::Private::FPBDIslandManager::RemoveConstraint(param_1,(FConstraintHandle *)pFVar3);
        }
      }
    }
    else if (lVar9 != 0) goto LAB_14389a5bc;
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// CanEvaluate @ 1438a7270

bool __thiscall
Chaos::FCharacterGroundConstraintContainer::CanEvaluate
          (FCharacterGroundConstraintContainer *this,FCharacterGroundConstraintHandle *param_1)

{
  byte bVar1;
  uint uVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  EObjectStateType EVar7;
  undefined1 uVar8;
  bool *pbVar9;
  TGeometryParticleHandleImp<double,3,1> *pTVar10;
  TGeometryParticleHandleImp<double,3,1> *pTVar11;
  TGeometryParticleHandleImp<double,3,1> *pTVar12;
  uint uVar13;
  
  if ((param_1->bDisabled == false) &&
     (pTVar3 = param_1->CharacterParticle, pTVar3 != (TGeometryParticleHandleImp<double,3,1> *)0x0))
  {
    pTVar11 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    pTVar10 = pTVar11;
    if (1 < *(byte *)((longlong)&pTVar3->_padding_ + 4)) {
      pTVar10 = pTVar3;
    }
    if ((pTVar10 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
       (pbVar9 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                           ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar10), *pbVar9 != false)) {
      return false;
    }
    bVar1 = *(byte *)((longlong)&pTVar3->_padding_ + 4);
    pTVar10 = pTVar11;
    if (1 < bVar1) {
      pTVar10 = pTVar3;
    }
    if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar10 = pTVar11;
      if (bVar1 != 0) {
        pTVar10 = pTVar3;
      }
      if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar7 = Static;
      }
      else {
        pTVar12 = pTVar11;
        if (1 < *(byte *)((longlong)&pTVar10->_padding_ + 4)) {
          pTVar12 = pTVar10;
        }
        if (pTVar12 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          EVar7 = Kinematic;
        }
        else {
          EVar7 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                            ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
        }
      }
      bVar6 = EVar7 == Sleeping;
    }
    else {
      bVar6 = TPBDRigidParticleHandleImp<double,3,1>::Sleeping
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar10);
    }
    if (bVar6 != false) {
      return false;
    }
    pTVar10 = pTVar11;
    if (*(char *)((longlong)&pTVar3->_padding_ + 4) != '\0') {
      pTVar10 = pTVar3;
    }
    if (pTVar10 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar12 = pTVar11;
      if (1 < *(byte *)((longlong)&pTVar10->_padding_ + 4)) {
        pTVar12 = pTVar10;
      }
      if (pTVar12 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar7 = Kinematic;
      }
      else {
        EVar7 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
      }
      if (EVar7 == Dynamic) goto LAB_1438a736b;
    }
    pTVar10 = pTVar11;
    if (*(char *)((longlong)&pTVar3->_padding_ + 4) != '\0') {
      pTVar10 = pTVar3;
    }
    if (pTVar10 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar12 = pTVar11;
      if (1 < *(byte *)((longlong)&pTVar10->_padding_ + 4)) {
        pTVar12 = pTVar10;
      }
      if (pTVar12 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar7 = Kinematic;
      }
      else {
        EVar7 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
      }
      if (EVar7 == Sleeping) {
LAB_1438a736b:
        if (1 < *(byte *)((longlong)&pTVar3->_padding_ + 4)) {
          pTVar11 = pTVar3;
        }
        uVar2 = (uint)pTVar11->_padding_;
        lVar4 = pTVar11->_padding_;
        uVar13 = 0;
        if ((int)uVar2 < *(int *)(lVar4 + 1000)) {
          uVar13 = ~uVar2 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        return 0.0 < *(double *)(*(longlong *)(lVar4 + 0x3e0) + (longlong)(int)uVar2 * 8);
      }
    }
  }
  return false;
}

// CreateGroupSolver @ 1438abb70

TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
__thiscall
Chaos::FCharacterGroundConstraintContainer::CreateGroupSolver
          (FCharacterGroundConstraintContainer *this,int param_1)

{
  FConstraintContainerSolver *pFVar1;
  undefined8 *puVar2;
  undefined4 in_register_00000014;
  undefined4 in_R8D;
  
  pFVar1 = (FConstraintContainerSolver *)CONCAT44(in_register_00000014,param_1);
  puVar2 = ::operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = in_R8D;
    *puVar2 = &___7FCharacterGroundConstraintContainerSolver_Private_Chaos__6B_;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[2] = this;
    pFVar1->_padding_ = (longlong)puVar2;
    return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
            )pFVar1;
  }
  pFVar1->_padding_ = 0;
  return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
          )pFVar1;
}

// CreateSceneSolver @ 1438ac590

TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
__thiscall
Chaos::FCharacterGroundConstraintContainer::CreateSceneSolver
          (FCharacterGroundConstraintContainer *this,int param_1)

{
  FConstraintContainerSolver *pFVar1;
  undefined8 *puVar2;
  undefined4 in_register_00000014;
  undefined4 in_R8D;
  
  pFVar1 = (FConstraintContainerSolver *)CONCAT44(in_register_00000014,param_1);
  puVar2 = ::operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = in_R8D;
    *puVar2 = &___7FCharacterGroundConstraintContainerSolver_Private_Chaos__6B_;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[2] = this;
    pFVar1->_padding_ = (longlong)puVar2;
    return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
            )pFVar1;
  }
  pFVar1->_padding_ = 0;
  return (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
          )pFVar1;
}

// DisconnectConstraints @ 1438ae300

void __thiscall
Chaos::FCharacterGroundConstraintContainer::DisconnectConstraints
          (FCharacterGroundConstraintContainer *this,
          TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  FConstraintHandle *pFVar7;
  FPBDIslandConstraint *pFVar8;
  FPBDConstraintContainer *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *pTVar13;
  bool bVar14;
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar15;
  FConstraintHandleTypeID *pFVar16;
  TVector<double,3> *pTVar17;
  TRotation<double,3> *pTVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  ForAnyElementType FVar24;
  undefined1 *puVar25;
  uint *puVar26;
  TBitArray<FDefaultBitArrayAllocator> *pTVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_168 [8];
  ForAnyElementType local_160;
  undefined8 local_158;
  uint local_150;
  longlong local_148;
  TVector<double>_u_0 local_140;
  TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_128;
  int iStack_120;
  uint uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  int iStack_100;
  undefined4 uStack_fc;
  int local_f8;
  int local_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TVector<double>_u_0 local_b8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_3c;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  iStack_120 = 0;
  uStack_11c = 1;
  local_108 = 0;
  iStack_10c = iStack_120;
  if (iVar3 != 0) {
    puVar26 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)pTVar27;
    }
    uVar23 = *puVar26;
    local_108 = 0;
    iStack_120 = 0;
    while (uVar23 == 0) {
      lVar19 = (longlong)iStack_120;
      local_108 = local_108 + 0x20;
      iStack_120 = iStack_120 + 1;
      iStack_10c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_120) goto LAB_1438ae3ad;
      uVar23 = puVar26[lVar19 + 1];
    }
    uStack_11c = -uVar23 & uVar23;
    uVar2 = (ulonglong)uStack_11c * 2 + 1;
    lVar19 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_f8 = (int)lVar19;
    iStack_10c = local_108 + -1 + local_f8;
    if (iVar3 < iStack_10c) {
      iStack_10c = iVar3;
    }
  }
LAB_1438ae3ad:
  uVar23 = *(uint *)&(param_1->Elements).field_0x28;
  uVar21 = uVar23 & 0xffffffe0;
  iStack_100 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_110 = 0xffffffff;
  TStack_e0._padding_ = CONCAT44(uStack_11c,iStack_120);
  TStack_e0.CurrentBitIndex = iStack_10c;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar23 >> 5;
  TStack_e0._28_4_ = local_3c;
  TStack_e0.BaseBitIndex = local_108;
  uStack_c0 = CONCAT44(uStack_fc,iStack_100);
  local_150 = uVar23;
  local_128 = param_1;
  local_118 = (undefined1 *)pTVar27;
  local_f0 = pTVar27;
  local_e8 = param_1;
  TStack_e0.Array = pTVar27;
  if ((((int)uVar23 < 0) || (iVar3 < (int)uVar23)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar23 != uVar4) {
    puVar25 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = (undefined1 *)pTVar27;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar20 * 4);
    while (uVar23 == 0) {
      lVar19 = (longlong)iVar20;
      uVar21 = uVar21 + 0x20;
      iVar20 = iVar20 + 1;
      uVar23 = uVar4;
      local_150 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_1438ae4b1;
      uVar23 = *(uint *)(puVar25 + lVar19 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_f4 = (int)lVar19;
    uVar23 = local_f4 + -1 + uVar21;
    local_150 = uVar23;
    if ((int)uVar4 < (int)uVar23) {
      uVar23 = uVar4;
      local_150 = uVar4;
    }
  }
LAB_1438ae4b1:
  do {
    pTVar13 = local_e8;
    if (*(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34 !=
        (int)uStack_c0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<Chaos::TGeometryParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_e0.CurrentBitIndex == uVar23) && (TStack_e0.Array == pTVar27)) &&
       (pTVar13 == param_1)) {
      return;
    }
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = 0;
    puVar5 = *(undefined8 **)
              (*(longlong *)&pTVar13->Elements + (longlong)TStack_e0.CurrentBitIndex * 0x10);
    pTVar15 = TGeometryParticlesImp<double,3,0>::ParticleConstraints
                        ((TGeometryParticlesImp<double,3,0> *)*puVar5,*(int *)(puVar5 + 1));
    pFVar22 = (pTVar15->AllocatorInstance).Data;
    iVar3 = pTVar15->ArrayNum;
    pFVar1 = pFVar22 + (longlong)iVar3 * 8;
    while( true ) {
      if (pTVar15->ArrayNum != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<Chaos::FConstraintHandle_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar22 == pFVar1) break;
      lVar19 = *(longlong *)pFVar22;
      lVar6 = *(longlong *)(lVar19 + 8);
      if ((lVar6 == 0) ||
         ((pFVar16 = FCharacterGroundConstraintHandle::StaticType(),
          pFVar16->TypeName != *(FName *)(lVar6 + 8) &&
          ((*(FConstraintHandleTypeID **)(lVar6 + 0x10) == (FConstraintHandleTypeID *)0x0 ||
           (bVar14 = FConstraintHandleTypeID::IsA
                               (*(FConstraintHandleTypeID **)(lVar6 + 0x10),pFVar16), !bVar14))))))
      {
        local_148 = 0;
LAB_1438ae698:
        pFVar22 = pFVar22 + 8;
      }
      else {
        local_148 = lVar19;
        if (lVar19 == 0) goto LAB_1438ae698;
        if (*(longlong *)(lVar19 + 8) == 0) {
          *(undefined1 *)(lVar19 + 0x138) = 1;
          pFVar22 = pFVar22 + 8;
        }
        else if (*(undefined8 **)(lVar19 + 0x128) == puVar5) {
          *(undefined1 *)(lVar19 + 0x138) = 1;
          pFVar22 = pFVar22 + 8;
          *(undefined8 *)(lVar19 + 0x128) = 0;
        }
        else {
          if (*(undefined8 **)(lVar19 + 0x130) != puVar5) goto LAB_1438ae698;
          if (((local_160.Data <= (FScriptContainerElement *)&local_148) &&
              ((FScriptContainerElement *)&local_148 <
               local_160.Data + (longlong)local_158._4_4_ * 8)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar20 = (int)local_158;
          if ((int)local_158 == local_158._4_4_) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_160,(int *)((longlong)&local_158 + 4));
          }
          pFVar22 = pFVar22 + 8;
          local_158 = CONCAT44(local_158._4_4_,iVar20 + 1);
          *(longlong *)(local_160.Data + (longlong)iVar20 * 8) = local_148;
        }
      }
    }
    iVar3 = (int)local_158;
    pFVar1 = local_160.Data + (longlong)(int)local_158 * 8;
    FVar24.Data = local_160.Data;
    while( true ) {
      if ((int)local_158 != iVar3) {
        local_168[0] = 0;
        `TCheckedPointerIterator<Chaos::FCharacterGroundConstraintHandle_*,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_168);
      }
      if (FVar24.Data == pFVar1) break;
      pFVar7 = *(FConstraintHandle **)FVar24.Data;
      pFVar8 = pFVar7[0xc].GraphEdge;
      if (pFVar8 != (FPBDIslandConstraint *)0x0) {
        TGeometryParticlesImp<double,3,0>::RemoveConstraintHandle
                  ((TGeometryParticlesImp<double,3,0> *)pFVar8->Constraint,(int *)&pFVar8->Island,
                   pFVar7);
        pFVar9 = pFVar7[0xc].ConstraintContainer;
        pFVar7[0xc].GraphEdge = (FPBDIslandConstraint *)0x0;
        if ((pFVar9 == (FPBDConstraintContainer *)0x0) || ((char)pFVar7[0xd]._padding_ != '\0')) {
          local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uStack_94 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uStack_8c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        }
        else {
          pTVar17 = TParticles<double,3>::GetX
                              ((TParticles<double,3> *)pFVar9->_padding_,
                               (pFVar9->ConstraintHandleType).TypeName.ComparisonIndex.Value);
          local_140._s_0.Z = (double)*(undefined8 *)&pTVar17->field_0x10;
          uVar28 = SUB84(local_140._s_0.Z,0);
          uVar29 = (undefined4)((ulonglong)local_140._s_0.Z >> 0x20);
          local_140._0_4_ = *(undefined4 *)pTVar17;
          local_140._4_4_ = *(undefined4 *)&pTVar17->field_0x4;
          local_140._8_4_ = *(undefined4 *)&pTVar17->field_0x8;
          local_140._12_4_ = *(undefined4 *)&pTVar17->field_0xc;
          if (pFVar7[0xc].GraphEdge != (FPBDIslandConstraint *)0x0) {
            pTVar18 = TGeometryParticleHandleImp<double,3,1>::GetR
                                ((TGeometryParticleHandleImp<double,3,1> *)pFVar7[0xc].GraphEdge,
                                 (TRotation<double,3> *)&local_128);
            dVar12 = *(double *)&pTVar18->field_0x8 *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            dVar11 = *(double *)&pTVar18->field_0x18 *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            local_78._8_4_ = SUB84(dVar12,0);
            local_78._0_8_ =
                 *(double *)pTVar18 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            local_78._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            local_68._8_4_ = SUB84(dVar11,0);
            local_68._0_8_ =
                 *(double *)&pTVar18->field_0x10 *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            local_68._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
            pTVar17 = TParticles<double,3>::GetX
                                ((TParticles<double,3> *)(pFVar7[0xc].GraphEdge)->Constraint,
                                 *(int *)&(pFVar7[0xc].GraphEdge)->Island);
            local_b8._s_0.X = (double)CONCAT44(local_140._4_4_,local_140._0_4_) - *(double *)pTVar17
            ;
            local_b8._s_0.Y =
                 (double)CONCAT44(local_140._12_4_,local_140._8_4_) - *(double *)&pTVar17->field_0x8
            ;
            local_b8._s_0.Z = local_140._s_0.Z - *(double *)&pTVar17->field_0x10;
            UE::Math::TQuat<double>::RotateVector
                      ((TQuat<double> *)local_78,(TVector<double> *)&local_140._s_0,
                       (TVector<double> *)&local_b8._s_0);
            uVar28 = SUB84(local_140._s_0.Z,0);
            uVar29 = (undefined4)((ulonglong)local_140._16_8_ >> 0x20);
          }
          local_88 = (double)CONCAT44(uVar29,uVar28);
          local_98 = local_140._0_4_;
          uStack_94 = local_140._4_4_;
          uStack_90 = local_140._8_4_;
          uStack_8c = local_140._12_4_;
        }
        *(byte *)&pFVar7[1]._padding_ = (byte)pFVar7[1]._padding_ | 1;
        *(undefined4 *)&pFVar7[0xb].ConstraintContainer = local_98;
        *(undefined4 *)((longlong)&pFVar7[0xb].ConstraintContainer + 4) = uStack_94;
        *(undefined4 *)&pFVar7[0xb].GraphEdge = uStack_90;
        *(undefined4 *)((longlong)&pFVar7[0xb].GraphEdge + 4) = uStack_8c;
        pFVar7[0xc]._padding_ = (longlong)local_88;
      }
      FVar24.Data = FVar24.Data + 8;
    }
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
    pTVar27 = local_f0;
    uVar23 = local_150;
  } while( true );
}

// GetNumConstraints @ 1438bb370

int __thiscall
Chaos::FCharacterGroundConstraintContainer::GetNumConstraints
          (FCharacterGroundConstraintContainer *this)

{
  return (this->Constraints).ArrayNum;
}

// OnDisableParticle @ 1438c46d0

void __thiscall
Chaos::FCharacterGroundConstraintContainer::OnDisableParticle
          (FCharacterGroundConstraintContainer *this,TGeometryParticleHandleImp<double,3,1> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FCharacterGroundConstraintHandle *this_00;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  
  iVar2 = (this->Constraints).ArrayNum;
  pFVar5 = (this->Constraints).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  do {
    if (pFVar5 == pFVar1) {
      return;
    }
    this_00 = *(FCharacterGroundConstraintHandle **)pFVar5;
    if (this_00->_padding_ == 0) {
LAB_1438c473c:
      this_00->bDisabled = true;
    }
    else if (this_00->CharacterParticle == param_1) {
      if (this_00->bDisabled == false) goto LAB_1438c473c;
    }
    else if (this_00->GroundParticle == param_1) {
      FCharacterGroundConstraintHandle::SetGroundParticle
                (this_00,(TGeometryParticleHandleImp<double,3,1> *)0x0);
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// OnEnableParticle @ 1438c4780

void __thiscall
Chaos::FCharacterGroundConstraintContainer::OnEnableParticle
          (FCharacterGroundConstraintContainer *this,TGeometryParticleHandleImp<double,3,1> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FConstraintHandleTypeID *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  pTVar6 = TGeometryParticlesImp<double,3,0>::ParticleConstraints
                     ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                      (int)param_1->_padding_);
  pFVar8 = (pTVar6->AllocatorInstance).Data;
  iVar2 = pTVar6->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  do {
    if (pTVar6->ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FConstraintHandle_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    lVar3 = *(longlong *)pFVar8;
    lVar4 = *(longlong *)(lVar3 + 8);
    if (lVar4 != 0) {
      pFVar7 = FCharacterGroundConstraintHandle::StaticType();
      if (pFVar7->TypeName == *(FName *)(lVar4 + 8)) {
LAB_1438c47f7:
        if ((*(TGeometryParticleHandleImp<double,3,1> **)(lVar3 + 0x128) == param_1) &&
           (*(char *)(lVar3 + 0x138) != '\0')) {
          *(undefined1 *)(lVar3 + 0x138) = 0;
        }
      }
      else if (*(FConstraintHandleTypeID **)(lVar4 + 0x10) != (FConstraintHandleTypeID *)0x0) {
        bVar5 = FConstraintHandleTypeID::IsA(*(FConstraintHandleTypeID **)(lVar4 + 0x10),pFVar7);
        if (bVar5) goto LAB_1438c47f7;
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// PrepareTick @ 1438c66d0

void __thiscall
Chaos::FCharacterGroundConstraintContainer::PrepareTick(FCharacterGroundConstraintContainer *this)

{
  return;
}

// RemoveConstraint @ 1438cb900

void __thiscall
Chaos::FCharacterGroundConstraintContainer::RemoveConstraint
          (FCharacterGroundConstraintContainer *this,FCharacterGroundConstraintHandle *param_1)

{
  int iVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FCharacterGroundConstraintHandle *pFVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FCharacterGroundConstraintHandle *local_res10;
  
  if (param_1 != (FCharacterGroundConstraintHandle *)0x0) {
    pTVar2 = param_1->CharacterParticle;
    local_res10 = param_1;
    if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      TGeometryParticlesImp<double,3,0>::RemoveConstraintHandle
                ((TGeometryParticlesImp<double,3,0> *)pTVar2->_padding_,(int *)&pTVar2->_padding_,
                 (FConstraintHandle *)param_1);
    }
    pTVar2 = local_res10->GroundParticle;
    if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      TGeometryParticlesImp<double,3,0>::RemoveConstraintHandle
                ((TGeometryParticlesImp<double,3,0> *)pTVar2->_padding_,(int *)&pTVar2->_padding_,
                 (FConstraintHandle *)local_res10);
    }
    TObjectPool<Chaos::FCharacterGroundConstraintHandle>::Free(&this->ConstraintPool,local_res10);
    pFVar3 = (this->Constraints).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 <
         pFVar3 + (longlong)(this->Constraints).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = (this->Constraints).ArrayNum;
    if (iVar1 != 0) {
      iVar10 = 0;
      pFVar3 = (this->Constraints).AllocatorInstance.Data;
      bVar5 = *(FCharacterGroundConstraintHandle **)pFVar3 != local_res10;
      lVar7 = 0;
      pFVar6 = local_res10;
      iVar8 = 0;
      do {
        iVar9 = iVar8;
        do {
          lVar7 = lVar7 + 1;
          iVar9 = iVar9 + 1;
          if (iVar1 <= lVar7) break;
        } while (bVar5 == (*(FCharacterGroundConstraintHandle **)(pFVar3 + lVar7 * 8) != pFVar6));
        if (bVar5 != false) {
          if (iVar10 != iVar8) {
            memmove(pFVar3 + (longlong)iVar10 * 8,pFVar3 + (longlong)iVar8 * 8,
                    (longlong)(iVar9 - iVar8) << 3);
            pFVar6 = local_res10;
          }
          iVar10 = iVar10 + (iVar9 - iVar8);
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar8 = iVar9;
      } while (lVar7 < iVar1);
      (this->Constraints).ArrayNum = iVar10;
    }
  }
  return;
}

// ResetConstraints @ 1438d0420

void __thiscall
Chaos::FCharacterGroundConstraintContainer::ResetConstraints
          (FCharacterGroundConstraintContainer *this)

{
  return;
}

// SetConstraintEnabled @ 1438d1bb0

void __thiscall
Chaos::FCharacterGroundConstraintContainer::SetConstraintEnabled
          (FCharacterGroundConstraintContainer *this,int param_1,bool param_2)

{
  longlong lVar1;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool *pbVar5;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  
  if (param_1 < (this->Constraints).ArrayNum) {
    if ((param_1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar1 = *(longlong *)((this->Constraints).AllocatorInstance.Data + (longlong)param_1 * 8);
    if (param_2) {
      pTVar2 = *(TPBDRigidParticleHandleImp<double,3,1> **)(lVar1 + 0x128);
      if (pTVar2 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar2->field_0xc) {
          this_00 = pTVar2;
        }
        if ((this_00 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
           (pbVar5 = TPBDRigidParticleHandleImp<double,3,1>::Disabled(this_00), *pbVar5 != false)) {
          return;
        }
        *(undefined1 *)(lVar1 + 0x138) = 0;
        return;
      }
    }
    else {
      *(undefined1 *)(lVar1 + 0x138) = 1;
    }
  }
  return;
}

// UnprepareTick @ 1438da560

void __thiscall
Chaos::FCharacterGroundConstraintContainer::UnprepareTick(FCharacterGroundConstraintContainer *this)

{
  return;
}

