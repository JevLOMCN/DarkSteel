// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// ~STabDrawerTextBlock @ 1427027c0

void __thiscall STabDrawerTextBlock::~STabDrawerTextBlock(STabDrawerTextBlock *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDefaultDelete<FSlateTextBlockLayout>::operator()
            ((TDefaultDelete<FSlateTextBlockLayout> *)&this->TextLayoutCache,
             (this->TextLayoutCache).Ptr);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Rotation).Getter);
  pvVar1 = *(void **)&(this->Rotation).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Rotation).Getter);
  FTextBlockStyle::~FTextBlockStyle(&this->TextStyle);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Text).Getter);
  pvVar1 = *(void **)&(this->Text).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Text).Getter);
  pIVar2 = (this->Text).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

// ComputeDesiredSize @ 142715740

TVector2<double> * __thiscall
STabDrawerTextBlock::ComputeDesiredSize
          (STabDrawerTextBlock *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  FSlateTextBlockLayout *this_00;
  FText *pFVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  TVector2<double>_u_0 local_98;
  FText local_88;
  FWidgetDesiredSizeArgs local_78;
  
  this_00 = (this->TextLayoutCache).Ptr;
  pFVar1 = FText::FText(&local_88);
  pFVar2 = TAttribute<FText>::Get(&this->Text);
  local_78.Text.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_78.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.Text.TextData.Reference + 8))
              (local_78.Text.TextData.Reference,local_res8);
  }
  local_78.Text.Flags = pFVar2->Flags;
  local_78.HighlightText.TextData.Reference = (pFVar1->TextData).Reference;
  if (local_78.HighlightText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.HighlightText.TextData.Reference + 8))
              (local_78.HighlightText.TextData.Reference,local_res8);
  }
  local_78.HighlightText.Flags = pFVar1->Flags;
  local_78.WrapTextAt = 0.0;
  local_78.LineHeightPercentage = 1.0;
  local_78.ApplyLineHeightToBottomLine = true;
  local_78.WrappingPolicy = DefaultWrapping;
  local_78.Margin.Left = 0.0;
  local_78.Margin.Top = 0.0;
  local_78.Margin.Right = 0.0;
  local_78.Margin.Bottom = 0.0;
  local_78.TransformPolicy = None;
  local_78.Justification = Left;
  local_78.AutoWrapText = false;
  FSlateTextBlockLayout::ComputeDesiredSize
            (this_00,(TVector2<double> *)&local_98._s_0,&local_78,param_1,&this->TextStyle);
  if (local_78.HighlightText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.HighlightText.TextData.Reference + 0x10))();
  }
  if (local_78.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.Text.TextData.Reference + 0x10))();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_98._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_98._s_0.X;
  return __return_storage_ptr__;
}

// Construct @ 14271e100

void __thiscall STabDrawerTextBlock::Construct(STabDrawerTextBlock *this,FArguments *param_1)

