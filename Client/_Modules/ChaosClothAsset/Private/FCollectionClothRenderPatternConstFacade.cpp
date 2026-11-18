// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 25

// FCollectionClothRenderPatternConstFacade @ 14db3ad20

FCollectionClothRenderPatternConstFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::
FCollectionClothRenderPatternConstFacade
          (FCollectionClothRenderPatternConstFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCollectionClothRenderPatternConstFacade *pFVar5;
  
  this->_padding_ = (longlong)&___7FCollectionClothRenderPatternConstFacade_ClothAsset_Chaos_UE__6B_
  ;
  (this->ClothCollection).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ClothCollection).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->PatternIndex = param_2;
  bVar3 = FConstClothCollection::IsValid(param_1->Object,None);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClothCollection->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothRenderPatternFacade.cpp"
                         ,0xd1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FCollectionClothRenderPatternConstFacade *)(*pcVar2)();
    return pFVar5;
  }
  if ((-1 < this->PatternIndex) &&
     (iVar4 = FManagedArrayCollection::NumElements
                        ((param_1->Object->ManagedArrayCollection).Object,
                         ClothCollectionGroup::RenderPatterns), this->PatternIndex < iVar4)) {
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PatternIndex >= 0 && PatternIndex < ClothCollection->GetNumElements(ClothCollectionGroup::RenderPatterns)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothRenderPatternFacade.cpp"
                     ,0xd2,L"");
  if (!bVar3) {
    return this;
  }
  pcVar2 = (code *)swi(3);
  pFVar5 = (FCollectionClothRenderPatternConstFacade *)(*pcVar2)();
  return pFVar5;
}

// ~FCollectionClothRenderPatternConstFacade @ 14db3bb50

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::
~FCollectionClothRenderPatternConstFacade(FCollectionClothRenderPatternConstFacade *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothCollection).SharedReferenceCount.ReferenceController);
  return;
}

// GetNumRenderFaces @ 14db58230

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetNumRenderFaces
          (FCollectionClothRenderPatternConstFacade *this)

{
  FConstClothCollection *this_00;
  int iVar1;
  
  this_00 = (this->ClothCollection).Object;
  iVar1 = FConstClothCollection::GetNumElements
                    (this_00,this_00->RenderFacesStart,this_00->RenderFacesEnd,this->PatternIndex);
  return iVar1;
}

// GetNumRenderVertices @ 14db582a0

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetNumRenderVertices
          (FCollectionClothRenderPatternConstFacade *this)

{
  FConstClothCollection *this_00;
  int iVar1;
  
  this_00 = (this->ClothCollection).Object;
  iVar1 = FConstClothCollection::GetNumElements
                    (this_00,this_00->RenderVerticesStart,this_00->RenderVerticesEnd,
                     this->PatternIndex);
  return iVar1;
}

// GetRenderBoneIndices @ 14db58a40

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetRenderBoneIndices
          (FCollectionClothRenderPatternConstFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FConstClothCollection *pFVar4;
  TManagedArray<int> *pTVar5;
  TManagedArray<int> *pTVar6;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar11;
  
  pFVar4 = (this->ClothCollection).Object;
  uVar1 = this->PatternIndex;
  pTVar5 = pFVar4->RenderVerticesStart;
  if (((pTVar5 != (TManagedArray<int> *)0x0) &&
      (pTVar6 = pFVar4->RenderVerticesEnd, pTVar6 != (TManagedArray<int> *)0x0)) &&
     (pTVar7 = pFVar4->RenderBoneIndices,
     pTVar7 != (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) {
    uVar10 = 0;
    if ((int)uVar1 < *(int *)&pTVar5->field_0x18) {
      uVar10 = ~uVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar8)();
      return pTVar11;
    }
    iVar2 = *(int *)(*(longlong *)&pTVar5->field_0x10 + (longlong)(int)uVar1 * 4);
    uVar10 = 0;
    if ((int)uVar1 < *(int *)&pTVar6->field_0x18) {
      uVar10 = ~uVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar8)();
      return pTVar11;
    }
    iVar3 = *(int *)(*(longlong *)&pTVar6->field_0x10 + (longlong)(int)uVar1 * 4);
    if (iVar2 == -1) {
      if (iVar3 == -1) goto LAB_14db58b8a;
    }
    else if (iVar3 != -1) {
      TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int>::
      TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_const_>
                (__return_storage_ptr__,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)
                 ((longlong)iVar2 * 0x10 + *(longlong *)&pTVar7->field_0x10),(iVar3 - iVar2) + 1);
      return __return_storage_ptr__;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x23d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)(*pcVar8)();
      return pTVar11;
    }
  }
