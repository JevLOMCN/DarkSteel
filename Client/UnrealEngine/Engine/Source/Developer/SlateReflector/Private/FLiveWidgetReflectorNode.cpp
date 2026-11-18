// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 33

// FLiveWidgetReflectorNode @ 142e09f50

/* WARNING: Type propagation algorithm not settling */

FLiveWidgetReflectorNode * __thiscall
FLiveWidgetReflectorNode::FLiveWidgetReflectorNode
          (FLiveWidgetReflectorNode *this,FArrangedWidget *param_1)

{
  TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  
  this->_padding_ = (longlong)&___7FWidgetReflectorNodeBase__6B_;
  lVar3 = *(longlong *)&(param_1->Geometry).Scale;
  this->_padding_ = (longlong)(param_1->Geometry).Size;
  this->_padding_ = lVar3;
  lVar3 = *(longlong *)((longlong)&(param_1->Geometry).Position.field0_0x0 + 4);
  this->_padding_ = *(longlong *)((longlong)&(param_1->Geometry).AbsolutePosition.field0_0x0 + 4);
  this->_padding_ = lVar3;
  lVar3 = *(longlong *)((param_1->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
  this->_padding_ = *(longlong *)((param_1->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
  this->_padding_ = lVar3;
  this->_padding_ =
       *(longlong *)((longlong)&(param_1->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4)
  ;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(FLinearColor_u_0 *)&this->_padding_ = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  TVar1 = ((param_1->Widget).Object)->VisibilityAttribute;
  *(byte *)((longlong)&this->_padding_ + 1) = (byte)TVar1 >> 4 & 1;
  *(byte *)&this->_padding_ = (byte)TVar1 >> 3 & 1;
  this->_padding_ = (longlong)&___7FLiveWidgetReflectorNode__6B_;
  (this->Widget).Object = (param_1->Widget).Object;
  pTVar2 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  (this->Widget).WeakReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FLiveWidgetReflectorNode @ 142e13ae0

void __thiscall FLiveWidgetReflectorNode::~FLiveWidgetReflectorNode(FLiveWidgetReflectorNode *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  
  this->_padding_ = (longlong)&___7FLiveWidgetReflectorNode__6B_;
  pTVar5 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  this->_padding_ = (longlong)&___7FWidgetReflectorNodeBase__6B_;
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// Create @ 142e55300

/* WARNING: Type propagation algorithm not settling */

TSharedRef<FLiveWidgetReflectorNode,1> * __cdecl
FLiveWidgetReflectorNode::Create
          (TSharedRef<FLiveWidgetReflectorNode,1> *__return_storage_ptr__,FArrangedWidget *param_1)

{
  TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  TRawPtrProxy<FLiveWidgetReflectorNode> local_res8;
  
  local_res8.Object = ::operator_new(0x88);
  if (local_res8.Object != (FLiveWidgetReflectorNode *)0x0) {
    (local_res8.Object)->_padding_ = (longlong)&___7FWidgetReflectorNodeBase__6B_;
    lVar3 = *(longlong *)&(param_1->Geometry).Scale;
    (local_res8.Object)->_padding_ = (longlong)(param_1->Geometry).Size;
    (local_res8.Object)->_padding_ = lVar3;
    lVar3 = *(longlong *)((longlong)&(param_1->Geometry).Position.field0_0x0 + 4);
    (local_res8.Object)->_padding_ =
         *(longlong *)((longlong)&(param_1->Geometry).AbsolutePosition.field0_0x0 + 4);
    (local_res8.Object)->_padding_ = lVar3;
    lVar3 = *(longlong *)((param_1->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
    (local_res8.Object)->_padding_ =
         *(longlong *)((param_1->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
    (local_res8.Object)->_padding_ = lVar3;
    (local_res8.Object)->_padding_ =
         *(longlong *)
          ((longlong)&(param_1->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
    (local_res8.Object)->_padding_ = 0;
    (local_res8.Object)->_padding_ = 0;
    (local_res8.Object)->_padding_ = 0;
    (local_res8.Object)->_padding_ = 0;
    *(undefined2 *)&(local_res8.Object)->_padding_ = 0;
    *(FLinearColor_u_0 *)&(local_res8.Object)->_padding_ =
         (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
    TVar1 = ((param_1->Widget).Object)->VisibilityAttribute;
    *(byte *)((longlong)&(local_res8.Object)->_padding_ + 1) = (byte)TVar1 >> 4 & 1;
    *(byte *)&(local_res8.Object)->_padding_ = (byte)TVar1 >> 3 & 1;
    (local_res8.Object)->_padding_ = (longlong)&___7FLiveWidgetReflectorNode__6B_;
    ((local_res8.Object)->Widget).Object = (param_1->Widget).Object;
    pTVar2 = (param_1->Widget).SharedReferenceCount.ReferenceController;
    ((local_res8.Object)->Widget).WeakReferenceCount.ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
  }
  TSharedRef<FLiveWidgetReflectorNode,1>::
  TSharedRef<FLiveWidgetReflectorNode,1><FLiveWidgetReflectorNode>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// GetLiveWidget @ 142ea03c0

TSharedPtr<SWidget,1> * __thiscall
FLiveWidgetReflectorNode::GetLiveWidget
          (FLiveWidgetReflectorNode *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (SWidget *)0x0;
  pTVar1 = (this->Widget).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->Widget).Object;
  }
  return __return_storage_ptr__;
}

// GetNodeType @ 142ea07f0

EWidgetReflectorNodeType __thiscall
FLiveWidgetReflectorNode::GetNodeType(FLiveWidgetReflectorNode *this)

{
  return Live;
}

// GetSupportsInvalidationRecursive @ 142ea8350

bool __thiscall
FLiveWidgetReflectorNode::GetSupportsInvalidationRecursive(FLiveWidgetReflectorNode *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142ea8380;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_142ea8380:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return false;
}

// GetWidgetAddress @ 142ea9e90

ulong64 __thiscall FLiveWidgetReflectorNode::GetWidgetAddress(FLiveWidgetReflectorNode *this)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SWidget *pSVar4;
  SWidget *pSVar5;
  bool bVar6;
  
  pSVar1 = (SWidget *)(this->Widget).WeakReferenceCount.ReferenceController;
  pSVar5 = (SWidget *)0x0;
  pSVar4 = pSVar1;
  if (pSVar1 != (SWidget *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar4 = pSVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142ea9ec3;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar5 = (this->Widget).Object;
    LOCK();
    *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pSVar1->_padding_ + 1);
    UNLOCK();
    pSVar4 = pSVar1;
  }
LAB_142ea9ec3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return (ulong64)pSVar5;
}

// GetWidgetAssetData @ 142ea9f20

FAssetData * __thiscall
FLiveWidgetReflectorNode::GetWidgetAssetData
          (FLiveWidgetReflectorNode *this,FAssetData *__return_storage_ptr__)

{
  SWidget *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FAssetData *pFVar4;
  UObject *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  TSharedPtr<FReflectionMetaData,1> local_18;
  
  pTVar7 = (this->Widget).WeakReferenceCount.ReferenceController;
  pTVar6 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142ea9f61;
      LOCK();
      aVar3 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    this_00 = (this->Widget).Object;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTVar7;
    if (this_00 != (SWidget *)0x0) {
      SWidget::GetMetaData<FReflectionMetaData>(this_00,&local_18);
      if (local_18.Object != (FReflectionMetaData *)0x0) {
        if ((local_18.Object == (FReflectionMetaData *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FAssetData *)(*pcVar1)();
          return pFVar4;
        }
        pUVar5 = FWeakObjectPtr::Get(&((local_18.Object)->Asset).WeakPtr);
        if (pUVar5 != (UObject *)0x0) {
          if ((local_18.Object == (FReflectionMetaData *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FAssetData *)(*pcVar1)();
            return pFVar4;
          }
          pUVar5 = FWeakObjectPtr::Get(&((local_18.Object)->Asset).WeakPtr);
          FAssetData::FAssetData(__return_storage_ptr__,pUVar5,None);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_18.SharedReferenceCount.ReferenceController);
          goto LAB_142ea9f9c;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
LAB_142ea9f61:
  (__return_storage_ptr__->PackageName).ComparisonIndex = 0;
  (__return_storage_ptr__->PackageName).Number = 0;
  (__return_storage_ptr__->PackagePath).ComparisonIndex = 0;
  (__return_storage_ptr__->PackagePath).Number = 0;
  (__return_storage_ptr__->AssetName).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetName).Number = 0;
  (__return_storage_ptr__->AssetClass).ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClass).Number = 0;
  (__return_storage_ptr__->AssetClassPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClassPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetClassPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetClassPath).AssetName.Number = 0;
  (__return_storage_ptr__->ChunkArrayRegistryHandle).Index = -1;
  __return_storage_ptr__->PackageFlags = 0;
  (__return_storage_ptr__->TagsAndValues).field0_0x0.Loose = (FAssetDataTagMap *)0x0;
  (__return_storage_ptr__->TaggedAssetBundles).Object = (FAssetBundleData *)0x0;
  (__return_storage_ptr__->TaggedAssetBundles).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (__return_storage_ptr__->ChunkIDs).ArrayNum = 0;
  (__return_storage_ptr__->ChunkIDs).ArrayMax = 2;
  pTVar7 = pTVar6;
LAB_142ea9f9c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// GetWidgetAttributeCount @ 142eaa2f0

int __thiscall FLiveWidgetReflectorNode::GetWidgetAttributeCount(FLiveWidgetReflectorNode *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FSlateAttributeMetaData *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar1 = (this->Widget).WeakReferenceCount.ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      pTVar6 = pTVar7;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142eaa323;
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    pSVar2 = (this->Widget).Object;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTVar1;
    if ((pSVar2 != (SWidget *)0x0) &&
       (pFVar5 = FSlateAttributeMetaData::FindMetaData(pSVar2),
       pTVar7 = (TReferenceControllerBase<1> *)0x0, pFVar5 != (FSlateAttributeMetaData *)0x0)) {
      pTVar7 = (TReferenceControllerBase<1> *)(ulonglong)(uint)(pFVar5->Attributes).ArrayNum;
    }
  }
LAB_142eaa323:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (int)pTVar7;
}

// GetWidgetClippingText @ 142eaa3b0

FText * __thiscall
FLiveWidgetReflectorNode::GetWidgetClippingText
          (FLiveWidgetReflectorNode *this,FText *__return_storage_ptr__)

{
  EWidgetClipping EVar1;
  ITextData *pIVar2;
  SWidget *pSVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  FText *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  
  pTVar7 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eaa3e3;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar8 = aVar4 == aVar5;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar8);
    pSVar3 = (this->Widget).Object;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    if (pSVar3 != (SWidget *)0x0) {
      EVar1 = pSVar3->Clipping;
      if (EVar1 == Inherit) {
        FText::AsLocalizable_Advanced_LocText
                  (__return_storage_ptr__,L"WidgetReflectorNode",L"WidgetClippingNo",L"No");
        goto LAB_142eaa41c;
      }
      if (EVar1 == ClipToBounds) {
        FText::AsLocalizable_Advanced_LocText
                  (__return_storage_ptr__,L"WidgetReflectorNode",L"WidgetClippingYes",L"Yes");
        goto LAB_142eaa41c;
      }
      if (EVar1 == ClipToBoundsWithoutIntersecting) {
        FText::AsLocalizable_Advanced_LocText
                  (__return_storage_ptr__,L"WidgetReflectorNode",
                   L"WidgetClippingYesWithoutIntersecting",L"Yes (No Intersect)");
        goto LAB_142eaa41c;
      }
      if (EVar1 == ClipToBoundsAlways) {
        FText::AsLocalizable_Advanced_LocText
                  (__return_storage_ptr__,L"WidgetReflectorNode",L"WidgetClippingYesAlways",
                   L"Yes (Always)");
        goto LAB_142eaa41c;
      }
      if (EVar1 == OnDemand) {
        FText::AsLocalizable_Advanced_LocText
                  (__return_storage_ptr__,L"WidgetReflectorNode",L"WidgetClippingOnDemand",
                   L"On Demand");
        goto LAB_142eaa41c;
      }
    }
  }
LAB_142eaa3e3:
  pFVar6 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar6->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar6->Flags;
LAB_142eaa41c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// GetWidgetCollapsedAttributeCount @ 142eaa6a0

int __thiscall
FLiveWidgetReflectorNode::GetWidgetCollapsedAttributeCount(FLiveWidgetReflectorNode *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FSlateAttributeMetaData *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar1 = (this->Widget).WeakReferenceCount.ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      pTVar6 = pTVar7;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142eaa6d3;
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    pSVar2 = (this->Widget).Object;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTVar1;
    if ((pSVar2 != (SWidget *)0x0) &&
       (pFVar5 = FSlateAttributeMetaData::FindMetaData(pSVar2),
       pTVar7 = (TReferenceControllerBase<1> *)0x0, pFVar5 != (FSlateAttributeMetaData *)0x0)) {
      pTVar7 = (TReferenceControllerBase<1> *)(ulonglong)pFVar5->AffectVisibilityCounter;
    }
  }
LAB_142eaa6d3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (int)pTVar7;
}

// GetWidgetDesiredSize @ 142eaa760

TVector2<double> * __thiscall
FLiveWidgetReflectorNode::GetWidgetDesiredSize
          (FLiveWidgetReflectorNode *this,TVector2<double> *__return_storage_ptr__)

{
  SWidget *this_00;
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  FDeprecateSlateVector2D FVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  double dStack_10;
  
  pTVar7 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eaa793;
      }
      LOCK();
      aVar5 = pTVar7->SharedReferenceCount;
      bVar8 = aVar4 == aVar5;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar8);
    this_00 = (this->Widget).Object;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    if (this_00 != (SWidget *)0x0) {
      FVar6 = SWidget::GetDesiredSize(this_00);
      dVar2 = (double)(float)*(undefined8 *)FVar6;
      dVar3 = (double)(float)((ulonglong)*(undefined8 *)FVar6 >> 0x20);
      goto LAB_142eaa79a;
    }
  }
LAB_142eaa793:
  dVar2 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
  dVar3 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
LAB_142eaa79a:
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dStack_10 = auVar1._8_8_;
  *(double *)&__return_storage_ptr__->field0_0x0 = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// GetWidgetEnabled @ 142eaa860

bool __thiscall FLiveWidgetReflectorNode::GetWidgetEnabled(FLiveWidgetReflectorNode *this)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar5;
  bool bVar6;
  
  pTVar4 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eaa890;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar1 = (this->Widget).Object;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    if (pSVar1 != (SWidget *)0x0) {
      TVar5 = pSVar1->EnabledStateAttribute;
      goto LAB_142eaa893;
    }
  }
LAB_142eaa890:
  TVar5 = (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0;
LAB_142eaa893:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (bool)TVar5;
}

// GetWidgetFile @ 142eaa900

FString * __thiscall
FLiveWidgetReflectorNode::GetWidgetFile
          (FLiveWidgetReflectorNode *this,FString *__return_storage_ptr__)

{
  SWidget *this_00;
  bool bVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FName this_01;
  FString *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FString local_28;
  FString local_18;
  
  pTVar6 = (this->Widget).WeakReferenceCount.ReferenceController;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142eaa955;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    this_00 = (this->Widget).Object;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTVar6;
    if (this_00 != (SWidget *)0x0) {
      this_01 = SWidget::GetCreatedInLocation(this_00);
      pFVar4 = ::FName::GetPlainNameString((FName *)this_01,&local_18);
      bVar1 = true;
      bVar7 = false;
      goto LAB_142eaa969;
    }
  }
LAB_142eaa955:
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = &local_28;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  bVar1 = false;
  bVar7 = true;
  pTVar6 = pTVar5;
LAB_142eaa969:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if ((bVar7) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar1) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// GetWidgetFocusable @ 142eaab10

bool __thiscall FLiveWidgetReflectorNode::GetWidgetFocusable(FLiveWidgetReflectorNode *this)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eaab40;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    pSVar1 = (this->Widget).Object;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    if (pSVar1 != (SWidget *)0x0) {
      uVar3 = (**(code **)(pSVar1->_padding_ + 0x198))();
      goto LAB_142eaab43;
    }
  }
LAB_142eaab40:
  uVar3 = 0;
LAB_142eaab43:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (bool)uVar3;
}

// GetWidgetForegroundColor @ 142eaabc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSlateColor * __thiscall
FLiveWidgetReflectorNode::GetWidgetForegroundColor
          (FLiveWidgetReflectorNode *this,FSlateColor *__return_storage_ptr__)

{
  undefined4 uVar1;
  SWidget *pSVar2;
  undefined8 uVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  undefined8 *puVar6;
  SWidget *pSVar7;
  SWidget *pSVar8;
  bool bVar9;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined2 local_18;
  
  pSVar2 = (SWidget *)(this->Widget).WeakReferenceCount.ReferenceController;
  pSVar8 = (SWidget *)0x0;
  pSVar7 = pSVar2;
  if (pSVar2 != (SWidget *)0x0) {
    aVar4 = *(atomic<int> *)&pSVar2->_padding_;
    do {
      pSVar7 = pSVar8;
      if (aVar4 == (atomic<int>)0x0) goto LAB_142eaabf7;
      LOCK();
      aVar5 = *(atomic<int> *)&pSVar2->_padding_;
      bVar9 = aVar4 == aVar5;
      if (bVar9) {
        *(atomic<int> *)&pSVar2->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar9);
    pSVar8 = (this->Widget).Object;
    LOCK();
    *(atomic<int> *)&pSVar2->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pSVar2->_padding_ + 1);
    UNLOCK();
    pSVar7 = pSVar2;
  }
LAB_142eaabf7:
  if (pSVar8 == (SWidget *)0x0) {
    puVar6 = &local_28;
    local_28 = ___xmm_3f8000003f800000000000003f800000;
    uStack_20 = _UNK_15090c6d8;
    local_18 = 2;
  }
  else {
    puVar6 = (undefined8 *)(**(code **)(pSVar8->_padding_ + 0x1f8))(pSVar8,&local_28);
  }
  uVar3 = puVar6[1];
  uVar1 = *(undefined4 *)(puVar6 + 2);
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = *puVar6;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar3;
  __return_storage_ptr__->ColorUseRule = (char)uVar1;
  __return_storage_ptr__->ColorTableId = (char)((uint)uVar1 >> 8);
  *(short *)&__return_storage_ptr__->field_0x12 = (short)((uint)uVar1 >> 0x10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar7);
  return __return_storage_ptr__;
}

// GetWidgetHasActiveTimers @ 142eaacf0

bool __thiscall FLiveWidgetReflectorNode::GetWidgetHasActiveTimers(FLiveWidgetReflectorNode *this)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eaad20;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pSVar1 = (this->Widget).Object;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    if (pSVar1 != (SWidget *)0x0) {
      bVar5 = pSVar1->bHasActiveTimers;
      goto LAB_142eaad23;
    }
  }
LAB_142eaad20:
  bVar5 = false;
LAB_142eaad23:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return bVar5;
}

// GetWidgetIsInvalidationRoot @ 142eaada0

bool __thiscall
FLiveWidgetReflectorNode::GetWidgetIsInvalidationRoot(FLiveWidgetReflectorNode *this)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eaadd0;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    pSVar1 = (this->Widget).Object;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    if (pSVar1 != (SWidget *)0x0) {
      uVar3 = (**(code **)(pSVar1->_padding_ + 0x210))();
      goto LAB_142eaadd3;
    }
  }
LAB_142eaadd0:
  uVar3 = 0;
LAB_142eaadd3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (bool)uVar3;
}

// GetWidgetIsVolatile @ 142eaae50

bool __thiscall FLiveWidgetReflectorNode::GetWidgetIsVolatile(FLiveWidgetReflectorNode *this)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eaae80;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pSVar1 = (this->Widget).Object;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    if (pSVar1 != (SWidget *)0x0) {
      bVar5 = pSVar1->bCachedVolatile;
      goto LAB_142eaae83;
    }
  }
LAB_142eaae80:
  bVar5 = false;
LAB_142eaae83:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return bVar5;
}

// GetWidgetIsVolatileIndirectly @ 142eaaf00

bool __thiscall
FLiveWidgetReflectorNode::GetWidgetIsVolatileIndirectly(FLiveWidgetReflectorNode *this)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eaaf30;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pSVar1 = (this->Widget).Object;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    if (pSVar1 != (SWidget *)0x0) {
      bVar5 = pSVar1->bInheritedVolatility;
      goto LAB_142eaaf33;
    }
  }
