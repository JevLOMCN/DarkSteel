// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 27

// SRichTextBlock @ 1429bac90

SRichTextBlock * __thiscall SRichTextBlock::SRichTextBlock(SRichTextBlock *this)

{
  SWidget::SWidget((SWidget *)this);
  *(undefined ***)this = &___7SRichTextBlock__6B_;
  FText::FText(&(this->BoundText).Value);
  (this->BoundText).bIsSet = false;
  *(undefined8 *)&(this->BoundText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->BoundText).Getter = 0;
  *(undefined8 *)&(this->BoundText).Getter.field_0x8 = 0;
  (this->TextLayoutCache).Ptr = (FSlateTextBlockLayout *)0x0;
  FTextBlockStyle::FTextBlockStyle(&this->TextStyle);
  FText::FText(&(this->HighlightText).Value);
  (this->HighlightText).bIsSet = false;
  *(undefined8 *)&(this->HighlightText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->HighlightText).Getter = 0;
  *(undefined8 *)&(this->HighlightText).Getter.field_0x8 = 0;
  (this->WrapTextAt).Value = 0.0;
  (this->WrapTextAt).bIsSet = false;
  *(undefined8 *)&(this->WrapTextAt).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->WrapTextAt).Getter = 0;
  *(undefined8 *)&(this->WrapTextAt).Getter.field_0x8 = 0;
  (this->AutoWrapText).Value = false;
  (this->AutoWrapText).bIsSet = false;
  *(undefined8 *)&(this->AutoWrapText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->AutoWrapText).Getter = 0;
  *(undefined8 *)&(this->AutoWrapText).Getter.field_0x8 = 0;
  (this->WrappingPolicy).Value = DefaultWrapping;
  (this->WrappingPolicy).bIsSet = false;
  *(undefined8 *)&(this->WrappingPolicy).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->WrappingPolicy).Getter = 0;
  *(undefined8 *)&(this->WrappingPolicy).Getter.field_0x8 = 0;
  (this->TransformPolicy).Value = None;
  (this->TransformPolicy).bIsSet = false;
  *(undefined8 *)&(this->TransformPolicy).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->TransformPolicy).Getter = 0;
  *(undefined8 *)&(this->TransformPolicy).Getter.field_0x8 = 0;
  (this->Margin).bIsSet = false;
  *(undefined8 *)&(this->Margin).Getter.field_0x8 = 0;
  (this->Margin).Value.Left = 0.0;
  (this->Margin).Value.Top = 0.0;
  (this->Margin).Value.Right = 0.0;
  (this->Margin).Value.Bottom = 0.0;
  *(undefined8 *)&(this->Margin).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Margin).Getter = 0;
  (this->Justification).Value = Left;
  (this->Justification).bIsSet = false;
  *(undefined8 *)&(this->Justification).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Justification).Getter = 0;
  *(undefined8 *)&(this->Justification).Getter.field_0x8 = 0;
  (this->LineHeightPercentage).Value = 0.0;
  (this->LineHeightPercentage).bIsSet = false;
  *(undefined8 *)&(this->LineHeightPercentage).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LineHeightPercentage).Getter = 0;
  *(undefined8 *)&(this->LineHeightPercentage).Getter.field_0x8 = 0;
  (this->ApplyLineHeightToBottomLine).Value = false;
  (this->ApplyLineHeightToBottomLine).bIsSet = false;
  *(undefined8 *)&(this->ApplyLineHeightToBottomLine).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ApplyLineHeightToBottomLine).Getter = 0;
  *(undefined8 *)&(this->ApplyLineHeightToBottomLine).Getter.field_0x8 = 0;
  (this->MinDesiredWidth).Value = 0.0;
  (this->MinDesiredWidth).bIsSet = false;
  *(undefined8 *)&(this->MinDesiredWidth).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MinDesiredWidth).Getter = 0;
  *(undefined8 *)&(this->MinDesiredWidth).Getter.field_0x8 = 0;
  (this->Marshaller).Object = (FRichTextLayoutMarshaller *)0x0;
  (this->Marshaller).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->TextBlockScale = 1.0;
  return this;
}

// ~SRichTextBlock @ 1429bffd0

void __thiscall SRichTextBlock::~SRichTextBlock(SRichTextBlock *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  *(undefined ***)this = &___7SRichTextBlock__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Marshaller).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinDesiredWidth).Getter);
  pvVar1 = *(void **)&(this->MinDesiredWidth).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MinDesiredWidth).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ApplyLineHeightToBottomLine).Getter);
  pvVar1 = *(void **)&(this->ApplyLineHeightToBottomLine).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ApplyLineHeightToBottomLine).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LineHeightPercentage).Getter);
  pvVar1 = *(void **)&(this->LineHeightPercentage).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LineHeightPercentage).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Justification).Getter);
  pvVar1 = *(void **)&(this->Justification).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Justification).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Margin).Getter);
  pvVar1 = *(void **)&(this->Margin).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Margin).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TransformPolicy).Getter);
  pvVar1 = *(void **)&(this->TransformPolicy).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TransformPolicy).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->WrappingPolicy).Getter);
  pvVar1 = *(void **)&(this->WrappingPolicy).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->WrappingPolicy).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AutoWrapText).Getter);
  pvVar1 = *(void **)&(this->AutoWrapText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AutoWrapText).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->WrapTextAt).Getter);
  pvVar1 = *(void **)&(this->WrapTextAt).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->WrapTextAt).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->HighlightText).Getter);
  pvVar1 = *(void **)&(this->HighlightText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->HighlightText).Getter);
  pIVar2 = (this->HighlightText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FTextBlockStyle::~FTextBlockStyle(&this->TextStyle);
  TDefaultDelete<FSlateTextBlockLayout>::operator()
            ((TDefaultDelete<FSlateTextBlockLayout> *)&this->TextLayoutCache,
             (this->TextLayoutCache).Ptr);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BoundText).Getter);
  pvVar1 = *(void **)&(this->BoundText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BoundText).Getter);
  pIVar2 = (this->BoundText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  SWidget::~SWidget((SWidget *)this);
  return;
}

