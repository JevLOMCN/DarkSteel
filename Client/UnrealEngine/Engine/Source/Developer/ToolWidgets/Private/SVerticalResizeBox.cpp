// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 7

// Construct @ 142d8d420

void __thiscall SVerticalResizeBox::Construct(SVerticalResizeBox *this,FArguments *param_1)

{
  undefined1 *this_00;
  SWidget *pSVar1;
  SBox *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FArguments *pFVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget_const_,1> *pTVar9;
  ulong64 uVar10;
  TSharedRef<SBox,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *local_res8;
  TVector2<float>_u_0 local_res10;
  FName local_res18;
  FMemScope local_res20;
  SBox *local_418;
  TReferenceControllerBase<1> *pTStack_410;
  undefined8 local_408;
  undefined4 uStack_400;
  float fStack_3fc;
  undefined1 local_3f8;
  undefined1 local_3f0 [8];
  ForAnyElementType FStack_3e8;
  ulonglong local_3e0;
  FDestructionSentinel local_3d8;
  TSharedRef<SBox,1> local_3c0;
  FDestructionSentinel local_3b0;
  undefined1 *local_398;
  FArguments local_388;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  local_res8 = (TReferenceControllerBase<1> *)((ulonglong)local_res8 & 0xffffffff00000000);
  (this->ContentHeight).Value = (param_1->_ContentHeight).Value;
  (this->ContentHeight).bIsSet = (param_1->_ContentHeight).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ContentHeight).Getter,&(param_1->_ContentHeight).Getter);
  this->HandleHeight = param_1->_HandleHeight;
  TAttribute<FLinearColor>::operator=(&this->HandleColor,&param_1->_HandleColor);
  TAttribute<FLinearColor>::operator=(&this->HandleHighlightColor,&param_1->_HandleHighlightColor);
  local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_res8 = (TReferenceControllerBase<1> *)0x0;
  local_418 = (SBox *)0x0;
  pTStack_410 = (TReferenceControllerBase<1> *)0x0;
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)&local_388,Image,(FName)0x0,(FMargin *)&local_418,NoTile,NoImage,
             (FDeprecateVector2DParameter *)&local_res10._s_0,&FLinearColor::White,(UObject *)0x0,
             false);
  local_388._padding_ = (longlong)&___7FSlateColorBrush__6B_;
  FSlateBrush::operator=(&this->HandleBrush,(FSlateBrush *)&local_388);
  local_388._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_388._padding_);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->ContentHeightChanged,&param_1->_ContentHeightChanged);
  pFVar7 = SBox::FArguments::FArguments(&local_388);
  (pFVar7->_HeightOverride).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar7->_HeightOverride).Getter,(FWriteAccessScope *)&local_3b0);
  local_398 = &(pFVar7->_HeightOverride).Getter.field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_398);
  pTVar12 = local_res8;
  if (puVar8 != (undefined8 *)0x0) {
    local_418 = (SBox *)GetHeightOverride;
    pTStack_410 = (TReferenceControllerBase<1> *)
                  ((ulonglong)local_3c0.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->field_0x8,
                        (TSharedRef<SWidget_const_,1> *)&local_3d8);
    pTVar12 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar9->Object;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSVerticalResizeBox___00__A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[3] = pSVar1;
    puVar8[4] = pTVar12;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar8[5] = local_418;
    puVar8[6] = pTStack_410;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_3d8.Accessor);
  }
  if (local_3b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b0.Accessor,&local_3b0);
  }
  fStack_3fc = this->HandleHeight;
  local_3f8 = 1;
  local_3f0 = (undefined1  [8])0x0;
  FStack_3e8.Data = (FScriptContainerElement *)0x0;
  local_3e0 = 0;
  local_408 = 0;
  uStack_400 = 0;
  (pFVar7->_Padding).Value.Left = 0.0;
  (pFVar7->_Padding).Value.Top = 0.0;
  (pFVar7->_Padding).Value.Right = 0.0;
  (pFVar7->_Padding).Value.Bottom = fStack_3fc;
  (pFVar7->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3f0,
             (FWriteAccessScope *)&local_3d8);
  if (((int)local_3e0 != 0) && (FStack_3e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3e8,0,0,0x10);
    local_3e0 = local_3e0 & 0xffffffff00000000;
  }
  if (local_3d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
  }
  if (FStack_3e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f0);
  pTVar12 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar1 = (param_1->_Content).Widget.Object;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar7->_Content).Widget.Object = pSVar1;
  (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res10._s_0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default
             ,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *)&local_3d8,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\SResizeBox.cpp"
             ,0x12,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res10._s_0);
  pTVar11 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *)&local_3d8,&local_3c0,pFVar7
                      );
  this_00 = &this->field_0x238;
  pTVar12 = (pTVar11->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar11->Object;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x250;
  *(SBox **)&this->field_0x248 = pSVar2;
  *(TReferenceControllerBase<1> **)&this->field_0x250 = pTVar12;
  local_418 = pSVar2;
  pTStack_410 = pTVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_3c0.SharedReferenceCount.ReferenceController._4_4_,
                      local_3c0.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3d8.Accessor);
  SBox::FArguments::~FArguments(&local_388);
  return;
}