LAB_142eaaf30:
  bVar5 = false;
LAB_142eaaf33:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return bVar5;
}

// GetWidgetLayerId @ 142eaafb0

int __thiscall FLiveWidgetReflectorNode::GetWidgetLayerId(FLiveWidgetReflectorNode *this)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  int iVar5;
  bool bVar6;
  
  pTVar4 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eaafe0;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar1 = (this->Widget).Object;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    if (pSVar1 != (SWidget *)0x0) {
      iVar5 = (pSVar1->PersistentState).LayerId;
      goto LAB_142eaafe5;
    }
  }
LAB_142eaafe0:
  iVar5 = -1;
LAB_142eaafe5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return iVar5;
}

// GetWidgetLayerIdOut @ 142eab050

int __thiscall FLiveWidgetReflectorNode::GetWidgetLayerIdOut(FLiveWidgetReflectorNode *this)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  int iVar5;
  bool bVar6;
  
  pTVar4 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eab080;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar1 = (this->Widget).Object;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    if (pSVar1 != (SWidget *)0x0) {
      iVar5 = (pSVar1->PersistentState).OutgoingLayerId;
      goto LAB_142eab085;
    }
  }
LAB_142eab080:
  iVar5 = -1;
LAB_142eab085:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return iVar5;
}

