// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 48

// FClothingSimulationCloth @ 14db8f250

FClothingSimulationCloth * __thiscall
Chaos::FClothingSimulationCloth::FClothingSimulationCloth
          (FClothingSimulationCloth *this,FClothingSimulationConfig *param_1,
          FClothingSimulationMesh *param_2,
          TArray<Chaos::FClothingSimulationCollider_*,TSizedDefaultAllocator<32>_> *param_3,
          uint param_4)

{
  TSharedPtr<FManagedArrayCollection,1> *pTVar1;
  TArray<Chaos::FClothingSimulationCollider_*,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<int> *paVar3;
  int *piVar4;
  atomic<int> aVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  FClothingSimulationSolver *this_00;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  bool bVar15;
  TSharedRef<FManagedArrayCollection,1> *pTVar16;
  FClothingSimulationConfig *this_01;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  FClothingSimulationConfig *pFVar19;
  FScriptContainerElement *pFVar20;
  ForAnyElementType FVar21;
  TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> local_88;
  FManagedArrayCollection *local_78;
  FSharedReferencer<1> local_70;
  TSharedRef<FManagedArrayCollection,1> local_68;
  longlong local_58 [3];
  
  bVar15 = false;
  bVar14 = false;
  pTVar1 = &this->PropertyCollection;
  pTVar2 = &this->Colliders;
  this->Config = (FClothingSimulationConfig *)0x0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Colliders).ArrayNum = 0;
  (this->Colliders).ArrayMax = 0;
  pTVar1->Object = (FManagedArrayCollection *)0x0;
  (this->PropertyCollection).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ResetRestLengthsMorphTargetName).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ResetRestLengthsMorphTargetName).Data.ArrayNum = 0;
  (this->ResetRestLengthsMorphTargetName).Data.ArrayMax = 0;
  this->GroupId = param_4;
  this->Mesh = (FClothingSimulationMesh *)0x0;
  this->MaxDistancesMultiplier = 1.0;
  this->bUseLODIndexOverride = false;
  this->LODIndexOverride = 0;
  this->bNeedsReset = false;
  this->bNeedsTeleport = false;
  this->bResetRestLengthsFromMorphTarget = false;
  this->TimeSinceLastTeleport = 0.0;
  this->TimeSinceLastReset = 0.0;
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)&this->ReferenceSpaceTransform = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&(this->ReferenceSpaceTransform).field_0x8 = (double)fVar11;
  *(double *)&(this->ReferenceSpaceTransform).field_0x10 = (double)fVar12;
  *(double *)&(this->ReferenceSpaceTransform).field_0x18 = (double)fVar13;
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar13 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)&(this->ReferenceSpaceTransform).field_0x20 =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&(this->ReferenceSpaceTransform).field_0x28 = (double)fVar11;
  *(double *)&(this->ReferenceSpaceTransform).field_0x30 = (double)fVar12;
  *(double *)&(this->ReferenceSpaceTransform).field_0x38 = (double)fVar13;
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&(this->ReferenceSpaceTransform).field_0x40 =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&(this->ReferenceSpaceTransform).field_0x48 = (double)fVar11;
  *(double *)&(this->ReferenceSpaceTransform).field_0x50 = (double)fVar12;
  *(double *)&(this->ReferenceSpaceTransform).field_0x58 = (double)fVar13;
  (this->LODData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODData).ArrayNum = 0;
  (this->LODData).ArrayMax = 0;
  *(undefined8 *)&this->LODIndices = 0;
  *(undefined8 *)&(this->LODIndices).field_0x8 = 0;
  *(undefined8 *)&(this->LODIndices).field_0x20 = 0;
  *(undefined4 *)&(this->LODIndices).field_0x28 = 0;
  *(undefined4 *)&(this->LODIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->LODIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LODIndices).field_0x34 = 0;
  *(undefined8 *)&(this->LODIndices).field_0x40 = 0;
  *(undefined4 *)&(this->LODIndices).field_0x48 = 0;
  this->NumActiveKinematicParticles = 0;
  this->NumActiveDynamicParticles = 0;
  if (pTVar1->Object != (FManagedArrayCollection *)0x0) {
    pFVar19 = this->Config;
    if (pFVar19 != (FClothingSimulationConfig *)0x0) {
      DestructItems<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,int>
                ((TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>
                  *)(pFVar19->Properties).AllocatorInstance.Data,(pFVar19->Properties).ArrayNum);
      pFVar8 = (pFVar19->Properties).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      DestructItems<TSharedPtr<FManagedArrayCollection,1>,int>
                ((TSharedPtr<FManagedArrayCollection,1> *)
                 (pFVar19->PropertyCollections).AllocatorInstance.Data,
                 (pFVar19->PropertyCollections).ArrayNum);
      pFVar8 = (pFVar19->PropertyCollections).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      ::operator_delete(pFVar19,0x28);
    }
    if (pTVar1 != (TSharedPtr<FManagedArrayCollection,1> *)local_58) {
      pTVar1->Object = (FManagedArrayCollection *)0x0;
      pTVar9 = (this->PropertyCollection).SharedReferenceCount.ReferenceController;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        (this->PropertyCollection).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        LOCK();
        paVar3 = &pTVar9->SharedReferenceCount;
        aVar5 = *paVar3;
        *paVar3 = (atomic<int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar5 == (atomic<int>)0x1) {
          (**(code **)pTVar9->_padding_)();
          LOCK();
          paVar3 = &pTVar9->WeakReferenceCount;
          aVar5 = *paVar3;
          *paVar3 = (atomic<int>)((int)*paVar3 + -1);
          UNLOCK();
          if (aVar5 == (atomic<int>)0x1) {
            (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (param_1 == (FClothingSimulationConfig *)0x0) {
    pTVar16 = MakeShared<FManagedArrayCollection,1>(&local_68);
    local_70.ReferenceController = (pTVar16->SharedReferenceCount).ReferenceController;
    local_78 = pTVar16->Object;
    if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_70.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar19 = (FClothingSimulationConfig *)0x0;
    if (pTVar1 != (TSharedPtr<FManagedArrayCollection,1> *)&local_78) {
      pTVar1->Object = local_78;
      local_78 = (FManagedArrayCollection *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PropertyCollection).SharedReferenceCount,&local_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    this_01 = ::operator_new(0x28);
    if (this_01 != (FClothingSimulationConfig *)0x0) {
      local_68.SharedReferenceCount.ReferenceController =
           (this->PropertyCollection).SharedReferenceCount.ReferenceController;
      local_68.Object = pTVar1->Object;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,0,&local_88.AllocatorInstance,1,&local_88.ArrayMax);
      ConstructItems<TSharedPtr<FManagedArrayCollection_const_,1>,TSharedPtr<FManagedArrayCollection_const_,1>,int>
                (local_88.AllocatorInstance.Data,
                 (TSharedPtr<FManagedArrayCollection_const_,1> *)&local_68,1);
      this_01->bIsLegacySingleLOD = false;
      (this_01->PropertyCollections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_01->PropertyCollections).ArrayNum = 0;
      (this_01->PropertyCollections).ArrayMax = 0;
      (this_01->Properties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_01->Properties).ArrayNum = 0;
      (this_01->Properties).ArrayMax = 0;
      FClothingSimulationConfig::Initialize(this_01,&local_88);
      bVar15 = true;
      bVar14 = true;
      pFVar19 = this_01;
    }
    this->Config = pFVar19;
    if (bVar14) {
      DestructItems<TSharedPtr<FManagedArrayCollection_const_,1>,int>
                ((TSharedPtr<FManagedArrayCollection_const_,1> *)local_88.AllocatorInstance.Data,
                 local_88.ArrayNum);
      if ((TSharedPtr<FManagedArrayCollection_const_,1> *)local_88.AllocatorInstance.Data !=
          (TSharedPtr<FManagedArrayCollection_const_,1> *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
    }
    if (bVar15) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    this->Config = param_1;
  }
  SetMesh(this,param_2);
  pFVar8 = (pTVar2->AllocatorInstance).Data;
  piVar4 = &(this->Colliders).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar6 = (this->Colliders).ArrayNum;
  (this->Colliders).ArrayNum = 0;
  *piVar4 = 0;
  if (pTVar2 != param_3) {
    iVar7 = param_3->ArrayNum;
    pFVar10 = (param_3->AllocatorInstance).Data;
    (this->Colliders).ArrayNum = iVar7;
    if (iVar7 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar7,0,&pTVar2->AllocatorInstance,iVar7,piVar4);
      memcpy((pTVar2->AllocatorInstance).Data,pFVar10,(longlong)iVar7 << 3);
    }
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  TMapBase<Chaos::FClothingSimulationSolver_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<Chaos::FClothingSimulationSolver_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>_>
              *)&this->LODIndices,
             (TArray<Chaos::FClothingSimulationSolver_*,TSizedDefaultAllocator<32>_> *)&local_88);
  iVar7 = local_88.ArrayNum;
  uVar17 = (ulonglong)local_88.ArrayNum;
  pFVar10 = local_88.AllocatorInstance.Data + uVar17 * 8;
  FVar21.Data = local_88.AllocatorInstance.Data;
  do {
    while( true ) {
      if ((int)uVar17 != iVar7) {
        `TCheckedPointerIterator<Chaos::FClothingSimulationSolver_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&param_4);
      }
      if (FVar21.Data == pFVar10) {
        if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.AllocatorInstance.Data);
        }
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        return this;
      }
      this_00 = *(FClothingSimulationSolver **)FVar21.Data;
      for (pFVar20 = pFVar8; pFVar20 != pFVar8 + (longlong)iVar6 * 8; pFVar20 = pFVar20 + 8) {
        FClothingSimulationCollider::Remove(*(FClothingSimulationCollider **)pFVar20,this_00,this);
      }
      pFVar20 = (this_00->Cloths).AllocatorInstance.Data;
      pFVar18 = pFVar20;
      if (pFVar20 != pFVar20 + (longlong)(this_00->Cloths).ArrayNum * 8) break;
LAB_14db8f66a:
      uVar17 = local_88._8_8_ & 0xffffffff;
      FVar21.Data = FVar21.Data + 8;
    }
    do {
      if (*(FClothingSimulationCloth **)pFVar18 == this) {
        if ((int)((longlong)pFVar18 - (longlong)pFVar20 >> 3) != -1) {
          FClothingSimulationSolver::RefreshCloths(this_00);
        }
        goto LAB_14db8f66a;
      }
      pFVar18 = pFVar18 + 8;
    } while (pFVar18 != pFVar20 + (longlong)(this_00->Cloths).ArrayNum * 8);
    uVar17 = local_88._8_8_ & 0xffffffff;
    FVar21.Data = FVar21.Data + 8;
  } while( true );
}

// ~FClothingSimulationCloth @ 14db9f580

void __thiscall
Chaos::FClothingSimulationCloth::~FClothingSimulationCloth(FClothingSimulationCloth *this)

{
  FClothingSimulationConfig *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  if (((this->PropertyCollection).Object != (FManagedArrayCollection *)0x0) &&
     (pFVar1 = this->Config, pFVar1 != (FClothingSimulationConfig *)0x0)) {
    DestructItems<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,int>
              ((TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>
                *)(pFVar1->Properties).AllocatorInstance.Data,(pFVar1->Properties).ArrayNum);
    pFVar2 = (pFVar1->Properties).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<TSharedPtr<FManagedArrayCollection,1>,int>
              ((TSharedPtr<FManagedArrayCollection,1> *)
               (pFVar1->PropertyCollections).AllocatorInstance.Data,
               (pFVar1->PropertyCollections).ArrayNum);
    pFVar2 = (pFVar1->PropertyCollections).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x28);
  }
  *(undefined4 *)&(this->LODIndices).field_0x48 = 0;
  pvVar3 = *(void **)&(this->LODIndices).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FClothingSimulationSolver_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FClothingSimulationSolver_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::FClothingSimulationSolver_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LODIndices);
  DestructItems<TUniquePtr<Chaos::FClothingSimulationCloth::FLODData,TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData>_>,int>
            ((TUniquePtr<Chaos::FClothingSimulationCloth::FLODData,TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData>_>
              *)(this->LODData).AllocatorInstance.Data,(this->LODData).ArrayNum);
  pFVar2 = (this->LODData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ResetRestLengthsMorphTargetName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PropertyCollection).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->Colliders).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AccessoryMeshExists @ 14dbb4620

bool __thiscall
Chaos::FClothingSimulationCloth::AccessoryMeshExists
          (FClothingSimulationCloth *this,FClothingSimulationSolver *param_1,FName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar6;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar7;
  FClothingAccessoryMeshData *pFVar8;
  
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x549,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pTVar6 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar6 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar1 = *(uint *)&pTVar6->field_0x8;
  if (((int)uVar1 < 0) || ((this->LODData).ArrayNum <= (int)uVar1)) {
    bVar3 = false;
  }
  else {
    uVar5 = 0;
    if ((int)uVar1 < (this->LODData).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pTVar7 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                     *)(*(longlong *)
                         ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) + 0x428
                       ),param_1);
    if (pTVar7 == (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
                   *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar8 = TMapBase<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
             ::Find((TMapBase<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
                     *)&pTVar7->field_0x160,*param_2);
    bVar3 = pFVar8 != (FClothingAccessoryMeshData *)0x0;
  }
  return bVar3;
}

// Add @ 14dbb48b0

void __thiscall
Chaos::FClothingSimulationCloth::Add
          (FClothingSimulationCloth *this,FClothingSimulationSolver *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  FClothingSimulationSolver *local_res10;
  TKeyInitializer<Chaos::FClothingSimulationSolver_*_const_&> local_res18;
  FClothingSimulationSolver **local_res20;
  
  local_res10 = param_1;
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x2e1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar10 = (this->Colliders).AllocatorInstance.Data;
  iVar2 = (this->Colliders).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Colliders).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::FClothingSimulationCollider_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    FClothingSimulationCollider::Add(*(FClothingSimulationCollider **)pFVar10,local_res10,this);
    pFVar10 = pFVar10 + 8;
  }
  pTVar5 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,local_res10);
  puVar7 = (undefined1 *)0x0;
  puVar6 = &pTVar5->field_0x8;
  if (pTVar5 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    puVar6 = puVar7;
  }
  if ((puVar6 != (undefined1 *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!LODIndices.Find(Solver)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x2ea,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res20 = &local_res10;
  TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<Chaos::FClothingSimulationSolver_*_const_&>_>
            ((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
              *)&this->LODIndices,&local_res18,(bool *)&local_res20);
  *(undefined4 *)(*(longlong *)&this->LODIndices + 8 + (longlong)(int)local_res18.Key * 0x18) =
       0xffffffff;
  uVar8 = (this->LODData).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar11 = (longlong)(int)uVar8 * 8;
    do {
      uVar9 = 0;
      if ((int)uVar8 < (this->LODData).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FLODData::AddParticles
                (*(FLODData **)((this->LODData).AllocatorInstance.Data + lVar11),local_res10,this,
                 uVar8);
      lVar11 = lVar11 + -8;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  puVar6 = puVar7;
  if (0 < (this->LODData).ArrayNum) {
    do {
      uVar9 = (uint)puVar6;
      uVar8 = 0;
      if ((int)uVar9 < (this->LODData).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FLODData::Add(*(FLODData **)(puVar7 + (longlong)(this->LODData).AllocatorInstance.Data),
                    local_res10,this,uVar9);
      puVar7 = puVar7 + 8;
      puVar6 = (undefined1 *)(ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < (this->LODData).ArrayNum);
  }
  return;
}

// AddCollider @ 14dbb8bd0

void __thiscall
Chaos::FClothingSimulationCloth::AddCollider
          (FClothingSimulationCloth *this,FClothingSimulationCollider *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FClothingSimulationSolver *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  TArray<Chaos::FClothingSimulationSolver_*,TSizedDefaultAllocator<32>_> local_18;
  
  if ((param_1 == (FClothingSimulationCollider *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCollider",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x29f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Colliders).AllocatorInstance.Data;
  iVar5 = (this->Colliders).ArrayNum;
  pFVar7 = pFVar2;
  do {
    if (pFVar7 == pFVar2 + (longlong)iVar5 * 8) {
LAB_14dbb8c44:
      piVar1 = &(this->Colliders).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Colliders).AllocatorInstance,piVar1);
        (this->Colliders).ArrayNum = iVar5;
      }
      iVar5 = (this->Colliders).ArrayNum;
      (this->Colliders).ArrayNum = iVar5 + 1;
      *(FClothingSimulationCollider **)
       ((this->Colliders).AllocatorInstance.Data + (longlong)iVar5 * 8) = param_1;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      TMapBase<Chaos::FClothingSimulationSolver_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>_>
      ::GetKeys<TSizedDefaultAllocator<32>_>
                ((TMapBase<Chaos::FClothingSimulationSolver_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>_>
                  *)&this->LODIndices,&local_18);
      iVar5 = local_18.ArrayNum;
      pFVar2 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8;
      FVar8.Data = local_18.AllocatorInstance.Data;
      do {
        while( true ) {
          if (local_18.ArrayNum != iVar5) {
            `TCheckedPointerIterator<Chaos::FClothingSimulationSolver_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (FVar8.Data == pFVar2) {
            if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_18.AllocatorInstance.Data);
            }
            return;
          }
          this_00 = *(FClothingSimulationSolver **)FVar8.Data;
          pFVar7 = (this_00->Cloths).AllocatorInstance.Data;
          pFVar6 = pFVar7;
          if (pFVar7 != pFVar7 + (longlong)(this_00->Cloths).ArrayNum * 8) break;
LAB_14dbb8cfa:
          FVar8.Data = FVar8.Data + 8;
        }
        do {
          if (*(FClothingSimulationCloth **)pFVar6 == this) {
            if ((int)((longlong)pFVar6 - (longlong)pFVar7 >> 3) != -1) {
              FClothingSimulationSolver::RefreshCloths(this_00);
            }
            goto LAB_14dbb8cfa;
          }
          pFVar6 = pFVar6 + 8;
        } while (pFVar6 != pFVar7 + (longlong)(this_00->Cloths).ArrayNum * 8);
        FVar8.Data = FVar8.Data + 8;
      } while( true );
    }
    if (*(FClothingSimulationCollider **)pFVar7 == param_1) {
      if ((int)((longlong)pFVar7 - (longlong)pFVar2 >> 3) != -1) {
        return;
      }
      goto LAB_14dbb8c44;
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// ApplyPreSimulationTransforms @ 14dbbe220

void __thiscall
Chaos::FClothingSimulationCloth::ApplyPreSimulationTransforms
          (FClothingSimulationCloth *this,FClothingSimulationSolver *param_1,
          TVector<float,3> *param_2,TRigidTransform<float,3> *param_3,float param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar5;
  
  pTVar5 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar5 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = *(uint *)&pTVar5->field_0x8;
  if (uVar1 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar1 < (this->LODData).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
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
    FLODData::ApplyPreSimulationTransformsToAccessoryMeshes
              (*(FLODData **)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8),
               param_1,param_2,param_3,param_4);
  }
  return;
}

// CalculateBoundingBox @ 14dbbf3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TAABB<double,3> * __thiscall
Chaos::FClothingSimulationCloth::CalculateBoundingBox
          (FClothingSimulationCloth *this,TAABB<double,3> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1)

{
  TVector<float,3> *pTVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  TAABB<double,3> *pTVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 uStack_140;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_130;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x336,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TAABB<double,3> *)(*pcVar3)();
    return pTVar5;
  }
  fVar9 = __real_ff7fffff;
  local_148 = ___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
  uStack_140 = _UNK_150a9e6b8;
  GetParticlePositions(this,&local_130,param_1);
  fVar11 = (float)uStack_140;
  fVar10 = fVar9;
  fVar7 = local_148._4_4_;
  fVar13 = (float)local_148;
  fVar8 = fVar9;
  if (local_130.DataPtr != local_130.DataPtr + local_130.ArrayNum) {
    pfVar6 = (float *)&(local_130.DataPtr)->field_0x4;
    fVar12 = local_148._4_4_;
    fVar14 = uStack_140._4_4_;
    fVar15 = fVar9;
    do {
      fVar2 = pfVar6[1];
      fVar7 = *pfVar6;
      fVar10 = pfVar6[-1];
      pTVar1 = (TVector<float,3> *)(pfVar6 + 2);
      fVar8 = fVar10;
      if (fVar13 <= fVar10) {
        fVar8 = fVar13;
      }
      fVar13 = fVar8;
      fVar8 = fVar7;
      if (fVar7 <= fVar9) {
        fVar8 = fVar9;
      }
      fVar9 = fVar8;
      if (fVar12 <= fVar7) {
        fVar7 = fVar12;
      }
      if (fVar10 <= fVar14) {
        fVar10 = fVar14;
      }
      fVar8 = fVar2;
      if (fVar2 <= fVar15) {
        fVar8 = fVar15;
      }
      if (fVar11 <= fVar2) {
        fVar2 = fVar11;
      }
      fVar11 = fVar2;
      pfVar6 = pfVar6 + 3;
      fVar12 = fVar7;
      fVar14 = fVar10;
      fVar15 = fVar8;
    } while (pTVar1 != local_130.DataPtr + local_130.ArrayNum);
  }
  local_e8.Scale3D.XY.m128d_f64[0] = param_1->LocalSpaceScale;
  local_118 = (double)fVar7;
  local_120 = (double)fVar13;
  local_108 = (double)fVar10;
  local_110 = (double)fVar11;
  local_100 = (double)fVar9;
  local_e8.Translation.XY.m128d_f64[0] = *(double *)&param_1->LocalSpaceLocation;
  local_e8.Translation.XY.m128d_f64[1] = *(double *)&(param_1->LocalSpaceLocation).field_0x8;
  local_f8 = (double)fVar8;
  local_e8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
  local_e8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
  local_e8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
  local_e8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
  local_e8.Translation.ZW.m128d_f64[0] = *(double *)&(param_1->LocalSpaceLocation).field_0x10;
  local_e8.Translation.ZW.m128d_f64[1] = 0.0;
  local_e8.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_e8.Scale3D.XY.m128d_f64[1] = local_e8.Scale3D.XY.m128d_f64[0];
  local_e8.Scale3D.ZW.m128d_f64[0] = local_e8.Scale3D.XY.m128d_f64[0];
  TAABB<double,3>::TransformedAABB((TAABB<double,3> *)&local_120,__return_storage_ptr__,&local_e8);
  return __return_storage_ptr__;
}

// GetAccessoryMeshNormals @ 14dbf58f0

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationCloth::GetAccessoryMeshNormals
          (FClothingSimulationCloth *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1,FName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar5;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar6;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar7;
  FClothingAccessoryMeshData *pFVar8;
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x573,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
  pTVar6 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if ((pTVar6 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
  uVar1 = *(uint *)&pTVar6->field_0x8;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->LODData).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar1 < (this->LODData).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
    pTVar7 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                     *)(*(longlong *)
                         ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) + 0x428
                       ),param_1);
    if ((pTVar7 == (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
                    *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
    pFVar8 = TMapBase<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
             ::Find((TMapBase<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
                     *)&pTVar7->field_0x160,*param_2);
    if (pFVar8 != (FClothingAccessoryMeshData *)0x0) {
      TArrayView<Chaos::TVector<float,3>_const_,int>::
      TArrayView<Chaos::TVector<float,3>_const_,int><TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_>
                (__return_storage_ptr__,&pFVar8->AnimationNormals);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->DataPtr = (TVector<float,3> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetAccessoryMeshPositions @ 14dbf5a80

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationCloth::GetAccessoryMeshPositions
          (FClothingSimulationCloth *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1,FName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar5;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar6;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar7;
  FClothingAccessoryMeshData *pFVar8;
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x555,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
  pTVar6 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if ((pTVar6 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
  uVar1 = *(uint *)&pTVar6->field_0x8;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->LODData).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar1 < (this->LODData).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
    pTVar7 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                     *)(*(longlong *)
                         ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) + 0x428
                       ),param_1);
    if ((pTVar7 == (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
                    *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
    pFVar8 = TMapBase<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
             ::Find((TMapBase<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
                     *)&pTVar7->field_0x160,*param_2);
    if (pFVar8 != (FClothingAccessoryMeshData *)0x0) {
      TArrayView<Chaos::TVector<float,3>_const_,int>::
      TArrayView<Chaos::TVector<float,3>_const_,int><TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_>
                (__return_storage_ptr__,&pFVar8->AnimationPositions);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->DataPtr = (TVector<float,3> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetAccessoryMeshVelocities @ 14dbf5c10

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationCloth::GetAccessoryMeshVelocities
          (FClothingSimulationCloth *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1,FName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar5;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar6;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar7;
  FClothingAccessoryMeshData *pFVar8;
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x582,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
  pTVar6 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if ((pTVar6 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
  uVar1 = *(uint *)&pTVar6->field_0x8;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->LODData).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar1 < (this->LODData).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
    pTVar7 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                     *)(*(longlong *)
                         ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) + 0x428
                       ),param_1);
    if ((pTVar7 == (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
                    *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
    pFVar8 = TMapBase<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
             ::Find((TMapBase<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
                     *)&pTVar7->field_0x160,*param_2);
    if (pFVar8 != (FClothingAccessoryMeshData *)0x0) {
      TArrayView<Chaos::TVector<float,3>_const_,int>::
      TArrayView<Chaos::TVector<float,3>_const_,int><TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_>
                (__return_storage_ptr__,&pFVar8->AnimationVelocities);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->DataPtr = (TVector<float,3> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetAllAccessoryMeshNames @ 14dbf65a0

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
Chaos::FClothingSimulationCloth::GetAllAccessoryMeshNames
          (FClothingSimulationCloth *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  bool *pbVar1;
  ForElementType<FSetElementId> FVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  bool *pbVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint *puVar17;
  int iVar18;
  FName local_res10;
  int local_res18;
  undefined4 uStackX_1c;
  undefined1 local_98 [16];
  uint local_88;
  uint uStack_84;
  undefined1 *puStack_80;
  undefined4 local_78;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  iVar18 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  if (0 < (this->LODData).ArrayNum) {
    do {
      uVar11 = 0;
      plVar7 = (longlong *)(**(code **)(this->Mesh->_padding_ + 0x128))(this->Mesh,local_98);
      pbVar14 = (bool *)*plVar7;
      local_res18 = (int)plVar7[1];
      uStackX_1c = *(undefined4 *)((longlong)plVar7 + 0xc);
      uVar6 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
              *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      uVar13 = local_res18 + uVar6;
      if (uVar6 < uVar13) {
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,uVar13);
        if (uVar13 < 4) {
          uVar6 = 1;
        }
        else {
          uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
          lVar5 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          uVar6 = 1 << ((byte)lVar5 & 0x1f);
        }
        if ((__return_storage_ptr__->HashSize == 0) ||
           (__return_storage_ptr__->HashSize < (int)uVar6)) {
          __return_storage_ptr__->HashSize = uVar6;
          if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
          }
          if (uVar6 != 0) {
            uVar13 = uVar6;
            if (uVar6 < 2) {
              if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0
                 ) {
                uVar13 = 0;
                goto LAB_14dbf66b3;
              }
            }
            else {
LAB_14dbf66b3:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar13
                         ,4);
            }
            if (0 < (int)uVar6) {
              uVar16 = (ulonglong)uVar6;
              uVar12 = uVar11;
              do {
                FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
                FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                if (FVar2 != (ForElementType<FSetElementId>)0x0) {
                  FVar10 = FVar2;
                }
                uVar8 = uVar12 & (longlong)(int)uVar6 - 1U;
                uVar12 = uVar12 + 1;
                *(undefined4 *)((longlong)FVar10 + uVar8 * 4) = 0xffffffff;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
          }
          if (__return_storage_ptr__->HashSize != 0) {
            uVar6 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
            puStack_80 = &(__return_storage_ptr__->Elements).field_0x10;
            uStack_84 = 1;
            local_88 = 0;
            uStack_74 = 0;
            uStack_70 = 0;
            local_68 = __return_storage_ptr__;
            local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_80;
            if (uVar6 != 0) {
              puVar3 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
              puVar17 = (uint *)puStack_80;
              if (puVar3 != (uint *)0x0) {
                puVar17 = puVar3;
              }
              uVar13 = *puVar17;
              uVar12 = uVar11;
              while (uVar13 == 0) {
                uStack_70 = (int)uVar12 + 0x20;
                uVar12 = (ulonglong)uStack_70;
                iVar9 = (int)uVar11;
                local_88 = iVar9 + 1;
                uVar11 = (ulonglong)local_88;
                if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_88)
                goto LAB_14dbf67b9;
                uVar13 = puVar17[(longlong)iVar9 + 1];
              }
              uStack_84 = -uVar13 & uVar13;
              uVar11 = (ulonglong)uStack_84 * 2 + 1;
              lVar5 = 0x3f;
              if (uVar11 != 0) {
                for (; uVar11 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                }
              }
              uStack_74 = (int)lVar5 + -1 + uStack_70;
              uVar11 = (ulonglong)uStack_74;
              if ((int)uVar6 < (int)uStack_74) {
LAB_14dbf67b9:
                local_78 = 0xffffffff;
                local_60._padding_ = CONCAT44(uStack_84,local_88);
                local_60.CurrentBitIndex = uVar6;
                local_60.UnvisitedBitMask = 0xffffffff;
                local_60._28_4_ = uStack_6c;
                local_60.BaseBitIndex = uStack_70;
                uStack_74 = uVar6;
                goto LAB_14dbf67d5;
              }
            }
            local_78 = 0xffffffff;
            local_60._padding_ = CONCAT44(uStack_84,local_88);
            local_60.CurrentBitIndex = uStack_74;
            local_60.UnvisitedBitMask = 0xffffffff;
            local_60._28_4_ = uStack_6c;
            local_60.BaseBitIndex = uStack_70;
            if ((int)uVar11 < (int)uVar6) {
              do {
                puVar15 = (undefined8 *)
                          ((longlong)(int)uVar11 * 0x10 + *(longlong *)&local_68->Elements);
                uVar4 = *puVar15;
                uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
                uVar6 = __return_storage_ptr__->HashSize - 1U &
                        uVar6 + (int)((ulonglong)uVar4 >> 0x20);
                *(uint *)((longlong)puVar15 + 0xc) = uVar6;
                FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
                FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                if (FVar2 != (ForElementType<FSetElementId>)0x0) {
                  FVar10 = FVar2;
                }
                uVar12 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar6;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)((longlong)FVar10 + uVar12 * 4);
                *(int *)((longlong)FVar10 + uVar12 * 4) = (int)uVar11;
                local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
                uVar11 = (ulonglong)(uint)local_60.CurrentBitIndex;
              } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
            }
          }
        }
      }
LAB_14dbf67d5:
      pbVar1 = pbVar14 + (longlong)local_res18 * 8;
      for (; pbVar14 != pbVar1; pbVar14 = pbVar14 + 8) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  (__return_storage_ptr__,&local_res10,pbVar14);
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < (this->LODData).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetAllMorphTargetNames @ 14dbf6930

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
Chaos::FClothingSimulationCloth::GetAllMorphTargetNames
          (FClothingSimulationCloth *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  ForElementType<FSetElementId> FVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  uint uVar14;
  bool *pbVar15;
  int iVar16;
  bool *pbVar17;
  ulonglong uVar18;
  uint *puVar19;
  int iVar20;
  FString local_res10;
  undefined1 local_98 [16];
  uint local_88;
  uint uStack_84;
  undefined1 *puStack_80;
  undefined4 local_78;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  iVar20 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  if (0 < (this->LODData).ArrayNum) {
    do {
      uVar11 = 0;
      plVar6 = (longlong *)(**(code **)(this->Mesh->_padding_ + 0x108))(this->Mesh,local_98);
      pbVar15 = (bool *)*plVar6;
      iVar9 = (int)plVar6[1];
      local_res10.Data.ArrayMax = *(int *)((longlong)plVar6 + 0xc);
      uVar5 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
              *(int *)&(__return_storage_ptr__->Elements).field_0x34;
      uVar14 = uVar5 + iVar9;
      local_res10.Data.ArrayNum = iVar9;
      if (uVar5 < uVar14) {
        if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
        }
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)__return_storage_ptr__,uVar14);
        if (uVar14 < 4) {
          uVar5 = 1;
        }
        else {
          uVar12 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          uVar5 = 1 << ((byte)lVar4 & 0x1f);
        }
        if ((__return_storage_ptr__->HashSize == 0) ||
           (__return_storage_ptr__->HashSize < (int)uVar5)) {
          __return_storage_ptr__->HashSize = uVar5;
          if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
          }
          if (uVar5 != 0) {
            uVar14 = uVar5;
            if (uVar5 < 2) {
              if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0
                 ) {
                uVar14 = 0;
                goto LAB_14dbf6a45;
              }
            }
            else {
LAB_14dbf6a45:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar14
                         ,4);
            }
            if (0 < (int)uVar5) {
              uVar18 = (ulonglong)uVar5;
              uVar12 = uVar11;
              do {
                FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
                FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                if (FVar2 != (ForElementType<FSetElementId>)0x0) {
                  FVar10 = FVar2;
                }
                uVar7 = uVar12 & (longlong)(int)uVar5 - 1U;
                uVar12 = uVar12 + 1;
                *(undefined4 *)((longlong)FVar10 + uVar7 * 4) = 0xffffffff;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
          }
          if (__return_storage_ptr__->HashSize != 0) {
            uVar5 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
            puStack_80 = &(__return_storage_ptr__->Elements).field_0x10;
            uStack_84 = 1;
            local_88 = 0;
            uStack_74 = 0;
            uStack_70 = 0;
            local_68 = __return_storage_ptr__;
            local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_80;
            if (uVar5 != 0) {
              puVar3 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
              puVar19 = (uint *)puStack_80;
              if (puVar3 != (uint *)0x0) {
                puVar19 = puVar3;
              }
              uVar14 = *puVar19;
              uVar12 = uVar11;
              while (uVar14 == 0) {
                uStack_70 = (int)uVar12 + 0x20;
                uVar12 = (ulonglong)uStack_70;
                iVar8 = (int)uVar11;
                local_88 = iVar8 + 1;
                uVar11 = (ulonglong)local_88;
                if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_88)
                goto LAB_14dbf6b38;
                uVar14 = puVar19[(longlong)iVar8 + 1];
              }
              uStack_84 = -uVar14 & uVar14;
              uVar11 = (ulonglong)uStack_84 * 2 + 1;
              lVar4 = 0x3f;
              if (uVar11 != 0) {
                for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                }
              }
              uStack_74 = (int)lVar4 + -1 + uStack_70;
              uVar11 = (ulonglong)uStack_74;
              if ((int)uVar5 < (int)uStack_74) {
LAB_14dbf6b38:
                local_78 = 0xffffffff;
                local_60._padding_ = CONCAT44(uStack_84,local_88);
                local_60.CurrentBitIndex = uVar5;
                local_60.UnvisitedBitMask = 0xffffffff;
                local_60._28_4_ = uStack_6c;
                local_60.BaseBitIndex = uStack_70;
                uStack_74 = uVar5;
                goto LAB_14dbf6c11;
              }
            }
            local_78 = 0xffffffff;
            local_60._padding_ = CONCAT44(uStack_84,local_88);
            local_60.CurrentBitIndex = uStack_74;
            local_60.UnvisitedBitMask = 0xffffffff;
            local_60._28_4_ = uStack_6c;
            local_60.BaseBitIndex = uStack_70;
            if ((int)uVar11 < (int)uVar5) {
              do {
                iVar16 = (int)uVar11;
                puVar1 = (undefined8 *)(*(longlong *)&local_68->Elements + (longlong)iVar16 * 0x18);
                iVar8 = *(int *)(*(longlong *)&local_68->Elements + 8 + (longlong)iVar16 * 0x18);
                iVar9 = iVar8 + -1;
                if (iVar8 == 0) {
                  pwVar13 = L"";
                  iVar9 = 0;
                }
                else {
                  pwVar13 = (wchar_t *)*puVar1;
                }
                uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar13);
                uVar5 = __return_storage_ptr__->HashSize - 1U & uVar5;
                *(uint *)((longlong)puVar1 + 0x14) = uVar5;
                FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
                FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                if (FVar2 != (ForElementType<FSetElementId>)0x0) {
                  FVar10 = FVar2;
                }
                uVar11 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar5;
                *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)FVar10 + uVar11 * 4);
                *(int *)((longlong)FVar10 + uVar11 * 4) = iVar16;
                local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
                uVar11 = (ulonglong)(uint)local_60.CurrentBitIndex;
                iVar9 = local_res10.Data.ArrayNum;
              } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
            }
          }
        }
      }
LAB_14dbf6c11:
      pbVar17 = pbVar15 + (longlong)iVar9 * 0x10;
      for (; pbVar15 != pbVar17; pbVar15 = pbVar15 + 0x10) {
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (__return_storage_ptr__,&local_res10,pbVar15);
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < (this->LODData).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetAllWeightMapNames @ 14dbf6ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
Chaos::FClothingSimulationCloth::GetAllWeightMapNames
          (FClothingSimulationCloth *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint *puVar3;
  ForElementType<unsigned_int> this_00;
  int iVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulong64 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ForElementType<unsigned_int> FVar16;
  ForAnyElementType FVar17;
  FString *pFVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  wchar_t *pwVar21;
  uint uVar22;
  int iVar23;
  FString *pFVar24;
  ulonglong uVar25;
  uint uVar26;
  FString *pFVar27;
  bool bVar28;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [8];
  uint local_140;
  uint uStack_13c;
  ForElementType<unsigned_int> FStack_138;
  undefined4 local_130;
  uint uStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  uint local_f0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_e8;
  FScriptContainerElement *local_e0;
  FClothingSimulationCloth *local_d0;
  FScriptContainerElement *local_c8;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  FSparseArrayAllocationInfo local_98;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  uint local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  this_00 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_f0 = (this->LODData).ArrayNum;
  uVar19 = (ulonglong)(int)local_f0;
  pFVar20 = (this->LODData).AllocatorInstance.Data;
  local_c8 = pFVar20 + uVar19 * 8;
  local_e8 = __return_storage_ptr__;
  local_d0 = this;
  do {
    pFVar5 = local_c8;
    uVar14 = 0;
    local_e0 = pFVar20;
    if ((local_d0->LODData).ArrayNum != (int)uVar19) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth::FLODData,TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_148);
    }
    if (pFVar20 == pFVar5) {
      return __return_storage_ptr__;
    }
    lVar12 = *(longlong *)pFVar20;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    uVar26 = 0;
    local_88._8_8_ = 0;
    local_68 = (ForElementType<unsigned_int>)0x0;
    local_60 = 0;
    plVar1 = (longlong *)(lVar12 + 8);
    local_5c = 0x80;
    local_58 = -1;
    local_54 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    uVar22 = *(int *)(lVar12 + 0x10) - *(int *)(lVar12 + 0x3c);
    uVar19 = uVar14;
    if (uVar22 != 0) {
      if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar22);
      }
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_88,uVar22);
      if (uVar22 < 4) {
        uVar22 = 1;
      }
      else {
        uVar19 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar22 = 1 << ((byte)lVar15 & 0x1f);
      }
      if ((local_40 == 0) || ((int)local_40 < (int)uVar22)) {
        local_40 = uVar22;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
        }
        if (uVar22 != 0) {
          uVar7 = uVar22;
          if (uVar22 < 2) {
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              uVar7 = 0;
              goto LAB_14dbf6e51;
            }
          }
          else {
LAB_14dbf6e51:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_48,0,uVar7,4);
          }
          if (0 < (int)uVar22) {
            uVar25 = (ulonglong)uVar22;
            uVar19 = uVar14;
            do {
              FVar17.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar17.Data = local_48.Data;
              }
              uVar11 = uVar19 & (longlong)(int)uVar22 - 1U;
              uVar19 = uVar19 + 1;
              *(undefined4 *)(FVar17.Data + uVar11 * 4) = 0xffffffff;
              uVar25 = uVar25 - 1;
            } while (uVar25 != 0);
          }
        }
        if (local_40 != 0) {
          local_140 = 0;
          uStack_13c = 1;
          uStack_12c = 0;
          uStack_128 = 0;
          uVar19 = uVar14;
          if (local_60 != 0) {
            FVar16 = this_00;
            if (local_68 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = local_68;
            }
            uVar22 = *(uint *)FVar16;
            uVar25 = uVar14;
            while (uVar22 == 0) {
              uStack_128 = (int)uVar25 + 0x20;
              uVar25 = (ulonglong)uStack_128;
              iVar9 = (int)uVar19;
              local_140 = iVar9 + 1;
              uVar19 = (ulonglong)local_140;
              if ((int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5 <
                  (int)local_140) goto LAB_14dbf6f6d;
              uVar22 = *(uint *)((uchar *)((longlong)FVar16 + 4) + (longlong)iVar9 * 4);
            }
            uStack_13c = -uVar22 & uVar22;
            uVar19 = (ulonglong)uStack_13c * 2 + 1;
            lVar15 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uStack_12c = (int)lVar15 + -1 + uStack_128;
            uVar19 = (ulonglong)uStack_12c;
            if ((int)local_60 < (int)uStack_12c) {
LAB_14dbf6f6d:
              uVar19 = (ulonglong)local_60;
              uStack_12c = local_60;
            }
          }
          local_130 = 0xffffffff;
          local_120 = (longlong *)local_88;
          TStack_118._padding_._0_4_ = local_140;
          TStack_118._padding_._4_4_ = uStack_13c;
          TStack_118.UnvisitedBitMask = 0xffffffff;
          TStack_118.CurrentBitIndex = uStack_12c;
          TStack_118._28_4_ = uStack_124;
          TStack_118.BaseBitIndex = uStack_128;
          FStack_138 = this_00;
          TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
          if ((int)uVar19 < (int)local_60) {
            do {
              iVar23 = (int)uVar19;
              puVar2 = (undefined8 *)(*local_120 + (longlong)iVar23 * 0x18);
              iVar9 = *(int *)(*local_120 + 8 + (longlong)iVar23 * 0x18);
              if (iVar9 == 0) {
                pwVar21 = L"";
                uVar22 = uVar26;
              }
              else {
                pwVar21 = (wchar_t *)*puVar2;
                uVar22 = iVar9 - 1;
              }
              uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar22,pwVar21);
              uVar22 = local_40 - 1 & uVar22;
              *(uint *)((longlong)puVar2 + 0x14) = uVar22;
              FVar17.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar17.Data = local_48.Data;
              }
              uVar19 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar22;
              *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(FVar17.Data + uVar19 * 4);
              *(int *)(FVar17.Data + uVar19 * 4) = iVar23;
              TStack_118.UnvisitedBitMask =
                   TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
              uVar19 = (ulonglong)(uint)TStack_118.CurrentBitIndex;
            } while (TStack_118.CurrentBitIndex < *(int *)((longlong)TStack_118.Array + 0x18));
          }
        }
      }
      uVar19 = (ulonglong)local_54;
    }
    TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)(lVar12 + 0x18);
    TStack_118.BaseBitIndex = 0;
    uVar22 = *(uint *)(lVar12 + 0x30);
    uVar7 = 1;
    uVar25 = uVar14;
    if (uVar22 != 0) {
      uVar25 = (ulonglong)uVar22;
      FVar16 = (ForElementType<unsigned_int>)TStack_118.Array;
      if (*(ForElementType<unsigned_int> *)(lVar12 + 0x28) != (ForElementType<unsigned_int>)0x0) {
        FVar16 = *(ForElementType<unsigned_int> *)(lVar12 + 0x28);
      }
      uVar8 = *(uint *)FVar16;
      while (uVar26 = (uint)uVar14, uVar8 == 0) {
        lVar12 = (longlong)(int)uVar26;
        TStack_118.BaseBitIndex = TStack_118.BaseBitIndex + 0x20;
        uVar26 = uVar26 + 1;
        uVar14 = (ulonglong)uVar26;
        if ((int)(((int)(uVar22 - 1) >> 0x1f & 0x1fU) + (uVar22 - 1)) >> 5 < (int)uVar26)
        goto LAB_14dbf70ab;
        uVar8 = *(uint *)((uchar *)((longlong)FVar16 + 4) + lVar12 * 4);
      }
      uVar7 = -uVar8 & uVar8;
      uVar14 = (ulonglong)uVar7 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar8 = TStack_118.BaseBitIndex + -1 + (int)lVar12;
      if ((int)uVar22 < (int)uVar8) {
        uVar8 = uVar22;
      }
      uVar25 = (ulonglong)uVar8;
    }
