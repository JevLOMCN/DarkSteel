// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 52

// FSKMClothingSimulation @ 14dc34b20

FSKMClothingSimulation * __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::FSKMClothingSimulation(FSKMClothingSimulation *this)

{
  IClothingSimulationInterface::IClothingSimulationInterface((IClothingSimulationInterface *)this);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IClothComponentAdapter_ClothAsset_Chaos_UE__6B_;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__IClothingSimulationInterface__;
  this->_padding_ = (longlong)&_vftable__for__UE__Chaos__ClothAsset__IClothComponentAdapter__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  (this->CollisionSources).Ptr = (FCollisionSources *)0x0;
  (this->ClothSimulationProxy).Object = (FClothSimulationProxy *)0x0;
  (this->ClothSimulationProxy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AssetClothSimulationProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetClothSimulationProperties).ArrayNum = 0;
  (this->AssetClothSimulationProperties).ArrayMax = 0;
  (this->LODHasAnyRenderClothMappingData).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  this->OwnerComponent = (USkeletalMeshComponent *)0x0;
  (this->LODHasAnyRenderClothMappingData).NumBits = 0;
  (this->LODHasAnyRenderClothMappingData).MaxBits = 0x80;
  this->bNeedsResetRestLengths = false;
  (this->RestLengthsMorphTargetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestLengthsMorphTargetName).Data.ArrayNum = 0;
  (this->RestLengthsMorphTargetName).Data.ArrayMax = 0;
  return this;
}

// ~FSKMClothingSimulation @ 14dc36130

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::~FSKMClothingSimulation(FSKMClothingSimulation *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<unsigned_int> FVar2;
  FCollisionSources *pFVar3;
  
  this->_padding_ = (longlong)&_vftable__for__IClothingSimulationInterface__;
  this->_padding_ = (longlong)&_vftable__for__UE__Chaos__ClothAsset__IClothComponentAdapter__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  pFVar1 = (this->RestLengthsMorphTargetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->LODHasAnyRenderClothMappingData).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  DestructItems<TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties>,int>
            ((TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties> *)
             (this->AssetClothSimulationProperties).AllocatorInstance.Data,
             (this->AssetClothSimulationProperties).ArrayNum);
  pFVar1 = (this->AssetClothSimulationProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothSimulationProxy).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->CollisionSources).Ptr;
  if (pFVar3 != (FCollisionSources *)0x0) {
    pFVar1 = (pFVar3->ExternalCollisions).Boxes.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<FClothCollisionPrim_Convex,int>
              ((FClothCollisionPrim_Convex *)
               (pFVar3->ExternalCollisions).Convexes.AllocatorInstance.Data,
               (pFVar3->ExternalCollisions).Convexes.ArrayNum);
    pFVar1 = (pFVar3->ExternalCollisions).Convexes.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pFVar3->ExternalCollisions).SphereConnections.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pFVar3->ExternalCollisions).Spheres.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>
              ((FCollisionSource *)(pFVar3->CollisionSources).AllocatorInstance.Data,
               (pFVar3->CollisionSources).ArrayNum);
    pFVar1 = (pFVar3->CollisionSources).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar3,0x60);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
  IClothingSimulationInterface::~IClothingSimulationInterface((IClothingSimulationInterface *)this);
  return;
}

// AddExternalCollisions @ 14dc385a0

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::AddExternalCollisions
          (FSKMClothingSimulation *this,FClothCollisionData *param_1)

{
  FCollisionSources *pFVar1;
  
  pFVar1 = (this->CollisionSources).Ptr;
  if (pFVar1 != (FCollisionSources *)0x0) {
    FClothCollisionData::Append(&pFVar1->ExternalCollisions,param_1);
    return;
  }
  return;
}

// AddReferencedObjects @ 14dc385c0

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::AddReferencedObjects
          (FSKMClothingSimulation *this,FReferenceCollector *param_1)