LAB_14db58b8a:
  __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetRenderBoneWeights @ 14db58f60

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetRenderBoneWeights
          (FCollectionClothRenderPatternConstFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<TArray<float,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,pFVar1->RenderBoneWeights,pFVar1->RenderVerticesStart,
             pFVar1->RenderVerticesEnd,this->PatternIndex);
  return __return_storage_ptr__;
}

// GetRenderColor @ 14db59220

TArrayView<FLinearColor_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetRenderColor
          (FCollectionClothRenderPatternConstFacade *this,
          TArrayView<FLinearColor_const_,int> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FConstClothCollection *pFVar4;
  TManagedArray<int> *pTVar5;
  TManagedArray<int> *pTVar6;
  TManagedArray<FLinearColor> *pTVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TArrayView<FLinearColor_const_,int> *pTVar11;
  
  pFVar4 = (this->ClothCollection).Object;
  uVar1 = this->PatternIndex;
  pTVar5 = pFVar4->RenderVerticesStart;
  if (((pTVar5 != (TManagedArray<int> *)0x0) &&
      (pTVar6 = pFVar4->RenderVerticesEnd, pTVar6 != (TManagedArray<int> *)0x0)) &&
     (pTVar7 = pFVar4->RenderColor, pTVar7 != (TManagedArray<FLinearColor> *)0x0)) {
    uVar10 = 0;
    if ((int)uVar1 < *(int *)&pTVar5->field_0x18) {
      uVar10 = ~uVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TArrayView<FLinearColor_const_,int> *)(*pcVar8)();
      return pTVar11;
    }
    iVar2 = *(int *)(*(longlong *)&pTVar5->field_0x10 + (longlong)(int)uVar1 * 4);
    uVar10 = 0;
    if ((int)uVar1 < *(int *)&pTVar6->field_0x18) {
      uVar10 = ~uVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TArrayView<FLinearColor_const_,int> *)(*pcVar8)();
      return pTVar11;
    }
    iVar3 = *(int *)(*(longlong *)&pTVar6->field_0x10 + (longlong)(int)uVar1 * 4);
    if (iVar2 == -1) {
      if (iVar3 == -1) goto LAB_14db5936a;
    }
    else if (iVar3 != -1) {
      TArrayView<FLinearColor_const_,int>::TArrayView<FLinearColor_const_,int><FLinearColor_const_>
                (__return_storage_ptr__,
                 (FLinearColor *)((longlong)iVar2 * 0x10 + *(longlong *)&pTVar7->field_0x10),
                 (iVar3 - iVar2) + 1);
      return __return_storage_ptr__;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x23d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TArrayView<FLinearColor_const_,int> *)(*pcVar8)();
      return pTVar11;
    }
  }
LAB_14db5936a:
  __return_storage_ptr__->DataPtr = (FLinearColor *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetRenderCustomResizingBlend @ 14db59740

TArrayView<float_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetRenderCustomResizingBlend
          (FCollectionClothRenderPatternConstFacade *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<float>
            (__return_storage_ptr__,pFVar1->RenderCustomResizingBlend,pFVar1->RenderVerticesStart,
             pFVar1->RenderVerticesEnd,this->PatternIndex);
  return __return_storage_ptr__;
}

// GetRenderDeformerNormalBaryCoordsAndDist @ 14db59a00

TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::
GetRenderDeformerNormalBaryCoordsAndDist
          (FCollectionClothRenderPatternConstFacade *this,
          TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>
          *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,pFVar1->RenderDeformerNormalBaryCoordsAndDist,
             pFVar1->RenderVerticesStart,pFVar1->RenderVerticesEnd,this->PatternIndex);
  return __return_storage_ptr__;
}

