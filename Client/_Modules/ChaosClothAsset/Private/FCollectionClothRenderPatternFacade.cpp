// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 28

// FCollectionClothRenderPatternFacade @ 14db3adf0

FCollectionClothRenderPatternFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::FCollectionClothRenderPatternFacade
          (FCollectionClothRenderPatternFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = (FConstClothCollection *)param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FCollectionClothRenderPatternConstFacade::FCollectionClothRenderPatternConstFacade
            ((FCollectionClothRenderPatternConstFacade *)this,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(undefined ***)this = &___7FCollectionClothRenderPatternFacade_ClothAsset_Chaos_UE__6B_;
  return this;
}

// ~FCollectionClothRenderPatternFacade @ 14db3bb60

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::~FCollectionClothRenderPatternFacade
          (FCollectionClothRenderPatternFacade *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  return;
}

// GetClothCollection @ 14db575c0

TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::GetClothCollection
          (FCollectionClothRenderPatternFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> *__return_storage_ptr__)

{
  FClothCollection *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = *(FClothCollection **)&this->field_0x8;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetRenderBoneIndices @ 14db58bc0

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::GetRenderBoneIndices
          (FCollectionClothRenderPatternFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar14;
  
  pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  uVar1 = *(uint *)&this->field_0x18;
  lVar6 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar6 = *(longlong *)(lVar6 + 0xf8);
  lVar8 = *(longlong *)&this->field_0x8;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar9 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)(lVar8 + 0xf0);
  lVar10 = *(longlong *)&this->field_0x8;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  lVar10 = *(longlong *)(lVar10 + 0x208);
  if (((lVar8 != 0) && (lVar6 != 0)) && (lVar10 != 0)) {
    uVar13 = 0;
    if ((int)uVar1 < *(int *)(lVar8 + 0x18)) {
      uVar13 = ~uVar1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *)(*pcVar11)();
      return pTVar14;
    }
    iVar2 = *(int *)(*(longlong *)(lVar8 + 0x10) + (longlong)(int)uVar1 * 4);
    uVar13 = 0;
    if ((int)uVar1 < *(int *)(lVar6 + 0x18)) {
      uVar13 = ~uVar1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *)(*pcVar11)();
      return pTVar14;
    }
    iVar3 = *(int *)(*(longlong *)(lVar6 + 0x10) + (longlong)(int)uVar1 * 4);
    if (iVar2 == -1) {
      if (iVar3 == -1) goto LAB_14db58d8f;
    }
    else if (iVar3 != -1) {
      TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int>::
      TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int><TArray<int,TSizedDefaultAllocator<32>_>_>
                (__return_storage_ptr__,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)
                 ((longlong)iVar2 * 0x10 + *(longlong *)(lVar10 + 0x10)),(iVar3 - iVar2) + 1);
      goto LAB_14db58d9e;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Start == End",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                        ,0x24d,
                        L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *)(*pcVar11)();
      return pTVar14;
    }
  }
LAB_14db58d8f:
  __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
LAB_14db58d9e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// GetRenderBoneWeights @ 14db58fa0

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::GetRenderBoneWeights
          (FCollectionClothRenderPatternFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TManagedArray<int> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TManagedArray<int> *pTVar9;
  
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0xf8);
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)&this->field_0x8;
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0xf0);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<TArray<float,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,
             *(TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> **)(lVar8 + 0x210),pTVar9,
             pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetRenderColor @ 14db593a0

TArrayView<FLinearColor,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::GetRenderColor
          (FCollectionClothRenderPatternFacade *this,
          TArrayView<FLinearColor,int> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TArrayView<FLinearColor,int> *pTVar14;
  
  pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  uVar1 = *(uint *)&this->field_0x18;
  lVar6 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar6 = *(longlong *)(lVar6 + 0xf8);
  lVar8 = *(longlong *)&this->field_0x8;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar9 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)(lVar8 + 0xf0);
  lVar10 = *(longlong *)&this->field_0x8;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  lVar10 = *(longlong *)(lVar10 + 0x200);
  if (((lVar8 != 0) && (lVar6 != 0)) && (lVar10 != 0)) {
    uVar13 = 0;
    if ((int)uVar1 < *(int *)(lVar8 + 0x18)) {
      uVar13 = ~uVar1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<FLinearColor,int> *)(*pcVar11)();
      return pTVar14;
    }
    iVar2 = *(int *)(*(longlong *)(lVar8 + 0x10) + (longlong)(int)uVar1 * 4);
    uVar13 = 0;
    if ((int)uVar1 < *(int *)(lVar6 + 0x18)) {
      uVar13 = ~uVar1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<FLinearColor,int> *)(*pcVar11)();
      return pTVar14;
    }
    iVar3 = *(int *)(*(longlong *)(lVar6 + 0x10) + (longlong)(int)uVar1 * 4);
    if (iVar2 == -1) {
      if (iVar3 == -1) goto LAB_14db5956f;
    }
    else if (iVar3 != -1) {
      TArrayView<FLinearColor,int>::TArrayView<FLinearColor,int><FLinearColor>
                (__return_storage_ptr__,
                 (FLinearColor *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar10 + 0x10)),
                 (iVar3 - iVar2) + 1);
      goto LAB_14db5957e;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Start == End",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                        ,0x24d,
                        L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<FLinearColor,int> *)(*pcVar11)();
      return pTVar14;
    }
  }