{
  int iVar1;
  TWeakObjectPtr<USkinnedMeshComponent,FWeakObjectPtr> *pTVar2;
  FCollisionSources *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)&(this->ClothSimulationProxy).Object;
  pFVar3 = (this->CollisionSources).Ptr;
  pTVar2 = &pFVar3->OwnerComponent;
  while( true ) {
    if (*(int *)&(this->ClothSimulationProxy).Object != iVar1) {
      `TCheckedPointerIterator<TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == (FCollisionSources *)(pTVar2 + (longlong)iVar1 * 6)) break;
    if (((pFVar3->OwnerComponent).WeakPtr != (FWeakObjectPtr)0x0) &&
       ((pFVar3->CollisionSources).AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,&pFVar3->CollisionSources,0,0);
    }
    pFVar3 = (FCollisionSources *)&(pFVar3->ExternalCollisions).SphereConnections.ArrayNum;
  }
  return;
}

// AppendSimulationData @ 14dc38870

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::AppendSimulationData
          (FSKMClothingSimulation *this,
          TMap<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
          *param_1,USkeletalMeshComponent *param_2,USkinnedMeshComponent *param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  FClothSimulationProxy *this_00;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  TMap<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
  *pTVar7;
  FClothSimulData *this_01;
  longlong lVar8;
  uint *puVar9;
  undefined4 local_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMap<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  
  this_00 = (this->ClothSimulationProxy).Object;
  if (this_00 != (FClothSimulationProxy *)0x0) {
    if (this_00->bIsSimulating) {
      FClothSimulationProxy::WriteSimulationData(this_00);
    }
    if (((this->ClothSimulationProxy).Object == (FClothSimulationProxy *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FClothSimulationProxy::PostProcess_GameThread((this->ClothSimulationProxy).Object);
    if (((this->ClothSimulationProxy).Object == (FClothSimulationProxy *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar7 = FClothSimulationProxy::GetCurrentSimulationData_AnyThread
                       ((this->ClothSimulationProxy).Object);
    iVar2 = *(int *)&pTVar7->field_0x28;
    iStack_38 = 0;
    uStack_34 = 1;
    local_20 = 0;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar7->field_0x10;
    iStack_24 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&pTVar7->field_0x20;
      if (*(uint **)&pTVar7->field_0x20 == (uint *)0x0) {
        puVar9 = (uint *)TStack_60.Array;
      }
      uVar3 = *puVar9;
      while (uVar3 == 0) {
        lVar8 = (longlong)iStack_38;
        local_20 = local_20 + 0x20;
        iStack_38 = iStack_38 + 1;
        iStack_24 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_14dc38998;
        uVar3 = puVar9[lVar8 + 1];
      }
      uStack_34 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_34 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_24 = local_20 + -1 + (int)lVar8;
      if (iVar2 < iStack_24) {
        iStack_24 = iVar2;
      }
    }
LAB_14dc38998:
    uStack_28 = 0xffffffff;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._28_4_ = local_6c;
    TStack_60.BaseBitIndex = local_20;
    local_40 = pTVar7;
    local_30 = (undefined1 *)TStack_60.Array;
    TStack_60._padding_._0_4_ = iStack_38;
    TStack_60._padding_._4_4_ = uStack_34;
    TStack_60.CurrentBitIndex = iStack_24;
    if (iStack_24 < iVar2) {
      do {
        puVar9 = (uint *)((longlong)TStack_60.CurrentBitIndex * 0x110 + *(longlong *)pTVar7);
        this_01 = TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
                  ::FindOrAddImpl<int_const_&>
                            ((TMapBase<int,FClothSimulData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>_>
                              *)param_1,*puVar9,(int *)puVar9);
        TArray<UE::Math::TVector<float>,TAlignedHeapAllocator<16>_>::operator=
                  (&this_01->Positions,
                   (TArray<UE::Math::TVector<float>,TAlignedHeapAllocator<16>_> *)(puVar9 + 4));
        TArray<UE::Math::TVector<float>,TAlignedHeapAllocator<16>_>::operator=
                  (&this_01->Normals,
                   (TArray<UE::Math::TVector<float>,TAlignedHeapAllocator<16>_> *)(puVar9 + 8));
        dVar5 = *(double *)(puVar9 + 0xe);
        (this_01->Transform).Rotation.XY.m128d_f64[0] = *(double *)(puVar9 + 0xc);
        (this_01->Transform).Rotation.XY.m128d_f64[1] = dVar5;
        dVar5 = *(double *)(puVar9 + 0x12);
        (this_01->Transform).Rotation.ZW.m128d_f64[0] = *(double *)(puVar9 + 0x10);
        (this_01->Transform).Rotation.ZW.m128d_f64[1] = dVar5;
        dVar5 = *(double *)(puVar9 + 0x16);
        (this_01->Transform).Translation.XY.m128d_f64[0] = *(double *)(puVar9 + 0x14);
        (this_01->Transform).Translation.XY.m128d_f64[1] = dVar5;
        dVar5 = *(double *)(puVar9 + 0x1a);
        (this_01->Transform).Translation.ZW.m128d_f64[0] = *(double *)(puVar9 + 0x18);
        (this_01->Transform).Translation.ZW.m128d_f64[1] = dVar5;
        dVar5 = *(double *)(puVar9 + 0x1e);
        (this_01->Transform).Scale3D.XY.m128d_f64[0] = *(double *)(puVar9 + 0x1c);
        (this_01->Transform).Scale3D.XY.m128d_f64[1] = dVar5;
        dVar5 = *(double *)(puVar9 + 0x22);
        (this_01->Transform).Scale3D.ZW.m128d_f64[0] = *(double *)(puVar9 + 0x20);
        (this_01->Transform).Scale3D.ZW.m128d_f64[1] = dVar5;
        dVar5 = *(double *)(puVar9 + 0x26);
        (this_01->ComponentRelativeTransform).Rotation.XY.m128d_f64[0] = *(double *)(puVar9 + 0x24);
        (this_01->ComponentRelativeTransform).Rotation.XY.m128d_f64[1] = dVar5;
        dVar5 = *(double *)(puVar9 + 0x2a);
        (this_01->ComponentRelativeTransform).Rotation.ZW.m128d_f64[0] = *(double *)(puVar9 + 0x28);
        (this_01->ComponentRelativeTransform).Rotation.ZW.m128d_f64[1] = dVar5;
        dVar5 = *(double *)(puVar9 + 0x2e);
        (this_01->ComponentRelativeTransform).Translation.XY.m128d_f64[0] =
             *(double *)(puVar9 + 0x2c);
        (this_01->ComponentRelativeTransform).Translation.XY.m128d_f64[1] = dVar5;
        dVar5 = *(double *)(puVar9 + 0x32);
        (this_01->ComponentRelativeTransform).Translation.ZW.m128d_f64[0] =
             *(double *)(puVar9 + 0x30);
        (this_01->ComponentRelativeTransform).Translation.ZW.m128d_f64[1] = dVar5;
        dVar5 = *(double *)(puVar9 + 0x36);
        (this_01->ComponentRelativeTransform).Scale3D.XY.m128d_f64[0] = *(double *)(puVar9 + 0x34);
        (this_01->ComponentRelativeTransform).Scale3D.XY.m128d_f64[1] = dVar5;
        dVar5 = *(double *)(puVar9 + 0x3a);
        (this_01->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[0] = *(double *)(puVar9 + 0x38);
        (this_01->ComponentRelativeTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
        this_01->LODIndex = puVar9[0x3c];
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
  return;
}

// CalculateLODHasAnyRenderClothMappingData @ 14dc3d590

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::CalculateLODHasAnyRenderClothMappingData
          (FSKMClothingSimulation *this)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  USkeletalMesh *pUVar10;
  longlong *plVar11;
  ForElementType<unsigned_int> FVar12;
  ForElementType<unsigned_int> FVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  uint local_res10;
  longlong local_res18;
  longlong *local_res20;
  
  (this->LODHasAnyRenderClothMappingData).NumBits = 0;
  if (((this->OwnerComponent != (USkeletalMeshComponent *)0x0) &&
      (pUVar10 = USkeletalMeshComponent::GetSkeletalMeshAsset(this->OwnerComponent),
      pUVar10 != (USkeletalMesh *)0x0)) &&
     (plVar11 = (longlong *)(**(code **)(pUVar10->_padding_ + 0x398))(pUVar10),
     plVar11 != (longlong *)0x0)) {
    this_00 = &this->LODHasAnyRenderClothMappingData;
    uVar7 = (int)plVar11[1] + 0x1f;
    (this->LODHasAnyRenderClothMappingData).NumBits = (int)plVar11[1];
    uVar14 = uVar7 >> 5;
    local_res20 = plVar11;
    if (uVar7 >> 5 != 0) {
      if ((this->LODHasAnyRenderClothMappingData).MaxBits + 0x1fU >> 5 < uVar14) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&this_00->AllocatorInstance,0,uVar14,4);
        (this->LODHasAnyRenderClothMappingData).MaxBits = uVar14 << 5;
      }
      FVar12 = (this->LODHasAnyRenderClothMappingData).AllocatorInstance.SecondaryData;
      if (FVar12 == (ForElementType<unsigned_int>)0x0) {
        FVar12 = (ForElementType<unsigned_int>)this_00;
      }
      memset((void *)FVar12,0,(ulonglong)uVar14 << 2);
      iVar8 = (this->LODHasAnyRenderClothMappingData).NumBits;
      uVar14 = iVar8 >> 0x1f & 0x1f;
      uVar7 = iVar8 + uVar14;
      iVar8 = (uVar7 & 0x1f) - uVar14;
      if (iVar8 != 0) {
        FVar12 = (this->LODHasAnyRenderClothMappingData).AllocatorInstance.SecondaryData;
        if (FVar12 == (ForElementType<unsigned_int>)0x0) {
          FVar12 = (ForElementType<unsigned_int>)this_00;
        }
        puVar1 = (uint *)((longlong)FVar12 + (longlong)((int)uVar7 >> 5) * 4);
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
      }
    }
    iVar8 = (int)plVar11[1];
    uVar7 = 0;
    if (0 < iVar8) {
      local_res18 = 0;
      do {
        lVar3 = local_res18;
        uVar14 = 0;
        if ((int)uVar7 < iVar8) {
          uVar14 = ~uVar7 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)(lVar3 + *plVar11);
        iVar8 = *(int *)(lVar3 + 0x18);
        lVar15 = *(longlong *)(lVar3 + 0x10);
        lVar16 = (longlong)iVar8 * 0x118 + lVar15;
        local_res10 = uVar7 & 0x1f;
        while( true ) {
          if (*(int *)(lVar3 + 0x18) != iVar8) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FSkelMeshRenderSection_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (lVar15 == lVar16) break;
          if (*(int *)(lVar15 + 0x30) != 0) {
            if ((*(int *)(lVar15 + 0x30) < 1) &&
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
            if (*(int *)(*(longlong *)(lVar15 + 0x28) + 8) != 0) {
              sVar2 = *(short *)(lVar15 + 0x50);
              if ((-1 < sVar2) &&
                 (uVar14 = (uint)sVar2,
                 (int)uVar14 < (this->AssetClothSimulationProperties).ArrayNum)) {
                uVar9 = 0;
                if ((int)uVar14 < (this->AssetClothSimulationProperties).ArrayNum) {
                  uVar9 = ~uVar14 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                lVar4 = *(longlong *)
                         ((this->AssetClothSimulationProperties).AllocatorInstance.Data +
                         (longlong)sVar2 * 0x30);
                if (((lVar4 != 0) &&
                    (((*(int *)(lVar15 + 0x60) == *(int *)(lVar4 + 0x34) &&
                      *(int *)(lVar15 + 0x5c) == *(int *)(lVar4 + 0x30)) &&
                     *(int *)(lVar15 + 0x58) == *(int *)(lVar4 + 0x2c)) &&
                     *(int *)(lVar15 + 0x54) == *(int *)(lVar4 + 0x28))) &&
                   (*(uint *)(lVar15 + 100) == uVar7)) {
                  if ((((int)uVar7 < 0) ||
                      ((this->LODHasAnyRenderClothMappingData).NumBits <= (int)uVar7)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index>=0 && Index<NumBits",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x5be,L""), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  FVar12 = (this->LODHasAnyRenderClothMappingData).AllocatorInstance.SecondaryData;
                  FVar13 = (ForElementType<unsigned_int>)this_00;
                  if (FVar12 != (ForElementType<unsigned_int>)0x0) {
                    FVar13 = FVar12;
                  }
                  uVar14 = uVar7;
                  if ((int)uVar7 < 0) {
                    uVar14 = uVar7 + 0x1f;
                  }
                  puVar1 = (uint *)((longlong)FVar13 + (longlong)((int)uVar14 >> 5) * 4);
                  *puVar1 = *puVar1 | 1 << ((byte)local_res10 & 0x1f);
                }
              }
            }
          }
          lVar15 = lVar15 + 0x118;
        }
        uVar7 = uVar7 + 1;
        local_res18 = local_res18 + 8;
        iVar8 = (int)local_res20[1];
        plVar11 = local_res20;
      } while ((int)uVar7 < iVar8);
    }
  }
  return;
}

// ClearExternalCollisions @ 14dc40c90

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::ClearExternalCollisions(FSKMClothingSimulation *this)

{
  FCollisionSources *pFVar1;
  
  pFVar1 = (this->CollisionSources).Ptr;
  if (pFVar1 != (FCollisionSources *)0x0) {
    FClothCollisionData::Reset(&pFVar1->ExternalCollisions);
    return;
  }
  return;
}

// CreateActor @ 14dc43290

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::CreateActor
          (FSKMClothingSimulation *this,USkeletalMeshComponent *param_1,UClothingAssetBase *param_2,
          int param_3)

{
  TArray<TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FCollisionSources *pFVar5;
  USkeletalMeshComponent *pUVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  UClass *pUVar18;
  longlong lVar19;
  TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *pTVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  longlong lVar23;
  undefined1 local_res10 [8];
  int local_res18;
  ulonglong local_58;
  FWeakObjectPtr local_50;
  USkeletalMeshComponent *local_48 [2];
  
  lVar23 = (longlong)param_3;
  if ((param_1 == (USkeletalMeshComponent *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InOwnerComponent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetSKMClothingSimulation.cpp"
                          ,0x6b,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (param_2 == (UClothingAssetBase *)0x0) {
    return;
  }
  pUVar18 = UChaosClothAssetSKMClothingAsset::StaticClass();
  iVar16 = (int)pUVar18->_padding_;
  if (*(int *)(param_2->_padding_ + 0x38) < iVar16) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar16 * 8)
      != &pUVar18->_padding_) {
    return;
  }
  iVar16 = (int)param_2[1]._padding_;
  if (iVar16 == -1) {
    return;
  }
  plVar4 = (longlong *)param_2[1]._padding_;
  local_res18 = iVar16;
  if ((plVar4 == (longlong *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClothAsset",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetSKMClothingSimulation.cpp"
                          ,0x71,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar15 = (**(code **)(*plVar4 + 0x4c8))(plVar4);
  if ((iVar15 <= iVar16) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ClothSimulationModelIndex < NumClothSimulationModels",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetSKMClothingSimulation.cpp"
                          ,0x74,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (this->OwnerComponent != (USkeletalMeshComponent *)0x0) {
    if (this->OwnerComponent == param_1) goto LAB_14dc4346c;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("!OwnerComponent",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetSKMClothingSimulation.cpp"
                        ,0x79,
                        L"IClothingSimulationInterface::CreateActor() can\'t be called from multiple components."
                       );
    if (bVar14) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  this->OwnerComponent = param_1;
  if (((this->CollisionSources).Ptr == (FCollisionSources *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("CollisionSources",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetSKMClothingSimulation.cpp"
                          ,0x7d,
                          L"IClothingSimulationInterface::Initialize() must be called before calling IClothingSimulationInterface::CreateActor()."
                         ), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar5 = (this->CollisionSources).Ptr;
  pUVar6 = this->OwnerComponent;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (USkeletalMeshComponent *)0x0))
  {
    GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_50.ObjectIndex = 0;
  local_50.ObjectSerialNumber = 0;
  local_48[0] = pUVar6;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (USkeletalMeshComponent *)0x0))
  {
    GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=(&local_50,(FObjectPtr)local_48);
  (pFVar5->OwnerComponent).WeakPtr = local_50;
  ((this->CollisionSources).Ptr)->bCollideWithEnvironment =
       this->OwnerComponent->bCollideWithEnvironment;
LAB_14dc4346c:
  iVar16 = (this->AssetClothSimulationProperties).ArrayNum;
  uVar22 = param_3 + 1;
  pTVar1 = &this->AssetClothSimulationProperties;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  piVar2 = &(this->AssetClothSimulationProperties).ArrayMax;
  if ((this->AssetClothSimulationProperties).ArrayMax < (int)uVar22) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar22,&pTVar1->AllocatorInstance,
               (this->AssetClothSimulationProperties).ArrayNum,piVar2);
  }
  if (iVar16 <= param_3) {
    local_58 = (ulonglong)((param_3 - iVar16) + 1);
    do {
      iVar16 = (this->AssetClothSimulationProperties).ArrayNum;
      if (iVar16 == *piVar2) {
        iVar16 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&pTVar1->AllocatorInstance,piVar2);
        (this->AssetClothSimulationProperties).ArrayNum = iVar16;
      }
      (this->AssetClothSimulationProperties).ArrayNum = iVar16 + 1;
      lVar19 = (longlong)iVar16;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar7 + lVar19 * 0x30) = 0;
      *(undefined8 *)(pFVar7 + lVar19 * 0x30 + 8) = 0;
      *(undefined8 *)(pFVar7 + lVar19 * 0x30 + 0x10) = 0;
      *(undefined8 *)(pFVar7 + lVar19 * 0x30 + 0x18) = 0;
      *(undefined8 *)(pFVar7 + lVar19 * 0x30 + 0x20) = 0;
      *(undefined8 *)(pFVar7 + lVar19 * 0x30 + 0x28) = 0;
      DestructItems<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>,int>
                ((TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1> *)0x0,0);
      DestructItems<TSharedPtr<FManagedArrayCollection_const_,1>,int>
                ((TSharedPtr<FManagedArrayCollection_const_,1> *)0x0,0);
      local_58 = local_58 - 1;
    } while (local_58 != 0);
  }
  iVar16 = local_res18;
  pFVar7 = (this->AssetClothSimulationProperties).AllocatorInstance.Data;
  pFVar21 = pFVar7;
  do {
    if (pFVar21 == pFVar7 + (longlong)(this->AssetClothSimulationProperties).ArrayNum * 0x30) {
LAB_14dc43577:
      uVar22 = 0;
      if (param_3 < (this->AssetClothSimulationProperties).ArrayNum) {
        uVar22 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (this->AssetClothSimulationProperties).AllocatorInstance.Data;
      pTVar20 = (TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *)
                (**(code **)(*plVar4 + 0x4e0))(plVar4,iVar16);
      FChaosClothSimulationProperties::Initialize
                ((FChaosClothSimulationProperties *)(pFVar7 + lVar23 * 0x30 + 8),pTVar20);
LAB_14dc435e9:
      uVar22 = 0;
      if (param_3 < (this->AssetClothSimulationProperties).ArrayNum) {
        uVar22 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(UClothingAssetBase **)
       ((this->AssetClothSimulationProperties).AllocatorInstance.Data + lVar23 * 0x30) = param_2;
      return;
    }
    lVar19 = *(longlong *)pFVar21;
    if (((lVar19 != 0) && (*(longlong **)(lVar19 + 0x38) == plVar4)) &&
       (*(int *)(lVar19 + 0x40) == local_res18)) {
      lVar19 = ((longlong)pFVar21 - (longlong)pFVar7) / 6 +
               ((longlong)pFVar21 - (longlong)pFVar7 >> 0x3f);
      uVar22 = (int)(lVar19 >> 3) - (int)(lVar19 >> 0x3f);
      if (uVar22 != 0xffffffff) {
        if (param_3 <= (int)uVar22) {
          local_res10[0] = 0;
          bVar14 = `UE::Chaos::ClothAsset::FSKMClothingSimulation::CreateActor'::__l57::<lambda_2>::
                   operator()(local_res10);
          if (!bVar14) {
            uVar17 = 0;
            if ((int)uVar22 < (this->AssetClothSimulationProperties).ArrayNum) {
              uVar17 = ~uVar22 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar7 = (this->AssetClothSimulationProperties).AllocatorInstance.Data;
            uVar17 = 0;
            if (param_3 < (this->AssetClothSimulationProperties).ArrayNum) {
              uVar17 = (uint)~param_3 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar21 = (this->AssetClothSimulationProperties).AllocatorInstance.Data;
            uVar9 = *(undefined8 *)(pFVar7 + (longlong)(int)uVar22 * 0x30 + 0x10);
            uVar10 = *(undefined8 *)(pFVar21 + lVar23 * 0x30 + 8);
            uVar11 = *(undefined8 *)(pFVar21 + lVar23 * 0x30 + 8 + 8);
            uVar12 = *(undefined8 *)(pFVar21 + lVar23 * 0x30 + 0x18);
            uVar13 = *(undefined8 *)(pFVar21 + lVar23 * 0x30 + 0x18 + 8);
            uVar3 = *(undefined8 *)(pFVar21 + lVar23 * 0x30 + 0x28);
            *(undefined8 *)(pFVar21 + lVar23 * 0x30 + 8) =
                 *(undefined8 *)(pFVar7 + (longlong)(int)uVar22 * 0x30 + 8);
            *(undefined8 *)(pFVar21 + lVar23 * 0x30 + 8 + 8) = uVar9;
            uVar9 = *(undefined8 *)(pFVar7 + (longlong)(int)uVar22 * 0x30 + 0x20);
            *(undefined8 *)(pFVar21 + lVar23 * 0x30 + 0x18) =
                 *(undefined8 *)(pFVar7 + (longlong)(int)uVar22 * 0x30 + 0x18);
            *(undefined8 *)(pFVar21 + lVar23 * 0x30 + 0x18 + 8) = uVar9;
            *(undefined8 *)(pFVar21 + lVar23 * 0x30 + 0x28) =
                 *(undefined8 *)(pFVar7 + (longlong)(int)uVar22 * 0x30 + 0x28);
            *(undefined8 *)(pFVar7 + (longlong)(int)uVar22 * 0x30 + 8) = uVar10;
            *(undefined8 *)(pFVar7 + (longlong)(int)uVar22 * 0x30 + 0x10) = uVar11;
            *(undefined8 *)(pFVar7 + (longlong)(int)uVar22 * 0x30 + 0x18) = uVar12;
            *(undefined8 *)(pFVar7 + (longlong)(int)uVar22 * 0x30 + 0x20) = uVar13;
            *(undefined8 *)(pFVar7 + (longlong)(int)uVar22 * 0x30 + 0x28) = uVar3;
          }
        }
        goto LAB_14dc435e9;
      }
      goto LAB_14dc43577;
    }
    pFVar21 = pFVar21 + 0x30;
  } while( true );
}