// GetRenderDeformerNumInfluences @ 14db59cc0

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetRenderDeformerNumInfluences
          (FCollectionClothRenderPatternConstFacade *this)

{
  uint uVar1;
  FConstClothCollection *pFVar2;
  TManagedArray<int> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  pFVar2 = (this->ClothCollection).Object;
  if (pFVar2->RenderDeformerNumInfluences != (TManagedArray<int> *)0x0) {
    iVar6 = FManagedArrayCollection::NumElements
                      ((pFVar2->ManagedArrayCollection).Object,ClothCollectionGroup::RenderPatterns)
    ;
    uVar1 = this->PatternIndex;
    if ((int)uVar1 < iVar6) {
      pTVar3 = ((this->ClothCollection).Object)->RenderDeformerNumInfluences;
      uVar7 = 0;
      if ((int)uVar1 < *(int *)&pTVar3->field_0x18) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
      }
      return *(int *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar1 * 4);
    }
  }
  return 0;
}

// GetRenderDeformerPositionBaryCoordsAndDist @ 14db59ee0

TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::
GetRenderDeformerPositionBaryCoordsAndDist
          (FCollectionClothRenderPatternConstFacade *this,
          TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>
          *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,pFVar1->RenderDeformerPositionBaryCoordsAndDist,
             pFVar1->RenderVerticesStart,pFVar1->RenderVerticesEnd,this->PatternIndex);
  return __return_storage_ptr__;
}

// GetRenderDeformerSimIndices3D @ 14db5a1a0

TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetRenderDeformerSimIndices3D
          (FCollectionClothRenderPatternConstFacade *this,
          TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int>
          *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FConstClothCollection *pFVar4;
  TManagedArray<int> *pTVar5;
  TManagedArray<int> *pTVar6;
  TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *pTVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int> *pTVar11;
  
  pFVar4 = (this->ClothCollection).Object;
  uVar1 = this->PatternIndex;
  pTVar5 = pFVar4->RenderVerticesStart;
  if (((pTVar5 != (TManagedArray<int> *)0x0) &&
      (pTVar6 = pFVar4->RenderVerticesEnd, pTVar6 != (TManagedArray<int> *)0x0)) &&
     (pTVar7 = pFVar4->RenderDeformerSimIndices3D,
     pTVar7 != (TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *)0x0
     )) {
    uVar10 = 0;
    if ((int)uVar1 < *(int *)&pTVar5->field_0x18) {
      uVar10 = ~uVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int>
                 *)(*pcVar8)();
      return pTVar11;
    }
    iVar2 = *(int *)(*(longlong *)&pTVar5->field_0x10 + (longlong)(int)uVar1 * 4);
    uVar10 = 0;
    if ((int)uVar1 < *(int *)&pTVar6->field_0x18) {
      uVar10 = ~uVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int>
                 *)(*pcVar8)();
      return pTVar11;
    }
    iVar3 = *(int *)(*(longlong *)&pTVar6->field_0x10 + (longlong)(int)uVar1 * 4);
    if (iVar2 == -1) {
      if (iVar3 == -1) goto LAB_14db5a2ea;
    }
    else if (iVar3 != -1) {
      TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int>::
      TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int><TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_>
                (__return_storage_ptr__,
                 (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)iVar2 * 0x10 + *(longlong *)&pTVar7->field_0x10),(iVar3 - iVar2) + 1);
      return __return_storage_ptr__;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x23d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int>
                 *)(*pcVar8)();
      return pTVar11;
    }
  }
