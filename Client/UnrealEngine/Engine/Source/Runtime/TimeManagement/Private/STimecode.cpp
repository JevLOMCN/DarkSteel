// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 5

// STimecode @ 14603fd00

STimecode * __thiscall STimecode::STimecode(STimecode *this)

{
  EWidgetUpdateFlags EVar1;
  EWidgetUpdateFlags EVar2;
  
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  this->_padding_ = (longlong)&___7STimecode__6B_;
  (this->Timecode).Value.Hours = 0;
  (this->Timecode).Value.Minutes = 0;
  (this->Timecode).Value.Seconds = 0;
  (this->Timecode).Value.Frames = 0;
  (this->Timecode).Value.Subframe = 0.0;
  (this->Timecode).Value.bDropFrameFormat = false;
  (this->Timecode).bIsSet = false;
  *(undefined8 *)&(this->Timecode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Timecode).Getter = 0;
  *(undefined8 *)&(this->Timecode).Getter.field_0x8 = 0;
  FSlateFontInfo::FSlateFontInfo(&(this->TimecodeFont).Value);
  (this->TimecodeFont).bIsSet = false;
  *(undefined8 *)&(this->TimecodeFont).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->TimecodeFont).Getter = 0;
  *(undefined8 *)&(this->TimecodeFont).Getter.field_0x8 = 0;
  (this->TimecodeColor).Value.ColorUseRule = UseColor_Specified;
  (this->TimecodeColor).bIsSet = false;
  *(undefined8 *)&(this->TimecodeColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->TimecodeColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->TimecodeColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->TimecodeColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->TimecodeColor).Getter = 0;
  *(undefined8 *)&(this->TimecodeColor).Getter.field_0x8 = 0;
  (this->bDisplayLabel).Value = false;
  (this->bDisplayLabel).bIsSet = false;
  *(undefined8 *)&(this->bDisplayLabel).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bDisplayLabel).Getter = 0;
  *(undefined8 *)&(this->bDisplayLabel).Getter.field_0x8 = 0;
  FSlateFontInfo::FSlateFontInfo(&(this->LabelFont).Value);
  (this->LabelFont).bIsSet = false;
  *(undefined8 *)&(this->LabelFont).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LabelFont).Getter = 0;
  *(undefined8 *)&(this->LabelFont).Getter.field_0x8 = 0;
  (this->LabelColor).Value.ColorUseRule = UseColor_Specified;
  (this->LabelColor).bIsSet = false;
  *(undefined8 *)&(this->LabelColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->LabelColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->LabelColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->LabelColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->LabelColor).Getter = 0;
  *(undefined8 *)&(this->LabelColor).Getter.field_0x8 = 0;
  (this->TextLayoutCache).Ptr = (FSlateTextBlockLayout *)0x0;
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  this->bDisplaySubframes = true;
  EVar2 = EVar1 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar2;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar2);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  return this;
}