// CreateContext @ 14dc43b30

IClothingSimulationContext * __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::CreateContext(FSKMClothingSimulation *this)

{
  IClothingSimulationContext *this_00;
  
  this_00 = ::operator_new(0x10);
  if (this_00 != (IClothingSimulationContext *)0x0) {
    IClothingSimulationContext::IClothingSimulationContext(this_00);
    *(undefined4 *)(this_00 + 1) = 0;
    *this_00 = (IClothingSimulationContext)
               &___7FSKMClothingSimulationContext_ClothAsset_Chaos_UE__6B_;
    return this_00;
  }
  return (IClothingSimulationContext *)0x0;
}

// DestroyActors @ 14dc446f0

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::DestroyActors(FSKMClothingSimulation *this)

{
  int *piVar1;
  int iVar2;
  TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties> *pTVar3;
  
  piVar1 = &(this->AssetClothSimulationProperties).ArrayMax;
  pTVar3 = (TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties> *)
           (this->AssetClothSimulationProperties).AllocatorInstance.Data;
  iVar2 = (this->AssetClothSimulationProperties).ArrayNum;
  if ((this->AssetClothSimulationProperties).ArrayMax < 0) {
    DestructItems<TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties>,int>
              (pTVar3,iVar2);
    (this->AssetClothSimulationProperties).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->AssetClothSimulationProperties).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties>,int>
              (pTVar3,iVar2);
    (this->AssetClothSimulationProperties).ArrayNum = 0;
  }
  (this->LODHasAnyRenderClothMappingData).NumBits = 0;
  return;
}

// DestroyContext @ 14dc44770

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::DestroyContext
          (FSKMClothingSimulation *this,IClothingSimulationContext *param_1)

{
  if (param_1 != (IClothingSimulationContext *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dc44783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}

// EndCreateActor @ 14dc458a0

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::EndCreateActor(FSKMClothingSimulation *this)

{
  FClothSimulationProxy *pFVar1;
  
  CalculateLODHasAnyRenderClothMappingData(this);
  pFVar1 = (this->ClothSimulationProxy).Object;
  if (pFVar1 != (FClothSimulationProxy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dc458bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x30))();
    return;
  }
  return;
}

// FillContextAndPrepareTick @ 14dc47a80

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::FillContextAndPrepareTick
          (FSKMClothingSimulation *this,USkeletalMeshComponent *param_1,float param_2,
          IClothingSimulationContext *param_3,bool param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FClothSimulationProxy *pFVar7;
  FScriptContainerElement *pFVar8;
  
  if (param_3 != (IClothingSimulationContext *)0x0) {
    *(float *)(param_3 + 1) = param_2;
  }
  if ((!param_4) &&
     (pFVar7 = (this->ClothSimulationProxy).Object, pFVar7 != (FClothSimulationProxy *)0x0)) {
    if (param_5) {
      pFVar3 = (pFVar7->ParallelInitializationTask).Reference;
      if (pFVar3 != (FBaseGraphTask *)0x0) {
        if ((bWaitForAsyncClothInitialization == false) && (pFVar3->field_0xd0 == '\0')) {
          return;
        }
        FClothSimulationProxy::CompleteInitialization_GameThread(pFVar7);
      }
      if ((!pFVar7->bIsInitialized) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsInitialized",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                             ,0x205,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FClothSimulationProxy::CompleteParallelSimulation_GameThread(pFVar7);
      pFVar8 = (pFVar7->Cloths).AllocatorInstance.Data;
      iVar2 = (pFVar7->Cloths).ArrayNum;
      pFVar1 = pFVar8 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pFVar7->Cloths).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&param_4);
        }
        if (pFVar8 == pFVar1) break;
        lVar4 = *(longlong *)pFVar8;
        pFVar8 = pFVar8 + 8;
        *(undefined1 *)(lVar4 + 0x44) = 1;
      }
    }
    else {
      pFVar7 = TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1>::operator->
                         (&this->ClothSimulationProxy);
      FClothSimulationProxy::PreProcess_GameThread(pFVar7,param_2,false);
      pFVar7 = TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1>::operator->
                         (&this->ClothSimulationProxy);
      FClothSimulationProxy::PreSimulate_GameThread(pFVar7,param_2);
      this->bNeedsResetRestLengths = false;
    }
  }
  return;
}

// ForceClothNextUpdateTeleportAndReset_AnyThread @ 14dc48050

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::ForceClothNextUpdateTeleportAndReset_AnyThread
          (FSKMClothingSimulation *this)

{
  return;
}

// GetAssets @ 14dc4a290