{
  TUniquePtr<FSlateTextBlockLayout,TDefaultDelete<FSlateTextBlockLayout>_> *this_00;
  int iVar1;
  TDisplayStringPtr<FString_const_> TVar2;
  ITextData *pIVar3;
  undefined8 uVar4;
  EStyleColor EVar5;
  undefined2 uVar6;
  TSharedRef<FPlainTextLayoutMarshaller,1> *pTVar7;
  FTextBlockStyle *pFVar8;
  FSlateTextBlockLayout *pFVar9;
  FSlateTextBlockLayout *pFVar10;
  ETextOverflowPolicy local_res8;
  char local_res9;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_378 [8];
  ForAnyElementType local_370;
  ulonglong local_368;
  FDestructionSentinel local_360;
  TSharedRef<ITextLayoutMarshaller,1> local_348;
  TDefaultDelete<FSlateTextBlockLayout> local_338 [8];
  TSharedRef<FPlainTextLayoutMarshaller,1> local_330;
  FTextBlockStyle local_318;
  
  TAttribute<FText>::operator=(&this->Text,&param_1->_Text);
  pFVar8 = param_1->_TextStyle;
  FSlateFontInfo::operator=(&(this->TextStyle).Font,&pFVar8->Font);
  uVar4 = *(undefined8 *)((longlong)&(pFVar8->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TextStyle).ColorAndOpacity.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar8->ColorAndOpacity).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TextStyle).ColorAndOpacity.SpecifiedColor.field0_0x0 + 8) =
       uVar4;
  EVar5 = (pFVar8->ColorAndOpacity).ColorTableId;
  uVar6 = *(undefined2 *)&(pFVar8->ColorAndOpacity).field_0x12;
  (this->TextStyle).ColorAndOpacity.ColorUseRule = (pFVar8->ColorAndOpacity).ColorUseRule;
  (this->TextStyle).ColorAndOpacity.ColorTableId = EVar5;
  *(undefined2 *)&(this->TextStyle).ColorAndOpacity.field_0x12 = uVar6;
  (this->TextStyle).ShadowOffset = pFVar8->ShadowOffset;
  uVar4 = *(undefined8 *)((longlong)&(pFVar8->ShadowColorAndOpacity).field0_0x0 + 8);
  *(undefined8 *)&(this->TextStyle).ShadowColorAndOpacity.field0_0x0 =
       *(undefined8 *)&(pFVar8->ShadowColorAndOpacity).field0_0x0;
  *(undefined8 *)((longlong)&(this->TextStyle).ShadowColorAndOpacity.field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)
           ((longlong)&(pFVar8->SelectedBackgroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TextStyle).SelectedBackgroundColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar8->SelectedBackgroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->TextStyle).SelectedBackgroundColor.SpecifiedColor.field0_0x0 + 8) = uVar4;
  EVar5 = (pFVar8->SelectedBackgroundColor).ColorTableId;
  uVar6 = *(undefined2 *)&(pFVar8->SelectedBackgroundColor).field_0x12;
  (this->TextStyle).SelectedBackgroundColor.ColorUseRule =
       (pFVar8->SelectedBackgroundColor).ColorUseRule;
  (this->TextStyle).SelectedBackgroundColor.ColorTableId = EVar5;
  *(undefined2 *)&(this->TextStyle).SelectedBackgroundColor.field_0x12 = uVar6;
  uVar4 = *(undefined8 *)((longlong)&(pFVar8->HighlightColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TextStyle).HighlightColor.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(pFVar8->HighlightColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TextStyle).HighlightColor.SpecifiedColor.field0_0x0 + 8) = uVar4
  ;
  EVar5 = (pFVar8->HighlightColor).ColorTableId;
  uVar6 = *(undefined2 *)&(pFVar8->HighlightColor).field_0x12;
  (this->TextStyle).HighlightColor.ColorUseRule = (pFVar8->HighlightColor).ColorUseRule;
  (this->TextStyle).HighlightColor.ColorTableId = EVar5;
  *(undefined2 *)&(this->TextStyle).HighlightColor.field_0x12 = uVar6;
  FSlateBrush::operator=(&(this->TextStyle).HighlightShape,&pFVar8->HighlightShape);
  FSlateBrush::operator=(&(this->TextStyle).StrikeBrush,&pFVar8->StrikeBrush);
  FSlateBrush::operator=(&(this->TextStyle).UnderlineBrush,&pFVar8->UnderlineBrush);
  (this->TextStyle).TransformPolicy = pFVar8->TransformPolicy;
  (this->TextStyle).OverflowPolicy = pFVar8->OverflowPolicy;
  TAttribute<enum_STabDrawerTextBlock::ERotation>::operator=(&this->Rotation,&param_1->_Rotation);
  pTVar7 = FPlainTextLayoutMarshaller::Create(&local_330);
  pFVar10 = (FSlateTextBlockLayout *)0x0;
  local_368 = 0;
  local_378 = (undefined1  [8])0x0;
  local_370.Data = (FScriptContainerElement *)0x0;
  pFVar8 = FTextBlockStyle::GetDefault();
  pFVar9 = ::operator_new(0x70);
  if (pFVar9 != (FSlateTextBlockLayout *)0x0) {
    local_348.Object = (ITextLayoutMarshaller *)pTVar7->Object;
    local_348.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    local_360.AccessType = Reader;
    local_360._4_4_ = 0;
    local_360.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    if (local_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res9 = 0;
    local_res11 = 0;
    pFVar8 = FTextBlockStyle::FTextBlockStyle(&local_318,pFVar8);
    pFVar10 = FSlateTextBlockLayout::FSlateTextBlockLayout
                        (pFVar9,(SWidget *)this,pFVar8,SUB82(&local_res10,0),SUB82(&local_res8,0),
                         (TDelegate<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy>
                          *)local_378,&local_348,(TSharedPtr<IBreakIterator,1> *)&local_360);
  }
  this_00 = &this->TextLayoutCache;
  if ((TDefaultDelete<FSlateTextBlockLayout> *)this_00 == local_338) {
    if (pFVar10 != (FSlateTextBlockLayout *)0x0) {
      TVar2 = (pFVar10->HighlightTextLastUpdate).LocalizedStringPtr;
      if (TVar2 != (TDisplayStringPtr<FString_const_>)0x0) {
        LOCK();
        iVar1 = *(int *)TVar2;
        *(int *)TVar2 = *(int *)TVar2 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          if (*(void **)((longlong)TVar2 + 8) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)TVar2 + 8));
          }
          ::operator_delete((void *)TVar2,0x18);
        }
      }
      pIVar3 = (pFVar10->HighlightTextLastUpdate).TextDataPtr.Reference;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))();
      }
      TVar2 = (pFVar10->TextLastUpdate).LocalizedStringPtr;
      if (TVar2 != (TDisplayStringPtr<FString_const_>)0x0) {
        LOCK();
        iVar1 = *(int *)TVar2;
        *(int *)TVar2 = *(int *)TVar2 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          if (*(void **)((longlong)TVar2 + 8) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)TVar2 + 8));
          }
          ::operator_delete((void *)TVar2,0x18);
        }
      }
      pIVar3 = (pFVar10->TextLastUpdate).TextDataPtr.Reference;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar10->TextHighlighter).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar10->Marshaller).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar10->TextLayout).SharedReferenceCount.ReferenceController);
      ::operator_delete(pFVar10,0x70);
    }
  }
  else {
    pFVar9 = this_00->Ptr;
    this_00->Ptr = pFVar10;
    TDefaultDelete<FSlateTextBlockLayout>::operator()
              ((TDefaultDelete<FSlateTextBlockLayout> *)this_00,pFVar9);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_378,
             (FWriteAccessScope *)&local_360);
  if (((int)local_368 != 0) && (local_370.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_370.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_370,0,0,0x10);
    local_368 = local_368 & 0xffffffff00000000;
  }
  if (local_360.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_360.Accessor,&local_360);
  }
  if (local_370.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_378);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_330.SharedReferenceCount.ReferenceController);
  local_res9 = (param_1->_OverflowPolicy).bIsSet;
  if ((bool)local_res9 == false) {
    local_res8 = (this->TextStyle).OverflowPolicy;
    local_res9 = '\x01';
  }
  else {
    local_res8 = (param_1->_OverflowPolicy).TypedValue;
  }
  FSlateTextBlockLayout::SetTextOverflowPolicy(this_00->Ptr,SUB82(&local_res8,0));
  return;
}

