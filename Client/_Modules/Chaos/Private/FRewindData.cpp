// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 53

// ~FRewindData @ 143afd9a0

void __thiscall Chaos::FRewindData::~FRewindData(FRewindData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->IslandValidationIslandParticles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IslandValidationIslands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->StateParticleHistories).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StateParticleHistories).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StateParticleHistories);
  *(undefined4 *)&(this->InputParticleHistories).field_0x48 = 0;
  pvVar2 = *(void **)&(this->InputParticleHistories).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InputParticleHistories);
  DestructItems<TWeakPtr<Chaos::FBaseRewindHistory,1>,int>
            ((TWeakPtr<Chaos::FBaseRewindHistory,1> *)(this->StateHistories).AllocatorInstance.Data,
             (this->StateHistories).ArrayNum);
  pFVar1 = (this->StateHistories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TWeakPtr<Chaos::FBaseRewindHistory,1>,int>
            ((TWeakPtr<Chaos::FBaseRewindHistory,1> *)(this->InputHistories).AllocatorInstance.Data,
             (this->InputHistories).ArrayNum);
  pFVar1 = (this->InputHistories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DirtyParticleErrors).DenseVals.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DirtyParticleErrors).KeyToIdx.field_0x48 = 0;
  pvVar2 = *(void **)&(this->DirtyParticleErrors).KeyToIdx.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DirtyParticleErrors);
  pFVar1 = (this->DirtyParticlePreResimState).DenseVals.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x48 = 0;
  pvVar2 = *(void **)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DirtyParticlePreResimState);
  DestructItems<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>,int>
            ((TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)
             (this->DirtyJoints).DenseVals.AllocatorInstance.Data,
             (this->DirtyJoints).DenseVals.ArrayNum);
  pFVar1 = (this->DirtyJoints).DenseVals.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DirtyJoints).KeyToIdx.field_0x48 = 0;
  pvVar2 = *(void **)&(this->DirtyJoints).KeyToIdx.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DirtyJoints);
  DestructItems<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>,int>
            ((TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
              *)(this->DirtyParticles).DenseVals.AllocatorInstance.Data,
             (this->DirtyParticles).DenseVals.ArrayNum);
  pFVar1 = (this->DirtyParticles).DenseVals.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DirtyParticles).KeyToIdx.field_0x48 = 0;
  pvVar2 = *(void **)&(this->DirtyParticles).KeyToIdx.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DirtyParticles);
  FDirtyPropertiesPool::~FDirtyPropertiesPool(&this->PropertiesPool);
  DestructItems<Chaos::FRewindData::FFrameManagerInfo,int>
            ((FFrameManagerInfo *)(this->Managers).Elements.AllocatorInstance.Data,
             (this->Managers).Elements.ArrayNum);
  pFVar1 = (this->Managers).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator()<Chaos::TGeometryParticleHandleImp<double,3,1>_*,Chaos::FParticleNonFrequentData> @ 1440bdd40

void __thiscall
`Chaos::FRewindData::RewindToFrame'::__l17::<lambda_4>::
operator()<Chaos::TGeometryParticleHandleImp<double,3,1>_*,Chaos::FParticleNonFrequentData>
          (void *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FParticleNonFrequentData *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)this + 0x4d8) + 0xbd0);
  Chaos::Private::FPBDIslandManager::RemoveParticleConstraints
            ((FPBDIslandManager *)(plVar1 + 0x20),param_1);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
  Chaos::TGeometryParticleHandleImp<double,3,1>::SetNonFrequentData(param_1,param_2);
  return;
}

// operator()<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,Chaos::FKinematicTarget> @ 1440bdda0

void __thiscall
`Chaos::FRewindData::RewindToFrame'::__l17::<lambda_5>::
operator()<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,Chaos::FKinematicTarget>
          (void *this,TKinematicGeometryParticleHandleImp<double,3,1> *param_1,
          FKinematicTarget *param_2)

{
  FPBDRigidsSOAs *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  EKinematicTargetMode EVar6;
  undefined4 uVar7;
  FKinematicTarget *pFVar8;
  TKinematicGeometryParticleHandleImp<double,3,1> *pTVar9;
  
  if (param_2->Mode != None) {
    uVar1 = *(undefined8 *)&param_2->Rotation;
    uVar2 = *(undefined8 *)&(param_2->Rotation).field_0x8;
    uVar3 = *(undefined8 *)&param_2->Position;
    uVar4 = *(undefined8 *)&(param_2->Position).field_0x8;
    uVar5 = *(undefined8 *)&(param_2->Position).field_0x10;
    EVar6 = param_2->Mode;
    uVar7 = *(undefined4 *)&param_2->field_0x2c;
    pFVar8 = Chaos::TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                       (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                        *(int *)&param_1->field_0x8);
    *(undefined8 *)&pFVar8->Rotation = uVar1;
    *(undefined8 *)&(pFVar8->Rotation).field_0x8 = uVar2;
    *(undefined8 *)&pFVar8->Position = uVar3;
    *(undefined8 *)&(pFVar8->Position).field_0x8 = uVar4;
    *(undefined8 *)&(pFVar8->Position).field_0x10 = uVar5;
    pFVar8->Mode = EVar6;
    *(undefined4 *)&pFVar8->field_0x2c = uVar7;
    this_00 = *(FPBDRigidsSOAs **)
               (*(longlong *)(*(longlong *)(*(longlong *)this + 0x4d8) + 0xbd0) + 0x2d8);
    pTVar9 = Chaos::TKinematicGeometryParticlesImp<double,3,0>::Handle
                       (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                        *(int *)&param_1->field_0x8);
    Chaos::FPBDRigidsSOAs::MarkMovingKinematic(this_00,pTVar9);
  }
  return;
}

// operator()<Chaos::TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_> @ 1440be0a0

void __thiscall
`Chaos::FRewindData::FinishFrame'::__l5::<lambda_1>::
operator()<Chaos::TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
          (void *this,
          TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
          *param_1)

{
  uint uVar1;
  FFrameAndPhase FVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ESyncState *pEVar8;
  ulonglong uVar9;
  TGeometryParticleHandleImp<double,3,1> *pTVar10;
  FGeometryParticleStateBase *this_00;
  FGeometryParticleStateBase *pFVar11;
  FDirtyPropertiesPool *pFVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  
  this_00 = (FGeometryParticleStateBase *)(param_1->DenseVals).AllocatorInstance.Data;
  local_res18 = (param_1->DenseVals).ArrayNum;
  uVar9 = (ulonglong)(int)local_res18;
  pFVar11 = (FGeometryParticleStateBase *)((longlong)this_00 + uVar9 * 0x1a0);
LAB_1440be0e0:
  do {
    if ((param_1->DenseVals).ArrayNum != (int)uVar9) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == pFVar11) {
      return;
    }
    if ((char)this_00[1].ParticlePositionRotation.Buffer.ArrayMax == '\0') {
      pTVar3 = *(TGeometryParticleHandleImp<double,3,1> **)&this_00[1].ParticlePositionRotation;
      uVar1 = (uint)pTVar3->_padding_;
      lVar4 = pTVar3->_padding_;
      uVar7 = 0;
      if ((int)uVar1 < *(int *)(lVar4 + 0x208)) {
        uVar7 = ~uVar1 >> 0x1f;
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
      if (*(char *)((longlong)(int)uVar1 + *(longlong *)(lVar4 + 0x200)) == '\0') {
        lVar4 = *(longlong *)this;
        if (*(int *)(lVar4 + 0x4e0) + 1 == *(int *)(lVar4 + 0x4e4)) {
          pEVar8 = Chaos::TGeometryParticlesImp<double,3,0>::SyncState
                             ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
                              (int)pTVar3->_padding_);
          *pEVar8 = InSync;
          Chaos::TGeometryParticleHandleImp<double,3,1>::SetEnabledDuringResim(pTVar3,false);
          Chaos::FGeometryParticleStateBase::ClearEntryAndFuture
                    (this_00,*(FFrameAndPhase *)((longlong)this + 8));
          uVar9 = (ulonglong)local_res18;
          this_00 = (FGeometryParticleStateBase *)&this_00[1].NonFrequentData;
          goto LAB_1440be0e0;
        }
        if (*(char *)(lVar4 + 0x4f1) == '\0') {
          FVar2 = *(FFrameAndPhase *)((longlong)this + 8);
          if (*(int *)(lVar4 + 0x4e4) <= *(int *)(lVar4 + 0x4e0)) {
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<3627022640780149467>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                               ,0x2db,"IsResim()");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pTVar3 = *(TGeometryParticleHandleImp<double,3,1> **)&this_00[1].ParticlePositionRotation;
          pEVar8 = Chaos::TGeometryParticlesImp<double,3,0>::SyncState
                             ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
                              (int)pTVar3->_padding_);
          if (*pEVar8 == InSync) {
            pFVar12 = (FDirtyPropertiesPool *)(lVar4 + 0x18);
            bVar6 = Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::
                    IsInSync<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                              (&this_00->ParticlePositionRotation,pTVar3,FVar2,pFVar12);
            if (bVar6) {
              bVar6 = Chaos::TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::
                      IsInSync<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                                (&this_00->NonFrequentData,pTVar3,FVar2,pFVar12);
              if (bVar6) {
                pTVar10 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
                if (*(char *)((longlong)&pTVar3->_padding_ + 4) != '\0') {
                  pTVar10 = pTVar3;
                }
                if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_1440be293:
                  pTVar10 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
                  if (1 < *(byte *)((longlong)&pTVar3->_padding_ + 4)) {
                    pTVar10 = pTVar3;
                  }
                  if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_1440be2fc;
                  bVar6 = Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::
                          IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                                    (&this_00->DynamicsMisc,
                                     (TPBDRigidParticleHandleImp<double,3,1> *)pTVar10,FVar2,pFVar12
                                    );
                  if (bVar6) {
                    bVar6 = Chaos::TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::
                            IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                                      (&this_00->MassProps,
                                       (TPBDRigidParticleHandleImp<double,3,1> *)pTVar10,FVar2,
                                       pFVar12);
                    if (bVar6) goto LAB_1440be2fc;
                  }
                }
                else {
                  bVar6 = Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::
                          IsInSync<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
                                    (&this_00->Velocities,
                                     (TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar10,
                                     FVar2,pFVar12);
                  if (bVar6) {
                    bVar6 = Chaos::TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::
                            IsInSync<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
                                      (&this_00->KinematicTarget,
                                       (TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar10,
                                       FVar2,pFVar12);
                    if (bVar6) goto LAB_1440be293;
                  }
                }
              }
            }
            if (Chaos::SkipDesyncTest == 0) {
              Chaos::FGeometryParticleStateBase::ClearEntryAndFuture(this_00,FVar2);
              pEVar8 = Chaos::TGeometryParticlesImp<double,3,0>::SyncState
                                 ((TGeometryParticlesImp<double,3,0> *)
                                  **(undefined8 **)&this_00[1].ParticlePositionRotation,
                                  *(int *)(*(undefined8 **)&this_00[1].ParticlePositionRotation + 1)
                                 );
              *pEVar8 = HardDesync;
            }
          }
        }
      }
    }
LAB_1440be2fc:
    uVar9 = (ulonglong)local_res18;
    this_00 = (FGeometryParticleStateBase *)&this_00[1].NonFrequentData;
  } while( true );
}

// AccumulateErrorIfNecessary<Chaos::TGeometryParticleHandleImp<double,3,1>_> @ 1440bec00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FRewindData::AccumulateErrorIfNecessary<Chaos::TGeometryParticleHandleImp<double,3,1>_>
          (FRewindData *this,TGeometryParticleHandleImp<double,3,1> *param_1,FFrameAndPhase param_2)

{
  double dVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [12];
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  uint uVar21;
  FDirtyParticleErrorInfo *pFVar22;
  TVector<double,3> *pTVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined4 uVar29;
  uint uVar30;
  undefined4 uVar31;
  uint uVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar45;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar46;
  undefined1 auVar47 [16];
  double dVar49;
  undefined1 auVar48 [16];
  FDirtyParticleErrorInfo local_d8 [3];
  
  pFVar22 = TDirtyObjects<Chaos::FRewindData::FDirtyParticleErrorInfo>::Find
                      (&this->DirtyParticlePreResimState,param_1);
  if (pFVar22 == (FDirtyParticleErrorInfo *)0x0) {
    return;
  }
  dVar13 = *(double *)&pFVar22->ErrorX;
  dVar12 = *(double *)&(pFVar22->ErrorX).field_0x8;
  dVar1 = *(double *)&(pFVar22->ErrorX).field_0x10;
  pTVar23 = TParticles<double,3>::GetX
                      ((TParticles<double,3> *)param_1->_padding_,(int)param_1->_padding_);
  uVar21 = (uint)param_1->_padding_;
  lVar25 = (longlong)(int)uVar21;
  lVar28 = param_1->_padding_;
  dVar13 = dVar13 - *(double *)pTVar23;
  dVar12 = dVar12 - *(double *)&pTVar23->field_0x8;
  dVar1 = dVar1 - *(double *)&pTVar23->field_0x10;
  uVar30 = 0;
  if ((int)uVar21 < *(int *)(lVar28 + 0x50)) {
    uVar30 = ~uVar21 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  dVar16 = (pFVar22->ErrorR).Z;
  dVar17 = (pFVar22->ErrorR).W;
  lVar28 = *(longlong *)(lVar28 + 0x48);
  dVar18 = (pFVar22->ErrorR).X;
  dVar19 = (pFVar22->ErrorR).Y;
  uVar2 = *(undefined8 *)(lVar28 + 8 + lVar25 * 0x10);
  dVar45 = (double)(float)uVar2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar33 = (double)(float)((ulonglong)uVar2 >> 0x20) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar39 = (double)*(float *)(lVar28 + lVar25 * 0x10) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar11 = (double)*(float *)(lVar28 + 4 + lVar25 * 0x10) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar47._8_4_ = SUB84(dVar39,0);
  auVar47._0_8_ = dVar39;
  auVar47._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
  auVar41._8_4_ = SUB84(dVar11,0);
  auVar41._0_8_ = dVar11;
  auVar41._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  dVar46 = dVar39 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar33 * dVar18 +
           dVar11 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar45 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar49 = auVar47._8_8_ * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
           + dVar33 * dVar19 +
           auVar41._8_8_ * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar45 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar42 = dVar39 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar33 * dVar16 +
           dVar11 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar45 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar45 = dVar39 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar33 * dVar17 +
           dVar11 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar45 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar14._4_8_ = dVar17;
  auVar14._0_4_ = (int)((ulonglong)dVar42 >> 0x20);
  auVar43._0_8_ = auVar14._0_8_ << 0x20;
  auVar43._8_4_ = SUB84(dVar45,0);
  auVar43._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
  if (auVar43._8_8_ * UE::Math::TQuat<double>::Identity.W +
      dVar42 * UE::Math::TQuat<double>::Identity.Z +
      dVar49 * UE::Math::TQuat<double>::Identity.Y + dVar46 * UE::Math::TQuat<double>::Identity.X <
      0.0) {
    uVar29 = (undefined4)__real_bff0000000000000;
    uVar31 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  else {
    uVar29 = (undefined4)__real_3ff0000000000000;
    uVar31 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  dVar42 = dVar42 * (double)CONCAT44(uVar31,uVar29);
  dVar46 = dVar46 * (double)CONCAT44(uVar31,uVar29);
  dVar49 = dVar49 * (double)CONCAT44(uVar31,uVar29);
  auVar40._0_8_ = auVar43._8_8_ * (double)CONCAT44(uVar31,uVar29);
  auVar40._8_8_ = dVar45;
  auVar34._8_4_ = SUB84(dVar49,0);
  auVar34._0_8_ = dVar46;
  auVar34._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
  dVar33 = dVar46 * dVar46 + dVar42 * dVar42;
  dVar39 = auVar34._8_8_ * dVar49 + auVar40._0_8_ * auVar40._0_8_;
  dVar45 = dVar39 + dVar33;
  dVar33 = dVar33 + dVar39;
  auVar4._8_4_ = SUB84(dVar33,0);
  auVar4._0_8_ = dVar45;
  auVar4._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  auVar41 = sqrtpd(auVar40,auVar4);
  uVar26 = -(ulonglong)(__real_3e45798ee0000000 <= dVar45);
  uVar27 = -(ulonglong)(__real_3e45798ee0000000 <= dVar33);
  auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar41);
  uVar30 = (uint)(uVar26 >> 0x20);
  uVar32 = (uint)(uVar27 >> 0x20);
  auVar44._0_8_ = uVar26 & (ulonglong)(auVar43._0_8_ * dVar46);
  uVar15 = uVar27 & (ulonglong)(auVar43._8_8_ * dVar49);
  auVar44._8_4_ = (undefined4)uVar15;
  auVar44._12_4_ = (undefined4)(uVar15 >> 0x20);
  auVar35._0_4_ = ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar35._4_4_ =
       ~uVar30 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar35._8_4_ = ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar35._12_4_ =
       ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar41);
  auVar36._0_8_ = (ulonglong)(auVar41._0_8_ * dVar42) & uVar26;
  uVar15 = (ulonglong)(auVar41._8_8_ * auVar40._0_8_) & uVar27;
  auVar36._8_4_ = (undefined4)uVar15;
  auVar36._12_4_ = (undefined4)(uVar15 >> 0x20);
  auVar48._0_4_ = ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar48._4_4_ =
       ~uVar30 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar48._8_4_ = ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar48._12_4_ =
       ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  uVar30 = SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar32 = (uint)((ulonglong)dVar13 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar33 = SUB168(auVar48 | auVar36,0);
  dVar39 = SUB168(auVar48 | auVar36,8);
  dVar49 = SUB168(auVar44 | auVar35,0);
  dVar45 = SUB168(auVar44 | auVar35,8);
  if ((((double)CONCAT44(uVar32,uVar30) < __real_3fb999999999999a ||
        (double)CONCAT44(uVar32,uVar30) == __real_3fb999999999999a) &&
      (uVar30 = SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar32 = (uint)((ulonglong)dVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar32,uVar30) < __real_3fb999999999999a ||
      (double)CONCAT44(uVar32,uVar30) == __real_3fb999999999999a)) &&
     (uVar30 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar32 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar32,uVar30) < __real_3fb999999999999a ||
     (double)CONCAT44(uVar32,uVar30) == __real_3fb999999999999a)) {
    auVar37._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(dVar33 - UE::Math::TQuat<double>::Identity.Z) >> 0x20)
                          & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar33 - UE::Math::TQuat<double>::Identity.Z,0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar37._8_4_ = SUB84(dVar39 - UE::Math::TQuat<double>::Identity.W,0) & _UNK_15061cc88;
    auVar37._12_4_ =
         (uint)((ulonglong)(dVar39 - UE::Math::TQuat<double>::Identity.W) >> 0x20) & _UNK_15061cc8c;
    lVar25 = -(ulonglong)(__real_3f947ae147ae147b < auVar37._8_8_);
    auVar5._8_4_ = (int)lVar25;
    auVar5._0_8_ = -(ulonglong)(__real_3f947ae147ae147b < auVar37._0_8_);
    auVar5._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
    iVar24 = movmskpd(uVar21 * 2,auVar5);
    auVar38._0_8_ =
         (double)CONCAT44((uint)((ulonglong)(dVar49 - UE::Math::TQuat<double>::Identity.X) >> 0x20)
                          & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar49 - UE::Math::TQuat<double>::Identity.X,0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar38._8_4_ = SUB84(dVar45 - UE::Math::TQuat<double>::Identity.Y,0) & _UNK_15061cc88;
    auVar38._12_4_ =
         (uint)((ulonglong)(dVar45 - UE::Math::TQuat<double>::Identity.Y) >> 0x20) & _UNK_15061cc8c;
    lVar25 = -(ulonglong)(__real_3f947ae147ae147b < auVar38._8_8_);
    auVar6._8_4_ = (int)lVar25;
    auVar6._0_8_ = -(ulonglong)(__real_3f947ae147ae147b < auVar38._0_8_);
    auVar6._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
    uVar21 = movmskpd((int)lVar28,auVar6);
    uVar30 = iVar24 << 2 | uVar21;
    if (uVar30 == 0) {
      return;
    }
    lVar28 = -(ulonglong)
              (__real_3f947ae147ae147b <
              (double)CONCAT44((uint)((ulonglong)(UE::Math::TQuat<double>::Identity.W + dVar39) >>
                                     0x20) & _UNK_15061cc8c,
                               SUB84(UE::Math::TQuat<double>::Identity.W + dVar39,0) &
                               _UNK_15061cc88));
    auVar7._8_4_ = (int)lVar28;
    auVar7._0_8_ = -(ulonglong)
                    (__real_3f947ae147ae147b <
                    (double)CONCAT44((uint)((ulonglong)
                                            (UE::Math::TQuat<double>::Identity.Z + dVar33) >> 0x20)
                                     & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(UE::Math::TQuat<double>::Identity.Z + dVar33,0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar7._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
    uVar30 = movmskpd(uVar30,auVar7);
    lVar28 = -(ulonglong)
              (__real_3f947ae147ae147b <
              (double)CONCAT44((uint)((ulonglong)(dVar45 + UE::Math::TQuat<double>::Identity.Y) >>
                                     0x20) & _UNK_15061cc8c,
                               SUB84(dVar45 + UE::Math::TQuat<double>::Identity.Y,0) &
                               _UNK_15061cc88));
    auVar8._8_4_ = (int)lVar28;
    auVar8._0_8_ = -(ulonglong)
                    (__real_3f947ae147ae147b <
                    (double)CONCAT44((uint)((ulonglong)
                                            (dVar49 + UE::Math::TQuat<double>::Identity.X) >> 0x20)
                                     & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar49 + UE::Math::TQuat<double>::Identity.X,0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar8._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
    iVar24 = movmskpd(uVar21,auVar8);
    if ((uVar30 & 0x3fffffff) == 0 && iVar24 == 0) {
      return;
    }
  }
  pFVar22 = TDirtyObjects<Chaos::FRewindData::FDirtyParticleErrorInfo>::Find
                      (&this->DirtyParticleErrors,param_1);
  if (pFVar22 == (FDirtyParticleErrorInfo *)0x0) {
    local_d8[0].ErrorX._0_8_ = 0;
    local_d8[0].ErrorX._8_8_ = 0;
    local_d8[0].ErrorX._16_8_ = 0;
    local_d8[0].ErrorR.Z = UE::Math::TQuat<double>::Identity.Z;
    local_d8[0].ErrorR.W = UE::Math::TQuat<double>::Identity.W;
    local_d8[0].ErrorR.X = UE::Math::TQuat<double>::Identity.X;
    local_d8[0].ErrorR.Y = UE::Math::TQuat<double>::Identity.Y;
    local_d8[0].HandlePtr = param_1;
    pFVar22 = TDirtyObjects<Chaos::FRewindData::FDirtyParticleErrorInfo>::Add
                        (&this->DirtyParticleErrors,param_1,local_d8);
  }
  dVar11 = *(double *)&(pFVar22->ErrorX).field_0x10;
  *(double *)&pFVar22->ErrorX = dVar13 + *(double *)&pFVar22->ErrorX;
  *(double *)&(pFVar22->ErrorX).field_0x8 = dVar12 + *(double *)&(pFVar22->ErrorX).field_0x8;
  *(double *)&(pFVar22->ErrorX).field_0x10 = dVar1 + dVar11;
  dVar11 = (pFVar22->ErrorR).X;
  dVar16 = (pFVar22->ErrorR).Y;
  dVar17 = (pFVar22->ErrorR).Z;
  dVar18 = (pFVar22->ErrorR).W;
  dVar1 = dVar11 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar49 * dVar18 +
          dVar33 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar17 * dVar45 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar12 = dVar11 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar45 * dVar18 +
           dVar39 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar17 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar13 = dVar11 * dVar45 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar33 * dVar18 +
           dVar49 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar17 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar49 = dVar11 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar39 * dVar18 +
           dVar45 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar17 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar9._8_4_ = SUB84(dVar12,0);
  auVar9._0_8_ = dVar1;
  auVar9._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  (pFVar22->ErrorR).X = dVar1;
  (pFVar22->ErrorR).Y = (double)auVar9._8_8_;
  auVar10._8_4_ = SUB84(dVar49,0);
  auVar10._0_8_ = dVar13;
  auVar10._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
  (pFVar22->ErrorR).Z = dVar13;
  (pFVar22->ErrorR).W = (double)auVar10._8_8_;
  return;
}

// DesyncIfNecessary<1,Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_> @ 1440c19c0

void __thiscall
Chaos::FRewindData::
DesyncIfNecessary<1,Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
          (FRewindData *this,
          TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
          *param_1,FFrameAndPhase param_2)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  ESyncState *pEVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  FDirtyPropertiesPool *pFVar6;
  
  if ((this->LatestFrame <= this->CurFrame) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3627022640780149467>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                         ,0x2db,"IsResim()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = param_1->ObjPtr;
  pEVar4 = TGeometryParticlesImp<double,3,0>::SyncState
                     ((TGeometryParticlesImp<double,3,0> *)pTVar1->_padding_,(int)pTVar1->_padding_)
  ;
  if (*pEVar4 == InSync) {
    pFVar6 = &this->PropertiesPool;
    bVar3 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::
            IsInSync<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                      ((TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *)param_1,
                       pTVar1,param_2,pFVar6);
    if ((bVar3) &&
       (bVar3 = TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::
                IsInSync<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                          (&(param_1->History).NonFrequentData,pTVar1,param_2,pFVar6), bVar3)) {
      pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (*(char *)((longlong)&pTVar1->_padding_ + 4) != '\0') {
        pTVar5 = pTVar1;
      }
      if ((pTVar5 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
         ((bVar3 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::
                   IsInSync<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
                             (&(param_1->History).Velocities,
                              (TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar5,param_2,
                              pFVar6), bVar3 &&
          (bVar3 = TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::
                   IsInSync<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
                             (&(param_1->History).KinematicTarget,
                              (TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar5,param_2,
                              pFVar6), bVar3)))) {
        pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar1->_padding_ + 4)) {
          pTVar5 = pTVar1;
        }
        if (pTVar5 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          return;
        }
        bVar3 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::
                IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                          (&(param_1->History).DynamicsMisc,
                           (TPBDRigidParticleHandleImp<double,3,1> *)pTVar5,param_2,pFVar6);
        if ((bVar3) &&
           (bVar3 = TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::
                    IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                              (&(param_1->History).MassProps,
                               (TPBDRigidParticleHandleImp<double,3,1> *)pTVar5,param_2,pFVar6),
           bVar3)) {
          return;
        }
      }
    }
    if (SkipDesyncTest == 0) {
      FGeometryParticleStateBase::ClearEntryAndFuture(&param_1->History,param_2);
      pEVar4 = TGeometryParticlesImp<double,3,0>::SyncState
                         ((TGeometryParticlesImp<double,3,0> *)param_1->ObjPtr->_padding_,
                          (int)param_1->ObjPtr->_padding_);
      *pEVar4 = HardDesync;
    }
  }
  return;
}

// DesyncIfNecessary<1,Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_> @ 1440c1b40

void __thiscall
Chaos::FRewindData::
DesyncIfNecessary<1,Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
          (FRewindData *this,
          TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *param_1,
          FFrameAndPhase param_2)

{
  FPBDJointConstraintHandle *this_00;
  code *pcVar1;
  bool bVar2;
  ESyncState EVar3;
  
  if (this->LatestFrame <= this->CurFrame) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3627022640780149467>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                       ,0x2db,"IsResim()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = param_1->ObjPtr;
  EVar3 = FPBDJointConstraintHandle::SyncState(this_00);
  if (EVar3 == InSync) {
    bVar2 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::
            IsInSync<Chaos::FPBDJointConstraintHandle>
                      ((TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1> *)param_1,this_00,
                       param_2,&this->PropertiesPool);
    if ((!bVar2) && (SkipDesyncTest == 0)) {
      FJointStateBase::ClearEntryAndFuture(&param_1->History,param_2);
      FPBDJointConstraintHandle::SetSyncState(param_1->ObjPtr,HardDesync);
    }
  }
  return;
}

// DesyncIfNecessary<0,Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_> @ 1440c1c00

void __thiscall
Chaos::FRewindData::
DesyncIfNecessary<0,Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
          (FRewindData *this,
          TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
          *param_1,FFrameAndPhase param_2)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  ESyncState *pEVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  FDirtyPropertiesPool *pFVar6;
  
  if ((this->LatestFrame <= this->CurFrame) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3627022640780149467>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                         ,0x2db,"IsResim()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = param_1->ObjPtr;
  pEVar4 = TGeometryParticlesImp<double,3,0>::SyncState
                     ((TGeometryParticlesImp<double,3,0> *)pTVar1->_padding_,(int)pTVar1->_padding_)
  ;
  if (*pEVar4 == InSync) {
    pFVar6 = &this->PropertiesPool;
    bVar3 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::
            IsInSync<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                      ((TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *)param_1,
                       pTVar1,param_2,pFVar6);
    if ((bVar3) &&
       (bVar3 = TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::
                IsInSync<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                          (&(param_1->History).NonFrequentData,pTVar1,param_2,pFVar6), bVar3)) {
      pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (*(char *)((longlong)&pTVar1->_padding_ + 4) != '\0') {
        pTVar5 = pTVar1;
      }
      if ((pTVar5 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
         ((bVar3 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::
                   IsInSync<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
                             (&(param_1->History).Velocities,
                              (TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar5,param_2,
                              pFVar6), bVar3 &&
          (bVar3 = TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::
                   IsInSync<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
                             (&(param_1->History).KinematicTarget,
                              (TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar5,param_2,
                              pFVar6), bVar3)))) {
        pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar1->_padding_ + 4)) {
          pTVar5 = pTVar1;
        }
        if (pTVar5 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          return;
        }
        bVar3 = TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::
                IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                          (&(param_1->History).Dynamics,
                           (TPBDRigidParticleHandleImp<double,3,1> *)pTVar5,param_2,pFVar6);
        if (((bVar3) &&
            (bVar3 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::
                     IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                               (&(param_1->History).DynamicsMisc,
                                (TPBDRigidParticleHandleImp<double,3,1> *)pTVar5,param_2,pFVar6),
            bVar3)) &&
           (bVar3 = TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::
                    IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                              (&(param_1->History).MassProps,
                               (TPBDRigidParticleHandleImp<double,3,1> *)pTVar5,param_2,pFVar6),
           bVar3)) {
          return;
        }
      }
    }
    if (SkipDesyncTest == 0) {
      FGeometryParticleStateBase::ClearEntryAndFuture(&param_1->History,param_2);
      pEVar4 = TGeometryParticlesImp<double,3,0>::SyncState
                         ((TGeometryParticlesImp<double,3,0> *)param_1->ObjPtr->_padding_,
                          (int)param_1->ObjPtr->_padding_);
      *pEVar4 = HardDesync;
    }
  }
  return;
}

// DesyncIfNecessary<0,Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_> @ 1440c1d90

void __thiscall
Chaos::FRewindData::
DesyncIfNecessary<0,Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
          (FRewindData *this,
          TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *param_1,
          FFrameAndPhase param_2)

{
  FPBDJointConstraintHandle *this_00;
  code *pcVar1;
  bool bVar2;
  ESyncState EVar3;
  
  if (this->LatestFrame <= this->CurFrame) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3627022640780149467>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                       ,0x2db,"IsResim()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = param_1->ObjPtr;
  EVar3 = FPBDJointConstraintHandle::SyncState(this_00);
  if (EVar3 == InSync) {
    bVar2 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::
            IsInSync<Chaos::FPBDJointConstraintHandle>
                      ((TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1> *)param_1,this_00,
                       param_2,&this->PropertiesPool);
    if ((!bVar2) && (SkipDesyncTest == 0)) {
      FJointStateBase::ClearEntryAndFuture(&param_1->History,param_2);
      FPBDJointConstraintHandle::SetSyncState(param_1->ObjPtr,HardDesync);
    }
  }
  return;
}

// FRewindData @ 1440cc120

FRewindData * __thiscall
Chaos::FRewindData::FRewindData(FRewindData *this,FPBDRigidsSolver *param_1,int param_2,int param_3)

{
  TCircularBuffer<Chaos::FRewindData::FFrameManagerInfo>::
  TCircularBuffer<Chaos::FRewindData::FFrameManagerInfo>(&this->Managers,param_2 + 1);
  FDirtyPropertiesPool::FDirtyPropertiesPool(&this->PropertiesPool);
  *(undefined8 *)&(this->DirtyParticles).KeyToIdx = 0;
  *(undefined8 *)&(this->DirtyParticles).KeyToIdx.field_0x8 = 0;
  *(undefined8 *)&(this->DirtyParticles).KeyToIdx.field_0x20 = 0;
  *(undefined4 *)&(this->DirtyParticles).KeyToIdx.field_0x28 = 0;
  *(undefined4 *)&(this->DirtyParticles).KeyToIdx.field_0x2c = 0x80;
  *(undefined4 *)&(this->DirtyParticles).KeyToIdx.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DirtyParticles).KeyToIdx.field_0x34 = 0;
  *(undefined8 *)&(this->DirtyParticles).KeyToIdx.field_0x40 = 0;
  *(undefined4 *)&(this->DirtyParticles).KeyToIdx.field_0x48 = 0;
  (this->DirtyParticles).DenseVals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyParticles).DenseVals.ArrayNum = 0;
  (this->DirtyParticles).DenseVals.ArrayMax = 0;
  *(undefined8 *)&(this->DirtyJoints).KeyToIdx = 0;
  *(undefined8 *)&(this->DirtyJoints).KeyToIdx.field_0x8 = 0;
  *(undefined8 *)&(this->DirtyJoints).KeyToIdx.field_0x20 = 0;
  *(undefined4 *)&(this->DirtyJoints).KeyToIdx.field_0x28 = 0;
  *(undefined4 *)&(this->DirtyJoints).KeyToIdx.field_0x2c = 0x80;
  *(undefined4 *)&(this->DirtyJoints).KeyToIdx.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DirtyJoints).KeyToIdx.field_0x34 = 0;
  *(undefined8 *)&(this->DirtyJoints).KeyToIdx.field_0x40 = 0;
  *(undefined4 *)&(this->DirtyJoints).KeyToIdx.field_0x48 = 0;
  (this->DirtyJoints).DenseVals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyJoints).DenseVals.ArrayNum = 0;
  (this->DirtyJoints).DenseVals.ArrayMax = 0;
  *(undefined8 *)&(this->DirtyParticlePreResimState).KeyToIdx = 0;
  *(undefined8 *)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x8 = 0;
  *(undefined8 *)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x20 = 0;
  *(undefined4 *)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x28 = 0;
  *(undefined4 *)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x2c = 0x80;
  *(undefined4 *)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x34 = 0;
  *(undefined8 *)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x40 = 0;
  *(undefined4 *)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x48 = 0;
  (this->DirtyParticlePreResimState).DenseVals.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyParticlePreResimState).DenseVals.ArrayNum = 0;
  (this->DirtyParticlePreResimState).DenseVals.ArrayMax = 0;
  *(undefined8 *)&(this->DirtyParticleErrors).KeyToIdx = 0;
  *(undefined8 *)&(this->DirtyParticleErrors).KeyToIdx.field_0x8 = 0;
  *(undefined8 *)&(this->DirtyParticleErrors).KeyToIdx.field_0x20 = 0;
  *(undefined4 *)&(this->DirtyParticleErrors).KeyToIdx.field_0x28 = 0;
  *(undefined4 *)&(this->DirtyParticleErrors).KeyToIdx.field_0x2c = 0x80;
  *(undefined4 *)&(this->DirtyParticleErrors).KeyToIdx.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DirtyParticleErrors).KeyToIdx.field_0x34 = 0;
  *(undefined8 *)&(this->DirtyParticleErrors).KeyToIdx.field_0x40 = 0;
  *(undefined4 *)&(this->DirtyParticleErrors).KeyToIdx.field_0x48 = 0;
  (this->DirtyParticleErrors).DenseVals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyParticleErrors).DenseVals.ArrayNum = 0;
  (this->DirtyParticleErrors).DenseVals.ArrayMax = 0;
  (this->InputHistories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputHistories).ArrayNum = 0;
  (this->InputHistories).ArrayMax = 0;
  (this->StateHistories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StateHistories).ArrayNum = 0;
  (this->StateHistories).ArrayMax = 0;
  *(undefined8 *)&this->InputParticleHistories = 0;
  *(undefined8 *)&(this->InputParticleHistories).field_0x8 = 0;
  *(undefined8 *)&(this->InputParticleHistories).field_0x20 = 0;
  *(undefined4 *)&(this->InputParticleHistories).field_0x28 = 0;
  *(undefined4 *)&(this->InputParticleHistories).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputParticleHistories).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InputParticleHistories).field_0x34 = 0;
  *(undefined8 *)&(this->InputParticleHistories).field_0x40 = 0;
  *(undefined4 *)&(this->InputParticleHistories).field_0x48 = 0;
  *(undefined8 *)&this->StateParticleHistories = 0;
  *(undefined8 *)&(this->StateParticleHistories).field_0x8 = 0;
  *(undefined8 *)&(this->StateParticleHistories).field_0x20 = 0;
  *(undefined4 *)&(this->StateParticleHistories).field_0x28 = 0;
  *(undefined4 *)&(this->StateParticleHistories).field_0x2c = 0x80;
  *(undefined4 *)&(this->StateParticleHistories).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StateParticleHistories).field_0x34 = 0;
  *(undefined8 *)&(this->StateParticleHistories).field_0x40 = 0;
  *(undefined4 *)&(this->StateParticleHistories).field_0x48 = 0;
  this->Solver = param_1;
  this->CurFrame = param_3;
  this->LatestFrame = param_3;
  this->FramesSaved = 0;
  this->DataIdxOffset = 0;
  this->bNeedsSave = false;
  this->bRewindDataOptimization = bCVarRewindDataOptimization;
  this->LatestTargetFrame = 0;
  (this->IslandValidationIslands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IslandValidationIslands).ArrayNum = 0;
  (this->IslandValidationIslands).ArrayMax = 0;
  (this->IslandValidationIslandParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IslandValidationIslandParticles).ArrayNum = 0;
  (this->IslandValidationIslandParticles).ArrayMax = 0;
  this->ResimFrame = -1;
  this->BlockResimFrame = -1;
  RegisterEvolutionCallbacks(this);
  return this;
}

// FRewindData @ 1440cc3b0

FRewindData * __thiscall
Chaos::FRewindData::FRewindData
          (FRewindData *this,FPBDRigidsSolver *param_1,int param_2,bool param_3,int param_4)

{
  TCircularBuffer<Chaos::FRewindData::FFrameManagerInfo>::
  TCircularBuffer<Chaos::FRewindData::FFrameManagerInfo>(&this->Managers,param_2 + 1);
  FDirtyPropertiesPool::FDirtyPropertiesPool(&this->PropertiesPool);
  *(undefined8 *)&(this->DirtyParticles).KeyToIdx = 0;
  *(undefined8 *)&(this->DirtyParticles).KeyToIdx.field_0x8 = 0;
  *(undefined8 *)&(this->DirtyParticles).KeyToIdx.field_0x20 = 0;
  *(undefined4 *)&(this->DirtyParticles).KeyToIdx.field_0x28 = 0;
  *(undefined4 *)&(this->DirtyParticles).KeyToIdx.field_0x2c = 0x80;
  *(undefined4 *)&(this->DirtyParticles).KeyToIdx.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DirtyParticles).KeyToIdx.field_0x34 = 0;
  *(undefined8 *)&(this->DirtyParticles).KeyToIdx.field_0x40 = 0;
  *(undefined4 *)&(this->DirtyParticles).KeyToIdx.field_0x48 = 0;
  (this->DirtyParticles).DenseVals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyParticles).DenseVals.ArrayNum = 0;
  (this->DirtyParticles).DenseVals.ArrayMax = 0;
  *(undefined8 *)&(this->DirtyJoints).KeyToIdx = 0;
  *(undefined8 *)&(this->DirtyJoints).KeyToIdx.field_0x8 = 0;
  *(undefined8 *)&(this->DirtyJoints).KeyToIdx.field_0x20 = 0;
  *(undefined4 *)&(this->DirtyJoints).KeyToIdx.field_0x28 = 0;
  *(undefined4 *)&(this->DirtyJoints).KeyToIdx.field_0x2c = 0x80;
  *(undefined4 *)&(this->DirtyJoints).KeyToIdx.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DirtyJoints).KeyToIdx.field_0x34 = 0;
  *(undefined8 *)&(this->DirtyJoints).KeyToIdx.field_0x40 = 0;
  *(undefined4 *)&(this->DirtyJoints).KeyToIdx.field_0x48 = 0;
  (this->DirtyJoints).DenseVals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyJoints).DenseVals.ArrayNum = 0;
  (this->DirtyJoints).DenseVals.ArrayMax = 0;
  *(undefined8 *)&(this->DirtyParticlePreResimState).KeyToIdx = 0;
  *(undefined8 *)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x8 = 0;
  *(undefined8 *)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x20 = 0;
  *(undefined4 *)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x28 = 0;
  *(undefined4 *)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x2c = 0x80;
  *(undefined4 *)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x34 = 0;
  *(undefined8 *)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x40 = 0;
  *(undefined4 *)&(this->DirtyParticlePreResimState).KeyToIdx.field_0x48 = 0;
  (this->DirtyParticlePreResimState).DenseVals.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DirtyParticlePreResimState).DenseVals.ArrayNum = 0;
  (this->DirtyParticlePreResimState).DenseVals.ArrayMax = 0;
  *(undefined8 *)&(this->DirtyParticleErrors).KeyToIdx = 0;
  *(undefined8 *)&(this->DirtyParticleErrors).KeyToIdx.field_0x8 = 0;
  *(undefined8 *)&(this->DirtyParticleErrors).KeyToIdx.field_0x20 = 0;
  *(undefined4 *)&(this->DirtyParticleErrors).KeyToIdx.field_0x28 = 0;
  *(undefined4 *)&(this->DirtyParticleErrors).KeyToIdx.field_0x2c = 0x80;
  *(undefined4 *)&(this->DirtyParticleErrors).KeyToIdx.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DirtyParticleErrors).KeyToIdx.field_0x34 = 0;
  *(undefined8 *)&(this->DirtyParticleErrors).KeyToIdx.field_0x40 = 0;
  *(undefined4 *)&(this->DirtyParticleErrors).KeyToIdx.field_0x48 = 0;
  (this->DirtyParticleErrors).DenseVals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyParticleErrors).DenseVals.ArrayNum = 0;
  (this->DirtyParticleErrors).DenseVals.ArrayMax = 0;
  (this->InputHistories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputHistories).ArrayNum = 0;
  (this->InputHistories).ArrayMax = 0;
  (this->StateHistories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StateHistories).ArrayNum = 0;
  (this->StateHistories).ArrayMax = 0;
  *(undefined8 *)&this->InputParticleHistories = 0;
  *(undefined8 *)&(this->InputParticleHistories).field_0x8 = 0;
  *(undefined8 *)&(this->InputParticleHistories).field_0x20 = 0;
  *(undefined4 *)&(this->InputParticleHistories).field_0x28 = 0;
  *(undefined4 *)&(this->InputParticleHistories).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputParticleHistories).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InputParticleHistories).field_0x34 = 0;
  *(undefined8 *)&(this->InputParticleHistories).field_0x40 = 0;
  *(undefined4 *)&(this->InputParticleHistories).field_0x48 = 0;
  *(undefined8 *)&this->StateParticleHistories = 0;
  *(undefined8 *)&(this->StateParticleHistories).field_0x8 = 0;
  *(undefined8 *)&(this->StateParticleHistories).field_0x20 = 0;
  *(undefined4 *)&(this->StateParticleHistories).field_0x28 = 0;
  *(undefined4 *)&(this->StateParticleHistories).field_0x2c = 0x80;
  *(undefined4 *)&(this->StateParticleHistories).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StateParticleHistories).field_0x34 = 0;
  *(undefined8 *)&(this->StateParticleHistories).field_0x40 = 0;
  *(undefined4 *)&(this->StateParticleHistories).field_0x48 = 0;
  this->Solver = param_1;
  this->CurFrame = param_4;
  this->LatestFrame = param_4;
  this->FramesSaved = 0;
  this->DataIdxOffset = 0;
  this->bNeedsSave = false;
  this->bRewindDataOptimization = param_3;
  this->LatestTargetFrame = 0;
  (this->IslandValidationIslands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IslandValidationIslands).ArrayNum = 0;
  (this->IslandValidationIslands).ArrayMax = 0;
  (this->IslandValidationIslandParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IslandValidationIslandParticles).ArrayNum = 0;
  (this->IslandValidationIslandParticles).ArrayMax = 0;
  this->ResimFrame = -1;
  this->BlockResimFrame = -1;
  RegisterEvolutionCallbacks(this);
  return this;
}

// operator() @ 1440ce8b0

FDirtyParticleErrorInfo * __thiscall
`Chaos::FRewindData::CachePreResimState'::__l2::<lambda_1>::operator()
          (void *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FDirtyParticleErrorInfo *pFVar1;
  FDirtyParticleErrorInfo local_48;
  
  pFVar1 = Chaos::TDirtyObjects<Chaos::FRewindData::FDirtyParticleErrorInfo>::Find
                     ((TDirtyObjects<Chaos::FRewindData::FDirtyParticleErrorInfo> *)
                      (*(longlong *)this + 0x358),param_1);
  if (pFVar1 == (FDirtyParticleErrorInfo *)0x0) {
    local_48.ErrorX._0_8_ = 0;
    local_48.ErrorX._8_8_ = 0;
    local_48.ErrorX._16_8_ = 0;
    local_48.ErrorR.X = UE::Math::TQuat<double>::Identity.X;
    local_48.ErrorR.Y = UE::Math::TQuat<double>::Identity.Y;
    local_48.ErrorR.Z = UE::Math::TQuat<double>::Identity.Z;
    local_48.ErrorR.W = UE::Math::TQuat<double>::Identity.W;
    local_48.HandlePtr = param_1;
    pFVar1 = Chaos::TDirtyObjects<Chaos::FRewindData::FDirtyParticleErrorInfo>::Add
                       ((TDirtyObjects<Chaos::FRewindData::FDirtyParticleErrorInfo> *)
                        (*(longlong *)this + 0x358),param_1,&local_48);
  }
  return pFVar1;
}

