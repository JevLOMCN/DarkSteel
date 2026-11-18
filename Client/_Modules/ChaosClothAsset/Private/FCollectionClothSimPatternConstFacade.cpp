// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 13

// FCollectionClothSimPatternConstFacade @ 14db3b2d0

FCollectionClothSimPatternConstFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternConstFacade::FCollectionClothSimPatternConstFacade
          (FCollectionClothSimPatternConstFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCollectionClothSimPatternConstFacade *pFVar5;
  
  this->_padding_ = (longlong)&___7FCollectionClothSimPatternConstFacade_ClothAsset_Chaos_UE__6B_;
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
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                         ,0x71,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FCollectionClothSimPatternConstFacade *)(*pcVar2)();
    return pFVar5;
  }
  if ((-1 < this->PatternIndex) &&
     (iVar4 = FManagedArrayCollection::NumElements
                        ((param_1->Object->ManagedArrayCollection).Object,
                         ClothCollectionGroup::SimPatterns), this->PatternIndex < iVar4)) {
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PatternIndex >= 0 && PatternIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimPatterns)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                     ,0x72,L"");
  if (!bVar3) {
    return this;
  }
  pcVar2 = (code *)swi(3);
  pFVar5 = (FCollectionClothSimPatternConstFacade *)(*pcVar2)();
  return pFVar5;
}

// ~FCollectionClothSimPatternConstFacade @ 14db3bbf0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternConstFacade::~FCollectionClothSimPatternConstFacade
          (FCollectionClothSimPatternConstFacade *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothCollection).SharedReferenceCount.ReferenceController);
  return;
}

// GetFabricIndex @ 14db57e40

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternConstFacade::GetFabricIndex
          (FCollectionClothSimPatternConstFacade *this)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  TArrayView<int_const_,int> local_18;
  
  pTVar1 = ((this->ClothCollection).Object)->SimPatternFabric;
  if (pTVar1 == (TManagedArray<int> *)0x0) {
    local_18.DataPtr = (int *)0x0;
    local_18.ArrayNum = 0;
  }
  else {
    local_18.ArrayNum = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    local_18.DataPtr = *(int **)&pTVar1->field_0x10;
    if (local_18.ArrayNum < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
  }
  piVar5 = TArrayView<int_const_,int>::operator[](&local_18,this->PatternIndex);
  return *piVar5;
}

// GetNumSimFaces @ 14db58380

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternConstFacade::GetNumSimFaces
          (FCollectionClothSimPatternConstFacade *this)

{
  FConstClothCollection *this_00;
  int iVar1;
  
  this_00 = (this->ClothCollection).Object;
  iVar1 = FConstClothCollection::GetNumElements
                    (this_00,this_00->SimFacesStart,this_00->SimFacesEnd,this->PatternIndex);
  return iVar1;
}

// GetNumSimVertices2D @ 14db58460

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternConstFacade::GetNumSimVertices2D
          (FCollectionClothSimPatternConstFacade *this)

{
  FConstClothCollection *this_00;
  int iVar1;
  
  this_00 = (this->ClothCollection).Object;
  iVar1 = FConstClothCollection::GetNumElements
                    (this_00,this_00->SimVertices2DStart,this_00->SimVertices2DEnd,
                     this->PatternIndex);
  return iVar1;
}

// GetSimFacesOffset @ 14db5eb70

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternConstFacade::GetSimFacesOffset
          (FCollectionClothSimPatternConstFacade *this)

{
  int iVar1;
  
  iVar1 = FConstClothCollection::GetElementsOffset
                    (((this->ClothCollection).Object)->SimFacesStart,0,this->PatternIndex);
  return iVar1;
}

// GetSimImportVertexID @ 14db5ed70

TArrayView<int_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternConstFacade::GetSimImportVertexID
          (FCollectionClothSimPatternConstFacade *this,
          TArrayView<int_const_,int> *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<int>
            (__return_storage_ptr__,pFVar1->SimImportVertexID,pFVar1->SimVertices2DStart,
             pFVar1->SimVertices2DEnd,this->PatternIndex);
  return __return_storage_ptr__;
}

// GetSimIndices2D @ 14db5f0a0

TArrayView<UE::Math::TIntVector3<int>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternConstFacade::GetSimIndices2D
          (FCollectionClothSimPatternConstFacade *this,
          TArrayView<UE::Math::TIntVector3<int>_const_,int> *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<UE::Math::TIntVector3<int>_>
            (__return_storage_ptr__,pFVar1->SimIndices2D,pFVar1->SimFacesStart,pFVar1->SimFacesEnd,
             this->PatternIndex);
  return __return_storage_ptr__;
}

