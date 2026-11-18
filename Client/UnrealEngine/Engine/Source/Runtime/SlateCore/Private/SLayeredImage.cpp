// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 14

// AddLayer @ 1425c82f0

void __thiscall
SLayeredImage::AddLayer(SLayeredImage *this,TAttribute<FSlateBrush_const_*> *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  SWidget *pSVar4;
  void *pvVar5;
  code *pcVar6;
  undefined8 uVar7;
  int iVar8;
  atomic<int> aVar9;
  TSharedRef<SWidget,1> *pTVar10;
  FSlateAttributeMetaData *pFVar11;
  ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
  FVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  FSlateBrush *local_res8;
  undefined1 local_a8 [16];
  TReferenceControllerBase<1> *local_98;
  undefined1 local_90 [32];
  TReferenceControllerBase<1> *local_70;
  TSharedRef<SWidget,1> local_68;
  FLinearColor_u_0 local_50;
  TSharedRef<SWidget,1> local_40;
  
  local_res8 = (FSlateBrush *)0x0;
  pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_40);
  pTVar13 = (pTVar10->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar10->Object;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
    ::
    TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
              ((TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                *)local_a8,pSVar4,param_1,&local_res8);
  }
  else {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
    ::
    TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
              ((TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                *)local_a8,pSVar4,param_1,&local_res8);
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_a8._8_8_ = pSVar4;
  local_98 = pTVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar10->SharedReferenceCount).ReferenceController);
  local_50 = FLinearColor::White.field0_0x0;
  pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_68);
  local_70 = (pTVar10->SharedReferenceCount).ReferenceController;
  local_90._24_8_ = pTVar10->Object;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_70->WeakReferenceCount = (atomic<int>)((int)local_70->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_90[0x10] = 0;
  local_90._8_8_ = local_50._8_8_;
  local_90._0_8_ = local_50._0_8_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar10->SharedReferenceCount).ReferenceController);
  iVar8 = (this->Layers).ArrayNum;
  piVar2 = &(this->Layers).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>_>
                      (0x840,&(this->Layers).AllocatorInstance,piVar2);
  }
  (this->Layers).ArrayNum = iVar8 + 1;
  FVar12 = (this->Layers).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                 )0x0) {
    FVar12 = (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
              )&this->Layers;
  }
  TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
  ::
  TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_><SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
            ((TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
              *)((longlong)FVar12 + (longlong)iVar8 * 0x40),
             (TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              *)local_a8,
             (TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              *)local_90);
  SWidget::Invalidate((SWidget *)this,Paint);
  pTVar13 = local_70;
  uVar7 = local_90._24_8_;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = local_70->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1425c8484;
      }
      LOCK();
      aVar9 = local_70->SharedReferenceCount;
      bVar14 = aVar3 == aVar9;
      if (bVar14) {
        local_70->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar9;
    } while (!bVar14);
    if (((SWidget *)local_90._24_8_ != (SWidget *)0x0) &&
       (pFVar11 = FSlateAttributeMetaData::FindMetaData((SWidget *)local_90._24_8_),
       pFVar11 != (FSlateAttributeMetaData *)0x0)) {
      if (((pFVar11->Attributes).ArrayNum == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("AttributeMetaData->Attributes.Num() != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                              ,0xeb,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar14 = FSlateAttributeMetaData::UnregisterAttributeImpl
                         (pFVar11,(FSlateAttributeBase *)local_90);
      FSlateAttributeMetaData::RemoveMetaDataIfNeeded(pFVar11,(SWidget *)uVar7,bVar14);
    }
  }
LAB_1425c8484:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_70->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(local_70->_padding_ + 8))(local_70,1);
    }
  }
  pTVar13 = local_98;
  uVar7 = local_a8._8_8_;
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = local_98->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1425c84e4;
      }
      LOCK();
      aVar9 = local_98->SharedReferenceCount;
      bVar14 = aVar3 == aVar9;
      if (bVar14) {
        local_98->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar9;
    } while (!bVar14);
    if (((SWidget *)local_a8._8_8_ != (SWidget *)0x0) &&
       (pFVar11 = FSlateAttributeMetaData::FindMetaData((SWidget *)local_a8._8_8_),
       pFVar11 != (FSlateAttributeMetaData *)0x0)) {
      if (((pFVar11->Attributes).ArrayNum == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("AttributeMetaData->Attributes.Num() != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                              ,0xeb,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar14 = FSlateAttributeMetaData::UnregisterAttributeImpl
                         (pFVar11,(FSlateAttributeBase *)local_a8);
      FSlateAttributeMetaData::RemoveMetaDataIfNeeded(pFVar11,(SWidget *)uVar7,bVar14);
    }
  }
LAB_1425c84e4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_98->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(local_98->_padding_ + 8))(local_98,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar5 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// AddLayer @ 1425c8630

void __thiscall
SLayeredImage::AddLayer
          (SLayeredImage *this,TAttribute<FSlateBrush_const_*> *param_1,
          TAttribute<FSlateColor> *param_2)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  SWidget *pSVar4;
  void *pvVar5;
  code *pcVar6;
  undefined8 uVar7;
  int iVar8;
  atomic<int> aVar9;
  TSharedRef<SWidget,1> *pTVar10;
  FSlateAttributeMetaData *pFVar11;
  ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
  FVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  FSlateBrush *local_res8;
  undefined1 local_a8 [16];
  TReferenceControllerBase<1> *local_98;
  undefined1 local_90 [32];
  TReferenceControllerBase<1> *local_70;
  FLinearColor_u_0 local_68;
  undefined1 local_58;
  TSharedRef<SWidget,1> local_50;
  TSharedRef<SWidget,1> local_40;
  
  local_res8 = (FSlateBrush *)0x0;
  pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_50);
  pTVar13 = (pTVar10->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar10->Object;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
    ::
    TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
              ((TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                *)local_a8,pSVar4,param_1,&local_res8);
  }
  else {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
    ::
    TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
              ((TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                *)local_a8,pSVar4,param_1,&local_res8);
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_a8._8_8_ = pSVar4;
  local_98 = pTVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar10->SharedReferenceCount).ReferenceController);
  local_58 = 0;
  local_68 = FLinearColor::White.field0_0x0;
  pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_40);
  pTVar13 = (pTVar10->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar10->Object;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
    ::
    TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
              ((TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                *)local_90,pSVar4,param_2,(FSlateColor *)&local_68._s_0);
  }
  else {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
    ::
    TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
              ((TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                *)local_90,pSVar4,param_2,(FSlateColor *)&local_68._s_0);
    LOCK();
    pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_90._24_8_ = pSVar4;
  local_70 = pTVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar10->SharedReferenceCount).ReferenceController);
  iVar8 = (this->Layers).ArrayNum;
  piVar2 = &(this->Layers).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>_>
                      (0x840,&(this->Layers).AllocatorInstance,piVar2);
  }
  (this->Layers).ArrayNum = iVar8 + 1;
  FVar12 = (this->Layers).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                 )0x0) {
    FVar12 = (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
              )&this->Layers;
  }
  TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
  ::
  TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_><SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
            ((TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
              *)((longlong)FVar12 + (longlong)iVar8 * 0x40),
             (TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              *)local_a8,
             (TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
              *)local_90);
  SWidget::Invalidate((SWidget *)this,Paint);
  pTVar13 = local_70;
  uVar7 = local_90._24_8_;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = local_70->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1425c87b4;
      }
      LOCK();
      aVar9 = local_70->SharedReferenceCount;
      bVar14 = aVar3 == aVar9;
      if (bVar14) {
        local_70->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar9;
    } while (!bVar14);
    if (((SWidget *)local_90._24_8_ != (SWidget *)0x0) &&
       (pFVar11 = FSlateAttributeMetaData::FindMetaData((SWidget *)local_90._24_8_),
       pFVar11 != (FSlateAttributeMetaData *)0x0)) {
      if (((pFVar11->Attributes).ArrayNum == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("AttributeMetaData->Attributes.Num() != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                              ,0xeb,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar14 = FSlateAttributeMetaData::UnregisterAttributeImpl
                         (pFVar11,(FSlateAttributeBase *)local_90);
      FSlateAttributeMetaData::RemoveMetaDataIfNeeded(pFVar11,(SWidget *)uVar7,bVar14);
    }
  }
LAB_1425c87b4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_70->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(local_70->_padding_ + 8))(local_70,1);
    }
  }
  pTVar13 = local_98;
  uVar7 = local_a8._8_8_;
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = local_98->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1425c8814;
      }
      LOCK();
      aVar9 = local_98->SharedReferenceCount;
      bVar14 = aVar3 == aVar9;
      if (bVar14) {
        local_98->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar9 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar9;
    } while (!bVar14);
    if (((SWidget *)local_a8._8_8_ != (SWidget *)0x0) &&
       (pFVar11 = FSlateAttributeMetaData::FindMetaData((SWidget *)local_a8._8_8_),
       pFVar11 != (FSlateAttributeMetaData *)0x0)) {
      if (((pFVar11->Attributes).ArrayNum == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("AttributeMetaData->Attributes.Num() != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                              ,0xeb,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar14 = FSlateAttributeMetaData::UnregisterAttributeImpl
                         (pFVar11,(FSlateAttributeBase *)local_a8);
      FSlateAttributeMetaData::RemoveMetaDataIfNeeded(pFVar11,(SWidget *)uVar7,bVar14);
    }
  }
LAB_1425c8814:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_98->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(local_98->_padding_ + 8))(local_98,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar5 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_2->Getter);
  pvVar5 = *(void **)&(param_2->Getter).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_2->Getter);
  return;
}