LAB_14dbf70ab:
    TStack_118._padding_ = CONCAT44(uVar7,uVar26);
    TStack_118.CurrentBitIndex = (int)uVar25;
    TStack_118.UnvisitedBitMask = 0xffffffff;
    TStack_118._28_4_ = uStack_124;
    TStack_b8._padding_ = TStack_118._padding_;
    TStack_b8.BaseBitIndex = TStack_118.BaseBitIndex;
    TStack_b8._28_4_ = uStack_124;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    TStack_b8.CurrentBitIndex = TStack_118.CurrentBitIndex;
    local_120 = plVar1;
    local_c0 = plVar1;
    TStack_b8.Array = TStack_118.Array;
    if (TStack_118.CurrentBitIndex < (int)uVar22) {
      pFVar27 = (FString *)0x0;
      do {
        lVar12 = *local_c0;
        uVar22 = 0;
        if ((int)uVar19 == 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                             (int *)(local_88 + 0xc));
          uVar26 = local_60;
          if (local_60 == 0) {
            iVar23 = 0;
LAB_14dbf7187:
            if (local_5c < (int)(local_60 + 1)) {
              uVar7 = local_5c + 0x1fU >> 5;
              uVar8 = local_60 + 0x20 >> 5;
              if (uVar8 < 5) {
                local_5c = 4;
              }
              else {
                uVar19 = (ulonglong)uVar8;
                if (uVar7 < 5) {
                  uVar7 = uVar22;
                }
                if (uVar7 == 0) {
                  uVar14 = 4;
                  if (4 < uVar19) {
                    uVar14 = uVar19;
                  }
                }
                else {
                  uVar14 = ((ulonglong)uVar8 * 3 >> 3) + 0x10 + uVar19;
                }
                uVar13 = FMemory::QuantizeSize(uVar14 * 4,0);
                local_5c = (int)(uVar13 >> 2);
                if (local_5c < (int)uVar8) {
                  local_5c = 0x7fffffff;
                }
              }
              local_5c = local_5c << 5;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)this_00,local_60);
            }
            local_60 = local_60 + 1;
            uVar8 = (int)local_60 >> 0x1f & 0x1f;
            uVar7 = local_60 + uVar8;
            iVar10 = (uVar7 & 0x1f) - uVar8;
            if (iVar10 != 0) {
              FVar16 = this_00;
              if (local_68 != (ForElementType<unsigned_int>)0x0) {
                FVar16 = local_68;
              }
              puVar3 = (uint *)((longlong)FVar16 + (longlong)((int)uVar7 >> 5) * 4);
              *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar10 & 0x1f);
            }
          }
          else {
            iVar23 = (int)(local_60 + ((int)local_60 >> 0x1f & 0x1fU)) >> 5;
            if (iVar23 != (int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5)
            goto LAB_14dbf7187;
            local_60 = local_60 + 1;
          }
          FVar16 = this_00;
          if (local_68 != (ForElementType<unsigned_int>)0x0) {
            FVar16 = local_68;
          }
          puVar3 = (uint *)((longlong)FVar16 + (longlong)iVar23 * 4);
          *puVar3 = *puVar3 & ~(1 << ((byte)uVar26 & 0x1f));
          iVar23 = local_58;
        }
        else {
          local_54 = (int)uVar19 - 1;
          iVar23 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0x18 + 4);
          iVar9 = local_58;
          if (local_54 != 0) {
            *(undefined4 *)(local_88._0_8_ + (longlong)iVar23 * 0x18) = 0xffffffff;
          }
        }
        local_58 = iVar23;
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_88,&local_98,iVar9);
        pvVar6 = local_98.Pointer;
        pFVar18 = pFVar27;
        if (local_98.Pointer != (FString *)0x0) {
          ::FString::FString(local_98.Pointer,(FString *)(lVar12 + (longlong)(int)uVar25 * 0x28));
          *(undefined4 *)&(((FString *)((longlong)pvVar6 + 0x10))->Data).AllocatorInstance.Data =
               0xffffffff;
          pFVar18 = pvVar6;
        }
        iVar23 = local_98.Index;
        iVar9 = (pFVar18->Data).ArrayNum;
        if (iVar9 == 0) {
          pwVar21 = L"";
        }
        else {
          pwVar21 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
          uVar22 = iVar9 - 1;
        }
        uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar22,pwVar21);
        if ((local_88._8_4_ - local_54 != 1) && (local_88._8_4_ != local_54)) {
          FVar17.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar17.Data = local_48.Data;
          }
          iVar9 = *(int *)(FVar17.Data + (ulonglong)(local_40 - 1 & uVar22) * 4);
          pFVar20 = (FScriptContainerElement *)local_88._0_8_;
          while (iVar9 != -1) {
            lVar12 = (longlong)iVar9 * 0x18;
            iVar10 = (pFVar18->Data).ArrayNum;
            iVar4 = *(int *)(pFVar20 + lVar12 + 8);
            if (iVar4 == iVar10) {
              if (1 < iVar4) {
                iVar10 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)(pFVar20 + lVar12),
                                    (wchar_t *)(pFVar18->Data).AllocatorInstance.Data);
                bVar28 = iVar10 == 0;
                pFVar20 = (FScriptContainerElement *)local_88._0_8_;
                goto LAB_14dbf738b;
              }