// GetHeightOverride @ 142dacab0

FOptionalSize __thiscall SVerticalResizeBox::GetHeightOverride(SVerticalResizeBox *this)

{
  float *pfVar1;
  float *in_RDX;
  
  pfVar1 = TAttribute<float>::Get(&this->ContentHeight);
  *in_RDX = this->HandleHeight + *pfVar1;
  return (FOptionalSize)SUB84(in_RDX,0);
}

// OnCursorQuery @ 142dbc920

/* WARNING: Enum "Type": Some values do not have unique names */

FCursorReply * __thiscall
SVerticalResizeBox::OnCursorQuery
          (SVerticalResizeBox *this,FCursorReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TTransform2<float> *pTVar1;
  float local_48;
  float fStack_44;
  float fStack_3c;
  TTransform2<float> local_38;
  
  pTVar1 = Inverse<TTransform2<float>_>(&local_38,&param_1->AccumulatedRenderTransform);
  local_48 = SUB84(param_2->ScreenSpacePosition,0);
  fStack_44 = SUB84(param_2->ScreenSpacePosition,4);
  fStack_3c = SUB84(param_1->Size,4);
  if (fStack_3c -
      (fStack_44 * (pTVar1->M).M[1][1] + local_48 * (pTVar1->M).M[0][1] +
      (pTVar1->Trans).field0_0x0._s_0.Y) < this->HandleHeight) {
    *(undefined1 *)&__return_storage_ptr__->_padding_ = 1;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
    (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
    (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->MouseCursor = ResizeUpDown;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->CursorWindow).Object = (SWindow *)0x0;
  (__return_storage_ptr__->CursorWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->CursorWidget).Object = (SWidget *)0x0;
  (__return_storage_ptr__->CursorWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->MouseCursor = Default;
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 142dc2e00

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SVerticalResizeBox::OnMouseButtonDown
          (SVerticalResizeBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDeprecateSlateVector2D FVar3;
  SWidget *pSVar4;
  TTransform2<float> *pTVar5;
  float *pfVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FReply *pFVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined1 local_108 [8];
  FSharedReferencer<1> local_100;
  TTransform2<float> local_f8;
  FReply local_e0;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar9 = FVar1 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar9) {
    pTVar5 = Inverse<TTransform2<float>_>(&local_f8,&param_1->AccumulatedRenderTransform);
    local_108._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
    local_108._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
    fVar10 = (float)local_108._4_4_ * (pTVar5->M).M[1][1];
    FVar3 = param_1->Size;
    local_108._4_4_ = FVar3._4_4_;
    fVar11 = (float)local_108._0_4_ * (pTVar5->M).M[0][1] + fVar10 +
             (pTVar5->Trans).field0_0x0._s_0.Y;
    fVar10 = (float)local_108._4_4_ - fVar11;
    local_108 = (undefined1  [8])FVar3;
    if (fVar10 < this->HandleHeight) {
      this->DragStartLocation = fVar11;
      pfVar6 = TAttribute<float>::Get(&this->ContentHeight);
      this->DragStartContentHeight = *pfVar6;
      FReply::FReply(&local_e0,true);
      pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->field_0x8,
                          (TSharedRef<SWidget,1> *)local_108);
      pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
      pSVar4 = pTVar7->Object;
      if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_100.ReferenceController);
      }
      else {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_100.ReferenceController);
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_108 = (undefined1  [8])pSVar4;
      local_100.ReferenceController = pTVar2;
      pFVar8 = FReply::CaptureMouse(&local_e0,(TSharedRef<SWidget,1> *)local_108);
      FReply::FReply(__return_storage_ptr__,pFVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      FReply::~FReply(&local_e0);
      return __return_storage_ptr__;
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142dc44a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SVerticalResizeBox::OnMouseButtonUp
          (SVerticalResizeBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  bool bVar4;
  FReply local_c8;
  
  bVar4 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar4) {
    FReply::FReply(&local_c8,true);
    FVar3.ReferenceController = local_c8.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_c8.MouseCaptor.Object = (SWidget *)0x0;
    local_c8.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar3.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
      }
    }
    local_c8.bUseHighPrecisionMouse = 0;
    local_c8.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseMove @ 142dc4de0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SVerticalResizeBox::OnMouseMove
          (SVerticalResizeBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  TTransform2<float> *pTVar2;
  longlong *plVar3;
  float fVar4;
  undefined1 local_80 [8];
  ForAnyElementType FStack_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined1 local_60 [28];
  undefined1 local_44 [28];
  
  pTVar2 = Inverse<TTransform2<float>_>
                     ((TTransform2<float> *)local_60,&param_1->AccumulatedRenderTransform);
  local_68 = param_2->ScreenSpacePosition;
  fVar4 = (float)local_68 * (pTVar2->M).M[0][1] + local_68._4_4_ * (pTVar2->M).M[1][1] +
          (pTVar2->Trans).field0_0x0._s_0.Y;
  if ((TOptional<float> *)local_44 != &this->LastMouseLocation) {
    (this->LastMouseLocation).TypedValue = fVar4;
    (this->LastMouseLocation).bIsSet = true;
  }
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar1) {
    fVar4 = (fVar4 - this->DragStartLocation) + this->DragStartContentHeight;
    bVar1 = TAttribute<float>::IsBound(&this->ContentHeight);
    if ((bVar1) &&
       (bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ContentHeightChanged)
       , bVar1)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->ContentHeightChanged,(FReadAccessScope *)local_60);
      if (*(int *)&(this->ContentHeightChanged).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->ContentHeightChanged).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,fVar4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)local_60);
    }
    else {
      (this->ContentHeight).Value = fVar4;
      local_70 = 0;
      local_80 = (undefined1  [8])0x0;
      FStack_78.Data = (FScriptContainerElement *)0x0;
      (this->ContentHeight).bIsSet = true;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ContentHeight).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_80,
                 (FWriteAccessScope *)local_60);
      if (((int)local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_78.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
        local_70 = local_70 & 0xffffffff00000000;
      }
      if (local_60[0x10] == '\0') {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_60._8_8_,(FDestructionSentinel *)local_60);
      }
      if (FStack_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_78.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_80);
    }
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnPaint @ 142dc7f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SVerticalResizeBox::OnPaint
          (SVerticalResizeBox *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  undefined1 uVar2;
  FDeprecateSlateVector2D FVar3;
  TVector2<float>_u_0_s_0 TVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FLinearColor *pFVar8;
  TAttribute<FLinearColor> *this_00;
  float fVar9;
  undefined1 auStackY_148 [32];
  float fStack_104;
  TVector2<float>_u_0 local_100;
  float local_e4;
  float fStack_e0;
  FLinearColor_u_0 local_d8;
  TTransform2<float> local_c8;
  TTransform2<float> local_b0;
  TVector2<float>_u_0 local_98;
  float local_90;
  undefined8 local_8c;
  undefined8 local_84;
  float local_7c [2];
  float afStack_74 [2];
  TVector2<float>_u_0 local_6c;
  byte local_64;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (((this->field_0x3b != '\0') && ((this->LastMouseLocation).bIsSet != false)) &&
     (fStack_104 = SUB84(param_2->Size,4), fVar9 = fStack_104 - this->HandleHeight,
     fVar9 < (this->LastMouseLocation).TypedValue || fVar9 == (this->LastMouseLocation).TypedValue))
  {
    if ((this->LastMouseLocation).bIsSet == false) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
    }
    this_00 = &this->HandleHighlightColor;
    if ((this->LastMouseLocation).TypedValue <= fStack_104) goto LAB_142dc8059;
  }
  this_00 = &this->HandleColor;