// operator() @ 1440d06b0

void __thiscall
`Chaos::FRewindData::PushGTDirtyData'::__l8::<lambda_3>::operator()
          (void *this,FGeometryParticleStateBase *param_1)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  longlong lVar2;
  undefined8 uVar3;
  FParticlePositionRotation *this_00;
  FParticleNonFrequentData *this_01;
  FParticleVelocities *this_02;
  FKinematicTarget *pFVar4;
  FKinematicTarget *pFVar5;
  FParticleDynamicMisc *this_03;
  FParticleMassProps *pFVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar8;
  
  pTVar1 = *(TGeometryParticleHandleImp<double,3,1> **)this;
  if ((*(byte *)((*(longlong **)((longlong)this + 8))[1] + 8) & 1) != 0) {
    lVar2 = **(longlong **)((longlong)this + 8);
    this_00 = Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::
              WriteAccessImp<1>(&param_1->ParticlePositionRotation,
                                (FFrameAndPhase)(*(uint *)(lVar2 + 0x4e0) & 0x3fffffff),
                                (FDirtyPropertiesPool *)(lVar2 + 0x18));
    Chaos::FParticlePositionRotation::CopyFrom<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (this_00,pTVar1);
  }
  pTVar1 = *(TGeometryParticleHandleImp<double,3,1> **)this;
  if ((*(byte *)((*(longlong **)((longlong)this + 8))[1] + 8) & 0x10) != 0) {
    lVar2 = **(longlong **)((longlong)this + 8);
    this_01 = Chaos::TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::WriteAccessImp<1>
                        (&param_1->NonFrequentData,
                         (FFrameAndPhase)(*(uint *)(lVar2 + 0x4e0) & 0x3fffffff),
                         (FDirtyPropertiesPool *)(lVar2 + 0x18));
    Chaos::FParticleNonFrequentData::CopyFrom<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (this_01,pTVar1);
  }
  pTVar8 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if ((*(TKinematicGeometryParticleHandleImp<double,3,1> **)this)->field_0xc != '\0') {
    pTVar8 = (TPBDRigidParticleHandleImp<double,3,1> *)
             *(TKinematicGeometryParticleHandleImp<double,3,1> **)this;
  }
  if (pTVar8 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    if ((*(byte *)((*(longlong **)((longlong)this + 8))[1] + 8) & 2) != 0) {
      lVar2 = **(longlong **)((longlong)this + 8);
      this_02 = Chaos::TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::WriteAccessImp<1>
                          (&param_1->Velocities,
                           (FFrameAndPhase)(*(uint *)(lVar2 + 0x4e0) & 0x3fffffff),
                           (FDirtyPropertiesPool *)(lVar2 + 0x18));
      Chaos::FParticleVelocities::CopyFrom<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
                (this_02,(TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar8);
    }
    if ((*(byte *)((*(longlong **)((longlong)this + 8))[1] + 8) & 0x40) != 0) {
      lVar2 = **(longlong **)((longlong)this + 8);
      pFVar4 = Chaos::TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::WriteAccessImp<1>
                         (&param_1->KinematicTarget,
                          (FFrameAndPhase)(*(uint *)(lVar2 + 0x4e0) & 0x3fffffff),
                          (FDirtyPropertiesPool *)(lVar2 + 0x18));
      pFVar5 = Chaos::TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                         (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar8,
                          *(int *)&((TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar8)->
                                   field_0x8);
      uVar3 = *(undefined8 *)&(pFVar5->Position).field_0x8;
      *(undefined8 *)&pFVar4->Position = *(undefined8 *)&pFVar5->Position;
      *(undefined8 *)&(pFVar4->Position).field_0x8 = uVar3;
      *(undefined8 *)&(pFVar4->Position).field_0x10 = *(undefined8 *)&(pFVar5->Position).field_0x10;
      pFVar5 = Chaos::TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                         (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar8,
                          *(int *)&((TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar8)->
                                   field_0x8);
      uVar3 = *(undefined8 *)&(pFVar5->Rotation).field_0x8;
      *(undefined8 *)&pFVar4->Rotation = *(undefined8 *)&pFVar5->Rotation;
      *(undefined8 *)&(pFVar4->Rotation).field_0x8 = uVar3;
      pFVar5 = Chaos::TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                         (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar8,
                          *(int *)&((TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar8)->
                                   field_0x8);
      pFVar4->Mode = pFVar5->Mode;
    }
    pTVar7 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)((TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar8)->field_0xc) {
      pTVar7 = pTVar8;
    }
    if (pTVar7 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      if ((*(byte *)((*(longlong **)((longlong)this + 8))[1] + 8) & 8) != 0) {
        lVar2 = **(longlong **)((longlong)this + 8);
        this_03 = Chaos::TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::WriteAccessImp<1>
                            (&param_1->DynamicsMisc,
                             (FFrameAndPhase)(*(uint *)(lVar2 + 0x4e0) & 0x3fffffff),
                             (FDirtyPropertiesPool *)(lVar2 + 0x18));
        Chaos::FParticleDynamicMisc::CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                  (this_03,pTVar7);
      }
      if ((*(byte *)((*(longlong **)((longlong)this + 8))[1] + 8) & 0x20) != 0) {
        lVar2 = **(longlong **)((longlong)this + 8);
        pFVar6 = Chaos::TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::WriteAccessImp<1>
                           (&param_1->MassProps,
                            (FFrameAndPhase)(*(uint *)(lVar2 + 0x4e0) & 0x3fffffff),
                            (FDirtyPropertiesPool *)(lVar2 + 0x18));
        Chaos::
        CopyDataFromObject<Chaos::FParticleMassProps,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                  (pFVar6,pTVar7);
      }
    }
  }
  return;
}

// operator() @ 1440d08a0

void __thiscall
`Chaos::FRewindData::RegisterEvolutionCallbacks'::__l2::<lambda_4>::operator()
          (void *this,TParticleView<Chaos::TPBDRigidParticles<double,3>_> *param_1)

{
  FRewindData *this_00;
  TParticleHandleBase<double,3>_u_0 *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  TParticleHandleBase<double,3>_u_0 this_01;
  int iVar6;
  int iVar7;
  int iStack_4c;
  undefined1 local_48 [24];
  int iStack_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  int local_20;
  
  this_00 = *(FRewindData **)this;
  Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48,
             (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
              *)param_1);
  if ((TPBDRigidParticles<double,3> *)local_48._16_8_ != (TPBDRigidParticles<double,3> *)0x0) {
    this_01 = (TParticleHandleBase<double,3>_u_0)local_48._16_8_;
    iVar6 = iStack_30;
    iVar7 = 0;
    do {
      Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48);
      pTVar5 = Chaos::TPBDRigidParticles<double,3>::Handle(this_01.PBDRigidParticles,iVar6);
      Chaos::FRewindData::PushPTDirtyData(this_00,pTVar5,iVar7);
      Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48);
      do {
        uVar3 = local_48._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_48._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          iVar6 = iVar6 + 1;
          iStack_30 = iVar6;
          if (local_24 <= iVar6) {
LAB_1440d0921:
            local_28 = local_28 + 1;
            Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48);
            this_01 = (TParticleHandleBase<double,3>_u_0)local_48._16_8_;
            iVar6 = iStack_30;
          }
        }
        else {
          iVar6 = local_20 + 1;
          local_20 = iVar6;
          if (*(int *)(local_48._8_8_ + 8) <= iVar6) goto LAB_1440d0921;
          if ((iVar6 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar1 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar3)->Data + (longlong)iVar6 * 8);
          this_01 = (TParticleHandleBase<double,3>_u_0)pTVar1->GeometryParticles;
          iVar6 = *(int *)(pTVar1 + 1);
          if ((TPBDRigidParticles<double,3> *)this_01.GeometryParticles ==
              (TPBDRigidParticles<double,3> *)0x0) {
            iStack_4c = (uint)iStack_4c._1_3_ << 8;
          }
          else {
            iStack_4c = CONCAT31(iStack_4c._1_3_,(this_01.GeometryParticles)->MParticleType);
          }
          uStack_2c = iStack_4c;
          iStack_30 = iVar6;
          local_48._16_8_ = this_01;
        }
        if ((TPBDRigidParticles<double,3> *)this_01.GeometryParticles ==
            (TPBDRigidParticles<double,3> *)0x0) {
          return;
        }
        Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48);
        bVar4 = Chaos::TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                          ((TGeometryParticleHandleImp<double,3,0> *)(local_48 + 0x10));
      } while (bVar4);
      iVar7 = iVar7 + 1;
    } while ((TPBDRigidParticles<double,3> *)this_01.GeometryParticles !=
             (TPBDRigidParticles<double,3> *)0x0);
  }
  return;
}

// AdvanceFrameImp @ 1440d3320

void __thiscall Chaos::FRewindData::AdvanceFrameImp(FRewindData *this,IResimCacheBase *param_1)

{
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_> *pTVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ForAnyElementType FVar7;
  FFrameAndPhase FVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  <lambda_5> local_res8 [8];
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_88;
  ForAnyElementType local_78;
  undefined8 local_70;
  <lambda_3> local_68;
  undefined1 local_58 [16];
  undefined8 local_48 [4];
  
  iVar3 = (this->Managers).Elements.ArrayNum;
  iVar6 = this->FramesSaved + 1;
  if (iVar6 < iVar3) {
    iVar3 = iVar6;
  }
  this->FramesSaved = iVar3;
  uVar4 = this->CurFrame;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.FrameAndPhase.Phase = 2;
  FVar8.Frame = uVar4;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_70 = CONCAT44(uVar4,uVar4 - iVar3) & 0x3fffffffffffffff | 0x8000000000000000;
  local_78.Data = (FScriptContainerElement *)this;
  if (((int)uVar4 < this->LatestFrame) && (param_1 != (IResimCacheBase *)0x0)) {
    uVar4 = (this->DirtyParticles).DenseVals.ArrayNum;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (0 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,&local_88.AllocatorInstance,0,&local_88.ArrayMax);
    }
  }
  local_58._0_8_ = &local_88;
  local_58[8] = param_1 != (IResimCacheBase *)0x0;
  local_68.__this = this;
  local_68.FrameAndPhase = FVar8;
  `Chaos::FRewindData::AdvanceFrameImp'::__l2::<lambda_1>::
  operator()<Chaos::TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>,_Chaos::FRewindData::AdvanceFrameImp_::__l2::<lambda_2>,_Chaos::FRewindData::AdvanceFrameImp_::__l2::<lambda_3>_>
            (&local_78,&this->DirtyParticles,(<lambda_2> *)local_58,&local_68);
  `Chaos::FRewindData::AdvanceFrameImp'::__l2::<lambda_1>::
  operator()<Chaos::TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>,_Chaos::FRewindData::AdvanceFrameImp_::__l2::<lambda_4>,_Chaos::FRewindData::AdvanceFrameImp_::__l2::<lambda_5>_>
            (&local_78,&this->DirtyJoints,(<lambda_4> *)local_res8,local_res8);
  if ((this->CurFrame < this->LatestFrame) && (param_1 != (IResimCacheBase *)0x0)) {
    pTVar1 = &param_1->DesyncedParticles;
    if (pTVar1 != &local_88) {
      pFVar9 = (pTVar1->AllocatorInstance).Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      (pTVar1->AllocatorInstance).Data = local_88.AllocatorInstance.Data;
      (param_1->DesyncedParticles).ArrayNum = local_88.ArrayNum;
      (param_1->DesyncedParticles).ArrayMax = local_88.ArrayMax;
      local_88.ArrayNum = 0;
      local_88.ArrayMax = 0;
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    local_58._0_8_ =
         (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70._0_4_ = 1;
    local_58._8_8_ = pTVar1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1,0,&local_78,1,(int *)((longlong)&local_70 + 4));
    uVar5 = local_70._4_4_;
    iVar3 = (int)local_70;
    FVar10.Data = local_78.Data;
    *(undefined8 *)local_78.Data = local_58._0_8_;
    *(undefined8 *)(local_78.Data + 8) = local_58._8_8_;
    pFVar11 = local_78.Data + (longlong)(int)local_70 * 0x10;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    FVar7.Data = FVar10.Data;
    pFVar9 = (FScriptContainerElement *)0x0;
    while (iVar6 = (int)pFVar9, FVar7.Data != pFVar11) {
      if (*(longlong *)(FVar7.Data + 8) == 0) {
        pFVar9 = (FScriptContainerElement *)
                 (ulonglong)(uint)(iVar6 + *(int *)(*(longlong *)FVar7.Data + 0x18));
        FVar7.Data = FVar7.Data + 0x10;
      }
      else {
        pFVar9 = (FScriptContainerElement *)
                 (ulonglong)(uint)(iVar6 + *(int *)(*(longlong *)(FVar7.Data + 8) + 8));
        FVar7.Data = FVar7.Data + 0x10;
      }
    }
    pTVar2 = &param_1->DesyncedView;
    if (pTVar2 != (TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_48) {
      if (*(void **)pTVar2 != (void *)0x0) {
        FMemory::Free(*(void **)pTVar2);
      }
      *(FScriptContainerElement **)pTVar2 = FVar10.Data;
      *(int *)&(param_1->DesyncedView).field_0x8 = iVar3;
      *(undefined4 *)&(param_1->DesyncedView).field_0xc = uVar5;
      FVar10.Data = (FScriptContainerElement *)0x0;
    }
    *(int *)&(param_1->DesyncedView).field_0x10 = iVar6;
    if (FVar10.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar10.Data);
    }
    if ((FRewindData *)local_78.Data != (FRewindData *)0x0) {
      FMemory::Free(local_78.Data);
    }
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// ApplyInputs @ 1440d35a0

void __thiscall Chaos::FRewindData::ApplyInputs(FRewindData *this,int param_1,bool param_2)

{
  int iVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  
  iVar1 = (this->InputHistories).ArrayNum;
  pFVar6 = (this->InputHistories).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x10;
  do {
    if ((this->InputHistories).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TWeakPtr<Chaos::FBaseRewindHistory,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar5) {
      return;
    }
    if (((*(longlong *)pFVar6 != 0) && (*(longlong *)(pFVar6 + 8) != 0)) &&
       (0 < *(int *)(*(longlong *)(pFVar6 + 8) + 8))) {
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
      plVar7 = (longlong *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = pTVar4->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            pTVar4 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1440d3631;
          }
          LOCK();
          aVar3 = pTVar4->SharedReferenceCount;
          bVar8 = aVar2 == aVar3;
          if (bVar8) {
            pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar3 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar3;
        } while (!bVar8);
        plVar7 = *(longlong **)pFVar6;
      }
LAB_1440d3631:
      (**(code **)(*plVar7 + 0xe0))(plVar7,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
    pFVar6 = pFVar6 + 0x10;
  } while( true );
}

// ApplyTargets @ 1440d3680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FRewindData::ApplyTargets(FRewindData *this,int param_1,bool param_2)

{
  char cVar1;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  FPBDRigidsEvolutionGBF *this_01;
  code *pcVar2;
  double dVar3;
  atomic<int> aVar4;
  EObjectStateType EVar5;
  atomic<int> aVar6;
  int iVar7;
  uint *puVar8;
  FTlsAutoCleanup *pFVar9;
  FParticlePositionRotation *pFVar10;
  FParticleVelocities *pFVar11;
  FParticleDynamicMisc *pFVar12;
  bool *pbVar13;
  FChaosVDThreadContext *this_02;
  ulonglong uVar14;
  EResimType EVar15;
  FFrameAndPhase FVar16;
  TReferenceControllerBase<1> *pTVar17;
  FScriptContainerElement *pFVar18;
  TGeometryParticleHandleImp<double,3,1> *pTVar19;
  FScriptContainerElement *pFVar20;
  longlong *plVar21;
  TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0> *this_03;
  bool bVar22;
  uint local_res8 [2];
  int local_res10;
  FScriptContainerElement *local_res20;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6 [14];
  FScriptContainerElement *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FString local_b8;
  code *local_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  double local_88;
  double local_80;
  double local_78;
  TStringView<wchar_t> local_68;
  undefined1 local_58 [16];
  double local_48;
  
  local_res10 = param_1;
  FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
            ((FChaosCVDScopedDataChannelOverride *)&local_res20,&CVDDC_Default);
  uStack_c0 = 0x14;
  local_c8 = (FScriptContainerElement *)0x150b4a570;
  local_68._12_4_ = uStack_bc;
  local_68.Size = 0x14;
  local_68.DataPtr = L"Rewind Apply Targets";
  FChaosVisualDebuggerTrace::TraceSolverStepStart(&local_68);
  iVar7 = (this->StateHistories).ArrayNum;
  pFVar20 = (this->StateHistories).AllocatorInstance.Data;
  pFVar18 = pFVar20 + (longlong)iVar7 * 0x10;
  do {
    if ((this->StateHistories).ArrayNum != iVar7) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<TWeakPtr<Chaos::FBaseRewindHistory,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar20 == pFVar18) {
      puVar8 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
      local_a0 = &local_d8;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar9 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a8,puVar8);
      if ((*(int *)(pFVar9 + 2) < 1) &&
         (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<3522308889972310308>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                              ,0x124,"IsInPhysicsThreadContext()"), bVar22)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res8[0] = (this->DirtyParticles).DenseVals.ArrayNum;
      uVar14 = (ulonglong)(int)local_res8[0];
      pFVar20 = (this->DirtyParticles).DenseVals.AllocatorInstance.Data;
      FVar16 = (FFrameAndPhase)(param_1 & 0x3fffffff);
      this_03 = (TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0> *)(pFVar20 + 0x100);
      local_c8 = pFVar20 + uVar14 * 0x1a0;
      while( true ) {
        pFVar18 = local_c8;
        local_res20 = pFVar20;
        if ((this->DirtyParticles).DenseVals.ArrayNum != (int)uVar14) {
          `TCheckedPointerIterator<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_d7);
        }
        if (pFVar20 == pFVar18) break;
        this_00 = *(TGeometryParticleHandleImp<double,3,1> **)(this_03 + 4);
        cVar1 = (char)this_03[4].Buffer.ArrayMax;
        iVar7 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0>::FindIdx
                          ((TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0> *)
                           (this_03 + -1),FVar16);
        if ((iVar7 != -1) && (cVar1 == '\0')) {
          pFVar10 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0>::Read
                              ((TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0> *)
                               (this_03 + -1),FVar16,&this->PropertiesPool);
          TGeometryParticleHandleImp<double,3,1>::SetXR(this_00,pFVar10);
        }
        pTVar19 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (*(char *)((longlong)&this_00->_padding_ + 4) != '\0') {
          pTVar19 = this_00;
        }
        iVar7 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0>::FindIdx(this_03,FVar16);
        if ((iVar7 != -1) && (cVar1 == '\0')) {
          pFVar11 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0>::Read
                              (this_03,FVar16,&this->PropertiesPool);
          local_88 = (double)*(float *)&pFVar11->MV;
          local_80 = (double)*(float *)&(pFVar11->MV).field_0x4;
          local_78 = (double)*(float *)&(pFVar11->MV).field_0x8;
          TKinematicGeometryParticlesImp<double,3,0>::SetV
                    ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar19->_padding_,
                     (int)pTVar19->_padding_,(TVector<double,3> *)&local_88);
          dVar3 = (double)(float)((ulonglong)*(undefined8 *)&pFVar11->MW >> 0x20);
          local_58._8_4_ = SUB84(dVar3,0);
          local_58._0_8_ = (double)(float)*(undefined8 *)&pFVar11->MW;
          local_58._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
          local_48 = (double)*(float *)&(pFVar11->MW).field_0x8;
          TKinematicGeometryParticlesImp<double,3,0>::SetW
                    ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar19->_padding_,
                     (int)pTVar19->_padding_,(TVector<double,3> *)local_58);
        }
        pTVar19 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&this_00->_padding_ + 4)) {
          pTVar19 = this_00;
        }
        iVar7 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0>::FindIdx
                          ((TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0> *)(this_03 + 1)
                           ,FVar16);
        if ((((iVar7 != -1) && (cVar1 == '\0')) &&
            (pFVar12 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0>::Read
                                 ((TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0> *)
                                  (this_03 + 1),FVar16,&this->PropertiesPool),
            pTVar19 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) &&
           ((this->Solver->MEvolution).Ptr != (FPBDRigidsEvolutionGBF *)0x0)) {
          bVar22 = pFVar12->bDisabled;
          pbVar13 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19);
          if (*pbVar13 != bVar22) {
            this_01 = (this->Solver->MEvolution).Ptr;
            if (pFVar12->bDisabled == false) {
              FPBDRigidsEvolutionBase::EnableParticle((FPBDRigidsEvolutionBase *)this_01,pTVar19);
            }
            else {
              FPBDRigidsEvolutionBase::DisableParticle((FPBDRigidsEvolutionBase *)this_01,pTVar19);
            }
          }
          EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                            ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19);
          if (EVar5 != pFVar12->MObjectState) {
            TPBDRigidParticleHandleImp<double,3,1>::SetInertiaConditioningDirty
                      ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19);
          }
          TPBDRigidParticleHandleImp<double,3,1>::SetDisabled
                    ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19,pFVar12->bDisabled);
          FPBDRigidsEvolutionBase::SetParticleObjectState
                    ((FPBDRigidsEvolutionBase *)(this->Solver->MEvolution).Ptr,
                     (TPBDRigidParticleHandleImp<double,3,1> *)pTVar19,pFVar12->MObjectState);
          if ((pFVar12->MObjectState == Sleeping) || (pFVar12->MObjectState == Dynamic)) {
            EVar15 = FullResim;
          }
          else {
            EVar15 = ResimAsFollower;
          }
          TGeometryParticleHandleImp<double,3,1>::SetResimType(pTVar19,EVar15);
        }
        FChaosVisualDebuggerTrace::TraceParticle(this_00);
        iVar7 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0>::FindIdx
                          ((TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0> *)
                           (this_03 + -1),FVar16);
        if (iVar7 != -1) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            FAutoConsoleVariableRef::FAutoConsoleVariableRef
                      (&`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
                        ::__l2::CVarDebugNetworkPhysicsPrediction,
                       L"np2.DebugNetworkPhysicsPrediction",
                       &`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
                        ::__l2::DebugNetworkPhysicsPrediction,L"Debugs network physics prediction",0
                      );
            atexit(`Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction'::__l2::
                   _dynamic_atexit_destructor_for__CVarDebugNetworkPhysicsPrediction__);
            _Init_thread_footer(&`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          if ((`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
               ::__l2::DebugNetworkPhysicsPrediction != 0) && (4 < (byte)LogChaos._0_1_)) {
            TParticles<double,3>::GetX
                      ((TParticles<double,3> *)this_00->_padding_,(int)this_00->_padding_);
            ::FString::PrintfImpl(&local_b8,L"X=%3.3f Y=%3.3f Z=%3.3f");
            TGeometryParticlesImp<double,3,0>::UniqueIdx
                      ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                       (int)this_00->_padding_);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
          }
        }
        pFVar20 = local_res20 + 0x1a0;
        uVar14 = (ulonglong)local_res8[0];
        this_03 = this_03 + 0xd;
      }
      FChaosVisualDebuggerTrace::TraceSolverStepEnd();
      puVar8 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
      local_90 = local_d6;
      local_98 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      this_02 = (FChaosVDThreadContext *)
                FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,puVar8);
      FChaosVDThreadContext::PopContext(this_02);
      return;
    }
    if (((*(longlong *)pFVar20 != 0) && (*(longlong *)(pFVar20 + 8) != 0)) &&
       (0 < *(int *)(*(longlong *)(pFVar20 + 8) + 8))) {
      pTVar17 = *(TReferenceControllerBase<1> **)(pFVar20 + 8);
      plVar21 = (longlong *)0x0;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        aVar4 = pTVar17->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar17 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1440d3750;
          }
          LOCK();
          aVar6 = pTVar17->SharedReferenceCount;
          bVar22 = aVar4 == aVar6;
          if (bVar22) {
            pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar6 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar6;
        } while (!bVar22);
        plVar21 = *(longlong **)pFVar20;
      }