// GetWidgetLineNumber @ 142eab0f0

int __thiscall FLiveWidgetReflectorNode::GetWidgetLineNumber(FLiveWidgetReflectorNode *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FName FVar4;
  TReferenceControllerBase<1> *pTVar5;
  int iVar6;
  bool bVar7;
  
  pTVar1 = (this->Widget).WeakReferenceCount.ReferenceController;
  iVar6 = 0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142eab123;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    this_00 = (this->Widget).Object;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTVar1;
    if (this_00 != (SWidget *)0x0) {
      FVar4 = SWidget::GetCreatedInLocation(this_00);
      iVar6 = *(int *)((longlong)FVar4 + 4);
    }
  }
LAB_142eab123:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return iVar6;
}

// GetWidgetNeedsTick @ 142eab1b0

bool __thiscall FLiveWidgetReflectorNode::GetWidgetNeedsTick(FLiveWidgetReflectorNode *this)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eab1e0;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pSVar1 = (this->Widget).Object;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    if (pSVar1 != (SWidget *)0x0) {
      bVar5 = (bool)(pSVar1->UpdateFlags >> 2 & 1);
      goto LAB_142eab1e3;
    }
  }
LAB_142eab1e0:
  bVar5 = false;
LAB_142eab1e3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return bVar5;
}