// GetSimIndices3D @ 14db5f360

TArrayView<UE::Math::TIntVector3<int>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternConstFacade::GetSimIndices3D
          (FCollectionClothSimPatternConstFacade *this,
          TArrayView<UE::Math::TIntVector3<int>_const_,int> *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<UE::Math::TIntVector3<int>_>
            (__return_storage_ptr__,pFVar1->SimIndices3D,pFVar1->SimFacesStart,pFVar1->SimFacesEnd,
             this->PatternIndex);
  return __return_storage_ptr__;
}

// GetSimPosition2D @ 14db60350

TArrayView<UE::Math::TVector2<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternConstFacade::GetSimPosition2D
          (FCollectionClothSimPatternConstFacade *this,
          TArrayView<UE::Math::TVector2<float>_const_,int> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FConstClothCollection *pFVar4;
  TManagedArray<int> *pTVar5;
  TManagedArray<int> *pTVar6;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TArrayView<UE::Math::TVector2<float>_const_,int> *pTVar11;
  
  pFVar4 = (this->ClothCollection).Object;
  uVar1 = this->PatternIndex;
  pTVar5 = pFVar4->SimVertices2DStart;
  if (((pTVar5 != (TManagedArray<int> *)0x0) &&
      (pTVar6 = pFVar4->SimVertices2DEnd, pTVar6 != (TManagedArray<int> *)0x0)) &&
     (pTVar7 = pFVar4->SimPosition2D, pTVar7 != (TManagedArray<UE::Math::TVector2<float>_> *)0x0)) {
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
      pTVar11 = (TArrayView<UE::Math::TVector2<float>_const_,int> *)(*pcVar8)();
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
      pTVar11 = (TArrayView<UE::Math::TVector2<float>_const_,int> *)(*pcVar8)();
      return pTVar11;
    }
    iVar3 = *(int *)(*(longlong *)&pTVar6->field_0x10 + (longlong)(int)uVar1 * 4);
    if (iVar2 == -1) {
      if (iVar3 == -1) goto LAB_14db6049a;
    }
    else if (iVar3 != -1) {
      TArrayView<UE::Math::TVector2<float>_const_,int>::
      TArrayView<UE::Math::TVector2<float>_const_,int><UE::Math::TVector2<float>_const_>
                (__return_storage_ptr__,
                 (TVector2<float> *)(*(longlong *)&pTVar7->field_0x10 + (longlong)iVar2 * 8),
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
      pTVar11 = (TArrayView<UE::Math::TVector2<float>_const_,int> *)(*pcVar8)();
      return pTVar11;
    }
  }
LAB_14db6049a:
  __return_storage_ptr__->DataPtr = (TVector2<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetSimVertex3DLookup @ 14db60a70

TArrayView<int_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternConstFacade::GetSimVertex3DLookup
          (FCollectionClothSimPatternConstFacade *this,
          TArrayView<int_const_,int> *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<int>
            (__return_storage_ptr__,pFVar1->SimVertex3DLookup,pFVar1->SimVertices2DStart,
             pFVar1->SimVertices2DEnd,this->PatternIndex);
  return __return_storage_ptr__;
}

// GetSimVertices2DOffset @ 14db60ca0

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternConstFacade::GetSimVertices2DOffset
          (FCollectionClothSimPatternConstFacade *this)

{
  int iVar1;
  
  iVar1 = FConstClothCollection::GetElementsOffset
                    (((this->ClothCollection).Object)->SimVertices2DStart,0,this->PatternIndex);
  return iVar1;
}

// IsEmpty @ 14db65920

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternConstFacade::IsEmpty
          (FCollectionClothSimPatternConstFacade *this)

{
  FConstClothCollection *pFVar1;
  int iVar2;
  
  pFVar1 = (this->ClothCollection).Object;
  iVar2 = FConstClothCollection::GetNumElements
                    (pFVar1,pFVar1->SimFacesStart,pFVar1->SimFacesEnd,this->PatternIndex);
  if (iVar2 == 0) {
    pFVar1 = (this->ClothCollection).Object;
    iVar2 = FConstClothCollection::GetNumElements
                      (pFVar1,pFVar1->SimVertices2DStart,pFVar1->SimVertices2DEnd,this->PatternIndex
                      );
    if (iVar2 == 0) {
      return true;
    }
  }
  return false;
}