LAB_14db5956f:
  __return_storage_ptr__->DataPtr = (FLinearColor *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
LAB_14db5957e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// GetRenderCustomResizingBlend @ 14db59780

TArrayView<float,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::GetRenderCustomResizingBlend
          (FCollectionClothRenderPatternFacade *this,TArrayView<float,int> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TManagedArray<int> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TManagedArray<int> *pTVar9;
  
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0xf8);
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)&this->field_0x8;
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0xf0);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<float>
            (__return_storage_ptr__,*(TManagedArray<float> **)(lVar8 + 0x248),pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetRenderDeformerNormalBaryCoordsAndDist @ 14db59a40

TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::GetRenderDeformerNormalBaryCoordsAndDist
          (FCollectionClothRenderPatternFacade *this,
          TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int>
          *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TManagedArray<int> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TManagedArray<int> *pTVar9;
  
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0xf8);
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)&this->field_0x8;
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0xf0);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,
             *(TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> **)
              (lVar8 + 0x220),pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetRenderDeformerPositionBaryCoordsAndDist @ 14db59f20

TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::
GetRenderDeformerPositionBaryCoordsAndDist
          (FCollectionClothRenderPatternFacade *this,
          TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int>
          *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TManagedArray<int> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TManagedArray<int> *pTVar9;
  
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0xf8);
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)&this->field_0x8;
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0xf0);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,
             *(TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> **)
              (lVar8 + 0x218),pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetRenderDeformerSimIndices3D @ 14db5a320

TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::GetRenderDeformerSimIndices3D
          (FCollectionClothRenderPatternFacade *this,
          TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int>
          *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int> *pTVar14;
  
  pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  uVar1 = *(uint *)&this->field_0x18;
  lVar6 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar6 = *(longlong *)(lVar6 + 0xf8);
  lVar8 = *(longlong *)&this->field_0x8;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar9 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)(lVar8 + 0xf0);
  lVar10 = *(longlong *)&this->field_0x8;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  lVar10 = *(longlong *)(lVar10 + 0x230);
  if (((lVar8 != 0) && (lVar6 != 0)) && (lVar10 != 0)) {
    uVar13 = 0;
    if ((int)uVar1 < *(int *)(lVar8 + 0x18)) {
      uVar13 = ~uVar1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int> *)
                (*pcVar11)();
      return pTVar14;
    }
    iVar2 = *(int *)(*(longlong *)(lVar8 + 0x10) + (longlong)(int)uVar1 * 4);
    uVar13 = 0;
    if ((int)uVar1 < *(int *)(lVar6 + 0x18)) {
      uVar13 = ~uVar1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int> *)
                (*pcVar11)();
      return pTVar14;
    }
    iVar3 = *(int *)(*(longlong *)(lVar6 + 0x10) + (longlong)(int)uVar1 * 4);
    if (iVar2 == -1) {
      if (iVar3 == -1) goto LAB_14db5a4ef;
    }
    else if (iVar3 != -1) {
      TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int>::
      TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int><TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                (__return_storage_ptr__,
                 (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)iVar2 * 0x10 + *(longlong *)(lVar10 + 0x10)),(iVar3 - iVar2) + 1);
      goto LAB_14db5a4fe;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Start == End",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                        ,0x24d,
                        L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int> *)
                (*pcVar11)();
      return pTVar14;
    }
  }
LAB_14db5a4ef:
  __return_storage_ptr__->DataPtr =
       (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
LAB_14db5a4fe:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// GetRenderDeformerSkinningBlend @ 14db5a700

TArrayView<float,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::GetRenderDeformerSkinningBlend
          (FCollectionClothRenderPatternFacade *this,TArrayView<float,int> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TManagedArray<int> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TManagedArray<int> *pTVar9;
  
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0xf8);
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)&this->field_0x8;
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0xf0);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<float>
            (__return_storage_ptr__,*(TManagedArray<float> **)(lVar8 + 0x240),pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetRenderDeformerTangentBaryCoordsAndDist @ 14db5a9c0

TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::
GetRenderDeformerTangentBaryCoordsAndDist
          (FCollectionClothRenderPatternFacade *this,
          TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int>
          *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TManagedArray<int> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TManagedArray<int> *pTVar9;
  
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0xf8);
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)&this->field_0x8;
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0xf0);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,
             *(TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> **)
              (lVar8 + 0x228),pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetRenderDeformerWeight @ 14db5ac80

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::GetRenderDeformerWeight
          (FCollectionClothRenderPatternFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TManagedArray<int> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TManagedArray<int> *pTVar9;
  
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0xf8);
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)&this->field_0x8;
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0xf0);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<TArray<float,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,
             *(TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> **)(lVar8 + 0x238),pTVar9,
             pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetRenderIndices @ 14db5af60