// GetWidgetReadableLocation @ 142eab260

FText * __thiscall
FLiveWidgetReflectorNode::GetWidgetReadableLocation
          (FLiveWidgetReflectorNode *this,FText *__return_storage_ptr__)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FString *pFVar4;
  SWidget *pSVar5;
  SWidget *pSVar6;
  bool bVar7;
  FString local_18;
  
  pSVar1 = (SWidget *)(this->Widget).WeakReferenceCount.ReferenceController;
  pSVar5 = (SWidget *)0x0;
  pSVar6 = pSVar1;
  if (pSVar1 != (SWidget *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar6 = pSVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142eab296;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    pSVar5 = (this->Widget).Object;
    LOCK();
    *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pSVar1->_padding_ + 1);
    UNLOCK();
    pSVar6 = pSVar1;
  }
LAB_142eab296:
  pFVar4 = FReflectionMetaData::GetWidgetDebugInfo(&local_18,pSVar5);
  FText::FromString(__return_storage_ptr__,pFVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return __return_storage_ptr__;
}

// GetWidgetSupportsInvalidation @ 142eab900

bool __thiscall
FLiveWidgetReflectorNode::GetWidgetSupportsInvalidation(FLiveWidgetReflectorNode *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eab930;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_142eab930:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return false;
}