LAB_14dbf739d:
              if (iVar9 != -1) {
                if (*(void **)(pFVar20 + (longlong)iVar9 * 0x18) != (void *)0x0) {
                  FMemory::Free(*(void **)(pFVar20 + (longlong)iVar9 * 0x18));
                }
                memmove(pFVar20 + (longlong)iVar9 * 0x18,pFVar18,0x10);
                TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_88,iVar23,1);
                iVar23 = iVar9;
              }
              if (iVar9 != -1) goto LAB_14dbf764f;
              break;
            }
            bVar28 = iVar4 + iVar10 == 1;
LAB_14dbf738b:
            if (bVar28) goto LAB_14dbf739d;
            iVar9 = *(int *)(pFVar20 + lVar12 + 0x10);
          }
        }
        uVar7 = 1;
        uVar26 = local_88._8_4_ - local_54;
        if (3 < uVar26) {
          uVar19 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar7 = 1 << ((byte)lVar12 & 0x1f);
        }
        if (((int)uVar26 < 1) || ((int)uVar7 <= (int)local_40)) {
          uVar22 = local_40 - 1 & uVar22;
          *(uint *)((longlong)&pFVar18[1].Data.AllocatorInstance.Data + 4) = uVar22;
          FVar17.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar17.Data = local_48.Data;
          }
          uVar19 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar22;
          *(undefined4 *)&pFVar18[1].Data.AllocatorInstance.Data =
               *(undefined4 *)(FVar17.Data + uVar19 * 4);
          *(int *)(FVar17.Data + uVar19 * 4) = iVar23;
        }
        else {
          local_40 = uVar7;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
          }
          if (uVar7 != 0) {
            uVar22 = uVar7;
            if (uVar7 < 2) {
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                uVar22 = 0;
                goto LAB_14dbf7458;
              }
            }
            else {
LAB_14dbf7458:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_48,0,uVar22,4);
            }
            if (0 < (int)uVar7) {
              uVar19 = (ulonglong)uVar7;
              pFVar18 = pFVar27;
              do {
                FVar17.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar17.Data = local_48.Data;
                }
                uVar14 = (ulonglong)pFVar18 & (longlong)(int)uVar7 - 1U;
                pFVar18 = (FString *)((longlong)&(pFVar18->Data).AllocatorInstance.Data + 1);
                *(undefined4 *)(FVar17.Data + uVar14 * 4) = 0xffffffff;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
          }
          if (local_40 != 0) {
            local_140 = 0;
            uStack_13c = 1;
            uStack_12c = 0;
            uStack_128 = 0;
            pFVar18 = pFVar27;
            if (local_60 != 0) {
              FVar16 = this_00;
              if (local_68 != (ForElementType<unsigned_int>)0x0) {
                FVar16 = local_68;
              }
              uVar22 = *(uint *)FVar16;
              pFVar24 = pFVar27;
              while (uVar22 == 0) {
                uStack_128 = (int)pFVar24 + 0x20;
                pFVar24 = (FString *)(ulonglong)uStack_128;
                iVar9 = (int)pFVar18;
                local_140 = iVar9 + 1;
                pFVar18 = (FString *)(ulonglong)local_140;
                if ((int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5 <
                    (int)local_140) goto LAB_14dbf755d;
                uVar22 = *(uint *)((uchar *)((longlong)FVar16 + 4) + (longlong)iVar9 * 4);
              }
              uStack_13c = -uVar22 & uVar22;
              uVar19 = (ulonglong)uStack_13c * 2 + 1;
              lVar12 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              uStack_12c = (int)lVar12 + -1 + uStack_128;
              pFVar18 = (FString *)(ulonglong)uStack_12c;
              if ((int)local_60 < (int)uStack_12c) {
LAB_14dbf755d:
                pFVar18 = (FString *)(ulonglong)local_60;
                uStack_12c = local_60;
              }
            }
            local_130 = 0xffffffff;
            local_120 = (longlong *)local_88;
            TStack_118._padding_ = CONCAT44(uStack_13c,local_140);
            TStack_118.CurrentBitIndex = uStack_12c;
            TStack_118.UnvisitedBitMask = 0xffffffff;
            TStack_118._28_4_ = uStack_124;
            TStack_118.BaseBitIndex = uStack_128;
            FStack_138 = this_00;
            TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
            if ((int)pFVar18 < (int)local_60) {
              do {
                lVar12 = *local_120;
                lVar15 = (longlong)(int)pFVar18;
                iVar9 = *(int *)(lVar12 + 8 + lVar15 * 0x18);
                if (iVar9 == 0) {
                  pwVar21 = L"";
                  iVar9 = 0;
                }
                else {
                  pwVar21 = *(wchar_t **)(lVar12 + lVar15 * 0x18);
                  iVar9 = iVar9 + -1;
                }
                uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar21);
                uVar22 = local_40 - 1 & uVar22;
                *(uint *)(lVar12 + 0x14 + lVar15 * 0x18) = uVar22;
                FVar17.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar17.Data = local_48.Data;
                }
                uVar19 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar22;
                *(undefined4 *)(lVar12 + 0x10 + lVar15 * 0x18) =
                     *(undefined4 *)(FVar17.Data + uVar19 * 4);
                *(int *)(FVar17.Data + uVar19 * 4) = (int)pFVar18;
                TStack_118.UnvisitedBitMask =
                     TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
                pFVar18 = (FString *)(ulonglong)(uint)TStack_118.CurrentBitIndex;
              } while (TStack_118.CurrentBitIndex < *(int *)((longlong)TStack_118.Array + 0x18));
            }
          }
        }
LAB_14dbf764f:
        TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
        uVar25 = (ulonglong)(uint)TStack_b8.CurrentBitIndex;
        pFVar20 = local_e0;
        if (*(int *)((longlong)TStack_b8.Array + 0x18) <= TStack_b8.CurrentBitIndex) break;
        uVar19 = (ulonglong)local_54;
      } while( true );
    }
    __return_storage_ptr__ = local_e8;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              (local_e8,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_88);
    local_40 = 0;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
    pFVar20 = pFVar20 + 8;
    uVar19 = (ulonglong)local_f0;
  } while( true );
}

// GetAnimationNormals @ 14dbf7700

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationCloth::GetAnimationNormals
          (FClothingSimulationCloth *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar5;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar6;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_18;
  
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x541,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  pTVar6 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar6 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar4 = *(int *)&pTVar6->field_0x8;
  iVar3 = GetParticleRangeId(this,param_1,iVar4);
  if (iVar3 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetParticleRangeId(Solver, LODIndex) != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x543,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar3 = GetNumParticles(this,iVar4);
  iVar4 = GetParticleRangeId(this,param_1,iVar4);
  Chaos::Private::GetParticleConstArrayView<Chaos::TVector<float,3>_>
            (&local_18,&param_1->Evolution,&param_1->PBDEvolution,iVar4,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(param_1->AnimationNormals).field_0x8);
  __return_storage_ptr__->DataPtr = local_18.DataPtr;
  __return_storage_ptr__->ArrayNum = iVar3;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimationPositions @ 14dbf78f0

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationCloth::GetAnimationPositions
          (FClothingSimulationCloth *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar5;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar6;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_18;
  
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x529,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  pTVar6 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar6 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar4 = *(int *)&pTVar6->field_0x8;
  iVar3 = GetParticleRangeId(this,param_1,iVar4);
  if (iVar3 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetParticleRangeId(Solver, LODIndex) != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x52b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar3 = GetNumParticles(this,iVar4);
  iVar4 = GetParticleRangeId(this,param_1,iVar4);
  Chaos::Private::GetParticleConstArrayView<Chaos::TVector<float,3>_>
            (&local_18,&param_1->Evolution,&param_1->PBDEvolution,iVar4,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(param_1->AnimationPositions).field_0x8);
  __return_storage_ptr__->DataPtr = local_18.DataPtr;
  __return_storage_ptr__->ArrayNum = iVar3;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetAnimationVelocities @ 14dbf7ae0

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationCloth::GetAnimationVelocities
          (FClothingSimulationCloth *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar5;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar6;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_18;
  
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x539,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  pTVar6 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar6 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar4 = *(int *)&pTVar6->field_0x8;
  iVar3 = GetParticleRangeId(this,param_1,iVar4);
  if (iVar3 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetParticleRangeId(Solver, LODIndex) != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x53b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar3 = GetNumParticles(this,iVar4);
  iVar4 = GetParticleRangeId(this,param_1,iVar4);
  Chaos::Private::GetParticleConstArrayView<Chaos::TVector<float,3>_>
            (&local_18,&param_1->Evolution,&param_1->PBDEvolution,iVar4,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(param_1->AnimationVelocities).field_0x8);
  __return_storage_ptr__->DataPtr = local_18.DataPtr;
  __return_storage_ptr__->ArrayNum = iVar3;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetCurrentMorphTargetIndex @ 14dbfb8b0

int __thiscall
Chaos::FClothingSimulationCloth::GetCurrentMorphTargetIndex
          (FClothingSimulationCloth *this,FClothingSimulationSolver *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar6;
  
  pTVar6 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar6 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  uVar1 = *(uint *)&pTVar6->field_0x8;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->LODData).ArrayNum)) {
    uVar5 = 0;
    if ((int)uVar1 < (this->LODData).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    return *(int *)(*(longlong *)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8)
                   + 0x478);
  }
  return -1;
}

// GetCurrentMorphTargetWeight @ 14dbfb990

float __thiscall
Chaos::FClothingSimulationCloth::GetCurrentMorphTargetWeight
          (FClothingSimulationCloth *this,FClothingSimulationSolver *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar5;
  float fVar6;
  
  pTVar5 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar5 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  uVar1 = *(uint *)&pTVar5->field_0x8;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->LODData).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar1 < (this->LODData).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar6 = (float)(*pcVar2)();
        return fVar6;
      }
    }
    return *(float *)(*(longlong *)
                       ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) + 0x47c);
  }
  return 0.0;
}

// GetFaceIntMapByName @ 14dbfba70

TArrayView<int_const_,int> * __thiscall
Chaos::FClothingSimulationCloth::GetFaceIntMapByName
          (FClothingSimulationCloth *this,TArrayView<int_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1,FString *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar6;
  TArrayView<int_const_,int> *pTVar7;
  TTuple<FString,TArrayView<int_const_,int>_> *pTVar8;
  undefined8 *puVar9;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  pTVar6 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar6 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArrayView<int_const_,int> *)(*pcVar2)();
      return pTVar7;
    }
  }
  uVar1 = *(uint *)&pTVar6->field_0x8;
  if (((int)uVar1 < 0) || ((this->LODData).ArrayNum <= (int)uVar1)) {
    local_18 = 0;
    puVar9 = &local_18;
    local_10 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)uVar1 < (this->LODData).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArrayView<int_const_,int> *)(*pcVar2)();
        return pTVar7;
      }
    }
    pTVar8 = TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
                     *)(*(longlong *)
                         ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) + 0xf8)
                    ,param_2);
    if (pTVar8 == (TTuple<FString,TArrayView<int_const_,int>_> *)0x0) {
      local_28 = 0;
      puVar9 = &local_28;
      uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
    }
    else {
      puVar9 = &local_28;
      local_28 = *(undefined8 *)&pTVar8->field_0x10;
      uStack_20 = *(undefined8 *)&pTVar8->field_0x18;
    }
  }
  uVar3 = puVar9[1];
  __return_storage_ptr__->DataPtr = (int *)*puVar9;
  *(undefined8 *)&__return_storage_ptr__->ArrayNum = uVar3;
  return __return_storage_ptr__;
}

// GetFaceIntMapByProperty @ 14dbfbbb0

TArrayView<int_const_,int> * __thiscall
Chaos::FClothingSimulationCloth::GetFaceIntMapByProperty
          (FClothingSimulationCloth *this,TArrayView<int_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1,FName *param_2)

