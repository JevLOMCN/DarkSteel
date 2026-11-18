// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 46

// FSnapshotWidgetReflectorNode @ 142e0aef0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSnapshotWidgetReflectorNode * __thiscall
FSnapshotWidgetReflectorNode::FSnapshotWidgetReflectorNode
          (FSnapshotWidgetReflectorNode *this,FArrangedWidget *param_1)

{
  TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  undefined4 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  longlong lVar5;
  undefined8 uVar6;
  FSlateInvalidationWidgetVisibility FVar7;
  undefined1 uVar8;
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar9;
  int iVar10;
  undefined7 extraout_var;
  FString *pFVar11;
  FName FVar12;
  FSlateAttributeMetaData *pFVar13;
  FDeprecateSlateVector2D FVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  TVector2<double>_u_0 TVar20;
  undefined1 local_38 [16];
  ushort local_28;
  undefined6 uStack_26;
  
  this->_padding_ = (longlong)&___7FWidgetReflectorNodeBase__6B_;
  uVar18 = 0;
  lVar5 = *(longlong *)&(param_1->Geometry).Scale;
  this->_padding_ = (longlong)(param_1->Geometry).Size;
  this->_padding_ = lVar5;
  lVar5 = *(longlong *)((longlong)&(param_1->Geometry).Position.field0_0x0 + 4);
  this->_padding_ = *(longlong *)((longlong)&(param_1->Geometry).AbsolutePosition.field0_0x0 + 4);
  this->_padding_ = lVar5;
  lVar5 = *(longlong *)((param_1->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
  this->_padding_ = *(longlong *)((param_1->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
  this->_padding_ = lVar5;
  this->_padding_ =
       *(longlong *)((longlong)&(param_1->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4)
  ;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(FLinearColor_u_0 *)&this->_padding_ = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  TVar1 = ((param_1->Widget).Object)->VisibilityAttribute;
  *(byte *)((longlong)&this->_padding_ + 1) = (byte)TVar1 >> 4 & 1;
  *(byte *)&this->_padding_ = (byte)TVar1 >> 3 & 1;
  this->_padding_ = (longlong)&___7FSnapshotWidgetReflectorNode__6B_;
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  local_38._0_8_ = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38._8_8_ = pTVar3;
  FWidgetReflectorNodeUtils::GetWidgetType
            (&this->CachedWidgetType,(TSharedPtr<SWidget_const_,1> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  local_38._0_8_ = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38._8_8_ = pTVar3;
  FWidgetReflectorNodeUtils::GetWidgetTypeAndShortName
            (&this->CachedWidgetTypeAndShortName,(TSharedPtr<SWidget_const_,1> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  local_38._0_8_ = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38._8_8_ = pTVar3;
  FWidgetReflectorNodeUtils::GetWidgetVisibilityText
            (&this->CachedWidgetVisibilityText,(TSharedPtr<SWidget_const_,1> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar19 = false;
  if (pSVar4 != (SWidget *)0x0) {
    bVar19 = ((byte)pSVar4->VisibilityAttribute & 0x19) != 0;
  }
  this->bCachedWidgetVisible = bVar19;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SWidget *)0x0) {
    bVar19 = false;
  }
  else {
    local_38._0_8_ = (pSVar4->FastPathProxyHandle).InvalidationRootHandle.InvalidationRoot;
    local_38._8_8_ = *(undefined8 *)&(pSVar4->FastPathProxyHandle).InvalidationRootHandle.UniqueId;
    _local_28 = (pSVar4->FastPathProxyHandle).WidgetIndex;
    unique0x0000d404 = (pSVar4->FastPathProxyHandle).WidgetSortOrder.Order;
    FVar7 = FWidgetProxyHandle::GetWidgetVisibility
                      ((FWidgetProxyHandle *)local_38,(SWidget *)&stack0x00000008);
    bVar19 = (*(byte *)CONCAT71(extraout_var,FVar7.field0_0x0) & 3) == 3;
  }
  this->bCachedWidgetVisibleInherited = bVar19;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bCachedSupportsInvalidation = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bCachedSupportsInvalidationRecursive = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SWidget *)0x0) {
    uVar8 = false;
  }
  else {
    uVar8 = (**(code **)(pSVar4->_padding_ + 0x198))();
  }
  this->bCachedWidgetFocusable = (bool)uVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar19 = false;
  if (pSVar4 != (SWidget *)0x0) {
    bVar19 = (bool)(pSVar4->UpdateFlags >> 2 & 1);
  }
  this->bCachedWidgetNeedsTick = bVar19;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar19 = false;
  if (pSVar4 != (SWidget *)0x0) {
    bVar19 = pSVar4->bCachedVolatile;
  }
  this->bCachedWidgetIsVolatile = bVar19;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar19 = false;
  if (pSVar4 != (SWidget *)0x0) {
    bVar19 = pSVar4->bInheritedVolatility;
  }
  this->bCachedWidgetIsVolatileIndirectly = bVar19;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar19 = false;
  if (pSVar4 != (SWidget *)0x0) {
    bVar19 = pSVar4->bHasActiveTimers;
  }
  this->bCachedWidgetHasActiveTimers = bVar19;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SWidget *)0x0) {
    uVar8 = false;
  }
  else {
    uVar8 = (**(code **)(pSVar4->_padding_ + 0x210))();
  }
  this->bCachedWidgetIsInvalidationRoot = (bool)uVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  TVar9 = (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0;
  if (pSVar4 != (SWidget *)0x0) {
    TVar9 = pSVar4->EnabledStateAttribute;
  }
  this->bCachedWidgetEnabled = (bool)TVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  local_38 = *(undefined1 (*) [16])&param_1->Widget;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  FWidgetReflectorNodeUtils::GetWidgetClippingText
            (&this->CachedWidgetClippingText,(TSharedPtr<SWidget_const_,1> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar17 = -1;
  if (pSVar4 == (SWidget *)0x0) {
    iVar10 = -1;
  }
  else {
    iVar10 = (pSVar4->PersistentState).LayerId;
  }
  this->CachedWidgetLayerId = iVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 != (SWidget *)0x0) {
    iVar17 = (pSVar4->PersistentState).OutgoingLayerId;
  }
  this->CachedWidgetLayerIdOut = iVar17;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar11 = FReflectionMetaData::GetWidgetDebugInfo((FString *)local_38,pSVar4);
  FText::FromString(&this->CachedWidgetReadableLocation,pFVar11);
  if ((SWidget *)local_38._0_8_ != (SWidget *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  local_38 = *(undefined1 (*) [16])&param_1->Widget;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  FWidgetReflectorNodeUtils::GetWidgetFile
            (&this->CachedWidgetFile,(TSharedPtr<SWidget_const_,1> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar16 = uVar18;
  if (pSVar4 != (SWidget *)0x0) {
    FVar12 = SWidget::GetCreatedInLocation(pSVar4);
    uVar16 = *(uint *)((longlong)FVar12 + 4);
  }
  this->CachedWidgetLineNumber = uVar16;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar16 = uVar18;
  if ((pSVar4 != (SWidget *)0x0) &&
     (pFVar13 = FSlateAttributeMetaData::FindMetaData(pSVar4),
     pFVar13 != (FSlateAttributeMetaData *)0x0)) {
    uVar16 = (pFVar13->Attributes).ArrayNum;
  }
  this->CachedWidgetAttributeCount = uVar16;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar4 != (SWidget *)0x0) &&
     (pFVar13 = FSlateAttributeMetaData::FindMetaData(pSVar4),
     pFVar13 != (FSlateAttributeMetaData *)0x0)) {
    uVar18 = (uint)pFVar13->AffectVisibilityCounter;
  }
  this->CachedWidgetCollapsedAttributeCount = uVar18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  local_38 = *(undefined1 (*) [16])&param_1->Widget;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  FWidgetReflectorNodeUtils::GetWidgetAssetData
            (&this->CachedWidgetAssetData,(TSharedPtr<SWidget_const_,1> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  TVar20 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  if (pSVar4 != (SWidget *)0x0) {
    FVar14 = SWidget::GetDesiredSize(pSVar4);
    TVar20._0_8_ = (double)(float)*(undefined8 *)FVar14;
    TVar20._8_8_ = (double)(float)((ulonglong)*(undefined8 *)FVar14 >> 0x20);
  }
  local_38._0_8_ = TVar20._s_0.X;
  local_38._8_8_ = TVar20._s_0.Y;
  (this->CachedWidgetDesiredSize).field0_0x0._s_0.X = (double)local_38._0_8_;
  (this->CachedWidgetDesiredSize).field0_0x0._s_0.Y = (double)local_38._8_8_;
  local_38 = (undefined1  [16])TVar20;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (SWidget *)0x0) {
    puVar15 = (undefined8 *)local_38;
    local_38._8_8_ = _UNK_15090c6d8;
    local_38._0_8_ = ___xmm_3f8000003f800000000000003f800000;
    local_28 = 2;
  }
  else {
    puVar15 = (undefined8 *)(**(code **)(pSVar4->_padding_ + 0x1f8))(pSVar4,local_38);
  }
  uVar6 = puVar15[1];
  *(undefined8 *)&(this->CachedWidgetForegroundColor).SpecifiedColor.field0_0x0 = *puVar15;
  *(undefined8 *)((longlong)&(this->CachedWidgetForegroundColor).SpecifiedColor.field0_0x0 + 8) =
       uVar6;
  uVar2 = *(undefined4 *)(puVar15 + 2);
  (this->CachedWidgetForegroundColor).ColorUseRule = (char)uVar2;
  (this->CachedWidgetForegroundColor).ColorTableId = (char)((uint)uVar2 >> 8);
  *(short *)&(this->CachedWidgetForegroundColor).field_0x12 = (short)((uint)uVar2 >> 0x10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->Widget).SharedReferenceCount.ReferenceController;
  pSVar4 = (param_1->Widget).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->CachedWidgetAddress = (ulong64)pSVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// FSnapshotWidgetReflectorNode @ 142e0b490

FSnapshotWidgetReflectorNode * __thiscall
FSnapshotWidgetReflectorNode::FSnapshotWidgetReflectorNode(FSnapshotWidgetReflectorNode *this)

{
  FLinearColor FVar1;
  
  this->_padding_ = (longlong)&___7FWidgetReflectorNodeBase__6B_;
  FGeometry::FGeometry((FGeometry *)&this->_padding_);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FVar1 = FLinearColor::White;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  this->_padding_ = (longlong)&___7FSnapshotWidgetReflectorNode__6B_;
  *(FLinearColor_u_0 *)&this->_padding_ = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FText::FText(&this->CachedWidgetType);
  FText::FText(&this->CachedWidgetTypeAndShortName);
  FText::FText(&this->CachedWidgetVisibilityText);
  this->bCachedWidgetEnabled = false;
  FText::FText(&this->CachedWidgetClippingText);
  FText::FText(&this->CachedWidgetReadableLocation);
  (this->CachedWidgetFile).Data.ArrayNum = 0;
  (this->CachedWidgetFile).Data.ArrayMax = 0;
  this->CachedWidgetLineNumber = 0;
  this->CachedWidgetAttributeCount = 0;
  this->CachedWidgetCollapsedAttributeCount = 0;
  (this->CachedWidgetAssetData).PackageName.ComparisonIndex = 0;
  (this->CachedWidgetAssetData).PackageName.Number = 0;
  (this->CachedWidgetAssetData).PackagePath.ComparisonIndex = 0;
  (this->CachedWidgetAssetData).PackagePath.Number = 0;
  (this->CachedWidgetAssetData).AssetName.ComparisonIndex = 0;
  (this->CachedWidgetAssetData).AssetName.Number = 0;
  (this->CachedWidgetAssetData).AssetClass.ComparisonIndex = 0;
  (this->CachedWidgetAssetData).AssetClass.Number = 0;
  (this->CachedWidgetAssetData).AssetClassPath.PackageName.ComparisonIndex = 0;
  (this->CachedWidgetAssetData).AssetClassPath.PackageName.Number = 0;
  (this->CachedWidgetAssetData).AssetClassPath.AssetName.ComparisonIndex = 0;
  (this->CachedWidgetAssetData).AssetClassPath.AssetName.Number = 0;
  (this->CachedWidgetAssetData).ChunkArrayRegistryHandle.Index = -1;
  (this->CachedWidgetAssetData).PackageFlags = 0;
  (this->CachedWidgetAssetData).TagsAndValues.field0_0x0.Loose = (FAssetDataTagMap *)0x0;
  (this->CachedWidgetFile).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedWidgetAssetData).TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  (this->CachedWidgetAssetData).TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedWidgetAssetData).ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->CachedWidgetAssetData).ChunkIDs.ArrayNum = 0;
  (this->CachedWidgetAssetData).ChunkIDs.ArrayMax = 2;
  *(undefined8 *)&(this->CachedWidgetForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->CachedWidgetForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->CachedWidgetForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->CachedWidgetForegroundColor).ColorUseRule = UseColor_Specified;
  return this;
}

// ~FSnapshotWidgetReflectorNode @ 142e142f0

void __thiscall
FSnapshotWidgetReflectorNode::~FSnapshotWidgetReflectorNode(FSnapshotWidgetReflectorNode *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<int> FVar3;
  FScriptContainerElement *pFVar4;
  ITextData *pIVar5;
  longlong *plVar6;
  
  this->_padding_ = (longlong)&___7FSnapshotWidgetReflectorNode__6B_;
  FVar3 = (this->CachedWidgetAssetData).ChunkIDs.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedWidgetAssetData).TaggedAssetBundles.SharedReferenceCount.
             ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            (&(this->CachedWidgetAssetData).TagsAndValues);
  pFVar4 = (this->CachedWidgetFile).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pIVar5 = (this->CachedWidgetReadableLocation).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  pIVar5 = (this->CachedWidgetClippingText).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  pIVar5 = (this->CachedWidgetVisibilityText).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  pIVar5 = (this->CachedWidgetTypeAndShortName).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  pIVar5 = (this->CachedWidgetType).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FWidgetReflectorNodeBase__6B_;
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// Create @ 142e553f0

TSharedRef<FSnapshotWidgetReflectorNode,1> * __cdecl
FSnapshotWidgetReflectorNode::Create
          (TSharedRef<FSnapshotWidgetReflectorNode,1> *__return_storage_ptr__,
          FArrangedWidget *param_1)

{
  FSnapshotWidgetReflectorNode *this;
  TRawPtrProxy<FSnapshotWidgetReflectorNode> local_res8;
  
  this = ::operator_new(0x198);
  local_res8.Object = (FSnapshotWidgetReflectorNode *)0x0;
  if (this != (FSnapshotWidgetReflectorNode *)0x0) {
    local_res8.Object = FSnapshotWidgetReflectorNode(this,param_1);
  }
  TSharedRef<FSnapshotWidgetReflectorNode,1>::
  TSharedRef<FSnapshotWidgetReflectorNode,1><FSnapshotWidgetReflectorNode>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// Create @ 142e55440

TSharedRef<FSnapshotWidgetReflectorNode,1> * __cdecl
FSnapshotWidgetReflectorNode::Create
          (TSharedRef<FSnapshotWidgetReflectorNode,1> *__return_storage_ptr__)

{
  FLinearColor FVar1;
  TRawPtrProxy<FSnapshotWidgetReflectorNode> local_res8;
  
  local_res8.Object = ::operator_new(0x198);
  if (local_res8.Object == (FSnapshotWidgetReflectorNode *)0x0) {
    local_res8.Object = (FSnapshotWidgetReflectorNode *)0x0;
  }
  else {
    (local_res8.Object)->_padding_ = (longlong)&___7FWidgetReflectorNodeBase__6B_;
    FGeometry::FGeometry((FGeometry *)&(local_res8.Object)->_padding_);
    (local_res8.Object)->_padding_ = 0;
    (local_res8.Object)->_padding_ = 0;
    (local_res8.Object)->_padding_ = 0;
    (local_res8.Object)->_padding_ = 0;
    FVar1 = FLinearColor::White;
    *(undefined2 *)&(local_res8.Object)->_padding_ = 0;
    (local_res8.Object)->_padding_ = (longlong)&___7FSnapshotWidgetReflectorNode__6B_;
    *(FLinearColor_u_0 *)&(local_res8.Object)->_padding_ = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
    FText::FText(&(local_res8.Object)->CachedWidgetType);
    FText::FText(&(local_res8.Object)->CachedWidgetTypeAndShortName);
    FText::FText(&(local_res8.Object)->CachedWidgetVisibilityText);
    (local_res8.Object)->bCachedWidgetEnabled = false;
    FText::FText(&(local_res8.Object)->CachedWidgetClippingText);
    FText::FText(&(local_res8.Object)->CachedWidgetReadableLocation);
    ((local_res8.Object)->CachedWidgetFile).Data.ArrayNum = 0;
    ((local_res8.Object)->CachedWidgetFile).Data.ArrayMax = 0;
    (local_res8.Object)->CachedWidgetLineNumber = 0;
    (local_res8.Object)->CachedWidgetAttributeCount = 0;
    (local_res8.Object)->CachedWidgetCollapsedAttributeCount = 0;
    ((local_res8.Object)->CachedWidgetAssetData).PackageName.ComparisonIndex = 0;
    ((local_res8.Object)->CachedWidgetAssetData).PackageName.Number = 0;
    ((local_res8.Object)->CachedWidgetAssetData).PackagePath.ComparisonIndex = 0;
    ((local_res8.Object)->CachedWidgetAssetData).PackagePath.Number = 0;
    ((local_res8.Object)->CachedWidgetAssetData).AssetName.ComparisonIndex = 0;
    ((local_res8.Object)->CachedWidgetAssetData).AssetName.Number = 0;
    ((local_res8.Object)->CachedWidgetAssetData).AssetClass.ComparisonIndex = 0;
    ((local_res8.Object)->CachedWidgetAssetData).AssetClass.Number = 0;
    ((local_res8.Object)->CachedWidgetAssetData).AssetClassPath.PackageName.ComparisonIndex = 0;
    ((local_res8.Object)->CachedWidgetAssetData).AssetClassPath.PackageName.Number = 0;
    ((local_res8.Object)->CachedWidgetAssetData).AssetClassPath.AssetName.ComparisonIndex = 0;
    ((local_res8.Object)->CachedWidgetAssetData).AssetClassPath.AssetName.Number = 0;
    ((local_res8.Object)->CachedWidgetAssetData).ChunkArrayRegistryHandle.Index = -1;
    ((local_res8.Object)->CachedWidgetAssetData).PackageFlags = 0;
    ((local_res8.Object)->CachedWidgetAssetData).TagsAndValues.field0_0x0.Loose =
         (FAssetDataTagMap *)0x0;
    ((local_res8.Object)->CachedWidgetFile).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    ((local_res8.Object)->CachedWidgetAssetData).TaggedAssetBundles.Object = (FAssetBundleData *)0x0
    ;
    ((local_res8.Object)->CachedWidgetAssetData).TaggedAssetBundles.SharedReferenceCount.
    ReferenceController = (TReferenceControllerBase<1> *)0x0;
    ((local_res8.Object)->CachedWidgetAssetData).ChunkIDs.AllocatorInstance.SecondaryData =
         (ForElementType<int>)0x0;
    ((local_res8.Object)->CachedWidgetAssetData).ChunkIDs.ArrayNum = 0;
    ((local_res8.Object)->CachedWidgetAssetData).ChunkIDs.ArrayMax = 2;
    *(undefined8 *)&((local_res8.Object)->CachedWidgetForegroundColor).SpecifiedColor.field0_0x0 =
         0x3f800000;
    ((local_res8.Object)->CachedWidgetForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
    ((local_res8.Object)->CachedWidgetForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
    ((local_res8.Object)->CachedWidgetForegroundColor).ColorUseRule = UseColor_Specified;
  }
  TSharedRef<FSnapshotWidgetReflectorNode,1>::
  TSharedRef<FSnapshotWidgetReflectorNode,1><FSnapshotWidgetReflectorNode>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// CreateLinearColorJsonValue @ 142e6c860

TSharedRef<FJsonValue,1> * __cdecl
`FSnapshotWidgetReflectorNode::ToJson'::__l2::Internal::CreateLinearColorJsonValue
          (TSharedRef<FJsonValue,1> *__return_storage_ptr__,FLinearColor *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FJsonValueNumber *pFVar4;
  TSharedRef<FJsonValue,1> *pTVar5;
  FJsonValueArray *this;
  FJsonValueArray *pFVar6;
  TRawPtrProxy<FJsonValueNumber> local_res8;
  TRawPtrProxy<FJsonValueNumber> local_res18;
  TRawPtrProxy<FJsonValueNumber> local_res20;
  TRawPtrProxy<FJsonValueNumber> local_78;
  TRawPtrProxy<FJsonValueArray> local_70;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FJsonValue,1> local_58;
  TSharedPtr<FJsonValue,1> local_48;
  TSharedPtr<FJsonValue,1> local_38;
  TSharedPtr<FJsonValue,1> local_28;
  
  pFVar6 = (FJsonValueArray *)0x0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  pFVar4 = ::operator_new(0x18);
  local_res8.Object = (FJsonValueNumber *)pFVar6;
  if (pFVar4 != (FJsonValueNumber *)0x0) {
    local_res8.Object =
         FJsonValueNumber::FJsonValueNumber(pFVar4,(double)(param_1->field0_0x0)._s_0.R);
  }
  TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueNumber>(&local_58,&local_res8);
  if (((local_68.AllocatorInstance.Data <= &local_58) &&
      (&local_58 <
       (TSharedPtr<FJsonValue,1> *)
       (local_68.AllocatorInstance.Data + (longlong)local_68.ArrayMax * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FJsonValue,1> *)(*pcVar1)();
    return pTVar5;
  }
  iVar3 = local_68.ArrayNum;
  if (local_68.ArrayNum == local_68.ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_68.AllocatorInstance,&local_68.ArrayMax);
  }
  local_68.ArrayNum = iVar3 + 1;
  *(FJsonValue **)&local_68.AllocatorInstance.Data[(longlong)iVar3 * 0x10].field_0x0 =
       local_58.Object;
  *(TReferenceControllerBase<1> **)(local_68.AllocatorInstance.Data + (longlong)iVar3 * 0x10 + 8) =
       local_58.SharedReferenceCount.ReferenceController;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_58.Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar4 = ::operator_new(0x18);
  local_res18.Object = (FJsonValueNumber *)pFVar6;
  if (pFVar4 != (FJsonValueNumber *)0x0) {
    local_res18.Object =
         FJsonValueNumber::FJsonValueNumber(pFVar4,(double)(param_1->field0_0x0)._s_0.G);
  }
  TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueNumber>(&local_48,&local_res18);
  if (((local_68.AllocatorInstance.Data <= &local_48) &&
      (&local_48 <
       (TSharedPtr<FJsonValue,1> *)
       (local_68.AllocatorInstance.Data + (longlong)local_68.ArrayMax * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FJsonValue,1> *)(*pcVar1)();
    return pTVar5;
  }
  iVar3 = local_68.ArrayNum;
  if (local_68.ArrayNum == local_68.ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_68.AllocatorInstance,&local_68.ArrayMax);
  }
  local_68.ArrayNum = iVar3 + 1;
  *(FJsonValue **)&local_68.AllocatorInstance.Data[(longlong)iVar3 * 0x10].field_0x0 =
       local_48.Object;
  *(TReferenceControllerBase<1> **)(local_68.AllocatorInstance.Data + (longlong)iVar3 * 0x10 + 8) =
       local_48.SharedReferenceCount.ReferenceController;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_48.Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar4 = ::operator_new(0x18);
  local_res20.Object = (FJsonValueNumber *)pFVar6;
  if (pFVar4 != (FJsonValueNumber *)0x0) {
    local_res20.Object =
         FJsonValueNumber::FJsonValueNumber(pFVar4,(double)(param_1->field0_0x0)._s_0.B);
  }
  TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueNumber>(&local_38,&local_res20);
  if (((local_68.AllocatorInstance.Data <= &local_38) &&
      (&local_38 <
       (TSharedPtr<FJsonValue,1> *)
       (local_68.AllocatorInstance.Data + (longlong)local_68.ArrayMax * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FJsonValue,1> *)(*pcVar1)();
    return pTVar5;
  }
  iVar3 = local_68.ArrayNum;
  if (local_68.ArrayNum == local_68.ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_68.AllocatorInstance,&local_68.ArrayMax);
  }
  local_68.ArrayNum = iVar3 + 1;
  *(FJsonValue **)&local_68.AllocatorInstance.Data[(longlong)iVar3 * 0x10].field_0x0 =
       local_38.Object;
  *(TReferenceControllerBase<1> **)(local_68.AllocatorInstance.Data + (longlong)iVar3 * 0x10 + 8) =
       local_38.SharedReferenceCount.ReferenceController;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_38.Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar4 = ::operator_new(0x18);
  local_78.Object = (FJsonValueNumber *)pFVar6;
  if (pFVar4 != (FJsonValueNumber *)0x0) {
    local_78.Object =
         FJsonValueNumber::FJsonValueNumber(pFVar4,(double)(param_1->field0_0x0)._s_0.A);
  }
  TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueNumber>(&local_28,&local_78);
  if (((local_68.AllocatorInstance.Data <= &local_28) &&
      (&local_28 <
       (TSharedPtr<FJsonValue,1> *)
       (local_68.AllocatorInstance.Data + (longlong)local_68.ArrayMax * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FJsonValue,1> *)(*pcVar1)();
    return pTVar5;
  }
  iVar3 = local_68.ArrayNum;
  if (local_68.ArrayNum == local_68.ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_68.AllocatorInstance,&local_68.ArrayMax);
  }
  local_68.ArrayNum = iVar3 + 1;
  *(FJsonValue **)&local_68.AllocatorInstance.Data[(longlong)iVar3 * 0x10].field_0x0 =
       local_28.Object;
  *(TReferenceControllerBase<1> **)(local_68.AllocatorInstance.Data + (longlong)iVar3 * 0x10 + 8) =
       local_28.SharedReferenceCount.ReferenceController;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_28.Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this = ::operator_new(0x20);
  if (this != (FJsonValueArray *)0x0) {
    pFVar6 = FJsonValueArray::FJsonValueArray(this,&local_68);
  }
  local_70.Object = pFVar6;
  TSharedRef<FJsonValue,1>::TSharedRef<FJsonValue,1><FJsonValueArray>
            (__return_storage_ptr__,&local_70);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_68.AllocatorInstance.Data != (TSharedPtr<FJsonValue,1> *)0x0
     ) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateMatrix2x2JsonValue @ 142e6ccb0

TSharedRef<FJsonValue,1> * __cdecl
`FSnapshotWidgetReflectorNode::ToJson'::__l2::Internal::CreateMatrix2x2JsonValue
          (TSharedRef<FJsonValue,1> *__return_storage_ptr__,TMatrix2x2<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FJsonValueNumber *pFVar8;
  TSharedRef<FJsonValue,1> *pTVar9;
  FJsonValueArray *this;
  FJsonValueArray *pFVar10;
  TRawPtrProxy<FJsonValueNumber> local_res8;
  TRawPtrProxy<FJsonValueNumber> local_res10;
  TRawPtrProxy<FJsonValueNumber> local_res18;
  TRawPtrProxy<FJsonValueNumber> local_res20;
  TRawPtrProxy<FJsonValueArray> local_c8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_c0;
  TSharedPtr<FJsonValue,1> local_b0;
  TSharedPtr<FJsonValue,1> local_a0;
  TSharedPtr<FJsonValue,1> local_90;
  TSharedPtr<FJsonValue,1> local_80 [6];
  
  pFVar10 = (FJsonValueArray *)0x0;
  fVar1 = param_1->M[0][0];
  fVar2 = param_1->M[0][1];
  fVar3 = param_1->M[1][0];
  fVar4 = param_1->M[1][1];
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  pFVar8 = ::operator_new(0x18);
  local_res8.Object = (FJsonValueNumber *)pFVar10;
  if (pFVar8 != (FJsonValueNumber *)0x0) {
    local_res8.Object = FJsonValueNumber::FJsonValueNumber(pFVar8,(double)fVar1);
  }
  TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueNumber>(&local_b0,&local_res8);
  if (((local_c0.AllocatorInstance.Data <= &local_b0) &&
      (&local_b0 <
       (TSharedPtr<FJsonValue,1> *)
       (local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayMax * 0x10))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedRef<FJsonValue,1> *)(*pcVar5)();
    return pTVar9;
  }
  iVar7 = local_c0.ArrayNum;
  if (local_c0.ArrayNum == local_c0.ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
  }
  local_c0.ArrayNum = iVar7 + 1;
  *(FJsonValue **)&local_c0.AllocatorInstance.Data[(longlong)iVar7 * 0x10].field_0x0 =
       local_b0.Object;
  *(TReferenceControllerBase<1> **)(local_c0.AllocatorInstance.Data + (longlong)iVar7 * 0x10 + 8) =
       local_b0.SharedReferenceCount.ReferenceController;
  local_b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b0.Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar8 = ::operator_new(0x18);
  local_res10.Object = (FJsonValueNumber *)pFVar10;
  if (pFVar8 != (FJsonValueNumber *)0x0) {
    local_res10.Object = FJsonValueNumber::FJsonValueNumber(pFVar8,(double)fVar2);
  }
  TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueNumber>(&local_a0,&local_res10);
  if (((local_c0.AllocatorInstance.Data <= &local_a0) &&
      (&local_a0 <
       (TSharedPtr<FJsonValue,1> *)
       (local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayMax * 0x10))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedRef<FJsonValue,1> *)(*pcVar5)();
    return pTVar9;
  }
  iVar7 = local_c0.ArrayNum;
  if (local_c0.ArrayNum == local_c0.ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
  }
  local_c0.ArrayNum = iVar7 + 1;
  *(FJsonValue **)&local_c0.AllocatorInstance.Data[(longlong)iVar7 * 0x10].field_0x0 =
       local_a0.Object;
  *(TReferenceControllerBase<1> **)(local_c0.AllocatorInstance.Data + (longlong)iVar7 * 0x10 + 8) =
       local_a0.SharedReferenceCount.ReferenceController;
  local_a0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_a0.Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar8 = ::operator_new(0x18);
  local_res18.Object = (FJsonValueNumber *)pFVar10;
  if (pFVar8 != (FJsonValueNumber *)0x0) {
    local_res18.Object = FJsonValueNumber::FJsonValueNumber(pFVar8,(double)fVar3);
  }
  TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueNumber>(&local_90,&local_res18);
  if (((local_c0.AllocatorInstance.Data <= &local_90) &&
      (&local_90 <
       (TSharedPtr<FJsonValue,1> *)
       (local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayMax * 0x10))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedRef<FJsonValue,1> *)(*pcVar5)();
    return pTVar9;
  }
  iVar7 = local_c0.ArrayNum;
  if (local_c0.ArrayNum == local_c0.ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
  }
  local_c0.ArrayNum = iVar7 + 1;
  *(FJsonValue **)&local_c0.AllocatorInstance.Data[(longlong)iVar7 * 0x10].field_0x0 =
       local_90.Object;
  *(TReferenceControllerBase<1> **)(local_c0.AllocatorInstance.Data + (longlong)iVar7 * 0x10 + 8) =
       local_90.SharedReferenceCount.ReferenceController;
  local_90.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_90.Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar8 = ::operator_new(0x18);
  local_res20.Object = (FJsonValueNumber *)pFVar10;
  if (pFVar8 != (FJsonValueNumber *)0x0) {
    local_res20.Object = FJsonValueNumber::FJsonValueNumber(pFVar8,(double)fVar4);
  }
  TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueNumber>(local_80,&local_res20);
  if (((local_c0.AllocatorInstance.Data <= local_80) &&
      (local_80 <
       (TSharedPtr<FJsonValue,1> *)
       (local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayMax * 0x10))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedRef<FJsonValue,1> *)(*pcVar5)();
    return pTVar9;
  }
  iVar7 = local_c0.ArrayNum;
  if (local_c0.ArrayNum == local_c0.ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
  }
  local_c0.ArrayNum = iVar7 + 1;
  *(FJsonValue **)&local_c0.AllocatorInstance.Data[(longlong)iVar7 * 0x10].field_0x0 =
       local_80[0].Object;
  *(TReferenceControllerBase<1> **)(local_c0.AllocatorInstance.Data + (longlong)iVar7 * 0x10 + 8) =
       local_80[0].SharedReferenceCount.ReferenceController;
  local_80[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_80[0].Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this = ::operator_new(0x20);
  if (this != (FJsonValueArray *)0x0) {
    pFVar10 = FJsonValueArray::FJsonValueArray(this,&local_c0);
  }
  local_c8.Object = pFVar10;
  TSharedRef<FJsonValue,1>::TSharedRef<FJsonValue,1><FJsonValueArray>
            (__return_storage_ptr__,&local_c8);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_c0.AllocatorInstance.Data != (TSharedPtr<FJsonValue,1> *)0x0
     ) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateSlateColorJsonValue @ 142e6d190

TSharedRef<FJsonValue,1> * __cdecl
`FSnapshotWidgetReflectorNode::ToJson'::__l2::Internal::CreateSlateColorJsonValue
          (TSharedRef<FJsonValue,1> *__return_storage_ptr__,FSlateColor *param_1)

{
  ESlateColorStylingMode EVar1;
  FJsonObject *this;
  TReferenceControllerBase<1> *pTVar2;
  FLinearColor *pFVar3;
  FLinearColor_u_0 *pFVar4;
  FJsonValueObject *pFVar5;
  TSharedRef<FJsonValue,1> *pTVar6;
  FJsonValueObject *pFVar7;
  bool bVar8;
  TRawPtrProxy<FJsonValueObject> local_res8;
  TSharedPtr<FJsonValue,1> local_58;
  FLinearColor_u_0 local_48;
  FLinearColor_u_0 local_38;
  FLinearColor_u_0 local_28;
  TSharedRef<FJsonValue,1> local_18;
  
  EVar1 = param_1->ColorUseRule;
  if ((EVar1 == UseColor_Specified) || (EVar1 == UseColor_ColorTable)) {
    bVar8 = true;
    if (EVar1 == UseColor_ColorTable) {
      pFVar3 = FSlateColor::GetColorFromTable(param_1);
      local_48._s_0.R = (pFVar3->field0_0x0)._s_0.R;
      local_48._s_0.G = (pFVar3->field0_0x0)._s_0.G;
      local_48._s_0.B = (pFVar3->field0_0x0)._s_0.B;
      local_48._s_0.A = (pFVar3->field0_0x0)._s_0.A;
    }
    else {
      local_48._s_0.R = (param_1->SpecifiedColor).field0_0x0._s_0.R;
      local_48._s_0.G = (param_1->SpecifiedColor).field0_0x0._s_0.G;
      local_48._s_0.B = (param_1->SpecifiedColor).field0_0x0._s_0.B;
      local_48._s_0.A = (param_1->SpecifiedColor).field0_0x0._s_0.A;
    }
    pFVar4 = &local_48;
  }
  else {
    bVar8 = false;
    pFVar4 = &local_38;
    local_38 = FLinearColor::White.field0_0x0;
  }
  local_28._0_8_ = *(undefined8 *)pFVar4;
  local_28._8_8_ = *(undefined8 *)((longlong)pFVar4 + 8);
  pFVar5 = ::operator_new(0x50);
  pFVar7 = (FJsonValueObject *)0x0;
  local_res8.Object = pFVar7;
  if (pFVar5 != (FJsonValueObject *)0x0) {
    (pFVar5->Value).Object = (FJsonObject *)0x0;
    (pFVar5->Value).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar5[1].Value.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar5[2]._padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5[1]._padding_ = 0;
    *(undefined4 *)&pFVar5[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar5[1].Value.Object = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar5[1].Value.Object + 4) = 0;
    pFVar5[2]._padding_ = 0;
    local_res8.Object = pFVar5;
  }
  TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>
            ((TSharedRef<FJsonObject,1> *)&local_48._s_0,(TRawPtrProxy<FJsonObject> *)&local_res8);
  ::FString::FString((FString *)&local_58,L"IsColorSpecified");
  this = (FJsonObject *)CONCAT44(local_48._s_0.G,local_48._s_0.R);
  FJsonObject::SetBoolField(this,(FString *)&local_58,bVar8);
  if (local_58.Object != (FJsonValue *)0x0) {
    FMemory::Free(local_58.Object);
  }
  pTVar6 = CreateLinearColorJsonValue(&local_18,(FLinearColor *)&local_28._s_0);
  local_58.Object = pTVar6->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString((FString *)&local_38._s_0,L"Color");
  FJsonObject::SetField(this,(FString *)&local_38._s_0,&local_58);
  if ((void *)local_38._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  pFVar5 = ::operator_new(0x20);
  pTVar2 = (TReferenceControllerBase<1> *)CONCAT44(local_48._s_0.A,local_48._s_0.B);
  if (pFVar5 != (FJsonValueObject *)0x0) {
    local_18.Object = (FJsonValue *)CONCAT44(local_48._s_0.G,local_48._s_0.R);
    local_18.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)CONCAT44(local_48._s_0.A,local_48._s_0.B);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar7 = FJsonValueObject::FJsonValueObject(pFVar5,(TSharedPtr<FJsonObject,1> *)&local_18);
  }
  local_res8.Object = pFVar7;
  TSharedRef<FJsonValue,1>::TSharedRef<FJsonValue,1><FJsonValueObject>
            (__return_storage_ptr__,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// CreateSlateRenderTransformJsonValue @ 142e6d350

TSharedRef<FJsonValue,1> * __cdecl
`FSnapshotWidgetReflectorNode::ToJson'::__l2::Internal::CreateSlateRenderTransformJsonValue
          (TSharedRef<FJsonValue,1> *__return_storage_ptr__,TTransform2<float> *param_1)

{
  FJsonObject *this;
  FJsonValueObject *pFVar1;
  TSharedRef<FJsonValue,1> *pTVar2;
  FJsonValueObject *pFVar3;
  TRawPtrProxy<FJsonValueObject> local_res8;
  TSharedPtr<FJsonValue,1> local_68;
  TSharedRef<FJsonObject,1> local_58;
  TVector2<double>_u_0 local_48;
  TSharedRef<FJsonValue,1> local_38;
  TSharedRef<FJsonValue,1> local_28;
  
  pFVar1 = ::operator_new(0x50);
  pFVar3 = (FJsonValueObject *)0x0;
  local_res8.Object = pFVar3;
  if (pFVar1 != (FJsonValueObject *)0x0) {
    (pFVar1->Value).Object = (FJsonObject *)0x0;
    (pFVar1->Value).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar1[1].Value.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar1[2]._padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1[1]._padding_ = 0;
    *(undefined4 *)&pFVar1[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pFVar1[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar1[1].Value.Object = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar1[1].Value.Object + 4) = 0;
    pFVar1[2]._padding_ = 0;
    local_res8.Object = pFVar1;
  }
  TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>
            (&local_58,(TRawPtrProxy<FJsonObject> *)&local_res8);
  pTVar2 = CreateMatrix2x2JsonValue(&local_38,&param_1->M);
  local_68.Object = pTVar2->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar2->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString((FString *)&local_48._s_0,L"Matrix");
  this = local_58.Object;
  FJsonObject::SetField(local_58.Object,(FString *)&local_48._s_0,&local_68);
  if ((void *)local_48._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_48._s_0.X);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  local_48._s_0.X = (double)(param_1->Trans).field0_0x0._s_0.X;
  local_48._s_0.Y = (double)(param_1->Trans).field0_0x0._s_0.Y;
  pTVar2 = CreateVector2DJsonValue(&local_28,(TVector2<double> *)&local_48._s_0);
  local_68.Object = pTVar2->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (pTVar2->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString((FString *)&local_38,L"Translation");
  FJsonObject::SetField(this,(FString *)&local_38,&local_68);
  if (local_38.Object != (FJsonValue *)0x0) {
    FMemory::Free(local_38.Object);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pFVar1 = ::operator_new(0x20);
  if (pFVar1 != (FJsonValueObject *)0x0) {
    local_28.Object = (FJsonValue *)local_58.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar3 = FJsonValueObject::FJsonValueObject(pFVar1,(TSharedPtr<FJsonObject,1> *)&local_28);
  }
  local_res8.Object = pFVar3;
  TSharedRef<FJsonValue,1>::TSharedRef<FJsonValue,1><FJsonValueObject>
            (__return_storage_ptr__,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateVector2DJsonValue @ 142e6dca0

TSharedRef<FJsonValue,1> * __cdecl
`FSnapshotWidgetReflectorNode::ToJson'::__l2::Internal::CreateVector2DJsonValue
          (TSharedRef<FJsonValue,1> *__return_storage_ptr__,TVector2<float> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FJsonValueNumber *pFVar4;
  TSharedRef<FJsonValue,1> *pTVar5;
  FJsonValueArray *this;
  FJsonValueArray *pFVar6;
  TRawPtrProxy<FJsonValueNumber> local_res8;
  TRawPtrProxy<FJsonValueNumber> local_res18;
  TRawPtrProxy<FJsonValueArray> local_res20;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_48;
  TSharedPtr<FJsonValue,1> local_38;
  TSharedPtr<FJsonValue,1> local_28;
  
  pFVar6 = (FJsonValueArray *)0x0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pFVar4 = ::operator_new(0x18);
  local_res8.Object = (FJsonValueNumber *)pFVar6;
  if (pFVar4 != (FJsonValueNumber *)0x0) {
    local_res8.Object =
         FJsonValueNumber::FJsonValueNumber(pFVar4,(double)(param_1->field0_0x0)._s_0.X);
  }
  TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueNumber>(&local_38,&local_res8);
  if (((local_48.AllocatorInstance.Data <= &local_38) &&
      (&local_38 <
       (TSharedPtr<FJsonValue,1> *)
       (local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FJsonValue,1> *)(*pcVar1)();
    return pTVar5;
  }
  iVar3 = local_48.ArrayNum;
  if (local_48.ArrayNum == local_48.ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
  }
  local_48.ArrayNum = iVar3 + 1;
  *(FJsonValue **)&local_48.AllocatorInstance.Data[(longlong)iVar3 * 0x10].field_0x0 =
       local_38.Object;
  *(TReferenceControllerBase<1> **)(local_48.AllocatorInstance.Data + (longlong)iVar3 * 0x10 + 8) =
       local_38.SharedReferenceCount.ReferenceController;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_38.Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar4 = ::operator_new(0x18);
  local_res18.Object = (FJsonValueNumber *)pFVar6;
  if (pFVar4 != (FJsonValueNumber *)0x0) {
    local_res18.Object =
         FJsonValueNumber::FJsonValueNumber(pFVar4,(double)(param_1->field0_0x0)._s_0.Y);
  }
  TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueNumber>(&local_28,&local_res18);
  if (((local_48.AllocatorInstance.Data <= &local_28) &&
      (&local_28 <
       (TSharedPtr<FJsonValue,1> *)
       (local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FJsonValue,1> *)(*pcVar1)();
    return pTVar5;
  }
  iVar3 = local_48.ArrayNum;
  if (local_48.ArrayNum == local_48.ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
  }
  local_48.ArrayNum = iVar3 + 1;
  *(FJsonValue **)&local_48.AllocatorInstance.Data[(longlong)iVar3 * 0x10].field_0x0 =
       local_28.Object;
  *(TReferenceControllerBase<1> **)(local_48.AllocatorInstance.Data + (longlong)iVar3 * 0x10 + 8) =
       local_28.SharedReferenceCount.ReferenceController;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_28.Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this = ::operator_new(0x20);
  if (this != (FJsonValueArray *)0x0) {
    pFVar6 = FJsonValueArray::FJsonValueArray(this,&local_48);
  }
  local_res20.Object = pFVar6;
  TSharedRef<FJsonValue,1>::TSharedRef<FJsonValue,1><FJsonValueArray>
            (__return_storage_ptr__,&local_res20);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_48.AllocatorInstance.Data != (TSharedPtr<FJsonValue,1> *)0x0
     ) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateVector2DJsonValue @ 142e6df10

TSharedRef<FJsonValue,1> * __cdecl
`FSnapshotWidgetReflectorNode::ToJson'::__l2::Internal::CreateVector2DJsonValue
          (TSharedRef<FJsonValue,1> *__return_storage_ptr__,TVector2<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FJsonValueNumber *pFVar4;
  TSharedRef<FJsonValue,1> *pTVar5;
  FJsonValueArray *this;
  FJsonValueArray *pFVar6;
  TRawPtrProxy<FJsonValueNumber> local_res8;
  TRawPtrProxy<FJsonValueNumber> local_res18;
  TRawPtrProxy<FJsonValueArray> local_res20;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_48;
  TSharedPtr<FJsonValue,1> local_38;
  TSharedPtr<FJsonValue,1> local_28;
  
  pFVar6 = (FJsonValueArray *)0x0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pFVar4 = ::operator_new(0x18);
  local_res8.Object = (FJsonValueNumber *)pFVar6;
  if (pFVar4 != (FJsonValueNumber *)0x0) {
    local_res8.Object = FJsonValueNumber::FJsonValueNumber(pFVar4,(param_1->field0_0x0)._s_0.X);
  }
  TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueNumber>(&local_38,&local_res8);
  if (((local_48.AllocatorInstance.Data <= &local_38) &&
      (&local_38 <
       (TSharedPtr<FJsonValue,1> *)
       (local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FJsonValue,1> *)(*pcVar1)();
    return pTVar5;
  }
  iVar3 = local_48.ArrayNum;
  if (local_48.ArrayNum == local_48.ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
  }
  local_48.ArrayNum = iVar3 + 1;
  *(FJsonValue **)&local_48.AllocatorInstance.Data[(longlong)iVar3 * 0x10].field_0x0 =
       local_38.Object;
  *(TReferenceControllerBase<1> **)(local_48.AllocatorInstance.Data + (longlong)iVar3 * 0x10 + 8) =
       local_38.SharedReferenceCount.ReferenceController;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_38.Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar4 = ::operator_new(0x18);
  local_res18.Object = (FJsonValueNumber *)pFVar6;
  if (pFVar4 != (FJsonValueNumber *)0x0) {
    local_res18.Object = FJsonValueNumber::FJsonValueNumber(pFVar4,(param_1->field0_0x0)._s_0.Y);
  }
  TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueNumber>(&local_28,&local_res18);
  if (((local_48.AllocatorInstance.Data <= &local_28) &&
      (&local_28 <
       (TSharedPtr<FJsonValue,1> *)
       (local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FJsonValue,1> *)(*pcVar1)();
    return pTVar5;
  }
  iVar3 = local_48.ArrayNum;
  if (local_48.ArrayNum == local_48.ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
  }
  local_48.ArrayNum = iVar3 + 1;
  *(FJsonValue **)&local_48.AllocatorInstance.Data[(longlong)iVar3 * 0x10].field_0x0 =
       local_28.Object;
  *(TReferenceControllerBase<1> **)(local_48.AllocatorInstance.Data + (longlong)iVar3 * 0x10 + 8) =
       local_28.SharedReferenceCount.ReferenceController;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_28.Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this = ::operator_new(0x20);
  if (this != (FJsonValueArray *)0x0) {
    pFVar6 = FJsonValueArray::FJsonValueArray(this,&local_48);
  }
  local_res20.Object = pFVar6;
  TSharedRef<FJsonValue,1>::TSharedRef<FJsonValue,1><FJsonValueArray>
            (__return_storage_ptr__,&local_res20);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_48.AllocatorInstance.Data != (TSharedPtr<FJsonValue,1> *)0x0
     ) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FromJson @ 142e85d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<FSnapshotWidgetReflectorNode,1> * __cdecl
FSnapshotWidgetReflectorNode::FromJson
          (TSharedRef<FSnapshotWidgetReflectorNode,1> *__return_storage_ptr__,
          TSharedRef<FJsonValue,1> *param_1)

{
  int iVar1;
  FSnapshotWidgetReflectorNode *pFVar2;
  FName FVar3;
  code *pcVar4;
  longlong lVar5;
  float fVar6;
  FLinearColor FVar7;
  bool bVar8;
  bool bVar9;
  undefined2 uVar10;
  TSharedPtr<FJsonObject,1> *this;
  TSharedRef<FSnapshotWidgetReflectorNode,1> *pTVar11;
  FJsonObject *pFVar12;
  TSharedPtr<FJsonValue,1> *pTVar13;
  FJsonValue *pFVar14;
  TSharedPtr<FJsonObject,1> *this_00;
  TMatrix2x2<float> *pTVar15;
  FLinearColor *pFVar16;
  FString *pFVar17;
  FText *pFVar18;
  TVector2<double> *pTVar19;
  ulonglong uVar20;
  FName *pFVar21;
  FModuleManager *this_01;
  IModuleInterface *pIVar22;
  longlong *plVar23;
  FAssetData *pFVar24;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar25;
  wchar_t *_Str;
  TVector2<float>_u_0 TVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  byte bVar29;
  FString *pFVar30;
  double dVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  undefined1 auStack_958 [32];
  undefined1 local_938;
  undefined1 local_928 [4];
  undefined8 local_924;
  float local_918 [2];
  float afStack_910 [2];
  undefined8 local_908;
  undefined8 local_900;
  undefined8 uStack_8f8;
  uint local_8f0;
  undefined8 local_8ec;
  float local_8e4;
  float fStack_8e0;
  TSharedRef<FJsonValue,1> local_8d8;
  FSoftObjectPath local_8c8;
  TRawPtrProxy<FSnapshotWidgetReflectorNode> local_8a8;
  undefined8 local_89c;
  TTransform2<float> local_890;
  wchar_t *local_878;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  wchar_t *local_868;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  wchar_t *local_858;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  wchar_t *local_848;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  TVector2<double>_u_0 local_838;
  wchar_t *local_828;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  wchar_t *local_818;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  wchar_t *local_808;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  wchar_t *local_7f8;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  wchar_t *local_7e8;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  wchar_t *local_7d8;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  wchar_t *local_7c8;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  wchar_t *local_7b8;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  wchar_t *local_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  wchar_t *local_798;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  wchar_t *local_788;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  wchar_t *local_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  wchar_t *local_768;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  wchar_t *local_758;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  wchar_t *local_748;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  wchar_t *local_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  wchar_t *local_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  wchar_t *local_718;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  wchar_t *local_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  wchar_t *local_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  wchar_t *local_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  wchar_t *local_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  wchar_t *local_6c8;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  wchar_t *local_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  wchar_t *local_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  TSharedRef<FWidgetReflectorNodeBase,1> local_698;
  wchar_t *local_688;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  wchar_t *local_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  wchar_t *local_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  wchar_t *local_658;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  wchar_t *local_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  wchar_t *local_638;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  wchar_t *local_628;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  wchar_t *local_618;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  TSharedRef<FWidgetReflectorNodeBase,1> local_608;
  wchar_t *local_5f8;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  wchar_t *local_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  wchar_t *local_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  FScriptContainerElement *local_5c8;
  int iStack_5c0;
  undefined4 uStack_5bc;
  TTransform2<float> local_5b8;
  TSharedPtr<FJsonValue,1> local_5a0;
  TStringView<wchar_t> local_588;
  TStringView<wchar_t> local_578;
  TStringView<wchar_t> local_568;
  TSharedPtr<FJsonValue,1> local_558;
  TSharedPtr<FJsonValue,1> local_548;
  TSharedPtr<FJsonValue,1> local_538;
  TStringView<wchar_t> local_528;
  TSharedPtr<FJsonValue,1> local_518;
  TStringView<wchar_t> local_508;
  TStringView<wchar_t> local_4f8;
  TStringView<wchar_t> local_4e8;
  TSharedPtr<FJsonValue,1> local_4d8;
  TStringView<wchar_t> local_4c8;
  TSharedPtr<FJsonValue,1> local_4b8;
  TStringView<wchar_t> local_4a8;
  FText local_498;
  FString local_488;
  TStringView<wchar_t> local_478;
  FText local_468;
  FString local_458;
  TStringView<wchar_t> local_448;
  FText local_438;
  FString local_428;
  TStringView<wchar_t> local_418;
  TStringView<wchar_t> local_408;
  TStringView<wchar_t> local_3f8;
  TStringView<wchar_t> local_3e8;
  TStringView<wchar_t> local_3d8;
  TStringView<wchar_t> local_3c8;
  TStringView<wchar_t> local_3b8;
  TStringView<wchar_t> local_3a8;
  TStringView<wchar_t> local_398;
  TStringView<wchar_t> local_388;
  TStringView<wchar_t> local_378;
  TStringView<wchar_t> local_368;
  FText local_358;
  FString local_348;
  TStringView<wchar_t> local_338;
  TStringView<wchar_t> local_328;
  TStringView<wchar_t> local_318;
  FText local_308;
  FString local_2f8;
  TStringView<wchar_t> local_2e8;
  FString local_2d8;
  TStringView<wchar_t> local_2c8;
  TStringView<wchar_t> local_2b8;
  TStringView<wchar_t> local_2a8;
  TStringView<wchar_t> local_298;
  TSharedPtr<FJsonValue,1> local_288;
  TStringView<wchar_t> local_278;
  TStringView<wchar_t> local_268;
  TStringView<wchar_t> local_258;
  TSharedPtr<FJsonValue,1> local_248;
  TSharedPtr<FJsonValue,1> local_238;
  TStringView<wchar_t> local_228;
  FString local_218;
  TStringView<wchar_t> local_208;
  TStringView<wchar_t> local_1f8;
  FString local_1e8;
  TStringView<wchar_t> local_1d8;
  TSharedRef<FSnapshotWidgetReflectorNode,1> local_1c8;
  FName local_1b8 [2];
  TStringView<wchar_t> local_1a8;
  TStringView<wchar_t> local_198;
  TStringView<wchar_t> local_188;
  TSharedPtr<FJsonValue,1> local_178;
  FLinearColor local_168;
  TVector2<double> local_158;
  TVector2<double> local_148;
  TMatrix2x2<float> local_138;
  FLinearColor local_128;
  TVector2<double> local_118;
  FGeometry local_108;
  undefined1 local_d0 [56];
  FAssetDataTagMapSharedView local_98 [2];
  TReferenceControllerBase<1> *local_88;
  void *local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_958;
  this = (TSharedPtr<FJsonObject,1> *)(**(code **)param_1->Object->_padding_)();
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootJsonObject.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\WidgetReflectorNode.cpp"
                       ,0x2c6,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_8a8.Object = ::operator_new(0x198);
  if (local_8a8.Object == (FSnapshotWidgetReflectorNode *)0x0) {
    local_8a8.Object = (FSnapshotWidgetReflectorNode *)0x0;
  }
  else {
    (local_8a8.Object)->_padding_ = (longlong)&___7FWidgetReflectorNodeBase__6B_;
    FGeometry::FGeometry((FGeometry *)&(local_8a8.Object)->_padding_);
    (local_8a8.Object)->_padding_ = 0;
    (local_8a8.Object)->_padding_ = 0;
    (local_8a8.Object)->_padding_ = 0;
    (local_8a8.Object)->_padding_ = 0;
    FVar7 = FLinearColor::White;
    *(undefined2 *)&(local_8a8.Object)->_padding_ = 0;
    (local_8a8.Object)->_padding_ = (longlong)&___7FSnapshotWidgetReflectorNode__6B_;
    *(FLinearColor_u_0 *)&(local_8a8.Object)->_padding_ = (FLinearColor_u_0_s_0)FVar7.field0_0x0;
    FText::FText(&(local_8a8.Object)->CachedWidgetType);
    FText::FText(&(local_8a8.Object)->CachedWidgetTypeAndShortName);
    FText::FText(&(local_8a8.Object)->CachedWidgetVisibilityText);
    (local_8a8.Object)->bCachedWidgetEnabled = false;
    FText::FText(&(local_8a8.Object)->CachedWidgetClippingText);
    FText::FText(&(local_8a8.Object)->CachedWidgetReadableLocation);
    ((local_8a8.Object)->CachedWidgetFile).Data.ArrayNum = 0;
    ((local_8a8.Object)->CachedWidgetFile).Data.ArrayMax = 0;
    (local_8a8.Object)->CachedWidgetLineNumber = 0;
    (local_8a8.Object)->CachedWidgetAttributeCount = 0;
    (local_8a8.Object)->CachedWidgetCollapsedAttributeCount = 0;
    ((local_8a8.Object)->CachedWidgetAssetData).PackageName.ComparisonIndex = 0;
    ((local_8a8.Object)->CachedWidgetAssetData).PackageName.Number = 0;
    ((local_8a8.Object)->CachedWidgetAssetData).PackagePath.ComparisonIndex = 0;
    ((local_8a8.Object)->CachedWidgetAssetData).PackagePath.Number = 0;
    ((local_8a8.Object)->CachedWidgetAssetData).AssetName.ComparisonIndex = 0;
    ((local_8a8.Object)->CachedWidgetAssetData).AssetName.Number = 0;
    ((local_8a8.Object)->CachedWidgetAssetData).AssetClass.ComparisonIndex = 0;
    ((local_8a8.Object)->CachedWidgetAssetData).AssetClass.Number = 0;
    ((local_8a8.Object)->CachedWidgetAssetData).AssetClassPath.PackageName.ComparisonIndex = 0;
    ((local_8a8.Object)->CachedWidgetAssetData).AssetClassPath.PackageName.Number = 0;
    ((local_8a8.Object)->CachedWidgetAssetData).AssetClassPath.AssetName.ComparisonIndex = 0;
    ((local_8a8.Object)->CachedWidgetAssetData).AssetClassPath.AssetName.Number = 0;
    ((local_8a8.Object)->CachedWidgetAssetData).ChunkArrayRegistryHandle.Index = -1;
    ((local_8a8.Object)->CachedWidgetAssetData).PackageFlags = 0;
    ((local_8a8.Object)->CachedWidgetAssetData).TagsAndValues.field0_0x0.Loose =
         (FAssetDataTagMap *)0x0;
    ((local_8a8.Object)->CachedWidgetFile).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    ((local_8a8.Object)->CachedWidgetAssetData).TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
    ((local_8a8.Object)->CachedWidgetAssetData).TaggedAssetBundles.SharedReferenceCount.
    ReferenceController = (TReferenceControllerBase<1> *)0x0;
    ((local_8a8.Object)->CachedWidgetAssetData).ChunkIDs.AllocatorInstance.SecondaryData =
         (ForElementType<int>)0x0;
    ((local_8a8.Object)->CachedWidgetAssetData).ChunkIDs.ArrayNum = 0;
    ((local_8a8.Object)->CachedWidgetAssetData).ChunkIDs.ArrayMax = 2;
    *(undefined8 *)&((local_8a8.Object)->CachedWidgetForegroundColor).SpecifiedColor.field0_0x0 =
         0x3f800000;
    ((local_8a8.Object)->CachedWidgetForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
    ((local_8a8.Object)->CachedWidgetForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
    ((local_8a8.Object)->CachedWidgetForegroundColor).ColorUseRule = UseColor_Specified;
  }
  TSharedRef<FSnapshotWidgetReflectorNode,1>::
  TSharedRef<FSnapshotWidgetReflectorNode,1><FSnapshotWidgetReflectorNode>
            (__return_storage_ptr__,&local_8a8);
  pFVar12 = TSharedPtr<FJsonObject,1>::operator->(this);
  uStack_5f0 = 0x1a;
  local_5f8 = L"AccumulatedLayoutTransform";
  local_1a8._12_4_ = uStack_5ec;
  local_1a8.Size = 0x1a;
  local_1a8.DataPtr = L"AccumulatedLayoutTransform";
  pTVar13 = FJsonObject::GetField<0>(pFVar12,&local_5a0,&local_1a8);
  fVar6 = __real_3f800000;
  if (pTVar13->Object == (FJsonValue *)0x0) {
    local_89c = 0;
    TVar26 = (TVector2<float>_u_0)0x0;
    fVar34 = __real_3f800000;
  }
  else {
    pFVar14 = TSharedPtr<FJsonValue,1>::operator->(pTVar13);
    this_00 = (TSharedPtr<FJsonObject,1> *)(**(code **)pFVar14->_padding_)(pFVar14);
    if (this_00->Object == (FJsonObject *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructJsonObject.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\WidgetReflectorNode.cpp"
                         ,0x272,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
        return pTVar11;
      }
      if (this_00->Object == (FJsonObject *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
          return pTVar11;
        }
      }
    }
    local_5e8 = L"Translation";
    uStack_5e0 = 0xb;
    local_198._12_4_ = uStack_5dc;
    local_198.Size = 0xb;
    local_198.DataPtr = L"Translation";
    pTVar13 = FJsonObject::GetField<0>(this_00->Object,&local_178,&local_198);
    pTVar19 = `FSnapshotWidgetReflectorNode::FromJson'::__l2::Internal::ParseVector2DJsonValue
                        (&local_158,pTVar13);
    local_924._4_4_ = (float)(pTVar19->field0_0x0)._s_0.Y;
    local_924._0_4_ = (float)(pTVar19->field0_0x0)._s_0.X;
    pFVar12 = TSharedPtr<FJsonObject,1>::operator->(this_00);
    uStack_5d0 = 5;
    local_5d8 = L"Scale";
    local_188._12_4_ = uStack_5cc;
    local_188.Size = 5;
    local_188.DataPtr = L"Scale";
    dVar31 = FJsonObject::GetNumberField(pFVar12,&local_188);
    TVar26 = local_924;
    fVar34 = (float)dVar31;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a0.SharedReferenceCount.ReferenceController);
  pFVar12 = TSharedPtr<FJsonObject,1>::operator->(this);
  uStack_870 = 0x1a;
  local_878 = L"AccumulatedRenderTransform";
  local_588._12_4_ = uStack_86c;
  local_588.Size = 0x1a;
  local_588.DataPtr = L"AccumulatedRenderTransform";
  pTVar13 = FJsonObject::GetField<0>(pFVar12,&local_538,&local_588);
  if (pTVar13->Object == (FJsonValue *)0x0) {
    local_918[0] = ___xmm_3f80000000000000000000003f800000;
    local_918[1] = _UNK_15076b184;
    afStack_910[0] = _UNK_15076b188;
    afStack_910[1] = _UNK_15076b18c;
    local_908 = 0;
    local_8ec = 0;
  }
  else {
    plVar23 = (longlong *)(**(code **)pTVar13->Object->_padding_)();
    if (*plVar23 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructJsonObject.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\WidgetReflectorNode.cpp"
                         ,0x281,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
        return pTVar11;
      }
      if (*plVar23 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
          return pTVar11;
        }
      }
    }
    local_868 = L"Translation";
    uStack_860 = 0xb;
    local_578._12_4_ = uStack_85c;
    local_578.Size = 0xb;
    local_578.DataPtr = L"Translation";
    pTVar13 = FJsonObject::GetField<0>((FJsonObject *)*plVar23,&local_548,&local_578);
    pTVar19 = `FSnapshotWidgetReflectorNode::FromJson'::__l2::Internal::ParseVector2DJsonValue
                        (&local_148,pTVar13);
    if (*plVar23 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
        return pTVar11;
      }
    }
    local_858 = L"Matrix";
    uStack_850 = 6;
    local_568._12_4_ = uStack_84c;
    local_568.Size = 6;
    local_568.DataPtr = L"Matrix";
    pTVar13 = FJsonObject::GetField<0>((FJsonObject *)*plVar23,&local_558,&local_568);
    pTVar15 = `FSnapshotWidgetReflectorNode::FromJson'::__l2::Internal::ParseMatrix2x2JsonValue
                        (&local_138,pTVar13);
    local_918 = pTVar15->M[0];
    afStack_910 = pTVar15->M[1];
    local_908 = CONCAT44((float)(pTVar19->field0_0x0)._s_0.Y,(float)(pTVar19->field0_0x0)._s_0.X);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_558.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_548.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_538.SharedReferenceCount.ReferenceController);
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_848 = L"LocalSize";
  uStack_840 = 9;
  local_528._12_4_ = uStack_83c;
  local_528.Size = 9;
  local_528.DataPtr = L"LocalSize";
  pTVar13 = FJsonObject::GetField<0>(this->Object,&local_518,&local_528);
  `FSnapshotWidgetReflectorNode::FromJson'::__l2::Internal::ParseVector2DJsonValue
            ((TVector2<double> *)&local_838._s_0,pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_518.SharedReferenceCount.ReferenceController);
  local_924._4_4_ = (float)local_838._s_0.Y;
  local_924._0_4_ = (float)local_838._s_0.X;
  if ((((local_918[0] == fVar6) && (local_918[1] == 0.0)) && (afStack_910[0] == 0.0)) &&
     (((afStack_910[1] == fVar6 &&
       ((float)local_908 == UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X)) &&
      (local_908._4_4_ == UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y)))) {
    bVar29 = 0;
  }
  else {
    bVar29 = 1;
  }
  local_108.Size = (FDeprecateSlateVector2D)local_924;
  local_108.Position.field0_0x0._s_0.Y = UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y;
  local_108.Position.field0_0x0._s_0.X = UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X;
  local_5b8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_5b8.M.M[0][1] = _UNK_15076b184;
  local_5b8.M.M[1][0] = _UNK_15076b188;
  local_5b8.M.M[1][1] = _UNK_15076b18c;
  local_5b8.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
  local_108.Scale = 1.0;
  local_108.AbsolutePosition.field0_0x0._s_0.X = 0.0;
  local_108.AbsolutePosition.field0_0x0._s_0.Y = 0.0;
  local_890.M.M[0][1] = 0.0;
  local_890.M.M[1][0] = 0.0;
  local_890.M.M[0][0] = fVar34;
  local_890.M.M[1][1] = fVar34;
  local_890.Trans.field0_0x0 = TVar26;
  Concatenate<TTransform2<float>_>(&local_108.AccumulatedRenderTransform,&local_890,&local_5b8);
  local_108.bHasRenderTransform = bVar29;
  local_924._0_4_ = TVar26._s_0.X;
  local_924._4_4_ = TVar26._s_0.Y;
  local_8e4 = (float)(undefined4)local_924;
  fStack_8e0 = (float)local_924._4_4_;
  local_108.AbsolutePosition.field0_0x0._s_0.X = (float)(undefined4)local_924;
  local_108.AbsolutePosition.field0_0x0._s_0.Y = (float)local_924._4_4_;
  local_924 = TVar26;
  local_108.Scale = fVar34;
  local_108.Position.field0_0x0 = TVar26;
  FGeometry::operator=((FGeometry *)&__return_storage_ptr__->Object->_padding_,&local_108);
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_828 = L"HitTestInfo";
  uStack_820 = 0xb;
  local_508._12_4_ = uStack_81c;
  local_508.Size = 0xb;
  local_508.DataPtr = L"HitTestInfo";
  pTVar13 = FJsonObject::GetField<0>(this->Object,&local_4d8,&local_508);
  if (pTVar13->Object == (FJsonValue *)0x0) {
    uVar10 = 0;
  }
  else {
    plVar23 = (longlong *)(**(code **)pTVar13->Object->_padding_)();
    if (*plVar23 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructJsonObject.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\WidgetReflectorNode.cpp"
                         ,0x2b5,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
        return pTVar11;
      }
      if (*plVar23 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
          return pTVar11;
        }
      }
    }
    local_818 = L"IsHitTestVisible";
    uStack_810 = 0x10;
    local_4f8._12_4_ = uStack_80c;
    local_4f8.Size = 0x10;
    local_4f8.DataPtr = L"IsHitTestVisible";
    bVar8 = FJsonObject::GetBoolField((FJsonObject *)*plVar23,&local_4f8);
    if (*plVar23 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
        return pTVar11;
      }
    }
    local_808 = L"AreChildrenHitTestVisible";
    uStack_800 = 0x19;
    local_4e8._12_4_ = uStack_7fc;
    local_4e8.Size = 0x19;
    local_4e8.DataPtr = L"AreChildrenHitTestVisible";
    bVar9 = FJsonObject::GetBoolField((FJsonObject *)*plVar23,&local_4e8);
    uVar10 = CONCAT11(bVar9,bVar8);
  }
  *(undefined2 *)&__return_storage_ptr__->Object->_padding_ = uVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4d8.SharedReferenceCount.ReferenceController);
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_7f8 = L"Tint";
  uStack_7f0 = 4;
  local_4c8._12_4_ = uStack_7ec;
  local_4c8.Size = 4;
  local_4c8.DataPtr = L"Tint";
  pTVar13 = FJsonObject::GetField<0>(this->Object,&local_4b8,&local_4c8);
  pFVar16 = `FSnapshotWidgetReflectorNode::FromJson'::__l2::Internal::ParseLinearColorJsonValue
                      (&local_128,pTVar13);
  lVar5 = *(longlong *)((longlong)&pFVar16->field0_0x0 + 8);
  pFVar2 = __return_storage_ptr__->Object;
  pFVar2->_padding_ = *(longlong *)&pFVar16->field0_0x0;
  pFVar2->_padding_ = lVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4b8.SharedReferenceCount.ReferenceController);
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_7e8 = L"WidgetType";
  uStack_7e0 = 10;
  local_4a8._12_4_ = uStack_7dc;
  local_4a8.Size = 10;
  local_4a8.DataPtr = L"WidgetType";
  pFVar17 = FJsonObject::GetStringField(this->Object,&local_488,&local_4a8);
  pFVar18 = FText::FromString(&local_498,pFVar17);
  FText::operator=(&__return_storage_ptr__->Object->CachedWidgetType,pFVar18);
  if (local_498.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_498.TextData.Reference + 0x10))();
  }
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_7d8 = L"WidgetTypeAndShortName";
  uStack_7d0 = 0x16;
  local_478._12_4_ = uStack_7cc;
  local_478.Size = 0x16;
  local_478.DataPtr = L"WidgetTypeAndShortName";
  pFVar17 = FJsonObject::GetStringField(this->Object,&local_458,&local_478);
  pFVar18 = FText::FromString(&local_468,pFVar17);
  FText::operator=(&__return_storage_ptr__->Object->CachedWidgetTypeAndShortName,pFVar18);
  if (local_468.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_468.TextData.Reference + 0x10))();
  }
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_7c8 = L"WidgetVisibilityText";
  uStack_7c0 = 0x14;
  local_448._12_4_ = uStack_7bc;
  local_448.Size = 0x14;
  local_448.DataPtr = L"WidgetVisibilityText";
  pFVar17 = FJsonObject::GetStringField(this->Object,&local_428,&local_448);
  pFVar18 = FText::FromString(&local_438,pFVar17);
  FText::operator=(&__return_storage_ptr__->Object->CachedWidgetVisibilityText,pFVar18);
  if (local_438.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
  }
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_7b8 = L"WidgetVisible";
  uStack_7b0 = 0xd;
  local_418._12_4_ = uStack_7ac;
  local_418.Size = 0xd;
  local_418.DataPtr = L"WidgetVisible";
  bVar8 = FJsonObject::GetBoolField(this->Object,&local_418);
  __return_storage_ptr__->Object->bCachedWidgetVisible = bVar8;
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_7a8 = L"WidgetVisibleInherited";
  uStack_7a0 = 0x16;
  local_408._12_4_ = uStack_79c;
  local_408.Size = 0x16;
  local_408.DataPtr = L"WidgetVisibleInherited";
  bVar8 = FJsonObject::GetBoolField(this->Object,&local_408);
  __return_storage_ptr__->Object->bCachedWidgetVisibleInherited = bVar8;
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_798 = L"SupportsInvalidation";
  uStack_790 = 0x14;
  local_3f8._12_4_ = uStack_78c;
  local_3f8.Size = 0x14;
  local_3f8.DataPtr = L"SupportsInvalidation";
  bVar8 = FJsonObject::GetBoolField(this->Object,&local_3f8);
  __return_storage_ptr__->Object->bCachedSupportsInvalidation = bVar8;
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_788 = L"SupportsInvalidationRecursive";
  uStack_780 = 0x1d;
  local_3e8._12_4_ = uStack_77c;
  local_3e8.Size = 0x1d;
  local_3e8.DataPtr = L"SupportsInvalidationRecursive";
  bVar8 = FJsonObject::GetBoolField(this->Object,&local_3e8);
  __return_storage_ptr__->Object->bCachedSupportsInvalidationRecursive = bVar8;
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_778 = L"WidgetFocusable";
  uStack_770 = 0xf;
  local_3d8._12_4_ = uStack_76c;
  local_3d8.Size = 0xf;
  local_3d8.DataPtr = L"WidgetFocusable";
  bVar8 = FJsonObject::GetBoolField(this->Object,&local_3d8);
  __return_storage_ptr__->Object->bCachedWidgetFocusable = bVar8;
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_768 = L"WidgetNeedsTick";
  uStack_760 = 0xf;
  local_3c8._12_4_ = uStack_75c;
  local_3c8.Size = 0xf;
  local_3c8.DataPtr = L"WidgetNeedsTick";
  bVar8 = FJsonObject::GetBoolField(this->Object,&local_3c8);
  __return_storage_ptr__->Object->bCachedWidgetNeedsTick = bVar8;
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_758 = L"WidgetIsVolatile";
  uStack_750 = 0x10;
  local_3b8._12_4_ = uStack_74c;
  local_3b8.Size = 0x10;
  local_3b8.DataPtr = L"WidgetIsVolatile";
  bVar8 = FJsonObject::GetBoolField(this->Object,&local_3b8);
  __return_storage_ptr__->Object->bCachedWidgetIsVolatile = bVar8;
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_748 = L"WidgetIsVolatileIndirectly";
  uStack_740 = 0x1a;
  local_3a8._12_4_ = uStack_73c;
  local_3a8.Size = 0x1a;
  local_3a8.DataPtr = L"WidgetIsVolatileIndirectly";
  bVar8 = FJsonObject::GetBoolField(this->Object,&local_3a8);
  __return_storage_ptr__->Object->bCachedWidgetIsVolatileIndirectly = bVar8;
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_738 = L"WidgetHasActiveTimers";
  uStack_730 = 0x15;
  local_398._12_4_ = uStack_72c;
  local_398.Size = 0x15;
  local_398.DataPtr = L"WidgetHasActiveTimers";
  bVar8 = FJsonObject::GetBoolField(this->Object,&local_398);
  __return_storage_ptr__->Object->bCachedWidgetHasActiveTimers = bVar8;
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_728 = L"WidgetIsInvalidationRoot";
  uStack_720 = 0x18;
  local_388._12_4_ = uStack_71c;
  local_388.Size = 0x18;
  local_388.DataPtr = L"WidgetIsInvalidationRoot";
  bVar8 = FJsonObject::GetBoolField(this->Object,&local_388);
  __return_storage_ptr__->Object->bCachedWidgetIsInvalidationRoot = bVar8;
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_718 = L"WidgetEnabled";
  uStack_710 = 0xd;
  local_378._12_4_ = uStack_70c;
  local_378.Size = 0xd;
  local_378.DataPtr = L"WidgetEnabled";
  bVar8 = FJsonObject::GetBoolField(this->Object,&local_378);
  __return_storage_ptr__->Object->bCachedWidgetEnabled = bVar8;
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_708 = L"WidgetClippingText";
  uStack_700 = 0x12;
  local_368._12_4_ = uStack_6fc;
  local_368.Size = 0x12;
  local_368.DataPtr = L"WidgetClippingText";
  pFVar17 = FJsonObject::GetStringField(this->Object,&local_348,&local_368);
  pFVar18 = FText::FromString(&local_358,pFVar17);
  FText::operator=(&__return_storage_ptr__->Object->CachedWidgetClippingText,pFVar18);
  if (local_358.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
  }
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_6f8 = L"WidgetLayerId";
  uStack_6f0 = 0xd;
  local_338._12_4_ = uStack_6ec;
  local_338.Size = 0xd;
  local_338.DataPtr = L"WidgetLayerId";
  dVar31 = FJsonObject::GetNumberField(this->Object,&local_338);
  __return_storage_ptr__->Object->CachedWidgetLayerId = (int)dVar31;
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_6e8 = L"WidgetLayerIdOut";
  uStack_6e0 = 0x10;
  local_328._12_4_ = uStack_6dc;
  local_328.Size = 0x10;
  local_328.DataPtr = L"WidgetLayerIdOut";
  dVar31 = FJsonObject::GetNumberField(this->Object,&local_328);
  __return_storage_ptr__->Object->CachedWidgetLayerIdOut = (int)dVar31;
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_6d8 = L"WidgetReadableLocation";
  uStack_6d0 = 0x16;
  local_318._12_4_ = uStack_6cc;
  local_318.Size = 0x16;
  local_318.DataPtr = L"WidgetReadableLocation";
  pFVar17 = FJsonObject::GetStringField(this->Object,&local_2f8,&local_318);
  pFVar18 = FText::FromString(&local_308,pFVar17);
  FText::operator=(&__return_storage_ptr__->Object->CachedWidgetReadableLocation,pFVar18);
  if (local_308.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
  }
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_6c8 = L"WidgetFile";
  uStack_6c0 = 10;
  local_2e8._12_4_ = uStack_6bc;
  local_2e8.Size = 10;
  local_2e8.DataPtr = L"WidgetFile";
  pFVar17 = FJsonObject::GetStringField(this->Object,&local_2d8,&local_2e8);
  pFVar2 = __return_storage_ptr__->Object;
  pFVar30 = &pFVar2->CachedWidgetFile;
  if (pFVar30 != pFVar17) {
    pFVar27 = (pFVar30->Data).AllocatorInstance.Data;
    if (pFVar27 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar27);
    }
    (pFVar30->Data).AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
    (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->CachedWidgetFile).Data.ArrayNum = (pFVar17->Data).ArrayNum;
    (pFVar2->CachedWidgetFile).Data.ArrayMax = (pFVar17->Data).ArrayMax;
    (pFVar17->Data).ArrayNum = 0;
    (pFVar17->Data).ArrayMax = 0;
  }
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_6b8 = L"WidgetLineNumber";
  uStack_6b0 = 0x10;
  local_2c8._12_4_ = uStack_6ac;
  local_2c8.Size = 0x10;
  local_2c8.DataPtr = L"WidgetLineNumber";
  dVar31 = FJsonObject::GetNumberField(this->Object,&local_2c8);
  __return_storage_ptr__->Object->CachedWidgetLineNumber = (int)dVar31;
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_6a8 = L"WidgetAttributeCount";
  uStack_6a0 = 0x14;
  local_2b8._12_4_ = uStack_69c;
  local_2b8.Size = 0x14;
  local_2b8.DataPtr = L"WidgetAttributeCount";
  dVar31 = FJsonObject::GetNumberField(this->Object,&local_2b8);
  __return_storage_ptr__->Object->CachedWidgetAttributeCount = (int)dVar31;
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_628 = L"WidgetCollapsedAttributeCount";
  uStack_620 = 0x1d;
  local_2a8._12_4_ = uStack_61c;
  local_2a8.Size = 0x1d;
  local_2a8.DataPtr = L"WidgetCollapsedAttributeCount";
  dVar31 = FJsonObject::GetNumberField(this->Object,&local_2a8);
  __return_storage_ptr__->Object->CachedWidgetCollapsedAttributeCount = (int)dVar31;
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_688 = L"WidgetDesiredSize";
  uStack_680 = 0x11;
  local_298._12_4_ = uStack_67c;
  local_298.Size = 0x11;
  local_298.DataPtr = L"WidgetDesiredSize";
  pTVar13 = FJsonObject::GetField<0>(this->Object,&local_288,&local_298);
  pTVar19 = `FSnapshotWidgetReflectorNode::FromJson'::__l2::Internal::ParseVector2DJsonValue
                      (&local_118,pTVar13);
  dVar31 = (pTVar19->field0_0x0)._s_0.Y;
  pFVar2 = __return_storage_ptr__->Object;
  (pFVar2->CachedWidgetDesiredSize).field0_0x0._s_0.X = (pTVar19->field0_0x0)._s_0.X;
  (pFVar2->CachedWidgetDesiredSize).field0_0x0._s_0.Y = dVar31;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288.SharedReferenceCount.ReferenceController);
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_678 = L"WidgetForegroundColor";
  uStack_670 = 0x15;
  local_278._12_4_ = uStack_66c;
  local_278.Size = 0x15;
  local_278.DataPtr = L"WidgetForegroundColor";
  pTVar13 = FJsonObject::GetField<0>(this->Object,&local_238,&local_278);
  if (pTVar13->Object == (FJsonValue *)0x0) {
    local_8f0 = local_8f0 & 0xffffff00;
  }
  else {
    plVar23 = (longlong *)(**(code **)pTVar13->Object->_padding_)();
    if (*plVar23 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructJsonObject.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\WidgetReflectorNode.cpp"
                         ,0x2a1,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
        return pTVar11;
      }
      if (*plVar23 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
          return pTVar11;
        }
      }
    }
    local_668 = L"IsColorSpecified";
    uStack_660 = 0x10;
    local_268._12_4_ = uStack_65c;
    local_268.Size = 0x10;
    local_268.DataPtr = L"IsColorSpecified";
    bVar8 = FJsonObject::GetBoolField((FJsonObject *)*plVar23,&local_268);
    if (bVar8) {
      if (*plVar23 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
          return pTVar11;
        }
      }
      local_658 = L"Color";
      uStack_650 = 5;
      local_258._12_4_ = uStack_64c;
      local_258.Size = 5;
      local_258.DataPtr = L"Color";
      pTVar13 = FJsonObject::GetField<0>((FJsonObject *)*plVar23,&local_248,&local_258);
      pFVar16 = `FSnapshotWidgetReflectorNode::FromJson'::__l2::Internal::ParseLinearColorJsonValue
                          (&local_168,pTVar13);
      local_8f0 = local_8f0 & 0xffffff00;
      uVar32 = *(undefined8 *)&pFVar16->field0_0x0;
      uVar33 = *(undefined8 *)((longlong)&pFVar16->field0_0x0 + 8);
      local_900 = uVar32;
      uStack_8f8 = uVar33;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_248.SharedReferenceCount.ReferenceController);
      goto LAB_142e8735d;
    }
    local_8f0 = CONCAT22(local_8f0._2_2_,2);
  }
  local_900 = ___xmm_3f8000003f800000000000003f800000;
  uStack_8f8 = _UNK_15090c6d8;
  uVar32 = ___xmm_3f8000003f800000000000003f800000;
  uVar33 = _UNK_15090c6d8;
LAB_142e8735d:
  pFVar2 = __return_storage_ptr__->Object;
  *(undefined8 *)&(pFVar2->CachedWidgetForegroundColor).SpecifiedColor.field0_0x0 = uVar32;
  *(undefined8 *)((longlong)&(pFVar2->CachedWidgetForegroundColor).SpecifiedColor.field0_0x0 + 8) =
       uVar33;
  (pFVar2->CachedWidgetForegroundColor).ColorUseRule = (undefined1)local_8f0;
  (pFVar2->CachedWidgetForegroundColor).ColorTableId = local_8f0._1_1_;
  *(undefined2 *)&(pFVar2->CachedWidgetForegroundColor).field_0x12 = local_8f0._2_2_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.SharedReferenceCount.ReferenceController);
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_648 = L"WidgetAddress";
  uStack_640 = 0xd;
  local_228._12_4_ = uStack_63c;
  local_228.Size = 0xd;
  local_228.DataPtr = L"WidgetAddress";
  pFVar17 = FJsonObject::GetStringField(this->Object,&local_218,&local_228);
  if ((pFVar17->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
  }
  uVar20 = _wcstoui64(_Str,(wchar_t **)0x0,0);
  __return_storage_ptr__->Object->CachedWidgetAddress = uVar20;
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_638 = L"WidgetAssetPath";
  uStack_630 = 0xf;
  local_208._12_4_ = uStack_62c;
  local_208.Size = 0xf;
  local_208.DataPtr = L"WidgetAssetPath";
  pFVar17 = FJsonObject::GetStringField(this->Object,&local_1e8,&local_208);
  local_8c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_8c8.AssetPath.PackageName.Number = 0;
  local_8c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_8c8.AssetPath.AssetName.Number = 0;
  local_8c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8c8.SubPathString.Data.ArrayNum = 0;
  local_8c8.SubPathString.Data.ArrayMax = 0;
  local_5c8 = (pFVar17->Data).AllocatorInstance.Data;
  iVar1 = (pFVar17->Data).ArrayNum;
  iStack_5c0 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_5c0 = 0;
  }
  local_1f8._12_4_ = uStack_5bc;
  local_1f8.Size = iStack_5c0;
  local_1f8.DataPtr = (wchar_t *)local_5c8;
  FSoftObjectPath::SetPath(&local_8c8,&local_1f8);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  pFVar21 = ::FName::FName(local_1b8,L"AssetRegistry");
  FVar3 = *pFVar21;
  this_01 = FModuleManager::Get();
  pIVar22 = FModuleManager::LoadModuleChecked(this_01,FVar3);
  plVar23 = (longlong *)(**(code **)((longlong)*pIVar22 + 0x40))(pIVar22);
  local_938 = 1;
  pFVar24 = (FAssetData *)(**(code **)(*plVar23 + 0x78))(plVar23,local_d0,&local_8c8,0);
  FAssetData::operator=(&__return_storage_ptr__->Object->CachedWidgetAssetData,pFVar24);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(local_98);
  if (this->Object == (FJsonObject *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
      return pTVar11;
    }
  }
  local_618 = L"ChildNodes";
  uStack_610 = 10;
  local_1d8._12_4_ = uStack_60c;
  local_1d8.Size = 10;
  local_1d8.DataPtr = L"ChildNodes";
  pTVar25 = FJsonObject::GetArrayField(this->Object,&local_1d8);
  iVar1 = pTVar25->ArrayNum;
  pFVar27 = (pTVar25->AllocatorInstance).Data;
  pFVar28 = pFVar27 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (pTVar25->ArrayNum != iVar1) {
      local_928[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_928);
    }
    if (pFVar27 == pFVar28) break;
    if (*(longlong *)pFVar27 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
        return pTVar11;
      }
    }
    local_8d8.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar27 + 8);
    local_8d8.Object = *(FJsonValue **)pFVar27;
    if (local_8d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_8d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_8d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_8d8.Object == (FJsonValue *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TSharedRef<FSnapshotWidgetReflectorNode,1> *)(*pcVar4)();
        return pTVar11;
      }
    }
    pTVar11 = FromJson(&local_1c8,&local_8d8);
    local_608.Object = (FWidgetReflectorNodeBase *)pTVar11->Object;
    local_608.SharedReferenceCount.ReferenceController =
         (pTVar11->SharedReferenceCount).ReferenceController;
    if (local_608.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_698.Object = (FWidgetReflectorNodeBase *)__return_storage_ptr__->Object;
    local_698.SharedReferenceCount.ReferenceController =
         (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (local_698.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_698.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_698.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FWidgetReflectorNodeBase::AddChildNode(&local_698,&local_608);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8d8.SharedReferenceCount.ReferenceController);
    pFVar27 = pFVar27 + 0x10;
  }
  if (local_8c8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c8.SubPathString.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLiveWidget @ 142ea0410

TSharedPtr<SWidget,1> * __thiscall
FSnapshotWidgetReflectorNode::GetLiveWidget
          (FSnapshotWidgetReflectorNode *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetNodeType @ 142ea0800

EWidgetReflectorNodeType __thiscall
FSnapshotWidgetReflectorNode::GetNodeType(FSnapshotWidgetReflectorNode *this)

{
  return Snapshot;
}

// GetSupportsInvalidationRecursive @ 142ea83b0

bool __thiscall
FSnapshotWidgetReflectorNode::GetSupportsInvalidationRecursive(FSnapshotWidgetReflectorNode *this)

{
  return this->bCachedSupportsInvalidationRecursive;
}

// GetWidgetAddress @ 142ea9f00

ulong64 __thiscall
FSnapshotWidgetReflectorNode::GetWidgetAddress(FSnapshotWidgetReflectorNode *this)

{
  return this->CachedWidgetAddress;
}

// GetWidgetAssetData @ 142eaa0a0

FAssetData * __thiscall
FSnapshotWidgetReflectorNode::GetWidgetAssetData
          (FSnapshotWidgetReflectorNode *this,FAssetData *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  ForElementType<int> _Dst;
  ForElementType<int> _Src;
  
  __return_storage_ptr__->PackageName = (this->CachedWidgetAssetData).PackageName;
  __return_storage_ptr__->PackagePath = (this->CachedWidgetAssetData).PackagePath;
  __return_storage_ptr__->AssetName = (this->CachedWidgetAssetData).AssetName;
  __return_storage_ptr__->AssetClass = (this->CachedWidgetAssetData).AssetClass;
  FVar4 = (this->CachedWidgetAssetData).AssetClassPath.AssetName;
  (__return_storage_ptr__->AssetClassPath).PackageName =
       (this->CachedWidgetAssetData).AssetClassPath.PackageName;
  (__return_storage_ptr__->AssetClassPath).AssetName = FVar4;
  (__return_storage_ptr__->ChunkArrayRegistryHandle).Index =
       (this->CachedWidgetAssetData).ChunkArrayRegistryHandle.Index;
  __return_storage_ptr__->PackageFlags = (this->CachedWidgetAssetData).PackageFlags;
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
            (&__return_storage_ptr__->TagsAndValues,&(this->CachedWidgetAssetData).TagsAndValues);
  (__return_storage_ptr__->TaggedAssetBundles).Object =
       (this->CachedWidgetAssetData).TaggedAssetBundles.Object;
  pTVar3 = (this->CachedWidgetAssetData).TaggedAssetBundles.SharedReferenceCount.ReferenceController
  ;
  (__return_storage_ptr__->TaggedAssetBundles).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (__return_storage_ptr__->ChunkIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  _Src = (this->CachedWidgetAssetData).ChunkIDs.AllocatorInstance.SecondaryData;
  iVar2 = (this->CachedWidgetAssetData).ChunkIDs.ArrayNum;
  (__return_storage_ptr__->ChunkIDs).ArrayNum = iVar2;
  if (_Src == (ForElementType<int>)0x0) {
    _Src = (ForElementType<int>)&(this->CachedWidgetAssetData).ChunkIDs;
  }
  piVar1 = &(__return_storage_ptr__->ChunkIDs).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 2;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,iVar2,0,&(__return_storage_ptr__->ChunkIDs).AllocatorInstance,iVar2,piVar1);
    _Dst = (__return_storage_ptr__->ChunkIDs).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<int>)0x0) {
      _Dst = (ForElementType<int>)&__return_storage_ptr__->ChunkIDs;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 2);
  }
  return __return_storage_ptr__;
}

// GetWidgetAttributeCount @ 142eaa370

int __thiscall
FSnapshotWidgetReflectorNode::GetWidgetAttributeCount(FSnapshotWidgetReflectorNode *this)

{
  return this->CachedWidgetAttributeCount;
}

// GetWidgetClippingText @ 142eaa520

FText * __thiscall
FSnapshotWidgetReflectorNode::GetWidgetClippingText
          (FSnapshotWidgetReflectorNode *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->CachedWidgetClippingText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->CachedWidgetClippingText).Flags;
  return __return_storage_ptr__;
}

// GetWidgetCollapsedAttributeCount @ 142eaa720

int __thiscall
FSnapshotWidgetReflectorNode::GetWidgetCollapsedAttributeCount(FSnapshotWidgetReflectorNode *this)

{
  return this->CachedWidgetCollapsedAttributeCount;
}

// GetWidgetDesiredSize @ 142eaa7f0

TVector2<double> * __thiscall
FSnapshotWidgetReflectorNode::GetWidgetDesiredSize
          (FSnapshotWidgetReflectorNode *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->CachedWidgetDesiredSize).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->CachedWidgetDesiredSize).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetWidgetEnabled @ 142eaa8d0

bool __thiscall FSnapshotWidgetReflectorNode::GetWidgetEnabled(FSnapshotWidgetReflectorNode *this)

{
  return this->bCachedWidgetEnabled;
}

// GetWidgetFile @ 142eaaa20

FString * __thiscall
FSnapshotWidgetReflectorNode::GetWidgetFile
          (FSnapshotWidgetReflectorNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->CachedWidgetFile);
  return __return_storage_ptr__;
}

// GetWidgetFocusable @ 142eaab90

bool __thiscall FSnapshotWidgetReflectorNode::GetWidgetFocusable(FSnapshotWidgetReflectorNode *this)

{
  return this->bCachedWidgetFocusable;
}

// GetWidgetForegroundColor @ 142eaac70

FSlateColor * __thiscall
FSnapshotWidgetReflectorNode::GetWidgetForegroundColor
          (FSnapshotWidgetReflectorNode *this,FSlateColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  ESlateColorStylingMode EVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  EVar2 = (this->CachedWidgetForegroundColor).ColorUseRule;
  EVar3 = (this->CachedWidgetForegroundColor).ColorTableId;
  uVar4 = *(undefined2 *)&(this->CachedWidgetForegroundColor).field_0x12;
  uVar1 = *(undefined8 *)
           ((longlong)&(this->CachedWidgetForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
       *(undefined8 *)&(this->CachedWidgetForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar1;
  __return_storage_ptr__->ColorUseRule = EVar2;
  __return_storage_ptr__->ColorTableId = EVar3;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar4;
  return __return_storage_ptr__;
}

// GetWidgetHasActiveTimers @ 142eaad70

bool __thiscall
FSnapshotWidgetReflectorNode::GetWidgetHasActiveTimers(FSnapshotWidgetReflectorNode *this)

{
  return this->bCachedWidgetHasActiveTimers;
}

// GetWidgetIsInvalidationRoot @ 142eaae20

bool __thiscall
FSnapshotWidgetReflectorNode::GetWidgetIsInvalidationRoot(FSnapshotWidgetReflectorNode *this)

{
  return this->bCachedWidgetIsInvalidationRoot;
}

// GetWidgetIsVolatile @ 142eaaed0

bool __thiscall
FSnapshotWidgetReflectorNode::GetWidgetIsVolatile(FSnapshotWidgetReflectorNode *this)

{
  return this->bCachedWidgetIsVolatile;
}

// GetWidgetIsVolatileIndirectly @ 142eaaf80

bool __thiscall
FSnapshotWidgetReflectorNode::GetWidgetIsVolatileIndirectly(FSnapshotWidgetReflectorNode *this)

{
  return this->bCachedWidgetIsVolatileIndirectly;
}

// GetWidgetLayerId @ 142eab020

int __thiscall FSnapshotWidgetReflectorNode::GetWidgetLayerId(FSnapshotWidgetReflectorNode *this)

{
  return this->CachedWidgetLayerId;
}

// GetWidgetLayerIdOut @ 142eab0c0

int __thiscall FSnapshotWidgetReflectorNode::GetWidgetLayerIdOut(FSnapshotWidgetReflectorNode *this)

{
  return this->CachedWidgetLayerIdOut;
}

// GetWidgetLineNumber @ 142eab170

int __thiscall FSnapshotWidgetReflectorNode::GetWidgetLineNumber(FSnapshotWidgetReflectorNode *this)

{
  return this->CachedWidgetLineNumber;
}

// GetWidgetNeedsTick @ 142eab230

bool __thiscall FSnapshotWidgetReflectorNode::GetWidgetNeedsTick(FSnapshotWidgetReflectorNode *this)

{
  return this->bCachedWidgetNeedsTick;
}

// GetWidgetReadableLocation @ 142eab2f0

FText * __thiscall
FSnapshotWidgetReflectorNode::GetWidgetReadableLocation
          (FSnapshotWidgetReflectorNode *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->CachedWidgetReadableLocation).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->CachedWidgetReadableLocation).Flags;
  return __return_storage_ptr__;
}

// GetWidgetSupportsInvalidation @ 142eab960

bool __thiscall
FSnapshotWidgetReflectorNode::GetWidgetSupportsInvalidation(FSnapshotWidgetReflectorNode *this)

{
  return this->bCachedSupportsInvalidation;
}

// GetWidgetType @ 142eaba20

FText * __thiscall
FSnapshotWidgetReflectorNode::GetWidgetType
          (FSnapshotWidgetReflectorNode *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->CachedWidgetType).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->CachedWidgetType).Flags;
  return __return_storage_ptr__;
}

// GetWidgetTypeAndShortName @ 142eabf80

FText * __thiscall
FSnapshotWidgetReflectorNode::GetWidgetTypeAndShortName
          (FSnapshotWidgetReflectorNode *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->CachedWidgetTypeAndShortName).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->CachedWidgetTypeAndShortName).Flags;
  return __return_storage_ptr__;
}

// GetWidgetVisibilityInherited @ 142eac250

bool __thiscall
FSnapshotWidgetReflectorNode::GetWidgetVisibilityInherited(FSnapshotWidgetReflectorNode *this)

{
  return this->bCachedWidgetVisibleInherited;
}

// GetWidgetVisibilityText @ 142eac340

FText * __thiscall
FSnapshotWidgetReflectorNode::GetWidgetVisibilityText
          (FSnapshotWidgetReflectorNode *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->CachedWidgetVisibilityText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->CachedWidgetVisibilityText).Flags;
  return __return_storage_ptr__;
}

// GetWidgetVisible @ 142eac520

bool __thiscall FSnapshotWidgetReflectorNode::GetWidgetVisible(FSnapshotWidgetReflectorNode *this)

{
  return this->bCachedWidgetVisible;
}

// HasValidWidgetAssetData @ 142eba280

bool __thiscall
FSnapshotWidgetReflectorNode::HasValidWidgetAssetData(FSnapshotWidgetReflectorNode *this)

{
  if (((this->CachedWidgetAssetData).PackageName != (FName)0x0) &&
     ((this->CachedWidgetAssetData).AssetName != (FName)0x0)) {
    return true;
  }
  return false;
}

// IsWidgetLive @ 142ebf7e0

bool __thiscall FSnapshotWidgetReflectorNode::IsWidgetLive(FSnapshotWidgetReflectorNode *this)

{
  return false;
}

// ParseLinearColorJsonValue @ 142ee4180

FLinearColor * __cdecl
`FSnapshotWidgetReflectorNode::FromJson'::__l2::Internal::ParseLinearColorJsonValue
          (FLinearColor *__return_storage_ptr__,TSharedPtr<FJsonValue,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  FLinearColor *pFVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (param_1->Object == (FJsonValue *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    return __return_storage_ptr__;
  }
  pTVar4 = FJsonValue::AsArray(param_1->Object);
  if (pTVar4->ArrayNum != 4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructJsonArray.Num() == 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\WidgetReflectorNode.cpp"
                       ,0x290,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FLinearColor *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (pTVar4->ArrayNum < 4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FLinearColor *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar1 = (pTVar4->AllocatorInstance).Data;
  if (*(longlong *)(pFVar1 + 0x30) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FLinearColor *)(*pcVar2)();
      return pFVar5;
    }
  }
  dVar6 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x30));
  if (pTVar4->ArrayNum < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FLinearColor *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar1 = (pTVar4->AllocatorInstance).Data;
  if (*(longlong *)(pFVar1 + 0x20) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FLinearColor *)(*pcVar2)();
      return pFVar5;
    }
  }
  dVar7 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x20));
  if (pTVar4->ArrayNum < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FLinearColor *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar1 = (pTVar4->AllocatorInstance).Data;
  if (*(longlong *)(pFVar1 + 0x10) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FLinearColor *)(*pcVar2)();
      return pFVar5;
    }
  }
  dVar8 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x10));
  if (pTVar4->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FLinearColor *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar1 = (pTVar4->AllocatorInstance).Data;
  if (*(longlong *)pFVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FLinearColor *)(*pcVar2)();
      return pFVar5;
    }
  }
  dVar9 = FJsonValue::AsNumber(*(FJsonValue **)pFVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.G = (float)dVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.B = (float)dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.A = (float)dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.R = (float)dVar9;
  return __return_storage_ptr__;
}

// ParseMatrix2x2JsonValue @ 142ee4420

TMatrix2x2<float> * __cdecl
`FSnapshotWidgetReflectorNode::FromJson'::__l2::Internal::ParseMatrix2x2JsonValue
          (TMatrix2x2<float> *__return_storage_ptr__,TSharedPtr<FJsonValue,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  TMatrix2x2<float> *pTVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (param_1->Object == (FJsonValue *)0x0) {
    __return_storage_ptr__->M[0] = (float  [2])0x3f800000;
    __return_storage_ptr__->M[1][0] = 0.0;
    __return_storage_ptr__->M[1][1] = 1.0;
    return __return_storage_ptr__;
  }
  pTVar4 = FJsonValue::AsArray(param_1->Object);
  if (pTVar4->ArrayNum != 4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructJsonArray.Num() == 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\WidgetReflectorNode.cpp"
                       ,0x261,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TMatrix2x2<float> *)(*pcVar2)();
      return pTVar5;
    }
  }
  if (pTVar4->ArrayNum < 4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TMatrix2x2<float> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar1 = (pTVar4->AllocatorInstance).Data;
  if (*(longlong *)(pFVar1 + 0x30) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TMatrix2x2<float> *)(*pcVar2)();
      return pTVar5;
    }
  }
  dVar6 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x30));
  if (pTVar4->ArrayNum < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TMatrix2x2<float> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar1 = (pTVar4->AllocatorInstance).Data;
  if (*(longlong *)(pFVar1 + 0x20) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TMatrix2x2<float> *)(*pcVar2)();
      return pTVar5;
    }
  }
  dVar7 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x20));
  if (pTVar4->ArrayNum < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TMatrix2x2<float> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar1 = (pTVar4->AllocatorInstance).Data;
  if (*(longlong *)(pFVar1 + 0x10) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TMatrix2x2<float> *)(*pcVar2)();
      return pTVar5;
    }
  }
  dVar8 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x10));
  if (pTVar4->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TMatrix2x2<float> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar1 = (pTVar4->AllocatorInstance).Data;
  if (*(longlong *)pFVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TMatrix2x2<float> *)(*pcVar2)();
      return pTVar5;
    }
  }
  dVar9 = FJsonValue::AsNumber(*(FJsonValue **)pFVar1);
  __return_storage_ptr__->M[0][1] = (float)dVar8;
  __return_storage_ptr__->M[1][0] = (float)dVar7;
  __return_storage_ptr__->M[1][1] = (float)dVar6;
  __return_storage_ptr__->M[0][0] = (float)dVar9;
  return __return_storage_ptr__;
}

// ParseVector2DJsonValue @ 142ee46d0

TVector2<double> * __cdecl
`FSnapshotWidgetReflectorNode::FromJson'::__l2::Internal::ParseVector2DJsonValue
          (TVector2<double> *__return_storage_ptr__,TSharedPtr<FJsonValue,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  TVector2<double> *pTVar7;
  
  if (param_1->Object == (FJsonValue *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
    return __return_storage_ptr__;
  }
  pTVar6 = FJsonValue::AsArray(param_1->Object);
  if (pTVar6->ArrayNum != 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructJsonArray.Num() == 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\WidgetReflectorNode.cpp"
                       ,0x252,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVector2<double> *)(*pcVar2)();
      return pTVar7;
    }
  }
  if (pTVar6->ArrayNum < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVector2<double> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (pTVar6->AllocatorInstance).Data;
  if (*(longlong *)(pFVar1 + 0x10) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVector2<double> *)(*pcVar2)();
      return pTVar7;
    }
  }
  dVar3 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x10));
  if (pTVar6->ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVector2<double> *)(*pcVar2)();
      return pTVar7;
    }
  }
  pFVar1 = (pTVar6->AllocatorInstance).Data;
  if (*(longlong *)pFVar1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVector2<double> *)(*pcVar2)();
      return pTVar7;
    }
  }
  dVar4 = FJsonValue::AsNumber(*(FJsonValue **)pFVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)dVar4;
  return __return_storage_ptr__;
}

// ToJson @ 142f0eb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<FJsonValue,1> * __cdecl
FSnapshotWidgetReflectorNode::ToJson
          (TSharedRef<FJsonValue,1> *__return_storage_ptr__,
          TSharedRef<FSnapshotWidgetReflectorNode,1> *param_1)

{
  float fVar1;
  int iVar2;
  TVector2<float>_u_0 TVar3;
  FSnapshotWidgetReflectorNode *pFVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FJsonValueObject *pFVar10;
  TSharedRef<FJsonValue,1> *pTVar11;
  FString *pFVar12;
  FJsonValueObject *pFVar13;
  undefined8 *puVar14;
  FJsonObject *pFVar15;
  undefined8 *puVar16;
  undefined1 auStack_d38 [32];
  TSharedPtr<FJsonValue,1> *local_d18;
  TSharedPtr<FJsonValue,1> *local_d10;
  longlong local_d08;
  longlong local_d00;
  undefined8 local_cf8;
  undefined1 local_ce8 [8];
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_ce0;
  FString local_cd0;
  TSharedPtr<FJsonValue,1> local_cc0;
  TSharedRef<FJsonObject,1> local_ca8;
  TSharedRef<FJsonObject,1> local_c98;
  TRawPtrProxy<FJsonObject> local_c88;
  TRawPtrProxy<FJsonObject> local_c80;
  TVector2<float>_u_0 local_c78;
  TRawPtrProxy<FJsonValueObject> local_c70;
  TVector2<float>_u_0 local_c68;
  TRawPtrProxy<FJsonObject> local_c60;
  TRawPtrProxy<FJsonValueObject> local_c58;
  TRawPtrProxy<FJsonValueObject> local_c50;
  TSharedPtr<FJsonValue,1> local_c48;
  TSharedRef<FJsonObject,1> local_c38;
  TSharedPtr<FJsonValue,1> local_c28;
  TSharedPtr<FJsonValue,1> local_c18;
  TSharedPtr<FJsonValue,1> local_c08;
  TSharedPtr<FJsonValue,1> local_bf8;
  TSharedPtr<FJsonValue,1> local_be8;
  TSharedRef<FSnapshotWidgetReflectorNode,1> local_bd8;
  FString local_bc8;
  FString local_bb8;
  FString local_ba8;
  TSharedPtr<FJsonValue,1> local_b98;
  FString local_b88;
  FString local_b78;
  FString local_b68;
  FString local_b58;
  FString local_b48;
  TSharedPtr<FJsonValue,1> local_b38;
  FString local_b28;
  FString local_b18;
  FString local_b08;
  FString local_af8;
  FString local_ae8;
  FString local_ad8;
  FString local_ac8;
  FString local_ab8;
  FString local_aa8;
  FString local_a98;
  FString local_a88;
  FString local_a78;
  FString local_a68;
  FString local_a58;
  FString local_a48;
  FString local_a38;
  FString local_a28;
  FString local_a18;
  FString local_a08;
  FString local_9f8;
  FString local_9e8;
  FString local_9d8;
  FString local_9c8;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  FString local_978;
  FString local_968;
  TSharedRef<FJsonValue,1> local_958;
  TSharedPtr<FJsonObject,1> local_948;
  TSharedRef<FJsonValue,1> local_938;
  TSharedRef<FJsonValue,1> local_928;
  TSharedRef<FJsonValue,1> local_918;
  TSharedPtr<FJsonObject,1> local_908;
  TSharedRef<FJsonValue,1> local_8f8;
  TSharedRef<FJsonValue,1> local_8e8;
  TSharedRef<FJsonValue,1> local_8d8;
  TSharedRef<FJsonValue,1> local_8c8;
  FString local_8b8;
  TSharedRef<FJsonValue,1> local_8a8;
  TSharedPtr<FJsonObject,1> local_898;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d38;
  pFVar10 = ::operator_new(0x50);
  pFVar13 = (FJsonValueObject *)0x0;
  local_c88.Object = (FJsonObject *)pFVar13;
  if (pFVar10 != (FJsonValueObject *)0x0) {
    (pFVar10->Value).Object = (FJsonObject *)0x0;
    (pFVar10->Value).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar10[1].Value.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar10[2]._padding_ = 0;
    pFVar10->_padding_ = 0;
    pFVar10->_padding_ = 0;
    pFVar10[1]._padding_ = 0;
    *(undefined4 *)&pFVar10[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pFVar10[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar10[1].Value.Object = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar10[1].Value.Object + 4) = 0;
    pFVar10[2]._padding_ = 0;
    local_c88.Object = (FJsonObject *)pFVar10;
  }
  TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>(&local_ca8,&local_c88);
  fVar1 = *(float *)&param_1->Object->_padding_;
  TVar3 = *(TVector2<float>_u_0 *)((longlong)&param_1->Object->_padding_ + 4);
  pFVar10 = ::operator_new(0x50);
  local_c80.Object = (FJsonObject *)pFVar13;
  if (pFVar10 != (FJsonValueObject *)0x0) {
    (pFVar10->Value).Object = (FJsonObject *)0x0;
    (pFVar10->Value).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar10[1].Value.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar10[2]._padding_ = 0;
    pFVar10->_padding_ = 0;
    pFVar10->_padding_ = 0;
    pFVar10[1]._padding_ = 0;
    *(undefined4 *)&pFVar10[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pFVar10[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar10[1].Value.Object = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar10[1].Value.Object + 4) = 0;
    pFVar10[2]._padding_ = 0;
    local_c80.Object = (FJsonObject *)pFVar10;
  }
  TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>(&local_c38,&local_c80);
  ::FString::FString(&local_bc8,L"Scale");
  pFVar15 = local_c38.Object;
  FJsonObject::SetNumberField(local_c38.Object,&local_bc8,(double)fVar1);
  if (local_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bc8.Data.AllocatorInstance.Data);
  }
  local_c78 = TVar3;
  pTVar11 = `FSnapshotWidgetReflectorNode::ToJson'::__l2::Internal::CreateVector2DJsonValue
                      (&local_958,(TVector2<float> *)&local_c78._s_0);
  local_c48.Object = pTVar11->Object;
  local_c48.SharedReferenceCount.ReferenceController =
       (pTVar11->SharedReferenceCount).ReferenceController;
  if (local_c48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_bb8,L"Translation");
  FJsonObject::SetField(pFVar15,&local_bb8,&local_c48);
  if (local_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bb8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_958.SharedReferenceCount.ReferenceController);
  pFVar10 = ::operator_new(0x20);
  local_c70.Object = pFVar13;
  if (pFVar10 != (FJsonValueObject *)0x0) {
    local_948.Object = local_c38.Object;
    local_948.SharedReferenceCount.ReferenceController =
         local_c38.SharedReferenceCount.ReferenceController;
    if (local_c38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c70.Object = FJsonValueObject::FJsonValueObject(pFVar10,&local_948);
  }
  TSharedRef<FJsonValue,1>::TSharedRef<FJsonValue,1><FJsonValueObject>(&local_938,&local_c70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c38.SharedReferenceCount.ReferenceController);
  local_b98.Object = local_938.Object;
  local_b98.SharedReferenceCount.ReferenceController =
       local_938.SharedReferenceCount.ReferenceController;
  if (local_938.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_938.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_938.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_ba8,L"AccumulatedLayoutTransform");
  pFVar15 = local_ca8.Object;
  FJsonObject::SetField(local_ca8.Object,&local_ba8,&local_b98);
  if (local_ba8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ba8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_938.SharedReferenceCount.ReferenceController);
  pTVar11 = `FSnapshotWidgetReflectorNode::ToJson'::__l2::Internal::
            CreateSlateRenderTransformJsonValue
                      (&local_928,(TTransform2<float> *)((longlong)&param_1->Object->_padding_ + 4))
  ;
  local_c28.Object = pTVar11->Object;
  local_c28.SharedReferenceCount.ReferenceController =
       (pTVar11->SharedReferenceCount).ReferenceController;
  if (local_c28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_b88,L"AccumulatedRenderTransform");
  FJsonObject::SetField(pFVar15,&local_b88,&local_c28);
  if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b88.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_928.SharedReferenceCount.ReferenceController);
  local_c68 = (TVector2<float>_u_0)param_1->Object->_padding_;
  pTVar11 = `FSnapshotWidgetReflectorNode::ToJson'::__l2::Internal::CreateVector2DJsonValue
                      (&local_918,(TVector2<float> *)&local_c68._s_0);
  local_c18.Object = pTVar11->Object;
  local_c18.SharedReferenceCount.ReferenceController =
       (pTVar11->SharedReferenceCount).ReferenceController;
  if (local_c18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_b78,L"LocalSize");
  FJsonObject::SetField(pFVar15,&local_b78,&local_c18);
  if (local_b78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b78.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_918.SharedReferenceCount.ReferenceController);
  pFVar4 = param_1->Object;
  pFVar10 = ::operator_new(0x50);
  local_c60.Object = (FJsonObject *)pFVar13;
  if (pFVar10 != (FJsonValueObject *)0x0) {
    (pFVar10->Value).Object = (FJsonObject *)0x0;
    (pFVar10->Value).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar10[1].Value.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar10[2]._padding_ = 0;
    pFVar10->_padding_ = 0;
    pFVar10->_padding_ = 0;
    pFVar10[1]._padding_ = 0;
    *(undefined4 *)&pFVar10[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pFVar10[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar10[1].Value.Object = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar10[1].Value.Object + 4) = 0;
    pFVar10[2]._padding_ = 0;
    local_c60.Object = (FJsonObject *)pFVar10;
    pFVar15 = local_ca8.Object;
  }
  TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>(&local_c98,&local_c60);
  lVar6 = pFVar4->_padding_;
  ::FString::FString(&local_b68,L"IsHitTestVisible");
  FJsonObject::SetBoolField(local_c98.Object,&local_b68,SUB81(lVar6,0));
  if (local_b68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b68.Data.AllocatorInstance.Data);
  }
  bVar8 = *(bool *)((longlong)&pFVar4->_padding_ + 1);
  ::FString::FString(&local_b58,L"AreChildrenHitTestVisible");
  FJsonObject::SetBoolField(local_c98.Object,&local_b58,bVar8);
  if (local_b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b58.Data.AllocatorInstance.Data);
  }
  pFVar10 = ::operator_new(0x20);
  local_c58.Object = pFVar13;
  if (pFVar10 != (FJsonValueObject *)0x0) {
    local_908.Object = local_c98.Object;
    local_908.SharedReferenceCount.ReferenceController =
         local_c98.SharedReferenceCount.ReferenceController;
    if (local_c98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c58.Object = FJsonValueObject::FJsonValueObject(pFVar10,&local_908);
  }
  TSharedRef<FJsonValue,1>::TSharedRef<FJsonValue,1><FJsonValueObject>(&local_8f8,&local_c58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c98.SharedReferenceCount.ReferenceController);
  local_b38.Object = local_8f8.Object;
  local_b38.SharedReferenceCount.ReferenceController =
       local_8f8.SharedReferenceCount.ReferenceController;
  if (local_8f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_8f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_8f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_b48,L"HitTestInfo");
  FJsonObject::SetField(pFVar15,&local_b48,&local_b38);
  if (local_b48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b48.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8f8.SharedReferenceCount.ReferenceController);
  pTVar11 = `FSnapshotWidgetReflectorNode::ToJson'::__l2::Internal::CreateLinearColorJsonValue
                      (&local_8e8,(FLinearColor *)&param_1->Object->_padding_);
  local_c08.Object = pTVar11->Object;
  local_c08.SharedReferenceCount.ReferenceController =
       (pTVar11->SharedReferenceCount).ReferenceController;
  if (local_c08.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c08.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c08.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_b28,L"Tint");
  FJsonObject::SetField(pFVar15,&local_b28,&local_c08);
  if (local_b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b28.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c08.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8e8.SharedReferenceCount.ReferenceController);
  pFVar12 = FText::ToString(&param_1->Object->CachedWidgetType);
  ::FString::FString(&local_b18,L"WidgetType");
  FJsonObject::SetStringField(pFVar15,&local_b18,pFVar12);
  if (local_b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b18.Data.AllocatorInstance.Data);
  }
  pFVar12 = FText::ToString(&param_1->Object->CachedWidgetTypeAndShortName);
  ::FString::FString(&local_b08,L"WidgetTypeAndShortName");
  FJsonObject::SetStringField(pFVar15,&local_b08,pFVar12);
  if (local_b08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b08.Data.AllocatorInstance.Data);
  }
  pFVar12 = FText::ToString(&param_1->Object->CachedWidgetVisibilityText);
  ::FString::FString(&local_af8,L"WidgetVisibilityText");
  FJsonObject::SetStringField(pFVar15,&local_af8,pFVar12);
  if (local_af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_af8.Data.AllocatorInstance.Data);
  }
  bVar8 = param_1->Object->bCachedWidgetVisible;
  ::FString::FString(&local_ae8,L"WidgetVisible");
  FJsonObject::SetBoolField(pFVar15,&local_ae8,bVar8);
  if (local_ae8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ae8.Data.AllocatorInstance.Data);
  }
  bVar8 = param_1->Object->bCachedWidgetVisibleInherited;
  ::FString::FString(&local_ad8,L"WidgetVisibleInherited");
  FJsonObject::SetBoolField(pFVar15,&local_ad8,bVar8);
  if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
  }
  bVar8 = param_1->Object->bCachedSupportsInvalidation;
  ::FString::FString(&local_ac8,L"SupportsInvalidation");
  FJsonObject::SetBoolField(pFVar15,&local_ac8,bVar8);
  if (local_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ac8.Data.AllocatorInstance.Data);
  }
  bVar8 = param_1->Object->bCachedSupportsInvalidationRecursive;
  ::FString::FString(&local_ab8,L"SupportsInvalidationRecursive");
  FJsonObject::SetBoolField(pFVar15,&local_ab8,bVar8);
  if (local_ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ab8.Data.AllocatorInstance.Data);
  }
  bVar8 = param_1->Object->bCachedWidgetFocusable;
  ::FString::FString(&local_aa8,L"WidgetFocusable");
  FJsonObject::SetBoolField(pFVar15,&local_aa8,bVar8);
  if (local_aa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_aa8.Data.AllocatorInstance.Data);
  }
  bVar8 = param_1->Object->bCachedWidgetNeedsTick;
  ::FString::FString(&local_a98,L"WidgetNeedsTick");
  FJsonObject::SetBoolField(pFVar15,&local_a98,bVar8);
  if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a98.Data.AllocatorInstance.Data);
  }
  bVar8 = param_1->Object->bCachedWidgetIsVolatile;
  ::FString::FString(&local_a88,L"WidgetIsVolatile");
  FJsonObject::SetBoolField(pFVar15,&local_a88,bVar8);
  if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a88.Data.AllocatorInstance.Data);
  }
  bVar8 = param_1->Object->bCachedWidgetIsVolatileIndirectly;
  ::FString::FString(&local_a78,L"WidgetIsVolatileIndirectly");
  FJsonObject::SetBoolField(pFVar15,&local_a78,bVar8);
  if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a78.Data.AllocatorInstance.Data);
  }
  bVar8 = param_1->Object->bCachedWidgetHasActiveTimers;
  ::FString::FString(&local_a68,L"WidgetHasActiveTimers");
  FJsonObject::SetBoolField(pFVar15,&local_a68,bVar8);
  if (local_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a68.Data.AllocatorInstance.Data);
  }
  bVar8 = param_1->Object->bCachedWidgetIsInvalidationRoot;
  ::FString::FString(&local_a58,L"WidgetIsInvalidationRoot");
  FJsonObject::SetBoolField(pFVar15,&local_a58,bVar8);
  if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a58.Data.AllocatorInstance.Data);
  }
  bVar8 = param_1->Object->bCachedWidgetEnabled;
  ::FString::FString(&local_a48,L"WidgetEnabled");
  FJsonObject::SetBoolField(pFVar15,&local_a48,bVar8);
  if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a48.Data.AllocatorInstance.Data);
  }
  pFVar12 = FText::ToString(&param_1->Object->CachedWidgetClippingText);
  ::FString::FString(&local_a38,L"WidgetClippingText");
  FJsonObject::SetStringField(pFVar15,&local_a38,pFVar12);
  if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a38.Data.AllocatorInstance.Data);
  }
  iVar2 = param_1->Object->CachedWidgetLayerId;
  ::FString::FString(&local_a28,L"WidgetLayerId");
  FJsonObject::SetNumberField(pFVar15,&local_a28,(double)iVar2);
  if (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a28.Data.AllocatorInstance.Data);
  }
  iVar2 = param_1->Object->CachedWidgetLayerIdOut;
  ::FString::FString(&local_a18,L"WidgetLayerIdOut");
  FJsonObject::SetNumberField(pFVar15,&local_a18,(double)iVar2);
  if (local_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a18.Data.AllocatorInstance.Data);
  }
  pFVar12 = FText::ToString(&param_1->Object->CachedWidgetReadableLocation);
  ::FString::FString(&local_a08,L"WidgetReadableLocation");
  FJsonObject::SetStringField(pFVar15,&local_a08,pFVar12);
  if (local_a08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a08.Data.AllocatorInstance.Data);
  }
  pFVar4 = param_1->Object;
  ::FString::FString(&local_9f8,L"WidgetFile");
  FJsonObject::SetStringField(pFVar15,&local_9f8,&pFVar4->CachedWidgetFile);
  if (local_9f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9f8.Data.AllocatorInstance.Data);
  }
  iVar2 = param_1->Object->CachedWidgetLineNumber;
  ::FString::FString(&local_9e8,L"WidgetLineNumber");
  FJsonObject::SetNumberField(pFVar15,&local_9e8,(double)iVar2);
  if (local_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9e8.Data.AllocatorInstance.Data);
  }
  iVar2 = param_1->Object->CachedWidgetAttributeCount;
  ::FString::FString(&local_9d8,L"WidgetAttributeCount");
  FJsonObject::SetNumberField(pFVar15,&local_9d8,(double)iVar2);
  if (local_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9d8.Data.AllocatorInstance.Data);
  }
  iVar2 = param_1->Object->CachedWidgetCollapsedAttributeCount;
  ::FString::FString(&local_9c8,L"WidgetCollapsedAttributeCount");
  FJsonObject::SetNumberField(pFVar15,&local_9c8,(double)iVar2);
  if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
  }
  pTVar11 = `FSnapshotWidgetReflectorNode::ToJson'::__l2::Internal::CreateVector2DJsonValue
                      (&local_8d8,&param_1->Object->CachedWidgetDesiredSize);
  local_bf8.Object = pTVar11->Object;
  local_bf8.SharedReferenceCount.ReferenceController =
       (pTVar11->SharedReferenceCount).ReferenceController;
  if (local_bf8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_bf8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_bf8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_9b8,L"WidgetDesiredSize");
  FJsonObject::SetField(pFVar15,&local_9b8,&local_bf8);
  if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_bf8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8d8.SharedReferenceCount.ReferenceController);
  pTVar11 = `FSnapshotWidgetReflectorNode::ToJson'::__l2::Internal::CreateSlateColorJsonValue
                      (&local_8c8,&param_1->Object->CachedWidgetForegroundColor);
  local_be8.Object = pTVar11->Object;
  local_be8.SharedReferenceCount.ReferenceController =
       (pTVar11->SharedReferenceCount).ReferenceController;
  if (local_be8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_be8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_be8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_9a8,L"WidgetForegroundColor");
  FJsonObject::SetField(pFVar15,&local_9a8,&local_be8);
  if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_be8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8c8.SharedReferenceCount.ReferenceController);
  ::FString::PrintfImpl(&local_988,L"0x%0llx");
  ::FString::FString(&local_998,L"WidgetAddress");
  FJsonObject::SetStringField(pFVar15,&local_998,&local_988);
  if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_998.Data.AllocatorInstance.Data);
  }
  if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_988.Data.AllocatorInstance.Data);
  }
  pFVar4 = param_1->Object;
  local_888.Base = local_868;
  local_888.CurPos = local_868;
  local_888.bIsDynamic = false;
  local_888.bIsExternal = false;
  local_888.End = local_52;
  if (((pFVar4->CachedWidgetAssetData).PackageName != (FName)0x0) &&
     ((pFVar4->CachedWidgetAssetData).AssetName != (FName)0x0)) {
    ::FName::AppendString(&(pFVar4->CachedWidgetAssetData).PackageName,&local_888);
    if (local_888.End < local_888.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_888,1);
    }
    *local_888.CurPos = L'.';
    local_888.CurPos = local_888.CurPos + 1;
    ::FName::AppendString(&(pFVar4->CachedWidgetAssetData).AssetName,&local_888);
  }
  local_cd0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_cd0.Data.ArrayNum = 0;
  local_cd0.Data.ArrayMax = 0;
  pFVar12 = ::FString::ConstructFromPtrSize
                      (&local_8b8,local_888.Base,
                       (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1));
  if (&local_cd0 != pFVar12) {
    if (local_cd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cd0.Data.AllocatorInstance.Data);
    }
    local_cd0.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_cd0.Data.ArrayNum = (pFVar12->Data).ArrayNum;
    local_cd0.Data.ArrayMax = (pFVar12->Data).ArrayMax;
    (pFVar12->Data).ArrayNum = 0;
    (pFVar12->Data).ArrayMax = 0;
  }
  if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  ::FString::FString(&local_978,L"WidgetAssetPath");
  FJsonObject::SetStringField(pFVar15,&local_978,&local_cd0);
  if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.Data.AllocatorInstance.Data);
  }
  if (local_cd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_cd0.Data.AllocatorInstance.Data);
  }
  pFVar4 = param_1->Object;
  local_ce0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ce0.ArrayNum = 0;
  local_ce0.ArrayMax = 0;
  iVar2 = (int)pFVar4->_padding_;
  puVar14 = (undefined8 *)pFVar4->_padding_;
  puVar16 = puVar14 + (longlong)iVar2 * 2;
  while( true ) {
    if ((int)pFVar4->_padding_ != iVar2) {
      local_ce8[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FWidgetReflectorNodeBase,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_ce8);
    }
    if (puVar14 == puVar16) break;
    cVar7 = (**(code **)(*(longlong *)*puVar14 + 8))();
    if ((cVar7 != '\x01') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ChildReflectorNode->GetNodeType() == EWidgetReflectorNodeType::Snapshot"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\WidgetReflectorNode.cpp"
                           ,0x23f,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TSharedRef<FJsonValue,1> *)(*pcVar5)();
      return pTVar11;
    }
    local_bd8.Object = (FSnapshotWidgetReflectorNode *)*puVar14;
    local_bd8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar14[1];
    if (local_bd8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_bd8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_bd8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar11 = ToJson(&local_8a8,&local_bd8);
    local_cc0.Object = pTVar11->Object;
    local_cc0.SharedReferenceCount.ReferenceController =
         (pTVar11->SharedReferenceCount).ReferenceController;
    if (local_cc0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_cc0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_cc0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_ce0.AllocatorInstance.Data <= &local_cc0) {
      if (&local_cc0 <
          (TSharedPtr<FJsonValue,1> *)
          (local_ce0.AllocatorInstance.Data + (longlong)local_ce0.ArrayMax * 0x10)) {
        local_d00 = (longlong)local_ce0.ArrayNum;
        local_cf8 = 0x10;
        local_d18 = &local_cc0;
        local_d10 = (TSharedPtr<FJsonValue,1> *)local_ce0.AllocatorInstance.Data;
        local_d08 = (longlong)local_ce0.ArrayMax;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TSharedRef<FJsonValue,1> *)(*pcVar5)();
          return pTVar11;
        }
      }
    }
    iVar9 = local_ce0.ArrayNum;
    if (local_ce0.ArrayNum == local_ce0.ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_ce0.AllocatorInstance,&local_ce0.ArrayMax);
    }
    local_ce0.ArrayNum = iVar9 + 1;
    *(FJsonValue **)&local_ce0.AllocatorInstance.Data[(longlong)iVar9 * 0x10].field_0x0 =
         local_cc0.Object;
    *(TReferenceControllerBase<1> **)(local_ce0.AllocatorInstance.Data + (longlong)iVar9 * 0x10 + 8)
         = local_cc0.SharedReferenceCount.ReferenceController;
    local_cc0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_cc0.Object = (FJsonValue *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_bd8.SharedReferenceCount.ReferenceController);
    puVar14 = puVar14 + 2;
  }
  ::FString::FString(&local_968,L"ChildNodes");
  FJsonObject::SetArrayField(local_ca8.Object,&local_968,&local_ce0);
  if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_968.Data.AllocatorInstance.Data);
  }
  pFVar10 = ::operator_new(0x20);
  if (pFVar10 != (FJsonValueObject *)0x0) {
    local_898.Object = local_ca8.Object;
    local_898.SharedReferenceCount.ReferenceController =
         local_ca8.SharedReferenceCount.ReferenceController;
    if (local_ca8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_ca8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_ca8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar13 = FJsonValueObject::FJsonValueObject(pFVar10,&local_898);
  }
  local_c50.Object = pFVar13;
  TSharedRef<FJsonValue,1>::TSharedRef<FJsonValue,1><FJsonValueObject>
            (__return_storage_ptr__,&local_c50);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_ce0.AllocatorInstance.Data,local_ce0.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_ce0.AllocatorInstance.Data !=
      (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_ce0.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ca8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