// Construct @ 1425d3bb0

void __thiscall
SLayeredImage::Construct
          (SLayeredImage *this,FArguments *param_1,
          TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  longlong *plVar1;
  atomic<int> *paVar2;
  TArray<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  int *piVar4;
  atomic<int> aVar5;
  uint uVar6;
  ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
  FVar7;
  code *pcVar8;
  undefined8 uVar9;
  TAttribute<FSlateBrush_const_*> *pTVar10;
  atomic<int> aVar11;
  int iVar12;
  SWidget *pSVar13;
  SWidget *pSVar14;
  FSlateAttributeMetaData *pFVar15;
  ulonglong uVar16;
  SWidget *pSVar17;
  ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
  FVar18;
  SWidget *pSVar19;
  TAttribute<FSlateBrush_const_*> *pTVar20;
  bool bVar21;
  undefined1 local_res20 [8];
  undefined1 local_a0 [16];
  SWidget *local_90;
  FSlateBrush *local_88;
  undefined1 local_80 [32];
  SWidget *local_60;
  TAttribute<FSlateBrush_const_*> *local_58;
  FLinearColor_u_0 local_50;
  undefined1 local_40;
  
  pTVar3 = &this->Layers;
  uVar6 = param_2->ArrayNum;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  piVar4 = &(this->Layers).ArrayMax;
  if (*piVar4 < (int)uVar6) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>_>
              (0x40,8,uVar6,&pTVar3->AllocatorInstance,(this->Layers).ArrayNum,piVar4);
  }
  uVar6 = param_2->ArrayNum;
  uVar16 = (ulonglong)(int)uVar6;
  pTVar20 = (TAttribute<FSlateBrush_const_*> *)(param_2->AllocatorInstance).Data;
  local_58 = (TAttribute<FSlateBrush_const_*> *)((longlong)pTVar20 + uVar16 * 0x58);
  do {
    pTVar10 = local_58;
    if (param_2->ArrayNum != (int)uVar16) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    pSVar14 = (SWidget *)0x0;
    if (pTVar20 == pTVar10) {
      return;
    }
    pSVar13 = (SWidget *)this->_padding_;
    plVar1 = &this->_padding_;
    local_88 = (FSlateBrush *)0x0;
    pSVar19 = pSVar13;
    pSVar17 = pSVar14;
    if (pSVar13 != (SWidget *)0x0) {
      aVar5 = *(atomic<int> *)&pSVar13->_padding_;
      do {
        pSVar19 = pSVar14;
        if (aVar5 == (atomic<int>)0x0) goto LAB_1425d3c98;
        LOCK();
        aVar11 = *(atomic<int> *)&pSVar13->_padding_;
        bVar21 = aVar5 == aVar11;
        if (bVar21) {
          *(atomic<int> *)&pSVar13->_padding_ = (atomic<int>)((int)aVar5 + 1);
          aVar11 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar11;
      } while (!bVar21);
      pSVar19 = pSVar13;
      pSVar17 = (SWidget *)*plVar1;
    }
LAB_1425d3c98:
    pSVar13 = (SWidget *)&pSVar17->_padding_;
    if (pSVar17 == (SWidget *)0x0) {
      pSVar13 = pSVar14;
    }
    if ((pSVar13 != (SWidget *)plVar1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x67f,L""), bVar21)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pSVar17 == (SWidget *)0x0) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      if (bVar21) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L"");
      if (bVar21) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pSVar19 == (SWidget *)0x0) {
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
      ::
      TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                ((TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                  *)local_a0,pSVar17,pTVar20,&local_88);
    }
    else {
      LOCK();
      *(atomic<int> *)&pSVar19->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar19->_padding_ + 1);
      UNLOCK();
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
      ::
      TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                ((TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                  *)local_a0,pSVar17,pTVar20,&local_88);
      LOCK();
      ((atomic<int> *)&pSVar19->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar19->_padding_)[1] + 1);
      UNLOCK();
    }
    local_a0._8_8_ = pSVar17;
    local_90 = pSVar19;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar19);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar19);
    pSVar14 = (SWidget *)this->_padding_;
    pSVar17 = (SWidget *)0x0;
    local_40 = 0;
    local_50 = FLinearColor::White.field0_0x0;
    pSVar13 = pSVar14;
    pSVar19 = pSVar17;
    if (pSVar14 != (SWidget *)0x0) {
      aVar5 = *(atomic<int> *)&pSVar14->_padding_;
      do {
        pSVar13 = pSVar17;
        pSVar19 = (SWidget *)0x0;
        if (aVar5 == (atomic<int>)0x0) goto LAB_1425d3db8;
        LOCK();
        aVar11 = *(atomic<int> *)&pSVar14->_padding_;
        bVar21 = aVar5 == aVar11;
        if (bVar21) {
          *(atomic<int> *)&pSVar14->_padding_ = (atomic<int>)((int)aVar5 + 1);
          aVar11 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar11;
      } while (!bVar21);
      pSVar13 = pSVar14;
      pSVar19 = (SWidget *)*plVar1;
    }
LAB_1425d3db8:
    pSVar14 = (SWidget *)&pSVar19->_padding_;
    if (pSVar19 == (SWidget *)0x0) {
      pSVar14 = pSVar17;
    }
    if ((pSVar14 != (SWidget *)plVar1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x67f,L""), bVar21)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pSVar19 == (SWidget *)0x0) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L"");
      if (bVar21) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L"");
      if (bVar21) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pSVar13 == (SWidget *)0x0) {
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
      ::
      TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                ((TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                  *)local_80,pSVar19,(TAttribute<FSlateColor> *)(pTVar20 + 1),
                 (FSlateColor *)&local_50._s_0);
    }
    else {
      LOCK();
      *(atomic<int> *)&pSVar13->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar13->_padding_ + 1);
      UNLOCK();
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
      ::
      TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                ((TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                  *)local_80,pSVar19,(TAttribute<FSlateColor> *)(pTVar20 + 1),
                 (FSlateColor *)&local_50._s_0);
      LOCK();
      ((atomic<int> *)&pSVar13->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar13->_padding_)[1] + 1);
      UNLOCK();
    }
    local_80._24_8_ = pSVar19;
    local_60 = pSVar13;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar13);
    iVar12 = (this->Layers).ArrayNum;
    if (iVar12 == *piVar4) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>_>
                         (0x840,&pTVar3->AllocatorInstance,piVar4);
    }
    (this->Layers).ArrayNum = iVar12 + 1;
    FVar7 = (this->Layers).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
              )pTVar3;
    if (FVar7 != (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                  )0x0) {
      FVar18 = FVar7;
    }
    TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
    ::
    TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_><SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
              ((TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
                *)((longlong)iVar12 * 0x40 + (longlong)FVar18),
               (TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                *)local_a0,
               (TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                *)local_80);
    pSVar14 = local_60;
    uVar9 = local_80._24_8_;
    if (local_60 != (SWidget *)0x0) {
      aVar5 = *(atomic<int> *)&local_60->_padding_;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          pSVar14 = (SWidget *)0x0;
          goto LAB_1425d3f14;
        }
        LOCK();
        aVar11 = *(atomic<int> *)&local_60->_padding_;
        bVar21 = aVar5 == aVar11;
        if (bVar21) {
          *(atomic<int> *)&local_60->_padding_ = (atomic<int>)((int)aVar5 + 1);
          aVar11 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar11;
      } while (!bVar21);
      if (((SWidget *)local_80._24_8_ != (SWidget *)0x0) &&
         (pFVar15 = FSlateAttributeMetaData::FindMetaData((SWidget *)local_80._24_8_),
         pFVar15 != (FSlateAttributeMetaData *)0x0)) {
        if (((pFVar15->Attributes).ArrayNum == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("AttributeMetaData->Attributes.Num() != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                                ,0xeb,L""), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        bVar21 = FSlateAttributeMetaData::UnregisterAttributeImpl
                           (pFVar15,(FSlateAttributeBase *)local_80);
        FSlateAttributeMetaData::RemoveMetaDataIfNeeded(pFVar15,(SWidget *)uVar9,bVar21);
      }
    }
LAB_1425d3f14:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar14);
    if (local_60 != (SWidget *)0x0) {
      LOCK();
      paVar2 = (atomic<int> *)&local_60->_padding_ + 1;
      aVar5 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)(local_60->_padding_ + 8))();
      }
    }
    pSVar14 = local_90;
    uVar9 = local_a0._8_8_;
    if (local_90 != (SWidget *)0x0) {
      aVar5 = *(atomic<int> *)&local_90->_padding_;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          pSVar14 = (SWidget *)0x0;
          goto LAB_1425d3f64;
        }
        LOCK();
        aVar11 = *(atomic<int> *)&local_90->_padding_;
        bVar21 = aVar5 == aVar11;
        if (bVar21) {
          *(atomic<int> *)&local_90->_padding_ = (atomic<int>)((int)aVar5 + 1);
          aVar11 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar11;
      } while (!bVar21);
      if (((SWidget *)local_a0._8_8_ != (SWidget *)0x0) &&
         (pFVar15 = FSlateAttributeMetaData::FindMetaData((SWidget *)local_a0._8_8_),
         pFVar15 != (FSlateAttributeMetaData *)0x0)) {
        if (((pFVar15->Attributes).ArrayNum == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("AttributeMetaData->Attributes.Num() != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                                ,0xeb,L""), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        bVar21 = FSlateAttributeMetaData::UnregisterAttributeImpl
                           (pFVar15,(FSlateAttributeBase *)local_a0);
        FSlateAttributeMetaData::RemoveMetaDataIfNeeded(pFVar15,(SWidget *)uVar9,bVar21);
      }
    }
LAB_1425d3f64:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar14);
    if (local_90 != (SWidget *)0x0) {
      LOCK();
      paVar2 = (atomic<int> *)&local_90->_padding_ + 1;
      aVar5 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)(local_90->_padding_ + 8))();
      }
    }
    pTVar20 = (TAttribute<FSlateBrush_const_*> *)&pTVar20[2].bIsSet;
    uVar16 = (ulonglong)uVar6;
  } while( true );
}