TArray<UChaosClothAssetBase_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetAssets
          (FSKMClothingSimulation *this,
          TArray<UChaosClothAssetBase_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  FClothSimulationProxy *pFVar4;
  UChaosClothAssetBase *local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar1 = *(uint *)&(this->ClothSimulationProxy).SharedReferenceCount.ReferenceController;
  if (-1 < (int)uVar1) {
    if (0 < (int)uVar1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,&__return_storage_ptr__->AllocatorInstance,0,
                 &__return_storage_ptr__->ArrayMax);
    }
    iVar2 = *(int *)&(this->ClothSimulationProxy).SharedReferenceCount.ReferenceController;
    pFVar4 = (this->ClothSimulationProxy).Object;
    plVar3 = &pFVar4->_padding_;
    while( true ) {
      if (*(int *)&(this->ClothSimulationProxy).SharedReferenceCount.ReferenceController != iVar2) {
        `TCheckedPointerIterator<TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (pFVar4 == (FClothSimulationProxy *)(plVar3 + (longlong)iVar2 * 6)) break;
      if ((pFVar4->_padding_ != 0) &&
         (local_res8 = *(UChaosClothAssetBase **)(pFVar4->_padding_ + 0x38),
         local_res8 != (UChaosClothAssetBase *)0x0)) {
        TArray<UChaosClothAssetBase_const_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<UChaosClothAssetBase_const_*_const_&>(__return_storage_ptr__,&local_res8);
      }
      pFVar4 = (FClothSimulationProxy *)&pFVar4->_padding_;
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// GetBounds @ 14dc4a770

TBoxSphereBounds<double,double> * __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetBounds
          (FSKMClothingSimulation *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          USkeletalMeshComponent *param_1)

{
  FClothSimulationProxy *this_00;
  
  this_00 = (this->ClothSimulationProxy).Object;
  if (this_00 != (FClothSimulationProxy *)0x0) {
    FClothSimulationProxy::CalculateBounds_AnyThread(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->SphereRadius = 0.0;
  return __return_storage_ptr__;
}

// GetClothGeometryScale @ 14dc4aab0

float __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetClothGeometryScale(FSKMClothingSimulation *this)

{
  return *(float *)(this->_padding_ + 0xb08);
}

// GetClothTeleportMode @ 14dc4b120

EClothingTeleportMode __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetClothTeleportMode(FSKMClothingSimulation *this)

{
  code *pcVar1;
  bool bVar2;
  EClothingTeleportMode EVar3;
  
  if (this->_padding_ != 0) {
    return *(EClothingTeleportMode *)(this->_padding_ + 0xac6);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("OwnerComponent",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetSKMClothingSimulation.cpp"
                     ,0x154,L"No actors, owner component not set. Call CreateActor first.");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return *(EClothingTeleportMode *)(this->_padding_ + 0xac6);
}

// GetCollisionSources @ 14dc4b270

FCollisionSources * __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetCollisionSources(FSKMClothingSimulation *this)

{
  return (FCollisionSources *)this->_padding_;
}

// GetCollisions @ 14dc4b290

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetCollisions
          (FSKMClothingSimulation *this,FClothCollisionData *param_1,bool param_2)

{
  FClothCollisionData::Reset(param_1);
  return;
}

// GetNumCloths @ 14dc4d970

int __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetNumCloths(FSKMClothingSimulation *this)

{
  FClothSimulationProxy *pFVar1;
  
  pFVar1 = (this->ClothSimulationProxy).Object;
  if (pFVar1 != (FClothSimulationProxy *)0x0) {
    return (int)pFVar1->NumCloths;
  }
  return 0;
}

// GetNumDynamicParticles @ 14dc4d990

int __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetNumDynamicParticles(FSKMClothingSimulation *this)

{
  FClothSimulationProxy *pFVar1;
  
  pFVar1 = (this->ClothSimulationProxy).Object;
  if (pFVar1 != (FClothSimulationProxy *)0x0) {
    return (int)pFVar1->NumDynamicParticles;
  }
  return 0;
}

// GetNumIterations @ 14dc4d9b0

int __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetNumIterations(FSKMClothingSimulation *this)

{
  FClothSimulationProxy *pFVar1;
  
  pFVar1 = (this->ClothSimulationProxy).Object;
  if (pFVar1 != (FClothSimulationProxy *)0x0) {
    return (int)pFVar1->NumIterations;
  }
  return 0;
}

// GetNumKinematicParticles @ 14dc4d9d0

int __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetNumKinematicParticles
          (FSKMClothingSimulation *this)

{
  FClothSimulationProxy *pFVar1;
  
  pFVar1 = (this->ClothSimulationProxy).Object;
  if (pFVar1 != (FClothSimulationProxy *)0x0) {
    return (int)pFVar1->NumKinematicParticles;
  }
  return 0;
}

// GetNumSubsteps @ 14dc4da90

int __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetNumSubsteps(FSKMClothingSimulation *this)

{
  FClothSimulationProxy *pFVar1;
  
  pFVar1 = (this->ClothSimulationProxy).Object;
  if (pFVar1 != (FClothSimulationProxy *)0x0) {
    return (int)pFVar1->NumSubsteps;
  }
  return 0;
}

// GetOwnerComponent @ 14dc4dbf0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

USkinnedMeshComponent * __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetOwnerComponent(FSKMClothingSimulation *this)

{
  code *pcVar1;
  bool bVar2;
  USkinnedMeshComponent *pUVar3;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetSKMClothingSimulation.cpp"
                       ,0x126,L"No actors, owner component not set. Call CreateActor first.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (USkinnedMeshComponent *)(*pcVar1)();
      return pUVar3;
    }
  }
  return (USkinnedMeshComponent *)this->_padding_;
}

// GetPropertyCollections @ 14dc4e7c0

TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetPropertyCollections
          (FSKMClothingSimulation *this,UChaosClothAssetBase *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  
  uVar3 = GetSimulationGroupId(this,param_1,param_2);
  if (uVar3 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SimulationGroupId != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetSKMClothingSimulation.cpp"
                       ,0x16a,L"Invalid arguments");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar5;
    }
  }
  uVar4 = 0;
  if ((int)uVar3 < *(int *)&(this->ClothSimulationProxy).SharedReferenceCount.ReferenceController) {
    uVar4 = ~uVar3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar5;
    }
  }
  return (TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *)
         (&((this->ClothSimulationProxy).Object)->_padding_ + (longlong)(int)uVar3 * 6);
}

// GetPropertyInteractor @ 14dc4e940

UChaosClothAssetInteractor * __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetPropertyInteractor
          (FSKMClothingSimulation *this,UChaosClothAssetBase *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  UChaosClothAssetInteractor *pUVar5;
  
  uVar3 = GetSimulationGroupId((FSKMClothingSimulation *)&this->_padding_,param_1,param_2);
  if (uVar3 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SimulationGroupId != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetSKMClothingSimulation.cpp"
                       ,0x3b,L"Invalid arguments");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UChaosClothAssetInteractor *)(*pcVar1)();
      return pUVar5;
    }
  }
  uVar4 = 0;
  if ((int)uVar3 < (this->AssetClothSimulationProperties).ArrayNum) {
    uVar4 = ~uVar3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UChaosClothAssetInteractor *)(*pcVar1)();
      return pUVar5;
    }
  }
  return *(UChaosClothAssetInteractor **)
          ((this->AssetClothSimulationProperties).AllocatorInstance.Data +
          (longlong)(int)uVar3 * 0x30 + 8);
}

// GetReferenceSkeleton @ 14dc4ec30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FReferenceSkeleton * __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetReferenceSkeleton(FSKMClothingSimulation *this)

{
  code *pcVar1;
  bool bVar2;
  FReferenceSkeleton *pFVar3;
  USkinnedAsset *pUVar4;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetSKMClothingSimulation.cpp"
                       ,0x14e,L"No actors, owner component not set. Call CreateActor first.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FReferenceSkeleton *)(*pcVar1)();
      return pFVar3;
    }
  }
  pUVar4 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this->_padding_);
  if (pUVar4 != (USkinnedAsset *)0x0) {
    pUVar4 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this->_padding_);
                    /* WARNING: Could not recover jumptable at 0x00014dc4ec8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar3 = (FReferenceSkeleton *)
             (**(code **)(*(longlong *)pUVar4 + 800))(pUVar4,*(code **)(*(longlong *)pUVar4 + 800));
    return pFVar3;
  }
  return (FReferenceSkeleton *)0x0;
}

// GetReferencerName @ 14dc4ed50

FString * __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetReferencerName
          (FSKMClothingSimulation *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"UE::Chaos::ClothAsset::FSKMClothingSimulation");
  return __return_storage_ptr__;
}

// GetRestLengthsMorphTargetName @ 14dc4f720

FString * __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetRestLengthsMorphTargetName
          (FSKMClothingSimulation *this)

{
  return (FString *)&(this->LODHasAnyRenderClothMappingData).NumBits;
}

// GetSimulationGroupId @ 14dc4f770

int __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetSimulationGroupId
          (FSKMClothingSimulation *this,UChaosClothAssetBase *param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar5 = *(int *)&(this->ClothSimulationProxy).SharedReferenceCount.ReferenceController;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      lVar1 = *(longlong *)((longlong)&((this->ClothSimulationProxy).Object)->_padding_ + lVar7);
      if (((lVar1 != 0) && (*(UChaosClothAssetBase **)(lVar1 + 0x38) == param_1)) &&
         (*(int *)(lVar1 + 0x40) == param_2)) {
        return uVar6;
      }
      iVar5 = *(int *)&(this->ClothSimulationProxy).SharedReferenceCount.ReferenceController;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x30;
    } while ((int)uVar6 < iVar5);
  }
  return -1;
}

// GetSimulationTime @ 14dc4f960

float __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetSimulationTime(FSKMClothingSimulation *this)

{
  FClothSimulationProxy *pFVar1;
  
  pFVar1 = (this->ClothSimulationProxy).Object;
  if (pFVar1 != (FClothSimulationProxy *)0x0) {
    return (float)pFVar1->SimulationTime;
  }
  return 0.0;
}

// GetSolverProperties @ 14dc4f9a0

FChaosClothSimulationProperties * __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetSolverProperties(FSKMClothingSimulation *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AssetClothSimulationProperties).ArrayNum;
  pFVar2 = (this->AssetClothSimulationProperties).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->AssetClothSimulationProperties).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if ((*(longlong *)pFVar2 != 0) && (*(longlong *)(*(longlong *)pFVar2 + 0x38) != 0)) {
      return (FChaosClothSimulationProperties *)(pFVar2 + 8);
    }
    pFVar2 = pFVar2 + 0x30;
  }
  return (FChaosClothSimulationProperties *)0x0;
}

// GetSolverPropertyCollections @ 14dc4fa20

TArray<TSharedPtr<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetSolverPropertyCollections
          (FSKMClothingSimulation *this)

{
  FChaosClothSimulationProperties *pFVar1;
  
  pFVar1 = GetSolverProperties((FSKMClothingSimulation *)&this[-1].RestLengthsMorphTargetName);
  if (pFVar1 != (FChaosClothSimulationProperties *)0x0) {
    return &pFVar1->PropertyCollections;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Chaos::ClothAsset::FSKMClothingSimulation::GetSolverPropertyCollections'::__l2::
             _dynamic_atexit_destructor_for__EmptyManagedArrayCollectionArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyManagedArrayCollectionArray;
}

// GetSolverPropertyFacades @ 14dc4fb00

TArray<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>,TSizedDefaultAllocator<32>_> *
__thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::GetSolverPropertyFacades
          (FSKMClothingSimulation *this)

{
  FChaosClothSimulationProperties *pFVar1;
  
  pFVar1 = GetSolverProperties(this);
  if (pFVar1 != (FChaosClothSimulationProperties *)0x0) {
    return &pFVar1->CollectionPropertyFacades;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Chaos::ClothAsset::FSKMClothingSimulation::GetSolverPropertyFacades'::__l2::
             _dynamic_atexit_destructor_for__EmptyManagedArrayCollectionArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyManagedArrayCollectionArray;
}

// HardResetSimulation @ 14dc511e0

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::HardResetSimulation
          (FSKMClothingSimulation *this,IClothingSimulationContext *param_1)

{
  FClothSimulationProxy *this_00;
  
  ResetConfigProperties(this);
  this_00 = (this->ClothSimulationProxy).Object;
  if (this_00 != (FClothSimulationProxy *)0x0) {
    FClothSimulationProxy::HardResetSimulation_GameThread(this_00);
    return;
  }
  return;
}

// HasAnySimulationMeshData @ 14dc516b0

bool __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::HasAnySimulationMeshData
          (FSKMClothingSimulation *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  FClothSimulationProxy *pFVar8;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)&(this->ClothSimulationProxy).SharedReferenceCount.ReferenceController;
  pFVar8 = (this->ClothSimulationProxy).Object;
  plVar4 = &pFVar8->_padding_;
  do {
    if (*(int *)&(this->ClothSimulationProxy).SharedReferenceCount.ReferenceController != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == (FClothSimulationProxy *)(plVar4 + (longlong)iVar1 * 6)) {
      return false;
    }
    lVar2 = pFVar8->_padding_;
    if (((lVar2 != 0) && (-1 < param_1)) && (param_1 < *(int *)(lVar2 + 0x60))) {
      if ((*(int *)(lVar2 + 0x60) <= param_1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      lVar7 = lVar2 + 0x48;
      if (*(longlong *)(lVar2 + 0x58) != 0) {
        lVar7 = *(longlong *)(lVar2 + 0x58);
      }
      if ((*(uint *)(lVar7 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0) {
        return true;
      }
    }
    pFVar8 = (FClothSimulationProxy *)&pFVar8->_padding_;
  } while( true );
}

// Initialize @ 14dc520a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::Initialize(FSKMClothingSimulation *this)

{
  int *piVar1;
  TUniquePtr<UE::Chaos::ClothAsset::FCollisionSources,TDefaultDelete<UE::Chaos::ClothAsset::FCollisionSources>_>
  *pTVar2;
  TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *pTVar3;
  int iVar4;
  TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties> *pTVar5;
  FScriptContainerElement *pFVar6;
  FCollisionSources *pFVar7;
  TSharedRef<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *pTVar8;
  FCollisionSources *pFVar9;
  undefined8 local_res8;
  longlong local_58;
  FClothSimulationProxy *local_50;
  FSharedReferencer<1> local_48;
  undefined8 local_40;
  FSharedReferencer<1> FStack_38;
  TSharedRef<UE::Chaos::ClothAsset::FClothSimulationProxy,1> local_30;
  
  piVar1 = &(this->AssetClothSimulationProperties).ArrayMax;
  pTVar5 = (TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties> *)
           (this->AssetClothSimulationProperties).AllocatorInstance.Data;
  iVar4 = (this->AssetClothSimulationProperties).ArrayNum;
  if ((this->AssetClothSimulationProperties).ArrayMax < 0) {
    DestructItems<TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties>,int>
              (pTVar5,iVar4);
    (this->AssetClothSimulationProperties).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->AssetClothSimulationProperties).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties>,int>
              (pTVar5,iVar4);
    (this->AssetClothSimulationProperties).ArrayNum = 0;
  }
  pFVar9 = (FCollisionSources *)0x0;
  pFVar7 = (this->CollisionSources).Ptr;
  pTVar2 = &this->CollisionSources;
  (this->LODHasAnyRenderClothMappingData).NumBits = 0;
  this->OwnerComponent = (USkeletalMeshComponent *)0x0;
  pTVar2->Ptr = (FCollisionSources *)0x0;
  if (pFVar7 != (FCollisionSources *)0x0) {
    pFVar6 = (pFVar7->ExternalCollisions).Boxes.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    DestructItems<FClothCollisionPrim_Convex,int>
              ((FClothCollisionPrim_Convex *)
               (pFVar7->ExternalCollisions).Convexes.AllocatorInstance.Data,
               (pFVar7->ExternalCollisions).Convexes.ArrayNum);
    pFVar6 = (pFVar7->ExternalCollisions).Convexes.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar7->ExternalCollisions).SphereConnections.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar7->ExternalCollisions).Spheres.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>
              ((FCollisionSource *)(pFVar7->CollisionSources).AllocatorInstance.Data,
               (pFVar7->CollisionSources).ArrayNum);
    pFVar6 = (pFVar7->CollisionSources).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    ::operator_delete(pFVar7,0x60);
  }
  pTVar3 = &this->ClothSimulationProxy;
  local_40 = 0;
  FStack_38.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 != (TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *)&local_40) {
    pTVar3->Object = (FClothSimulationProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ClothSimulationProxy).SharedReferenceCount,&FStack_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_38.ReferenceController);
  pFVar7 = ::operator_new(0x60);
  if (pFVar7 != (FCollisionSources *)0x0) {
    (pFVar7->OwnerComponent).WeakPtr = (FWeakObjectPtr)0x0;
    local_res8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)pFVar7,(FObjectPtr)&local_res8);
    (pFVar7->CollisionSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->CollisionSources).ArrayNum = 0;
    (pFVar7->CollisionSources).ArrayMax = 0;
    (pFVar7->ExternalCollisions).Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->ExternalCollisions).Spheres.ArrayNum = 0;
    (pFVar7->ExternalCollisions).Spheres.ArrayMax = 0;
    (pFVar7->ExternalCollisions).SphereConnections.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar7->ExternalCollisions).SphereConnections.ArrayNum = 0;
    (pFVar7->ExternalCollisions).SphereConnections.ArrayMax = 0;
    (pFVar7->ExternalCollisions).Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->ExternalCollisions).Convexes.ArrayNum = 0;
    (pFVar7->ExternalCollisions).Convexes.ArrayMax = 0;
    (pFVar7->ExternalCollisions).Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->ExternalCollisions).Boxes.ArrayNum = 0;
    (pFVar7->ExternalCollisions).Boxes.ArrayMax = 0;
    pFVar7->Version = -1;
    pFVar7->bCollideWithEnvironment = false;
    pFVar9 = pFVar7;
  }
  if (pTVar2 == (TUniquePtr<UE::Chaos::ClothAsset::FCollisionSources,TDefaultDelete<UE::Chaos::ClothAsset::FCollisionSources>_>
                 *)&local_58) {
    if (pFVar9 == (FCollisionSources *)0x0) goto LAB_14dc52322;
    pFVar6 = (pFVar9->ExternalCollisions).Boxes.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    DestructItems<FClothCollisionPrim_Convex,int>
              ((FClothCollisionPrim_Convex *)
               (pFVar9->ExternalCollisions).Convexes.AllocatorInstance.Data,
               (pFVar9->ExternalCollisions).Convexes.ArrayNum);
    pFVar6 = (pFVar9->ExternalCollisions).Convexes.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar9->ExternalCollisions).SphereConnections.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar9->ExternalCollisions).Spheres.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>
              ((FCollisionSource *)(pFVar9->CollisionSources).AllocatorInstance.Data,
               (pFVar9->CollisionSources).ArrayNum);
    pFVar6 = (pFVar9->CollisionSources).AllocatorInstance.Data;
    pFVar7 = pFVar9;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  }
  else {
    pFVar7 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar9;
    if (pFVar7 == (FCollisionSources *)0x0) goto LAB_14dc52322;
    pFVar6 = (pFVar7->ExternalCollisions).Boxes.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    DestructItems<FClothCollisionPrim_Convex,int>
              ((FClothCollisionPrim_Convex *)
               (pFVar7->ExternalCollisions).Convexes.AllocatorInstance.Data,
               (pFVar7->ExternalCollisions).Convexes.ArrayNum);
    pFVar6 = (pFVar7->ExternalCollisions).Convexes.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar7->ExternalCollisions).SphereConnections.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pFVar6 = (pFVar7->ExternalCollisions).Spheres.AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>
              ((FCollisionSource *)(pFVar7->CollisionSources).AllocatorInstance.Data,
               (pFVar7->CollisionSources).ArrayNum);
    pFVar6 = (pFVar7->CollisionSources).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
  }
  ::operator_delete(pFVar7,0x60);
LAB_14dc52322:
  pTVar8 = MakeShared<UE::Chaos::ClothAsset::FClothSimulationProxy,1,UE::Chaos::ClothAsset::FSKMClothingSimulation_&>
                     (&local_30,this);
  local_48.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
  local_50 = pTVar8->Object;
  if (local_48.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_48.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar3 != (TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *)&local_50) {
    pTVar3->Object = local_50;
    local_50 = (FClothSimulationProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ClothSimulationProxy).SharedReferenceCount,&local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.SharedReferenceCount.ReferenceController);
  return;
}

// IsSimulationEnabled @ 14dc529b0

bool __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::IsSimulationEnabled(FSKMClothingSimulation *this)

{
  bool bVar1;
  
  bVar1 = USkeletalMeshComponent::CanSimulateClothing((USkeletalMeshComponent *)this->_padding_);
  return bVar1;
}

// IsSimulationSuspended @ 14dc52a80

bool __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::IsSimulationSuspended(FSKMClothingSimulation *this)

{
  bool bVar1;
  
  bVar1 = USkeletalMeshComponent::IsClothingSimulationSuspended
                    ((USkeletalMeshComponent *)this->_padding_);
  return bVar1;
}

// IsTeleported @ 14dc52ac0

bool __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::IsTeleported(FSKMClothingSimulation *this)

{
  FClothSimulationProxy *pFVar1;
  
  pFVar1 = (this->ClothSimulationProxy).Object;
  if (pFVar1 != (FClothSimulationProxy *)0x0) {
    return (bool)pFVar1->bIsTeleported;
  }
  return false;
}

// NeedsResetRestLengths @ 14dc52c00

bool __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::NeedsResetRestLengths(FSKMClothingSimulation *this)

{
  return (bool)*(undefined1 *)
                &(this->LODHasAnyRenderClothMappingData).AllocatorInstance.SecondaryData;
}

// RecreateClothSimulationProxy @ 14dc541a0

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::RecreateClothSimulationProxy
          (FSKMClothingSimulation *this)

{
  TSharedRef<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *pTVar1;
  TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *pTVar2;
  FClothSimulationProxy *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<UE::Chaos::ClothAsset::FClothSimulationProxy,1> local_18;
  
  pTVar1 = MakeShared<UE::Chaos::ClothAsset::FClothSimulationProxy,1,UE::Chaos::ClothAsset::FSKMClothingSimulation_&>
                     (&local_18,this);
  local_20.ReferenceController = (pTVar1->SharedReferenceCount).ReferenceController;
  local_28 = pTVar1->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->ClothSimulationProxy;
  if (pTVar2 != (TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *)&local_28) {
    pTVar2->Object = local_28;
    local_28 = (FClothSimulationProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ClothSimulationProxy).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (pTVar2->Object != (FClothSimulationProxy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dc5421c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar2->Object->_padding_ + 0x30))();
    return;
  }
  return;
}

// ResetConfigProperties @ 14dc55b80

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::ResetConfigProperties(FSKMClothingSimulation *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetSKMClothingSimulation.cpp"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = (this->AssetClothSimulationProperties).ArrayNum;
  pFVar6 = (this->AssetClothSimulationProperties).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->AssetClothSimulationProperties).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    lVar2 = *(longlong *)pFVar6;
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x40) != -1)) {
      if (*(longlong **)(lVar2 + 0x38) == (longlong *)0x0) {
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<785012041936011301>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothAssetSKMClothingSimulation.cpp"
                           ,0x25,"Asset");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        pTVar5 = (TArray<TSharedRef<FManagedArrayCollection_const_,1>,TSizedDefaultAllocator<32>_> *
                 )(**(code **)(**(longlong **)(lVar2 + 0x38) + 0x4e0))();
        FChaosClothSimulationProperties::Initialize
                  ((FChaosClothSimulationProperties *)(pFVar6 + 8),pTVar5);
      }
    }
    pFVar6 = pFVar6 + 0x30;
  }
  return;
}

// SetMaxNumIterations @ 14dc585b0

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::SetMaxNumIterations
          (FSKMClothingSimulation *this,int param_1)

{
  int iVar1;
  int iVar2;
  FCollectionPropertyFacade *this_00;
  TArray<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  undefined1 local_res18 [16];
  TVector<float>_u_0 local_58;
  TVector<float>_u_0 local_4c [3];
  
  pTVar3 = GetSolverPropertyFacades(this);
  iVar1 = pTVar3->ArrayNum;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (pTVar3->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar5 == pFVar6) break;
    this_00 = *(FCollectionPropertyFacade **)pFVar5;
    if (this_00 != (FCollectionPropertyFacade *)0x0) {
      piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
               Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *)&this_00->field_0x58,::Chaos::FClothingSimulationSolver::MaxNumIterationsName
                   );
      if ((piVar4 != (int *)0x0) && (iVar2 = *piVar4, iVar2 != -1)) {
        fVar7 = (float)param_1;
        local_58._s_0.X = fVar7;
        local_58._s_0.Y = fVar7;
        local_58._s_0.Z = fVar7;
        ::Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
                  (this_00,iVar2,(TArrayView<UE::Math::TVector<float>,int> *)&this_00->field_0x18,
                   (TVector<float> *)&local_58._s_0);
        local_4c[0]._0_4_ = fVar7;
        local_4c[0]._4_4_ = fVar7;
        local_4c[0]._8_4_ = fVar7;
        ::Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
                  (this_00,iVar2,(TArrayView<UE::Math::TVector<float>,int> *)&this_00->field_0x28,
                   (TVector<float> *)&local_4c[0]._s_0);
      }
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return;
}

// SetNumIterations @ 14dc58a00

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::SetNumIterations
          (FSKMClothingSimulation *this,int param_1)

{
  int iVar1;
  int iVar2;
  FCollectionPropertyFacade *this_00;
  TArray<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  undefined1 local_res18 [16];
  TVector<float>_u_0 local_58;
  TVector<float>_u_0 local_4c [3];
  
  pTVar3 = GetSolverPropertyFacades(this);
  iVar1 = pTVar3->ArrayNum;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (pTVar3->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar5 == pFVar6) break;
    this_00 = *(FCollectionPropertyFacade **)pFVar5;
    if (this_00 != (FCollectionPropertyFacade *)0x0) {
      piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
               Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *)&this_00->field_0x58,::Chaos::FClothingSimulationSolver::NumIterationsName);
      if ((piVar4 != (int *)0x0) && (iVar2 = *piVar4, iVar2 != -1)) {
        fVar7 = (float)param_1;
        local_58._s_0.X = fVar7;
        local_58._s_0.Y = fVar7;
        local_58._s_0.Z = fVar7;
        ::Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
                  (this_00,iVar2,(TArrayView<UE::Math::TVector<float>,int> *)&this_00->field_0x18,
                   (TVector<float> *)&local_58._s_0);
        local_4c[0]._0_4_ = fVar7;
        local_4c[0]._4_4_ = fVar7;
        local_4c[0]._8_4_ = fVar7;
        ::Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
                  (this_00,iVar2,(TArrayView<UE::Math::TVector<float>,int> *)&this_00->field_0x28,
                   (TVector<float> *)&local_4c[0]._s_0);
      }
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return;
}

// SetNumSubsteps @ 14dc58d10

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::SetNumSubsteps
          (FSKMClothingSimulation *this,int param_1)

{
  int iVar1;
  int iVar2;
  FCollectionPropertyFacade *this_00;
  TArray<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  undefined1 local_res18 [16];
  TVector<float>_u_0 local_58;
  TVector<float>_u_0 local_4c [3];
  
  pTVar3 = GetSolverPropertyFacades(this);
  iVar1 = pTVar3->ArrayNum;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (pTVar3->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<Chaos::Softs::FCollectionPropertyFacade,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar5 == pFVar6) break;
    this_00 = *(FCollectionPropertyFacade **)pFVar5;
    if (this_00 != (FCollectionPropertyFacade *)0x0) {
      piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
               Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *)&this_00->field_0x58,::Chaos::FClothingSimulationSolver::NumSubstepsName);
      if ((piVar4 != (int *)0x0) && (iVar2 = *piVar4, iVar2 != -1)) {
        fVar7 = (float)param_1;
        local_58._s_0.X = fVar7;
        local_58._s_0.Y = fVar7;
        local_58._s_0.Z = fVar7;
        ::Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
                  (this_00,iVar2,(TArrayView<UE::Math::TVector<float>,int> *)&this_00->field_0x18,
                   (TVector<float> *)&local_58._s_0);
        local_4c[0]._0_4_ = fVar7;
        local_4c[0]._4_4_ = fVar7;
        local_4c[0]._8_4_ = fVar7;
        ::Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
                  (this_00,iVar2,(TArrayView<UE::Math::TVector<float>,int> *)&this_00->field_0x28,
                   (TVector<float> *)&local_4c[0]._s_0);
      }
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return;
}

// ShouldSimulateLOD @ 14dc5a170

bool __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::ShouldSimulateLOD
          (FSKMClothingSimulation *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ForElementType<unsigned_int> FVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  if (this->OwnerComponent == (USkeletalMeshComponent *)0x0) {
    return false;
  }
  if ((-1 < param_1) && (param_1 < (this->LODHasAnyRenderClothMappingData).NumBits)) {
    FVar7 = (this->LODHasAnyRenderClothMappingData).AllocatorInstance.SecondaryData;
    uVar10 = 1 << ((byte)param_1 & 0x1f);
    lVar1 = (ulonglong)((uint)param_1 >> 5) * 4;
    if (FVar7 == (ForElementType<unsigned_int>)0x0) {
      FVar7 = (ForElementType<unsigned_int>)&this->LODHasAnyRenderClothMappingData;
    }
    if ((*(uint *)((longlong)FVar7 + lVar1) & uVar10) != 0) {
      iVar2 = (this->AssetClothSimulationProperties).ArrayNum;
      pFVar9 = (this->AssetClothSimulationProperties).AllocatorInstance.Data;
      pFVar11 = pFVar9 + (longlong)iVar2 * 0x30;
      while( true ) {
        if ((this->AssetClothSimulationProperties).ArrayNum != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar9 == pFVar11) break;
        lVar3 = *(longlong *)pFVar9;
        if ((lVar3 != 0) && (param_1 < *(int *)(lVar3 + 0x60))) {
          if ((*(int *)(lVar3 + 0x60) <= param_1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          lVar8 = lVar3 + 0x48;
          if (*(longlong *)(lVar3 + 0x58) != 0) {
            lVar8 = *(longlong *)(lVar3 + 0x58);
          }
          if ((*(uint *)(lVar8 + lVar1) & uVar10) != 0) {
            return true;
          }
        }
        pFVar9 = pFVar9 + 0x30;
      }
    }
  }
  return false;
}

// Shutdown @ 14dc5a350

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::Shutdown(FSKMClothingSimulation *this)

{
  int *piVar1;
  int iVar2;
  TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties> *pTVar3;
  FCollisionSources *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  piVar1 = &(this->AssetClothSimulationProperties).ArrayMax;
  pTVar3 = (TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties> *)
           (this->AssetClothSimulationProperties).AllocatorInstance.Data;
  iVar2 = (this->AssetClothSimulationProperties).ArrayNum;
  if ((this->AssetClothSimulationProperties).ArrayMax < 0) {
    DestructItems<TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties>,int>
              (pTVar3,iVar2);
    (this->AssetClothSimulationProperties).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->AssetClothSimulationProperties).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TTuple<UChaosClothAssetSKMClothingAsset_const_*,FChaosClothSimulationProperties>,int>
              (pTVar3,iVar2);
    (this->AssetClothSimulationProperties).ArrayNum = 0;
  }
  pFVar4 = (this->CollisionSources).Ptr;
  (this->LODHasAnyRenderClothMappingData).NumBits = 0;
  this->OwnerComponent = (USkeletalMeshComponent *)0x0;
  (this->CollisionSources).Ptr = (FCollisionSources *)0x0;
  if (pFVar4 != (FCollisionSources *)0x0) {
    pFVar5 = (pFVar4->ExternalCollisions).Boxes.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    DestructItems<FClothCollisionPrim_Convex,int>
              ((FClothCollisionPrim_Convex *)
               (pFVar4->ExternalCollisions).Convexes.AllocatorInstance.Data,
               (pFVar4->ExternalCollisions).Convexes.ArrayNum);
    pFVar5 = (pFVar4->ExternalCollisions).Convexes.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar5 = (pFVar4->ExternalCollisions).SphereConnections.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar5 = (pFVar4->ExternalCollisions).Spheres.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    DestructItems<UE::Chaos::ClothAsset::FCollisionSources::FCollisionSource,int>
              ((FCollisionSource *)(pFVar4->CollisionSources).AllocatorInstance.Data,
               (pFVar4->CollisionSources).ArrayNum);
    pFVar5 = (pFVar4->CollisionSources).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    ::operator_delete(pFVar4,0x60);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ClothSimulationProxy !=
      (TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *)&local_18) {
    (this->ClothSimulationProxy).Object = (FClothSimulationProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ClothSimulationProxy).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// Simulate_AnyThread @ 14dc5a480

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FSKMClothingSimulation::Simulate_AnyThread
          (FSKMClothingSimulation *this,IClothingSimulationContext *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  double dVar3;
  atomic<bool> aVar4;
  int iVar5;
  FClothSimulationProxy *pFVar6;
  FClothSimulationContext *pFVar7;
  FClothingSimulationSolver *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  ulong uVar14;
  bool bVar15;
  char cVar16;
  atomic<int> aVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_TickPhysics> FVar20;
  IConsoleManager *pIVar21;
  FClothSimulationContext *pFVar22;
  UActorComponent *this_00;
  UWorld *pUVar23;
  longlong *plVar24;
  TConsoleVariableData<bool> *pTVar25;
  longlong lVar26;
  FName FVar27;
  FScriptContainerElement *pFVar28;
  ulonglong uVar29;
  longlong lVar30;
  bool bVar31;
  bool bVar32;
  atomic<float> aVar33;
  atomic<float> aVar34;
  double dVar35;
  float fVar36;
  undefined1 auStackX_20 [8];
  undefined1 auStack_128 [4];
  FColor_u_0 FStack_124;
  int iStack_120;
  FName FStack_118;
  FName FStack_110;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  LARGE_INTEGER LStack_f0;
  LARGE_INTEGER LStack_e8;
  longlong lStack_e0;
  FName FStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  
  if ((param_1 == (IClothingSimulationContext *)0x0) ||
     (pFVar6 = (this->ClothSimulationProxy).Object, pFVar6 == (FClothSimulationProxy *)0x0)) {
    return;
  }
  if (!pFVar6->bIsPreProcessed) {
    return;
  }
  bVar32 = -1 < CpuChannel->Enabled;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId557,"FClothSimulationProxy_TickPhysics",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
               ,0x22d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId557);
  }
  FVar20 = StatPtr_STAT_ClothSimulationProxy_TickPhysics;
  if (StatPtr_STAT_ClothSimulationProxy_TickPhysics ==
      (FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_TickPhysics>)0x0) {
    pFVar19 = ::FName::FName(&FStack_d8,"STAT_ClothSimulationProxy_TickPhysics");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_ClothSimulationProxy_TickPhysics>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothSimulationProxy_TickPhysics,
                        *pFVar19,L"ClothSimulationProxy Tick Physics","STATGROUP_ChaosClothAsset",
                        "STATCAT_Advanced",L"ChaosClothAsset",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar27 = *(FName *)FVar20;
  bVar13 = false;
  bVar12 = false;
  FStack_110.ComparisonIndex.Value = 0;
  FStack_110.Number = 0;
  bVar31 = false;
  bVar15 = false;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      FStack_124.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&FStack_124._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar13 = false;
      bVar12 = true;
      bVar31 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_118.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        FStack_118.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_118,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationProxy.cpp"
                   ,0x22e);
        bVar13 = true;
        bVar12 = true;
        bVar31 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar15 = true;
      goto LAB_14dc5af13;
    }
  }
  bVar13 = bVar31;
  bVar12 = bVar15;
  bVar15 = false;
  FVar27 = FStack_110;
LAB_14dc5af13:
  pFVar7 = (pFVar6->ClothSimulationContext).Ptr;
  iStack_120 = (pFVar7->CacheData).CacheIndices.ArrayNum;
  if ((pFVar7->DeltaTime != 0.0) || (0 < iStack_120)) {
    lStack_e0 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lStack_e0 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
    {
      pIVar21 = IConsoleManager::Get();
      UseTimeStepSmoothingCVar =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar21 + 0xc0))(pIVar21,L"p.ChaosCloth.UseTimeStepSmoothing",1);
      _Init_thread_footer(&::_TSS0);
    }
    if (UseTimeStepSmoothingCVar == (IConsoleVariable *)0x0) {
      cVar16 = '\x01';
    }
    else {
      cVar16 = (**(code **)(*(longlong *)UseTimeStepSmoothingCVar + 0xc0))();
    }
    pFVar7 = (pFVar6->ClothSimulationContext).Ptr;
    pFVar22 = (FClothSimulationContext *)&((pFVar6->Solver).Ptr)->DeltaTime;
    fVar2 = pFVar7->DeltaTime;
    if (*(float *)pFVar22 <= 0.0) {
      pFVar22 = pFVar7;
    }
    fVar36 = __real_3f800000;
    if (cVar16 != '\0') {
      fVar36 = DeltaTimeDecay;
    }
    fVar36 = (fVar2 - pFVar22->DeltaTime) * fVar36 + pFVar22->DeltaTime;
    QueryPerformanceCounter(&LStack_f0);
    aVar33 = pFVar6->SimulationTime;
    dVar10 = (double)LStack_f0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    if (((pFVar6->bNeedResetClothFromNanCheck) ||
        (((pFVar6->ClothSimulationContext).Ptr)->bReset != false)) || ((float)aVar33 == 0.0)) {
      bVar31 = true;
    }
    else {
      bVar31 = false;
    }
    aVar4 = (atomic<bool>)((pFVar6->ClothSimulationContext).Ptr)->bTeleport;
    LOCK();
    pFVar6->bIsTeleported = aVar4;
    UNLOCK();
    pFVar7 = (pFVar6->ClothSimulationContext).Ptr;
    dStack_d0 = (pFVar7->ComponentTransform).Translation.XY.m128d_f64[0];
    dStack_c8 = (pFVar7->ComponentTransform).Translation.XY.m128d_f64[1];
    dStack_c0 = (pFVar7->ComponentTransform).Translation.ZW.m128d_f64[0];
    dStack_b8 = dStack_d0;
    dStack_b0 = dStack_c8;
    dStack_a8 = dStack_c0;
    ::Chaos::FClothingSimulationSolver::SetLocalSpaceLocation
              ((pFVar6->Solver).Ptr,(TVector<double,3> *)&dStack_d0,bVar31);
    pFVar7 = (pFVar6->ClothSimulationContext).Ptr;
    dVar35 = (pFVar7->ComponentTransform).Rotation.XY.m128d_f64[1];
    dVar3 = (pFVar7->ComponentTransform).Rotation.ZW.m128d_f64[0];
    dVar11 = (pFVar7->ComponentTransform).Rotation.ZW.m128d_f64[1];
    pFVar8 = (pFVar6->Solver).Ptr;
    *(double *)&pFVar8->LocalSpaceRotation = (pFVar7->ComponentTransform).Rotation.XY.m128d_f64[0];
    *(double *)&(pFVar8->LocalSpaceRotation).field_0x8 = dVar35;
    *(double *)&(pFVar8->LocalSpaceRotation).field_0x10 = dVar3;
    *(double *)&(pFVar8->LocalSpaceRotation).field_0x18 = dVar11;
    pFVar7 = (pFVar6->ClothSimulationContext).Ptr;
    fStack_f8 = (float)(pFVar7->WindVelocity).field0_0x0._s_0.Z;
    fStack_fc = (float)(pFVar7->WindVelocity).field0_0x0._s_0.Y;
    fStack_100 = (float)(pFVar7->WindVelocity).field0_0x0._s_0.X;
    ::Chaos::FClothingSimulationSolver::SetWindVelocity
              ((pFVar6->Solver).Ptr,(TVector<float,3> *)&fStack_100,0.0);
    pFVar7 = (pFVar6->ClothSimulationContext).Ptr;
    pFVar8 = (pFVar6->Solver).Ptr;
    dVar35 = (pFVar7->WorldGravity).field0_0x0._s_0.Y;
    dVar3 = (pFVar7->WorldGravity).field0_0x0._s_0.Z;
    *(float *)&pFVar8->Gravity = (float)(pFVar7->WorldGravity).field0_0x0._s_0.X;
    *(float *)&(pFVar8->Gravity).field_0x4 = (float)dVar35;
    *(float *)&(pFVar8->Gravity).field_0x8 = (float)dVar3;
    ((pFVar6->Solver).Ptr)->bIsClothGravityOverrideEnabled = true;
    dVar35 = __real_3ff0000000000000;
    if (bVar31 == false) {
      dVar35 = ((double)((pFVar6->ClothSimulationContext).Ptr)->VelocityScale * (double)fVar36) /
               (double)fVar2;
    }
    ((pFVar6->Solver).Ptr)->VelocityScale = dVar35;
    pFVar28 = (pFVar6->Cloths).AllocatorInstance.Data;
    iVar5 = (pFVar6->Cloths).ArrayNum;
    pFVar1 = pFVar28 + (longlong)iVar5 * 8;
    while( true ) {
      if ((pFVar6->Cloths).ArrayNum != iVar5) {
        auStackX_20[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(auStackX_20);
      }
      if (pFVar28 == pFVar1) break;
      if (bVar31 != false) {
        *(undefined1 *)(*(longlong *)pFVar28 + 0x44) = 1;
      }
      if (aVar4 != (atomic<bool>)0x0) {
        *(undefined1 *)(*(longlong *)pFVar28 + 0x45) = 1;
      }
      pFVar7 = (pFVar6->ClothSimulationContext).Ptr;
      if (pFVar7->bResetRestLengthsWithMorphTarget != false) {
        lVar30 = *(longlong *)pFVar28;
        *(undefined1 *)(lVar30 + 0x46) = 1;
        ::FString::operator=((FString *)(lVar30 + 0x48),&pFVar7->ResetRestLengthsMorphTargetName);
      }
      pFVar28 = pFVar28 + 8;
    }
    pFVar8 = (pFVar6->Solver).Ptr;
    if ((pFVar8->bEnableSolver == false) && (0 < iStack_120)) {
      ::Chaos::FClothingSimulationSolver::UpdateFromCache
                (pFVar8,&((pFVar6->ClothSimulationContext).Ptr)->CacheData);
    }
    else {
      ::Chaos::FClothingSimulationSolver::Update(pFVar8,fVar36);
    }
    aVar17 = (atomic<int>)
             ::Chaos::FClothingSimulationSolver::GetNumUsedIterations((pFVar6->Solver).Ptr);
    LOCK();
    pFVar6->NumIterations = aVar17;
    UNLOCK();
    LOCK();
    pFVar6->NumSubsteps = (atomic<int>)((pFVar6->Solver).Ptr)->NumUsedSubsteps;
    UNLOCK();
    QueryPerformanceCounter(&LStack_e8);
    aVar34 = (atomic<float>)
             (float)(((double)LStack_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar10) *
                    __real_408f400000000000);
    if ((float)aVar33 != 0.0) {
      aVar34 = (atomic<float>)(((float)aVar34 - (float)aVar33) * __real_3cf5c28f + (float)aVar33);
    }
    iVar18 = -1;
    LOCK();
    pFVar6->SimulationTime = aVar34;
    UNLOCK();
    LOCK();
    pFVar6->NumKinematicParticles = (atomic<int>)0x0;
    UNLOCK();
    LOCK();
    pFVar6->NumDynamicParticles = (atomic<int>)0x0;
    UNLOCK();
    pFVar28 = (pFVar6->Cloths).AllocatorInstance.Data;
    iVar5 = (pFVar6->Cloths).ArrayNum;
    pFVar1 = pFVar28 + (longlong)iVar5 * 8;
    while( true ) {
      if ((pFVar6->Cloths).ArrayNum != iVar5) {
        auStack_128[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<Chaos::FClothingSimulationCloth,TDefaultDelete<Chaos::FClothingSimulationCloth>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(auStack_128);
      }
      if (pFVar28 == pFVar1) break;
      LOCK();
      pFVar6->NumKinematicParticles =
           (atomic<int>)
           ((int)pFVar6->NumKinematicParticles + *(int *)(*(longlong *)pFVar28 + 0x150));
      UNLOCK();
      LOCK();
      pFVar6->NumDynamicParticles =
           (atomic<int>)((int)pFVar6->NumDynamicParticles + *(int *)(*(longlong *)pFVar28 + 0x154));
      UNLOCK();
      if ((iVar18 == -1) && (0 < (*(FClothingSimulationCloth **)pFVar28)->NumActiveDynamicParticles)
         ) {
        iVar18 = ::Chaos::FClothingSimulationCloth::GetParticleRangeId
                           (*(FClothingSimulationCloth **)pFVar28,(pFVar6->Solver).Ptr);
      }
      pFVar28 = pFVar28 + 8;
    }
    if (iVar18 == -1) {
      LOCK();
      pFVar6->LastLinearSolveError = (atomic<float>)0x0;
      UNLOCK();
      aVar17 = (atomic<int>)0x0;
    }
    else {
      aVar33 = (atomic<float>)
               ::Chaos::FClothingSimulationSolver::GetLinearSolverError((pFVar6->Solver).Ptr,iVar18)
      ;
      LOCK();
      pFVar6->LastLinearSolveError = aVar33;
      UNLOCK();
      aVar17 = (atomic<int>)
               ::Chaos::FClothingSimulationSolver::GetNumLinearSolverIterations
                         ((pFVar6->Solver).Ptr,iVar18);
    }
    LOCK();
    pFVar6->LastLinearSolveIterations = aVar17;
    UNLOCK();
    pFVar6->bNeedResetClothFromNanCheck = false;
    this_00 = (UActorComponent *)(**(code **)*pFVar6->ClothComponentAdapter)();
    pUVar23 = this_00->WorldPrivate;
    if (((pUVar23 != (UWorld *)0x0) ||
        (pUVar23 = UActorComponent::GetWorld_Uncached(this_00), pUVar23 != (UWorld *)0x0)) &&
       ((pUVar23->WorldType).Value != '\x04')) {
      if ((*(int *)(lStack_e0 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)
         ) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawLocalSpaceCVar = pTVar25;
        _Init_thread_footer(&::_TSS3);
      }
      uVar14 = _tls_index;
      uVar29 = (ulonglong)_tls_index;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar29 * 8) + 0x9d4c) <
           ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawBoundsCVar = pTVar25;
        _Init_thread_footer(&::_TSS4);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar29 * 8) + 0x9d4c) <
           ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawGravityCVar = pTVar25;
        _Init_thread_footer(&::_TSS5);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawPhysMeshWiredCVar = pTVar25;
        _Init_thread_footer(&::_TSS6);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar29 * 8) + 0x9d4c) <
           ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawAnimMeshWiredCVar = pTVar25;
        _Init_thread_footer(&::_TSS7);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawPointVelocitiesCVar = pTVar25;
        _Init_thread_footer(&::_TSS8);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawAnimNormalsCVar = pTVar25;
        _Init_thread_footer(&::_TSS9);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawPointNormalsCVar = pTVar25;
        _Init_thread_footer(&::_TSS10);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar29 * 8) + 0x9d4c) <
           ::_TSS11) && (_Init_thread_header(&::_TSS11), ::_TSS11 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawCollisionCVar = pTVar25;
        _Init_thread_footer(&::_TSS11);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < ::_TSS12) && (_Init_thread_header(&::_TSS12), ::_TSS12 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawBackstopsCVar = pTVar25;
        _Init_thread_footer(&::_TSS12);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < ::_TSS13) && (_Init_thread_header(&::_TSS13), ::_TSS13 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawBackstopDistancesCVar = pTVar25;
        _Init_thread_footer(&::_TSS13);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < ::_TSS14) && (_Init_thread_header(&::_TSS14), ::_TSS14 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawMaxDistancesCVar = pTVar25;
        _Init_thread_footer(&::_TSS14);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < ::_TSS15) && (_Init_thread_header(&::_TSS15), ::_TSS15 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawMaxDistanceValuesCVar = pTVar25;
        _Init_thread_footer(&::_TSS15);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < _TSS16) && (_Init_thread_header(&_TSS16), _TSS16 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawAnimDriveCVar = pTVar25;
        _Init_thread_footer(&_TSS16);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < _TSS17) && (_Init_thread_header(&_TSS17), _TSS17 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawEdgeConstraintCVar = pTVar25;
        _Init_thread_footer(&_TSS17);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < _TSS18) && (_Init_thread_header(&_TSS18), _TSS18 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawBendingConstraintCVar = pTVar25;
        _Init_thread_footer(&_TSS18);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar29 * 8) + 0x9d4c) <
           _TSS19) && (_Init_thread_header(&_TSS19), _TSS19 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawLongRangeConstraintCVar = pTVar25;
        _Init_thread_footer(&_TSS19);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < _TSS20) && (_Init_thread_header(&_TSS20), _TSS20 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawWindForcesCVar = pTVar25;
        _Init_thread_footer(&_TSS20);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < _TSS21) && (_Init_thread_header(&_TSS21), _TSS21 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawWindVelocityCVar = pTVar25;
        _Init_thread_footer(&_TSS21);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < _TSS22) && (_Init_thread_header(&_TSS22), _TSS22 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawSelfCollisionCVar = pTVar25;
        _Init_thread_footer(&_TSS22);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < _TSS23) && (_Init_thread_header(&_TSS23), _TSS23 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawSelfIntersectionCVar = pTVar25;
        _Init_thread_footer(&_TSS23);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < _TSS24) && (_Init_thread_header(&_TSS24), _TSS24 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawParticleIndicesCVar = pTVar25;
        _Init_thread_footer(&_TSS24);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < _TSS25) && (_Init_thread_header(&_TSS25), _TSS25 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawElementIndicesCVar = pTVar25;
        _Init_thread_footer(&_TSS25);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < _TSS26) && (_Init_thread_header(&_TSS26), _TSS26 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawClothClothConstraintsCVar = pTVar25;
        _Init_thread_footer(&_TSS26);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < _TSS27) && (_Init_thread_header(&_TSS27), _TSS27 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawTeleportResetCVar = pTVar25;
        _Init_thread_footer(&_TSS27);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar14 * 8) +
                   0x9d4c) < _TSS28) && (_Init_thread_header(&_TSS28), _TSS28 == -1)) {
        if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
           ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Singleton != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x4fb,L""), bVar31)))) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar24 = (longlong *)(**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))();
        pTVar25 = (TConsoleVariableData<bool> *)0x0;
        if (plVar24 != (longlong *)0x0) {
          pTVar25 = (TConsoleVariableData<bool> *)(**(code **)(*plVar24 + 0x60))(plVar24);
        }
        DebugDrawExtremlyDeformedEdgesCVar = pTVar25;
        _Init_thread_footer(&_TSS28);
      }
      pTVar25 = DebugDrawLocalSpaceCVar;
      lVar30 = 1;
      if (DebugDrawLocalSpaceCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawLocalSpace
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar25 = DebugDrawBoundsCVar;
      if (DebugDrawBoundsCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawBounds
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar25 = DebugDrawGravityCVar;
      if (DebugDrawGravityCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawGravity
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar25 = DebugDrawPhysMeshWiredCVar;
      if (DebugDrawPhysMeshWiredCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawPhysMeshWired
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar25 = DebugDrawAnimMeshWiredCVar;
      if (DebugDrawAnimMeshWiredCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawAnimMeshWired
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar25 = DebugDrawPointVelocitiesCVar;
      if (DebugDrawPointVelocitiesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawPointVelocities
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar25 = DebugDrawAnimNormalsCVar;
      dVar10 = __real_4034000000000000;
      if (DebugDrawAnimNormalsCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawAnimNormals
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0,dVar10);
        }
      }
      pTVar25 = DebugDrawPointNormalsCVar;
      if (DebugDrawPointNormalsCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawPointNormals
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0,dVar10);
        }
      }
      pTVar25 = DebugDrawCollisionCVar;
      if (DebugDrawCollisionCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawCollision
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0,false);
        }
      }
      pTVar25 = DebugDrawBackstopsCVar;
      if (DebugDrawBackstopsCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawBackstops
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar25 = DebugDrawBackstopDistancesCVar;
      if (DebugDrawBackstopDistancesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawBackstopDistances
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar25 = DebugDrawMaxDistancesCVar;
      if (DebugDrawMaxDistancesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawMaxDistances
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar25 = DebugDrawMaxDistanceValuesCVar;
      if (DebugDrawMaxDistanceValuesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawMaxDistanceValues
                    ((pFVar6->Visualization).Ptr,(FCanvas *)0x0,(FSceneView *)0x0);
        }
      }
      pTVar25 = DebugDrawAnimDriveCVar;
      if (DebugDrawAnimDriveCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawAnimDrive
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar25 = DebugDrawEdgeConstraintCVar;
      if (DebugDrawEdgeConstraintCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawEdgeConstraint
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar25 = DebugDrawBendingConstraintCVar;
      if (DebugDrawBendingConstraintCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawBendingConstraint
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar25 = DebugDrawLongRangeConstraintCVar;
      if (DebugDrawLongRangeConstraintCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawLongRangeConstraint
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar25 = DebugDrawWindForcesCVar;
      if (DebugDrawWindForcesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawWindAndPressureForces
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0,
                     __real_4024000000000000);
        }
      }
      pTVar25 = DebugDrawWindVelocityCVar;
      if (DebugDrawWindVelocityCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawWindVelocity
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0,
                     __real_3fb999999999999a);
        }
      }
      pTVar25 = DebugDrawSelfCollisionCVar;
      if (DebugDrawSelfCollisionCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawSelfCollision
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar25 = DebugDrawSelfIntersectionCVar;
      if (DebugDrawSelfIntersectionCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawSelfIntersection
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar25 = DebugDrawParticleIndicesCVar;
      if (DebugDrawParticleIndicesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawParticleIndices
                    ((pFVar6->Visualization).Ptr,(FCanvas *)0x0,(FSceneView *)0x0);
        }
      }
      pTVar25 = DebugDrawElementIndicesCVar;
      if (DebugDrawElementIndicesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawElementIndices
                    ((pFVar6->Visualization).Ptr,(FCanvas *)0x0,(FSceneView *)0x0);
        }
      }
      pTVar25 = DebugDrawClothClothConstraintsCVar;
      if (DebugDrawClothClothConstraintsCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawClothClothConstraints
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar25 = DebugDrawTeleportResetCVar;
      if (DebugDrawTeleportResetCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar26 = 0;
        }
        else {
          lVar26 = 1;
        }
        if (pTVar25->ShadowedValue[lVar26] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawTeleportReset
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
      pTVar25 = DebugDrawExtremlyDeformedEdgesCVar;
      if (DebugDrawExtremlyDeformedEdgesCVar != (TConsoleVariableData<bool> *)0x0) {
        bVar31 = IsInParallelGameThread();
        if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
          lVar30 = 0;
        }
        if (pTVar25->ShadowedValue[lVar30] != false) {
          ::Chaos::FClothVisualizationNoGC::DrawExtremlyDeformedEdges
                    ((pFVar6->Visualization).Ptr,(FPrimitiveDrawInterface *)0x0);
        }
      }
    }
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 15058aee0

bool __thiscall
`UE::Chaos::ClothAsset::FSKMClothingSimulation::CreateActor'::__l57::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<785012041936011417>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<785012041936011417>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

