// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 14

// FCollectionClothSimMorphTargetFacade @ 14db3b270

FCollectionClothSimMorphTargetFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetFacade::FCollectionClothSimMorphTargetFacade
          (FCollectionClothSimMorphTargetFacade *this,
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
  FCollectionClothSimMorphTargetConstFacade::FCollectionClothSimMorphTargetConstFacade
            ((FCollectionClothSimMorphTargetConstFacade *)this,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(undefined ***)this = &___7FCollectionClothSimMorphTargetFacade_ClothAsset_Chaos_UE__6B_;
  return this;
}

// ~FCollectionClothSimMorphTargetFacade @ 14db3bbe0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetFacade::~FCollectionClothSimMorphTargetFacade
          (FCollectionClothSimMorphTargetFacade *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  return;
}

// Compact @ 14db4e990

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetFacade::Compact
          (FCollectionClothSimMorphTargetFacade *this)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArrayView<int,int> *pTVar8;
  uint local_48 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_40;
  TArrayView<int,int> local_30;
  
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  pTVar8 = GetSimMorphTargetSimVertex3DIndex(this,&local_30);
  local_48[0] = 0;
  iVar1 = pTVar8->ArrayNum;
  piVar2 = pTVar8->DataPtr;
  if (0 < iVar1) {
    do {
      uVar4 = local_48[0];
      uVar6 = 0;
      if ((int)local_48[0] < iVar1) {
        uVar6 = ~local_48[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (piVar2[(int)uVar4] == -1) {
        if (((local_40.AllocatorInstance.Data <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 <
             local_40.AllocatorInstance.Data + (longlong)local_40.ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = local_40.ArrayNum;
        if (local_40.ArrayNum == local_40.ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_40.AllocatorInstance,&local_40.ArrayMax);
        }
        local_40.ArrayNum = iVar7 + 1;
        *(uint *)(local_40.AllocatorInstance.Data + (longlong)iVar7 * 4) = local_48[0];
      }
      local_48[0] = local_48[0] + 1;
    } while ((int)local_48[0] < iVar1);
  }
  RemoveSimMorphTargetVertices(this,&local_40);
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return;
}

// GetClothCollection @ 14db576b0

TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetFacade::GetClothCollection
          (FCollectionClothSimMorphTargetFacade *this,
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

// GetSimMorphTargetPositionDelta @ 14db5f8e0

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetFacade::GetSimMorphTargetPositionDelta
          (FCollectionClothSimMorphTargetFacade *this,
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
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0x1b0);
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
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0x1a8);
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
            (__return_storage_ptr__,*(TManagedArray<UE::Math::TVector<float>_> **)(lVar8 + 0x1b8),
             pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetSimMorphTargetSimVertex3DIndex @ 14db5fba0

TArrayView<int,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetFacade::GetSimMorphTargetSimVertex3DIndex
          (FCollectionClothSimMorphTargetFacade *this,TArrayView<int,int> *__return_storage_ptr__)

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
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0x1b0);
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
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0x1a8);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FConstClothCollection::GetElements<int>
            (__return_storage_ptr__,*(TManagedArray<int> **)(lVar8 + 0x1c8),pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetSimMorphTargetTangentZDelta @ 14db5fe60

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetFacade::GetSimMorphTargetTangentZDelta
          (FCollectionClothSimMorphTargetFacade *this,
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
  pTVar6 = *(TManagedArray<int> **)(lVar4 + 0x1b0);
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
  pTVar9 = *(TManagedArray<int> **)(lVar4 + 0x1a8);
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
            (__return_storage_ptr__,*(TManagedArray<UE::Math::TVector<float>_> **)(lVar8 + 0x1c0),
             pTVar9,pTVar6,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// Initialize @ 14db649f0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetFacade::Initialize
          (FCollectionClothSimMorphTargetFacade *this,
          FCollectionClothSimMorphTargetConstFacade *param_1,int param_2)

{
  uint uVar1;
  FConstClothCollection *pFVar2;
  TManagedArray<FString> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TArrayView<UE::Math::TVector<float>,int> *pTVar8;
  TArrayView<int,int> *pTVar9;
  FString *pFVar10;
  int *piVar11;
  TArrayView<UE::Math::TVector<float>_const_,int> local_78;
  TArrayView<UE::Math::TVector<float>_const_,int> local_68;
  TArrayView<int_const_,int> local_58;
  TArrayView<UE::Math::TVector<float>,int> local_48;
  TArrayView<UE::Math::TVector<float>,int> local_38;
  TArrayView<int,int> local_28;
  
  SetNumSimMorphTargetVertices(this,0);
  SetDefaults(this);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetConstFacade::GetSimMorphTargetName'
           ::__l2::_dynamic_atexit_destructor_for__EmptyString__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar2 = (param_1->ClothCollection).Object;
  if (pFVar2->SimMorphTargetName != (TManagedArray<FString> *)0x0) {
    iVar6 = FManagedArrayCollection::NumElements
                      ((pFVar2->ManagedArrayCollection).Object,ClothCollectionGroup::SimMorphTargets
                      );
    uVar1 = param_1->MorphTargetIndex;
    if ((int)uVar1 < iVar6) {
      pTVar3 = ((param_1->ClothCollection).Object)->SimMorphTargetName;
      uVar7 = 0;
      if ((int)uVar1 < *(int *)&pTVar3->field_0x18) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = (FString *)((longlong)(int)uVar1 * 0x10 + *(longlong *)&pTVar3->field_0x10);
      goto LAB_14db64aee;
    }
  }
  pFVar10 = &::EmptyString;
LAB_14db64aee:
  piVar11 = &param_1->MorphTargetIndex;
  SetSimMorphTargetName(this,pFVar10);
  pFVar2 = (param_1->ClothCollection).Object;
  iVar6 = FConstClothCollection::GetNumElements
                    (pFVar2,pFVar2->SimMorphTargetVerticesStart,pFVar2->SimMorphTargetVerticesEnd,
                     *piVar11);
  SetNumSimMorphTargetVertices(this,iVar6);
  pFVar2 = (param_1->ClothCollection).Object;
  FConstClothCollection::GetElements<UE::Math::TVector<float>_>
            (&local_78,pFVar2->SimMorphTargetPositionDelta,pFVar2->SimMorphTargetVerticesStart,
             pFVar2->SimMorphTargetVerticesEnd,*piVar11);
  pTVar8 = GetSimMorphTargetPositionDelta(this,&local_48);
  FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar8,&local_78);
  pFVar2 = (param_1->ClothCollection).Object;
  FConstClothCollection::GetElements<UE::Math::TVector<float>_>
            (&local_68,pFVar2->SimMorphTargetTangentZDelta,pFVar2->SimMorphTargetVerticesStart,
             pFVar2->SimMorphTargetVerticesEnd,*piVar11);
  pTVar8 = GetSimMorphTargetTangentZDelta(this,&local_38);
  FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar8,&local_68);
  pFVar2 = (param_1->ClothCollection).Object;
  FConstClothCollection::GetElements<int>
            (&local_58,pFVar2->SimMorphTargetSimVertex3DIndex,pFVar2->SimMorphTargetVerticesStart,
             pFVar2->SimMorphTargetVerticesEnd,*piVar11);
  pTVar9 = GetSimMorphTargetSimVertex3DIndex(this,&local_28);
  FConstClothCollection::CopyArrayViewDataAndApplyOffset<int>(pTVar9,&local_58,param_2);
  return;
}

// Initialize @ 14db64c50

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetFacade::Initialize
          (FCollectionClothSimMorphTargetFacade *this,FString *param_1,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_2,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_3,
          TArrayView<int_const_,int> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<UE::Math::TVector<float>,int> *pTVar3;
  TArrayView<int,int> *pTVar4;
  TArrayView<UE::Math::TVector<float>,int> local_38;
  TArrayView<UE::Math::TVector<float>,int> local_28;
  TArrayView<int,int> local_18;
  
  if (param_2->ArrayNum != param_3->ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PositionDeltas.Num() == TangentZDeltas.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimMorphTargetFacade.cpp"
                       ,0x5e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2->ArrayNum != param_4->ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PositionDeltas.Num() == SimVertex3DIndices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimMorphTargetFacade.cpp"
                       ,0x5f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SetNumSimMorphTargetVertices(this,0);
  SetDefaults(this);
  SetSimMorphTargetName(this,param_1);
  SetNumSimMorphTargetVertices(this,param_2->ArrayNum);
  pTVar3 = GetSimMorphTargetPositionDelta(this,&local_38);
  FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar3,param_2);
  pTVar3 = GetSimMorphTargetTangentZDelta(this,&local_28);
  FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar3,param_3);
  pTVar4 = GetSimMorphTargetSimVertex3DIndex(this,&local_18);
  FConstClothCollection::CopyArrayViewData<int>(pTVar4,param_4);
  return;
}

// RemoveSimMorphTargetVertices @ 14db695d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetFacade::RemoveSimMorphTargetVertices
          (FCollectionClothSimMorphTargetFacade *this,
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
                    (*(TManagedArray<int> **)(*(longlong *)&this->field_0x8 + 0x1a8),0,
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
  pTVar5 = *(TManagedArray<int> **)(lVar3 + 0x1b0);
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
            (this_00,&ClothCollectionGroup::SimMorphTargetVertices,&local_38,
             *(TManagedArray<int> **)(lVar3 + 0x1a8),pTVar5,iVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// Reset @ 14db6b6e0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetFacade::Reset
          (FCollectionClothSimMorphTargetFacade *this)

{
  SetNumSimMorphTargetVertices(this,0);
  SetDefaults(this);
  return;
}

// SetDefaults @ 14db6d2b0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetFacade::SetDefaults
          (FCollectionClothSimMorphTargetFacade *this)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FString local_28;
  
  uVar1 = *(uint *)&this->field_0x18;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  SetSimMorphTargetName(this,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
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
  lVar3 = *(longlong *)(lVar3 + 0x1a8);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar3 + 0x18)) {
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
  *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + (longlong)(int)uVar1 * 4) = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
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
  lVar3 = *(longlong *)(lVar3 + 0x1b0);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar3 + 0x18)) {
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
  *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + (longlong)(int)uVar1 * 4) = 0xffffffff;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// SetNumSimMorphTargetVertices @ 14db6ee80

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetFacade::SetNumSimMorphTargetVertices
          (FCollectionClothSimMorphTargetFacade *this,int param_1)

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
  pTVar7 = *(TManagedArray<int> **)(lVar4 + 0x1b0);
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
            (this_00,param_1,&ClothCollectionGroup::SimMorphTargetVertices,
             *(TManagedArray<int> **)(lVar6 + 0x1a8),pTVar7,iVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// SetSimMorphTargetName @ 14db6fb90

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetFacade::SetSimMorphTargetName
          (FCollectionClothSimMorphTargetFacade *this,FString *param_1)

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
  lVar2 = *(longlong *)(lVar2 + 0x1a0);
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
  ::FString::operator=
            ((FString *)((longlong)(int)uVar1 * 0x10 + *(longlong *)(lVar2 + 0x10)),param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

