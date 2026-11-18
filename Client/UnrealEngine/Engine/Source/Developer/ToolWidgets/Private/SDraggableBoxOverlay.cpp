// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 11

// Construct @ 142d7f6f0

void __thiscall
UE::ToolWidgets::SDraggableBoxOverlay::Construct(SDraggableBoxOverlay *this,FArguments *param_1)

{
  longlong *this_00;
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  SBox *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  FArguments *pFVar6;
  FArguments *pFVar7;
  TSharedRef<SWidget,1> *pTVar8;
  TSharedRef<UE::ToolWidgets::SDraggableBox,1> *pTVar9;
  TSharedRef<SBox,1> *pTVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&> local_res20;
  TSharedRef<SWidget,1> local_658;
  bool local_648;
  bool local_647;
  undefined1 local_640 [8];
  ForAnyElementType FStack_638;
  int local_630;
  SDraggableBox *local_628;
  FSharedReferencer<1> local_620;
  SDraggableBox *local_618;
  FSharedReferencer<1> local_610;
  bool local_608;
  TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1> local_600;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_5f0;
  TSharedRef<SBox,1> local_5d8;
  TSharedRef<UE::ToolWidgets::SDraggableBox,1> local_5c8;
  undefined1 local_5b8 [528];
  undefined1 local_3a8 [24];
  undefined1 local_390 [24];
  FArguments local_378;
  
  this->HorizontalAlignment = param_1->_HAlign;
  this->VerticalAlignment = param_1->_VAlign;
  pFVar6 = SBox::FArguments::FArguments(&local_378);
  pFVar6->_HAlign = this->HorizontalAlignment;
  pFVar6->_VAlign = this->VerticalAlignment;
  pFVar7 = SDraggableBox::FArguments::FArguments((FArguments *)local_5b8);
  local_648 = (param_1->_IsDraggable).Value;
  local_647 = (param_1->_IsDraggable).bIsSet;
  local_630 = 0;
  local_640 = (undefined1  [8])0x0;
  FStack_638.Data = (FScriptContainerElement *)0x0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_640,
             &(param_1->_IsDraggable).Getter);
  (pFVar7->_IsDraggable).Value = local_648;
  (pFVar7->_IsDraggable).bIsSet = local_647;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_IsDraggable).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_640);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_640,
             (FWriteAccessScope *)&local_618);
  if ((local_630 != 0) && (FStack_638.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_638.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_638,0,0,0x10);
    local_630 = 0;
  }
  if (local_608 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_610.ReferenceController,
               (FDestructionSentinel *)&local_618);
  }
  if (FStack_638.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_638.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_640);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar7->_OnUserDraggedToNewPosition,&param_1->_OnUserDraggedToNewPosition);
  pTVar1 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar2 = (param_1->_Content).Widget.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar7->_Content).Widget.Object = pSVar2;
  (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_658);
  local_600.Object = (SDraggableBoxOverlay *)pTVar8->Object;
  local_600.SharedReferenceCount.ReferenceController =
       (pTVar8->SharedReferenceCount).ReferenceController;
  if (local_600.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_600.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_600.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_658.SharedReferenceCount.ReferenceController);
  local_res20.Arg0 = &local_600;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_658,&local_res18,true);
  TSlateDecl<UE::ToolWidgets::SDraggableBox,RequiredArgs::T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&>_>
  ::
  TSlateDecl<UE::ToolWidgets::SDraggableBox,RequiredArgs::T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&>_>
            ((TSlateDecl<UE::ToolWidgets::SDraggableBox,RequiredArgs::T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&>_>
              *)&local_618,"SDraggableBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Overlay\\SDraggableBoxOverlay.cpp"
             ,0x1d,&local_res20);
  FMemScope::~FMemScope((FMemScope *)&local_658);
  FLLMScope::~FLLMScope(local_res10);
  local_628 = local_618;
  local_620.ReferenceController = local_610.ReferenceController;
  if (local_610.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_610.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_610.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->DraggableBox != (TSharedPtr<SWidget,1> *)&local_628) {
    (this->DraggableBox).Object = (SWidget *)local_618;
    local_628 = (SDraggableBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DraggableBox).SharedReferenceCount,&local_620);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_620.ReferenceController);
  pTVar9 = TSlateDecl<UE::ToolWidgets::SDraggableBox,RequiredArgs::T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&>_>
           ::operator<<=((TSlateDecl<UE::ToolWidgets::SDraggableBox,RequiredArgs::T1RequiredArgs<TSharedRef<UE::ToolWidgets::SDraggableBoxOverlay,1>_&&>_>
                          *)&local_618,&local_5c8,pFVar7);
  pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
  local_658.Object = (SWidget *)pTVar9->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar6->_Content).Widget.Object = local_658.Object;
  (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  local_658.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_658,&local_res18,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_5f0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Overlay\\SDraggableBoxOverlay.cpp"
             ,0x19,local_res8);
  FMemScope::~FMemScope((FMemScope *)&local_658);
  FLLMScope::~FLLMScope(local_res10);
  if (local_5f0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5f0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5f0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  pTVar3 = (this->Container).SharedReferenceCount.ReferenceController;
  (this->Container).Object = local_5f0._Widget.Object;
  (this->Container).SharedReferenceCount.ReferenceController =
       local_5f0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar10 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(&local_5f0,&local_5d8,pFVar6)
  ;
  this_00 = &this->_padding_;
  pTVar3 = (pTVar10->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar10->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar4;
  this->_padding_ = (longlong)pTVar3;
  local_658.Object = (SWidget *)pSVar4;
  local_658.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5f0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_610.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_600.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_390);
  if ((void *)local_390._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_390._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_390);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a8);
  if ((void *)local_3a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5b8._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_5b8);
  SBox::FArguments::~FArguments(&local_378);
  SetBoxAlignmentOffset(this,&param_1->_InitialAlignmentOffset,false);
  return;
}