// Construct @ 1425d40d0

void __thiscall
SLayeredImage::Construct(SLayeredImage *this,FArguments *param_1,FSlateIcon *param_2)

{
  SImage::Construct((SImage *)this,param_1);
  SetFromSlateIcon(this,param_2);
  return;
}

// Construct @ 1425d4100

void __thiscall
SLayeredImage::Construct
          (SLayeredImage *this,FArguments *param_1,
          TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  TAttribute<FSlateBrush_const_*> local_78;
  FLinearColor_u_0 local_50;
  undefined4 local_40;
  FScriptContainerElement local_3c;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_38;
  
  SImage::Construct((SImage *)this,param_1);
  uVar2 = param_2->ArrayNum;
  if (-1 < (int)uVar2) {
    piVar1 = &(this->Layers).ArrayMax;
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>_>
                (0x40,8,uVar2,&(this->Layers).AllocatorInstance,(this->Layers).ArrayNum,piVar1);
    }
    iVar3 = param_2->ArrayNum;
    pFVar4 = (param_2->AllocatorInstance).Data;
    pFVar5 = pFVar4 + (longlong)iVar3 * 0x58;
    while( true ) {
      if (param_2->ArrayNum != iVar3) {
        `TCheckedPointerIterator<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar5) break;
      local_40 = *(undefined4 *)(pFVar4 + 0x38);
      local_50._0_8_ = *(undefined8 *)(pFVar4 + 0x28);
      local_50._8_8_ = *(undefined8 *)(pFVar4 + 0x30);
      local_3c = pFVar4[0x3c];
      TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                (&local_38,
                 (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar4 + 0x40))
      ;
      local_78.Value = *(FSlateBrush **)pFVar4;
      local_78.bIsSet = *(bool *)(pFVar4 + 8);
      TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                (&local_78.Getter,
                 (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)
                 (pFVar4 + 0x10));
      AddLayer(this,&local_78,(TAttribute<FSlateColor> *)&local_50._s_0);
      pFVar4 = pFVar4 + 0x58;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// Construct @ 1425d4230

void __thiscall SLayeredImage::Construct(SLayeredImage *this,FArguments *param_1,int param_2)

{
  longlong *plVar1;
  atomic<int> *paVar2;
  TArray<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  int *piVar4;
  atomic<int> aVar5;
  code *pcVar6;
  FLinearColor FVar7;
  undefined8 uVar8;
  atomic<int> aVar9;
  int iVar10;
  SWidget *pSVar11;
  FSlateAttributeMetaData *pFVar12;
  ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
  FVar13;
  ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
  FVar14;
  SWidget *pSVar15;
  SWidget *pSVar16;
  SWidget *pSVar17;
  bool bVar18;
  ulonglong local_res20;
  undefined1 local_88 [24];
  undefined1 local_70 [16];
  SWidget *local_60;
  undefined1 local_58 [32];
  SWidget *local_38;
  
  local_res20 = (ulonglong)(uint)param_2;
  SImage::Construct((SImage *)this,param_1);
  if (0 < param_2) {
    FVar13 = (this->Layers).AllocatorInstance.SecondaryData;
    iVar10 = (this->Layers).ArrayNum;
    pTVar3 = &this->Layers;
    piVar4 = &(this->Layers).ArrayMax;
    if (*piVar4 < param_2) {
      if (FVar13 == (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                     )0x0) {
        FVar13 = (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                  )pTVar3;
      }
      DestructItems<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>,int>
                ((TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
                  *)FVar13,iVar10);
      (this->Layers).ArrayNum = 0;
      if (*piVar4 != param_2) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>_>
                  (0x40,8,param_2,&pTVar3->AllocatorInstance,0,piVar4);
      }
    }
    else {
      if (FVar13 == (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                     )0x0) {
        FVar13 = (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                  )pTVar3;
      }
      DestructItems<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>,int>
                ((TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
                  *)FVar13,iVar10);
      (this->Layers).ArrayNum = 0;
    }
    pSVar17 = (SWidget *)0x0;
    plVar1 = &this->_padding_;
    do {
      pSVar11 = (SWidget *)this->_padding_;
      pSVar15 = pSVar11;
      pSVar16 = pSVar17;
      if (pSVar11 != (SWidget *)0x0) {
        aVar5 = *(atomic<int> *)&pSVar11->_padding_;
        do {
          pSVar15 = pSVar17;
          if (aVar5 == (atomic<int>)0x0) goto LAB_1425d4338;
          LOCK();
          aVar9 = *(atomic<int> *)&pSVar11->_padding_;
          bVar18 = aVar5 == aVar9;
          if (bVar18) {
            *(atomic<int> *)&pSVar11->_padding_ = (atomic<int>)((int)aVar5 + 1);
            aVar9 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar9;
        } while (!bVar18);
        pSVar15 = pSVar11;
        pSVar16 = (SWidget *)*plVar1;
      }
LAB_1425d4338:
      pSVar11 = (SWidget *)&pSVar16->_padding_;
      if (pSVar16 == (SWidget *)0x0) {
        pSVar11 = pSVar17;
      }
      if ((pSVar11 != (SWidget *)plVar1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x67f,L""), bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pSVar16 == (SWidget *)0x0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L"");
        if (bVar18) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L"");
        if (bVar18) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pSVar15 != (SWidget *)0x0) {
        LOCK();
        *(atomic<int> *)&pSVar15->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar15->_padding_ + 1);
        UNLOCK();
        LOCK();
        ((atomic<int> *)&pSVar15->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pSVar15->_padding_)[1] + 1);
        UNLOCK();
      }
      local_70._0_8_ = 0;
      local_70._8_8_ = pSVar16;
      local_60 = pSVar15;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar15);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar15);
      FVar7 = FLinearColor::White;
      pSVar11 = (SWidget *)this->_padding_;
      pSVar15 = pSVar11;
      pSVar16 = pSVar17;
      if (pSVar11 != (SWidget *)0x0) {
        aVar5 = *(atomic<int> *)&pSVar11->_padding_;
        do {
          pSVar15 = pSVar17;
          if (aVar5 == (atomic<int>)0x0) goto LAB_1425d4448;
          LOCK();
          aVar9 = *(atomic<int> *)&pSVar11->_padding_;
          bVar18 = aVar5 == aVar9;
          if (bVar18) {
            *(atomic<int> *)&pSVar11->_padding_ = (atomic<int>)((int)aVar5 + 1);
            aVar9 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar9;
        } while (!bVar18);
        pSVar15 = pSVar11;
        pSVar16 = (SWidget *)*plVar1;
      }
LAB_1425d4448:
      pSVar11 = (SWidget *)&pSVar16->_padding_;
      if (pSVar16 == (SWidget *)0x0) {
        pSVar11 = pSVar17;
      }
      if ((pSVar11 != (SWidget *)plVar1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x67f,L""), bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (pSVar16 == (SWidget *)0x0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L"");
        if (bVar18) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L"");
        if (bVar18) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_88._0_8_ = FVar7.field0_0x0._0_8_;
      local_88._8_8_ = FVar7.field0_0x0._8_8_;
      if (pSVar15 != (SWidget *)0x0) {
        LOCK();
        *(atomic<int> *)&pSVar15->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar15->_padding_ + 1);
        UNLOCK();
        LOCK();
        ((atomic<int> *)&pSVar15->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pSVar15->_padding_)[1] + 1);
        UNLOCK();
      }
      local_58[0x10] = 0;
      local_58._8_8_ = local_88._8_8_;
      local_58._0_8_ = local_88._0_8_;
      local_58._24_8_ = pSVar16;
      local_38 = pSVar15;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar15);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar15);
      iVar10 = (this->Layers).ArrayNum;
      if (iVar10 == *piVar4) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>_>
                           (0x840,&pTVar3->AllocatorInstance,piVar4);
      }
      (this->Layers).ArrayNum = iVar10 + 1;
      FVar13 = (this->Layers).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                )pTVar3;
      if (FVar13 != (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                     )0x0) {
        FVar14 = FVar13;
      }
      TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
      ::
      TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_><SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
                ((TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
                  *)((longlong)iVar10 * 0x40 + (longlong)FVar14),
                 (TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                  *)local_70,
                 (TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                  *)local_58);
      pSVar11 = local_38;
      uVar8 = local_58._24_8_;
      pSVar15 = pSVar11;
      if (local_38 != (SWidget *)0x0) {
        aVar5 = *(atomic<int> *)&local_38->_padding_;
        do {
          pSVar15 = pSVar17;
          if (aVar5 == (atomic<int>)0x0) goto LAB_1425d45b5;
          LOCK();
          aVar9 = *(atomic<int> *)&local_38->_padding_;
          bVar18 = aVar5 == aVar9;
          if (bVar18) {
            *(atomic<int> *)&local_38->_padding_ = (atomic<int>)((int)aVar5 + 1);
            aVar9 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar9;
        } while (!bVar18);
        pSVar15 = pSVar11;
        if (((SWidget *)local_58._24_8_ != (SWidget *)0x0) &&
           (pFVar12 = FSlateAttributeMetaData::FindMetaData((SWidget *)local_58._24_8_),
           pFVar12 != (FSlateAttributeMetaData *)0x0)) {
          if (((pFVar12->Attributes).ArrayNum == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AttributeMetaData->Attributes.Num() != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                                  ,0xeb,L""), bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          bVar18 = FSlateAttributeMetaData::UnregisterAttributeImpl
                             (pFVar12,(FSlateAttributeBase *)local_58);
          FSlateAttributeMetaData::RemoveMetaDataIfNeeded(pFVar12,(SWidget *)uVar8,bVar18);
        }
      }
LAB_1425d45b5:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar15);
      if (local_38 != (SWidget *)0x0) {
        LOCK();
        paVar2 = (atomic<int> *)&local_38->_padding_ + 1;
        aVar5 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar5 == (atomic<int>)0x1) {
          (**(code **)(local_38->_padding_ + 8))(local_38,1);
        }
      }
      pSVar11 = local_60;
      uVar8 = local_70._8_8_;
      pSVar15 = pSVar11;
      if (local_60 != (SWidget *)0x0) {
        aVar5 = *(atomic<int> *)&local_60->_padding_;
        do {
          pSVar15 = pSVar17;
          if (aVar5 == (atomic<int>)0x0) goto LAB_1425d4605;
          LOCK();
          aVar9 = *(atomic<int> *)&local_60->_padding_;
          bVar18 = aVar5 == aVar9;
          if (bVar18) {
            *(atomic<int> *)&local_60->_padding_ = (atomic<int>)((int)aVar5 + 1);
            aVar9 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar9;
        } while (!bVar18);
        pSVar15 = pSVar11;
        if (((SWidget *)local_70._8_8_ != (SWidget *)0x0) &&
           (pFVar12 = FSlateAttributeMetaData::FindMetaData((SWidget *)local_70._8_8_),
           pFVar12 != (FSlateAttributeMetaData *)0x0)) {
          if (((pFVar12->Attributes).ArrayNum == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AttributeMetaData->Attributes.Num() != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\SlateAttributeMetaData.cpp"
                                  ,0xeb,L""), bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          bVar18 = FSlateAttributeMetaData::UnregisterAttributeImpl
                             (pFVar12,(FSlateAttributeBase *)local_70);
          FSlateAttributeMetaData::RemoveMetaDataIfNeeded(pFVar12,(SWidget *)uVar8,bVar18);
        }
      }
LAB_1425d4605:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar15);
      if (local_60 != (SWidget *)0x0) {
        LOCK();
        paVar2 = (atomic<int> *)&local_60->_padding_ + 1;
        aVar5 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar5 == (atomic<int>)0x1) {
          (**(code **)(local_60->_padding_ + 8))(local_60,1);
        }
      }
      local_res20 = local_res20 - 1;
    } while (local_res20 != 0);
  }
  return;
}

// Construct @ 1425d4760

void __thiscall
SLayeredImage::Construct
          (SLayeredImage *this,FArguments *param_1,TAttribute<FSlateBrush_const_*> *param_2,
          TAttribute<FSlateColor> *param_3)

{
  void *pvVar1;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  TAttribute<FSlateBrush_const_*> local_68;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  TDelegateBase<FNotThreadSafeDelegateMode> local_28;
  
  SImage::Construct((SImage *)this,param_1);
  local_30._0_1_ = (param_3->Value).ColorUseRule;
  local_30._1_1_ = (param_3->Value).ColorTableId;
  local_30._2_2_ = *(undefined2 *)&(param_3->Value).field_0x12;
  local_40._0_8_ = *(undefined8 *)&(param_3->Value).SpecifiedColor.field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&(param_3->Value).SpecifiedColor.field0_0x0 + 8);
  local_2c = param_3->bIsSet;
  this_00 = &param_3->Getter;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (&local_28,(TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  local_68.Value = param_2->Value;
  local_68.bIsSet = param_2->bIsSet;
  this_01 = &param_2->Getter;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_68.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
  AddLayer(this,&local_68,(TAttribute<FSlateColor> *)&local_40._s_0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
  pvVar1 = *(void **)&(param_2->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_01);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_3->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// GetNumLayers @ 1425e1e30

int __thiscall SLayeredImage::GetNumLayers(SLayeredImage *this)

{
  return (this->Layers).ArrayNum + 1;
}

// IsValidIndex @ 1425e9bf0

bool __thiscall SLayeredImage::IsValidIndex(SLayeredImage *this,int param_1)

{
  if ((param_1 != 0) && ((param_1 + -1 < 0 || ((this->Layers).ArrayNum <= param_1 + -1)))) {
    return false;
  }
  return true;
}

// OnPaint @ 1425eff80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SLayeredImage::OnPaint
          (SLayeredImage *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ESlateColorStylingMode EVar9;
  int iVar10;
  FSlateBrush *pFVar11;
  bool bVar12;
  ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
  FVar13;
  FSlateColor *pFVar14;
  FSlateColor *this_00;
  FSlateColor *this_01;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [4];
  undefined4 local_d4;
  FLinearColor_u_0 local_d0;
  FSlateWindowElementList *local_c0;
  TVector2<float>_u_0 local_b8;
  float local_b0;
  undefined8 local_ac;
  FDeprecateSlateVector2D local_a4;
  float local_9c [2];
  float afStack_94 [2];
  TVector2<float>_u_0 local_8c;
  byte local_84;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_c0 = param_4;
  SImage::OnPaint((SImage *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if ((!param_7) || (bVar12 = true, *(char *)((longlong)&this->_padding_ + 2) == '\0')) {
    bVar12 = false;
  }
  iVar10 = (this->Layers).ArrayNum;
  FVar13 = (this->Layers).AllocatorInstance.SecondaryData;
  local_d4 = 0x20;
  if (bVar12) {
    local_d4 = 0;
  }
  if (FVar13 == (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                 )0x0) {
    FVar13 = (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
              )&this->Layers;
  }
  this_01 = (FSlateColor *)((longlong)FVar13 + 0x18);
  while( true ) {
    if ((this->Layers).ArrayNum != iVar10) {
      `TCheckedPointerIterator<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    if (&this_01[-2].ColorUseRule == (undefined1 *)((longlong)iVar10 * 0x40 + (longlong)FVar13))
    break;
    pFVar11 = *(FSlateBrush **)&this_01[-2].ColorUseRule;
    if ((pFVar11 != (FSlateBrush *)0x0) && ((pFVar11->DrawAs).Value != '\0')) {
      EVar9 = this_01->ColorUseRule;
      pFVar14 = this_01;
      if (EVar9 != UseColor_Specified) {
        if (EVar9 == UseColor_ColorTable) {
          pFVar14 = (FSlateColor *)FSlateColor::GetColorFromTable(this_01);
        }
        else if ((EVar9 == UseColor_Foreground) || (EVar9 != UseColor_Foreground_Subdued)) {
          pFVar14 = (FSlateColor *)&param_6->ForegroundColor;
        }
        else {
          pFVar14 = (FSlateColor *)&param_6->SubduedForeground;
        }
      }
      EVar9 = (pFVar11->TintColor).ColorUseRule;
      this_00 = &pFVar11->TintColor;
      fVar1 = (pFVar14->SpecifiedColor).field0_0x0._s_0.R;
      fVar2 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
      fVar3 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
      fVar4 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
      fVar5 = (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
      fVar6 = (pFVar14->SpecifiedColor).field0_0x0._s_0.G;
      fVar7 = (pFVar14->SpecifiedColor).field0_0x0._s_0.B;
      fVar8 = (pFVar14->SpecifiedColor).field0_0x0._s_0.A;
      if (EVar9 != UseColor_Specified) {
        if (EVar9 == UseColor_ColorTable) {
          this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
        }
        else if ((EVar9 == UseColor_Foreground) || (EVar9 != UseColor_Foreground_Subdued)) {
          this_00 = (FSlateColor *)&param_6->ForegroundColor;
        }
        else {
          this_00 = (FSlateColor *)&param_6->SubduedForeground;
        }
      }
      local_b8 = (param_2->AbsolutePosition).field0_0x0;
      local_a4 = param_2->Size;
      local_d0._s_0.G = fVar2 * fVar6 * (this_00->SpecifiedColor).field0_0x0._s_0.G;
      local_d0._s_0.R = fVar1 * fVar5 * (this_00->SpecifiedColor).field0_0x0._s_0.R;
      local_84 = param_2->bHasRenderTransform * '\x02' | local_84 & 0xfc;
      local_d0._s_0.B = fVar3 * fVar7 * (this_00->SpecifiedColor).field0_0x0._s_0.B;
      local_b0 = param_2->Scale;
      local_d0._s_0.A = (this_00->SpecifiedColor).field0_0x0._s_0.A * fVar4 * fVar8;
      local_9c = (param_2->AccumulatedRenderTransform).M.M[0];
      afStack_94 = (param_2->AccumulatedRenderTransform).M.M[1];
      local_ac = 0;
      local_8c = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
      FSlateDrawElement::MakeBox
                (local_c0,param_5,(FPaintGeometry *)&local_b8._s_0,pFVar11,
                 (ESlateDrawEffect)local_d4,(FLinearColor *)&local_d0._s_0);
    }
    this_01 = (FSlateColor *)(this_01[3].SpecifiedColor.field0_0x0.RGBA + 1);
  }
  return param_5;
}

// RemoveAllLayers @ 1425f7e90

void __thiscall SLayeredImage::RemoveAllLayers(SLayeredImage *this)

{
  int *piVar1;
  ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
  FVar2;
  
  FVar2 = (this->Layers).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                )0x0) {
    FVar2 = (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
             )&this->Layers;
  }
  DestructItems<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>,int>
            ((TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
              *)FVar2,(this->Layers).ArrayNum);
  piVar1 = &(this->Layers).ArrayMax;
  (this->Layers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>_>
              (0x40,8,0,&(this->Layers).AllocatorInstance,0,piVar1);
  }
  SWidget::Invalidate((SWidget *)this,Paint);
  return;
}