{
  uint uVar1;
  FClothingSimulationConfig *this_00;
  code *pcVar2;
  undefined8 uVar3;
  ForAnyElementType _Src;
  bool bVar4;
  uint uVar5;
  TArrayView<int_const_,int> *pTVar6;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar7;
  FCollectionPropertyConstFacade *this_01;
  TTuple<FString,TArrayView<int_const_,int>_> *pTVar8;
  undefined8 *puVar9;
  FCollectionPropertyConstFacade *local_res8;
  FString local_78;
  FString local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  FString local_38;
  
  if (this->Config == (FClothingSimulationConfig *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Config",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x380,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<int_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  this_00 = this->Config;
  pTVar7 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar7 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<int_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  this_01 = (FCollectionPropertyConstFacade *)
            FClothingSimulationConfig::GetProperties(this_00,*(int *)&pTVar7->field_0x8);
  ::FString::FString(&local_68,"");
  _Src.Data = local_68.Data.AllocatorInstance.Data;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_68.Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_68.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_68.Data.ArrayNum * 2);
  }
  local_res8 = this_01;
  Softs::FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_01,&local_38,param_2,(<lambda_1> *)&local_res8,&local_78,(int *)0x0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pTVar7 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar7 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<int_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  uVar1 = *(uint *)&pTVar7->field_0x8;
  if (((int)uVar1 < 0) || ((this->LODData).ArrayNum <= (int)uVar1)) {
    local_48 = 0;
    puVar9 = &local_48;
    local_40 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)uVar1 < (this->LODData).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArrayView<int_const_,int> *)(*pcVar2)();
        return pTVar6;
      }
    }
    pTVar8 = TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
                     *)(*(longlong *)
                         ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) + 0xf8)
                    ,&local_38);
    if (pTVar8 == (TTuple<FString,TArrayView<int_const_,int>_> *)0x0) {
      local_58 = 0;
      puVar9 = &local_58;
      uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
    }
    else {
      puVar9 = &local_58;
      local_58 = *(undefined8 *)&pTVar8->field_0x10;
      uStack_50 = *(longlong *)&pTVar8->field_0x18;
    }
  }
  uVar3 = puVar9[1];
  __return_storage_ptr__->DataPtr = (int *)*puVar9;
  *(undefined8 *)&__return_storage_ptr__->ArrayNum = uVar3;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetGravity @ 14dbfbfb0

TVector<float,3> * __thiscall
Chaos::FClothingSimulationCloth::GetGravity
          (FClothingSimulationCloth *this,TVector<float,3> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1)

{
  float fVar1;
  FExternalForces *pFVar2;
  FClothingSimulationConfig *this_00;
  code *pcVar3;
  TConsoleVariableData<float> *pTVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  TVector<float,3> *pTVar8;
  FClothConstraints *pFVar9;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar10;
  FCollectionPropertyConstFacade *this_01;
  int *piVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  TVector<float> local_68 [6];
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x319,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TVector<float,3> *)(*pcVar3)();
    return pTVar8;
  }
  if ((param_1->PBDEvolution).Ptr == (FPBDEvolution *)0x0) {
    iVar7 = GetParticleRangeId(this,param_1);
    pFVar9 = FClothingSimulationSolver::GetClothConstraints(param_1,iVar7);
    pFVar2 = (pFVar9->ExternalForces).Object;
    if (pFVar2 == (FExternalForces *)0x0) {
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0xc4752a8f;
      return __return_storage_ptr__;
    }
    lVar12 = pFVar2->_padding_;
    *(longlong *)__return_storage_ptr__ = pFVar2->_padding_;
    *(int *)&__return_storage_ptr__->field_0x8 = (int)lVar12;
    return __return_storage_ptr__;
  }
  if ((this->Config == (FClothingSimulationConfig *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Config",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x328,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TVector<float,3> *)(*pcVar3)();
    return pTVar8;
  }
  this_00 = this->Config;
  pTVar10 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                    *)&this->LODIndices,param_1);
  if ((pTVar10 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TVector<float,3> *)(*pcVar3)();
    return pTVar8;
  }
  this_01 = (FCollectionPropertyConstFacade *)
            FClothingSimulationConfig::GetProperties(this_00,*(int *)&pTVar10->field_0x8);
  piVar11 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)&this_01->KeyNameIndices,UseGravityOverrideName);
  if ((piVar11 == (int *)0x0) || (*piVar11 == -1)) {
    bVar5 = false;
  }
  else {
    bVar5 = Softs::FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (this_01,*piVar11,&this_01->LowValueArray);
  }
  piVar11 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)&this_01->KeyNameIndices,GravityOverrideName);
  if ((piVar11 == (int *)0x0) || (*piVar11 == -1)) {
    fVar16 = 0.0;
    fVar14 = 0.0;
    uVar15 = __real_c4752a8f;
  }
  else {
    Softs::FCollectionPropertyConstFacade::
    GetValue<UE::Math::TVector<float>,UE::Math::TVector<float>_>
              (this_01,local_68,*piVar11,&this_01->LowValueArray);
    fVar16 = (float)local_68[0].field0_0x0._0_8_;
    fVar14 = (float)((ulonglong)local_68[0].field0_0x0._0_8_ >> 0x20);
    uVar15 = local_68[0].field0_0x0._s_0.Z;
  }
  piVar11 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)&this_01->KeyNameIndices,GravityScaleName);
  fVar13 = __real_3f800000;
  if ((piVar11 != (int *)0x0) && (*piVar11 != -1)) {
    fVar13 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,*piVar11,&this_01->LowValueArray);
  }
  pTVar4 = ClothingSimulationClothConsoleVariables::CVarGravityMultiplier.Ref;
  bVar6 = IsInParallelGameThread();
  if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
    lVar12 = 0;
  }
  else {
    lVar12 = 4;
  }
  fVar1 = *(float *)((longlong)pTVar4->ShadowedValue + lVar12);
  if ((param_1->bIsClothGravityOverrideEnabled == false) || (bVar5 == false)) {
    fVar14 = fVar13 * *(float *)&(param_1->Gravity).field_0x4;
    fVar16 = fVar13 * *(float *)&param_1->Gravity;
    uVar15 = fVar13 * *(float *)&(param_1->Gravity).field_0x8;
  }
  *(float *)__return_storage_ptr__ = fVar16 * fVar1;
  *(float *)&__return_storage_ptr__->field_0x8 = (float)uVar15 * fVar1;
  *(float *)&__return_storage_ptr__->field_0x4 = fVar14 * fVar1;
  return __return_storage_ptr__;
}

// GetNumParticles @ 14dbfcef0

int __thiscall
Chaos::FClothingSimulationCloth::GetNumParticles(FClothingSimulationCloth *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->LODData).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->LODData).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    return **(int **)((this->LODData).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return 0;
}

// GetNumParticles @ 14dbfcf90

int __thiscall
Chaos::FClothingSimulationCloth::GetNumParticles
          (FClothingSimulationCloth *this,FClothingSimulationSolver *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar5;
  uint uVar6;
  
  pTVar5 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar5 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  uVar1 = *(uint *)&pTVar5->field_0x8;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->LODData).ArrayNum)) {
    uVar6 = 0;
    if ((int)uVar1 < (this->LODData).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    return **(int **)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  }
  return 0;
}