// GetBoxAlignmentOffset @ 142dab620

TVector2<float> __thiscall
UE::ToolWidgets::SDraggableBoxOverlay::GetBoxAlignmentOffset(SDraggableBoxOverlay *this)

{
  SBox *pSVar1;
  float fVar2;
  TVector2<float>_u_0 in_RDX;
  
  pSVar1 = (this->Container).Object;
  *(TVector2<float>_u_0 *)in_RDX =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  if (pSVar1 == (SBox *)0x0) {
    return (TVector2<float>)in_RDX;
  }
  if (this->HorizontalAlignment == HAlign_Left) {
    fVar2 = (this->Padding).Left;
  }
  else {
    if (this->HorizontalAlignment != HAlign_Right) goto LAB_142dab657;
    fVar2 = (this->Padding).Right;
  }
  *(float *)in_RDX = fVar2;
LAB_142dab657:
  if (this->VerticalAlignment == VAlign_Top) {
    *(float *)((longlong)in_RDX + 4) = (this->Padding).Top;
  }
  else if (this->VerticalAlignment == VAlign_Bottom) {
    *(float *)((longlong)in_RDX + 4) = (this->Padding).Bottom;
    return (TVector2<float>)in_RDX;
  }
  return (TVector2<float>)in_RDX;
}

// GetBoxHorizontalAlignment @ 142dab690

EHorizontalAlignment __thiscall
UE::ToolWidgets::SDraggableBoxOverlay::GetBoxHorizontalAlignment(SDraggableBoxOverlay *this)

{
  return this->HorizontalAlignment;
}

// GetBoxVerticalAlignment @ 142dab6a0

EVerticalAlignment __thiscall
UE::ToolWidgets::SDraggableBoxOverlay::GetBoxVerticalAlignment(SDraggableBoxOverlay *this)

{
  return this->VerticalAlignment;
}

// GetDragBoxPosition @ 142dac1e0

FToolWidget_DragBoxPosition * __thiscall
UE::ToolWidgets::SDraggableBoxOverlay::GetDragBoxPosition
          (SDraggableBoxOverlay *this,FToolWidget_DragBoxPosition *__return_storage_ptr__)

