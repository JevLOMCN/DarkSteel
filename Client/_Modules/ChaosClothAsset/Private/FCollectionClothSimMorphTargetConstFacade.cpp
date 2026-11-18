// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 9

// FCollectionClothSimMorphTargetConstFacade @ 14db3b190

FCollectionClothSimMorphTargetConstFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetConstFacade::
FCollectionClothSimMorphTargetConstFacade
          (FCollectionClothSimMorphTargetConstFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCollectionClothSimMorphTargetConstFacade *pFVar5;
  
  this->_padding_ =
       (longlong)&___7FCollectionClothSimMorphTargetConstFacade_ClothAsset_Chaos_UE__6B_;
  (this->ClothCollection).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ClothCollection).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->MorphTargetIndex = param_2;
  bVar3 = FConstClothCollection::IsValid(param_1->Object,CookedOnly);
  if (((!bVar3) && (bVar3 = FConstClothCollection::IsValid(param_1->Object,SimMorphTargets), !bVar3)
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ClothCollection->IsValid(EClothCollectionExtendedSchemas::CookedOnly) || ClothCollection->IsValid(EClothCollectionExtendedSchemas::SimMorphTargets)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimMorphTargetFacade.cpp"
                               ,0x44,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FCollectionClothSimMorphTargetConstFacade *)(*pcVar2)();
    return pFVar5;
  }
  if ((-1 < this->MorphTargetIndex) &&
     (iVar4 = FManagedArrayCollection::NumElements
                        ((param_1->Object->ManagedArrayCollection).Object,
                         ClothCollectionGroup::SimMorphTargets), this->MorphTargetIndex < iVar4)) {
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("MorphTargetIndex >= 0 && MorphTargetIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimMorphTargets)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimMorphTargetFacade.cpp"
                     ,0x45,L"");
  if (!bVar3) {
    return this;
  }
  pcVar2 = (code *)swi(3);
  pFVar5 = (FCollectionClothSimMorphTargetConstFacade *)(*pcVar2)();
  return pFVar5;
}

// ~FCollectionClothSimMorphTargetConstFacade @ 14db3bbd0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetConstFacade::
~FCollectionClothSimMorphTargetConstFacade(FCollectionClothSimMorphTargetConstFacade *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothCollection).SharedReferenceCount.ReferenceController);
  return;
}

// GetNumSimMorphTargetVertices @ 14db583d0

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetConstFacade::GetNumSimMorphTargetVertices
          (FCollectionClothSimMorphTargetConstFacade *this)

{
  FConstClothCollection *this_00;
  int iVar1;
  
  this_00 = (this->ClothCollection).Object;
  iVar1 = FConstClothCollection::GetNumElements
                    (this_00,this_00->SimMorphTargetVerticesStart,this_00->SimMorphTargetVerticesEnd
                     ,this->MorphTargetIndex);
  return iVar1;
}

// GetSimMorphTargetName @ 14db5f620

FString * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetConstFacade::GetSimMorphTargetName
          (FCollectionClothSimMorphTargetConstFacade *this)

{
  uint uVar1;
  FConstClothCollection *pFVar2;
  TManagedArray<FString> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FString *pFVar8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetConstFacade::
             GetSimMorphTargetName'::__l2::_dynamic_atexit_destructor_for__EmptyString__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar2 = (this->ClothCollection).Object;
  if (pFVar2->SimMorphTargetName != (TManagedArray<FString> *)0x0) {
    iVar6 = FManagedArrayCollection::NumElements
                      ((pFVar2->ManagedArrayCollection).Object,ClothCollectionGroup::SimMorphTargets
                      );
    uVar1 = this->MorphTargetIndex;
    if ((int)uVar1 < iVar6) {
      pTVar3 = ((this->ClothCollection).Object)->SimMorphTargetName;
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
          pFVar8 = (FString *)(*pcVar4)();
          return pFVar8;
        }
      }
      return (FString *)((longlong)(int)uVar1 * 0x10 + *(longlong *)&pTVar3->field_0x10);
    }
  }
  return &::EmptyString;
}

// GetSimMorphTargetPositionDelta @ 14db5f8a0

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetConstFacade::GetSimMorphTargetPositionDelta
          (FCollectionClothSimMorphTargetConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<UE::Math::TVector<float>_>
            (__return_storage_ptr__,pFVar1->SimMorphTargetPositionDelta,
             pFVar1->SimMorphTargetVerticesStart,pFVar1->SimMorphTargetVerticesEnd,
             this->MorphTargetIndex);
  return __return_storage_ptr__;
}

// GetSimMorphTargetSimVertex3DIndex @ 14db5fb60

TArrayView<int_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetConstFacade::GetSimMorphTargetSimVertex3DIndex
          (FCollectionClothSimMorphTargetConstFacade *this,
          TArrayView<int_const_,int> *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<int>
            (__return_storage_ptr__,pFVar1->SimMorphTargetSimVertex3DIndex,
             pFVar1->SimMorphTargetVerticesStart,pFVar1->SimMorphTargetVerticesEnd,
             this->MorphTargetIndex);
  return __return_storage_ptr__;
}

// GetSimMorphTargetTangentZDelta @ 14db5fe20

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetConstFacade::GetSimMorphTargetTangentZDelta
          (FCollectionClothSimMorphTargetConstFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__)

{
  FConstClothCollection *pFVar1;
  
  pFVar1 = (this->ClothCollection).Object;
  FConstClothCollection::GetElements<UE::Math::TVector<float>_>
            (__return_storage_ptr__,pFVar1->SimMorphTargetTangentZDelta,
             pFVar1->SimMorphTargetVerticesStart,pFVar1->SimMorphTargetVerticesEnd,
             this->MorphTargetIndex);
  return __return_storage_ptr__;
}

// GetSimMorphTargetVerticesOffset @ 14db5ff70

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetConstFacade::GetSimMorphTargetVerticesOffset
          (FCollectionClothSimMorphTargetConstFacade *this)

{
  int iVar1;
  
  iVar1 = FConstClothCollection::GetElementsOffset
                    (((this->ClothCollection).Object)->SimMorphTargetVerticesStart,0,
                     this->MorphTargetIndex);
  return iVar1;
}

// IsEmpty @ 14db658e0

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetConstFacade::IsEmpty
          (FCollectionClothSimMorphTargetConstFacade *this)

{
  FConstClothCollection *this_00;
  int iVar1;
  
  this_00 = (this->ClothCollection).Object;
  iVar1 = FConstClothCollection::GetNumElements
                    (this_00,this_00->SimMorphTargetVerticesStart,this_00->SimMorphTargetVerticesEnd
                     ,this->MorphTargetIndex);
  return iVar1 == 0;
}