TArrayView<UE::Math::TIntVector3<int>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::GetRenderIndices
          (FCollectionClothRenderPatternFacade *this,
          TArrayView<UE::Math::TIntVector3<int>,int> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TManagedArray<int> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TManagedArray<int> *pTVar9;
  
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0x108);
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)&this->field_0x8;
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0x100);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<UE::Math::TIntVector3<int>_>
            (__return_storage_ptr__,*(TManagedArray<UE::Math::TIntVector3<int>_> **)(lVar8 + 0x1d0),
             pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetRenderNormal @ 14db5b4a0

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::GetRenderNormal
          (FCollectionClothRenderPatternFacade *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TManagedArray<int> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TManagedArray<int> *pTVar9;
  
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0xf8);
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)&this->field_0x8;
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0xf0);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<UE::Math::TVector<float>_>
            (__return_storage_ptr__,*(TManagedArray<UE::Math::TVector<float>_> **)(lVar8 + 0x1e0),
             pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetRenderPosition @ 14db5b840

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::GetRenderPosition
          (FCollectionClothRenderPatternFacade *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TManagedArray<int> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TManagedArray<int> *pTVar9;
  
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0xf8);
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)&this->field_0x8;
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0xf0);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<UE::Math::TVector<float>_>
            (__return_storage_ptr__,*(TManagedArray<UE::Math::TVector<float>_> **)(lVar8 + 0x1d8),
             pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetRenderTangentU @ 14db5bb00

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::GetRenderTangentU
          (FCollectionClothRenderPatternFacade *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TManagedArray<int> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TManagedArray<int> *pTVar9;
  
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0xf8);
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)&this->field_0x8;
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0xf0);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<UE::Math::TVector<float>_>
            (__return_storage_ptr__,*(TManagedArray<UE::Math::TVector<float>_> **)(lVar8 + 0x1e8),
             pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetRenderTangentV @ 14db5bdc0

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::GetRenderTangentV
          (FCollectionClothRenderPatternFacade *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  TManagedArray<int> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TManagedArray<int> *pTVar9;
  
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0xf8);
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)&this->field_0x8;
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0xf0);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<UE::Math::TVector<float>_>
            (__return_storage_ptr__,*(TManagedArray<UE::Math::TVector<float>_> **)(lVar8 + 0x1f0),
             pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetRenderUVs @ 14db5c1c0

TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::GetRenderUVs
          (FCollectionClothRenderPatternFacade *this,
          TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int>
          *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> *pTVar14;
  
  pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  uVar1 = *(uint *)&this->field_0x18;
  lVar6 = *(longlong *)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar6 = *(longlong *)(lVar6 + 0xf8);
  lVar8 = *(longlong *)&this->field_0x8;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar9 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar8 = *(longlong *)(lVar8 + 0xf0);
  lVar10 = *(longlong *)&this->field_0x8;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  lVar10 = *(longlong *)(lVar10 + 0x1f8);
  if (((lVar8 != 0) && (lVar6 != 0)) && (lVar10 != 0)) {
    uVar13 = 0;
    if ((int)uVar1 < *(int *)(lVar8 + 0x18)) {
      uVar13 = ~uVar1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> *)
                (*pcVar11)();
      return pTVar14;
    }
    iVar2 = *(int *)(*(longlong *)(lVar8 + 0x10) + (longlong)(int)uVar1 * 4);
    uVar13 = 0;
    if ((int)uVar1 < *(int *)(lVar6 + 0x18)) {
      uVar13 = ~uVar1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> *)
                (*pcVar11)();
      return pTVar14;
    }
    iVar3 = *(int *)(*(longlong *)(lVar6 + 0x10) + (longlong)(int)uVar1 * 4);
    if (iVar2 == -1) {
      if (iVar3 == -1) goto LAB_14db5c38f;
    }
    else if (iVar3 != -1) {
      TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int>::
      TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                (__return_storage_ptr__,
                 (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)iVar2 * 0x10 + *(longlong *)(lVar10 + 0x10)),(iVar3 - iVar2) + 1);
      goto LAB_14db5c39e;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Start == End",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                        ,0x24d,
                        L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      pTVar14 = (TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> *)
                (*pcVar11)();
      return pTVar14;
    }
  }