LAB_1440d3750:
      (**(code **)(*plVar21 + 0xd8))(plVar21,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
    }
    pFVar20 = pFVar20 + 0x10;
  } while( true );
}

// BlockResim @ 1440d3df0

void __thiscall Chaos::FRewindData::BlockResim(FRewindData *this)

{
  if (this->BlockResimFrame < this->LatestFrame) {
    this->BlockResimFrame = this->LatestFrame;
  }
  return;
}

// BufferPhysicsResults @ 1440d4410

void __thiscall
Chaos::FRewindData::BufferPhysicsResults
          (FRewindData *this,
          TMap<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>_>
          *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TPairInitializer<IPhysicsProxyBase_const_*_const_&,Chaos::FDirtyRigidParticleReplicationErrorData_const_&>
  local_res18;
  FDirtyRigidParticleReplicationErrorData **local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  TReferenceControllerBase<1> *local_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  
  uVar8 = this->CurFrame + 1;
  if (uVar8 == this->LatestFrame) {
    iVar1 = (this->DirtyParticlePreResimState).DenseVals.ArrayNum;
    pFVar10 = (this->DirtyParticlePreResimState).DenseVals.AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)iVar1 * 0x40;
    while( true ) {
      if ((this->DirtyParticlePreResimState).DenseVals.ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<Chaos::FRewindData::FDirtyParticleErrorInfo,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar9) break;
      plVar2 = *(longlong **)pFVar10;
      if (plVar2 != (longlong *)0x0) {
        uVar7 = *(uint *)(plVar2 + 1);
        lVar3 = *plVar2;
        uVar6 = 0;
        if ((int)uVar7 < *(int *)(lVar3 + 0x208)) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (*(char *)((longlong)(int)uVar7 + *(longlong *)(lVar3 + 0x200)) != '\x01') {
          AccumulateErrorIfNecessary<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                    (this,*(TGeometryParticleHandleImp<double,3,1> **)pFVar10,
                     (FFrameAndPhase)(uVar8 & 0x3fffffff));
        }
      }
      pFVar10 = pFVar10 + 0x40;
    }
    iVar1 = (this->DirtyParticlePreResimState).DenseVals.ArrayMax;
    (this->DirtyParticlePreResimState).DenseVals.ArrayNum = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,0,&(this->DirtyParticlePreResimState).DenseVals.AllocatorInstance,0,
                 &(this->DirtyParticlePreResimState).DenseVals.ArrayMax);
    }
    TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
             *)&this->DirtyParticlePreResimState);
  }
  TSet<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>,FDefaultSetAllocator>
             *)param_1,(this->DirtyParticleErrors).DenseVals.ArrayNum);
  pFVar9 = (this->DirtyParticleErrors).DenseVals.AllocatorInstance.Data;
  iVar1 = (this->DirtyParticleErrors).DenseVals.ArrayNum;
  pFVar11 = pFVar9 + (longlong)iVar1 * 0x40;
  pFVar10 = pFVar9 + 0x20;
  while( true ) {
    if ((this->DirtyParticleErrors).DenseVals.ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::FRewindData::FDirtyParticleErrorInfo,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar11) break;
    local_70 = *(longlong *)(pFVar10 + -8);
    local_98 = 0;
    uStack_90 = 0;
    local_80 = *(longlong *)(pFVar10 + -0x18);
    lStack_78 = *(longlong *)(pFVar10 + -0x10);
    local_88 = (TReferenceControllerBase<1> *)0x0;
    local_58 = *(longlong *)(pFVar10 + 0x10);
    lStack_50 = *(longlong *)(pFVar10 + 0x18);
    local_68 = *(longlong *)pFVar10;
    lStack_60 = *(longlong *)(pFVar10 + 8);
    uVar8 = *(uint *)(*(longlong **)pFVar9 + 1);
    lVar3 = **(longlong **)pFVar9;
    uVar7 = 0;
    if ((int)uVar8 < *(int *)(lVar3 + 0xd0)) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_res18.Value =
         *(FDirtyRigidParticleReplicationErrorData **)
          (*(longlong *)(lVar3 + 200) + (longlong)(int)uVar8 * 8);
    if (local_res18.Value != (FDirtyRigidParticleReplicationErrorData *)0x0) {
      local_a8 = &local_res18.Value;
      local_a0 = &local_98;
      TSet<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<IPhysicsProxyBase_const_*_const_&,Chaos::FDirtyRigidParticleReplicationErrorData_const_&>_>
                ((TSet<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>,FDefaultSetAllocator>
                  *)param_1,&local_res18,(bool *)&local_a8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
    pFVar9 = pFVar9 + 0x40;
    pFVar10 = pFVar10 + 0x40;
  }
  iVar1 = (this->DirtyParticleErrors).DenseVals.ArrayMax;
  (this->DirtyParticleErrors).DenseVals.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&(this->DirtyParticleErrors).DenseVals.AllocatorInstance,0,
               &(this->DirtyParticleErrors).DenseVals.ArrayMax);
  }
  TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
           *)&this->DirtyParticleErrors);
  return;
}

// CacheCurrentDirtyData @ 1440d5c90

void __thiscall
Chaos::FRewindData::CacheCurrentDirtyData(FRewindData *this,EParticleHistoryPhase *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool local_res8 [8];
  
  if (this->bRewindDataOptimization != false) {
    pFVar2 = (this->DirtyParticles).DenseVals.AllocatorInstance.Data;
    iVar1 = (this->DirtyParticles).DenseVals.ArrayNum;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x1a0;
    while( true ) {
      if ((this->DirtyParticles).DenseVals.ArrayNum != iVar1) {
        `TCheckedPointerIterator<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar2 == pFVar3) break;
      if (*(TGeometryParticleHandleImp<double,3,1> **)(pFVar2 + 0x180) !=
          (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        local_res8[0] = false;
        CacheDirtyParticleData
                  (this,*(TGeometryParticleHandleImp<double,3,1> **)(pFVar2 + 0x180),param_1,
                   local_res8);
      }
      pFVar2 = pFVar2 + 0x1a0;
    }
    iVar1 = (this->DirtyJoints).DenseVals.ArrayNum;
    pFVar2 = (this->DirtyJoints).DenseVals.AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x60;
    while( true ) {
      if ((this->DirtyJoints).DenseVals.ArrayNum != iVar1) {
        `TCheckedPointerIterator<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar2 == pFVar3) break;
      if (*(FPBDJointConstraintHandle **)(pFVar2 + 0x40) != (FPBDJointConstraintHandle *)0x0) {
        local_res8[0] = false;
        CacheDirtyJointData(this,*(FPBDJointConstraintHandle **)(pFVar2 + 0x40),param_1,local_res8);
      }
      pFVar2 = pFVar2 + 0x60;
    }
  }
  return;
}

// CacheDirtyJointData @ 1440d5d90

void __thiscall
Chaos::FRewindData::CacheDirtyJointData
          (FRewindData *this,FPBDJointConstraintHandle *param_1,EParticleHistoryPhase *param_2,
          bool *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ESyncState EVar3;
  int iVar4;
  TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *this_00;
  FPBDJointSettings *pFVar5;
  FPBDJointSettings *pFVar6;
  FPBDJointSettings *pFVar7;
  longlong lVar8;
  EParticleHistoryPhase EVar9;
  FFrameAndPhase FVar10;
  FPBDJointSettings *pFVar11;
  
  this_00 = FindOrAddDirtyObj(this,param_1,-1);
  if (*param_3 != false) {
    this_00->LastDirtyFrame = this->CurFrame;
  }
  uVar1 = this->CurFrame;
  if ((this_00->InitializedOnStep <= (int)uVar1) &&
     ((this_00->InitializedOnStep != uVar1 || (PostPushData < *param_2)))) {
    if (this->bRewindDataOptimization == false) {
      EVar9 = *param_2;
    }
    else {
      EVar9 = PrePushData;
    }
    FVar10 = (FFrameAndPhase)((uint)EVar9 << 0x1e | uVar1 & 0x3fffffff);
    if ((int)uVar1 < this->LatestFrame) {
      if (this_00->bResimAsFollower == false) {
        DesyncIfNecessary<0,Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
                  (this,this_00,FVar10);
      }
      EVar3 = FPBDJointConstraintHandle::SyncState(param_1);
      if (EVar3 == InSync) {
        return;
      }
    }
    if ((((this->LatestFrame <= this->CurFrame) ||
         (EVar3 = FPBDJointConstraintHandle::SyncState(param_1), EVar3 != InSync)) ||
        (iVar4 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::FindIdx
                           ((TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1> *)this_00,FVar10)
        , iVar4 == -1)) &&
       (pFVar5 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::WriteAccessImp<0>
                           ((TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1> *)this_00,FVar10,
                            &this->PropertiesPool), pFVar5 != (FPBDJointSettings *)0x0)) {
      pFVar6 = FPBDJointConstraintHandle::GetSettings(param_1);
      lVar8 = 6;
      do {
        pFVar11 = pFVar5;
        pFVar7 = pFVar6;
        pFVar5 = (FPBDJointSettings *)&(pFVar11->ConnectorTransforms).V[1].field_0x20;
        uVar2 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x8;
        pFVar6 = (FPBDJointSettings *)&(pFVar7->ConnectorTransforms).V[1].field_0x20;
        *(undefined8 *)(pFVar11->ConnectorTransforms).V =
             *(undefined8 *)(pFVar7->ConnectorTransforms).V;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x8 = uVar2;
        uVar2 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x18;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x10 =
             *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x10;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x18 = uVar2;
        uVar2 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x28;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x20 =
             *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x20;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x28 = uVar2;
        uVar2 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x38;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x30 =
             *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x30;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x38 = uVar2;
        uVar2 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x48;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x40 =
             *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x40;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x48 = uVar2;
        uVar2 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x58;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x50 =
             *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x50;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x58 = uVar2;
        uVar2 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[1].field_0x8;
        *(undefined8 *)((pFVar11->ConnectorTransforms).V + 1) =
             *(undefined8 *)((pFVar7->ConnectorTransforms).V + 1);
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x8 = uVar2;
        uVar2 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[1].field_0x18;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x10 =
             *(undefined8 *)&(pFVar7->ConnectorTransforms).V[1].field_0x10;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x18 = uVar2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      uVar2 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[1].field_0x28;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar6;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x28 = uVar2;
      uVar2 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[1].field_0x38;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x30 =
           *(undefined8 *)&(pFVar7->ConnectorTransforms).V[1].field_0x30;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x38 = uVar2;
    }
  }
  return;
}

// CacheDirtyParticleData @ 1440d5f30

void __thiscall
Chaos::FRewindData::CacheDirtyParticleData
          (FRewindData *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          EParticleHistoryPhase *param_2,bool *param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  undefined8 uVar4;
  EObjectStateType EVar5;
  int iVar6;
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  *pTVar7;
  ESyncState *pEVar8;
  FParticleNonFrequentData *this_00;
  FParticleVelocities *this_01;
  TVector<double,3> *pTVar9;
  FKinematicTarget *pFVar10;
  FKinematicTarget *pFVar11;
  FParticleDynamics *this_02;
  FParticleDynamicMisc *this_03;
  FParticleMassProps *pFVar12;
  EParticleHistoryPhase EVar13;
  FFrameAndPhase FVar14;
  TGeometryParticleHandleImp<double,3,1> *pTVar15;
  bool local_res8 [8];
  TGeometryParticleHandleImp<double,3,1> *local_res20;
  FRewindData *local_58;
  FFrameAndPhase local_50;
  <lambda_2> local_48;
  
  pTVar7 = FindOrAddDirtyObj(this,param_1,-1);
  if (*param_3 != false) {
    pTVar7->LastDirtyFrame = this->CurFrame;
  }
  uVar3 = this->CurFrame;
  if ((pTVar7->InitializedOnStep <= (int)uVar3) &&
     ((pTVar7->InitializedOnStep != uVar3 || (PostPushData < *param_2)))) {
    if (this->bRewindDataOptimization == false) {
      EVar13 = *param_2;
    }
    else {
      EVar13 = PrePushData;
    }
    local_50.Phase = (uint)EVar13;
    FVar14.Frame = uVar3;
    if ((int)uVar3 < this->LatestFrame) {
      if (pTVar7->bResimAsFollower == false) {
        DesyncIfNecessary<0,Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
                  (this,pTVar7,FVar14);
      }
      pEVar8 = TGeometryParticlesImp<double,3,0>::SyncState
                         ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                          (int)param_1->_padding_);
      if (*pEVar8 == InSync) {
        return;
      }
    }
    if ((this->bRewindDataOptimization == false) || (*param_2 != PostCallbacks)) {
      local_res8[0] = false;
    }
    else {
      local_res8[0] = true;
    }
    local_res20 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    pTVar15 = local_res20;
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      pTVar15 = param_1;
    }
    if ((pTVar15 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
       (1 < *(byte *)((longlong)&pTVar15->_padding_ + 4))) {
      local_res20 = pTVar15;
    }
    local_48.bCachePreFromPost = local_res8;
    local_48.RigidParticle = (TPBDRigidParticleHandleImp<double,3,1> **)&local_res20;
    local_58 = this;
    local_50 = FVar14;
    local_48.__this = this;
    `Chaos::FRewindData::CacheDirtyParticleData'::__l2::<lambda_1>::
    operator()<Chaos::TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>,Chaos::TGeometryParticleHandleImp<double,3,1>,_Chaos::FRewindData::CacheDirtyParticleData_::__l2::<lambda_2>_>
              (&local_58,(TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *)pTVar7,
               param_1,&local_48);
    if ((((this->LatestFrame <= this->CurFrame) ||
         (pEVar8 = TGeometryParticlesImp<double,3,0>::SyncState
                             ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                              (int)param_1->_padding_), *pEVar8 != InSync)) ||
        (iVar6 = TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::FindIdx
                           (&(pTVar7->History).NonFrequentData,FVar14), iVar6 == -1)) &&
       (this_00 = TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::WriteAccessImp<0>
                            (&(pTVar7->History).NonFrequentData,FVar14,&this->PropertiesPool),
       this_00 != (FParticleNonFrequentData *)0x0)) {
      FParticleNonFrequentData::CopyFrom<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                (this_00,param_1);
    }
    if (pTVar15 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if ((((this->LatestFrame <= this->CurFrame) ||
           (pEVar8 = TGeometryParticlesImp<double,3,0>::SyncState
                               ((TGeometryParticlesImp<double,3,0> *)pTVar15->_padding_,
                                (int)pTVar15->_padding_), *pEVar8 != InSync)) ||
          (iVar6 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::FindIdx
                             (&(pTVar7->History).Velocities,FVar14), iVar6 == -1)) &&
         (this_01 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::WriteAccessImp<0>
                              (&(pTVar7->History).Velocities,FVar14,&this->PropertiesPool),
         this_01 != (FParticleVelocities *)0x0)) {
        if ((local_res8[0] == false) ||
           (local_res20 == (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
          FParticleVelocities::CopyFrom<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
                    (this_01,(TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar15);
        }
        else {
          pTVar9 = TPBDRigidParticleHandleImp<double,3,1>::GetPreV
                             ((TPBDRigidParticleHandleImp<double,3,1> *)local_res20,
                              (TVector<double,3> *)&local_48);
          dVar1 = *(double *)&pTVar9->field_0x8;
          dVar2 = *(double *)&pTVar9->field_0x10;
          *(float *)&this_01->MV = (float)*(double *)pTVar9;
          *(float *)&(this_01->MV).field_0x4 = (float)dVar1;
          *(float *)&(this_01->MV).field_0x8 = (float)dVar2;
          pTVar9 = TPBDRigidParticleHandleImp<double,3,1>::GetPreW
                             ((TPBDRigidParticleHandleImp<double,3,1> *)local_res20,
                              (TVector<double,3> *)&local_48);
          dVar1 = *(double *)&pTVar9->field_0x8;
          dVar2 = *(double *)&pTVar9->field_0x10;
          *(float *)&this_01->MW = (float)*(double *)pTVar9;
          *(float *)&(this_01->MW).field_0x4 = (float)dVar1;
          *(float *)&(this_01->MW).field_0x8 = (float)dVar2;
        }
      }
      if (((this->bRewindDataOptimization == false) &&
          (((this->LatestFrame <= this->CurFrame ||
            (pEVar8 = TGeometryParticlesImp<double,3,0>::SyncState
                                ((TGeometryParticlesImp<double,3,0> *)pTVar15->_padding_,
                                 (int)pTVar15->_padding_), *pEVar8 != InSync)) ||
           (iVar6 = TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::FindIdx
                              (&(pTVar7->History).KinematicTarget,FVar14), iVar6 == -1)))) &&
         (pFVar10 = TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::WriteAccessImp<0>
                              (&(pTVar7->History).KinematicTarget,FVar14,&this->PropertiesPool),
         pFVar10 != (FKinematicTarget *)0x0)) {
        pFVar11 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                            ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar15->_padding_,
                             (int)pTVar15->_padding_);
        uVar4 = *(undefined8 *)&(pFVar11->Position).field_0x8;
        *(undefined8 *)&pFVar10->Position = *(undefined8 *)&pFVar11->Position;
        *(undefined8 *)&(pFVar10->Position).field_0x8 = uVar4;
        *(undefined8 *)&(pFVar10->Position).field_0x10 =
             *(undefined8 *)&(pFVar11->Position).field_0x10;
        pFVar11 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                            ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar15->_padding_,
                             (int)pTVar15->_padding_);
        uVar4 = *(undefined8 *)&(pFVar11->Rotation).field_0x8;
        *(undefined8 *)&pFVar10->Rotation = *(undefined8 *)&pFVar11->Rotation;
        *(undefined8 *)&(pFVar10->Rotation).field_0x8 = uVar4;
        pFVar11 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                            ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar15->_padding_,
                             (int)pTVar15->_padding_);
        pFVar10->Mode = pFVar11->Mode;
      }
      pTVar15 = local_res20;
      if (local_res20 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        if ((0x3fffffff < (uint)FVar14) &&
           ((((this->LatestFrame <= this->CurFrame ||
              (pEVar8 = TGeometryParticlesImp<double,3,0>::SyncState
                                  ((TGeometryParticlesImp<double,3,0> *)local_res20->_padding_,
                                   (int)local_res20->_padding_), *pEVar8 != InSync)) ||
             (iVar6 = TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::FindIdx
                                (&(pTVar7->History).Dynamics,FVar14), iVar6 == -1)) &&
            (this_02 = TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::WriteAccessImp<0>
                                 (&(pTVar7->History).Dynamics,FVar14,&this->PropertiesPool),
            this_02 != (FParticleDynamics *)0x0)))) {
          FParticleDynamics::CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                    (this_02,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar15);
        }
        pTVar15 = local_res20;
        if ((((this->LatestFrame <= this->CurFrame) ||
             (pEVar8 = TGeometryParticlesImp<double,3,0>::SyncState
                                 ((TGeometryParticlesImp<double,3,0> *)local_res20->_padding_,
                                  (int)local_res20->_padding_), *pEVar8 != InSync)) ||
            (iVar6 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::FindIdx
                               (&(pTVar7->History).DynamicsMisc,FVar14), iVar6 == -1)) &&
           ((this_03 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::WriteAccessImp<0>
                                 (&(pTVar7->History).DynamicsMisc,FVar14,&this->PropertiesPool),
            this_03 != (FParticleDynamicMisc *)0x0 &&
            (FParticleDynamicMisc::CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                       (this_03,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar15),
            local_res8[0] != false)))) {
          EVar5 = TPBDRigidParticleHandleImp<double,3,1>::PreObjectState
                            ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar15);
          this_03->MObjectState = EVar5;
        }
        pTVar15 = local_res20;
        if ((((this->LatestFrame <= this->CurFrame) ||
             (pEVar8 = TGeometryParticlesImp<double,3,0>::SyncState
                                 ((TGeometryParticlesImp<double,3,0> *)local_res20->_padding_,
                                  (int)local_res20->_padding_), *pEVar8 != InSync)) ||
            (iVar6 = TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::FindIdx
                               (&(pTVar7->History).MassProps,FVar14), iVar6 == -1)) &&
           (pFVar12 = TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::WriteAccessImp<0>
                                (&(pTVar7->History).MassProps,FVar14,&this->PropertiesPool),
           pFVar12 != (FParticleMassProps *)0x0)) {
          CopyDataFromObject<Chaos::FParticleMassProps,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                    (pFVar12,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar15);
        }
      }
    }
  }
  return;
}

// CacheKinematicTarget @ 1440d6390

void __thiscall
Chaos::FRewindData::CacheKinematicTarget
          (FRewindData *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  FKinematicTarget *pFVar1;
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  *pTVar2;
  ESyncState *pEVar3;
  FFrameAndPhase FVar4;
  TKinematicGeometryParticleHandleImp<double,3,1> *pTVar5;
  
  if (this->bRewindDataOptimization != false) {
    pTVar5 = (TKinematicGeometryParticleHandleImp<double,3,1> *)0x0;
    if (param_1->field_0xc != '\0') {
      pTVar5 = (TKinematicGeometryParticleHandleImp<double,3,1> *)param_1;
    }
    if ((pTVar5 != (TKinematicGeometryParticleHandleImp<double,3,1> *)0x0) &&
       (pFVar1 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                           (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar5,
                            *(int *)&pTVar5->field_0x8), pFVar1->Mode != None)) {
      FVar4 = (FFrameAndPhase)(this->CurFrame & 0x3fffffff);
      pTVar2 = FindOrAddDirtyObj(this,(TGeometryParticleHandleImp<double,3,1> *)param_1,-1);
      pTVar2->LastDirtyFrame = this->CurFrame;
      if (this->CurFrame < this->LatestFrame) {
        if (pTVar2->bResimAsFollower == false) {
          DesyncIfNecessary<0,Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
                    (this,pTVar2,FVar4);
        }
        pEVar3 = TGeometryParticlesImp<double,3,0>::SyncState
                           (*(TGeometryParticlesImp<double,3,0> **)pTVar5,*(int *)&pTVar5->field_0x8
                           );
        if (*pEVar3 == InSync) {
          return;
        }
      }
      if (((this->LatestFrame <= this->CurFrame) ||
          (pEVar3 = TGeometryParticlesImp<double,3,0>::SyncState
                              (*(TGeometryParticlesImp<double,3,0> **)param_1,
                               *(int *)&param_1->field_0x8), *pEVar3 != InSync)) &&
         (pFVar1 = TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::WriteAccessImp<0>
                             (&(pTVar2->History).KinematicTarget,FVar4,&this->PropertiesPool),
         pFVar1 != (FKinematicTarget *)0x0)) {
        CopyDataFromObject<Chaos::FKinematicTarget,Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
                  (pFVar1,pTVar5);
      }
    }
  }
  return;
}

// CachePreResimState @ 1440d64b0

void __thiscall
Chaos::FRewindData::CachePreResimState
          (FRewindData *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  ulonglong uVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  undefined8 uVar3;
  double dVar4;
  atomic<int> aVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  FGeometryCollectionPhysicsProxy *this_00;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  FRewindData *pFVar27;
  longlong *plVar28;
  bool bVar29;
  uint uVar30;
  IPhysicsProxyBase *pIVar31;
  FDirtyParticleErrorInfo *pFVar32;
  TVector<double,3> *pTVar33;
  TGeometryParticleHandleImp<double,3,1> *pTVar34;
  TRotation<double,3> *pTVar35;
  longlong lVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  longlong lVar40;
  TBitArray<FDefaultBitArrayAllocator> *pTVar41;
  longlong *plVar42;
  undefined1 local_res18 [8];
  int local_res20;
  FRewindData *local_238 [2];
  longlong *local_228;
  int iStack_220;
  uint uStack_21c;
  TBitArray<FDefaultBitArrayAllocator> *local_218;
  undefined4 uStack_210;
  int iStack_20c;
  int local_208;
  undefined4 uStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  int local_1f8;
  longlong *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  undefined8 uStack_1c8;
  FDirtyParticleErrorInfo local_1b8;
  FDirtyParticleErrorInfo local_178;
  FDirtyParticleErrorInfo local_138;
  undefined4 local_dc;
  TRotation<double,3> local_d8 [5];
  
  pIVar31 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(param_1);
  if (pIVar31 != (IPhysicsProxyBase *)0x0) {
    local_238[0] = this;
    pFVar32 = TDirtyObjects<Chaos::FRewindData::FDirtyParticleErrorInfo>::Find
                        (&this->DirtyParticlePreResimState,param_1);
    if (pFVar32 == (FDirtyParticleErrorInfo *)0x0) {
      local_1b8.ErrorX._0_8_ = 0;
      local_1b8.ErrorX._8_8_ = 0;
      local_1b8.ErrorX._16_8_ = 0;
      local_1b8.ErrorR.Z = UE::Math::TQuat<double>::Identity.Z;
      local_1b8.ErrorR.W = UE::Math::TQuat<double>::Identity.W;
      local_1b8.ErrorR.X = UE::Math::TQuat<double>::Identity.X;
      local_1b8.ErrorR.Y = UE::Math::TQuat<double>::Identity.Y;
      local_1b8.HandlePtr = param_1;
      pFVar32 = TDirtyObjects<Chaos::FRewindData::FDirtyParticleErrorInfo>::Add
                          (&this->DirtyParticlePreResimState,param_1,&local_1b8);
    }
    uVar39 = (uint)param_1->_padding_;
    lVar40 = (longlong)(int)uVar39;
    lVar36 = param_1->_padding_;
    uVar38 = 0;
    if ((int)uVar39 < *(int *)(lVar36 + 0x50)) {
      uVar38 = ~uVar39 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar29)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar36 = *(longlong *)(lVar36 + 0x48);
    uVar3 = *(undefined8 *)(lVar36 + 8 + lVar40 * 0x10);
    dVar18 = (double)*(float *)(lVar36 + lVar40 * 0x10);
    dVar20 = (double)*(float *)(lVar36 + 4 + lVar40 * 0x10);
    pTVar33 = TParticles<double,3>::GetX
                        ((TParticles<double,3> *)param_1->_padding_,(int)param_1->_padding_);
    local_218 = *(TBitArray<FDefaultBitArrayAllocator> **)&pTVar33->field_0x10;
    dVar13 = *(double *)&pTVar33->field_0x8;
    dVar21 = (double)(float)uVar3;
    dVar22 = (double)(float)((ulonglong)uVar3 >> 0x20);
    dVar4 = *(double *)&(pFVar32->ErrorX).field_0x10;
    *(double *)&pFVar32->ErrorX = *(double *)pTVar33 + *(double *)&pFVar32->ErrorX;
    *(double *)&(pFVar32->ErrorX).field_0x8 = dVar13 + *(double *)&(pFVar32->ErrorX).field_0x8;
    *(double *)&(pFVar32->ErrorX).field_0x10 = (double)local_218 + dVar4;
    dVar23 = (pFVar32->ErrorR).X;
    dVar24 = (pFVar32->ErrorR).Y;
    dVar25 = (pFVar32->ErrorR).Z;
    dVar26 = (pFVar32->ErrorR).W;
    dVar4 = dVar23 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            dVar18 * dVar26 +
            dVar21 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            dVar25 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar13 = dVar23 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar20 * dVar26 +
             dVar22 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar25 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar19 = dVar23 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar21 * dVar26 +
             dVar18 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar25 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar18 = dVar23 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar22 * dVar26 +
             dVar20 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar25 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar12._8_4_ = SUB84(dVar13,0);
    auVar12._0_8_ = dVar4;
    auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    (pFVar32->ErrorR).X = dVar4;
    (pFVar32->ErrorR).Y = (double)auVar12._8_8_;
    auVar17._8_4_ = SUB84(dVar18,0);
    auVar17._0_8_ = dVar19;
    auVar17._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    (pFVar32->ErrorR).Z = dVar19;
    (pFVar32->ErrorR).W = (double)auVar17._8_8_;
    if (pIVar31->Type == ClusterUnionProxy) {
      pTVar7 = pIVar31[5].SyncTimestamp.SharedReferenceCount.ReferenceController;
      aVar5 = pTVar7->SharedReferenceCount;
      lVar36 = pTVar7->_padding_;
      uVar39 = 0;
      if ((int)aVar5 < *(int *)(lVar36 + 0x628)) {
        uVar39 = ~(uint)aVar5 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar29)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iStack_220 = 0;
      plVar42 = (longlong *)((longlong)(int)aVar5 * 0x50 + *(longlong *)(lVar36 + 0x620));
      local_208 = 0;
      iVar6 = (int)plVar42[5];
      pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar42 + 2);
      uStack_21c = 1;
      iStack_20c = 0;
      if (iVar6 != 0) {
        pTVar41 = (TBitArray<FDefaultBitArrayAllocator> *)plVar42[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar42[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar41 = pTVar2;
        }
        uVar39 = *(uint *)(pTVar41->AllocatorInstance).InlineData;
        while (uVar39 == 0) {
          lVar36 = (longlong)iStack_220;
          local_208 = local_208 + 0x20;
          iStack_220 = iStack_220 + 1;
          iStack_20c = iVar6;
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_220)
          goto LAB_1440d6800;
          uVar39 = *(uint *)((pTVar41->AllocatorInstance).InlineData + lVar36 * 4 + 4);
        }
        uStack_21c = -uVar39 & uVar39;
        uVar1 = (ulonglong)uStack_21c * 2 + 1;
        lVar36 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        local_res20 = (int)lVar36;
        iStack_20c = local_208 + -1 + local_res20;
        if (iVar6 < iStack_20c) {
          iStack_20c = iVar6;
        }
      }
LAB_1440d6800:
      uVar39 = *(uint *)(plVar42 + 5);
      uStack_204 = local_dc;
      uVar38 = uVar39 & 0xffffffe0;
      iStack_200 = (int)plVar42[1] - *(int *)((longlong)plVar42 + 0x34);
      uStack_210 = 0xffffffff;
      TStack_1e8._padding_ = CONCAT44(uStack_21c,iStack_220);
      TStack_1e8.CurrentBitIndex = iStack_20c;
      TStack_1e8.UnvisitedBitMask = 0xffffffff;
      iVar37 = (int)uVar39 >> 5;
      TStack_1e8._28_4_ = local_dc;
      TStack_1e8.BaseBitIndex = local_208;
      uStack_1c8 = CONCAT44(uStack_1fc,iStack_200);
      local_228 = plVar42;
      local_218 = pTVar2;
      local_1f0 = plVar42;
      TStack_1e8.Array = pTVar2;
      if ((((int)uVar39 < 0) || (iVar6 < (int)uVar39)) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar29)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar30 = *(uint *)(plVar42 + 5);
      if (uVar39 != uVar30) {
        pTVar41 = (TBitArray<FDefaultBitArrayAllocator> *)plVar42[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar42[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar41 = pTVar2;
        }
        uVar39 = -1 << ((byte)uVar39 & 0x1f) &
                 *(uint *)((pTVar41->AllocatorInstance).InlineData + (longlong)iVar37 * 4);
        while (uVar39 == 0) {
          lVar36 = (longlong)iVar37;
          uVar38 = uVar38 + 0x20;
          iVar37 = iVar37 + 1;
          uVar39 = uVar30;
          if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar37)
          goto LAB_1440d6920;
          uVar39 = *(uint *)((pTVar41->AllocatorInstance).InlineData + lVar36 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar39 & uVar39) * 2 + 1;
        lVar36 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        local_1f8 = (int)lVar36;
        uVar39 = local_1f8 + -1 + uVar38;
        if ((int)uVar30 < (int)uVar39) {
          uVar39 = uVar30;
        }
      }
LAB_1440d6920:
      while( true ) {
        plVar28 = local_1f0;
        if ((int)local_1f0[1] - *(int *)((longlong)local_1f0 + 0x34) != (int)uStack_1c8) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        pFVar27 = local_238[0];
        if (((TStack_1e8.CurrentBitIndex == uVar39) && (TStack_1e8.Array == pTVar2)) &&
           (plVar28 == plVar42)) break;
        this_00 = *(FGeometryCollectionPhysicsProxy **)
                   (*plVar28 + (longlong)TStack_1e8.CurrentBitIndex * 0x10);
        iVar6 = *(int *)&this_00->field_0x1c;
        if (iVar6 == 2) {
          pTVar34 = (TGeometryParticleHandleImp<double,3,1> *)
                    FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                              (this_00,(this_00->Parameters).InitialRootIndex);
          if (pTVar34 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            pFVar32 = `Chaos::FRewindData::CachePreResimState'::__l2::<lambda_1>::operator()
                                (local_238,pTVar34);
            pTVar35 = TGeometryParticleHandleImp<double,3,1>::GetR(pTVar34,local_d8);
            dVar19 = *(double *)pTVar35;
            dVar20 = *(double *)&pTVar35->field_0x8;
            dVar21 = *(double *)&pTVar35->field_0x10;
            dVar22 = *(double *)&pTVar35->field_0x18;
            pTVar33 = TParticles<double,3>::GetX
                                ((TParticles<double,3> *)pTVar34->_padding_,(int)pTVar34->_padding_)
            ;
            local_218 = *(TBitArray<FDefaultBitArrayAllocator> **)&pTVar33->field_0x10;
            dVar13 = *(double *)pTVar33;
            dVar18 = *(double *)&pTVar33->field_0x8;
            dVar4 = *(double *)&pFVar32->ErrorX;
            *(double *)&(pFVar32->ErrorX).field_0x10 =
                 (double)local_218 + *(double *)&(pFVar32->ErrorX).field_0x10;
            *(double *)&pFVar32->ErrorX = dVar13 + dVar4;
            *(double *)&(pFVar32->ErrorX).field_0x8 =
                 dVar18 + *(double *)&(pFVar32->ErrorX).field_0x8;
            dVar23 = (pFVar32->ErrorR).X;
            dVar24 = (pFVar32->ErrorR).Y;
            dVar25 = (pFVar32->ErrorR).Z;
            dVar26 = (pFVar32->ErrorR).W;
            dVar4 = dVar23 * dVar22 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                    dVar26 * dVar19 +
                    dVar24 * dVar21 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    dVar25 * dVar20 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            dVar13 = dVar23 * dVar21 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     dVar26 * dVar20 +
                     dVar24 * dVar22 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     dVar25 * dVar19 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            dVar18 = dVar23 * dVar20 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     dVar26 * dVar21 +
                     dVar24 * dVar19 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     dVar25 * dVar22 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar19 = dVar23 * dVar19 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     dVar26 * dVar22 +
                     dVar24 * dVar20 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     dVar25 * dVar21 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            auVar11._8_4_ = SUB84(dVar13,0);
            auVar11._0_8_ = dVar4;
            auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
            (pFVar32->ErrorR).X = dVar4;
            (pFVar32->ErrorR).Y = (double)auVar11._8_8_;
            auVar16._8_4_ = SUB84(dVar19,0);
            auVar16._0_8_ = dVar18;
            auVar16._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
            (pFVar32->ErrorR).Z = dVar18;
            (pFVar32->ErrorR).W = (double)auVar16._8_8_;
          }
        }
        else if (iVar6 == 0xb) {
          pTVar34 = *(TGeometryParticleHandleImp<double,3,1> **)
                     &(this_00->Parameters).Name.Data.ArrayNum;
          if (pTVar34 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            pFVar32 = TDirtyObjects<Chaos::FRewindData::FDirtyParticleErrorInfo>::Find
                                (&local_238[0]->DirtyParticlePreResimState,pTVar34);
            if (pFVar32 == (FDirtyParticleErrorInfo *)0x0) {
              local_138.ErrorX._0_8_ = 0;
              local_138.ErrorX._8_8_ = 0;
              local_138.ErrorX._16_8_ = 0;
              local_138.ErrorR.Z = UE::Math::TQuat<double>::Identity.Z;
              local_138.ErrorR.W = UE::Math::TQuat<double>::Identity.W;
              local_138.ErrorR.X = UE::Math::TQuat<double>::Identity.X;
              local_138.ErrorR.Y = UE::Math::TQuat<double>::Identity.Y;
              local_138.HandlePtr = pTVar34;
              pFVar32 = TDirtyObjects<Chaos::FRewindData::FDirtyParticleErrorInfo>::Add
                                  (&pFVar27->DirtyParticlePreResimState,pTVar34,&local_138);
            }
            uVar38 = (uint)pTVar34->_padding_;
            lVar40 = (longlong)(int)uVar38;
            lVar36 = pTVar34->_padding_;
            uVar30 = 0;
            if ((int)uVar38 < *(int *)(lVar36 + 0x50)) {
              uVar30 = ~uVar38 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar36 = *(longlong *)(lVar36 + 0x48);
            uVar3 = *(undefined8 *)(lVar36 + 8 + lVar40 * 0x10);
            dVar19 = (double)*(float *)(lVar36 + lVar40 * 0x10);
            dVar20 = (double)*(float *)(lVar36 + 4 + lVar40 * 0x10);
            pTVar33 = TParticles<double,3>::GetX
                                ((TParticles<double,3> *)pTVar34->_padding_,(int)pTVar34->_padding_)
            ;
            local_218 = *(TBitArray<FDefaultBitArrayAllocator> **)&pTVar33->field_0x10;
            dVar13 = *(double *)pTVar33;
            dVar18 = *(double *)&pTVar33->field_0x8;
            dVar4 = *(double *)&pFVar32->ErrorX;
            *(double *)&(pFVar32->ErrorX).field_0x10 =
                 (double)local_218 + *(double *)&(pFVar32->ErrorX).field_0x10;
            dVar21 = (double)(float)uVar3;
            dVar22 = (double)(float)((ulonglong)uVar3 >> 0x20);
            *(double *)&pFVar32->ErrorX = dVar13 + dVar4;
            *(double *)&(pFVar32->ErrorX).field_0x8 =
                 dVar18 + *(double *)&(pFVar32->ErrorX).field_0x8;
            dVar23 = (pFVar32->ErrorR).X;
            dVar24 = (pFVar32->ErrorR).Y;
            dVar25 = (pFVar32->ErrorR).Z;
            dVar26 = (pFVar32->ErrorR).W;
            dVar4 = dVar23 * dVar22 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                    dVar26 * dVar19 +
                    dVar21 * dVar24 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    dVar25 * dVar20 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            dVar13 = dVar23 * dVar21 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     dVar26 * dVar20 +
                     dVar22 * dVar24 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     dVar25 * dVar19 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            dVar18 = dVar23 * dVar20 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     dVar21 * dVar26 +
                     dVar24 * dVar19 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     dVar25 * dVar22 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar19 = dVar23 * dVar19 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     dVar22 * dVar26 +
                     dVar24 * dVar20 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     dVar25 * dVar21 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            auVar10._8_4_ = SUB84(dVar13,0);
            auVar10._0_8_ = dVar4;
            auVar10._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
            (pFVar32->ErrorR).X = dVar4;
            (pFVar32->ErrorR).Y = (double)auVar10._8_8_;
            auVar15._8_4_ = SUB84(dVar19,0);
            auVar15._0_8_ = dVar18;
            auVar15._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
            (pFVar32->ErrorR).Z = dVar18;
            (pFVar32->ErrorR).W = (double)auVar15._8_8_;
          }
        }
        else if ((iVar6 == 0xc) &&
                (pTVar34 = *(TGeometryParticleHandleImp<double,3,1> **)
                            &(this_00->Parameters).InitializationCommands.ArrayNum,
                pTVar34 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
          pFVar32 = TDirtyObjects<Chaos::FRewindData::FDirtyParticleErrorInfo>::Find
                              (&local_238[0]->DirtyParticlePreResimState,pTVar34);
          if (pFVar32 == (FDirtyParticleErrorInfo *)0x0) {
            local_178.ErrorX._0_8_ = 0;
            local_178.ErrorX._8_8_ = 0;
            local_178.ErrorX._16_8_ = 0;
            local_178.ErrorR.Z = UE::Math::TQuat<double>::Identity.Z;
            local_178.ErrorR.W = UE::Math::TQuat<double>::Identity.W;
            local_178.ErrorR.X = UE::Math::TQuat<double>::Identity.X;
            local_178.ErrorR.Y = UE::Math::TQuat<double>::Identity.Y;
            local_178.HandlePtr = pTVar34;
            pFVar32 = TDirtyObjects<Chaos::FRewindData::FDirtyParticleErrorInfo>::Add
                                (&pFVar27->DirtyParticlePreResimState,pTVar34,&local_178);
          }
          uVar38 = (uint)pTVar34->_padding_;
          lVar40 = (longlong)(int)uVar38;
          lVar36 = pTVar34->_padding_;
          uVar30 = 0;
          if ((int)uVar38 < *(int *)(lVar36 + 0x50)) {
            uVar30 = ~uVar38 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar36 = *(longlong *)(lVar36 + 0x48);
          uVar3 = *(undefined8 *)(lVar36 + 8 + lVar40 * 0x10);
          dVar19 = (double)*(float *)(lVar36 + lVar40 * 0x10);
          dVar20 = (double)*(float *)(lVar36 + 4 + lVar40 * 0x10);
          pTVar33 = TParticles<double,3>::GetX
                              ((TParticles<double,3> *)pTVar34->_padding_,(int)pTVar34->_padding_);
          local_218 = *(TBitArray<FDefaultBitArrayAllocator> **)&pTVar33->field_0x10;
          dVar13 = *(double *)pTVar33;
          dVar18 = *(double *)&pTVar33->field_0x8;
          dVar4 = *(double *)&pFVar32->ErrorX;
          *(double *)&(pFVar32->ErrorX).field_0x10 =
               (double)local_218 + *(double *)&(pFVar32->ErrorX).field_0x10;
          dVar21 = (double)(float)uVar3;
          dVar22 = (double)(float)((ulonglong)uVar3 >> 0x20);
          *(double *)&pFVar32->ErrorX = dVar13 + dVar4;
          *(double *)&(pFVar32->ErrorX).field_0x8 = dVar18 + *(double *)&(pFVar32->ErrorX).field_0x8
          ;
          dVar23 = (pFVar32->ErrorR).X;
          dVar24 = (pFVar32->ErrorR).Y;
          dVar25 = (pFVar32->ErrorR).Z;
          dVar26 = (pFVar32->ErrorR).W;
          dVar4 = dVar23 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                  + dVar26 * dVar19 +
                  dVar21 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                  + dVar25 * dVar20 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar13 = dVar23 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                   + dVar26 * dVar20 +
                   dVar22 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
                   + dVar25 * dVar19 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar18 = dVar23 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                   + dVar21 * dVar26 +
                   dVar24 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                   + dVar25 * dVar22 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar19 = dVar23 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                   + dVar22 * dVar26 +
                   dVar24 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                   + dVar25 * dVar21 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          auVar9._8_4_ = SUB84(dVar13,0);
          auVar9._0_8_ = dVar4;
          auVar9._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
          (pFVar32->ErrorR).X = dVar4;
          (pFVar32->ErrorR).Y = (double)auVar9._8_8_;
          auVar14._8_4_ = SUB84(dVar19,0);
          auVar14._0_8_ = dVar18;
          auVar14._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
          (pFVar32->ErrorR).Z = dVar18;
          (pFVar32->ErrorR).W = (double)auVar14._8_8_;
        }
        TStack_1e8.UnvisitedBitMask = TStack_1e8.UnvisitedBitMask & ~TStack_1e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e8);
      }
    }
  }
  return;
}