// ComputeDesiredSize @ 1429ce7d0

TVector2<double> * __thiscall
SRichTextBlock::ComputeDesiredSize
          (SRichTextBlock *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ETextTransformPolicy EVar4;
  ETextWrappingPolicy EVar5;
  bool bVar6;
  Type TVar7;
  FSlateTextBlockLayout *this_00;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  Type *pTVar12;
  bool *pbVar13;
  float *pfVar14;
  FMargin *pFVar15;
  ETextTransformPolicy *pEVar16;
  ETextWrappingPolicy *pEVar17;
  FText *pFVar18;
  FText *pFVar19;
  TVector2<double> *pTVar20;
  FTextBlockStyle *this_01;
  undefined1 local_res20 [8];
  undefined1 local_d8 [8];
  TVector2<double>_u_0 local_d0;
  FWidgetDesiredSizeArgs local_c0;
  
  this_00 = (this->TextLayoutCache).Ptr;
  fVar1 = this->TextBlockScale;
  pTVar12 = TAttribute<enum_ETextJustify::Type>::Get(&this->Justification);
  TVar7 = *pTVar12;
  pbVar13 = TAttribute<bool>::Get(&this->ApplyLineHeightToBottomLine);
  bVar11 = *pbVar13;
  pfVar14 = TAttribute<float>::Get(&this->LineHeightPercentage);
  fVar2 = *pfVar14;
  pFVar15 = TAttribute<FMargin>::Get(&this->Margin);
  pEVar16 = TAttribute<enum_ETextTransformPolicy>::Get(&this->TransformPolicy);
  EVar4 = *pEVar16;
  pEVar17 = TAttribute<enum_ETextWrappingPolicy>::Get(&this->WrappingPolicy);
  EVar5 = *pEVar17;
  pbVar13 = TAttribute<bool>::Get(&this->AutoWrapText);
  bVar6 = *pbVar13;
  pfVar14 = TAttribute<float>::Get(&this->WrapTextAt);
  fVar3 = *pfVar14;
  pFVar18 = TAttribute<FText>::Get(&this->HighlightText);
  pFVar19 = TAttribute<FText>::Get(&this->BoundText);
  local_c0.Text.TextData.Reference = (pFVar19->TextData).Reference;
  if (local_c0.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c0.Text.TextData.Reference + 8))
              (local_c0.Text.TextData.Reference,local_res20);
  }
  local_c0.Text.Flags = pFVar19->Flags;
  local_c0.HighlightText.TextData.Reference = (pFVar18->TextData).Reference;
  if (local_c0.HighlightText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c0.HighlightText.TextData.Reference + 8))
              (local_c0.HighlightText.TextData.Reference,local_d8);
  }
  local_c0.HighlightText.Flags = pFVar18->Flags;
  local_c0.Margin.Left = pFVar15->Left;
  local_c0.Margin.Top = pFVar15->Top;
  local_c0.Margin.Right = pFVar15->Right;
  local_c0.Margin.Bottom = pFVar15->Bottom;
  local_c0.WrapTextAt = fVar3;
  local_c0.LineHeightPercentage = fVar2;
  local_c0.ApplyLineHeightToBottomLine = bVar11;
  local_c0.WrappingPolicy = EVar5;
  local_c0.TransformPolicy = EVar4;
  local_c0.Justification = TVar7;
  local_c0.AutoWrapText = bVar6;
  if ((this_00->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      pTVar20 = (TVector2<double> *)(*pcVar8)();
      return pTVar20;
    }
  }
  this_01 = FSlateTextLayout::GetDefaultTextStyle((this_00->TextLayout).Object);
  bVar11 = FTextBlockStyle::IsIdenticalTo(this_01,&this->TextStyle);
  if (!bVar11) {
    FSlateTextBlockLayout::UpdateTextStyle(this_00,&this->TextStyle);
  }
  FSlateTextBlockLayout::ComputeDesiredSize
            (this_00,(TVector2<double> *)&local_d0._s_0,&local_c0,param_1 * fVar1);
  fVar1 = this->TextBlockScale;
  dVar9 = (double)fVar1 * local_d0._s_0.X;
  if (local_c0.HighlightText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c0.HighlightText.TextData.Reference + 0x10))();
  }
  if (local_c0.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c0.Text.TextData.Reference + 0x10))();
  }
  pfVar14 = TAttribute<float>::Get(&this->MinDesiredWidth);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1 * local_d0._s_0.Y;
  dVar10 = (double)*pfVar14;
  if ((double)*pfVar14 <= dVar9) {
    dVar10 = dVar9;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar10;
  return __return_storage_ptr__;
}

// ComputeVolatility @ 1429cfee0

bool __thiscall SRichTextBlock::ComputeVolatility(SRichTextBlock *this)

