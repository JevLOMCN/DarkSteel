// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 6

// ~SSidebarButtonText @ 142d67760

void __thiscall SSidebarButtonText::~SSidebarButtonText(SSidebarButtonText *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDefaultDelete<FSlateTextBlockLayout>::operator()
            ((TDefaultDelete<FSlateTextBlockLayout> *)&this->TextLayoutCache,
             (this->TextLayoutCache).Ptr);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AngleDegrees).Getter);
  pvVar1 = *(void **)&(this->AngleDegrees).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AngleDegrees).Getter);
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

// ComputeDesiredSize @ 142d76750

TVector2<double> * __thiscall
SSidebarButtonText::ComputeDesiredSize
          (SSidebarButtonText *this,TVector2<double> *__return_storage_ptr__,float param_1)

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

// Construct @ 142d8adf0

void __thiscall SSidebarButtonText::Construct(SSidebarButtonText *this,FArguments *param_1)

{
  TUniquePtr<FSlateTextBlockLayout,TDefaultDelete<FSlateTextBlockLayout>_> *this_00;
  int iVar1;
  TDisplayStringPtr<FString_const_> TVar2;
  ITextData *pIVar3;
  TSharedRef<FPlainTextLayoutMarshaller,1> *pTVar4;
  FTextBlockStyle *pFVar5;
  FSlateTextBlockLayout *pFVar6;
  FSlateTextBlockLayout *pFVar7;
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
  FTextBlockStyle::operator=(&this->TextStyle,param_1->_TextStyle);
  (this->AngleDegrees).Value = (param_1->_AngleDegrees).Value;
  (this->AngleDegrees).bIsSet = (param_1->_AngleDegrees).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->AngleDegrees).Getter,&(param_1->_AngleDegrees).Getter);
  pTVar4 = FPlainTextLayoutMarshaller::Create(&local_330);
  pFVar7 = (FSlateTextBlockLayout *)0x0;
  local_368 = 0;
  local_378 = (undefined1  [8])0x0;
  local_370.Data = (FScriptContainerElement *)0x0;
  pFVar5 = FTextBlockStyle::GetDefault();
  pFVar6 = ::operator_new(0x70);
  if (pFVar6 != (FSlateTextBlockLayout *)0x0) {
    local_348.Object = (ITextLayoutMarshaller *)pTVar4->Object;
    local_348.SharedReferenceCount.ReferenceController =
         (pTVar4->SharedReferenceCount).ReferenceController;
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
    pFVar5 = FTextBlockStyle::FTextBlockStyle(&local_318,pFVar5);
    pFVar7 = FSlateTextBlockLayout::FSlateTextBlockLayout
                       (pFVar6,(SWidget *)this,pFVar5,SUB82(&local_res10,0),SUB82(&local_res8,0),
                        (TDelegate<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy>
                         *)local_378,&local_348,(TSharedPtr<IBreakIterator,1> *)&local_360);
  }
  this_00 = &this->TextLayoutCache;
  if ((TDefaultDelete<FSlateTextBlockLayout> *)this_00 == local_338) {
    if (pFVar7 != (FSlateTextBlockLayout *)0x0) {
      TVar2 = (pFVar7->HighlightTextLastUpdate).LocalizedStringPtr;
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
      pIVar3 = (pFVar7->HighlightTextLastUpdate).TextDataPtr.Reference;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))();
      }
      TVar2 = (pFVar7->TextLastUpdate).LocalizedStringPtr;
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
      pIVar3 = (pFVar7->TextLastUpdate).TextDataPtr.Reference;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar7->TextHighlighter).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar7->Marshaller).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar7->TextLayout).SharedReferenceCount.ReferenceController);
      ::operator_delete(pFVar7,0x70);
    }
  }
  else {
    pFVar6 = this_00->Ptr;
    this_00->Ptr = pFVar7;
    TDefaultDelete<FSlateTextBlockLayout>::operator()
              ((TDefaultDelete<FSlateTextBlockLayout> *)this_00,pFVar6);
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

// OnPaint @ 142dc6cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SSidebarButtonText::OnPaint
          (SSidebarButtonText *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint extraout_XMM0_Da;
  double dVar6;
  undefined1 auStackY_158 [32];
  undefined8 local_118;
  float local_110;
  float local_10c;
  FSlateLayoutTransform local_108;
  TTransform2<float> local_f8;
  FSlateLayoutTransform local_e0;
  TVector2<double>_u_0 local_d0;
  FGeometry local_c0;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_118 = param_2->Size;
  FSlateTextBlockLayout::GetDesiredSize
            ((this->TextLayoutCache).Ptr,(TVector2<double> *)&local_d0._s_0);
  uVar2 = (double)(float)local_118;
  if (local_d0._s_0.Y <= (double)(float)local_118) {
    uVar2 = local_d0._s_0.Y;
  }
  uVar3 = (double)local_118._4_4_;
  if (local_d0._s_0.X <= (double)local_118._4_4_) {
    uVar3 = local_d0._s_0.X;
  }
  dVar6 = (double)uVar2 * __real_3fe0000000000000;
  dVar1 = (double)uVar3 * __real_3fe0000000000000;
  if ((this->AngleDegrees).bIsSet != false) {
    TAttribute<float>::Get(&this->AngleDegrees);
  }
  __libm_sse2_sincosf_();
  local_e0.Translation.field0_0x0 = (param_2->AbsolutePosition).field0_0x0;
  local_f8.M.M[1][0] = (float)(extraout_XMM0_Da ^ __xmm_80000000800000008000000080000000);
  local_108.Translation.field0_0x0._s_0.X = (float)(dVar6 - dVar1);
  local_f8.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
  local_118 = (FDeprecateSlateVector2D)0x3f0000003f000000;
  local_108.Scale = 1.0;
  local_108.Translation.field0_0x0._s_0.Y = (float)(dVar1 - dVar6);
  local_110 = (float)(double)uVar3;
  local_10c = (float)(double)uVar2;
  local_e0.Scale = param_2->Scale;
  FGeometry::FGeometry
            (&local_c0,(FDeprecateVector2DParameter *)&local_110,&local_108,&local_f8,
             (FDeprecateVector2DParameter *)&local_118,&local_e0,
             &param_2->AccumulatedRenderTransform);
  if ((param_7) && (this->field_0x3a != '\0')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  iVar5 = FSlateTextBlockLayout::OnPaint
                    ((this->TextLayoutCache).Ptr,param_1,&local_c0,param_3,param_4,param_5,param_6,
                     bVar4);
  return iVar5;
}

// SetRotation @ 142dd99f0

void __thiscall SSidebarButtonText::SetRotation(SSidebarButtonText *this,TAttribute<float> *param_1)

{
  (this->AngleDegrees).Value = param_1->Value;
  (this->AngleDegrees).bIsSet = param_1->bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->AngleDegrees).Getter,&param_1->Getter);
  return;
}

// SetText @ 142dd9d00

void __thiscall SSidebarButtonText::SetText(SSidebarButtonText *this,TAttribute<FText> *param_1)

{
  TAttribute<FText>::operator=(&this->Text,param_1);
  return;
}