LAB_14db5a2ea:
  __return_storage_ptr__->DataPtr =
       (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetRenderDeformerSkinningBlend @ 14db5a6c0

TArrayView<float_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetRenderDeformerSkinningBlend
          (FCollectionClothRenderPatternConstFacade *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<float>
            (__return_storage_ptr__,pFVar1->RenderDeformerSkinningBlend,pFVar1->RenderVerticesStart,
             pFVar1->RenderVerticesEnd,this->PatternIndex);
  return __return_storage_ptr__;
}

// GetRenderDeformerTangentBaryCoordsAndDist @ 14db5a980

TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::
GetRenderDeformerTangentBaryCoordsAndDist
          (FCollectionClothRenderPatternConstFacade *this,
          TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int>
          *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,pFVar1->RenderDeformerTangentBaryCoordsAndDist,
             pFVar1->RenderVerticesStart,pFVar1->RenderVerticesEnd,this->PatternIndex);
  return __return_storage_ptr__;
}

// GetRenderDeformerWeight @ 14db5ac40

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetRenderDeformerWeight
          (FCollectionClothRenderPatternConstFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<TArray<float,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,pFVar1->RenderDeformerWeight,pFVar1->RenderVerticesStart,
             pFVar1->RenderVerticesEnd,this->PatternIndex);
  return __return_storage_ptr__;
}

// GetRenderFacesOffset @ 14db5ad90

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetRenderFacesOffset
          (FCollectionClothRenderPatternConstFacade *this)

{
  int iVar1;
  
  iVar1 = FConstClothCollection::GetElementsOffset
                    (((this->ClothCollection).Object)->RenderFacesStart,0,this->PatternIndex);
  return iVar1;
}

// GetRenderIndices @ 14db5af20

TArrayView<UE::Math::TIntVector3<int>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetRenderIndices
          (FCollectionClothRenderPatternConstFacade *this,
          TArrayView<UE::Math::TIntVector3<int>_const_,int> *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<UE::Math::TIntVector3<int>_>
            (__return_storage_ptr__,pFVar1->RenderIndices,pFVar1->RenderFacesStart,
             pFVar1->RenderFacesEnd,this->PatternIndex);
  return __return_storage_ptr__;
}

// GetRenderMaterialSoftObjectPathName @ 14db5b1e0

FSoftObjectPath * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetRenderMaterialSoftObjectPathName
          (FCollectionClothRenderPatternConstFacade *this)

{
  uint uVar1;
  FConstClothCollection *pFVar2;
  TManagedArray<FSoftObjectPath> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FSoftObjectPath *pFVar8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::
             GetRenderMaterialSoftObjectPathName'::__l2::
             _dynamic_atexit_destructor_for__EmptyString__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar2 = (this->ClothCollection).Object;
  if (pFVar2->RenderMaterialSoftObjectPathName != (TManagedArray<FSoftObjectPath> *)0x0) {
    iVar6 = FManagedArrayCollection::NumElements
                      ((pFVar2->ManagedArrayCollection).Object,ClothCollectionGroup::RenderPatterns)
    ;
    uVar1 = this->PatternIndex;
    if ((int)uVar1 < iVar6) {
      pTVar3 = ((this->ClothCollection).Object)->RenderMaterialSoftObjectPathName;
      uVar7 = 0;
      if ((int)uVar1 < *(int *)&pTVar3->field_0x18) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FSoftObjectPath *)(*pcVar4)();
          return pFVar8;
        }
      }
      return (FSoftObjectPath *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&pTVar3->field_0x10);
    }
  }
  return &::EmptyString;
}

// GetRenderNormal @ 14db5b460

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetRenderNormal
          (FCollectionClothRenderPatternConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<UE::Math::TVector<float>_>
            (__return_storage_ptr__,pFVar1->RenderNormal,pFVar1->RenderVerticesStart,
             pFVar1->RenderVerticesEnd,this->PatternIndex);
  return __return_storage_ptr__;
}

// GetRenderPosition @ 14db5b800

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetRenderPosition
          (FCollectionClothRenderPatternConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<UE::Math::TVector<float>_>
            (__return_storage_ptr__,pFVar1->RenderPosition,pFVar1->RenderVerticesStart,
             pFVar1->RenderVerticesEnd,this->PatternIndex);
  return __return_storage_ptr__;
}

