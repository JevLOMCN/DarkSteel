// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 11

// FCollectionClothSimAccessoryMeshConstFacade @ 14db3b050

FCollectionClothSimAccessoryMeshConstFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshConstFacade::
FCollectionClothSimAccessoryMeshConstFacade
          (FCollectionClothSimAccessoryMeshConstFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCollectionClothSimAccessoryMeshConstFacade *pFVar5;
  
  this->_padding_ =
       (longlong)&___7FCollectionClothSimAccessoryMeshConstFacade_ClothAsset_Chaos_UE__6B_;
  (this->ClothCollection).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ClothCollection).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->MeshIndex = param_2;
  bVar3 = FConstClothCollection::IsValid(param_1->Object,CookedOnly);
  if (((!bVar3) &&
      (bVar3 = FConstClothCollection::IsValid(param_1->Object,SimAccessoryMeshes), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClothCollection->IsValid(EClothCollectionExtendedSchemas::CookedOnly) || ClothCollection->IsValid(EClothCollectionExtendedSchemas::SimAccessoryMeshes)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                         ,0x3f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FCollectionClothSimAccessoryMeshConstFacade *)(*pcVar2)();
    return pFVar5;
  }
  if ((-1 < this->MeshIndex) &&
     (iVar4 = FManagedArrayCollection::NumElements
                        ((param_1->Object->ManagedArrayCollection).Object,
                         ClothCollectionGroup::SimAccessoryMeshes), this->MeshIndex < iVar4)) {
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("MeshIndex >= 0 && MeshIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimAccessoryMeshes)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                     ,0x40,L"");
  if (!bVar3) {
    return this;
  }
  pcVar2 = (code *)swi(3);
  pFVar5 = (FCollectionClothSimAccessoryMeshConstFacade *)(*pcVar2)();
  return pFVar5;
}

// ~FCollectionClothSimAccessoryMeshConstFacade @ 14db3bbb0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshConstFacade::
~FCollectionClothSimAccessoryMeshConstFacade(FCollectionClothSimAccessoryMeshConstFacade *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothCollection).SharedReferenceCount.ReferenceController);
  return;
}