// SetFromSlateIcon @ 1425fc790

void __thiscall SLayeredImage::SetFromSlateIcon(SLayeredImage *this,FSlateIcon *param_1)

{
  int *piVar1;
  code *pcVar2;
  ISlateStyle *pIVar3;
  FSlateBrush *pFVar4;
  ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
  FVar5;
  FDestructionSentinel local_58;
  undefined1 local_40 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_30;
  ForAnyElementType FStack_28;
  ulonglong local_20;
  
  FVar5 = (this->Layers).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                )0x0) {
    FVar5 = (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
             )&this->Layers;
  }
  DestructItems<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>,int>
            ((TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
              *)FVar5,(this->Layers).ArrayNum);
  piVar1 = &(this->Layers).ArrayMax;
  (this->Layers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>_>
              (0x40,8,0,&(this->Layers).AllocatorInstance,0,piVar1);
  }
  SWidget::Invalidate((SWidget *)this,Paint);
  local_40._0_8_ = FSlateIcon::GetIcon(param_1);
  local_40[8] = true;
  local_20 = 0;
  local_30.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)this,(TAttribute<FSlateBrush_const_*> *)local_40,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_30,(FWriteAccessScope *)&local_58);
  if (((int)local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    local_20 = local_20 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_30.AccessDetector);
  if ((param_1->StyleSetName != (FName)0x0) &&
     (pIVar3 = FSlateStyleRegistry::FindSlateStyle(&param_1->StyleSetName),
     pIVar3 != (ISlateStyle *)0x0)) {
    pcVar2 = *(code **)((longlong)*pIVar3 + 0x58);
    pFVar4 = FStyleDefaults::GetNoBrush();
    pFVar4 = (FSlateBrush *)(*pcVar2)(pIVar3,param_1->StatusOverlayStyleName,0,pFVar4);
    if (pFVar4 != (FSlateBrush *)0x0) {
      local_40[8] = true;
      local_20 = 0;
      local_30.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_28.Data = (FScriptContainerElement *)0x0;
      local_40._0_8_ = pFVar4;
      AddLayer(this,(TAttribute<FSlateBrush_const_*> *)local_40);
    }
  }
  SWidget::Invalidate((SWidget *)this,Paint);
  return;
}