// ComputeDesiredSize @ 146043e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TVector2<double> * __thiscall
STimecode::ComputeDesiredSize
          (STimecode *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  FSlateTextBlockLayout *this_00;
  code *pcVar4;
  undefined8 uVar5;
  FSlateFontMeasure *this_01;
  bool bVar6;
  FTimecode *this_02;
  bool *pbVar7;
  FSlateApplication *pFVar8;
  TVector2<double> *pTVar9;
  FDeprecateSlateVector2D FVar10;
  FSlateFontInfo *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  float in_XMM3_Da;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  TObjectPtr<UObject_const_>_u_0 local_418;
  int local_410;
  TSharedRef<FSlateFontMeasure,1> local_408;
  FWidgetDesiredSizeArgs local_3f8;
  TObjectPtr<UObject_const_>_u_0 local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  wchar_t *local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined1 local_388 [16];
  TObjectPtr<UObject_const_>_u_0 local_378;
  undefined8 uStack_370;
  undefined1 local_368 [16];
  FText local_358;
  FLinearColor_u_0 local_348;
  TVector2<double>_u_0 local_338;
  FTextBlockStyle local_328;
  
  TAttribute<FTimecode>::Get(&this->Timecode);
  this_02 = TAttribute<FTimecode>::Get(&this->Timecode);
  FTimecode::ToString(this_02,(FString *)&local_418.ObjectPtr,false,this->bDisplaySubframes);
  pbVar7 = TAttribute<bool>::Get(&this->bDisplayLabel);
  if (*pbVar7 == false) {
    FTextBlockStyle::FTextBlockStyle(&local_328);
    pFVar11 = TAttribute<FSlateFontInfo>::Get(&this->TimecodeFont);
    FSlateFontInfo::operator=(&local_328.Font,pFVar11);
    this_00 = (this->TextLayoutCache).Ptr;
    pFVar12 = FText::FText((FText *)&local_348._s_0);
    pFVar13 = FText::FromString((FText *)(local_368 + 0x10),(FString *)&local_418.ObjectPtr);
    local_3f8.Text.TextData.Reference = (pFVar13->TextData).Reference;
    if (local_3f8.Text.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3f8.Text.TextData.Reference + 8))
                (local_3f8.Text.TextData.Reference,local_res8);
    }
    local_3f8.Text.Flags = pFVar13->Flags;
    local_3f8.HighlightText.TextData.Reference = (pFVar12->TextData).Reference;
    if (local_3f8.HighlightText.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3f8.HighlightText.TextData.Reference + 8))
                (local_3f8.HighlightText.TextData.Reference,local_res20);
    }
    local_3f8.HighlightText.Flags = pFVar12->Flags;
    local_3f8.Justification = Left;
    local_3f8.AutoWrapText = false;
    local_3f8.WrapTextAt = 0.0;
    local_3f8.LineHeightPercentage = 1.0;
    local_3f8.Margin.Left = 0.0;
    local_3f8.Margin.Top = 0.0;
    local_3f8.Margin.Right = 0.0;
    local_3f8.Margin.Bottom = 0.0;
    local_3f8.ApplyLineHeightToBottomLine = true;
    local_3f8.WrappingPolicy = DefaultWrapping;
    local_3f8.TransformPolicy = None;
    FSlateTextBlockLayout::ComputeDesiredSize
              (this_00,(TVector2<double> *)&local_338._s_0,&local_3f8,param_1,&local_328);
    if (local_3f8.HighlightText.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3f8.HighlightText.TextData.Reference + 0x10))();
    }
    if (local_3f8.Text.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3f8.Text.TextData.Reference + 0x10))();
    }
    if (local_358.TextData.Reference != (ITextData *)0x0) {
      (**(code **)(*(longlong *)local_358.TextData.Reference + 0x10))();
    }
    if ((longlong *)local_348._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_348._0_8_ + 0x10))();
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_338._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = local_338._s_0.Y;
    FTextBlockStyle::~FTextBlockStyle(&local_328);
  }
  else {
    pFVar8 = FSlateApplication::Get();
    lVar3 = *(longlong *)&pFVar8->field_0x60;
    if ((*(longlong *)(lVar3 + 8) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TVector2<double> *)(*pcVar4)();
      return pTVar9;
    }
    FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar3 + 8),&local_408);
    this_01 = local_408.Object;
    TAttribute<FSlateFontInfo>::Get(&this->TimecodeFont);
    local_3a8 = local_418;
    iStack_3a0 = local_410 + -1;
    if (local_410 == 0) {
      iStack_3a0 = 0;
    }
    uStack_370 = CONCAT44(uStack_39c,iStack_3a0);
    local_378 = local_418;
    FVar10 = FSlateFontMeasure::Measure
                       (this_01,(TStringView<wchar_t> *)local_388,
                        (FSlateFontInfo *)&local_378.ObjectPtr,in_XMM3_Da);
    fVar1 = *(float *)FVar10;
    fVar2 = *(float *)((longlong)FVar10 + 4);
    pbVar7 = TAttribute<bool>::Get(&this->bDisplayLabel);
    uVar5 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    if (*pbVar7 != false) {
      TAttribute<FSlateFontInfo>::Get(&this->LabelFont);
      uStack_390 = 2;
      local_398 = L"HR";
      local_368._12_4_ = uStack_38c;
      local_368._8_4_ = 2;
      local_368._0_8_ = L"HR";
      FVar10 = FSlateFontMeasure::Measure
                         (local_408.Object,(TStringView<wchar_t> *)(local_388 + 8),
                          (FSlateFontInfo *)local_368,in_XMM3_Da);
      uVar5 = (double)*(float *)((longlong)FVar10 + 4);
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         ((double)fVar2 + (double)uVar5) - __real_4020000000000000;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_408.SharedReferenceCount.ReferenceController);
  }
  if (local_418.DebugPtr != (UObject *)0x0) {
    FMemory::Free(local_418.DebugPtr);
  }
  return __return_storage_ptr__;
}