// CheckQuaternionThreshold @ 1440d7190

bool __cdecl
Chaos::FRewindData::CheckQuaternionThreshold
          (TQuat<double> *param_1,TQuat<double> *param_2,float param_3)

{
  double dVar1;
  float fVar2;
  double dVar3;
  
  dVar3 = param_2->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] * param_1->X *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          param_1->W * param_2->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1] +
          param_1->Y * param_2->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          param_2->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0] * param_1->Z *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar1 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar3) && (dVar1 = dVar3, __real_3ff0000000000000 <= dVar3)) {
    dVar1 = __real_3ff0000000000000;
  }
  dVar1 = acos(dVar1);
  for (fVar2 = (float)(dVar1 + dVar1); __real_40490fdb < fVar2; fVar2 = fVar2 + __real_c0c90fdb) {
  }
  for (; fVar2 < __real_c0490fdb; fVar2 = fVar2 + __real_40c90fdb) {
  }
  return param_3 <=
         (float)((uint)(fVar2 * __real_42652ee0) & __xmm_7fffffff7fffffff7fffffff7fffffff);
}

// CheckVectorThreshold @ 1440d72b0

bool __cdecl
Chaos::FRewindData::CheckVectorThreshold
          (TVector<double,3> *param_1,TVector<double,3> *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)&param_1->field_0x8 - *(double *)&param_2->field_0x8;
  dVar2 = *(double *)&param_1->field_0x10 - *(double *)&param_2->field_0x10;
  return (double)(param_3 * param_3) <=
         (*(double *)param_1 - *(double *)param_2) * (*(double *)param_1 - *(double *)param_2) +
         dVar1 * dVar1 + dVar2 * dVar2;
}

// ClearPhaseAndFuture @ 1440d7af0

void __thiscall
Chaos::FRewindData::ClearPhaseAndFuture
          (FRewindData *this,TGeometryParticleHandleImp<double,3,1> *param_1,int param_2,
          EParticleHistoryPhase param_3)

{
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  *this_00;
  
  this_00 = FindOrAddDirtyObj(this,param_1,-1);
  FGeometryParticleStateBase::ClearEntryAndFuture
            (&this_00->History,(FFrameAndPhase)((uint)param_3 << 0x1e | param_2 & 0x3fffffffU));
  return;
}

// CompareTargetsToLastFrame @ 1440d7db0

