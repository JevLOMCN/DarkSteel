// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 9

// FClothSimulationAccessoryMesh @ 14dc33ee0

FClothSimulationAccessoryMesh * __thiscall
UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh::FClothSimulationAccessoryMesh
          (FClothSimulationAccessoryMesh *this,
          TSharedRef<UE::Chaos::ClothAsset::FCollectionClothConstFacade,1> *param_1,
          FClothingSimulationMesh *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FName_const_,int> *pTVar3;
  FClothSimulationAccessoryMesh *pFVar4;
  uint uVar5;
  TArrayView<FName_const_,int> local_18;
  
  pTVar3 = FCollectionClothConstFacade::GetSimAccessoryMeshName(param_1->Object,&local_18);
  uVar5 = 0;
  if (param_3 < pTVar3->ArrayNum) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FClothSimulationAccessoryMesh *)(*pcVar1)();
      return pFVar4;
    }
  }
  ::Chaos::FClothingSimulationAccessoryMesh::FClothingSimulationAccessoryMesh
            ((FClothingSimulationAccessoryMesh *)this,param_2,pTVar3->DataPtr + param_3);
  this->_padding_ = (longlong)&___7FClothSimulationAccessoryMesh_ClothAsset_Chaos_UE__6B_;
  FCollectionClothConstFacade::GetSimAccessoryMesh
            (param_1->Object,&this->AccessoryMeshFacade,param_3);
  (this->BoneData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneData).ArrayNum = 0;
  (this->BoneData).ArrayMax = 0;
  SetBoneData(this);
  return this;
}

// ~FClothSimulationAccessoryMesh @ 14dc35c70

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh::~FClothSimulationAccessoryMesh
          (FClothSimulationAccessoryMesh *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FClothSimulationAccessoryMesh_ClothAsset_Chaos_UE__6B_;
  pFVar1 = (this->BoneData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AccessoryMeshFacade).ClothCollection.SharedReferenceCount.ReferenceController);
  ::Chaos::FClothingSimulationAccessoryMesh::~FClothingSimulationAccessoryMesh
            ((FClothingSimulationAccessoryMesh *)this);
  return;
}

// GetBoneData @ 14dc4a540

