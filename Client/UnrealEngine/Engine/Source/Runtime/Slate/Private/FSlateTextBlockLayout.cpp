// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 26

// FSlateTextBlockLayout @ 1429b9690

FSlateTextBlockLayout * __thiscall
FSlateTextBlockLayout::FSlateTextBlockLayout
          (FSlateTextBlockLayout *this,SWidget *param_1,FTextBlockStyle *param_2,
          TOptional<ETextShapingMethod> param_3,TOptional<ETextFlowDirection> param_4,
          TDelegate<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy>
          *param_5,TSharedRef<ITextLayoutMarshaller,1> *param_6,
          TSharedPtr<IBreakIterator,1> *param_7)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateTextLayout *pFVar2;
  code *pcVar3;
  ETextFlowDirection *pEVar4;
  char cVar5;
  bool bVar6;
  FTextBlockStyle *pFVar7;
  TSharedRef<FSlateTextLayout,1> *pTVar8;
  TSharedRef<FSlateTextHighlightRunRenderer,1> *pTVar9;
  FSlateTextBlockLayout *pFVar10;
  longlong *plVar11;
  int iVar12;
  undefined6 in_register_0000008a;
  ETextShapingMethod *pEVar13;
  int iVar14;
  undefined6 in_stack_0000002a;
  TSharedRef<FSlateTextLayout,1> local_378;
  TSharedPtr<IBreakIterator,1> local_368;
  TSharedRef<FSlateTextLayout,1> local_358;
  TSharedRef<FSlateTextHighlightRunRenderer,1> local_348;
  FReadAccessScope local_338;
  FReadAccessScope local_320;
  FTextBlockStyle local_308;
  
  pEVar13 = (ETextShapingMethod *)CONCAT62(in_register_0000008a,param_3);
  plVar11 = (longlong *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_5,&local_338);
  iVar14 = 0;
  if (((*(int *)&param_5->field_0x10 == 0) || (*(longlong **)&param_5->field_0x8 == (longlong *)0x0)
      ) || (cVar5 = (**(code **)(**(longlong **)&param_5->field_0x8 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_338);
    pFVar7 = FTextBlockStyle::FTextBlockStyle(&local_308,param_2);
    pTVar8 = FSlateTextLayout::Create(&local_358,param_1,pFVar7);
    iVar12 = 2;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_338);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_5,&local_320);
    if (*(int *)&param_5->field_0x10 != 0) {
      plVar11 = *(longlong **)&param_5->field_0x8;
    }
    (**(code **)(*plVar11 + 0x60))(plVar11,&local_378,param_1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_320);
    pTVar8 = &local_378;
    iVar12 = iVar14;
    iVar14 = 1;
  }
  (this->TextLayout).Object = pTVar8->Object;
  pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
  (this->TextLayout).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (iVar12 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_358.SharedReferenceCount.ReferenceController);
  }
  if (iVar14 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_378.SharedReferenceCount.ReferenceController);
  }
  (this->Marshaller).Object = param_6->Object;
  pTVar1 = (param_6->SharedReferenceCount).ReferenceController;
  (this->Marshaller).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = FSlateTextHighlightRunRenderer::Create(&local_348);
  (this->TextHighlighter).Object = (ISlateRunRenderer *)pTVar9->Object;
  pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
  (this->TextHighlighter).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_348.SharedReferenceCount.ReferenceController);
  (this->CachedSize).field0_0x0 = (TVector2<float>_u_0)0x0;
  this->CachedWrapTextAt = 0.0;
  this->bCachedAutoWrapText = false;
  FTextSnapshot::FTextSnapshot(&this->TextLastUpdate);
  FTextSnapshot::FTextSnapshot(&this->HighlightTextLastUpdate);
  if (pEVar13[1] != Auto) {
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FSlateTextBlockLayout *)(*pcVar3)();
      return pFVar10;
    }
    pFVar2 = (this->TextLayout).Object;
    if ((pEVar13[1] == Auto) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FSlateTextBlockLayout *)(*pcVar3)();
      return pFVar10;
    }
    FTextLayout::SetTextShapingMethod((FTextLayout *)pFVar2,*pEVar13);
  }
  pEVar4 = (ETextFlowDirection *)CONCAT62(in_stack_0000002a,param_4);
  if (pEVar4[1] != Auto) {
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FSlateTextBlockLayout *)(*pcVar3)();
      return pFVar10;
    }
    pFVar2 = (this->TextLayout).Object;
    if ((pEVar4[1] == Auto) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FSlateTextBlockLayout *)(*pcVar3)();
      return pFVar10;
    }
    FTextLayout::SetTextFlowDirection((FTextLayout *)pFVar2,*pEVar4);
  }
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FSlateTextBlockLayout *)(*pcVar3)();
    return pFVar10;
  }
  pFVar2 = (this->TextLayout).Object;
  local_368.Object = param_7->Object;
  local_368.SharedReferenceCount.ReferenceController =
       (param_7->SharedReferenceCount).ReferenceController;
  (param_7->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_7->Object = (IBreakIterator *)0x0;
  FTextLayout::SetLineBreakIterator((FTextLayout *)pFVar2,&local_368);
  FTextBlockStyle::~FTextBlockStyle(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_7->SharedReferenceCount).ReferenceController);
  return this;
}

// ArrangeChildren @ 1429c8620

