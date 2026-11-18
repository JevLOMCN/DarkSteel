// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 17

// ~SScrollableSnapshotImage @ 142e14e40

void __thiscall SScrollableSnapshotImage::~SScrollableSnapshotImage(SScrollableSnapshotImage *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NavigationSimulationOverlay).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)
             (this->SelectedWidgets).AllocatorInstance.Data,(this->SelectedWidgets).ArrayNum);
  pFVar1 = (this->SelectedWidgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)(this->PickedWidgets).AllocatorInstance.Data,
             (this->PickedWidgets).ArrayNum);
  pFVar1 = (this->PickedWidgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnWidgetPathPicked);
  pvVar2 = *(void **)&(this->OnWidgetPathPicked).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWidgetPathPicked);
  pFVar1 = (this->ScrollyZoomy).VerticalIntertia.ScrollSamples.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScrollyZoomy).HorizontalIntertia.ScrollSamples.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// ClampViewOffset @ 142e314d0

void __thiscall
SScrollableSnapshotImage::ClampViewOffset
          (SScrollableSnapshotImage *this,TVector2<float> *param_1,TVector2<float> *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (param_2->field0_0x0)._s_0.X;
  fVar1 = (param_1->field0_0x0)._s_0.X;
  if (fVar2 < fVar1) {
    fVar2 = fVar2 - fVar1;
    fVar1 = (this->PhysicalOffset).field0_0x0._s_0.X;
    if ((fVar2 <= fVar1) && (fVar2 = fVar1, 0.0 <= fVar1)) {
      fVar2 = 0.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  (this->PhysicalOffset).field0_0x0._s_0.X = fVar2;
  fVar2 = (param_2->field0_0x0)._s_0.Y;
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  if (fVar1 <= fVar2) {
    (this->PhysicalOffset).field0_0x0._s_0.Y = 0.0;
    return;
  }
  fVar2 = fVar2 - fVar1;
  fVar1 = (this->PhysicalOffset).field0_0x0._s_0.Y;
  if (fVar1 < fVar2) {
    (this->PhysicalOffset).field0_0x0._s_0.Y = fVar2;
    return;
  }
  if (0.0 <= fVar1) {
    fVar1 = 0.0;
  }
  (this->PhysicalOffset).field0_0x0._s_0.Y = fVar1;
  return;
}

// Construct @ 142e42ec0

void __thiscall
SScrollableSnapshotImage::Construct(SScrollableSnapshotImage *this,FArguments *param_1)

{
  longlong *this_00;
  FWidgetSnapshotData *pFVar1;
  SWidget *pSVar2;
  SImage *pSVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  bool bVar10;
  FArguments *pFVar11;
  undefined8 *puVar12;
  TSharedRef<SWidget_const_,1> *pTVar13;
  ulong64 uVar14;
  TSharedRef<SImage,1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSharedRef<SImage,1> local_338;
  FDestructionSentinel local_328;
  undefined1 *local_310;
  TSharedRef<SWidget_const_,1> local_308;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2f8;
  FArguments local_2e0;
  
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  local_res8 = 0;
  pFVar1 = param_1->_SnapshotData;
  this->SnapshotDataPtr = pFVar1;
  if (pFVar1 == (FWidgetSnapshotData *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SnapshotDataPtr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
                        ,0x3c,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->SelectedWindowIndex = -1;
  TDelegate<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnWidgetPathPicked,&param_1->_OnWidgetPathPicked);
  pFVar11 = SImage::FArguments::FArguments(&local_2e0);
  (pFVar11->_Image).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_Image).Getter,
             (FWriteAccessScope *)&local_328);
  local_310 = &(pFVar11->_Image).Getter.field_0x8;
  puVar12 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_310);
  uVar9 = local_338.SharedReferenceCount.ReferenceController._4_4_;
  if (puVar12 == (undefined8 *)0x0) {
    pTVar16 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_308);
    pTVar16 = (pTVar13->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar13->Object;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar12[2] = uVar14;
    *puVar12 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSScrollableSnapshotImage___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar12[3] = pSVar2;
    puVar12[4] = pTVar16;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->WeakReferenceCount = (atomic<int>)((int)pTVar16->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    puVar12[5] = GetSelectedWindowTextureBrush;
    puVar12[6] = (ulonglong)uVar9 << 0x20;
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_308.SharedReferenceCount.ReferenceController);
  }
  if (local_328.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_328.Accessor,&local_328);
  }
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_2f8,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
             ,0x44,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar15 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2f8,&local_338,pFVar11);
  this_00 = &this->_padding_;
  pTVar16 = (pTVar15->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar15->Object;
  if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar3;
  this->_padding_ = (longlong)pTVar16;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_338.SharedReferenceCount.ReferenceController._4_4_,
                      local_338.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_2e0);
  return;
}