int __thiscall Chaos::FRewindData::CompareTargetsToLastFrame(FRewindData *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  FChaosSolversModule *pFVar18;
  IChaosSettingsProvider *pIVar19;
  TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *pTVar20;
  FParticlePositionRotation *pFVar21;
  FParticlePositionRotation *pFVar22;
  FParticleVelocities *pFVar23;
  FParticleVelocities *pFVar24;
  ulonglong uVar25;
  uint uVar26;
  FFrameAndPhase FVar27;
  TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *this_00;
  float fVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 local_res18 [8];
  uint local_res20;
  
  uVar26 = this->CurFrame - 1;
  FVar27 = (FFrameAndPhase)(uVar26 & 0x3fffffff);
  iVar16 = (int)(uVar26 * 4) >> 2;
  if (iVar16 <= this->LatestTargetFrame) {
    pFVar18 = FChaosSolversModule::GetModule();
    pIVar19 = FChaosSolversModule::GetSettingsProvider(pFVar18);
    cVar12 = (**(code **)((longlong)*pIVar19 + 0x20))(pIVar19);
    pFVar18 = FChaosSolversModule::GetModule();
    pIVar19 = FChaosSolversModule::GetSettingsProvider(pFVar18);
    cVar13 = (**(code **)((longlong)*pIVar19 + 0x30))(pIVar19);
    pFVar18 = FChaosSolversModule::GetModule();
    pIVar19 = FChaosSolversModule::GetSettingsProvider(pFVar18);
    cVar14 = (**(code **)((longlong)*pIVar19 + 0x40))(pIVar19);
    pFVar18 = FChaosSolversModule::GetModule();
    pIVar19 = FChaosSolversModule::GetSettingsProvider(pFVar18);
    cVar15 = (**(code **)((longlong)*pIVar19 + 0x50))(pIVar19);
    fVar11 = __real_c0c90fdb;
    fVar10 = __real_c0490fdb;
    fVar9 = __real_42652ee0;
    fVar8 = __real_40c90fdb;
    dVar7 = __real_bff0000000000000;
    fVar6 = __real_40490fdb;
    uVar26 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    dVar5 = __real_3ff0000000000000;
    local_res20 = (this->DirtyParticles).DenseVals.ArrayNum;
    uVar25 = (ulonglong)(int)local_res20;
    this_00 = (TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *)
              (this->DirtyParticles).DenseVals.AllocatorInstance.Data;
    bVar3 = false;
    pTVar20 = this_00 + uVar25 * 0xd;
    while( true ) {
      if ((this->DirtyParticles).DenseVals.ArrayNum != (int)uVar25) {
        `TCheckedPointerIterator<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (this_00 == pTVar20) break;
      if ((((cVar12 != '\0') || (cVar13 != '\0')) && (this_00[7].NumValid != 0)) &&
         ((pFVar21 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0>::Read
                               ((TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0> *)
                                (this_00 + 7),FVar27,&this->PropertiesPool),
          pFVar21 != (FParticlePositionRotation *)0x0 &&
          (pFVar22 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::Read
                               (this_00,FVar27,&this->PropertiesPool),
          pFVar22 != (FParticlePositionRotation *)0x0)))) {
        if (cVar12 != '\0') {
          pFVar18 = FChaosSolversModule::GetModule();
          pIVar19 = FChaosSolversModule::GetSettingsProvider(pFVar18);
          fVar28 = (float)(**(code **)((longlong)*pIVar19 + 0x28))(pIVar19);
          dVar32 = *(double *)&(pFVar21->MX).field_0x10 - *(double *)&(pFVar22->MX).field_0x10;
          dVar33 = *(double *)&pFVar21->MX - *(double *)&pFVar22->MX;
          dVar31 = *(double *)&(pFVar21->MX).field_0x8 - *(double *)&(pFVar22->MX).field_0x8;
          bVar3 = (bool)(bVar3 | (double)(fVar28 * fVar28) <=
                                 dVar33 * dVar33 + dVar31 * dVar31 + dVar32 * dVar32);
        }
        if (cVar13 != '\0') {
          pFVar18 = FChaosSolversModule::GetModule();
          pIVar19 = FChaosSolversModule::GetSettingsProvider(pFVar18);
          fVar28 = (float)(**(code **)((longlong)*pIVar19 + 0x38))(pIVar19);
          uVar1 = *(undefined8 *)&(pFVar21->MR).field_0x8;
          uVar2 = *(undefined8 *)&(pFVar22->MR).field_0x8;
          dVar32 = (double)(float)*(undefined8 *)&pFVar21->MR *
                   (double)(float)*(undefined8 *)&pFVar22->MR *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                   (double)(float)((ulonglong)uVar1 >> 0x20) *
                   (double)(float)((ulonglong)uVar2 >> 0x20) *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1] +
                   (double)(float)((ulonglong)*(undefined8 *)&pFVar21->MR >> 0x20) *
                   (double)(float)((ulonglong)*(undefined8 *)&pFVar22->MR >> 0x20) *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                   (double)(float)uVar1 *
                   (double)(float)uVar2 *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          dVar31 = dVar7;
          if ((dVar7 <= dVar32) && (dVar31 = dVar32, dVar5 <= dVar32)) {
            dVar31 = dVar5;
          }
          dVar31 = acos(dVar31);
          for (fVar30 = (float)(dVar31 + dVar31); fVar6 < fVar30; fVar30 = fVar30 + fVar11) {
          }
          for (; fVar30 < fVar10; fVar30 = fVar30 + fVar8) {
          }
          bVar3 = (bool)(bVar3 | fVar28 <= (float)((uint)(fVar30 * fVar9) & uVar26));
        }
      }
      if ((!bVar3) &&
         ((((cVar14 != '\0' || (cVar15 != '\0')) && (this_00[8].NumValid != 0)) &&
          ((pFVar23 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0>::Read
                                ((TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0> *)
                                 (this_00 + 8),FVar27,&this->PropertiesPool),
           pFVar23 != (FParticleVelocities *)0x0 &&
           (pFVar24 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::Read
                                ((TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1> *)
                                 (this_00 + 2),FVar27,&this->PropertiesPool),
           pFVar24 != (FParticleVelocities *)0x0)))))) {
        if (cVar14 != '\0') {
          pFVar18 = FChaosSolversModule::GetModule();
          pIVar19 = FChaosSolversModule::GetSettingsProvider(pFVar18);
          fVar29 = (float)(**(code **)((longlong)*pIVar19 + 0x48))(pIVar19);
          fVar28 = *(float *)&(pFVar23->MV).field_0x8 - *(float *)&(pFVar24->MV).field_0x8;
          fVar4 = *(float *)&(pFVar23->MV).field_0x4 - *(float *)&(pFVar24->MV).field_0x4;
          fVar30 = *(float *)&pFVar23->MV - *(float *)&pFVar24->MV;
          bVar3 = fVar29 * fVar29 <= fVar4 * fVar4 + fVar30 * fVar30 + fVar28 * fVar28;
        }
        if (cVar15 != '\0') {
          pFVar18 = FChaosSolversModule::GetModule();
          pIVar19 = FChaosSolversModule::GetSettingsProvider(pFVar18);
          fVar29 = (float)(**(code **)((longlong)*pIVar19 + 0x58))(pIVar19);
          fVar28 = *(float *)&(pFVar23->MW).field_0x8 - *(float *)&(pFVar24->MW).field_0x8;
          fVar4 = *(float *)&(pFVar23->MW).field_0x4 - *(float *)&(pFVar24->MW).field_0x4;
          fVar30 = *(float *)&pFVar23->MW - *(float *)&pFVar24->MW;
          bVar3 = (bool)(bVar3 | fVar29 * fVar29 <=
                                 fVar4 * fVar4 + fVar30 * fVar30 + fVar28 * fVar28);
        }
      }
      this_00 = this_00 + 0xd;
      uVar25 = (ulonglong)local_res20;
    }
    iVar17 = -1;
    if (bVar3) {
      iVar17 = iVar16;
    }
    return iVar17;
  }
  return -1;
}

// DumpHistory_Internal @ 1440db690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FRewindData::DumpHistory_Internal(FRewindData *this,int param_1,FString *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  FPBDJointConstraintHandle *pFVar5;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int> *pTVar11;
  TTuple<Chaos::FPBDJointConstraintHandle_const_*,int> *pTVar12;
  FString *pFVar13;
  IFileManager *pIVar14;
  uint *puVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  int local_res10;
  FString *local_res18;
  undefined1 local_res20 [8];
  int local_128;
  FString local_118;
  FOutputDevice local_108;
  FString local_f8;
  FString local_e8;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FGeometryParticleState local_c8;
  FJointState local_a8;
  FString local_88;
  FString local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  
  local_res10 = param_1;
  local_res18 = param_2;
  ::FString::FString(&local_f8,L"");
  FOutputDevice::FOutputDevice(&local_108);
  local_108.bAutoEmitLineTerminator = false;
  local_108._padding_ = (longlong)&___7FStringOutputDevice__6B_;
  uVar16 = this->CurFrame - this->FramesSaved;
  if ((int)uVar16 < this->CurFrame) {
    do {
      local_128 = 0;
      do {
        iVar2 = (this->DirtyParticles).DenseVals.ArrayNum;
        pFVar18 = (this->DirtyParticles).DenseVals.AllocatorInstance.Data;
        pFVar19 = pFVar18 + (longlong)iVar2 * 0x1a0;
        while( true ) {
          if ((this->DirtyParticles).DenseVals.ArrayNum != iVar2) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          bVar8 = (byte)local_128;
          if (pFVar18 == pFVar19) break;
          FOutputDevice::LogfImpl(&local_108,L"Frame:%d Phase:%d\n");
          pTVar4 = *(TGeometryParticleHandleImp<double,3,1> **)(pFVar18 + 0x180);
          bVar1 = this->bRewindDataOptimization;
          if ((this->CurFrame < this->LatestFrame) &&
             (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<4501203830188279875>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\RewindData.h"
                                 ,0x843,"!IsResim()"), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (((int)uVar16 < this->CurFrame - this->FramesSaved) &&
             (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<4501203830188279876>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\RewindData.h"
                                 ,0x844,"Frame >= GetEarliestFrame_Internal()"), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar11 = TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
                            *)&this->DirtyParticles,pTVar4);
          puVar15 = (uint *)&pTVar11->field_0x8;
          if (pTVar11 == (TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int> *)0x0) {
            puVar15 = (uint *)0x0;
          }
          if (puVar15 == (uint *)0x0) {
            local_c8.State = (FGeometryParticleStateBase *)0x0;
          }
          else {
            uVar3 = *puVar15;
            uVar10 = 0;
            if ((int)uVar3 < (this->DirtyParticles).DenseVals.ArrayNum) {
              uVar10 = ~uVar3 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_c8.State =
                 (FGeometryParticleStateBase *)
                 ((this->DirtyParticles).DenseVals.AllocatorInstance.Data +
                 (longlong)(int)uVar3 * 0x1a0);
          }
          local_c8.Pool = &this->PropertiesPool;
          if (bVar1 != false) {
            bVar8 = 0;
          }
          local_c8.FrameAndPhase.Phase = (uint)bVar8;
          local_c8.FrameAndPhase.Frame = uVar16;
          local_c8.Particle = pTVar4;
          FGeometryParticleState::ToString(&local_c8,&local_88);
          FOutputDevice::LogfImpl(&local_108,L"%s\n");
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          pFVar18 = pFVar18 + 0x1a0;
        }
        iVar2 = (this->DirtyJoints).DenseVals.ArrayNum;
        pFVar18 = (this->DirtyJoints).DenseVals.AllocatorInstance.Data;
        pFVar19 = pFVar18 + (longlong)iVar2 * 0x60;
        while( true ) {
          if ((this->DirtyJoints).DenseVals.ArrayNum != iVar2) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (pFVar18 == pFVar19) break;
          FOutputDevice::LogfImpl(&local_108,L"Frame:%d Phase:%d\n");
          pFVar5 = *(FPBDJointConstraintHandle **)(pFVar18 + 0x40);
          bVar1 = this->bRewindDataOptimization;
          if ((this->CurFrame < this->LatestFrame) &&
             (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<4501203830188279875>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\RewindData.h"
                                 ,0x843,"!IsResim()"), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (((int)uVar16 < this->CurFrame - this->FramesSaved) &&
             (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<4501203830188279876>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\RewindData.h"
                                 ,0x844,"Frame >= GetEarliestFrame_Internal()"), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar12 = TSet<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FPBDJointConstraintHandle_const_*,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FPBDJointConstraintHandle_const_*,int,0>,FDefaultSetAllocator>
                            *)&this->DirtyJoints,pFVar5);
          puVar15 = (uint *)&pTVar12->field_0x8;
          if (pTVar12 == (TTuple<Chaos::FPBDJointConstraintHandle_const_*,int> *)0x0) {
            puVar15 = (uint *)0x0;
          }
          if (puVar15 == (uint *)0x0) {
            local_a8.State = (FJointStateBase *)0x0;
          }
          else {
            uVar3 = *puVar15;
            uVar10 = 0;
            if ((int)uVar3 < (this->DirtyJoints).DenseVals.ArrayNum) {
              uVar10 = ~uVar3 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_a8.State =
                 (FJointStateBase *)
                 ((this->DirtyJoints).DenseVals.AllocatorInstance.Data + (longlong)(int)uVar3 * 0x60
                 );
          }
          local_a8.Pool = &this->PropertiesPool;
          bVar9 = bVar8;
          if (bVar1 != false) {
            bVar9 = 0;
          }
          local_a8.FrameAndPhase.Phase = (uint)bVar9;
          local_a8.FrameAndPhase.Frame = uVar16;
          local_a8.Head = pFVar5;
          FJointState::ToString(&local_a8,&local_78);
          FOutputDevice::LogfImpl(&local_108,L"%s\n");
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          pFVar18 = pFVar18 + 0x60;
        }
        local_128 = local_128 + 1;
      } while (local_128 < 3);
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < this->CurFrame);
  }
  ::FString::PrintfImpl(&local_e8,L"/RewindData/%s_%d_%d.txt");
  pFVar13 = FPaths::ProfilingDir(&local_68);
  ::FString::ConcatFF(&local_118,pFVar13,&local_e8);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  pIVar14 = IFileManager::Get();
  local_d8 = local_f8.Data.AllocatorInstance.Data;
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar17.Data = local_118.Data.AllocatorInstance.Data;
  }
  iStack_d0 = local_f8.Data.ArrayNum + -1;
  if (local_f8.Data.ArrayNum == 0) {
    iStack_d0 = 0;
  }
  local_58._12_4_ = uStack_cc;
  local_58.Size = iStack_d0;
  local_58.DataPtr = (wchar_t *)local_f8.Data.AllocatorInstance.Data;
  FFileHelper::SaveStringToFile(&local_58,(wchar_t *)FVar17.Data,AutoDetect,pIVar14,0);
  if (2 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  FOutputDevice::~FOutputDevice(&local_108);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return;
}

// ExtendHistoryWithFrame @ 1440dbf70

void __thiscall Chaos::FRewindData::ExtendHistoryWithFrame(FRewindData *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->CurFrame - param_1) + 1;
  iVar2 = this->FramesSaved;
  if (this->FramesSaved < iVar1) {
    iVar2 = iVar1;
  }
  this->FramesSaved = iVar2;
  return;
}

// FindOrAddDirtyObj @ 1440e26b0

TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_> *
__thiscall
Chaos::FRewindData::FindOrAddDirtyObj
          (FRewindData *this,TGeometryParticleHandleImp<double,3,1> *param_1,int param_2)

{
  int iVar1;
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  *pTVar2;
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  local_1a8;
  
  pTVar2 = TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
           ::Find(&this->DirtyParticles,param_1);
  if (pTVar2 == (TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
                 *)0x0) {
    iVar1 = this->CurFrame;
    FGeometryParticleStateBase::FGeometryParticleStateBase
              (&local_1a8.History,(this->Managers).Elements.ArrayNum,this->bRewindDataOptimization);
    local_1a8.PropertiesPool = &this->PropertiesPool;
    local_1a8.DirtyDynamics = -1;
    local_1a8.InitializedOnStep = -1;
    local_1a8.bResimAsFollower = true;
    local_1a8.bNeedsResim = false;
    local_1a8.ObjPtr = param_1;
    local_1a8.LastDirtyFrame = iVar1;
    pTVar2 = TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
             ::Add(&this->DirtyParticles,param_1,&local_1a8);
    TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
    ::
    ~TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (&local_1a8);
    pTVar2->InitializedOnStep = param_2;
  }
  return pTVar2;
}

// FindOrAddDirtyObj @ 1440e27a0

TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> * __thiscall
Chaos::FRewindData::FindOrAddDirtyObj
          (FRewindData *this,FPBDJointConstraintHandle *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  FDirtyPropertiesPool *pFVar3;
  bool bVar4;
  TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *pTVar5;
  undefined1 local_68 [32];
  TParticlePropertyBuffer<Chaos::FProxyBasePairProperty,8,1> local_48;
  FPBDJointConstraintHandle *local_28;
  FDirtyPropertiesPool *local_20;
  int local_18;
  int local_14;
  int local_10;
  undefined2 local_c;
  
  pTVar5 = TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
           ::Find(&this->DirtyJoints,param_1);
  if (pTVar5 == (TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)0x0) {
    iVar1 = (this->Managers).Elements.ArrayNum;
    local_14 = this->CurFrame;
    local_68._8_4_ = iVar1 * 3;
    if (this->bRewindDataOptimization != false) {
      local_68._8_4_ = iVar1;
    }
    local_20 = &this->PropertiesPool;
    local_48.Next = 0;
    local_48.NumValid = 0;
    local_48.Buffer.ArrayNum = 0;
    local_48.Buffer.ArrayMax = 0;
    local_18 = -1;
    local_10 = -1;
    local_c._0_1_ = true;
    local_c._1_1_ = false;
    local_68._0_8_ = pTVar5;
    local_68._16_8_ = pTVar5;
    local_68._24_8_ = pTVar5;
    local_48.Capacity = local_68._8_4_;
    local_48.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)pTVar5;
    local_28 = param_1;
    pTVar5 = TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
             ::Add(&this->DirtyJoints,param_1,
                   (TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)
                   local_68);
    pFVar3 = local_20;
    if (local_20 != (FDirtyPropertiesPool *)0x0) {
      TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Release
                ((TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1> *)local_68,local_20);
      TParticlePropertyBuffer<Chaos::FProxyBasePairProperty,8,1>::Release(&local_48,pFVar3);
    }
    if ((local_48.Buffer.ArrayNum != 0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4501203830188278414>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\RewindData.h"
                           ,0x28e,"Buffer.Num() == 0"), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)
               (*pcVar2)();
      return pTVar5;
    }
    if ((TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)
        local_48.Buffer.AllocatorInstance.Data !=
        (TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)0x0) {
      FMemory::Free(local_48.Buffer.AllocatorInstance.Data);
    }
    if ((local_68._24_4_ != 0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4501203830188278414>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\RewindData.h"
                           ,0x28e,"Buffer.Num() == 0"), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)
               (*pcVar2)();
      return pTVar5;
    }
    if ((TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)local_68._16_8_
        != (TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)0x0) {
      FMemory::Free((void *)local_68._16_8_);
    }
    pTVar5->InitializedOnStep = param_2;
  }
  return pTVar5;
}

// FindValidResimFrame @ 1440e29c0

int __thiscall Chaos::FRewindData::FindValidResimFrame(FRewindData *this,int param_1)

{
  TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSizedDefaultAllocator<32>_> *this_00
  ;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  atomic<int> aVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  atomic<int> aVar15;
  uint uVar16;
  uint *puVar17;
  FTlsAutoCleanup *pFVar18;
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  *pTVar19;
  FParticleDynamicMisc *pFVar20;
  TWeakPtr<Chaos::FBaseRewindHistory,1> *pTVar21;
  FFrameAndPhase FVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement FVar25;
  FPBDIslandManager *this_01;
  FBaseRewindHistory *pFVar26;
  bool bVar27;
  bool bVar28;
  uint local_res18 [2];
  int local_res20 [2];
  uint local_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d [5];
  FPBDIslandManager *local_78;
  TGeometryParticleHandleImp<double,3,1> *local_70;
  TReferenceControllerBase<1> *local_68;
  TReferenceControllerBase<1> *local_60;
  TReferenceControllerBase<1> *local_58;
  uint *local_50;
  
  local_84 = 0xffffffff;
  bVar27 = false;
  bVar9 = false;
  bVar8 = false;
  if (param_1 <= this->BlockResimFrame) {
    return -1;
  }
  puVar17 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_50 = local_res18;
  local_58 = (TReferenceControllerBase<1> *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar18 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_58,puVar17);
  if ((*(int *)(pFVar18 + 2) < 1) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3522308889972310308>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                          ,0x124,"IsInPhysicsThreadContext()"), bVar11)) {
    pcVar4 = (code *)swi(3);
    iVar13 = (*pcVar4)();
    return iVar13;
  }
  this_01 = (FPBDIslandManager *)&((this->Solver->MEvolution).Ptr)->_padding_;
  local_78 = this_01;
  if (ResimFrameValidation == 1) {
    pTVar1 = &this->IslandValidationIslands;
    (this->IslandValidationIslands).ArrayNum = 0;
    if ((this->IslandValidationIslands).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar1->AllocatorInstance,0,&(this->IslandValidationIslands).ArrayMax);
    }
    this_00 = &this->IslandValidationIslandParticles;
    (this->IslandValidationIslandParticles).ArrayNum = 0;
    if ((this->IslandValidationIslandParticles).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&this_00->AllocatorInstance,0,
                 &(this->IslandValidationIslandParticles).ArrayMax);
    }
    this_01 = local_78;
    pFVar23 = (this->DirtyParticles).DenseVals.AllocatorInstance.Data;
    iVar13 = (this->DirtyParticles).DenseVals.ArrayNum;
    pFVar24 = pFVar23 + (longlong)iVar13 * 0x1a0;
    while( true ) {
      if ((this->DirtyParticles).DenseVals.ArrayNum != iVar13) {
        `TCheckedPointerIterator<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar23 == pFVar24) break;
      local_70 = *(TGeometryParticleHandleImp<double,3,1> **)(pFVar23 + 0x180);
      iVar14 = Chaos::Private::FPBDIslandManager::GetParticleResimFrame(this_01,local_70);
      if (iVar14 != -1) {
        Chaos::Private::FPBDIslandManager::FindParticleIslands(this_01,local_70,pTVar1);
      }
      if (pFVar23[0x19d] != (FScriptContainerElement)0x0) {
        TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_const_&>
                  (this_00,&local_70);
      }
      pFVar23 = pFVar23 + 0x1a0;
    }
    Chaos::Private::FPBDIslandManager::FindParticlesInIslands(this_01,pTVar1,this_00);
  }
  iVar13 = this->CurFrame - this->FramesSaved;
  local_res20[0] = this->BlockResimFrame;
  if (this->BlockResimFrame < iVar13) {
    local_res20[0] = iVar13;
  }
  uVar16 = param_1;
  bVar11 = false;
  if (local_res20[0] < param_1) {
LAB_1440e2bf0:
    FVar22 = (FFrameAndPhase)(uVar16 & 0x3fffffff);
    local_res18[0] = uVar16;
    bVar28 = bVar27;
    bVar10 = bVar11;
    if (ResimFrameValidation != 1) {
      iVar13 = (this->DirtyParticles).DenseVals.ArrayNum;
      pFVar23 = (this->DirtyParticles).DenseVals.AllocatorInstance.Data;
      pFVar24 = pFVar23 + (longlong)iVar13 * 0x1a0;
      do {
        if ((this->DirtyParticles).DenseVals.ArrayNum != iVar13) {
          `TCheckedPointerIterator<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_7f);
        }
        if (pFVar23 == pFVar24) goto LAB_1440e31d3;
        if ((ResimFrameValidation != 2) ||
           (iVar14 = Chaos::Private::FPBDIslandManager::GetParticleResimFrame
                               (this_01,*(TGeometryParticleHandleImp<double,3,1> **)
                                         (pFVar23 + 0x180)), iVar14 != -1)) {
          FVar25 = (FScriptContainerElement)0x0;
          if (bUseParticleResimAsFollowerDuringTargetValidation != false) {
            FVar25 = pFVar23[0x19c];
          }
          pFVar20 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Read
                              ((TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1> *)
                               (pFVar23 + 0x80),FVar22,&this->PropertiesPool);
          if (((((pFVar20 != (FParticleDynamicMisc *)0x0) && (pFVar20->bDisabled == false)) &&
               (pFVar20->MObjectState == Dynamic)) &&
              ((*(int *)(pFVar23 + 0xe4) != 0 && (*(int *)(pFVar23 + 0x104) != 0)))) &&
             ((*(int *)(pFVar23 + 0x124) != 0 &&
              (((FVar25 != (FScriptContainerElement)0x0 ||
                (iVar14 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0>::FindIdx
                                    ((TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0>
                                      *)(pFVar23 + 0xe0),FVar22), iVar14 == -1)) ||
               ((iVar14 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0>::FindIdx
                                    ((TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0> *)
                                     (pFVar23 + 0x100),FVar22), iVar14 == -1 ||
                (iVar14 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0>::FindIdx
                                    ((TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0> *)
                                     (pFVar23 + 0x120),FVar22), iVar14 == -1))))))))
          goto LAB_1440e31ab;
          this_01 = local_78;
          if (pFVar23[0x19d] != (FScriptContainerElement)0x0) {
            pTVar2 = *(TGeometryParticleHandleImp<double,3,1> **)(pFVar23 + 0x180);
            bVar6 = true;
            if ((bFindValidInputHistory == false) ||
               (pTVar21 = TMapBase<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>_>
                          ::Find((TMapBase<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>_>
                                  *)&this->InputParticleHistories,pTVar2),
               pTVar21 == (TWeakPtr<Chaos::FBaseRewindHistory,1> *)0x0)) {
LAB_1440e30a5:
              if ((bFindValidStateHistory != false) &&
                 (pTVar21 = TMapBase<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>_>
                            ::Find((TMapBase<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>_>
                                    *)&this->StateParticleHistories,pTVar2),
                 pTVar21 != (TWeakPtr<Chaos::FBaseRewindHistory,1> *)0x0)) {
                if ((pTVar21->Object == (FBaseRewindHistory *)0x0) ||
                   ((pTVar3 = (pTVar21->WeakReferenceCount).ReferenceController,
                    pTVar3 == (TReferenceControllerBase<1> *)0x0 ||
                    ((int)pTVar3->SharedReferenceCount < 1)))) {
LAB_1440e313d:
                  bVar5 = false;
                }
                else {
                  local_58 = (pTVar21->WeakReferenceCount).ReferenceController;
                  bVar11 = true;
                  pFVar26 = (FBaseRewindHistory *)0x0;
                  if (local_58 != (TReferenceControllerBase<1> *)0x0) {
                    aVar7 = local_58->SharedReferenceCount;
                    do {
                      if (aVar7 == (atomic<int>)0x0) {
                        local_58 = (TReferenceControllerBase<1> *)0x0;
                        pFVar26 = (FBaseRewindHistory *)0x0;
                        goto LAB_1440e3119;
                      }
                      LOCK();
                      aVar15 = local_58->SharedReferenceCount;
                      bVar28 = aVar7 == aVar15;
                      if (bVar28) {
                        local_58->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
                        aVar15 = aVar7;
                      }
                      UNLOCK();
                      aVar7 = aVar15;
                    } while (!bVar28);
                    pFVar26 = pTVar21->Object;
                  }
LAB_1440e3119:
                  cVar12 = (**(code **)((longlong)*pFVar26 + 0x28))(pFVar26,(int)(uVar16 * 4) >> 2);
                  bVar28 = bVar27;
                  bVar10 = bVar11;
                  if (cVar12 != '\0') goto LAB_1440e313d;
                  bVar5 = true;
                }
                if (bVar11) {
                  bVar11 = false;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_58);
                  bVar28 = bVar27;
                  bVar10 = bVar11;
                }
                bVar6 = true;
                if (bVar5) {
                  bVar6 = false;
                }
              }
            }
            else {
              if ((pTVar21->Object == (FBaseRewindHistory *)0x0) ||
                 ((pTVar3 = (pTVar21->WeakReferenceCount).ReferenceController,
                  pTVar3 == (TReferenceControllerBase<1> *)0x0 ||
                  ((int)pTVar3->SharedReferenceCount < 1)))) {
LAB_1440e3075:
                bVar5 = false;
              }
              else {
                local_60 = (pTVar21->WeakReferenceCount).ReferenceController;
                bVar27 = true;
                pFVar26 = (FBaseRewindHistory *)0x0;
                if (local_60 != (TReferenceControllerBase<1> *)0x0) {
                  aVar7 = local_60->SharedReferenceCount;
                  do {
                    if (aVar7 == (atomic<int>)0x0) {
                      local_60 = (TReferenceControllerBase<1> *)0x0;
                      pFVar26 = (FBaseRewindHistory *)0x0;
                      goto LAB_1440e3053;
                    }
                    LOCK();
                    aVar15 = local_60->SharedReferenceCount;
                    bVar28 = aVar7 == aVar15;
                    if (bVar28) {
                      local_60->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
                      aVar15 = aVar7;
                    }
                    UNLOCK();
                    aVar7 = aVar15;
                  } while (!bVar28);
                  pFVar26 = pTVar21->Object;
                }
LAB_1440e3053:
                cVar12 = (**(code **)((longlong)*pFVar26 + 0x28))(pFVar26,(int)(uVar16 * 4) >> 2);
                bVar5 = bVar6;
                bVar28 = bVar27;
                bVar10 = bVar11;
                if (cVar12 != '\0') goto LAB_1440e3075;
              }
              if (bVar27) {
                bVar27 = false;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_60);
                bVar28 = bVar27;
                bVar10 = bVar11;
              }
              if (!bVar5) goto LAB_1440e30a5;
              bVar6 = false;
            }
            this_01 = local_78;
            if (!bVar6) goto LAB_1440e3182;
          }
        }
        pFVar23 = pFVar23 + 0x1a0;
      } while( true );
    }
    pFVar24 = (this->IslandValidationIslandParticles).AllocatorInstance.Data;
    iVar13 = (this->IslandValidationIslandParticles).ArrayNum;
    pFVar23 = pFVar24 + (longlong)iVar13 * 8;
    do {
      if ((this->IslandValidationIslandParticles).ArrayNum != iVar13) {
        `TCheckedPointerIterator<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_80);
      }
      if (pFVar24 == pFVar23) goto LAB_1440e31d3;
      pTVar19 = TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
                ::Find(&this->DirtyParticles,*(TGeometryParticleHandleImp<double,3,1> **)pFVar24);
      if (pTVar19 !=
          (TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
           *)0x0) {
        cVar12 = '\0';
        if (bUseParticleResimAsFollowerDuringTargetValidation != false) {
          cVar12 = pTVar19->bResimAsFollower;
        }
        pFVar20 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Read
                            (&(pTVar19->History).DynamicsMisc,FVar22,&this->PropertiesPool);
        if (((((pFVar20 != (FParticleDynamicMisc *)0x0) && (pFVar20->bDisabled == false)) &&
             (pFVar20->MObjectState == Dynamic)) &&
            ((((pTVar19->History).TargetPositions.NumValid != 0 &&
              ((pTVar19->History).TargetVelocities.NumValid != 0)) &&
             ((pTVar19->History).TargetStates.NumValid != 0)))) &&
           (((cVar12 != '\0' ||
             (iVar14 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0>::FindIdx
                                 (&(pTVar19->History).TargetPositions,FVar22), iVar14 == -1)) ||
            ((iVar14 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0>::FindIdx
                                 (&(pTVar19->History).TargetVelocities,FVar22), iVar14 == -1 ||
             (iVar14 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0>::FindIdx
                                 (&(pTVar19->History).TargetStates,FVar22), iVar14 == -1))))))
        goto LAB_1440e31ab;
        if (pTVar19->bNeedsResim != false) {
          pTVar2 = pTVar19->ObjPtr;
          if ((bFindValidInputHistory == false) ||
             (pTVar21 = TMapBase<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>_>
                        ::Find((TMapBase<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>_>
                                *)&this->InputParticleHistories,pTVar2),
             pTVar21 == (TWeakPtr<Chaos::FBaseRewindHistory,1> *)0x0)) {
LAB_1440e2de3:
            bVar27 = true;
            if ((bFindValidStateHistory != false) &&
               (pTVar21 = TMapBase<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>_>
                          ::Find((TMapBase<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>_>
                                  *)&this->StateParticleHistories,pTVar2),
               pTVar21 != (TWeakPtr<Chaos::FBaseRewindHistory,1> *)0x0)) {
              if ((pTVar21->Object == (FBaseRewindHistory *)0x0) ||
                 ((pTVar3 = (pTVar21->WeakReferenceCount).ReferenceController,
                  pTVar3 == (TReferenceControllerBase<1> *)0x0 ||
                  ((int)pTVar3->SharedReferenceCount < 1)))) {
LAB_1440e2e87:
                bVar11 = false;
              }
              else {
                local_68 = (pTVar21->WeakReferenceCount).ReferenceController;
                bVar9 = true;
                pFVar26 = (FBaseRewindHistory *)0x0;
                if (local_68 != (TReferenceControllerBase<1> *)0x0) {
                  aVar7 = local_68->SharedReferenceCount;
                  do {
                    if (aVar7 == (atomic<int>)0x0) {
                      local_68 = (TReferenceControllerBase<1> *)0x0;
                      pFVar26 = (FBaseRewindHistory *)0x0;
                      goto LAB_1440e2e63;
                    }
                    LOCK();
                    aVar15 = local_68->SharedReferenceCount;
                    bVar27 = aVar7 == aVar15;
                    if (bVar27) {
                      local_68->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
                      aVar15 = aVar7;
                    }
                    UNLOCK();
                    aVar7 = aVar15;
                  } while (!bVar27);
                  pFVar26 = pTVar21->Object;
                }
LAB_1440e2e63:
                cVar12 = (**(code **)((longlong)*pFVar26 + 0x28))(pFVar26,(int)(uVar16 * 4) >> 2);
                if (cVar12 != '\0') goto LAB_1440e2e87;
                bVar11 = true;
              }
              if (bVar9) {
                bVar9 = false;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_68);
              }
              bVar27 = true;
              if (bVar11) {
                bVar27 = false;
              }
            }
          }
          else {
            if ((pTVar21->Object == (FBaseRewindHistory *)0x0) ||
               ((pTVar3 = (pTVar21->WeakReferenceCount).ReferenceController,
                pTVar3 == (TReferenceControllerBase<1> *)0x0 ||
                ((int)pTVar3->SharedReferenceCount < 1)))) {
LAB_1440e2db5:
              bVar27 = false;
            }
            else {
              local_70 = (TGeometryParticleHandleImp<double,3,1> *)
                         (pTVar21->WeakReferenceCount).ReferenceController;
              bVar8 = true;
              pFVar26 = (FBaseRewindHistory *)0x0;
              if (local_70 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                aVar7 = *(atomic<int> *)&local_70->_padding_;
                do {
                  if (aVar7 == (atomic<int>)0x0) {
                    local_70 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
                    pFVar26 = (FBaseRewindHistory *)0x0;
                    goto LAB_1440e2d93;
                  }
                  LOCK();
                  aVar15 = *(atomic<int> *)&local_70->_padding_;
                  bVar27 = aVar7 == aVar15;
                  if (bVar27) {
                    *(atomic<int> *)&local_70->_padding_ = (atomic<int>)((int)aVar7 + 1);
                    aVar15 = aVar7;
                  }
                  UNLOCK();
                  aVar7 = aVar15;
                } while (!bVar27);
                pFVar26 = pTVar21->Object;
              }
LAB_1440e2d93:
              cVar12 = (**(code **)((longlong)*pFVar26 + 0x28))(pFVar26,(int)(uVar16 * 4) >> 2);
              if (cVar12 != '\0') goto LAB_1440e2db5;
              bVar27 = true;
            }
            if (bVar8) {
              bVar8 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)local_70);
            }
            if (!bVar27) goto LAB_1440e2de3;
            bVar27 = false;
          }
          if (!bVar27) goto LAB_1440e3182;
        }
      }
      pFVar24 = pFVar24 + 8;
    } while( true );
  }
LAB_1440e31fa:
  iVar13 = (this->DirtyParticles).DenseVals.ArrayNum;
  local_res18[0] = 0xffffffff;
  if (bResimIncompleteHistory != false) {
    local_res18[0] = param_1;
  }
  pFVar23 = (this->DirtyParticles).DenseVals.AllocatorInstance.Data;
  pFVar24 = pFVar23 + (longlong)iVar13 * 0x1a0;
  while( true ) {
    if ((this->DirtyParticles).DenseVals.ArrayNum != iVar13) {
      `TCheckedPointerIterator<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_7e);
    }
    if (pFVar23 == pFVar24) break;
    pFVar23[0x19d] = (FScriptContainerElement)0x0;
    pFVar23 = pFVar23 + 0x1a0;
  }
  iVar13 = (this->DirtyJoints).DenseVals.ArrayNum;
  pFVar23 = (this->DirtyJoints).DenseVals.AllocatorInstance.Data;
  pFVar24 = pFVar23 + (longlong)iVar13 * 0x60;
  while( true ) {
    if ((this->DirtyJoints).DenseVals.ArrayNum != iVar13) {
      `TCheckedPointerIterator<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_7d);
    }
    if (pFVar23 == pFVar24) break;
    pFVar23[0x5d] = (FScriptContainerElement)0x0;
    pFVar23 = pFVar23 + 0x60;
  }
  return local_res18[0];
LAB_1440e31d3:
  if (local_res18[0] != 0xffffffff) {
    return local_res18[0];
  }
  goto LAB_1440e31e7;
LAB_1440e3182:
  if (local_84 == 0xffffffff) {
    local_84 = local_res18[0];
  }
LAB_1440e31ab:
  bVar27 = bVar28;
  uVar16 = local_res18[0] - 1;
  this_01 = local_78;
  bVar11 = bVar10;
  if ((int)uVar16 <= local_res20[0]) goto LAB_1440e31e7;
  goto LAB_1440e2bf0;
LAB_1440e31e7:
  if (local_84 != 0xffffffff) {
    return local_84;
  }
  goto LAB_1440e31fa;
}

// FinishFrame @ 1440e32d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FRewindData::FinishFrame(FRewindData *this)