// GetSimAccessoryMeshBoneIndices @ 14db5d120

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshBoneIndices
          (FCollectionClothSimAccessoryMeshConstFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  uint uVar1;
  FConstClothCollection *this_00;
  TManagedArray<FName> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar7;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName local_res8;
  
  this_00 = (this->ClothCollection).Object;
  if (this_00->SimAccessoryMeshBoneIndicesAttribute != (TManagedArray<FName> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,
                       ClothCollectionGroup::SimAccessoryMeshes);
    uVar1 = this->MeshIndex;
    if ((int)uVar1 < iVar5) {
      pTVar2 = ((this->ClothCollection).Object)->SimAccessoryMeshBoneIndicesAttribute;
      uVar6 = 0;
      if ((int)uVar1 < *(int *)&pTVar2->field_0x18) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar3)();
          return pTVar7;
        }
      }
      local_res8 = *(FName *)(*(longlong *)&pTVar2->field_0x10 + (longlong)(int)uVar1 * 8);
      goto LAB_14db5d1bc;
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
LAB_14db5d1bc:
  pTVar8 = FConstClothCollection::GetSimAccessoryMeshBoneIndices(this_00,&local_res8);
  if (pTVar8 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar5 = (**(code **)(*(longlong *)pTVar8 + 0x60))(pTVar8);
    __return_storage_ptr__->DataPtr =
         *(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar8->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar5;
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshBoneIndicesAttribute @ 14db5d560

FName __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshConstFacade::
GetSimAccessoryMeshBoneIndicesAttribute(FCollectionClothSimAccessoryMeshConstFacade *this)

{
  uint uVar1;
  FConstClothCollection *pFVar2;
  TManagedArray<FName> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName FVar7;
  uint uVar8;
  undefined8 uVar9;
  FName in_RDX;
  
  pFVar2 = (this->ClothCollection).Object;
  if (pFVar2->SimAccessoryMeshBoneIndicesAttribute != (TManagedArray<FName> *)0x0) {
    iVar6 = FManagedArrayCollection::NumElements
                      ((pFVar2->ManagedArrayCollection).Object,
                       ClothCollectionGroup::SimAccessoryMeshes);
    uVar1 = this->MeshIndex;
    if ((int)uVar1 < iVar6) {
      pTVar3 = ((this->ClothCollection).Object)->SimAccessoryMeshBoneIndicesAttribute;
      uVar8 = 0;
      if ((int)uVar1 < *(int *)&pTVar3->field_0x18) {
        uVar8 = ~uVar1 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          FVar7 = (FName)(*pcVar4)();
          return FVar7;
        }
      }
      uVar9 = *(undefined8 *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar1 * 8);
      goto LAB_14db5d5f7;
    }
  }
  uVar9 = 0;
LAB_14db5d5f7:
  *(undefined8 *)in_RDX = uVar9;
  return in_RDX;
}

// GetSimAccessoryMeshBoneWeights @ 14db5d620

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshBoneWeights
          (FCollectionClothSimAccessoryMeshConstFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  uint uVar1;
  FConstClothCollection *this_00;
  TManagedArray<FName> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar7;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName local_res8;
  
  this_00 = (this->ClothCollection).Object;
  if (this_00->SimAccessoryMeshBoneWeightsAttribute != (TManagedArray<FName> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,
                       ClothCollectionGroup::SimAccessoryMeshes);
    uVar1 = this->MeshIndex;
    if ((int)uVar1 < iVar5) {
      pTVar2 = ((this->ClothCollection).Object)->SimAccessoryMeshBoneWeightsAttribute;
      uVar6 = 0;
      if ((int)uVar1 < *(int *)&pTVar2->field_0x18) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar3)();
          return pTVar7;
        }
      }
      local_res8 = *(FName *)(*(longlong *)&pTVar2->field_0x10 + (longlong)(int)uVar1 * 8);
      goto LAB_14db5d6bc;
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
LAB_14db5d6bc:
  pTVar8 = FConstClothCollection::GetSimAccessoryMeshBoneWeights(this_00,&local_res8);
  if (pTVar8 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar5 = (**(code **)(*(longlong *)pTVar8 + 0x60))(pTVar8);
    __return_storage_ptr__->DataPtr =
         *(TArray<float,TSizedDefaultAllocator<32>_> **)&pTVar8->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar5;
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshBoneWeightsAttribute @ 14db5da30

FName __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshConstFacade::
GetSimAccessoryMeshBoneWeightsAttribute(FCollectionClothSimAccessoryMeshConstFacade *this)

{
  uint uVar1;
  FConstClothCollection *pFVar2;
  TManagedArray<FName> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName FVar7;
  uint uVar8;
  undefined8 uVar9;
  FName in_RDX;
  
  pFVar2 = (this->ClothCollection).Object;
  if (pFVar2->SimAccessoryMeshBoneWeightsAttribute != (TManagedArray<FName> *)0x0) {
    iVar6 = FManagedArrayCollection::NumElements
                      ((pFVar2->ManagedArrayCollection).Object,
                       ClothCollectionGroup::SimAccessoryMeshes);
    uVar1 = this->MeshIndex;
    if ((int)uVar1 < iVar6) {
      pTVar3 = ((this->ClothCollection).Object)->SimAccessoryMeshBoneWeightsAttribute;
      uVar8 = 0;
      if ((int)uVar1 < *(int *)&pTVar3->field_0x18) {
        uVar8 = ~uVar1 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          FVar7 = (FName)(*pcVar4)();
          return FVar7;
        }
      }
      uVar9 = *(undefined8 *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar1 * 8);
      goto LAB_14db5dac7;
    }
  }
  uVar9 = 0;
LAB_14db5dac7:
  *(undefined8 *)in_RDX = uVar9;
  return in_RDX;
}

// GetSimAccessoryMeshName @ 14db5dc60

FName __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshName
          (FCollectionClothSimAccessoryMeshConstFacade *this)

{
  uint uVar1;
  FConstClothCollection *pFVar2;
  TManagedArray<FName> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName FVar7;
  uint uVar8;
  undefined8 uVar9;
  FName in_RDX;
  
  pFVar2 = (this->ClothCollection).Object;
  if (pFVar2->SimAccessoryMeshName != (TManagedArray<FName> *)0x0) {
    iVar6 = FManagedArrayCollection::NumElements
                      ((pFVar2->ManagedArrayCollection).Object,
                       ClothCollectionGroup::SimAccessoryMeshes);
    uVar1 = this->MeshIndex;
    if ((int)uVar1 < iVar6) {
      pTVar3 = ((this->ClothCollection).Object)->SimAccessoryMeshName;
      uVar8 = 0;
      if ((int)uVar1 < *(int *)&pTVar3->field_0x18) {
        uVar8 = ~uVar1 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          FVar7 = (FName)(*pcVar4)();
          return FVar7;
        }
      }
      uVar9 = *(undefined8 *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar1 * 8);
      goto LAB_14db5dcf7;
    }
  }
  uVar9 = 0;
LAB_14db5dcf7:
  *(undefined8 *)in_RDX = uVar9;
  return in_RDX;
}