// ComputeVolatility @ 1460443e0

bool __thiscall STimecode::ComputeVolatility(STimecode *this)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->Timecode).Getter,
             &local_28);
  if (((*(int *)&(this->Timecode).Getter.field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(this->Timecode).Getter.field_0x8, plVar1 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    bVar3 = TAttribute<FSlateFontInfo>::IsBound(&this->TimecodeFont);
    if (bVar3) {
      return true;
    }
    bVar3 = TAttribute<FSlateColor>::IsBound(&this->TimecodeColor);
    if (bVar3) {
      return true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->bDisplayLabel).Getter,&local_28);
    if (((*(int *)&(this->bDisplayLabel).Getter.field_0x10 == 0) ||
        (plVar1 = *(longlong **)&(this->bDisplayLabel).Getter.field_0x8, plVar1 == (longlong *)0x0))
       || (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      bVar3 = TAttribute<FSlateFontInfo>::IsBound(&this->LabelFont);
      if (bVar3) {
        return true;
      }
      bVar3 = TAttribute<FSlateColor>::IsBound(&this->LabelColor);
      if (bVar3) {
        return true;
      }
      return false;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return true;
}

// Construct @ 146045c70

void __thiscall STimecode::Construct(STimecode *this,FArguments *param_1)

{
  TDelegate<FTimecode___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<FTimecode___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  TUniquePtr<FSlateTextBlockLayout,TDefaultDelete<FSlateTextBlockLayout>_> *this_02;
  int iVar1;
  longlong *plVar2;
  TDisplayStringPtr<FString_const_> TVar3;
  ITextData *pIVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined3 uVar9;
  EStyleColor EVar10;
  undefined2 uVar11;
  TSharedRef<FPlainTextLayoutMarshaller,1> *pTVar12;
  FTextBlockStyle *pFVar13;
  FSlateTextBlockLayout *pFVar14;
  FSlateTextBlockLayout *pFVar15;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  FDestructionSentinel local_368;
  undefined1 local_350 [8];
  ForAnyElementType local_348;
  int local_340;
  FDestructionSentinel local_338;
  TSharedRef<ITextLayoutMarshaller,1> local_320;
  TDefaultDelete<FSlateTextBlockLayout> local_310 [8];
  FTextBlockStyle local_308;
  
  iVar1 = (param_1->_Timecode).Value.Minutes;
  iVar6 = (param_1->_Timecode).Value.Seconds;
  iVar7 = (param_1->_Timecode).Value.Frames;
  this_00 = &(param_1->_Timecode).Getter;
  pFVar15 = (FSlateTextBlockLayout *)0x0;
  this_01 = &(this->Timecode).Getter;
  (this->Timecode).Value.Hours = (param_1->_Timecode).Value.Hours;
  (this->Timecode).Value.Minutes = iVar1;
  (this->Timecode).Value.Seconds = iVar6;
  (this->Timecode).Value.Frames = iVar7;
  bVar8 = (param_1->_Timecode).Value.bDropFrameFormat;
  uVar9 = *(undefined3 *)&(param_1->_Timecode).Value.field_0x15;
  (this->Timecode).Value.Subframe = (param_1->_Timecode).Value.Subframe;
  (this->Timecode).Value.bDropFrameFormat = bVar8;
  *(undefined3 *)&(this->Timecode).Value.field_0x15 = uVar9;
  (this->Timecode).bIsSet = (param_1->_Timecode).bIsSet;
  if (this_00 != this_01) {
    local_350 = (undefined1  [8])0x0;
    local_348.Data = (FScriptContainerElement *)0x0;
    local_340 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)&local_368);
    if ((*(int *)&(param_1->_Timecode).Getter.field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_Timecode).Getter.field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_350);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_368);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_350);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_350,
               (FWriteAccessScope *)&local_368);
    if ((local_340 != 0) &&
       ((TReferenceControllerBase<1> *)local_348.Data != (TReferenceControllerBase<1> *)0x0)) {
      (*(code *)**(undefined8 **)local_348.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_348,0,0,0x10);
      local_340 = 0;
    }
    if (local_368.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_368.Accessor,&local_368);
    }
    if ((TReferenceControllerBase<1> *)local_348.Data != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(local_348.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_350);
  }
  FSlateFontInfo::operator=(&(this->TimecodeFont).Value,&(param_1->_TimecodeFont).Value);
  (this->TimecodeFont).bIsSet = (param_1->_TimecodeFont).bIsSet;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->TimecodeFont).Getter,&(param_1->_TimecodeFont).Getter);
  uVar5 = *(undefined8 *)((longlong)&(param_1->_TimecodeColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->TimecodeColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_TimecodeColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->TimecodeColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar5;
  EVar10 = (param_1->_TimecodeColor).Value.ColorTableId;
  uVar11 = *(undefined2 *)&(param_1->_TimecodeColor).Value.field_0x12;
  (this->TimecodeColor).Value.ColorUseRule = (param_1->_TimecodeColor).Value.ColorUseRule;
  (this->TimecodeColor).Value.ColorTableId = EVar10;
  *(undefined2 *)&(this->TimecodeColor).Value.field_0x12 = uVar11;
  (this->TimecodeColor).bIsSet = (param_1->_TimecodeColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->TimecodeColor).Getter,&(param_1->_TimecodeColor).Getter);
  (this->bDisplayLabel).Value = (param_1->_DisplayLabel).Value;
  (this->bDisplayLabel).bIsSet = (param_1->_DisplayLabel).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bDisplayLabel).Getter,&(param_1->_DisplayLabel).Getter);
  FSlateFontInfo::operator=(&(this->LabelFont).Value,&(param_1->_LabelFont).Value);
  (this->LabelFont).bIsSet = (param_1->_LabelFont).bIsSet;
  TDelegate<FSlateFontInfo___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->LabelFont).Getter,&(param_1->_LabelFont).Getter);
  uVar5 = *(undefined8 *)((longlong)&(param_1->_LabelColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->LabelColor).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_LabelColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->LabelColor).Value.SpecifiedColor.field0_0x0 + 8) = uVar5;
  EVar10 = (param_1->_LabelColor).Value.ColorTableId;
  uVar11 = *(undefined2 *)&(param_1->_LabelColor).Value.field_0x12;
  (this->LabelColor).Value.ColorUseRule = (param_1->_LabelColor).Value.ColorUseRule;
  (this->LabelColor).Value.ColorTableId = EVar10;
  *(undefined2 *)&(this->LabelColor).Value.field_0x12 = uVar11;
  (this->LabelColor).bIsSet = (param_1->_LabelColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->LabelColor).Getter,&(param_1->_LabelColor).Getter);
  this->bDisplaySubframes = param_1->_bDisplaySubframes;
  pTVar12 = FPlainTextLayoutMarshaller::Create
                      ((TSharedRef<FPlainTextLayoutMarshaller,1> *)local_350);
  local_368._16_8_ = 0;
  local_368.AccessType = Reader;
  local_368._4_4_ = 0;
  local_368.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  pFVar13 = FTextBlockStyle::GetDefault();
  pFVar14 = ::operator_new(0x70);
  if (pFVar14 != (FSlateTextBlockLayout *)0x0) {
    local_320.Object = (ITextLayoutMarshaller *)pTVar12->Object;
    local_320.SharedReferenceCount.ReferenceController =
         (pTVar12->SharedReferenceCount).ReferenceController;
    local_338.AccessType = Reader;
    local_338._4_4_ = 0;
    local_338.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    if (local_320.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_320.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_320.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res8[0] = 0x101;
    local_res10[0] = 0x100;
    pFVar13 = FTextBlockStyle::FTextBlockStyle(&local_308,pFVar13);
    pFVar15 = FSlateTextBlockLayout::FSlateTextBlockLayout
                        (pFVar14,(SWidget *)this,pFVar13,SUB82(local_res10,0),SUB82(local_res8,0),
                         (TDelegate<TSharedRef<FSlateTextLayout,1>___cdecl(SWidget_*,FTextBlockStyle_const_&),FDefaultDelegateUserPolicy>
                          *)&local_368,&local_320,(TSharedPtr<IBreakIterator,1> *)&local_338);
  }
  this_02 = &this->TextLayoutCache;
  if ((TDefaultDelete<FSlateTextBlockLayout> *)this_02 == local_310) {
    if (pFVar15 != (FSlateTextBlockLayout *)0x0) {
      TVar3 = (pFVar15->HighlightTextLastUpdate).LocalizedStringPtr;
      if (TVar3 != (TDisplayStringPtr<FString_const_>)0x0) {
        LOCK();
        iVar1 = *(int *)TVar3;
        *(int *)TVar3 = *(int *)TVar3 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          if (*(void **)((longlong)TVar3 + 8) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)TVar3 + 8));
          }
          ::operator_delete((void *)TVar3,0x18);
        }
      }
      pIVar4 = (pFVar15->HighlightTextLastUpdate).TextDataPtr.Reference;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 0x10))();
      }
      TVar3 = (pFVar15->TextLastUpdate).LocalizedStringPtr;
      if (TVar3 != (TDisplayStringPtr<FString_const_>)0x0) {
        LOCK();
        iVar1 = *(int *)TVar3;
        *(int *)TVar3 = *(int *)TVar3 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          if (*(void **)((longlong)TVar3 + 8) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)TVar3 + 8));
          }
          ::operator_delete((void *)TVar3,0x18);
        }
      }
      pIVar4 = (pFVar15->TextLastUpdate).TextDataPtr.Reference;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar15->TextHighlighter).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar15->Marshaller).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar15->TextLayout).SharedReferenceCount.ReferenceController);
      ::operator_delete(pFVar15,0x70);
    }
  }
  else {
    pFVar14 = this_02->Ptr;
    this_02->Ptr = pFVar15;
    TDefaultDelete<FSlateTextBlockLayout>::operator()
              ((TDefaultDelete<FSlateTextBlockLayout> *)this_02,pFVar14);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_368,
             (FWriteAccessScope *)&local_338);
  if ((local_368._16_4_ != 0) && (local_368.Accessor != (FMRSWRecursiveAccessDetector *)0x0)) {
    (**(code **)(local_368.Accessor)->State)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_368.Accessor,0,0,0x10);
    local_368._16_8_ = local_368._16_8_ & 0xffffffff00000000;
  }
  if (local_338.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_338.Accessor,&local_338);
  }
  if (local_368.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free(local_368.Accessor);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_368);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_348.Data);
  return;
}