{
  int *piVar1;
  FPBDJointConstraintHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  EResimType EVar9;
  bool bVar10;
  ESyncState EVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FRewindData::FinishFrame(void)_::_2_::FStat_RewindDataFinishFrame>
  FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar14;
  FName FVar15;
  FJointStateBase *this_02;
  FFrameAndPhase FVar16;
  FJointStateBase *pFVar17;
  undefined1 local_res10 [8];
  FColor_u_0 local_res18 [2];
  FJointStateBase *local_res20;
  FName local_a8;
  FName local_a0;
  LARGE_INTEGER local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FRewindData *local_70;
  FFrameAndPhase local_68;
  FStatMessage local_60 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_RewindDataFinishFrame ==
        (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FRewindData::FinishFrame(void)_::_2_::FStat_RewindDataFinishFrame>
         )0x0) {
      pFVar12 = ::FName::FName(&local_90,"RewindDataFinishFrame");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_RewindDataFinishFrame,*pFVar12,
                 L"RewindDataFinishFrame","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_RewindDataFinishFrame;
  if (StatPtr_RewindDataFinishFrame ==
      (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FRewindData::FinishFrame(void)_::_2_::FStat_RewindDataFinishFrame>
       )0x0) {
    pFVar12 = ::FName::FName(&local_88,"RewindDataFinishFrame");
    FVar13 = (FThreadSafeStaticStat<_public:_void___cdecl_Chaos::FRewindData::FinishFrame(void)_::_2_::FStat_RewindDataFinishFrame>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_RewindDataFinishFrame,*pFVar12,
                          L"RewindDataFinishFrame","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar13;
  bVar5 = false;
  bVar8 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar10 = false;
  bVar6 = false;
  if ((FVar15.ComparisonIndex.Value.Value != 0) ||
     (bVar4 = bVar5, bVar7 = bVar8, FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar8 = true;
      bVar10 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_a8.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                   ,0x2ec);
        bVar5 = true;
        bVar8 = true;
        bVar10 = true;
        bVar6 = true;
      }
    }
    bVar4 = bVar5;
    bVar7 = bVar8;
    if (FThreadStats::bPrimaryEnable != false) {
      local_a0 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar10 = true;
      bVar6 = true;
      goto LAB_1440e347e;
    }
  }
  bVar8 = bVar6;
  bVar5 = bVar10;
  bVar10 = false;
  bVar6 = false;
  local_a0 = local_80;
  FVar15 = local_80;
LAB_1440e347e:
  if (this->CurFrame < this->LatestFrame) {
    local_68.Phase = 0;
    FVar16.Frame = this->CurFrame + 1;
    local_70 = this;
    local_68 = FVar16;
    `Chaos::FRewindData::FinishFrame'::__l5::<lambda_1>::
    operator()<Chaos::TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
              (&local_70,&this->DirtyParticles);
    iVar14 = (this->DirtyJoints).DenseVals.ArrayNum;
    this_02 = (FJointStateBase *)(this->DirtyJoints).DenseVals.AllocatorInstance.Data;
    local_res20 = (FJointStateBase *)((longlong)this_02 + (longlong)iVar14 * 0x60);
    pFVar17 = local_res20;
    while( true ) {
      if ((this->DirtyJoints).DenseVals.ArrayNum != iVar14) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      FVar15 = local_a0;
      bVar4 = bVar5;
      bVar10 = bVar6;
      bVar7 = bVar8;
      if (this_02 == pFVar17) break;
      if ((char)this_02[1].JointSettings.Buffer.ArrayMax == '\0') {
        pFVar2 = *(FPBDJointConstraintHandle **)&this_02[1].JointSettings;
        EVar9 = FPBDJointConstraintHandle::ResimType(pFVar2);
        pFVar17 = local_res20;
        if (EVar9 != FullResim) goto LAB_1440e361b;
        if (this->CurFrame + 1 != this->LatestFrame) {
          if (this->bRewindDataOptimization == false) {
            if ((this->LatestFrame <= this->CurFrame) &&
               (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<3627022640780149467>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                                    ,0x2db,"IsResim()"), bVar10)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = *(FPBDJointConstraintHandle **)&this_02[1].JointSettings;
            EVar11 = FPBDJointConstraintHandle::SyncState(pFVar2);
            pFVar17 = local_res20;
            if (((EVar11 == InSync) &&
                (bVar10 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::
                          IsInSync<Chaos::FPBDJointConstraintHandle>
                                    (&this_02->JointSettings,pFVar2,FVar16,&this->PropertiesPool),
                pFVar17 = local_res20, !bVar10)) && (SkipDesyncTest == 0)) {
              FJointStateBase::ClearEntryAndFuture(this_02,FVar16);
              FPBDJointConstraintHandle::SetSyncState
                        (*(FPBDJointConstraintHandle **)&this_02[1].JointSettings,HardDesync);
              pFVar17 = local_res20;
            }
          }
          goto LAB_1440e361b;
        }
        FPBDJointConstraintHandle::SetSyncState(pFVar2,InSync);
        FPBDJointConstraintHandle::SetEnabledDuringResim(pFVar2,false);
        FJointStateBase::ClearEntryAndFuture(this_02,FVar16);
        this_02 = (FJointStateBase *)&this_02[1].JointProxies;
        pFVar17 = local_res20;
      }
      else {
LAB_1440e361b:
        this_02 = (FJointStateBase *)&this_02[1].JointProxies;
      }
    }
  }
  iVar14 = this->CurFrame + 1;
  this->CurFrame = iVar14;
  if (iVar14 < this->LatestFrame) {
    iVar14 = this->LatestFrame;
  }
  this->LatestFrame = iVar14;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar10) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_98);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GetPastJointStateAtFrame @ 1440e4ff0

FJointState * __thiscall
Chaos::FRewindData::GetPastJointStateAtFrame
          (FRewindData *this,FJointState *__return_storage_ptr__,FPBDJointConstraintHandle *param_1,
          int param_2,EParticleHistoryPhase param_3)

{
  bool bVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FJointState *pFVar6;
  TTuple<Chaos::FPBDJointConstraintHandle_const_*,int> *pTVar7;
  FJointStateBase *pFVar8;
  FJointStateBase *pFVar9;
  
  bVar1 = this->bRewindDataOptimization;
  if ((this->CurFrame < this->LatestFrame) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4501203830188279875>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\RewindData.h"
                         ,0x843,"!IsResim()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FJointState *)(*pcVar3)();
    return pFVar6;
  }
  if ((param_2 < this->CurFrame - this->FramesSaved) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4501203830188279876>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\RewindData.h"
                         ,0x844,"Frame >= GetEarliestFrame_Internal()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FJointState *)(*pcVar3)();
    return pFVar6;
  }
  pTVar7 = TSet<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FPBDJointConstraintHandle_const_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FPBDJointConstraintHandle_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FPBDJointConstraintHandle_const_*,int,0>,FDefaultSetAllocator>
                   *)&this->DirtyJoints,param_1);
  pFVar9 = (FJointStateBase *)0x0;
  pFVar8 = (FJointStateBase *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<Chaos::FPBDJointConstraintHandle_const_*,int> *)0x0) {
    pFVar8 = pFVar9;
  }
  if (pFVar8 != (FJointStateBase *)0x0) {
    uVar2 = (pFVar8->JointSettings).Next;
    uVar5 = 0;
    if ((int)uVar2 < (this->DirtyJoints).DenseVals.ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FJointState *)(*pcVar3)();
      return pFVar6;
    }
    pFVar9 = (FJointStateBase *)
             ((this->DirtyJoints).DenseVals.AllocatorInstance.Data + (longlong)(int)uVar2 * 0x60);
  }
  __return_storage_ptr__->State = pFVar9;
  __return_storage_ptr__->Pool = &this->PropertiesPool;
  if (bVar1 != false) {
    param_3 = PrePushData;
  }
  __return_storage_ptr__->Head = param_1;
  (__return_storage_ptr__->FrameAndPhase).Frame = param_2;
  (&__return_storage_ptr__->FrameAndPhase)->Phase = (uint)param_3;
  return __return_storage_ptr__;
}

// GetPastStateAtFrame @ 1440e5180

FGeometryParticleState * __thiscall
Chaos::FRewindData::GetPastStateAtFrame
          (FRewindData *this,FGeometryParticleState *__return_storage_ptr__,
          TGeometryParticleHandleImp<double,3,1> *param_1,int param_2,EParticleHistoryPhase param_3)

{
  bool bVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FGeometryParticleState *pFVar6;
  TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int> *pTVar7;
  FGeometryParticleStateBase *pFVar8;
  FGeometryParticleStateBase *pFVar9;
  
  bVar1 = this->bRewindDataOptimization;
  if ((this->CurFrame < this->LatestFrame) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4501203830188279875>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\RewindData.h"
                         ,0x843,"!IsResim()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FGeometryParticleState *)(*pcVar3)();
    return pFVar6;
  }
  if ((param_2 < this->CurFrame - this->FramesSaved) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4501203830188279876>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\RewindData.h"
                         ,0x844,"Frame >= GetEarliestFrame_Internal()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FGeometryParticleState *)(*pcVar3)();
    return pFVar6;
  }
  pTVar7 = TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int,0>,FDefaultSetAllocator>
                   *)&this->DirtyParticles,param_1);
  pFVar9 = (FGeometryParticleStateBase *)0x0;
  pFVar8 = (FGeometryParticleStateBase *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,int> *)0x0) {
    pFVar8 = pFVar9;
  }
  if (pFVar8 != (FGeometryParticleStateBase *)0x0) {
    uVar2 = (pFVar8->ParticlePositionRotation).Next;
    uVar5 = 0;
    if ((int)uVar2 < (this->DirtyParticles).DenseVals.ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FGeometryParticleState *)(*pcVar3)();
      return pFVar6;
    }
    pFVar9 = (FGeometryParticleStateBase *)
             ((this->DirtyParticles).DenseVals.AllocatorInstance.Data + (longlong)(int)uVar2 * 0x1a0
             );
  }
  __return_storage_ptr__->State = pFVar9;
  __return_storage_ptr__->Pool = &this->PropertiesPool;
  if (bVar1 != false) {
    param_3 = PrePushData;
  }
  __return_storage_ptr__->Particle = param_1;
  (__return_storage_ptr__->FrameAndPhase).Frame = param_2;
  (&__return_storage_ptr__->FrameAndPhase)->Phase = (uint)param_3;
  return __return_storage_ptr__;
}

// GetUseCollisionResimCache @ 1440e5d40

bool __thiscall Chaos::FRewindData::GetUseCollisionResimCache(FRewindData *this)

{
  if (this->Solver != (FPBDRigidsSolver *)0x0) {
    return (bool)(char)this->Solver->_padding_;
  }
  return false;
}

// MarkDirtyFromPT @ 1440e84b0

void __thiscall
Chaos::FRewindData::MarkDirtyFromPT
          (FRewindData *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  *pTVar4;
  ESyncState *pEVar5;
  FParticlePositionRotation *this_00;
  FParticleVelocities *this_01;
  FParticleDynamicMisc *this_02;
  FFrameAndPhase FVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  TGeometryParticleHandleImp<double,3,1> *pTVar8;
  bool local_res8 [8];
  EParticleHistoryPhase local_res18 [8];
  
  if (this->bRewindDataOptimization != false) {
    pTVar4 = TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
             ::Find(&this->DirtyParticles,param_1);
    if (pTVar4 == (TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
                   *)0x0) {
      local_res8[0] = true;
      local_res18[0] = PrePushData;
      CacheDirtyParticleData(this,param_1,local_res18,local_res8);
      return;
    }
    pTVar4->LastDirtyFrame = this->CurFrame;
    return;
  }
  pTVar4 = FindOrAddDirtyObj(this,param_1,-1);
  pTVar4->DirtyDynamics = this->CurFrame;
  if ((this->CurFrame < this->LatestFrame) &&
     (pEVar5 = TGeometryParticlesImp<double,3,0>::SyncState
                         ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                          (int)param_1->_padding_), *pEVar5 == InSync)) {
    pTVar4->LastDirtyFrame = this->CurFrame;
    bVar1 = false;
    FVar6 = (FFrameAndPhase)(this->CurFrame & 0x3fffffffU | 0x40000000);
    iVar3 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::FindIdx
                      ((TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *)pTVar4,FVar6
                      );
    bVar2 = false;
    if (iVar3 != -1) goto LAB_1440e85ce;
  }
  else {
    pTVar4->LastDirtyFrame = this->CurFrame;
    FVar6 = (FFrameAndPhase)(this->CurFrame & 0x3fffffffU | 0x40000000);
    bVar2 = true;
  }
  bVar1 = bVar2;
  this_00 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::WriteAccessImp<0>
                      ((TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *)pTVar4,FVar6
                       ,&this->PropertiesPool);
  if (this_00 != (FParticlePositionRotation *)0x0) {
    FParticlePositionRotation::CopyFrom<Chaos::TGeometryParticleHandleImp<double,3,1>_>
              (this_00,param_1);
  }
LAB_1440e85ce:
  pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    pTVar7 = param_1;
  }
  if (pTVar7 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    if (((bVar1) ||
        (iVar3 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::FindIdx
                           (&(pTVar4->History).Velocities,FVar6), iVar3 == -1)) &&
       (this_01 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::WriteAccessImp<0>
                            (&(pTVar4->History).Velocities,FVar6,&this->PropertiesPool),
       this_01 != (FParticleVelocities *)0x0)) {
      FParticleVelocities::CopyFrom<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
                (this_01,(TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar7);
    }
    pTVar8 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar7->_padding_ + 4)) {
      pTVar8 = pTVar7;
    }
    if (((pTVar8 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
        ((bVar1 || (iVar3 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::FindIdx
                                      (&(pTVar4->History).DynamicsMisc,FVar6), iVar3 == -1)))) &&
       (this_02 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::WriteAccessImp<0>
                            (&(pTVar4->History).DynamicsMisc,FVar6,&this->PropertiesPool),
       this_02 != (FParticleDynamicMisc *)0x0)) {
      FParticleDynamicMisc::CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                (this_02,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar8);
    }
  }
  return;
}

// MarkDirtyJointFromPT @ 1440e8690

void __thiscall
Chaos::FRewindData::MarkDirtyJointFromPT(FRewindData *this,FPBDJointConstraintHandle *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  ESyncState EVar3;
  int iVar4;
  TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *pTVar5;
  FPBDJointSettings *pFVar6;
  FPBDJointSettings *pFVar7;
  FPBDJointSettings *pFVar8;
  longlong lVar9;
  FFrameAndPhase FVar10;
  FPBDJointSettings *pFVar11;
  bool local_res8 [8];
  EParticleHistoryPhase local_res18 [8];
  
  if (this->bRewindDataOptimization != false) {
    pTVar5 = TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
             ::Find(&this->DirtyJoints,param_1);
    if (pTVar5 == (TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *)0x0)
    {
      local_res8[0] = true;
      local_res18[0] = PrePushData;
      CacheDirtyJointData(this,param_1,local_res18,local_res8);
      return;
    }
    pTVar5->LastDirtyFrame = this->CurFrame;
    return;
  }
  if ((this->CurFrame < this->LatestFrame) &&
     (EVar3 = FPBDJointConstraintHandle::SyncState(param_1), EVar3 == InSync)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  pTVar5 = FindOrAddDirtyObj(this,param_1,-1);
  pTVar5->LastDirtyFrame = this->CurFrame;
  FVar10 = (FFrameAndPhase)(this->CurFrame & 0x3fffffffU | 0x40000000);
  if ((bVar2) &&
     (iVar4 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::FindIdx
                        ((TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1> *)pTVar5,FVar10),
     iVar4 != -1)) {
    return;
  }
  pFVar6 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::WriteAccessImp<0>
                     ((TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1> *)pTVar5,FVar10,
                      &this->PropertiesPool);
  if (pFVar6 != (FPBDJointSettings *)0x0) {
    pFVar7 = FPBDJointConstraintHandle::GetSettings(param_1);
    lVar9 = 6;
    do {
      pFVar11 = pFVar6;
      pFVar8 = pFVar7;
      pFVar6 = (FPBDJointSettings *)&(pFVar11->ConnectorTransforms).V[1].field_0x20;
      uVar1 = *(undefined8 *)&(pFVar8->ConnectorTransforms).V[0].field_0x8;
      pFVar7 = (FPBDJointSettings *)&(pFVar8->ConnectorTransforms).V[1].field_0x20;
      *(undefined8 *)(pFVar11->ConnectorTransforms).V =
           *(undefined8 *)(pFVar8->ConnectorTransforms).V;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x8 = uVar1;
      uVar1 = *(undefined8 *)&(pFVar8->ConnectorTransforms).V[0].field_0x18;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x10 =
           *(undefined8 *)&(pFVar8->ConnectorTransforms).V[0].field_0x10;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x18 = uVar1;
      uVar1 = *(undefined8 *)&(pFVar8->ConnectorTransforms).V[0].field_0x28;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x20 =
           *(undefined8 *)&(pFVar8->ConnectorTransforms).V[0].field_0x20;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x28 = uVar1;
      uVar1 = *(undefined8 *)&(pFVar8->ConnectorTransforms).V[0].field_0x38;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x30 =
           *(undefined8 *)&(pFVar8->ConnectorTransforms).V[0].field_0x30;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x38 = uVar1;
      uVar1 = *(undefined8 *)&(pFVar8->ConnectorTransforms).V[0].field_0x48;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x40 =
           *(undefined8 *)&(pFVar8->ConnectorTransforms).V[0].field_0x40;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x48 = uVar1;
      uVar1 = *(undefined8 *)&(pFVar8->ConnectorTransforms).V[0].field_0x58;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x50 =
           *(undefined8 *)&(pFVar8->ConnectorTransforms).V[0].field_0x50;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x58 = uVar1;
      uVar1 = *(undefined8 *)&(pFVar8->ConnectorTransforms).V[1].field_0x8;
      *(undefined8 *)((pFVar11->ConnectorTransforms).V + 1) =
           *(undefined8 *)((pFVar8->ConnectorTransforms).V + 1);
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x8 = uVar1;
      uVar1 = *(undefined8 *)&(pFVar8->ConnectorTransforms).V[1].field_0x18;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x10 =
           *(undefined8 *)&(pFVar8->ConnectorTransforms).V[1].field_0x10;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x18 = uVar1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar1 = *(undefined8 *)&(pFVar8->ConnectorTransforms).V[1].field_0x28;
    *(undefined8 *)pFVar6 = *(undefined8 *)pFVar7;
    *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x28 = uVar1;
    uVar1 = *(undefined8 *)&(pFVar8->ConnectorTransforms).V[1].field_0x38;
    *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x30 =
         *(undefined8 *)&(pFVar8->ConnectorTransforms).V[1].field_0x30;
    *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x38 = uVar1;
  }
  return;
}

// ProcessDirtyKinematicTargets @ 1440e8d60

void __thiscall
Chaos::FRewindData::ProcessDirtyKinematicTargets
          (FRewindData *this,TParticleView<Chaos::TPBDRigidParticles<double,3>_> *param_1)

{
  TParticleHandleBase<double,3>_u_0 *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  FKinematicTarget *pFVar6;
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  *pTVar7;
  ESyncState *pEVar8;
  FFrameAndPhase FVar9;
  TParticleHandleBase<double,3>_u_0 this_00;
  int iVar10;
  TGeometryParticleHandleImp<double,3,1> *pTVar11;
  int iStack_5c;
  undefined1 local_58 [24];
  int iStack_40;
  undefined4 uStack_3c;
  int local_38;
  int local_34;
  int local_30;
  
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_58,
             (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
              *)param_1);
  if ((TPBDRigidParticles<double,3> *)local_58._16_8_ != (TPBDRigidParticles<double,3> *)0x0) {
    this_00 = (TParticleHandleBase<double,3>_u_0)local_58._16_8_;
    iVar10 = iStack_40;
    do {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_58);
      pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)
               TPBDRigidParticles<double,3>::Handle(this_00.PBDRigidParticles,iVar10);
      if (this->bRewindDataOptimization != false) {
        pTVar11 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (*(char *)((longlong)&pTVar5->_padding_ + 4) != '\0') {
          pTVar11 = pTVar5;
        }
        if ((pTVar11 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
           (pFVar6 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                               ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar11->_padding_,
                                (int)pTVar11->_padding_), pFVar6->Mode != None)) {
          FVar9 = (FFrameAndPhase)(this->CurFrame & 0x3fffffff);
          pTVar7 = FindOrAddDirtyObj(this,pTVar5,-1);
          pTVar7->LastDirtyFrame = this->CurFrame;
          if (this->CurFrame < this->LatestFrame) {
            if (pTVar7->bResimAsFollower == false) {
              DesyncIfNecessary<0,Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
                        (this,pTVar7,FVar9);
            }
            pEVar8 = TGeometryParticlesImp<double,3,0>::SyncState
                               ((TGeometryParticlesImp<double,3,0> *)pTVar11->_padding_,
                                (int)pTVar11->_padding_);
            if (*pEVar8 == InSync) goto LAB_1440e8eaf;
          }
          if (((this->LatestFrame <= this->CurFrame) ||
              (pEVar8 = TGeometryParticlesImp<double,3,0>::SyncState
                                  ((TGeometryParticlesImp<double,3,0> *)pTVar5->_padding_,
                                   (int)pTVar5->_padding_), *pEVar8 != InSync)) &&
             (pFVar6 = TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::WriteAccessImp<0>
                                 (&(pTVar7->History).KinematicTarget,FVar9,&this->PropertiesPool),
             pFVar6 != (FKinematicTarget *)0x0)) {
            CopyDataFromObject<Chaos::FKinematicTarget,Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
                      (pFVar6,(TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar11);
          }
        }
      }
LAB_1440e8eaf:
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_58);
      do {
        uVar3 = local_58._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_58._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          iVar10 = iVar10 + 1;
          iStack_40 = iVar10;
          if (local_34 <= iVar10) {
LAB_1440e8ec9:
            local_38 = local_38 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_58);
            this_00 = (TParticleHandleBase<double,3>_u_0)local_58._16_8_;
            iVar10 = iStack_40;
          }
        }
        else {
          iVar10 = local_30 + 1;
          local_30 = iVar10;
          if (*(int *)(local_58._8_8_ + 8) <= iVar10) goto LAB_1440e8ec9;
          if ((iVar10 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar1 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar3)->Data + (longlong)iVar10 * 8);
          this_00 = (TParticleHandleBase<double,3>_u_0)pTVar1->GeometryParticles;
          iVar10 = *(int *)(pTVar1 + 1);
          if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
              (TPBDRigidParticles<double,3> *)0x0) {
            iStack_5c = (uint)iStack_5c._1_3_ << 8;
          }
          else {
            iStack_5c = CONCAT31(iStack_5c._1_3_,(this_00.GeometryParticles)->MParticleType);
          }
          uStack_3c = iStack_5c;
          iStack_40 = iVar10;
          local_58._16_8_ = this_00;
        }
        if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
            (TPBDRigidParticles<double,3> *)0x0) {
          return;
        }
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_58);
        bVar4 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                          ((TGeometryParticleHandleImp<double,3,0> *)(local_58 + 0x10));
      } while (bVar4);
    } while ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles !=
             (TPBDRigidParticles<double,3> *)0x0);
  }
  return;
}

// ProcessDirtyPTParticles @ 1440e8fd0

void __thiscall
Chaos::FRewindData::ProcessDirtyPTParticles
          (FRewindData *this,TParticleView<Chaos::TPBDRigidParticles<double,3>_> *param_1)

{
  TParticleHandleBase<double,3>_u_0 *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  TParticleHandleBase<double,3>_u_0 this_00;
  int iVar6;
  int iVar7;
  int iStack_4c;
  undefined1 local_48 [24];
  int iStack_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  int local_20;
  
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48,
             (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
              *)param_1);
  if ((TPBDRigidParticles<double,3> *)local_48._16_8_ != (TPBDRigidParticles<double,3> *)0x0) {
    this_00 = (TParticleHandleBase<double,3>_u_0)local_48._16_8_;
    iVar6 = iStack_30;
    iVar7 = 0;
    do {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48);
      pTVar5 = TPBDRigidParticles<double,3>::Handle(this_00.PBDRigidParticles,iVar6);
      PushPTDirtyData(this,pTVar5,iVar7);
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48);
      do {
        uVar3 = local_48._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_48._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          iVar6 = iVar6 + 1;
          iStack_30 = iVar6;
          if (local_24 <= iVar6) {
LAB_1440e9051:
            local_28 = local_28 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48);
            this_00 = (TParticleHandleBase<double,3>_u_0)local_48._16_8_;
            iVar6 = iStack_30;
          }
        }
        else {
          iVar6 = local_20 + 1;
          local_20 = iVar6;
          if (*(int *)(local_48._8_8_ + 8) <= iVar6) goto LAB_1440e9051;
          if ((iVar6 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar1 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar3)->Data + (longlong)iVar6 * 8);
          this_00 = (TParticleHandleBase<double,3>_u_0)pTVar1->GeometryParticles;
          iVar6 = *(int *)(pTVar1 + 1);
          if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
              (TPBDRigidParticles<double,3> *)0x0) {
            iStack_4c = (uint)iStack_4c._1_3_ << 8;
          }
          else {
            iStack_4c = CONCAT31(iStack_4c._1_3_,(this_00.GeometryParticles)->MParticleType);
          }
          uStack_2c = iStack_4c;
          iStack_30 = iVar6;
          local_48._16_8_ = this_00;
        }
        if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
            (TPBDRigidParticles<double,3> *)0x0) {
          return;
        }
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48);
        bVar4 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                          ((TGeometryParticleHandleImp<double,3,0> *)(local_48 + 0x10));
      } while (bVar4);
      iVar7 = iVar7 + 1;
    } while ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles !=
             (TPBDRigidParticles<double,3> *)0x0);
  }
  return;
}

// PushGTDirtyData @ 1440ebfb0

void __thiscall
Chaos::FRewindData::PushGTDirtyData
          (FRewindData *this,FDirtyPropertiesManager *param_1,int param_2,FDirtyProxy *param_3,
          FShapeDirtyData *param_4)

{
  IPhysicsProxyBase *pIVar1;
  FPhysicsSolverBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  *pTVar5;
  FParticleDynamics *pFVar6;
  TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *pTVar7;
  FFrameAndPhase FVar8;
  int iVar9;
  bool local_res8 [8];
  EParticleHistoryPhase local_res20 [8];
  bool local_98;
  EParticleHistoryPhase local_97 [7];
  <lambda_2> local_90;
  FRewindData *local_80;
  IPhysicsProxyBase *local_78;
  <lambda_3> local_70;
  <lambda_4> local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  this->bNeedsSave = true;
  pIVar1 = param_3->Proxy;
  if (pIVar1 != (IPhysicsProxyBase *)0x0) {
    local_90.__this = this;
    local_90.Dirty = param_3;
    local_80 = this;
    local_78 = pIVar1;
    if (pIVar1->Type == JointConstraintType) {
      pFVar2 = pIVar1[1].Solver;
      if (pFVar2 != (FPhysicsSolverBase *)0x0) {
        if (this->bRewindDataOptimization == false) {
          local_60.DirtyPropHelper = &local_90;
          local_60.Joint = (FPBDJointConstraintHandle *)pFVar2;
          `Chaos::FRewindData::PushGTDirtyData'::__l2::<lambda_1>::
          operator()<Chaos::FPBDJointConstraintHandle_*,_Chaos::FRewindData::PushGTDirtyData_::__l29::<lambda_4>_>
                    (&local_80,(FPBDJointConstraintHandle *)pFVar2,&local_60);
        }
        else {
          pTVar7 = TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
                   ::Find(&this->DirtyJoints,(FPBDJointConstraintHandle *)pFVar2);
          if (pTVar7 == (TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle> *
                        )0x0) {
            iVar9 = -1;
            if (pIVar1->InitializedOnStep == -1) {
              iVar9 = this->CurFrame;
            }
            FindOrAddDirtyObj(this,(FPBDJointConstraintHandle *)pFVar2,iVar9);
            local_98 = true;
            local_97[0] = PrePushData;
            CacheDirtyJointData(this,(FPBDJointConstraintHandle *)pFVar2,local_97,&local_98);
          }
          else {
            pTVar7->LastDirtyFrame = this->CurFrame;
          }
        }
      }
    }
    else if (pIVar1->Type == SingleParticleProxy) {
      pFVar2 = pIVar1[1].Solver;
      if (pFVar2 != (FPhysicsSolverBase *)0x0) {
        if (this->bRewindDataOptimization == false) {
          local_70.DirtyPropHelper = &local_90;
          local_70.PTParticle = (TGeometryParticleHandleImp<double,3,1> *)pFVar2;
          bVar4 = `Chaos::FRewindData::PushGTDirtyData'::__l2::<lambda_1>::
                  operator()<Chaos::TGeometryParticleHandleImp<double,3,1>_*,_Chaos::FRewindData::PushGTDirtyData_::__l8::<lambda_3>_>
                            (&local_80,(TGeometryParticleHandleImp<double,3,1> *)pFVar2,&local_70);
          if ((bVar4) &&
             (pFVar6 = FDirtyChaosProperties::FindDynamics(&param_3->PropertyData,param_1,param_2),
             pFVar6 != (FParticleDynamics *)0x0)) {
            iVar9 = -1;
            if (pIVar1->InitializedOnStep == -1) {
              iVar9 = this->CurFrame;
            }
            pTVar5 = FindOrAddDirtyObj(this,(TGeometryParticleHandleImp<double,3,1> *)pFVar2,iVar9);
            pTVar5->LastDirtyFrame = this->CurFrame;
            local_60.Joint = *(FPBDJointConstraintHandle **)&pFVar6->MAcceleration;
            local_60.DirtyPropHelper = *(<lambda_2> **)&(pFVar6->MAcceleration).field_0x8;
            FVar8 = (FFrameAndPhase)(this->CurFrame & 0x3fffffffU | 0x40000000);
            local_50 = *(undefined8 *)&(pFVar6->MAngularAcceleration).field_0x4;
            uStack_48 = *(undefined8 *)&pFVar6->MLinearImpulseVelocity;
            local_40 = *(undefined8 *)&(pFVar6->MLinearImpulseVelocity).field_0x8;
            uStack_38 = *(undefined8 *)&(pFVar6->MAngularImpulseVelocity).field_0x4;
            pFVar6 = TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::WriteAccessImp<1>
                               (&(pTVar5->History).Dynamics,FVar8,&this->PropertiesPool);
            *(FPBDJointConstraintHandle **)&pFVar6->MAcceleration = local_60.Joint;
            *(<lambda_2> **)&(pFVar6->MAcceleration).field_0x8 = local_60.DirtyPropHelper;
            *(undefined8 *)&(pFVar6->MAngularAcceleration).field_0x4 = local_50;
            *(undefined8 *)&pFVar6->MLinearImpulseVelocity = uStack_48;
            *(undefined8 *)&(pFVar6->MLinearImpulseVelocity).field_0x8 = local_40;
            *(undefined8 *)&(pFVar6->MAngularImpulseVelocity).field_0x4 = uStack_38;
            pTVar5->DirtyDynamics = this->CurFrame;
            bVar4 = FGeometryParticleStateBase::IsCleanExcludingDynamics(&pTVar5->History,FVar8);
            if ((!bVar4) &&
               (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<3627022640780149796>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                                   ,0x424,"Latest.IsCleanExcludingDynamics(PostPushData)"), bVar4))
            {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
        }
        else {
          pTVar5 = TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
                   ::Find(&this->DirtyParticles,(TGeometryParticleHandleImp<double,3,1> *)pFVar2);
          if (pTVar5 == (TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
                         *)0x0) {
            iVar9 = -1;
            if (pIVar1->InitializedOnStep == -1) {
              iVar9 = this->CurFrame;
            }
            FindOrAddDirtyObj(this,(TGeometryParticleHandleImp<double,3,1> *)pFVar2,iVar9);
            local_res8[0] = true;
            local_res20[0] = PrePushData;
            CacheDirtyParticleData
                      (this,(TGeometryParticleHandleImp<double,3,1> *)pFVar2,local_res20,local_res8)
            ;
          }
          else {
            pTVar5->LastDirtyFrame = this->CurFrame;
          }
        }
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3627022640780149838>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                         ,0x44e,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// PushPTDirtyData @ 1440ec2a0

void __thiscall
Chaos::FRewindData::PushPTDirtyData
          (FRewindData *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,int param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  EObjectStateType EVar10;
  int iVar11;
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  *pTVar12;
  ESyncState *pEVar13;
  FParticlePositionRotation *pFVar14;
  TVector<double,3> *pTVar15;
  TVector<float,3> *pTVar16;
  TRotation<double,3> *pTVar17;
  FParticleVelocities *pFVar18;
  FParticleDynamicMisc *this_00;
  FFrameAndPhase FVar19;
  uint uVar20;
  uint uVar21;
  FParticlePositionRotation *local_res8;
  EParticleHistoryPhase local_res20 [8];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  TVector<float,3> local_c8;
  TVector<double,3> local_b8;
  TVector<double,3> local_a0;
  TRotation<double,3> local_88;
  TRotation<double,3> local_68;
  
  if (this->bRewindDataOptimization != false) {
    pTVar12 = TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
              ::Find(&this->DirtyParticles,(TGeometryParticleHandleImp<double,3,1> *)param_1);
    if ((pTVar12 !=
         (TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
          *)0x0) && (pTVar12->InitializedOnStep != this->CurFrame)) {
      pTVar12->LastDirtyFrame = this->CurFrame;
      return;
    }
    local_res8 = (FParticlePositionRotation *)CONCAT71(local_res8._1_7_,1);
    local_res20[0] = PostCallbacks;
    CacheDirtyParticleData
              (this,(TGeometryParticleHandleImp<double,3,1> *)param_1,local_res20,
               (bool *)&local_res8);
    return;
  }
  if ((this->CurFrame < this->LatestFrame) &&
     (pEVar13 = TGeometryParticlesImp<double,3,0>::SyncState
                          (*(TGeometryParticlesImp<double,3,0> **)param_1,
                           *(int *)&param_1->field_0x8), *pEVar13 == InSync)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  pTVar12 = FindOrAddDirtyObj(this,(TGeometryParticleHandleImp<double,3,1> *)param_1,-1);
  pTVar12->LastDirtyFrame = this->CurFrame;
  FVar19 = (FFrameAndPhase)(this->CurFrame & 0x3fffffffU | 0x80000000);
  if ((bVar8) ||
     (iVar11 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::FindIdx
                         ((TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *)pTVar12,
                          FVar19), iVar11 == -1)) {
    pFVar14 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::WriteAccessImp<0>
                        ((TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *)pTVar12,
                         FVar19,&this->PropertiesPool);
    local_res8 = pFVar14;
    if (pFVar14 != (FParticlePositionRotation *)0x0) {
      bVar9 = TPBDRigidParticleHandleImp<double,3,1>::IsMovingKinematic(param_1);
      if (bVar9) {
        pTVar15 = TParticles<double,3>::GetX
                            (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
        TKinematicGeometryParticlesImp<double,3,0>::GetV
                  (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
                   (TVector<double,3> *)&local_f8,*(int *)&param_1->field_0x8);
        pFVar14 = local_res8;
        dVar2 = *(double *)&pTVar15->field_0x10;
        dVar3 = *(double *)&pTVar15->field_0x8;
        dVar4 = (double)this->Solver->_padding_;
        *(double *)&local_res8->MX = *(double *)pTVar15 - dVar4 * local_f8;
        *(double *)&(local_res8->MX).field_0x8 = dVar3 - dVar4 * local_f0;
        *(double *)&(local_res8->MX).field_0x10 = dVar2 - dVar4 * local_e8;
        lVar5 = this->Solver->_padding_;
        uVar20 = (uint)lVar5 ^ (uint)__xmm_80000000000000008000000000000000;
        uVar21 = (uint)((ulonglong)lVar5 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        pTVar16 = TKinematicGeometryParticleHandleImp<double,3,1>::GetWf
                            ((TKinematicGeometryParticleHandleImp<double,3,1> *)param_1,&local_c8);
        local_d0 = (double)*(float *)&pTVar16->field_0x8;
        local_d8 = (double)*(float *)&pTVar16->field_0x4;
        local_e0 = (double)*(float *)pTVar16;
        pTVar17 = TGeometryParticleHandleImp<double,3,1>::GetR
                            ((TGeometryParticleHandleImp<double,3,1> *)param_1,&local_88);
        pTVar17 = TRotation<double,3>::IntegrateRotationWithAngularVelocity
                            (&local_68,pTVar17,(TVector<double,3> *)&local_e0,
                             (double)CONCAT44(uVar21,uVar20));
        dVar2 = *(double *)&pTVar17->field_0x8;
        dVar3 = *(double *)&pTVar17->field_0x10;
        dVar4 = *(double *)&pTVar17->field_0x18;
        *(float *)&pFVar14->MR = (float)*(double *)pTVar17;
        *(float *)&(pFVar14->MR).field_0x4 = (float)dVar2;
        *(float *)&(pFVar14->MR).field_0x8 = (float)dVar3;
        *(float *)&(pFVar14->MR).field_0xc = (float)dVar4;
      }
      else {
        pTVar15 = TParticles<double,3>::GetX
                            (*(TParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
        uVar7 = *(undefined8 *)&pTVar15->field_0x8;
        *(undefined8 *)&pFVar14->MX = *(undefined8 *)pTVar15;
        *(undefined8 *)&(pFVar14->MX).field_0x8 = uVar7;
        *(undefined8 *)&(pFVar14->MX).field_0x10 = *(undefined8 *)&pTVar15->field_0x10;
        lVar5 = *(longlong *)param_1;
        uVar20 = *(uint *)&param_1->field_0x8;
        uVar21 = 0;
        if ((int)uVar20 < *(int *)(lVar5 + 0x50)) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar1 = (undefined8 *)(*(longlong *)(lVar5 + 0x48) + (longlong)(int)uVar20 * 0x10);
        uVar7 = puVar1[1];
        *(undefined8 *)&pFVar14->MR = *puVar1;
        *(undefined8 *)&(pFVar14->MR).field_0x8 = uVar7;
      }
    }
    if (!bVar8) goto LAB_1440ec59a;
LAB_1440ec5b3:
    pFVar18 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::WriteAccessImp<0>
                        (&(pTVar12->History).Velocities,FVar19,&this->PropertiesPool);
    if (pFVar18 != (FParticleVelocities *)0x0) {
      pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::GetPreV(param_1,&local_b8);
      dVar2 = *(double *)&pTVar15->field_0x8;
      dVar3 = *(double *)&pTVar15->field_0x10;
      *(float *)&pFVar18->MV = (float)*(double *)pTVar15;
      *(float *)&(pFVar18->MV).field_0x4 = (float)dVar2;
      *(float *)&(pFVar18->MV).field_0x8 = (float)dVar3;
      pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::GetPreW(param_1,&local_a0);
      dVar2 = *(double *)&pTVar15->field_0x8;
      dVar3 = *(double *)&pTVar15->field_0x10;
      *(float *)&pFVar18->MW = (float)*(double *)pTVar15;
      *(float *)&(pFVar18->MW).field_0x4 = (float)dVar2;
      *(float *)&(pFVar18->MW).field_0x8 = (float)dVar3;
    }
    if (bVar8) goto LAB_1440ec64e;
  }
  else {
LAB_1440ec59a:
    iVar11 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::FindIdx
                       (&(pTVar12->History).Velocities,FVar19);
    if (iVar11 == -1) goto LAB_1440ec5b3;
  }
  iVar11 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::FindIdx
                     (&(pTVar12->History).DynamicsMisc,FVar19);
  if (iVar11 != -1) {
    return;
  }
LAB_1440ec64e:
  this_00 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::WriteAccessImp<0>
                      (&(pTVar12->History).DynamicsMisc,FVar19,&this->PropertiesPool);
  if (this_00 != (FParticleDynamicMisc *)0x0) {
    FParticleDynamicMisc::CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>(this_00,param_1);
    EVar10 = TPBDRigidParticleHandleImp<double,3,1>::PreObjectState(param_1);
    this_00->MObjectState = EVar10;
  }
  return;
}

// PushStateAtFrame @ 1440ec6c0

void __thiscall
Chaos::FRewindData::PushStateAtFrame
          (FRewindData *this,TGeometryParticleHandleImp<double,3,1> *param_1,int param_2,
          EParticleHistoryPhase param_3,TVector<double> *param_4,TQuat<double> *param_5,
          TVector<double> *param_6,TVector<double> *param_7,bool param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  ESyncState *pEVar6;
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  *pTVar7;
  FParticlePositionRotation *pFVar8;
  FParticleVelocities *pFVar9;
  FParticleDynamicMisc *pFVar10;
  EObjectStateType EVar11;
  FFrameAndPhase FVar12;
  
  if ((this->CurFrame < this->LatestFrame) &&
     (pEVar6 = TGeometryParticlesImp<double,3,0>::SyncState
                         ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                          (int)param_1->_padding_), *pEVar6 == InSync)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  pTVar7 = FindOrAddDirtyObj(this,param_1,-1);
  FVar12 = (FFrameAndPhase)((uint)param_3 << 0x1e | param_2 & 0x3fffffffU);
  iVar5 = this->LatestTargetFrame;
  if (bVar4) {
    if (param_2 < iVar5) {
      param_2 = iVar5;
    }
    this->LatestTargetFrame = param_2;
LAB_1440ec764:
    pFVar8 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0>::Insert
                       (&(pTVar7->History).TargetPositions,FVar12,&this->PropertiesPool);
    dVar1 = (param_4->field0_0x0)._s_0.Z;
    dVar2 = (param_4->field0_0x0)._s_0.Y;
    *(double *)&pFVar8->MX = (param_4->field0_0x0)._s_0.X;
    *(double *)&(pFVar8->MX).field_0x8 = dVar2;
    *(double *)&(pFVar8->MX).field_0x10 = dVar1;
    dVar1 = param_5->Y;
    dVar2 = param_5->Z;
    dVar3 = param_5->W;
    *(float *)&pFVar8->MR = (float)param_5->X;
    *(float *)&(pFVar8->MR).field_0x4 = (float)dVar1;
    *(float *)&(pFVar8->MR).field_0x8 = (float)dVar2;
    *(float *)&(pFVar8->MR).field_0xc = (float)dVar3;
    if (!bVar4) goto LAB_1440ec7ef;
LAB_1440ec806:
    pFVar9 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0>::Insert
                       (&(pTVar7->History).TargetVelocities,FVar12,&this->PropertiesPool);
    dVar1 = (param_6->field0_0x0)._s_0.Z;
    dVar2 = (param_6->field0_0x0)._s_0.Y;
    *(float *)&pFVar9->MV = (float)(param_6->field0_0x0)._s_0.X;
    *(float *)&(pFVar9->MV).field_0x4 = (float)dVar2;
    *(float *)&(pFVar9->MV).field_0x8 = (float)dVar1;
    dVar1 = (param_7->field0_0x0)._s_0.Z;
    dVar2 = (param_7->field0_0x0)._s_0.Y;
    *(float *)&pFVar9->MW = (float)(param_7->field0_0x0)._s_0.X;
    *(float *)&(pFVar9->MW).field_0x4 = (float)dVar2;
    *(float *)&(pFVar9->MW).field_0x8 = (float)dVar1;
    if (bVar4) goto LAB_1440ec8b3;
  }
  else {
    this->LatestTargetFrame = iVar5;
    iVar5 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0>::FindIdx
                      (&(pTVar7->History).TargetPositions,FVar12);
    if (iVar5 == -1) goto LAB_1440ec764;
LAB_1440ec7ef:
    iVar5 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0>::FindIdx
                      (&(pTVar7->History).TargetVelocities,FVar12);
    if (iVar5 == -1) goto LAB_1440ec806;
  }
  iVar5 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0>::FindIdx
                    (&(pTVar7->History).TargetStates,FVar12);
  if (iVar5 != -1) {
    return;
  }
LAB_1440ec8b3:
  pFVar10 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0>::Insert
                      (&(pTVar7->History).TargetStates,FVar12,&this->PropertiesPool);
  EVar11 = Dynamic;
  if (param_8) {
    EVar11 = Sleeping;
  }
  pFVar10->MObjectState = EVar11;
  pFVar10->bDisabled = false;
  return;
}

// RegisterEvolutionCallbacks @ 1440ee3e0

void __thiscall Chaos::FRewindData::RegisterEvolutionCallbacks(FRewindData *this)

{
  bool bVar1;
  undefined ***pppuVar2;
  undefined1 local_res8 [8];
  code *local_38 [2];
  undefined **local_28;
  FRewindData *local_20;
  undefined ***local_10;
  
  if (((this->Solver != (FPBDRigidsSolver *)0x0) ||
      (bVar1 = `Chaos::FRewindData::RegisterEvolutionCallbacks'::__l3::<lambda_1>::operator()
                         (local_res8), bVar1)) &&
     (((this->Solver->MEvolution).Ptr != (FPBDRigidsEvolutionGBF *)0x0 ||
      (bVar1 = `Chaos::FRewindData::RegisterEvolutionCallbacks'::__l6::<lambda_2>::operator()
                         (local_res8), bVar1)))) {
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Chaos::FRewindData::RegisterEvolutionCallbacks'::`2'::<lambda_3>,0,0>
                ::_vftable_;
    local_10 = (undefined ***)0x0;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FRewindData::RegisterEvolutionCallbacks'::__l2::<lambda_3>,void,Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_&>
                  ::Call;
    local_20 = this;
    TFunction<void___cdecl(Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_&)>::operator=
              ((TFunction<void___cdecl(Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_&)>
                *)&((this->Solver->MEvolution).Ptr)->_padding_,
               (TFunction<void___cdecl(Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_&)>
                *)local_38);
    if (local_38[0] != (code *)0x0) {
      pppuVar2 = local_10;
      if (local_10 == (undefined ***)0x0) {
        pppuVar2 = &local_28;
      }
      (*(code *)(*pppuVar2)[2])();
    }
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Chaos::FRewindData::RegisterEvolutionCallbacks'::`2'::<lambda_4>,0,0>
                ::_vftable_;
    local_10 = (undefined ***)0x0;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FRewindData::RegisterEvolutionCallbacks'::__l2::<lambda_4>,void,Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_&>
                  ::Call;
    local_20 = this;
    TFunction<void___cdecl(Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_&)>::operator=
              ((TFunction<void___cdecl(Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_&)>
                *)&((this->Solver->MEvolution).Ptr)->_padding_,
               (TFunction<void___cdecl(Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_&)>
                *)local_38);
    if (local_38[0] != (code *)0x0) {
      pppuVar2 = &local_28;
      if (local_10 != (undefined ***)0x0) {
        pppuVar2 = local_10;
      }
      (*(code *)(*pppuVar2)[2])();
    }
  }
  return;
}

// RequestResimulation @ 1440ef280

void __thiscall
Chaos::FRewindData::RequestResimulation
          (FRewindData *this,int param_1,TGeometryParticleHandleImp<double,3,1> *param_2)

{
  int iVar1;
  FPBDRigidsEvolutionGBF *pFVar2;
  code *pcVar3;
  bool bVar4;
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  *pTVar5;
  
  iVar1 = this->ResimFrame;
  if ((iVar1 != -1) && (iVar1 < param_1)) {
    param_1 = iVar1;
  }
  this->ResimFrame = param_1;
  if (param_2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    if (this->Solver == (FPBDRigidsSolver *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3627022640780150791>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                         ,0x807,"Solver");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      pTVar5 = TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
               ::Find(&this->DirtyParticles,param_2);
      if (pTVar5 != (TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
                     *)0x0) {
        pTVar5->bNeedsResim = true;
      }
      pFVar2 = (this->Solver->MEvolution).Ptr;
      if (pFVar2 != (FPBDRigidsEvolutionGBF *)0x0) {
        Chaos::Private::FPBDIslandManager::SetParticleResimFrame
                  ((FPBDIslandManager *)&pFVar2->_padding_,param_2,this->ResimFrame);
      }
    }
  }
  return;
}

// RewindStates @ 1440ef500

void __thiscall Chaos::FRewindData::RewindStates(FRewindData *this,int param_1,bool param_2)

{
  int iVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  
  iVar1 = (this->StateHistories).ArrayNum;
  pFVar6 = (this->StateHistories).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x10;
  do {
    if ((this->StateHistories).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TWeakPtr<Chaos::FBaseRewindHistory,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar5) {
      return;
    }
    if (((*(longlong *)pFVar6 != 0) && (*(longlong *)(pFVar6 + 8) != 0)) &&
       (0 < *(int *)(*(longlong *)(pFVar6 + 8) + 8))) {
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
      plVar7 = (longlong *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = pTVar4->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            pTVar4 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1440ef591;
          }
          LOCK();
          aVar3 = pTVar4->SharedReferenceCount;
          bVar8 = aVar2 == aVar3;
          if (bVar8) {
            pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar3 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar3;
        } while (!bVar8);
        plVar7 = *(longlong **)pFVar6;
      }
LAB_1440ef591:
      (**(code **)(*plVar7 + 0xd8))(plVar7,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
    pFVar6 = pFVar6 + 0x10;
  } while( true );
}

// RewindToFrame @ 1440ef5e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Chaos::FRewindData::RewindToFrame(FRewindData *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  FPBDRigidsSOAs *this_00;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  TRotation<float,3> TVar11;
  TRotation<float,3> TVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *pTVar16;
  bool bVar17;
  undefined1 uVar18;
  bool bVar19;
  EObjectStateType EVar20;
  char cVar21;
  ESyncState EVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<_private:_bool___cdecl_Chaos::FRewindData::RewindToFrame(int)_::_2_::FStat_RewindToFrame>
  FVar27;
  uint *puVar28;
  FTlsAutoCleanup *pFVar29;
  ESyncState *pEVar30;
  TVector<double,3> *pTVar31;
  TGeometryParticleHandleImp<double,3,1> *pTVar32;
  FKinematicTarget *pFVar33;
  FParticlePositionRotation *pFVar34;
  FParticleVelocities *pFVar35;
  FParticleNonFrequentData *pFVar36;
  FParticleDynamics *pFVar37;
  FParticleDynamicMisc *pFVar38;
  FParticleMassProps *pFVar39;
  FChaosVDThreadContext *this_01;
  ulonglong uVar40;
  longlong lVar41;
  TGeometryParticleHandleImp<double,3,1> *pTVar42;
  FFrameAndPhase FVar43;
  FScriptContainerElement *pFVar44;
  FName FVar45;
  FFrameAndPhase FVar46;
  FScriptContainerElement *pFVar47;
  TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *this_02;
  TGeometryParticleHandleImp<double,3,1> *pTVar48;
  TGeometryParticleHandleImp<double,3,1> *pTVar49;
  float fVar50;
  FDirtyPropertiesPool *local_res18;
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  bool *local_1c0;
  TGeometryParticleHandleImp<double,3,1> *local_1b8;
  FDirtyPropertiesPool *local_1b0;
  FDirtyPropertiesPool *local_1a8;
  FChaosCVDScopedDataChannelOverride local_1a0;
  undefined1 local_19f;
  undefined1 local_19e [6];
  TGeometryParticleHandleImp<double,3,1> *local_198;
  TGeometryParticleHandleImp<double,3,1> *local_190;
  FRewindData *local_188;
  FColor_u_0 local_180;
  uint local_17c;
  FRewindData *local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *local_150;
  wchar_t *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  code *local_138;
  undefined1 *local_130;
  code *local_128;
  undefined1 *local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  FName local_e8;
  FName local_e0;
  TStringView<wchar_t> local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_RewindToFrame =
         (FThreadSafeStaticStat<_private:_bool___cdecl_Chaos::FRewindData::RewindToFrame(int)_::_2_::FStat_RewindToFrame>
          )0x0;
    pFVar26 = ::FName::FName(&local_e8,"RewindToFrame");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_RewindToFrame,*pFVar26,L"RewindToFrame",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar27 = StatPtr_RewindToFrame;
  if (StatPtr_RewindToFrame ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_Chaos::FRewindData::RewindToFrame(int)_::_2_::FStat_RewindToFrame>
       )0x0) {
    pFVar26 = ::FName::FName(&local_e0,"RewindToFrame");
    FVar27 = (FThreadSafeStaticStat<_private:_bool___cdecl_Chaos::FRewindData::RewindToFrame(int)_::_2_::FStat_RewindToFrame>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_RewindToFrame,*pFVar26,
                          L"RewindToFrame","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                          ST_int64,true,false,MCR_Invalid);
  }
  FVar45 = *(FName *)FVar27;
  bVar19 = false;
  bVar8 = false;
  local_160.ComparisonIndex.Value = 0;
  local_160.Number = 0;
  bVar6 = false;
  bVar9 = false;
  if ((FVar45.ComparisonIndex.Value.Value != 0) || (FVar45.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_180.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_180._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar19 = false;
      bVar8 = true;
      bVar6 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_170.ComparisonIndex.Value = FVar45.ComparisonIndex.Value.Value;
        local_170.Number = FVar45.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_170,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                   ,0x1a3);
        bVar19 = true;
        bVar8 = true;
        bVar6 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_168 = FVar45;
      FThreadStats::AddMessage(FVar45,CycleScopeStart);
      bVar7 = true;
      bVar6 = bVar19;
      bVar9 = bVar8;
      goto LAB_1440ef80d;
    }
  }
  bVar7 = false;
  local_168 = local_160;
  FVar45 = local_160;
LAB_1440ef80d:
  FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride(&local_1a0,&CVDDC_Default);
  uStack_140 = 0xf;
  local_148 = L"Rewind To Frame";
  local_d8._12_4_ = uStack_13c;
  local_d8.Size = 0xf;
  local_d8.DataPtr = L"Rewind To Frame";
  FChaosVisualDebuggerTrace::TraceSolverStepStart(&local_d8);
  puVar28 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_130 = &local_19f;
  local_138 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar29 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_138,puVar28);
  if ((*(int *)(pFVar29 + 2) < 1) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3522308889972310308>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                          ,0x124,"IsInPhysicsThreadContext()"), bVar17)) {
    pcVar4 = (code *)swi(3);
    uVar18 = (*pcVar4)();
    return (bool)uVar18;
  }
  uVar24 = this->CurFrame;
  iVar23 = uVar24 - this->FramesSaved;
  if ((param_1 < iVar23) ||
     (((param_1 == iVar23 && (this->bNeedsSave != false)) &&
      (this->FramesSaved == (this->Managers).Elements.ArrayNum)))) {
    bVar17 = false;
LAB_1440f0497:
    FChaosVisualDebuggerTrace::TraceSolverStepEnd();
    puVar28 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_120 = local_19e;
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    this_01 = (FChaosVDThreadContext *)
              FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_128,puVar28);
    FChaosVDThreadContext::PopContext(this_01);
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar19) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar7) {
      FThreadStats::AddMessage(FVar45,CycleScopeEnd);
    }
    return bVar17;
  }
  FVar43 = (FFrameAndPhase)(param_1 & 0x3fffffff);
  FVar46 = (FFrameAndPhase)(uVar24 & 0x3fffffff);
  if (bResimAllowRewindToResimulatedFrames != false) {
    fVar50 = (float)(int)(uVar24 - param_1) * ResimAllowRewindToResimulatedFramesOverlapPercent;
    uVar24 = ((int)ROUND(__real_bf000000 - (fVar50 + fVar50)) >> 1) + uVar24;
  }
  this->BlockResimFrame = uVar24;
  TVar11 = ___xmm_3f800000000000000000000000000000;
  this->ResimFrame = param_1;
  this->CurFrame = param_1;
  this->bNeedsSave = false;
  local_17c = (this->DirtyParticles).DenseVals.ArrayNum;
  uVar40 = (ulonglong)(int)local_17c;
  this_02 = (TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *)
            (this->DirtyParticles).DenseVals.AllocatorInstance.Data;
  local_150 = this_02 + uVar40 * 0xd;
  do {
    pTVar16 = local_150;
    if ((this->DirtyParticles).DenseVals.ArrayNum != (int)uVar40) {
      local_1c8 = 0;
      `TCheckedPointerIterator<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_1c8);
    }
    FVar45 = local_168;
    if (this_02 == pTVar16) {
      iVar23 = (this->DirtyJoints).DenseVals.ArrayNum;
      pFVar44 = (this->DirtyJoints).DenseVals.AllocatorInstance.Data;
      pFVar47 = pFVar44 + (longlong)iVar23 * 0x60;
      while( true ) {
        if ((this->DirtyJoints).DenseVals.ArrayNum != iVar23) {
          local_1c7[0] = 0;
          `TCheckedPointerIterator<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_1c7);
        }
        if (pFVar44 == pFVar47) break;
        EVar22 = FPBDJointConstraintHandle::SyncState
                           (*(FPBDJointConstraintHandle **)(pFVar44 + 0x40));
        if ((EVar22 != InSync) &&
           (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<3627022640780149314>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                                ,0x242,"Joint->SyncState() == ESyncState::InSync"), bVar19)) {
          pcVar4 = (code *)swi(3);
          uVar18 = (*pcVar4)();
          return (bool)uVar18;
        }
        pFVar44 = pFVar44 + 0x60;
      }
      bVar17 = true;
      bVar19 = bVar6;
      bVar8 = bVar9;
      goto LAB_1440f0497;
    }
    pTVar49 = *(TGeometryParticleHandleImp<double,3,1> **)(this_02 + 0xc);
    pTVar48 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (*(char *)((longlong)&pTVar49->_padding_ + 4) != '\0') {
      pTVar48 = pTVar49;
    }
    local_1b8 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar49->_padding_ + 4)) {
      local_1b8 = pTVar49;
    }
    local_198 = pTVar48;
    local_190 = pTVar49;
    pEVar30 = TGeometryParticlesImp<double,3,0>::SyncState
                        ((TGeometryParticlesImp<double,3,0> *)pTVar49->_padding_,
                         (int)pTVar49->_padding_);
    if ((*pEVar30 != InSync) &&
       (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3627022640780149234>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\RewindData.cpp"
                            ,0x1f2,"GeometryParticle->SyncState() == ESyncState::InSync"), bVar19))
    {
      pcVar4 = (code *)swi(3);
      uVar18 = (*pcVar4)();
      return (bool)uVar18;
    }
    pTVar31 = TParticles<double,3>::GetX
                        ((TParticles<double,3> *)pTVar49->_padding_,(int)pTVar49->_padding_);
    uVar1 = *(undefined4 *)&pTVar31->field_0x8;
    uVar10 = *(undefined4 *)&pTVar31->field_0xc;
    this_02[10].Buffer.AllocatorInstance.Data = *(FScriptContainerElement **)pTVar31;
    this_02[10].Buffer.ArrayNum = uVar1;
    this_02[10].Buffer.ArrayMax = uVar10;
    uVar1 = *(undefined4 *)&pTVar31->field_0x14;
    this_02[0xb].Next = *(undefined4 *)&pTVar31->field_0x10;
    this_02[0xb].NumValid = uVar1;
    lVar3 = pTVar49->_padding_;
    uVar24 = (uint)pTVar49->_padding_;
    uVar25 = 0;
    if ((int)uVar24 < *(int *)(lVar3 + 0x50)) {
      uVar25 = ~uVar24 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar4 = (code *)swi(3);
      uVar18 = (*pcVar4)();
      return (bool)uVar18;
    }
    lVar41 = (longlong)(int)uVar24;
    lVar3 = *(longlong *)(lVar3 + 0x48);
    uVar1 = *(undefined4 *)(lVar3 + 4 + lVar41 * 0x10);
    iVar23 = *(int *)(lVar3 + 8 + lVar41 * 0x10);
    iVar2 = *(int *)(lVar3 + 0xc + lVar41 * 0x10);
    *(undefined4 *)&this_02[0xb].Buffer.AllocatorInstance.Data =
         *(undefined4 *)(lVar3 + lVar41 * 0x10);
    *(undefined4 *)((longlong)&this_02[0xb].Buffer.AllocatorInstance.Data + 4) = uVar1;
    this_02[0xb].Buffer.ArrayNum = iVar23;
    this_02[0xb].Buffer.ArrayMax = iVar2;
    CachePreResimState(this,pTVar49);
    pTVar32 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (*(char *)((longlong)&pTVar49->_padding_ + 4) != '\0') {
      pTVar32 = pTVar49;
    }
    if (pTVar32 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_1440efb1d:
      pTVar32 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (*(char *)((longlong)&pTVar49->_padding_ + 4) != '\0') {
        pTVar32 = pTVar49;
      }
      if (pTVar32 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pTVar42 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar32->_padding_ + 4)) {
          pTVar42 = pTVar32;
        }
        if (pTVar42 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          EVar20 = Kinematic;
        }
        else {
          EVar20 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                             ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar42);
        }
        if (EVar20 == Sleeping) goto LAB_1440efb49;
      }
      cVar21 = '\x01';
    }
    else {
      pTVar42 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar32->_padding_ + 4)) {
        pTVar42 = pTVar32;
      }
      if (pTVar42 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar20 = Kinematic;
      }
      else {
        EVar20 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar42);
      }
      if (EVar20 != Dynamic) goto LAB_1440efb1d;