TArrayView<FClothVertBoneData_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh::GetBoneData
          (FClothSimulationAccessoryMesh *this,
          TArrayView<FClothVertBoneData_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FClothVertBoneData_const_,int> *pTVar4;
  
  iVar1 = (this->BoneData).ArrayNum;
  __return_storage_ptr__->DataPtr = (FClothVertBoneData *)(this->BoneData).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FClothVertBoneData_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetNormals @ 14dc4d810

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh::GetNormals
          (FClothSimulationAccessoryMesh *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshNormal
            (&this->AccessoryMeshFacade,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetNumPatternPoints @ 14dc4da00

int __thiscall
UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh::GetNumPatternPoints
          (FClothSimulationAccessoryMesh *this)

{
  return 0;
}

// GetNumPoints @ 14dc4da40

int __thiscall
UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh::GetNumPoints
          (FClothSimulationAccessoryMesh *this)

{
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar1;
  TArrayView<UE::Math::TVector<float>_const_,int> local_18;
  
  pTVar1 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshPosition3D
                     (&this->AccessoryMeshFacade,&local_18);
  return pTVar1->ArrayNum;
}

// GetPatternPositions @ 14dc4de30

TArrayView<UE::Math::TVector2<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh::GetPatternPositions
          (FClothSimulationAccessoryMesh *this,
          TArrayView<UE::Math::TVector2<float>_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (TVector2<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetPositions @ 14dc4e0b0

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh::GetPositions
          (FClothSimulationAccessoryMesh *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshPosition3D
            (&this->AccessoryMeshFacade,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SetBoneData @ 14dc57570

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationAccessoryMesh::SetBoneData
          (FClothSimulationAccessoryMesh *this)

{
  TArray<FClothVertBoneData,TSizedDefaultAllocator<32>_> *this_00;
  undefined2 uVar1;
  code *pcVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_78;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_68 [2];
  
  FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshBoneIndices
            (&this->AccessoryMeshFacade,&local_78);
  FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshBoneWeights
            (&this->AccessoryMeshFacade,local_68);
  if ((local_78.ArrayNum != local_68[0].ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SimBoneIndices.Num() == SimBoneWeights.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationAccessoryMesh.cpp"
                         ,0x13,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = &this->BoneData;
  TArray<FClothVertBoneData,TSizedDefaultAllocator<32>_>::SetNum(this_00,local_78.ArrayNum,Default);
  uVar10 = 0;
  if (0 < local_78.ArrayNum) {
    lVar11 = 0;
    local_res20 = 0;
    local_res18 = 0;
    local_res10 = 0;
    do {
      uVar12 = ~uVar10 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar10 < local_78.ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar3 = local_78.DataPtr;
      uVar9 = 0;
      if ((int)uVar10 < local_68[0].ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(int *)((longlong)&pTVar3->ArrayNum + lVar11) !=
           *(int *)((longlong)&(local_68[0].DataPtr)->ArrayNum + lVar11)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SimBoneIndices[VertexIndex].Num() == SimBoneWeights[VertexIndex].Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationAccessoryMesh.cpp"
                             ,0x17,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = 0;
      if ((int)uVar10 < local_78.ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((0xc < *(int *)((longlong)&(local_78.DataPtr)->ArrayNum + lVar11)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SimBoneIndices[VertexIndex].Num() <= FClothVertBoneData::MaxTotalInfluences"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationAccessoryMesh.cpp"
                             ,0x18,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = 0;
      if ((int)uVar10 < local_78.ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = 0xc;
      if (*(int *)((longlong)&(local_78.DataPtr)->ArrayNum + lVar11) < 0xc) {
        uVar8 = *(undefined4 *)((longlong)&(local_78.DataPtr)->ArrayNum + lVar11);
      }
      uVar9 = 0;
      if ((int)uVar10 < (this->BoneData).ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = 0;
      *(undefined4 *)((this_00->AllocatorInstance).Data + local_res20) = uVar8;
      lVar13 = 0;
      while( true ) {
        uVar6 = 0;
        if ((int)uVar10 < (this->BoneData).ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)((this_00->AllocatorInstance).Data + local_res20) <= (int)uVar9) break;
        uVar6 = 0;
        if ((int)uVar10 < local_78.ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar3 = local_78.DataPtr;
        uVar6 = 0;
        if ((int)uVar9 < *(int *)((longlong)&(local_78.DataPtr)->ArrayNum + lVar11)) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = *(undefined2 *)
                 (*(longlong *)((longlong)&(pTVar3->AllocatorInstance).Data + lVar11) + lVar13 * 4);
        uVar6 = 0;
        if ((int)uVar10 < (this->BoneData).ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined2 *)((this_00->AllocatorInstance).Data + (local_res10 + lVar13) * 2 + 4) = uVar1;
        uVar6 = 0;
        if ((int)uVar10 < local_68[0].ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar4 = local_68[0].DataPtr;
        uVar6 = 0;
        if ((int)uVar9 < *(int *)((longlong)&(local_68[0].DataPtr)->ArrayNum + lVar11)) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar8 = *(undefined4 *)
                 (*(longlong *)((longlong)&(pTVar4->AllocatorInstance).Data + lVar11) + lVar13 * 4);
        uVar6 = 0;
        if ((int)uVar10 < (this->BoneData).ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar9 = uVar9 + 1;
        lVar7 = local_res18 + lVar13;
        lVar13 = lVar13 + 1;
        *(undefined4 *)((this_00->AllocatorInstance).Data + lVar7 * 4 + 0x1c) = uVar8;
      }
      local_res10 = local_res10 + 0x26;
      local_res20 = local_res20 + 0x4c;
      local_res18 = local_res18 + 0x13;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar10 < local_78.ArrayNum);
  }
  return;
}