// OnPaint @ 14604e880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
STimecode::OnPaint(STimecode *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
                  FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  ESlateColorStylingMode EVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FTimecode *pFVar8;
  FSlateFontInfo *pFVar9;
  FSlateColor *pFVar10;
  bool *pbVar11;
  FSlateApplication *pFVar12;
  FDeprecateSlateVector2D FVar13;
  FPaintGeometry *pFVar14;
  FString *pFVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  undefined8 uVar18;
  short sVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float in_XMM3_Da;
  undefined1 auStackY_268 [32];
  undefined4 uVar24;
  FLinearColor_u_0 *pFVar25;
  int local_224;
  FString local_220;
  uint local_210;
  undefined8 local_20c;
  FSlateFontInfo *local_200;
  undefined8 local_1f8;
  FSlateFontInfo *local_1f0;
  FSlateWindowElementList *local_1e8;
  FLinearColor_u_0 local_1e0;
  FLinearColor_u_0 local_1d0;
  FLinearColor_u_0 local_1c0;
  TSharedRef<FSlateFontMeasure,1> local_1b0;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  FScriptContainerElement *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  FScriptContainerElement *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  FTimecode local_168;
  undefined1 local_150 [16];
  undefined1 local_140 [8];
  undefined1 local_138 [16];
  UObject *local_128;
  TObjectPtr<UObject>_u_0 TStack_120;
  FLinearColor_u_0 local_118;
  TVector2<float>_u_0 local_108;
  float local_100;
  undefined8 local_fc;
  FDeprecateSlateVector2D local_f4;
  float local_ec [2];
  float afStack_e4 [2];
  TVector2<float>_u_0 local_dc;
  byte local_d4;
  FPaintGeometry local_d0;
  FPaintGeometry local_98;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1e8 = param_4;
  pFVar8 = TAttribute<FTimecode>::Get(&this->Timecode);
  local_168.Hours = pFVar8->Hours;
  local_168.Minutes = pFVar8->Minutes;
  local_168.Seconds = pFVar8->Seconds;
  local_168.Frames = pFVar8->Frames;
  local_168.Subframe = pFVar8->Subframe;
  local_168.bDropFrameFormat = pFVar8->bDropFrameFormat;
  local_168._21_3_ = *(undefined3 *)&pFVar8->field_0x15;
  FTimecode::ToString(&local_168,&local_220,false,this->bDisplaySubframes);
  pFVar9 = TAttribute<FSlateFontInfo>::Get(&this->TimecodeFont);
  uVar20 = param_5 + 1;
  local_210 = uVar20;
  local_200 = pFVar9;
  pFVar10 = TAttribute<FSlateColor>::Get(&this->TimecodeColor);
  EVar1 = pFVar10->ColorUseRule;
  if (EVar1 != UseColor_Specified) {
    if (EVar1 == UseColor_ColorTable) {
      pFVar10 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar10);
    }
    else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
      pFVar10 = (FSlateColor *)&param_6->ForegroundColor;
    }
    else {
      pFVar10 = (FSlateColor *)&param_6->SubduedForeground;
    }
  }
  local_1e0._s_0.R =
       (pFVar10->SpecifiedColor).field0_0x0._s_0.R *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
  local_dc = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
  local_fc = 0;
  local_1e0._s_0.G =
       (pFVar10->SpecifiedColor).field0_0x0._s_0.G *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_1e0._s_0.B =
       (pFVar10->SpecifiedColor).field0_0x0._s_0.B *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_1e0._s_0.A =
       (pFVar10->SpecifiedColor).field0_0x0._s_0.A *
       (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
  local_108 = (param_2->AbsolutePosition).field0_0x0;
  local_f4 = param_2->Size;
  local_100 = param_2->Scale;
  local_d4 = param_2->bHasRenderTransform * '\x02' | local_d4 & 0xfc;
  pFVar25 = &local_1e0;
  local_ec = (param_2->AccumulatedRenderTransform).M.M[0];
  afStack_e4 = (param_2->AccumulatedRenderTransform).M.M[1];
  FSlateDrawElement::MakeText
            (param_4,uVar20,(FPaintGeometry *)&local_108._s_0,&local_220,pFVar9,None,
             (FLinearColor *)&pFVar25->_s_0);
  uVar24 = (undefined4)((ulonglong)pFVar9 >> 0x20);
  pbVar11 = TAttribute<bool>::Get(&this->bDisplayLabel);
  if (*pbVar11 != false) {
    pFVar10 = TAttribute<FSlateColor>::Get(&this->LabelColor);
    EVar1 = pFVar10->ColorUseRule;
    if (EVar1 != UseColor_Specified) {
      if (EVar1 == UseColor_ColorTable) {
        pFVar10 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar10);
      }
      else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
        pFVar10 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        pFVar10 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    local_1f0 = TAttribute<FSlateFontInfo>::Get(&this->LabelFont);
    pFVar12 = FSlateApplication::Get();
    lVar2 = *(longlong *)&pFVar12->field_0x60;
    if ((*(longlong *)(lVar2 + 8) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
    FSlateFontServices::GetFontMeasureService(*(FSlateFontServices **)(lVar2 + 8),&local_1b0);
    local_198 = local_220.Data.AllocatorInstance.Data;
    sVar19 = (local_168.bDropFrameFormat != false) + 0x3a;
    pFVar9 = (FSlateFontInfo *)CONCAT44(uVar24,__real_3f800000);
    iStack_190 = local_220.Data.ArrayNum + -1;
    if (local_220.Data.ArrayNum == 0) {
      iStack_190 = 0;
    }
    local_138._12_4_ = uStack_18c;
    local_138._8_4_ = iStack_190;
    local_138._0_8_ = local_220.Data.AllocatorInstance.Data;
    FSlateFontMeasure::Measure
              (local_1b0.Object,(TStringView<wchar_t> *)local_150,(FSlateFontInfo *)local_138,
               in_XMM3_Da);
    fVar4 = __real_41000000;
    uVar22 = 0;
    local_224 = 0;
    bVar5 = true;
    uVar18 = local_220.Data._8_8_;
    uVar23 = uVar22;
    while( true ) {
      iVar21 = (int)uVar22;
      iVar17 = (int)uVar18;
      iVar7 = iVar17 + -1;
      if (iVar17 == 0) {
        iVar7 = 0;
      }
      if (iVar7 <= iVar21) break;
      pFVar16 = local_220.Data.AllocatorInstance.Data + (longlong)iVar17 * 2;
      do {
        if (pFVar16 == local_220.Data.AllocatorInstance.Data) goto LAB_14604eb91;
        pFVar16 = pFVar16 + -2;
      } while (*(short *)pFVar16 != sVar19);
      if ((int)((longlong)pFVar16 - (longlong)local_220.Data.AllocatorInstance.Data >> 1) == -1) {
LAB_14604eb91:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("LastSeparatorIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Widgets\\STimecode.cpp"
                           ,0x4e,L"");
        uVar18 = local_220.Data._8_8_;
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
      }
      iVar7 = (int)uVar18;
      uVar24 = (undefined4)((ulonglong)pFVar9 >> 0x20);
      if (bVar5) {
        if (iVar21 < 0) {
code_r0x00014604ebee:
          pFVar9 = (FSlateFontInfo *)CONCAT44(uVar24,iVar21);
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            iVar7 = (*pcVar3)();
            return iVar7;
          }
        }
        else {
          iVar17 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar17 = 0;
          }
          if (iVar17 <= iVar21) goto code_r0x00014604ebee;
        }
        iVar7 = iswdigit(*(wint_t *)(local_220.Data.AllocatorInstance.Data + uVar23));
        uVar18 = local_220.Data._8_8_;
        if (iVar7 != 0) {
          local_188 = local_220.Data.AllocatorInstance.Data;
          bVar5 = false;
          iStack_180 = local_220.Data.ArrayNum + -1;
          if (local_220.Data.ArrayNum == 0) {
            iStack_180 = 0;
          }
          TStack_120._4_4_ = uStack_17c;
          TStack_120._0_4_ = iStack_180;
          local_128 = (UObject *)local_220.Data.AllocatorInstance.Data;
          FVar13 = FSlateFontMeasure::Measure
                             (local_1b0.Object,(TStringView<wchar_t> *)(local_150 + 8),
                              (int)&local_128,0,
                              (FSlateFontInfo *)CONCAT44((int)((ulonglong)pFVar9 >> 0x20),iVar21),
                              SUB81(local_200,0),(float)CONCAT71((int7)((ulonglong)pFVar25 >> 8),1))
          ;
          local_1d0._s_0.G =
               (pFVar10->SpecifiedColor).field0_0x0._s_0.G *
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
          local_1d0._s_0.R =
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.R *
               (pFVar10->SpecifiedColor).field0_0x0._s_0.R;
          local_1d0._s_0.A =
               (pFVar10->SpecifiedColor).field0_0x0._s_0.A *
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
          local_1d0._s_0.B =
               (pFVar10->SpecifiedColor).field0_0x0._s_0.B *
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
          local_20c._4_4_ = *(float *)((longlong)FVar13 + 4) - fVar4;
          local_20c._0_4_ = *(undefined4 *)FVar13;
          pFVar14 = FGeometry::ToOffsetPaintGeometry
                              (param_2,&local_d0,(FDeprecateVector2DParameter *)&local_20c);
          pFVar15 = FText::ToString(TimecodeImpl::Labels + local_224);
          pFVar25 = &local_1d0;
          pFVar9 = local_1f0;
          FSlateDrawElement::MakeText
                    (local_1e8,local_210,pFVar14,pFVar15,local_1f0,None,
                     (FLinearColor *)&pFVar25->_s_0);
LAB_14604eebd:
          local_224 = local_224 + 1;
          uVar18 = local_220.Data._8_8_;
          if (4 < local_224) break;
        }
      }
      else {
        if (iVar21 < 0) {
code_r0x00014604ed72:
          pFVar9 = (FSlateFontInfo *)CONCAT44(uVar24,iVar21);
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          uVar18 = local_220.Data._8_8_;
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            iVar7 = (*pcVar3)();
            return iVar7;
          }
        }
        else {
          iVar17 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar17 = 0;
          }
          if (iVar17 <= iVar21) goto code_r0x00014604ed72;
        }
        if (*(short *)(local_220.Data.AllocatorInstance.Data + uVar23) == sVar19) {
          iVar21 = iVar21 + 1;
          local_178 = local_220.Data.AllocatorInstance.Data;
          uVar23 = uVar23 + 2;
          iStack_170 = (int)uVar18 + -1;
          if ((int)uVar18 == 0) {
            iStack_170 = 0;
          }
          local_118._8_8_ = CONCAT44(uStack_16c,iStack_170);
          local_118._0_8_ = local_220.Data.AllocatorInstance.Data;
          FVar13 = FSlateFontMeasure::Measure
                             (local_1b0.Object,(TStringView<wchar_t> *)local_140,(int)&local_118,0,
                              (FSlateFontInfo *)CONCAT44((int)((ulonglong)pFVar9 >> 0x20),iVar21),
                              SUB81(local_200,0),(float)CONCAT71((int7)((ulonglong)pFVar25 >> 8),1))
          ;
          local_1c0._s_0.G =
               (pFVar10->SpecifiedColor).field0_0x0._s_0.G *
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
          local_1c0._s_0.R =
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.R *
               (pFVar10->SpecifiedColor).field0_0x0._s_0.R;
          local_1c0._s_0.A =
               (pFVar10->SpecifiedColor).field0_0x0._s_0.A *
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
          local_1c0._s_0.B =
               (pFVar10->SpecifiedColor).field0_0x0._s_0.B *
               (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
          local_1f8._4_4_ = *(float *)((longlong)FVar13 + 4) - fVar4;
          local_1f8._0_4_ = *(undefined4 *)FVar13;
          pFVar14 = FGeometry::ToOffsetPaintGeometry
                              (param_2,&local_98,(FDeprecateVector2DParameter *)&local_1f8);
          pFVar15 = FText::ToString(TimecodeImpl::Labels + local_224);
          pFVar25 = &local_1c0;
          pFVar9 = local_1f0;
          FSlateDrawElement::MakeText
                    (local_1e8,local_210,pFVar14,pFVar15,local_1f0,None,
                     (FLinearColor *)&pFVar25->_s_0);
          goto LAB_14604eebd;
        }
      }
      uVar22 = (ulonglong)(iVar21 + 1);
      uVar23 = uVar23 + 2;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b0.SharedReferenceCount.ReferenceController);
    uVar20 = local_210;
  }
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  return uVar20;
}

