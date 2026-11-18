// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// FWidgetProxy @ 142477270

FWidgetProxy * __thiscall FWidgetProxy::FWidgetProxy(FWidgetProxy *this,FWidgetProxy *param_1)

{
  byte bVar1;
  
  this->Widget = param_1->Widget;
  this->Index = param_1->Index;
  this->ParentIndex = param_1->ParentIndex;
  this->LeafMostChildIndex = param_1->LeafMostChildIndex;
  this->CurrentInvalidateReason = param_1->CurrentInvalidateReason;
  (this->Visibility).field0_0x0 = (param_1->Visibility).field0_0x0;
  bVar1 = ((this->field6_0x16).PrivateFlags ^ (param_1->field6_0x16).PrivateFlags) & 1 ^
          (this->field6_0x16).PrivateFlags;
  (this->field6_0x16).PrivateFlags = bVar1;
  bVar1 = (bVar1 ^ (param_1->field6_0x16).PrivateFlags) & 2 ^ bVar1;
  (this->field6_0x16).PrivateFlags = bVar1;
  bVar1 = (bVar1 ^ (param_1->field6_0x16).PrivateFlags) & 4 ^ bVar1;
  (this->field6_0x16).PrivateFlags = bVar1;
  bVar1 = (bVar1 ^ (param_1->field6_0x16).PrivateFlags) & 8 ^ bVar1;
  (this->field6_0x16).PrivateFlags = bVar1;
  (this->field6_0x16).PrivateFlags = (bVar1 ^ (param_1->field6_0x16).PrivateFlags) & 0x10 ^ bVar1;
  this->field6_0x16 = param_1->field6_0x16;
  bVar1 = ((this->field7_0x17).PrivateDebugFlags ^ (param_1->field7_0x17).PrivateDebugFlags) & 1 ^
          (this->field7_0x17).PrivateDebugFlags;
  (this->field7_0x17).PrivateDebugFlags = bVar1;
  bVar1 = (bVar1 ^ (param_1->field7_0x17).PrivateDebugFlags) & 2 ^ bVar1;
  (this->field7_0x17).PrivateDebugFlags = bVar1;
  bVar1 = (bVar1 ^ (param_1->field7_0x17).PrivateDebugFlags) & 4 ^ bVar1;
  (this->field7_0x17).PrivateDebugFlags = bVar1;
  (this->field7_0x17).PrivateDebugFlags =
       (bVar1 ^ (param_1->field7_0x17).PrivateDebugFlags) & 8 ^ bVar1;
  this->field7_0x17 = param_1->field7_0x17;
  return this;
}

// FWidgetProxy @ 142477350

FWidgetProxy * __thiscall FWidgetProxy::FWidgetProxy(FWidgetProxy *this,SWidget *param_1)

{
  this->Widget = param_1;
  this->Index = FSlateInvalidationWidgetIndex::Invalid;
  this->ParentIndex = FSlateInvalidationWidgetIndex::Invalid;
  this->LeafMostChildIndex = FSlateInvalidationWidgetIndex::Invalid;
  this->CurrentInvalidateReason = None;
  this->Visibility = (FSlateInvalidationWidgetVisibility_u_0)0x0;
  this->field6_0x16 = (FWidgetProxy_u_22)0x0;
  this->field7_0x17 = (FWidgetProxy_u_23)0x0;
  return this;
}

// GetWidgetAsShared @ 142497040