// GetRenderTangentU @ 14db5bac0

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetRenderTangentU
          (FCollectionClothRenderPatternConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<UE::Math::TVector<float>_>
            (__return_storage_ptr__,pFVar1->RenderTangentU,pFVar1->RenderVerticesStart,
             pFVar1->RenderVerticesEnd,this->PatternIndex);
  return __return_storage_ptr__;
}

// GetRenderTangentV @ 14db5bd80

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetRenderTangentV
          (FCollectionClothRenderPatternConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<UE::Math::TVector<float>_>
            (__return_storage_ptr__,pFVar1->RenderTangentV,pFVar1->RenderVerticesStart,
             pFVar1->RenderVerticesEnd,this->PatternIndex);
  return __return_storage_ptr__;
}

// GetRenderUVs @ 14db5c040

TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetRenderUVs
          (FCollectionClothRenderPatternConstFacade *this,
          TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int>
          *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FConstClothCollection *pFVar4;
  TManagedArray<int> *pTVar5;
  TManagedArray<int> *pTVar6;
  TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *pTVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int> *pTVar11;
  
  pFVar4 = (this->ClothCollection).Object;
  uVar1 = this->PatternIndex;
  pTVar5 = pFVar4->RenderVerticesStart;
  if (((pTVar5 != (TManagedArray<int> *)0x0) &&
      (pTVar6 = pFVar4->RenderVerticesEnd, pTVar6 != (TManagedArray<int> *)0x0)) &&
     (pTVar7 = pFVar4->RenderUVs,
     pTVar7 != (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0)
     ) {
    uVar10 = 0;
    if ((int)uVar1 < *(int *)&pTVar5->field_0x18) {
      uVar10 = ~uVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int>
                 *)(*pcVar8)();
      return pTVar11;
    }
    iVar2 = *(int *)(*(longlong *)&pTVar5->field_0x10 + (longlong)(int)uVar1 * 4);
    uVar10 = 0;
    if ((int)uVar1 < *(int *)&pTVar6->field_0x18) {
      uVar10 = ~uVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int>
                 *)(*pcVar8)();
      return pTVar11;
    }
    iVar3 = *(int *)(*(longlong *)&pTVar6->field_0x10 + (longlong)(int)uVar1 * 4);
    if (iVar2 == -1) {
      if (iVar3 == -1) goto LAB_14db5c18a;
    }
    else if (iVar3 != -1) {
      TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int>::
      TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_>
                (__return_storage_ptr__,
                 (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)iVar2 * 0x10 + *(longlong *)&pTVar7->field_0x10),(iVar3 - iVar2) + 1);
      return __return_storage_ptr__;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                       ,0x23d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int>
                 *)(*pcVar8)();
      return pTVar11;
    }
  }
LAB_14db5c18a:
  __return_storage_ptr__->DataPtr =
       (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetRenderVerticesOffset @ 14db5c3f0

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::GetRenderVerticesOffset
          (FCollectionClothRenderPatternConstFacade *this)

{
  int iVar1;
  
  iVar1 = FConstClothCollection::GetElementsOffset
                    (((this->ClothCollection).Object)->RenderVerticesStart,0,this->PatternIndex);
  return iVar1;
}

// IsEmpty @ 14db65880

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::IsEmpty
          (FCollectionClothRenderPatternConstFacade *this)

{
  FConstClothCollection *pFVar1;
  int iVar2;
  
  pFVar1 = (this->ClothCollection).Object;
  iVar2 = FConstClothCollection::GetNumElements
                    (pFVar1,pFVar1->RenderVerticesStart,pFVar1->RenderVerticesEnd,this->PatternIndex
                    );
  if (iVar2 == 0) {
    pFVar1 = (this->ClothCollection).Object;
    iVar2 = FConstClothCollection::GetNumElements
                      (pFVar1,pFVar1->RenderFacesStart,pFVar1->RenderFacesEnd,this->PatternIndex);
    if (iVar2 == 0) {
      return true;
    }
  }
  return false;
}