// GetWidgetType @ 142eab990

FText * __thiscall
FLiveWidgetReflectorNode::GetWidgetType
          (FLiveWidgetReflectorNode *this,FText *__return_storage_ptr__)

{
  atomic<int> aVar1;
  FSharedReferencer<1> FVar2;
  atomic<int> aVar3;
  bool bVar4;
  TSharedPtr<SWidget_const_,1> local_18;
  
  local_18.SharedReferenceCount.ReferenceController =
       (this->Widget).WeakReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_18.Object = (SWidget *)0x0;
  }
  else {
    aVar1 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        local_18.Object = (SWidget *)0x0;
        local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eab9eb;
      }
      LOCK();
      aVar3 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar4 = aVar1 == aVar3;
      if (bVar4) {
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar4);
    local_18.Object = (this->Widget).Object;
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_142eab9eb:
  FVar2.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  FWidgetReflectorNodeUtils::GetWidgetType(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return __return_storage_ptr__;
}

// GetWidgetTypeAndShortName @ 142eabd80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FLiveWidgetReflectorNode::GetWidgetTypeAndShortName
          (FLiveWidgetReflectorNode *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  SWidget *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FText *pFVar5;
  FString *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  FText local_a8;
  TSharedPtr<FReflectionMetaData,1> local_98;
  FText local_88;
  FText local_78;
  FString local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  
  pTVar10 = (this->Widget).WeakReferenceCount.ReferenceController;
  pTVar9 = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142eabdc1;
      LOCK();
      aVar4 = pTVar10->SharedReferenceCount;
      bVar11 = aVar3 == aVar4;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar11);
    this_00 = (this->Widget).Object;
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    pTVar9 = pTVar10;
    if (this_00 != (SWidget *)0x0) {
      pFVar6 = SWidget::GetTypeAsString(this_00,&local_68);
      pFVar5 = FText::FromString(&local_78,pFVar6);
      local_a8.TextData.Reference = (pFVar5->TextData).Reference;
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 8))
                  (local_a8.TextData.Reference,local_res8);
      }
      local_a8.Flags = pFVar5->Flags;
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      SWidget::GetMetaData<FReflectionMetaData>(this_00,&local_98);
      if (local_98.Object == (FReflectionMetaData *)0x0) {
LAB_142eabf6a:
        FText::FText(__return_storage_ptr__,&local_a8);
      }
      else {
        if ((local_98.Object == (FReflectionMetaData *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FText *)(*pcVar2)();
          return pFVar5;
        }
        if ((local_98.Object)->Name == (FName)0x0) goto LAB_142eabf6a;
        pFVar5 = FText::FromName(&local_48,&(local_98.Object)->Name);
        local_88.TextData.Reference = local_a8.TextData.Reference;
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 8))
                    (local_a8.TextData.Reference,local_res10);
        }
        local_88.Flags = local_a8.Flags;
        pFVar7 = FText::AsLocalizable_Advanced_LocText
                           (&local_58,L"WidgetReflectorNode",L"WidgetTypeAndName",L"{0} ({1})");
        pFVar8 = FTextFormat::FTextFormat(&local_38,pFVar7,Default);
        FText::Format<FText,FText>(__return_storage_ptr__,pFVar8,&local_88,pFVar5);
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      goto LAB_142eabdeb;
    }
  }