LAB_1440efb49:
      cVar21 = '\0';
    }
    *(char *)&this_02[0xc].Buffer.ArrayMax = cVar21;
    if (pTVar48 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        DefaultKinematicTarget.Position._16_8_ = 0;
        DefaultKinematicTarget.Position._0_8_ = 0;
        DefaultKinematicTarget.Position._8_8_ = 0;
        DefaultKinematicTarget.Rotation = TVar11;
        DefaultKinematicTarget.Mode = None;
        _Init_thread_footer(&::_TSS2);
      }
      uVar15 = DefaultKinematicTarget.Position._16_8_;
      uVar14 = DefaultKinematicTarget.Position._8_8_;
      uVar13 = DefaultKinematicTarget.Position._0_8_;
      TVar12 = DefaultKinematicTarget.Rotation;
      uVar5 = CONCAT44(DefaultKinematicTarget._44_4_,DefaultKinematicTarget.Mode);
      pFVar33 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                          ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar48->_padding_,
                           (int)pTVar48->_padding_);
      pFVar33->Rotation = TVar12;
      *(undefined8 *)&pFVar33->Position = uVar13;
      *(undefined8 *)&(pFVar33->Position).field_0x8 = uVar14;
      *(undefined8 *)&(pFVar33->Position).field_0x10 = uVar15;
      *(undefined8 *)&pFVar33->Mode = uVar5;
    }
    if (cVar21 == '\0') {
      iVar23 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::FindIdx
                         (this_02,FVar43);
      if (iVar23 == -1) goto LAB_1440efffb;
      if (this->bRewindDataOptimization == false) {
        pFVar34 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::WriteAccessImp<1>
                            (this_02,FVar46,&this->PropertiesPool);
        FParticlePositionRotation::CopyFrom<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (pFVar34,local_190);
      }
      pFVar34 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::Read
                          (this_02,FVar43,&this->PropertiesPool);
      TGeometryParticleHandleImp<double,3,1>::SetXR(local_190,pFVar34);
      bVar19 = true;
LAB_1440efc9d:
      local_res18 = &this->PropertiesPool;
      iVar23 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::FindIdx
                         ((TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1> *)(this_02 + 2),
                          FVar43);
      if (iVar23 == -1) goto LAB_1440f00a7;
      if (this->bRewindDataOptimization == false) {
        pFVar35 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::WriteAccessImp<1>
                            ((TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1> *)
                             (this_02 + 2),FVar46,local_res18);
        FParticleVelocities::CopyFrom<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
                  (pFVar35,(TKinematicGeometryParticleHandleImp<double,3,1> *)local_198);
      }
      pFVar35 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::Read
                          ((TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1> *)(this_02 + 2),
                           FVar43,local_res18);
      local_100 = (double)*(float *)&pFVar35->MV;
      local_f8 = (double)*(float *)&(pFVar35->MV).field_0x4;
      local_f0 = (double)*(float *)&(pFVar35->MV).field_0x8;
      TKinematicGeometryParticlesImp<double,3,0>::SetV
                ((TKinematicGeometryParticlesImp<double,3,0> *)local_198->_padding_,
                 (int)local_198->_padding_,(TVector<double,3> *)&local_100);
      local_b0 = (double)(float)*(undefined8 *)&pFVar35->MW;
      dStack_a8 = (double)(float)((ulonglong)*(undefined8 *)&pFVar35->MW >> 0x20);
      local_a0 = (double)*(float *)&(pFVar35->MW).field_0x8;
      TKinematicGeometryParticlesImp<double,3,0>::SetW
                ((TKinematicGeometryParticlesImp<double,3,0> *)local_198->_padding_,
                 (int)local_198->_padding_,(TVector<double,3> *)&local_b0);
      bVar19 = true;
LAB_1440efd74:
      local_188 = (FRewindData *)&this->bRewindDataOptimization;
      local_1b0 = &this->PropertiesPool;
      local_178 = this;
      iVar23 = TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::FindIdx
                         ((TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1> *)
                          (this_02 + 1),FVar43);
      if (iVar23 == -1) goto LAB_1440f00f7;
      if (*(bool *)&(local_188->Managers).IndexMask == false) {
        pFVar36 = TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::WriteAccessImp<1>
                            ((TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1> *)
                             (this_02 + 1),FVar46,local_1b0);
        FParticleNonFrequentData::CopyFrom<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                  (pFVar36,local_190);
      }
      pFVar36 = TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::Read
                          ((TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1> *)
                           (this_02 + 1),FVar43,local_1b0);
      `Chaos::FRewindData::RewindToFrame'::__l17::<lambda_4>::
      operator()<Chaos::TGeometryParticleHandleImp<double,3,1>_*,Chaos::FParticleNonFrequentData>
                (&local_178,local_190,pFVar36);
      bVar19 = true;
LAB_1440efdfd:
      local_1a8 = &this->PropertiesPool;
      local_1c0 = &this->bRewindDataOptimization;
      local_188 = this;
      iVar23 = TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::FindIdx
                         ((TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0> *)(this_02 + 6),
                          FVar43);
      if (iVar23 == -1) goto LAB_1440f0155;
      if (*local_1c0 == false) {
        pFVar33 = TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::WriteAccessImp<1>
                            ((TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0> *)(this_02 + 6),
                             FVar46,local_1a8);
        CopyDataFromObject<Chaos::FKinematicTarget,Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
                  (pFVar33,(TKinematicGeometryParticleHandleImp<double,3,1> *)local_198);
      }
      pFVar33 = TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::Read
                          ((TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0> *)(this_02 + 6),
                           FVar43,local_1a8);
      `Chaos::FRewindData::RewindToFrame'::__l17::<lambda_5>::
      operator()<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,Chaos::FKinematicTarget>
                (&local_188,(TKinematicGeometryParticleHandleImp<double,3,1> *)local_198,pFVar33);
      bVar19 = true;
LAB_1440efe89:
      local_1b0 = &this->PropertiesPool;
      local_1c0 = &this->bRewindDataOptimization;
      iVar23 = TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::FindIdx
                         ((TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0> *)(this_02 + 3),
                          FVar43);
      if (iVar23 == -1) goto LAB_1440f01af;
      if (*local_1c0 == false) {
        pFVar37 = TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::WriteAccessImp<1>
                            ((TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0> *)(this_02 + 3),
                             FVar46,local_1b0);
        FParticleDynamics::CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                  (pFVar37,(TPBDRigidParticleHandleImp<double,3,1> *)local_1b8);
      }
      pFVar37 = TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::Read
                          ((TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0> *)(this_02 + 3),
                           FVar43,local_1b0);
      TPBDRigidParticleHandleImp<double,3,1>::SetDynamics
                ((TPBDRigidParticleHandleImp<double,3,1> *)local_1b8,pFVar37);
      bVar19 = true;
LAB_1440eff14:
      local_1a8 = &this->PropertiesPool;
      local_1c0 = &this->bRewindDataOptimization;
      iVar23 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::FindIdx
                         ((TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1> *)(this_02 + 4),
                          FVar43);
      if (iVar23 == -1) goto LAB_1440f0213;
      if (*local_1c0 == false) {
        pFVar38 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::WriteAccessImp<1>
                            ((TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1> *)
                             (this_02 + 4),FVar46,local_1a8);
        FParticleDynamicMisc::CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                  (pFVar38,(TPBDRigidParticleHandleImp<double,3,1> *)local_1b8);
      }
      pFVar38 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Read
                          ((TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1> *)(this_02 + 4)
                           ,FVar43,local_1a8);
      FPBDRigidsSolver::SetParticleDynamicMisc
                (this->Solver,(TPBDRigidParticleHandleImp<double,3,1> *)local_1b8,pFVar38);
      bVar19 = true;
LAB_1440eff98:
      iVar23 = TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::FindIdx
                         ((TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1> *)(this_02 + 5),
                          FVar43);
      if (iVar23 == -1) goto LAB_1440f0248;
      if (this->bRewindDataOptimization == false) {
        pFVar39 = TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::WriteAccessImp<1>
                            ((TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1> *)(this_02 + 5)
                             ,FVar46,&this->PropertiesPool);
        CopyDataFromObject<Chaos::FParticleMassProps,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                  (pFVar39,(TPBDRigidParticleHandleImp<double,3,1> *)local_1b8);
      }
      pFVar39 = TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::Read
                          ((TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1> *)(this_02 + 5),
                           FVar43,&this->PropertiesPool);
      TPBDRigidParticleHandleImp<double,3,1>::SetMassProps
                ((TPBDRigidParticleHandleImp<double,3,1> *)local_1b8,pFVar39);
      bVar8 = true;
    }
    else {
      pFVar34 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::Read
                          (this_02,FVar43,&this->PropertiesPool);
      if (pFVar34 != (FParticlePositionRotation *)0x0) {
        TGeometryParticleHandleImp<double,3,1>::SetXR(pTVar49,pFVar34);
      }
LAB_1440efffb:
      local_res18 = &this->PropertiesPool;
      bVar19 = false;
      if (cVar21 == '\0') goto LAB_1440efc9d;
      pFVar35 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::Read
                          ((TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1> *)(this_02 + 2),
                           FVar43,local_res18);
      pTVar49 = local_198;
      if (pFVar35 != (FParticleVelocities *)0x0) {
        local_118 = (double)*(float *)&pFVar35->MV;
        local_110 = (double)*(float *)&(pFVar35->MV).field_0x4;
        local_108 = (double)*(float *)&(pFVar35->MV).field_0x8;
        TKinematicGeometryParticlesImp<double,3,0>::SetV
                  ((TKinematicGeometryParticlesImp<double,3,0> *)local_198->_padding_,
                   (int)local_198->_padding_,(TVector<double,3> *)&local_118);
        local_c8 = (double)(float)*(undefined8 *)&pFVar35->MW;
        dStack_c0 = (double)(float)((ulonglong)*(undefined8 *)&pFVar35->MW >> 0x20);
        local_b8 = (double)*(float *)&(pFVar35->MW).field_0x8;
        TKinematicGeometryParticlesImp<double,3,0>::SetW
                  ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar49->_padding_,
                   (int)pTVar49->_padding_,(TVector<double,3> *)&local_c8);
      }
      bVar19 = false;
LAB_1440f00a7:
      local_1b0 = &this->PropertiesPool;
      local_188 = (FRewindData *)&this->bRewindDataOptimization;
      if (cVar21 == '\0') goto LAB_1440efd74;
      local_178 = this;
      pFVar36 = TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::Read
                          ((TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1> *)
                           (this_02 + 1),FVar43,local_1b0);
      if (pFVar36 != (FParticleNonFrequentData *)0x0) {
        `Chaos::FRewindData::RewindToFrame'::__l17::<lambda_4>::
        operator()<Chaos::TGeometryParticleHandleImp<double,3,1>_*,Chaos::FParticleNonFrequentData>
                  (&local_178,local_190,pFVar36);
      }
LAB_1440f00f7:
      local_1a8 = &this->PropertiesPool;
      local_1c0 = &this->bRewindDataOptimization;
      if (cVar21 == '\0') goto LAB_1440efdfd;
      local_188 = this;
      pFVar33 = TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::Read
                          ((TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0> *)(this_02 + 6),
                           FVar43,local_1b0);
      if (pFVar33 != (FKinematicTarget *)0x0) {
        `Chaos::FRewindData::RewindToFrame'::__l17::<lambda_5>::
        operator()<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,Chaos::FKinematicTarget>
                  (&local_188,(TKinematicGeometryParticleHandleImp<double,3,1> *)local_198,pFVar33);
      }
LAB_1440f0155:
      local_1b0 = &this->PropertiesPool;
      local_1c0 = &this->bRewindDataOptimization;
      if (cVar21 == '\0') goto LAB_1440efe89;
      pFVar37 = TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::Read
                          ((TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0> *)(this_02 + 3),
                           FVar43,local_1a8);
      if (pFVar37 != (FParticleDynamics *)0x0) {
        TPBDRigidParticleHandleImp<double,3,1>::SetDynamics
                  ((TPBDRigidParticleHandleImp<double,3,1> *)local_1b8,pFVar37);
      }