// GetOldAccessoryMeshPositions @ 14dbfd3f0

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationCloth::GetOldAccessoryMeshPositions
          (FClothingSimulationCloth *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1,FName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar5;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar6;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar7;
  FClothingAccessoryMeshData *pFVar8;
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x564,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
  pTVar6 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if ((pTVar6 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
    return pTVar5;
  }
  uVar1 = *(uint *)&pTVar6->field_0x8;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->LODData).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar1 < (this->LODData).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
    pTVar7 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                     *)(*(longlong *)
                         ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) + 0x428
                       ),param_1);
    if ((pTVar7 == (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
                    *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
    pFVar8 = TMapBase<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
             ::Find((TMapBase<FName,Chaos::FClothingAccessoryMeshData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Chaos::FClothingAccessoryMeshData,0>_>
                     *)&pTVar7->field_0x160,*param_2);
    if (pFVar8 != (FClothingAccessoryMeshData *)0x0) {
      TArrayView<Chaos::TVector<float,3>_const_,int>::
      TArrayView<Chaos::TVector<float,3>_const_,int><TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_>
                (__return_storage_ptr__,&pFVar8->OldAnimationPositions);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->DataPtr = (TVector<float,3> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetOldAnimationPositions @ 14dbfd600

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationCloth::GetOldAnimationPositions
          (FClothingSimulationCloth *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar5;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar6;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_18;
  
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x531,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  pTVar6 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar6 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar4 = *(int *)&pTVar6->field_0x8;
  iVar3 = GetParticleRangeId(this,param_1,iVar4);
  if (iVar3 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetParticleRangeId(Solver, LODIndex) != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x533,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar3 = GetNumParticles(this,iVar4);
  iVar4 = GetParticleRangeId(this,param_1,iVar4);
  Chaos::Private::GetParticleConstArrayView<Chaos::TVector<float,3>_>
            (&local_18,&param_1->Evolution,&param_1->PBDEvolution,iVar4,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(param_1->OldAnimationPositions).field_0x8);
  __return_storage_ptr__->DataPtr = local_18.DataPtr;
  __return_storage_ptr__->ArrayNum = iVar3;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetParticleInvMasses @ 14dbfd9d0

TArrayView<float_const_,int> * __thiscall
Chaos::FClothingSimulationCloth::GetParticleInvMasses
          (FClothingSimulationCloth *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TArrayView<float_const_,int> *pTVar5;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar6;
  TArrayView<float_const_,int> local_18;
  
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x5a9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  pTVar6 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar6 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar4 = *(int *)&pTVar6->field_0x8;
  iVar3 = GetParticleRangeId(this,param_1,iVar4);
  if (iVar3 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetParticleRangeId(Solver, LODIndex) != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x5ab,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar3 = GetNumParticles(this,iVar4);
  iVar4 = GetParticleRangeId(this,param_1,iVar4);
  pTVar5 = FClothingSimulationSolver::GetParticleInvMassesView(param_1,&local_18,iVar4);
  __return_storage_ptr__->ArrayNum = iVar3;
  __return_storage_ptr__->DataPtr = pTVar5->DataPtr;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<float_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetParticleNormals @ 14dbfdcf0

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationCloth::GetParticleNormals
          (FClothingSimulationCloth *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar5;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar6;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_18;
  
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x599,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  pTVar6 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar6 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar4 = *(int *)&pTVar6->field_0x8;
  iVar3 = GetParticleRangeId(this,param_1,iVar4);
  if (iVar3 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetParticleRangeId(Solver, LODIndex) != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x59b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar3 = GetNumParticles(this,iVar4);
  iVar4 = GetParticleRangeId(this,param_1,iVar4);
  Chaos::Private::GetParticleConstArrayView<Chaos::TVector<float,3>_>
            (&local_18,&param_1->Evolution,&param_1->PBDEvolution,iVar4,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
             &(param_1->Normals).field_0x8);
  __return_storage_ptr__->DataPtr = local_18.DataPtr;
  __return_storage_ptr__->ArrayNum = iVar3;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetParticlePositions @ 14dbfe110

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationCloth::GetParticlePositions
          (FClothingSimulationCloth *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar5;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar6;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_18;
  
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x591,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  pTVar6 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar6 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar4 = *(int *)&pTVar6->field_0x8;
  iVar3 = GetParticleRangeId(this,param_1,iVar4);
  if (iVar3 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetParticleRangeId(Solver, LODIndex) != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x593,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar3 = GetNumParticles(this,iVar4);
  iVar4 = GetParticleRangeId(this,param_1,iVar4);
  pTVar5 = FClothingSimulationSolver::GetParticleXsView(param_1,&local_18,iVar4);
  __return_storage_ptr__->ArrayNum = iVar3;
  __return_storage_ptr__->DataPtr = pTVar5->DataPtr;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetParticleRangeId @ 14dbfe260

int __thiscall
Chaos::FClothingSimulationCloth::GetParticleRangeId
          (FClothingSimulationCloth *this,FClothingSimulationSolver *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar5;
  
  if ((-1 < param_2) && (param_2 < (this->LODData).ArrayNum)) {
    uVar3 = 0;
    if (param_2 < (this->LODData).ArrayNum) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    pTVar5 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                     *)(*(longlong *)
                         ((this->LODData).AllocatorInstance.Data + (longlong)param_2 * 8) + 0x428),
                    param_1);
    if (pTVar5 == (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
                   *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    return *(int *)&pTVar5->field_0xc;
  }
  return -1;
}

// GetParticleRangeId @ 14dbfe350

int __thiscall
Chaos::FClothingSimulationCloth::GetParticleRangeId
          (FClothingSimulationCloth *this,FClothingSimulationSolver *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar4;
  
  pTVar4 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar4 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = *(int *)&pTVar4->field_0x8;
  if ((-1 < iVar3) && (iVar3 < (this->LODData).ArrayNum)) {
    iVar3 = GetParticleRangeId(this,param_1,iVar3);
    return iVar3;
  }
  return -1;
}

// GetParticleVelocities @ 14dbfe480

TArrayView<Chaos::TVector<float,3>_const_,int> * __thiscall
Chaos::FClothingSimulationCloth::GetParticleVelocities
          (FClothingSimulationCloth *this,
          TArrayView<Chaos::TVector<float,3>_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar5;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar6;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_18;
  
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x5a1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  pTVar6 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar6 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar4 = *(int *)&pTVar6->field_0x8;
  iVar3 = GetParticleRangeId(this,param_1,iVar4);
  if (iVar3 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetParticleRangeId(Solver, LODIndex) != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x5a3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  iVar3 = GetNumParticles(this,iVar4);
  iVar4 = GetParticleRangeId(this,param_1,iVar4);
  pTVar5 = FClothingSimulationSolver::GetParticleVsView(param_1,&local_18,iVar4);
  __return_storage_ptr__->ArrayNum = iVar3;
  __return_storage_ptr__->DataPtr = pTVar5->DataPtr;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetPropertyString @ 14dbff200

FString * __thiscall
Chaos::FClothingSimulationCloth::GetPropertyString
          (FClothingSimulationCloth *this,FString *__return_storage_ptr__,
          FClothingSimulationSolver *param_1,FName *param_2)

{
  FClothingSimulationConfig *this_00;
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FString *pFVar3;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar4;
  FCollectionPropertyConstFacade *this_01;
  FCollectionPropertyConstFacade *local_res8;
  FString local_38;
  FString local_28;
  
  if ((this->Config == (FClothingSimulationConfig *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Config",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x361,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  this_00 = this->Config;
  pTVar4 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if ((pTVar4 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  this_01 = (FCollectionPropertyConstFacade *)
            FClothingSimulationConfig::GetProperties(this_00,*(int *)&pTVar4->field_0x8);
  ::FString::FString(&local_28,"");
  _Src.Data = local_28.Data.AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_28.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_28.Data.ArrayNum * 2);
  }
  local_res8 = this_01;
  Softs::FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_01,__return_storage_ptr__,param_2,(<lambda_1> *)&local_res8,&local_38,(int *)0x0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetReferenceBoneIndex @ 14dbff750

int __thiscall
Chaos::FClothingSimulationCloth::GetReferenceBoneIndex(FClothingSimulationCloth *this)

{
  int iVar1;
  
  if (this->Mesh != (FClothingSimulationMesh *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dbff75b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(this->Mesh->_padding_ + 0xa8))();
    return iVar1;
  }
  return -1;
}

// GetTethers @ 14dc00250

TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FClothingSimulationCloth::GetTethers
          (FClothingSimulationCloth *this,FClothingSimulationSolver *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar5;
  TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> *pTVar6;
  
  pTVar5 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar5 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> *)
               (*pcVar2)();
      return pTVar6;
    }
  }
  uVar1 = *(uint *)&pTVar5->field_0x8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Chaos::FClothingSimulationCloth::GetTethers'::__l2::
             _dynamic_atexit_destructor_for__EmptyTethers__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->LODData).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar1 < (this->LODData).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> *
                 )(*pcVar2)();
        return pTVar6;
      }
    }
    return (TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> *)
           (*(longlong *)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) + 0x148
           );
  }
  return &EmptyTethers;
}

// GetTriangleMesh @ 14dc00740

FTriangleMesh * __thiscall
Chaos::FClothingSimulationCloth::GetTriangleMesh
          (FClothingSimulationCloth *this,FClothingSimulationSolver *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar6;
  FTriangleMesh *pFVar7;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar8;
  
  pTVar6 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar6 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTriangleMesh *)(*pcVar3)();
      return pFVar7;
    }
  }
  uVar1 = *(uint *)&pTVar6->field_0x8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FTriangleMesh::FTriangleMesh(&EmptyTriangleMesh);
      atexit(`Chaos::FClothingSimulationCloth::GetTriangleMesh'::__l2::
             _dynamic_atexit_destructor_for__EmptyTriangleMesh__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->LODData).ArrayNum)) {
    iVar2 = (this->LODData).ArrayNum;
    if ((param_1->PBDEvolution).Ptr == (FPBDEvolution *)0x0) {
      uVar5 = 0;
      if ((int)uVar1 < iVar2) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FTriangleMesh *)(*pcVar3)();
          return pFVar7;
        }
      }
      return (FTriangleMesh *)
             (*(longlong *)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) +
             0x2e0);
    }
    uVar5 = 0;
    if ((int)uVar1 < iVar2) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FTriangleMesh *)(*pcVar3)();
        return pFVar7;
      }
    }
    pTVar8 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                     *)(*(longlong *)
                         ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) + 0x428
                       ),param_1);
    if (pTVar8 == (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
                   *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FTriangleMesh *)(*pcVar3)();
        return pFVar7;
      }
    }
    return (FTriangleMesh *)&pTVar8->field_0x10;
  }
  return &EmptyTriangleMesh;
}

// GetWeightMapByName @ 14dc00d10

TArrayView<float_const_,int> * __thiscall
Chaos::FClothingSimulationCloth::GetWeightMapByName
          (FClothingSimulationCloth *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1,FString *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar6;
  TArrayView<float_const_,int> *pTVar7;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar8;
  undefined8 *puVar9;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  pTVar6 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar6 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar7;
    }
  }
  uVar1 = *(uint *)&pTVar6->field_0x8;
  if (((int)uVar1 < 0) || ((this->LODData).ArrayNum <= (int)uVar1)) {
    local_18 = 0;
    puVar9 = &local_18;
    local_10 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)uVar1 < (this->LODData).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArrayView<float_const_,int> *)(*pcVar2)();
        return pTVar7;
      }
    }
    pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                     *)(*(longlong *)
                         ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) + 8),
                    param_2);
    if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
      local_28 = 0;
      puVar9 = &local_28;
      uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
    }
    else {
      puVar9 = &local_28;
      local_28 = *(undefined8 *)&pTVar8->field_0x10;
      uStack_20 = *(undefined8 *)&pTVar8->field_0x18;
    }
  }
  uVar3 = puVar9[1];
  __return_storage_ptr__->DataPtr = (float *)*puVar9;
  *(undefined8 *)&__return_storage_ptr__->ArrayNum = uVar3;
  return __return_storage_ptr__;
}

// GetWeightMapByProperty @ 14dc00e50

TArrayView<float_const_,int> * __thiscall
Chaos::FClothingSimulationCloth::GetWeightMapByProperty
          (FClothingSimulationCloth *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          FClothingSimulationSolver *param_1,FName *param_2)

{
  FClothingSimulationConfig *this_00;
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  TArrayView<float_const_,int> *pTVar9;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar10;
  FCollectionPropertyConstFacade *this_01;
  undefined8 *puVar11;
  FCollectionPropertyConstFacade *local_res8;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  
  if ((this->Config == (FClothingSimulationConfig *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Config",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x367,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TArrayView<float_const_,int> *)(*pcVar2)();
    return pTVar9;
  }
  this_00 = this->Config;
  pTVar10 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                    *)&this->LODIndices,param_1);
  if ((pTVar10 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TArrayView<float_const_,int> *)(*pcVar2)();
    return pTVar9;
  }
  this_01 = (FCollectionPropertyConstFacade *)
            FClothingSimulationConfig::GetProperties(this_00,*(int *)&pTVar10->field_0x8);
  ::FString::FString(&local_68,"");
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res8 = (FCollectionPropertyConstFacade *)local_68.Data.AllocatorInstance.Data;
  if (local_68.Data.ArrayNum == 0) {
    local_88.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_68.Data.ArrayNum,
               &local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,local_res8,(longlong)local_68.Data.ArrayNum * 2);
  }
  local_res8 = this_01;
  Softs::FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_01,&local_78,param_2,(<lambda_1> *)&local_res8,&local_88,(int *)0x0);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pTVar10 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                    *)&this->LODIndices,param_1);
  if ((pTVar10 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar9 = (TArrayView<float_const_,int> *)(*pcVar2)();
    return pTVar9;
  }
  uVar7 = *(uint *)&pTVar10->field_0x8;
  if (((int)uVar7 < 0) || ((this->LODData).ArrayNum <= (int)uVar7)) {
    puVar11 = &local_48;
    local_48 = 0;
    local_40 = 0;
  }
  else {
    uVar6 = 0;
    if ((int)uVar7 < (this->LODData).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar9;
    }
    lVar1 = *(longlong *)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
    iVar8 = local_78.Data.ArrayNum + -1;
    FVar4.Data = local_78.Data.AllocatorInstance.Data;
    if (local_78.Data.ArrayNum == 0) {
      iVar8 = 0;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar4.Data);
    iVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)(lVar1 + 8),uVar7,&local_78);
    if ((iVar8 == -1) || (lVar1 = *(longlong *)(lVar1 + 8) + (longlong)iVar8 * 0x28, lVar1 == 0)) {
      local_58 = 0;
      puVar11 = &local_58;
      uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
    }
    else {
      puVar11 = &local_58;
      local_58 = *(undefined8 *)(lVar1 + 0x10);
      uStack_50 = *(longlong *)(lVar1 + 0x18);
    }
  }
  uVar3 = puVar11[1];
  __return_storage_ptr__->DataPtr = (float *)*puVar11;
  *(undefined8 *)&__return_storage_ptr__->ArrayNum = uVar3;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// PostUpdate @ 14dc094c0

void __thiscall
Chaos::FClothingSimulationCloth::PostUpdate
          (FClothingSimulationCloth *this,FClothingSimulationSolver *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar5;
  
  if (param_1 == (FClothingSimulationSolver *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Solver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                       ,0x502,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar5 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = *(uint *)&pTVar5->field_0x8;
  if (uVar1 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar1 < (this->LODData).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
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
    FLODData::UpdateNormals
              (*(FLODData **)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8),
               param_1);
  }
  return;
}

// PreSubstep @ 14dc09a70

void __thiscall
Chaos::FClothingSimulationCloth::PreSubstep
          (FClothingSimulationCloth *this,FClothingSimulationSolver *param_1,float param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar5;
  
  pTVar5 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar5 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = *(uint *)&pTVar5->field_0x8;
  if (uVar1 != 0xffffffff) {
    uVar4 = 0;
    if ((int)uVar1 < (this->LODData).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
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
    FLODData::PreSubstepAccessoryMeshes
              (*(FLODData **)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar1 * 8),
               param_1,param_2);
  }
  return;
}

// PreUpdate @ 14dc0a1b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulationCloth::PreUpdate
          (FClothingSimulationCloth *this,FClothingSimulationSolver *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_ClothUpdateCollisions> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FScriptContainerElement *pFVar13;
  FNameEntryId FVar14;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                         ,0x3b3,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->Mesh == (FClothingSimulationMesh *)0x0) {
    return;
  }
  FVar14.Value = 0;
  FVar9 = StatPtr_STAT_ClothUpdateCollisions;
  if (StatPtr_STAT_ClothUpdateCollisions ==
      (FThreadSafeStaticStat<FStat_STAT_ClothUpdateCollisions>)0x0) {
    pFVar8 = ::FName::FName(&local_78,"STAT_ClothUpdateCollisions");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_ClothUpdateCollisions>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothUpdateCollisions,*pFVar8,
                       L"Update Collisions","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar7 = false;
  bVar6 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar11.Value;
        local_res18.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                   ,0x3bd);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar11.Value;
      uStackX_c = uVar10;
      local_70 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      FVar14.Value = local_70.ComparisonIndex.Value;
      goto LAB_14dc0a36e;
    }
  }
  bVar5 = false;
  FVar12 = local_70;
LAB_14dc0a36e:
  pFVar13 = (this->Colliders).AllocatorInstance.Data;
  iVar3 = (this->Colliders).ArrayNum;
  pFVar2 = pFVar13 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Colliders).ArrayNum != iVar3) {
      `TCheckedPointerIterator<Chaos::FClothingSimulationCollider_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar13 == pFVar2) break;
    FClothingSimulationCollider::PreUpdate(*(FClothingSimulationCollider **)pFVar13,param_1,this);
    pFVar13 = pFVar13 + 8;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
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
      local_60[0].NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_60[0].NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_res20);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
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

// Remove @ 14dc0d1c0

void __thiscall
Chaos::FClothingSimulationCloth::Remove
          (FClothingSimulationCloth *this,FClothingSimulationSolver *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FClothingSimulationSolver *local_res8;
  
  pFVar5 = (this->Colliders).AllocatorInstance.Data;
  iVar2 = (this->Colliders).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Colliders).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FClothingSimulationCollider_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar5 == pFVar1) break;
    FClothingSimulationCollider::Remove(*(FClothingSimulationCollider **)pFVar5,param_1,this);
    pFVar5 = pFVar5 + 8;
  }
  local_res8 = param_1;
  if (*(int *)&(this->LODIndices).field_0x8 != *(int *)&(this->LODIndices).field_0x34) {
    uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
    ::RemoveImpl<Chaos::FClothingSimulationSolver_const_*>
              ((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                *)&this->LODIndices,uVar4 >> 0x10 ^ uVar4,&local_res8);
  }
  pFVar5 = (this->LODData).AllocatorInstance.Data;
  iVar2 = (this->LODData).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LODData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth::FLODData,TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar5 == pFVar1) break;
    lVar3 = *(longlong *)pFVar5;
    local_res8 = param_1;
    if (*(int *)(lVar3 + 0x430) != *(int *)(lVar3 + 0x45c)) {
      uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
      ::RemoveImpl<Chaos::FClothingSimulationSolver_const_*>
                ((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                  *)(lVar3 + 0x428),uVar4 >> 0x10 ^ uVar4,&local_res8);
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// RemoveCollider @ 14dc0de80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulationCloth::RemoveCollider
          (FClothingSimulationCloth *this,FClothingSimulationCollider *param_1)

{
  FScriptContainerElement *pFVar1;
  FClothingSimulationSolver *this_00;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FClothingSimulationCollider *local_res10;
  TArray<Chaos::FClothingSimulationSolver_*,TSizedDefaultAllocator<32>_> local_28;
  
  pFVar1 = (this->Colliders).AllocatorInstance.Data;
  pFVar6 = pFVar1;
  if (pFVar1 != pFVar1 + (longlong)(this->Colliders).ArrayNum * 8) {
    while (*(FClothingSimulationCollider **)pFVar6 != param_1) {
      pFVar6 = pFVar6 + 8;
      if (pFVar6 == pFVar1 + (longlong)(this->Colliders).ArrayNum * 8) {
        return;
      }
    }
    if ((int)((longlong)pFVar6 - (longlong)pFVar1 >> 3) != -1) {
      local_res10 = param_1;
      TArray<Chaos::FClothingSimulationCollider_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                (&this->Colliders,&local_res10,Default);
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      TMapBase<Chaos::FClothingSimulationSolver_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>_>
      ::GetKeys<TSizedDefaultAllocator<32>_>
                ((TMapBase<Chaos::FClothingSimulationSolver_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>_>
                  *)&this->LODIndices,&local_28);
      iVar2 = local_28.ArrayNum;
      uVar4 = (ulonglong)local_28.ArrayNum;
      pFVar1 = local_28.AllocatorInstance.Data + uVar4 * 8;
      FVar5.Data = local_28.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar4 != iVar2) {
          `TCheckedPointerIterator<Chaos::FClothingSimulationSolver_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (FVar5.Data == pFVar1) break;
        this_00 = *(FClothingSimulationSolver **)FVar5.Data;
        FClothingSimulationCollider::Remove(local_res10,this_00,this);
        pFVar6 = (this_00->Cloths).AllocatorInstance.Data;
        pFVar3 = pFVar6;
        if (pFVar6 == pFVar6 + (longlong)(this_00->Cloths).ArrayNum * 8) {
LAB_14dc0df8c:
          uVar4 = local_28._8_8_ & 0xffffffff;
          FVar5.Data = FVar5.Data + 8;
        }
        else {
          do {
            if (*(FClothingSimulationCloth **)pFVar3 == this) {
              if ((int)((longlong)pFVar3 - (longlong)pFVar6 >> 3) != -1) {
                FClothingSimulationSolver::RefreshCloths(this_00);
              }
              goto LAB_14dc0df8c;
            }
            pFVar3 = pFVar3 + 8;
          } while (pFVar3 != pFVar6 + (longlong)(this_00->Cloths).ArrayNum * 8);
          uVar4 = local_28._8_8_ & 0xffffffff;
          FVar5.Data = FVar5.Data + 8;
        }
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RemoveColliders @ 14dc0dfd0

void __thiscall Chaos::FClothingSimulationCloth::RemoveColliders(FClothingSimulationCloth *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FClothingSimulationSolver *this_00;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  int local_res10;
  TArray<Chaos::FClothingSimulationSolver_*,TSizedDefaultAllocator<32>_> local_48;
  
  pFVar2 = (this->Colliders).AllocatorInstance.Data;
  (this->Colliders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar7 = (this->Colliders).ArrayNum;
  (this->Colliders).ArrayNum = 0;
  (this->Colliders).ArrayMax = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_res10 = iVar7;
  TMapBase<Chaos::FClothingSimulationSolver_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<Chaos::FClothingSimulationSolver_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>_>
              *)&this->LODIndices,&local_48);
  iVar3 = local_48.ArrayNum;
  uVar5 = (ulonglong)local_48.ArrayNum;
  pFVar1 = local_48.AllocatorInstance.Data + uVar5 * 8;
  FVar8.Data = local_48.AllocatorInstance.Data;
  do {
    while( true ) {
      if ((int)uVar5 != iVar3) {
        `TCheckedPointerIterator<Chaos::FClothingSimulationSolver_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar8.Data == pFVar1) {
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        return;
      }
      this_00 = *(FClothingSimulationSolver **)FVar8.Data;
      for (pFVar6 = pFVar2; pFVar6 != pFVar2 + (longlong)iVar7 * 8; pFVar6 = pFVar6 + 8) {
        FClothingSimulationCollider::Remove(*(FClothingSimulationCollider **)pFVar6,this_00,this);
      }
      pFVar6 = (this_00->Cloths).AllocatorInstance.Data;
      pFVar4 = pFVar6;
      if (pFVar6 != pFVar6 + (longlong)(this_00->Cloths).ArrayNum * 8) break;
LAB_14dc0e0b3:
      uVar5 = local_48._8_8_ & 0xffffffff;
      FVar8.Data = FVar8.Data + 8;
      iVar7 = local_res10;
    }
    do {
      if (*(FClothingSimulationCloth **)pFVar4 == this) {
        if ((int)((longlong)pFVar4 - (longlong)pFVar6 >> 3) != -1) {
          FClothingSimulationSolver::RefreshCloths(this_00);
        }
        goto LAB_14dc0e0b3;
      }
      pFVar4 = pFVar4 + 8;
    } while (pFVar4 != pFVar6 + (longlong)(this_00->Cloths).ArrayNum * 8);
    uVar5 = local_48._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 8;
    iVar7 = local_res10;
  } while( true );
}

// SetColliders @ 14dc11530

void __thiscall
Chaos::FClothingSimulationCloth::SetColliders
          (FClothingSimulationCloth *this,
          TArray<Chaos::FClothingSimulationCollider_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<Chaos::FClothingSimulationCollider_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FClothingSimulationSolver *this_00;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  int local_res10;
  TArray<Chaos::FClothingSimulationSolver_*,TSizedDefaultAllocator<32>_> local_48;
  
  pFVar3 = (this->Colliders).AllocatorInstance.Data;
  pTVar1 = &this->Colliders;
  piVar2 = &(this->Colliders).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_res10 = (this->Colliders).ArrayNum;
  (this->Colliders).ArrayNum = 0;
  *piVar2 = 0;
  if (pTVar1 != param_1) {
    iVar9 = param_1->ArrayNum;
    pFVar4 = (param_1->AllocatorInstance).Data;
    (this->Colliders).ArrayNum = iVar9;
    if (iVar9 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar9,0,&pTVar1->AllocatorInstance,iVar9,piVar2);
      memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar9 << 3);
    }
  }
  iVar9 = local_res10;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  TMapBase<Chaos::FClothingSimulationSolver_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<Chaos::FClothingSimulationSolver_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>_>
              *)&this->LODIndices,&local_48);
  iVar5 = local_48.ArrayNum;
  uVar7 = (ulonglong)local_48.ArrayNum;
  pFVar4 = local_48.AllocatorInstance.Data + uVar7 * 8;
  FVar10.Data = local_48.AllocatorInstance.Data;
  do {
    while( true ) {
      if ((int)uVar7 != iVar5) {
        `TCheckedPointerIterator<Chaos::FClothingSimulationSolver_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar10.Data == pFVar4) {
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        return;
      }
      this_00 = *(FClothingSimulationSolver **)FVar10.Data;
      for (pFVar8 = pFVar3; pFVar8 != pFVar3 + (longlong)iVar9 * 8; pFVar8 = pFVar8 + 8) {
        FClothingSimulationCollider::Remove(*(FClothingSimulationCollider **)pFVar8,this_00,this);
      }
      pFVar8 = (this_00->Cloths).AllocatorInstance.Data;
      pFVar6 = pFVar8;
      if (pFVar8 != pFVar8 + (longlong)(this_00->Cloths).ArrayNum * 8) break;
LAB_14dc11676:
      uVar7 = local_48._8_8_ & 0xffffffff;
      FVar10.Data = FVar10.Data + 8;
      iVar9 = local_res10;
    }
    do {
      if (*(FClothingSimulationCloth **)pFVar6 == this) {
        if ((int)((longlong)pFVar6 - (longlong)pFVar8 >> 3) != -1) {
          FClothingSimulationSolver::RefreshCloths(this_00);
        }
        goto LAB_14dc11676;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar8 + (longlong)(this_00->Cloths).ArrayNum * 8);
    uVar7 = local_48._8_8_ & 0xffffffff;
    FVar10.Data = FVar10.Data + 8;
    iVar9 = local_res10;
  } while( true );
}

// SetConfig @ 14dc119a0

void __thiscall
Chaos::FClothingSimulationCloth::SetConfig
          (FClothingSimulationCloth *this,FClothingSimulationConfig *param_1)

{
  FScriptContainerElement *pFVar1;
  TSharedRef<FManagedArrayCollection,1> *pTVar2;
  FClothingSimulationConfig *this_00;
  FClothingSimulationConfig *pFVar3;
  FClothingSimulationConfig *pFVar4;
  TSharedPtr<FManagedArrayCollection,1> *pTVar5;
  TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> local_68;
  FManagedArrayCollection *local_58;
  FSharedReferencer<1> local_50;
  longlong local_48;
  FSharedReferencer<1> FStack_40;
  TSharedRef<FManagedArrayCollection,1> local_38;
  
  pFVar3 = (FClothingSimulationConfig *)0x0;
  pTVar5 = &this->PropertyCollection;
  if (pTVar5->Object != (FManagedArrayCollection *)0x0) {
    pFVar4 = this->Config;
    if (pFVar4 != (FClothingSimulationConfig *)0x0) {
      DestructItems<TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>,int>
                ((TUniquePtr<Chaos::Softs::FCollectionPropertyMutableFacade,TDefaultDelete<Chaos::Softs::FCollectionPropertyMutableFacade>_>
                  *)(pFVar4->Properties).AllocatorInstance.Data,(pFVar4->Properties).ArrayNum);
      pFVar1 = (pFVar4->Properties).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<TSharedPtr<FManagedArrayCollection,1>,int>
                ((TSharedPtr<FManagedArrayCollection,1> *)
                 (pFVar4->PropertyCollections).AllocatorInstance.Data,
                 (pFVar4->PropertyCollections).ArrayNum);
      pFVar1 = (pFVar4->PropertyCollections).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ::operator_delete(pFVar4,0x28);
    }
    local_48 = 0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TSharedPtr<FManagedArrayCollection,1> *)&local_48) {
      pTVar5->Object = (FManagedArrayCollection *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PropertyCollection).SharedReferenceCount,&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
  }
  if (param_1 == (FClothingSimulationConfig *)0x0) {
    pTVar2 = MakeShared<FManagedArrayCollection,1>(&local_38);
    local_50.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
    local_58 = pTVar2->Object;
    if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = &this->PropertyCollection;
    if (pTVar5 != (TSharedPtr<FManagedArrayCollection,1> *)&local_58) {
      pTVar5->Object = local_58;
      local_58 = (FManagedArrayCollection *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PropertyCollection).SharedReferenceCount,&local_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    this_00 = ::operator_new(0x28);
    pFVar4 = pFVar3;
    if (this_00 != (FClothingSimulationConfig *)0x0) {
      local_38.SharedReferenceCount.ReferenceController =
           (this->PropertyCollection).SharedReferenceCount.ReferenceController;
      local_38.Object = pTVar5->Object;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,1,0,&local_68.AllocatorInstance,1,&local_68.ArrayMax);
      ConstructItems<TSharedPtr<FManagedArrayCollection_const_,1>,TSharedPtr<FManagedArrayCollection_const_,1>,int>
                (local_68.AllocatorInstance.Data,
                 (TSharedPtr<FManagedArrayCollection_const_,1> *)&local_38,1);
      this_00->bIsLegacySingleLOD = false;
      (this_00->PropertyCollections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->PropertyCollections).ArrayNum = 0;
      (this_00->PropertyCollections).ArrayMax = 0;
      (this_00->Properties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->Properties).ArrayNum = 0;
      (this_00->Properties).ArrayMax = 0;
      FClothingSimulationConfig::Initialize(this_00,&local_68);
      pFVar3 = (FClothingSimulationConfig *)&DAT_00000007;
      pFVar4 = this_00;
    }
    this->Config = pFVar4;
    if (((ulonglong)pFVar3 & 4) != 0) {
      pFVar3 = (FClothingSimulationConfig *)(ulonglong)((uint)pFVar3 & 0xfffffffb);
      DestructItems<TSharedPtr<FManagedArrayCollection_const_,1>,int>
                ((TSharedPtr<FManagedArrayCollection_const_,1> *)local_68.AllocatorInstance.Data,
                 local_68.ArrayNum);
      if ((TSharedPtr<FManagedArrayCollection_const_,1> *)local_68.AllocatorInstance.Data !=
          (TSharedPtr<FManagedArrayCollection_const_,1> *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
    }
    if (((ulonglong)pFVar3 & 2) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
  }
  else {
    this->Config = param_1;
  }
  return;
}

// SetMesh @ 14dc130f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FClothingSimulationCloth::SetMesh
          (FClothingSimulationCloth *this,FClothingSimulationMesh *param_1)

{
  FScriptContainerElement *pFVar1;
  FClothingSimulationMesh *pFVar2;
  FClothingSimulationSolver *this_00;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  FCollectionPropertyConstFacade *this_01;
  int *piVar9;
  FCollectionPropertyFacade *pFVar10;
  FLODData *this_02;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  uint uVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  undefined8 *puVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ForElementType<unsigned_int> FVar21;
  TArray<TUniquePtr<Chaos::FClothingSimulationCloth::FLODData,TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData>_>,TSizedDefaultAllocator<32>_>
  *pTVar22;
  int iVar23;
  TArrayView<float_const_,int> *pTVar24;
  undefined1 auStackY_2a8 [32];
  undefined1 local_258 [4];
  uint local_254;
  FLODData *local_250;
  void *local_248;
  uint local_240;
  TArray<Chaos::FClothingSimulationSolver_*,TSizedDefaultAllocator<32>_> local_238;
  uint local_228;
  uint uStack_224;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_220;
  undefined4 local_218;
  uint uStack_214;
  uint uStack_210;
  undefined4 uStack_20c;
  void *local_208;
  uint local_200;
  undefined4 local_1f8;
  int local_1f4;
  TPairInitializer<FString_&&,TArrayView<float_const_,int>_const_&> local_1f0;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1d8;
  undefined8 local_1b8;
  undefined4 local_1b0;
  FString *local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  FString local_188;
  undefined1 local_178 [32];
  ForElementType<unsigned_int> local_158;
  uint local_150;
  int local_14c;
  int local_148;
  int local_144;
  FScriptContainerElement local_140 [8];
  ForAnyElementType local_138;
  uint local_130;
  undefined1 local_128 [72];
  undefined4 local_e0;
  undefined1 local_d8 [72];
  undefined4 local_90;
  undefined1 local_88 [72];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  iVar23 = 0;
  this->Mesh = param_1;
  if (param_1 == (FClothingSimulationMesh *)0x0) {
    local_254 = 0;
  }
  else {
    local_254 = (**(code **)(param_1->_padding_ + 8))(param_1);
    if ((int)local_254 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_254);
    }
  }
  uVar13 = local_254;
  pTVar22 = &this->LODData;
  pFVar1 = (pTVar22->AllocatorInstance).Data;
  iVar7 = (this->LODData).ArrayNum;
  pTVar24 = (TArrayView<float_const_,int> *)&(this->LODData).ArrayMax;
  local_1f0.Value = pTVar24;
  if (*(int *)pTVar24 < (int)local_254) {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationCloth::FLODData,TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationCloth::FLODData,TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData>_>
                *)pFVar1,iVar7);
    (this->LODData).ArrayNum = 0;
    if (*(uint *)pTVar24 != uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar13,&(this->LODData).AllocatorInstance,0,(int *)pTVar24);
    }
  }
  else {
    DestructItems<TUniquePtr<Chaos::FClothingSimulationCloth::FLODData,TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData>_>,int>
              ((TUniquePtr<Chaos::FClothingSimulationCloth::FLODData,TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData>_>
                *)pFVar1,iVar7);
    (this->LODData).ArrayNum = 0;
  }
  if (uVar13 != 0) {
    do {
      uVar14 = 0;
      (**(code **)(this->Mesh->_padding_ + 0x70))(this->Mesh,&local_248);
      uVar13 = local_240;
      local_178._0_8_ = (FScriptContainerElement *)0x0;
      local_178._8_8_ = 0;
      local_158 = (ForElementType<unsigned_int>)0x0;
      local_150 = 0;
      local_14c = 0x80;
      local_148 = -1;
      local_144 = 0;
      local_138.Data = (FScriptContainerElement *)0x0;
      local_130 = 0;
      if (local_240 != 0) {
        if ((int)local_240 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)local_240);
        }
        TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_178,local_240);
        if (uVar13 < 4) {
          uVar13 = 1;
        }
        else {
          uVar19 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          local_1f8 = (undefined4)lVar4;
          uVar13 = 1 << ((byte)lVar4 & 0x1f);
        }
        if ((local_130 == 0) || ((int)local_130 < (int)uVar13)) {
          local_130 = uVar13;
          if (local_138.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_138,0,0,4);
          }
          if (uVar13 != 0) {
            uVar18 = uVar13;
            if (uVar13 < 2) {
              if (local_138.Data != (FScriptContainerElement *)0x0) {
                uVar18 = 0;
                goto LAB_14dc13294;
              }
            }
            else {
LAB_14dc13294:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_138,0,uVar18,4);
            }
            if (0 < (int)uVar13) {
              uVar20 = (ulonglong)uVar13;
              uVar19 = uVar14;
              do {
                FVar15.Data = local_140;
                if (local_138.Data != (FScriptContainerElement *)0x0) {
                  FVar15.Data = local_138.Data;
                }
                uVar8 = uVar19 & (longlong)(int)uVar13 - 1U;
                uVar19 = uVar19 + 1;
                *(undefined4 *)(FVar15.Data + uVar8 * 4) = 0xffffffff;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
          }
          if (local_130 != 0) {
            pTStack_220 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
            local_228 = 0;
            uStack_224 = 1;
            uStack_214 = 0;
            uStack_210 = 0;
            uVar19 = uVar14;
            if (local_150 != 0) {
              FVar21 = (ForElementType<unsigned_int>)((longlong)local_178 + 0x10);
              if (local_158 != (ForElementType<unsigned_int>)0x0) {
                FVar21 = local_158;
              }
              uVar13 = *(uint *)FVar21;
              uVar20 = uVar14;
              while (uVar13 == 0) {
                uStack_210 = (int)uVar20 + 0x20;
                uVar20 = (ulonglong)uStack_210;
                iVar7 = (int)uVar19;
                local_228 = iVar7 + 1;
                uVar19 = (ulonglong)local_228;
                if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 <
                    (int)local_228) goto LAB_14dc1339b;
                uVar13 = ((uint *)((longlong)FVar21 + 4))[iVar7];
              }
              uStack_224 = -uVar13 & uVar13;
              uVar19 = (ulonglong)uStack_224 * 2 + 1;
              lVar4 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                }
              }
              local_1f4 = (int)lVar4;
              uStack_214 = local_1f4 + -1 + uStack_210;
              uVar19 = (ulonglong)uStack_214;
              if ((int)local_150 < (int)uStack_214) {
LAB_14dc1339b:
                uVar19 = (ulonglong)local_150;
                uStack_214 = local_150;
              }
            }
            local_218 = 0xffffffff;
            local_1e0 = (longlong *)local_178;
            local_1d8._padding_ = CONCAT44(uStack_224,local_228);
            local_1d8.CurrentBitIndex = uStack_214;
            local_1d8.UnvisitedBitMask = 0xffffffff;
            local_1d8._28_4_ = uStack_20c;
            local_1d8.BaseBitIndex = uStack_210;
            local_1d8.Array = pTStack_220;
            if ((int)uVar19 < (int)local_150) {
              do {
                iVar17 = (int)uVar19;
                puVar16 = (undefined8 *)(*local_1e0 + (longlong)iVar17 * 0x28);
                iVar7 = *(int *)(*local_1e0 + 8 + (longlong)iVar17 * 0x28);
                if (iVar7 == 0) {
                  pwVar12 = L"";
                  iVar7 = 0;
                }
                else {
                  pwVar12 = (wchar_t *)*puVar16;
                  iVar7 = iVar7 + -1;
                }
                uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar12);
                uVar13 = local_130 - 1 & uVar13;
                *(uint *)((longlong)puVar16 + 0x24) = uVar13;
                FVar15.Data = local_140;
                if (local_138.Data != (FScriptContainerElement *)0x0) {
                  FVar15.Data = local_138.Data;
                }
                uVar19 = (longlong)(int)local_130 - 1U & (longlong)(int)uVar13;
                *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(FVar15.Data + uVar19 * 4);
                *(int *)(FVar15.Data + uVar19 * 4) = iVar17;
                local_1d8.UnvisitedBitMask = local_1d8.UnvisitedBitMask & ~local_1d8._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1d8);
                uVar19 = (ulonglong)(uint)local_1d8.CurrentBitIndex;
              } while (local_1d8.CurrentBitIndex < (local_1d8.Array)->NumBits);
            }
          }
        }
      }
      (**(code **)(this->Mesh->_padding_ + 0x80))(this->Mesh,&local_208,iVar23);
      if ((local_200 != local_240) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6081852327415775815>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                             ,0x247,"WeightMapArray.Num() == WeightMapNames.Num()"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar19 = uVar14;
      if (0 < (int)local_240) {
        do {
          uVar13 = (uint)uVar14;
          if (((int)uVar13 < 0) || ((int)local_200 <= (int)uVar13)) {
            local_1b8 = 0;
            local_1b0 = 0;
            puVar16 = &local_1b8;
          }
          else {
            uVar18 = 0;
            if ((int)uVar13 < (int)local_200) {
              uVar18 = ~uVar13 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            puVar16 = &local_198;
            local_198 = *(undefined8 *)(uVar19 + (longlong)local_208);
            uStack_190 = ((undefined8 *)(uVar19 + (longlong)local_208))[1];
          }
          uVar18 = 0;
          if ((int)uVar13 < (int)local_240) {
            uVar18 = ~uVar13 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_1a8 = ::FName::ToString((FName *)((longlong)local_248 + (longlong)(int)uVar13 * 8),
                                        &local_188);
          local_1a0 = puVar16;
          TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_&&,TArrayView<float_const_,int>_const_&>_>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)local_178,&local_1f0,(bool *)&local_1a8);
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          uVar14 = (ulonglong)(uVar13 + 1);
          uVar19 = uVar19 + 0x10;
          pTVar24 = local_1f0.Value;
        } while ((int)(uVar13 + 1) < (int)local_240);
      }
      (**(code **)(this->Mesh->_padding_ + 0x88))(this->Mesh,local_88,iVar23);
      (**(code **)(this->Mesh->_padding_ + 0x90))(this->Mesh,local_d8,iVar23);
      (**(code **)(this->Mesh->_padding_ + 0x98))(this->Mesh,local_128,iVar23);
      this_01 = (FCollectionPropertyConstFacade *)
                FClothingSimulationConfig::GetProperties(this->Config,iVar23);
      piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
               Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *)&this_01->KeyNameIndices,UseGeodesicTethersName);
      if ((piVar9 == (int *)0x0) || (*piVar9 == -1)) {
        bVar6 = true;
      }
      else {
        bVar6 = Softs::FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                          (this_01,*piVar9,&this_01->LowValueArray);
      }
      pFVar10 = FClothingSimulationConfig::GetProperties(this->Config,iVar23);
      pFVar2 = this->Mesh;
      this_02 = ::operator_new(0x490);
      if (this_02 == (FLODData *)0x0) {
        local_250 = (FLODData *)0x0;
      }
      else {
        local_250 = FLODData::FLODData(this_02,pFVar2,iVar23,bVar6,
                                       (TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
                                        *)local_178,
                                       (TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
                                        *)local_88,
                                       (TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
                                        *)local_d8,
                                       (TMap<FString,TArrayView<int_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>_>
                                        *)local_128,pFVar10);
      }
      pFVar1 = (pTVar22->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_250) &&
          ((FScriptContainerElement *)&local_250 < pFVar1 + (longlong)*(int *)&pTVar24->DataPtr * 8)
          ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (this->LODData).ArrayNum;
      if (iVar7 == *(int *)&pTVar24->DataPtr) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar22->AllocatorInstance,(int *)pTVar24);
        (this->LODData).ArrayNum = iVar7;
      }
      (this->LODData).ArrayNum = iVar7 + 1;
      *(FLODData **)((pTVar22->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_250;
      local_250 = (FLODData *)0x0;
      local_e0 = 0;
      if ((void *)local_128._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_128._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TArrayView<int_const_,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TArrayView<int_const_,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TArrayView<int_const_,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_128);
      local_90 = 0;
      if ((void *)local_d8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_d8._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      local_40 = 0;
      if ((void *)local_88._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      if (local_208 != (void *)0x0) {
        FMemory::Free(local_208);
      }
      local_130 = 0;
      if (local_138.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TArrayView<float_const_,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TArrayView<float_const_,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TArrayView<float_const_,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_178);
      if (local_248 != (void *)0x0) {
        FMemory::Free(local_248);
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 < (int)local_254);
  }
  local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.ArrayNum = 0;
  local_238.ArrayMax = 0;
  TMapBase<Chaos::FClothingSimulationSolver_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<Chaos::FClothingSimulationSolver_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>_>
              *)&this->LODIndices,&local_238);
  iVar23 = local_238.ArrayNum;
  pFVar1 = local_238.AllocatorInstance.Data + (longlong)local_238.ArrayNum * 8;
  FVar15.Data = local_238.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_238.ArrayNum != iVar23) {
        `TCheckedPointerIterator<Chaos::FClothingSimulationSolver_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_258);
      }
      if (FVar15.Data == pFVar1) {
        if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.AllocatorInstance.Data);
        }
        return;
      }
      this_00 = *(FClothingSimulationSolver **)FVar15.Data;
      pFVar3 = (this_00->Cloths).AllocatorInstance.Data;
      pFVar11 = pFVar3;
      if (pFVar3 != pFVar3 + (longlong)(this_00->Cloths).ArrayNum * 8) break;