LAB_142dc8059:
  pFVar8 = TAttribute<FLinearColor>::Get(this_00);
  fVar9 = this->HandleHeight;
  fVar1 = param_2->Scale;
  local_d8._0_8_ = *(undefined8 *)&pFVar8->field0_0x0;
  local_d8._8_8_ = *(undefined8 *)((longlong)&pFVar8->field0_0x0 + 8);
  FVar3 = param_2->Size;
  fStack_104 = FVar3._4_4_;
  fStack_104 = fStack_104 - fVar9;
  TVar4 = (param_2->AbsolutePosition).field0_0x0._s_0;
  local_100 = (TVector2<float>_u_0)((ulonglong)(uint)fStack_104 << 0x20);
  local_c8.Trans.field0_0x0 = local_100;
  local_e4 = TVar4.X;
  fStack_e0 = TVar4.Y;
  local_c8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_c8.M.M[0][1] = _UNK_15076b184;
  local_c8.M.M[1][0] = _UNK_15076b188;
  local_c8.M.M[1][1] = _UNK_15076b18c;
  Concatenate<TTransform2<float>_>(&local_b0,&local_c8,&param_2->AccumulatedRenderTransform);
  local_98._s_0.Y = fVar1 * fStack_104 + fStack_e0;
  local_98._s_0.X = fVar1 * 0.0 + local_e4;
  local_64 = param_2->bHasRenderTransform * '\x02' | local_64 & 0xfc;
  local_8c = 0;
  local_6c = local_b0.Trans.field0_0x0;
  local_7c[0] = local_b0.M.M[0][0];
  local_7c[1] = local_b0.M.M[0][1];
  afStack_74[0] = local_b0.M.M[1][0];
  afStack_74[1] = local_b0.M.M[1][1];
  local_90 = fVar1;
  local_84 = CONCAT44(fVar9,FVar3._0_4_);
  FSlateDrawElement::MakeBox
            (param_4,param_5 + 1U,(FPaintGeometry *)&local_98._s_0,&this->HandleBrush,None,
             (FLinearColor *)&local_d8._s_0);
  iVar7 = SCompoundWidget::OnPaint
                    ((SCompoundWidget *)this,param_1,param_2,param_3,param_4,param_5 + 1U,param_6,
                     param_7);
  return iVar7;
}

