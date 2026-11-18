// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 141

// FPBDIslandManager @ 143b575d0

FPBDIslandManager * __thiscall
Chaos::Private::FPBDIslandManager::FPBDIslandManager
          (FPBDIslandManager *this,FPBDRigidsSOAs *param_1)

{
  int *piVar1;
  TObjectPool<Chaos::Private::FPBDIslandConstraint> *pTVar2;
  TObjectPool<Chaos::Private::FPBDIsland> *pTVar3;
  TObjectPool<Chaos::Private::FPBDIslandMergeSet> *pTVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  void *pvVar11;
  FPBDIslandManager *pFVar12;
  TObjectPool<Chaos::Private::FPBDIslandParticle> *this_00;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  
  iVar10 = 0;
  this->Particles = param_1;
  this->PhysicsMaterials =
       (TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *)0x0;
  this->PerParticlePhysicsMaterials =
       (TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
        *)0x0;
  this->SimMaterials = (THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *)0x0;
  (this->Nodes).Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).Items.ArrayNum = 0;
  (this->Nodes).Items.ArrayMax = 0;
  (this->Nodes).FreeItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).FreeItems.ArrayNum = 0;
  (this->Nodes).FreeItems.ArrayMax = 0;
  this->DisableCounterThreshold = 0x7fffffff;
  this_00 = &(this->Nodes).Pool;
  (this_00->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).Pool.Blocks.ArrayNum = 0;
  (this->Nodes).Pool.Blocks.ArrayMax = 0;
  (this->Nodes).Pool.NumPerBlock = 1000;
  (this->Nodes).Pool.Capacity = 0;
  (this->Nodes).Pool.FreeCount = 0;
  TObjectPool<Chaos::Private::FPBDIslandParticle>::ReserveBlocks(this_00,1);
  pTVar2 = &(this->Edges).Pool;
  (this->Edges).Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pTVar2->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).Pool.Blocks.ArrayNum = 0;
  (this->Edges).Pool.Blocks.ArrayMax = 0;
  (this->Edges).Items.ArrayNum = 0;
  (this->Edges).Items.ArrayMax = 0;
  (this->Edges).FreeItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).FreeItems.ArrayNum = 0;
  (this->Edges).FreeItems.ArrayMax = 0;
  (this->Edges).Pool.NumPerBlock = 1000;
  (this->Edges).Pool.Capacity = 0;
  (this->Edges).Pool.FreeCount = 0;
  iVar8 = iVar10;
  do {
    if (iVar8 == (this->Edges).Pool.Blocks.ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)pTVar2,&(this->Edges).Pool.Blocks.ArrayMax);
    }
    (this->Edges).Pool.Blocks.ArrayNum = iVar8 + 1;
    iVar5 = (this->Edges).Pool.NumPerBlock;
    pFVar14 = (pTVar2->Blocks).AllocatorInstance.Data + (longlong)iVar8 * 0x20;
    pvVar11 = FMemory::Malloc((longlong)(iVar5 * 0x50),8);
    *(void **)pFVar14 = pvVar11;
    *(void **)(pFVar14 + 8) = pvVar11;
    *(int *)(pFVar14 + 0x10) = iVar5;
    *(int *)(pFVar14 + 0x14) = iVar5;
    *(undefined4 *)(pFVar14 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x1c) = 0xffffffff;
    iVar8 = (this->Edges).Pool.NumPerBlock;
    piVar1 = &(this->Edges).Pool.Capacity;
    *piVar1 = *piVar1 + iVar8;
    piVar1 = &(this->Edges).Pool.FreeCount;
    *piVar1 = *piVar1 + iVar8;
    iVar8 = (this->Edges).Pool.Blocks.ArrayNum;
    uVar13 = iVar8 - 1;
    uVar9 = 0;
    if ((int)uVar13 < iVar8) {
      uVar9 = ~uVar13 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FPBDIslandManager *)(*pcVar6)();
        return pFVar12;
      }
    }
    iVar8 = (this->Edges).Pool.Blocks.ArrayNum;
  } while (iVar8 < 1);
  pTVar3 = &(this->Islands).Pool;
  (this->Islands).Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pTVar3->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Islands).Pool.Blocks.ArrayNum = 0;
  (this->Islands).Pool.Blocks.ArrayMax = 0;
  (this->Islands).Items.ArrayNum = 0;
  (this->Islands).Items.ArrayMax = 0;
  (this->Islands).FreeItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Islands).FreeItems.ArrayNum = 0;
  (this->Islands).FreeItems.ArrayMax = 0;
  (this->Islands).Pool.NumPerBlock = 1000;
  (this->Islands).Pool.Capacity = 0;
  (this->Islands).Pool.FreeCount = 0;
  iVar8 = iVar10;
  do {
    if (iVar8 == (this->Islands).Pool.Blocks.ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)pTVar3,&(this->Islands).Pool.Blocks.ArrayMax);
    }
    (this->Islands).Pool.Blocks.ArrayNum = iVar8 + 1;
    iVar5 = (this->Islands).Pool.NumPerBlock;
    pFVar14 = (pTVar3->Blocks).AllocatorInstance.Data + (longlong)iVar8 * 0x20;
    pvVar11 = FMemory::Malloc((longlong)(iVar5 * 0xa8),8);
    *(void **)pFVar14 = pvVar11;
    *(void **)(pFVar14 + 8) = pvVar11;
    *(int *)(pFVar14 + 0x10) = iVar5;
    *(int *)(pFVar14 + 0x14) = iVar5;
    *(undefined4 *)(pFVar14 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x1c) = 0xffffffff;
    iVar8 = (this->Islands).Pool.NumPerBlock;
    piVar1 = &(this->Islands).Pool.Capacity;
    *piVar1 = *piVar1 + iVar8;
    piVar1 = &(this->Islands).Pool.FreeCount;
    *piVar1 = *piVar1 + iVar8;
    iVar8 = (this->Islands).Pool.Blocks.ArrayNum;
    uVar13 = iVar8 - 1;
    uVar9 = 0;
    if ((int)uVar13 < iVar8) {
      uVar9 = ~uVar13 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FPBDIslandManager *)(*pcVar6)();
        return pFVar12;
      }
    }
    iVar8 = (this->Islands).Pool.Blocks.ArrayNum;
  } while (iVar8 < 1);
  pTVar4 = &(this->MergeSets).Pool;
  (this->MergeSets).Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pTVar4->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MergeSets).Pool.Blocks.ArrayNum = 0;
  (this->MergeSets).Pool.Blocks.ArrayMax = 0;
  (this->MergeSets).Items.ArrayNum = 0;
  (this->MergeSets).Items.ArrayMax = 0;
  (this->MergeSets).FreeItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MergeSets).FreeItems.ArrayNum = 0;
  (this->MergeSets).FreeItems.ArrayMax = 0;
  (this->MergeSets).Pool.NumPerBlock = 1000;
  (this->MergeSets).Pool.Capacity = 0;
  (this->MergeSets).Pool.FreeCount = 0;
  do {
    if (iVar10 == (this->MergeSets).Pool.Blocks.ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,(ForAnyElementType *)pTVar4,&(this->MergeSets).Pool.Blocks.ArrayMax)
      ;
    }
    (this->MergeSets).Pool.Blocks.ArrayNum = iVar10 + 1;
    iVar8 = (this->MergeSets).Pool.NumPerBlock;
    pFVar14 = (pTVar4->Blocks).AllocatorInstance.Data + (longlong)iVar10 * 0x20;
    pvVar11 = FMemory::Malloc((longlong)(iVar8 << 5),8);
    *(void **)pFVar14 = pvVar11;
    *(void **)(pFVar14 + 8) = pvVar11;
    *(int *)(pFVar14 + 0x10) = iVar8;
    *(int *)(pFVar14 + 0x14) = iVar8;
    *(undefined4 *)(pFVar14 + 0x18) = 0;
    *(undefined4 *)(pFVar14 + 0x1c) = 0xffffffff;
    iVar8 = (this->MergeSets).Pool.NumPerBlock;
    piVar1 = &(this->MergeSets).Pool.Capacity;
    *piVar1 = *piVar1 + iVar8;
    piVar1 = &(this->MergeSets).Pool.FreeCount;
    *piVar1 = *piVar1 + iVar8;
    iVar8 = (this->MergeSets).Pool.Blocks.ArrayNum;
    uVar13 = iVar8 - 1;
    uVar9 = 0;
    if ((int)uVar13 < iVar8) {
      uVar9 = ~uVar13 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FPBDIslandManager *)(*pcVar6)();
        return pFVar12;
      }
    }
    iVar10 = (this->MergeSets).Pool.Blocks.ArrayNum;
  } while (iVar10 < 1);
  (this->ConstraintContainers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintContainers).ArrayNum = 0;
  (this->ConstraintContainers).ArrayMax = 0;
  this->NextLevelSortKey = 0;
  this->NextVisitEpoch = 0;
  this->bIsDeterministic = false;
  this->bAssignLevels = true;
  return this;
}

// ~FPBDIslandManager @ 143b58260

void __thiscall Chaos::Private::FPBDIslandManager::~FPBDIslandManager(FPBDIslandManager *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ConstraintContainers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TObjectPool<Chaos::Private::FPBDIslandMergeSet>::~TObjectPool<Chaos::Private::FPBDIslandMergeSet>
            (&(this->MergeSets).Pool);
  pFVar1 = (this->MergeSets).FreeItems.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MergeSets).Items.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TObjectPool<Chaos::Private::FPBDIsland>::~TObjectPool<Chaos::Private::FPBDIsland>
            (&(this->Islands).Pool);
  pFVar1 = (this->Islands).FreeItems.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Islands).Items.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TObjectPool<Chaos::Private::FPBDIslandConstraint>::
  ~TObjectPool<Chaos::Private::FPBDIslandConstraint>(&(this->Edges).Pool);
  pFVar1 = (this->Edges).FreeItems.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Edges).Items.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TObjectPool<Chaos::Private::FPBDIslandParticle>::~TObjectPool<Chaos::Private::FPBDIslandParticle>
            (&(this->Nodes).Pool);
  pFVar1 = (this->Nodes).FreeItems.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Nodes).Items.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 143b5a190

void __thiscall
`Chaos::Private::FPBDIslandManager::PostStepPartialWake'::__l2::<lambda_2>::operator()
          (void *this,FPBDIslandParticle *param_1,FPBDIslandConstraint *param_2,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  double *pdVar6;
  FScriptContainerElement *pFVar7;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  float fVar8;
  undefined1 local_res10 [8];
  TGeometryParticleHandleImp<double,3,1> *local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)*(undefined1 *)((longlong)&param_1->Particle->_padding_ + 4)) {
    this_00 = param_1->Particle;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    (**(code **)(param_2->Constraint->_padding_ + 0x50))(param_2->Constraint,&local_20);
    pdVar6 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::M
                       ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    fVar8 = __real_3f800000 / (float)*pdVar6;
    if (Chaos::CVars::ChaosSolverPostStepWakeThreshold *
        Chaos::CVars::ChaosSolverPostStepWakeThreshold <
        fVar8 * local_1c * fVar8 * local_1c + fVar8 * local_20 * fVar8 * local_20 +
        fVar8 * local_18 * fVar8 * local_18) {
      local_28 = param_1->Particle;
      (param_1->Flags).Bits = (param_1->Flags).Bits & 0xfffffffd;
      pFVar1 = (param_3->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_28) &&
          ((FScriptContainerElement *)&local_28 < pFVar1 + (longlong)param_3->ArrayMax * 8)) &&
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
      iVar5 = param_3->ArrayNum;
      if (iVar5 == param_3->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar5 + 1;
      *(TGeometryParticleHandleImp<double,3,1> **)
       ((param_3->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28;
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetSleepCounter
                ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,
                 (schar)param_1->SleepCounterThreshold);
      pFVar7 = (param_1->Edges).AllocatorInstance.Data;
      iVar5 = (param_1->Edges).ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar5 * 8;
      while( true ) {
        if ((param_1->Edges).ArrayNum != iVar5) {
          `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res10);
        }
        if (pFVar7 == pFVar1) break;
        plVar2 = *(longlong **)pFVar7;
        if ((*(uint *)(plVar2 + 8) & 1) != 0) {
          *(uint *)(plVar2 + 8) = *(uint *)(plVar2 + 8) & 0xfffffffe;
          plVar2 = (longlong *)*plVar2;
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x48))(plVar2,0);
          }
        }
        pFVar7 = pFVar7 + 8;
      }
    }
  }
  return;
}

// operator() @ 143b5a350

void __thiscall
`Chaos::Private::FPBDIslandManager::RewakeConstraintsNotSupportingPartialSleep'::__l2::<lambda_2>::
operator()(void *this,FPBDIslandParticle *param_1,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_2,TArray<Chaos::Private::FPBDIslandParticle_*,TSizedDefaultAllocator<32>_> *param_3
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  schar sVar5;
  FPBDIslandParticle *local_res10 [3];
  TGeometryParticleHandleImp<double,3,1> *local_18 [2];
  
  (param_1->Flags).Bits = (param_1->Flags).Bits & 0xfffffffd;
  pFVar1 = (param_3->AllocatorInstance).Data;
  local_res10[0] = param_1;
  if ((pFVar1 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar1 + (longlong)param_3->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_3->ArrayNum;
  if (iVar4 == param_3->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar4 + 1;
  *(FPBDIslandParticle **)((param_3->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_res10[0]
  ;
  local_18[0] = local_res10[0]->Particle;
  if (local_18[0] != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pFVar1 = (param_2->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    *(TGeometryParticleHandleImp<double,3,1> **)
     ((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)*(undefined1 *)((longlong)&local_18[0]->_padding_ + 4)) {
      this_00 = local_18[0];
    }
    if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      sVar5 = '\x7f';
      if (local_res10[0]->SleepCounterThreshold < 0x7f) {
        sVar5 = (schar)local_res10[0]->SleepCounterThreshold;
      }
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetSleepCounter
                ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,sVar5);
    }
  }
  return;
}

// operator() @ 143b5a8a0

void __thiscall
`Chaos::Private::FPBDIslandManager::SyncConstraintSleepStateToParticles'::__l20::<lambda_2>::
operator()(void *this)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  EObjectStateType EVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar16;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar17;
  longlong lVar18;
  uint7 uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  
  uVar21 = (ulonglong)*(int *)this;
  if (*(int *)this < *(int *)((longlong)this + 4)) {
    lVar22 = uVar21 * 8;
    do {
      plVar2 = *(longlong **)((longlong)this + 8);
      uVar20 = (uint)uVar21;
      iVar1 = (int)plVar2[1];
      lVar18 = (longlong)iVar1;
      uVar15 = 0;
      if ((int)uVar20 < iVar1) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if (uVar15 == 0) {
        lVar18 = 0x1506109c0;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      puVar3 = *(undefined8 **)(*plVar2 + lVar22);
      plVar2 = (longlong *)puVar3[2];
      plVar4 = (longlong *)puVar3[3];
      plVar5 = (longlong *)*puVar3;
      if ((plVar2 == (longlong *)0x0) || (plVar4 == (longlong *)0x0)) {
        uVar15 = *(uint *)(puVar3 + 8);
        if (plVar2 == (longlong *)0x0) {
          if (plVar4 == (longlong *)0x0) {
            *(uint *)(puVar3 + 8) = uVar15 & 0xfffffffe;
            uVar15 = 0;
          }
          else {
            *(uint *)(puVar3 + 8) = (*(uint *)((longlong)plVar4 + 0x2c) >> 1 ^ uVar15) & 1 ^ uVar15;
            uVar15 = CONCAT31((uint3)(*(uint *)((longlong)plVar4 + 0x2c) >> 9),
                              (char)(*(uint *)((longlong)plVar4 + 0x2c) >> 1)) & 0xffffff01;
          }
        }
        else {
          *(uint *)(puVar3 + 8) = (*(uint *)((longlong)plVar2 + 0x2c) >> 1 ^ uVar15) & 1 ^ uVar15;
          uVar15 = CONCAT31((uint3)(*(uint *)((longlong)plVar2 + 0x2c) >> 9),
                            (char)(*(uint *)((longlong)plVar2 + 0x2c) >> 1)) & 0xffffff01;
        }
        (**(code **)(*plVar5 + 0x48))(plVar5,uVar15);
      }
      else {
        pTVar17 = (TPBDRigidParticleHandleImp<double,3,1> *)*plVar2;
        if (pTVar17 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143b5a98c:
          bVar11 = false;
        }
        else {
          pTVar16 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (pTVar17->field_0xc != '\0') {
            pTVar16 = pTVar17;
          }
          if (pTVar16 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143b5a98c;
          pTVar17 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar16->field_0xc) {
            pTVar17 = pTVar16;
          }
          if (pTVar17 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            EVar12 = Kinematic;
          }
          else {
            EVar12 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar17);
          }
          if (EVar12 != Sleeping) goto LAB_143b5a98c;
          bVar11 = true;
        }
        pTVar17 = (TPBDRigidParticleHandleImp<double,3,1> *)*plVar4;
        if (pTVar17 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143b5a9c7:
          bVar10 = false;
        }
        else {
          pTVar16 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (pTVar17->field_0xc != '\0') {
            pTVar16 = pTVar17;
          }
          if (pTVar16 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143b5a9c7;
          pTVar17 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar16->field_0xc) {
            pTVar17 = pTVar16;
          }
          if (pTVar17 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            EVar12 = Kinematic;
          }
          else {
            EVar12 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar17);
          }
          if (EVar12 != Sleeping) goto LAB_143b5a9c7;
          bVar10 = true;
        }
        bVar13 = Chaos::Private::IsParticleDynamic
                           ((TGeometryParticleHandleImp<double,3,1> *)*plVar2);
        bVar14 = Chaos::Private::IsParticleDynamic
                           ((TGeometryParticleHandleImp<double,3,1> *)*plVar4);
        uVar19 = (uint7)((ulonglong)lVar18 >> 8);
        if ((bVar11) && (bVar10)) {
          lVar18 = CONCAT71(uVar19,1);
          bVar7 = true;
LAB_143b5a9f5:
          if (bVar14) goto LAB_143b5a9fd;
          bVar8 = true;
        }
        else {
          lVar18 = (ulonglong)uVar19 << 8;
          bVar7 = false;
          if (bVar11) goto LAB_143b5a9f5;
LAB_143b5a9fd:
          bVar8 = false;
        }
        if ((!bVar10) || (bVar13)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (((bVar7) || (bVar8)) || (bVar9)) {
          *(uint *)(puVar3 + 8) = *(uint *)(puVar3 + 8) | 1;
          (**(code **)(*plVar5 + 0x48))(plVar5,CONCAT71((int7)((ulonglong)lVar18 >> 8),1));
        }
        if ((bVar11) || (!bVar13)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if ((bVar10) || (!bVar14)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if ((bVar11) || (bVar10)) {
          (**(code **)(*plVar5 + 0x48))(plVar5,0);
          *(uint *)(puVar3 + 8) = *(uint *)(puVar3 + 8) & 0xfffffffe;
        }
      }
      uVar21 = (ulonglong)(uVar20 + 1);
      lVar22 = lVar22 + 8;
    } while ((int)(uVar20 + 1) < *(int *)((longlong)this + 4));
  }
  return;
}

// operator() @ 143b5ae30

float __thiscall
`Chaos::Private::FPBDIslandManager::ProcessTriggerParticle'::__l2::<lambda_4>::operator()
          (void *this,FPBDIslandParticle *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TVector<double,3> *pTVar5;
  uint uVar6;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TVector<double,3> local_58 [3];
  
  if (param_1 != (FPBDIslandParticle *)0x0) {
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)*(undefined1 *)((longlong)&param_1->Particle->_padding_ + 4)) {
      this_00 = param_1->Particle;
    }
    if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      lVar2 = this_00->_padding_;
      uVar1 = (uint)this_00->_padding_;
      lVar7 = (longlong)(int)uVar1;
      uVar6 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0x2f8)) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          fVar8 = (float)(*pcVar3)();
          return fVar8;
        }
      }
      lVar2 = *(longlong *)(lVar2 + 0x2f0);
      fVar8 = (float)*(double *)(lVar2 + lVar7 * 0x18);
      fVar10 = (float)*(double *)(lVar2 + 8 + lVar7 * 0x18);
      fVar11 = (float)*(double *)(lVar2 + 0x10 + lVar7 * 0x18);
      if (fVar10 * fVar10 + fVar8 * fVar8 + fVar11 * fVar11 == 0.0) {
        pTVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetPreV
                           ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,local_58);
        fVar8 = (float)*(double *)pTVar5;
        fVar10 = (float)*(double *)&pTVar5->field_0x8;
        fVar11 = (float)*(double *)&pTVar5->field_0x10;
      }
      uVar1 = (uint)this_00->_padding_;
      lVar2 = this_00->_padding_;
      uVar6 = 0;
      if ((int)uVar1 < *(int *)(lVar2 + 0x3d0)) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          fVar8 = (float)(*pcVar3)();
          return fVar8;
        }
      }
      fVar9 = (float)*(double *)(*(longlong *)(lVar2 + 0x3c8) + (longlong)(int)uVar1 * 8);
      return fVar9 * fVar10 * fVar9 * fVar10 + fVar9 * fVar8 * fVar9 * fVar8 +
             fVar9 * fVar11 * fVar9 * fVar11;
    }
  }
  return 0.0;
}

// operator() @ 143b5b090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
`Chaos::Private::FPBDIslandManager::ProcessTriggerParticle'::__l2::<lambda_5>::operator()
          (void *this,FPBDIslandParticle *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  TVector<double,3> *pTVar17;
  TRotation<double,3> *pTVar18;
  TVector<float,3> *pTVar19;
  uint uVar20;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  TVector<double,3> local_148;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_198;
  if (param_1 != (FPBDIslandParticle *)0x0) {
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)*(undefined1 *)((longlong)&param_1->Particle->_padding_ + 4)) {
      this_00 = param_1->Particle;
    }
    if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      lVar4 = this_00->_padding_;
      uVar2 = (uint)this_00->_padding_;
      lVar21 = (longlong)(int)uVar2;
      iVar3 = *(int *)(lVar4 + 0x310);
      uVar20 = 0;
      if ((int)uVar2 < iVar3) {
        uVar20 = ~uVar2 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (local_178 = lVar21, local_170 = (longlong)iVar3,
         bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        fVar22 = (float)(*pcVar5)();
        return fVar22;
      }
      lVar4 = *(longlong *)(lVar4 + 0x308);
      fVar22 = (float)*(double *)(lVar4 + lVar21 * 0x18);
      fVar23 = (float)*(double *)(lVar4 + 8 + lVar21 * 0x18);
      fVar24 = (float)*(double *)(lVar4 + 0x10 + lVar21 * 0x18);
      if (fVar23 * fVar23 + fVar22 * fVar22 + fVar24 * fVar24 == 0.0) {
        pTVar17 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::GetPreW
                            ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,&local_148);
        fVar22 = (float)*(double *)pTVar17;
        fVar23 = (float)*(double *)&pTVar17->field_0x8;
        fVar24 = (float)*(double *)&pTVar17->field_0x10;
      }
      uVar2 = (uint)this_00->_padding_;
      lVar21 = (longlong)(int)uVar2;
      lVar4 = this_00->_padding_;
      iVar3 = *(int *)(lVar4 + 0x50);
      uVar20 = 0;
      if ((int)uVar2 < iVar3) {
        uVar20 = ~uVar2 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (local_178 = lVar21, local_170 = (longlong)iVar3,
         bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        fVar22 = (float)(*pcVar5)();
        return fVar22;
      }
      lVar4 = *(longlong *)(lVar4 + 0x48);
      uVar1 = *(undefined8 *)(lVar4 + 8 + lVar21 * 0x10);
      dVar10 = (double)(float)uVar1;
      dVar11 = (double)(float)((ulonglong)uVar1 >> 0x20);
      dVar7 = (double)*(float *)(lVar4 + lVar21 * 0x10);
      dVar9 = (double)*(float *)(lVar4 + 4 + lVar21 * 0x10);
      pTVar18 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                          ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      dVar12 = *(double *)&pTVar18->field_0x10;
      dVar13 = *(double *)&pTVar18->field_0x18;
      dVar14 = *(double *)pTVar18;
      dVar15 = *(double *)&pTVar18->field_0x8;
      dVar6 = dVar7 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              dVar15 * dVar11 +
              dVar13 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              dVar10 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar8 = dVar7 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar13 * dVar11 +
              dVar15 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar10 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_168._8_4_ = SUB84(dVar6,0);
      local_168._0_8_ =
           dVar7 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar14 * dVar11 +
           dVar12 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar10 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_168._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_158._8_4_ = SUB84(dVar8,0);
      local_158._0_8_ =
           dVar7 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar12 * dVar11 +
           dVar14 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar10 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_158._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      UE::Math::TQuat<double>::ToMatrix((TQuat<double> *)local_168,&local_128);
      dVar6 = (double)fVar22;
      dVar8 = (double)fVar23;
      dVar7 = (double)fVar24;
      pTVar19 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::I
                          ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      fVar24 = (float)(dVar8 * local_128.M[1][2] + dVar6 * local_128.M[0][2] +
                      dVar7 * local_128.M[2][2]) * *(float *)&pTVar19->field_0x8;
      fVar23 = (float)(dVar8 * local_128.M[1][1] + dVar6 * local_128.M[0][1] +
                      dVar7 * local_128.M[2][1]) * *(float *)&pTVar19->field_0x4;
      fVar22 = (float)(dVar8 * local_128.M[1][0] + dVar6 * local_128.M[0][0] +
                      dVar7 * local_128.M[2][0]) * *(float *)pTVar19;
      return fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24;
    }
  }
  return 0.0;
}

// AddConstraint @ 143b5c7d0

void __thiscall
Chaos::Private::FPBDIslandManager::AddConstraint
          (FPBDIslandManager *this,int param_1,FConstraintHandle *param_2,
          TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *param_3)

{
  FPBDIslandParticle *pFVar1;
  code *pcVar2;
  bool bVar3;
  FPBDIslandConstraint *pFVar4;
  FPBDIsland *pFVar5;
  FPBDIslandParticle *pFVar6;
  FPBDIsland *pFVar7;
  
  if ((param_2 == (FConstraintHandle *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Constraint != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x4ef,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2->GraphEdge != (FPBDIslandConstraint *)0x0) {
    return;
  }
  pFVar4 = CreateGraphEdge(this,param_1,param_2,param_3);
  if (pFVar4 == (FPBDIslandConstraint *)0x0) {
    return;
  }
  if (((CVars::bChaosSolverPartialIslandSleep != false) &&
      ((pFVar4->Flags).Bits = (pFVar4->Flags).Bits | 2, (*(byte *)&pFVar4->Flags & 1) != 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!(!!Edge->Flags.bIsNew && !!Edge->Flags.bIsSleeping)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x40e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pFVar4->Island != (FPBDIsland *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Edge->Island == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x607,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar6 = pFVar4->Nodes[0];
  pFVar7 = (FPBDIsland *)0x0;
  pFVar1 = pFVar4->Nodes[1];
  pFVar5 = pFVar7;
  if (pFVar6 != (FPBDIslandParticle *)0x0) {
    pFVar5 = pFVar6->Island;
  }
  if (pFVar1 != (FPBDIslandParticle *)0x0) {
    pFVar7 = pFVar1->Island;
  }
  if (pFVar5 == (FPBDIsland *)0x0) {
    pFVar5 = pFVar7;
    if (pFVar7 == (FPBDIsland *)0x0) {
      pFVar5 = CreateIsland(this);
      AddNodeToIsland(this,pFVar6,pFVar5);
      pFVar6 = pFVar1;
    }
  }
  else {
    if (pFVar5 == pFVar7) goto LAB_143b5c921;
    pFVar6 = pFVar1;
    if (pFVar7 != (FPBDIsland *)0x0) {
      pFVar5 = MergeIslands(this,pFVar5,pFVar7);
      goto LAB_143b5c921;
    }
  }
  AddNodeToIsland(this,pFVar6,pFVar5);
LAB_143b5c921:
  AddEdgeToIsland(this,pFVar4,pFVar5);
  return;
}

// AddConstraintContainer @ 143b5ca30

void __thiscall
Chaos::Private::FPBDIslandManager::AddConstraintContainer
          (FPBDIslandManager *this,FPBDConstraintContainer *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  piVar6 = &(this->ConstraintContainers).ArrayNum;
  iVar7 = param_1->ContainerId + 1;
  iVar4 = *piVar6;
  if (iVar4 < iVar7) {
    iVar7 = iVar7 - iVar4;
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar7,&(this->ConstraintContainers).AllocatorInstance,piVar6,
                       &(this->ConstraintContainers).ArrayMax);
    memset((this->ConstraintContainers).AllocatorInstance.Data + (longlong)iVar4 * 8,0,
           (longlong)iVar7 << 3);
  }
  uVar1 = param_1->ContainerId;
  uVar5 = 0;
  if ((int)uVar1 < (this->ConstraintContainers).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(FPBDConstraintContainer **)
   ((this->ConstraintContainers).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) = param_1;
  return;
}

// AddEdgeToIsland @ 143b5ceb0

void __thiscall
Chaos::Private::FPBDIslandManager::AddEdgeToIsland
          (FPBDIslandManager *this,FPBDIslandConstraint *param_1,FPBDIsland *param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar7;
  ForAnyElementType *pFVar8;
  FPBDIslandConstraint *local_res10;
  
  local_res10 = param_1;
  if (param_1 == (FPBDIslandConstraint *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Edge != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x652,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2 == (FPBDIsland *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Island != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x653,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar2 = local_res10->ContainerIndex;
  uVar5 = 0;
  if ((int)uVar2 < (param_2->ContainerEdges).ArrayNum) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (param_2->ContainerEdges).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                )0x0) {
    FVar7 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
             )&param_2->ContainerEdges;
  }
  pFVar8 = (ForAnyElementType *)((longlong)(int)uVar2 * 0x10 + (longlong)FVar7);
  if ((pFVar8->Data <= (FScriptContainerElement *)&local_res10) &&
     ((FScriptContainerElement *)&local_res10 <
      pFVar8->Data + (longlong)*(int *)((longlong)&pFVar8[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar8[1].Data;
  piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar8,piVar1);
  }
  *(int *)&pFVar8[1].Data = iVar6 + 1;
  *(FPBDIslandConstraint **)(pFVar8->Data + (longlong)iVar6 * 8) = local_res10;
  local_res10->IslandArrayIndex = iVar6;
  local_res10->Island = param_2;
  param_2->NumEdges = param_2->NumEdges + 1;
  (param_2->Flags).Bits = (param_2->Flags).Bits & 4 | (param_2->Flags).Bits & 0xfffffffb | 0x101;
  return;
}

// AddIslandToMergeSet @ 143b5d290

void __thiscall
Chaos::Private::FPBDIslandManager::AddIslandToMergeSet
          (FPBDIslandManager *this,FPBDIsland *param_1,FPBDIslandMergeSet *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPBDIsland *local_res10 [3];
  
  local_res10[0] = param_1;
  if (param_1 == (FPBDIsland *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Island != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x71c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_res10[0]->MergeSet != (FPBDIslandMergeSet *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Island->MergeSet == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x71d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res10[0]->MergeSet = param_2;
  pFVar2 = (param_2->Islands).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(param_2->Islands).ArrayMax * 8))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_2->Islands).ArrayNum;
  piVar1 = &(param_2->Islands).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)param_2,piVar1);
  }
  pFVar2 = (param_2->Islands).AllocatorInstance.Data;
  (param_2->Islands).ArrayNum = iVar5 + 1;
  *(FPBDIsland **)(pFVar2 + (longlong)iVar5 * 8) = local_res10[0];
  local_res10[0]->MergeSetIslandIndex = iVar5;
  param_2->NumEdges = param_2->NumEdges + local_res10[0]->NumEdges;
  return;
}

// AddNodeToIsland @ 143b5d680

void __thiscall
Chaos::Private::FPBDIslandManager::AddNodeToIsland
          (FPBDIslandManager *this,FPBDIslandParticle *param_1,FPBDIsland *param_2)

{
  int *piVar1;
  FFlags *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  EObjectStateType EVar6;
  TIterationSettings<signed_char> TVar7;
  int iVar8;
  undefined5 extraout_var;
  char cVar10;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  schar sVar11;
  uint uVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  FPBDIslandParticle *local_res10;
  undefined2 local_res18;
  char *pcVar9;
  
  local_res10 = param_1;
  if ((param_2 == (FPBDIsland *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Island != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x610,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_res10 != (FPBDIslandParticle *)0x0) {
    if ((*(byte *)&local_res10->Flags & 1) != 0) {
      local_res10->Island = param_2;
      pFVar3 = (param_2->Nodes).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
          ((FScriptContainerElement *)&local_res10 <
           pFVar3 + (longlong)(param_2->Nodes).ArrayMax * 8)) &&
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
      iVar8 = (param_2->Nodes).ArrayNum;
      piVar1 = &(param_2->Nodes).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)param_2,piVar1);
      }
      pFVar3 = (param_2->Nodes).AllocatorInstance.Data;
      (param_2->Nodes).ArrayNum = iVar8 + 1;
      *(FPBDIslandParticle **)(pFVar3 + (longlong)iVar8 * 8) = local_res10;
      local_res10->IslandArrayIndex = iVar8;
      TVar7 = FPBDIslandParticle::GetIterationSettings(local_res10);
      pcVar9 = (char *)CONCAT53(extraout_var,TVar7);
      local_res18._0_1_ = (param_2->Iterations).NumPositionIterations;
      local_res18._1_1_ = (param_2->Iterations).NumVelocityIterations;
      cVar15 = (param_2->Iterations).NumProjectionIterations;
      cVar10 = pcVar9[2];
      if (pcVar9[2] < cVar15) {
        cVar10 = cVar15;
      }
      cVar15 = pcVar9[1];
      if (pcVar9[1] < (char)local_res18._1_1_) {
        cVar15 = local_res18._1_1_;
      }
      cVar14 = *pcVar9;
      if (*pcVar9 < (char)(undefined1)local_res18) {
        cVar14 = (undefined1)local_res18;
      }
      cVar13 = '\x7f';
      if (cVar14 < '\x7f') {
        cVar13 = cVar14;
      }
      cVar14 = '\x7f';
      if (cVar15 < '\x7f') {
        cVar14 = cVar15;
      }
      cVar15 = '\x7f';
      if (cVar10 < '\x7f') {
        cVar15 = cVar10;
      }
      cVar10 = -1;
      if (-1 < cVar13) {
        cVar10 = cVar13;
      }
      (param_2->Iterations).NumPositionIterations = cVar10;
      sVar11 = -1;
      if (-1 < cVar14) {
        sVar11 = cVar14;
      }
      (param_2->Iterations).NumVelocityIterations = sVar11;
      sVar11 = -1;
      if (-1 < cVar15) {
        sVar11 = cVar15;
      }
      (param_2->Iterations).NumProjectionIterations = sVar11;
    }
    pFVar2 = &param_2->Flags;
    pFVar2->Bits = pFVar2->Bits & 4 | pFVar2->Bits & 0xfffffffb | 0x101;
    UpdateIslandPartialSleepAllowed(this,param_2,local_res10->Particle);
    uVar12 = 0;
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)*(undefined1 *)((longlong)&local_res10->Particle->_padding_ + 4)) {
      this_00 = local_res10->Particle;
    }
    if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if (((*(byte *)pFVar2 & 0x10) != 0) ||
         (EVar6 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                            ((TPBDRigidParticleHandleImp<double,3,1> *)this_00), EVar6 == Sleeping))
      {
        uVar12 = 0x10;
      }
      (param_2->Flags).Bits = pFVar2->Bits & 0xffffffef | uVar12;
    }
  }
  return;
}

// AddParticle @ 143b5d8c0

void __thiscall
Chaos::Private::FPBDIslandManager::AddParticle
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  return;
}

// ApplyDeterminism @ 143b5d8d0

void __thiscall Chaos::Private::FPBDIslandManager::ApplyDeterminism(FPBDIslandManager *this)

{
  return;
}

// AssignEdgeIsland @ 143b5d970

void __thiscall
Chaos::Private::FPBDIslandManager::AssignEdgeIsland
          (FPBDIslandManager *this,FPBDIslandConstraint *param_1)

{
  FPBDIslandParticle *pFVar1;
  code *pcVar2;
  bool bVar3;
  FPBDIsland *pFVar4;
  FPBDIslandParticle *pFVar5;
  FPBDIsland *pFVar6;
  
  if ((param_1 == (FPBDIslandConstraint *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Edge != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x606,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1->Island != (FPBDIsland *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Edge->Island == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x607,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = param_1->Nodes[0];
  pFVar6 = (FPBDIsland *)0x0;
  pFVar1 = param_1->Nodes[1];
  pFVar4 = pFVar6;
  if (pFVar5 != (FPBDIslandParticle *)0x0) {
    pFVar4 = pFVar5->Island;
  }
  if (pFVar1 != (FPBDIslandParticle *)0x0) {
    pFVar6 = pFVar1->Island;
  }
  if (pFVar4 == (FPBDIsland *)0x0) {
    pFVar4 = pFVar6;
    if (pFVar6 == (FPBDIsland *)0x0) {
      pFVar4 = CreateIsland(this);
      AddNodeToIsland(this,pFVar5,pFVar4);
      pFVar5 = pFVar1;
    }
  }
  else {
    if (pFVar4 == pFVar6) goto LAB_143b5da5d;
    pFVar5 = pFVar1;
    if (pFVar6 != (FPBDIsland *)0x0) {
      pFVar4 = MergeIslands(this,pFVar4,pFVar6);
      goto LAB_143b5da5d;
    }
  }
  AddNodeToIsland(this,pFVar5,pFVar4);
LAB_143b5da5d:
  AddEdgeToIsland(this,param_1,pFVar4);
  return;
}

// AssignIslandLevels @ 143b5da90

void __thiscall
Chaos::Private::FPBDIslandManager::AssignIslandLevels(FPBDIslandManager *this,FPBDIsland *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  int *piVar10;
  FScriptContainerElement *pFVar11;
  longlong *plVar12;
  uint uVar13;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar14
  ;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar15
  ;
  longlong lVar16;
  longlong *plVar17;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_78 [4];
  uint local_74;
  longlong local_70;
  longlong local_68;
  int *local_60;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
  local_58;
  ForAnyElementType local_50;
  int local_48;
  int aiStack_44 [3];
  
  pFVar9 = (param_1->Nodes).AllocatorInstance.Data;
  iVar2 = (param_1->Nodes).ArrayNum;
  pFVar11 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Nodes).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar11) break;
    lVar16 = *(longlong *)pFVar9;
    pFVar9 = pFVar9 + 8;
    *(undefined4 *)(lVar16 + 0x30) = 0;
  }
  uVar13 = 0;
  local_58 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
              )&param_1->ContainerEdges;
  if (0 < (param_1->ContainerEdges).ArrayNum) {
    lVar16 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar13 < (param_1->ContainerEdges).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar15 = (param_1->ContainerEdges).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                )&param_1->ContainerEdges;
      if (FVar15 != (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                     )0x0) {
        FVar14 = FVar15;
      }
      plVar12 = *(longlong **)((longlong)FVar14 + lVar16);
      iVar2 = *(int *)((uchar *)((longlong)FVar14 + 8) + lVar16);
      plVar1 = plVar12 + iVar2;
      while( true ) {
        if (*(int *)((uchar *)((longlong)FVar14 + 8) + lVar16) != iVar2) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res18);
        }
        if (plVar12 == plVar1) break;
        lVar3 = *plVar12;
        plVar12 = plVar12 + 1;
        *(undefined4 *)(lVar3 + 0x38) = 0;
      }
      uVar13 = uVar13 + 1;
      lVar16 = lVar16 + 0x10;
    } while ((int)uVar13 < (param_1->ContainerEdges).ArrayNum);
  }
  piVar10 = &(param_1->ContainerEdges).ArrayNum;
  if (1 < param_1->NumEdges) {
    uVar13 = (param_1->Nodes).ArrayNum;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    aiStack_44[0] = 0;
    local_60 = piVar10;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if (0 < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar13,&local_50,0,aiStack_44);
    }
    local_74 = 0;
    if (0 < *piVar10) {
      local_68 = 0;
      FVar15 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                )&param_1->ContainerEdges;
      do {
        lVar16 = local_68;
        uVar13 = 0;
        if ((int)local_74 < *(int *)((longlong)FVar15 + 0x58)) {
          uVar13 = ~local_74 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
              *)((longlong)FVar15 + 0x50) !=
            (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
             )0x0) {
          FVar15 = *(ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                     *)((longlong)FVar15 + 0x50);
        }
        plVar17 = (longlong *)((longlong)FVar15 + lVar16);
        plVar12 = (longlong *)*plVar17;
        lVar16 = plVar17[1];
        plVar1 = plVar12 + (int)lVar16;
        while( true ) {
          if ((int)plVar17[1] != (int)lVar16) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res20);
          }
          if (plVar12 == plVar1) break;
          lVar3 = *plVar12;
          if (((*(longlong *)(lVar3 + 0x10) == 0) && (*(longlong *)(lVar3 + 0x18) == 0)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Edge->Nodes[0] != nullptr) || (Edge->Nodes[1] != nullptr)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                                 ,0x899,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((*(longlong *)(lVar3 + 0x10) == 0) ||
             ((*(byte *)(*(longlong *)(lVar3 + 0x10) + 0x2c) & 1) == 0)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          lVar4 = *(longlong *)(lVar3 + 0x18);
          pFVar11 = (FScriptContainerElement *)(lVar3 + 0x18);
          if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x2c) & 1) == 0)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((!bVar7) && (*(int *)(lVar4 + 0x30) == 0)) {
            *(undefined4 *)(lVar3 + 0x38) = 1;
            *(undefined4 *)(lVar4 + 0x30) = 1;
            if ((local_50.Data <= pFVar11) &&
               ((pFVar11 < local_50.Data + (longlong)aiStack_44[0] * 8 &&
                (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)))) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (local_48 == aiStack_44[0]) {
              local_48 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_50,aiStack_44);
            }
            *(longlong *)(local_50.Data + (longlong)local_48 * 8) = *(longlong *)pFVar11;
            local_48 = local_48 + 1;
          }
          if ((!bVar6) && (*(int *)(*(longlong *)(lVar3 + 0x10) + 0x30) == 0)) {
            *(undefined4 *)(lVar3 + 0x38) = 1;
            pFVar11 = (FScriptContainerElement *)(lVar3 + 0x10);
            *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 0x30) = 1;
            if ((local_50.Data <= pFVar11) &&
               ((pFVar11 < local_50.Data + (longlong)aiStack_44[0] * 8 &&
                (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)))) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (local_48 == aiStack_44[0]) {
              local_48 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_50,aiStack_44);
            }
            *(longlong *)(local_50.Data + (longlong)local_48 * 8) = *(longlong *)pFVar11;
            local_48 = local_48 + 1;
          }
          plVar12 = plVar12 + 1;
        }
        local_74 = local_74 + 1;
        local_68 = local_68 + 0x10;
        FVar15 = local_58;
      } while ((int)local_74 < *local_60);
    }
    uVar13 = 0;
    if (0 < local_48) {
      lVar16 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar13 < local_48) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)(local_50.Data + lVar16);
        plVar12 = *(longlong **)(lVar3 + 0x10);
        iVar2 = *(int *)(lVar3 + 0x18);
        plVar1 = plVar12 + iVar2;
        while( true ) {
          if (*(int *)(lVar3 + 0x18) != iVar2) {
            local_78[0] = 0;
            `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_78);
          }
          if (plVar12 == plVar1) break;
          lVar4 = *plVar12;
          if (*(int *)(lVar4 + 0x38) == 0) {
            *(int *)(lVar4 + 0x38) = *(int *)(lVar3 + 0x30) + 1;
            local_70 = *(longlong *)(lVar4 + 0x10);
            if (lVar3 == local_70) {
              local_70 = *(longlong *)(lVar4 + 0x18);
            }
            if (((local_70 != 0) && ((*(byte *)(local_70 + 0x2c) & 1) != 0)) &&
               (*(int *)(local_70 + 0x30) == 0)) {
              *(int *)(local_70 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
              if (((local_50.Data <= (FScriptContainerElement *)&local_70) &&
                  ((FScriptContainerElement *)&local_70 <
                   local_50.Data + (longlong)aiStack_44[0] * 8)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (local_48 == aiStack_44[0]) {
                local_48 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_50,aiStack_44);
              }
              *(longlong *)(local_50.Data + (longlong)local_48 * 8) = local_70;
              local_48 = local_48 + 1;
            }
          }
          plVar12 = plVar12 + 1;
        }
        uVar13 = uVar13 + 1;
        lVar16 = lVar16 + 8;
      } while ((int)uVar13 < local_48);
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
  }
  return;
}

// AssignLevels @ 143b5e080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::Private::FPBDIslandManager::AssignLevels(FPBDIslandManager *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  FName FVar4;
  FPBDIsland *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_IslandManager_AssignLevels> FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ulonglong uVar15;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar16
  ;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  int iVar19;
  longlong *plVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar23
  ;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FColor_u_0 local_c8;
  uint local_c4;
  FName local_c0;
  longlong local_b8;
  FScriptContainerElement *local_b0;
  FName local_a8;
  FName local_a0;
  FPBDIslandManager *local_90;
  FPBDIsland *local_88;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
  local_80;
  FScriptContainerElement *local_78;
  LARGE_INTEGER local_70;
  FStatMessage local_68;
  FName local_58 [3];
  
  FVar14 = StatPtr_STAT_IslandManager_AssignLevels;
  if (StatPtr_STAT_IslandManager_AssignLevels ==
      (FThreadSafeStaticStat<FStat_STAT_IslandManager_AssignLevels>)0x0) {
    pFVar13 = ::FName::FName(local_58,"STAT_IslandManager_AssignLevels");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_IslandManager_AssignLevels>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IslandManager_AssignLevels,
                        *pFVar13,L"IslandManager::Levels","STATGROUP_ChaosIslands",
                        "STATCAT_Advanced",L"ChaosIslands",true,true,ST_int64,true,false,MCR_Invalid
                       );
  }
  FVar4 = *(FName *)FVar14;
  bVar9 = false;
  bVar8 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  bVar11 = false;
  bVar10 = false;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar9 = false;
      bVar8 = true;
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c0.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_c0.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                   ,0x86a);
        bVar9 = true;
        bVar8 = true;
        bVar11 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_a8 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar10 = true;
      goto LAB_143b5e206;
    }
  }
  bVar9 = bVar11;
  bVar8 = bVar10;
  bVar10 = false;
  local_a8 = local_a0;
LAB_143b5e206:
  local_c4 = (this->Islands).Items.ArrayNum;
  uVar15 = (ulonglong)(int)local_c4;
  pFVar17 = (this->Islands).Items.AllocatorInstance.Data;
  local_res8 = SUB81(this,0);
  pFVar21 = pFVar17 + uVar15 * 8;
  local_78 = pFVar21;
  do {
    local_b0 = pFVar17;
    if ((this->Islands).Items.ArrayNum != (int)uVar15) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    FVar4 = local_a8;
    if (pFVar17 == pFVar21) {
      if (bVar8) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar10) && (FVar4 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_68.NameAndInfo.Index = FVar4.ComparisonIndex.Value;
          local_68.NameAndInfo.Number = FVar4.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_70);
          local_68.StatData.Pad[4] = '\0';
          local_68.StatData.Pad[5] = '\0';
          local_68.StatData.Pad[6] = '\0';
          local_68.StatData.Pad[7] = '\0';
          local_68.StatData.Pad[0] = local_70.s.LowPart._0_1_;
          local_68.StatData.Pad[1] = local_70.s.LowPart._1_1_;
          local_68.StatData.Pad[2] = local_70.s.LowPart._2_1_;
          local_68.StatData.Pad[3] = local_70.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_68);
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
    pFVar5 = *(FPBDIsland **)pFVar17;
    local_88 = pFVar5;
    if ((((pFVar5->Flags).Bits & 0x40) == 0) && (((pFVar5->Flags).Bits & 3) != 0)) {
      if ((this->bAssignLevels != false) || (CVars::bChaosSolverPartialIslandSleep != false)) {
        AssignIslandLevels(this,pFVar5);
      }
      uVar22 = 0;
      local_b8 = 0;
      if (0 < (pFVar5->ContainerEdges).ArrayNum) {
        local_80 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                    )&pFVar5->ContainerEdges;
        lVar18 = 0;
        do {
          FVar23 = local_80;
          uVar12 = 0;
          if ((int)uVar22 < *(int *)((longlong)local_80 + 0x58)) {
            uVar12 = ~uVar22 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar16 = FVar23;
          if (*(ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                *)((longlong)FVar23 + 0x50) !=
              (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
               )0x0) {
            FVar16 = *(ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                       *)((longlong)FVar23 + 0x50);
          }
          local_90 = this;
          AlgoImpl::
          IntroSortInternal<Chaos::Private::FPBDIslandConstraint_*,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Private::FPBDIslandConstraint_*,_Chaos::Private::FPBDIslandManager::SortIslandEdges_::__l4::<lambda_1>_>_>
                    (*(FPBDIslandConstraint ***)(lVar18 + (longlong)FVar16),
                     *(int *)(lVar18 + 8 + (longlong)FVar16),local_res8,(<lambda_1> *)&local_90);
          uVar12 = 0;
          if ((int)uVar22 < *(int *)((longlong)FVar23 + 0x58)) {
            uVar12 = ~uVar22 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                *)((longlong)FVar23 + 0x50) !=
              (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
               )0x0) {
            FVar23 = *(ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                       *)((longlong)FVar23 + 0x50);
          }
          plVar20 = *(longlong **)((longlong)FVar23 + lVar18);
          iVar3 = *(int *)((longlong)FVar23 + 8 + lVar18);
          plVar2 = plVar20 + iVar3;
          iVar19 = 0;
          while( true ) {
            if (*(int *)((longlong)FVar23 + 8 + lVar18) != iVar3) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_res20);
            }
            if (plVar20 == plVar2) break;
            lVar6 = *plVar20;
            plVar20 = plVar20 + 1;
            *(int *)(lVar6 + 0x34) = iVar19;
            iVar19 = iVar19 + 1;
          }
          uVar22 = uVar22 + 1;
          local_b8 = local_b8 + 1;
          lVar18 = lVar18 + 0x10;
          pFVar21 = local_78;
        } while ((int)uVar22 < (local_88->ContainerEdges).ArrayNum);
      }
    }
    uVar15 = (ulonglong)local_c4;
    pFVar17 = local_b0 + 8;
  } while( true );
}

// AssignNodeIsland @ 143b5e530

void __thiscall
Chaos::Private::FPBDIslandManager::AssignNodeIsland
          (FPBDIslandManager *this,FPBDIslandParticle *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPBDIsland *pFVar3;
  
  if (param_1 == (FPBDIslandParticle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Node != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x5fc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->Island != (FPBDIsland *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Node->Island == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x5fd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = CreateIsland(this);
  AddNodeToIsland(this,param_1,pFVar3);
  return;
}

// BindEdgeToNodes @ 143b5e5c0

void __thiscall
Chaos::Private::FPBDIslandManager::BindEdgeToNodes
          (FPBDIslandManager *this,FPBDIslandConstraint *param_1,FPBDIslandParticle *param_2,
          FPBDIslandParticle *param_3)

{
  int *piVar1;
  TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FPBDIslandConstraint *local_res10;
  
  local_res10 = param_1;
  if (param_1 == (FPBDIslandConstraint *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Edge != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x51f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_res10->Nodes[0] != (FPBDIslandParticle *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Edge->Nodes[0] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x520,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_res10->Nodes[1] != (FPBDIslandParticle *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Edge->Nodes[1] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x521,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_res10->Island != (FPBDIsland *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Edge->Island == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x522,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (param_2 != (FPBDIslandParticle *)0x0) {
    local_res10->Nodes[0] = param_2;
    pFVar4 = (param_2->Edges).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_res10) &&
       ((FScriptContainerElement *)&local_res10 < pFVar4 + (longlong)(param_2->Edges).ArrayMax * 8))
    {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (param_2->Edges).ArrayNum;
    piVar1 = &(param_2->Edges).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(param_2->Edges).AllocatorInstance,piVar1);
    }
    pFVar4 = (param_2->Edges).AllocatorInstance.Data;
    (param_2->Edges).ArrayNum = iVar7 + 1;
    *(FPBDIslandConstraint **)(pFVar4 + (longlong)iVar7 * 8) = local_res10;
    local_res10->NodeArrayIndices[0] = iVar7;
  }
  if (param_3 != (FPBDIslandParticle *)0x0) {
    pTVar2 = &param_3->Edges;
    local_res10->Nodes[1] = param_3;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_res10) &&
       ((FScriptContainerElement *)&local_res10 < pFVar4 + (longlong)(param_3->Edges).ArrayMax * 8))
    {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (param_3->Edges).ArrayNum;
    piVar1 = &(param_3->Edges).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    (param_3->Edges).ArrayNum = iVar7 + 1;
    *(FPBDIslandConstraint **)(pFVar4 + (longlong)iVar7 * 8) = local_res10;
    local_res10->NodeArrayIndices[1] = iVar7;
  }
  uVar3 = this->NextLevelSortKey;
  this->NextLevelSortKey = uVar3 + 1;
  local_res10->LevelSortKey = uVar3;
  return;
}

// CombineMergeSets @ 143b605f0

FPBDIslandMergeSet * __thiscall
Chaos::Private::FPBDIslandManager::CombineMergeSets
          (FPBDIslandManager *this,FPBDIslandMergeSet *param_1,FPBDIslandMergeSet *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPBDIslandMergeSet *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  if (param_1 == (FPBDIslandMergeSet *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MergeSetParent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x73f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FPBDIslandMergeSet *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (param_2 == (FPBDIslandMergeSet *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MergeSetChild != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x740,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FPBDIslandMergeSet *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (param_1 == param_2) {
    return param_1;
  }
  pFVar7 = param_2;
  if (param_2->NumEdges <= param_1->NumEdges) {
    pFVar7 = param_1;
  }
  if (param_2->NumEdges <= param_1->NumEdges) {
    param_1 = param_2;
  }
  pFVar8 = (param_1->Islands).AllocatorInstance.Data;
  iVar2 = (param_1->Islands).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  iVar6 = (pFVar7->Islands).ArrayNum;
  while( true ) {
    if ((param_1->Islands).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar8 == pFVar1) break;
    lVar3 = *(longlong *)pFVar8;
    pFVar8 = pFVar8 + 8;
    *(FPBDIslandMergeSet **)(lVar3 + 0x70) = pFVar7;
    *(int *)(lVar3 + 0x78) = iVar6;
    iVar6 = iVar6 + 1;
  }
  if (pFVar7 == param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FPBDIslandMergeSet *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar2 = (param_1->Islands).ArrayNum;
  if (iVar2 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar2,(ForAnyElementType *)pFVar7,&(pFVar7->Islands).ArrayNum,
                       &(pFVar7->Islands).ArrayMax);
    memmove((pFVar7->Islands).AllocatorInstance.Data + (longlong)iVar6 * 8,
            (param_1->Islands).AllocatorInstance.Data,(longlong)iVar2 << 3);
    (param_1->Islands).ArrayNum = 0;
  }
  pFVar7->NumEdges = pFVar7->NumEdges + param_1->NumEdges;
  if (param_1 != (FPBDIslandMergeSet *)0x0) {
    TPoolBackedArray<Chaos::Private::FPBDIslandMergeSet,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandMergeSet>_>
    ::Free(&this->MergeSets,param_1);
  }
  return pFVar7;
}

// CreateGraphEdge @ 143b61470

FPBDIslandConstraint * __thiscall
Chaos::Private::FPBDIslandManager::CreateGraphEdge
          (FPBDIslandManager *this,int param_1,FConstraintHandle *param_2,
          TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *param_3)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  EObjectStateType EVar4;
  FPBDIslandConstraint *pFVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  FPBDIslandParticle *pFVar7;
  FPBDIslandParticle *pFVar8;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  int local_res10 [2];
  FConstraintHandle *local_res18;
  
  local_res10[0] = param_1;
  local_res18 = param_2;
  if (param_2 == (FConstraintHandle *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Constraint != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x4fb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPBDIslandConstraint *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (param_2 == (FConstraintHandle *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Constraint != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x4ef,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPBDIslandConstraint *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (param_2->GraphEdge != (FPBDIslandConstraint *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetGraphEdge(Constraint) == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x4fc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPBDIslandConstraint *)(*pcVar2)();
      return pFVar5;
    }
  }
  pTVar1 = param_3->V[0];
  if (pTVar1 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_143b61579:
    bVar3 = IsParticleDynamic(param_3->V[1]);
    if (!bVar3) {
      return (FPBDIslandConstraint *)0x0;
    }
  }
  else {
    this_01 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    pTVar6 = this_01;
    if (*(undefined1 *)((longlong)&pTVar1->_padding_ + 4) != '\0') {
      pTVar6 = pTVar1;
    }
    if (pTVar6 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_143b6154c:
      pTVar6 = this_01;
      if (*(undefined1 *)((longlong)&pTVar1->_padding_ + 4) != '\0') {
        pTVar6 = pTVar1;
      }
      if (pTVar6 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        if (1 < (byte)*(undefined1 *)((longlong)&pTVar6->_padding_ + 4)) {
          this_01 = pTVar6;
        }
        if (this_01 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          EVar4 = Kinematic;
        }
        else {
          EVar4 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                            ((TPBDRigidParticleHandleImp<double,3,1> *)this_01);
        }
        if (EVar4 == Sleeping) goto LAB_143b61596;
      }
      goto LAB_143b61579;
    }
    this_00 = this_01;
    if (1 < (byte)*(undefined1 *)((longlong)&pTVar6->_padding_ + 4)) {
      this_00 = pTVar6;
    }
    if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar4 = Kinematic;
    }
    else {
      EVar4 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    }
    if (EVar4 != Dynamic) goto LAB_143b6154c;
  }
LAB_143b61596:
  pTVar1 = param_3->V[0];
  if (pTVar1 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_143b615b3:
    pFVar7 = CreateGraphNode(this,pTVar1);
  }
  else {
    pFVar7 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(pTVar1);
    if (pFVar7 == (FPBDIslandParticle *)0x0) goto LAB_143b615b3;
  }
  pTVar1 = param_3->V[1];
  if (pTVar1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pFVar8 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(pTVar1);
    if (pFVar8 != (FPBDIslandParticle *)0x0) goto LAB_143b615e8;
  }
  pFVar8 = CreateGraphNode(this,pTVar1);
LAB_143b615e8:
  pFVar5 = TPoolBackedArray<Chaos::Private::FPBDIslandConstraint,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandConstraint>_>
           ::Alloc<int_const_&,Chaos::FConstraintHandle_*_&>(&this->Edges,local_res10,&local_res18);
  BindEdgeToNodes(this,pFVar5,pFVar7,pFVar8);
  return pFVar5;
}

// CreateGraphNode @ 143b61630

FPBDIslandParticle * __thiscall
Chaos::Private::FPBDIslandManager::CreateGraphNode
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  EObjectStateType EVar5;
  int iVar6;
  FPBDIslandParticle *pFVar7;
  TGeometryParticleHandleImp<double,3,1> *pTVar8;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  uint uVar9;
  uint uVar10;
  TGeometryParticleHandleImp<double,3,1> *local_res10;
  FPBDIslandParticle *local_18 [2];
  
  if (param_1 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return (FPBDIslandParticle *)0x0;
  }
  local_res10 = param_1;
  pFVar7 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1);
  if (pFVar7 != (FPBDIslandParticle *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetGraphNode(Particle) == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x4c8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPBDIslandParticle *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (this->Nodes).FreeItems.ArrayNum;
  uVar10 = 0;
  if (iVar6 == 0) {
    local_18[0] = TObjectPool<Chaos::Private::FPBDIslandParticle>::
                  Alloc<Chaos::TGeometryParticleHandleImp<double,3,1>_*_&>
                            (&(this->Nodes).Pool,&local_res10);
  }
  else {
    if (iVar6 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FPBDIslandParticle *)(*pcVar3)();
        return pFVar7;
      }
    }
    iVar6 = (this->Nodes).FreeItems.ArrayNum;
    local_18[0] = *(FPBDIslandParticle **)
                   ((this->Nodes).FreeItems.AllocatorInstance.Data + (longlong)iVar6 * 8 + -8);
    (this->Nodes).FreeItems.ArrayNum = iVar6 + -1;
    local_18[0]->Particle = param_1;
    if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      TGeometryParticleHandleImp<double,3,1>::SetConstraintGraphNode(param_1,local_18[0]);
    }
  }
  pFVar2 = (this->Nodes).Items.AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Nodes).Items.ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPBDIslandParticle *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (this->Nodes).Items.ArrayNum;
  piVar1 = &(this->Nodes).Items.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->Nodes,piVar1);
  }
  pFVar7 = local_18[0];
  pFVar2 = (this->Nodes).Items.AllocatorInstance.Data;
  (this->Nodes).Items.ArrayNum = iVar6 + 1;
  *(FPBDIslandParticle **)(pFVar2 + (longlong)iVar6 * 8) = local_18[0];
  local_18[0]->ArrayIndex = iVar6;
  bVar4 = IsParticleDynamic(param_1);
  uVar9 = (pFVar7->Flags).Bits & 0xfffffffe | (uint)bVar4;
  (pFVar7->Flags).Bits = uVar9;
  if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar8 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      pTVar8 = param_1;
    }
    if (pTVar8 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar8->_padding_ + 4)) {
        this_00 = pTVar8;
      }
      if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar5 = Kinematic;
      }
      else {
        EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                          ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
        uVar9 = (pFVar7->Flags).Bits;
      }
      if (EVar5 == Sleeping) {
        uVar10 = 2;
      }
    }
  }
  (pFVar7->Flags).Bits = uVar9 & 0xfffffffd | uVar10;
  bVar4 = IsParticleMoving(param_1);
  (pFVar7->Flags).Bits = (pFVar7->Flags).Bits & 0xfffffffb;
  (pFVar7->Flags).Bits = (pFVar7->Flags).Bits | (uint)bVar4 << 2;
  bVar4 = ParticlesIslandNeedsResim(param_1);
  (pFVar7->Flags).Bits = (pFVar7->Flags).Bits & 0xfffffff7;
  (pFVar7->Flags).Bits = (pFVar7->Flags).Bits | (uint)bVar4 << 3;
  UpdateGraphNodeSleepSettings(this,pFVar7);
  return pFVar7;
}

// CreateIsland @ 143b61880

FPBDIsland * __thiscall Chaos::Private::FPBDIslandManager::CreateIsland(FPBDIslandManager *this)

{
  TArray<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  int *piVar1;
  TPoolBackedArray<Chaos::Private::FPBDIsland,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIsland>_>
  *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FPBDIsland *pFVar9;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar10
  ;
  uint uVar11;
  FPBDIsland *local_18 [2];
  
  pTVar2 = &this->Islands;
  iVar7 = (this->Islands).FreeItems.ArrayNum;
  if (iVar7 == 0) {
    local_18[0] = TObjectPool<Chaos::Private::FPBDIsland>::Alloc<>(&(this->Islands).Pool);
  }
  else {
    if (iVar7 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FPBDIsland *)(*pcVar5)();
        return pFVar9;
      }
    }
    iVar7 = (this->Islands).FreeItems.ArrayNum;
    local_18[0] = *(FPBDIsland **)
                   ((this->Islands).FreeItems.AllocatorInstance.Data + (longlong)iVar7 * 8 + -8);
    (this->Islands).FreeItems.ArrayNum = iVar7 + -1;
    (local_18[0]->Flags).Bits = (local_18[0]->Flags).Bits & 0xffffffef | 0x6c;
  }
  pFVar4 = (pTVar2->Items).AllocatorInstance.Data;
  if ((pFVar4 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar4 + (longlong)(this->Islands).Items.ArrayMax * 8))
  {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FPBDIsland *)(*pcVar5)();
      return pFVar9;
    }
  }
  iVar7 = (this->Islands).Items.ArrayNum;
  piVar1 = &(this->Islands).Items.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pTVar2,piVar1);
  }
  pFVar9 = local_18[0];
  pFVar4 = (pTVar2->Items).AllocatorInstance.Data;
  (this->Islands).Items.ArrayNum = iVar7 + 1;
  *(FPBDIsland **)(pFVar4 + (longlong)iVar7 * 8) = local_18[0];
  local_18[0]->ArrayIndex = iVar7;
  uVar3 = (this->ConstraintContainers).ArrayNum;
  this_00 = &local_18[0]->ContainerEdges;
  iVar7 = (local_18[0]->ContainerEdges).ArrayNum;
  piVar1 = &(local_18[0]->ContainerEdges).ArrayNum;
  if (iVar7 < (int)uVar3) {
    iVar8 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>_>
                      (0x10,8,uVar3 - iVar7,&this_00->AllocatorInstance,piVar1,
                       &(local_18[0]->ContainerEdges).ArrayMax);
    FVar10 = (pFVar9->ContainerEdges).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                   )0x0) {
      FVar10 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                )this_00;
    }
    memset((void *)((longlong)FVar10 + (longlong)iVar8 * 0x10),0,(longlong)(int)(uVar3 - iVar7) << 4
          );
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if ((int)uVar3 < iVar7) {
      uVar11 = iVar7 - uVar3;
      if ((int)(uVar11 | uVar3) < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FPBDIsland *)(*pcVar5)();
          return pFVar9;
        }
      }
      if (uVar11 != 0) {
        TArray<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
        ::RemoveAtImpl(this_00,uVar3,uVar11);
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>_>
                  (0x10,8,&this_00->AllocatorInstance,*piVar1,&(pFVar9->ContainerEdges).ArrayMax);
      }
    }
  }
  return pFVar9;
}

// CreateMergeSet @ 143b61ae0

FPBDIslandMergeSet * __thiscall
Chaos::Private::FPBDIslandManager::CreateMergeSet
          (FPBDIslandManager *this,FPBDIsland *param_1,FPBDIsland *param_2)

{
  int *piVar1;
  TPoolBackedArray<Chaos::Private::FPBDIslandMergeSet,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandMergeSet>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPBDIslandMergeSet *pFVar7;
  FPBDIslandMergeSet *local_18 [2];
  
  pTVar2 = &this->MergeSets;
  iVar6 = (this->MergeSets).FreeItems.ArrayNum;
  if (iVar6 == 0) {
    local_18[0] = TObjectPool<Chaos::Private::FPBDIslandMergeSet>::Alloc<>(&(this->MergeSets).Pool);
  }
  else {
    if (iVar6 < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FPBDIslandMergeSet *)(*pcVar4)();
        return pFVar7;
      }
    }
    iVar6 = (this->MergeSets).FreeItems.ArrayNum;
    local_18[0] = *(FPBDIslandMergeSet **)
                   ((this->MergeSets).FreeItems.AllocatorInstance.Data + (longlong)iVar6 * 8 + -8);
    (this->MergeSets).FreeItems.ArrayNum = iVar6 + -1;
  }
  pFVar3 = (pTVar2->Items).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->MergeSets).Items.ArrayMax * 8)
     ) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FPBDIslandMergeSet *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (this->MergeSets).Items.ArrayNum;
  piVar1 = &(this->MergeSets).Items.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pTVar2,piVar1);
  }
  pFVar7 = local_18[0];
  pFVar3 = (pTVar2->Items).AllocatorInstance.Data;
  (this->MergeSets).Items.ArrayNum = iVar6 + 1;
  *(FPBDIslandMergeSet **)(pFVar3 + (longlong)iVar6 * 8) = local_18[0];
  local_18[0]->ArrayIndex = iVar6;
  AddIslandToMergeSet(this,param_1,local_18[0]);
  AddIslandToMergeSet(this,param_2,pFVar7);
  return pFVar7;
}

// DebugDrawSleepState @ 143b61db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Private::FPBDIslandManager::DebugDrawSleepState
          (FPBDIslandManager *this,FChaosDebugDrawSettings *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *pTVar4;
  TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
  *pTVar5;
  TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *pTVar6;
  longlong *plVar7;
  TParticleHandleBase<double,3>_u_0 *pTVar8;
  longlong *plVar9;
  longlong lVar10;
  code *pcVar11;
  undefined8 uVar12;
  FChaosDebugDrawSettings *pFVar13;
  FScriptContainerElement *pFVar14;
  EObjectStateType EVar15;
  bool bVar16;
  uint uVar17;
  FColor_u_0 FVar18;
  FPBDIslandParticle *pFVar19;
  TGeometryParticleHandleImp<double,3,1> *pTVar20;
  TVector<double,3> *pTVar21;
  ulonglong uVar22;
  int iVar23;
  longlong *plVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  TParticleHandleBase<double,3>_u_0 this_00;
  longlong *plVar28;
  float fVar29;
  float fVar30;
  undefined1 auStackY_278 [32];
  undefined1 local_228 [4];
  FColor_u_0 local_224;
  FColor_u_0 local_220;
  int local_21c;
  float local_218;
  float local_214;
  FColor_u_0 local_210 [2];
  undefined1 local_208 [24];
  uint uStack_1f0;
  undefined4 uStack_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  FPBDIslandManager *local_1d8;
  uint local_1d0;
  FChaosDebugDrawSettings *local_1c8;
  FScriptContainerElement *local_1c0;
  TParticleHandleBase<double,3>_u_0 local_1b8;
  uint uStack_1b0;
  int iStack_1ac;
  float local_1a8;
  float local_1a4;
  FScriptContainerElement *local_1a0;
  double local_198 [2];
  double local_188 [2];
  double local_178 [2];
  double local_168 [2];
  double local_158 [2];
  double local_148 [2];
  double local_138 [2];
  double local_128 [2];
  double local_118 [2];
  double local_108 [2];
  double local_f8 [2];
  double local_e8 [2];
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1d8 = this;
  local_1c8 = param_1;
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_208,
             (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
              *)&this->Particles->ActiveDynamicMovingKinematicParticlesView);
  if ((TPBDRigidParticles<double,3> *)local_208._16_8_ != (TPBDRigidParticles<double,3> *)0x0) {
    this_00 = (TParticleHandleBase<double,3>_u_0)local_208._16_8_;
    uVar27 = uStack_1f0;
    do {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_208);
      EVar15 = TPBDRigidParticleHandleImp<double,3,0>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,0> *)(local_208 + 0x10));
      if (((EVar15 == Dynamic) ||
          (EVar15 = TPBDRigidParticleHandleImp<double,3,0>::ObjectState
                              ((TPBDRigidParticleHandleImp<double,3,0> *)(local_208 + 0x10)),
          EVar15 == Sleeping)) &&
         (pFVar19 = TGeometryParticleHandleImp<double,3,0>::GetConstraintGraphNode
                              ((TGeometryParticleHandleImp<double,3,0> *)(local_208 + 0x10)),
         pFVar19 == (FPBDIslandParticle *)0x0)) {
        local_220.Bits = 0xff808080;
        EVar15 = TPBDRigidParticleHandleImp<double,3,0>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,0> *)(local_208 + 0x10));
        if (EVar15 != Sleeping) {
          pTVar4 = this->SimMaterials;
          pTVar5 = this->PerParticlePhysicsMaterials;
          pTVar6 = this->PhysicsMaterials;
          pTVar20 = (TGeometryParticleHandleImp<double,3,1> *)
                    TPBDRigidParticles<double,3>::Handle(this_00.PBDRigidParticles,uVar27);
          bVar16 = GetIslandParticleSleepThresholds
                             (pTVar20,pTVar6,pTVar5,pTVar4,&local_214,&local_218,&local_21c,
                              &local_1a4,&local_1a8);
          if (bVar16) {
            fVar29 = CVars::IsolatedParticleSleepLinearThresholdMultiplier;
            if (CVars::IsolatedParticleSleepLinearThresholdMultiplier <= 0.0) {
              fVar29 = 0.0;
            }
            fVar30 = CVars::IsolatedParticleSleepAngularThresholdMultiplier;
            if (CVars::IsolatedParticleSleepAngularThresholdMultiplier <= 0.0) {
              fVar30 = 0.0;
            }
            iVar23 = CVars::IsolatedParticleSleepCounterThresholdMultiplier;
            if (CVars::IsolatedParticleSleepCounterThresholdMultiplier < 1) {
              iVar23 = 1;
            }
            local_21c = local_21c * iVar23;
            local_214 = local_214 * fVar29;
            local_218 = local_218 * fVar30;
          }
          fVar30 = local_214;
          fVar29 = local_218;
          this = local_1d8;
          if (((0.0 < local_214) || (0.0 < local_218)) && (local_21c < 0x7fffffff)) {
            iVar23 = 0x7f;
            if (local_21c < 0x7f) {
              iVar23 = local_21c;
            }
            local_21c = iVar23;
            pTVar21 = TPBDRigidParticleHandleImp<double,3,0>::VSmooth
                                ((TPBDRigidParticleHandleImp<double,3,0> *)(local_208 + 0x10));
            if (((double)(fVar30 * fVar30) <
                 *(double *)&pTVar21->field_0x8 * *(double *)&pTVar21->field_0x8 +
                 *(double *)pTVar21 * *(double *)pTVar21 +
                 *(double *)&pTVar21->field_0x10 * *(double *)&pTVar21->field_0x10) ||
               (pTVar21 = TPBDRigidParticleHandleImp<double,3,0>::WSmooth
                                    ((TPBDRigidParticleHandleImp<double,3,0> *)(local_208 + 0x10)),
               (double)(fVar29 * fVar29) <
               *(double *)&pTVar21->field_0x8 * *(double *)&pTVar21->field_0x8 +
               *(double *)pTVar21 * *(double *)pTVar21 +
               *(double *)&pTVar21->field_0x10 * *(double *)&pTVar21->field_0x10)) {
              bVar16 = true;
            }
            else {
              bVar16 = false;
            }
            this = local_1d8;
            local_220 = FColor::Green.field0_0x0;
            if (bVar16) {
              local_220 = FColor::Red.field0_0x0;
            }
          }
        }
        pTVar20 = (TGeometryParticleHandleImp<double,3,1> *)
                  TPBDRigidParticles<double,3>::Handle(this_00.PBDRigidParticles,uVar27);
        local_198[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
        local_198[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
        local_188[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
        local_188[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
        local_178[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
        local_178[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
        local_168[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
        local_168[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
        local_158[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
        local_158[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
        local_148[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
        local_148[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleShapes
                  ((TRigidTransform<double,3> *)local_198,pTVar20,(FColor *)&local_220._s_0,param_1)
        ;
      }
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_208);
      do {
        uVar12 = local_208._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_208._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          uVar27 = uVar27 + 1;
          uStack_1f0 = uVar27;
          if (local_1e4 <= (int)uVar27) {
LAB_143b62079:
            local_1e8 = local_1e8 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_208);
            this_00 = (TParticleHandleBase<double,3>_u_0)local_208._16_8_;
            uVar27 = uStack_1f0;
          }
        }
        else {
          iVar23 = local_1e0 + 1;
          local_1e0 = iVar23;
          if (*(int *)(local_208._8_8_ + 8) <= iVar23) goto LAB_143b62079;
          if ((iVar23 < 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pTVar8 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar12)->Data + (longlong)iVar23 * 8);
          this_00 = (TParticleHandleBase<double,3>_u_0)pTVar8->PBDRigidParticles;
          uVar27 = *(uint *)(pTVar8 + 1);
          if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
              (TPBDRigidParticles<double,3> *)0x0) {
            iStack_1ac = (uint)iStack_1ac._1_3_ << 8;
          }
          else {
            iStack_1ac = CONCAT31(iStack_1ac._1_3_,(this_00.GeometryParticles)->MParticleType);
          }
          uStack_1ec = iStack_1ac;
          uStack_1f0 = uVar27;
          local_208._16_8_ = this_00;
          local_1b8 = this_00;
          uStack_1b0 = uVar27;
        }
        if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
            (TPBDRigidParticles<double,3> *)0x0) goto LAB_143b6211e;
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_208);
        uVar17 = 0;
        if ((int)uVar27 <
            (int)*(longlong *)&((this_00.GeometryParticles)->MLightWeightDisabled).field_0x10) {
          uVar17 = ~uVar27 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      } while (*(char *)((longlong)(int)uVar27 + (this_00.KinematicGeometryParticles)->_padding_) !=
               '\0');
    } while ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles !=
             (TPBDRigidParticles<double,3> *)0x0);
  }
LAB_143b6211e:
  local_1d0 = (this->Islands).Items.ArrayNum;
  uVar22 = (ulonglong)(int)local_1d0;
  pFVar26 = (this->Islands).Items.AllocatorInstance.Data;
  local_1a0 = pFVar26 + uVar22 * 8;
  FVar18 = FColor::Black.field0_0x0;
  do {
    while( true ) {
      pFVar14 = local_1a0;
      local_1c0 = pFVar26;
      if ((this->Islands).Items.ArrayNum != (int)uVar22) {
        local_228[0] = 0;
        `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_228);
        FVar18 = FColor::Black.field0_0x0;
      }
      if (pFVar26 == pFVar14) {
        return;
      }
      plVar7 = *(longlong **)pFVar26;
      plVar28 = (longlong *)*plVar7;
      iVar23 = (int)plVar7[1];
      local_210[0] = FVar18;
      if ((*(byte *)((longlong)plVar7 + 0x94) & 0x40) != 0) break;
      if ((iVar23 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), FVar18 = FColor::Black.field0_0x0, bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar13 = local_1c8;
      plVar7 = plVar28 + iVar23;
      param_1 = local_1c8;
      for (; local_1c8 = param_1, plVar28 != plVar7; plVar28 = plVar28 + 1) {
        plVar9 = (longlong *)*plVar28;
        local_224.Bits = 0xff808080;
        FVar18.Bits = local_224.Bits;
        if ((0.0 < *(float *)((longlong)plVar9 + 0x34)) || (0.0 < *(float *)(plVar9 + 7))) {
          plVar24 = (longlong *)0x0;
          if (1 < *(byte *)(*plVar9 + 0xc)) {
            plVar24 = (longlong *)*plVar9;
          }
          if (plVar24 != (longlong *)0x0) {
            uVar27 = *(uint *)(plVar24 + 1);
            lVar10 = *plVar24;
            uVar17 = 0;
            if ((int)uVar27 < *(int *)(lVar10 + 0x2e0)) {
              uVar17 = ~uVar27 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            FVar18 = local_210[0];
            if (*(char *)(*(longlong *)(lVar10 + 0x2d8) + 0xb + (longlong)(int)uVar27 * 0x10) !=
                '\x01') {
              uVar27 = *(uint *)(plVar24 + 1);
              lVar25 = (longlong)(int)uVar27;
              lVar10 = *plVar24;
              uVar17 = 0;
              if ((int)uVar27 < *(int *)(lVar10 + 0x2f8)) {
                uVar17 = ~uVar27 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              lVar10 = *(longlong *)(lVar10 + 0x2f0);
              dVar1 = *(double *)(lVar10 + lVar25 * 0x18);
              dVar2 = *(double *)(lVar10 + 8 + lVar25 * 0x18);
              dVar3 = *(double *)(lVar10 + 0x10 + lVar25 * 0x18);
              if ((double)*(float *)((longlong)plVar9 + 0x34) <
                  dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3) {
LAB_143b624f4:
                bVar16 = true;
              }
              else {
                uVar27 = *(uint *)(plVar24 + 1);
                lVar25 = (longlong)(int)uVar27;
                lVar10 = *plVar24;
                uVar17 = 0;
                if ((int)uVar27 < *(int *)(lVar10 + 0x310)) {
                  uVar17 = ~uVar27 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                lVar10 = *(longlong *)(lVar10 + 0x308);
                dVar1 = *(double *)(lVar10 + lVar25 * 0x18);
                dVar2 = *(double *)(lVar10 + 8 + lVar25 * 0x18);
                dVar3 = *(double *)(lVar10 + 0x10 + lVar25 * 0x18);
                if ((double)*(float *)(plVar9 + 7) < dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3)
                goto LAB_143b624f4;
                bVar16 = false;
              }
              FVar18 = FColor::Green.field0_0x0;
              if (bVar16) {
                FVar18 = FColor::Red.field0_0x0;
              }
            }
          }
        }
        local_224 = FVar18;
        local_d8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
        local_d8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
        local_c8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
        local_c8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
        local_b8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
        local_b8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
        local_a8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
        local_a8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
        local_98[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
        local_98[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
        local_88[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
        local_88[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
        Chaos::DebugDraw::DrawParticleShapes
                  ((TRigidTransform<double,3> *)local_d8,
                   (TGeometryParticleHandleImp<double,3,1> *)*plVar9,(FColor *)&local_224._s_0,
                   pFVar13);
        this = local_1d8;
        pFVar26 = local_1c0;
        FVar18 = FColor::Black.field0_0x0;
        param_1 = local_1c8;
      }
LAB_143b62596:
      uVar22 = (ulonglong)local_1d0;
      pFVar26 = pFVar26 + 8;
    }
    if ((iVar23 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), FVar18 = FColor::Black.field0_0x0, bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    plVar7 = plVar28 + iVar23;
    if (plVar28 == plVar7) goto LAB_143b62596;
    do {
      local_138[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      local_138[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      local_128[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      local_128[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      local_118[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      local_118[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      local_108[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      local_108[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      local_f8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      local_f8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      local_e8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      local_e8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      Chaos::DebugDraw::DrawParticleShapes
                ((TRigidTransform<double,3> *)local_138,
                 *(TGeometryParticleHandleImp<double,3,1> **)*plVar28,(FColor *)&local_210[0]._s_0,
                 param_1);
      plVar28 = plVar28 + 1;
    } while (plVar28 != plVar7);
    pFVar26 = pFVar26 + 8;
    uVar22 = (ulonglong)local_1d0;
    FVar18 = FColor::Black.field0_0x0;
  } while( true );
}

// DestroyGraphEdge @ 143b62aa0

void __thiscall
Chaos::Private::FPBDIslandManager::DestroyGraphEdge
          (FPBDIslandManager *this,FPBDIslandConstraint *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (FPBDIslandConstraint *)0x0) {
    if (param_1->Island != (FPBDIsland *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Edge->Island == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x514,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UnbindEdgeFromNodes(this,param_1);
    TPoolBackedArray<Chaos::Private::FPBDIslandConstraint,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandConstraint>_>
    ::Free(&this->Edges,param_1);
  }
  return;
}

// DestroyGraphNode @ 143b62b10

void __thiscall
Chaos::Private::FPBDIslandManager::DestroyGraphNode
          (FPBDIslandManager *this,FPBDIslandParticle *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (FPBDIslandParticle *)0x0) {
    if (param_1->Island != (FPBDIsland *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Node->Island == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x4e7,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TPoolBackedArray<Chaos::Private::FPBDIslandParticle,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandParticle>_>
    ::Free(&this->Nodes,param_1);
  }
  return;
}

// DestroyIsland @ 143b62b70

void __thiscall
Chaos::Private::FPBDIslandManager::DestroyIsland(FPBDIslandManager *this,FPBDIsland *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (FPBDIsland *)0x0) {
    if ((param_1->Nodes).ArrayNum != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Island->Nodes.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x5f2,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (param_1->NumEdges != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Island->NumEdges == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x5f3,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (param_1->MergeSetIslandIndex != -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Island->MergeSetIslandIndex == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x5f4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TPoolBackedArray<Chaos::Private::FPBDIsland,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIsland>_>
    ::Free(&this->Islands,param_1);
  }
  return;
}

// DestroyIslandNodes @ 143b62c30

void __thiscall
Chaos::Private::FPBDIslandManager::DestroyIslandNodes(FPBDIslandManager *this,FPBDIsland *param_1)

{
  FPBDIslandParticle *pFVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TGeometryParticleHandleImp<double,3,1> *pTVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar9 = (param_1->Nodes).ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 * 8;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (param_1->Nodes).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = *(FPBDIslandParticle **)((param_1->Nodes).AllocatorInstance.Data + lVar10);
      if (((pFVar1->Edges).ArrayNum != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Node->Edges.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                             ,0x641,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar8 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pFVar1->Particle->_padding_ + 4)) {
        pTVar8 = pFVar1->Particle;
      }
      if (pTVar8 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        uVar6 = (uint)pTVar8->_padding_;
        lVar2 = pTVar8->_padding_;
        iVar4 = param_1->SleepCounter;
        uVar7 = 0;
        if ((int)uVar6 < *(int *)(lVar2 + 0x4f0)) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(char *)((longlong)(int)uVar6 + *(longlong *)(lVar2 + 0x4e8)) = (char)iVar4;
      }
      RemoveNodeFromIsland(this,pFVar1);
      if ((pFVar1->Island != (FPBDIsland *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Node->Island == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                             ,0x4e7,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TPoolBackedArray<Chaos::Private::FPBDIslandParticle,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandParticle>_>
      ::Free(&this->Nodes,pFVar1);
      lVar10 = lVar10 + -8;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

// DestroyMergeSet @ 143b62e00

void __thiscall
Chaos::Private::FPBDIslandManager::DestroyMergeSet
          (FPBDIslandManager *this,FPBDIslandMergeSet *param_1)

{
  if (param_1 != (FPBDIslandMergeSet *)0x0) {
    TPoolBackedArray<Chaos::Private::FPBDIslandMergeSet,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandMergeSet>_>
    ::Free(&this->MergeSets,param_1);
    return;
  }
  return;
}

// EndTick @ 143b62fb0

void __thiscall Chaos::Private::FPBDIslandManager::EndTick(FPBDIslandManager *this)

{
  return;
}

// EnqueueIslandCheckSleep @ 143b62fc0

void __thiscall
Chaos::Private::FPBDIslandManager::EnqueueIslandCheckSleep
          (FPBDIslandManager *this,FPBDIsland *param_1,bool param_2)

{
  uint uVar1;
  
  if (param_1 != (FPBDIsland *)0x0) {
    uVar1 = (param_1->Flags).Bits;
    if (((uVar1 & 4) != 0) && (param_2)) {
      (param_1->Flags).Bits = uVar1 & 0xfffffffb | 0x104;
      return;
    }
    (param_1->Flags).Bits = uVar1 & 0xfffffffb | 0x100;
  }
  return;
}

// FinalizeIslands @ 143b63020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::Private::FPBDIslandManager::FinalizeIslands(FPBDIslandManager *this)

{
  undefined2 uVar1;
  int iVar2;
  FPBDIsland *this_00;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_IslandManager_Finalize> FVar16;
  FThreadSafeStaticStat<FStat_STAT_IslandManager_ComputeIterationSettings> FVar17;
  FThreadSafeStaticStat<FStat_STAT_IslandManager_ComputeIterationSettings> extraout_RAX;
  FThreadSafeStaticStat<FStat_STAT_IslandManager_ComputeIterationSettings> extraout_RAX_00;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  FNameEntryId FVar22;
  FName FVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  FThreadSafeStaticStat<FStat_STAT_IslandManager_ComputeIterationSettings> FVar26;
  FScriptContainerElement *pFVar27;
  longlong lVar28;
  undefined1 local_res20 [8];
  undefined2 local_d8;
  undefined1 local_d4;
  undefined1 local_d3 [3];
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined2 local_c0;
  FColor_u_0 local_bc;
  FColor_u_0 local_b8 [2];
  longlong local_b0;
  longlong local_a8;
  FName local_a0;
  FName local_98;
  uint local_90;
  uint uStack_8c;
  FName local_88;
  FName local_80;
  FName local_70;
  FScriptContainerElement *local_60;
  FName local_58;
  FName local_50 [2];
  
  FVar16 = StatPtr_STAT_IslandManager_Finalize;
  if (StatPtr_STAT_IslandManager_Finalize ==
      (FThreadSafeStaticStat<FStat_STAT_IslandManager_Finalize>)0x0) {
    pFVar15 = ::FName::FName(&local_58,"STAT_IslandManager_Finalize");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_IslandManager_Finalize>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IslandManager_Finalize,*pFVar15,
                        L"IslandManager::Finalize","STATGROUP_ChaosIslands","STATCAT_Advanced",
                        L"ChaosIslands",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar16;
  bVar7 = false;
  bVar5 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar11 = false;
  bVar12 = false;
  if ((FVar23.ComparisonIndex.Value.Value != 0) ||
     (bVar13 = bVar5, bVar6 = bVar7, FVar23.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_bc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_bc._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar7 = false;
      bVar5 = true;
      bVar11 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_a0.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                   ,0x904);
        bVar7 = true;
        bVar5 = true;
        bVar11 = true;
        bVar12 = true;
      }
    }
    bVar13 = bVar5;
    bVar6 = bVar7;
    if (FThreadStats::bPrimaryEnable != false) {
      local_88 = FVar23;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar12 = true;
      bVar11 = true;
      goto LAB_143b6317c;
    }
  }
  bVar7 = bVar11;
  bVar5 = bVar12;
  bVar12 = false;
  bVar11 = false;
  local_88 = local_80;
  FVar23 = local_80;
LAB_143b6317c:
  uVar21 = (this->Islands).Items.ArrayNum - 1;
  local_cc = uVar21;
  if (-1 < (int)uVar21) {
    lVar25 = (longlong)(int)uVar21;
    lVar28 = lVar25 * 8;
    do {
      uVar14 = 0;
      if ((int)uVar21 < (this->Islands).Items.ArrayNum) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      local_cc = uVar21;
      local_b0 = lVar25;
      local_a8 = lVar28;
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *(FPBDIsland **)((this->Islands).Items.AllocatorInstance.Data + lVar28);
      uVar14 = (this_00->Flags).Bits;
      uVar19 = uVar14 >> 6 & 1;
      if (((uVar19 == 0) || (uVar19 != (uVar14 >> 7 & 1))) || ((uVar14 >> 8 & 1) != 0)) {
        if (((CVars::bChaosSolverPartialIslandSleep == false) || (((byte)uVar14 & 0x28) != 0x28)) ||
           (((uVar14 & 4) == 0 ||
            ((CVars::bChaosSolverForcePartialIslandWake == false && ((uVar14 & 0x10) == 0)))))) {
          PropagateIslandSleep(this,this_00);
        }
        else {
          if (uVar19 == 0) {
            ProcessPartialIslandWake(this,this_00,true);
          }
          SyncConstraintSleepStateToParticles(this,this_00);
        }
        FPBDIsland::UpdateSyncState(this_00);
      }
      if (this_00->NumEdges == 0) {
        DestroyIslandNodes(this,this_00);
        DestroyIsland(this,this_00);
      }
      else {
        uVar14 = (this_00->Flags).Bits;
        FVar17._4_4_ = 0;
        FVar17._0_4_ = uVar14;
        if ((((uVar14 & 4) == 0) || ((uVar14 & 0x40) != 0)) || ((char)uVar14 < '\0')) {
          this_00->SleepCounter = 0;
        }
        if ((uVar14 & 3) != 0) {
          FVar26 = StatPtr_STAT_IslandManager_ComputeIterationSettings;
          if (StatPtr_STAT_IslandManager_ComputeIterationSettings ==
              (FThreadSafeStaticStat<FStat_STAT_IslandManager_ComputeIterationSettings>)0x0) {
            pFVar15 = ::FName::FName(local_50,"STAT_IslandManager_ComputeIterationSettings");
            FVar17 = (FThreadSafeStaticStat<FStat_STAT_IslandManager_ComputeIterationSettings>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_IslandManager_ComputeIterationSettings,*pFVar15,
                                L"IslandManager::ComputeIterationSettings","STATGROUP_ChaosIslands",
                                "STATCAT_Advanced",L"ChaosIslands",true,true,ST_int64,true,false,
                                MCR_Invalid);
            FVar26 = FVar17;
          }
          FVar23 = *(FName *)FVar26;
          bVar12 = false;
          bVar6 = false;
          local_70.ComparisonIndex.Value = 0;
          local_70.Number = 0;
          bVar13 = false;
          bVar9 = false;
          FVar22 = FVar23.ComparisonIndex.Value;
          uVar21 = FVar23.Number;
          if ((FVar22.Value == 0) && (bVar8 = bVar12, bVar10 = bVar6, uVar21 == 0)) {
LAB_143b633f8:
            bVar6 = bVar9;
            bVar12 = bVar13;
            bVar13 = false;
            bVar9 = false;
            FVar23 = local_70;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_b8[0].Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_b8[0]._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
              bVar12 = false;
              bVar6 = true;
              bVar13 = false;
              bVar9 = true;
              FVar17 = (FThreadSafeStaticStat<FStat_STAT_IslandManager_ComputeIterationSettings>)
                       CpuChannel;
              if (-1 < CpuChannel->Enabled) {
                local_98.ComparisonIndex.Value = FVar22.Value;
                local_98.Number = uVar21;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_98,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                           ,0x93a);
                bVar12 = true;
                bVar6 = true;
                bVar13 = true;
                bVar9 = true;
                FVar17 = extraout_RAX;
              }
            }
            bVar8 = bVar12;
            bVar10 = bVar6;
            if (FThreadStats::bPrimaryEnable == false) goto LAB_143b633f8;
            local_90 = FVar22.Value;
            uStack_8c = uVar21;
            local_70 = FVar23;
            FThreadStats::AddMessage(FVar23,CycleScopeStart);
            bVar13 = true;
            bVar9 = true;
            FVar17 = extraout_RAX_00;
          }
          if (CVars::bChaosSolverComputeIterationSettings != false) {
            pFVar24 = (this_00->Nodes).AllocatorInstance.Data;
            iVar2 = (this_00->Nodes).ArrayNum;
            uVar21 = 0xff;
            local_c8 = (uint)CONCAT71(FVar17._1_7_,0xff);
            pFVar27 = pFVar24 + (longlong)iVar2 * 8;
            local_d8 = 0xffff;
            local_d0 = 0xff;
            local_c4 = local_c8;
            local_60 = pFVar27;
            while( true ) {
              if ((this_00->Nodes).ArrayNum != iVar2) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::
                __l2::<lambda_1>::operator()(local_res20);
                uVar21 = local_d0;
              }
              if (pFVar24 == pFVar27) break;
              if ((*(byte *)((longlong)*(longlong **)pFVar24 + 0x2c) & 1) != 0) {
                plVar3 = (longlong *)**(longlong **)pFVar24;
                plVar18 = (longlong *)0x0;
                if (1 < *(byte *)((longlong)plVar3 + 0xc)) {
                  plVar18 = plVar3;
                }
                uVar21 = *(uint *)(plVar18 + 1);
                lVar28 = *plVar18;
                uVar14 = 0;
                if ((int)uVar21 < *(int *)(lVar28 + 0x520)) {
                  uVar14 = ~uVar21 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                lVar28 = *(longlong *)(lVar28 + 0x518);
                uVar1 = *(undefined2 *)((longlong)(int)uVar21 * 3 + lVar28);
                uVar21 = (uint)*(char *)((longlong)(int)uVar21 * 3 + 2 + lVar28);
                local_c0._1_1_ = (char)((ushort)uVar1 >> 8);
                if ((int)uVar21 < (int)(char)local_d0) {
                  uVar21 = (int)(char)local_d0;
                }
                uVar14 = (int)local_c0._1_1_;
                if ((int)local_c0._1_1_ < (int)(char)local_c4) {
                  uVar14 = (int)(char)local_c4;
                }
                uVar19 = (int)(char)uVar1;
                if ((int)(char)uVar1 < (int)(char)local_c8) {
                  uVar19 = (int)(char)local_c8;
                }
                uVar20 = 0x7f;
                if ((int)uVar19 < 0x7f) {
                  uVar20 = uVar19;
                }
                uVar19 = 0x7f;
                if ((int)uVar14 < 0x7f) {
                  uVar19 = uVar14;
                }
                uVar14 = 0x7f;
                if ((int)uVar21 < 0x7f) {
                  uVar14 = uVar21;
                }
                local_c8 = 0xffffffff;
                if (-1 < (int)uVar20) {
                  local_c8 = uVar20 & 0xff;
                }
                local_c4 = 0xffffffff;
                if (-1 < (int)uVar19) {
                  local_c4 = uVar19 & 0xff;
                }
                uVar21 = 0xffffffff;
                if (-1 < (int)uVar14) {
                  uVar21 = uVar14 & 0xff;
                }
                local_d8 = CONCAT11((char)local_c4,(char)local_c8);
                pFVar27 = local_60;
                local_d0 = uVar21;
                local_c0 = uVar1;
              }
              pFVar24 = pFVar24 + 8;
            }
            (this_00->Iterations).NumPositionIterations = (undefined1)local_d8;
            (this_00->Iterations).NumVelocityIterations = local_d8._1_1_;
            (this_00->Iterations).NumProjectionIterations = (schar)uVar21;
            bVar8 = bVar12;
            bVar13 = bVar9;
            bVar10 = bVar6;
          }
          if (bVar10) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar8) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          lVar25 = local_b0;
          lVar28 = local_a8;
          uVar21 = local_cc;
          if (bVar13) {
            FThreadStats::AddMessage(FVar23,CycleScopeEnd);
            lVar25 = local_b0;
            lVar28 = local_a8;
            uVar21 = local_cc;
          }
        }
        if (CVars::bChaosRandomizeConstraintOrder != false) {
          RandomizeIslandEdges(this,this_00);
        }
        this_00->ResimFrame = -1;
        (this_00->Flags).Bits =
             (((this_00->Flags).Bits & 0x40) * 2 ^ (this_00->Flags).Bits & 0xffffff7f) & 0xfffffefc;
      }
      uVar21 = uVar21 - 1;
      lVar25 = lVar25 + -1;
      lVar28 = lVar28 + -8;
      FVar23 = local_88;
      local_cc = uVar21;
      local_b0 = lVar25;
      local_a8 = lVar28;
      bVar13 = bVar5;
      bVar6 = bVar7;
      bVar12 = bVar11;
    } while (-1 < (int)uVar21);
  }
  if (CVars::bChaosSolverPartialIslandSleep != false) {
    pFVar24 = (this->Edges).Items.AllocatorInstance.Data;
    iVar2 = (this->Edges).Items.ArrayNum;
    pFVar27 = pFVar24 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Edges).Items.ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_d4);
      }
      if (pFVar24 == pFVar27) break;
      *(uint *)(*(longlong *)pFVar24 + 0x40) = *(uint *)(*(longlong *)pFVar24 + 0x40) & 0xfffffff9;
      pFVar24 = pFVar24 + 8;
    }
    pFVar24 = (this->Nodes).Items.AllocatorInstance.Data;
    iVar2 = (this->Nodes).Items.ArrayNum;
    pFVar27 = pFVar24 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Nodes).Items.ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_d3);
      }
      if (pFVar24 == pFVar27) break;
      *(uint *)(*(longlong *)pFVar24 + 0x2c) = *(uint *)(*(longlong *)pFVar24 + 0x2c) & 0xffffff8f;
      pFVar24 = pFVar24 + 8;
    }
  }
  Validate(this);
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

// FindConstraintsInIslands @ 143b651b0

TArray<Chaos::FConstraintHandle_const_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Private::FPBDIslandManager::FindConstraintsInIslands
          (FPBDIslandManager *this,
          TArray<Chaos::FConstraintHandle_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,
          TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TArray<Chaos::FConstraintHandle_const_*,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  longlong *plVar15;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined8 local_50;
  longlong local_48;
  FScriptContainerElement *local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar2 = param_1->ArrayNum;
  uVar11 = (ulonglong)(int)uVar2;
  pFVar14 = (param_1->AllocatorInstance).Data;
  local_48 = (longlong)param_2;
  local_40 = pFVar14 + uVar11 * 8;
  local_res20 = param_2;
  while( true ) {
    pFVar4 = local_40;
    lVar6 = local_48;
    if (param_1->ArrayNum != (int)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar14 == pFVar4) break;
    lVar3 = *(longlong *)pFVar14;
    uVar8 = 0;
    if ((int)local_res20 < *(int *)(lVar3 + 0x68)) {
      uVar8 = ~local_res20 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<Chaos::FConstraintHandle_const_*,TSizedDefaultAllocator<32>_> *)
                  (*pcVar5)();
        return pTVar10;
      }
    }
    lVar12 = lVar3 + 0x10;
    if (*(longlong *)(lVar3 + 0x60) != 0) {
      lVar12 = *(longlong *)(lVar3 + 0x60);
    }
    plVar15 = (longlong *)(lVar6 * 0x10 + lVar12);
    puVar13 = (undefined8 *)*plVar15;
    lVar6 = plVar15[1];
    puVar1 = puVar13 + (int)lVar6;
    while( true ) {
      if ((int)plVar15[1] != (int)lVar6) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      if (puVar13 == puVar1) break;
      local_50 = *(undefined8 *)*puVar13;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)&local_50) &&
         ((FScriptContainerElement *)&local_50 <
          pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<Chaos::FConstraintHandle_const_*,TSizedDefaultAllocator<32>_> *)
                    (*pcVar5)();
          return pTVar10;
        }
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == __return_storage_ptr__->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      puVar13 = puVar13 + 1;
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           local_50;
    }
    pFVar14 = pFVar14 + 8;
    uVar11 = (ulonglong)uVar2;
  }
  pFVar14 = (param_1->AllocatorInstance).Data;
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  return __return_storage_ptr__;
}

// FindParticleIslands @ 143b66140

TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Private::FPBDIslandManager::FindParticleIslands
          (FPBDIslandManager *this,
          TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPBDIslandParticle *pFVar5;
  TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FPBDIsland **ppFVar8;
  undefined1 local_res10 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return __return_storage_ptr__;
  }
  pFVar5 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1);
  if (pFVar5 != (FPBDIslandParticle *)0x0) {
    if ((*(byte *)&pFVar5->Flags & 1) == 0) {
      pFVar7 = (pFVar5->Edges).AllocatorInstance.Data;
      iVar4 = (pFVar5->Edges).ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar4 * 8;
      while( true ) {
        if ((pFVar5->Edges).ArrayNum != iVar4) {
          `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*_const,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar7 == pFVar1) break;
        if (*(FPBDIsland **)(*(longlong *)pFVar7 + 8) != (FPBDIsland *)0x0) {
          TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<Chaos::Private::FPBDIsland_const_*_const_&>
                    (__return_storage_ptr__,(FPBDIsland **)(*(longlong *)pFVar7 + 8));
        }
        pFVar7 = pFVar7 + 8;
      }
      return __return_storage_ptr__;
    }
    ppFVar8 = &pFVar5->Island;
    if (*ppFVar8 != (FPBDIsland *)0x0) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= ppFVar8) && (ppFVar8 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)
         ) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar2)();
          return pTVar6;
        }
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      *(FPBDIsland **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           *ppFVar8;
    }
  }
  return __return_storage_ptr__;
}

// FindParticleIslands @ 143b662a0

void __thiscall
Chaos::Private::FPBDIslandManager::FindParticleIslands
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPBDIslandParticle *pFVar5;
  FScriptContainerElement *pFVar6;
  FPBDIsland **ppFVar7;
  undefined1 local_res10 [8];
  
  if ((param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (pFVar5 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1),
     pFVar5 != (FPBDIslandParticle *)0x0)) {
    if ((*(byte *)&pFVar5->Flags & 1) == 0) {
      pFVar6 = (pFVar5->Edges).AllocatorInstance.Data;
      iVar4 = (pFVar5->Edges).ArrayNum;
      pFVar1 = pFVar6 + (longlong)iVar4 * 8;
      while( true ) {
        if ((pFVar5->Edges).ArrayNum != iVar4) {
          `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*_const,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar6 == pFVar1) break;
        if (*(FPBDIsland **)(*(longlong *)pFVar6 + 8) != (FPBDIsland *)0x0) {
          TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<Chaos::Private::FPBDIsland_const_*_const_&>
                    (param_2,(FPBDIsland **)(*(longlong *)pFVar6 + 8));
        }
        pFVar6 = pFVar6 + 8;
      }
    }
    else {
      ppFVar7 = &pFVar5->Island;
      if (*ppFVar7 != (FPBDIsland *)0x0) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= ppFVar7) && (ppFVar7 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = param_2->ArrayNum;
        if (iVar4 == param_2->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar4 + 1;
        *(FPBDIsland **)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) = *ppFVar7;
        return;
      }
    }
  }
  return;
}

// FindParticlesInIslands @ 143b663f0

TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSizedDefaultAllocator<32>_> *
__thiscall
Chaos::Private::FPBDIslandManager::FindParticlesInIslands
          (FPBDIslandManager *this,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,
          TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_> *local_res18;
  uint local_res20;
  TGeometryParticleHandleImp<double,3,1> *local_60;
  TGeometryParticleHandleImp<double,3,1> *local_58;
  longlong *local_50;
  FScriptContainerElement *local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res20 = param_1->ArrayNum;
  uVar8 = (ulonglong)(int)local_res20;
  pFVar11 = (param_1->AllocatorInstance).Data;
  local_48 = pFVar11 + uVar8 * 8;
  local_res18 = param_1;
  while( true ) {
    pFVar7 = local_48;
    if (local_res18->ArrayNum != (int)uVar8) {
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar11 == pFVar7) break;
    lVar3 = *(longlong *)pFVar11;
    plVar10 = (longlong *)(lVar3 + 0x10);
    iVar2 = *(int *)(lVar3 + 0x68);
    if (*(longlong **)(lVar3 + 0x60) != (longlong *)0x0) {
      plVar10 = *(longlong **)(lVar3 + 0x60);
    }
    local_50 = plVar10 + (longlong)iVar2 * 2;
    while( true ) {
      plVar1 = local_50;
      if (*(int *)(lVar3 + 0x68) != iVar2) {
        `TCheckedPointerIterator<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (plVar10 == plVar1) break;
      plVar9 = (longlong *)*plVar10;
      lVar6 = plVar10[1];
      plVar1 = plVar9 + (int)lVar6;
      while( true ) {
        if ((int)plVar10[1] != (int)lVar6) {
          `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*_const,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res10);
        }
        if (plVar9 == plVar1) break;
        lVar4 = *plVar9;
        puVar5 = *(undefined8 **)(lVar4 + 0x10);
        if (puVar5 != (undefined8 *)0x0) {
          local_60 = (TGeometryParticleHandleImp<double,3,1> *)*puVar5;
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSizedDefaultAllocator<32>_>
          ::AddUniqueImpl<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*>
                    (__return_storage_ptr__,&local_60);
        }
        puVar5 = *(undefined8 **)(lVar4 + 0x18);
        if (puVar5 != (undefined8 *)0x0) {
          local_58 = (TGeometryParticleHandleImp<double,3,1> *)*puVar5;
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSizedDefaultAllocator<32>_>
          ::AddUniqueImpl<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*>
                    (__return_storage_ptr__,&local_58);
        }
        plVar9 = plVar9 + 1;
      }
      plVar10 = plVar10 + 2;
    }
    pFVar11 = pFVar11 + 8;
    uVar8 = (ulonglong)local_res20;
  }
  pFVar11 = (local_res18->AllocatorInstance).Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  return __return_storage_ptr__;
}

// FindParticlesInIslands @ 143b66570

void __thiscall
Chaos::Private::FPBDIslandManager::FindParticlesInIslands
          (FPBDIslandManager *this,
          TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSizedDefaultAllocator<32>_>
          *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res20 [8];
  TGeometryParticleHandleImp<double,3,1> *local_58;
  TGeometryParticleHandleImp<double,3,1> *local_50;
  longlong *local_48;
  FScriptContainerElement *local_40;
  
  uVar2 = param_1->ArrayNum;
  uVar9 = (ulonglong)(int)uVar2;
  pFVar12 = (param_1->AllocatorInstance).Data;
  local_40 = pFVar12 + uVar9 * 8;
  while( true ) {
    pFVar8 = local_40;
    if (param_1->ArrayNum != (int)uVar9) {
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_const_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar12 == pFVar8) break;
    lVar4 = *(longlong *)pFVar12;
    plVar11 = (longlong *)(lVar4 + 0x10);
    iVar3 = *(int *)(lVar4 + 0x68);
    if (*(longlong **)(lVar4 + 0x60) != (longlong *)0x0) {
      plVar11 = *(longlong **)(lVar4 + 0x60);
    }
    local_48 = plVar11 + (longlong)iVar3 * 2;
    while( true ) {
      plVar1 = local_48;
      if (*(int *)(lVar4 + 0x68) != iVar3) {
        `TCheckedPointerIterator<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (plVar11 == plVar1) break;
      plVar10 = (longlong *)*plVar11;
      lVar7 = plVar11[1];
      plVar1 = plVar10 + (int)lVar7;
      while( true ) {
        if ((int)plVar11[1] != (int)lVar7) {
          `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*_const,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res20);
        }
        if (plVar10 == plVar1) break;
        lVar5 = *plVar10;
        puVar6 = *(undefined8 **)(lVar5 + 0x10);
        if (puVar6 != (undefined8 *)0x0) {
          local_58 = (TGeometryParticleHandleImp<double,3,1> *)*puVar6;
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSizedDefaultAllocator<32>_>
          ::AddUniqueImpl<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*>(param_2,&local_58);
        }
        puVar6 = *(undefined8 **)(lVar5 + 0x18);
        if (puVar6 != (undefined8 *)0x0) {
          local_50 = (TGeometryParticleHandleImp<double,3,1> *)*puVar6;
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSizedDefaultAllocator<32>_>
          ::AddUniqueImpl<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*>(param_2,&local_50);
        }
        plVar10 = plVar10 + 1;
      }
      plVar11 = plVar11 + 2;
    }
    pFVar12 = pFVar12 + 8;
    uVar9 = (ulonglong)uVar2;
  }
  return;
}

// FlagParticleTransformSetExplicitly @ 143b666c0

void __thiscall
Chaos::Private::FPBDIslandManager::FlagParticleTransformSetExplicitly
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FPBDIslandParticle *pFVar1;
  
  if (((CVars::bChaosSolverPartialIslandSleep) && (CVars::bChaosSolverPartialWakePreIntegration)) &&
     (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
    pFVar1 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1);
    if (((pFVar1 != (FPBDIslandParticle *)0x0) && (pFVar1->Island != (FPBDIsland *)0x0)) &&
       ((CVars::bChaosSolverPartialIslandSleep != false &&
        (((byte)(pFVar1->Island->Flags).Bits & 0x28) == 0x28)))) {
      (pFVar1->Flags).Bits = (pFVar1->Flags).Bits | 0x40;
    }
  }
  return;
}

// FlagParticleUpdated @ 143b66720

void __thiscall
Chaos::Private::FPBDIslandManager::FlagParticleUpdated
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FPBDIslandParticle *pFVar1;
  
  if (((CVars::bChaosSolverPartialIslandSleep) && (CVars::bChaosSolverPartialWakePreIntegration)) &&
     (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
    pFVar1 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1);
    if (((pFVar1 != (FPBDIslandParticle *)0x0) && (pFVar1->Island != (FPBDIsland *)0x0)) &&
       ((CVars::bChaosSolverPartialIslandSleep != false &&
        (((byte)(pFVar1->Island->Flags).Bits & 0x28) == 0x28)))) {
      (pFVar1->Flags).Bits = (pFVar1->Flags).Bits | 0x10;
    }
  }
  return;
}

// GetConstraintColor @ 143b67660

int __thiscall
Chaos::Private::FPBDIslandManager::GetConstraintColor
          (FPBDIslandManager *this,FPBDIslandConstraint *param_1)

{
  return -1;
}

// GetConstraintIsland @ 143b676f0

FPBDIsland * __thiscall
Chaos::Private::FPBDIslandManager::GetConstraintIsland
          (FPBDIslandManager *this,FConstraintHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPBDIsland *pFVar3;
  
  if (param_1 == (FConstraintHandle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Constraint != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x4ef,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPBDIsland *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_1->GraphEdge != (FPBDIslandConstraint *)0x0) {
    return param_1->GraphEdge->Island;
  }
  return (FPBDIsland *)0x0;
}

// GetConstraintLevel @ 143b67750

int __thiscall
Chaos::Private::FPBDIslandManager::GetConstraintLevel
          (FPBDIslandManager *this,FPBDIslandConstraint *param_1)

{
  if (param_1 != (FPBDIslandConstraint *)0x0) {
    return param_1->Level;
  }
  return -1;
}

// GetGraphEdge @ 143b67770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPBDIslandConstraint * __thiscall
Chaos::Private::FPBDIslandManager::GetGraphEdge(FPBDIslandManager *this,FConstraintHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPBDIslandConstraint *pFVar3;
  
  if (param_1 != (FConstraintHandle *)0x0) {
    return param_1->GraphEdge;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Constraint != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                     ,0x4ef,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPBDIslandConstraint *)(*pcVar1)();
    return pFVar3;
  }
  return _DAT_00000010;
}

// GetGraphEdge @ 143b677c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPBDIslandConstraint * __thiscall
Chaos::Private::FPBDIslandManager::GetGraphEdge(FPBDIslandManager *this,FConstraintHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPBDIslandConstraint *pFVar3;
  
  if (param_1 != (FConstraintHandle *)0x0) {
    return param_1->GraphEdge;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Constraint != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                     ,0x4ef,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPBDIslandConstraint *)(*pcVar1)();
    return pFVar3;
  }
  return _DAT_00000010;
}

// GetGraphNode @ 143b67810

FPBDIslandParticle * __thiscall
Chaos::Private::FPBDIslandManager::GetGraphNode
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,0> *param_1)

{
  FPBDIslandParticle *pFVar1;
  
  pFVar1 = TGeometryParticleHandleImp<double,3,0>::GetConstraintGraphNode(param_1);
  return pFVar1;
}

// GetGraphNode @ 143b67820

FPBDIslandParticle * __thiscall
Chaos::Private::FPBDIslandManager::GetGraphNode
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FPBDIslandParticle *pFVar1;
  
  if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pFVar1 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1);
    return pFVar1;
  }
  return (FPBDIslandParticle *)0x0;
}

// GetIslandArrayIndex @ 143b67960

int __thiscall
Chaos::Private::FPBDIslandManager::GetIslandArrayIndex
          (FPBDIslandManager *this,FPBDIslandConstraint *param_1)

{
  if (param_1 != (FPBDIslandConstraint *)0x0) {
    return param_1->IslandArrayIndex;
  }
  return -1;
}

// GetIslandIndex @ 143b679c0

int __thiscall
Chaos::Private::FPBDIslandManager::GetIslandIndex(FPBDIslandManager *this,FPBDIsland *param_1)

{
  if (param_1 != (FPBDIsland *)0x0) {
    return param_1->ArrayIndex;
  }
  return -1;
}

// GetMergeSetParentIsland @ 143b67e20

FPBDIsland * __thiscall
Chaos::Private::FPBDIslandManager::GetMergeSetParentIsland
          (FPBDIslandManager *this,FPBDIslandMergeSet *param_1,int *param_2,
          TArrayView<int,int> *param_3)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FPBDIsland *pFVar7;
  ulonglong uVar8;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_res20 [8];
  FPBDIsland *local_50;
  
  if ((param_1 == (FPBDIslandMergeSet *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MergeSet != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x764,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FPBDIsland *)(*pcVar4)();
    return pFVar7;
  }
  lVar14 = 0;
  uVar11 = 0;
  *param_2 = 0;
  iVar10 = param_3->ArrayNum;
  local_50 = (FPBDIsland *)0x0;
  if (0 < iVar10) {
    do {
      uVar12 = 0;
      if ((int)uVar11 < iVar10) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FPBDIsland *)(*pcVar4)();
        return pFVar7;
      }
      uVar11 = uVar11 + 1;
      *(undefined4 *)(lVar14 + (longlong)param_3->DataPtr) = 0;
      lVar14 = lVar14 + 4;
      iVar10 = param_3->ArrayNum;
    } while ((int)uVar11 < iVar10);
  }
  uVar11 = (param_1->Islands).ArrayNum;
  uVar8 = (ulonglong)(int)uVar11;
  pFVar13 = (param_1->Islands).AllocatorInstance.Data;
  pFVar1 = pFVar13 + uVar8 * 8;
  do {
    if ((param_1->Islands).ArrayNum != (int)uVar8) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar13 == pFVar1) {
      return local_50;
    }
    pFVar7 = *(FPBDIsland **)pFVar13;
    if ((pFVar7 == (FPBDIsland *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Island != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                           ,0x771,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FPBDIsland *)(*pcVar4)();
      return pFVar7;
    }
    if ((local_50 == (FPBDIsland *)0x0) || (local_50->NumEdges < pFVar7->NumEdges)) {
      local_50 = pFVar7;
    }
    uVar12 = 0;
    *param_2 = *param_2 + (pFVar7->Nodes).ArrayNum;
    if (0 < (pFVar7->ContainerEdges).ArrayNum) {
      lVar14 = 0;
      lVar15 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar12 < (pFVar7->ContainerEdges).ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FPBDIsland *)(*pcVar4)();
          return pFVar7;
        }
        FVar3 = (pFVar7->ContainerEdges).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                 )&pFVar7->ContainerEdges;
        if (FVar3 != (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                      )0x0) {
          FVar9 = FVar3;
        }
        iVar10 = *(int *)(lVar15 + 8 + (longlong)FVar9);
        uVar6 = 0;
        if ((int)uVar12 < param_3->ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FPBDIsland *)(*pcVar4)();
          return pFVar7;
        }
        uVar12 = uVar12 + 1;
        lVar15 = lVar15 + 0x10;
        piVar2 = (int *)((longlong)param_3->DataPtr + lVar14);
        *piVar2 = *piVar2 + iVar10;
        lVar14 = lVar14 + 4;
      } while ((int)uVar12 < (pFVar7->ContainerEdges).ArrayNum);
    }
    pFVar13 = pFVar13 + 8;
    uVar8 = (ulonglong)uVar11;
  } while( true );
}

// GetNextVisitEpoch @ 143b683c0

int __thiscall Chaos::Private::FPBDIslandManager::GetNextVisitEpoch(FPBDIslandManager *this)

{
  int iVar1;
  
  iVar1 = this->NextVisitEpoch;
  if (this->NextVisitEpoch == 0x7fffffff) {
    iVar1 = 0;
  }
  this->NextVisitEpoch = iVar1 + 1;
  return iVar1;
}

// GetNumConstraintContainers @ 143b683e0

int __thiscall
Chaos::Private::FPBDIslandManager::GetNumConstraintContainers(FPBDIslandManager *this)

{
  return (this->ConstraintContainers).ArrayNum;
}

// GetOrCreateGraphNode @ 143b683f0

FPBDIslandParticle * __thiscall
Chaos::Private::FPBDIslandManager::GetOrCreateGraphNode
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FPBDIslandParticle *pFVar1;
  
  if ((param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (pFVar1 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1),
     pFVar1 != (FPBDIslandParticle *)0x0)) {
    return pFVar1;
  }
  pFVar1 = CreateGraphNode(this,param_1);
  return pFVar1;
}

// GetParticleColor @ 143b68430

int __thiscall
Chaos::Private::FPBDIslandManager::GetParticleColor
          (FPBDIslandManager *this,FPBDIslandParticle *param_1)

{
  return -1;
}

// GetParticleIsland @ 143b684e0

FPBDIsland * __thiscall
Chaos::Private::FPBDIslandManager::GetParticleIsland
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FPBDIslandParticle *pFVar1;
  
  if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pFVar1 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1);
    if (pFVar1 != (FPBDIslandParticle *)0x0) {
      return pFVar1->Island;
    }
  }
  return (FPBDIsland *)0x0;
}

// GetParticleLevel @ 143b68510

int __thiscall
Chaos::Private::FPBDIslandManager::GetParticleLevel
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FPBDIslandParticle *pFVar1;
  
  if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pFVar1 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1);
    if (pFVar1 != (FPBDIslandParticle *)0x0) {
      return pFVar1->Level;
    }
  }
  return -1;
}

// GetParticleLevel @ 143b68540

int __thiscall
Chaos::Private::FPBDIslandManager::GetParticleLevel
          (FPBDIslandManager *this,FPBDIslandParticle *param_1)

{
  if (param_1 != (FPBDIslandParticle *)0x0) {
    return param_1->Level;
  }
  return -1;
}

// GetParticleResimFrame @ 143b68560

int __thiscall
Chaos::Private::FPBDIslandManager::GetParticleResimFrame
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FPBDIslandParticle *pFVar1;
  
  if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pFVar1 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1);
    if (pFVar1 != (FPBDIslandParticle *)0x0) {
      return pFVar1->ResimFrame;
    }
  }
  return -1;
}

// MergeIslands @ 143b6a8d0

FPBDIsland * __thiscall
Chaos::Private::FPBDIslandManager::MergeIslands
          (FPBDIslandManager *this,FPBDIsland *param_1,FPBDIsland *param_2)

{
  int *piVar1;
  TPoolBackedArray<Chaos::Private::FPBDIslandMergeSet,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandMergeSet>_>
  *pTVar2;
  FPBDIslandMergeSet *pFVar3;
  FPBDIslandMergeSet *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FPBDIsland *pFVar9;
  FPBDIslandMergeSet *local_18 [2];
  
  if (param_1 == (FPBDIsland *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Island0 != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x6e4,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FPBDIsland *)(*pcVar6)();
      return pFVar9;
    }
  }
  if (param_2 == (FPBDIsland *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Island1 != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x6e5,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FPBDIsland *)(*pcVar6)();
      return pFVar9;
    }
  }
  if (param_1 == param_2) {
    return param_1;
  }
  pFVar3 = param_1->MergeSet;
  pFVar4 = param_2->MergeSet;
  if (pFVar3 == (FPBDIslandMergeSet *)0x0) {
    if (pFVar4 == (FPBDIslandMergeSet *)0x0) {
      pTVar2 = &this->MergeSets;
      iVar8 = (this->MergeSets).FreeItems.ArrayNum;
      if (iVar8 == 0) {
        local_18[0] = TObjectPool<Chaos::Private::FPBDIslandMergeSet>::Alloc<>
                                (&(this->MergeSets).Pool);
      }
      else {
        if (iVar8 < 1) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            pFVar9 = (FPBDIsland *)(*pcVar6)();
            return pFVar9;
          }
        }
        iVar8 = (this->MergeSets).FreeItems.ArrayNum;
        local_18[0] = *(FPBDIslandMergeSet **)
                       ((this->MergeSets).FreeItems.AllocatorInstance.Data +
                       (longlong)iVar8 * 8 + -8);
        (this->MergeSets).FreeItems.ArrayNum = iVar8 + -1;
      }
      pFVar5 = (pTVar2->Items).AllocatorInstance.Data;
      if ((pFVar5 <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar5 + (longlong)(this->MergeSets).Items.ArrayMax * 8)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FPBDIsland *)(*pcVar6)();
          return pFVar9;
        }
      }
      iVar8 = (this->MergeSets).Items.ArrayNum;
      piVar1 = &(this->MergeSets).Items.ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)pTVar2,piVar1);
      }
      pFVar3 = local_18[0];
      pFVar5 = (pTVar2->Items).AllocatorInstance.Data;
      (this->MergeSets).Items.ArrayNum = iVar8 + 1;
      *(FPBDIslandMergeSet **)(pFVar5 + (longlong)iVar8 * 8) = local_18[0];
      local_18[0]->ArrayIndex = iVar8;
      AddIslandToMergeSet(this,param_1,local_18[0]);
      AddIslandToMergeSet(this,param_2,pFVar3);
    }
    else {
      AddIslandToMergeSet(this,param_1,pFVar4);
    }
  }
  else if (pFVar3 != pFVar4) {
    if (pFVar4 == (FPBDIslandMergeSet *)0x0) {
      AddIslandToMergeSet(this,param_2,pFVar3);
    }
    else {
      CombineMergeSets(this,pFVar3,pFVar4);
    }
  }
  if (param_2->NumEdges <= param_1->NumEdges) {
    param_2 = param_1;
  }
  return param_2;
}

// MergeNodeIslands @ 143b6ab10

FPBDIsland * __thiscall
Chaos::Private::FPBDIslandManager::MergeNodeIslands
          (FPBDIslandManager *this,FPBDIslandParticle *param_1,FPBDIslandParticle *param_2)

{
  FPBDIsland *pFVar1;
  FPBDIsland *pFVar2;
  
  pFVar1 = (FPBDIsland *)0x0;
  pFVar2 = pFVar1;
  if (param_1 != (FPBDIslandParticle *)0x0) {
    pFVar2 = param_1->Island;
  }
  if (param_2 != (FPBDIslandParticle *)0x0) {
    pFVar1 = param_2->Island;
  }
  if (pFVar2 == (FPBDIsland *)0x0) {
    pFVar2 = pFVar1;
    if (pFVar1 == (FPBDIsland *)0x0) {
      pFVar2 = CreateIsland(this);
      AddNodeToIsland(this,param_1,pFVar2);
      param_1 = param_2;
    }
  }
  else {
    if (pFVar2 == pFVar1) {
      return pFVar2;
    }
    param_1 = param_2;
    if (pFVar1 != (FPBDIsland *)0x0) {
      pFVar1 = MergeIslands(this,pFVar2,pFVar1);
      return pFVar1;
    }
  }
  AddNodeToIsland(this,param_1,pFVar2);
  return pFVar2;
}

// PostStepPartialWake @ 143b6cd40

void __thiscall
Chaos::Private::FPBDIslandManager::PostStepPartialWake(FPBDIslandManager *this,FPBDIsland *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  FPBDIslandConstraint *pFVar3;
  FPBDIslandParticle *pFVar4;
  bool bVar5;
  bool bVar6;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar7;
  EObjectStateType EVar8;
  ulonglong uVar9;
  TGeometryParticleHandleImp<double,3,1> *pTVar10;
  FPBDIslandParticle *pFVar11;
  undefined8 *puVar12;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar13
  ;
  bool bVar14;
  bool bVar15;
  undefined1 local_res10 [8];
  uint local_res18;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
  local_res20;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_60 [2];
  
  FVar13 = (param_1->ContainerEdges).AllocatorInstance.SecondaryData;
  local_res18 = (param_1->ContainerEdges).ArrayNum;
  uVar9 = (ulonglong)(int)local_res18;
  local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (FVar13 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                 )0x0) {
    FVar13 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
              )&param_1->ContainerEdges;
  }
  local_60[0].ArrayNum = 0;
  local_60[0].ArrayMax = 0;
  local_res20 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                 )(uVar9 * 0x10 + (longlong)FVar13);
  while( true ) {
    FVar7 = local_res20;
    if ((param_1->ContainerEdges).ArrayNum != (int)uVar9) {
      `TCheckedPointerIterator<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar13 == FVar7) break;
    puVar12 = *(undefined8 **)FVar13;
    iVar2 = *(int *)((longlong)FVar13 + 8);
    puVar1 = puVar12 + iVar2;
    while( true ) {
      if (*(int *)((longlong)FVar13 + 8) != iVar2) {
        `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (puVar12 == puVar1) break;
      pFVar3 = (FPBDIslandConstraint *)*puVar12;
      if ((*(byte *)&pFVar3->Flags & 1) == 0) {
        pFVar4 = pFVar3->Nodes[0];
        pFVar11 = pFVar3->Nodes[1];
        if ((pFVar4 != (FPBDIslandParticle *)0x0) && (pFVar11 != (FPBDIslandParticle *)0x0)) {
          pTVar10 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)*(undefined1 *)((longlong)&pFVar4->Particle->_padding_ + 4)) {
            pTVar10 = pFVar4->Particle;
          }
          if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            bVar14 = false;
          }
          else {
            EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar10);
            bVar14 = EVar8 == Sleeping;
          }
          pTVar10 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)*(undefined1 *)((longlong)&pFVar11->Particle->_padding_ + 4)) {
            pTVar10 = pFVar11->Particle;
          }
          if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            bVar15 = false;
          }
          else {
            EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar10);
            bVar15 = EVar8 == Sleeping;
          }
          if (((*(byte *)&pFVar4->Flags & 1) == 0) || (bVar14)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (((*(byte *)&pFVar11->Flags & 1) == 0) || (bVar15)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (((bVar5) && (bVar15)) || ((bVar6 && (pFVar11 = pFVar4, bVar14)))) {
            `Chaos::Private::FPBDIslandManager::PostStepPartialWake'::__l2::<lambda_2>::operator()
                      (local_res10,pFVar11,pFVar3,local_60);
          }
        }
      }
      puVar12 = puVar12 + 1;
    }
    FVar13 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
              )((longlong)FVar13 + 0x10);
    uVar9 = (ulonglong)local_res18;
  }
  WakeUpParticles(this,local_60,false);
  if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].AllocatorInstance.Data);
  }
  return;
}

// ProcessDisable @ 143b6cf00

void __thiscall
Chaos::Private::FPBDIslandManager::ProcessDisable
          (FPBDIslandManager *this,
          TFunctionRef<void___cdecl(Chaos::TPBDRigidParticleHandleImp<double,3,1>_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType FVar5;
  longlong local_res8;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_28;
  
  if (this->DisableCounterThreshold != 0x7fffffff) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    ProcessParticlesDisable(this,&local_28);
    pFVar4 = (this->Islands).Items.AllocatorInstance.Data;
    iVar2 = (this->Islands).Items.ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Islands).Items.ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res8);
      }
      if (pFVar4 == pFVar1) break;
      uVar3 = ((*(FPBDIsland **)pFVar4)->Flags).Bits;
      if (((uVar3 & 0x40) == 0) && ((uVar3 >> 10 & 1) == 0)) {
        ProcessIslandDisable(this,*(FPBDIsland **)pFVar4,&local_28);
      }
      pFVar4 = pFVar4 + 8;
    }
    iVar2 = local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
    FVar5.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (FVar5.Data == pFVar1) break;
      if (*(longlong *)FVar5.Data != 0) {
        local_res8 = *(longlong *)FVar5.Data;
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
      }
      FVar5.Data = FVar5.Data + 8;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// ProcessIslandDisable @ 143b6d000

void __thiscall
Chaos::Private::FPBDIslandManager::ProcessIslandDisable
          (FPBDIslandManager *this,FPBDIsland *param_1,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong *local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  iVar10 = (param_1->Nodes).ArrayNum;
  pFVar11 = (param_1->Nodes).AllocatorInstance.Data;
  if ((iVar10 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar1 = pFVar11 + (longlong)iVar10 * 8;
  do {
    if (pFVar11 == pFVar1) {
      return;
    }
    plVar3 = *(longlong **)pFVar11;
    if ((0.0 < *(float *)(plVar3 + 9)) || (0.0 < *(float *)((longlong)plVar3 + 0x4c))) {
      local_68 = (longlong *)0x0;
      if (1 < *(byte *)(*plVar3 + 0xc)) {
        local_68 = (longlong *)*plVar3;
      }
      if (local_68 != (longlong *)0x0) {
        iVar10 = 0;
        TKinematicGeometryParticlesImp<double,3,0>::GetV
                  ((TKinematicGeometryParticlesImp<double,3,0> *)*local_68,
                   (TVector<double,3> *)&local_60,(int)local_68[1]);
        TKinematicGeometryParticlesImp<double,3,0>::GetW
                  ((TKinematicGeometryParticlesImp<double,3,0> *)*local_68,
                   (TVector<double,3> *)&local_48,(int)local_68[1]);
        if ((local_60 * local_60 + local_58 * local_58 + local_50 * local_50 <
             (double)*(float *)(plVar3 + 9)) &&
           (local_40 * local_40 + local_48 * local_48 + local_38 * local_38 <
            (double)*(float *)((longlong)plVar3 + 0x4c))) {
          uVar2 = *(uint *)(local_68 + 1);
          lVar4 = *local_68;
          uVar8 = 0;
          if ((int)uVar2 < *(int *)(lVar4 + 0x508)) {
            uVar8 = ~uVar2 >> 0x1f;
          }
          if ((uVar8 == 0) &&
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
          iVar10 = *(char *)((longlong)(int)uVar2 + *(longlong *)(lVar4 + 0x500)) + 1;
          if (this->DisableCounterThreshold < iVar10) {
            pFVar5 = (param_2->AllocatorInstance).Data;
            if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
                ((FScriptContainerElement *)&local_68 < pFVar5 + (longlong)param_2->ArrayMax * 8))
               && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = param_2->ArrayNum;
            if (iVar9 == param_2->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar9 + 1;
            *(longlong **)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_68;
          }
        }
        uVar2 = *(uint *)(local_68 + 1);
        lVar4 = *local_68;
        uVar8 = 0;
        if ((int)uVar2 < *(int *)(lVar4 + 0x508)) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(char *)((longlong)(int)uVar2 + *(longlong *)(lVar4 + 0x500)) = (char)iVar10;
      }
    }
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// ProcessIslandMerge @ 143b6d2f0

void __thiscall
Chaos::Private::FPBDIslandManager::ProcessIslandMerge
          (FPBDIslandManager *this,FPBDIsland *param_1,FPBDIsland *param_2)

{
  FFlags *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined1 uVar3;
  undefined1 uVar5;
  undefined2 uVar4;
  longlong *plVar6;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  schar sVar14;
  longlong *plVar15;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar16
  ;
  char cVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  int iVar25;
  uint uVar26;
  ForAnyElementType *pFVar27;
  char cVar28;
  char cVar29;
  ForAnyElementType *pFVar30;
  longlong *plVar31;
  longlong lVar32;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined2 local_res20;
  char local_res22;
  char cStack_57;
  longlong local_50;
  
  if (param_1 != param_2) {
    pFVar1 = &param_2->Flags;
    iVar25 = param_2->SleepCounter;
    if (param_1->SleepCounter < param_2->SleepCounter) {
      iVar25 = param_1->SleepCounter;
    }
    uVar26 = (param_1->Flags).Bits;
    param_1->SleepCounter = iVar25;
    (param_1->Flags).Bits = uVar26 | 1;
    if (((uVar26 & 2) == 0) && ((*(byte *)pFVar1 & 2) == 0)) {
      uVar18 = 0;
    }
    else {
      uVar18 = 2;
    }
    (param_1->Flags).Bits = uVar26 & 0xfffffffd | 1 | uVar18;
    if (((uVar26 & 4) == 0) || ((*(byte *)pFVar1 & 4) == 0)) {
      uVar19 = 0;
    }
    else {
      uVar19 = 4;
    }
    (param_1->Flags).Bits = uVar26 & 0xfffffff9 | 1 | uVar18 | uVar19;
    if (((uVar26 & 8) == 0) || ((*(byte *)pFVar1 & 8) == 0)) {
      uVar20 = 0;
    }
    else {
      uVar20 = 8;
    }
    (param_1->Flags).Bits = uVar26 & 0xfffffff1 | 1 | uVar18 | uVar19 | uVar20;
    if (((uVar26 & 0x10) == 0) && ((*(byte *)&param_2->Flags & 0x10) == 0)) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0x10;
    }
    (param_1->Flags).Bits = uVar26 & 0xffffffe1 | 1 | uVar18 | uVar19 | uVar20 | uVar21;
    if (((uVar26 & 0x40) == 0) || ((*(byte *)&param_2->Flags & 0x40) == 0)) {
      uVar22 = 0;
    }
    else {
      uVar22 = 0x40;
    }
    uVar11 = uVar26 & 0xffffffa1 | 1 | uVar18 | uVar19 | uVar20 | uVar21 | uVar22;
    (param_1->Flags).Bits = uVar11;
    if (((char)uVar11 < '\0') || ((*(byte *)&param_2->Flags & 0x80) != 0)) {
      uVar11 = 0x80;
    }
    else {
      uVar11 = 0;
    }
    uVar23 = 0x100;
    (param_1->Flags).Bits =
         uVar26 & 0xffffff21 | 1 | uVar18 | uVar19 | uVar20 | uVar21 | uVar22 | uVar11;
    if (((uVar26 & 0x100) == 0) && (((param_2->Flags).Bits & 0x100) == 0)) {
      uVar23 = 0;
    }
    iVar25 = (param_1->Nodes).ArrayNum;
    (param_1->Flags).Bits =
         uVar26 & 0xfffffc21 | 1 | uVar18 | uVar19 | uVar20 | uVar21 | uVar22 | uVar11 | uVar23;
    pFVar24 = (param_2->Nodes).AllocatorInstance.Data;
    iVar12 = (param_2->Nodes).ArrayNum;
    pFVar2 = pFVar24 + (longlong)iVar12 * 8;
    while( true ) {
      if ((param_2->Nodes).ArrayNum != iVar12) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar24 == pFVar2) break;
      plVar6 = *(longlong **)pFVar24;
      if ((*(byte *)((longlong)plVar6 + 0x2c) & 1) != 0) {
        plVar6[1] = (longlong)param_1;
        *(int *)(plVar6 + 5) = iVar25;
        iVar25 = iVar25 + 1;
        plVar15 = (longlong *)0x0;
        if (1 < *(byte *)(*plVar6 + 0xc)) {
          plVar15 = (longlong *)*plVar6;
        }
        uVar26 = *(uint *)(plVar15 + 1);
        lVar32 = *plVar15;
        uVar18 = 0;
        if ((int)uVar26 < *(int *)(lVar32 + 0x520)) {
          uVar18 = ~uVar26 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar3 = (param_1->Iterations).NumPositionIterations;
        uVar5 = (param_1->Iterations).NumVelocityIterations;
        lVar32 = *(longlong *)(lVar32 + 0x518);
        local_res22 = *(char *)((longlong)(int)uVar26 * 3 + 2 + lVar32);
        uVar4 = *(undefined2 *)((longlong)(int)uVar26 * 3 + lVar32);
        cVar28 = (param_1->Iterations).NumProjectionIterations;
        cVar13 = local_res22;
        if (local_res22 < cVar28) {
          cVar13 = cVar28;
        }
        local_res20._1_1_ = (char)((ushort)uVar4 >> 8);
        if (local_res20._1_1_ < (char)uVar5) {
          local_res20._1_1_ = uVar5;
        }
        cVar28 = (char)uVar4;
        if ((char)uVar4 < (char)uVar3) {
          cVar28 = uVar3;
        }
        cVar17 = '\x7f';
        if (cVar28 < '\x7f') {
          cVar17 = cVar28;
        }
        cVar28 = '\x7f';
        if (local_res20._1_1_ < '\x7f') {
          cVar28 = local_res20._1_1_;
        }
        cVar29 = '\x7f';
        if (cVar13 < '\x7f') {
          cVar29 = cVar13;
        }
        cVar13 = -1;
        if (-1 < cVar17) {
          cVar13 = cVar17;
        }
        (param_1->Iterations).NumPositionIterations = cVar13;
        sVar14 = -1;
        if (-1 < cVar28) {
          sVar14 = cVar28;
        }
        (param_1->Iterations).NumVelocityIterations = sVar14;
        sVar14 = -1;
        if (-1 < cVar29) {
          sVar14 = cVar29;
        }
        (param_1->Iterations).NumProjectionIterations = sVar14;
        local_res20 = uVar4;
      }
      pFVar24 = pFVar24 + 8;
    }
    uVar26 = 0;
    if (0 < (param_2->ContainerEdges).ArrayNum) {
      local_50 = 0;
      do {
        uVar18 = 0;
        if ((int)uVar26 < (param_1->ContainerEdges).ArrayNum) {
          uVar18 = ~uVar26 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar7 = (param_1->ContainerEdges).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                  )&param_1->ContainerEdges;
        if (FVar7 != (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                      )0x0) {
          FVar16 = FVar7;
        }
        iVar25 = *(int *)((uchar *)((longlong)FVar16 + 8) + local_50);
        uVar18 = 0;
        if ((int)uVar26 < (param_2->ContainerEdges).ArrayNum) {
          uVar18 = ~uVar26 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar7 = (param_2->ContainerEdges).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                  )&param_2->ContainerEdges;
        if (FVar7 != (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                      )0x0) {
          FVar16 = FVar7;
        }
        plVar31 = (longlong *)(local_50 + (longlong)FVar16);
        plVar15 = (longlong *)*plVar31;
        lVar32 = plVar31[1];
        plVar6 = plVar15 + (int)lVar32;
        while( true ) {
          if ((int)plVar31[1] != (int)lVar32) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res18);
          }
          if (plVar15 == plVar6) break;
          lVar8 = *plVar15;
          plVar15 = plVar15 + 1;
          *(FPBDIsland **)(lVar8 + 8) = param_1;
          *(int *)(lVar8 + 0x34) = iVar25;
          iVar25 = iVar25 + 1;
        }
        local_50 = local_50 + 0x10;
        uVar26 = uVar26 + 1;
      } while ((int)uVar26 < (param_2->ContainerEdges).ArrayNum);
    }
    iVar25 = (param_2->Nodes).ArrayNum;
    if (iVar25 != 0) {
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,iVar25,(ForAnyElementType *)param_1,&(param_1->Nodes).ArrayNum,
                          &(param_1->Nodes).ArrayMax);
      memmove((param_1->Nodes).AllocatorInstance.Data + (longlong)iVar12 * 8,
              (param_2->Nodes).AllocatorInstance.Data,(longlong)iVar25 << 3);
    }
    (param_2->Nodes).ArrayNum = 0;
    if ((param_2->Nodes).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)param_2,0,&(param_2->Nodes).ArrayMax);
    }
    uVar26 = 0;
    if (0 < (param_2->ContainerEdges).ArrayNum) {
      lVar32 = 0;
      do {
        uVar18 = 0;
        if ((int)uVar26 < (param_2->ContainerEdges).ArrayNum) {
          uVar18 = ~uVar26 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar7 = (param_2->ContainerEdges).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                  )&param_2->ContainerEdges;
        if (FVar7 != (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                      )0x0) {
          FVar16 = FVar7;
        }
        param_1->NumEdges = param_1->NumEdges + *(int *)(lVar32 + 8 + (longlong)FVar16);
        uVar18 = 0;
        if ((int)uVar26 < (param_1->ContainerEdges).ArrayNum) {
          uVar18 = ~uVar26 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar7 = (param_1->ContainerEdges).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                  )&param_1->ContainerEdges;
        if (FVar7 != (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                      )0x0) {
          FVar16 = FVar7;
        }
        pFVar27 = (ForAnyElementType *)((longlong)FVar16 + lVar32);
        uVar18 = 0;
        if ((int)uVar26 < (param_2->ContainerEdges).ArrayNum) {
          uVar18 = ~uVar26 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar7 = (param_2->ContainerEdges).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                  )&param_2->ContainerEdges;
        if (FVar7 != (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                      )0x0) {
          FVar16 = FVar7;
        }
        pFVar30 = (ForAnyElementType *)((longlong)FVar16 + lVar32);
        if ((pFVar27 == pFVar30) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x986,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar25 = *(int *)&pFVar30[1].Data;
        if (iVar25 != 0) {
          iVar12 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,iVar25,pFVar27,(int *)(pFVar27 + 1),
                              (int *)((longlong)&pFVar27[1].Data + 4));
          memmove(pFVar27->Data + (longlong)iVar12 * 8,pFVar30->Data,(longlong)iVar25 << 3);
          *(undefined4 *)&pFVar30[1].Data = 0;
        }
        uVar18 = 0;
        if ((int)uVar26 < (param_2->ContainerEdges).ArrayNum) {
          uVar18 = ~uVar26 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar7 = (param_2->ContainerEdges).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                  )&param_2->ContainerEdges;
        if (FVar7 != (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                      )0x0) {
          FVar16 = FVar7;
        }
        pFVar27 = (ForAnyElementType *)((longlong)FVar16 + lVar32);
        iVar25 = *(int *)((longlong)&pFVar27[1].Data + 4);
        *(undefined4 *)&pFVar27[1].Data = 0;
        if (iVar25 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,pFVar27,0,(int *)((longlong)&pFVar27[1].Data + 4));
        }
        uVar26 = uVar26 + 1;
        lVar32 = lVar32 + 0x10;
      } while ((int)uVar26 < (param_2->ContainerEdges).ArrayNum);
    }
    iVar25 = (param_2->Nodes).ArrayNum;
    param_2->NumEdges = 0;
    if ((iVar25 != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Island->Nodes.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                            ,0x5f2,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((param_2->NumEdges != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Island->NumEdges == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                            ,0x5f3,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((param_2->MergeSetIslandIndex != -1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Island->MergeSetIslandIndex == INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                            ,0x5f4,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TPoolBackedArray<Chaos::Private::FPBDIsland,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIsland>_>
    ::Free(&this->Islands,param_2);
  }
  return;
}

// ProcessIslandSleep @ 143b6da90

void __thiscall
Chaos::Private::FPBDIslandManager::ProcessIslandSleep
          (FPBDIslandManager *this,FPBDIsland *param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  schar sVar13;
  uint uVar14;
  int iVar15;
  TVector<double,3> *pTVar16;
  longlong lVar17;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  FScriptContainerElement *pFVar18;
  int local_res20;
  
  iVar5 = (param_1->Nodes).ArrayNum;
  local_res20 = 0;
  pFVar18 = (param_1->Nodes).AllocatorInstance.Data;
  bVar12 = true;
  bVar10 = true;
  if ((iVar5 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar1 = pFVar18 + (longlong)iVar5 * 8;
  iVar5 = 0;
  for (; pFVar18 != pFVar1; pFVar18 = pFVar18 + 8) {
    plVar7 = *(longlong **)pFVar18;
    if ((*(float *)((longlong)plVar7 + 0x34) <= 0.0) && (*(float *)(plVar7 + 7) <= 0.0))
    goto LAB_143b6dcf5;
    this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)((TPBDRigidParticleHandleImp<double,3,1> *)*plVar7)->field_0xc) {
      this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)*plVar7;
    }
    iVar15 = iVar5;
    if (this_00 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      UpdateParticleSleepMetrics<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                (this_00,(double)param_2);
      uVar6 = *(uint *)&this_00->field_0x8;
      lVar17 = (longlong)(int)uVar6;
      lVar8 = *(longlong *)this_00;
      uVar14 = 0;
      if ((int)uVar6 < *(int *)(lVar8 + 0x2f8)) {
        uVar14 = ~uVar6 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar8 = *(longlong *)(lVar8 + 0x2f0);
      dVar2 = *(double *)(lVar8 + lVar17 * 0x18);
      dVar3 = *(double *)(lVar8 + 8 + lVar17 * 0x18);
      dVar4 = *(double *)(lVar8 + 0x10 + lVar17 * 0x18);
      if (((double)*(float *)((longlong)plVar7 + 0x34) <
           dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4) ||
         (pTVar16 = TPBDRigidParticleHandleImp<double,3,1>::WSmooth(this_00),
         (double)*(float *)(plVar7 + 7) <
         *(double *)&pTVar16->field_0x8 * *(double *)&pTVar16->field_0x8 +
         *(double *)pTVar16 * *(double *)pTVar16 +
         *(double *)&pTVar16->field_0x10 * *(double *)&pTVar16->field_0x10)) {
        uVar6 = *(uint *)&this_00->field_0x8;
        lVar8 = *(longlong *)this_00;
        bVar10 = false;
        uVar14 = 0;
        if ((int)uVar6 < *(int *)(lVar8 + 0x4f0)) {
          uVar14 = ~uVar6 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(undefined1 *)((longlong)(int)uVar6 + *(longlong *)(lVar8 + 0x4e8)) = 0;
        bVar12 = false;
      }
      else {
        local_res20 = local_res20 + 1;
        iVar15 = *(int *)((longlong)plVar7 + 0x3c);
        sVar13 = TPBDRigidParticleHandleImp<double,3,1>::SleepCounter(this_00);
        if (sVar13 + 1 < iVar15) {
          iVar15 = sVar13 + 1;
        }
        sVar13 = '\x7f';
        if (iVar15 < 0x7f) {
          sVar13 = (schar)iVar15;
        }
        TPBDRigidParticleHandleImp<double,3,1>::SetSleepCounter(this_00,sVar13);
        iVar15 = *(int *)((longlong)plVar7 + 0x3c);
        bVar12 = bVar10;
        if (*(int *)((longlong)plVar7 + 0x3c) < iVar5) {
          iVar15 = iVar5;
        }
      }
    }
    iVar5 = iVar15;
  }
  iVar15 = 0;
  if ((bVar12) && (iVar15 = param_1->SleepCounter + 1, iVar5 < iVar15)) {
    (param_1->Flags).Bits = (param_1->Flags).Bits | 0x40;
LAB_143b6dcf5:
    iVar15 = 0;
  }
  param_1->SleepCounter = iVar15;
  SwitchIslandSleepType(this,param_1,local_res20);
  return;
}

// ProcessIslandSplits @ 143b6dd50

void __thiscall
Chaos::Private::FPBDIslandManager::ProcessIslandSplits(FPBDIslandManager *this,FPBDIsland *param_1)

{
  longlong *plVar1;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar2;
  longlong lVar3;
  FPBDIslandParticle *pFVar4;
  FPBDIslandConstraint *pFVar5;
  code *pcVar6;
  bool bVar7;
  EObjectStateType EVar8;
  int iVar9;
  FPBDIsland *pFVar10;
  FScriptContainerElement *pFVar11;
  TGeometryParticleHandleImp<double,3,1> *pTVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar18
  ;
  ulonglong uVar19;
  FPBDIsland *pFVar20;
  int iVar21;
  ForAnyElementType *pFVar22;
  longlong lVar23;
  int iVar24;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  FPBDIslandParticle *local_90;
  FPBDIslandParticle *local_88;
  uint local_80;
  FScriptContainerElement *local_78;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  undefined8 uStack_58;
  
  if ((param_1 == (FPBDIsland *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Island != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x7fb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((*(byte *)&param_1->Flags & 2) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Island->Flags.bItemsRemoved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x7fc,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar16 = (param_1->Nodes).AllocatorInstance.Data;
  iVar24 = (param_1->Nodes).ArrayNum;
  pFVar11 = pFVar16 + (longlong)iVar24 * 8;
  while( true ) {
    if ((param_1->Nodes).ArrayNum != iVar24) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    lVar23 = 0;
    if (pFVar16 == pFVar11) break;
    lVar23 = *(longlong *)pFVar16;
    pFVar16 = pFVar16 + 8;
    *(undefined8 *)(lVar23 + 8) = 0;
    *(undefined4 *)(lVar23 + 0x28) = 0xffffffff;
  }
  uVar17 = 0;
  if (0 < (param_1->ContainerEdges).ArrayNum) {
    do {
      uVar13 = 0;
      if ((int)uVar17 < (param_1->ContainerEdges).ArrayNum) {
        uVar13 = ~uVar17 >> 0x1f;
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
      FVar2 = (param_1->ContainerEdges).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                )&param_1->ContainerEdges;
      if (FVar2 != (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                    )0x0) {
        FVar18 = FVar2;
      }
      plVar14 = *(longlong **)((longlong)FVar18 + lVar23);
      iVar24 = *(int *)((uchar *)((longlong)FVar18 + 8) + lVar23);
      plVar1 = plVar14 + iVar24;
      while( true ) {
        if (*(int *)((uchar *)((longlong)FVar18 + 8) + lVar23) != iVar24) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res20);
        }
        if (plVar14 == plVar1) break;
        lVar3 = *plVar14;
        plVar14 = plVar14 + 1;
        *(undefined8 *)(lVar3 + 8) = 0;
        *(undefined4 *)(lVar3 + 0x34) = 0xffffffff;
      }
      uVar17 = uVar17 + 1;
      lVar23 = lVar23 + 0x10;
    } while ((int)uVar17 < (param_1->ContainerEdges).ArrayNum);
  }
  iVar24 = this->NextVisitEpoch;
  if (this->NextVisitEpoch == 0x7fffffff) {
    iVar24 = 0;
  }
  this->NextVisitEpoch = iVar24 + 1;
  uVar15 = 0;
  local_60 = (param_1->Nodes).AllocatorInstance.Data;
  uStack_58._0_4_ = (param_1->Nodes).ArrayNum;
  uStack_58._4_4_ = (param_1->Nodes).ArrayMax;
  (param_1->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (param_1->Nodes).ArrayNum = 0;
  (param_1->Nodes).ArrayMax = 0;
  uVar19 = uVar15;
  if (0 < (param_1->ContainerEdges).ArrayNum) {
    do {
      uVar13 = (uint)uVar15;
      uVar17 = 0;
      if ((int)uVar13 < (param_1->ContainerEdges).ArrayNum) {
        uVar17 = ~uVar13 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar2 = (param_1->ContainerEdges).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                )&param_1->ContainerEdges;
      if (FVar2 != (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                    )0x0) {
        FVar18 = FVar2;
      }
      pFVar22 = (ForAnyElementType *)((longlong)FVar18 + uVar19);
      iVar9 = *(int *)((longlong)&pFVar22[1].Data + 4);
      *(undefined4 *)&pFVar22[1].Data = 0;
      if (iVar9 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,pFVar22,0,(int *)((longlong)&pFVar22[1].Data + 4));
      }
      uVar15 = (ulonglong)(uVar13 + 1);
      uVar19 = uVar19 + 0x10;
    } while ((int)(uVar13 + 1) < (param_1->ContainerEdges).ArrayNum);
  }
  uVar17 = (param_1->Nodes).ArrayNum;
  param_1->NumEdges = 0;
  (param_1->Flags).Bits = (param_1->Flags).Bits & 0xffffffef | 8;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (0 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar17,&local_a8,0,(int *)((longlong)&local_a0 + 4));
  }
  local_80 = (param_1->Flags).Bits >> 8;
  pFVar11 = local_60 + (longlong)(int)uStack_58 * 8;
  pFVar16 = local_60;
  pFVar20 = param_1;
  local_68 = pFVar11;
  do {
    local_78 = pFVar16;
    if (pFVar16 == pFVar11) {
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      if (local_60 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60);
      }
      return;
    }
    local_90 = *(FPBDIslandParticle **)pFVar16;
    if ((local_90->VisitEpoch != iVar24) && ((*(byte *)&local_90->Flags & 1) != 0)) {
      pFVar10 = pFVar20;
      if (pFVar20 == (FPBDIsland *)0x0) {
        pFVar10 = CreateIsland(this);
      }
      AddNodeToIsland(this,local_90,pFVar10);
      UpdateIslandPartialSleepAllowed(this,pFVar10,local_90->Particle);
      pTVar12 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)*(undefined1 *)((longlong)&local_90->Particle->_padding_ + 4)) {
        pTVar12 = local_90->Particle;
      }
      if ((pFVar10 != (FPBDIsland *)0x0) &&
         (pTVar12 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
        if ((*(byte *)&pFVar10->Flags & 0x10) == 0) {
          EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                            ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
          uVar17 = 0;
          if (EVar8 == Sleeping) goto LAB_143b6e0c5;
        }
        else {
LAB_143b6e0c5:
          uVar17 = 0x10;
        }
        (pFVar10->Flags).Bits = (pFVar10->Flags).Bits & 0xffffffef;
        (pFVar10->Flags).Bits = (pFVar10->Flags).Bits | uVar17;
      }
      if (((local_a8.Data <= (FScriptContainerElement *)&local_90) &&
          ((FScriptContainerElement *)&local_90 < local_a8.Data + (longlong)local_a0._4_4_ * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (int)local_a0;
      if ((int)local_a0 == local_a0._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_a8,(int *)((longlong)&local_a0 + 4));
      }
      local_a0 = CONCAT44(local_a0._4_4_,iVar9 + 1);
      *(FPBDIslandParticle **)(local_a8.Data + (longlong)iVar9 * 8) = local_90;
      local_90->VisitEpoch = iVar24;
      pFVar11 = local_68;
      iVar9 = iVar9 + 1;
      while (local_68 = pFVar11, iVar9 != 0) {
        if (((int)local_a0 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (int)local_a0 + -1;
        pFVar4 = *(FPBDIslandParticle **)(local_a8.Data + (longlong)iVar9 * 8);
        iVar21 = ((int)local_a0 - iVar9) + -1;
        if (iVar21 != 0) {
          memmove(local_a8.Data + (longlong)iVar9 * 8,local_a8.Data + (longlong)iVar9 * 8 + 8,
                  (longlong)iVar21 << 3);
        }
        local_a0 = CONCAT44(local_a0._4_4_,(int)local_a0 + -1);
        pFVar11 = (pFVar4->Edges).AllocatorInstance.Data;
        iVar9 = (pFVar4->Edges).ArrayNum;
        local_70 = pFVar11 + (longlong)iVar9 * 8;
        while( true ) {
          pFVar16 = local_70;
          if ((pFVar4->Edges).ArrayNum != iVar9) {
            local_98[0] = 0;
            `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_98);
          }
          if (pFVar11 == pFVar16) break;
          pFVar5 = *(FPBDIslandConstraint **)pFVar11;
          if (pFVar5->VisitEpoch != iVar24) {
            AddEdgeToIsland(this,pFVar5,pFVar10);
            pFVar5->VisitEpoch = iVar24;
            local_88 = pFVar5->Nodes[0];
            if (pFVar4 == local_88) {
              local_88 = pFVar5->Nodes[1];
            }
            if (((local_88 != (FPBDIslandParticle *)0x0) && ((*(byte *)&local_88->Flags & 1) != 0))
               && (local_88->VisitEpoch != iVar24)) {
              AddNodeToIsland(this,local_88,pFVar10);
              UpdateIslandPartialSleepAllowed(this,pFVar10,local_88->Particle);
              pTVar12 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (1 < (byte)*(undefined1 *)((longlong)&local_88->Particle->_padding_ + 4)) {
                pTVar12 = local_88->Particle;
              }
              if ((pFVar10 != (FPBDIsland *)0x0) &&
                 (pTVar12 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
                if ((*(byte *)&pFVar10->Flags & 0x10) == 0) {
                  EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                    ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
                  uVar17 = 0;
                  if (EVar8 == Sleeping) goto LAB_143b6e2b8;
                }
                else {
LAB_143b6e2b8:
                  uVar17 = 0x10;
                }
                (pFVar10->Flags).Bits = (pFVar10->Flags).Bits & 0xffffffef;
                (pFVar10->Flags).Bits = (pFVar10->Flags).Bits | uVar17;
              }
              if (((local_a8.Data <= (FScriptContainerElement *)&local_88) &&
                  ((FScriptContainerElement *)&local_88 <
                   local_a8.Data + (longlong)local_a0._4_4_ * 8)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar21 = (int)local_a0;
              if ((int)local_a0 == local_a0._4_4_) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_a8,(int *)((longlong)&local_a0 + 4));
              }
              local_a0 = CONCAT44(local_a0._4_4_,iVar21 + 1);
              *(FPBDIslandParticle **)(local_a8.Data + (longlong)iVar21 * 8) = local_88;
              local_88->VisitEpoch = iVar24;
            }
          }
          pFVar11 = pFVar11 + 8;
        }
        pFVar16 = local_78;
        pFVar11 = local_68;
        iVar9 = (int)local_a0;
      }
      pFVar20 = (FPBDIsland *)0x0;
      iVar9 = param_1->SleepCounter;
      (pFVar10->Flags).Bits = (pFVar10->Flags).Bits | 3;
      pFVar10->SleepCounter = iVar9;
      uVar17 = ((pFVar10->Flags).Bits ^ (param_1->Flags).Bits) & 4 ^ (pFVar10->Flags).Bits;
      (pFVar10->Flags).Bits = uVar17;
      uVar17 = (uVar17 ^ (param_1->Flags).Bits) & 0x40 ^ uVar17;
      (pFVar10->Flags).Bits = uVar17;
      uVar17 = (uVar17 ^ (param_1->Flags).Bits) & 0x80 ^ uVar17;
      uVar17 = ((local_80 & 0xff) << 8 ^ uVar17) & 0x100 ^ uVar17;
      (pFVar10->Flags).Bits = uVar17;
      (pFVar10->Flags).Bits = (uVar17 ^ (param_1->Flags).Bits) & 0x200 ^ uVar17;
    }
    pFVar16 = pFVar16 + 8;
  } while( true );
}

// ProcessIslands @ 143b6e470

void __thiscall Chaos::Private::FPBDIslandManager::ProcessIslands(FPBDIslandManager *this)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  byte bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  
  ProcessMerges(this);
  ProcessSplits(this);
  pFVar9 = (this->Islands).Items.AllocatorInstance.Data;
  iVar2 = (this->Islands).Items.ArrayNum;
  pFVar6 = pFVar9 + (longlong)iVar2 * 8;
  local_res10 = pFVar6;
  do {
    if ((this->Islands).Items.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar6) {
      AssignLevels(this);
      FinalizeIslands(this);
      return;
    }
    plVar3 = *(longlong **)pFVar9;
    if ((*(uint *)((longlong)plVar3 + 0x94) >> 8 & 1) != 0) {
      uVar8 = *(uint *)((longlong)plVar3 + 0x94) >> 2;
      bVar7 = (byte)uVar8 & 1;
      if ((uVar8 & 1) != 0) {
        plVar5 = (longlong *)*plVar3;
        lVar4 = plVar3[1];
        plVar1 = plVar5 + (int)lVar4;
        while( true ) {
          if ((int)plVar3[1] != (int)lVar4) {
            `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_res8);
          }
          pFVar6 = local_res10;
          if (plVar5 == plVar1) goto LAB_143b6e51e;
          if ((*(byte *)(*plVar5 + 0x2c) & 2) == 0) break;
          bVar7 = 1;
          plVar5 = plVar5 + 1;
        }
        bVar7 = 0;
      }
LAB_143b6e51e:
      if ((uint)bVar7 != (*(uint *)((longlong)plVar3 + 0x94) >> 6 & 1)) {
        *(undefined4 *)((longlong)plVar3 + 0x84) = 0;
        *(uint *)((longlong)plVar3 + 0x94) =
             (uint)bVar7 << 6 | *(uint *)((longlong)plVar3 + 0x94) & 0xffffffbf;
      }
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// ProcessMerges @ 143b6e580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Chaos::Private::FPBDIslandManager::ProcessMerges(FPBDIslandManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_IslandManager_MergeIslands> FVar11;
  FPBDIsland *pFVar12;
  ulonglong uVar13;
  FName FVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  FPBDIslandMergeSet *pFVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar21
  ;
  ForAnyElementType *pFVar22;
  FPBDIsland *pFVar23;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_b8;
  FColor_u_0 local_a8;
  uint local_a4;
  uint local_a0;
  FName local_98;
  FScriptContainerElement *local_90;
  FName local_88;
  FPBDIsland *local_78;
  FPBDIslandMergeSet *local_70;
  FScriptContainerElement *local_68;
  TArrayView<int,int> local_60;
  FName local_50 [2];
  
  FVar11 = StatPtr_STAT_IslandManager_MergeIslands;
  if (StatPtr_STAT_IslandManager_MergeIslands ==
      (FThreadSafeStaticStat<FStat_STAT_IslandManager_MergeIslands>)0x0) {
    pFVar10 = ::FName::FName(local_50,"STAT_IslandManager_MergeIslands");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_IslandManager_MergeIslands>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IslandManager_MergeIslands,
                        *pFVar10,L"IslandManager::Merge","STATGROUP_ChaosIslands","STATCAT_Advanced"
                        ,L"ChaosIslands",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar6 = false;
  bVar5 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  bVar8 = false;
  bVar7 = false;
  if ((FVar14.ComparisonIndex.Value.Value != 0) || (FVar14.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_98.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                   ,0x78e);
        bVar6 = true;
        bVar5 = true;
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar7 = true;
      goto LAB_143b6e6cb;
    }
  }
  bVar6 = bVar8;
  bVar5 = bVar7;
  bVar7 = false;
  FVar14 = local_88;
LAB_143b6e6cb:
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b8,(this->ConstraintContainers).ArrayNum,Default);
  local_a0 = (this->MergeSets).Items.ArrayNum;
  uVar13 = (ulonglong)(int)local_a0;
  pFVar19 = (this->MergeSets).Items.AllocatorInstance.Data;
  local_68 = pFVar19 + uVar13 * 8;
  do {
    pFVar1 = local_68;
    local_90 = pFVar19;
    if ((this->MergeSets).Items.ArrayNum != (int)uVar13) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIslandMergeSet_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar19 == pFVar1) {
      TPoolBackedArray<Chaos::Private::FPBDIslandMergeSet,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandMergeSet>_>
      ::Reset(&this->MergeSets);
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      if (bVar5) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar7) {
        FThreadStats::AddMessage(FVar14,CycleScopeEnd);
      }
      return;
    }
    pFVar18 = *(FPBDIslandMergeSet **)pFVar19;
    iVar2 = local_b8.ArrayNum;
    local_60.DataPtr = (int *)local_b8.AllocatorInstance.Data;
    local_70 = pFVar18;
    if ((local_b8.ArrayNum < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_60.ArrayNum = iVar2;
    pFVar12 = GetMergeSetParentIsland(this,pFVar18,(int *)&local_a4,&local_60);
    local_78 = pFVar12;
    if (pFVar12 != (FPBDIsland *)0x0) {
      if ((int)local_a4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_a4);
      }
      if ((pFVar12->Nodes).ArrayMax < (int)local_a4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_a4,(ForAnyElementType *)pFVar12,(pFVar12->Nodes).ArrayNum,
                   &(pFVar12->Nodes).ArrayMax);
      }
      uVar15 = 0;
      lVar20 = 0;
      pFVar23 = pFVar12;
      if (0 < local_b8.ArrayNum) {
        lVar17 = 0;
        do {
          uVar9 = 0;
          if ((int)uVar15 < (pFVar12->ContainerEdges).ArrayNum) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar3 = (pFVar12->ContainerEdges).AllocatorInstance.SecondaryData;
          FVar21 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                    )&pFVar12->ContainerEdges;
          if (FVar3 != (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                        )0x0) {
            FVar21 = FVar3;
          }
          pFVar22 = (ForAnyElementType *)((longlong)FVar21 + lVar17);
          uVar9 = 0;
          if ((int)uVar15 < local_b8.ArrayNum) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar9 = *(uint *)(local_b8.AllocatorInstance.Data + lVar20 * 4);
          if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
          }
          if (*(int *)((longlong)&pFVar22[1].Data + 4) < (int)uVar9) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar9,pFVar22,*(int *)&pFVar22[1].Data,
                       (int *)((longlong)&pFVar22[1].Data + 4));
          }
          uVar15 = uVar15 + 1;
          lVar20 = lVar20 + 1;
          lVar17 = lVar17 + 0x10;
          pFVar18 = local_70;
          pFVar23 = local_78;
        } while ((int)uVar15 < local_b8.ArrayNum);
      }
      pFVar16 = (pFVar18->Islands).AllocatorInstance.Data;
      iVar2 = (pFVar18->Islands).ArrayNum;
      pFVar1 = pFVar16 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pFVar18->Islands).ArrayNum != iVar2) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        pFVar19 = local_90;
        if (pFVar16 == pFVar1) break;
        pFVar12 = *(FPBDIsland **)pFVar16;
        pFVar12->MergeSet = (FPBDIslandMergeSet *)0x0;
        pFVar12->MergeSetIslandIndex = -1;
        ProcessIslandMerge(this,pFVar23,pFVar12);
        pFVar16 = pFVar16 + 8;
      }
    }
    uVar13 = (ulonglong)local_a0;
    pFVar19 = pFVar19 + 8;
  } while( true );
}

// ProcessPartialIslandSleep @ 143b6e9b0

void __thiscall
Chaos::Private::FPBDIslandManager::ProcessPartialIslandSleep
          (FPBDIslandManager *this,FPBDIsland *param_1,float param_2)

{
  bool bVar1;
  
  SleepNonMovingParticles(this,param_1,param_2);
  if (CVars::bChaosSolverPartialSleepCollisionConstraintsOnly != false) {
    bVar1 = RewakeConstraintsNotSupportingPartialSleep(this,param_1);
    if (bVar1) {
      SyncConstraintSleepStateToParticles(this,param_1);
      goto LAB_143b6e9f5;
    }
  }
  SleepConstraintsBetweenNonAwakeParticles(this,param_1);
LAB_143b6e9f5:
  if (0.0 < CVars::ChaosSolverPostStepWakeThreshold) {
    PostStepPartialWake(this,param_1);
  }
  if (CVars::bChaosSolverValidateConstraintSleepState != false) {
    ValidateConstraintSleepState(this,param_1);
  }
  return;
}

// ProcessPartialIslandWake @ 143b6ea40

void __thiscall
Chaos::Private::FPBDIslandManager::ProcessPartialIslandWake
          (FPBDIslandManager *this,FPBDIsland *param_1,bool param_2)

{
  longlong *plVar1;
  longlong lVar2;
  FPBDIslandParticle *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  TVector<double,3> *pTVar12;
  ulonglong uVar13;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar14
  ;
  FPBDParticleMomentumSq *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  longlong *plVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  FPBDIslandParticle *pFVar21;
  uint uVar22;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  undefined1 local_d5 [5];
  TArray<Chaos::Private::FPBDParticleMomentumSq,TSizedDefaultAllocator<32>_> local_d0;
  TArray<Chaos::Private::FPBDIslandParticle_*,TSizedDefaultAllocator<32>_> local_c0;
  uint local_b0;
  longlong local_a8;
  FPBDIslandParticle *local_a0;
  FScriptContainerElement *local_98;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
  local_90;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_88;
  TVector<double,3> local_78 [2];
  
  uVar17 = (param_1->Nodes).ArrayNum;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  iVar10 = 0;
  iVar20 = 0;
  if (0 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar17,&local_c0.AllocatorInstance,0,&local_c0.ArrayMax);
    iVar10 = local_d0.ArrayMax;
    iVar20 = local_d0.ArrayNum;
  }
  if (0.0 < CVars::ChaosSolverMomentumPropagation) {
    uVar17 = (param_1->Nodes).ArrayNum;
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if (iVar10 < (int)uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar17,&local_d0.AllocatorInstance,iVar20,&local_d0.ArrayMax);
    }
  }
  iVar10 = (param_1->Nodes).ArrayNum;
  pFVar19 = (param_1->Nodes).AllocatorInstance.Data;
  pFVar16 = pFVar19 + (longlong)iVar10 * 8;
  while( true ) {
    if ((param_1->Nodes).ArrayNum != iVar10) {
      local_d8 = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_d8);
    }
    if (pFVar19 == pFVar16) break;
    pFVar21 = *(FPBDIslandParticle **)pFVar19;
    if (((byte)(pFVar21->Flags).Bits & 0x30) == 0x10) {
      ProcessTriggerParticle(this,pFVar21,&local_c0,&local_d0,true);
      (pFVar21->Flags).Bits = (pFVar21->Flags).Bits | 0x20;
      if (((*(byte *)&pFVar21->Flags & 0x40) != 0) && (param_2)) {
        this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)*(undefined1 *)((longlong)&pFVar21->Particle->_padding_ + 4)) {
          this_00 = pFVar21->Particle;
        }
        if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pTVar12 = TPBDRigidParticleHandleImp<double,3,1>::GetPreV
                              ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,local_78);
          TPBDRigidParticleHandleImp<double,3,1>::SetVSmooth
                    ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,pTVar12);
        }
      }
    }
    pFVar19 = pFVar19 + 8;
  }
  iVar10 = local_c0.ArrayNum;
  FVar14 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
            )(longlong)local_c0.ArrayNum;
  if (CVars::ChaosSolverMomentumPropagation <= 0.0) {
LAB_143b6ebce:
    if (local_d0.ArrayNum != 0) {
LAB_143b6ebd2:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(CVars::ChaosSolverMomentumPropagation > 0.0f && NodeQueue.Num() == MomentumQueue.Num()) || (CVars::ChaosSolverMomentumPropagation <= 0.0f && MomentumQueue.Num() == 0)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x163,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  else if (local_c0.ArrayNum != local_d0.ArrayNum) {
    if (CVars::ChaosSolverMomentumPropagation <= 0.0) goto LAB_143b6ebce;
    goto LAB_143b6ebd2;
  }
  bVar7 = false;
  if ((CVars::bChaosSolverPartialIslandWake == false) && (0 < iVar10)) {
    PropagateIslandSleep(this,param_1);
    ResetParticleSleepCounter(this,param_1);
  }
  else {
    uVar17 = 0;
    bVar7 = false;
    local_90 = FVar14;
    if (0 < local_c0.ArrayNum) {
      bVar7 = true;
      local_a8 = 0;
      do {
        lVar2 = local_a8;
        uVar22 = ~uVar17 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar17 < local_c0.ArrayNum) {
          uVar11 = uVar22;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_a0 = *(FPBDIslandParticle **)(local_c0.AllocatorInstance.Data + lVar2 * 8);
        local_b0 = (local_a0->Edges).ArrayNum;
        uVar13 = (ulonglong)(int)local_b0;
        pFVar19 = (local_a0->Edges).AllocatorInstance.Data;
        pFVar16 = pFVar19 + uVar13 * 8;
        local_98 = pFVar16;
        while( true ) {
          if ((local_a0->Edges).ArrayNum != (int)uVar13) {
            local_d7 = 0;
            `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_d7);
          }
          if (pFVar19 == pFVar16) break;
          plVar1 = *(longlong **)pFVar19;
          if ((*(uint *)(plVar1 + 8) & 4) == 0) {
            *(uint *)(plVar1 + 8) = *(uint *)(plVar1 + 8) | 4;
            pFVar21 = (FPBDIslandParticle *)plVar1[2];
            if (local_a0 == pFVar21) {
              pFVar21 = (FPBDIslandParticle *)plVar1[3];
            }
            if ((pFVar21 != (FPBDIslandParticle *)0x0) && ((*(byte *)&pFVar21->Flags & 1) != 0)) {
              lVar2 = plVar1[7];
              iVar10 = pFVar21->Level;
              if ((CVars::bChaosSolverPartialSleepCollisionConstraintsOnly == false) ||
                 (((longlong *)*plVar1 == (longlong *)0x0 ||
                  (cVar8 = (**(code **)(*(longlong *)*plVar1 + 0x38))(), cVar8 != '\0')))) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if (((local_a8 < (longlong)local_90) || ((int)lVar2 <= iVar10)) || (bVar9)) {
                if (local_d0.ArrayNum == 0) {
                  pFVar15 = (FPBDParticleMomentumSq *)0x0;
                }
                else {
                  uVar11 = 0;
                  if ((int)uVar17 < local_d0.ArrayNum) {
                    uVar11 = uVar22;
                  }
                  if ((uVar11 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar15 = (FPBDParticleMomentumSq *)
                            (local_d0.AllocatorInstance.Data + (longlong)(int)uVar17 * 8);
                }
                uVar11 = 0;
                if ((int)uVar17 < local_c0.ArrayNum) {
                  uVar11 = uVar22;
                }
                if ((uVar11 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                bVar9 = true;
LAB_143b6eece:
                ProcessParticleWake(this,pFVar21,
                                    *(FPBDIslandParticle **)
                                     (local_c0.AllocatorInstance.Data + local_a8 * 8),pFVar15,
                                    &local_c0,&local_d0,&local_88,bVar9);
                if (CVars::ChaosSolverMomentumPropagation <= 0.0) goto LAB_143b6ef1f;
                pFVar16 = local_98;
                if (local_c0.ArrayNum == local_d0.ArrayNum) goto LAB_143b6ef55;
              }
              else {
                if (0.0 < CVars::ChaosSolverMomentumPropagation) {
                  if (local_d0.ArrayNum == 0) {
                    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("!MomentumQueue.IsEmpty()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                                       ,0xcfc,L"");
                    if (bVar9) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                  }
                  uVar11 = 0;
                  if ((int)uVar17 < local_d0.ArrayNum) {
                    uVar11 = uVar22;
                  }
                  if ((uVar11 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pFVar15 = (FPBDParticleMomentumSq *)
                            (local_d0.AllocatorInstance.Data + (longlong)(int)uVar17 * 8);
                  uVar11 = 0;
                  if ((int)uVar17 < local_c0.ArrayNum) {
                    uVar11 = uVar22;
                  }
                  if ((uVar11 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  bVar9 = false;
                  goto LAB_143b6eece;
                }
LAB_143b6ef1f:
              }
              if (((0.0 < CVars::ChaosSolverMomentumPropagation) ||
                  (pFVar16 = local_98, local_d0.ArrayNum != 0)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(CVars::ChaosSolverMomentumPropagation > 0.0f && NodeQueue.Num() == MomentumQueue.Num()) || (CVars::ChaosSolverMomentumPropagation <= 0.0f && MomentumQueue.Num() == 0)"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                                     ,0x163,L""), pFVar16 = local_98, bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
          }
LAB_143b6ef55:
          pFVar19 = pFVar19 + 8;
          uVar13 = (ulonglong)local_b0;
        }
        uVar17 = uVar17 + 1;
        local_a8 = local_a8 + 1;
      } while ((int)uVar17 < local_c0.ArrayNum);
    }
  }
  uVar5 = local_c0._8_8_;
  iVar10 = local_c0.ArrayMax;
  local_c0._8_8_ = (ulonglong)(uint)local_c0.ArrayMax << 0x20;
  if (((longlong)uVar5 < 0) && (iVar10 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_c0.AllocatorInstance,0,&local_c0.ArrayMax);
  }
  uVar5 = local_d0._8_8_;
  iVar10 = local_d0.ArrayMax;
  local_d0._8_8_ = (ulonglong)(uint)local_d0.ArrayMax << 0x20;
  if (((longlong)uVar5 < 0) && (iVar10 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&local_d0.AllocatorInstance,0,&local_d0.ArrayMax);
  }
  if (!param_2) goto LAB_143b6f190;
  FVar14 = (param_1->ContainerEdges).AllocatorInstance.SecondaryData;
  local_a0 = (FPBDIslandParticle *)&param_1->ContainerEdges;
  local_b0 = (param_1->ContainerEdges).ArrayNum;
  uVar13 = (ulonglong)(int)local_b0;
  if (FVar14 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                 )0x0) {
    FVar14 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
              )local_a0;
  }
  local_90 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
              )(uVar13 * 0x10 + (longlong)FVar14);
  while( true ) {
    FVar6 = local_90;
    if (*(int *)&local_a0[1].Particle != (int)uVar13) {
      local_d6 = 0;
      `TCheckedPointerIterator<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_d6);
    }
    if (FVar14 == FVar6) break;
    plVar18 = *(longlong **)FVar14;
    iVar10 = *(int *)((longlong)FVar14 + 8);
    plVar1 = plVar18 + iVar10;
    while( true ) {
      if (*(int *)((longlong)FVar14 + 8) != iVar10) {
        local_d5[0] = 0;
        `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_d5);
      }
      if (plVar18 == plVar1) break;
      lVar2 = *plVar18;
      if ((*(byte *)(lVar2 + 0x40) & 2) != 0) {
        pFVar21 = *(FPBDIslandParticle **)(lVar2 + 0x10);
        pFVar3 = *(FPBDIslandParticle **)(lVar2 + 0x18);
        if ((pFVar21 != (FPBDIslandParticle *)0x0) && ((*(byte *)&pFVar21->Flags & 0x20) == 0)) {
          ProcessTriggerParticle
                    (this,pFVar21,&local_c0,&local_d0,CVars::bChaosSolverWakeOnMovingOnly == false);
          (pFVar21->Flags).Bits = (pFVar21->Flags).Bits | 0x20;
        }
        if ((pFVar3 != (FPBDIslandParticle *)0x0) && ((*(byte *)&pFVar3->Flags & 0x20) == 0)) {
          ProcessTriggerParticle
                    (this,pFVar3,&local_c0,&local_d0,CVars::bChaosSolverWakeOnMovingOnly == false);
          (pFVar3->Flags).Bits = (pFVar3->Flags).Bits | 0x20;
        }
      }
      plVar18 = plVar18 + 1;
    }
    FVar14 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
              )((longlong)FVar14 + 0x10);
    uVar13 = (ulonglong)local_b0;
  }
  iVar10 = local_c0.ArrayNum;
  if (CVars::ChaosSolverMomentumPropagation <= 0.0) {
LAB_143b6f102:
    if (local_d0.ArrayNum != 0) {
LAB_143b6f106:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(CVars::ChaosSolverMomentumPropagation > 0.0f && NodeQueue.Num() == MomentumQueue.Num()) || (CVars::ChaosSolverMomentumPropagation <= 0.0f && MomentumQueue.Num() == 0)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x163,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  else if (local_c0.ArrayNum != local_d0.ArrayNum) {
    if (CVars::ChaosSolverMomentumPropagation <= 0.0) goto LAB_143b6f102;
    goto LAB_143b6f106;
  }
  if ((CVars::bChaosSolverPartialIslandWake == false) && (0 < iVar10)) {
    PropagateIslandSleep(this,param_1);
    ResetParticleSleepCounter(this,param_1);
  }
  else {
    if ((bVar7) && (local_c0.ArrayNum != 0)) {
      ResetEdgeFlags(this,param_1);
    }
    PropagatePartialIslandWake(this,&local_c0,&local_d0,&local_88,iVar10,false);
  }
LAB_143b6f190:
  WakeUpParticles(this,&local_88,false);
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// ProcessParticleWake @ 143b6f220

bool __thiscall
Chaos::Private::FPBDIslandManager::ProcessParticleWake
          (FPBDIslandManager *this,FPBDIslandParticle *param_1,FPBDIslandParticle *param_2,
          FPBDParticleMomentumSq *param_3,
          TArray<Chaos::Private::FPBDIslandParticle_*,TSizedDefaultAllocator<32>_> *param_4,
          TArray<Chaos::Private::FPBDParticleMomentumSq,TSizedDefaultAllocator<32>_> *param_5,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_6,bool param_7)

{
  float fVar1;
  float fVar2;
  double dVar3;
  byte bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  EObjectStateType EVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  TGeometryParticleHandleImp<double,3,1> *pTVar15;
  double *pdVar16;
  TGeometryParticleHandleImp<double,3,1> *pTVar17;
  uint uVar18;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  longlong lVar19;
  float fVar20;
  FPBDIslandParticle *local_res10;
  float local_68;
  float fStack_64;
  TGeometryParticleHandleImp<double,3,1> *local_60;
  TGeometryParticleHandleImp<double,3,1> *local_58 [6];
  
  if (param_1 == (FPBDIslandParticle *)0x0) {
    return false;
  }
  pTVar17 = param_1->Particle;
  bVar4 = *(undefined1 *)((longlong)&pTVar17->_padding_ + 4);
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < bVar4) {
    this_00 = pTVar17;
  }
  if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return false;
  }
  local_res10 = param_1;
  if (pTVar17 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_143b6f2a5:
    bVar11 = IsParticleDynamic(param_1->Particle);
    if (bVar11) {
      bVar11 = true;
      goto LAB_143b6f2bd;
    }
  }
  else {
    pTVar15 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (bVar4 != 0) {
      pTVar15 = pTVar17;
    }
    if (pTVar15 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_143b6f2a5;
    pTVar17 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)*(undefined1 *)((longlong)&pTVar15->_padding_ + 4)) {
      pTVar17 = pTVar15;
    }
    if (pTVar17 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar10 = Kinematic;
    }
    else {
      EVar10 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar17);
    }
    if (EVar10 != Sleeping) goto LAB_143b6f2a5;
  }
  bVar11 = false;
LAB_143b6f2bd:
  if ((local_res10 != (FPBDIslandParticle *)0x0) &&
     (bVar12 = IsParticleDynamic(local_res10->Particle), bVar12)) {
    if ((CVars::ChaosSolverMomentumPropagation <= 0.0) && (param_7)) {
      pFVar6 = (param_4->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_res10) &&
          ((FScriptContainerElement *)&local_res10 < pFVar6 + (longlong)param_4->ArrayMax * 8)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        uVar13 = (*pcVar9)();
        return (bool)uVar13;
      }
      iVar14 = param_4->ArrayNum;
      if (iVar14 == param_4->ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = iVar14 + 1;
      *(FPBDIslandParticle **)((param_4->AllocatorInstance).Data + (longlong)iVar14 * 8) =
           local_res10;
      TPBDRigidParticleHandleImp<double,3,1>::SetSleepCounter
                ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,'\0');
      if (bVar11) {
        return true;
      }
      (local_res10->Flags).Bits = (local_res10->Flags).Bits & 0xfffffffd;
      pFVar6 = (param_6->AllocatorInstance).Data;
      local_60 = this_00;
      if (((pFVar6 <= (FScriptContainerElement *)&local_60) &&
          ((FScriptContainerElement *)&local_60 < pFVar6 + (longlong)param_6->ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar13 = (*pcVar9)();
        return (bool)uVar13;
      }
      iVar14 = param_6->ArrayNum;
      if (iVar14 == param_6->ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_6->AllocatorInstance,&param_6->ArrayMax);
      }
      param_6->ArrayNum = iVar14 + 1;
      *(TGeometryParticleHandleImp<double,3,1> **)
       ((param_6->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_60;
      return true;
    }
    pdVar16 = TPBDRigidParticleHandleImp<double,3,1>::M
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    uVar5 = (uint)this_00->_padding_;
    lVar19 = (longlong)(int)uVar5;
    lVar7 = this_00->_padding_;
    dVar3 = *pdVar16;
    fVar1 = local_res10->WakeLinearThresholdSq;
    uVar18 = 0;
    if ((int)uVar5 < *(int *)(lVar7 + 0x388)) {
      uVar18 = ~uVar5 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      uVar13 = (*pcVar9)();
      return (bool)uVar13;
    }
    lVar8 = *(longlong *)(lVar7 + 0x380);
    fVar2 = *(float *)(lVar8 + 4 + lVar19 * 0xc);
    lVar7 = lVar8 + lVar19 * 0xc;
    fVar20 = *(float *)(lVar8 + lVar19 * 0xc);
    if (((fVar2 <= fVar20) || (*(float *)(lVar7 + 8) <= fVar20)) &&
       (fVar20 = *(float *)(lVar7 + 8), fVar2 <= fVar20)) {
      fVar20 = fVar2;
    }
    if ((0.0 < CVars::ChaosSolverMomentumPropagation) && (param_3 != (FPBDParticleMomentumSq *)0x0))
    {
      if ((param_7) ||
         (((float)dVar3 * (float)dVar3 * fVar1 < param_3->Linear ||
          (fVar20 * fVar20 * local_res10->WakeAngularThresholdSq < param_3->Angular)))) {
        pFVar6 = (param_5->AllocatorInstance).Data;
        fStack_64 = CVars::ChaosSolverMomentumPropagation * CVars::ChaosSolverMomentumPropagation *
                    param_3->Angular;
        local_68 = CVars::ChaosSolverMomentumPropagation * CVars::ChaosSolverMomentumPropagation *
                   param_3->Linear;
        if ((pFVar6 <= (FScriptContainerElement *)&local_68) &&
           (((FScriptContainerElement *)&local_68 < pFVar6 + (longlong)param_5->ArrayMax * 8 &&
            (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar12)))) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        iVar14 = param_5->ArrayNum;
        if (iVar14 == param_5->ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&param_5->AllocatorInstance,&param_5->ArrayMax);
        }
        param_5->ArrayNum = iVar14 + 1;
        *(ulonglong *)((param_5->AllocatorInstance).Data + (longlong)iVar14 * 8) =
             CONCAT44(fStack_64,local_68);
        pFVar6 = (param_4->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_res10) &&
            ((FScriptContainerElement *)&local_res10 < pFVar6 + (longlong)param_4->ArrayMax * 8)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        iVar14 = param_4->ArrayNum;
        if (iVar14 == param_4->ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar14 + 1;
        *(FPBDIslandParticle **)((param_4->AllocatorInstance).Data + (longlong)iVar14 * 8) =
             local_res10;
        TPBDRigidParticleHandleImp<double,3,1>::SetSleepCounter
                  ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,'\0');
        if (bVar11) {
          return true;
        }
        (local_res10->Flags).Bits = (local_res10->Flags).Bits & 0xfffffffd;
        pFVar6 = (param_6->AllocatorInstance).Data;
        local_58[0] = this_00;
        if (((pFVar6 <= (FScriptContainerElement *)local_58) &&
            ((FScriptContainerElement *)local_58 < pFVar6 + (longlong)param_6->ArrayMax * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar13 = (*pcVar9)();
          return (bool)uVar13;
        }
        iVar14 = param_6->ArrayNum;
        if (iVar14 == param_6->ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_6->AllocatorInstance,&param_6->ArrayMax);
        }
        param_6->ArrayNum = iVar14 + 1;
        *(TGeometryParticleHandleImp<double,3,1> **)
         ((param_6->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_58[0];
        return true;
      }
    }
  }
  return false;
}

// ProcessParticlesDisable @ 143b6f790

void __thiscall
Chaos::Private::FPBDIslandManager::ProcessParticlesDisable
          (FPBDIslandManager *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *pTVar4;
  TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
  *pTVar5;
  TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  TParticleHandleBase<double,3>_u_0 *pTVar8;
  code *pcVar9;
  undefined8 uVar10;
  EObjectStateType EVar11;
  ESleepType EVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FPBDIslandParticle *pFVar16;
  TGeometryParticleHandleImp<double,3,1> *pTVar17;
  FChaosPhysicsMaterial *pFVar18;
  TVector<double,3> *pTVar19;
  uint uVar20;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TParticleHandleBase<double,3>_u_0 this_01;
  int iVar21;
  float fVar22;
  float fVar23;
  TPBDRigidParticleHandleImp<double,3,1> *local_d8;
  TParticleHandleBase<double,3>_u_0 local_d0;
  uint uStack_c8;
  int iStack_c4;
  undefined1 local_c0 [24];
  uint uStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_9c;
  int local_98;
  
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_c0,
             (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
              *)&this->Particles->ActiveDynamicMovingKinematicParticlesView);
  if ((TPBDRigidParticles<double,3> *)local_c0._16_8_ != (TPBDRigidParticles<double,3> *)0x0) {
    this_01 = (TParticleHandleBase<double,3>_u_0)local_c0._16_8_;
    uVar20 = uStack_a8;
    do {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_c0);
      EVar11 = TPBDRigidParticleHandleImp<double,3,0>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,0> *)(local_c0 + 0x10));
      if (((EVar11 == Dynamic) ||
          (EVar11 = TPBDRigidParticleHandleImp<double,3,0>::ObjectState
                              ((TPBDRigidParticleHandleImp<double,3,0> *)(local_c0 + 0x10)),
          EVar11 == Sleeping)) &&
         (pFVar16 = TGeometryParticleHandleImp<double,3,0>::GetConstraintGraphNode
                              ((TGeometryParticleHandleImp<double,3,0> *)(local_c0 + 0x10)),
         pFVar16 == (FPBDIslandParticle *)0x0)) {
        pTVar4 = this->SimMaterials;
        pTVar5 = this->PerParticlePhysicsMaterials;
        pTVar6 = this->PhysicsMaterials;
        pTVar17 = (TGeometryParticleHandleImp<double,3,1> *)
                  TPBDRigidParticles<double,3>::Handle(this_01.PBDRigidParticles,uVar20);
        this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar17->_padding_ + 4)) {
          this_00 = pTVar17;
        }
        if (((this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
            (EVar12 = TPBDRigidParticleHandleImp<double,3,1>::SleepType
                                ((TPBDRigidParticleHandleImp<double,3,1> *)this_00),
            EVar12 != NeverSleep)) &&
           (pFVar18 = GetFirstPhysicsMaterial(this_00,pTVar6,pTVar5,pTVar4),
           pFVar18 != (FChaosPhysicsMaterial *)0x0)) {
          fVar23 = (float)pFVar18->DisabledLinearThreshold;
          fVar22 = (float)pFVar18->DisabledAngularThreshold;
          if ((0.0 < fVar23) || (0.0 < fVar22)) {
            pTVar19 = TPBDRigidParticleHandleImp<double,3,0>::VSmooth
                                ((TPBDRigidParticleHandleImp<double,3,0> *)(local_c0 + 0x10));
            dVar1 = *(double *)&pTVar19->field_0x10;
            dVar2 = *(double *)pTVar19;
            dVar3 = *(double *)&pTVar19->field_0x8;
            pTVar19 = TPBDRigidParticleHandleImp<double,3,0>::WSmooth
                                ((TPBDRigidParticleHandleImp<double,3,0> *)(local_c0 + 0x10));
            iVar21 = 0;
            if ((dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1 < (double)(fVar23 * fVar23)) &&
               (iVar21 = 0,
               *(double *)&pTVar19->field_0x8 * *(double *)&pTVar19->field_0x8 +
               *(double *)pTVar19 * *(double *)pTVar19 +
               *(double *)&pTVar19->field_0x10 * *(double *)&pTVar19->field_0x10 <
               (double)(fVar22 * fVar22))) {
              uVar14 = 0;
              if ((int)uVar20 < (int)(this_01.PBDRigidParticles)->_padding_) {
                uVar14 = ~uVar20 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar21 = *(char *)((this_01.PBDRigidParticles)->_padding_ + (longlong)(int)uVar20) + 1
              ;
              if (this->DisableCounterThreshold < iVar21) {
                local_d8 = TPBDRigidParticles<double,3>::Handle(this_01.PBDRigidParticles,uVar20);
                pFVar7 = (param_1->AllocatorInstance).Data;
                if (((pFVar7 <= (FScriptContainerElement *)&local_d8) &&
                    ((FScriptContainerElement *)&local_d8 < pFVar7 + (longlong)param_1->ArrayMax * 8
                    )) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar15 = param_1->ArrayNum;
                if (iVar15 == param_1->ArrayMax) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar15 + 1;
                *(TPBDRigidParticleHandleImp<double,3,1> **)
                 ((param_1->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_d8;
              }
            }
            uVar14 = 0;
            if ((int)uVar20 < (int)(this_01.PBDRigidParticles)->_padding_) {
              uVar14 = ~uVar20 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            *(char *)((longlong)(int)uVar20 + (this_01.PBDRigidParticles)->_padding_) = (char)iVar21
            ;
          }
        }
      }
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_c0);
      do {
        uVar10 = local_c0._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_c0._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          uVar20 = uVar20 + 1;
          uStack_a8 = uVar20;
          if (local_9c <= (int)uVar20) {
LAB_143b6fb16:
            local_a0 = local_a0 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_c0);
            this_01 = (TParticleHandleBase<double,3>_u_0)local_c0._16_8_;
            uVar20 = uStack_a8;
          }
        }
        else {
          iVar21 = local_98 + 1;
          local_98 = iVar21;
          if (*(int *)(local_c0._8_8_ + 8) <= iVar21) goto LAB_143b6fb16;
          if ((iVar21 < 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar8 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar10)->Data + (longlong)iVar21 * 8);
          this_01 = (TParticleHandleBase<double,3>_u_0)pTVar8->PBDRigidParticles;
          uVar20 = *(uint *)(pTVar8 + 1);
          if ((TPBDRigidParticles<double,3> *)this_01.GeometryParticles ==
              (TPBDRigidParticles<double,3> *)0x0) {
            iStack_c4 = (uint)iStack_c4._1_3_ << 8;
          }
          else {
            iStack_c4 = CONCAT31(iStack_c4._1_3_,(this_01.GeometryParticles)->MParticleType);
          }
          uStack_a4 = iStack_c4;
          uStack_a8 = uVar20;
          local_d0 = this_01;
          uStack_c8 = uVar20;
          local_c0._16_8_ = this_01;
        }
        if ((TPBDRigidParticles<double,3> *)this_01.GeometryParticles ==
            (TPBDRigidParticles<double,3> *)0x0) break;
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_c0);
        uVar14 = 0;
        if ((int)uVar20 <
            (int)*(longlong *)&((this_01.GeometryParticles)->MLightWeightDisabled).field_0x10) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      } while (*(char *)((longlong)(int)uVar20 + (this_01.KinematicGeometryParticles)->_padding_) !=
               '\0');
    } while ((TPBDRigidParticles<double,3> *)this_01.GeometryParticles !=
             (TPBDRigidParticles<double,3> *)0x0);
  }
  return;
}

// ProcessParticlesSleep @ 143b6fcc0

void __thiscall
Chaos::Private::FPBDIslandManager::ProcessParticlesSleep(FPBDIslandManager *this,float param_1)

{
  undefined8 *puVar1;
  THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *pTVar2;
  TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
  *pTVar3;
  TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *pTVar4;
  longlong lVar5;
  TParticleHandleBase<double,3>_u_0 *pTVar6;
  code *pcVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  EObjectStateType EVar12;
  bool bVar13;
  uint uVar14;
  FPBDIslandParticle *pFVar15;
  TGeometryParticleHandleImp<double,3,1> *pTVar16;
  TVector<double,3> *pTVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  TParticleHandleBase<double,3>_u_0 this_00;
  float fVar22;
  float fVar23;
  int local_res18 [2];
  float local_res20 [2];
  float local_148 [2];
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_140;
  undefined1 local_130 [24];
  uint uStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  int local_108;
  TPBDRigidParticleHandleImp<double,3,1> *local_100;
  TParticleHandleBase<double,3>_u_0 local_f8;
  uint uStack_f0;
  int iStack_ec;
  float local_e8;
  float local_e4;
  TVector<double,3> local_e0;
  TVector<double,3> local_c8 [6];
  
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_130,
             (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
              *)&this->Particles->ActiveDynamicMovingKinematicParticlesView);
  fVar8 = __real_322bcc77;
  if ((TPBDRigidParticles<double,3> *)local_130._16_8_ != (TPBDRigidParticles<double,3> *)0x0) {
    this_00 = (TParticleHandleBase<double,3>_u_0)local_130._16_8_;
    uVar21 = uStack_118;
    do {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_130);
      EVar12 = TPBDRigidParticleHandleImp<double,3,0>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,0> *)(local_130 + 0x10));
      if (((EVar12 == Dynamic) ||
          (EVar12 = TPBDRigidParticleHandleImp<double,3,0>::ObjectState
                              ((TPBDRigidParticleHandleImp<double,3,0> *)(local_130 + 0x10)),
          EVar12 == Sleeping)) &&
         (pFVar15 = TGeometryParticleHandleImp<double,3,0>::GetConstraintGraphNode
                              ((TGeometryParticleHandleImp<double,3,0> *)(local_130 + 0x10)),
         pFVar15 == (FPBDIslandParticle *)0x0)) {
        pTVar2 = this->SimMaterials;
        pTVar3 = this->PerParticlePhysicsMaterials;
        pTVar4 = this->PhysicsMaterials;
        pTVar16 = (TGeometryParticleHandleImp<double,3,1> *)
                  TPBDRigidParticles<double,3>::Handle(this_00.PBDRigidParticles,uVar21);
        bVar13 = GetIslandParticleSleepThresholds
                           (pTVar16,pTVar4,pTVar3,pTVar2,local_148,local_res20,local_res18,&local_e4
                            ,&local_e8);
        if (bVar13) {
          fVar22 = CVars::IsolatedParticleSleepLinearThresholdMultiplier;
          if (CVars::IsolatedParticleSleepLinearThresholdMultiplier <= 0.0) {
            fVar22 = 0.0;
          }
          fVar23 = CVars::IsolatedParticleSleepAngularThresholdMultiplier;
          if (CVars::IsolatedParticleSleepAngularThresholdMultiplier <= 0.0) {
            fVar23 = 0.0;
          }
          iVar18 = CVars::IsolatedParticleSleepCounterThresholdMultiplier;
          if (CVars::IsolatedParticleSleepCounterThresholdMultiplier < 1) {
            iVar18 = 1;
          }
          local_res18[0] = local_res18[0] * iVar18;
          local_148[0] = local_148[0] * fVar22;
          local_res20[0] = local_res20[0] * fVar23;
        }
        fVar23 = local_148[0];
        fVar22 = local_res20[0];
        iVar18 = local_res18[0];
        if ((0.0 < local_148[0]) || (0.0 < local_res20[0])) {
          if (fVar8 < param_1) {
            TKinematicGeometryParticlesImp<double,3,0>::GetV
                      (this_00.KinematicGeometryParticles,&local_e0,uVar21);
            uVar11 = local_e0._16_8_;
            uVar10 = local_e0._8_8_;
            uVar9 = local_e0._0_8_;
            uVar14 = 0;
            if ((int)uVar21 < (int)(this_00.PBDRigidParticles)->_padding_) {
              uVar14 = ~uVar21 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar5 = (this_00.PBDRigidParticles)->_padding_;
            puVar1 = (undefined8 *)(lVar5 + (longlong)(int)uVar21 * 0x18);
            *puVar1 = uVar9;
            puVar1[1] = uVar10;
            *(undefined8 *)(lVar5 + 0x10 + (longlong)(int)uVar21 * 0x18) = uVar11;
            TKinematicGeometryParticlesImp<double,3,0>::GetW
                      (this_00.KinematicGeometryParticles,local_c8,uVar21);
            uVar11 = local_c8[0]._16_8_;
            uVar10 = local_c8[0]._8_8_;
            uVar9 = local_c8[0]._0_8_;
            uVar14 = 0;
            if ((int)uVar21 < (int)(this_00.PBDRigidParticles)->_padding_) {
              uVar14 = ~uVar21 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar5 = (this_00.PBDRigidParticles)->_padding_;
            puVar1 = (undefined8 *)(lVar5 + (longlong)(int)uVar21 * 0x18);
            *puVar1 = uVar9;
            puVar1[1] = uVar10;
            *(undefined8 *)(lVar5 + 0x10 + (longlong)(int)uVar21 * 0x18) = uVar11;
          }
          iVar20 = 0;
          if (iVar18 < 0x7fffffff) {
            iVar19 = 0x7f;
            if (iVar18 < 0x7f) {
              iVar19 = iVar18;
            }
            local_res18[0] = iVar19;
            pTVar17 = TPBDRigidParticleHandleImp<double,3,0>::VSmooth
                                ((TPBDRigidParticleHandleImp<double,3,0> *)(local_130 + 0x10));
            if (((double)(fVar23 * fVar23) <
                 *(double *)&pTVar17->field_0x8 * *(double *)&pTVar17->field_0x8 +
                 *(double *)pTVar17 * *(double *)pTVar17 +
                 *(double *)&pTVar17->field_0x10 * *(double *)&pTVar17->field_0x10) ||
               (pTVar17 = TPBDRigidParticleHandleImp<double,3,0>::WSmooth
                                    ((TPBDRigidParticleHandleImp<double,3,0> *)(local_130 + 0x10)),
               (double)(fVar22 * fVar22) <
               *(double *)&pTVar17->field_0x8 * *(double *)&pTVar17->field_0x8 +
               *(double *)pTVar17 * *(double *)pTVar17 +
               *(double *)&pTVar17->field_0x10 * *(double *)&pTVar17->field_0x10))
            goto LAB_143b70223;
            uVar14 = 0;
            if ((int)uVar21 < (int)(this_00.PBDRigidParticles)->_padding_) {
              uVar14 = ~uVar21 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar18 = *(char *)((this_00.PBDRigidParticles)->_padding_ + (longlong)(int)uVar21) + 1;
            iVar20 = 0x7f;
            if (iVar18 < 0x7f) {
              iVar20 = iVar18;
            }
            if (iVar19 < iVar20) {
              local_100 = TPBDRigidParticles<double,3>::Handle(this_00.PBDRigidParticles,uVar21);
              if (((local_140.AllocatorInstance.Data <= (FScriptContainerElement *)&local_100) &&
                  ((FScriptContainerElement *)&local_100 <
                   local_140.AllocatorInstance.Data + (longlong)local_140.ArrayMax * 8)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar18 = local_140.ArrayNum;
              if (local_140.ArrayNum == local_140.ArrayMax) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_140.AllocatorInstance,&local_140.ArrayMax);
              }
              iVar20 = 0;
              local_140.ArrayNum = iVar18 + 1;
              *(TPBDRigidParticleHandleImp<double,3,1> **)
               (local_140.AllocatorInstance.Data + (longlong)iVar18 * 8) = local_100;
            }
          }
          uVar14 = 0;
          if ((int)uVar21 < (int)(this_00.PBDRigidParticles)->_padding_) {
            uVar14 = ~uVar21 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(char *)((longlong)(int)uVar21 + (this_00.PBDRigidParticles)->_padding_) = (char)iVar20;
        }
      }
LAB_143b70223:
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_130);
      do {
        uVar9 = local_130._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_130._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          uVar21 = uVar21 + 1;
          uStack_118 = uVar21;
          if (local_10c <= (int)uVar21) {
LAB_143b70249:
            local_110 = local_110 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_130);
            this_00 = (TParticleHandleBase<double,3>_u_0)local_130._16_8_;
            uVar21 = uStack_118;
          }
        }
        else {
          iVar18 = local_108 + 1;
          local_108 = iVar18;
          if (*(int *)(local_130._8_8_ + 8) <= iVar18) goto LAB_143b70249;
          if ((iVar18 < 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar6 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar9)->Data + (longlong)iVar18 * 8);
          this_00 = (TParticleHandleBase<double,3>_u_0)pTVar6->PBDRigidParticles;
          uVar21 = *(uint *)(pTVar6 + 1);
          if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
              (TPBDRigidParticles<double,3> *)0x0) {
            iStack_ec = (uint)iStack_ec._1_3_ << 8;
          }
          else {
            iStack_ec = CONCAT31(iStack_ec._1_3_,(this_00.GeometryParticles)->MParticleType);
          }
          uStack_114 = iStack_ec;
          uStack_118 = uVar21;
          local_130._16_8_ = this_00;
          local_f8 = this_00;
          uStack_f0 = uVar21;
        }
        if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
            (TPBDRigidParticles<double,3> *)0x0) goto LAB_143b7033c;
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_130);
        uVar14 = 0;
        if ((int)uVar21 <
            (int)*(longlong *)&((this_00.GeometryParticles)->MLightWeightDisabled).field_0x10) {
          uVar14 = ~uVar21 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      } while (*(char *)((longlong)(int)uVar21 + (this_00.KinematicGeometryParticles)->_padding_) !=
               '\0');
    } while ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles !=
             (TPBDRigidParticles<double,3> *)0x0);
  }
LAB_143b7033c:
  if (local_140.ArrayNum != 0) {
    FPBDRigidsSOAs::DeactivateParticles(this->Particles,&local_140);
  }
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  return;
}

// ProcessSleep @ 143b70430

void __thiscall
Chaos::Private::FPBDIslandManager::ProcessSleep(FPBDIslandManager *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPBDIsland *pFVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res18 [16];
  
  if (!CVars::bChaosSolverSleepEnabled) {
    UpdateAllParticleSleepMetrics(this,param_1);
    return;
  }
  ProcessParticlesSleep(this,param_1);
  pFVar5 = (this->Islands).Items.AllocatorInstance.Data;
  iVar2 = (this->Islands).Items.ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  do {
    if ((this->Islands).Items.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar5 == pFVar1) {
      return;
    }
    pFVar3 = *(FPBDIsland **)pFVar5;
    if (((pFVar3->Flags).Bits & 0x444) == 4) {
      if ((CVars::bChaosSolverPartialIslandSleep == false) ||
         (((byte)(pFVar3->Flags).Bits & 0x28) != 0x28)) {
        ProcessIslandSleep(this,pFVar3,param_1);
        if ((*(byte *)&pFVar3->Flags & 0x40) != 0) {
          PropagateIslandSleep(this,pFVar3);
        }
      }
      else {
        SleepNonMovingParticles(this,pFVar3,param_1);
        if (CVars::bChaosSolverPartialSleepCollisionConstraintsOnly == false) {
LAB_143b70508:
          SleepConstraintsBetweenNonAwakeParticles(this,pFVar3);
        }
        else {
          bVar4 = RewakeConstraintsNotSupportingPartialSleep(this,pFVar3);
          if (!bVar4) goto LAB_143b70508;
          SyncConstraintSleepStateToParticles(this,pFVar3);
        }
        if (0.0 < CVars::ChaosSolverPostStepWakeThreshold) {
          PostStepPartialWake(this,pFVar3);
        }
        if (CVars::bChaosSolverValidateConstraintSleepState != false) {
          ValidateConstraintSleepState(this,pFVar3);
        }
      }
    }
    (pFVar3->Flags).Bits = (pFVar3->Flags).Bits & 0xffffffef | 4;
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// ProcessSplits @ 143b705b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::Private::FPBDIslandManager::ProcessSplits(FPBDIslandManager *this)

{
  int *piVar1;
  FPBDIsland *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_IslandManager_SplitIslands> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar11;
  FName FVar12;
  longlong lVar13;
  uint uVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_48;
  
  FVar10 = StatPtr_STAT_IslandManager_SplitIslands;
  if (StatPtr_STAT_IslandManager_SplitIslands ==
      (FThreadSafeStaticStat<FStat_STAT_IslandManager_SplitIslands>)0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_IslandManager_SplitIslands");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_IslandManager_SplitIslands>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IslandManager_SplitIslands,
                        *pFVar9,L"IslandManager::Split","STATGROUP_ChaosIslands","STATCAT_Advanced",
                        L"ChaosIslands",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar14 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar11.Value;
        local_res10.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                   ,0x7ec);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar11.Value;
      local_res18.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_143b70708;
    }
  }
  bVar5 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_143b70708:
  uVar14 = (this->Islands).Items.ArrayNum - 1;
  if (-1 < (int)uVar14) {
    lVar13 = (longlong)(int)uVar14 * 8;
    do {
      uVar8 = 0;
      if ((int)uVar14 < (this->Islands).Items.ArrayNum) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = *(FPBDIsland **)((this->Islands).Items.AllocatorInstance.Data + lVar13);
      if ((*(byte *)&pFVar2->Flags & 2) != 0) {
        ProcessIslandSplits(this,pFVar2);
      }
      lVar13 = lVar13 + -8;
      uVar14 = uVar14 - 1;
    } while (-1 < (int)uVar14);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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

// ProcessTriggerParticle @ 143b708d0

bool __thiscall
Chaos::Private::FPBDIslandManager::ProcessTriggerParticle
          (FPBDIslandManager *this,FPBDIslandParticle *param_1,
          TArray<Chaos::Private::FPBDIslandParticle_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Chaos::Private::FPBDParticleMomentumSq,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4)

{
  float *pfVar1;
  byte bVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FPBDIslandParticle *pFVar5;
  EObjectStateType EVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TGeometryParticleHandleImp<double,3,1> *pTVar11;
  TVector<double,3> *pTVar12;
  TGeometryParticleHandleImp<double,3,1> *pTVar13;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  FPBDIslandParticle *local_res10;
  undefined1 local_c8;
  undefined1 local_c7 [3];
  float local_c4;
  float fStack_c0;
  TVector<double,3> local_b8;
  TVector<double,3> local_a0 [5];
  
  if (param_1 == (FPBDIslandParticle *)0x0) {
    return false;
  }
  pTVar13 = param_1->Particle;
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  bVar2 = *(undefined1 *)((longlong)&pTVar13->_padding_ + 4);
  pTVar11 = this_00;
  if (1 < bVar2) {
    pTVar11 = pTVar13;
  }
  if (pTVar11 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return false;
  }
  local_res10 = param_1;
  if (pTVar13 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_143b7095e:
    bVar7 = IsParticleDynamic(param_1->Particle);
    if (!bVar7) goto LAB_143b70977;
    bVar7 = true;
  }
  else {
    pTVar11 = this_00;
    if (bVar2 != 0) {
      pTVar11 = pTVar13;
    }
    if (pTVar11 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_143b7095e;
    pTVar13 = this_00;
    if (1 < (byte)*(undefined1 *)((longlong)&pTVar11->_padding_ + 4)) {
      pTVar13 = pTVar11;
    }
    if (pTVar13 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar6 = Kinematic;
    }
    else {
      EVar6 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar13);
    }
    if (EVar6 != Sleeping) goto LAB_143b7095e;
LAB_143b70977:
    bVar7 = false;
  }
  if (((local_res10 != (FPBDIslandParticle *)0x0) &&
      (bVar8 = IsParticleDynamic(local_res10->Particle), pFVar5 = local_res10, bVar8)) && (bVar7)) {
    if (param_4) {
LAB_143b70b51:
      if (0.0 < CVars::ChaosSolverMomentumPropagation) {
        local_c4 = `Chaos::Private::FPBDIslandManager::ProcessTriggerParticle'::__l2::<lambda_4>::
                   operator()(&local_c8,local_res10);
        fStack_c0 = `Chaos::Private::FPBDIslandManager::ProcessTriggerParticle'::__l2::<lambda_5>::
                    operator()(local_c7,local_res10);
        pFVar3 = (param_3->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_c4) &&
            ((FScriptContainerElement *)&local_c4 < pFVar3 + (longlong)param_3->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        iVar10 = param_3->ArrayNum;
        if (iVar10 == param_3->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar10 + 1;
        *(ulonglong *)((param_3->AllocatorInstance).Data + (longlong)iVar10 * 8) =
             CONCAT44(fStack_c0,local_c4);
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
          ((FScriptContainerElement *)&local_res10 < pFVar3 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      iVar10 = param_2->ArrayNum;
      if (iVar10 == param_2->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar10 + 1;
      *(FPBDIslandParticle **)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           local_res10;
      return true;
    }
    if (local_res10 != (FPBDIslandParticle *)0x0) {
      if (1 < (byte)*(undefined1 *)((longlong)&local_res10->Particle->_padding_ + 4)) {
        this_00 = local_res10->Particle;
      }
      if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pTVar12 = TPBDRigidParticleHandleImp<double,3,1>::VSmooth
                            ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
        fVar17 = (float)*(double *)pTVar12;
        fVar15 = (float)*(double *)&pTVar12->field_0x8;
        fVar16 = (float)*(double *)&pTVar12->field_0x10;
        pTVar12 = TPBDRigidParticleHandleImp<double,3,1>::WSmooth
                            ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
        fVar14 = (float)*(double *)pTVar12;
        fVar18 = (float)*(double *)&pTVar12->field_0x8;
        fVar19 = (float)*(double *)&pTVar12->field_0x10;
        if ((fVar15 * fVar15 + fVar17 * fVar17 + fVar16 * fVar16 == 0.0) &&
           (fVar14 * fVar14 + fVar18 * fVar18 + fVar19 * fVar19 == 0.0)) {
          pTVar12 = TPBDRigidParticleHandleImp<double,3,1>::GetPreV
                              ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,&local_b8);
          fVar17 = (float)*(double *)pTVar12;
          fVar15 = (float)*(double *)&pTVar12->field_0x8;
          fVar16 = (float)*(double *)&pTVar12->field_0x10;
          pTVar12 = TPBDRigidParticleHandleImp<double,3,1>::GetPreW
                              ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,local_a0);
          fVar19 = (float)*(double *)&pTVar12->field_0x10;
          fVar14 = (float)*(double *)pTVar12;
          fVar18 = (float)*(double *)&pTVar12->field_0x8;
        }
        fVar15 = fVar15 * fVar15 + fVar17 * fVar17 + fVar16 * fVar16;
        pfVar1 = &pFVar5->WakeLinearThresholdSq;
        if ((*pfVar1 <= fVar15 && fVar15 != *pfVar1) ||
           (fVar14 = fVar14 * fVar14 + fVar18 * fVar18 + fVar19 * fVar19,
           pfVar1 = &pFVar5->WakeAngularThresholdSq, *pfVar1 <= fVar14 && fVar14 != *pfVar1))
        goto LAB_143b70b51;
      }
    }
  }
  return false;
}

// ProcessWakes @ 143b70d10

void __thiscall Chaos::Private::FPBDIslandManager::ProcessWakes(FPBDIslandManager *this)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  byte bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  
  pFVar9 = (this->Islands).Items.AllocatorInstance.Data;
  iVar2 = (this->Islands).Items.ArrayNum;
  pFVar6 = pFVar9 + (longlong)iVar2 * 8;
  local_res10 = pFVar6;
  do {
    if ((this->Islands).Items.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar6) {
      return;
    }
    plVar3 = *(longlong **)pFVar9;
    if ((*(uint *)((longlong)plVar3 + 0x94) >> 8 & 1) != 0) {
      uVar8 = *(uint *)((longlong)plVar3 + 0x94) >> 2;
      bVar7 = (byte)uVar8 & 1;
      if ((uVar8 & 1) != 0) {
        plVar5 = (longlong *)*plVar3;
        lVar4 = plVar3[1];
        plVar1 = plVar5 + (int)lVar4;
        while( true ) {
          if ((int)plVar3[1] != (int)lVar4) {
            `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_res8);
          }
          pFVar6 = local_res10;
          if (plVar5 == plVar1) goto LAB_143b70dae;
          if ((*(byte *)(*plVar5 + 0x2c) & 2) == 0) break;
          bVar7 = 1;
          plVar5 = plVar5 + 1;
        }
        bVar7 = 0;
      }
LAB_143b70dae:
      if ((uint)bVar7 != (*(uint *)((longlong)plVar3 + 0x94) >> 6 & 1)) {
        *(undefined4 *)((longlong)plVar3 + 0x84) = 0;
        *(uint *)((longlong)plVar3 + 0x94) =
             (uint)bVar7 << 6 | *(uint *)((longlong)plVar3 + 0x94) & 0xffffffbf;
      }
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// PropagateIslandSleep @ 143b70e00

void __thiscall
Chaos::Private::FPBDIslandManager::PropagateIslandSleep(FPBDIslandManager *this,FPBDIsland *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar7;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar8;
  undefined1 local_res10 [8];
  uint local_res18;
  
  PropagateIslandSleepToParticles(this,param_1);
  FVar7 = (param_1->ContainerEdges).AllocatorInstance.SecondaryData;
  local_res18 = (param_1->ContainerEdges).ArrayNum;
  uVar4 = (ulonglong)(int)local_res18;
  if (FVar7 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                )0x0) {
    FVar7 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
             )&param_1->ContainerEdges;
  }
  FVar8 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
           )(uVar4 * 0x10 + (longlong)FVar7);
  while( true ) {
    if ((param_1->ContainerEdges).ArrayNum != (int)uVar4) {
      `TCheckedPointerIterator<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar7 == FVar8) break;
    plVar6 = *(longlong **)FVar7;
    iVar2 = *(int *)((longlong)FVar7 + 8);
    plVar1 = plVar6 + iVar2;
    while( true ) {
      if (*(int *)((longlong)FVar7 + 8) != iVar2) {
        `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (plVar6 == plVar1) break;
      puVar3 = (undefined8 *)*plVar6;
      uVar5 = (param_1->Flags).Bits >> 6;
      if (((uVar5 ^ *(uint *)(puVar3 + 8)) & 1) != 0) {
        (**(code **)(*(longlong *)*puVar3 + 0x48))((longlong *)*puVar3,uVar5 & 0xffffff01);
        *(uint *)(puVar3 + 8) =
             *(uint *)(puVar3 + 8) ^ ((param_1->Flags).Bits >> 6 ^ *(uint *)(puVar3 + 8)) & 1;
      }
      plVar6 = plVar6 + 1;
    }
    uVar4 = (ulonglong)local_res18;
    FVar7 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
             )((longlong)FVar7 + 0x10);
  }
  return;
}

// PropagateIslandSleepToConstraints @ 143b70ee0

void __thiscall
Chaos::Private::FPBDIslandManager::PropagateIslandSleepToConstraints
          (FPBDIslandManager *this,FPBDIsland *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar7;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar8;
  undefined1 local_res10 [8];
  uint local_res18;
  
  FVar7 = (param_1->ContainerEdges).AllocatorInstance.SecondaryData;
  local_res18 = (param_1->ContainerEdges).ArrayNum;
  uVar4 = (ulonglong)(int)local_res18;
  if (FVar7 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                )0x0) {
    FVar7 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
             )&param_1->ContainerEdges;
  }
  FVar8 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
           )(uVar4 * 0x10 + (longlong)FVar7);
  while( true ) {
    if ((param_1->ContainerEdges).ArrayNum != (int)uVar4) {
      `TCheckedPointerIterator<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar7 == FVar8) break;
    plVar6 = *(longlong **)FVar7;
    iVar2 = *(int *)((longlong)FVar7 + 8);
    plVar1 = plVar6 + iVar2;
    while( true ) {
      if (*(int *)((longlong)FVar7 + 8) != iVar2) {
        `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (plVar6 == plVar1) break;
      puVar3 = (undefined8 *)*plVar6;
      uVar5 = (param_1->Flags).Bits >> 6;
      if (((uVar5 ^ *(uint *)(puVar3 + 8)) & 1) != 0) {
        (**(code **)(*(longlong *)*puVar3 + 0x48))((longlong *)*puVar3,uVar5 & 0xffffff01);
        *(uint *)(puVar3 + 8) =
             *(uint *)(puVar3 + 8) ^ ((param_1->Flags).Bits >> 6 ^ *(uint *)(puVar3 + 8)) & 1;
      }
      plVar6 = plVar6 + 1;
    }
    uVar4 = (ulonglong)local_res18;
    FVar7 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
             )((longlong)FVar7 + 0x10);
  }
  return;
}

// PropagateIslandSleepToParticles @ 143b70fb0

void __thiscall
Chaos::Private::FPBDIslandManager::PropagateIslandSleepToParticles
          (FPBDIslandManager *this,FPBDIsland *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar3;
  int iVar4;
  undefined8 *puVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  FPBDRigidsSOAs *pFVar7;
  FShapeInstanceProxy *this_00;
  code *pcVar8;
  EObjectStateType EVar9;
  bool bVar10;
  bool *pbVar11;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar12;
  uint uVar13;
  ulonglong uVar14;
  TGeometryParticleHandleImp<double,3,1> *pTVar15;
  TGeometryParticleHandleImp<double,3,1> *pTVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  
  local_res20 = (param_1->Nodes).ArrayNum;
  uVar14 = (ulonglong)(int)local_res20;
  bVar10 = false;
  pFVar17 = (param_1->Nodes).AllocatorInstance.Data;
  pFVar2 = pFVar17 + uVar14 * 8;
  do {
    if ((param_1->Nodes).ArrayNum != (int)uVar14) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar17 == pFVar2) {
      if (bVar10) {
        FPBDRigidsSOAs::UpdateViews(this->Particles);
      }
      return;
    }
    puVar5 = *(undefined8 **)pFVar17;
    uVar13 = (param_1->Flags).Bits >> 6 & 1;
    if (uVar13 != (*(uint *)((longlong)puVar5 + 0x2c) >> 1 & 1)) {
      pTVar6 = (TGeometryParticleHandleImp<double,3,1> *)*puVar5;
      if (uVar13 != 0) {
        pFVar7 = this->Particles;
        pTVar15 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar6->_padding_ + 4)) {
          pTVar15 = pTVar6;
        }
        if ((pTVar15 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
           ((EVar9 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                               ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar15), EVar9 == Dynamic
            || (EVar9 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                  ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar15),
               EVar9 == Sleeping)))) {
          pbVar11 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar15);
          if (*pbVar11 == false) {
            TPBDRigidParticles<double,3>::SetSleeping
                      ((TPBDRigidParticles<double,3> *)pTVar15->_padding_,(int)pTVar15->_padding_,
                       true);
            TPBDRigidParticles<double,3>::SetObjectState
                      ((TPBDRigidParticles<double,3> *)pTVar15->_padding_,(int)pTVar15->_padding_,
                       Sleeping);
            pTVar16 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (5 < *(byte *)((longlong)&pTVar6->_padding_ + 4)) {
              pTVar16 = pTVar6;
            }
            if (pTVar16 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              FPBDRigidsSOAs::RemoveGeometryCollectionParticle
                        (pFVar7,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar16);
              FPBDRigidsSOAs::InsertGeometryCollectionParticle
                        (pFVar7,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar16);
            }
            FPBDRigidsSOAs::RemoveFromActiveArray
                      (pFVar7,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar15,true);
            if (CVars::bChaosSolverCheckParticleViews != false) {
              FPBDRigidsSOAs::CheckParticleViewMaskImpl(pFVar7,pTVar6);
            }
          }
          else {
            bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<2590006970459095690>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                                ,0x28a,"!PBDRigid->Disabled()");
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
      }
      if ((*(byte *)&param_1->Flags & 0x40) == 0) {
        pFVar7 = this->Particles;
        pTVar15 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar6->_padding_ + 4)) {
          pTVar15 = pTVar6;
        }
        if ((pTVar15 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
           ((EVar9 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                               ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar15),
            EVar9 == Sleeping ||
            (EVar9 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                               ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar15), EVar9 == Dynamic
            )))) {
          pbVar11 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar15);
          if (*pbVar11 == false) {
            TPBDRigidParticles<double,3>::SetSleeping
                      ((TPBDRigidParticles<double,3> *)pTVar15->_padding_,(int)pTVar15->_padding_,
                       false);
            TPBDRigidParticles<double,3>::SetObjectState
                      ((TPBDRigidParticles<double,3> *)pTVar15->_padding_,(int)pTVar15->_padding_,
                       Dynamic);
            pTVar16 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (5 < *(byte *)((longlong)&pTVar6->_padding_ + 4)) {
              pTVar16 = pTVar6;
            }
            if (pTVar16 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              FPBDRigidsSOAs::RemoveGeometryCollectionParticle
                        (pFVar7,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar16);
              FPBDRigidsSOAs::InsertGeometryCollectionParticle
                        (pFVar7,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar16);
            }
            EVar9 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar15);
            if ((EVar9 != Dynamic) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PBDRigid->ObjectState() == EObjectStateType::Dynamic",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                                    ,0x260,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FPBDRigidsSOAs::AddToActiveArray
                      (pFVar7,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar15);
            if (CVars::bChaosSolverCheckParticleViews != false) {
              FPBDRigidsSOAs::CheckParticleViewMaskImpl(pFVar7,pTVar6);
            }
          }
          else {
            bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<2590006970459095637>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                                ,0x255,"!PBDRigid->Disabled()");
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        FVar12 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                  )TGeometryParticlesImp<double,3,0>::ShapesArray
                             ((TGeometryParticlesImp<double,3,0> *)pTVar6->_padding_,
                              (int)pTVar6->_padding_);
        iVar4 = *(int *)((longlong)FVar12 + 0x10);
        piVar1 = (int *)((longlong)FVar12 + 0x10);
        if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
              *)((longlong)FVar12 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            )0x0) {
          FVar12 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                     *)((longlong)FVar12 + 8);
        }
        FVar3 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                 )((longlong)FVar12 + (longlong)iVar4 * 8);
        while( true ) {
          if (*piVar1 != iVar4) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (FVar12 == FVar3) break;
          this_00 = *(FShapeInstanceProxy **)FVar12;
          if ((this_00->_padding_ & 3) == 0) {
            FShapeInstanceProxy::UpdateLeafWorldTransform(this_00,pTVar6);
            FVar12 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                      )((longlong)FVar12 + 8);
          }
          else {
            FShapeInstance::UpdateLeafWorldTransform((FShapeInstance *)this_00,pTVar6);
            FVar12 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                      )((longlong)FVar12 + 8);
          }
        }
      }
      bVar10 = true;
      *(uint *)((longlong)puVar5 + 0x2c) =
           *(uint *)((longlong)puVar5 + 0x2c) ^
           ((param_1->Flags).Bits >> 5 ^ *(uint *)((longlong)puVar5 + 0x2c)) & 2;
    }
    uVar14 = (ulonglong)local_res20;
    pFVar17 = pFVar17 + 8;
  } while( true );
}

// PropagatePartialIslandWake @ 143b71330

bool __thiscall
Chaos::Private::FPBDIslandManager::PropagatePartialIslandWake
          (FPBDIslandManager *this,
          TArray<Chaos::Private::FPBDIslandParticle_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::Private::FPBDParticleMomentumSq,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_3,int param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPBDIslandParticle *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FPBDParticleMomentumSq *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  FPBDIslandParticle *pFVar18;
  undefined1 local_res10 [8];
  longlong local_60;
  
  iVar2 = param_1->ArrayNum;
  uVar15 = 0;
  if (iVar2 < 1) {
    return false;
  }
  local_60 = 0;
  do {
    uVar17 = ~uVar15 >> 0x1f;
    uVar11 = 0;
    if ((int)uVar15 < iVar2) {
      uVar11 = uVar17;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    pFVar3 = *(FPBDIslandParticle **)((param_1->AllocatorInstance).Data + local_60);
    uVar11 = (pFVar3->Edges).ArrayNum;
    uVar16 = (ulonglong)(int)uVar11;
    pFVar13 = (pFVar3->Edges).AllocatorInstance.Data;
    pFVar1 = pFVar13 + uVar16 * 8;
    while( true ) {
      if ((pFVar3->Edges).ArrayNum != (int)uVar16) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar13 == pFVar1) break;
      plVar4 = *(longlong **)pFVar13;
      uVar12 = *(uint *)(plVar4 + 8);
      if ((uVar12 & 4) == 0) {
        *(uint *)(plVar4 + 8) = uVar12 | 4;
        pFVar18 = (FPBDIslandParticle *)plVar4[2];
        if (pFVar3 == pFVar18) {
          pFVar18 = (FPBDIslandParticle *)plVar4[3];
        }
        if ((pFVar18 != (FPBDIslandParticle *)0x0) && ((*(byte *)&pFVar18->Flags & 1) != 0)) {
          if (((int)uVar15 < param_4) && (((uVar12 & 2) != 0 || (param_5)))) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          lVar7 = plVar4[7];
          iVar2 = pFVar18->Level;
          if (((CVars::bChaosSolverPartialSleepCollisionConstraintsOnly == false) ||
              ((longlong *)*plVar4 == (longlong *)0x0)) ||
             (cVar10 = (**(code **)(*(longlong *)*plVar4 + 0x38))(), cVar10 != '\0')) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (((bVar8) || ((int)lVar7 <= iVar2)) || (bVar6)) {
            if (param_2->ArrayNum == 0) {
              pFVar14 = (FPBDParticleMomentumSq *)0x0;
            }
            else {
              uVar12 = 0;
              if ((int)uVar15 < param_2->ArrayNum) {
                uVar12 = uVar17;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return (bool)uVar9;
              }
              pFVar14 = (FPBDParticleMomentumSq *)
                        ((param_2->AllocatorInstance).Data + (longlong)(int)uVar15 * 8);
            }
            uVar12 = 0;
            if ((int)uVar15 < param_1->ArrayNum) {
              uVar12 = uVar17;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              uVar9 = (*pcVar5)();
              return (bool)uVar9;
            }
            bVar8 = true;
LAB_143b71627:
            ProcessParticleWake(this,pFVar18,
                                *(FPBDIslandParticle **)
                                 ((param_1->AllocatorInstance).Data + local_60),pFVar14,param_1,
                                param_2,param_3,bVar8);
            if (0.0 < CVars::ChaosSolverMomentumPropagation) {
              if (param_1->ArrayNum == param_2->ArrayNum) goto LAB_143b716c2;
              goto LAB_143b7168b;
            }
LAB_143b71690:
            if (param_2->ArrayNum == 0) goto LAB_143b716c2;
          }
          else {
            if (0.0 < CVars::ChaosSolverMomentumPropagation) {
              if ((param_2->ArrayNum == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!MomentumQueue.IsEmpty()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                                     ,0xcfc,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return (bool)uVar9;
              }
              uVar12 = 0;
              if ((int)uVar15 < param_2->ArrayNum) {
                uVar12 = uVar17;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return (bool)uVar9;
              }
              pFVar14 = (FPBDParticleMomentumSq *)
                        ((param_2->AllocatorInstance).Data + (longlong)(int)uVar15 * 8);
              uVar12 = 0;
              if ((int)uVar15 < param_1->ArrayNum) {
                uVar12 = uVar17;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                uVar9 = (*pcVar5)();
                return (bool)uVar9;
              }
              bVar8 = false;
              goto LAB_143b71627;
            }
LAB_143b7168b:
            if (CVars::ChaosSolverMomentumPropagation <= 0.0) goto LAB_143b71690;
          }
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(CVars::ChaosSolverMomentumPropagation > 0.0f && NodeQueue.Num() == MomentumQueue.Num()) || (CVars::ChaosSolverMomentumPropagation <= 0.0f && MomentumQueue.Num() == 0)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                             ,0x163,L"");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
        }
      }
LAB_143b716c2:
      pFVar13 = pFVar13 + 8;
      uVar16 = (ulonglong)uVar11;
    }
    iVar2 = param_1->ArrayNum;
    local_60 = local_60 + 8;
    uVar15 = uVar15 + 1;
    if (iVar2 <= (int)uVar15) {
      return true;
    }
  } while( true );
}

// RandomizeIslandEdges @ 143b71750

void __thiscall
Chaos::Private::FPBDIslandManager::RandomizeIslandEdges(FPBDIslandManager *this,FPBDIsland *param_1)

{
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar11
  ;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint local_res18;
  int local_res20;
  
  fVar5 = __real_38000100;
  local_res18 = 0;
  if (0 < (param_1->ContainerEdges).ArrayNum) {
    lVar12 = 0;
    do {
      uVar7 = 0;
      if ((int)local_res18 < (param_1->ContainerEdges).ArrayNum) {
        uVar7 = ~local_res18 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar1 = (param_1->ContainerEdges).AllocatorInstance.SecondaryData;
      local_res20 = 0;
      FVar11 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                )&param_1->ContainerEdges;
      if (FVar1 != (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                    )0x0) {
        FVar11 = FVar1;
      }
      iVar10 = *(int *)(lVar12 + 8 + (longlong)FVar11);
      if (0 < iVar10) {
        do {
          if (iVar10 < 1) {
            uVar7 = 0;
          }
          else {
            uVar7 = rand();
            uVar8 = (uint)((float)(uVar7 & 0x7fff) * (float)iVar10 * fVar5);
            uVar7 = iVar10 - 1U;
            if ((int)uVar8 < (int)(iVar10 - 1U)) {
              uVar7 = uVar8;
            }
          }
          iVar10 = *(int *)(lVar12 + 8 + (longlong)FVar11);
          if (iVar10 < 1) {
            uVar8 = 0;
          }
          else {
            uVar8 = rand();
            uVar9 = (uint)((float)(uVar8 & 0x7fff) * (float)iVar10 * fVar5);
            uVar8 = iVar10 - 1U;
            if ((int)uVar9 < (int)(iVar10 - 1U)) {
              uVar8 = uVar9;
            }
          }
          uVar9 = 0;
          if ((int)uVar8 < *(int *)(lVar12 + 8 + (longlong)FVar11)) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)(lVar12 + (longlong)FVar11);
          lVar14 = (longlong)(int)uVar8;
          uVar9 = 0;
          if ((int)uVar7 < *(int *)(lVar12 + 8 + (longlong)FVar11)) {
            uVar9 = ~uVar7 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar13 = (longlong)(int)uVar7;
          uVar3 = *(undefined8 *)(*(longlong *)(lVar12 + (longlong)FVar11) + lVar13 * 8);
          *(undefined8 *)(*(longlong *)(lVar12 + (longlong)FVar11) + lVar13 * 8) =
               *(undefined8 *)(lVar2 + lVar14 * 8);
          *(undefined8 *)(lVar2 + lVar14 * 8) = uVar3;
          uVar9 = 0;
          if ((int)uVar7 < *(int *)(lVar12 + 8 + (longlong)FVar11)) {
            uVar9 = ~uVar7 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(uint *)(*(longlong *)(*(longlong *)(lVar12 + (longlong)FVar11) + lVar13 * 8) + 0x34) =
               uVar7;
          uVar7 = 0;
          if ((int)uVar8 < *(int *)(lVar12 + 8 + (longlong)FVar11)) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_res20 = local_res20 + 1;
          *(uint *)(*(longlong *)(*(longlong *)(lVar12 + (longlong)FVar11) + lVar14 * 8) + 0x34) =
               uVar8;
          iVar10 = *(int *)(lVar12 + 8 + (longlong)FVar11);
        } while (local_res20 < iVar10);
      }
      local_res18 = local_res18 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)local_res18 < (param_1->ContainerEdges).ArrayNum);
  }
  return;
}

// RemoveAllConstraints @ 143b72890

void __thiscall Chaos::Private::FPBDIslandManager::RemoveAllConstraints(FPBDIslandManager *this)

{
  longlong lVar1;
  FPBDIslandConstraint *pFVar2;
  FPBDIsland *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar8 = (this->Edges).Items.ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 * 8;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->Edges).Items.ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar1 = **(longlong **)((this->Edges).Items.AllocatorInstance.Data + lVar7);
      if ((lVar1 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Constraint != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                             ,0x4ef,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = *(FPBDIslandConstraint **)(lVar1 + 0x10);
      if (pFVar2 != (FPBDIslandConstraint *)0x0) {
        pFVar3 = pFVar2->Island;
        if (pFVar3 != (FPBDIsland *)0x0) {
          (pFVar3->Flags).Bits =
               (pFVar3->Flags).Bits & 4 | (pFVar3->Flags).Bits & 0xfffffffb | 0x100;
        }
        RemoveEdgeFromIsland(this,pFVar2);
        if ((pFVar2->Island != (FPBDIsland *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Edge->Island == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                               ,0x514,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UnbindEdgeFromNodes(this,pFVar2);
        TPoolBackedArray<Chaos::Private::FPBDIslandConstraint,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandConstraint>_>
        ::Free(&this->Edges,pFVar2);
      }
      lVar7 = lVar7 + -8;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return;
}

// RemoveConstraint @ 143b72f40

void __thiscall
Chaos::Private::FPBDIslandManager::RemoveConstraint
          (FPBDIslandManager *this,FConstraintHandle *param_1)

{
  FPBDIslandConstraint *pFVar1;
  FPBDIsland *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (FConstraintHandle *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Constraint != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x4ef,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = param_1->GraphEdge;
  if (pFVar1 != (FPBDIslandConstraint *)0x0) {
    pFVar2 = pFVar1->Island;
    if (pFVar2 != (FPBDIsland *)0x0) {
      (pFVar2->Flags).Bits = (pFVar2->Flags).Bits & 4 | (pFVar2->Flags).Bits & 0xfffffffb | 0x100;
    }
    RemoveEdgeFromIsland(this,pFVar1);
    if (pFVar1->Island != (FPBDIsland *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Edge->Island == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x514,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    UnbindEdgeFromNodes(this,pFVar1);
    TPoolBackedArray<Chaos::Private::FPBDIslandConstraint,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandConstraint>_>
    ::Free(&this->Edges,pFVar1);
  }
  return;
}

// RemoveConstraintContainer @ 143b730e0

void __thiscall
Chaos::Private::FPBDIslandManager::RemoveConstraintContainer
          (FPBDIslandManager *this,FPBDConstraintContainer *param_1)

{
  longlong lVar1;
  FPBDIslandConstraint *pFVar2;
  FPBDIsland *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = (this->Edges).Items.ArrayNum - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 * 8;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Edges).Items.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(int *)(*(longlong *)((this->Edges).Items.AllocatorInstance.Data + lVar8) + 0x30) ==
          param_1->ContainerId) {
        uVar6 = 0;
        if ((int)uVar7 < (this->Edges).Items.ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar1 = **(longlong **)((this->Edges).Items.AllocatorInstance.Data + lVar8);
        if ((lVar1 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Constraint != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                               ,0x4ef,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = *(FPBDIslandConstraint **)(lVar1 + 0x10);
        if (pFVar2 != (FPBDIslandConstraint *)0x0) {
          pFVar3 = pFVar2->Island;
          if (pFVar3 != (FPBDIsland *)0x0) {
            (pFVar3->Flags).Bits =
                 (pFVar3->Flags).Bits & 4 | (pFVar3->Flags).Bits & 0xfffffffb | 0x100;
          }
          RemoveEdgeFromIsland(this,pFVar2);
          if ((pFVar2->Island != (FPBDIsland *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Edge->Island == nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                                 ,0x514,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          UnbindEdgeFromNodes(this,pFVar2);
          TPoolBackedArray<Chaos::Private::FPBDIslandConstraint,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandConstraint>_>
          ::Free(&this->Edges,pFVar2);
        }
      }
      lVar8 = lVar8 + -8;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  uVar7 = param_1->ContainerId;
  uVar6 = 0;
  if ((int)uVar7 < (this->ConstraintContainers).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)((this->ConstraintContainers).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) =
       0;
  return;
}

// RemoveContainerConstraints @ 143b73310

void __thiscall
Chaos::Private::FPBDIslandManager::RemoveContainerConstraints(FPBDIslandManager *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FPBDIslandConstraint *pFVar3;
  FPBDIsland *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar9 = (this->Edges).Items.ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar8 = (longlong)(int)uVar9 * 8;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->Edges).Items.ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar1 = *(longlong **)((this->Edges).Items.AllocatorInstance.Data + lVar8);
      if ((int)plVar1[6] == param_1) {
        lVar2 = *plVar1;
        if ((lVar2 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Constraint != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                               ,0x4ef,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = *(FPBDIslandConstraint **)(lVar2 + 0x10);
        if (pFVar3 != (FPBDIslandConstraint *)0x0) {
          pFVar4 = pFVar3->Island;
          if (pFVar4 != (FPBDIsland *)0x0) {
            (pFVar4->Flags).Bits =
                 (pFVar4->Flags).Bits & 4 | (pFVar4->Flags).Bits & 0xfffffffb | 0x100;
          }
          RemoveEdgeFromIsland(this,pFVar3);
          if ((pFVar3->Island != (FPBDIsland *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Edge->Island == nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                                 ,0x514,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          UnbindEdgeFromNodes(this,pFVar3);
          TPoolBackedArray<Chaos::Private::FPBDIslandConstraint,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandConstraint>_>
          ::Free(&this->Edges,pFVar3);
        }
      }
      lVar8 = lVar8 + -8;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

// RemoveEdgeFromIsland @ 143b73490

void __thiscall
Chaos::Private::FPBDIslandManager::RemoveEdgeFromIsland
          (FPBDIslandManager *this,FPBDIslandConstraint *param_1)

{
  longlong *plVar1;
  uint uVar2;
  FPBDIsland *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  
  if (param_1 == (FPBDIslandConstraint *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Edge != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x662,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = param_1->Island;
  if (pFVar3 != (FPBDIsland *)0x0) {
    uVar2 = param_1->IslandArrayIndex;
    lVar11 = (longlong)(int)uVar2;
    uVar8 = param_1->ContainerIndex;
    lVar13 = (longlong)(int)uVar8;
    uVar12 = ~uVar8 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar8 < (pFVar3->ContainerEdges).ArrayNum) {
      uVar6 = uVar12;
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
    FVar9 = (pFVar3->ContainerEdges).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                  )0x0) {
      FVar9 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
               )&pFVar3->ContainerEdges;
    }
    uVar10 = ~uVar2 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar2 < *(int *)((uchar *)((longlong)FVar9 + 8) + lVar13 * 0x10)) {
      uVar6 = uVar10;
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
    if (*(FPBDIslandConstraint **)(*(longlong *)((longlong)FVar9 + lVar13 * 0x10) + lVar11 * 8) !=
        param_1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Island->ContainerEdges[ContainerIndex][EdgeIndex] == Edge",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x66a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar6 = 0;
    if ((int)uVar8 < (pFVar3->ContainerEdges).ArrayNum) {
      uVar6 = uVar12;
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
    FVar9 = (pFVar3->ContainerEdges).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                  )0x0) {
      FVar9 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
               )&pFVar3->ContainerEdges;
    }
    plVar1 = (longlong *)((longlong)FVar9 + lVar13 * 0x10);
    uVar6 = 0;
    if ((int)uVar2 < *(int *)((longlong)FVar9 + 8 + lVar13 * 0x10)) {
      uVar6 = uVar10;
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
    iVar7 = ~uVar2 + (int)plVar1[1];
    if (1 < iVar7) {
      iVar7 = 1;
    }
    if (iVar7 != 0) {
      memmove((void *)(*plVar1 + lVar11 * 8),
              (void *)(*plVar1 + (longlong)((int)plVar1[1] - iVar7) * 8),(longlong)iVar7 << 3);
    }
    *(int *)(plVar1 + 1) = (int)plVar1[1] + -1;
    uVar6 = 0;
    if ((int)uVar8 < (pFVar3->ContainerEdges).ArrayNum) {
      uVar6 = uVar12;
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
    FVar9 = (pFVar3->ContainerEdges).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                  )0x0) {
      FVar9 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
               )&pFVar3->ContainerEdges;
    }
    if ((int)uVar2 < *(int *)((longlong)FVar9 + 8 + lVar13 * 0x10)) {
      uVar6 = 0;
      if ((int)uVar8 < (pFVar3->ContainerEdges).ArrayNum) {
        uVar6 = uVar12;
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
      FVar9 = (pFVar3->ContainerEdges).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                    )0x0) {
        FVar9 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                 )&pFVar3->ContainerEdges;
      }
      uVar8 = 0;
      if ((int)uVar2 < *(int *)((uchar *)((longlong)FVar9 + 8) + lVar13 * 0x10)) {
        uVar8 = uVar10;
      }
      if (uVar8 == 0) {
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
      *(uint *)(*(longlong *)(*(longlong *)((longlong)FVar9 + lVar13 * 0x10) + lVar11 * 8) + 0x34) =
           uVar2;
    }
    (pFVar3->Flags).Bits = (pFVar3->Flags).Bits | 2;
    pFVar3->NumEdges = pFVar3->NumEdges + -1;
    param_1->Island = (FPBDIsland *)0x0;
    param_1->IslandArrayIndex = -1;
  }
  return;
}

// RemoveIslandFromMergeSet @ 143b737f0

void __thiscall
Chaos::Private::FPBDIslandManager::RemoveIslandFromMergeSet
          (FPBDIslandManager *this,FPBDIsland *param_1)

{
  uint uVar1;
  int iVar2;
  FPBDIslandMergeSet *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  
  if ((param_1 == (FPBDIsland *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Island != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x727,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = param_1->MergeSet;
  if (pFVar3 != (FPBDIslandMergeSet *)0x0) {
    uVar1 = param_1->MergeSetIslandIndex;
    uVar7 = 0;
    if ((int)uVar1 < (pFVar3->Islands).ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = (pFVar3->Islands).ArrayNum;
    pFVar4 = (pFVar3->Islands).AllocatorInstance.Data;
    iVar8 = iVar2 + ~uVar1;
    if (1 < iVar8) {
      iVar8 = 1;
    }
    if (iVar8 != 0) {
      memmove(pFVar4 + (longlong)(int)uVar1 * 8,pFVar4 + (longlong)(iVar2 - iVar8) * 8,
              (longlong)iVar8 << 3);
    }
    iVar8 = (pFVar3->Islands).ArrayNum + -1;
    (pFVar3->Islands).ArrayNum = iVar8;
    if ((int)uVar1 < iVar8) {
      if (((int)uVar1 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)(*(longlong *)((pFVar3->Islands).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) +
               0x78) = uVar1;
    }
    pFVar3->NumEdges = pFVar3->NumEdges - param_1->NumEdges;
    param_1->MergeSetIslandIndex = -1;
    param_1->MergeSet = (FPBDIslandMergeSet *)0x0;
  }
  return;
}

// RemoveNodeFromIsland @ 143b73980

void __thiscall
Chaos::Private::FPBDIslandManager::RemoveNodeFromIsland
          (FPBDIslandManager *this,FPBDIslandParticle *param_1)

{
  uint uVar1;
  int iVar2;
  FPBDIsland *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  
  if ((param_1 != (FPBDIslandParticle *)0x0) &&
     (pFVar3 = param_1->Island, pFVar3 != (FPBDIsland *)0x0)) {
    uVar1 = param_1->IslandArrayIndex;
    lVar9 = (longlong)(int)uVar1;
    uVar10 = ~uVar1 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar1 < (pFVar3->Nodes).ArrayNum) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(FPBDIslandParticle **)((pFVar3->Nodes).AllocatorInstance.Data + lVar9 * 8) != param_1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Island->Nodes[ArrayIndex] == Node",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                           ,0x62c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = 0;
    if ((int)uVar1 < (pFVar3->Nodes).ArrayNum) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = (pFVar3->Nodes).ArrayNum;
    pFVar4 = (pFVar3->Nodes).AllocatorInstance.Data;
    iVar8 = iVar2 + ~uVar1;
    if (1 < iVar8) {
      iVar8 = 1;
    }
    if (iVar8 != 0) {
      memmove(pFVar4 + lVar9 * 8,pFVar4 + (longlong)(iVar2 - iVar8) * 8,(longlong)iVar8 << 3);
    }
    iVar8 = (pFVar3->Nodes).ArrayNum + -1;
    (pFVar3->Nodes).ArrayNum = iVar8;
    if ((int)uVar1 < iVar8) {
      if (((int)uVar1 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)(*(longlong *)((pFVar3->Nodes).AllocatorInstance.Data + lVar9 * 8) + 0x28) = uVar1;
    }
    (pFVar3->Flags).Bits = (pFVar3->Flags).Bits | 2;
    param_1->Island = (FPBDIsland *)0x0;
    param_1->IslandArrayIndex = -1;
  }
  return;
}

// RemoveParticle @ 143b73b30

void __thiscall
Chaos::Private::FPBDIslandManager::RemoveParticle
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPBDIsland *pFVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  FPBDIslandParticle *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  
  if ((param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (pFVar8 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1),
     pFVar8 != (FPBDIslandParticle *)0x0)) {
    if ((*(byte *)&pFVar8->Flags & 1) == 0) {
      pFVar9 = (pFVar8->Edges).AllocatorInstance.Data;
      iVar2 = (pFVar8->Edges).ArrayNum;
      pFVar1 = pFVar9 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pFVar8->Edges).ArrayNum != iVar2) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*_const,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar9 == pFVar1) break;
        lVar4 = *(longlong *)pFVar9;
        lVar5 = *(longlong *)(lVar4 + 8);
        if (lVar5 != 0) {
          *(uint *)(lVar5 + 0x94) = *(uint *)(lVar5 + 0x94) & 0xfffffffb | 0x100;
        }
        UpdateIslandPartialSleepAllowed(this,*(FPBDIsland **)(lVar4 + 8),pFVar8->Particle);
        pFVar9 = pFVar9 + 8;
      }
    }
    else {
      pFVar3 = pFVar8->Island;
      if (pFVar3 != (FPBDIsland *)0x0) {
        (pFVar3->Flags).Bits = (pFVar3->Flags).Bits & 0xfffffffb | 0x100;
      }
      UpdateIslandPartialSleepAllowed(this,pFVar8->Island,pFVar8->Particle);
    }
    RemoveParticleConstraints(this,param_1);
    RemoveNodeFromIsland(this,pFVar8);
    if ((pFVar8->Island != (FPBDIsland *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Node->Island == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                           ,0x4e7,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TPoolBackedArray<Chaos::Private::FPBDIslandParticle,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandParticle>_>
    ::Free(&this->Nodes,pFVar8);
    pFVar8 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1);
    if ((pFVar8 != (FPBDIslandParticle *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetGraphNode(Particle) == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                           ,0x3d4,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// RemoveParticleConstraints @ 143b73cb0

void __thiscall
Chaos::Private::FPBDIslandManager::RemoveParticleConstraints
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  longlong lVar1;
  FPBDIslandConstraint *pFVar2;
  FPBDIsland *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FPBDIslandParticle *pFVar7;
  longlong lVar8;
  uint uVar9;
  
  if (((param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
      (pFVar7 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1),
      pFVar7 != (FPBDIslandParticle *)0x0)) &&
     (uVar9 = (pFVar7->Edges).ArrayNum - 1, -1 < (int)uVar9)) {
    lVar8 = (longlong)(int)uVar9 * 8;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (pFVar7->Edges).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar1 = **(longlong **)((pFVar7->Edges).AllocatorInstance.Data + lVar8);
      if ((lVar1 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Constraint != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                             ,0x4ef,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = *(FPBDIslandConstraint **)(lVar1 + 0x10);
      if (pFVar2 != (FPBDIslandConstraint *)0x0) {
        pFVar3 = pFVar2->Island;
        if (pFVar3 != (FPBDIsland *)0x0) {
          (pFVar3->Flags).Bits =
               (pFVar3->Flags).Bits & 4 | (pFVar3->Flags).Bits & 0xfffffffb | 0x100;
        }
        RemoveEdgeFromIsland(this,pFVar2);
        if ((pFVar2->Island != (FPBDIsland *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Edge->Island == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                               ,0x514,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UnbindEdgeFromNodes(this,pFVar2);
        TPoolBackedArray<Chaos::Private::FPBDIslandConstraint,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandConstraint>_>
        ::Free(&this->Edges,pFVar2);
      }
      lVar8 = lVar8 + -8;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  return;
}

// RemoveParticleContainerConstraints @ 143b73e40

void __thiscall
Chaos::Private::FPBDIslandManager::RemoveParticleContainerConstraints
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1,int param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPBDIslandParticle *pFVar5;
  uint uVar6;
  longlong lVar7;
  
  if (((param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
      (pFVar5 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1),
      pFVar5 != (FPBDIslandParticle *)0x0)) &&
     (uVar6 = (pFVar5->Edges).ArrayNum - 1, -1 < (int)uVar6)) {
    lVar7 = (longlong)(int)uVar6 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (pFVar5->Edges).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar1 = *(undefined8 **)((pFVar5->Edges).AllocatorInstance.Data + lVar7);
      if (*(int *)(puVar1 + 6) == param_2) {
        RemoveConstraint(this,(FConstraintHandle *)*puVar1);
      }
      lVar7 = lVar7 + -8;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return;
}

// ReserveParticles @ 143b74040

int __thiscall
Chaos::Private::FPBDIslandManager::ReserveParticles(FPBDIslandManager *this,int param_1)

{
  int iVar1;
  
  iVar1 = (this->Nodes).Items.ArrayNum;
  if (-1 < param_1) {
    if ((this->Nodes).Items.ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,(ForAnyElementType *)&this->Nodes,iVar1,&(this->Nodes).Items.ArrayMax);
    }
    if ((this->Nodes).FreeItems.ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&(this->Nodes).FreeItems.AllocatorInstance,
                 (this->Nodes).FreeItems.ArrayNum,&(this->Nodes).FreeItems.ArrayMax);
    }
    TObjectPool<Chaos::Private::FPBDIslandParticle>::ReserveBlocks
              (&(this->Nodes).Pool,
               -(int)((longlong)
                      ROUND(__real_bfe0000000000000 -
                            ((double)(param_1 * 0x60) + (double)(param_1 * 0x60)) /
                            (double)((this->Nodes).Pool.NumPerBlock * 0x60)) >> 1));
    iVar1 = param_1 - iVar1;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 143b74dd0

void __thiscall Chaos::Private::FPBDIslandManager::Reset(FPBDIslandManager *this)

{
  longlong lVar1;
  FPBDIslandConstraint *pFVar2;
  FPBDIsland *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar8 = (this->Edges).Items.ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 * 8;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->Edges).Items.ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
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
      lVar1 = **(longlong **)((this->Edges).Items.AllocatorInstance.Data + lVar7);
      if (lVar1 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Constraint != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                           ,0x4ef,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar2 = *(FPBDIslandConstraint **)(lVar1 + 0x10);
      if (pFVar2 != (FPBDIslandConstraint *)0x0) {
        pFVar3 = pFVar2->Island;
        if (pFVar3 != (FPBDIsland *)0x0) {
          (pFVar3->Flags).Bits =
               (pFVar3->Flags).Bits & 4 | (pFVar3->Flags).Bits & 0xfffffffb | 0x100;
        }
        RemoveEdgeFromIsland(this,pFVar2);
        if (pFVar2->Island != (FPBDIsland *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Edge->Island == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                             ,0x514,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        UnbindEdgeFromNodes(this,pFVar2);
        TPoolBackedArray<Chaos::Private::FPBDIslandConstraint,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandConstraint>_>
        ::Free(&this->Edges,pFVar2);
      }
      lVar7 = lVar7 + -8;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  if ((this->Edges).Items.ArrayNum != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Edges.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x2b7,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar8 = (this->Nodes).Items.ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 * 8;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->Nodes).Items.ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
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
      RemoveParticle(this,(TGeometryParticleHandleImp<double,3,1> *)
                          **(undefined8 **)((this->Nodes).Items.AllocatorInstance.Data + lVar7));
      lVar7 = lVar7 + -8;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  if ((this->Nodes).Items.ArrayNum != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Nodes.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x2bd,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TPoolBackedArray<Chaos::Private::FPBDIslandMergeSet,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandMergeSet>_>
  ::Reset(&this->MergeSets);
  TPoolBackedArray<Chaos::Private::FPBDIsland,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIsland>_>
  ::Reset(&this->Islands);
  TPoolBackedArray<Chaos::Private::FPBDIslandConstraint,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandConstraint>_>
  ::Reset(&this->Edges);
  TPoolBackedArray<Chaos::Private::FPBDIslandParticle,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandParticle>_>
  ::Reset(&this->Nodes);
  return;
}

// ResetEdgeFlags @ 143b75030

void __thiscall
Chaos::Private::FPBDIslandManager::ResetEdgeFlags(FPBDIslandManager *this,FPBDIsland *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar5;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar6;
  undefined1 local_res10 [8];
  
  FVar5 = (param_1->ContainerEdges).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ContainerEdges).ArrayNum;
  if (FVar5 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                )0x0) {
    FVar5 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
             )&param_1->ContainerEdges;
  }
  FVar6 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
           )((longlong)iVar2 * 0x10 + (longlong)FVar5);
  while( true ) {
    if ((param_1->ContainerEdges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar5 == FVar6) break;
    plVar4 = *(longlong **)FVar5;
    iVar3 = *(int *)((longlong)FVar5 + 8);
    plVar1 = plVar4 + iVar3;
    while( true ) {
      if (*(int *)((longlong)FVar5 + 8) != iVar3) {
        `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (plVar4 == plVar1) break;
      *(uint *)(*plVar4 + 0x40) = *(uint *)(*plVar4 + 0x40) & 0xfffffff9;
      plVar4 = plVar4 + 1;
    }
    FVar5 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
             )((longlong)FVar5 + 0x10);
  }
  return;
}

// ResetEdgeFlags @ 143b750d0

void __thiscall Chaos::Private::FPBDIslandManager::ResetEdgeFlags(FPBDIslandManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Edges).Items.AllocatorInstance.Data;
  iVar2 = (this->Edges).Items.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Edges).Items.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    *(uint *)(*(longlong *)pFVar3 + 0x40) = *(uint *)(*(longlong *)pFVar3 + 0x40) & 0xfffffff9;
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// ResetIslandPartialSleepAllowed @ 143b75240

void __thiscall
Chaos::Private::FPBDIslandManager::ResetIslandPartialSleepAllowed(FPBDIslandManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Islands).Items.AllocatorInstance.Data;
  iVar2 = (this->Islands).Items.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Islands).Items.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    *(uint *)(*(longlong *)pFVar3 + 0x94) = *(uint *)(*(longlong *)pFVar3 + 0x94) | 8;
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// ResetNodeFlags @ 143b752c0

void __thiscall
Chaos::Private::FPBDIslandManager::ResetNodeFlags(FPBDIslandManager *this,FPBDIsland *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  pFVar3 = (param_1->Nodes).AllocatorInstance.Data;
  iVar2 = (param_1->Nodes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Nodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar3 == pFVar1) break;
    *(uint *)(*(longlong *)pFVar3 + 0x2c) = *(uint *)(*(longlong *)pFVar3 + 0x2c) & 0xffffff8f;
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// ResetNodeFlags @ 143b75320

void __thiscall Chaos::Private::FPBDIslandManager::ResetNodeFlags(FPBDIslandManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Nodes).Items.AllocatorInstance.Data;
  iVar2 = (this->Nodes).Items.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Nodes).Items.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    *(uint *)(*(longlong *)pFVar3 + 0x2c) = *(uint *)(*(longlong *)pFVar3 + 0x2c) & 0xffffff8f;
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// ResetParticleResimFrame @ 143b75380

void __thiscall
Chaos::Private::FPBDIslandManager::ResetParticleResimFrame(FPBDIslandManager *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Nodes).Items.AllocatorInstance.Data;
  iVar2 = (this->Nodes).Items.ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Nodes).Items.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    lVar3 = *(longlong *)pFVar4;
    pFVar4 = pFVar4 + 8;
    *(int *)(lVar3 + 0x50) = param_1;
  }
  return;
}

// ResetParticleSleepCounter @ 143b753e0

void __thiscall
Chaos::Private::FPBDIslandManager::ResetParticleSleepCounter
          (FPBDIslandManager *this,FPBDIsland *param_1)

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
  undefined1 local_res10 [8];
  
  pFVar9 = (param_1->Nodes).AllocatorInstance.Data;
  iVar2 = (param_1->Nodes).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Nodes).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar1) break;
    plVar8 = (longlong *)0x0;
    if (1 < *(byte *)(**(longlong **)pFVar9 + 0xc)) {
      plVar8 = (longlong *)**(longlong **)pFVar9;
    }
    if (plVar8 != (longlong *)0x0) {
      uVar3 = *(uint *)(plVar8 + 1);
      lVar4 = *plVar8;
      uVar7 = 0;
      if ((int)uVar3 < *(int *)(lVar4 + 0x4f0)) {
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
      *(undefined1 *)((longlong)(int)uVar3 + *(longlong *)(lVar4 + 0x4e8)) = 0;
    }
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// RewakeConstraintsNotSupportingPartialSleep @ 143b75620

bool __thiscall
Chaos::Private::FPBDIslandManager::RewakeConstraintsNotSupportingPartialSleep
          (FPBDIslandManager *this,FPBDIsland *param_1)

{
  longlong *plVar1;
  FPBDIslandParticle *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  schar sVar15;
  uint uVar16;
  FPBDIslandParticle *pFVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar22
  ;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_98;
  undefined1 local_97 [7];
  TArray<Chaos::Private::FPBDIslandParticle_*,TSizedDefaultAllocator<32>_> local_90;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_80;
  longlong *local_70;
  TPBDRigidParticleHandleImp<double,3,1> *local_68;
  uint local_60;
  TArray<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
  *local_58;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
  local_50;
  
  uVar14 = (param_1->Nodes).ArrayNum;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  iVar12 = 0;
  iVar11 = 0;
  if (0 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar14,&local_80.AllocatorInstance,0,&local_80.ArrayMax);
    iVar12 = local_90.ArrayNum;
    iVar11 = local_90.ArrayMax;
  }
  uVar14 = (param_1->Nodes).ArrayNum;
  if (-1 < (int)uVar14) {
    if (iVar11 < (int)uVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar14,&local_90.AllocatorInstance,iVar12,&local_90.ArrayMax);
    }
    FVar22 = (param_1->ContainerEdges).AllocatorInstance.SecondaryData;
    local_58 = &param_1->ContainerEdges;
    local_60 = (param_1->ContainerEdges).ArrayNum;
    uVar20 = (ulonglong)(int)local_60;
    if (FVar22 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                   )0x0) {
      FVar22 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                )local_58;
    }
    local_50 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                )(uVar20 * 0x10 + (longlong)FVar22);
    while( true ) {
      FVar7 = local_50;
      if (local_58->ArrayNum != (int)uVar20) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (FVar22 == FVar7) break;
      plVar18 = *(longlong **)FVar22;
      iVar12 = *(int *)((longlong)FVar22 + 8);
      plVar1 = plVar18 + iVar12;
      while( true ) {
        if (*(int *)((longlong)FVar22 + 8) != iVar12) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res20);
        }
        if (plVar18 == plVar1) break;
        plVar19 = (longlong *)*plVar18;
        if ((*(byte *)(plVar19 + 8) & 1) == 0) {
          pFVar17 = (FPBDIslandParticle *)plVar19[2];
          pFVar2 = (FPBDIslandParticle *)plVar19[3];
          if ((((pFVar17 != (FPBDIslandParticle *)0x0) && (pFVar2 != (FPBDIslandParticle *)0x0)) &&
              ((longlong *)*plVar19 != (longlong *)0x0)) &&
             (cVar8 = (**(code **)(*(longlong *)*plVar19 + 0x38))(), cVar8 == '\0')) {
            uVar14 = (pFVar17->Flags).Bits & 3;
            uVar16 = (pFVar2->Flags).Bits & 3;
            if ((((pFVar17->Flags).Bits & 1) == 0) || (uVar14 == 3)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if ((((pFVar2->Flags).Bits & 1) == 0) || (uVar16 == 3)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (((uVar14 == 3) && (bVar5)) || ((bVar9 && (pFVar17 = pFVar2, uVar16 == 3)))) {
              *(uint *)(plVar19 + 8) = *(uint *)(plVar19 + 8) | 4;
              `Chaos::Private::FPBDIslandManager::RewakeConstraintsNotSupportingPartialSleep'::__l2
              ::<lambda_2>::operator()(&local_98,pFVar17,&local_80,&local_90);
            }
          }
        }
        plVar18 = plVar18 + 1;
      }
      FVar22 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                )((longlong)FVar22 + 0x10);
      uVar20 = (ulonglong)local_60;
    }
    uVar14 = 0;
    if (0 < local_90.ArrayNum) {
      lVar21 = 0;
      do {
        uVar16 = 0;
        if ((int)uVar14 < local_90.ArrayNum) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        plVar18 = *(longlong **)(local_90.AllocatorInstance.Data + lVar21);
        plVar19 = (longlong *)plVar18[2];
        lVar6 = plVar18[3];
        plVar1 = plVar19 + (int)lVar6;
        while( true ) {
          if ((int)plVar18[3] != (int)lVar6) {
            local_97[0] = 0;
            `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_97);
          }
          if (plVar19 == plVar1) break;
          plVar3 = (longlong *)*plVar19;
          if ((*(uint *)(plVar3 + 8) & 4) == 0) {
            *(uint *)(plVar3 + 8) = *(uint *)(plVar3 + 8) | 4;
            if (((longlong *)*plVar3 != (longlong *)0x0) &&
               (cVar8 = (**(code **)(*(longlong *)*plVar3 + 0x38))(), cVar8 == '\0')) {
              plVar13 = (longlong *)plVar3[2];
              if (plVar18 == plVar13) {
                plVar13 = (longlong *)plVar3[3];
              }
              if (((plVar13 != (longlong *)0x0) &&
                  (uVar16 = *(uint *)((longlong)plVar13 + 0x2c), (uVar16 & 1) != 0)) &&
                 ((uVar16 & 2) != 0)) {
                *(uint *)((longlong)plVar13 + 0x2c) = uVar16 & 0xfffffffd;
                local_70 = plVar13;
                if (((local_90.AllocatorInstance.Data <= (FScriptContainerElement *)&local_70) &&
                    ((FScriptContainerElement *)&local_70 <
                     local_90.AllocatorInstance.Data + (longlong)local_90.ArrayMax * 8)) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)) {
                  pcVar4 = (code *)swi(3);
                  uVar10 = (*pcVar4)();
                  return (bool)uVar10;
                }
                iVar12 = local_90.ArrayNum;
                if (local_90.ArrayNum == local_90.ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_90.AllocatorInstance,&local_90.ArrayMax);
                }
                local_90.ArrayNum = iVar12 + 1;
                *(longlong **)(local_90.AllocatorInstance.Data + (longlong)iVar12 * 8) = local_70;
                local_68 = (TPBDRigidParticleHandleImp<double,3,1> *)*local_70;
                if (local_68 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
                  if (((local_80.AllocatorInstance.Data <= (FScriptContainerElement *)&local_68) &&
                      ((FScriptContainerElement *)&local_68 <
                       local_80.AllocatorInstance.Data + (longlong)local_80.ArrayMax * 8)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar4 = (code *)swi(3);
                    uVar10 = (*pcVar4)();
                    return (bool)uVar10;
                  }
                  iVar12 = local_80.ArrayNum;
                  if (local_80.ArrayNum == local_80.ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&local_80.AllocatorInstance,&local_80.ArrayMax);
                  }
                  local_80.ArrayNum = iVar12 + 1;
                  *(TPBDRigidParticleHandleImp<double,3,1> **)
                   (local_80.AllocatorInstance.Data + (longlong)iVar12 * 8) = local_68;
                  this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
                  if (1 < (byte)local_68->field_0xc) {
                    this_00 = local_68;
                  }
                  if (this_00 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
                    sVar15 = '\x7f';
                    if (*(int *)((longlong)local_70 + 0x3c) < 0x7f) {
                      sVar15 = (schar)*(int *)((longlong)local_70 + 0x3c);
                    }
                    TPBDRigidParticleHandleImp<double,3,1>::SetSleepCounter(this_00,sVar15);
                  }
                }
              }
            }
          }
          plVar19 = plVar19 + 1;
        }
        uVar14 = uVar14 + 1;
        lVar21 = lVar21 + 8;
      } while ((int)uVar14 < local_90.ArrayNum);
    }
    WakeUpParticles(this,&local_80,false);
    ResetEdgeFlags(this,param_1);
    bVar9 = local_80.ArrayNum != 0;
    if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.AllocatorInstance.Data);
    }
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
}

// SetAssignLevels @ 143b77bb0

void __thiscall
Chaos::Private::FPBDIslandManager::SetAssignLevels(FPBDIslandManager *this,bool param_1)

{
  this->bAssignLevels = param_1;
  return;
}

// SetDisableCounterThreshold @ 143b77ca0

void __thiscall
Chaos::Private::FPBDIslandManager::SetDisableCounterThreshold(FPBDIslandManager *this,int param_1)

{
  this->DisableCounterThreshold = param_1;
  return;
}

// SetGravityForces @ 143b77cb0

void __thiscall
Chaos::Private::FPBDIslandManager::SetGravityForces
          (FPBDIslandManager *this,FPerParticleGravity *param_1)

{
  this->Gravity = param_1;
  return;
}

// SetIsDeterministic @ 143b77cc0

void __thiscall
Chaos::Private::FPBDIslandManager::SetIsDeterministic(FPBDIslandManager *this,bool param_1)

{
  this->bIsDeterministic = param_1;
  return;
}

// SetMaterialContainers @ 143b77ef0

void __thiscall
Chaos::Private::FPBDIslandManager::SetMaterialContainers
          (FPBDIslandManager *this,
          TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *param_1,
          TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
          *param_2,THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *param_3)

{
  this->PhysicsMaterials = param_1;
  this->PerParticlePhysicsMaterials = param_2;
  this->SimMaterials = param_3;
  return;
}

// SetParticleResimFrame @ 143b78c10

void __thiscall
Chaos::Private::FPBDIslandManager::SetParticleResimFrame
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1,int param_2)

{
  FPBDIslandParticle *pFVar1;
  
  if ((param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     (pFVar1 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1),
     pFVar1 != (FPBDIslandParticle *)0x0)) {
    pFVar1->ResimFrame = param_2;
  }
  return;
}

// ShouldAssignLevels @ 143b79690

bool __thiscall Chaos::Private::FPBDIslandManager::ShouldAssignLevels(FPBDIslandManager *this)

{
  if ((this->bAssignLevels == false) && (!CVars::bChaosSolverPartialIslandSleep)) {
    return false;
  }
  return true;
}

// SleepConstraintsBetweenNonAwakeParticles @ 143b796d0

void __thiscall
Chaos::Private::FPBDIslandManager::SleepConstraintsBetweenNonAwakeParticles
          (FPBDIslandManager *this,FPBDIsland *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  longlong *plVar13;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar14
  ;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar15
  ;
  undefined1 local_res10 [8];
  
  FVar14 = (param_1->ContainerEdges).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ContainerEdges).ArrayNum;
  if (FVar14 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                 )0x0) {
    FVar14 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
              )&param_1->ContainerEdges;
  }
  FVar15 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
            )((longlong)iVar2 * 0x10 + (longlong)FVar14);
  do {
    if ((param_1->ContainerEdges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar14 == FVar15) {
      return;
    }
    plVar13 = *(longlong **)FVar14;
    iVar3 = *(int *)((longlong)FVar14 + 8);
    plVar1 = plVar13 + iVar3;
    while( true ) {
      if (*(int *)((longlong)FVar14 + 8) != iVar3) {
        `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (plVar13 == plVar1) break;
      puVar6 = (undefined8 *)*plVar13;
      uVar4 = *(uint *)(puVar6 + 8);
      if ((uVar4 & 1) == 0) {
        lVar7 = puVar6[2];
        lVar8 = puVar6[3];
        plVar9 = (longlong *)*puVar6;
        if (lVar7 == 0) {
          if (lVar8 == 0) {
            *(uint *)(puVar6 + 8) = uVar4 & 0xfffffffe;
            (**(code **)(*plVar9 + 0x48))(plVar9,0);
            goto LAB_143b7984b;
          }
          *(uint *)(puVar6 + 8) = (*(uint *)(lVar8 + 0x2c) >> 1 ^ uVar4) & 1 ^ uVar4;
          (**(code **)(*plVar9 + 0x48))
                    (plVar9,CONCAT31((uint3)(*(uint *)(lVar8 + 0x2c) >> 9),
                                     (char)(*(uint *)(lVar8 + 0x2c) >> 1)) & 0xffffff01);
          plVar13 = plVar13 + 1;
        }
        else {
          uVar5 = *(uint *)(lVar7 + 0x2c);
          if (lVar8 == 0) {
            *(uint *)(puVar6 + 8) = (uVar5 >> 1 ^ uVar4) & 1 ^ uVar4;
            (**(code **)(*plVar9 + 0x48))
                      (plVar9,CONCAT31((uint3)(*(uint *)(lVar7 + 0x2c) >> 9),
                                       (char)(*(uint *)(lVar7 + 0x2c) >> 1)) & 0xffffff01);
            plVar13 = plVar13 + 1;
          }
          else {
            if (((uVar5 & 2) == 0) || ((*(byte *)(lVar8 + 0x2c) & 2) == 0)) {
              bVar10 = false;
              if ((uVar5 & 2) != 0) goto LAB_143b79796;
LAB_143b797a1:
              bVar11 = false;
            }
            else {
              bVar10 = true;
LAB_143b79796:
              if ((*(byte *)(lVar8 + 0x2c) & 1) != 0) goto LAB_143b797a1;
              bVar11 = true;
            }
            if (((*(byte *)(lVar8 + 0x2c) & 2) == 0) || ((uVar5 & 1) != 0)) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            if (((!bVar10) && (!bVar11)) && (!bVar12)) goto LAB_143b7984b;
            *(uint *)(puVar6 + 8) = *(uint *)(puVar6 + 8) | 1;
            (**(code **)(*plVar9 + 0x48))(plVar9,CONCAT71((int7)((ulonglong)lVar8 >> 8),1));
            plVar13 = plVar13 + 1;
          }
        }
      }
      else {
LAB_143b7984b:
        plVar13 = plVar13 + 1;
      }
    }
    FVar14 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
              )((longlong)FVar14 + 0x10);
  } while( true );
}

// SleepNonMovingParticles @ 143b79900

void __thiscall
Chaos::Private::FPBDIslandManager::SleepNonMovingParticles
          (FPBDIslandManager *this,FPBDIsland *param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  schar sVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  TVector<double,3> *pTVar10;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  TPBDRigidParticleHandleImp<double,3,1> *local_78;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_70 [3];
  
  iVar9 = (param_1->Nodes).ArrayNum;
  iVar12 = 0;
  pFVar13 = (param_1->Nodes).AllocatorInstance.Data;
  bVar7 = true;
  bVar4 = true;
  local_70[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70[0].ArrayNum = 0;
  local_70[0].ArrayMax = 0;
  if ((iVar9 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = pFVar13 + (longlong)iVar9 * 8;
  if (pFVar13 == pFVar1) {
LAB_143b79bc3:
    (param_1->Flags).Bits = (param_1->Flags).Bits | 0x40;
  }
  else {
    do {
      plVar2 = *(longlong **)pFVar13;
      if ((*(float *)((longlong)plVar2 + 0x34) <= 0.0) && (*(float *)(plVar2 + 7) <= 0.0))
      goto LAB_143b79b9e;
      if ((*(byte *)((longlong)plVar2 + 0x2c) & 2) == 0) {
        this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)((TPBDRigidParticleHandleImp<double,3,1> *)*plVar2)->field_0xc) {
          this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)*plVar2;
        }
        if (this_00 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          iVar9 = *(int *)((longlong)plVar2 + 0x3c);
          iVar11 = 0;
          if (iVar9 < 0x7fffffff) {
            UpdateParticleSleepMetrics<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                      (this_00,(double)param_2);
            pTVar10 = TPBDRigidParticleHandleImp<double,3,1>::VSmooth(this_00);
            if ((*(double *)&pTVar10->field_0x8 * *(double *)&pTVar10->field_0x8 +
                 *(double *)pTVar10 * *(double *)pTVar10 +
                 *(double *)&pTVar10->field_0x10 * *(double *)&pTVar10->field_0x10 <=
                 (double)*(float *)((longlong)plVar2 + 0x34)) &&
               (pTVar10 = TPBDRigidParticleHandleImp<double,3,1>::WSmooth(this_00),
               *(double *)&pTVar10->field_0x8 * *(double *)&pTVar10->field_0x8 +
               *(double *)pTVar10 * *(double *)pTVar10 +
               *(double *)&pTVar10->field_0x10 * *(double *)&pTVar10->field_0x10 <=
               (double)*(float *)(plVar2 + 7))) {
              iVar12 = iVar12 + 1;
              sVar6 = TPBDRigidParticleHandleImp<double,3,1>::SleepCounter(this_00);
              iVar11 = 0x7f;
              if (sVar6 + 1 < 0x7f) {
                iVar11 = sVar6 + 1;
              }
              iVar8 = 0x7f;
              if (iVar9 < 0x7f) {
                iVar8 = iVar9;
              }
              if (iVar8 < iVar11) {
                local_78 = TPBDRigidParticles<double,3>::Handle
                                     (*(TPBDRigidParticles<double,3> **)this_00,
                                      *(int *)&this_00->field_0x8);
                if (((local_70[0].AllocatorInstance.Data <= (FScriptContainerElement *)&local_78) &&
                    ((FScriptContainerElement *)&local_78 <
                     local_70[0].AllocatorInstance.Data + (longlong)local_70[0].ArrayMax * 8)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                iVar9 = local_70[0].ArrayNum;
                if (local_70[0].ArrayNum == local_70[0].ArrayMax) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&local_70[0].AllocatorInstance,&local_70[0].ArrayMax);
                }
                local_70[0].ArrayNum = iVar9 + 1;
                *(TPBDRigidParticleHandleImp<double,3,1> **)
                 (local_70[0].AllocatorInstance.Data + (longlong)iVar9 * 8) = local_78;
                *(uint *)((longlong)plVar2 + 0x2c) = *(uint *)((longlong)plVar2 + 0x2c) | 2;
                goto LAB_143b79b6f;
              }
            }
            sVar6 = (schar)iVar11;
            bVar7 = false;
          }
          else {
LAB_143b79b6f:
            sVar6 = '\0';
            bVar7 = bVar4;
          }
          TPBDRigidParticleHandleImp<double,3,1>::SetSleepCounter(this_00,sVar6);
          bVar4 = bVar7;
        }
      }
      else {
        iVar12 = iVar12 + 1;
      }
      pFVar13 = pFVar13 + 8;
    } while (pFVar13 != pFVar1);
    if (bVar7) goto LAB_143b79bc3;
LAB_143b79b9e:
    if ((param_1->Nodes).ArrayNum <= iVar12) goto LAB_143b79bd6;
  }
  param_1->SleepCounter = 0;
LAB_143b79bd6:
  if (local_70[0].ArrayNum != 0) {
    FPBDRigidsSOAs::DeactivateParticles(this->Particles,local_70);
  }
  SwitchIslandSleepType(this,param_1,iVar12);
  if (local_70[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70[0].AllocatorInstance.Data);
  }
  return;
}

// SleepParticle @ 143b79c70

void __thiscall
Chaos::Private::FPBDIslandManager::SleepParticle
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  uint uVar1;
  FPBDIsland *pFVar2;
  FPBDIslandParticle *pFVar3;
  
  if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pFVar3 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1);
    if (pFVar3 != (FPBDIslandParticle *)0x0) {
      (pFVar3->Flags).Bits = (pFVar3->Flags).Bits | 2;
      pFVar2 = pFVar3->Island;
      if ((pFVar2 != (FPBDIsland *)0x0) && (uVar1 = (pFVar2->Flags).Bits, (uVar1 & 0x40) == 0)) {
        (pFVar2->Flags).Bits = uVar1 & 4 | uVar1 & 0xfffffffb | 0x100;
      }
    }
  }
  return;
}

// SortIslandEdges @ 143b7be90

void __thiscall
Chaos::Private::FPBDIslandManager::SortIslandEdges(FPBDIslandManager *this,FPBDIsland *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar12
  ;
  FIdentityFunctor local_res10;
  undefined1 local_res18 [8];
  longlong local_res20;
  FPBDIslandManager *local_58;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
  local_50;
  
  uVar8 = 0;
  if (0 < (param_1->ContainerEdges).ArrayNum) {
    local_res10 = SUB81(param_1,0);
    lVar11 = 0;
    local_50 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                )&param_1->ContainerEdges;
    local_res20 = 0;
    do {
      FVar12 = local_50;
      uVar6 = 0;
      if ((int)uVar8 < *(int *)((longlong)local_50 + 0x58)) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar7 = FVar12;
      if (*(ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
            *)((longlong)FVar12 + 0x50) !=
          (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
           )0x0) {
        FVar7 = *(ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                  *)((longlong)FVar12 + 0x50);
      }
      local_58 = this;
      AlgoImpl::
      IntroSortInternal<Chaos::Private::FPBDIslandConstraint_*,int,FIdentityFunctor,TDereferenceWrapper<Chaos::Private::FPBDIslandConstraint_*,_Chaos::Private::FPBDIslandManager::SortIslandEdges_::__l4::<lambda_1>_>_>
                (*(FPBDIslandConstraint ***)((longlong)FVar7 + lVar11),
                 *(int *)((longlong)FVar7 + 8 + lVar11),local_res10,(<lambda_1> *)&local_58);
      uVar6 = 0;
      if ((int)uVar8 < *(int *)((longlong)FVar12 + 0x58)) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
            *)((longlong)FVar12 + 0x50) !=
          (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
           )0x0) {
        FVar12 = *(ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                   *)((longlong)FVar12 + 0x50);
      }
      plVar10 = *(longlong **)((longlong)FVar12 + lVar11);
      iVar2 = *(int *)((longlong)FVar12 + 8 + lVar11);
      plVar1 = plVar10 + iVar2;
      iVar9 = 0;
      while( true ) {
        if (*(int *)((longlong)FVar12 + 8 + lVar11) != iVar2) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res18);
        }
        if (plVar10 == plVar1) break;
        lVar3 = *plVar10;
        plVar10 = plVar10 + 1;
        *(int *)(lVar3 + 0x34) = iVar9;
        iVar9 = iVar9 + 1;
      }
      uVar8 = uVar8 + 1;
      local_res20 = local_res20 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar8 < (param_1->ContainerEdges).ArrayNum);
  }
  return;
}

// SwitchIslandSleepType @ 143b7c060

void __thiscall
Chaos::Private::FPBDIslandManager::SwitchIslandSleepType
          (FPBDIslandManager *this,FPBDIsland *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = (param_1->Nodes).ArrayNum;
  if (iVar1 < 1) {
    return;
  }
  iVar2 = param_1->SleepTypeSwitchCounter;
  bVar3 = (float)param_2 / (float)iVar1 < CVars::ChaosSolverMinMotionlessRatio;
  uVar7 = (param_1->Flags).Bits & 0x20;
  if ((uVar7 != 0) || (bVar3)) {
    bVar4 = false;
    if ((uVar7 != 0) && (bVar3)) {
      bVar3 = true;
      goto LAB_143b7c0cf;
    }
    bVar3 = false;
  }
  else {
    bVar4 = true;
    bVar3 = false;
LAB_143b7c0cf:
    if (CVars::ChaosSolverSleepModeSwitchThreshold <= iVar2) {
      bVar5 = true;
      goto LAB_143b7c0de;
    }
  }
  bVar5 = false;
LAB_143b7c0de:
  if (((!bVar4) && (!bVar3)) || (CVars::ChaosSolverSleepModeSwitchThreshold <= iVar2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar5) {
    uVar6 = 0;
    if (uVar7 == 0) {
      uVar6 = 0x20;
    }
    (param_1->Flags).Bits = uVar6 | (param_1->Flags).Bits & 0xffffffdf;
  }
  else if (bVar3) {
    param_1->SleepTypeSwitchCounter = iVar2 + 1;
    return;
  }
  param_1->SleepTypeSwitchCounter = 0;
  return;
}

// SyncConstraintSleepStateToParticles @ 143b7c140

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
Chaos::Private::FPBDIslandManager::SyncConstraintSleepStateToParticles
          (FPBDIslandManager *this,FPBDIsland *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  EObjectStateType EVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  FTaskGraphInterface *pFVar20;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar21;
  FTaskBase *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar22;
  int iVar23;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar24
  ;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this_01;
  ulonglong uVar25;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar26
  ;
  longlong *plVar27;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_98;
  FTaskHandle local_88;
  uint local_80;
  uint local_7c;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
  local_78;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
  local_70;
  longlong *local_68;
  TArray<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
  *local_60;
  int local_58;
  int iStack_54;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
  FStack_50;
  longlong local_48;
  
  FVar26 = (param_1->ContainerEdges).AllocatorInstance.SecondaryData;
  local_60 = &param_1->ContainerEdges;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  local_7c = (param_1->ContainerEdges).ArrayNum;
  uVar25 = (ulonglong)(int)local_7c;
  if (FVar26 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                 )0x0) {
    FVar26 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
              )local_60;
  }
  FVar24 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
            )(uVar25 * 0x10 + (longlong)FVar26);
  local_78 = FVar24;
  do {
    local_70 = FVar26;
    if (local_60->ArrayNum != (int)uVar25) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    iVar23 = MaxNumWorkers;
    if (FVar26 == FVar24) {
      UE::Tasks::Wait<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
                (&local_98,(FTimespan)0x7fffffffffffffff);
      DestructItems<UE::Tasks::Private::FTaskHandle,int>
                ((FTaskHandle *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      return;
    }
    iVar3 = *(int *)((longlong)FVar26 + 8);
    if (0 < iVar3) {
      pFVar20 = FTaskGraphInterface::Get();
      iVar18 = (**(code **)((longlong)*pFVar20 + 0x20))(pFVar20);
      if (iVar18 + -1 < iVar23) {
        iVar23 = iVar18 + -1;
      }
      iVar18 = 1;
      if (1 < iVar23) {
        iVar18 = iVar23;
      }
      iVar23 = iVar3;
      if (iVar18 < iVar3) {
        iVar23 = iVar18;
      }
      iVar18 = 1;
      if (1 < iVar23) {
        iVar18 = iVar23;
      }
      iVar18 = (iVar18 + -1 + iVar3) / iVar18;
      iVar23 = 100;
      if (100 < iVar18) {
        iVar23 = iVar18;
      }
      uVar25 = (longlong)(iVar23 + -1 + iVar3) / (longlong)iVar23;
      iVar18 = (int)uVar25;
      if (iVar18 == 1) {
        local_80 = *(uint *)((longlong)FVar26 + 8);
        uVar25 = (ulonglong)(int)local_80;
        plVar27 = *(longlong **)FVar26;
        local_68 = plVar27 + uVar25;
        while( true ) {
          plVar6 = local_68;
          if (*(int *)((longlong)FVar26 + 8) != (int)uVar25) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res18);
          }
          FVar24 = local_78;
          if (plVar27 == plVar6) break;
          puVar5 = (undefined8 *)*plVar27;
          plVar6 = (longlong *)puVar5[2];
          plVar7 = (longlong *)puVar5[3];
          plVar8 = (longlong *)*puVar5;
          if ((plVar6 == (longlong *)0x0) || (plVar7 == (longlong *)0x0)) {
            uVar4 = *(uint *)(puVar5 + 8);
            if (plVar6 == (longlong *)0x0) {
              if (plVar7 == (longlong *)0x0) {
                *(uint *)(puVar5 + 8) = uVar4 & 0xfffffffe;
                (**(code **)(*plVar8 + 0x48))(plVar8);
                uVar25 = (ulonglong)local_80;
                plVar27 = plVar27 + 1;
              }
              else {
                *(uint *)(puVar5 + 8) =
                     (*(uint *)((longlong)plVar7 + 0x2c) >> 1 ^ uVar4) & 1 ^ uVar4;
                (**(code **)(*plVar8 + 0x48))(plVar8);
                uVar25 = (ulonglong)local_80;
                plVar27 = plVar27 + 1;
              }
            }
            else {
              *(uint *)(puVar5 + 8) = (*(uint *)((longlong)plVar6 + 0x2c) >> 1 ^ uVar4) & 1 ^ uVar4;
              (**(code **)(*plVar8 + 0x48))(plVar8);
              uVar25 = (ulonglong)local_80;
              plVar27 = plVar27 + 1;
            }
          }
          else {
            pTVar22 = (TPBDRigidParticleHandleImp<double,3,1> *)*plVar6;
            if (pTVar22 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143b7c2b7:
              bVar17 = false;
            }
            else {
              pTVar21 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
              if (pTVar22->field_0xc != '\0') {
                pTVar21 = pTVar22;
              }
              if (pTVar21 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143b7c2b7;
              pTVar22 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
              if (1 < (byte)pTVar21->field_0xc) {
                pTVar22 = pTVar21;
              }
              if (pTVar22 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
                EVar14 = Kinematic;
              }
              else {
                EVar14 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar22);
              }
              if (EVar14 != Sleeping) goto LAB_143b7c2b7;
              bVar17 = true;
            }
            pTVar22 = (TPBDRigidParticleHandleImp<double,3,1> *)*plVar7;
            if (pTVar22 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143b7c2f3:
              bVar13 = false;
            }
            else {
              pTVar21 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
              if (pTVar22->field_0xc != '\0') {
                pTVar21 = pTVar22;
              }
              if (pTVar21 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143b7c2f3;
              pTVar22 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
              if (1 < (byte)pTVar21->field_0xc) {
                pTVar22 = pTVar21;
              }
              if (pTVar22 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
                EVar14 = Kinematic;
              }
              else {
                EVar14 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar22);
              }
              if (EVar14 != Sleeping) goto LAB_143b7c2f3;
              bVar13 = true;
            }
            bVar15 = IsParticleDynamic((TGeometryParticleHandleImp<double,3,1> *)*plVar6);
            bVar16 = IsParticleDynamic((TGeometryParticleHandleImp<double,3,1> *)*plVar7);
            if ((bVar17) && (bVar13)) {
              bVar10 = true;
LAB_143b7c321:
              if (bVar16) goto LAB_143b7c32a;
              bVar11 = true;
            }
            else {
              bVar10 = false;
              if (bVar17) goto LAB_143b7c321;
LAB_143b7c32a:
              bVar11 = false;
            }
            if ((!bVar13) || (bVar15)) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            if (((bVar10) || (bVar11)) || (bVar12)) {
              *(uint *)(puVar5 + 8) = *(uint *)(puVar5 + 8) | 1;
              (**(code **)(*plVar8 + 0x48))();
            }
            if ((bVar17) || (!bVar15)) {
              bVar17 = false;
            }
            else {
              bVar17 = true;
            }
            if ((bVar13) || (!bVar16)) {
              bVar13 = false;
            }
            else {
              bVar13 = true;
            }
            if ((bVar17) || (bVar13)) {
              (**(code **)(*plVar8 + 0x48))(plVar8);
              *(uint *)(puVar5 + 8) = *(uint *)(puVar5 + 8) & 0xfffffffe;
            }
            plVar27 = plVar27 + 1;
            uVar25 = (ulonglong)local_80;
            FVar26 = local_70;
          }
        }
      }
      else {
        FVar24 = local_78;
        if (0 < iVar18) {
          uVar25 = uVar25 & 0xffffffff;
          iVar18 = iVar23;
          do {
            local_58 = iVar18 - iVar23;
            iStack_54 = iVar18;
            if (iVar3 < iVar18) {
              iStack_54 = iVar3;
            }
            FStack_50 = FVar26;
            this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                      ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                                  *)&UE::Tasks::Private::SmallTaskAllocator);
            this_01.Reference = (FTaskBase *)0x0;
            if (this_00 != (FTaskBase *)0x0) {
              UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
              this_00->_padding_ =
                   (longlong)
                   &UE::Tasks::Private::
                    TExecutableTaskBase<`Chaos::Private::FPBDIslandManager::SyncConstraintSleepStateToParticles'::`20'::<lambda_2>,void,void>
                    ::_vftable_;
              UE::Tasks::Private::FTaskBase::Init
                        (this_00,
                         L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp(3643)"
                         ,Default,None,None);
              this_00[1]._padding_ = CONCAT44(iStack_54,local_58);
              this_00[1]._padding_ = (longlong)FStack_50;
              this_00[1]._padding_ = local_48;
              this_00->_padding_ =
                   (longlong)
                   &UE::Tasks::Private::
                    TExecutableTask<`Chaos::Private::FPBDIslandManager::SyncConstraintSleepStateToParticles'::`20'::<lambda_2>_>
                    ::_vftable_;
              this_01.Reference = this_00;
            }
            UE::Tasks::Private::FTaskBase::TryLaunch(this_01.Reference,0x100);
            local_88.Pimpl.Reference =
                 (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
                 (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this_01.Reference;
            if (((local_98.AllocatorInstance.Data <= (FScriptContainerElement *)&local_88) &&
                ((FScriptContainerElement *)&local_88 <
                 local_98.AllocatorInstance.Data + (longlong)local_98.ArrayMax * 8)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar19 = local_98.ArrayNum;
            if (local_98.ArrayNum == local_98.ArrayMax) {
              iVar19 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_98.AllocatorInstance,&local_98.ArrayMax);
            }
            local_98.ArrayNum = iVar19 + 1;
            *(FTaskBase **)(local_98.AllocatorInstance.Data + (longlong)iVar19 * 8) =
                 (FTaskBase *)0x0;
            *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
             (local_98.AllocatorInstance.Data + (longlong)iVar19 * 8) = local_88.Pimpl.Reference;
            if (local_88.Pimpl.Reference != (FTaskBase *)0x0) {
              LOCK();
              *(atomic<unsigned_int> *)((longlong)local_88.Pimpl.Reference + 0x30) =
                   (atomic<unsigned_int>)
                   ((int)*(atomic<unsigned_int> *)((longlong)local_88.Pimpl.Reference + 0x30) + 1);
              UNLOCK();
              if (local_88.Pimpl.Reference != (FTaskBase *)0x0) {
                LOCK();
                paVar1 = (atomic<unsigned_int> *)((longlong)local_88.Pimpl.Reference + 0x30);
                aVar2 = *paVar1;
                *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
                UNLOCK();
                if (aVar2 == (atomic<unsigned_int>)0x1) {
                  (*(code *)**(undefined8 **)local_88.Pimpl.Reference)(local_88.Pimpl.Reference,1);
                }
              }
            }
            iVar18 = iVar18 + iVar23;
            uVar25 = uVar25 - 1;
            FVar24 = local_78;
          } while (uVar25 != 0);
        }
      }
    }
    FVar26 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
              )((longlong)FVar26 + 0x10);
    uVar25 = (ulonglong)local_7c;
  } while( true );
}

// UnbindEdgeFromNodes @ 143b7d140

void __thiscall
Chaos::Private::FPBDIslandManager::UnbindEdgeFromNodes
          (FPBDIslandManager *this,FPBDIslandConstraint *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FPBDIslandParticle *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  FPBDIslandParticle **ppFVar14;
  
  piVar12 = param_1->NodeArrayIndices;
  ppFVar14 = param_1->Nodes;
  lVar13 = 2;
  do {
    pFVar4 = *ppFVar14;
    if (pFVar4 != (FPBDIslandParticle *)0x0) {
      uVar2 = *piVar12;
      lVar11 = (longlong)(int)uVar2;
      uVar10 = ~uVar2 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar2 < (pFVar4->Edges).ArrayNum) {
        uVar8 = uVar10;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (*(FPBDIslandConstraint **)((pFVar4->Edges).AllocatorInstance.Data + lVar11 * 8) != param_1
         ) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Node->Edges[ArrayIndex] == Edge",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                           ,0x53b,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      uVar8 = 0;
      if ((int)uVar2 < (pFVar4->Edges).ArrayNum) {
        uVar8 = uVar10;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar3 = (pFVar4->Edges).ArrayNum;
      pFVar5 = (pFVar4->Edges).AllocatorInstance.Data;
      iVar9 = iVar3 + ~uVar2;
      if (1 < iVar9) {
        iVar9 = 1;
      }
      if (iVar9 != 0) {
        memmove(pFVar5 + lVar11 * 8,pFVar5 + (longlong)(iVar3 - iVar9) * 8,(longlong)iVar9 << 3);
      }
      piVar1 = &(pFVar4->Edges).ArrayNum;
      *piVar1 = *piVar1 + -1;
      *ppFVar14 = (FPBDIslandParticle *)0x0;
      *piVar12 = 0xffffffff;
      if ((int)uVar2 < (pFVar4->Edges).ArrayNum) {
        if ((int)uVar2 < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar9 = (pFVar4->Edges).ArrayNum;
        if (*(FPBDIslandParticle **)
             (*(longlong *)((pFVar4->Edges).AllocatorInstance.Data + lVar11 * 8) + 0x10) == pFVar4)
        {
          uVar8 = 0;
          if ((int)uVar2 < iVar9) {
            uVar8 = uVar10;
          }
          if (uVar8 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          *(uint *)(*(longlong *)((pFVar4->Edges).AllocatorInstance.Data + lVar11 * 8) + 0x28) =
               uVar2;
        }
        else {
          uVar8 = 0;
          if ((int)uVar2 < iVar9) {
            uVar8 = uVar10;
          }
          if (uVar8 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if (*(FPBDIslandParticle **)
               (*(longlong *)((pFVar4->Edges).AllocatorInstance.Data + lVar11 * 8) + 0x18) == pFVar4
             ) {
            uVar8 = 0;
            if ((int)uVar2 < (pFVar4->Edges).ArrayNum) {
              uVar8 = uVar10;
            }
            if (uVar8 == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            *(uint *)(*(longlong *)((pFVar4->Edges).AllocatorInstance.Data + lVar11 * 8) + 0x2c) =
                 uVar2;
          }
        }
      }
    }
    ppFVar14 = ppFVar14 + 1;
    piVar12 = piVar12 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  return;
}

// UpdateAllParticleSleepMetrics @ 143b7d3f0

void __thiscall
Chaos::Private::FPBDIslandManager::UpdateAllParticleSleepMetrics
          (FPBDIslandManager *this,float param_1)

{
  TParticleHandleBase<double,3>_u_0 *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  TParticleHandleBase<double,3>_u_0 TVar8;
  int iStack_4c;
  undefined1 local_48 [24];
  uint uStack_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  int local_20;
  
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48,
             (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
              *)&this->Particles->ActiveDynamicMovingKinematicParticlesView);
  if ((TGeometryParticlesImp<double,3,0> *)local_48._16_8_ !=
      (TGeometryParticlesImp<double,3,0> *)0x0) {
    TVar8 = (TParticleHandleBase<double,3>_u_0)local_48._16_8_;
    uVar6 = uStack_30;
    do {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48);
      UpdateParticleSleepMetrics<Chaos::TPBDRigidParticleHandleImp<double,3,0>_>
                ((TPBDRigidParticleHandleImp<double,3,0> *)(local_48 + 0x10),(double)param_1);
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48);
      do {
        uVar3 = local_48._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_48._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          uVar6 = uVar6 + 1;
          uStack_30 = uVar6;
          if (local_24 <= (int)uVar6) {
LAB_143b7d47a:
            local_28 = local_28 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48);
            TVar8 = (TParticleHandleBase<double,3>_u_0)local_48._16_8_;
            uVar6 = uStack_30;
          }
        }
        else {
          iVar7 = local_20 + 1;
          local_20 = iVar7;
          if (*(int *)(local_48._8_8_ + 8) <= iVar7) goto LAB_143b7d47a;
          if ((iVar7 < 0) &&
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
                    (((ForAnyElementType *)uVar3)->Data + (longlong)iVar7 * 8);
          TVar8 = (TParticleHandleBase<double,3>_u_0)pTVar1->KinematicGeometryParticles;
          uVar6 = *(uint *)(pTVar1 + 1);
          if (TVar8.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
            iStack_4c = (uint)iStack_4c._1_3_ << 8;
          }
          else {
            iStack_4c = CONCAT31(iStack_4c._1_3_,(TVar8.GeometryParticles)->MParticleType);
          }
          uStack_2c = iStack_4c;
          uStack_30 = uVar6;
          local_48._16_8_ = TVar8;
        }
        if (TVar8.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
          return;
        }
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_48);
        uVar5 = 0;
        if ((int)uVar6 < *(int *)&((TVar8.GeometryParticles)->MLightWeightDisabled).field_0x10) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      } while (*(char *)((longlong)(int)uVar6 + (TVar8.KinematicGeometryParticles)->_padding_) !=
               '\0');
    } while (TVar8.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0);
  }
  return;
}

// UpdateDisable @ 143b7d5e0

void __thiscall
Chaos::Private::FPBDIslandManager::UpdateDisable
          (FPBDIslandManager *this,
          TFunctionRef<void___cdecl(Chaos::TPBDRigidParticleHandleImp<double,3,1>_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  longlong local_res8;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_28;
  
  pcVar4 = *(code **)param_1;
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  if (this->DisableCounterThreshold != 0x7fffffff) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    ProcessParticlesDisable(this,&local_28);
    pFVar6 = (this->Islands).Items.AllocatorInstance.Data;
    iVar2 = (this->Islands).Items.ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Islands).Items.ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res8);
      }
      if (pFVar6 == pFVar1) break;
      uVar3 = ((*(FPBDIsland **)pFVar6)->Flags).Bits;
      if (((uVar3 & 0x40) == 0) && ((uVar3 >> 10 & 1) == 0)) {
        ProcessIslandDisable(this,*(FPBDIsland **)pFVar6,&local_28);
      }
      pFVar6 = pFVar6 + 8;
    }
    iVar2 = local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
    FVar7.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (FVar7.Data == pFVar1) break;
      if (*(longlong *)FVar7.Data != 0) {
        local_res8 = *(longlong *)FVar7.Data;
        (*pcVar4)(uVar5,&local_res8);
      }
      FVar7.Data = FVar7.Data + 8;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateExplicitSleep @ 143b7d6f0

void __thiscall Chaos::Private::FPBDIslandManager::UpdateExplicitSleep(FPBDIslandManager *this)

{
  int iVar1;
  int iVar2;
  FPBDIsland *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  EObjectStateType EVar8;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar9;
  uint uVar10;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  
  pFVar15 = (this->Islands).Items.AllocatorInstance.Data;
  iVar1 = (this->Islands).Items.ArrayNum;
  pFVar14 = pFVar15 + (longlong)iVar1 * 8;
  local_res18 = pFVar14;
  do {
    if ((this->Islands).Items.ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar15 == pFVar14) {
      return;
    }
    pFVar3 = *(FPBDIsland **)pFVar15;
    if (((pFVar3->Flags).Bits >> 8 & 1) != 0) {
      if (((pFVar3->Flags).Bits & 4) == 0) {
LAB_143b7d85a:
        uVar12 = 0;
      }
      else {
        iVar2 = (pFVar3->Nodes).ArrayNum;
        pFVar14 = (pFVar3->Nodes).AllocatorInstance.Data;
        if ((iVar2 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar13 = pFVar14 + (longlong)iVar2 * 8;
        for (; pFVar14 != pFVar13; pFVar14 = pFVar14 + 8) {
          plVar4 = *(longlong **)pFVar14;
          pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)*plVar4;
          if (pTVar11 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143b7d805:
            bVar7 = false;
          }
          else {
            pTVar9 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (pTVar11->field_0xc != '\0') {
              pTVar9 = pTVar11;
            }
            if (pTVar9 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143b7d7d6:
              pTVar9 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
              if (pTVar11->field_0xc != '\0') {
                pTVar9 = pTVar11;
              }
              if (pTVar9 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
                pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
                if (1 < (byte)pTVar9->field_0xc) {
                  pTVar11 = pTVar9;
                }
                if (pTVar11 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
                  EVar8 = Kinematic;
                }
                else {
                  EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar11);
                }
                if (EVar8 == Sleeping) goto LAB_143b7d801;
              }
              goto LAB_143b7d805;
            }
            this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (1 < (byte)pTVar9->field_0xc) {
              this_00 = pTVar9;
            }
            if (this_00 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              EVar8 = Kinematic;
            }
            else {
              EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_00);
            }
            if (EVar8 != Dynamic) goto LAB_143b7d7d6;
LAB_143b7d801:
            bVar7 = true;
          }
          pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)*plVar4;
          if (pTVar11 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143b7d83c:
            bVar6 = false;
          }
          else {
            pTVar9 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (pTVar11->field_0xc != '\0') {
              pTVar9 = pTVar11;
            }
            if (pTVar9 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143b7d83c;
            pTVar11 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
            if (1 < (byte)pTVar9->field_0xc) {
              pTVar11 = pTVar9;
            }
            if (pTVar11 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              EVar8 = Kinematic;
            }
            else {
              EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar11);
            }
            if (EVar8 != Sleeping) goto LAB_143b7d83c;
            bVar6 = true;
          }
          if ((bVar7) && (!bVar6)) goto LAB_143b7d85a;
        }
        uVar12 = 1;
      }
      uVar10 = (pFVar3->Flags).Bits;
      if (uVar12 != (uVar10 >> 6 & 1)) {
        uVar10 = uVar10 & 0xffffffbf | uVar12 << 6;
        pFVar3->SleepCounter = 0;
        (pFVar3->Flags).Bits = uVar10;
      }
      if ((((CVars::bChaosSolverPartialIslandSleep == false) || (((byte)uVar10 & 0x28) != 0x28)) ||
          (CVars::bChaosSolverPartialWakePreIntegration == false)) || ((uVar10 & 4) == 0)) {
        PropagateIslandSleep(this,pFVar3);
        if ((*(byte *)&pFVar3->Flags & 8) == 0) {
          ResetParticleSleepCounter(this,pFVar3);
        }
      }
      else {
        if ((uVar10 & 0x40) == 0) {
          ProcessPartialIslandWake(this,pFVar3,false);
        }
        SyncConstraintSleepStateToParticles(this,pFVar3);
        ResetEdgeFlags(this,pFVar3);
        pFVar13 = (pFVar3->Nodes).AllocatorInstance.Data;
        iVar2 = (pFVar3->Nodes).ArrayNum;
        pFVar14 = pFVar13 + (longlong)iVar2 * 8;
        while( true ) {
          if ((pFVar3->Nodes).ArrayNum != iVar2) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_res10);
          }
          if (pFVar13 == pFVar14) break;
          *(uint *)(*(longlong *)pFVar13 + 0x2c) =
               *(uint *)(*(longlong *)pFVar13 + 0x2c) & 0xffffffdf;
          pFVar13 = pFVar13 + 8;
        }
      }
      (pFVar3->Flags).Bits = (pFVar3->Flags).Bits & 0xfffffeff;
      pFVar14 = local_res18;
    }
    pFVar15 = pFVar15 + 8;
  } while( true );
}

// UpdateGraphEdge @ 143b7d960

void __thiscall
Chaos::Private::FPBDIslandManager::UpdateGraphEdge
          (FPBDIslandManager *this,FPBDIslandConstraint *param_1)

{
  FPBDIslandParticle *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  
  pFVar1 = param_1->Nodes[0];
  if ((pFVar1 == (FPBDIslandParticle *)0x0) || ((*(byte *)&pFVar1->Flags & 1) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((param_1->Nodes[1] == (FPBDIslandParticle *)0x0) ||
     ((*(byte *)&param_1->Nodes[1]->Flags & 1) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((!bVar4) && (!bVar3)) {
    if ((pFVar1 != (FPBDIslandParticle *)0x0) && (pFVar1->Island != (FPBDIsland *)0x0)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Edge->Nodes[0] == nullptr) || (Edge->Nodes[0]->Island == nullptr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x5d7,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((param_1->Nodes[1] != (FPBDIslandParticle *)0x0) &&
       (param_1->Nodes[1]->Island != (FPBDIsland *)0x0)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Edge->Nodes[1] == nullptr) || (Edge->Nodes[1]->Island == nullptr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x5d8,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    RemoveEdgeFromIsland(this,param_1);
    if (param_1->Island != (FPBDIsland *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Edge->Island == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x514,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UnbindEdgeFromNodes(this,param_1);
    TPoolBackedArray<Chaos::Private::FPBDIslandConstraint,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandConstraint>_>
    ::Free(&this->Edges,param_1);
    return;
  }
  if (param_1->Island == (FPBDIsland *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Edge->Island != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x5e3,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// UpdateGraphNode @ 143b7dab0

void __thiscall
Chaos::Private::FPBDIslandManager::UpdateGraphNode
          (FPBDIslandManager *this,FPBDIslandParticle *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPBDIslandParticle *pFVar3;
  FPBDIslandParticle *pFVar4;
  FPBDIslandConstraint *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  EObjectStateType EVar9;
  bool bVar10;
  uint uVar11;
  TGeometryParticleHandleImp<double,3,1> *pTVar12;
  FPBDIsland *pFVar13;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar14;
  TGeometryParticleHandleImp<double,3,1> *pTVar15;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  FScriptContainerElement *pFVar16;
  char cVar17;
  longlong lVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  FPBDIsland *pFVar22;
  byte bVar23;
  byte bVar24;
  undefined1 local_48;
  byte local_47;
  undefined1 local_46 [2];
  uint local_44;
  uint local_40;
  
  if ((param_1 == (FPBDIslandParticle *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Node != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x56d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar11 = (param_1->Flags).Bits;
  this_01 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  uVar21 = 0;
  pTVar15 = param_1->Particle;
  bVar23 = *(byte *)&param_1->Flags & 1;
  local_40 = uVar11 >> 2 & 0xffffff01;
  uVar11 = CONCAT31((uint3)(uVar11 >> 9),(char)(uVar11 >> 1)) & 0xffffff01;
  pTVar14 = pTVar15;
  local_47 = bVar23;
  local_44 = uVar11;
  if (pTVar15 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_143b7db9d:
    bVar24 = 0;
  }
  else {
    pTVar12 = this_01;
    if (*(char *)((longlong)&pTVar15->_padding_ + 4) != '\0') {
      pTVar12 = pTVar15;
    }
    if (pTVar12 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_143b7db5c:
      pTVar12 = this_01;
      if (*(char *)((longlong)&pTVar15->_padding_ + 4) != '\0') {
        pTVar12 = pTVar15;
      }
      if (pTVar12 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pTVar15 = this_01;
        if (1 < *(byte *)((longlong)&pTVar12->_padding_ + 4)) {
          pTVar15 = pTVar12;
        }
        if (pTVar15 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          EVar9 = Kinematic;
        }
        else {
          EVar9 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                            ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar15);
          pTVar14 = param_1->Particle;
        }
        if (EVar9 == Sleeping) goto LAB_143b7db95;
      }
      goto LAB_143b7db9d;
    }
    this_00 = this_01;
    if (1 < *(byte *)((longlong)&pTVar12->_padding_ + 4)) {
      this_00 = pTVar12;
    }
    if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar9 = Kinematic;
    }
    else {
      EVar9 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      pTVar14 = param_1->Particle;
    }
    if (EVar9 != Dynamic) goto LAB_143b7db5c;
LAB_143b7db95:
    bVar24 = 1;
  }
  bVar8 = IsParticleMoving(pTVar14);
  pTVar15 = param_1->Particle;
  if (pTVar15 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar14 = this_01;
    if (*(char *)((longlong)&pTVar15->_padding_ + 4) != '\0') {
      pTVar14 = pTVar15;
    }
    if (pTVar14 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar12 = this_01;
      if (1 < *(byte *)((longlong)&pTVar14->_padding_ + 4)) {
        pTVar12 = pTVar14;
      }
      if (pTVar12 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar9 = Kinematic;
      }
      else {
        EVar9 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar12);
        pTVar15 = param_1->Particle;
      }
      if (EVar9 == Sleeping) {
        uVar20 = 1;
        goto LAB_143b7dbfd;
      }
    }
  }
  uVar20 = 0;
LAB_143b7dbfd:
  cVar19 = (char)uVar20;
  bVar10 = ParticlesIslandNeedsResim(pTVar15);
  (param_1->Flags).Bits = (param_1->Flags).Bits & 0xfffffffe;
  (param_1->Flags).Bits =
       ((uint)bVar8 * 2 | uVar20 | (uint)bVar10 << 2) * 2 |
       (uint)bVar24 | (param_1->Flags).Bits & 0xfffffff1;
  UpdateIslandPartialSleepAllowed(this,param_1->Island,param_1->Particle);
  pFVar13 = param_1->Island;
  if (1 < *(byte *)((longlong)&param_1->Particle->_padding_ + 4)) {
    this_01 = param_1->Particle;
  }
  if ((pFVar13 != (FPBDIsland *)0x0) && (this_01 != (TGeometryParticleHandleImp<double,3,1> *)0x0))
  {
    if (((*(byte *)&pFVar13->Flags & 0x10) != 0) ||
       (EVar9 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                          ((TPBDRigidParticleHandleImp<double,3,1> *)this_01), EVar9 == Sleeping)) {
      uVar21 = 0x10;
    }
    (pFVar13->Flags).Bits = (pFVar13->Flags).Bits & 0xffffffef;
    (pFVar13->Flags).Bits = (pFVar13->Flags).Bits | uVar21;
  }
  if (bVar24 != bVar23) {
    if (bVar24 == 0) {
      RemoveNodeFromIsland(this,param_1);
    }
    else {
      UpdateGraphNodeSleepSettings(this,param_1);
      pFVar16 = (param_1->Edges).AllocatorInstance.Data;
      iVar2 = (param_1->Edges).ArrayNum;
      pFVar1 = pFVar16 + (longlong)iVar2 * 8;
      while( true ) {
        if ((param_1->Edges).ArrayNum != iVar2) {
          local_48 = 0;
          `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_48);
        }
        bVar23 = local_47;
        uVar11 = local_44;
        if (pFVar16 == pFVar1) break;
        pFVar3 = *(FPBDIslandParticle **)(*(longlong *)pFVar16 + 0x10);
        pFVar4 = *(FPBDIslandParticle **)(*(longlong *)pFVar16 + 0x18);
        if (pFVar3 == (FPBDIslandParticle *)0x0) {
          pFVar13 = (FPBDIsland *)0x0;
        }
        else {
          pFVar13 = pFVar3->Island;
        }
        if (pFVar4 == (FPBDIslandParticle *)0x0) {
          pFVar22 = (FPBDIsland *)0x0;
        }
        else {
          pFVar22 = pFVar4->Island;
        }
        if (pFVar13 == (FPBDIsland *)0x0) {
          if (pFVar22 == (FPBDIsland *)0x0) {
            pFVar13 = CreateIsland(this);
            AddNodeToIsland(this,pFVar3,pFVar13);
            AddNodeToIsland(this,pFVar4,pFVar13);
            goto LAB_143b7dd63;
          }
          AddNodeToIsland(this,pFVar3,pFVar22);
          pFVar16 = pFVar16 + 8;
        }
        else if (pFVar13 == pFVar22) {
LAB_143b7dd63:
          pFVar16 = pFVar16 + 8;
        }
        else if (pFVar22 == (FPBDIsland *)0x0) {
          AddNodeToIsland(this,pFVar4,pFVar13);
          pFVar16 = pFVar16 + 8;
        }
        else {
          MergeIslands(this,pFVar13,pFVar22);
          pFVar16 = pFVar16 + 8;
        }
      }
    }
    uVar21 = (param_1->Edges).ArrayNum - 1;
    if (-1 < (int)uVar21) {
      lVar18 = (longlong)(int)uVar21 * 8;
      do {
        uVar11 = 0;
        if ((int)uVar21 < (param_1->Edges).ArrayNum) {
          uVar11 = ~uVar21 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = *(FPBDIslandConstraint **)((param_1->Edges).AllocatorInstance.Data + lVar18);
        pFVar3 = pFVar5->Nodes[0];
        if ((pFVar3 == (FPBDIslandParticle *)0x0) || ((*(byte *)&pFVar3->Flags & 1) == 0)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if ((pFVar5->Nodes[1] == (FPBDIslandParticle *)0x0) ||
           ((*(byte *)&pFVar5->Nodes[1]->Flags & 1) == 0)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if ((bVar10) || (bVar7)) {
          if ((pFVar5->Island == (FPBDIsland *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Edge->Island != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                                  ,0x5e3,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else {
          if (((pFVar3 != (FPBDIslandParticle *)0x0) && (pFVar3->Island != (FPBDIsland *)0x0)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Edge->Nodes[0] == nullptr) || (Edge->Nodes[0]->Island == nullptr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                                  ,0x5d7,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (((pFVar5->Nodes[1] != (FPBDIslandParticle *)0x0) &&
              (pFVar5->Nodes[1]->Island != (FPBDIsland *)0x0)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Edge->Nodes[1] == nullptr) || (Edge->Nodes[1]->Island == nullptr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                                  ,0x5d8,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          RemoveEdgeFromIsland(this,pFVar5);
          if ((pFVar5->Island != (FPBDIsland *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Edge->Island == nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                                  ,0x514,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          UnbindEdgeFromNodes(this,pFVar5);
          TPoolBackedArray<Chaos::Private::FPBDIslandConstraint,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandConstraint>_>
          ::Free(&this->Edges,pFVar5);
        }
        lVar18 = lVar18 + -8;
        uVar21 = uVar21 - 1;
        uVar11 = local_44;
      } while (-1 < (int)uVar21);
    }
  }
  uVar21 = 0;
  if (bVar24 == 0) {
    if (bVar8) {
      pFVar16 = (param_1->Edges).AllocatorInstance.Data;
      iVar2 = (param_1->Edges).ArrayNum;
      pFVar1 = pFVar16 + (longlong)iVar2 * 8;
      while( true ) {
        if ((param_1->Edges).ArrayNum != iVar2) {
          `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_46);
        }
        if (pFVar16 == pFVar1) break;
        lVar18 = *(longlong *)(*(longlong *)pFVar16 + 8);
        if (lVar18 != 0) {
          *(uint *)(lVar18 + 0x94) = *(uint *)(lVar18 + 0x94) & 0xfffffffb | 0x100;
        }
        pFVar16 = pFVar16 + 8;
      }
    }
  }
  else {
    cVar17 = (char)uVar11;
    if (((bVar23 == 0) || (cVar19 != cVar17)) || (bVar8)) {
      if (CVars::bChaosSolverPartialIslandSleep != false) {
        if (CVars::bChaosSolverWakeOnParticleStateChanged != false) {
          if (((bVar23 == 0) && ((char)local_40 == '\0')) && (cVar19 == '\0')) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          if ((cVar17 == '\0') || (cVar19 != '\0')) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          if ((bVar8) || (bVar10)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          pFVar13 = param_1->Island;
          if (pFVar13 == (FPBDIsland *)0x0) {
            return;
          }
          if ((((pFVar13->Flags).Bits & 4) != 0) && (bVar8)) {
            uVar21 = 4;
          }
          (pFVar13->Flags).Bits = (pFVar13->Flags).Bits & 0xfffffffb | 0x100 | uVar21;
          return;
        }
        if ((*(byte *)&param_1->Flags & 0x10) == 0) {
          if (((bVar23 == 0) && ((char)local_40 == '\0')) && (cVar19 == '\0')) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          if ((cVar17 == '\0') || (cVar19 != '\0')) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          if ((bVar8) || (bVar10)) {
            uVar21 = 0x10;
          }
          (param_1->Flags).Bits = (param_1->Flags).Bits & 0xffffffef | uVar21;
        }
      }
      pFVar13 = param_1->Island;
      if (pFVar13 != (FPBDIsland *)0x0) {
        (pFVar13->Flags).Bits =
             (pFVar13->Flags).Bits & 0xfffffffb | 0x100 | (pFVar13->Flags).Bits & 4;
      }
    }
  }
  return;
}

// UpdateGraphNodeSleepSettings @ 143b7e0b0

void __thiscall
Chaos::Private::FPBDIslandManager::UpdateGraphNodeSleepSettings
          (FPBDIslandManager *this,FPBDIslandParticle *param_1)

{
  THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *pTVar1;
  TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
  *pTVar2;
  TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  ESleepType EVar6;
  FChaosPhysicsMaterial *pFVar7;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  float fVar8;
  float fVar9;
  float local_res10 [2];
  float local_res18 [2];
  int local_res20 [2];
  float local_58;
  float local_54 [11];
  
  if (param_1 == (FPBDIslandParticle *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Node != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x555,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((*(byte *)&param_1->Flags & 1) != 0) {
    GetIslandParticleSleepThresholds
              (param_1->Particle,this->PhysicsMaterials,this->PerParticlePhysicsMaterials,
               this->SimMaterials,local_res10,local_res18,local_res20,&local_58,local_54);
    fVar8 = 0.0;
    pTVar1 = this->SimMaterials;
    fVar9 = 0.0;
    pTVar2 = this->PerParticlePhysicsMaterials;
    pTVar3 = this->PhysicsMaterials;
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&param_1->Particle->_padding_ + 4)) {
      this_00 = param_1->Particle;
    }
    if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar6 = TPBDRigidParticleHandleImp<double,3,1>::SleepType
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      if (EVar6 != NeverSleep) {
        pFVar7 = GetFirstPhysicsMaterial(this_00,pTVar3,pTVar2,pTVar1);
        if (pFVar7 != (FChaosPhysicsMaterial *)0x0) {
          fVar8 = (float)pFVar7->DisabledLinearThreshold;
          fVar9 = (float)pFVar7->DisabledAngularThreshold;
        }
      }
    }
    param_1->SleepCounterThreshold = local_res20[0];
    param_1->SleepLinearThresholdSq = local_res10[0] * local_res10[0];
    param_1->SleepAngularThresholdSq = local_res18[0] * local_res18[0];
    param_1->DisableLinearThresholdSq = fVar8 * fVar8;
    param_1->DisableAngularThresholdSq = fVar9 * fVar9;
    param_1->WakeLinearThresholdSq = local_58 * local_58;
    param_1->WakeAngularThresholdSq = local_54[0] * local_54[0];
  }
  return;
}

// UpdateIslandHasSleepingNode @ 143b7e250

void __thiscall
Chaos::Private::FPBDIslandManager::UpdateIslandHasSleepingNode
          (FPBDIslandManager *this,FPBDIsland *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2)

{
  EObjectStateType EVar1;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  uint uVar2;
  
  if (param_1 != (FPBDIsland *)0x0) {
    uVar2 = 0;
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
      this_00 = param_2;
    }
    if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if (((*(byte *)&param_1->Flags & 0x10) != 0) ||
         (EVar1 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                            ((TPBDRigidParticleHandleImp<double,3,1> *)this_00), EVar1 == Sleeping))
      {
        uVar2 = 0x10;
      }
      (param_1->Flags).Bits = (param_1->Flags).Bits & 0xffffffef;
      (param_1->Flags).Bits = (param_1->Flags).Bits | uVar2;
    }
  }
  return;
}

// UpdateIslandPartialSleepAllowed @ 143b7e2b0

void __thiscall
Chaos::Private::FPBDIslandManager::UpdateIslandPartialSleepAllowed
          (FPBDIslandManager *this,FPBDIsland *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2)

{
  FFlags *pFVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  uint uVar8;
  
  if (param_1 != (FPBDIsland *)0x0) {
    uVar8 = 0;
    pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&param_2->_padding_ + 4)) {
      pTVar7 = param_2;
    }
    if (pTVar7 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar1 = &param_1->Flags;
      if ((*(byte *)pFVar1 & 8) != 0) {
        uVar2 = (uint)pTVar7->_padding_;
        lVar3 = pTVar7->_padding_;
        uVar6 = uVar8;
        if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
          uVar6 = ~uVar2 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(ushort *)(*(longlong *)(lVar3 + 0x2d8) + 8 + (longlong)(int)uVar2 * 0x10) >> 10 & 1)
            != 0) {
          uVar8 = 8;
        }
      }
      pFVar1->Bits = pFVar1->Bits & 0xfffffff7 | uVar8;
    }
  }
  return;
}

// UpdateIslands @ 143b7e3b0

void __thiscall Chaos::Private::FPBDIslandManager::UpdateIslands(FPBDIslandManager *this)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  byte bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  
  ProcessMerges(this);
  ProcessSplits(this);
  pFVar9 = (this->Islands).Items.AllocatorInstance.Data;
  iVar2 = (this->Islands).Items.ArrayNum;
  pFVar6 = pFVar9 + (longlong)iVar2 * 8;
  local_res10 = pFVar6;
  do {
    if ((this->Islands).Items.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar6) {
      AssignLevels(this);
      FinalizeIslands(this);
      return;
    }
    plVar3 = *(longlong **)pFVar9;
    if ((*(uint *)((longlong)plVar3 + 0x94) >> 8 & 1) != 0) {
      uVar8 = *(uint *)((longlong)plVar3 + 0x94) >> 2;
      bVar7 = (byte)uVar8 & 1;
      if ((uVar8 & 1) != 0) {
        plVar5 = (longlong *)*plVar3;
        lVar4 = plVar3[1];
        plVar1 = plVar5 + (int)lVar4;
        while( true ) {
          if ((int)plVar3[1] != (int)lVar4) {
            `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_res8);
          }
          pFVar6 = local_res10;
          if (plVar5 == plVar1) goto LAB_143b7e45e;
          if ((*(byte *)(*plVar5 + 0x2c) & 2) == 0) break;
          bVar7 = 1;
          plVar5 = plVar5 + 1;
        }
        bVar7 = 0;
      }
LAB_143b7e45e:
      if ((uint)bVar7 != (*(uint *)((longlong)plVar3 + 0x94) >> 6 & 1)) {
        *(undefined4 *)((longlong)plVar3 + 0x84) = 0;
        *(uint *)((longlong)plVar3 + 0x94) =
             (uint)bVar7 << 6 | *(uint *)((longlong)plVar3 + 0x94) & 0xffffffbf;
      }
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// UpdateParticleMaterial @ 143b7e4c0

void __thiscall
Chaos::Private::FPBDIslandManager::UpdateParticleMaterial
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FPBDIslandParticle *pFVar1;
  
  if (((param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
      (pFVar1 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1),
      pFVar1 != (FPBDIslandParticle *)0x0)) && ((*(byte *)&pFVar1->Flags & 1) != 0)) {
    UpdateGraphNodeSleepSettings(this,pFVar1);
  }
  return;
}

// UpdateParticles @ 143b7e500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::Private::FPBDIslandManager::UpdateParticles(FPBDIslandManager *this)

{
  FScriptContainerElement *pFVar1;
  FPBDIslandParticle *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_IslandManager_UpdateParticles> FVar10;
  int iVar11;
  FNameEntryId FVar12;
  FName FVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FName local_res20;
  
  uVar17 = 0;
  uVar18 = 0;
  FVar10 = StatPtr_STAT_IslandManager_UpdateParticles;
  if (StatPtr_STAT_IslandManager_UpdateParticles ==
      (FThreadSafeStaticStat<FStat_STAT_IslandManager_UpdateParticles>)0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_IslandManager_UpdateParticles");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_IslandManager_UpdateParticles>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IslandManager_UpdateParticles,
                        *pFVar9,L"IslandManager::UpdateParticles","STATGROUP_ChaosIslands",
                        "STATCAT_Advanced",L"ChaosIslands",true,true,ST_int64,true,false,MCR_Invalid
                       );
  }
  FVar13 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar15 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar12.Value;
        local_res18.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                   ,0x3da);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar12.Value;
      uStackX_c = uVar15;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_143b7e653;
    }
  }
  bVar5 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_143b7e653:
  pFVar16 = (this->Islands).Items.AllocatorInstance.Data;
  iVar11 = (this->Islands).Items.ArrayNum;
  pFVar1 = pFVar16 + (longlong)iVar11 * 8;
  while( true ) {
    if ((this->Islands).Items.ArrayNum != iVar11) {
      local_res8 = local_res8 & 0xffffff00;
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar16 == pFVar1) break;
    *(uint *)(*(longlong *)pFVar16 + 0x94) = *(uint *)(*(longlong *)pFVar16 + 0x94) | 8;
    pFVar16 = pFVar16 + 8;
  }
  iVar11 = (this->Nodes).Items.ArrayNum;
  uVar19 = uVar17;
  if (0 < iVar11) {
    do {
      uVar15 = (uint)uVar17;
      if ((int)uVar15 < iVar11 + -1) {
        uVar8 = uVar18;
        if ((int)(uVar15 + 1) < iVar11) {
          uVar8 = ~(uVar15 + 1) >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar8 = uVar18;
      if ((int)uVar15 < (this->Nodes).Items.ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UpdateGraphNode(this,*(FPBDIslandParticle **)
                            ((this->Nodes).Items.AllocatorInstance.Data + uVar19));
      iVar11 = (this->Nodes).Items.ArrayNum;
      uVar17 = (ulonglong)(uVar15 + 1);
      uVar19 = uVar19 + 8;
    } while ((int)(uVar15 + 1) < iVar11);
  }
  uVar15 = iVar11 - 1;
  if (-1 < (int)uVar15) {
    lVar14 = (longlong)(int)uVar15 * 8;
    do {
      uVar8 = uVar18;
      if ((int)uVar15 < (this->Nodes).Items.ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = *(FPBDIslandParticle **)((this->Nodes).Items.AllocatorInstance.Data + lVar14);
      if (((pFVar2->Edges).ArrayNum == 0) && (pFVar2->Island == (FPBDIsland *)0x0)) {
        TPoolBackedArray<Chaos::Private::FPBDIslandParticle,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIslandParticle>_>
        ::Free(&this->Nodes,pFVar2);
      }
      lVar14 = lVar14 + -8;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return;
}

// UpdateSleep @ 143b7e840

void __thiscall
Chaos::Private::FPBDIslandManager::UpdateSleep(FPBDIslandManager *this,double param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPBDIsland *pFVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  undefined1 local_res10 [8];
  
  fVar6 = (float)param_1;
  if (!CVars::bChaosSolverSleepEnabled) {
    UpdateAllParticleSleepMetrics(this,fVar6);
    return;
  }
  ProcessParticlesSleep(this,fVar6);
  pFVar5 = (this->Islands).Items.AllocatorInstance.Data;
  iVar2 = (this->Islands).Items.ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  do {
    if ((this->Islands).Items.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar1) {
      return;
    }
    pFVar3 = *(FPBDIsland **)pFVar5;
    if (((pFVar3->Flags).Bits & 0x444) == 4) {
      if ((CVars::bChaosSolverPartialIslandSleep == false) ||
         (((byte)(pFVar3->Flags).Bits & 0x28) != 0x28)) {
        ProcessIslandSleep(this,pFVar3,fVar6);
        if ((*(byte *)&pFVar3->Flags & 0x40) != 0) {
          PropagateIslandSleep(this,pFVar3);
        }
      }
      else {
        SleepNonMovingParticles(this,pFVar3,fVar6);
        if (CVars::bChaosSolverPartialSleepCollisionConstraintsOnly == false) {
LAB_143b7e91b:
          SleepConstraintsBetweenNonAwakeParticles(this,pFVar3);
        }
        else {
          bVar4 = RewakeConstraintsNotSupportingPartialSleep(this,pFVar3);
          if (!bVar4) goto LAB_143b7e91b;
          SyncConstraintSleepStateToParticles(this,pFVar3);
        }
        if (0.0 < CVars::ChaosSolverPostStepWakeThreshold) {
          PostStepPartialWake(this,pFVar3);
        }
        if (CVars::bChaosSolverValidateConstraintSleepState != false) {
          ValidateConstraintSleepState(this,pFVar3);
        }
      }
    }
    (pFVar3->Flags).Bits = (pFVar3->Flags).Bits & 0xffffffef | 4;
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// Validate @ 143b7ec20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Chaos::Private::FPBDIslandManager::Validate(FPBDIslandManager *this)

{
  FPBDIsland *pFVar1;
  undefined8 *puVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  EObjectStateType EVar8;
  char cVar9;
  byte bVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_IslandManager_Validate> FVar15;
  char *pcVar16;
  FPBDIsland *pFVar17;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar18;
  uint uVar19;
  atomic<unsigned_char> *paVar20;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar21;
  ulonglong uVar22;
  FName FVar23;
  int iVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong lVar27;
  ForAnyElementType FVar28;
  longlong *plVar29;
  FScriptContainerElement *pFVar30;
  longlong *plVar31;
  FScriptContainerElement *pFVar32;
  bool bVar33;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined1 local_e2;
  undefined1 local_e1;
  uint local_e0;
  longlong *local_d8;
  ForAnyElementType local_d0;
  uint local_c8;
  int local_c4;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  FColor_u_0 local_b0;
  uint local_ac;
  uint local_a8;
  longlong *local_a0;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FName local_88;
  FName local_80;
  FScriptContainerElement *local_70;
  longlong *local_68;
  FScriptContainerElement *local_60;
  FName local_58 [3];
  
  FVar15 = StatPtr_STAT_IslandManager_Validate;
  if (StatPtr_STAT_IslandManager_Validate ==
      (FThreadSafeStaticStat<FStat_STAT_IslandManager_Validate>)0x0) {
    pFVar14 = ::FName::FName(local_58,"STAT_IslandManager_Validate");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_IslandManager_Validate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IslandManager_Validate,*pFVar14,
                        L"IslandManager::Validate","STATGROUP_ChaosIslands","STATCAT_Advanced",
                        L"ChaosIslands",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar15;
  bVar6 = false;
  bVar5 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar11 = false;
  bVar7 = false;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_143b7ed6a:
    bVar6 = bVar11;
    bVar5 = bVar7;
    bVar7 = false;
    FVar23 = local_80;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b0._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar11 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_88.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_88,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                   ,0xf0b);
        bVar6 = true;
        bVar5 = true;
        bVar11 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143b7ed6a;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar7 = true;
  }
  if (CVars::bChaosConstraintGraphValidate == false) {
LAB_143b7f82d:
    bVar11 = true;
    goto LAB_143b7f830;
  }
  if ((this->MergeSets).Items.ArrayNum == 0) {
    pFVar30 = (this->Nodes).Items.AllocatorInstance.Data;
    iVar24 = (this->Nodes).Items.ArrayNum;
    local_b8 = pFVar30 + (longlong)iVar24 * 8;
    do {
      pFVar32 = local_b8;
      if ((this->Nodes).Items.ArrayNum != iVar24) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar30 == pFVar32) {
        pFVar32 = (this->Edges).Items.AllocatorInstance.Data;
        iVar24 = (this->Edges).Items.ArrayNum;
        pFVar30 = pFVar32 + (longlong)iVar24 * 8;
        goto LAB_143b7f0c0;
      }
      plVar31 = *(longlong **)pFVar30;
      uVar19 = *(uint *)((longlong)plVar31 + 0x2c) & 1;
      if (uVar19 == 0) {
        if (plVar31[1] != 0) {
          pcVar16 = "Node->Flags.bIsDynamic || (Node->Island == nullptr)";
          iVar24 = 0xf1e;
          paVar20 = &bGEnsureHasExecuted<2900379818577104670>;
          goto LAB_143b7f7e3;
        }
      }
      else {
        if (plVar31[1] == 0) {
          pcVar16 = "!Node->Flags.bIsDynamic || (Node->Island != nullptr)";
          iVar24 = 0xf1b;
          paVar20 = &bGEnsureHasExecuted<2900379818577104667>;
          goto LAB_143b7f7e3;
        }
        if ((uVar19 != 0) && ((int)plVar31[3] < 1)) {
          pcVar16 = "!Node->Flags.bIsDynamic || (Node->Edges.Num() > 0)";
          iVar24 = 0xf23;
          paVar20 = &bGEnsureHasExecuted<2900379818577104675>;
          goto LAB_143b7f7e3;
        }
        pFVar1 = (FPBDIsland *)plVar31[1];
        if (pFVar1 != (FPBDIsland *)0x0) {
          pFVar17 = TPoolBackedArray<Chaos::Private::FPBDIsland,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIsland>_>
                    ::operator[](&this->Islands,pFVar1->ArrayIndex);
          if (pFVar17 != pFVar1) {
            pcVar16 = "Islands[Node->Island->ArrayIndex] == Node->Island";
            iVar24 = 0xf28;
            paVar20 = &bGEnsureHasExecuted<2900379818577104680>;
            goto LAB_143b7f7e3;
          }
          plVar25 = *(longlong **)plVar31[1];
          plVar29 = plVar25 + (int)((longlong *)plVar31[1])[1];
          while( true ) {
            if (plVar25 == plVar29) {
              pcVar16 = "Node->Island->Nodes.Contains(Node)";
              iVar24 = 0xf2b;
              paVar20 = &bGEnsureHasExecuted<2900379818577104683>;
              goto LAB_143b7f7e3;
            }
            if ((longlong *)*plVar25 == plVar31) break;
            plVar25 = plVar25 + 1;
          }
          uVar19 = *(uint *)(plVar31 + 5);
          plVar29 = (longlong *)plVar31[1];
          uVar13 = 0;
          if ((int)uVar19 < (int)plVar29[1]) {
            uVar13 = ~uVar19 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar4 = (code *)swi(3);
            uVar12 = (*pcVar4)();
            return (bool)uVar12;
          }
          if (*(longlong **)(*plVar29 + (longlong)(int)uVar19 * 8) != plVar31) {
            pcVar16 = "Node->Island->Nodes[Node->IslandArrayIndex] == Node";
            iVar24 = 0xf2c;
            paVar20 = &bGEnsureHasExecuted<2900379818577104684>;
            goto LAB_143b7f7e3;
          }
          if (((*(byte *)(plVar31[1] + 0x94) & 0x40) != 0) &&
             (bVar11 = TGeometryParticleHandleImp<double,3,1>::Sleeping
                                 ((TGeometryParticleHandleImp<double,3,1> *)*plVar31), !bVar11)) {
            pcVar16 = "Node->Particle->Sleeping()";
            iVar24 = 0xf31;
            paVar20 = &bGEnsureHasExecuted<2900379818577104689>;
            goto LAB_143b7f7e3;
          }
          bVar11 = TGeometryParticleHandleImp<double,3,1>::Sleeping
                             ((TGeometryParticleHandleImp<double,3,1> *)*plVar31);
          if ((uint)bVar11 != (*(uint *)((longlong)plVar31 + 0x2c) >> 1 & 1)) {
            pcVar16 = "Node->Particle->Sleeping() == Node->Flags.bIsSleeping";
            iVar24 = 0xf33;
            paVar20 = &bGEnsureHasExecuted<2900379818577104691>;
            goto LAB_143b7f7e3;
          }
        }
      }
      plVar25 = (longlong *)plVar31[2];
      lVar26 = plVar31[3];
      plVar29 = plVar25 + (int)lVar26;
      while( true ) {
        if ((int)plVar31[3] != (int)lVar26) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res20);
        }
        if (plVar25 == plVar29) break;
        lVar27 = *plVar25;
        if ((*(longlong **)(lVar27 + 0x10) != plVar31) && (*(longlong **)(lVar27 + 0x18) != plVar31)
           ) {
          pcVar16 = "(Edge->Nodes[0] == Node) || (Edge->Nodes[1] == Node)";
          iVar24 = 0xf39;
          paVar20 = &bGEnsureHasExecuted<2900379818577104697>;
          goto LAB_143b7f7e3;
        }
        if (((*(byte *)((longlong)plVar31 + 0x2c) & 1) != 0) &&
           (plVar31[1] != *(longlong *)(lVar27 + 8))) {
          pcVar16 = "Node->Island == Edge->Island";
          iVar24 = 0xf3d;
          paVar20 = &bGEnsureHasExecuted<2900379818577104701>;
          goto LAB_143b7f7e3;
        }
        plVar25 = plVar25 + 1;
      }
      pTVar21 = (TPBDRigidParticleHandleImp<double,3,1> *)*plVar31;
      if (pTVar21 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143b7efaf:
        uVar19 = 0;
      }
      else {
        pTVar18 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (pTVar21->field_0xc != '\0') {
          pTVar18 = pTVar21;
        }
        if (pTVar18 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143b7efaf;
        pTVar21 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar18->field_0xc) {
          pTVar21 = pTVar18;
        }
        if (pTVar21 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          EVar8 = Kinematic;
        }
        else {
          EVar8 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar21);
        }
        if (EVar8 != Sleeping) goto LAB_143b7efaf;
        uVar19 = 1;
      }
      if ((*(uint *)((longlong)plVar31 + 0x2c) >> 1 & 1) != uVar19) goto LAB_143b7f081;
      pFVar30 = pFVar30 + 8;
    } while( true );
  }
  pcVar16 = "MergeSets.IsEmpty()";
  iVar24 = 0xf15;
  paVar20 = &bGEnsureHasExecuted<2900379818577104661>;
LAB_143b7f7e3:
  bVar11 = UE::Assert::Private::ExecCheckImplInternal
                     (paVar20,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                      ,iVar24,pcVar16);
  if (bVar11) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
LAB_143b7f7fc:
  bVar11 = false;
LAB_143b7f830:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return bVar11;
LAB_143b7f0c0:
  if ((this->Edges).Items.ArrayNum != iVar24) {
    local_e8 = 0;
    `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*_const,int,0>::operator!='::__l2
    ::<lambda_1>::operator()(&local_e8);
  }
  if (pFVar32 == pFVar30) {
    local_a8 = (this->Islands).Items.ArrayNum;
    uVar22 = (ulonglong)(int)local_a8;
    pFVar30 = (this->Islands).Items.AllocatorInstance.Data;
    local_60 = pFVar30 + uVar22 * 8;
    goto LAB_143b7f44f;
  }
  puVar2 = *(undefined8 **)pFVar32;
  lVar26 = puVar2[2];
  if (lVar26 != 0) {
    plVar29 = *(longlong **)(lVar26 + 0x10);
    plVar31 = plVar29 + *(int *)(lVar26 + 0x18);
    while( true ) {
      if (plVar29 == plVar31) {
        pcVar16 = "(Edge->Nodes[0] == nullptr) || Edge->Nodes[0]->Edges.Contains(Edge)";
        iVar24 = 0xf49;
        paVar20 = &bGEnsureHasExecuted<2900379818577104713>;
        goto LAB_143b7f7e3;
      }
      if ((undefined8 *)*plVar29 == puVar2) break;
      plVar29 = plVar29 + 1;
    }
  }
  lVar26 = puVar2[3];
  if (lVar26 != 0) {
    plVar29 = *(longlong **)(lVar26 + 0x10);
    plVar31 = plVar29 + *(int *)(lVar26 + 0x18);
    while( true ) {
      if (plVar29 == plVar31) {
        pcVar16 = "(Edge->Nodes[1] == nullptr) || Edge->Nodes[1]->Edges.Contains(Edge)";
        iVar24 = 0xf4a;
        paVar20 = &bGEnsureHasExecuted<2900379818577104714>;
        goto LAB_143b7f7e3;
      }
      if ((undefined8 *)*plVar29 == puVar2) break;
      plVar29 = plVar29 + 1;
    }
  }
  pFVar1 = (FPBDIsland *)puVar2[1];
  if (pFVar1 == (FPBDIsland *)0x0) {
    pcVar16 = "bIsInIsland";
    iVar24 = 0xf4e;
    paVar20 = &bGEnsureHasExecuted<2900379818577104718>;
    goto LAB_143b7f7e3;
  }
  pFVar17 = TPoolBackedArray<Chaos::Private::FPBDIsland,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIsland>_>
            ::operator[](&this->Islands,pFVar1->ArrayIndex);
  if (pFVar17 != pFVar1) {
    pcVar16 = "Islands[Edge->Island->ArrayIndex] == Edge->Island";
    iVar24 = 0xf53;
    paVar20 = &bGEnsureHasExecuted<2900379818577104723>;
    goto LAB_143b7f7e3;
  }
  uVar19 = *(uint *)(puVar2 + 6);
  lVar26 = puVar2[1];
  uVar13 = 0;
  if ((int)uVar19 < *(int *)(lVar26 + 0x68)) {
    uVar13 = ~uVar19 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  lVar27 = lVar26 + 0x10;
  if (*(longlong *)(lVar26 + 0x60) != 0) {
    lVar27 = *(longlong *)(lVar26 + 0x60);
  }
  uVar13 = *(uint *)((longlong)puVar2 + 0x34);
  plVar31 = (longlong *)(lVar27 + (longlong)(int)uVar19 * 0x10);
  uVar19 = 0;
  if ((int)uVar13 < (int)plVar31[1]) {
    uVar19 = ~uVar13 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  if (*(undefined8 **)(*plVar31 + (longlong)(int)uVar13 * 8) != puVar2) {
    pcVar16 = "Edge->Island->ContainerEdges[Edge->ContainerIndex][Edge->IslandArrayIndex] == Edge";
    iVar24 = 0xf56;
    paVar20 = &bGEnsureHasExecuted<2900379818577104726>;
    goto LAB_143b7f7e3;
  }
  if ((((CVars::bChaosSolverPartialIslandSleep == false) ||
       (((byte)*(undefined4 *)(puVar2[1] + 0x94) & 0x28) != 0x28)) &&
      (cVar9 = (**(code **)(*(longlong *)*puVar2 + 0x30))(), cVar9 != '\0')) &&
     (((*(uint *)(puVar2[1] + 0x94) >> 6 ^ *(uint *)(puVar2 + 8)) & 1) != 0)) {
    pcVar16 = "Edge->Island->Flags.bIsSleeping == Edge->Flags.bIsSleeping";
    iVar24 = 0xf5b;
    paVar20 = &bGEnsureHasExecuted<2900379818577104731>;
    goto LAB_143b7f7e3;
  }
  lVar26 = puVar2[2];
  if ((*(byte *)(puVar2 + 8) & 1) == 0) {
    if (((lVar26 == 0) || ((~(*(uint *)(lVar26 + 0x2c) >> 1) & 1) == 0)) &&
       ((puVar2[3] == 0 || ((~(*(uint *)(puVar2[3] + 0x2c) >> 1) & 1) == 0)))) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (((lVar26 == 0) || ((*(byte *)(lVar26 + 0x2c) & 4) == 0)) &&
       ((puVar2[3] == 0 || ((*(byte *)(puVar2[3] + 0x2c) & 4) == 0)))) {
      bVar33 = false;
    }
    else {
      bVar33 = true;
    }
    if ((!bVar11) && (!bVar33)) {
      pcVar16 = "bIsConnectedToNonSleeping || bIsConnectedToMovingKinematic";
      iVar24 = 0xf6b;
      paVar20 = &bGEnsureHasExecuted<2900379818577104747>;
      goto LAB_143b7f7e3;
    }
  }
  else {
    if (lVar26 == 0) {
      bVar11 = true;
    }
    else {
      bVar11 = ((byte)*(undefined4 *)(lVar26 + 0x2c) & 6) != 4;
    }
    if (puVar2[3] == 0) {
      bVar33 = true;
    }
    else {
      bVar33 = ((byte)*(undefined4 *)(puVar2[3] + 0x2c) & 6) != 4;
    }
    if ((!bVar11) || (!bVar33)) {
      pcVar16 = "bIsNode0NotMoving && bIsNode1NotMoving";
      iVar24 = 0xf64;
      paVar20 = &bGEnsureHasExecuted<2900379818577104740>;
      goto LAB_143b7f7e3;
    }
  }
  cVar9 = (**(code **)(*(longlong *)*puVar2 + 0x30))();
  if ((cVar9 != '\0') &&
     (bVar10 = (**(code **)(*(longlong *)*puVar2 + 0x40))(),
     (*(uint *)(puVar2 + 8) & 1) != (uint)bVar10)) {
    pcVar16 = "Edge->Flags.bIsSleeping == Edge->Constraint->IsSleeping()";
    iVar24 = 0xf72;
    paVar20 = &bGEnsureHasExecuted<2900379818577104754>;
    goto LAB_143b7f7e3;
  }
  if ((*(uint *)(puVar2 + 8) & 2) != 0) {
    pcVar16 = "!Edge->Flags.bIsNew";
    iVar24 = 0xf76;
    paVar20 = &bGEnsureHasExecuted<2900379818577104758>;
    goto LAB_143b7f7e3;
  }
  if ((*(uint *)(puVar2 + 8) & 4) != 0) goto LAB_143b7f3b9;
  pFVar32 = pFVar32 + 8;
  goto LAB_143b7f0c0;
LAB_143b7f44f:
  pFVar32 = local_60;
  local_b8 = pFVar30;
  if ((this->Islands).Items.ArrayNum != (int)uVar22) {
    local_e7 = 0;
    `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*_const,int,0>::operator!='::__l2::
    <lambda_1>::operator()(&local_e7);
  }
  if (pFVar30 == pFVar32) goto LAB_143b7f82d;
  plVar31 = *(longlong **)pFVar30;
  local_d8 = plVar31;
  if (plVar31[0xe] != 0) {
    pcVar16 = "Island->MergeSet == nullptr";
    iVar24 = 0xf7e;
    paVar20 = &bGEnsureHasExecuted<2900379818577104766>;
    goto LAB_143b7f7e3;
  }
  if ((*(uint *)((longlong)plVar31 + 0x94) & 0x100) != 0) {
    pcVar16 = "Island->Flags.bCheckSleep == false";
    iVar24 = 0xf81;
    paVar20 = &bGEnsureHasExecuted<2900379818577104769>;
    goto LAB_143b7f7e3;
  }
  local_e0 = *(uint *)(plVar31 + 1);
  uVar22 = (ulonglong)(int)local_e0;
  pFVar30 = (FScriptContainerElement *)*plVar31;
  local_c0 = pFVar30 + uVar22 * 8;
  while( true ) {
    pFVar32 = local_c0;
    if ((int)plVar31[1] != (int)uVar22) {
      local_e6 = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_e6);
      plVar31 = local_d8;
    }
    if (pFVar30 == pFVar32) break;
    plVar25 = (longlong *)*plVar31;
    iVar24 = 0;
    lVar27 = plVar31[1];
    lVar26 = *(longlong *)pFVar30;
    plVar29 = plVar25 + (int)lVar27;
    while( true ) {
      if ((int)plVar31[1] != (int)lVar27) {
        local_e5 = 0;
        `TCheckedPointerIterator<Chaos::Private::FPBDIslandParticle_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_e5);
        plVar31 = local_d8;
      }
      if (plVar25 == plVar29) break;
      if (lVar26 == *plVar25) {
        iVar24 = iVar24 + 1;
      }
      plVar25 = plVar25 + 1;
    }
    if (iVar24 != 1) {
      pcVar16 = "Count == 1";
      iVar24 = 0xf8e;
      paVar20 = &bGEnsureHasExecuted<2900379818577104782>;
      goto LAB_143b7f7e3;
    }
    uVar22 = (ulonglong)local_e0;
    pFVar30 = pFVar30 + 8;
  }
  local_e0 = *(uint *)(plVar31 + 0xd);
  local_a0 = plVar31 + 2;
  if ((longlong *)plVar31[0xc] != (longlong *)0x0) {
    local_a0 = (longlong *)plVar31[0xc];
  }
  local_68 = local_a0 + (longlong)(int)local_e0 * 2;
  while( true ) {
    plVar25 = local_68;
    plVar29 = local_a0;
    if (*(uint *)(plVar31 + 0xd) != local_e0) {
      local_e4 = 0;
      `TCheckedPointerIterator<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_e4);
      plVar31 = local_d8;
    }
    if (plVar29 == plVar25) break;
    local_c8 = *(uint *)(plVar29 + 1);
    lVar26 = (longlong)(int)local_c8;
    pvVar3 = (void *)*plVar29;
    local_d0.Data = (FScriptContainerElement *)0x0;
    if (local_c8 == 0) {
      local_c4 = 0;
      local_ac = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_c8,0,&local_d0,local_c8,&local_c4);
      memcpy(local_d0.Data,pvVar3,lVar26 << 3);
      local_ac = local_c8;
    }
    uVar22 = (ulonglong)(int)local_ac;
    local_70 = local_d0.Data + uVar22 * 8;
    FVar28.Data = local_d0.Data;
    uVar19 = local_ac;
    while( true ) {
      pFVar30 = local_70;
      local_c0 = FVar28.Data;
      uVar13 = uVar19;
      if (uVar19 != (uint)uVar22) {
        local_e3 = 0;
        `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_e3);
        uVar13 = local_c8;
      }
      if (FVar28.Data == pFVar30) break;
      lVar26 = *(longlong *)FVar28.Data;
      iVar24 = 0;
      pFVar30 = local_d0.Data + (longlong)(int)uVar13 * 8;
      FVar28.Data = local_d0.Data;
      uVar19 = uVar13;
      while( true ) {
        if (uVar19 != uVar13) {
          local_e2 = 0;
          `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_e2);
          uVar19 = local_c8;
        }
        if (FVar28.Data == pFVar30) break;
        if (lVar26 == *(longlong *)FVar28.Data) {
          iVar24 = iVar24 + 1;
        }
        FVar28.Data = FVar28.Data + 8;
      }
      if (iVar24 != 1) {
        bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<2900379818577104796>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                            ,0xf9c,"Count == 1");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          uVar12 = (*pcVar4)();
          return (bool)uVar12;
        }
        if (local_d0.Data == (FScriptContainerElement *)0x0) goto LAB_143b7f7fc;
        FMemory::Free(local_d0.Data);
        bVar11 = false;
        goto LAB_143b7f830;
      }
      FVar28.Data = local_c0 + 8;
      uVar22 = (ulonglong)local_ac;
    }
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
    local_a0 = local_a0 + 2;
    plVar31 = local_d8;
  }
  plVar29 = plVar31 + 2;
  lVar26 = plVar31[0xd];
  iVar24 = 0;
  if ((longlong *)plVar31[0xc] != (longlong *)0x0) {
    plVar29 = (longlong *)plVar31[0xc];
  }
  plVar25 = plVar29 + (longlong)(int)lVar26 * 2;
  while( true ) {
    if ((int)plVar31[0xd] != (int)lVar26) {
      local_e1 = 0;
      `TCheckedPointerIterator<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_e1);
      plVar31 = local_d8;
    }
    if (plVar29 == plVar25) break;
    local_90 = (int)plVar29[1];
    lVar27 = (longlong)local_90;
    pvVar3 = (void *)*plVar29;
    local_98.Data = (FScriptContainerElement *)0x0;
    if (local_90 == 0) {
      local_8c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_90,0,&local_98,local_90,&local_8c);
      memcpy(local_98.Data,pvVar3,lVar27 << 3);
    }
    iVar24 = iVar24 + local_90;
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    plVar29 = plVar29 + 2;
    plVar31 = local_d8;
  }
  if (iVar24 != (int)plVar31[0x10]) goto LAB_143b7f7cf;
  uVar22 = (ulonglong)local_a8;
  pFVar30 = local_b8 + 8;
  goto LAB_143b7f44f;
LAB_143b7f7cf:
  pcVar16 = "NumIslandEdges == Island->NumEdges";
  iVar24 = 0xfa6;
  paVar20 = &bGEnsureHasExecuted<2900379818577104806>;
  goto LAB_143b7f7e3;
LAB_143b7f3b9:
  pcVar16 = "!Edge->Flags.bWasProcessed";
  iVar24 = 0xf77;
  paVar20 = &bGEnsureHasExecuted<2900379818577104759>;
  goto LAB_143b7f7e3;
LAB_143b7f081:
  pcVar16 = "Node->Flags.bIsSleeping == IsParticleSleeping(Node->Particle)";
  iVar24 = 0xf42;
  paVar20 = &bGEnsureHasExecuted<2900379818577104706>;
  goto LAB_143b7f7e3;
}

// ValidateConstraintSleepState @ 143b7f8a0

void __thiscall
Chaos::Private::FPBDIslandManager::ValidateConstraintSleepState
          (FPBDIslandManager *this,FPBDIsland *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  EObjectStateType EVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  byte bVar17;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar18;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar19;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar20;
  ulonglong uVar21;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar22
  ;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar23
  ;
  longlong *plVar24;
  longlong *plVar25;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  FVar22 = (param_1->ContainerEdges).AllocatorInstance.SecondaryData;
  uVar1 = (param_1->ContainerEdges).ArrayNum;
  uVar21 = (ulonglong)(int)uVar1;
  if (FVar22 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                 )0x0) {
    FVar22 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
              )&param_1->ContainerEdges;
  }
  FVar23 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
            )((longlong)FVar22 + uVar21 * 0x10);
LAB_143b7f8e6:
  if ((param_1->ContainerEdges).ArrayNum != (int)uVar21) {
    local_res10[0] = 0;
    `TCheckedPointerIterator<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_const_,int,0>
    ::operator!='::__l2::<lambda_1>::operator()(local_res10);
  }
  if (FVar22 == FVar23) {
    return;
  }
  uVar2 = *(uint *)((longlong)FVar22 + 8);
  uVar21 = (ulonglong)(int)uVar2;
  plVar25 = *(longlong **)FVar22;
  plVar24 = plVar25 + uVar21;
LAB_143b7f930:
  if (*(int *)((longlong)FVar22 + 8) != (int)uVar21) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*_const,int,0>::operator!='::__l2
    ::<lambda_1>::operator()(local_res18);
  }
  if (plVar25 == plVar24) goto LAB_143b7fdf2;
  puVar3 = (undefined8 *)*plVar25;
  plVar4 = (longlong *)puVar3[2];
  plVar5 = (longlong *)puVar3[3];
  plVar6 = (longlong *)*puVar3;
  if (plVar4 == (longlong *)0x0) {
LAB_143b7fcc4:
    if (plVar5 == (longlong *)0x0) {
      if (((*(byte *)(puVar3 + 8) & 1) != 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("!IslandEdge->Flags.bIsSleeping",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                              ,0xc63,L""), bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      cVar15 = (**(code **)(*plVar6 + 0x30))(plVar6);
      if (((cVar15 != '\0') && (cVar15 = (**(code **)(*plVar6 + 0x40))(plVar6), cVar15 != '\0')) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Constraint->SupportsSleeping() || !Constraint->IsSleeping()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                              ,0xc64,L""), bVar16)) goto code_r0x000143b7fdda;
    }
    else {
      if ((((*(uint *)((longlong)plVar5 + 0x2c) >> 1 ^ *(uint *)(puVar3 + 8)) & 1) != 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IslandEdge->Flags.bIsSleeping == Node1->Flags.bIsSleeping",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                              ,0xc5e,L""), bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      cVar15 = (**(code **)(*plVar6 + 0x30))(plVar6);
      if ((cVar15 != '\0') &&
         (bVar17 = (**(code **)(*plVar6 + 0x40))(plVar6),
         (uint)bVar17 != (*(uint *)((longlong)plVar5 + 0x2c) >> 1 & 1))) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Constraint->SupportsSleeping() || Constraint->IsSleeping() == Node1->Flags.bIsSleeping"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                            ,0xc5f,L"");
        if (bVar16) goto code_r0x000143b7fdda;
        plVar25 = plVar25 + 1;
        uVar21 = (ulonglong)uVar2;
        goto LAB_143b7f930;
      }
    }
  }
  else {
    if (plVar5 == (longlong *)0x0) {
      if (plVar4 == (longlong *)0x0) goto LAB_143b7fcc4;
      if ((((*(uint *)((longlong)plVar4 + 0x2c) >> 1 ^ *(uint *)(puVar3 + 8)) & 1) != 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IslandEdge->Flags.bIsSleeping == Node0->Flags.bIsSleeping",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                              ,0xc59,L""), bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      cVar15 = (**(code **)(*plVar6 + 0x30))(plVar6);
      if ((cVar15 == '\0') ||
         (bVar17 = (**(code **)(*plVar6 + 0x40))(plVar6),
         (uint)bVar17 == (*(uint *)((longlong)plVar4 + 0x2c) >> 1 & 1))) goto LAB_143b7fddb;
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Constraint->SupportsSleeping() || Constraint->IsSleeping() == Node0->Flags.bIsSleeping"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                          ,0xc5a,L"");
      if (bVar16) goto code_r0x000143b7fdda;
      plVar25 = plVar25 + 1;
      uVar21 = (ulonglong)uVar2;
      goto LAB_143b7f930;
    }
    pTVar20 = (TPBDRigidParticleHandleImp<double,3,1> *)*plVar4;
    if (pTVar20 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143b7f9b0:
      bVar16 = false;
    }
    else {
      pTVar18 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (pTVar20->field_0xc != '\0') {
        pTVar18 = pTVar20;
      }
      if (pTVar18 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143b7f9b0;
      pTVar20 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar18->field_0xc) {
        pTVar20 = pTVar18;
      }
      if (pTVar20 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        EVar13 = Kinematic;
      }
      else {
        EVar13 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar20);
      }
      if (EVar13 != Sleeping) goto LAB_143b7f9b0;
      bVar16 = true;
    }
    pTVar20 = (TPBDRigidParticleHandleImp<double,3,1> *)*plVar5;
    if (pTVar20 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143b7f9eb:
      bVar11 = false;
    }
    else {
      pTVar18 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (pTVar20->field_0xc != '\0') {
        pTVar18 = pTVar20;
      }
      if (pTVar18 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_143b7f9eb;
      pTVar20 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar18->field_0xc) {
        pTVar20 = pTVar18;
      }
      if (pTVar20 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        EVar13 = Kinematic;
      }
      else {
        EVar13 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar20);
      }
      if (EVar13 != Sleeping) goto LAB_143b7f9eb;
      bVar11 = true;
    }
    pTVar20 = (TPBDRigidParticleHandleImp<double,3,1> *)*plVar4;
    if (pTVar20 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143b7fa51:
      bVar12 = false;
    }
    else {
      pTVar18 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (pTVar20->field_0xc != '\0') {
        pTVar18 = pTVar20;
      }
      if (pTVar18 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143b7fa21:
        pTVar18 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (pTVar20->field_0xc != '\0') {
          pTVar18 = pTVar20;
        }
        if (pTVar18 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          pTVar20 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar18->field_0xc) {
            pTVar20 = pTVar18;
          }
          if (pTVar20 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            EVar13 = Kinematic;
          }
          else {
            EVar13 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar20);
          }
          if (EVar13 == Sleeping) goto LAB_143b7fa4c;
        }
        goto LAB_143b7fa51;
      }
      pTVar19 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar18->field_0xc) {
        pTVar19 = pTVar18;
      }
      if (pTVar19 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        EVar13 = Kinematic;
      }
      else {
        EVar13 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar19);
      }
      if (EVar13 != Dynamic) goto LAB_143b7fa21;
LAB_143b7fa4c:
      bVar12 = true;
    }
    pTVar20 = (TPBDRigidParticleHandleImp<double,3,1> *)*plVar5;
    if (pTVar20 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143b7fab6:
      bVar8 = false;
    }
    else {
      pTVar18 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (pTVar20->field_0xc != '\0') {
        pTVar18 = pTVar20;
      }
      if (pTVar18 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_143b7fa87:
        pTVar18 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (pTVar20->field_0xc != '\0') {
          pTVar18 = pTVar20;
        }
        if (pTVar18 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          pTVar20 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (1 < (byte)pTVar18->field_0xc) {
            pTVar20 = pTVar18;
          }
          if (pTVar20 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            EVar13 = Kinematic;
          }
          else {
            EVar13 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar20);
          }
          if (EVar13 == Sleeping) goto LAB_143b7fab2;
        }
        goto LAB_143b7fab6;
      }
      pTVar19 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar18->field_0xc) {
        pTVar19 = pTVar18;
      }
      if (pTVar19 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        EVar13 = Kinematic;
      }
      else {
        EVar13 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar19);
      }
      if (EVar13 != Dynamic) goto LAB_143b7fa87;
LAB_143b7fab2:
      bVar8 = true;
    }
    if ((bVar16) && (bVar11)) {
      bVar14 = true;
LAB_143b7facd:
      if (bVar8) goto LAB_143b7fad5;
      bVar9 = true;
    }
    else {
      bVar14 = false;
      if (bVar16) goto LAB_143b7facd;
LAB_143b7fad5:
      bVar9 = false;
    }
    if ((!bVar11) || (bVar12)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (((bVar14) || (bVar9)) || (bVar10)) {
      if (((*(byte *)(puVar3 + 8) & 1) == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("!!IslandEdge->Flags.bIsSleeping",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                              ,0xc46,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      cVar15 = (**(code **)(*plVar6 + 0x30))();
      if (((cVar15 != '\0') && (cVar15 = (**(code **)(*plVar6 + 0x40))(), cVar15 == '\0')) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Constraint->SupportsSleeping() || Constraint->IsSleeping()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                              ,0xc47,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if ((bVar16) || (!bVar12)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if ((bVar11) || (!bVar8)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if ((!bVar16) && (!bVar11)) goto LAB_143b7fddb;
    if (((*(byte *)(puVar3 + 8) & 1) != 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("!IslandEdge->Flags.bIsSleeping",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                            ,0xc50,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    cVar15 = (**(code **)(*plVar6 + 0x30))(plVar6);
    if ((cVar15 != '\0') && (cVar15 = (**(code **)(*plVar6 + 0x40))(plVar6), cVar15 != '\0')) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Constraint->SupportsSleeping() || !Constraint->IsSleeping()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                          ,0xc51,L"");
      if (bVar16) {
code_r0x000143b7fdda:
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar25 = plVar25 + 1;
      uVar21 = (ulonglong)uVar2;
      goto LAB_143b7f930;
    }
  }
LAB_143b7fddb:
  plVar25 = plVar25 + 1;
  uVar21 = (ulonglong)uVar2;
  goto LAB_143b7f930;
LAB_143b7fdf2:
  FVar22 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
            )((longlong)FVar22 + 0x10);
  uVar21 = (ulonglong)uVar1;
  goto LAB_143b7f8e6;
}

// WakeConstraintIsland @ 143b80330

void __thiscall
Chaos::Private::FPBDIslandManager::WakeConstraintIsland
          (FPBDIslandManager *this,FConstraintHandle *param_1)

{
  FPBDIsland *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (FConstraintHandle *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Constraint != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x4ef,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1->GraphEdge != (FPBDIslandConstraint *)0x0) &&
     (pFVar1 = param_1->GraphEdge->Island, pFVar1 != (FPBDIsland *)0x0)) {
    (pFVar1->Flags).Bits = (pFVar1->Flags).Bits & 0xfffffffb | 0x100;
  }
  return;
}

// WakeNodeIslands @ 143b803a0

void __thiscall
Chaos::Private::FPBDIslandManager::WakeNodeIslands
          (FPBDIslandManager *this,FPBDIslandParticle *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPBDIsland *pFVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  if (param_1 == (FPBDIslandParticle *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Node != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x67c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((*(byte *)&param_1->Flags & 1) != 0) {
    pFVar3 = param_1->Island;
    if (pFVar3 != (FPBDIsland *)0x0) {
      (pFVar3->Flags).Bits = (pFVar3->Flags).Bits & 0xfffffffb | 0x100;
    }
    UpdateIslandPartialSleepAllowed(this,param_1->Island,param_1->Particle);
    return;
  }
  iVar2 = (param_1->Edges).ArrayNum;
  pFVar8 = (param_1->Edges).AllocatorInstance.Data;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Edges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*_const,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar1) break;
    lVar4 = *(longlong *)pFVar8;
    lVar5 = *(longlong *)(lVar4 + 8);
    if (lVar5 != 0) {
      *(uint *)(lVar5 + 0x94) = *(uint *)(lVar5 + 0x94) & 0xfffffffb | 0x100;
    }
    UpdateIslandPartialSleepAllowed(this,*(FPBDIsland **)(lVar4 + 8),param_1->Particle);
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// WakeParticleIslands @ 143b804a0

void __thiscall
Chaos::Private::FPBDIslandManager::WakeParticleIslands
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPBDIsland *pFVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  EObjectStateType EVar7;
  uint uVar8;
  FPBDIslandParticle *pFVar9;
  TGeometryParticleHandleImp<double,3,1> *pTVar10;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  undefined1 local_res10 [8];
  
  if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar6 = false;
    pFVar9 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1);
    this_01 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (pFVar9 != (FPBDIslandParticle *)0x0) {
      pTVar10 = this_01;
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        pTVar10 = param_1;
      }
      if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        EVar7 = Static;
      }
      else {
        this_00 = this_01;
        if (1 < *(byte *)((longlong)&pTVar10->_padding_ + 4)) {
          this_00 = pTVar10;
        }
        if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          EVar7 = Kinematic;
        }
        else {
          EVar7 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                            ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
        }
      }
      (pFVar9->Flags).Bits = (pFVar9->Flags).Bits & 0xfffffffd;
      pFVar3 = pFVar9->Island;
      uVar8 = 0;
      if (EVar7 == Sleeping) {
        uVar8 = 2;
      }
      (pFVar9->Flags).Bits = (pFVar9->Flags).Bits | uVar8;
      if (pFVar3 == (FPBDIsland *)0x0) {
        pFVar12 = (pFVar9->Edges).AllocatorInstance.Data;
        iVar2 = (pFVar9->Edges).ArrayNum;
        pFVar1 = pFVar12 + (longlong)iVar2 * 8;
        while( true ) {
          if ((pFVar9->Edges).ArrayNum != iVar2) {
            `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res10);
          }
          if (pFVar12 == pFVar1) break;
          lVar4 = *(longlong *)pFVar12;
          lVar5 = *(longlong *)(lVar4 + 8);
          if (lVar5 != 0) {
            *(uint *)(lVar5 + 0x94) = *(uint *)(lVar5 + 0x94) & 0xfffffffb | 0x100;
          }
          UpdateIslandPartialSleepAllowed(this,*(FPBDIsland **)(lVar4 + 8),param_1);
          pFVar12 = pFVar12 + 8;
        }
      }
      else {
        if (((CVars::bChaosSolverPartialIslandSleep != false) &&
            (((byte)(pFVar3->Flags).Bits & 0x28) == 0x28)) &&
           (CVars::bChaosSolverPartialWakePreIntegration != false)) {
          bVar6 = true;
        }
        uVar8 = (pFVar3->Flags).Bits;
        (pFVar3->Flags).Bits = uVar8 | 0x100;
        if (((uVar8 & 4) == 0) || (uVar11 = 4, !bVar6)) {
          uVar11 = 0;
        }
        (pFVar3->Flags).Bits = uVar8 & 0xfffffffb | 0x100 | uVar11;
        UpdateIslandPartialSleepAllowed(this,pFVar9->Island,param_1);
      }
    }
    if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
      this_01 = param_1;
    }
    if (this_01 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      TPBDRigidParticleHandleImp<double,3,1>::SetSleepCounter
                ((TPBDRigidParticleHandleImp<double,3,1> *)this_01,'\0');
    }
  }
  return;
}

// WakeUpParticles @ 143b80620

void __thiscall
Chaos::Private::FPBDIslandManager::WakeUpParticles
          (FPBDIslandManager *this,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1,bool param_2)

{
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar2;
  int iVar3;
  int iVar4;
  FPBDRigidsSOAs *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  FShapeInstanceProxy *this_01;
  code *pcVar6;
  EObjectStateType EVar7;
  bool bVar8;
  bool *pbVar9;
  ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_> FVar10;
  TPBDRigidParticleHandleImp<double,3,1> *this_02;
  TGeometryParticleHandleImp<double,3,1> *this_03;
  FScriptContainerElement *pFVar11;
  TGeometryParticleHandleImp<double,3,1> *pTVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *local_res10;
  char local_res18;
  undefined1 local_res20 [8];
  undefined1 local_48;
  undefined1 local_47 [15];
  
  iVar3 = param_1->ArrayNum;
  if (iVar3 != 0) {
    pFVar11 = (param_1->AllocatorInstance).Data;
    this_00 = this->Particles;
    pFVar13 = pFVar11 + (longlong)iVar3 * 8;
    local_res18 = param_2;
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        local_res10 = (FScriptContainerElement *)((ulonglong)local_res10 & 0xffffffffffffff00);
        `TCheckedPointerIterator<Chaos::TGeometryParticleHandleImp<double,3,1>_*_const,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_res10);
      }
      if (pFVar11 == pFVar13) break;
      pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)pFVar11;
      this_03 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar5->_padding_ + 4)) {
        this_03 = pTVar5;
      }
      if ((this_03 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
         ((EVar7 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                             ((TPBDRigidParticleHandleImp<double,3,1> *)this_03), EVar7 == Sleeping
          || (EVar7 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                ((TPBDRigidParticleHandleImp<double,3,1> *)this_03),
             EVar7 == Dynamic)))) {
        pbVar9 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                           ((TPBDRigidParticleHandleImp<double,3,1> *)this_03);
        if (*pbVar9 == false) {
          TPBDRigidParticles<double,3>::SetSleeping
                    ((TPBDRigidParticles<double,3> *)this_03->_padding_,(int)this_03->_padding_,
                     false);
          TPBDRigidParticles<double,3>::SetObjectState
                    ((TPBDRigidParticles<double,3> *)this_03->_padding_,(int)this_03->_padding_,
                     Dynamic);
          pTVar12 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (5 < *(byte *)((longlong)&pTVar5->_padding_ + 4)) {
            pTVar12 = pTVar5;
          }
          if (pTVar12 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            FPBDRigidsSOAs::RemoveGeometryCollectionParticle
                      (this_00,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar12);
            FPBDRigidsSOAs::InsertGeometryCollectionParticle
                      (this_00,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar12);
          }
          EVar7 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                            ((TPBDRigidParticleHandleImp<double,3,1> *)this_03);
          if ((EVar7 != Dynamic) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("PBDRigid->ObjectState() == EObjectStateType::Dynamic",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                                 ,0x260,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FPBDRigidsSOAs::AddToActiveArray
                    (this_00,(TPBDRigidParticleHandleImp<double,3,1> *)this_03);
          if (CVars::bChaosSolverCheckParticleViews != false) {
            FPBDRigidsSOAs::CheckParticleViewMaskImpl(this_00,pTVar5);
          }
        }
        else {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2590006970459095637>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                             ,0x255,"!PBDRigid->Disabled()");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
      pFVar11 = pFVar11 + 8;
    }
    FPBDRigidsSOAs::UpdateViews(this_00);
    if (local_res18 != '\0') {
      pFVar11 = (param_1->AllocatorInstance).Data;
      iVar3 = param_1->ArrayNum;
      pFVar13 = pFVar11 + (longlong)iVar3 * 8;
      while( true ) {
        if (param_1->ArrayNum != iVar3) {
          `TCheckedPointerIterator<Chaos::TGeometryParticleHandleImp<double,3,1>_*,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar11 == pFVar13) break;
        this_02 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)pFVar11)->field_0xc) {
          this_02 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar11;
        }
        if (this_02 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          TPBDRigidParticleHandleImp<double,3,1>::SetSleepCounter(this_02,'\0');
        }
        pFVar11 = pFVar11 + 8;
      }
    }
    pFVar13 = (param_1->AllocatorInstance).Data;
    iVar3 = param_1->ArrayNum;
    local_res10 = pFVar13 + (longlong)iVar3 * 8;
    while( true ) {
      pFVar11 = local_res10;
      if (param_1->ArrayNum != iVar3) {
        `TCheckedPointerIterator<Chaos::TGeometryParticleHandleImp<double,3,1>_*_const,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_48);
      }
      if (pFVar13 == pFVar11) break;
      pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)pFVar13;
      FVar10 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                )TGeometryParticlesImp<double,3,0>::ShapesArray
                           ((TGeometryParticlesImp<double,3,0> *)pTVar5->_padding_,
                            (int)pTVar5->_padding_);
      iVar4 = *(int *)((longlong)FVar10 + 0x10);
      piVar1 = (int *)((longlong)FVar10 + 0x10);
      if (*(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
            *)((longlong)FVar10 + 8) !=
          (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>)
          0x0) {
        FVar10 = *(ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                   *)((longlong)FVar10 + 8);
      }
      FVar2 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
               )((longlong)FVar10 + (longlong)iVar4 * 8);
      while( true ) {
        if (*piVar1 != iVar4) {
          `TCheckedPointerIterator<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_47);
        }
        if (FVar10 == FVar2) break;
        this_01 = *(FShapeInstanceProxy **)FVar10;
        if ((this_01->_padding_ & 3) == 0) {
          FShapeInstanceProxy::UpdateLeafWorldTransform(this_01,pTVar5);
          FVar10 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                    )((longlong)FVar10 + 8);
        }
        else {
          FShapeInstance::UpdateLeafWorldTransform((FShapeInstance *)this_01,pTVar5);
          FVar10 = (ForElementType<TUniquePtr<Chaos::FPerShapeData,TDefaultDelete<Chaos::FPerShapeData>_>_>
                    )((longlong)FVar10 + 8);
        }
      }
      pFVar13 = pFVar13 + 8;
    }
  }
  return;
}

// WasParticleTransformSetExplicitly @ 143b80970

bool __thiscall
Chaos::Private::FPBDIslandManager::WasParticleTransformSetExplicitly
          (FPBDIslandManager *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FPBDIslandParticle *pFVar1;
  
  if (((CVars::bChaosSolverPartialIslandSleep) && (CVars::bChaosSolverPartialWakePreIntegration)) &&
     (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
    pFVar1 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(param_1);
    if (((pFVar1 != (FPBDIslandParticle *)0x0) && (pFVar1->Island != (FPBDIsland *)0x0)) &&
       ((CVars::bChaosSolverPartialIslandSleep != false &&
        (((byte)(pFVar1->Island->Flags).Bits & 0x28) == 0x28)))) {
      return (bool)((byte)((pFVar1->Flags).Bits >> 6) & 1);
    }
  }
  return false;
}

// AddContainerConstraints<Chaos::FPBDNullConstraints> @ 143c7eac0

void __thiscall
Chaos::Private::FPBDIslandManager::AddContainerConstraints<Chaos::FPBDNullConstraints>
          (FPBDIslandManager *this,FPBDNullConstraints *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FConstraintHandle *pFVar3;
  FPBDIslandConstraint *pFVar4;
  longlong lVar5;
  char cVar6;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  undefined1 local_38 [16];
  
  pFVar8 = (param_1->Handles).AllocatorInstance.Data;
  iVar2 = (param_1->Handles).ArrayNum;
  lVar5 = param_1->_padding_;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
LAB_143c7eaf2:
  do {
    if ((param_1->Handles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FPBDNullConstraintHandle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pFVar3 = *(FConstraintHandle **)pFVar8;
    if (pFVar3 != (FConstraintHandle *)0x0) {
      pFVar4 = pFVar3->GraphEdge;
      cVar6 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
      if (cVar6 == '\0') {
        if (pFVar4 != (FPBDIslandConstraint *)0x0) {
          RemoveConstraint(this,pFVar3);
        }
      }
      else if (pFVar4 == (FPBDIslandConstraint *)0x0) {
        pTVar7 = (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)
                 (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,local_38);
        AddConstraint(this,(int)lVar5,pFVar3,pTVar7);
        pFVar8 = pFVar8 + 8;
        goto LAB_143c7eaf2;
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// AddContainerConstraints<Chaos::FPBDPositionConstraints> @ 143c7eb90

void __thiscall
Chaos::Private::FPBDIslandManager::AddContainerConstraints<Chaos::FPBDPositionConstraints>
          (FPBDIslandManager *this,FPBDPositionConstraints *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FConstraintHandle *pFVar3;
  FPBDIslandConstraint *pFVar4;
  longlong lVar5;
  char cVar6;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  undefined1 local_38 [16];
  
  pFVar8 = (param_1->Handles).AllocatorInstance.Data;
  iVar2 = (param_1->Handles).ArrayNum;
  lVar5 = param_1->_padding_;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
LAB_143c7ebc2:
  do {
    if ((param_1->Handles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FPBDPositionConstraintHandle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pFVar3 = *(FConstraintHandle **)pFVar8;
    if (pFVar3 != (FConstraintHandle *)0x0) {
      pFVar4 = pFVar3->GraphEdge;
      cVar6 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
      if (cVar6 == '\0') {
        if (pFVar4 != (FPBDIslandConstraint *)0x0) {
          RemoveConstraint(this,pFVar3);
        }
      }
      else if (pFVar4 == (FPBDIslandConstraint *)0x0) {
        pTVar7 = (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)
                 (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,local_38);
        AddConstraint(this,(int)lVar5,pFVar3,pTVar7);
        pFVar8 = pFVar8 + 8;
        goto LAB_143c7ebc2;
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// AddContainerConstraints<Chaos::FPBDRigidDynamicSpringConstraints> @ 143cb4270

void __thiscall
Chaos::Private::FPBDIslandManager::AddContainerConstraints<Chaos::FPBDRigidDynamicSpringConstraints>
          (FPBDIslandManager *this,FPBDRigidDynamicSpringConstraints *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FConstraintHandle *pFVar3;
  FPBDIslandConstraint *pFVar4;
  longlong lVar5;
  char cVar6;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  undefined1 local_38 [16];
  
  pFVar8 = (param_1->Handles).AllocatorInstance.Data;
  iVar2 = (param_1->Handles).ArrayNum;
  lVar5 = param_1->_padding_;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
LAB_143cb42a5:
  do {
    if ((param_1->Handles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FPBDRigidDynamicSpringConstraintHandle_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pFVar3 = *(FConstraintHandle **)pFVar8;
    if (pFVar3 != (FConstraintHandle *)0x0) {
      pFVar4 = pFVar3->GraphEdge;
      cVar6 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
      if (cVar6 == '\0') {
        if (pFVar4 != (FPBDIslandConstraint *)0x0) {
          RemoveConstraint(this,pFVar3);
        }
      }
      else if (pFVar4 == (FPBDIslandConstraint *)0x0) {
        pTVar7 = (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)
                 (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,local_38);
        AddConstraint(this,(int)lVar5,pFVar3,pTVar7);
        pFVar8 = pFVar8 + 8;
        goto LAB_143cb42a5;
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// AddContainerConstraints<Chaos::FPBDRigidSpringConstraints> @ 143cb4340

void __thiscall
Chaos::Private::FPBDIslandManager::AddContainerConstraints<Chaos::FPBDRigidSpringConstraints>
          (FPBDIslandManager *this,FPBDRigidSpringConstraints *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FConstraintHandle *pFVar3;
  FPBDIslandConstraint *pFVar4;
  longlong lVar5;
  char cVar6;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  undefined1 local_38 [16];
  
  pFVar8 = (param_1->Handles).AllocatorInstance.Data;
  iVar2 = (param_1->Handles).ArrayNum;
  lVar5 = param_1->_padding_;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
LAB_143cb4372:
  do {
    if ((param_1->Handles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FPBDRigidSpringConstraintHandle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pFVar3 = *(FConstraintHandle **)pFVar8;
    if (pFVar3 != (FConstraintHandle *)0x0) {
      pFVar4 = pFVar3->GraphEdge;
      cVar6 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
      if (cVar6 == '\0') {
        if (pFVar4 != (FPBDIslandConstraint *)0x0) {
          RemoveConstraint(this,pFVar3);
        }
      }
      else if (pFVar4 == (FPBDIslandConstraint *)0x0) {
        pTVar7 = (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)
                 (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,local_38);
        AddConstraint(this,(int)lVar5,pFVar3,pTVar7);
        pFVar8 = pFVar8 + 8;
        goto LAB_143cb4372;
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// GetIsland @ 143d55b30

FPBDIsland * __thiscall
Chaos::Private::FPBDIslandManager::GetIsland(FPBDIslandManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDIsland *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Islands).Items.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPBDIsland *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FPBDIsland **)((this->Islands).Items.AllocatorInstance.Data + (longlong)param_1 * 8);
}

// AddContainerConstraints<Chaos::FPBDSuspensionConstraints> @ 143d847b0

void __thiscall
Chaos::Private::FPBDIslandManager::AddContainerConstraints<Chaos::FPBDSuspensionConstraints>
          (FPBDIslandManager *this,FPBDSuspensionConstraints *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FConstraintHandle *pFVar3;
  FPBDIslandConstraint *pFVar4;
  longlong lVar5;
  char cVar6;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  undefined1 local_38 [16];
  
  pFVar8 = (param_1->Handles).AllocatorInstance.Data;
  iVar2 = (param_1->Handles).ArrayNum;
  lVar5 = param_1->_padding_;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
LAB_143d847f0:
  do {
    if ((param_1->Handles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FPBDSuspensionConstraintHandle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pFVar3 = *(FConstraintHandle **)pFVar8;
    if (pFVar3 != (FConstraintHandle *)0x0) {
      pFVar4 = pFVar3->GraphEdge;
      cVar6 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
      if (cVar6 == '\0') {
        if (pFVar4 != (FPBDIslandConstraint *)0x0) {
          RemoveConstraint(this,pFVar3);
        }
      }
      else if (pFVar4 == (FPBDIslandConstraint *)0x0) {
        pTVar7 = (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)
                 (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,local_38);
        AddConstraint(this,(int)lVar5,pFVar3,pTVar7);
        pFVar8 = pFVar8 + 8;
        goto LAB_143d847f0;
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