// OnPaint @ 142769e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STabDrawerTextBlock::OnPaint
          (STabDrawerTextBlock *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  TDelegate<STabDrawerTextBlock::ERotation___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  ERotation EVar6;
  int iVar7;
  longlong *plVar8;
  uint extraout_XMM0_Da;
  double dVar9;
  undefined1 auStackY_158 [32];
  undefined8 local_118;
  TTransform2<float> local_110;
  float local_f8;
  float local_f4;
  FSlateLayoutTransform local_f0;
  FSlateLayoutTransform local_e4;
  TVector2<double>_u_0 local_d8;
  FGeometry local_c8;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_118 = param_2->Size;
  FSlateTextBlockLayout::GetDesiredSize
            ((this->TextLayoutCache).Ptr,(TVector2<double> *)&local_d8._s_0);
  this_00 = &(this->Rotation).Getter;
  uVar2 = (double)(float)local_118;
  if (local_d8._s_0.Y <= (double)(float)local_118) {
    uVar2 = local_d8._s_0.Y;
  }
  uVar3 = (double)local_118._4_4_;
  if (local_d8._s_0.X <= (double)local_118._4_4_) {
    uVar3 = local_d8._s_0.X;
  }
  dVar9 = (double)uVar2 * __real_3fe0000000000000;
  dVar1 = (double)uVar3 * __real_3fe0000000000000;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)&local_110);
  if (((*(int *)&(this->Rotation).Getter.field_0x10 == 0) ||
      (plVar8 = *(longlong **)&(this->Rotation).Getter.field_0x8, plVar8 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar8 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_110);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_110);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)&local_110);
    if (*(int *)&(this->Rotation).Getter.field_0x10 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)&(this->Rotation).Getter.field_0x8;
    }
    EVar6 = (**(code **)(*plVar8 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_110);
    (this->Rotation).Value = EVar6;
  }
  __libm_sse2_sincosf_();
  local_e4.Translation.field0_0x0 = (param_2->AbsolutePosition).field0_0x0;
  local_110.M.M[1][0] = (float)(extraout_XMM0_Da ^ __xmm_80000000800000008000000080000000);
  local_f0.Translation.field0_0x0._s_0.X = (float)(dVar9 - dVar1);
  local_110.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
  local_118 = (FDeprecateSlateVector2D)0x3f0000003f000000;
  local_f0.Scale = 1.0;
  local_f0.Translation.field0_0x0._s_0.Y = (float)(dVar1 - dVar9);
  local_f8 = (float)(double)uVar3;
  local_f4 = (float)(double)uVar2;
  local_e4.Scale = param_2->Scale;
  FGeometry::FGeometry
            (&local_c8,(FDeprecateVector2DParameter *)&local_f8,&local_f0,&local_110,
             (FDeprecateVector2DParameter *)&local_118,&local_e4,
             &param_2->AccumulatedRenderTransform);
  if ((param_7) && (this->field_0x3a != '\0')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  iVar7 = FSlateTextBlockLayout::OnPaint
                    ((this->TextLayoutCache).Ptr,param_1,&local_c8,param_3,param_4,param_5,param_6,
                     bVar5);
  return iVar7;
}