// SetLayerBrush @ 1425fcbd0

void __thiscall
SLayeredImage::SetLayerBrush
          (SLayeredImage *this,int param_1,TAttribute<FSlateBrush_const_*> *param_2)

{
  void *pvVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
  FVar6;
  int iVar7;
  FSlateBrush *pFVar8;
  TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
  *this_00;
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  if (param_1 == 0) {
    local_38._0_8_ = param_2->Value;
    local_38[8] = param_2->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_2->Getter);
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&this->_padding_,(SWidget *)this,(TAttribute<FSlateBrush_const_*> *)local_38,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    if ((void *)local_28._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
    SWidget::Invalidate((SWidget *)this,Paint);
  }
  else {
    iVar7 = param_1 + -1;
    if ((-1 < iVar7) && (iVar7 < (this->Layers).ArrayNum)) {
      if ((iVar7 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar6 = (this->Layers).AllocatorInstance.SecondaryData;
      if (FVar6 == (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                    )0x0) {
        FVar6 = (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                 )&this->Layers;
      }
      this_00 = (TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                 *)((longlong)iVar7 * 0x40 + (longlong)FVar6);
      pFVar8 = this_00[2].Value;
      if (pFVar8 != (FSlateBrush *)0x0) {
        fVar3 = (pFVar8->TintColor).SpecifiedColor.field0_0x0._s_0.R;
        do {
          if (fVar3 == 0.0) {
            pFVar8 = (FSlateBrush *)0x0;
            goto LAB_1425fccf5;
          }
          LOCK();
          fVar5 = (pFVar8->TintColor).SpecifiedColor.field0_0x0._s_0.R;
          bVar4 = fVar3 == fVar5;
          if (bVar4) {
            (pFVar8->TintColor).SpecifiedColor.field0_0x0._s_0.R = (float)((int)fVar3 + 1);
            fVar5 = fVar3;
          }
          UNLOCK();
          fVar3 = fVar5;
        } while (!bVar4);
        if ((SWidget *)this_00[1].Value != (SWidget *)0x0) {
          SlateAttributePrivate::
          TSlateAttributeBase<SWidget,FSlateBrush_const_*,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
          ::Assign(this_00,(SWidget *)this_00[1].Value,param_2,None);
        }
      }
LAB_1425fccf5:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar8);
      SWidget::Invalidate((SWidget *)this,Paint);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_2->Getter);
  pvVar1 = *(void **)&(param_2->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_2->Getter);
  return;
}

// SetLayerColor @ 1425fcd60

void __thiscall
SLayeredImage::SetLayerColor(SLayeredImage *this,int param_1,TAttribute<FSlateColor> *param_2)

{
  void *pvVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
  FVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong lVar9;
  FLinearColor_u_0 local_38;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_20 [24];
  
  if (param_1 == 0) {
    local_28._0_1_ = (param_2->Value).ColorUseRule;
    local_28._1_1_ = (param_2->Value).ColorTableId;
    local_28._2_2_ = *(undefined2 *)&(param_2->Value).field_0x12;
    local_38._0_8_ = *(undefined8 *)&(param_2->Value).SpecifiedColor.field0_0x0;
    local_38._8_8_ = *(undefined8 *)((longlong)&(param_2->Value).SpecifiedColor.field0_0x0 + 8);
    local_24 = param_2->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_2->Getter);
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&this->_padding_,(SWidget *)this,(TAttribute<FSlateColor> *)&local_38._s_0,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
    if ((void *)local_20._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_20._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_20);
    SWidget::Invalidate((SWidget *)this,Paint);
  }
  else {
    iVar7 = param_1 + -1;
    if ((-1 < iVar7) && (iVar7 < (this->Layers).ArrayNum)) {
      if ((iVar7 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar6 = (this->Layers).AllocatorInstance.SecondaryData;
      if (FVar6 == (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                    )0x0) {
        FVar6 = (ForElementType<TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>_>
                 )&this->Layers;
      }
      lVar9 = (longlong)iVar7 * 0x40 + (longlong)FVar6;
      pTVar8 = *(TReferenceControllerBase<1> **)(lVar9 + 0x38);
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar8->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) {
            pTVar8 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1425fce90;
          }
          LOCK();
          aVar5 = pTVar8->SharedReferenceCount;
          bVar4 = aVar3 == aVar5;
          if (bVar4) {
            pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar5 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar5;
        } while (!bVar4);
        if (*(SWidget **)(lVar9 + 0x30) != (SWidget *)0x0) {
          SlateAttributePrivate::
          TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
          ::Assign((TSlateAttributeBase<SWidget,FSlateColor,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,1>
                    *)(lVar9 + 0x18),*(SWidget **)(lVar9 + 0x30),param_2,None);
        }
      }
LAB_1425fce90:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      SWidget::Invalidate((SWidget *)this,Paint);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_2->Getter);
  pvVar1 = *(void **)&(param_2->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_2->Getter);
  return;
}