LAB_14dc1389a:
      FVar15.Data = FVar15.Data + 8;
    }
    do {
      if (*(FClothingSimulationCloth **)pFVar11 == this) {
        if ((int)((longlong)pFVar11 - (longlong)pFVar3 >> 3) != -1) {
          FClothingSimulationSolver::RefreshCloths(this_00);
        }
        goto LAB_14dc1389a;
      }
      pFVar11 = pFVar11 + 8;
    } while (pFVar11 != pFVar3 + (longlong)(this_00->Cloths).ArrayNum * 8);
    FVar15.Data = FVar15.Data + 8;
  } while( true );
}

// Update @ 14dc1dc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FClothingSimulationCloth::Update
          (FClothingSimulationCloth *this,FClothingSimulationSolver *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FLODData *pFVar3;
  longlong lVar4;
  FClothingSimulationMesh *pFVar5;
  FPBDEvolution *pFVar6;
  TVector<float> *pTVar7;
  undefined1 *puVar8;
  FClothConstraints *this_00;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  float fVar18;
  TConsoleVariableData<bool> *pTVar19;
  FClothingSimulationSolver *pFVar20;
  int iVar21;
  bool bVar22;
  bool bVar23;
  char cVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar28;
  undefined8 *puVar29;
  FName *pFVar30;
  FThreadSafeStaticStat<FStat_STAT_ClothUpdateCollisions> FVar31;
  TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
  *pTVar32;
  FCollectionPropertyFacade *pFVar33;
  TVector<float,3> *pTVar34;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar35;
  FPAndInvM *pFVar36;
  TVector<float,3> *pTVar37;
  FPAndInvM *pFVar38;
  FTriangleMesh *pFVar39;
  FVelocityAndPressureField *pFVar40;
  int *piVar41;
  FCollectionPropertyConstFacade *pFVar42;
  TVector<float,3> *pTVar43;
  ulonglong uVar44;
  undefined1 *puVar45;
  undefined8 *puVar46;
  FName FVar47;
  FScriptContainerElement *pFVar48;
  undefined1 uVar49;
  uint uVar50;
  longlong lVar51;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar52;
  longlong lVar53;
  FClothingSimulationSolver *pFVar54;
  uint uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auStackY_3f8 [32];
  uint local_378;
  undefined1 local_374;
  undefined1 local_373;
  undefined1 local_372;
  undefined1 local_371;
  undefined1 local_370 [4];
  int local_36c;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *local_368;
  FName local_360;
  int local_358;
  int local_354;
  uint local_350;
  FClothingSimulationSolver *local_348;
  undefined1 local_338 [8];
  float local_330;
  ForAnyElementType local_328;
  int local_320;
  int local_31c;
  ForAnyElementType local_318;
  int local_310;
  int local_30c;
  FColor_u_0 local_308 [2];
  float local_300;
  float fStack_2fc;
  float local_2f8;
  float local_2f0;
  float fStack_2ec;
  float local_2e8;
  undefined **local_2e0;
  FClothingSimulationMesh *local_2d8;
  FName local_2d0;
  uint local_2c8;
  FName local_2c0;
  FName local_2b8;
  TVector<float> local_2a8;
  TVector<float,3> local_29c;
  TVector<float>_u_0 local_290;
  TVector<float> local_284;
  TArrayView<int_const_,int> local_278;
  TArrayView<UE::Math::TVector<float>_const_,int> local_268;
  TVector<float> local_258;
  TArrayView<Chaos::TVector<float,3>,int> local_248;
  TArrayView<Chaos::TVector<float,3>,int> local_238;
  TArrayView<UE::Math::TVector<float>_const_,int> local_228;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_218;
  undefined8 local_208;
  float local_200;
  undefined8 local_1fc;
  float local_1f4;
  TRigidTransform<double,3> local_1e8;
  TArrayView<Chaos::TVector<float,3>,int> local_188;
  FName local_178;
  TVector<float,3> local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  TArrayView<Chaos::TVector<float,3>,int> local_148;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [96];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  local_348 = param_1;
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Solver",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                          ,0x3c8,L""), bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (this->Mesh == (FClothingSimulationMesh *)0x0) {
    return;
  }
  pTVar28 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                    *)&this->LODIndices,param_1);
  local_368 = pTVar28;
  if ((pTVar28 == (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L""), bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_350 = *(uint *)&pTVar28->field_0x8;
  if (((this->bUseLODIndexOverride == false) || (iVar25 = this->LODIndexOverride, iVar25 < 0)) ||
     ((this->LODData).ArrayNum <= iVar25)) {
    iVar25 = (**(code **)(this->Mesh->_padding_ + 0x10))();
  }
  *(int *)&pTVar28->field_0x8 = iVar25;
  local_1e8._0_8_ = *(undefined8 *)&this->ReferenceSpaceTransform;
  local_1e8._8_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x8;
  local_1e8._16_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x10;
  local_1e8._24_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x18;
  local_1e8._32_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x20;
  local_1e8._40_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x28;
  local_1e8._48_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x30;
  local_1e8._56_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x38;
  local_1e8._64_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x40;
  local_1e8._72_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x48;
  local_1e8._80_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x50;
  local_1e8._88_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x58;
  puVar29 = (undefined8 *)(**(code **)(this->Mesh->_padding_ + 0xb0))(this->Mesh,local_118);
  uVar10 = puVar29[1];
  uVar11 = puVar29[4];
  uVar12 = puVar29[5];
  uVar13 = puVar29[2];
  uVar14 = puVar29[3];
  uVar15 = puVar29[6];
  uVar16 = puVar29[7];
  *(undefined8 *)&this->ReferenceSpaceTransform = *puVar29;
  *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x8 = uVar10;
  local_150 = __real_3ff0000000000000;
  *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x10 = uVar13;
  *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x18 = uVar14;
  *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x20 = uVar11;
  *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x28 = uVar12;
  uStack_158 = _UNK_150689688;
  local_160 = ___xmm_3ff00000000000003ff0000000000000;
  *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x30 = uVar15;
  *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x38 = uVar16;
  *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x40 = local_160;
  *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x48 = uStack_158;
  *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x50 = local_150;
  *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x58 = 0;
  FVar31 = StatPtr_STAT_ClothUpdateCollisions;
  if (StatPtr_STAT_ClothUpdateCollisions ==
      (FThreadSafeStaticStat<FStat_STAT_ClothUpdateCollisions>)0x0) {
    pFVar30 = ::FName::FName(&local_178,"STAT_ClothUpdateCollisions");
    FVar31 = (FThreadSafeStaticStat<FStat_STAT_ClothUpdateCollisions>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothUpdateCollisions,*pFVar30,
                        L"Update Collisions","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar47 = *(FName *)FVar31;
  bVar22 = false;
  bVar23 = false;
  local_2b8.ComparisonIndex.Value = 0;
  local_2b8.Number = 0;
  if ((FVar47.ComparisonIndex.Value.Value == 0) && (FVar47.Number == 0)) {
LAB_14dc1df33:
    bVar17 = false;
    FVar47 = local_2b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_308[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_308[0]._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
      bVar22 = false;
      bVar23 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2c0.ComparisonIndex.Value = FVar47.ComparisonIndex.Value.Value;
        local_2c0.Number = FVar47.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2c0,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                   ,0x3dd);
        bVar22 = true;
        bVar23 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dc1df33;
    local_360 = FVar47;
    FThreadStats::AddMessage(FVar47,CycleScopeStart);
    bVar17 = true;
  }
  pFVar48 = (this->Colliders).AllocatorInstance.Data;
  iVar25 = (this->Colliders).ArrayNum;
  pFVar1 = pFVar48 + (longlong)iVar25 * 8;
  while( true ) {
    if ((this->Colliders).ArrayNum != iVar25) {
      local_370[0] = 0;
      `TCheckedPointerIterator<Chaos::FClothingSimulationCollider_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_370);
    }
    if (pFVar48 == pFVar1) break;
    FClothingSimulationCollider::Update(*(FClothingSimulationCollider **)pFVar48,param_1,this);
    pFVar48 = pFVar48 + 8;
  }
  if (bVar23) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar47,CycleScopeEnd);
  }
  uVar50 = local_350;
  lVar53 = (longlong)(int)local_350;
  iVar25 = GetParticleRangeId(this,param_1,local_350);
  pTVar28 = local_368;
  local_36c = iVar25;
  local_358 = GetParticleRangeId(this,param_1,*(int *)&local_368->field_0x8);
  if ((iVar25 == -1) && (local_358 == -1)) {
    return;
  }
  if ((this->Config == (FClothingSimulationConfig *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Config",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                          ,0x3ee,L""), bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar27 = *(int *)&pTVar28->field_0x8;
  if (iVar27 == -1) {
    pFVar42 = (FCollectionPropertyConstFacade *)0x0;
  }
  else {
    pFVar42 = (FCollectionPropertyConstFacade *)
              FClothingSimulationConfig::GetProperties(this->Config,iVar27);
  }
  uVar26 = *(uint *)&pTVar28->field_0x8;
  iVar27 = -1;
  local_354 = -1;
  fVar63 = 0.0;
  fVar62 = 0.0;
  local_360 = (FName)pFVar42;
  if (uVar26 != 0xffffffff) {
    uVar55 = 0;
    if ((int)uVar26 < (this->LODData).ArrayNum) {
      uVar55 = ~uVar26 >> 0x1f;
    }
    if ((uVar55 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar28 = local_368;
    FLODData::UpdateCachedProperties
              (*(FLODData **)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar26 * 8),
               this->Mesh,*(int *)&local_368->field_0x8,(FCollectionPropertyFacade *)pFVar42,false);
    uVar26 = *(uint *)&pTVar28->field_0x8;
    uVar55 = 0;
    if ((int)uVar26 < (this->LODData).ArrayNum) {
      uVar55 = ~uVar26 >> 0x1f;
    }
    if ((uVar55 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar55 = *(uint *)&pTVar28->field_0x8;
    iVar27 = *(int *)(*(longlong *)
                       ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar26 * 8) + 0x478)
    ;
    uVar26 = 0;
    if ((int)uVar55 < (this->LODData).ArrayNum) {
      uVar26 = ~uVar55 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar26 = *(uint *)&pTVar28->field_0x8;
    fVar62 = *(float *)(*(longlong *)
                         ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar55 * 8) +
                       0x47c);
    uVar55 = 0;
    if ((int)uVar26 < (this->LODData).ArrayNum) {
      uVar55 = ~uVar26 >> 0x1f;
    }
    if ((uVar55 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FLODData::UpdateAccessoryMeshes
              (*(FLODData **)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar26 * 8),
               param_1);
  }
  pTVar28 = local_368;
  FClothingSimulationMesh::Update
            (this->Mesh,param_1,uVar50,*(int *)&local_368->field_0x8,iVar25,local_358,iVar27,fVar62)
  ;
  uVar26 = *(uint *)&pTVar28->field_0x8;
  if (uVar26 == 0xffffffff) {
    local_378 = 0xffffffff;
  }
  else {
    uVar55 = 0;
    if ((int)uVar26 < (this->LODData).ArrayNum) {
      uVar55 = ~uVar26 >> 0x1f;
    }
    if ((uVar55 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar32 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                      *)(*(longlong *)
                          ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar26 * 8) +
                        0x428),param_1);
    if ((pTVar32 ==
         (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
          *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L""), bVar22)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_378 = *(uint *)&pTVar32->field_0x158;
    lVar51 = (longlong)(int)local_378;
    if ((local_378 != 0xffffffff) &&
       (local_354 = GetParticleRangeId(this,param_1,local_378), local_354 != -1)) {
      uVar55 = ~local_378 >> 0x1f;
      uVar26 = 0;
      if ((int)local_378 < (this->LODData).ArrayNum) {
        uVar26 = uVar55;
      }
      if ((uVar26 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar3 = *(FLODData **)((this->LODData).AllocatorInstance.Data + lVar51 * 8);
      pFVar33 = FClothingSimulationConfig::GetProperties(this->Config,local_378);
      FLODData::UpdateCachedProperties(pFVar3,this->Mesh,local_378,pFVar33,false);
      uVar26 = 0;
      if ((int)local_378 < (this->LODData).ArrayNum) {
        uVar26 = uVar55;
      }
      if ((uVar26 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar4 = *(longlong *)((this->LODData).AllocatorInstance.Data + lVar51 * 8);
      if ((param_1 == (FClothingSimulationSolver *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Solver",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                              ,0x1cf,L""), bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar32 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                        *)(lVar4 + 0x428),param_1);
      if ((pTVar32 ==
           (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
            *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L""), bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (*(int *)&pTVar32->field_0xc != -1) {
        FClothingSimulationSolver::EnableParticles(param_1,*(int *)&pTVar32->field_0xc,true);
      }
      pFVar5 = this->Mesh;
      uVar26 = 0;
      if ((int)local_378 < (this->LODData).ArrayNum) {
        uVar26 = uVar55;
      }
      if ((uVar26 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      fVar62 = *(float *)(*(longlong *)((this->LODData).AllocatorInstance.Data + lVar51 * 8) + 0x47c
                         );
      uVar26 = 0;
      if ((int)local_378 < (this->LODData).ArrayNum) {
        uVar26 = uVar55;
      }
      if ((uVar26 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FClothingSimulationMesh::Update
                (pFVar5,param_1,local_378,local_378,local_354,local_354,
                 *(int *)(*(longlong *)((this->LODData).AllocatorInstance.Data + lVar51 * 8) + 0x478
                         ),fVar62);
      uVar26 = 0;
      if ((int)local_378 < (this->LODData).ArrayNum) {
        uVar26 = uVar55;
      }
      if ((uVar26 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FLODData::UpdateAccessoryMeshes
                (*(FLODData **)((this->LODData).AllocatorInstance.Data + lVar51 * 8),param_1);
      iVar25 = local_36c;
    }
  }
  fVar62 = __real_42c80000;
  FVar47 = local_360;
  if (*(uint *)&pTVar28->field_0x8 == uVar50) goto LAB_14dc1eb20;
  if (uVar50 != 0xffffffff) {
    if (uVar50 != local_378) {
      uVar26 = 0;
      if ((int)uVar50 < (this->LODData).ArrayNum) {
        uVar26 = ~uVar50 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar51 = *(longlong *)((this->LODData).AllocatorInstance.Data + lVar53 * 8);
      if ((param_1 == (FClothingSimulationSolver *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Solver",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                              ,0x1cf,L""), bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar32 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                        *)(lVar51 + 0x428),param_1);
      if ((pTVar32 ==
           (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
            *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L""), bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (*(int *)&pTVar32->field_0xc != -1) {
        FClothingSimulationSolver::EnableParticles(param_1,*(int *)&pTVar32->field_0xc,false);
      }
    }
    uVar26 = 0;
    if ((int)uVar50 < (this->LODData).ArrayNum) {
      uVar26 = ~uVar50 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar32 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                      *)(*(longlong *)((this->LODData).AllocatorInstance.Data + lVar53 * 8) + 0x428)
                     ,param_1);
    if ((pTVar32 ==
         (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
          *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L""), bVar22)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar50 = *(uint *)&pTVar32->field_0x158;
    if (((uVar50 != 0xffffffff) && (uVar50 != local_378)) &&
       (uVar50 != *(uint *)&pTVar28->field_0x8)) {
      uVar26 = 0;
      if ((int)uVar50 < (this->LODData).ArrayNum) {
        uVar26 = ~uVar50 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FLODData::Enable(*(FLODData **)
                        ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar50 * 8),param_1
                       ,false);
    }
  }
  uVar50 = *(uint *)&pTVar28->field_0x8;
  if (uVar50 == 0xffffffff) {
    this->NumActiveKinematicParticles = 0;
    this->NumActiveDynamicParticles = 0;
    FVar47 = local_360;
    goto LAB_14dc1eb20;
  }
  uVar55 = 0;
  uVar26 = uVar55;
  if ((int)uVar50 < (this->LODData).ArrayNum) {
    uVar26 = ~uVar50 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar53 = *(longlong *)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar50 * 8);
  if ((param_1 == (FClothingSimulationSolver *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Solver",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                          ,0x1cf,L""), bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar32 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                    *)(lVar53 + 0x428),param_1);
  if ((pTVar32 ==
       (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
        *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x27b,L""), bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (*(int *)&pTVar32->field_0xc != -1) {
    FClothingSimulationSolver::EnableParticles(param_1,*(int *)&pTVar32->field_0xc,true);
  }
  uVar50 = *(uint *)&pTVar28->field_0x8;
  uVar26 = uVar55;
  if ((int)uVar50 < (this->LODData).ArrayNum) {
    uVar26 = ~uVar50 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this->NumActiveKinematicParticles =
       *(int *)(*(longlong *)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar50 * 8) +
               0x480);
  uVar50 = *(uint *)&pTVar28->field_0x8;
  if ((int)uVar50 < (this->LODData).ArrayNum) {
    uVar55 = ~uVar50 >> 0x1f;
  }
  if ((uVar55 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar27 = local_358;
  this->NumActiveDynamicParticles =
       *(int *)(*(longlong *)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar50 * 8) +
               0x484);
  if (((this->bNeedsReset == false) && (local_358 != -1)) && (iVar25 != -1)) {
    pFVar5 = this->Mesh;
    pTVar34 = FClothingSimulationSolver::GetParticleVs(param_1,local_358);
    pTVar35 = FClothingSimulationSolver::GetParticleXsView(param_1,&local_148,iVar27);
    pTVar43 = pTVar35->DataPtr;
    pFVar36 = FClothingSimulationSolver::GetParticlePandInvMs(param_1,iVar27);
    pTVar37 = FClothingSimulationSolver::GetParticleVs(param_1,local_36c);
    pFVar38 = FClothingSimulationSolver::GetParticlePandInvMs(local_348,local_36c);
    Chaos::Private::GetParticleArrayView<Chaos::TVector<float,3>_>
              (&local_188,&local_348->Evolution,&local_348->PBDEvolution,local_36c,
               (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
               &(local_348->Normals).field_0x8);
    pTVar28 = local_368;
    bVar22 = FClothingSimulationMesh::WrapDeformLOD
                       (pFVar5,local_350,*(int *)&local_368->field_0x8,local_188.DataPtr,pFVar38,
                        pTVar37,pFVar36,pTVar43,pTVar34);
    param_1 = local_348;
    if (!bVar22) goto LAB_14dc1ea5c;
    this->bNeedsReset = false;
    uVar50 = *(uint *)&pTVar28->field_0x8;
    uVar26 = 0;
    if ((int)uVar50 < (this->LODData).ArrayNum) {
      uVar26 = ~uVar50 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    param_1 = local_348;
    FLODData::ResetAccessoryMeshes
              (*(FLODData **)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar50 * 8),
               local_348);
  }
  else {
LAB_14dc1ea5c:
    this->bNeedsReset = true;
  }
  FVar47 = local_360;
  if ((param_1->PBDEvolution).Ptr != (FPBDEvolution *)0x0) {
    uVar50 = *(uint *)&pTVar28->field_0x8;
    uVar26 = 0;
    if ((int)uVar50 < (this->LODData).ArrayNum) {
      uVar26 = ~uVar50 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar53 = *(longlong *)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar50 * 8);
    pFVar39 = GetTriangleMesh(this,param_1);
    pFVar6 = (param_1->PBDEvolution).Ptr;
    FVar47 = local_360;
    if (pFVar6 != (FPBDEvolution *)0x0) {
      pFVar40 = Softs::FPBDEvolution::GetVelocityAndPressureField(pFVar6,this->GroupId);
      FVar47 = local_360;
      Softs::FVelocityAndPressureField::SetGeometry
                (pFVar40,pFVar39,(FCollectionPropertyConstFacade *)local_360,
                 (TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
                  *)(lVar53 + 8),fVar62);
    }
  }
LAB_14dc1eb20:
  fVar57 = __real_7f7fffff;
  fVar18 = __real_3f800000;
  if ((*(int *)&pTVar28->field_0x8 != -1) && (local_358 != -1)) {
    fStack_2ec = __real_7f7fffff;
    local_2f0 = __real_7f7fffff;
    local_2e8 = __real_7f7fffff;
    fStack_2fc = __real_7f7fffff;
    local_300 = __real_7f7fffff;
    local_2f8 = __real_7f7fffff;
    local_36c = CONCAT31(local_36c._1_3_,2);
    fVar58 = fVar57;
    fVar59 = fVar18;
    if (this->bNeedsReset == false) {
      if (this->bNeedsTeleport == false) {
        piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)&((FCollectionPropertyConstFacade *)FVar47)->KeyNameIndices,
                         VelocityScaleSpaceName);
        if ((piVar41 == (int *)0x0) || (*piVar41 == -1)) {
          local_36c = 2;
        }
        else {
          local_36c = Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                                ((FCollectionPropertyConstFacade *)FVar47,*piVar41,
                                 &((FCollectionPropertyConstFacade *)FVar47)->LowValueArray);
        }
        pTVar52 = &((FCollectionPropertyConstFacade *)FVar47)->LowValueArray;
        piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)&((FCollectionPropertyConstFacade *)FVar47)->KeyNameIndices,
                         LinearVelocityScaleName);
        fVar60 = __real_3f400000;
        fVar56 = __real_3f400000;
        fVar61 = __real_3f400000;
        local_330 = __real_3f400000;
        if ((piVar41 != (int *)0x0) && (*piVar41 != -1)) {
          Softs::FCollectionPropertyConstFacade::
          GetValue<UE::Math::TVector<float>,UE::Math::TVector<float>_>
                    ((FCollectionPropertyConstFacade *)FVar47,&local_284,*piVar41,pTVar52);
          fVar56 = (float)local_284.field0_0x0._0_8_;
          fVar61 = (float)((ulonglong)local_284.field0_0x0._0_8_ >> 0x20);
          local_330 = local_284.field0_0x0._s_0.Z;
        }
        local_338._4_4_ = fVar61;
        local_338._0_4_ = fVar56;
        piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)&((FCollectionPropertyConstFacade *)FVar47)->KeyNameIndices,
                         AngularVelocityScaleName);
        if ((piVar41 != (int *)0x0) && (*piVar41 != -1)) {
          fVar60 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                             ((FCollectionPropertyConstFacade *)FVar47,*piVar41,pTVar52);
        }
        piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)&((FCollectionPropertyConstFacade *)FVar47)->KeyNameIndices,
                         MaxVelocityScaleName);
        if ((piVar41 != (int *)0x0) && (*piVar41 != -1)) {
          fVar59 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                             ((FCollectionPropertyConstFacade *)FVar47,*piVar41,pTVar52);
        }
        piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)&((FCollectionPropertyConstFacade *)FVar47)->KeyNameIndices,
                         MaxLinearVelocityName);
        if ((piVar41 == (int *)0x0) || (*piVar41 == -1)) {
          local_208 = CONCAT44(fVar57,fVar57);
          local_200 = fVar57;
          fVar56 = fVar57;
          fVar61 = fVar57;
          local_2e8 = fVar57;
        }
        else {
          Softs::FCollectionPropertyConstFacade::
          GetValue<UE::Math::TVector<float>,UE::Math::TVector<float>_>
                    ((FCollectionPropertyConstFacade *)FVar47,&local_258,*piVar41,pTVar52);
          fVar56 = (float)local_258.field0_0x0._0_8_;
          fVar61 = (float)((ulonglong)local_258.field0_0x0._0_8_ >> 0x20);
          local_2e8 = local_258.field0_0x0._s_0.Z;
        }
        fStack_2ec = fVar61;
        local_2f0 = fVar56;
        piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)&((FCollectionPropertyConstFacade *)FVar47)->KeyNameIndices,
                         MaxLinearAccelerationName);
        if ((piVar41 == (int *)0x0) || (*piVar41 == -1)) {
          local_1fc = CONCAT44(fVar57,fVar57);
          local_1f4 = fVar57;
          fVar56 = fVar57;
          fVar61 = fVar57;
          local_2f8 = fVar57;
        }
        else {
          Softs::FCollectionPropertyConstFacade::
          GetValue<UE::Math::TVector<float>,UE::Math::TVector<float>_>
                    ((FCollectionPropertyConstFacade *)FVar47,&local_2a8,*piVar41,pTVar52);
          fVar56 = (float)local_2a8.field0_0x0._0_8_;
          fVar61 = (float)((ulonglong)local_2a8.field0_0x0._0_8_ >> 0x20);
          local_2f8 = local_2a8.field0_0x0._s_0.Z;
        }
        fStack_2fc = fVar61;
        local_300 = fVar56;
        piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)&((FCollectionPropertyConstFacade *)FVar47)->KeyNameIndices,
                         MaxAngularVelocityName);
        if ((piVar41 != (int *)0x0) && (*piVar41 != -1)) {
          fVar58 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                             ((FCollectionPropertyConstFacade *)FVar47,*piVar41,pTVar52);
        }
        piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)&((FCollectionPropertyConstFacade *)FVar47)->KeyNameIndices,
                         MaxAngularAccelerationName);
        if ((piVar41 != (int *)0x0) && (*piVar41 != -1)) {
          fVar57 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                             ((FCollectionPropertyConstFacade *)FVar47,*piVar41,pTVar52);
        }
        uVar49 = false;
      }
      else {
        local_338 = (undefined1  [8])0x0;
        local_330 = 0.0;
        *(undefined8 *)&this->AppliedReferenceSpaceAngularVelocity = 0;
        *(undefined8 *)&(this->AppliedReferenceSpaceAngularVelocity).field_0x8 = 0;
        *(undefined8 *)&(this->AppliedReferenceSpaceAngularVelocity).field_0x10 = 0;
        *(undefined8 *)&this->AppliedReferenceSpaceVelocity = 0;
        *(undefined8 *)&(this->AppliedReferenceSpaceVelocity).field_0x8 = 0;
        *(undefined8 *)&(this->AppliedReferenceSpaceVelocity).field_0x10 = 0;
        fVar60 = 0.0;
        uVar49 = true;
        if (5 < (byte)LogChaosCloth._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
        }
      }
    }
    else {
      local_1e8._0_8_ = *(undefined8 *)&this->ReferenceSpaceTransform;
      local_1e8._8_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x8;
      local_1e8._16_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x10;
      local_1e8._24_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x18;
      local_1e8._32_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x20;
      local_1e8._40_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x28;
      local_338 = (undefined1  [8])0x3f8000003f800000;
      local_1e8._48_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x30;
      local_1e8._56_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x38;
      local_330 = 1.0;
      local_1e8._64_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x40;
      local_1e8._72_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x48;
      local_372 = 1;
      local_1e8._80_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x50;
      local_1e8._88_8_ = *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x58;
      *(undefined8 *)&this->AppliedReferenceSpaceAngularVelocity = 0;
      *(undefined8 *)&(this->AppliedReferenceSpaceAngularVelocity).field_0x8 = 0;
      *(undefined8 *)&(this->AppliedReferenceSpaceAngularVelocity).field_0x10 = 0;
      *(undefined8 *)&this->AppliedReferenceSpaceVelocity = 0;
      *(undefined8 *)&(this->AppliedReferenceSpaceVelocity).field_0x8 = 0;
      *(undefined8 *)&(this->AppliedReferenceSpaceVelocity).field_0x10 = 0;
      uVar50 = *(uint *)&local_368->field_0x8;
      uVar26 = 0;
      if ((int)uVar50 < (this->LODData).ArrayNum) {
        uVar26 = ~uVar50 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FLODData::ResetStartPose
                (*(FLODData **)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar50 * 8),
                 param_1);
      local_350 = (this->Colliders).ArrayNum;
      uVar44 = (ulonglong)(int)local_350;
      pFVar54 = (FClothingSimulationSolver *)(this->Colliders).AllocatorInstance.Data;
      local_348 = (FClothingSimulationSolver *)((longlong)&pFVar54->field_0x0 + uVar44 * 8);
      while( true ) {
        pFVar20 = local_348;
        if ((this->Colliders).ArrayNum != (int)uVar44) {
          local_374 = 0;
          `TCheckedPointerIterator<Chaos::FClothingSimulationCollider_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_374);
        }
        if (pFVar54 == pFVar20) break;
        lVar53 = *(longlong *)pFVar54;
        puVar46 = *(undefined8 **)(lVar53 + 0x20);
        iVar25 = *(int *)(lVar53 + 0x28);
        puVar29 = puVar46 + iVar25;
        while( true ) {
          if (*(int *)(lVar53 + 0x28) != iVar25) {
            local_373 = 0;
            `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCollider::FLODData,TDefaultDelete<Chaos::FClothingSimulationCollider::FLODData>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_373);
          }
          if (puVar46 == puVar29) break;
          FClothingSimulationCollider::FLODData::ResetStartPose((FLODData *)*puVar46,param_1,this);
          puVar46 = puVar46 + 1;
        }
        uVar44 = (ulonglong)local_350;
        pFVar54 = (FClothingSimulationSolver *)&pFVar54->field_0x8;
      }
      if ((local_378 != 0xffffffff) && (local_354 != -1)) {
        uVar50 = 0;
        if ((int)local_378 < (this->LODData).ArrayNum) {
          uVar50 = ~local_378 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar3 = *(FLODData **)
                  ((this->LODData).AllocatorInstance.Data + (longlong)(int)local_378 * 8);
        if ((param_1 == (FClothingSimulationSolver *)0x0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Solver",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                                ,0x1db,L""), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar32 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData,0>,FDefaultSetAllocator>
                          *)&pFVar3->SolverData,param_1);
        if ((pTVar32 ==
             (TTuple<Chaos::FClothingSimulationSolver_*,Chaos::FClothingSimulationCloth::FLODData::FSolverData>
              *)0x0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*(int *)&pTVar32->field_0xc != -1) {
          FClothingSimulationSolver::ResetStartPose
                    (param_1,*(int *)&pTVar32->field_0xc,pFVar3->NumParticles);
          FLODData::ResetAccessoryMeshes(pFVar3,param_1);
        }
      }
      FVar47 = local_360;
      fVar60 = fVar18;
      uVar49 = local_372;
      if (5 < (byte)LogChaosCloth._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
        FVar47 = local_360;
        uVar49 = local_372;
      }
    }
    piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
              Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    *)&((FCollectionPropertyConstFacade *)FVar47)->KeyNameIndices,
                   FictitiousAngularScaleName);
    fVar56 = fVar18;
    if ((piVar41 != (int *)0x0) && (*piVar41 != -1)) {
      fVar56 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                         ((FCollectionPropertyConstFacade *)FVar47,*piVar41,
                          &((FCollectionPropertyConstFacade *)FVar47)->LowValueArray);
    }
    FClothingSimulationSolver::SetReferenceVelocityScale
              (param_1,this->GroupId,&local_1e8,&this->ReferenceSpaceTransform,
               &this->AppliedReferenceSpaceVelocity,&this->AppliedReferenceSpaceAngularVelocity,
               (EChaosSoftsSimulationSpace)local_36c,(TVector<float,3> *)local_338,
               (TVector<float,3> *)&local_2f0,(TVector<float,3> *)&local_300,fVar60,fVar58,fVar57,
               fVar56,fVar59,(bool)uVar49);
    pTVar28 = local_368;
    if ((this->bNeedsReset != false) || (this->bNeedsTeleport != false)) {
      *(undefined8 *)&this->AppliedReferenceSpaceAngularVelocity = 0;
      *(undefined8 *)&(this->AppliedReferenceSpaceAngularVelocity).field_0x8 = 0;
      *(undefined8 *)&(this->AppliedReferenceSpaceAngularVelocity).field_0x10 = 0;
      *(undefined8 *)&this->AppliedReferenceSpaceVelocity = 0;
      *(undefined8 *)&(this->AppliedReferenceSpaceVelocity).field_0x8 = 0;
      *(undefined8 *)&(this->AppliedReferenceSpaceVelocity).field_0x10 = 0;
    }
    if ((param_1->PBDEvolution).Ptr == (FPBDEvolution *)0x0) {
      uVar50 = *(uint *)&local_368->field_0x8;
      uVar26 = 0;
      if ((int)uVar50 < (this->LODData).ArrayNum) {
        uVar26 = ~uVar50 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FClothingSimulationSolver::SetProperties
                (param_1,local_358,(FCollectionPropertyConstFacade *)FVar47,
                 (TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
                  *)(*(longlong *)
                      ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar50 * 8) + 8));
      iVar25 = local_354;
      if ((local_378 != 0xffffffff) && (local_354 != -1)) {
        uVar50 = 0;
        if ((int)local_378 < (this->LODData).ArrayNum) {
          uVar50 = ~local_378 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar53 = *(longlong *)
                  ((this->LODData).AllocatorInstance.Data + (longlong)(int)local_378 * 8);
        pFVar42 = (FCollectionPropertyConstFacade *)
                  FClothingSimulationConfig::GetProperties(this->Config,local_378);
        FClothingSimulationSolver::SetProperties
                  (param_1,iVar25,pFVar42,
                   (TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
                    *)(lVar53 + 8));
      }
    }
    else {
      pTVar43 = GetGravity(this,&local_170,param_1);
      pFVar6 = (param_1->PBDEvolution).Ptr;
      if (pFVar6 != (FPBDEvolution *)0x0) {
        local_29c._0_8_ = *(undefined8 *)pTVar43;
        local_29c._8_4_ = *(undefined4 *)&pTVar43->field_0x8;
        Softs::FPBDEvolution::SetGravity(pFVar6,&local_29c,this->GroupId);
      }
      piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&((FCollectionPropertyConstFacade *)FVar47)->KeyNameIndices,
                     UsePointBasedWindModelName);
      if ((piVar41 == (int *)0x0) || (*piVar41 == -1)) {
        bVar22 = false;
      }
      else {
        bVar22 = Softs::FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                           ((FCollectionPropertyConstFacade *)FVar47,*piVar41,
                            &((FCollectionPropertyConstFacade *)FVar47)->LowValueArray);
      }
      FClothingSimulationSolver::AddExternalForces(param_1,this->GroupId,bVar22);
      pTVar19 = ClothingSimulationClothConsoleVariables::CVarLegacyDisablesAccurateWind.Ref;
      bVar23 = IsInParallelGameThread();
      if ((bVar23) || (bVar23 = IsInGameThread(), bVar23)) {
        lVar53 = 0;
      }
      else {
        lVar53 = 1;
      }
      if ((bVar22 == false) || (pTVar19->ShadowedValue[lVar53] == false)) {
        bVar22 = true;
      }
      else {
        bVar22 = false;
      }
      uVar50 = *(uint *)&local_368->field_0x8;
      uVar26 = 0;
      if ((int)uVar50 < (this->LODData).ArrayNum) {
        uVar26 = ~uVar50 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar6 = (param_1->PBDEvolution).Ptr;
      lVar53 = *(longlong *)((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar50 * 8);
      if (pFVar6 != (FPBDEvolution *)0x0) {
        pFVar40 = Softs::FPBDEvolution::GetVelocityAndPressureField(pFVar6,this->GroupId);
        Softs::FVelocityAndPressureField::SetProperties
                  (pFVar40,(FCollectionPropertyConstFacade *)FVar47,
                   (TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
                    *)(lVar53 + 8),fVar62,bVar22);
      }
      piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&((FCollectionPropertyConstFacade *)FVar47)->KeyNameIndices,
                     Softs::FVelocityAndPressureField::WindVelocityName);
      if ((piVar41 == (int *)0x0) || (*piVar41 == -1)) {
        fVar57 = 0.0;
        fVar58 = 0.0;
        local_290._s_0.Z = 0.0;
      }
      else {
        Softs::FCollectionPropertyConstFacade::
        GetValue<UE::Math::TVector<float>,UE::Math::TVector<float>_>
                  ((FCollectionPropertyConstFacade *)FVar47,(TVector<float> *)&local_290._s_0,
                   *piVar41,&((FCollectionPropertyConstFacade *)FVar47)->LowValueArray);
        fVar58 = (float)((ulonglong)local_290._0_8_ >> 0x20);
        local_348 = (FClothingSimulationSolver *)local_290._0_8_;
        pFVar54 = local_348;
        local_348._0_4_ = (float)local_290._0_8_;
        fVar57 = local_348._0_4_;
        local_348 = pFVar54;
      }
      pFVar6 = (param_1->PBDEvolution).Ptr;
      fVar59 = *(float *)&(param_1->WindVelocity).field_0x8;
      fVar60 = *(float *)&(param_1->WindVelocity).field_0x4;
      fVar56 = *(float *)&param_1->WindVelocity;
      if (pFVar6 != (FPBDEvolution *)0x0) {
        pFVar40 = Softs::FPBDEvolution::GetVelocityAndPressureField(pFVar6,this->GroupId);
        *(float *)&pFVar40->Velocity = fVar57 * fVar62 + fVar56;
        *(float *)&(pFVar40->Velocity).field_0x4 = fVar58 * fVar62 + fVar60;
        *(float *)&(pFVar40->Velocity).field_0x8 = local_290._s_0.Z * fVar62 + fVar59;
      }
      dVar2 = param_1->LocalSpaceScale;
      if ((dVar2 <= __real_3e45798ee0000000) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("LocalSpaceScale > (1.e-8f)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                              ,0x4b3,L""), bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      fVar57 = (float)(**(code **)(this->Mesh->_padding_ + 0xf0))();
      piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&((FCollectionPropertyConstFacade *)FVar47)->KeyNameIndices,
                     DampingCoefficientName);
      fVar62 = __real_3c23d70a;
      if ((piVar41 != (int *)0x0) && (*piVar41 != -1)) {
        fVar62 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                           ((FCollectionPropertyConstFacade *)FVar47,*piVar41,
                            &((FCollectionPropertyConstFacade *)FVar47)->LowValueArray);
      }
      pTVar52 = &((FCollectionPropertyConstFacade *)FVar47)->LowValueArray;
      piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&((FCollectionPropertyConstFacade *)FVar47)->KeyNameIndices,
                     LocalDampingCoefficientName);
      if ((piVar41 == (int *)0x0) || (*piVar41 == -1)) {
        fVar58 = 0.0;
      }
      else {
        fVar58 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                           ((FCollectionPropertyConstFacade *)FVar47,*piVar41,pTVar52);
      }
      piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&((FCollectionPropertyConstFacade *)FVar47)->KeyNameIndices,
                     CollisionThicknessName);
      fVar59 = fVar18;
      if ((piVar41 != (int *)0x0) && (*piVar41 != -1)) {
        fVar59 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                           ((FCollectionPropertyConstFacade *)FVar47,*piVar41,pTVar52);
      }
      piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&((FCollectionPropertyConstFacade *)FVar47)->KeyNameIndices,
                     FrictionCoefficientName);
      fVar60 = __real_3f4ccccd;
      if ((piVar41 != (int *)0x0) && (*piVar41 != -1)) {
        fVar60 = Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                           ((FCollectionPropertyConstFacade *)FVar47,*piVar41,pTVar52);
      }
      FClothingSimulationSolver::SetProperties
                (param_1,this->GroupId,fVar62,fVar58,(float)((double)fVar57 / dVar2) * fVar59,fVar60
                );
      piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&((FCollectionPropertyConstFacade *)FVar47)->KeyNameIndices,UseCCDName);
      if ((piVar41 == (int *)0x0) || (*piVar41 == -1)) {
        bVar22 = false;
      }
      else {
        bVar22 = Softs::FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                           ((FCollectionPropertyConstFacade *)FVar47,*piVar41,pTVar52);
      }
      pFVar6 = (param_1->PBDEvolution).Ptr;
      uVar50 = this->GroupId;
      pTVar28 = local_368;
      if (pFVar6 != (FPBDEvolution *)0x0) {
        if ((*(uint *)&pFVar6->field_0x18 <= uVar50) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("GroupId < TArrayCollection::Size()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDEvolution.h"
                                ,0xa7,L""), bVar23)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar26 = 0;
        if ((int)uVar50 < *(int *)&(pFVar6->MGroupUseCCDs).field_0x10) {
          uVar26 = ~uVar50 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(bool *)((longlong)(int)uVar50 + *(longlong *)&(pFVar6->MGroupUseCCDs).field_0x8) = bVar22;
        pTVar28 = local_368;
      }
    }
    if (this->Config->bIsLegacySingleLOD == false) {
      uVar50 = *(uint *)&pTVar28->field_0x8;
      uVar26 = 0;
      if ((int)uVar50 < (this->LODData).ArrayNum) {
        uVar26 = ~uVar50 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FLODData::Update(*(FLODData **)
                        ((this->LODData).AllocatorInstance.Data + (longlong)(int)uVar50 * 8),param_1
                       ,this);
      if (local_378 != 0xffffffff) {
        uVar50 = 0;
        if ((int)local_378 < (this->LODData).ArrayNum) {
          uVar50 = ~local_378 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FLODData::Update(*(FLODData **)
                          ((this->LODData).AllocatorInstance.Data + (longlong)(int)local_378 * 8),
                         param_1,this);
      }
    }
  }
  if (this->Config->bIsLegacySingleLOD != false) {
    pFVar48 = (this->LODData).AllocatorInstance.Data;
    iVar25 = (this->LODData).ArrayNum;
    pFVar1 = pFVar48 + (longlong)iVar25 * 8;
    while( true ) {
      if ((this->LODData).ArrayNum != iVar25) {
        local_371 = 0;
        `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth::FLODData,TDefaultDelete<Chaos::FClothingSimulationCloth::FLODData>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_371);
      }
      if (pFVar48 == pFVar1) break;
      FLODData::Update(*(FLODData **)pFVar48,param_1,this);
      pFVar48 = pFVar48 + 8;
    }
  }
  if (this->bResetRestLengthsFromMorphTarget != false) {
    if (((param_1->PBDEvolution).Ptr != (FPBDEvolution *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Solver->IsLegacySolver()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationCloth.cpp"
                            ,0x4d8,L""), bVar22)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar50 = 0;
    if (0 < (this->LODData).ArrayNum) {
      local_348 = (FClothingSimulationSolver *)0x0;
      do {
        pFVar54 = local_348;
        uVar26 = GetParticleRangeId(this,param_1,uVar50);
        puVar29 = (undefined8 *)
                  (**(code **)(this->Mesh->_padding_ + 0x40))(this->Mesh,local_138,uVar50);
        local_328.Data = (FScriptContainerElement *)0x0;
        iVar25 = *(int *)(puVar29 + 1);
        pTVar7 = (TVector<float> *)*puVar29;
        local_320 = iVar25;
        if (iVar25 == 0) {
          local_31c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,iVar25,0,&local_328,iVar25,&local_31c);
          ConstructItems<Chaos::TVector<float,3>,UE::Math::TVector<float>,int>
                    (local_328.Data,pTVar7,iVar25);
        }
        puVar29 = (undefined8 *)
                  (**(code **)(this->Mesh->_padding_ + 0x50))(this->Mesh,local_128,uVar50);
        local_318.Data = (FScriptContainerElement *)0x0;
        iVar25 = *(int *)(puVar29 + 1);
        pTVar7 = (TVector<float> *)*puVar29;
        local_310 = iVar25;
        if (iVar25 == 0) {
          local_30c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,iVar25,0,&local_318,iVar25,&local_30c);
          ConstructItems<Chaos::TVector<float,3>,UE::Math::TVector<float>,int>
                    (local_318.Data,pTVar7,iVar25);
        }
        iVar27 = (**(code **)(this->Mesh->_padding_ + 0x100))
                           (this->Mesh,uVar50,&this->ResetRestLengthsMorphTargetName);
        iVar25 = local_310;
        if (iVar27 != -1) {
          pFVar5 = this->Mesh;
          local_248.DataPtr = (TVector<float,3> *)local_318.Data;
          if ((local_310 < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar21 = local_320;
          local_248.ArrayNum = iVar25;
          local_238.DataPtr = (TVector<float,3> *)local_328.Data;
          if ((local_320 < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_238.ArrayNum = iVar21;
          cVar24 = (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,uVar50);
          pFVar54 = local_348;
          if (cVar24 != '\0') {
            local_2d0 = FClothingSimulationDefaultAccessoryMesh::DefaultAccessoryMeshName;
            local_2e0 = &___7FClothingSimulationDefaultAccessoryMesh_Chaos__6B_;
            local_2d8 = pFVar5;
            local_2c8 = uVar50;
            (**(code **)(pFVar5->_padding_ + 0x110))(pFVar5,&local_228,uVar50,iVar27);
            if ((code *)local_2e0[10] ==
                FClothingSimulationDefaultAccessoryMesh::GetMorphTargetTangentZDeltas) {
              (**(code **)(local_2d8->_padding_ + 0x118))(local_2d8,&local_268,local_2c8,iVar27);
            }
            else {
              (*(code *)local_2e0[10])(&local_2e0,&local_268,iVar27);
            }
            if ((code *)local_2e0[0xb] ==
                FClothingSimulationDefaultAccessoryMesh::GetMorphTargetIndices) {
              (**(code **)(local_2d8->_padding_ + 0x120))(local_2d8,&local_278,local_2c8,iVar27);
            }
            else {
              (*(code *)local_2e0[0xb])(&local_2e0,&local_278,iVar27);
            }
            iVar25 = local_228.ArrayNum;
            if (((iVar25 != 0) && (iVar25 == local_268.ArrayNum)) && (iVar25 == local_278.ArrayNum))
            {
              Chaos::Private::ApplyMorphTargetInternal<Chaos::TVector<float,3>_>
                        (fVar18,&local_228,&local_268,&local_278,&local_238,&local_248);
            }
            local_2e0 = &___7FClothingSimulationAccessoryMesh_Chaos__6B_;
            pFVar54 = local_348;
          }
        }
        if (*(int *)&(param_1->ClothsConstraints).field_0x8 !=
            *(int *)&(param_1->ClothsConstraints).field_0x34) {
          puVar8 = *(undefined1 **)&(param_1->ClothsConstraints).field_0x40;
          puVar45 = &(param_1->ClothsConstraints).field_0x38;
          if (puVar8 != (undefined1 *)0x0) {
            puVar45 = puVar8;
          }
          iVar25 = *(int *)(puVar45 +
                           (ulonglong)
                           (*(int *)&(param_1->ClothsConstraints).field_0x48 - 1U & uVar26) * 4);
          if (iVar25 != -1) {
            do {
              lVar53 = *(longlong *)&param_1->ClothsConstraints + (longlong)iVar25 * 0x18;
              if (*(uint *)(*(longlong *)&param_1->ClothsConstraints + (longlong)iVar25 * 0x18) ==
                  uVar26) {
                if (lVar53 != 0) goto LAB_14dc1fb34;
                goto LAB_14dc1fb0e;
              }
              iVar25 = *(int *)(lVar53 + 0x10);
            } while (iVar25 != -1);
          }
        }
        lVar53 = 0;
LAB_14dc1fb0e:
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar22) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
LAB_14dc1fb34:
        this_00 = *(FClothConstraints **)(lVar53 + 8);
        uVar26 = 0;
        if ((int)uVar50 < (this->LODData).ArrayNum) {
          uVar26 = ~uVar50 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar53 = *(longlong *)((this->LODData).AllocatorInstance.Data + (longlong)pFVar54);
        pFVar42 = (FCollectionPropertyConstFacade *)
                  FClothingSimulationConfig::GetProperties(this->Config,uVar50);
        iVar25 = local_320;
        local_218.DataPtr = (TVector<float,3> *)local_328.Data;
        if ((local_320 < 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_218.ArrayNum = iVar25;
        FClothConstraints::ResetRestLengths
                  (this_00,&local_218,pFVar42,
                   (TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
                    *)(lVar53 + 8));
        if (local_318.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Data);
        }
        if (local_328.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data);
        }
        uVar50 = uVar50 + 1;
        local_348 = (FClothingSimulationSolver *)((longlong)local_348 + 8);
      } while ((int)uVar50 < (this->LODData).ArrayNum);
    }
  }
  if (this->bNeedsReset == false) {
    this->TimeSinceLastReset = this->TimeSinceLastReset + param_1->DeltaTime;
    if (this->bNeedsTeleport == false) {
      fVar63 = param_1->DeltaTime + this->TimeSinceLastTeleport;
    }
  }
  else {
    this->TimeSinceLastReset = 0.0;
  }
  this->TimeSinceLastTeleport = fVar63;
  this->bNeedsReset = false;
  this->bNeedsTeleport = false;
  this->bResetRestLengthsFromMorphTarget = false;
  return;
}

// UpdateFromCache @ 14dc22f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FClothingSimulationCloth::UpdateFromCache
          (FClothingSimulationCloth *this,FClothingSimulationCacheData *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  undefined1 *puVar21;
  
  if (*(int *)&(param_1->CachedReferenceSpaceTransforms).field_0x8 !=
      *(int *)&(param_1->CachedReferenceSpaceTransforms).field_0x34) {
    puVar21 = *(undefined1 **)&(param_1->CachedReferenceSpaceTransforms).field_0x40;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = &(param_1->CachedReferenceSpaceTransforms).field_0x38;
    }
    uVar18 = *(uint *)(puVar21 +
                      (ulonglong)
                      (*(int *)&(param_1->CachedReferenceSpaceTransforms).field_0x48 - 1U &
                      this->GroupId) * 4);
    if (uVar18 != 0xffffffff) {
      while (puVar20 = (uint *)((longlong)(int)uVar18 * 0x80 +
                               *(longlong *)&param_1->CachedReferenceSpaceTransforms),
            *puVar20 != this->GroupId) {
        uVar18 = puVar20[0x1c];
        if (uVar18 == 0xffffffff) {
          return;
        }
      }
      puVar19 = puVar20 + 4;
      if (puVar20 == (uint *)0x0) {
        puVar19 = (uint *)0x0;
      }
      if (puVar19 != (uint *)0x0) {
        uVar18 = puVar19[1];
        uVar1 = puVar19[2];
        uVar2 = puVar19[3];
        uVar7 = puVar19[8];
        uVar8 = puVar19[9];
        uVar9 = puVar19[10];
        uVar10 = puVar19[0xb];
        uVar3 = puVar19[4];
        uVar4 = puVar19[5];
        uVar5 = puVar19[6];
        uVar6 = puVar19[7];
        uVar11 = puVar19[0xc];
        uVar12 = puVar19[0xd];
        uVar13 = puVar19[0xe];
        uVar14 = puVar19[0xf];
        *(uint *)&(this->ReferenceSpaceTransform).field_0x0 = puVar19[0];
        *(uint *)&(this->ReferenceSpaceTransform).field_0x4 = uVar18;
        *(uint *)&(this->ReferenceSpaceTransform).field_0x8 = uVar1;
        uVar15 = __real_3ff0000000000000;
        *(uint *)&(this->ReferenceSpaceTransform).field_0xc = uVar2;
        *(uint *)&(this->ReferenceSpaceTransform).field_0x10 = uVar3;
        *(uint *)&(this->ReferenceSpaceTransform).field_0x14 = uVar4;
        *(uint *)&(this->ReferenceSpaceTransform).field_0x18 = uVar5;
        *(uint *)&(this->ReferenceSpaceTransform).field_0x1c = uVar6;
        *(uint *)&(this->ReferenceSpaceTransform).field_0x20 = uVar7;
        *(uint *)&(this->ReferenceSpaceTransform).field_0x24 = uVar8;
        *(uint *)&(this->ReferenceSpaceTransform).field_0x28 = uVar9;
        uVar17 = _UNK_150689688;
        uVar16 = ___xmm_3ff00000000000003ff0000000000000;
        *(uint *)&(this->ReferenceSpaceTransform).field_0x2c = uVar10;
        *(uint *)&(this->ReferenceSpaceTransform).field_0x30 = uVar11;
        *(uint *)&(this->ReferenceSpaceTransform).field_0x34 = uVar12;
        *(uint *)&(this->ReferenceSpaceTransform).field_0x38 = uVar13;
        *(uint *)&(this->ReferenceSpaceTransform).field_0x3c = uVar14;
        *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x40 = uVar16;
        *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x48 = uVar17;
        *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x50 = uVar15;
        *(undefined8 *)&(this->ReferenceSpaceTransform).field_0x58 = 0;
      }
    }
  }
  return;
}