{
  float fVar1;
  undefined8 local_res8;
  
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  if ((this->Container).Object == (SBox *)0x0) goto LAB_142dac24c;
  if (this->HorizontalAlignment == HAlign_Left) {
    local_res8._0_4_ = (this->Padding).Left;
LAB_142dac21e:
    local_res8._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
  }
  else if (this->HorizontalAlignment == HAlign_Right) {
    local_res8._0_4_ = (this->Padding).Right;
    goto LAB_142dac21e;
  }
  if (this->VerticalAlignment == VAlign_Top) {
    fVar1 = (this->Padding).Top;
  }
  else {
    if (this->VerticalAlignment != VAlign_Bottom) goto LAB_142dac24c;
    fVar1 = (this->Padding).Bottom;
  }
  local_res8._4_4_ = fVar1;
LAB_142dac24c:
  (__return_storage_ptr__->RelativeOffset).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)local_res8;
  (__return_storage_ptr__->HAlign).Value = (char)this->HorizontalAlignment;
  (__return_storage_ptr__->VAlign).Value = (char)this->VerticalAlignment;
  return __return_storage_ptr__;
}

// GetPadding @ 142daf760

FMargin * __thiscall
UE::ToolWidgets::SDraggableBoxOverlay::GetPadding
          (SDraggableBoxOverlay *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->Padding).Top;
  fVar2 = (this->Padding).Right;
  fVar3 = (this->Padding).Bottom;
  __return_storage_ptr__->Left = (this->Padding).Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// RecomputeAnchorPoints @ 142dd0e50