void __thiscall
FSlateTextBlockLayout::ArrangeChildren
          (FSlateTextBlockLayout *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  FSlateTextLayout *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  pFVar1 = (this->TextLayout).Object;
                    /* WARNING: Could not recover jumptable at 0x0001429c867f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pFVar1 + 0x38))(pFVar1,param_1,param_2);
  return;
}

// CalculateWrappingWidth @ 1429cc9e0

float __thiscall FSlateTextBlockLayout::CalculateWrappingWidth(FSlateTextBlockLayout *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = this->CachedWrapTextAt;
  fVar3 = fVar1;
  if ((((this->bCachedAutoWrapText != false) &&
       (fVar2 = (this->CachedSize).field0_0x0._s_0.X, __real_3f800000 <= fVar2)) &&
      (fVar3 = fVar2, __real_3f800000 <= fVar1)) && (fVar1 <= fVar2)) {
    fVar3 = fVar1;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  return fVar3;
}

// ComputeDesiredSize @ 1429cdb60

TVector2<double> * __thiscall
FSlateTextBlockLayout::ComputeDesiredSize
          (FSlateTextBlockLayout *this,TVector2<double> *__return_storage_ptr__,FWidgetArgs *param_1
          ,float param_2,FTextBlockStyle *param_3)

{
  float fVar1;
  int iVar2;
  FSlateTextLayout *pFVar3;
  TAttribute<FText> *pTVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  float *pfVar8;
  bool *pbVar9;
  TVector2<double> *pTVar10;
  ETextWrappingPolicy *pEVar11;
  ETextTransformPolicy *pEVar12;
  FMargin *pFVar13;
  Type *pTVar14;
  FTextBlockStyle *pFVar15;
  FText *pFVar16;
  FTextSnapshot *pFVar17;
  FString *pFVar18;
  float fVar19;
  float fVar20;
  FTextSnapshot local_348;
  FTextSnapshot local_330;
  FTextBlockStyle local_318;
  
  if (param_1->WrapTextAt->bIsSet == false) {
    fVar19 = 0.0;
  }
  else {
    pfVar8 = TAttribute<float>::Get(param_1->WrapTextAt);
    fVar19 = *pfVar8;
  }
  this->CachedWrapTextAt = fVar19;
  if (param_1->AutoWrapText->bIsSet == false) {
    bVar6 = false;
  }
  else {
    pbVar9 = TAttribute<bool>::Get(param_1->AutoWrapText);
    bVar6 = *pbVar9;
  }
  this->bCachedAutoWrapText = bVar6;
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TVector2<double> *)(*pcVar5)();
    return pTVar10;
  }
  pFVar3 = (this->TextLayout).Object;
  cVar7 = pFVar3->field_0x9d;
  if ((pFVar3 == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TVector2<double> *)(*pcVar5)();
    return pTVar10;
  }
  FTextLayout::SetScale((FTextLayout *)(this->TextLayout).Object,param_2);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TVector2<double> *)(*pcVar5)();
    return pTVar10;
  }
  fVar19 = this->CachedWrapTextAt;
  fVar20 = fVar19;
  if ((((this->bCachedAutoWrapText != false) &&
       (fVar1 = (this->CachedSize).field0_0x0._s_0.X, __real_3f800000 <= fVar1)) &&
      (fVar20 = fVar1, __real_3f800000 <= fVar19)) && (fVar20 = fVar19, fVar1 <= fVar19)) {
    fVar20 = fVar1;
  }
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  FTextLayout::SetWrappingWidth((FTextLayout *)(this->TextLayout).Object,fVar20);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TVector2<double> *)(*pcVar5)();
    return pTVar10;
  }
  pFVar3 = (this->TextLayout).Object;
  pEVar11 = TAttribute<enum_ETextWrappingPolicy>::Get(&param_1->WrappingPolicy);
  FTextLayout::SetWrappingPolicy((FTextLayout *)pFVar3,*pEVar11);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TVector2<double> *)(*pcVar5)();
    return pTVar10;
  }
  pFVar3 = (this->TextLayout).Object;
  pEVar12 = TAttribute<enum_ETextTransformPolicy>::Get(&param_1->TransformPolicy);
  FTextLayout::SetTransformPolicy((FTextLayout *)pFVar3,*pEVar12);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TVector2<double> *)(*pcVar5)();
    return pTVar10;
  }
  pFVar3 = (this->TextLayout).Object;
  pFVar13 = TAttribute<FMargin>::Get(param_1->Margin);
  FTextLayout::SetMargin((FTextLayout *)pFVar3,pFVar13);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TVector2<double> *)(*pcVar5)();
    return pTVar10;
  }
  pFVar3 = (this->TextLayout).Object;
  pTVar14 = TAttribute<enum_ETextJustify::Type>::Get(param_1->Justification);
  FTextLayout::SetJustification((FTextLayout *)pFVar3,*pTVar14);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TVector2<double> *)(*pcVar5)();
    return pTVar10;
  }
  pFVar3 = (this->TextLayout).Object;
  pfVar8 = TAttribute<float>::Get(param_1->LineHeightPercentage);
  FTextLayout::SetLineHeightPercentage((FTextLayout *)pFVar3,*pfVar8);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TVector2<double> *)(*pcVar5)();
    return pTVar10;
  }
  FTextLayout::SetApplyLineHeightToBottomLine((FTextLayout *)(this->TextLayout).Object,true);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TVector2<double> *)(*pcVar5)();
    return pTVar10;
  }
  if (cVar7 != ((this->TextLayout).Object)->field_0x9d) {
    if (((this->Marshaller).Object == (ITextLayoutMarshaller *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TVector2<double> *)(*pcVar5)();
      return pTVar10;
    }
    (**(code **)((longlong)*(this->Marshaller).Object + 0x20))();
  }
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TVector2<double> *)(*pcVar5)();
    return pTVar10;
  }
  pFVar15 = FSlateTextLayout::GetDefaultTextStyle((this->TextLayout).Object);
  bVar6 = FTextBlockStyle::IsIdenticalTo(pFVar15,param_3);
  if (!bVar6) {
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TVector2<double> *)(*pcVar5)();
      return pTVar10;
    }
    pFVar3 = (this->TextLayout).Object;
    pFVar15 = FTextBlockStyle::FTextBlockStyle(&local_318,param_3);
    FSlateTextLayout::SetDefaultTextStyle(pFVar3,pFVar15);
    if (((this->Marshaller).Object == (ITextLayoutMarshaller *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TVector2<double> *)(*pcVar5)();
      return pTVar10;
    }
    (**(code **)((longlong)*(this->Marshaller).Object + 0x20))();
  }
  pTVar4 = param_1->Text;
  pFVar16 = FText::GetEmpty();
  if (pTVar4->bIsSet != false) {
    pFVar16 = TAttribute<FText>::Get(pTVar4);
  }
  bVar6 = FTextSnapshot::IdenticalTo(&this->TextLastUpdate,pFVar16);
  if (bVar6) {
LAB_1429ce01e:
    if (((this->Marshaller).Object == (ITextLayoutMarshaller *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TVector2<double> *)(*pcVar5)();
      return pTVar10;
    }
    cVar7 = (**(code **)((longlong)*(this->Marshaller).Object + 0x30))();
    if (cVar7 == '\0') goto LAB_1429ce06c;
  }
  else {
    bVar6 = FTextSnapshot::IsDisplayStringEqualTo(&this->TextLastUpdate,pFVar16);
    pFVar17 = FTextSnapshot::FTextSnapshot(&local_348,pFVar16);
    FTextSnapshot::operator=(&this->TextLastUpdate,pFVar17);
    if (local_348.LocalizedStringPtr != (TDisplayStringPtr<FString_const_>)0x0) {
      LOCK();
      iVar2 = *(int *)local_348.LocalizedStringPtr;
      *(int *)local_348.LocalizedStringPtr = *(int *)local_348.LocalizedStringPtr + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if (*(void **)((longlong)local_348.LocalizedStringPtr + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)local_348.LocalizedStringPtr + 8));
        }
        ::operator_delete((void *)local_348.LocalizedStringPtr,0x18);
      }
    }
    if (local_348.TextDataPtr.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_348.TextDataPtr.Reference + 0x10))();
    }
    if (bVar6) goto LAB_1429ce01e;
  }
  pFVar18 = FText::ToString(pFVar16);
  UpdateTextLayout(this,pFVar18);
LAB_1429ce06c:
  pTVar4 = param_1->HighlightText;
  pFVar16 = FText::GetEmpty();
  if (pTVar4->bIsSet != false) {
    pFVar16 = TAttribute<FText>::Get(pTVar4);
  }
  bVar6 = FTextSnapshot::IdenticalTo(&this->HighlightTextLastUpdate,pFVar16);
  if (!bVar6) {
    bVar6 = FTextSnapshot::IsDisplayStringEqualTo(&this->HighlightTextLastUpdate,pFVar16);
    if (!bVar6) {
      UpdateTextHighlights(this,pFVar16);
    }
    pFVar17 = FTextSnapshot::FTextSnapshot(&local_330,pFVar16);
    FTextSnapshot::operator=(&this->HighlightTextLastUpdate,pFVar17);
    if (local_330.LocalizedStringPtr != (TDisplayStringPtr<FString_const_>)0x0) {
      LOCK();
      iVar2 = *(int *)local_330.LocalizedStringPtr;
      *(int *)local_330.LocalizedStringPtr = *(int *)local_330.LocalizedStringPtr + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if (*(void **)((longlong)local_330.LocalizedStringPtr + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)local_330.LocalizedStringPtr + 8));
        }
        ::operator_delete((void *)local_330.LocalizedStringPtr,0x18);
      }
    }
    if (local_330.TextDataPtr.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_330.TextDataPtr.Reference + 0x10))();
    }
  }
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TVector2<double> *)(*pcVar5)();
    return pTVar10;
  }
  (**(code **)(*(longlong *)(this->TextLayout).Object + 8))();
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TVector2<double> *)(*pcVar5)();
    return pTVar10;
  }
  FTextLayout::GetSize((FTextLayout *)(this->TextLayout).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ComputeDesiredSize @ 1429ce1b0

TVector2<double> * __thiscall
FSlateTextBlockLayout::ComputeDesiredSize
          (FSlateTextBlockLayout *this,TVector2<double> *__return_storage_ptr__,
          FWidgetDesiredSizeArgs *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  FSlateTextLayout *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  TVector2<double> *pTVar8;
  FTextSnapshot *pFVar9;
  FString *pFVar10;
  FText *pFVar11;
  float fVar12;
  FTextSnapshot local_58;
  FTextSnapshot local_40;
  
  this->CachedWrapTextAt = param_1->WrapTextAt;
  this->bCachedAutoWrapText = param_1->AutoWrapText;
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TVector2<double> *)(*pcVar5)();
    return pTVar8;
  }
  pFVar4 = (this->TextLayout).Object;
  cVar7 = pFVar4->field_0x9d;
  if ((pFVar4 == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TVector2<double> *)(*pcVar5)();
    return pTVar8;
  }
  FTextLayout::SetScale((FTextLayout *)(this->TextLayout).Object,param_2);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TVector2<double> *)(*pcVar5)();
    return pTVar8;
  }
  fVar1 = this->CachedWrapTextAt;
  fVar12 = fVar1;
  if ((((this->bCachedAutoWrapText != false) &&
       (fVar2 = (this->CachedSize).field0_0x0._s_0.X, __real_3f800000 <= fVar2)) &&
      (fVar12 = fVar2, __real_3f800000 <= fVar1)) && (fVar1 <= fVar2)) {
    fVar12 = fVar1;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  FTextLayout::SetWrappingWidth((FTextLayout *)(this->TextLayout).Object,fVar12);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TVector2<double> *)(*pcVar5)();
    return pTVar8;
  }
  FTextLayout::SetWrappingPolicy((FTextLayout *)(this->TextLayout).Object,param_1->WrappingPolicy);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TVector2<double> *)(*pcVar5)();
    return pTVar8;
  }
  FTextLayout::SetTransformPolicy((FTextLayout *)(this->TextLayout).Object,param_1->TransformPolicy)
  ;
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TVector2<double> *)(*pcVar5)();
    return pTVar8;
  }
  FTextLayout::SetMargin((FTextLayout *)(this->TextLayout).Object,&param_1->Margin);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TVector2<double> *)(*pcVar5)();
    return pTVar8;
  }
  FTextLayout::SetJustification((FTextLayout *)(this->TextLayout).Object,param_1->Justification);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TVector2<double> *)(*pcVar5)();
    return pTVar8;
  }
  FTextLayout::SetLineHeightPercentage
            ((FTextLayout *)(this->TextLayout).Object,param_1->LineHeightPercentage);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TVector2<double> *)(*pcVar5)();
    return pTVar8;
  }
  FTextLayout::SetApplyLineHeightToBottomLine
            ((FTextLayout *)(this->TextLayout).Object,param_1->ApplyLineHeightToBottomLine);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TVector2<double> *)(*pcVar5)();
    return pTVar8;
  }
  if (cVar7 != ((this->TextLayout).Object)->field_0x9d) {
    if (((this->Marshaller).Object == (ITextLayoutMarshaller *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TVector2<double> *)(*pcVar5)();
      return pTVar8;
    }
    (**(code **)((longlong)*(this->Marshaller).Object + 0x20))();
  }
  bVar6 = FTextSnapshot::IdenticalTo(&this->TextLastUpdate,&param_1->Text);
  if (bVar6) {
LAB_1429ce513:
    if (((this->Marshaller).Object == (ITextLayoutMarshaller *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TVector2<double> *)(*pcVar5)();
      return pTVar8;
    }
    cVar7 = (**(code **)((longlong)*(this->Marshaller).Object + 0x30))();
    if (cVar7 == '\0') goto LAB_1429ce55f;
  }
  else {
    bVar6 = FTextSnapshot::IsDisplayStringEqualTo(&this->TextLastUpdate,&param_1->Text);
    pFVar9 = FTextSnapshot::FTextSnapshot(&local_58,&param_1->Text);
    FTextSnapshot::operator=(&this->TextLastUpdate,pFVar9);
    if (local_58.LocalizedStringPtr != (TDisplayStringPtr<FString_const_>)0x0) {
      LOCK();
      iVar3 = *(int *)local_58.LocalizedStringPtr;
      *(int *)local_58.LocalizedStringPtr = *(int *)local_58.LocalizedStringPtr + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if (*(void **)((longlong)local_58.LocalizedStringPtr + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)local_58.LocalizedStringPtr + 8));
        }
        ::operator_delete((void *)local_58.LocalizedStringPtr,0x18);
      }
    }
    if (local_58.TextDataPtr.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextDataPtr.Reference + 0x10))();
    }
    if (bVar6) goto LAB_1429ce513;
  }
  pFVar10 = FText::ToString(&param_1->Text);
  UpdateTextLayout(this,pFVar10);
LAB_1429ce55f:
  pFVar11 = &param_1->HighlightText;
  bVar6 = FTextSnapshot::IdenticalTo(&this->HighlightTextLastUpdate,pFVar11);
  if (!bVar6) {
    bVar6 = FTextSnapshot::IsDisplayStringEqualTo(&this->HighlightTextLastUpdate,pFVar11);
    if (!bVar6) {
      UpdateTextHighlights(this,pFVar11);
    }
    pFVar9 = FTextSnapshot::FTextSnapshot(&local_40,pFVar11);
    FTextSnapshot::operator=(&this->HighlightTextLastUpdate,pFVar9);
    if (local_40.LocalizedStringPtr != (TDisplayStringPtr<FString_const_>)0x0) {
      LOCK();
      iVar3 = *(int *)local_40.LocalizedStringPtr;
      *(int *)local_40.LocalizedStringPtr = *(int *)local_40.LocalizedStringPtr + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if (*(void **)((longlong)local_40.LocalizedStringPtr + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)local_40.LocalizedStringPtr + 8));
        }
        ::operator_delete((void *)local_40.LocalizedStringPtr,0x18);
      }
    }
    if (local_40.TextDataPtr.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextDataPtr.Reference + 0x10))();
    }
  }
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TVector2<double> *)(*pcVar5)();
    return pTVar8;
  }
  (**(code **)(*(longlong *)(this->TextLayout).Object + 8))();
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TVector2<double> *)(*pcVar5)();
    return pTVar8;
  }
  FTextLayout::GetSize((FTextLayout *)(this->TextLayout).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ComputeDesiredSize @ 1429ce690

TVector2<double> * __thiscall
FSlateTextBlockLayout::ComputeDesiredSize
          (FSlateTextBlockLayout *this,TVector2<double> *__return_storage_ptr__,
          FWidgetDesiredSizeArgs *param_1,float param_2,FTextBlockStyle *param_3)

{
  code *pcVar1;
  bool bVar2;
  TVector2<double> *pTVar3;
  FTextBlockStyle *this_00;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector2<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this_00 = FSlateTextLayout::GetDefaultTextStyle((this->TextLayout).Object);
  bVar2 = FTextBlockStyle::IsIdenticalTo(this_00,param_3);
  if (!bVar2) {
    UpdateTextStyle(this,param_3);
  }
  ComputeDesiredSize(this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// ConditionallyUpdateTextStyle @ 1429d0020

void __thiscall
FSlateTextBlockLayout::ConditionallyUpdateTextStyle
          (FSlateTextBlockLayout *this,CompareParams *param_1)

{
  FSlateColor *pFVar1;
  TVector2<float>_u_0_s_0 TVar2;
  code *pcVar3;
  bool bVar4;
  FTextBlockStyle *this_00;
  float local_res8;
  float fStackX_c;
  undefined1 local_2e8 [128];
  float local_268;
  FLinearColor_u_0 local_264 [2];
  FLinearColor_u_0 local_240;
  undefined4 local_230;
  FSlateBrush local_228;
  FSlateBrush local_178 [2];
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  this_00 = FSlateTextLayout::GetDefaultTextStyle((this->TextLayout).Object);
  bVar4 = FTextBlockStyle::IsIdenticalTo(this_00,param_1);
  if (!bVar4) {
    FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_2e8,param_1->StyleBase);
    FSlateFontInfo::operator=((FSlateFontInfo *)(local_2e8 + 8),param_1->Font);
    if (param_1->StrikeBrush != (FSlateBrush *)0x0) {
      FSlateBrush::operator=((FSlateBrush *)(local_2e8 + 0x170),param_1->StrikeBrush);
    }
    pFVar1 = param_1->ColorAndOpacity;
    local_2e8._104_8_ = *(undefined8 *)&(pFVar1->SpecifiedColor).field0_0x0;
    local_2e8._112_8_ = *(undefined8 *)((longlong)&(pFVar1->SpecifiedColor).field0_0x0 + 8);
    local_2e8[0x78] = pFVar1->ColorUseRule;
    local_2e8[0x79] = pFVar1->ColorTableId;
    local_2e8._122_2_ = *(undefined2 *)&pFVar1->field_0x12;
    TVar2 = (param_1->ShadowOffset).field0_0x0._s_0;
    local_res8 = TVar2.X;
    fStackX_c = TVar2.Y;
    local_268 = fStackX_c;
    local_2e8._124_4_ = local_res8;
    local_264[0]._0_8_ = *(undefined8 *)&param_1->ShadowColorAndOpacity->field0_0x0;
    local_264[0]._8_8_ = *(undefined8 *)((longlong)&param_1->ShadowColorAndOpacity->field0_0x0 + 8);
    local_230._0_1_ = (param_1->HighlightColor).ColorUseRule;
    local_230._1_1_ = (param_1->HighlightColor).ColorTableId;
    local_230._2_2_ = *(undefined2 *)&(param_1->HighlightColor).field_0x12;
    local_240._0_8_ = *(undefined8 *)&(param_1->HighlightColor).SpecifiedColor.field0_0x0;
    local_240._8_8_ =
         *(undefined8 *)((longlong)&(param_1->HighlightColor).SpecifiedColor.field0_0x0 + 8);
    if (param_1->HighlightShape != (FSlateBrush *)0x0) {
      FSlateBrush::operator=((FSlateBrush *)(local_2e8 + 0xc0),param_1->HighlightShape);
    }
    UpdateTextStyle(this,(FTextBlockStyle *)local_2e8);
    FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)local_2e8);
  }
  return;
}

// ConditionallyUpdateTextStyle @ 1429d0160

void __thiscall
FSlateTextBlockLayout::ConditionallyUpdateTextStyle
          (FSlateTextBlockLayout *this,FTextBlockStyle *param_1)

{
  code *pcVar1;
  bool bVar2;
  FTextBlockStyle *this_00;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = FSlateTextLayout::GetDefaultTextStyle((this->TextLayout).Object);
  bVar2 = FTextBlockStyle::IsIdenticalTo(this_00,param_1);
  if (!bVar2) {
    UpdateTextStyle(this,param_1);
  }
  return;
}

// DirtyContent @ 1429e40b0

void __thiscall FSlateTextBlockLayout::DirtyContent(FSlateTextBlockLayout *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTextLayout::DirtyLayout((FTextLayout *)(this->TextLayout).Object);
  if ((this->Marshaller).Object == (ITextLayoutMarshaller *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001429e4126. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->Marshaller).Object + 0x20))();
  return;
}

// DirtyLayout @ 1429e4130

void __thiscall FSlateTextBlockLayout::DirtyLayout(FSlateTextBlockLayout *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTextLayout::DirtyLayout((FTextLayout *)(this->TextLayout).Object);
  return;
}

// GetChildren @ 1429ea570

FChildren * __thiscall FSlateTextBlockLayout::GetChildren(FSlateTextBlockLayout *this)

{
  code *pcVar1;
  bool bVar2;
  FChildren *pFVar3;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FChildren *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = FSlateTextLayout::GetChildren((this->TextLayout).Object);
  return pFVar3;
}

// GetDesiredSize @ 1429eb4b0

TVector2<double> * __thiscall
FSlateTextBlockLayout::GetDesiredSize
          (FSlateTextBlockLayout *this,TVector2<double> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TVector2<double> *pTVar3;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector2<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FTextLayout::GetSize((FTextLayout *)(this->TextLayout).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetLayoutScale @ 1429ebcb0

float __thiscall FSlateTextBlockLayout::GetLayoutScale(FSlateTextBlockLayout *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->TextLayout).Object != (FSlateTextLayout *)0x0) {
    return *(float *)&((this->TextLayout).Object)->field_0x94;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return *(float *)&((this->TextLayout).Object)->field_0x94;
}

// IsStyleUpToDate @ 1429f63e0

bool __thiscall
FSlateTextBlockLayout::IsStyleUpToDate(FSlateTextBlockLayout *this,CompareParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FTextBlockStyle *this_00;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_00 = FSlateTextLayout::GetDefaultTextStyle((this->TextLayout).Object);
  bVar2 = FTextBlockStyle::IsIdenticalTo(this_00,param_1);
  return bVar2;
}

// IsStyleUpToDate @ 1429f6440

bool __thiscall
FSlateTextBlockLayout::IsStyleUpToDate(FSlateTextBlockLayout *this,FTextBlockStyle *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FTextBlockStyle *this_00;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_00 = FSlateTextLayout::GetDefaultTextStyle((this->TextLayout).Object);
  bVar2 = FTextBlockStyle::IsIdenticalTo(this_00,param_1);
  return bVar2;
}

// OnPaint @ 1429fcb90

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FSlateTextBlockLayout::OnPaint
          (FSlateTextBlockLayout *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  float fVar2;
  FSlateTextLayout *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  Type TVar9;
  TVector2<double> *pTVar10;
  float fVar11;
  double dVar12;
  TVector2<double>_u_0 local_58;
  TVector2<double>_u_0 local_48;
  TVector2<double> local_38 [3];
  
  (this->CachedSize).field0_0x0 = *(TVector2<float>_u_0 *)&param_2->Size;
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  fVar1 = this->CachedWrapTextAt;
  fVar11 = fVar1;
  if ((((this->bCachedAutoWrapText != false) &&
       (fVar2 = (this->CachedSize).field0_0x0._s_0.X, __real_3f800000 <= fVar2)) &&
      (fVar11 = fVar2, __real_3f800000 <= fVar1)) && (fVar1 <= fVar2)) {
    fVar11 = fVar1;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  FTextLayout::SetWrappingWidth((FTextLayout *)(this->TextLayout).Object,fVar11);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  TVar9 = FTextLayout::GetVisualJustification((FTextLayout *)(this->TextLayout).Object);
  uVar6 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
  if (TVar9 != Left) {
    if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
    pTVar10 = FTextLayout::GetSize((FTextLayout *)(this->TextLayout).Object,local_38);
    fVar1 = (this->CachedSize).field0_0x0._s_0.X;
    fVar11 = (float)(pTVar10->field0_0x0)._s_0.X;
    if (fVar1 < fVar11) {
      if (TVar9 == Center) {
        fVar11 = (fVar11 - fVar1) * __real_3f000000;
      }
      else {
        if (TVar9 != Right) goto LAB_1429fccdf;
        fVar11 = fVar11 - fVar1;
      }
      uVar5 = (undefined8)fVar11;
    }
  }
LAB_1429fccdf:
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  pFVar3 = (this->TextLayout).Object;
  if ((pFVar3 == (FSlateTextLayout *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  dVar12 = (double)*(float *)&((this->TextLayout).Object)->field_0x94;
  local_58._s_0.Y = dVar12 * (double)uVar6;
  local_58._s_0.X = dVar12 * (double)uVar5;
  local_48._s_0.X = (double)(this->CachedSize).field0_0x0._s_0.X;
  local_48._s_0.Y = (double)(this->CachedSize).field0_0x0._s_0.Y;
  FTextLayout::SetVisibleRegion
            ((FTextLayout *)pFVar3,(TVector2<double> *)&local_48._s_0,
             (TVector2<double> *)&local_58._s_0);
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  (**(code **)(*(longlong *)(this->TextLayout).Object + 8))();
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  pFVar3 = (this->TextLayout).Object;
                    /* WARNING: Could not recover jumptable at 0x0001429fce36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar8 = (**(code **)(*(longlong *)pFVar3 + 0x40))(pFVar3,param_1,param_2,param_3);
  return iVar8;
}

// OverrideTextStyle @ 142a02970

void __thiscall
FSlateTextBlockLayout::OverrideTextStyle(FSlateTextBlockLayout *this,FTextBlockStyle *param_1)

{
  FSlateTextLayout *this_00;
  ITextLayoutMarshaller *pIVar1;
  code *pcVar2;
  bool bVar3;
  FTextBlockStyle *pFVar4;
  FString local_2f8;
  FTextBlockStyle local_2e8;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  pFVar4 = FSlateTextLayout::GetDefaultTextStyle((this->TextLayout).Object);
  bVar3 = FTextBlockStyle::IsIdenticalTo(pFVar4,param_1);
  if (!bVar3) {
    if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
    this_00 = (this->TextLayout).Object;
    pFVar4 = FTextBlockStyle::FTextBlockStyle(&local_2e8,param_1);
    FSlateTextLayout::SetDefaultTextStyle(this_00,pFVar4);
    local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.Data.ArrayNum = 0;
    local_2f8.Data.ArrayMax = 0;
    if ((this->Marshaller).Object == (ITextLayoutMarshaller *)0x0) {
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
    pIVar1 = (this->Marshaller).Object;
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x10);
    if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (*pcVar2)(pIVar1,&local_2f8,(this->TextLayout).Object);
    UpdateTextLayout(this,&local_2f8);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetDebugSourceInfo @ 142a08a90

void __thiscall
FSlateTextBlockLayout::SetDebugSourceInfo(FSlateTextBlockLayout *this,TAttribute<FString> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTextLayout::SetDebugSourceInfo((FTextLayout *)(this->TextLayout).Object,param_1);
  return;
}

// SetTextFlowDirection @ 142a0cd00

void __thiscall
FSlateTextBlockLayout::SetTextFlowDirection
          (FSlateTextBlockLayout *this,TOptional<ETextFlowDirection> *param_1)

{
  FSlateTextLayout *this_00;
  code *pcVar1;
  bool bVar2;
  ETextFlowDirection EVar3;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->TextLayout).Object;
  if (param_1->bIsSet == false) {
    EVar3 = GetDefaultTextFlowDirection();
  }
  else {
    EVar3 = param_1->TypedValue;
  }
  FTextLayout::SetTextFlowDirection((FTextLayout *)this_00,EVar3);
  return;
}

// SetTextOverflowPolicy @ 142a0d240

void __thiscall
FSlateTextBlockLayout::SetTextOverflowPolicy
          (FSlateTextBlockLayout *this,TOptional<ETextOverflowPolicy> param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined6 in_register_00000012;
  undefined1 local_res8;
  char local_res9;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res9 = ((undefined1 *)CONCAT62(in_register_00000012,param_1))[1];
  if (local_res9 != '\0') {
    local_res8 = *(undefined1 *)CONCAT62(in_register_00000012,param_1);
  }
  FTextLayout::SetTextOverflowPolicy((FTextLayout *)(this->TextLayout).Object,SUB82(&local_res8,0));
  return;
}

// SetTextShapingMethod @ 142a0d320

void __thiscall
FSlateTextBlockLayout::SetTextShapingMethod
          (FSlateTextBlockLayout *this,TOptional<ETextShapingMethod> *param_1)

{
  FSlateTextLayout *this_00;
  code *pcVar1;
  bool bVar2;
  ETextShapingMethod EVar3;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->TextLayout).Object;
  if (param_1->bIsSet == false) {
    EVar3 = GetDefaultTextShapingMethod();
  }
  else {
    EVar3 = param_1->TypedValue;
  }
  FTextLayout::SetTextShapingMethod((FTextLayout *)this_00,EVar3);
  return;
}

// UpdateTextHighlights @ 142a144d0

void __thiscall
FSlateTextBlockLayout::UpdateTextHighlights(FSlateTextBlockLayout *this,FText *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  FSlateTextLayout *pFVar4;
  ISlateRunRenderer *pIVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FString *pFVar10;
  int iVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FSharedReferencer<1> FVar14;
  wchar_t *pwVar15;
  TReferenceControllerBase<1> *pTVar16;
  uint uVar17;
  uint uVar18;
  longlong *plVar19;
  uint uVar20;
  int iVar21;
  longlong local_a8;
  TArray<FTextRunRenderer,TSizedDefaultAllocator<32>_> local_90;
  FTextRunRenderer local_80;
  ISlateRunRenderer *local_50;
  TReferenceControllerBase<1> *pTStack_48;
  
  pFVar10 = FText::ToString(param_1);
  iVar1 = (pFVar10->Data).ArrayNum;
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (this->TextLayout).Object;
  uVar20 = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  iVar21 = (pFVar10->Data).ArrayNum;
  iVar11 = iVar21 + -1;
  if (iVar21 == 0) {
    iVar11 = 0;
  }
  if ((0 < iVar11) && (iVar11 = *(int *)&pFVar4->field_0x28, 0 < iVar11)) {
    local_a8 = 0;
    do {
      iVar21 = 0;
      uVar18 = 0;
      if ((int)uVar20 < iVar11) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar19 = (longlong *)(*(longlong *)&pFVar4->field_0x20 + local_a8);
      iVar9 = *(int *)(*plVar19 + 8);
      iVar11 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar11 = 0;
      }
      if (0 < iVar11) {
        do {
          iVar2 = (pFVar10->Data).ArrayNum;
          iVar9 = iVar2 + -1;
          if (iVar2 == 0) {
            iVar9 = 0;
            pwVar15 = L"";
          }
          else {
            pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
          }
          iVar9 = ::FString::Find((FString *)*plVar19,pwVar15,iVar9,IgnoreCase,FromStart,iVar21);
          if (iVar9 == -1) break;
          iVar21 = iVar9 + -1 + iVar1;
          if (iVar1 == 0) {
            iVar21 = iVar9;
          }
          if (local_90.ArrayNum < 1) {
LAB_142a148ae:
            if (((this->TextHighlighter).Object == (ISlateRunRenderer *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x408,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar16 = (this->TextHighlighter).SharedReferenceCount.ReferenceController;
            pIVar5 = (this->TextHighlighter).Object;
            if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pIVar5 == (ISlateRunRenderer *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x25d,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_80.Range.EndIndex = iVar21;
            local_80.Range.BeginIndex = iVar9;
            if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_80.LineIndex = uVar20;
            local_80.Renderer.Object = (IRunRenderer *)pIVar5;
            local_80.Renderer.SharedReferenceCount.ReferenceController = pTVar16;
            if (((local_90.AllocatorInstance.Data <= &local_80) &&
                (&local_80 <
                 (FTextRunRenderer *)
                 (local_90.AllocatorInstance.Data + (longlong)local_90.ArrayMax * 0x20))) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (local_90.ArrayNum == local_90.ArrayMax) {
              local_90.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&local_90.AllocatorInstance,&local_90.ArrayMax);
            }
            lVar12 = (longlong)local_90.ArrayNum;
            local_90.ArrayNum = local_90.ArrayNum + 1;
            pFVar13 = local_90.AllocatorInstance.Data + lVar12 * 0x20;
            *(int *)&pFVar13->field_0x0 = local_80.LineIndex;
            *(FTextRange *)(pFVar13 + 4) = local_80.Range;
            *(IRunRenderer **)(pFVar13 + 0x10) = local_80.Renderer.Object;
            *(TReferenceControllerBase<1> **)(pFVar13 + 0x18) =
                 local_80.Renderer.SharedReferenceCount.ReferenceController;
            FVar14.ReferenceController = local_80.Renderer.SharedReferenceCount.ReferenceController;
            if (local_80.Renderer.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_80.Renderer.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_80.Renderer.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
          }
          else {
            uVar18 = 0;
            if ((int)(local_90.ArrayNum - 1U) < local_90.ArrayNum) {
              uVar18 = ~(local_90.ArrayNum - 1U) >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar18 = local_90.ArrayNum - 1;
            if (*(uint *)&local_90.AllocatorInstance.Data[(longlong)(int)uVar18 * 0x20].field_0x0 !=
                uVar20) goto LAB_142a148ae;
            uVar17 = 0;
            if ((int)uVar18 < local_90.ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(int *)(local_90.AllocatorInstance.Data +
                        (longlong)(local_90.ArrayNum + -1) * 0x20 + 8) != iVar9) goto LAB_142a148ae;
            if (((this->TextHighlighter).Object == (ISlateRunRenderer *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x408,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar16 = (this->TextHighlighter).SharedReferenceCount.ReferenceController;
            pIVar5 = (this->TextHighlighter).Object;
            if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pIVar5 == (ISlateRunRenderer *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x25d,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
              UNLOCK();
            }
            uVar18 = 0;
            if ((int)(local_90.ArrayNum - 1U) < local_90.ArrayNum) {
              uVar18 = ~(local_90.ArrayNum - 1U) >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar3 = *(undefined4 *)
                     (local_90.AllocatorInstance.Data +
                     (longlong)(local_90.ArrayNum + -1) * 0x20 + 4);
            if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
              UNLOCK();
            }
            uVar17 = local_90.ArrayNum - 1;
            uVar18 = 0;
            if ((int)uVar17 < local_90.ArrayNum) {
              uVar18 = ~uVar17 >> 0x1f;
            }
            local_50 = pIVar5;
            pTStack_48 = pTVar16;
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar12 = (longlong)(int)uVar17 * 0x20;
            *(uint *)&local_90.AllocatorInstance.Data[lVar12].field_0x0 = uVar20;
            *(ulonglong *)(local_90.AllocatorInstance.Data + lVar12 + 4) = CONCAT44(iVar21,uVar3);
            uVar7 = *(undefined8 *)(local_90.AllocatorInstance.Data + lVar12 + 0x10);
            FVar14.ReferenceController =
                 *(TReferenceControllerBase<1> **)
                  (local_90.AllocatorInstance.Data + lVar12 + 0x10 + 8);
            *(ISlateRunRenderer **)(local_90.AllocatorInstance.Data + lVar12 + 0x10) = local_50;
            *(TReferenceControllerBase<1> **)(local_90.AllocatorInstance.Data + lVar12 + 0x10 + 8) =
                 pTStack_48;
            local_50 = (ISlateRunRenderer *)uVar7;
            pTStack_48 = FVar14.ReferenceController;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar14.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar16);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar16);
        } while (iVar21 < iVar11);
      }
      iVar11 = *(int *)&pFVar4->field_0x28;
      local_a8 = local_a8 + 0x70;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar11);
  }
  if (((this->TextLayout).Object == (FSlateTextLayout *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FTextLayout::SetRunRenderers((FTextLayout *)(this->TextLayout).Object,&local_90);
  DestructItems<FTextRunRenderer,int>
            ((FTextRunRenderer *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
  if ((FTextRunRenderer *)local_90.AllocatorInstance.Data != (FTextRunRenderer *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  return;
}

// UpdateTextLayout @ 142a14b00

void __thiscall
FSlateTextBlockLayout::UpdateTextLayout(FSlateTextBlockLayout *this,FString *param_1)

{
  int iVar1;
  ITextLayoutMarshaller *pIVar2;
  code *pcVar3;
  bool bVar4;
  FTextSnapshot *pFVar5;
  FTextSnapshot local_28;
  
  if ((this->Marshaller).Object == (ITextLayoutMarshaller *)0x0) {
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
  (**(code **)((longlong)*(this->Marshaller).Object + 0x28))();
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  FTextLayout::ClearLines((FTextLayout *)(this->TextLayout).Object);
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  FTextLayout::ClearLineHighlights((FTextLayout *)(this->TextLayout).Object);
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
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
  FTextLayout::ClearRunRenderers((FTextLayout *)(this->TextLayout).Object);
  if ((this->Marshaller).Object == (ITextLayoutMarshaller *)0x0) {
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
  pIVar2 = (this->Marshaller).Object;
  pcVar3 = *(code **)((longlong)*pIVar2 + 8);
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*pcVar3)(pIVar2,param_1,(this->TextLayout).Object);
  pFVar5 = FTextSnapshot::FTextSnapshot(&local_28);
  FTextSnapshot::operator=(&this->HighlightTextLastUpdate,pFVar5);
  if (local_28.LocalizedStringPtr != (TDisplayStringPtr<FString_const_>)0x0) {
    LOCK();
    iVar1 = *(int *)local_28.LocalizedStringPtr;
    *(int *)local_28.LocalizedStringPtr = *(int *)local_28.LocalizedStringPtr + -1;
    UNLOCK();
    if (iVar1 == 1) {
      if (*(void **)((longlong)local_28.LocalizedStringPtr + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)local_28.LocalizedStringPtr + 8));
      }
      ::operator_delete((void *)local_28.LocalizedStringPtr,0x18);
    }
  }
  if (local_28.TextDataPtr.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextDataPtr.Reference + 0x10))();
  }
  return;
}

// UpdateTextLayout @ 142a14cd0

void __thiscall FSlateTextBlockLayout::UpdateTextLayout(FSlateTextBlockLayout *this,FText *param_1)

{
  FString *pFVar1;
  
  pFVar1 = FText::ToString(param_1);
  UpdateTextLayout(this,pFVar1);
  return;
}

// UpdateTextStyle @ 142a14d20

void __thiscall
FSlateTextBlockLayout::UpdateTextStyle(FSlateTextBlockLayout *this,CompareParams *param_1)

{
  FSlateColor *pFVar1;
  TVector2<float>_u_0_s_0 TVar2;
  float local_res10;
  float fStackX_14;
  undefined1 local_2e8 [128];
  float local_268;
  FLinearColor_u_0 local_264 [2];
  FLinearColor_u_0 local_240;
  undefined4 local_230;
  FSlateBrush local_228;
  FSlateBrush local_178 [2];
  
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)local_2e8,param_1->StyleBase);
  FSlateFontInfo::operator=((FSlateFontInfo *)(local_2e8 + 8),param_1->Font);
  if (param_1->StrikeBrush != (FSlateBrush *)0x0) {
    FSlateBrush::operator=((FSlateBrush *)(local_2e8 + 0x170),param_1->StrikeBrush);
  }
  pFVar1 = param_1->ColorAndOpacity;
  local_2e8._104_8_ = *(undefined8 *)&(pFVar1->SpecifiedColor).field0_0x0;
  local_2e8._112_8_ = *(undefined8 *)((longlong)&(pFVar1->SpecifiedColor).field0_0x0 + 8);
  local_2e8[0x78] = pFVar1->ColorUseRule;
  local_2e8[0x79] = pFVar1->ColorTableId;
  local_2e8._122_2_ = *(undefined2 *)&pFVar1->field_0x12;
  TVar2 = (param_1->ShadowOffset).field0_0x0._s_0;
  local_res10 = TVar2.X;
  fStackX_14 = TVar2.Y;
  local_268 = fStackX_14;
  local_2e8._124_4_ = local_res10;
  local_264[0]._0_8_ = *(undefined8 *)&param_1->ShadowColorAndOpacity->field0_0x0;
  local_264[0]._8_8_ = *(undefined8 *)((longlong)&param_1->ShadowColorAndOpacity->field0_0x0 + 8);
  local_230._0_1_ = (param_1->HighlightColor).ColorUseRule;
  local_230._1_1_ = (param_1->HighlightColor).ColorTableId;
  local_230._2_2_ = *(undefined2 *)&(param_1->HighlightColor).field_0x12;
  local_240._0_8_ = *(undefined8 *)&(param_1->HighlightColor).SpecifiedColor.field0_0x0;
  local_240._8_8_ =
       *(undefined8 *)((longlong)&(param_1->HighlightColor).SpecifiedColor.field0_0x0 + 8);
  if (param_1->HighlightShape != (FSlateBrush *)0x0) {
    FSlateBrush::operator=((FSlateBrush *)(local_2e8 + 0xc0),param_1->HighlightShape);
  }
  UpdateTextStyle(this,(FTextBlockStyle *)local_2e8);
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)local_2e8);
  return;
}

// UpdateTextStyle @ 142a14e20

void __thiscall
FSlateTextBlockLayout::UpdateTextStyle(FSlateTextBlockLayout *this,FTextBlockStyle *param_1)

{
  FSlateTextLayout *this_00;
  code *pcVar1;
  bool bVar2;
  FTextBlockStyle *pFVar3;
  FTextBlockStyle local_2e8;
  
  if ((this->TextLayout).Object == (FSlateTextLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->TextLayout).Object;
  pFVar3 = FTextBlockStyle::FTextBlockStyle(&local_2e8,param_1);
  FSlateTextLayout::SetDefaultTextStyle(this_00,pFVar3);
  if ((this->Marshaller).Object == (ITextLayoutMarshaller *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142a14ec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->Marshaller).Object + 0x20))();
  return;
}