// GetSimAccessoryMeshNormal @ 14db5dd20

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshNormal
          (FCollectionClothSimAccessoryMeshConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  uint uVar1;
  FConstClothCollection *this_00;
  TManagedArray<FName> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar7;
  TManagedArray<UE::Math::TVector<float>_> *pTVar8;
  FName local_res8;
  
  this_00 = (this->ClothCollection).Object;
  if (this_00->SimAccessoryMeshNormalAttribute != (TManagedArray<FName> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,
                       ClothCollectionGroup::SimAccessoryMeshes);
    uVar1 = this->MeshIndex;
    if ((int)uVar1 < iVar5) {
      pTVar2 = ((this->ClothCollection).Object)->SimAccessoryMeshNormalAttribute;
      uVar6 = 0;
      if ((int)uVar1 < *(int *)&pTVar2->field_0x18) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar3)();
          return pTVar7;
        }
      }
      local_res8 = *(FName *)(*(longlong *)&pTVar2->field_0x10 + (longlong)(int)uVar1 * 8);
      goto LAB_14db5ddbc;
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
LAB_14db5ddbc:
  pTVar8 = FConstClothCollection::GetSimAccessoryMeshNormal(this_00,&local_res8);
  if (pTVar8 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar5 = (**(code **)(*(longlong *)pTVar8 + 0x60))(pTVar8);
    __return_storage_ptr__->DataPtr = *(TVector<float> **)&pTVar8->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar5;
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshNormalAttribute @ 14db5e160

FName __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshConstFacade::
GetSimAccessoryMeshNormalAttribute(FCollectionClothSimAccessoryMeshConstFacade *this)

{
  uint uVar1;
  FConstClothCollection *pFVar2;
  TManagedArray<FName> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName FVar7;
  uint uVar8;
  undefined8 uVar9;
  FName in_RDX;
  
  pFVar2 = (this->ClothCollection).Object;
  if (pFVar2->SimAccessoryMeshNormalAttribute != (TManagedArray<FName> *)0x0) {
    iVar6 = FManagedArrayCollection::NumElements
                      ((pFVar2->ManagedArrayCollection).Object,
                       ClothCollectionGroup::SimAccessoryMeshes);
    uVar1 = this->MeshIndex;
    if ((int)uVar1 < iVar6) {
      pTVar3 = ((this->ClothCollection).Object)->SimAccessoryMeshNormalAttribute;
      uVar8 = 0;
      if ((int)uVar1 < *(int *)&pTVar3->field_0x18) {
        uVar8 = ~uVar1 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          FVar7 = (FName)(*pcVar4)();
          return FVar7;
        }
      }
      uVar9 = *(undefined8 *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar1 * 8);
      goto LAB_14db5e1f7;
    }
  }
  uVar9 = 0;
LAB_14db5e1f7:
  *(undefined8 *)in_RDX = uVar9;
  return in_RDX;
}

// GetSimAccessoryMeshPosition3D @ 14db5e220

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshPosition3D
          (FCollectionClothSimAccessoryMeshConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  uint uVar1;
  FConstClothCollection *this_00;
  TManagedArray<FName> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar7;
  TManagedArray<UE::Math::TVector<float>_> *pTVar8;
  FName local_res8;
  
  this_00 = (this->ClothCollection).Object;
  if (this_00->SimAccessoryMeshPosition3DAttribute != (TManagedArray<FName> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,
                       ClothCollectionGroup::SimAccessoryMeshes);
    uVar1 = this->MeshIndex;
    if ((int)uVar1 < iVar5) {
      pTVar2 = ((this->ClothCollection).Object)->SimAccessoryMeshPosition3DAttribute;
      uVar6 = 0;
      if ((int)uVar1 < *(int *)&pTVar2->field_0x18) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar3)();
          return pTVar7;
        }
      }
      local_res8 = *(FName *)(*(longlong *)&pTVar2->field_0x10 + (longlong)(int)uVar1 * 8);
      goto LAB_14db5e2bc;
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
LAB_14db5e2bc:
  pTVar8 = FConstClothCollection::GetSimAccessoryMeshPosition3D(this_00,&local_res8);
  if (pTVar8 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar5 = (**(code **)(*(longlong *)pTVar8 + 0x60))(pTVar8);
    __return_storage_ptr__->DataPtr = *(TVector<float> **)&pTVar8->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar5;
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshPosition3DAttribute @ 14db5e660

FName __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshConstFacade::
GetSimAccessoryMeshPosition3DAttribute(FCollectionClothSimAccessoryMeshConstFacade *this)

{
  uint uVar1;
  FConstClothCollection *pFVar2;
  TManagedArray<FName> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName FVar7;
  uint uVar8;
  undefined8 uVar9;
  FName in_RDX;
  
  pFVar2 = (this->ClothCollection).Object;
  if (pFVar2->SimAccessoryMeshPosition3DAttribute != (TManagedArray<FName> *)0x0) {
    iVar6 = FManagedArrayCollection::NumElements
                      ((pFVar2->ManagedArrayCollection).Object,
                       ClothCollectionGroup::SimAccessoryMeshes);
    uVar1 = this->MeshIndex;
    if ((int)uVar1 < iVar6) {
      pTVar3 = ((this->ClothCollection).Object)->SimAccessoryMeshPosition3DAttribute;
      uVar8 = 0;
      if ((int)uVar1 < *(int *)&pTVar3->field_0x18) {
        uVar8 = ~uVar1 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          FVar7 = (FName)(*pcVar4)();
          return FVar7;
        }
      }
      uVar9 = *(undefined8 *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar1 * 8);
      goto LAB_14db5e6f7;
    }
  }
  uVar9 = 0;
LAB_14db5e6f7:
  *(undefined8 *)in_RDX = uVar9;
  return in_RDX;
}