LAB_14db5c38f:
  __return_storage_ptr__->DataPtr =
       (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
LAB_14db5c39e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// Initialize @ 14db625e0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::Initialize
          (FCollectionClothRenderPatternFacade *this,
          FCollectionClothRenderPatternConstFacade *param_1,int param_2)

{
  undefined4 *puVar1;
  FConstClothCollection *pFVar2;
  TManagedArray<FSoftObjectPath> *pTVar3;
  TManagedArray<int> *pTVar4;
  TManagedArray<int> *pTVar5;
  TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *pTVar6;
  TManagedArray<FLinearColor> *pTVar7;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *pTVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  TArrayView<UE::Math::TVector<float>,int> *pTVar20;
  TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> *pTVar21;
  TArrayView<FLinearColor,int> *pTVar22;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar23;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *pTVar24;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> *pTVar25;
  TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int> *pTVar26;
  TArrayView<float,int> *pTVar27;
  TArrayView<UE::Math::TIntVector3<int>,int> *pTVar28;
  FSoftObjectPath *pFVar29;
  uint uVar30;
  int *piVar31;
  longlong lVar32;
  longlong local_res10;
  TIntVector3<int>_u_0 local_248;
  TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_const_,int> local_238;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_228;
  TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_const_,int> local_218;
  TIntVector3<int>_u_0 local_208;
  TArrayView<UE::Math::TVector<float>_const_,int> local_1f8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_1e8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_1d8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_1c8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_1b8;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int> local_1a8;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int> local_198;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_,int> local_188;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_178;
  TArrayView<float_const_,int> local_168;
  TArrayView<float_const_,int> local_158;
  TArrayView<UE::Math::TIntVector3<int>_const_,int> local_148;
  TArrayView<UE::Math::TVector<float>,int> local_138;
  TArrayView<UE::Math::TVector<float>,int> local_128;
  TArrayView<UE::Math::TVector<float>,int> local_118;
  TArrayView<UE::Math::TVector<float>,int> local_108;
  TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> local_f8;
  TArrayView<FLinearColor,int> local_e8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_d8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_c8;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> local_b8;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> local_a8;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> local_98;
  TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int> local_88;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float,int> local_58;
  TArrayView<UE::Math::TIntVector3<int>,int> local_48;
  
  SetNumRenderVertices(this,0);
  SetNumRenderFaces(this,0);
  SetDefaults(this);
  iVar17 = FCollectionClothRenderPatternConstFacade::GetRenderDeformerNumInfluences(param_1);
  SetRenderDeformerNumInfluences(this,iVar17);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::EmptyString.AssetPath.PackageName.ComparisonIndex.Value = 0;
    ::EmptyString.AssetPath.PackageName.Number = 0;
    ::EmptyString.AssetPath.AssetName.ComparisonIndex.Value = 0;
    ::EmptyString.AssetPath.AssetName.Number = 0;
    ::EmptyString.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::EmptyString.SubPathString.Data.ArrayNum = 0;
    ::EmptyString.SubPathString.Data.ArrayMax = 0;
    atexit(`UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::
           GetRenderMaterialSoftObjectPathName'::__l2::_dynamic_atexit_destructor_for__EmptyString__
          );
    _Init_thread_footer(&::_TSS0);
  }
  pFVar2 = (param_1->ClothCollection).Object;
  if (pFVar2->RenderMaterialSoftObjectPathName == (TManagedArray<FSoftObjectPath> *)0x0) {
LAB_14db626ef:
    pFVar29 = &::EmptyString;
  }
  else {
    iVar17 = FManagedArrayCollection::NumElements
                       ((pFVar2->ManagedArrayCollection).Object,ClothCollectionGroup::RenderPatterns
                       );
    uVar30 = param_1->PatternIndex;
    if (iVar17 <= (int)uVar30) goto LAB_14db626ef;
    pTVar3 = ((param_1->ClothCollection).Object)->RenderMaterialSoftObjectPathName;
    uVar18 = 0;
    if ((int)uVar30 < *(int *)&pTVar3->field_0x18) {
      uVar18 = ~uVar30 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar29 = (FSoftObjectPath *)((longlong)(int)uVar30 * 0x20 + *(longlong *)&pTVar3->field_0x10);
  }
  piVar31 = &param_1->PatternIndex;
  SetRenderMaterialSoftObjectPathName(this,pFVar29);
  pFVar2 = (param_1->ClothCollection).Object;
  iVar17 = FConstClothCollection::GetNumElements
                     (pFVar2,pFVar2->RenderVerticesStart,pFVar2->RenderVerticesEnd,*piVar31);
  SetNumRenderVertices(this,iVar17);
  pFVar2 = (param_1->ClothCollection).Object;
  FConstClothCollection::GetElements<UE::Math::TVector<float>_>
            (&local_1f8,pFVar2->RenderPosition,pFVar2->RenderVerticesStart,pFVar2->RenderVerticesEnd
             ,*piVar31);
  pTVar20 = GetRenderPosition(this,&local_138);
  FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar20,&local_1f8);
  pFVar2 = (param_1->ClothCollection).Object;
  FConstClothCollection::GetElements<UE::Math::TVector<float>_>
            (&local_1e8,pFVar2->RenderNormal,pFVar2->RenderVerticesStart,pFVar2->RenderVerticesEnd,
             *piVar31);
  pTVar20 = GetRenderNormal(this,&local_128);
  FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar20,&local_1e8);
  pFVar2 = (param_1->ClothCollection).Object;
  FConstClothCollection::GetElements<UE::Math::TVector<float>_>
            (&local_1d8,pFVar2->RenderTangentU,pFVar2->RenderVerticesStart,pFVar2->RenderVerticesEnd
             ,*piVar31);
  pTVar20 = GetRenderTangentU(this,&local_118);
  FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar20,&local_1d8);
  pFVar2 = (param_1->ClothCollection).Object;
  FConstClothCollection::GetElements<UE::Math::TVector<float>_>
            (&local_1c8,pFVar2->RenderTangentV,pFVar2->RenderVerticesStart,pFVar2->RenderVerticesEnd
             ,*piVar31);
  pTVar20 = GetRenderTangentV(this,&local_108);
  FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar20,&local_1c8);
  pFVar2 = (param_1->ClothCollection).Object;
  uVar30 = *piVar31;
  pTVar4 = pFVar2->RenderVerticesStart;
  pTVar5 = pFVar2->RenderVerticesEnd;
  pTVar6 = pFVar2->RenderUVs;
  if (((pTVar4 == (TManagedArray<int> *)0x0) || (pTVar5 == (TManagedArray<int> *)0x0)) ||
     (pTVar6 == (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0
     )) {
LAB_14db6297c:
    local_238.DataPtr = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)0x0;
    local_238.ArrayNum = 0;
  }
  else {
    uVar18 = 0;
    if ((int)uVar30 < *(int *)&pTVar4->field_0x18) {
      uVar18 = ~uVar30 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar17 = *(int *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar30 * 4);
    uVar18 = 0;
    if ((int)uVar30 < *(int *)&pTVar5->field_0x18) {
      uVar18 = ~uVar30 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar19 = *(int *)(*(longlong *)&pTVar5->field_0x10 + (longlong)(int)uVar30 * 4);
    if (iVar17 == -1) {
      if (iVar19 != -1) goto LAB_14db62956;
      goto LAB_14db6297c;
    }
    if (iVar19 == -1) {
LAB_14db62956:
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Start == End",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                          ,0x23d,
                          L"Only one boundary of the range is set to INDEX_NONE, when both should.")
      ;
      if (bVar16) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      goto LAB_14db6297c;
    }
    local_238.DataPtr =
         (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
         ((longlong)iVar17 * 0x10 + *(longlong *)&pTVar6->field_0x10);
    local_238.ArrayNum = (iVar19 - iVar17) + 1;
    if ((local_238.ArrayNum < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar21 = GetRenderUVs(this,&local_f8);
  FConstClothCollection::
  CopyArrayViewData<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
            (pTVar21,&local_238);
  pFVar2 = (param_1->ClothCollection).Object;
  uVar30 = param_1->PatternIndex;
  pTVar4 = pFVar2->RenderVerticesStart;
  pTVar5 = pFVar2->RenderVerticesEnd;
  pTVar7 = pFVar2->RenderColor;
  if (((pTVar4 == (TManagedArray<int> *)0x0) || (pTVar5 == (TManagedArray<int> *)0x0)) ||
     (pTVar7 == (TManagedArray<FLinearColor> *)0x0)) {
LAB_14db62af9:
    local_res10 = 0;
    iVar17 = 0;
  }
  else {
    uVar18 = 0;
    if ((int)uVar30 < *(int *)&pTVar4->field_0x18) {
      uVar18 = ~uVar30 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar17 = *(int *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar30 * 4);
    uVar18 = 0;
    if ((int)uVar30 < *(int *)&pTVar5->field_0x18) {
      uVar18 = ~uVar30 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar19 = *(int *)(*(longlong *)&pTVar5->field_0x10 + (longlong)(int)uVar30 * 4);
    if (iVar17 == -1) {
      if (iVar19 != -1) goto LAB_14db62ad3;
      goto LAB_14db62af9;
    }
    if (iVar19 == -1) {
LAB_14db62ad3:
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Start == End",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                          ,0x23d,
                          L"Only one boundary of the range is set to INDEX_NONE, when both should.")
      ;
      if (bVar16) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      goto LAB_14db62af9;
    }
    local_res10 = (longlong)iVar17 * 0x10 + *(longlong *)&pTVar7->field_0x10;
    iVar17 = (iVar19 - iVar17) + 1;
    if ((iVar17 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar22 = GetRenderColor(this,&local_e8);
  if ((pTVar22->ArrayNum != iVar17) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("To.Num() == From.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                          ,0x297,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar30 = 0;
  if (0 < pTVar22->ArrayNum) {
    lVar32 = 0;
    do {
      uVar18 = 0;
      if ((int)uVar30 < iVar17) {
        uVar18 = ~uVar30 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      puVar1 = (undefined4 *)(lVar32 + local_res10);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      uVar14 = puVar1[2];
      uVar15 = puVar1[3];
      uVar18 = 0;
      if ((int)uVar30 < pTVar22->ArrayNum) {
        uVar18 = ~uVar30 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar30 = uVar30 + 1;
      puVar1 = (undefined4 *)((longlong)&pTVar22->DataPtr->field0_0x0 + lVar32);
      *puVar1 = uVar12;
      puVar1[1] = uVar13;
      puVar1[2] = uVar14;
      puVar1[3] = uVar15;
      lVar32 = lVar32 + 0x10;
    } while ((int)uVar30 < pTVar22->ArrayNum);
  }
  pFVar2 = (param_1->ClothCollection).Object;
  uVar30 = param_1->PatternIndex;
  pTVar4 = pFVar2->RenderVerticesStart;
  pTVar5 = pFVar2->RenderVerticesEnd;
  pTVar8 = pFVar2->RenderBoneIndices;
  if (((pTVar4 == (TManagedArray<int> *)0x0) || (pTVar5 == (TManagedArray<int> *)0x0)) ||
     (pTVar8 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) {
LAB_14db62d75:
    local_228.DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    local_228.ArrayNum = 0;
  }
  else {
    uVar18 = 0;
    if ((int)uVar30 < *(int *)&pTVar4->field_0x18) {
      uVar18 = ~uVar30 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar17 = *(int *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar30 * 4);
    uVar18 = 0;
    if ((int)uVar30 < *(int *)&pTVar5->field_0x18) {
      uVar18 = ~uVar30 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar19 = *(int *)(*(longlong *)&pTVar5->field_0x10 + (longlong)(int)uVar30 * 4);
    if (iVar17 == -1) {
      if (iVar19 != -1) goto LAB_14db62d4f;
      goto LAB_14db62d75;
    }
    if (iVar19 == -1) {
LAB_14db62d4f:
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Start == End",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                          ,0x23d,
                          L"Only one boundary of the range is set to INDEX_NONE, when both should.")
      ;
      if (bVar16) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      goto LAB_14db62d75;
    }
    local_228.DataPtr =
         (TArray<int,TSizedDefaultAllocator<32>_> *)
         ((longlong)iVar17 * 0x10 + *(longlong *)&pTVar8->field_0x10);
    local_228.ArrayNum = (iVar19 - iVar17) + 1;
    if ((local_228.ArrayNum < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar23 = GetRenderBoneIndices(this,&local_d8);
  FConstClothCollection::CopyArrayViewData<TArray<int,TSizedDefaultAllocator<32>_>_>
            (pTVar23,&local_228);
  pFVar2 = (param_1->ClothCollection).Object;
  FConstClothCollection::GetElements<TArray<float,TSizedDefaultAllocator<32>_>_>
            (&local_1b8,pFVar2->RenderBoneWeights,pFVar2->RenderVerticesStart,
             pFVar2->RenderVerticesEnd,param_1->PatternIndex);
  pTVar24 = GetRenderBoneWeights(this,&local_c8);
  FConstClothCollection::CopyArrayViewData<TArray<float,TSizedDefaultAllocator<32>_>_>
            (pTVar24,&local_1b8);
  pTVar9 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FConstClothCollection **)&this->field_0x8;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  bVar16 = FConstClothCollection::IsValid(pFVar2,RenderDeformer);
  if ((!bVar16) ||
     (bVar16 = FConstClothCollection::IsValid((param_1->ClothCollection).Object,RenderDeformer),
     !bVar16)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    goto LAB_14db6313e;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pFVar2 = (param_1->ClothCollection).Object;
  FConstClothCollection::GetElements<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
            (&local_1a8,pFVar2->RenderDeformerPositionBaryCoordsAndDist,pFVar2->RenderVerticesStart,
             pFVar2->RenderVerticesEnd,param_1->PatternIndex);
  pTVar25 = GetRenderDeformerPositionBaryCoordsAndDist(this,&local_b8);
  FConstClothCollection::
  CopyArrayViewData<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
            (pTVar25,&local_1a8);
  pFVar2 = (param_1->ClothCollection).Object;
  FConstClothCollection::GetElements<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
            (&local_198,pFVar2->RenderDeformerNormalBaryCoordsAndDist,pFVar2->RenderVerticesStart,
             pFVar2->RenderVerticesEnd,param_1->PatternIndex);
  pTVar25 = GetRenderDeformerNormalBaryCoordsAndDist(this,&local_a8);
  FConstClothCollection::
  CopyArrayViewData<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
            (pTVar25,&local_198);
  pFVar2 = (param_1->ClothCollection).Object;
  FConstClothCollection::GetElements<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
            (&local_188,pFVar2->RenderDeformerTangentBaryCoordsAndDist,pFVar2->RenderVerticesStart,
             pFVar2->RenderVerticesEnd,param_1->PatternIndex);
  pTVar25 = GetRenderDeformerTangentBaryCoordsAndDist(this,&local_98);
  FConstClothCollection::
  CopyArrayViewData<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
            (pTVar25,&local_188);
  uVar30 = param_1->PatternIndex;
  pFVar2 = (param_1->ClothCollection).Object;
  pTVar4 = pFVar2->RenderVerticesStart;
  pTVar5 = pFVar2->RenderVerticesEnd;
  pTVar10 = pFVar2->RenderDeformerSimIndices3D;
  if (((pTVar4 == (TManagedArray<int> *)0x0) || (pTVar5 == (TManagedArray<int> *)0x0)) ||
     (pTVar10 ==
      (TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *)0x0)) {
LAB_14db6306b:
    local_218.DataPtr = (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0;
    local_218.ArrayNum = 0;
  }
  else {
    uVar18 = 0;
    if ((int)uVar30 < *(int *)&pTVar4->field_0x18) {
      uVar18 = ~uVar30 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar17 = *(int *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar30 * 4);
    uVar18 = 0;
    if ((int)uVar30 < *(int *)&pTVar5->field_0x18) {
      uVar18 = ~uVar30 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar19 = *(int *)(*(longlong *)&pTVar5->field_0x10 + (longlong)(int)uVar30 * 4);
    if (iVar17 == -1) {
      if (iVar19 != -1) goto LAB_14db63045;
      goto LAB_14db6306b;
    }
    if (iVar19 == -1) {
LAB_14db63045:
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Start == End",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                          ,0x23d,
                          L"Only one boundary of the range is set to INDEX_NONE, when both should.")
      ;
      if (bVar16) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      goto LAB_14db6306b;
    }
    local_218.DataPtr =
         (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
         ((longlong)iVar17 * 0x10 + *(longlong *)&pTVar10->field_0x10);
    local_218.ArrayNum = (iVar19 - iVar17) + 1;
    if ((local_218.ArrayNum < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar26 = GetRenderDeformerSimIndices3D(this,&local_88);
  local_208._0_8_ = CONCAT44(param_2,param_2);
  local_208._s_0.Z = param_2;
  FConstClothCollection::CopyArrayViewDataAndApplyOffset<UE::Math::TIntVector3<int>_>
            (pTVar26,&local_218,(TIntVector3<int> *)&local_208._s_0);
  pFVar2 = (param_1->ClothCollection).Object;
  FConstClothCollection::GetElements<TArray<float,TSizedDefaultAllocator<32>_>_>
            (&local_178,pFVar2->RenderDeformerWeight,pFVar2->RenderVerticesStart,
             pFVar2->RenderVerticesEnd,param_1->PatternIndex);
  pTVar24 = GetRenderDeformerWeight(this,&local_78);
  FConstClothCollection::CopyArrayViewData<TArray<float,TSizedDefaultAllocator<32>_>_>
            (pTVar24,&local_178);
  pFVar2 = (param_1->ClothCollection).Object;
  FConstClothCollection::GetElements<float>
            (&local_168,pFVar2->RenderDeformerSkinningBlend,pFVar2->RenderVerticesStart,
             pFVar2->RenderVerticesEnd,param_1->PatternIndex);
  pTVar27 = GetRenderDeformerSkinningBlend(this,&local_68);
  FConstClothCollection::CopyArrayViewData<float>(pTVar27,&local_168);
LAB_14db6313e:
  pTVar9 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FConstClothCollection **)&this->field_0x8;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  bVar16 = FConstClothCollection::IsValid(pFVar2,Resizing);
  if ((bVar16) &&
     (bVar16 = FConstClothCollection::IsValid((param_1->ClothCollection).Object,Resizing), bVar16))
  {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pFVar2 = (param_1->ClothCollection).Object;
    FConstClothCollection::GetElements<float>
              (&local_158,pFVar2->RenderCustomResizingBlend,pFVar2->RenderVerticesStart,
               pFVar2->RenderVerticesEnd,param_1->PatternIndex);
    pTVar27 = GetRenderCustomResizingBlend(this,&local_58);
    FConstClothCollection::CopyArrayViewData<float>(pTVar27,&local_158);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  iVar17 = FConstClothCollection::GetElementsOffset
                     (*(TManagedArray<int> **)(*(longlong *)&this->field_0x8 + 0xf0),0,
                      *(int *)&this->field_0x18);
  iVar19 = FConstClothCollection::GetElementsOffset
                     (((param_1->ClothCollection).Object)->RenderVerticesStart,0,
                      param_1->PatternIndex);
  pFVar2 = (param_1->ClothCollection).Object;
  iVar17 = iVar17 - iVar19;
  iVar19 = FConstClothCollection::GetNumElements
                     (pFVar2,pFVar2->RenderFacesStart,pFVar2->RenderFacesEnd,param_1->PatternIndex);
  SetNumRenderFaces(this,iVar19);
  pFVar2 = (param_1->ClothCollection).Object;
  FConstClothCollection::GetElements<UE::Math::TIntVector3<int>_>
            (&local_148,pFVar2->RenderIndices,pFVar2->RenderFacesStart,pFVar2->RenderFacesEnd,
             param_1->PatternIndex);
  pTVar28 = GetRenderIndices(this,&local_48);
  local_248._s_0.X = iVar17;
  local_248._s_0.Y = iVar17;
  local_248._s_0.Z = iVar17;
  FConstClothCollection::CopyArrayViewDataAndApplyOffset<UE::Math::TIntVector3<int>_>
            (pTVar28,&local_148,(TIntVector3<int> *)&local_248._s_0);
  return;
}

// RemoveRenderFaces @ 14db68610

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::RemoveRenderFaces
          (FCollectionClothRenderPatternFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  TManagedArray<int> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  uVar12 = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar8 = FConstClothCollection::GetElementsOffset
                    (*(TManagedArray<int> **)(*(longlong *)&this->field_0x8 + 0x100),0,
                     *(int *)&this->field_0x18);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,param_1->ArrayNum,Default);
  iVar10 = param_1->ArrayNum;
  uVar13 = uVar12;
  if (0 < iVar10) {
    do {
      uVar11 = (uint)uVar12;
      uVar9 = 0;
      if ((int)uVar11 < iVar10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = *(int *)((param_1->AllocatorInstance).Data + uVar13);
      uVar9 = 0;
      if ((int)uVar11 < local_38.ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      *(int *)(local_38.AllocatorInstance.Data + uVar13) = iVar10 + iVar8;
      iVar10 = param_1->ArrayNum;
      uVar13 = uVar13 + 4;
    } while ((int)(uVar11 + 1) < iVar10);
  }
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FClothCollection **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar10 = *(int *)&this->field_0x18;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar5 = *(TManagedArray<int> **)(lVar3 + 0x108);
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FClothCollection::RemoveElements
            (this_00,&ClothCollectionGroup::RenderFaces,&local_38,
             *(TManagedArray<int> **)(lVar3 + 0x100),pTVar5,iVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// RemoveRenderVertices @ 14db68a00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::RemoveRenderVertices
          (FCollectionClothRenderPatternFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  TManagedArray<int> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  uVar12 = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar8 = FConstClothCollection::GetElementsOffset
                    (*(TManagedArray<int> **)(*(longlong *)&this->field_0x8 + 0xf0),0,
                     *(int *)&this->field_0x18);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,param_1->ArrayNum,Default);
  iVar10 = param_1->ArrayNum;
  uVar13 = uVar12;
  if (0 < iVar10) {
    do {
      uVar11 = (uint)uVar12;
      uVar9 = 0;
      if ((int)uVar11 < iVar10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = *(int *)((param_1->AllocatorInstance).Data + uVar13);
      uVar9 = 0;
      if ((int)uVar11 < local_38.ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      *(int *)(local_38.AllocatorInstance.Data + uVar13) = iVar10 + iVar8;
      iVar10 = param_1->ArrayNum;
      uVar13 = uVar13 + 4;
    } while ((int)(uVar11 + 1) < iVar10);
  }
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FClothCollection **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar10 = *(int *)&this->field_0x18;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar5 = *(TManagedArray<int> **)(lVar3 + 0xf8);
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FClothCollection::RemoveElements
            (this_00,&ClothCollectionGroup::RenderVertices,&local_38,
             *(TManagedArray<int> **)(lVar3 + 0xf0),pTVar5,iVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// Reset @ 14db6a720

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::Reset
          (FCollectionClothRenderPatternFacade *this)

{
  SetNumRenderVertices(this,0);
  SetNumRenderFaces(this,0);
  SetDefaults(this);
  return;
}

// SetDefaults @ 14db6cf30

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::SetDefaults
          (FCollectionClothRenderPatternFacade *this)

{
  uint uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar1 = *(uint *)&this->field_0x18;
  lVar7 = (longlong)(int)uVar1;
  lVar2 = *(longlong *)&this->field_0x8;
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  lVar2 = *(longlong *)(lVar2 + 0xf0);
  uVar8 = ~uVar1 >> 0x1f;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar6 = uVar8;
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
  *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 4) = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar2 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  lVar2 = *(longlong *)(lVar2 + 0xf8);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar6 = uVar8;
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
  *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 4) = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar2 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  lVar2 = *(longlong *)(lVar2 + 0x100);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar6 = uVar8;
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
  *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 4) = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar2 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  lVar2 = *(longlong *)(lVar2 + 0x108);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar6 = uVar8;
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
  *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 4) = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetNumRenderFaces @ 14db6e1b0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::SetNumRenderFaces
          (FCollectionClothRenderPatternFacade *this,int param_1)

{
  int iVar1;
  FClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  TManagedArray<int> *pTVar7;
  
  this_00 = *(FClothCollection **)&this->field_0x8;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar6 = *(longlong *)&this->field_0x8;
  pTVar7 = *(TManagedArray<int> **)(lVar4 + 0x108);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FClothCollection::SetNumElements
            (this_00,param_1,&ClothCollectionGroup::RenderFaces,
             *(TManagedArray<int> **)(lVar6 + 0x100),pTVar7,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// SetNumRenderVertices @ 14db6e570

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::SetNumRenderVertices
          (FCollectionClothRenderPatternFacade *this,int param_1)

{
  int iVar1;
  FClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  TManagedArray<int> *pTVar7;
  
  this_00 = *(FClothCollection **)&this->field_0x8;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  iVar1 = *(int *)&this->field_0x18;
  lVar4 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar6 = *(longlong *)&this->field_0x8;
  pTVar7 = *(TManagedArray<int> **)(lVar4 + 0xf8);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FClothCollection::SetNumElements
            (this_00,param_1,&ClothCollectionGroup::RenderVertices,
             *(TManagedArray<int> **)(lVar6 + 0xf0),pTVar7,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// SetRenderDeformerNumInfluences @ 14db6f8c0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::SetRenderDeformerNumInfluences
          (FCollectionClothRenderPatternFacade *this,int param_1)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FConstClothCollection *this_00;
  FClothCollection *this_01;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumInfluences >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothRenderPatternFacade.cpp"
                         ,0x106,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  bVar5 = FConstClothCollection::IsValid(this_00,RenderDeformer);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (!bVar5) {
    if (param_1 == 0) {
      return;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    this_01 = *(FClothCollection **)&this->field_0x8;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FClothCollection::DefineSchema(this_01,RenderDeformer);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  uVar1 = *(uint *)&this->field_0x18;
  lVar3 = *(longlong *)(lVar3 + 0x110);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar3 + 0x18)) {
    uVar6 = ~uVar1 >> 0x1f;
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
  *(int *)(*(longlong *)(lVar3 + 0x10) + (longlong)(int)uVar1 * 4) = param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// SetRenderMaterialSoftObjectPathName @ 14db6fa10

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::SetRenderMaterialSoftObjectPathName
          (FCollectionClothRenderPatternFacade *this,FSoftObjectPath *param_1)

{
  uint uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)&this->field_0x8;
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar1 = *(uint *)&this->field_0x18;
  lVar2 = *(longlong *)(lVar2 + 0x118);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar6 = ~uVar1 >> 0x1f;
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
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar2 + 0x10)),param_1)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