// GetSelectedWindowTextureBrush @ 142ea7d30

FSlateBrush * __thiscall
SScrollableSnapshotImage::GetSelectedWindowTextureBrush(SScrollableSnapshotImage *this)

{
  uint uVar1;
  FWidgetSnapshotData *pFVar2;
  code *pcVar3;
  bool bVar4;
  FSlateBrush *pFVar5;
  uint uVar6;
  
  uVar1 = this->SelectedWindowIndex;
  pFVar2 = this->SnapshotDataPtr;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (pFVar2->WindowTextureBrushes).ArrayNum)) {
    uVar6 = 0;
    if ((int)uVar1 < (pFVar2->WindowTextureBrushes).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FSlateBrush *)(*pcVar3)();
        return pFVar5;
      }
    }
    return *(FSlateBrush **)
            ((pFVar2->WindowTextureBrushes).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10);
  }
  return (FSlateBrush *)0x0;
}

// OnArrangeChildren @ 142ec5c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SScrollableSnapshotImage::OnArrangeChildren
          (SScrollableSnapshotImage *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  TVector2<float>_u_0_s_0 TVar1;
  undefined1 auStackY_d8 [32];
  undefined8 local_a8;
  TVector2<float>_u_0 local_a0;
  FSlateLayoutTransform local_98;
  FArrangedWidget local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  (this->CachedSize).field0_0x0 = *(TVector2<float>_u_0 *)&param_1->Size;
  if ((TEnumAsByte<EVisibility::Private>)
      *(uchar *)&((SWidget *)this->_padding_)->VisibilityAttribute !=
      EVisibility::Collapsed.Value.Value) {
    SWidget::GetDesiredSize((SWidget *)this->_padding_);
    ClampViewOffset(this,(TVector2<float> *)&local_a0._s_0,&this->CachedSize);
    TVar1 = (this->PhysicalOffset).field0_0x0._s_0;
    local_a8._0_4_ = TVar1.X;
    local_98.Translation.field0_0x0._s_0.X = (float)local_a8;
    local_a8._4_4_ = TVar1.Y;
    local_98.Translation.field0_0x0._s_0.Y = local_a8._4_4_;
    local_a8 = local_a0;
    local_98.Scale = 1.0;
    FGeometry::MakeChild
              (param_1,&local_88,(TSharedRef<SWidget,1> *)&this->_padding_,
               (FDeprecateVector2DParameter *)&local_a8,&local_98);
    FArrangedChildren::AddWidget(param_2,&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.Widget.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnCursorQuery @ 142ec69d0

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
SScrollableSnapshotImage::OnCursorQuery
          (SScrollableSnapshotImage *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  undefined8 local_40;
  FSharedReferencer<1> FStack_38;
  SWindow *local_30;
  FSharedReferencer<1> FStack_28;
  SWidget *local_20;
  FSharedReferencer<1> FStack_18;
  Type local_10;
  
  FScrollyZoomy::OnCursorQuery(&this->ScrollyZoomy,__return_storage_ptr__);
  if (((char)__return_storage_ptr__->_padding_ == '\0') && (this->bIsPicking == false)) {
    local_10 = GrabHand;
    *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
    local_40 = 0;
    FStack_38.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_30 = (SWindow *)0x0;
    FStack_28.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_20 = (SWidget *)0x0;
    FStack_18.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&__return_storage_ptr__->_padding_ != &local_40) {
      __return_storage_ptr__->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&__return_storage_ptr__->_padding_,&FStack_38);
    }
    if (&__return_storage_ptr__->CursorWindow != (TSharedPtr<SWindow,1> *)&local_30) {
      (__return_storage_ptr__->CursorWindow).Object = local_30;
      local_30 = (SWindow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(__return_storage_ptr__->CursorWindow).SharedReferenceCount,&FStack_28);
    }
    if (&__return_storage_ptr__->CursorWidget != (TSharedPtr<SWidget,1> *)&local_20) {
      (__return_storage_ptr__->CursorWidget).Object = local_20;
      local_20 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(__return_storage_ptr__->CursorWidget).SharedReferenceCount,&FStack_18);
    }
    __return_storage_ptr__->MouseCursor = local_10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_18.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_28.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_38.ReferenceController);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 142ed6170

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SScrollableSnapshotImage::OnMouseButtonDown
          (SScrollableSnapshotImage *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FScrollyZoomy::OnMouseButtonDown(&this->ScrollyZoomy,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142ed9830

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SScrollableSnapshotImage::OnMouseButtonUp
          (SScrollableSnapshotImage *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TSharedRef<SWidget,1> *pTVar1;
  TSharedRef<SWidget,1> local_18;
  
  pTVar1 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  FScrollyZoomy::OnMouseButtonUp(&this->ScrollyZoomy,__return_storage_ptr__,pTVar1,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseLeave @ 142ed98f0

void __thiscall
SScrollableSnapshotImage::OnMouseLeave(SScrollableSnapshotImage *this,FPointerEvent *param_1)

{
  TSharedRef<SWidget,1> *pTVar1;
  TSharedRef<SWidget,1> local_18;
  
  pTVar1 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  FScrollyZoomy::OnMouseLeave(&this->ScrollyZoomy,pTVar1,param_1);
  return;
}

// OnMouseMove @ 142ed99c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SScrollableSnapshotImage::OnMouseMove
          (SScrollableSnapshotImage *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  int *piVar1;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  FWidgetReflectorNodeBase *pFVar7;
  bool bVar8;
  TTransform2<float> *pTVar9;
  FReply *pFVar10;
  TSharedRef<SWidget,1> *pTVar11;
  FSharedReferencer<1> FVar12;
  float fVar13;
  float local_c8;
  float fStack_c4;
  TSharedPtr<FWidgetReflectorNodeBase,1> local_b8;
  TVector2<float>_u_0 local_a8 [2];
  TSharedRef<FWidgetReflectorNodeBase,1> local_98;
  FReadAccessScope local_88;
  TSharedRef<SWidget,1> local_70;
  TTransform2<float> local_60;
  
  if (this->bIsPicking != false) {
    pTVar9 = Inverse<TTransform2<float>_>(&local_60,&param_1->AccumulatedRenderTransform);
    pTVar2 = &this->PickedWidgets;
    piVar1 = &(this->PickedWidgets).ArrayMax;
    iVar3 = (this->PickedWidgets).ArrayNum;
    local_c8 = SUB84(param_2->ScreenSpacePosition,0);
    fStack_c4 = SUB84(param_2->ScreenSpacePosition,4);
    fVar13 = fStack_c4 * (pTVar9->M).M[1][0];
    pTVar4 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(pTVar2->AllocatorInstance).Data;
    fStack_c4 = (local_c8 * (pTVar9->M).M[0][1] + fStack_c4 * (pTVar9->M).M[1][1] +
                (pTVar9->Trans).field0_0x0._s_0.Y) - (this->PhysicalOffset).field0_0x0._s_0.Y;
    local_c8 = (fVar13 + local_c8 * (pTVar9->M).M[0][0] + (pTVar9->Trans).field0_0x0._s_0.X) -
               (this->PhysicalOffset).field0_0x0._s_0.X;
    if ((this->PickedWidgets).ArrayMax < 0) {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar4,iVar3);
      (this->PickedWidgets).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar4,iVar3);
      (this->PickedWidgets).ArrayNum = 0;
    }
    FWidgetSnapshotData::GetWindow(this->SnapshotDataPtr,&local_b8,this->SelectedWindowIndex);
    pFVar7 = local_b8.Object;
    FVar12.ReferenceController = local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.Object != (FWidgetReflectorNodeBase *)0x0) {
      if ((local_b8.Object == (FWidgetReflectorNodeBase *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FReply *)(*pcVar6)();
        return pFVar10;
      }
      local_98.Object = local_b8.Object;
      local_98.SharedReferenceCount.ReferenceController =
           local_b8.SharedReferenceCount.ReferenceController;
      if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_b8.Object == (FWidgetReflectorNodeBase *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FReply *)(*pcVar6)();
        return pFVar10;
      }
      if ((pFVar7 == (FWidgetReflectorNodeBase *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FReply *)(*pcVar6)();
        return pFVar10;
      }
      local_a8[0] = (pFVar7->WidgetGeometry).AbsolutePosition.field0_0x0;
      `SScrollableSnapshotImage::OnMouseMove'::__l2::FWidgetPicker::FindWidgetsUnderPoint
                ((TVector2<float> *)&local_c8,(TVector2<float> *)&local_a8[0]._s_0,&local_98,pTVar2)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      FVar12.ReferenceController = local_b8.SharedReferenceCount.ReferenceController;
    }
    if (0 < (this->PickedWidgets).ArrayNum) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnWidgetPathPicked
                 ,&local_88);
      if ((*(int *)&(this->OnWidgetPathPicked).field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(this->OnWidgetPathPicked).field_0x8, plVar5 != (longlong *)0x0))
      {
        (**(code **)(*plVar5 + 0x68))(plVar5,pTVar2);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_88);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar12.ReferenceController);
  }
  pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_70);
  FScrollyZoomy::OnMouseMove
            (&this->ScrollyZoomy,__return_storage_ptr__,pTVar11,
             (IScrollableZoomable *)&this->_padding_,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseWheel @ 142ed9c90

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SScrollableSnapshotImage::OnMouseWheel
          (SScrollableSnapshotImage *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FScrollyZoomy::OnMouseWheel
            (&this->ScrollyZoomy,__return_storage_ptr__,param_2,
             (IScrollableZoomable *)&this->_padding_);
  return __return_storage_ptr__;
}

// OnPaint @ 142edbf10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SScrollableSnapshotImage::OnPaint
          (SScrollableSnapshotImage *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3
          ,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  undefined1 uVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  SNavigationSimulationSnapshotList *this_00;
  code *pcVar7;
  float afVar8 [2];
  float afVar9 [2];
  float afVar10 [2];
  float afVar11 [2];
  bool bVar12;
  int iVar13;
  uint uVar14;
  ISlateStyle *pIVar15;
  TVector2<float>_u_0 TVar16;
  ulonglong uVar17;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar18;
  FScriptContainerElement *pFVar19;
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *pTVar20;
  uint uVar21;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  float fVar25;
  float fVar26;
  undefined1 auStackY_368 [32];
  uint local_328;
  undefined1 local_324;
  undefined1 local_323 [3];
  float local_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float local_310;
  float fStack_30c;
  undefined8 local_308;
  TVector2<float>_u_0_s_0 local_300;
  TVector2<float>_u_0 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  float local_2e0;
  float fStack_2dc;
  undefined8 local_2d8;
  float local_2d0;
  float fStack_2cc;
  FLinearColor_u_0 local_2c8;
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> local_2b8;
  TVector2<float>_u_0_s_0 local_2a4;
  TVector2<float>_u_0_s_0 local_298;
  TSharedPtr<FWidgetReflectorNodeBase,1> local_290;
  code *local_280;
  ForAnyElementType **local_278;
  ForAnyElementType *local_270;
  FGeometry *local_268;
  double local_260;
  double local_258;
  TTransform2<float> local_250;
  TTransform2<float> local_238;
  TTransform2<float> local_220;
  TTransform2<float> local_208;
  FSlateClippingZone local_1f0;
  FOverlayBrushes local_1c8;
  ForAnyElementType local_188;
  undefined8 local_180;
  TBitArray<FDefaultBitArrayAllocator> local_178;
  undefined4 local_158;
  undefined4 local_154;
  void *local_148;
  undefined4 local_140;
  TVector2<float>_u_0 local_138;
  float local_130;
  undefined8 local_12c;
  undefined8 local_124;
  float local_11c [2];
  float afStack_114 [2];
  TVector2<float>_u_0 local_10c;
  byte local_104;
  TVector2<float>_u_0 local_100;
  float local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  float local_e4 [2];
  float afStack_dc [2];
  TVector2<float>_u_0 local_d4;
  byte local_cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_368;
  FSlateClippingZone::FSlateClippingZone(&local_1f0,param_2);
  FSlateWindowElementList::PushClip(param_4,&local_1f0);
  iVar13 = SCompoundWidget::OnPaint
                     ((SCompoundWidget *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                      param_7);
  local_328 = FScrollyZoomy::PaintSoftwareCursorIfNeeded
                        (&this->ScrollyZoomy,param_2,param_3,param_4,iVar13);
  FWidgetSnapshotData::GetWindow(this->SnapshotDataPtr,&local_290,this->SelectedWindowIndex);
  if (local_290.Object != (FWidgetReflectorNodeBase *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_virtual_int___cdecl_SScrollableSnapshotImage::OnPaint(FPaintArgs_const&___ptr64,FGeometry_const&___ptr64,FSlateRect_const&___ptr64,FSlateWindowElementList&___ptr64,int,FWidgetStyle_const&___ptr64,bool)const___ptr64'
         ::__l5::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_virtual_int___cdecl_SScrollableSnapshotImage::OnPaint(FPaintArgs_const&___ptr64,FGeometry_const&___ptr64,FSlateRect_const&___ptr64,FSlateWindowElementList&___ptr64,int,FWidgetStyle_const&___ptr64,bool)const___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_virtual_int___cdecl_SScrollableSnapshotImage::OnPaint(FPaintArgs_const&___ptr64,FGeometry_const&___ptr64,FSlateRect_const&___ptr64,FSlateWindowElementList&___ptr64,int,FWidgetStyle_const&___ptr64,bool)const___ptr64'
       ::__l5::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_virtual_int___cdecl_SScrollableSnapshotImage::OnPaint(FPaintArgs_const&___ptr64,FGeometry_const&___ptr64,FSlateRect_const&___ptr64,FSlateWindowElementList&___ptr64,int,FWidgetStyle_const&___ptr64,bool)const___ptr64'
                      ::__l5::DebugBorderBrush,L"Debug.Border");
      _Init_thread_footer(&`public:_virtual_int___cdecl_SScrollableSnapshotImage::OnPaint(FPaintArgs_const&___ptr64,FGeometry_const&___ptr64,FSlateRect_const&___ptr64,FSlateWindowElementList&___ptr64,int,FWidgetStyle_const&___ptr64,bool)const___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
    if ((local_290.Object == (FWidgetReflectorNodeBase *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      iVar13 = (*pcVar7)();
      return iVar13;
    }
    local_300 = ((local_290.Object)->WidgetGeometry).AbsolutePosition.field0_0x0._s_0;
    fVar25 = (this->PhysicalOffset).field0_0x0._s_0.X - local_300.X;
    fVar26 = (this->PhysicalOffset).field0_0x0._s_0.Y - local_300.Y;
    _local_320 = CONCAT44(fVar26,fVar25);
    pIVar15 = FAppStyle::Get();
    TVar16 = (TVector2<float>_u_0)
             (**(code **)((longlong)*pIVar15 + 0x50))
                       (pIVar15,`public:_virtual_int___cdecl_SScrollableSnapshotImage::OnPaint(FPaintArgs_const&___ptr64,FGeometry_const&___ptr64,FSlateRect_const&___ptr64,FSlateWindowElementList&___ptr64,int,FWidgetStyle_const&___ptr64,bool)const___ptr64'
                                ::__l5::DebugBorderBrush,0,0);
    afVar10 = _UNK_15076b188;
    afVar8 = ___xmm_3f80000000000000000000003f800000;
    fVar3 = __real_3f800000;
    uVar21 = 0;
    local_2f8 = TVar16;
    if (this->bIsPicking == false) {
      fVar3 = (float)(this->SelectedWidgets).ArrayNum;
      uVar17 = (ulonglong)(int)fVar3;
      pFVar19 = (this->SelectedWidgets).AllocatorInstance.Data;
      pFVar24 = pFVar19 + uVar17 * 0x10;
      local_300.X = fVar3;
      while( true ) {
        if ((this->SelectedWidgets).ArrayNum != (int)uVar17) {
          `TCheckedPointerIterator<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(&local_324);
        }
        afVar11 = _UNK_15076b188;
        afVar9 = ___xmm_3f80000000000000000000003f800000;
        if (pFVar19 == pFVar24) break;
        lVar23 = *(longlong *)pFVar19;
        fVar3 = param_2->Scale;
        uVar5 = *(undefined8 *)(lVar23 + 0x14);
        local_298 = (param_2->AbsolutePosition).field0_0x0._s_0;
        local_2d8._0_4_ = (float)uVar5;
        local_310 = fVar25 + (float)local_2d8;
        local_2d8._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
        fStack_30c = fVar26 + local_2d8._4_4_;
        ___xmm_3f80000000000000000000003f800000 = afVar8[0];
        _UNK_15076b184 = afVar8[1];
        local_220.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
        local_220.M.M[0][1] = _UNK_15076b184;
        _UNK_15076b188 = afVar10[0];
        _UNK_15076b18c = afVar10[1];
        local_220.M.M[1][0] = _UNK_15076b188;
        local_220.M.M[1][1] = _UNK_15076b18c;
        local_308._0_4_ = (undefined4)*(undefined8 *)(lVar23 + 8);
        local_2d0 = (float)(undefined4)local_308 * *(float *)(lVar23 + 0x10);
        local_308._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar23 + 8) >> 0x20);
        fStack_2cc = (float)local_308._4_4_ * *(float *)(lVar23 + 0x10);
        local_308._4_4_ = fStack_30c;
        local_308._0_4_ = local_310;
        local_318 = fVar3 * local_310 + local_298.X;
        fStack_314 = fVar3 * fStack_30c + local_298.Y;
        ___xmm_3f80000000000000000000003f800000 = afVar9;
        _UNK_15076b188 = afVar11;
        local_2d8 = uVar5;
        local_220.Trans.field0_0x0 = local_308;
        Concatenate<TTransform2<float>_>(&local_208,&local_220,&param_2->AccumulatedRenderTransform)
        ;
        local_100._s_0.Y = fStack_314;
        local_100._s_0.X = local_318;
        local_ec = CONCAT44(fStack_2cc,local_2d0);
        local_cc = param_2->bHasRenderTransform * '\x02' | local_cc & 0xfc;
        local_f4 = 0;
        local_328 = local_328 + 1;
        local_d4 = local_208.Trans.field0_0x0;
        local_e4[0] = local_208.M.M[0][0];
        local_e4[1] = local_208.M.M[0][1];
        afStack_dc[0] = local_208.M.M[1][0];
        afStack_dc[1] = local_208.M.M[1][1];
        local_f8 = fVar3;
        FSlateDrawElement::MakeBox
                  (param_4,local_328,(FPaintGeometry *)&local_100._s_0,(FSlateBrush *)local_2f8,None
                   ,(FLinearColor *)(lVar23 + 0x68));
        uVar17 = (ulonglong)local_300 & 0xffffffff;
        pFVar19 = pFVar19 + 0x10;
      }
    }
    else if (0 < (this->PickedWidgets).ArrayNum) {
      lVar23 = 0;
      do {
        uVar14 = 0;
        if ((int)uVar21 < (this->PickedWidgets).ArrayNum) {
          uVar14 = ~uVar21 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          iVar13 = (*pcVar7)();
          return iVar13;
        }
        afVar11 = _UNK_15076b188;
        afVar9 = ___xmm_3f80000000000000000000003f800000;
        fVar1 = param_2->Scale;
        lVar4 = *(longlong *)((this->PickedWidgets).AllocatorInstance.Data + lVar23);
        local_2c8._s_0.B = 0.0;
        local_2c8._s_0.A = 1.0;
        ___xmm_3f80000000000000000000003f800000 = afVar8[0];
        _UNK_15076b184 = afVar8[1];
        local_250.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
        local_250.M.M[0][1] = _UNK_15076b184;
        _UNK_15076b188 = afVar10[0];
        _UNK_15076b18c = afVar10[1];
        local_250.M.M[1][0] = _UNK_15076b188;
        local_250.M.M[1][1] = _UNK_15076b18c;
        local_2c8._s_0.G = (float)(int)uVar21 / (float)(this->PickedWidgets).ArrayNum;
        local_2c8._s_0.R = fVar3 - local_2c8._s_0.G;
        uVar5 = *(undefined8 *)(lVar4 + 0x14);
        local_2f0._0_4_ = (float)uVar5;
        local_2e0 = fVar25 + (float)local_2f0;
        local_2f0._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
        fStack_2dc = fVar26 + local_2f0._4_4_;
        uVar6 = *(undefined8 *)(lVar4 + 8);
        local_2a4 = (param_2->AbsolutePosition).field0_0x0._s_0;
        local_2e8._0_4_ = (float)uVar6;
        local_310 = (float)local_2e8 * *(float *)(lVar4 + 0x10);
        local_2e8._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
        fStack_30c = local_2e8._4_4_ * *(float *)(lVar4 + 0x10);
        local_2f8._s_0.Y = fStack_2dc;
        local_2f8._s_0.X = local_2e0;
        local_318 = fVar1 * local_2e0 + local_2a4.X;
        fStack_314 = fVar1 * fStack_2dc + local_2a4.Y;
        ___xmm_3f80000000000000000000003f800000 = afVar9;
        _UNK_15076b188 = afVar11;
        local_2f0 = uVar5;
        local_2e8 = uVar6;
        local_250.Trans.field0_0x0 = local_2f8;
        Concatenate<TTransform2<float>_>(&local_238,&local_250,&param_2->AccumulatedRenderTransform)
        ;
        local_138._s_0.Y = fStack_314;
        local_138._s_0.X = local_318;
        local_124 = CONCAT44(fStack_30c,local_310);
        local_104 = param_2->bHasRenderTransform * '\x02' | local_104 & 0xfc;
        local_12c = 0;
        local_328 = local_328 + 1;
        local_10c = local_238.Trans.field0_0x0;
        local_11c[0] = local_238.M.M[0][0];
        local_11c[1] = local_238.M.M[0][1];
        afStack_114[0] = local_238.M.M[1][0];
        afStack_114[1] = local_238.M.M[1][1];
        local_130 = fVar1;
        FSlateDrawElement::MakeBox
                  (param_4,local_328,(FPaintGeometry *)&local_138._s_0,(FSlateBrush *)TVar16,None,
                   (FLinearColor *)&local_2c8._s_0);
        uVar21 = uVar21 + 1;
        lVar23 = lVar23 + 0x10;
      } while ((int)uVar21 < (this->PickedWidgets).ArrayNum);
    }
    this_00 = (this->NavigationSimulationOverlay).Object;
    if (this_00 != (SNavigationSimulationSnapshotList *)0x0) {
      SNavigationSimulationListBase::GetSelectedItems
                ((SNavigationSimulationListBase *)this_00,&local_2b8);
      if (local_2b8.ArrayNum < 1) {
        pTVar20 = (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
                   *)&this_00->_padding_;
      }
      else {
        pTVar20 = &local_2b8;
      }
      local_178.MaxBits = 0x80;
      local_188.Data = (FScriptContainerElement *)0x0;
      local_180 = 0;
      local_178.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_178.NumBits = 0;
      local_154 = 0;
      local_148 = (void *)0x0;
      local_140 = 0;
      local_158 = 0xffffffff;
      NavigationSimulationOverlay::FOverlayBrushes::FOverlayBrushes(&local_1c8);
      iVar13 = pTVar20->ArrayNum;
      pTVar18 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(pTVar20->AllocatorInstance).Data;
      pTVar22 = pTVar18 + iVar13;
      while( true ) {
        if (pTVar20->ArrayNum != iVar13) {
          `TCheckedPointerIterator<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_323);
        }
        if (pTVar18 == pTVar22) break;
        local_270 = &local_188;
        local_280 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNavigationSimulationOverlay::PaintSnapshotNode'::__l6::<lambda_1>,TOptional<FPaintGeometry>,FNavigationSimulationWidgetInfo_const_&>
                    ::Call;
        local_278 = &local_270;
        local_268 = param_2;
        local_260 = (double)fVar25;
        local_258 = (double)fVar26;
        NavigationSimulationOverlay::Paint
                  (&local_1c8,pTVar18,
                   (TFunctionRef<TOptional<FPaintGeometry>___cdecl(FNavigationSimulationWidgetInfo_const_&)>
                    *)&local_280,param_4,local_328 + 1);
        pTVar18 = pTVar18 + 1;
      }
      local_140 = 0;
      if (local_148 != (void *)0x0) {
        FMemory::Free(local_148);
      }
      uVar17 = local_180 >> 0x20;
      local_180 = local_180 & 0xffffffff00000000;
      if ((int)uVar17 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,0,&local_188,0,(int *)((longlong)&local_180 + 4));
      }
      local_158 = 0xffffffff;
      local_154 = 0;
      local_178.NumBits = 0;
      if (0x80 < (uint)local_178.MaxBits) {
        local_178.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_178,0);
      }
      if (local_178.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_178.AllocatorInstance.SecondaryData);
      }
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
      DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
                ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)local_2b8.AllocatorInstance.Data,
                 local_2b8.ArrayNum);
      if ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)local_2b8.AllocatorInstance.Data !=
          (TSharedPtr<FNavigationSimulationWidgetNode,1> *)0x0) {
        FMemory::Free(local_2b8.AllocatorInstance.Data);
      }
    }
  }
  FSlateWindowElementList::PopClip(param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_290.SharedReferenceCount.ReferenceController);
  return local_328;
}

// ScrollBy @ 142efe510

bool __thiscall
SScrollableSnapshotImage::ScrollBy(SScrollableSnapshotImage *this,TVector2<double> *param_1)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  float local_res8;
  float fStackX_c;
  TVector2<float> local_res10;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  lVar3 = this->_padding_;
  fVar1 = *(float *)&this->_padding_;
  *(float *)((longlong)&this->_padding_ + 4) =
       (float)(param_1->field0_0x0)._s_0.Y + *(float *)((longlong)&this->_padding_ + 4);
  *(float *)&this->_padding_ = (float)dVar2 + fVar1;
  SWidget::GetDesiredSize((SWidget *)this[-1].SnapshotDataPtr);
  ClampViewOffset((SScrollableSnapshotImage *)&this[-1]._padding_,&local_res10,
                  (TVector2<float> *)&this->_padding_);
  local_res8 = (float)lVar3;
  if ((local_res8 == *(float *)&this->_padding_) &&
     (fStackX_c = (float)((ulonglong)lVar3 >> 0x20),
     fStackX_c == *(float *)((longlong)&this->_padding_ + 4))) {
    return false;
  }
  return true;
}

// SetNavigationSimulation @ 142f043d0

void __thiscall
SScrollableSnapshotImage::SetNavigationSimulation
          (SScrollableSnapshotImage *this,TSharedPtr<SNavigationSimulationSnapshotList,1> *param_1)

{
  SNavigationSimulationSnapshotList *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->NavigationSimulationOverlay).SharedReferenceCount.ReferenceController;
  (this->NavigationSimulationOverlay).Object = pSVar1;
  (this->NavigationSimulationOverlay).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSelectedWindowIndex @ 142f05630

void __thiscall
SScrollableSnapshotImage::SetSelectedWindowIndex(SScrollableSnapshotImage *this,int param_1)

{
  int *piVar1;
  int iVar2;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar3;
  
  this->SelectedWindowIndex = param_1;
  piVar1 = &(this->PickedWidgets).ArrayMax;
  iVar2 = (this->PickedWidgets).ArrayNum;
  pTVar3 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(this->PickedWidgets).AllocatorInstance.Data;
  if ((this->PickedWidgets).ArrayMax < 0) {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar2);
    (this->PickedWidgets).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->PickedWidgets).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar2);
    (this->PickedWidgets).ArrayNum = 0;
  }
  (this->PhysicalOffset).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  return;
}

// Tick @ 142f0e740

void __thiscall
SScrollableSnapshotImage::Tick
          (SScrollableSnapshotImage *this,FGeometry *param_1,double param_2,float param_3)

{
  FScrollyZoomy::Tick(&this->ScrollyZoomy,param_3,(IScrollableZoomable *)&this->_padding_);
  return;
}

// ZoomBy @ 142f19680

bool __thiscall SScrollableSnapshotImage::ZoomBy(SScrollableSnapshotImage *this,float param_1)

{
  return false;
}