LAB_1440f01af:
      local_1a8 = &this->PropertiesPool;
      local_1c0 = &this->bRewindDataOptimization;
      if (cVar21 == '\0') goto LAB_1440eff14;
      pFVar38 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Read
                          ((TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1> *)(this_02 + 4)
                           ,FVar43,local_1b0);
      if (pFVar38 != (FParticleDynamicMisc *)0x0) {
        FPBDRigidsSolver::SetParticleDynamicMisc
                  (this->Solver,(TPBDRigidParticleHandleImp<double,3,1> *)local_1b8,pFVar38);
      }
LAB_1440f0213:
      if (cVar21 == '\0') goto LAB_1440eff98;
      pFVar39 = TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::Read
                          ((TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1> *)(this_02 + 5),
                           FVar43,local_1a8);
      if (pFVar39 != (FParticleMassProps *)0x0) {
        TPBDRigidParticleHandleImp<double,3,1>::SetMassProps
                  ((TPBDRigidParticleHandleImp<double,3,1> *)local_1b8,pFVar39);
      }
LAB_1440f0248:
      bVar8 = false;
    }
    pTVar49 = local_190;
    uVar24 = (uint)local_190->_padding_;
    local_1c0 = (bool *)local_190->_padding_;
    uVar25 = 0;
    if ((int)uVar24 < *(int *)((longlong)local_1c0 + 0x208)) {
      uVar25 = ~uVar24 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar4 = (code *)swi(3);
      uVar18 = (*pcVar4)();
      return (bool)uVar18;
    }
    *(char *)((longlong)(int)uVar24 + *(longlong *)((longlong)local_1c0 + 0x200)) = cVar21;
    if ((cVar21 == '\0') && (bVar19 || bVar8)) {
      pTVar49 = *(TGeometryParticleHandleImp<double,3,1> **)(this_02 + 0xc);
      this_00 = (FPBDRigidsSOAs *)((this->Solver->MEvolution).Ptr)->_padding_;
      pTVar48 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar49->_padding_ + 4)) {
        pTVar48 = pTVar49;
      }
      if (((pTVar48 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
          (bVar17 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                              (&this_00->ActiveParticlesMapArray,
                               (TPBDRigidParticleHandleImp<double,3,1> *)pTVar48), !bVar17)) &&
         (bVar17 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                             (&this_00->MovingKinematicsMapArray,
                              (TPBDRigidParticleHandleImp<double,3,1> *)pTVar48), !bVar17)) {
        FPBDRigidsSOAs::
        AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                  (this_00,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar48,
                   &this_00->TransientDirtyMapArray);
        if (CVars::bChaosSolverCheckParticleViews != false) {
          FPBDRigidsSOAs::CheckParticleViewMaskImpl(this_00,pTVar49);
        }
        FPBDRigidsSOAs::UpdateViews(this_00);
      }
      pTVar49 = *(TGeometryParticleHandleImp<double,3,1> **)(this_02 + 0xc);
      *(undefined4 *)&this_02[0xc].Buffer.AllocatorInstance.Data = 0xffffffff;
      TGeometryParticleHandleImp<double,3,1>::SetEnabledDuringResim(pTVar49,true);
      pTVar49 = local_190;
    }
    if (param_1 < this_02[0xc].Buffer.ArrayNum) {
      FPBDRigidsEvolutionBase::DisableParticle
                ((FPBDRigidsEvolutionBase *)(this->Solver->MEvolution).Ptr,
                 *(TGeometryParticleHandleImp<double,3,1> **)(this_02 + 0xc));
    }
    if (bVar19 || bVar8) {
      FChaosVisualDebuggerTrace::TraceParticle(pTVar49);
    }
    this_02 = this_02 + 0xd;
    uVar40 = (ulonglong)local_17c;
  } while( true );
}

// SetTargetStateAtFrame @ 1440f1ad0

void __thiscall
Chaos::FRewindData::SetTargetStateAtFrame
          (FRewindData *this,TGeometryParticleHandleImp<double,3,1> *param_1,int param_2,
          EParticleHistoryPhase param_3,TVector<double> *param_4,TQuat<double> *param_5,
          TVector<double> *param_6,TVector<double> *param_7,bool param_8)

{
  TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0> *this_00;
  float fVar1;
  double dVar2;
  undefined8 uVar3;
  FFrameAndPhase FVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  *pTVar17;
  FParticlePositionRotation *pFVar18;
  FParticleVelocities *pFVar19;
  FParticleDynamicMisc *pFVar20;
  TQuat<double> *pTVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar31;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  float fVar37;
  TVector<double>_u_0 local_1a0;
  double local_188;
  double local_180;
  double local_178;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  TQuat<double> local_138;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  TQuat<double> local_f8 [6];
  
  if (0 < InterpolateTargetGaps) {
    pTVar17 = FindOrAddDirtyObj(this,param_1,-1);
    this_00 = &(pTVar17->History).TargetPositions;
    if ((pTVar17->History).TargetPositions.NumValid != 0) {
      iVar22 = this_00->Next;
      if (iVar22 == 0) {
        iVar22 = (pTVar17->History).TargetPositions.Buffer.ArrayNum;
      }
      uVar23 = iVar22 - 1;
      uVar36 = 0;
      if ((int)uVar23 < (pTVar17->History).TargetPositions.Buffer.ArrayNum) {
        uVar36 = ~uVar23 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar4 = *(FFrameAndPhase *)
               ((pTVar17->History).TargetPositions.Buffer.AllocatorInstance.Data +
               (longlong)(int)uVar23 * 8 + 4);
      iVar22 = ((FFrameAndPhase *)
               ((pTVar17->History).TargetPositions.Buffer.AllocatorInstance.Data +
               (longlong)(int)uVar23 * 8 + 4))->Frame;
      iVar25 = param_2 - iVar22;
      if ((1 < iVar25) && (iVar25 <= InterpolateTargetGaps)) {
        pFVar18 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,0>::Read
                            (this_00,FVar4,&this->PropertiesPool);
        pFVar19 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,0>::Read
                            (&(pTVar17->History).TargetVelocities,FVar4,&this->PropertiesPool);
        pFVar20 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,0>::Read
                            (&(pTVar17->History).TargetStates,FVar4,&this->PropertiesPool);
        dVar15 = __real_3e45798ee0000000;
        if ((pFVar18 != (FParticlePositionRotation *)0x0) &&
           ((pFVar19 != (FParticleVelocities *)0x0 && (pFVar20 != (FParticleDynamicMisc *)0x0)))) {
          dVar13 = *(double *)&pFVar18->MX;
          dVar14 = *(double *)&(pFVar18->MX).field_0x8;
          dVar2 = *(double *)&(pFVar18->MX).field_0x10;
          local_138.X = (double)*(float *)&pFVar18->MR;
          fVar1 = *(float *)&pFVar19->MV;
          uVar3 = *(undefined8 *)&(pFVar18->MR).field_0x8;
          local_138.Z = (double)(float)uVar3;
          local_138.W = (double)(float)((ulonglong)uVar3 >> 0x20);
          local_138.Y = (double)*(float *)&(pFVar18->MR).field_0x4;
          dVar32 = (double)*(float *)&(pFVar19->MV).field_0x8;
          local_188 = (double)*(float *)&pFVar19->MW;
          local_180 = (double)*(float *)&(pFVar19->MW).field_0x4;
          local_178 = (double)*(float *)&(pFVar19->MW).field_0x8;
          dVar7 = (double)*(float *)&(pFVar19->MV).field_0x4;
          if ((param_8) && (pFVar20->MObjectState == Sleeping)) {
            bVar16 = true;
          }
          else {
            bVar16 = false;
          }
          iVar24 = 1;
          fVar37 = __real_3f800000 / (float)iVar25;
          do {
            auVar33._8_8_ = 0;
            auVar33._0_8_ = local_180;
            dVar6 = (double)((float)iVar24 * fVar37);
            local_1a0._s_0.X = ((param_7->field0_0x0)._s_0.X - local_188) * dVar6 + local_188;
            local_1a0._s_0.Y = ((param_7->field0_0x0)._s_0.Y - local_180) * dVar6 + local_180;
            local_1a0._s_0.Z = ((param_7->field0_0x0)._s_0.Z - local_178) * dVar6 + local_178;
            local_170._s_0.X =
                 ((param_6->field0_0x0)._s_0.X - (double)fVar1) * dVar6 + (double)fVar1;
            local_170._s_0.Y = ((param_6->field0_0x0)._s_0.Y - dVar7) * dVar6 + dVar7;
            local_170._s_0.Z = ((param_6->field0_0x0)._s_0.Z - dVar32) * dVar6 + dVar32;
            pTVar21 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                (local_f8,&local_138,param_5,dVar6);
            dVar9 = pTVar21->X;
            dVar10 = pTVar21->Y;
            dVar11 = pTVar21->Z;
            dVar12 = pTVar21->W;
            dVar28 = dVar9 * dVar9 + dVar11 * dVar11;
            dVar31 = dVar10 * dVar10 + dVar12 * dVar12;
            auVar34._8_4_ = SUB84(dVar31,0);
            auVar34._0_8_ = dVar28;
            auVar34._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
            auVar35._0_8_ = auVar34._8_8_ + dVar28;
            auVar35._8_8_ = dVar28 + dVar31;
            auVar34 = sqrtpd(auVar33,auVar35);
            uVar26 = -(ulonglong)(dVar15 <= auVar35._0_8_);
            uVar27 = -(ulonglong)(dVar15 <= auVar35._8_8_);
            uVar36 = (uint)(uVar26 >> 0x20);
            uVar23 = (uint)(uVar27 >> 0x20);
            auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar34)
            ;
            local_118._0_8_ = uVar26 & (ulonglong)(auVar35._0_8_ * dVar9);
            uVar8 = uVar27 & (ulonglong)(auVar35._8_8_ * dVar10);
            local_118._8_4_ = (undefined4)uVar8;
            local_118._12_4_ = (undefined4)(uVar8 >> 0x20);
            auVar29._0_4_ =
                 ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
            auVar29._4_4_ =
                 ~uVar36 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
            auVar29._8_4_ =
                 ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            auVar29._12_4_ =
                 ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                 0x20);
            local_118 = local_118 | auVar29;
            auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar34)
            ;
            local_108._0_4_ =
                 ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
            local_108._4_4_ =
                 ~uVar36 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                 0x20);
            local_108._8_4_ =
                 ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_108._12_4_ =
                 ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                 0x20);
            auVar30._0_8_ = (ulonglong)(auVar34._0_8_ * dVar11) & uVar26;
            uVar27 = (ulonglong)(auVar34._8_8_ * dVar12) & uVar27;
            auVar30._8_4_ = (undefined4)uVar27;
            auVar30._12_4_ = (undefined4)(uVar27 >> 0x20);
            local_108 = local_108 | auVar30;
            local_158._s_0.X = ((param_4->field0_0x0)._s_0.X - dVar13) * dVar6 + dVar13;
            local_158._s_0.Z = ((param_4->field0_0x0)._s_0.Z - dVar2) * dVar6 + dVar2;
            local_158._s_0.Y = ((param_4->field0_0x0)._s_0.Y - dVar14) * dVar6 + dVar14;
            PushStateAtFrame(this,param_1,iVar22 + iVar24,param_3,(TVector<double> *)&local_158._s_0
                             ,(TQuat<double> *)local_118,(TVector<double> *)&local_170._s_0,
                             (TVector<double> *)&local_1a0._s_0,bVar16);
            iVar24 = iVar24 + 1;
          } while (iVar24 < iVar25);
        }
      }
    }
  }
  PushStateAtFrame(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

// SpawnProxyIfNeeded @ 1440f2380

void __thiscall
Chaos::FRewindData::SpawnProxyIfNeeded(FRewindData *this,FSingleParticlePhysicsProxy *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>
  *this_00;
  ESyncState *pEVar5;
  
  if (this->CurFrame < (int)param_1->_padding_) {
    pTVar4 = param_1->Handle;
    this_00 = FindOrAddDirtyObj(this,pTVar4,this->CurFrame);
    FPBDRigidsEvolutionBase::EnableParticle
              ((FPBDRigidsEvolutionBase *)(this->Solver->MEvolution).Ptr,pTVar4);
    uVar1 = (uint)param_1->_padding_;
    if (uVar1 != this->CurFrame) {
      FGeometryParticleStateBase::ClearEntryAndFuture
                (&this_00->History,(FFrameAndPhase)(uVar1 & 0x3fffffff));
      pEVar5 = TGeometryParticlesImp<double,3,0>::SyncState
                         ((TGeometryParticlesImp<double,3,0> *)this_00->ObjPtr->_padding_,
                          (int)this_00->ObjPtr->_padding_);
      *pEVar5 = HardDesync;
      iVar2 = this->CurFrame;
      iVar3 = (int)param_1->_padding_;
      if ((iVar3 != iVar2) && (iVar3 != -1)) {
        *(int *)((longlong)&param_1->_padding_ + 4) = iVar3;
      }
      *(int *)&param_1->_padding_ = iVar2;
      this_00->InitializedOnStep = this->CurFrame;
    }
  }
  return;
}

// StepNonResimParticles @ 1440f2520

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

void __thiscall Chaos::FRewindData::StepNonResimParticles(FRewindData *this,int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  FPBDRigidsSOAs *pFVar4;
  FPBDRigidsEvolutionGBF *pFVar5;
  code *pcVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  EKinematicTargetMode EVar14;
  undefined4 uVar15;
  TRotation<float,3> TVar16;
  char cVar17;
  bool bVar18;
  EObjectStateType EVar19;
  EObjectStateType EVar20;
  uint uVar21;
  int iVar22;
  ECollisionVisitorResult EVar23;
  FKinematicTarget *pFVar24;
  FParticlePositionRotation *pFVar25;
  TVector<double,3> *pTVar26;
  FParticleVelocities *pFVar27;
  TKinematicGeometryParticleHandleImp<double,3,1> *pTVar28;
  FParticleDynamicMisc *pFVar29;
  bool *pbVar30;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar31;
  TGeometryParticleHandleImp<double,3,1> *pTVar32;
  FParticleNonFrequentData *pFVar33;
  FParticleDynamics *pFVar34;
  FParticleMassProps *pFVar35;
  FParticleCollisions *pFVar36;
  uint uVar37;
  ulonglong uVar38;
  TGeometryParticleHandleImp<double,3,1> *pTVar39;
  FFrameAndPhase FVar40;
  longlong lVar41;
  TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *pTVar42;
  longlong lVar43;
  TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *pTVar44;
  FDirtyPropertiesPool *pFVar45;
  longlong lVar46;
  undefined1 local_res8 [8];
  char local_res10;
  uint local_res18;
  TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *local_res20;
  <lambda_10> local_f0;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined1 local_98 [16];
  double local_88;
  
  pTVar44 = (TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1> *)
            (this->DirtyParticles).DenseVals.AllocatorInstance.Data;
  local_res18 = (this->DirtyParticles).DenseVals.ArrayNum;
  uVar38 = (ulonglong)(int)local_res18;
  FVar40 = (FFrameAndPhase)(param_1 & 0x3fffffff);
  pTVar42 = pTVar44 + uVar38 * 0xd;
  do {
    local_res20 = pTVar44;
    if ((this->DirtyParticles).DenseVals.ArrayNum != (int)uVar38) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar44 == pTVar42) {
      return;
    }
    this_00 = *(TGeometryParticleHandleImp<double,3,1> **)(pTVar44 + 0xc);
    uVar37 = (uint)this_00->_padding_;
    lVar43 = this_00->_padding_;
    pTVar32 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (*(char *)((longlong)&this_00->_padding_ + 4) != '\0') {
      pTVar32 = this_00;
    }
    pTVar39 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&this_00->_padding_ + 4)) {
      pTVar39 = this_00;
    }
    uVar21 = 0;
    if ((int)uVar37 < *(int *)(lVar43 + 0x208)) {
      uVar21 = ~uVar37 >> 0x1f;
    }
    if (uVar21 == 0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar11 = DefaultKinematicTarget._40_8_;
    uVar10 = DefaultKinematicTarget.Position._16_8_;
    uVar2 = DefaultKinematicTarget.Position._8_8_;
    uVar1 = DefaultKinematicTarget.Position._0_8_;
    TVar16 = DefaultKinematicTarget.Rotation;
    if (*(char *)((longlong)(int)uVar37 + *(longlong *)(lVar43 + 0x200)) == '\x01') {
      if (pTVar32 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pFVar24 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                            ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar32->_padding_,
                             (int)pTVar32->_padding_);
        pFVar24->Rotation = TVar16;
        *(undefined8 *)&pFVar24->Position = uVar1;
        *(undefined8 *)&(pFVar24->Position).field_0x8 = uVar2;
        *(undefined8 *)&(pFVar24->Position).field_0x10 = uVar10;
        uVar1 = DefaultKinematicTarget._40_8_;
        DefaultKinematicTarget.Mode = (EKinematicTargetMode)uVar11;
        DefaultKinematicTarget._44_4_ = SUB84(uVar11,4);
        uVar15 = DefaultKinematicTarget._44_4_;
        pFVar24->Mode = DefaultKinematicTarget.Mode;
        DefaultKinematicTarget._40_8_ = uVar1;
        *(undefined4 *)&pFVar24->field_0x2c = uVar15;
      }
      pFVar25 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::Read
                          (local_res20,FVar40,&this->PropertiesPool);
      if (pFVar25 == (FParticlePositionRotation *)0x0) {
        local_res10 = '\0';
      }
      else {
        pTVar26 = TParticles<double,3>::GetX
                            ((TParticles<double,3> *)this_00->_padding_,(int)this_00->_padding_);
        if (((*(double *)&pFVar25->MX == *(double *)pTVar26) &&
            (*(double *)&(pFVar25->MX).field_0x8 == *(double *)&pTVar26->field_0x8)) &&
           (*(double *)&(pFVar25->MX).field_0x10 == *(double *)&pTVar26->field_0x10)) {
          uVar37 = (uint)this_00->_padding_;
          lVar41 = (longlong)(int)uVar37;
          lVar43 = this_00->_padding_;
          uVar21 = 0;
          if ((int)uVar37 < *(int *)(lVar43 + 0x50)) {
            uVar21 = ~uVar37 >> 0x1f;
          }
          if (uVar21 == 0) {
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          lVar43 = *(longlong *)(lVar43 + 0x48);
          uVar1 = *(undefined8 *)&(pFVar25->MR).field_0x8;
          uVar2 = *(undefined8 *)(lVar43 + 8 + lVar41 * 0x10);
          lVar46 = -(ulonglong)
                    ((float)((ulonglong)uVar2 >> 0x20) != (float)((ulonglong)uVar1 >> 0x20));
          auVar8._8_4_ = (int)lVar46;
          auVar8._0_8_ = -(ulonglong)((float)uVar2 != (float)uVar1);
          auVar8._12_4_ = (int)((ulonglong)lVar46 >> 0x20);
          uVar37 = movmskpd(uVar37 * 2,auVar8);
          lVar46 = -(ulonglong)
                    ((float)((ulonglong)*(undefined8 *)&pFVar25->MR >> 0x20) !=
                    *(float *)(lVar43 + 4 + lVar41 * 0x10));
          auVar9._8_4_ = (int)lVar46;
          auVar9._0_8_ = -(ulonglong)
                          ((float)*(undefined8 *)&pFVar25->MR != *(float *)(lVar43 + lVar41 * 0x10))
          ;
          auVar9._12_4_ = (int)((ulonglong)lVar46 >> 0x20);
          iVar22 = movmskpd((int)lVar43,auVar9);
          if ((uVar37 & 0x3fffffff) == 0 && iVar22 == 0) {
            local_res10 = '\0';
            goto LAB_1440f2783;
          }
        }
        TGeometryParticleHandleImp<double,3,1>::SetXR(this_00,pFVar25);
        local_res10 = '\x01';
      }
LAB_1440f2783:
      pFVar27 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::Read
                          ((TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1> *)
                           (local_res20 + 2),FVar40,&this->PropertiesPool);
      if (pFVar27 == (FParticleVelocities *)0x0) {
        bVar18 = false;
      }
      else {
        TKinematicGeometryParticlesImp<double,3,0>::GetV
                  ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar32->_padding_,
                   (TVector<double,3> *)&local_e0,(int)pTVar32->_padding_);
        if (((local_e0 == (double)*(float *)&pFVar27->MV) &&
            (local_d8 == (double)*(float *)&(pFVar27->MV).field_0x4)) &&
           (local_d0 == (double)*(float *)&(pFVar27->MV).field_0x8)) {
          TKinematicGeometryParticlesImp<double,3,0>::GetW
                    ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar32->_padding_,
                     (TVector<double,3> *)&local_c8,(int)pTVar32->_padding_);
          if (((local_c8 == (double)*(float *)&pFVar27->MW) &&
              (local_c0 == (double)*(float *)&(pFVar27->MW).field_0x4)) &&
             (local_b8 == (double)*(float *)&(pFVar27->MW).field_0x8)) {
            bVar18 = false;
            goto LAB_1440f28c4;
          }
        }
        local_b0 = (double)*(float *)&pFVar27->MV;
        local_a8 = (double)*(float *)&(pFVar27->MV).field_0x4;
        local_a0 = (double)*(float *)&(pFVar27->MV).field_0x8;
        TKinematicGeometryParticlesImp<double,3,0>::SetV
                  ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar32->_padding_,
                   (int)pTVar32->_padding_,(TVector<double,3> *)&local_b0);
        dVar7 = (double)(float)((ulonglong)*(undefined8 *)&pFVar27->MW >> 0x20);
        local_98._8_4_ = SUB84(dVar7,0);
        local_98._0_8_ = (double)(float)*(undefined8 *)&pFVar27->MW;
        local_98._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        local_88 = (double)*(float *)&(pFVar27->MW).field_0x8;
        TKinematicGeometryParticlesImp<double,3,0>::SetW
                  ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar32->_padding_,
                   (int)pTVar32->_padding_,(TVector<double,3> *)local_98);
        bVar18 = true;
      }
LAB_1440f28c4:
      cVar17 = local_res10;
      pFVar45 = &this->PropertiesPool;
      pFVar24 = TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::Read
                          ((TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0> *)(local_res20 + 6)
                           ,FVar40,pFVar45);
      if (pFVar24 == (FKinematicTarget *)0x0) {
        bVar13 = false;
      }
      else if (pFVar24->Mode == None) {
        bVar13 = false;
      }
      else {
        uVar1 = *(undefined8 *)&pFVar24->Rotation;
        uVar2 = *(undefined8 *)&(pFVar24->Rotation).field_0x8;
        uVar10 = *(undefined8 *)&pFVar24->Position;
        uVar11 = *(undefined8 *)&(pFVar24->Position).field_0x8;
        uVar12 = *(undefined8 *)&(pFVar24->Position).field_0x10;
        EVar14 = pFVar24->Mode;
        uVar15 = *(undefined4 *)&pFVar24->field_0x2c;
        pFVar24 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                            ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar32->_padding_,
                             (int)pTVar32->_padding_);
        *(undefined8 *)&pFVar24->Rotation = uVar1;
        *(undefined8 *)&(pFVar24->Rotation).field_0x8 = uVar2;
        *(undefined8 *)&pFVar24->Position = uVar10;
        *(undefined8 *)&(pFVar24->Position).field_0x8 = uVar11;
        *(undefined8 *)&(pFVar24->Position).field_0x10 = uVar12;
        pFVar24->Mode = EVar14;
        *(undefined4 *)&pFVar24->field_0x2c = uVar15;
        pFVar4 = (FPBDRigidsSOAs *)((this->Solver->MEvolution).Ptr)->_padding_;
        pTVar28 = TKinematicGeometryParticlesImp<double,3,0>::Handle
                            ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar32->_padding_,
                             (int)pTVar32->_padding_);
        FPBDRigidsSOAs::MarkMovingKinematic(pFVar4,pTVar28);
        bVar13 = true;
      }
      pTVar44 = local_res20;
      if (this->bRewindDataOptimization == false) {
        if ((!bVar18 && cVar17 == '\0') && !bVar13) goto LAB_1440f2d1f;
        pFVar33 = TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::Read
                            ((TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1> *)
                             (local_res20 + 1),FVar40,pFVar45);
        if (pFVar33 != (FParticleNonFrequentData *)0x0) {
          pFVar5 = (this->Solver->MEvolution).Ptr;
          Chaos::Private::FPBDIslandManager::RemoveParticleConstraints
                    ((FPBDIslandManager *)&pFVar5->_padding_,this_00);
          (**(code **)(pFVar5->_padding_ + 0x18))(pFVar5,this_00);
          TGeometryParticleHandleImp<double,3,1>::SetNonFrequentData(this_00,pFVar33);
        }
        pFVar45 = &this->PropertiesPool;
        pFVar34 = TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::Read
                            ((TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0> *)(pTVar44 + 3),
                             FVar40,pFVar45);
        if (pFVar34 != (FParticleDynamics *)0x0) {
          TPBDRigidParticleHandleImp<double,3,1>::SetDynamics
                    ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar39,pFVar34);
        }
        pFVar29 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Read
                            ((TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1> *)
                             (pTVar44 + 4),FVar40,pFVar45);
        if (pFVar29 != (FParticleDynamicMisc *)0x0) {
          FPBDRigidsSolver::SetParticleDynamicMisc
                    (this->Solver,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar39,pFVar29);
        }
        pFVar35 = TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::Read
                            ((TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1> *)(pTVar44 + 5)
                             ,FVar40,pFVar45);
        if (pFVar35 != (FParticleMassProps *)0x0) {
          TPBDRigidParticleHandleImp<double,3,1>::SetMassProps
                    ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar39,pFVar35);
        }
      }
      else {
        pFVar29 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::Read
                            ((TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1> *)
                             (local_res20 + 4),FVar40,pFVar45);
        if (pFVar29 != (FParticleDynamicMisc *)0x0) {
          if (pTVar39 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_1440f29eb:
            bVar18 = false;
          }
          else {
            bVar18 = pFVar29->bDisabled;
            pbVar30 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar39);
            if (*pbVar30 != bVar18) {
              pFVar5 = (this->Solver->MEvolution).Ptr;
              if (pFVar29->bDisabled == false) {
                FPBDRigidsEvolutionBase::EnableParticle((FPBDRigidsEvolutionBase *)pFVar5,pTVar39);
              }
              else {
                FPBDRigidsEvolutionBase::DisableParticle((FPBDRigidsEvolutionBase *)pFVar5,pTVar39);
              }
            }
            EVar20 = pFVar29->MObjectState;
            EVar19 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                               ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar39);
            if (EVar19 == EVar20) goto LAB_1440f29eb;
            FPBDRigidsEvolutionBase::SetParticleObjectState
                      ((FPBDRigidsEvolutionBase *)(this->Solver->MEvolution).Ptr,
                       (TPBDRigidParticleHandleImp<double,3,1> *)pTVar39,pFVar29->MObjectState);
            bVar18 = true;
          }
          if (bVar18) goto LAB_1440f2c4f;
        }
        if (pTVar39 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pTVar32 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (2 < *(byte *)((longlong)&this_00->_padding_ + 4)) {
            pTVar32 = this_00;
          }
          if (pTVar32 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            pFVar4 = (FPBDRigidsSOAs *)((this->Solver->MEvolution).Ptr)->_padding_;
            pTVar32 = (TGeometryParticleHandleImp<double,3,1> *)
                      TPBDRigidClusteredParticles<double,3>::Handle
                                ((TPBDRigidClusteredParticles<double,3> *)pTVar32->_padding_,
                                 (int)pTVar32->_padding_);
            EVar20 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                               ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar32);
            if (EVar20 != Kinematic) {
              if ((pFVar4->MovingKinematicsMapArray).ContainerListMask == None) {
                bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("List.GetContainerListMask() != EGeometryParticleListMask::None"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                                    ,0x425,L"");
                if (bVar18) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
                        (pTVar32,(pFVar4->MovingKinematicsMapArray).ContainerListMask);
              TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Remove
                        (&pFVar4->MovingKinematicsMapArray,
                         (TPBDRigidParticleHandleImp<double,3,1> *)pTVar32);
            }
            bVar3 = *(byte *)((longlong)&pTVar32->_padding_ + 4);
            pTVar39 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (5 < bVar3) {
              pTVar39 = pTVar32;
            }
            if (pTVar39 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              if (bVar3 == 6) {
                bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ClusteredParticle->GetParticleType() != Chaos::EParticleType::GeometryCollection"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                                    ,0x31d,L"");
                if (bVar18) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              FPBDRigidsSOAs::RemoveClusteredParticle
                        (pFVar4,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar32);
              FPBDRigidsSOAs::InsertClusteredParticle
                        (pFVar4,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar32);
            }
            else {
              FPBDRigidsSOAs::RemoveGeometryCollectionParticle
                        (pFVar4,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar39);
              FPBDRigidsSOAs::InsertGeometryCollectionParticle
                        (pFVar4,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar39);
            }
            EVar20 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                               ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar32);
            if (EVar20 == Dynamic) {
              pbVar30 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                                  ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar32);
              if (*pbVar30 != false) goto LAB_1440f2b4f;
              pTVar39 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (1 < *(byte *)((longlong)&pTVar32->_padding_ + 4)) {
                pTVar39 = pTVar32;
              }
              FPBDRigidsSOAs::AddToActiveArray
                        (pFVar4,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar39);
            }
            else {
LAB_1440f2b4f:
              pTVar39 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (1 < *(byte *)((longlong)&pTVar32->_padding_ + 4)) {
                pTVar39 = pTVar32;
              }
              FPBDRigidsSOAs::RemoveFromActiveArray
                        (pFVar4,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar39,true);
            }
            if (CVars::bChaosSolverCheckParticleViews != false) {
              FPBDRigidsSOAs::CheckParticleViewMaskImpl(pFVar4,pTVar32);
            }
            FPBDRigidsSOAs::UpdateViews(pFVar4);
          }
        }
        else {
          pFVar4 = (FPBDRigidsSOAs *)((this->Solver->MEvolution).Ptr)->_padding_;
          pTVar31 = TPBDRigidParticles<double,3>::Handle
                              ((TPBDRigidParticles<double,3> *)pTVar39->_padding_,
                               (int)pTVar39->_padding_);
          FPBDRigidsSOAs::SetDynamicParticleSOA(pFVar4,pTVar31);
        }
      }
LAB_1440f2c4f:
      pTVar32 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (*(char *)((longlong)&this_00->_padding_ + 4) != '\0') {
        pTVar32 = this_00;
      }
      if (pTVar32 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pTVar39 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar32->_padding_ + 4)) {
          pTVar39 = pTVar32;
        }
        if (pTVar39 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          EVar20 = Kinematic;
        }
        else {
          EVar20 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                             ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar39);
        }
        if (EVar20 == Dynamic) {
          pFVar36 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                              ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                               (int)this_00->_padding_);
          uVar37 = 0;
          iVar22 = (pFVar36->MidPhases).ArrayNum;
          local_f0.__this = this;
          local_f0.GeometryParticle = this_00;
          if (0 < iVar22) {
            lVar43 = 0;
            do {
              uVar21 = 0;
              if ((int)uVar37 < iVar22) {
                uVar21 = ~uVar37 >> 0x1f;
              }
              if (uVar21 == 0) {
                bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar18) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              EVar23 = FParticlePairMidPhase::
                       VisitCollisions<_Chaos::FRewindData::StepNonResimParticles_::__l33::<lambda_10>_>
                                 (*(FParticlePairMidPhase **)
                                   ((pFVar36->MidPhases).AllocatorInstance.Data + lVar43 + 8),
                                  &local_f0,VisitDefault);
              if (EVar23 == Stop) break;
              iVar22 = (pFVar36->MidPhases).ArrayNum;
              uVar37 = uVar37 + 1;
              lVar43 = lVar43 + 0x10;
            } while ((int)uVar37 < iVar22);
          }
        }
      }
    }
LAB_1440f2d1f:
    pTVar44 = local_res20 + 0xd;
    uVar38 = (ulonglong)local_res18;
  } while( true );
}

// operator() @ 1504ae200

bool __thiscall
`Chaos::FRewindData::RegisterEvolutionCallbacks'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3627022640780148913>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3627022640780148913>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ae640

bool __thiscall
`Chaos::FRewindData::RegisterEvolutionCallbacks'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3627022640780148918>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3627022640780148918>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