{
  bool bVar1;
  
  bVar1 = TAttribute<FText>::IsBound(&this->BoundText);
  if (!bVar1) {
    bVar1 = TAttribute<FText>::IsBound(&this->HighlightText);
    if (!bVar1) {
      bVar1 = TAttribute<float>::IsBound(&this->WrapTextAt);
      if (!bVar1) {
        bVar1 = TAttribute<bool>::IsBound(&this->AutoWrapText);
        if (!bVar1) {
          bVar1 = TAttribute<enum_ETextWrappingPolicy>::IsBound(&this->WrappingPolicy);
          if (!bVar1) {
            bVar1 = TAttribute<enum_ETextTransformPolicy>::IsBound(&this->TransformPolicy);
            if (!bVar1) {
              bVar1 = TAttribute<FMargin>::IsBound(&this->Margin);
              if (!bVar1) {
                bVar1 = TAttribute<enum_ETextJustify::Type>::IsBound(&this->Justification);
                if (!bVar1) {
                  bVar1 = TAttribute<float>::IsBound(&this->LineHeightPercentage);
                  if (!bVar1) {
                    bVar1 = TAttribute<float>::IsBound(&this->MinDesiredWidth);
                    if (!bVar1) {
                      return false;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}

// Construct @ 1429d70d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall SRichTextBlock::Construct(SRichTextBlock *this,FArguments *param_1)

{
  int *piVar1;
  TSharedPtr<FRichTextLayoutMarshaller,1> *pTVar2;
  TUniquePtr<FSlateTextBlockLayout,TDefaultDelete<FSlateTextBlockLayout>_> *this_00;
  EWidgetUpdateFlags EVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FRichTextLayoutMarshaller *pFVar6;
  ISlateStyle *pIVar7;
  TSharedRef<ITextDecorator,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  TSharedRef<FDefaultRichTextMarkupParser,1> *pTVar17;
  TSharedRef<FRichTextLayoutMarshaller,1> *pTVar18;
  FSlateTextBlockLayout *pFVar19;
  FTextBlockStyle *pFVar20;
  undefined8 *puVar21;
  ulong64 uVar22;
  ETextOverflowPolicy EVar23;
  FScriptContainerElement *pFVar24;
  EWidgetUpdateFlags EVar25;
  FScriptContainerElement *pFVar26;
  undefined1 local_res8 [8];
  ETextFlowDirection local_res10;
  char local_res11;
  ETextShapingMethod local_res18;
  char local_res19;
  ETextOverflowPolicy local_res20;
  char local_res21;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4a0;
  FDelegateAllocation local_498;
  FSlateTextBlockLayout *local_488;
  TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> local_480;
  undefined1 local_470 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_458;
  ForAnyElementType FStack_450;
  int local_448;
  FRichTextLayoutMarshaller *local_440;
  FSharedReferencer<1> local_438 [2];
  FDefaultRichTextMarkupParser *local_428;
  FSharedReferencer<1> FStack_420;
  undefined8 local_418;
  FSharedReferencer<1> local_410;
  TSharedRef<ITextLayoutMarshaller,1> local_408;
  FDestructionSentinel local_3f8;
  FDestructionSentinel local_3e0;
  FDestructionSentinel local_3c8;
  FDestructionSentinel local_3b0;
  FDelegateAllocation *local_398;
  TSharedRef<FDefaultRichTextMarkupParser,1> local_390;
  FRichTextLayoutMarshaller *local_380;
  TReferenceControllerBase<1> *pTStack_378;
  TSharedPtr<IRichTextMarkupWriter,1> local_370;
  TSharedPtr<IRichTextMarkupParser,1> local_358;
  TSharedRef<FRichTextLayoutMarshaller,1> local_348;
  TSharedPtr<IBreakIterator,1> local_338;
  FTextBlockStyle local_328;
  
  TAttribute<FText>::operator=(&this->BoundText,&param_1->_Text);
  TAttribute<FText>::operator=(&this->HighlightText,&param_1->_HighlightText);
  FTextBlockStyle::operator=(&this->TextStyle,param_1->_TextStyle);
  (this->WrapTextAt).Value = (param_1->_WrapTextAt).Value;
  (this->WrapTextAt).bIsSet = (param_1->_WrapTextAt).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->WrapTextAt).Getter,&(param_1->_WrapTextAt).Getter);
  (this->AutoWrapText).Value = (param_1->_AutoWrapText).Value;
  (this->AutoWrapText).bIsSet = (param_1->_AutoWrapText).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->AutoWrapText).Getter,&(param_1->_AutoWrapText).Getter);
  (this->WrappingPolicy).Value = (param_1->_WrappingPolicy).Value;
  (this->WrappingPolicy).bIsSet = (param_1->_WrappingPolicy).bIsSet;
  TDelegate<enum_ETextWrappingPolicy___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->WrappingPolicy).Getter,&(param_1->_WrappingPolicy).Getter);
  (this->TransformPolicy).Value = (param_1->_TransformPolicy).Value;
  (this->TransformPolicy).bIsSet = (param_1->_TransformPolicy).bIsSet;
  TDelegate<enum_ETextTransformPolicy___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->TransformPolicy).Getter,&(param_1->_TransformPolicy).Getter);
  fVar12 = (param_1->_Margin).Value.Top;
  fVar13 = (param_1->_Margin).Value.Right;
  fVar14 = (param_1->_Margin).Value.Bottom;
  (this->Margin).Value.Left = (param_1->_Margin).Value.Left;
  (this->Margin).Value.Top = fVar12;
  (this->Margin).Value.Right = fVar13;
  (this->Margin).Value.Bottom = fVar14;
  (this->Margin).bIsSet = (param_1->_Margin).bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Margin).Getter,&(param_1->_Margin).Getter);
  (this->LineHeightPercentage).Value = (param_1->_LineHeightPercentage).Value;
  (this->LineHeightPercentage).bIsSet = (param_1->_LineHeightPercentage).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->LineHeightPercentage).Getter,&(param_1->_LineHeightPercentage).Getter);
  (this->ApplyLineHeightToBottomLine).Value = (param_1->_ApplyLineHeightToBottomLine).Value;
  (this->ApplyLineHeightToBottomLine).bIsSet = (param_1->_ApplyLineHeightToBottomLine).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ApplyLineHeightToBottomLine).Getter,
             &(param_1->_ApplyLineHeightToBottomLine).Getter);
  (this->Justification).Value = (param_1->_Justification).Value;
  (this->Justification).bIsSet = (param_1->_Justification).bIsSet;
  TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Justification).Getter,&(param_1->_Justification).Getter);
  (this->MinDesiredWidth).Value = (param_1->_MinDesiredWidth).Value;
  (this->MinDesiredWidth).bIsSet = (param_1->_MinDesiredWidth).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MinDesiredWidth).Getter,&(param_1->_MinDesiredWidth).Getter);
  FStack_420.ReferenceController = (param_1->_Parser).SharedReferenceCount.ReferenceController;
  local_428 = (FDefaultRichTextMarkupParser *)(param_1->_Parser).Object;
  if (FStack_420.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_420.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_420.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_428 == (FDefaultRichTextMarkupParser *)0x0) {
    pTVar17 = FDefaultRichTextMarkupParser::GetStaticInstance(&local_390);
    local_410.ReferenceController = (pTVar17->SharedReferenceCount).ReferenceController;
    local_428 = pTVar17->Object;
    if (local_410.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_410.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_410.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_418 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_420,&local_410);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_410.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_390.SharedReferenceCount.ReferenceController);
  }
  pTVar5 = (param_1->_Marshaller).SharedReferenceCount.ReferenceController;
  pTVar2 = &this->Marshaller;
  pFVar6 = (param_1->_Marshaller).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_380 = pTVar2->Object;
  pTStack_378 = (this->Marshaller).SharedReferenceCount.ReferenceController;
  pTVar2->Object = pFVar6;
  (this->Marshaller).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_378);
  if (pTVar2->Object == (FRichTextLayoutMarshaller *)0x0) {
    pIVar7 = param_1->_DecoratorStyleSet;
    pTVar8 = (TSharedRef<ITextDecorator,1> *)(param_1->_Decorators).AllocatorInstance.Data;
    local_480.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (param_1->_Decorators).ArrayNum;
    local_480.ArrayNum = iVar4;
    if (iVar4 == 0) {
      local_480.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,0,&local_480.AllocatorInstance,iVar4,&local_480.ArrayMax);
      ConstructItems<TSharedRef<ITextDecorator,1>,TSharedRef<ITextDecorator,1>,int>
                (local_480.AllocatorInstance.Data,pTVar8,iVar4);
    }
    local_358.Object = (IRichTextMarkupParser *)local_428;
    local_358.SharedReferenceCount.ReferenceController = FStack_420.ReferenceController;
    local_370.Object = (IRichTextMarkupWriter *)0x0;
    local_370.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (FStack_420.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_420.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_420.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar18 = FRichTextLayoutMarshaller::Create(&local_348,&local_358,&local_370,&local_480,pIVar7);
    local_438[0].ReferenceController = (pTVar18->SharedReferenceCount).ReferenceController;
    local_440 = pTVar18->Object;
    if (local_438[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_438[0].ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_438[0].ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar2 != (TSharedPtr<FRichTextLayoutMarshaller,1> *)&local_440) {
      pTVar2->Object = local_440;
      local_440 = (FRichTextLayoutMarshaller *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Marshaller).SharedReferenceCount,local_438);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_438[0].ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_348.SharedReferenceCount.ReferenceController);
  }
  iVar4 = (param_1->InlineDecorators).ArrayNum;
  pFVar24 = (param_1->InlineDecorators).AllocatorInstance.Data;
  pFVar26 = pFVar24 + (longlong)iVar4 * 0x10;
  while( true ) {
    if ((param_1->InlineDecorators).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedRef<ITextDecorator,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar24 == pFVar26) break;
    if (pTVar2->Object == (FRichTextLayoutMarshaller *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar6 = pTVar2->Object;
    pFVar9 = (pFVar6->InlineDecorators).AllocatorInstance.Data;
    if ((pFVar9 <= pFVar24) &&
       (pFVar24 < pFVar9 + (longlong)(pFVar6->InlineDecorators).ArrayMax * 0x10)) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    iVar16 = (pFVar6->InlineDecorators).ArrayNum;
    piVar1 = &(pFVar6->InlineDecorators).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(pFVar6->InlineDecorators).AllocatorInstance,piVar1);
    }
    (pFVar6->InlineDecorators).ArrayNum = iVar16 + 1;
    pFVar9 = (pFVar6->InlineDecorators).AllocatorInstance.Data;
    *(undefined8 *)(pFVar9 + (longlong)iVar16 * 0x10) = *(undefined8 *)pFVar24;
    lVar10 = *(longlong *)(pFVar24 + 8);
    *(longlong *)(pFVar9 + (longlong)iVar16 * 0x10 + 8) = lVar10;
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
    pFVar24 = pFVar24 + 0x10;
  }
  if (pTVar2->Object == (FRichTextLayoutMarshaller *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar15) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar5 = (this->Marshaller).SharedReferenceCount.ReferenceController;
  pFVar6 = pTVar2->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar6 == (FRichTextLayoutMarshaller *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar15) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar19 = ::operator_new(0x70);
  if (pFVar19 == (FSlateTextBlockLayout *)0x0) {
    local_488 = (FSlateTextBlockLayout *)0x0;
  }
  else {
    local_338.Object = (IBreakIterator *)0x0;
    local_338.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res11 = (param_1->_TextFlowDirection).bIsSet;
    if ((bool)local_res11 != false) {
      local_res10 = (param_1->_TextFlowDirection).TypedValue;
    }
    local_res19 = (param_1->_TextShapingMethod).bIsSet;
    if ((bool)local_res19 != false) {
      local_res18 = (param_1->_TextShapingMethod).TypedValue;
    }
    local_408.Object = (ITextLayoutMarshaller *)pFVar6;
    local_408.SharedReferenceCount.ReferenceController = pTVar5;
    pFVar20 = FTextBlockStyle::FTextBlockStyle(&local_328,&this->TextStyle);
    local_488 = FSlateTextBlockLayout::FSlateTextBlockLayout
                          (pFVar19,(SWidget *)this,pFVar20,SUB82(&local_res18,0),
                           SUB82(&local_res10,0),&param_1->_CreateSlateTextLayout,&local_408,
                           &local_338);
  }
  this_00 = &this->TextLayoutCache;
  pFVar19 = local_488;
  if (this_00 !=
      (TUniquePtr<FSlateTextBlockLayout,TDefaultDelete<FSlateTextBlockLayout>_> *)&local_488) {
    pFVar19 = this_00->Ptr;
    this_00->Ptr = local_488;
    local_488 = (FSlateTextBlockLayout *)0x0;
    TDefaultDelete<FSlateTextBlockLayout>::operator()
              ((TDefaultDelete<FSlateTextBlockLayout> *)this_00,pFVar19);
    pFVar19 = (FSlateTextBlockLayout *)0x0;
  }
  TDefaultDelete<FSlateTextBlockLayout>::operator()
            ((TDefaultDelete<FSlateTextBlockLayout> *)&local_488,pFVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pFVar19 = this_00->Ptr;
  local_4a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_498.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_498.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4a0,(FWriteAccessScope *)&local_3b0);
  local_398 = &local_498;
  puVar21 = UE::Core::Private::DelegateAllocate(0x20,&local_498);
  if (puVar21 != (undefined8 *)0x0) {
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFString__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar22;
    *puVar21 = &TBaseFunctorDelegateInstance<FString___cdecl(void),FDefaultDelegateUserPolicy,`SRichTextBlock::Construct'::`3'::<lambda_1>_>
                ::_vftable_;
    puVar21[3] = this;
  }
  if (local_3b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b0.Accessor,&local_3b0);
  }
  local_470._0_8_ = (FScriptContainerElement *)0x0;
  local_470._8_4_ = 0;
  local_470._12_4_ = 0;
  local_470[0x10] = true;
  local_458.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_450.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4a0,(FWriteAccessScope *)&local_3f8);
  if (FStack_450.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_450.Data);
  }
  FStack_450.Data = (FScriptContainerElement *)local_498.DelegateAllocator;
  local_448 = local_498.DelegateSize;
  local_498.DelegateSize = 0;
  local_498.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  if (local_3f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3f8.Accessor,&local_3f8);
  }
  if ((pFVar19->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar15) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  FTextLayout::SetDebugSourceInfo
            ((FTextLayout *)(pFVar19->TextLayout).Object,(TAttribute<FString> *)local_470);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_458,(FWriteAccessScope *)&local_3e0);
  if ((local_448 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_450.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_450.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_450,0,0,0x10);
    local_448 = 0;
  }
  if (local_3e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e0.Accessor,&local_3e0);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_450.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_450.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_458.AccessDetector);
  if ((FScriptContainerElement *)local_470._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_470._0_8_);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4a0,(FWriteAccessScope *)&local_3c8);
  if ((local_498.DelegateSize != 0) &&
     (local_498.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_498.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_498,0,0,0x10);
    local_498.DelegateSize = 0;
  }
  if (local_3c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c8.Accessor,&local_3c8);
  }
  if (local_498.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_498.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4a0.AccessDetector);
  local_res21 = (param_1->_OverflowPolicy).bIsSet;
  pFVar19 = (this->TextLayoutCache).Ptr;
  if ((bool)local_res21 == false) {
    EVar23 = (this->TextStyle).OverflowPolicy;
    local_res21 = '\x01';
  }
  else {
    EVar23 = (param_1->_OverflowPolicy).TypedValue;
  }
  if ((pFVar19->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar15) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  if (local_res21 != '\0') {
    local_res20 = EVar23;
  }
  FTextLayout::SetTextOverflowPolicy
            ((FTextLayout *)(pFVar19->TextLayout).Object,SUB82(&local_res20,0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_420.ReferenceController);
  EVar3 = this->field_0x38;
  EVar25 = EVar3 & ~NeedsTick;
  this->field_0x38 = EVar25;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->field_0x18,(SWidget *)this,EVar3,EVar25);
  return;
}