TSharedPtr<SWidget,1> * __thiscall
FWidgetProxy::GetWidgetAsShared(FWidgetProxy *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TSharedRef<SWidget,1> *pTVar3;
  TSharedRef<SWidget,1> local_18;
  
  if (this->Widget != (SWidget *)0x0) {
    pTVar3 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->Widget->_padding_,&local_18);
    pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    __return_storage_ptr__->Object = pSVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// MarkProxyUpdatedThisFrame @ 14249ca50

void __thiscall
FWidgetProxy::MarkProxyUpdatedThisFrame
          (FWidgetProxy *this,FSlateInvalidationWidgetPostHeap *param_1)

{
  if (((this->Widget != (SWidget *)0x0) && (((this->Visibility).field0_0x0.Flags & 3) == 3)) &&
     (this->Widget->UpdateFlags != None)) {
    FSlateInvalidationWidgetPostHeap::PushBackUnique(param_1,this);
    return;
  }
  return;
}

// ProcessLayoutInvalidation @ 1424a1b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWidgetProxy::ProcessLayoutInvalidation
          (FWidgetProxy *this,FSlateInvalidationWidgetPostHeap *param_1,
          FSlateInvalidationWidgetList *param_2,FSlateInvalidationRoot *param_3)

{
  uint uVar1;
  SWidget *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  atomic<int> aVar8;
  FSlateInvalidationWidgetList *pFVar9;
  bool bVar10;
  atomic<int> aVar11;
  UObject *this_00;
  UObject *pUVar12;
  UPackage *pUVar13;
  TEventRef<unsigned_int> TVar14;
  FDeprecateSlateVector2D FVar15;
  FWidgetProxy *pFVar16;
  FWriteBuffer *pFVar17;
  FSlateInvalidationWidgetIndex FVar18;
  TReferenceControllerBase<1> *pTVar19;
  bool bVar20;
  float fVar21;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 local_e8;
  FName local_e0;
  undefined8 local_d8;
  longlong local_d0;
  TSharedPtr<FReflectionMetaData,1> local_c8;
  undefined8 local_b8;
  FSlateInvalidationWidgetList *local_b0;
  FSlateInvalidationRoot *local_a8;
  FName local_a0;
  byte local_98;
  FName local_90;
  FName local_88;
  FName local_80 [3];
  undefined4 *local_68;
  longlong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_118;
  pSVar2 = this->Widget;
  local_b0 = param_2;
  local_a8 = param_3;
  FScopeCycleCounterSWidget::FScopeCycleCounterSWidget
            ((FScopeCycleCounterSWidget *)&local_a0,pSVar2);
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  local_d8 = 0;
  local_d0 = 0;
  if (-1 < AssetMetadataChannel->Enabled) {
    FReflectionMetaData::GetWidgetOrParentMetaData(&local_c8,pSVar2);
    if (local_c8.Object != (FReflectionMetaData *)0x0) {
      if ((local_c8.Object == (FReflectionMetaData *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this_00 = FWeakObjectPtr::Get(&((local_c8.Object)->Asset).WeakPtr);
      if (this_00 != (UObject *)0x0) {
        if ((local_c8.Object == (FReflectionMetaData *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_e0 = (local_c8.Object)->Name;
        pUVar12 = FWeakObjectPtr::Get(&((local_c8.Object)->Class).WeakPtr);
        local_d8 = *(undefined8 *)&pUVar12->field_0x18;
        pUVar13 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_00);
        local_d0 = pUVar13->_padding_;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
  }
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_f0 = (TVector2<float>_u_0)0x0;
    TVar14 = (TEventRef<unsigned_int>)&local_f0;
  }
  else {
    TVar14 = FStringTrace::GetNameRef(&local_90);
  }
  uVar3 = *(undefined8 *)TVar14;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_b8 = 0;
    TVar14 = (TEventRef<unsigned_int>)&local_b8;
  }
  else {
    TVar14 = FStringTrace::GetNameRef(&local_88);
  }
  uVar4 = *(undefined8 *)TVar14;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_e8 = 0;
    TVar14 = (TEventRef<unsigned_int>)&local_e8;
  }
  else {
    TVar14 = FStringTrace::GetNameRef(local_80);
  }
  uVar5 = *(undefined8 *)TVar14;
  bVar10 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_68);
    bVar10 = true;
    *local_68 = (int)uVar3;
    local_68[1] = (int)uVar4;
    local_68[2] = (int)uVar5;
    *(undefined8 *)(local_60 + 0x28) = *(undefined8 *)(local_60 + 0x20);
  }
  FVar15 = SWidget::GetDesiredSize(pSVar2);
  local_e8 = *(undefined8 *)FVar15;
  local_f0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  if (((this->Visibility).field0_0x0.Flags & 8) == 0) {
    if ((bool)pSVar2->bNeedsPrepass) {
      if (pSVar2->bPrepassLayoutScaleMultiplierSet == '\0') {
        SWidget::SlatePrepass(pSVar2,__real_3f800000);
      }
      else {
        SWidget::SlatePrepass(pSVar2,pSVar2->PrepassLayoutScaleMultiplierValue);
      }
    }
    else {
      fVar21 = __real_3f800000;
      if (pSVar2->bPrepassLayoutScaleMultiplierSet != '\0') {
        fVar21 = pSVar2->PrepassLayoutScaleMultiplierValue;
      }
      (**(code **)(pSVar2->_padding_ + 0x168))(pSVar2,fVar21);
    }
    FVar15 = SWidget::GetDesiredSize(pSVar2);
    local_f0 = *(TVector2<float>_u_0 *)FVar15;
  }
  pFVar9 = local_b0;
  if ((pSVar2->bInheritedVolatility == '\0') && (((this->Visibility).field0_0x0.Flags & 3) == 3)) {
    pSVar2->UpdateFlags = pSVar2->UpdateFlags | NeedsRepaint;
  }
  if ((float)local_f0 == (float)local_e8) {
    if ((local_f0._4_4_ == local_e8._4_4_) &&
       ((this->CurrentInvalidateReason & RenderTransform) == None)) goto LAB_1424a1f9d;
  }
  if (((this->ParentIndex).ArrayIndex == FSlateInvalidationWidgetIndex::Invalid.ArrayIndex) &&
     ((this->ParentIndex).ElementIndex == FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) {
    pTVar19 = (pSVar2->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
      aVar8 = pTVar19->SharedReferenceCount;
      do {
        if (aVar8 == (atomic<int>)0x0) {
          pTVar19 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1424a1ed0;
        }
        LOCK();
        aVar11 = pTVar19->SharedReferenceCount;
        bVar20 = aVar8 == aVar11;
        if (bVar20) {
          pTVar19->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
          aVar11 = aVar8;
        }
        UNLOCK();
        aVar8 = aVar11;
      } while (!bVar20);
      pSVar2 = (pSVar2->ParentWidgetPtr).Object;
      if (pSVar2 != (SWidget *)0x0) {
        SWidget::Invalidate(pSVar2,Layout);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19)
        ;
        goto LAB_1424a1f9d;
      }
    }
LAB_1424a1ed0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  }
  else {
    pFVar16 = FSlateInvalidationWidgetList::operator[](local_b0,this->ParentIndex);
    uVar1 = pFVar9->FirstArrayIndex;
    FVar18 = FSlateInvalidationWidgetIndex::Invalid;
    if (uVar1 != 0xffffffff) {
      FVar18 = (FSlateInvalidationWidgetIndex)
               ((uint)*(ushort *)((longlong)(int)uVar1 * 0x40 + 0xc + *(longlong *)&pFVar9->Data) <<
                0x10 | uVar1 & 0xffff);
    }
    if (((this->ParentIndex).ArrayIndex == FVar18.ArrayIndex) &&
       ((this->ParentIndex).ElementIndex == FVar18.ElementIndex)) {
      FSlateInvalidationRoot::InvalidateRootLayout(local_a8,pSVar2);
    }
    else if (((pFVar16->Visibility).field0_0x0.Flags & 8) == 0) {
      pFVar16->CurrentInvalidateReason = pFVar16->CurrentInvalidateReason | Layout;
      FSlateDebugging::BroadcastWidgetInvalidate(pFVar16->Widget,pSVar2,Layout);
      FSlateTrace::WidgetInvalidated(pFVar16->Widget,pSVar2,Layout);
      if (param_1->bIsHeap == false) {
        FSlateInvalidationWidgetPostHeap::PushBackUnique(param_1,pFVar16);
      }
      else {
        FSlateInvalidationWidgetPostHeap::HeapPushUnique(param_1,pFVar16);
      }
    }
  }
LAB_1424a1f9d:
  if (bVar10) {
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar6 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar17 = *(FWriteBuffer **)(lVar6 + 0x20);
    if ((int)pFVar17 - *(int *)&pFVar17->Cursor < 1) {
      pFVar17 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar17->Cursor = '\n';
    pFVar17->Cursor = pFVar17->Cursor + 1;
    pFVar17->Committed = pFVar17->Cursor;
  }
  if ((local_98 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_98 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_98 & 4) != 0) {
    FThreadStats::AddMessage(local_a0,CycleScopeEnd);
  }
  return;
}

// ProcessPostInvalidation @ 1424a2050

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWidgetProxy::ProcessPostInvalidation
          (FWidgetProxy *this,FSlateInvalidationWidgetPostHeap *param_1,
          FSlateInvalidationWidgetList *param_2,FSlateInvalidationRoot *param_3)

{
  SWidget *pSVar1;
  SWidget *pSVar2;
  FWidgetProxy *pFVar3;
  FName local_18;
  byte local_10;
  
  pSVar1 = this->Widget;
  if ((((this->Visibility).field0_0x0.Flags & 3) == 3) &&
     ((((this->ParentIndex).ArrayIndex != FSlateInvalidationWidgetIndex::Invalid.ArrayIndex ||
       ((this->ParentIndex).ElementIndex != FSlateInvalidationWidgetIndex::Invalid.ElementIndex)) &&
      (pSVar1->bPrepassLayoutScaleMultiplierSet == '\0')))) {
    FScopeCycleCounterSWidget::FScopeCycleCounterSWidget
              ((FScopeCycleCounterSWidget *)&local_18,pSVar1);
    pFVar3 = FSlateInvalidationWidgetList::operator[](param_2,this->ParentIndex);
    pSVar2 = pFVar3->Widget;
    if (pSVar2 != (SWidget *)0x0) {
      pSVar2->bNeedsPrepass = '\x01';
      pFVar3->CurrentInvalidateReason = pFVar3->CurrentInvalidateReason | Layout;
      FSlateDebugging::BroadcastWidgetInvalidate(pSVar2,pSVar1,Layout);
      FSlateTrace::WidgetInvalidated(pSVar2,pSVar1,Layout);
      FSlateInvalidationWidgetPostHeap::HeapPushUnique(param_1,pFVar3);
    }
  }
  else {
    if ((this->CurrentInvalidateReason & (RenderTransform|Layout)) != None) {
      ProcessLayoutInvalidation(this,param_1,param_2,param_3);
      return true;
    }
    if (((this->CurrentInvalidateReason & Paint) == None) || (pSVar1->bInheritedVolatility != '\0'))
    {
      return false;
    }
    FScopeCycleCounterSWidget::FScopeCycleCounterSWidget
              ((FScopeCycleCounterSWidget *)&local_18,pSVar1);
    pSVar1->UpdateFlags = pSVar1->UpdateFlags | NeedsRepaint;
  }
  if ((local_10 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_10 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_10 & 4) == 0) {
    return true;
  }
  FThreadStats::AddMessage(local_18,CycleScopeEnd);
  return true;
}

// Repaint @ 1424a5d70

/* WARNING: Enum "Type": Some values do not have unique names */

FUpdateResult * __thiscall
FWidgetProxy::Repaint
          (FWidgetProxy *this,FUpdateResult *__return_storage_ptr__,FPaintArgs *param_1,
          FSlateWindowElementList *param_2)

{
  EWidgetPixelSnapping EVar1;
  int iVar2;
  SWidget *this_00;
  SWidget *pSVar3;
  code *pcVar4;
  atomic<int> aVar5;
  EFlowDirection EVar6;
  bool bVar7;
  int iVar8;
  atomic<int> aVar9;
  int iVar10;
  int iVar11;
  FUpdateResult *pFVar12;
  byte bVar13;
  SWidget *pSVar14;
  bool bVar15;
  float fVar16;
  FPaintArgs local_68;
  
  this_00 = this->Widget;
  if ((this_00 == (SWidget *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\WidgetProxy.cpp"
                         ,0xf2,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FUpdateResult *)(*pcVar4)();
    return pFVar12;
  }
  iVar8 = FSlateWindowElementList::GetClippingIndex(param_2);
  bVar7 = (this_00->PersistentState).InitialClipState.bIsSet;
  if (bVar7 != false) {
    FSlateClippingManager::PushClippingState
              (&param_2->ClippingManager,&(this_00->PersistentState).InitialClipState.TypedValue);
  }
  local_68.PaintParentPtr = (SWidget *)0x0;
  iVar11 = param_1->CurrentGrid->CurrentUserIndex;
  param_1->CurrentGrid->CurrentUserIndex = (int)(this_00->PersistentState).IncomingUserIndex;
  EVar6 = GSlateFlowDirection;
  GSlateFlowDirection = (this_00->PersistentState).IncomingFlowDirection;
  pSVar3 = (SWidget *)(this_00->PersistentState).PaintParent.WeakReferenceCount.ReferenceController;
  pSVar14 = pSVar3;
  if (pSVar3 != (SWidget *)0x0) {
    aVar5 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar14 = local_68.PaintParentPtr;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1424a5e45;
      LOCK();
      aVar9 = *(atomic<int> *)&pSVar3->_padding_;
      bVar15 = aVar5 == aVar9;
      if (bVar15) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar9 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar9;
    } while (!bVar15);
    local_68.PaintParentPtr = (this_00->PersistentState).PaintParent.Object;
    pSVar14 = pSVar3;
  }
LAB_1424a5e45:
  local_68.RootGrid = param_1->RootGrid;
  local_68.CurrentGrid = param_1->CurrentGrid;
  local_68.WindowOffset.field0_0x0 = (param_1->WindowOffset).field0_0x0;
  local_68.CurrentTime = param_1->CurrentTime;
  local_68.DeltaTime = param_1->DeltaTime;
  local_68._44_4_ = *(undefined4 *)&param_1->field_0x2c;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
  bVar13 = (this_00->PersistentState).bInheritedHittestability | local_68._44_1_ & 0xfe;
  local_68._44_1_ = ((byte)(this_00->PersistentState).field_0x12b >> 1 ^ bVar13) & 2 ^ bVar13;
  iVar2 = (this_00->PersistentState).OutgoingLayerId;
  if (((GSlateEnableGlobalInvalidation != false) &&
      ((this_00->UpdateFlags & NeedsVolatilePaint) != None)) &&
     (this_00->bVolatilityAlwaysInvalidatesPrepass != '\0')) {
    this_00->bNeedsPrepass = '\x01';
    fVar16 = __real_3f800000;
    if (this_00->bPrepassLayoutScaleMultiplierSet != '\0') {
      fVar16 = this_00->PrepassLayoutScaleMultiplierValue;
    }
    SWidget::SlatePrepass(this_00,fVar16);
  }
  EVar1 = (this_00->PersistentState).InitialPixelSnappingMethod;
  if (EVar1 != Inherit) {
    FSlateWindowElementList::PushPixelSnappingMethod(param_2,EVar1);
  }
  iVar10 = SWidget::Paint(this_00,&local_68,&(this_00->PersistentState).AllottedGeometry,
                          &(this_00->PersistentState).CullingBounds,param_2,
                          (this_00->PersistentState).LayerId,&(this_00->PersistentState).WidgetStyle
                          ,(this_00->PersistentState).bParentEnabled);
  param_1->CurrentGrid->CurrentUserIndex = iVar11;
  if (bVar7 != false) {
    FSlateWindowElementList::PopClip(param_2);
    iVar11 = FSlateWindowElementList::GetClippingIndex(param_2);
    if ((iVar8 != iVar11) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartingClipIndex == OutDrawElements.GetClippingIndex()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\WidgetProxy.cpp"
                           ,0x124,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FUpdateResult *)(*pcVar4)();
      return pFVar12;
    }
  }
  if ((this_00->PersistentState).InitialPixelSnappingMethod != Inherit) {
    FSlateWindowElementList::PopPixelSnappingMethod(param_2);
  }
  FSlateWindowElementList::SetIsInGameLayer(param_2,(this_00->PersistentState).bIsInGameLayer);
  GSlateFlowDirection = EVar6;
  __return_storage_ptr__->PreviousOutgoingLayerId = iVar2;
  __return_storage_ptr__->NewOutgoingLayerId = iVar10;
  __return_storage_ptr__->bPainted = true;
  return __return_storage_ptr__;
}

// Update @ 1424ac0e0

/* WARNING: Enum "Type": Some values do not have unique names */

FUpdateResult * __thiscall
FWidgetProxy::Update
          (FWidgetProxy *this,FUpdateResult *__return_storage_ptr__,FPaintArgs *param_1,
          FSlateWindowElementList *param_2)

{
  int *piVar1;
  EWidgetUpdateFlags EVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined3 uVar7;
  bool bVar8;
  uint uVar9;
  FUpdateResult *pFVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_SlateExecuteActiveTimers> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_SlateNumTickedWidgets> FVar15;
  FThreadSafeStaticStat<FStat_STAT_SlateTickWidgets> FVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_108 [2];
  FColor_u_0 local_100;
  uint local_fc;
  FColor_u_0 local_f8;
  uint local_f4;
  FName local_f0;
  FName local_e0;
  TSharedPtr<SWidget,1> local_d0;
  LARGE_INTEGER local_c0;
  FName local_b8;
  LARGE_INTEGER local_b0;
  FStatMessage local_a8;
  FStatMessage local_98;
  FStatMessage local_88;
  FName local_78;
  FName local_70;
  FName local_68;
  FUpdateResult local_60;
  FScopedWidgetUpdateTrace local_50;
  
  GetWidgetAsShared(this,&local_d0);
  if ((((this->Visibility).field0_0x0.Flags & 3) != 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Visibility.IsVisible()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\WidgetProxy.cpp"
                         ,0x35,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FUpdateResult *)(*pcVar3)();
    return pFVar10;
  }
  __return_storage_ptr__->PreviousOutgoingLayerId = -1;
  __return_storage_ptr__->NewOutgoingLayerId = -1;
  __return_storage_ptr__->bPainted = false;
  if (local_d0.Object == (SWidget *)0x0) goto LAB_1424ac764;
  if ((local_d0.Object == (SWidget *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FUpdateResult *)(*pcVar3)();
    return pFVar10;
  }
  if (((local_d0.Object)->UpdateFlags & (NeedsVolatilePaint|NeedsRepaint)) != None) {
    pFVar10 = Repaint(this,&local_60,param_1,param_2);
    iVar6 = pFVar10->NewOutgoingLayerId;
    bVar8 = pFVar10->bPainted;
    uVar7 = *(undefined3 *)&pFVar10->field_0x9;
    __return_storage_ptr__->PreviousOutgoingLayerId = pFVar10->PreviousOutgoingLayerId;
    __return_storage_ptr__->NewOutgoingLayerId = iVar6;
    __return_storage_ptr__->bPainted = bVar8;
    *(undefined3 *)&__return_storage_ptr__->field_0x9 = uVar7;
    goto LAB_1424ac764;
  }
  FSlateTrace::FScopedWidgetUpdateTrace::FScopedWidgetUpdateTrace(&local_50,local_d0.Object);
  EVar2 = (local_d0.Object)->UpdateFlags;
  if ((EVar2 & NeedsActiveTimerUpdate) != None) {
    FVar12 = StatPtr_STAT_SlateExecuteActiveTimers;
    if (StatPtr_STAT_SlateExecuteActiveTimers ==
        (FThreadSafeStaticStat<FStat_STAT_SlateExecuteActiveTimers>)0x0) {
      pFVar11 = ::FName::FName(&local_78,"STAT_SlateExecuteActiveTimers");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_SlateExecuteActiveTimers>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateExecuteActiveTimers,
                          *pFVar11,L"Execute Active Timers","STATGROUP_Slate","STATCAT_Advanced",
                          L"Slate",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar18 = *(FName *)FVar12;
    bVar8 = false;
    bVar5 = false;
    local_f0.ComparisonIndex.Value = 0;
    local_f0.Number = 0;
    FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
    uVar9 = FVar18.Number;
    if ((FVar17.Bits == 0) && (uVar9 == 0)) {
LAB_1424ac300:
      bVar4 = false;
      FVar18 = local_f0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res10.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
        bVar8 = false;
        bVar5 = true;
        if (-1 < CpuChannel->Enabled) {
          local_100.Bits = FVar17.Bits;
          local_fc = uVar9;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_100._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\WidgetProxy.cpp"
                     ,0x47);
          bVar8 = true;
          bVar5 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1424ac300;
      local_res10.Bits = FVar17.Bits;
      uStackX_14 = uVar9;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar4 = true;
    }
    SWidget::ExecuteActiveTimers(local_d0.Object,param_1->CurrentTime,param_1->DeltaTime);
    (this->field7_0x17).PrivateDebugFlags = (this->field7_0x17).PrivateDebugFlags | 8;
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
        local_a8.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
        local_a8.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_c0);
        local_a8.StatData.Pad[4] = '\0';
        local_a8.StatData.Pad[5] = '\0';
        local_a8.StatData.Pad[6] = '\0';
        local_a8.StatData.Pad[7] = '\0';
        local_a8.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
        local_a8.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
        local_a8.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
        local_a8.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar13,&local_a8);
        piVar1 = &pFVar13->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
    }
  }
  if (((local_d0.Object)->UpdateFlags & NeedsTick) != None) {
    if (FThreadStats::bPrimaryEnable != false) {
      FVar15 = StatPtr_STAT_SlateNumTickedWidgets;
      if (StatPtr_STAT_SlateNumTickedWidgets ==
          (FThreadSafeStaticStat<FStat_STAT_SlateNumTickedWidgets>)0x0) {
        pFVar11 = ::FName::FName(&local_70,"STAT_SlateNumTickedWidgets");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_SlateNumTickedWidgets>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateNumTickedWidgets,
                            *pFVar11,L"SWidget::Tick (Count)","STATGROUP_Slate","STATCAT_Advanced",
                            L"Slate",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar18 = *(FName *)FVar15;
      FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
      uVar9 = FVar18.Number;
      local_res10.Bits = FVar17.Bits;
      uStackX_14 = uVar9;
      if (((FVar18 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_98.NameAndInfo.Number = uVar9 & 0xffffafff | 0xa000;
        local_98.StatData.Pad[0] = '\x01';
        local_98.StatData.Pad[1] = '\0';
        local_98.StatData.Pad[2] = '\0';
        local_98.StatData.Pad[3] = '\0';
        local_98.StatData.Pad[4] = '\0';
        local_98.StatData.Pad[5] = '\0';
        local_98.StatData.Pad[6] = '\0';
        local_98.StatData.Pad[7] = '\0';
        local_b8 = FVar18;
        local_98.NameAndInfo.Index.Value = FVar17.Bits;
        FThreadStats::AddStatMessage(pFVar13,&local_98);
        FStatsTrace::Add(&local_b8,1);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
    }
    FVar16 = StatPtr_STAT_SlateTickWidgets;
    if (StatPtr_STAT_SlateTickWidgets == (FThreadSafeStaticStat<FStat_STAT_SlateTickWidgets>)0x0) {
      pFVar11 = ::FName::FName(&local_68,"STAT_SlateTickWidgets");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_SlateTickWidgets>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTickWidgets,*pFVar11,
                          L"Tick Widgets","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                          ST_int64,true,false,MCR_Invalid);
    }
    FVar18 = *(FName *)FVar16;
    bVar8 = false;
    bVar5 = false;
    local_e0.ComparisonIndex.Value = 0;
    local_e0.Number = 0;
    FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
    uVar9 = FVar18.Number;
    if ((FVar17.Bits == 0) && (uVar9 == 0)) {
LAB_1424ac64f:
      bVar4 = false;
      FVar18 = local_e0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_108[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_108[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
        bVar8 = false;
        bVar5 = true;
        if (-1 < CpuChannel->Enabled) {
          local_f8.Bits = FVar17.Bits;
          local_f4 = uVar9;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_f8._s_0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\FastUpdate\\WidgetProxy.cpp"
                     ,0x54);
          bVar8 = true;
          bVar5 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1424ac64f;
      local_res10.Bits = FVar17.Bits;
      uStackX_14 = uVar9;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar4 = true;
    }
    (**(code **)((local_d0.Object)->_padding_ + 0x10))
              (local_d0.Object,&((local_d0.Object)->PersistentState).DesktopGeometry,
               param_1->CurrentTime,param_1->DeltaTime);
    (this->field7_0x17).PrivateDebugFlags = (this->field7_0x17).PrivateDebugFlags | 8;
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
        local_88.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
        local_88.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_b0);
        local_88.StatData.Pad[4] = '\0';
        local_88.StatData.Pad[5] = '\0';
        local_88.StatData.Pad[6] = '\0';
        local_88.StatData.Pad[7] = '\0';
        local_88.StatData.Pad[0] = local_b0.s.LowPart._0_1_;
        local_88.StatData.Pad[1] = local_b0.s.LowPart._1_1_;
        local_88.StatData.Pad[2] = local_b0.s.LowPart._2_1_;
        local_88.StatData.Pad[3] = local_b0.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar13,&local_88);
        piVar1 = &pFVar13->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
    }
  }
  FSlateDebugging::BroadcastWidgetUpdated(local_d0.Object,EVar2);
  FSlateTrace::FScopedWidgetUpdateTrace::~FScopedWidgetUpdateTrace(&local_50);
LAB_1424ac764:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