LAB_142eabdc1:
  pFVar5 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  pTVar10 = pTVar9;
LAB_142eabdeb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetWidgetVisibilityInherited @ 142eac1b0

bool __thiscall
FLiveWidgetReflectorNode::GetWidgetVisibilityInherited(FLiveWidgetReflectorNode *this)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  FSlateInvalidationWidgetVisibility FVar3;
  atomic<int> aVar4;
  undefined7 extraout_var;
  SWidget *pSVar5;
  SWidget *pSVar6;
  bool bVar7;
  FWidgetProxyHandle local_28;
  
  pSVar1 = (SWidget *)(this->Widget).WeakReferenceCount.ReferenceController;
  pSVar6 = (SWidget *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SWidget *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142eac1e4;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar1->_padding_;
      bVar7 = aVar2 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar7);
    pSVar6 = (this->Widget).Object;
    LOCK();
    *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pSVar1->_padding_ + 1);
    UNLOCK();
    pSVar5 = pSVar1;
  }
LAB_142eac1e4:
  if (pSVar6 == (SWidget *)0x0) {
    bVar7 = false;
  }
  else {
    local_28.InvalidationRootHandle.InvalidationRoot =
         (pSVar6->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot;
    local_28.InvalidationRootHandle.UniqueId =
         (pSVar6->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
    local_28.InvalidationRootHandle._12_4_ =
         *(undefined4 *)&(pSVar6->FastPathProxyHandle).InvalidationRootHandle.field_0xc;
    local_28.WidgetIndex = (pSVar6->FastPathProxyHandle).WidgetIndex;
    local_28.WidgetSortOrder.Order = (pSVar6->FastPathProxyHandle).WidgetSortOrder.Order;
    FVar3 = FWidgetProxyHandle::GetWidgetVisibility(&local_28,(SWidget *)&stack0x00000008);
    bVar7 = (*(byte *)CONCAT71(extraout_var,FVar3.field0_0x0) & 3) == 3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return bVar7;
}

// GetWidgetVisibilityText @ 142eac2b0

FText * __thiscall
FLiveWidgetReflectorNode::GetWidgetVisibilityText
          (FLiveWidgetReflectorNode *this,FText *__return_storage_ptr__)

{
  atomic<int> aVar1;
  FSharedReferencer<1> FVar2;
  atomic<int> aVar3;
  bool bVar4;
  TSharedPtr<SWidget_const_,1> local_18;
  
  local_18.SharedReferenceCount.ReferenceController =
       (this->Widget).WeakReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_18.Object = (SWidget *)0x0;
  }
  else {
    aVar1 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        local_18.Object = (SWidget *)0x0;
        local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eac30b;
      }
      LOCK();
      aVar3 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar4 = aVar1 == aVar3;
      if (bVar4) {
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar4);
    local_18.Object = (this->Widget).Object;
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_142eac30b:
  FVar2.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  FWidgetReflectorNodeUtils::GetWidgetVisibilityText(__return_storage_ptr__,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return __return_storage_ptr__;
}

// GetWidgetVisible @ 142eac4b0

bool __thiscall FLiveWidgetReflectorNode::GetWidgetVisible(FLiveWidgetReflectorNode *this)

{
  SWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eac4e0;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pSVar1 = (this->Widget).Object;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    if (pSVar1 != (SWidget *)0x0) {
      bVar5 = ((byte)pSVar1->VisibilityAttribute & 0x19) != 0;
      goto LAB_142eac4e3;
    }
  }
LAB_142eac4e0:
  bVar5 = false;
LAB_142eac4e3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return bVar5;
}

// HasValidWidgetAssetData @ 142eba1a0

bool __thiscall FLiveWidgetReflectorNode::HasValidWidgetAssetData(FLiveWidgetReflectorNode *this)

{
  SWidget *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TSharedPtr<FReflectionMetaData,1> local_18;
  
  pTVar5 = (this->Widget).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eba1d0;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    this_00 = (this->Widget).Object;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    if (this_00 != (SWidget *)0x0) {
      SWidget::GetMetaData<FReflectionMetaData>(this_00,&local_18);
      if (local_18.Object != (FReflectionMetaData *)0x0) {
        if ((local_18.Object == (FReflectionMetaData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        bVar6 = FWeakObjectPtr::IsValid(&((local_18.Object)->Asset).WeakPtr);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        goto LAB_142eba1d3;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
LAB_142eba1d0:
  bVar6 = false;
LAB_142eba1d3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return bVar6;
}

// IsWidgetLive @ 142ebf7d0

bool __thiscall FLiveWidgetReflectorNode::IsWidgetLive(FLiveWidgetReflectorNode *this)

{
  return true;
}