// GetChildren @ 1429ea6e0

FChildren * __thiscall SRichTextBlock::GetChildren(SRichTextBlock *this)

{
  FSlateTextBlockLayout *pFVar1;
  code *pcVar2;
  bool bVar3;
  FChildren *pFVar4;
  
  pFVar1 = (this->TextLayoutCache).Ptr;
  if ((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FChildren *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar4 = FSlateTextLayout::GetChildren((pFVar1->TextLayout).Object);
  return pFVar4;
}

// OnArrangeChildren @ 1429f8380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SRichTextBlock::OnArrangeChildren
          (SRichTextBlock *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  FSlateTextBlockLayout *pFVar1;
  FSlateTextLayout *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStackY_a8 [32];
  float local_78;
  float fStack_74;
  undefined8 local_70;
  FSlateLayoutTransform local_68;
  FSlateLayoutTransform local_5c;
  FGeometry local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_68.Scale = this->TextBlockScale;
  local_70 = param_1->Size;
  local_68.Translation.field0_0x0 = (TVector2<float>_u_0)0x0;
  local_5c.Scale = param_1->Scale;
  fStack_74 = (__real_3f800000 / local_68.Scale) * local_70._4_4_;
  local_78 = (__real_3f800000 / local_68.Scale) * (float)local_70;
  local_5c.Translation.field0_0x0 = (param_1->AbsolutePosition).field0_0x0;
  FGeometry::FGeometry
            (&local_50,(FDeprecateVector2DParameter *)&local_78,&local_68,&local_5c,
             &param_1->AccumulatedRenderTransform,param_1->bHasRenderTransform);
  pFVar1 = (this->TextLayoutCache).Ptr;
  if ((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (pFVar1->TextLayout).Object;
  (**(code **)(*(longlong *)pFVar2 + 0x38))(pFVar2,&local_50,param_2);
  return;
}

// OnPaint @ 1429ffad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SRichTextBlock::OnPaint
          (SRichTextBlock *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  FSlateTextBlockLayout *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  bool *pbVar6;
  undefined1 auStackY_118 [32];
  float local_d8;
  float fStack_d4;
  undefined8 local_d0;
  FSlateLayoutTransform local_c8;
  FSlateLayoutTransform local_bc;
  TVector2<double>_u_0 local_b0;
  TVector2<double>_u_0 local_a0;
  FGeometry local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar1 = (this->TextLayoutCache).Ptr;
  if (((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  FTextLayout::GetSize
            ((FTextLayout *)(pFVar1->TextLayout).Object,(TVector2<double> *)&local_a0._s_0);
  local_c8.Scale = this->TextBlockScale;
  local_d0 = param_2->Size;
  local_c8.Translation.field0_0x0 = (TVector2<float>_u_0)0x0;
  fStack_d4 = (__real_3f800000 / local_c8.Scale) * local_d0._4_4_;
  local_d8 = (__real_3f800000 / local_c8.Scale) * (float)local_d0;
  local_bc.Scale = param_2->Scale;
  local_bc.Translation.field0_0x0 = (param_2->AbsolutePosition).field0_0x0;
  FGeometry::FGeometry
            (&local_90,(FDeprecateVector2DParameter *)&local_d8,&local_c8,&local_bc,
             &param_2->AccumulatedRenderTransform,param_2->bHasRenderTransform);
  if ((param_7) && (this->field_0x3a != '\0')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  iVar4 = FSlateTextBlockLayout::OnPaint
                    ((this->TextLayoutCache).Ptr,param_1,&local_90,param_3,param_4,param_5,param_6,
                     bVar3);
  pFVar1 = (this->TextLayoutCache).Ptr;
  if (((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  FTextLayout::GetSize
            ((FTextLayout *)(pFVar1->TextLayout).Object,(TVector2<double> *)&local_b0._s_0);
  pfVar5 = TAttribute<float>::Get(&this->WrapTextAt);
  if ((*pfVar5 <= 0.0) && (pbVar6 = TAttribute<bool>::Get(&this->AutoWrapText), *pbVar6 == false)) {
    return iVar4;
  }
  if ((__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)(local_b0._s_0.X - local_a0._s_0.X) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_b0._s_0.X - local_a0._s_0.X,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)(local_b0._s_0.Y - local_a0._s_0.Y) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_b0._s_0.Y - local_a0._s_0.Y,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    SWidget::Invalidate((SWidget *)this,Layout);
  }
  return iVar4;
}

// Refresh @ 142a04af0

void __thiscall SRichTextBlock::Refresh(SRichTextBlock *this)

{
  FSlateTextBlockLayout *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->TextLayoutCache).Ptr;
  if ((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FTextLayout::DirtyLayout((FTextLayout *)(pFVar1->TextLayout).Object);
  if ((pFVar1->Marshaller).Object == (ITextLayoutMarshaller *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)((longlong)*(pFVar1->Marshaller).Object + 0x20))();
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// SetApplyLineHeightToBottomLine @ 142a07430

void __thiscall
SRichTextBlock::SetApplyLineHeightToBottomLine(SRichTextBlock *this,TAttribute<bool> *param_1)

{
  SetWidgetAttribute<bool,bool>((SWidget *)this,&this->ApplyLineHeightToBottomLine,param_1,Layout);
  return;
}

// SetAutoWrapText @ 142a075f0

void __thiscall SRichTextBlock::SetAutoWrapText(SRichTextBlock *this,TAttribute<bool> *param_1)

{
  SetWidgetAttribute<bool,bool>((SWidget *)this,&this->AutoWrapText,param_1,Prepass);
  return;
}

// SetDecoratorStyleSet @ 142a08af0

void __thiscall SRichTextBlock::SetDecoratorStyleSet(SRichTextBlock *this,ISlateStyle *param_1)

{
  FRichTextLayoutMarshaller *pFVar1;
  
  pFVar1 = (this->Marshaller).Object;
  if (pFVar1 != (FRichTextLayoutMarshaller *)0x0) {
    pFVar1->DecoratorStyleSet = param_1;
    Refresh(this);
    return;
  }
  return;
}

// SetDecorators @ 142a08b10

void __thiscall
SRichTextBlock::SetDecorators
          (SRichTextBlock *this,TArrayView<TSharedRef<ITextDecorator,1>,int> *param_1)

{
  int *piVar1;
  FRichTextLayoutMarshaller *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Marshaller).Object;
  if (pFVar2 != (FRichTextLayoutMarshaller *)0x0) {
    DestructItems<TSharedRef<ITextDecorator,1>,int>
              ((TSharedRef<ITextDecorator,1> *)(pFVar2->Decorators).AllocatorInstance.Data,
               (pFVar2->Decorators).ArrayNum);
    piVar1 = &(pFVar2->Decorators).ArrayMax;
    iVar3 = (int)*(undefined8 *)&param_1->ArrayNum;
    (pFVar2->Decorators).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*piVar1,&(pFVar2->Decorators).AllocatorInstance,iVar3,piVar1);
      ConstructItems<TSharedRef<ITextDecorator,1>,TSharedRef<ITextDecorator,1>,int>
                ((pFVar2->Decorators).AllocatorInstance.Data,param_1->DataPtr,iVar3);
    }
    Refresh(this);
  }
  return;
}

// SetHighlightText @ 142a0a000

void __thiscall SRichTextBlock::SetHighlightText(SRichTextBlock *this,TAttribute<FText> *param_1)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  FText *this_00;
  FText *pFVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->HighlightText).Getter
             ,&local_28);
  if (((*(int *)&(this->HighlightText).Getter.field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(this->HighlightText).Getter.field_0x8, plVar1 == (longlong *)0x0))
     || (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    bVar3 = TAttribute<FText>::IsBound(param_1);
    if (!bVar3) {
      this_00 = TAttribute<FText>::Get(param_1);
      pFVar4 = TAttribute<FText>::Get(&this->HighlightText);
      bVar3 = FText::IdenticalTo(this_00,pFVar4,LexicalCompareInvariants|DeepCompare);
      if (bVar3) {
        return;
      }
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  TAttribute<FText>::operator=(&this->HighlightText,param_1);
  SWidget::Invalidate((SWidget *)this,LayoutAndVolatility);
  return;
}

// SetJustification @ 142a0a8a0

void __thiscall
SRichTextBlock::SetJustification(SRichTextBlock *this,TAttribute<ETextJustify::Type> *param_1)

{
  bool bVar1;
  bool bVar2;
  EInvalidateWidgetReason EVar3;
  
  bVar1 = TAttribute<enum_ETextJustify::Type>::IdenticalTo(&this->Justification,param_1);
  if (!bVar1) {
    bVar1 = TAttribute<enum_ETextJustify::Type>::IsBound(&this->Justification);
    bVar2 = TAttribute<enum_ETextJustify::Type>::IsBound(param_1);
    (this->Justification).Value = param_1->Value;
    (this->Justification).bIsSet = param_1->bIsSet;
    TDelegate<enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&(this->Justification).Getter,&param_1->Getter);
    EVar3 = PaintAndVolatility|Layout;
    if (bVar1 == bVar2) {
      EVar3 = Layout;
    }
    SWidget::Invalidate((SWidget *)this,EVar3);
  }
  return;
}

// SetLineHeightPercentage @ 142a0aa60

void __thiscall
SRichTextBlock::SetLineHeightPercentage(SRichTextBlock *this,TAttribute<float> *param_1)

{
  SetWidgetAttribute<float,float>((SWidget *)this,&this->LineHeightPercentage,param_1,Layout);
  return;
}

// SetMargin @ 142a0aba0

void __thiscall SRichTextBlock::SetMargin(SRichTextBlock *this,TAttribute<FMargin> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  EInvalidateWidgetReason EVar6;
  
  bVar4 = TAttribute<FMargin>::IdenticalTo(&this->Margin,param_1);
  if (!bVar4) {
    bVar4 = TAttribute<FMargin>::IsBound(&this->Margin);
    bVar5 = TAttribute<FMargin>::IsBound(param_1);
    fVar1 = (param_1->Value).Top;
    fVar2 = (param_1->Value).Right;
    fVar3 = (param_1->Value).Bottom;
    (this->Margin).Value.Left = (param_1->Value).Left;
    (this->Margin).Value.Top = fVar1;
    (this->Margin).Value.Right = fVar2;
    (this->Margin).Value.Bottom = fVar3;
    (this->Margin).bIsSet = param_1->bIsSet;
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&(this->Margin).Getter,&param_1->Getter);
    EVar6 = PaintAndVolatility|Layout;
    if (bVar4 == bVar5) {
      EVar6 = Layout;
    }
    SWidget::Invalidate((SWidget *)this,EVar6);
  }
  return;
}

// SetMinDesiredWidth @ 142a0aed0

void __thiscall SRichTextBlock::SetMinDesiredWidth(SRichTextBlock *this,TAttribute<float> *param_1)

{
  SetWidgetAttribute<float,float>((SWidget *)this,&this->MinDesiredWidth,param_1,Layout);
  return;
}

// SetOverflowPolicy @ 142a0b3a0

void __thiscall
SRichTextBlock::SetOverflowPolicy(SRichTextBlock *this,TOptional<ETextOverflowPolicy> param_1)

{
  char cVar1;
  FSlateTextBlockLayout *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined6 in_register_00000012;
  undefined1 uVar5;
  undefined1 local_res8;
  char local_res9;
  
  pFVar2 = (this->TextLayoutCache).Ptr;
  cVar1 = ((undefined1 *)CONCAT62(in_register_00000012,param_1))[1];
  uVar5 = local_res8;
  if (cVar1 != '\0') {
    uVar5 = *(undefined1 *)CONCAT62(in_register_00000012,param_1);
  }
  if (((pFVar2->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cVar1 != '\0') {
    local_res8 = uVar5;
  }
  local_res9 = cVar1;
  FTextLayout::SetTextOverflowPolicy
            ((FTextLayout *)(pFVar2->TextLayout).Object,SUB82(&local_res8,0));
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// SetText @ 142a0c9e0

void __thiscall SRichTextBlock::SetText(SRichTextBlock *this,TAttribute<FText> *param_1)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  FText *this_00;
  FText *pFVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->BoundText).Getter,
             &local_28);
  if (((*(int *)&(this->BoundText).Getter.field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(this->BoundText).Getter.field_0x8, plVar1 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    bVar3 = TAttribute<FText>::IsBound(param_1);
    if (!bVar3) {
      this_00 = TAttribute<FText>::Get(param_1);
      pFVar4 = TAttribute<FText>::Get(&this->BoundText);
      bVar3 = FText::IdenticalTo(this_00,pFVar4,LexicalCompareInvariants|DeepCompare);
      if (bVar3) {
        return;
      }
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  TAttribute<FText>::operator=(&this->BoundText,param_1);
  SWidget::Invalidate((SWidget *)this,Prepass|LayoutAndVolatility);
  return;
}

// SetTextBlockScale @ 142a0cbb0

void __thiscall SRichTextBlock::SetTextBlockScale(SRichTextBlock *this,float param_1)

{
  if (param_1 != this->TextBlockScale) {
    this->TextBlockScale = param_1;
    SWidget::Invalidate((SWidget *)this,Prepass);
    return;
  }
  return;
}

// SetTextFlowDirection @ 142a0cde0

void __thiscall
SRichTextBlock::SetTextFlowDirection(SRichTextBlock *this,TOptional<ETextFlowDirection> *param_1)

{
  FSlateTextBlockLayout *pFVar1;
  FSlateTextLayout *this_00;
  code *pcVar2;
  bool bVar3;
  ETextFlowDirection EVar4;
  
  pFVar1 = (this->TextLayoutCache).Ptr;
  if ((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (pFVar1->TextLayout).Object;
  if (param_1->bIsSet == false) {
    EVar4 = GetDefaultTextFlowDirection();
  }
  else {
    EVar4 = param_1->TypedValue;
  }
  FTextLayout::SetTextFlowDirection((FTextLayout *)this_00,EVar4);
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// SetTextShapingMethod @ 142a0d400

void __thiscall
SRichTextBlock::SetTextShapingMethod(SRichTextBlock *this,TOptional<ETextShapingMethod> *param_1)

{
  FSlateTextBlockLayout *pFVar1;
  FSlateTextLayout *this_00;
  code *pcVar2;
  bool bVar3;
  ETextShapingMethod EVar4;
  
  pFVar1 = (this->TextLayoutCache).Ptr;
  if ((pFVar1->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (pFVar1->TextLayout).Object;
  if (param_1->bIsSet == false) {
    EVar4 = GetDefaultTextShapingMethod();
  }
  else {
    EVar4 = param_1->TypedValue;
  }
  FTextLayout::SetTextShapingMethod((FTextLayout *)this_00,EVar4);
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// SetTextStyle @ 142a0d650

void __thiscall SRichTextBlock::SetTextStyle(SRichTextBlock *this,FTextBlockStyle *param_1)

{
  FTextBlockStyle::operator=(&this->TextStyle,param_1);
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// SetTransformPolicy @ 142a0d7d0

void __thiscall
SRichTextBlock::SetTransformPolicy(SRichTextBlock *this,TAttribute<ETextTransformPolicy> *param_1)

{
  SetWidgetAttribute<enum_ETextTransformPolicy,enum_ETextTransformPolicy>
            ((SWidget *)this,&this->TransformPolicy,param_1,Layout);
  return;
}

// SetWrapTextAt @ 142a0dd20

void __thiscall SRichTextBlock::SetWrapTextAt(SRichTextBlock *this,TAttribute<float> *param_1)

{
  SetWidgetAttribute<float,float>((SWidget *)this,&this->WrapTextAt,param_1,Layout);
  return;
}

// SetWrappingPolicy @ 142a0de70

void __thiscall
SRichTextBlock::SetWrappingPolicy(SRichTextBlock *this,TAttribute<ETextWrappingPolicy> *param_1)

{
  SetWidgetAttribute<enum_ETextWrappingPolicy,enum_ETextWrappingPolicy>
            ((SWidget *)this,&this->WrappingPolicy,param_1,Layout);
  return;
}