TVector2<float> __thiscall
UE::ToolWidgets::SDraggableBoxOverlay::RecomputeAnchorPoints
          (SDraggableBoxOverlay *this,TVector2<float> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FGeometry *pFVar4;
  TVector2<float> TVar5;
  FGeometry *pFVar6;
  SBox *pSVar7;
  EHorizontalAlignment EVar8;
  TVector2<float>_u_0_s_0 *in_R8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_res8;
  float local_88;
  float fStack_84;
  
  pFVar4 = SWidget::GetTickSpaceGeometry((SWidget *)this);
  local_res8._0_4_ = SUB84(pFVar4->Size,0);
  local_res8._4_4_ = SUB84(pFVar4->Size,4);
  fVar13 = (pFVar4->AccumulatedRenderTransform).M.M[0][0];
  fVar14 = (pFVar4->AccumulatedRenderTransform).M.M[1][0];
  fVar15 = (pFVar4->AccumulatedRenderTransform).M.M[0][1];
  fVar16 = (pFVar4->AccumulatedRenderTransform).M.M[1][1];
  if (((this->DraggableBox).Object == (SWidget *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar5.field0_0x0 = (TVector2<float>_u_0)(*pcVar1)();
    return (TVector2<float>)TVar5.field0_0x0;
  }
  pFVar6 = SWidget::GetTickSpaceGeometry((this->DraggableBox).Object);
  fStack_84 = SUB84(pFVar6->Size,4);
  local_88 = SUB84(pFVar6->Size,0);
  fVar10 = fStack_84 * (pFVar6->AccumulatedRenderTransform).M.M[1][0];
  fVar9 = local_88 * (pFVar6->AccumulatedRenderTransform).M.M[0][0];
  fVar12 = fStack_84 * (pFVar6->AccumulatedRenderTransform).M.M[1][1];
  fVar11 = local_88 * (pFVar6->AccumulatedRenderTransform).M.M[0][1];
  local_88 = SUB84(pFVar4->Size,0);
  fStack_84 = SUB84(pFVar4->Size,4);
  fVar14 = ((local_88 * (pFVar4->AccumulatedRenderTransform).M.M[0][0] +
            fStack_84 * (pFVar4->AccumulatedRenderTransform).M.M[1][0]) - (fVar10 + fVar9)) *
           ((float)(undefined4)local_res8 /
           ((float)(undefined4)local_res8 * fVar13 + (float)local_res8._4_4_ * fVar14));
  fVar13 = ((local_88 * (pFVar4->AccumulatedRenderTransform).M.M[0][1] +
            fStack_84 * (pFVar4->AccumulatedRenderTransform).M.M[1][1]) - (fVar11 + fVar12)) *
           ((float)local_res8._4_4_ /
           ((float)(undefined4)local_res8 * fVar15 + (float)local_res8._4_4_ * fVar16));
  fVar16 = fVar14 * __real_3f000000;
  fVar15 = fVar13 * __real_3f000000;
  iVar3 = _finite((double)fVar16);
  if ((iVar3 == 0) || (iVar3 = _finite((double)fVar15), iVar3 == 0)) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8922972751338143911>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Overlay\\SDraggableBoxOverlay.cpp"
                       ,0xa7,"!MidPoint.ContainsNaN()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar5.field0_0x0 = (TVector2<float>_u_0)(*pcVar1)();
      return (TVector2<float>)TVar5.field0_0x0;
    }
    local_res8 = *in_R8;
    goto LAB_142dd11ea;
  }
  local_res8._0_4_ = (*in_R8).X;
  fVar9 = fVar14;
  if ((float)(undefined4)local_res8 <= fVar14) {
    fVar9 = (float)(undefined4)local_res8;
  }
  local_res8._4_4_ = (*in_R8).Y;
  fVar10 = fVar13;
  if ((float)local_res8._4_4_ <= fVar13) {
    fVar10 = (float)local_res8._4_4_;
  }
  local_res8._4_4_ = fVar10;
  local_res8._0_4_ = fVar9;
  if (fVar16 < fVar9) {
    local_res8._0_4_ = fVar14 - fVar9;
    if (fVar14 - fVar9 <= __real_40400000) {
      local_res8._0_4_ = __real_40400000;
    }
    if (this->HorizontalAlignment == HAlign_Left) {
      pSVar7 = (this->Container).Object;
      this->HorizontalAlignment = HAlign_Right;
      if (pSVar7 != (SBox *)0x0) {
        EVar8 = HAlign_Right;
LAB_142dd1129:
        SBox::SetHAlign(pSVar7,EVar8);
      }
    }
    else if (this->HorizontalAlignment == HAlign_Right) {
      pSVar7 = (this->Container).Object;
      this->HorizontalAlignment = HAlign_Left;
      if (pSVar7 != (SBox *)0x0) {
        EVar8 = HAlign_Left;
        goto LAB_142dd1129;
      }
    }
  }
  if (fVar15 < fVar10) {
    fVar14 = fVar13 - fVar10;
    if (fVar13 - fVar10 <= __real_40400000) {
      fVar14 = __real_40400000;
    }
    local_res8._4_4_ = fVar14;
    if (this->VerticalAlignment == VAlign_Top) {
      pSVar7 = (this->Container).Object;
      this->VerticalAlignment = VAlign_Bottom;
      if (pSVar7 != (SBox *)0x0) {
        SBox::SetVAlign(pSVar7,VAlign_Bottom);
      }
    }
    else if (this->VerticalAlignment == VAlign_Bottom) {
      pSVar7 = (this->Container).Object;
      this->VerticalAlignment = VAlign_Top;
      if (pSVar7 != (SBox *)0x0) {
        SBox::SetVAlign(pSVar7,VAlign_Top);
      }
    }
  }
LAB_142dd11ea:
  param_1->field0_0x0 = local_res8;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// RestoreFromDragBoxPosition @ 142dd5720

void __thiscall
UE::ToolWidgets::SDraggableBoxOverlay::RestoreFromDragBoxPosition
          (SDraggableBoxOverlay *this,FToolWidget_DragBoxPosition *param_1)

{
  SBox *pSVar1;
  EHorizontalAlignment EVar2;
  EVerticalAlignment EVar3;
  
  EVar2 = (EHorizontalAlignment)(param_1->HAlign).Value;
  this->HorizontalAlignment = EVar2;
  pSVar1 = (this->Container).Object;
  if (pSVar1 != (SBox *)0x0) {
    SBox::SetHAlign(pSVar1,EVar2);
  }
  pSVar1 = (this->Container).Object;
  EVar3 = (EVerticalAlignment)(param_1->VAlign).Value;
  this->VerticalAlignment = EVar3;
  if (pSVar1 != (SBox *)0x0) {
    SBox::SetVAlign(pSVar1,EVar3);
  }
  SetBoxAlignmentOffset(this,&param_1->RelativeOffset,false);
  return;
}

// SetBoxAlignmentOffset @ 142dd80d0

void __thiscall
UE::ToolWidgets::SDraggableBoxOverlay::SetBoxAlignmentOffset
          (SDraggableBoxOverlay *this,TVector2<float> *param_1,bool param_2)

{
  TVector2<float> TVar1;
  SBox *this_00;
  float local_res8;
  float fStackX_c;
  TVector2<float> local_res20;
  TAttribute<FMargin> local_38;
  
  this_00 = (this->Container).Object;
  if ((this_00 != (SBox *)0x0) && ((this->DraggableBox).Object != (SWidget *)0x0)) {
    local_res8 = (param_1->field0_0x0)._s_0.X;
    fStackX_c = (param_1->field0_0x0)._s_0.Y;
    if (local_res8 <= __real_40400000) {
      local_res8 = __real_40400000;
    }
    if (fStackX_c <= __real_40400000) {
      fStackX_c = __real_40400000;
    }
    if (param_2) {
      TVar1 = RecomputeAnchorPoints(this,&local_res20);
      this_00 = (this->Container).Object;
      fStackX_c = (float)((ulonglong)*(undefined8 *)TVar1.field0_0x0 >> 0x20);
      local_res8 = (float)*(undefined8 *)TVar1.field0_0x0;
    }
    if (this->HorizontalAlignment == HAlign_Left) {
      (this->Padding).Left = local_res8;
      (this->Padding).Right = 0.0;
    }
    else if (this->HorizontalAlignment == HAlign_Right) {
      (this->Padding).Right = local_res8;
      (this->Padding).Left = 0.0;
    }
    if (this->VerticalAlignment == VAlign_Top) {
      (this->Padding).Top = fStackX_c;
      (this->Padding).Bottom = 0.0;
    }
    else if (this->VerticalAlignment == VAlign_Bottom) {
      (this->Padding).Bottom = fStackX_c;
      (this->Padding).Top = 0.0;
    }
    if (this_00 != (SBox *)0x0) {
      local_38.Value.Left = (this->Padding).Left;
      local_38.Value.Top = (this->Padding).Top;
      local_38.Value.Right = (this->Padding).Right;
      local_38.Value.Bottom = (this->Padding).Bottom;
      local_38.bIsSet = true;
      local_38.Getter._16_8_ = 0;
      local_38.Getter._0_8_ = 0;
      local_38.Getter._8_8_ = 0;
      SBox::SetPadding(this_00,&local_38);
    }
  }
  return;
}

// SetBoxHorizontalAlignment @ 142dd8200

void __thiscall
UE::ToolWidgets::SDraggableBoxOverlay::SetBoxHorizontalAlignment
          (SDraggableBoxOverlay *this,EHorizontalAlignment param_1)

{
  undefined1 *puVar1;
  SBox *pSVar2;
  FBoxOneChildSlot *pFVar3;
  
  this->HorizontalAlignment = param_1;
  pSVar2 = (this->Container).Object;
  if (pSVar2 == (SBox *)0x0) {
    return;
  }
  puVar1 = &(pSVar2->ChildSlot).field_0x50;
  if (*(EHorizontalAlignment *)&(pSVar2->ChildSlot).field_0x50 != param_1) {
    *(EHorizontalAlignment *)puVar1 = param_1;
    pFVar3 = &pSVar2->ChildSlot;
    if (puVar1 == (undefined1 *)0x0) {
      pFVar3 = (FBoxOneChildSlot *)0x0;
    }
    FSlotBase::Invalidate((FSlotBase *)&pFVar3->field_0x20,Layout);
    return;
  }
  return;
}

// SetBoxVerticalAlignment @ 142dd8220

void __thiscall
UE::ToolWidgets::SDraggableBoxOverlay::SetBoxVerticalAlignment
          (SDraggableBoxOverlay *this,EVerticalAlignment param_1)

{
  SBox *pSVar1;
  FBoxOneChildSlot *pFVar2;
  
  this->VerticalAlignment = param_1;
  pSVar1 = (this->Container).Object;
  if (pSVar1 == (SBox *)0x0) {
    return;
  }
  if (*(EVerticalAlignment *)&(pSVar1->ChildSlot).field_0x54 != param_1) {
    *(EVerticalAlignment *)&(pSVar1->ChildSlot).field_0x54 = param_1;
    pFVar2 = &pSVar1->ChildSlot;
    if (pSVar1 == (SBox *)0xfffffffffffffd98) {
      pFVar2 = (FBoxOneChildSlot *)0x0;
    }
    FSlotBase::Invalidate((FSlotBase *)&pFVar2->field_0x20,Layout);
    return;
  }
  return;
}

