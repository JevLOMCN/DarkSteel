// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// SDS_ColorSlider @ 14bd43890

SDS_ColorSlider * __thiscall SDS_ColorSlider::SDS_ColorSlider(SDS_ColorSlider *this)

{
  TSlateAttribute<float,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar1;
  TSlateAttribute<EOrientation,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar2;
  TSlateAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar3;
  TSlateAttribute<bool,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar4;
  code *pcVar5;
  double _X;
  bool bVar6;
  int iVar7;
  SDS_ColorSlider *pSVar8;
  undefined1 local_res8 [8];
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  _X = __real_4018000000000000;
  this->_padding_ = (longlong)&___7SDS_ColorSlider__6B_;
  pTVar1 = &this->SelectorThickness;
  *(undefined4 *)&pTVar1->field_0x0 = 0x40c00000;
  iVar7 = _finite(_X);
  if (iVar7 == 0) {
    local_res8[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res8);
  }
  pSVar8 = this + 1;
  if ((pTVar1 < this) || (pSVar8 <= pTVar1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (SDS_ColorSlider *)(*pcVar5)();
      return pSVar8;
    }
  }
  pTVar2 = &this->Orientation;
  *(undefined4 *)&pTVar2->field_0x0 = 0;
  if ((pTVar2 < this) || (pSVar8 <= pTVar2)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (SDS_ColorSlider *)(*pcVar5)();
      return pSVar8;
    }
  }
  pTVar3 = &this->GradientColors;
  *(undefined8 *)&pTVar3->field_0x0 = 0;
  *(undefined8 *)&(this->GradientColors).field_0x8 = 0;
  if ((pTVar3 < this) || (pSVar8 <= pTVar3)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (SDS_ColorSlider *)(*pcVar5)();
      return pSVar8;
    }
  }
  pTVar4 = &this->bHasAlphaBackground;
  pTVar4->field_0x0 = 0;
  if ((pTVar4 < this) || (pSVar8 <= pTVar4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (SDS_ColorSlider *)(*pcVar5)();
      return pSVar8;
    }
  }
  pTVar4 = &this->bUseSRGB;
  pTVar4->field_0x0 = 0;
  if ((pTVar4 < this) || (pSVar8 <= pTVar4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (SDS_ColorSlider *)(*pcVar5)();
      return pSVar8;
    }
  }
  pTVar4 = &this->bSupportDynamicSliderMaxValue;
  pTVar4->field_0x0 = 1;
  if ((pTVar4 < this) || (pSVar8 <= pTVar4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pSVar8 = (SDS_ColorSlider *)(*pcVar5)();
      return pSVar8;
    }
  }
  (this->Slider).Object = (SSlider *)0x0;
  (this->Slider).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ComputeDesiredSize @ 14bd49600

TVector2<double> * __thiscall
SDS_ColorSlider::ComputeDesiredSize
          (SDS_ColorSlider *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  if (this->Orientation ==
      (TSlateAttribute<EOrientation,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 100.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 20.0;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 20.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 100.0;
  return __return_storage_ptr__;
}

// Construct @ 14bd49650

void __thiscall SDS_ColorSlider::Construct(SDS_ColorSlider *this,FArguments *param_1)

{
  byte *pbVar1;
  TDelegate<EOrientation___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  float fVar2;
  longlong *plVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  SSlider *pSVar6;
  FSharedReferencer<1> FVar7;
  SHorizontalBox *pSVar8;
  char cVar9;
  bool bVar10;
  byte bVar11;
  EOrientation EVar12;
  bool *pbVar13;
  float *pfVar14;
  ISlateStyle *pIVar15;
  FName *pFVar16;
  FSlateBrush *pFVar17;
  FArguments *pFVar18;
  FSliderStyle *pFVar19;
  FArguments *pFVar20;
  FSlot *this_01;
  longlong *plVar21;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  undefined1 local_970 [8];
  ForAnyElementType FStack_968;
  int local_960;
  float local_958;
  undefined1 local_954;
  undefined1 local_950 [8];
  ForAnyElementType FStack_948;
  ulonglong local_940;
  undefined2 local_938;
  undefined1 local_930 [8];
  ForAnyElementType FStack_928;
  ulonglong local_920;
  undefined1 local_918 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_910;
  ForAnyElementType FStack_908;
  ulonglong local_900;
  undefined1 local_8f8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_8f0;
  ForAnyElementType FStack_8e8;
  ulonglong local_8e0;
  undefined1 local_8d8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_8d0;
  ForAnyElementType FStack_8c8;
  ulonglong local_8c0;
  TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs> local_8b8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_8a0;
  FLinearColor_u_0 local_888;
  uint local_878;
  undefined1 local_874;
  undefined1 local_870 [8];
  ForAnyElementType FStack_868;
  ulonglong local_860;
  FLinearColor_u_0 local_858;
  uint local_848;
  undefined1 local_844;
  undefined1 local_840 [8];
  ForAnyElementType FStack_838;
  ulonglong local_830;
  undefined8 local_828;
  FSharedReferencer<1> local_820;
  FName local_818;
  FMemScope local_810;
  FName local_808;
  FMemScope local_800;
  FDestructionSentinel local_7f8;
  FDestructionSentinel local_7e0;
  FDestructionSentinel local_7c8;
  FDestructionSentinel local_7b0;
  FDestructionSentinel local_798;
  FDestructionSentinel local_780;
  FDestructionSentinel local_768;
  FDestructionSentinel local_750;
  longlong local_738;
  TReferenceControllerBase<1> *pTStack_730;
  SSlider *local_728;
  TReferenceControllerBase<1> *pTStack_720;
  FName local_718;
  FName local_710;
  FName local_708;
  FName local_700;
  FName local_6f8;
  FReadAccessScope local_6f0;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_6d8;
  FReadAccessScope local_5d8;
  FArguments local_5c0;
  FArguments local_3b8;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->GradientColors,(SWidget *)this,&param_1->_GradientColors,None);
  pbVar13 = TAttribute<bool>::Get(&param_1->_HasAlphaBackground);
  plVar21 = (longlong *)0x0;
  local_8d8[0] = *pbVar13;
  local_8c0 = 0;
  local_8d8[1] = true;
  local_8d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_8c8.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->bHasAlphaBackground,(SWidget *)this,(TAttribute<bool> *)local_8d8,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_8d0,(FWriteAccessScope *)&local_750);
  if (((int)local_8c0 != 0) && (FStack_8c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_8c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8c8,0,0,0x10);
    local_8c0 = local_8c0 & 0xffffffff00000000;
  }
  if (local_750.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_750.Accessor,&local_750);
  }
  if (FStack_8c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_8d0.AccessDetector);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->bUseSRGB,(SWidget *)this,&param_1->_UseSRGB,None);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->bSupportDynamicSliderMaxValue,(SWidget *)this,
           &param_1->_SupportDynamicSliderMaxValue,None);
  this_00 = &(param_1->_Orientation).Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_6f0);
  if (((*(int *)&(param_1->_Orientation).Getter.field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(param_1->_Orientation).Getter.field_0x8, plVar3 == (longlong *)0x0))
     || (cVar9 = (**(code **)(*plVar3 + 0x38))(), cVar9 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_6f0);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_6f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_5d8);
    if (*(int *)&(param_1->_Orientation).Getter.field_0x10 != 0) {
      plVar21 = *(longlong **)&(param_1->_Orientation).Getter.field_0x8;
    }
    EVar12 = (**(code **)(*plVar21 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5d8);
    (param_1->_Orientation).Value = EVar12;
  }
  local_8f8._0_4_ = (param_1->_Orientation).Value;
  local_8f8[4] = true;
  local_8e0 = 0;
  local_8f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_8e8.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,enum_EOrientation,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign(&this->Orientation,(SWidget *)this,(TAttribute<EOrientation> *)local_8f8,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_8f0,(FWriteAccessScope *)&local_7f8);
  if (((int)local_8e0 != 0) && (FStack_8e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_8e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8e8,0,0,0x10);
    local_8e0 = local_8e0 & 0xffffffff00000000;
  }
  if (local_7f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7f8.Accessor,&local_7f8);
  }
  if (FStack_8e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_8f0.AccessDetector);
  pfVar14 = TAttribute<float>::Get(&param_1->_SelectorThickness);
  local_918._0_4_ = *pfVar14;
  local_910.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_908.Data = (FScriptContainerElement *)0x0;
  local_918[4] = true;
  local_900 = 0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->SelectorThickness,(SWidget *)this,(TAttribute<float> *)local_918,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_910,(FWriteAccessScope *)&local_7e0);
  if (((int)local_900 != 0) && (FStack_908.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_908.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_908,0,0,0x10);
    local_900 = local_900 & 0xffffffff00000000;
  }
  if (local_7e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7e0.Accessor,&local_7e0);
  }
  if (FStack_908.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_908.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_910.AccessDetector);
  pIVar15 = FAppStyle::Get();
  pcVar4 = *(code **)((longlong)*pIVar15 + 0x50);
  pFVar16 = ::FName::FName(&local_6f8,"ColorPicker.RoundedInputBorder");
  pFVar17 = (FSlateBrush *)(*pcVar4)(pIVar15,*pFVar16);
  this->BorderBrush = pFVar17;
  pIVar15 = FAppStyle::Get();
  pcVar4 = *(code **)((longlong)*pIVar15 + 0x50);
  pFVar16 = ::FName::FName(&local_700,"ColorPicker.RoundedInputBorderActive");
  pFVar17 = (FSlateBrush *)(*pcVar4)(pIVar15,*pFVar16);
  this->BorderActiveBrush = pFVar17;
  pIVar15 = FAppStyle::Get();
  pcVar4 = *(code **)((longlong)*pIVar15 + 0x50);
  pFVar16 = ::FName::FName(&local_708,"ColorPicker.RoundedInputBorderHovered");
  pFVar17 = (FSlateBrush *)(*pcVar4)(pIVar15,*pFVar16);
  this->BorderHoveredBrush = pFVar17;
  pIVar15 = FAppStyle::Get();
  pcVar4 = *(code **)((longlong)*pIVar15 + 0x50);
  pFVar16 = ::FName::FName(&local_710,"ColorPicker.RoundedAlphaBackground");
  pFVar17 = (FSlateBrush *)(*pcVar4)(pIVar15,*pFVar16);
  this->AlphaBackgroundBrush = pFVar17;
  pFVar18 = SSlider::FArguments::FArguments(&local_3b8);
  local_938 = 0x100;
  local_920 = 0;
  local_930 = (undefined1  [8])0x0;
  FStack_928.Data = (FScriptContainerElement *)0x0;
  (pFVar18->_IndentHandle).Value = false;
  (pFVar18->_IndentHandle).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_IndentHandle).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_930);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_930,
             (FWriteAccessScope *)&local_7c8);
  if (((int)local_920 != 0) && (FStack_928.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_928.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_928,0,0,0x10);
    local_920 = local_920 & 0xffffffff00000000;
  }
  if (local_7c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7c8.Accessor,&local_7c8);
  }
  if (FStack_928.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_928.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_930);
  pFVar18->_Orientation = (EOrientation)this->Orientation;
  local_878 = local_878 & 0xffffff00;
  local_874 = 1;
  local_888 = FLinearColor::Transparent.field0_0x0;
  local_860 = 0;
  local_870 = (undefined1  [8])0x0;
  FStack_868.Data = (FScriptContainerElement *)0x0;
  (pFVar18->_SliderBarColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
  (pFVar18->_SliderBarColor).Value.ColorUseRule = (undefined1)local_878;
  (pFVar18->_SliderBarColor).Value.ColorTableId = local_878._1_1_;
  *(undefined2 *)&(pFVar18->_SliderBarColor).Value.field_0x12 = local_878._2_2_;
  (pFVar18->_SliderBarColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_SliderBarColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_870);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_870,
             (FWriteAccessScope *)&local_7b0);
  if (((int)local_860 != 0) && (FStack_868.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_868.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_868,0,0,0x10);
    local_860 = local_860 & 0xffffffff00000000;
  }
  if (local_7b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7b0.Accessor,&local_7b0);
  }
  if (FStack_868.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_868.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_870);
  local_848 = local_848 & 0xffffff00;
  local_844 = 1;
  local_858 = FLinearColor::Transparent.field0_0x0;
  local_830 = 0;
  local_840 = (undefined1  [8])0x0;
  FStack_838.Data = (FScriptContainerElement *)0x0;
  (pFVar18->_SliderHandleColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
  (pFVar18->_SliderHandleColor).Value.ColorUseRule = (undefined1)local_848;
  (pFVar18->_SliderHandleColor).Value.ColorTableId = local_848._1_1_;
  *(undefined2 *)&(pFVar18->_SliderHandleColor).Value.field_0x12 = local_848._2_2_;
  (pFVar18->_SliderHandleColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_SliderHandleColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_840);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_840,
             (FWriteAccessScope *)&local_798);
  if (((int)local_830 != 0) && (FStack_838.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_838.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_838,0,0,0x10);
    local_830 = local_830 & 0xffffffff00000000;
  }
  if (local_798.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_798.Accessor,&local_798);
  }
  if (FStack_838.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_838.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_840);
  pIVar15 = FAppStyle::Get();
  pFVar16 = ::FName::FName(&local_718,"ColorPicker.Slider");
  pFVar19 = (FSliderStyle *)
            (**(code **)((longlong)*pIVar15 + 0xa0))(pIVar15,FSliderStyle::TypeName,*pFVar16,0,1);
  if (pFVar19 == (FSliderStyle *)0x0) {
    pFVar19 = FSliderStyle::GetDefault();
  }
  pFVar18->_Style = pFVar19;
  pfVar14 = TAttribute<float>::Get(&param_1->_MinSliderValue);
  pFVar18->_MinValue = *pfVar14;
  pfVar14 = TAttribute<float>::Get(&param_1->_MaxSliderValue);
  pFVar18->_MaxValue = *pfVar14;
  pfVar14 = TAttribute<float>::Get(&param_1->_Delta);
  local_958 = *pfVar14;
  local_954 = 1;
  local_940 = 0;
  local_950 = (undefined1  [8])0x0;
  FStack_948.Data = (FScriptContainerElement *)0x0;
  (pFVar18->_StepSize).Value = local_958;
  (pFVar18->_StepSize).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_StepSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_950);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_950,
             (FWriteAccessScope *)&local_780);
  if (((int)local_940 != 0) && (FStack_948.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_948.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_948,0,0,0x10);
    local_940 = local_940 & 0xffffffff00000000;
  }
  if (local_780.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_780.Accessor,&local_780);
  }
  if (FStack_948.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_948.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_950);
  fVar2 = (param_1->_Value).Value;
  bVar10 = (param_1->_Value).bIsSet;
  local_970 = (undefined1  [8])0x0;
  FStack_968.Data = (FScriptContainerElement *)0x0;
  local_960 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_970,
             &(param_1->_Value).Getter);
  (pFVar18->_Value).Value = fVar2;
  (pFVar18->_Value).bIsSet = bVar10;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_970);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_970,
             (FWriteAccessScope *)&local_768);
  if ((local_960 != 0) && (FStack_968.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_968.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_968,0,0,0x10);
    local_960 = 0;
  }
  if (local_768.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_768.Accessor,&local_768);
  }
  if (FStack_968.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_968.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_970);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar18->_OnMouseCaptureBegin,&param_1->_OnBeginSliderMovement);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar18->_OnMouseCaptureEnd,&param_1->_OnEndSliderMovement);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar18->_OnValueChanged,&param_1->_OnValueChanged);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_818 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_810,&local_818,true);
  TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>
            (&local_8b8,"SSlider",
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Slate\\Widgets\\SDS_ColorSlider.cpp"
             ,0x1e,local_res8);
  FMemScope::~FMemScope(&local_810);
  FLLMScope::~FLLMScope(local_res18);
  if (local_8b8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_8b8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_8b8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_728 = (this->Slider).Object;
  pTStack_720 = (this->Slider).SharedReferenceCount.ReferenceController;
  (this->Slider).Object = local_8b8._Widget.Object;
  (this->Slider).SharedReferenceCount.ReferenceController =
       local_8b8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_720);
  pSVar6 = local_8b8._Widget.Object;
  if ((local_8b8._Widget.Object == (SSlider *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_8b8._Widget.Object,(FSlateBaseNamedArgs *)pFVar18);
  SSlider::Construct(local_8b8._Widget.Object,pFVar18);
  if ((local_8b8._Widget.Object == (SSlider *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((local_8b8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar9 = (**(code **)((local_8b8._Widget.Object)->_padding_ + 0x228))(local_8b8._Widget.Object);
    bVar11 = 0;
    if (cVar9 != '\0') goto LAB_14bd4a038;
  }
  else {
LAB_14bd4a038:
    bVar11 = 0x20;
  }
  *(byte *)&(local_8b8._Widget.Object)->_padding_ =
       (byte)(local_8b8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_8b8._Widget.Object)->_padding_ =
       (byte)(local_8b8._Widget.Object)->_padding_ | bVar11;
  if ((local_8b8._Widget.Object == (SSlider *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_8b8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_8b8._Widget.Object == (SSlider *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar7.ReferenceController = local_8b8._Widget.SharedReferenceCount.ReferenceController;
  local_8b8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_8b8._Widget.Object = (SSlider *)0x0;
  if ((pSVar6 == (SSlider *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SSlider::FArguments::~FArguments(&local_3b8);
  pFVar20 = SHorizontalBox::FArguments::FArguments(&local_5c0);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_808 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_800,&local_808,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_8a0,"SHorizontalBox",
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Slate\\Widgets\\SDS_ColorSlider.cpp"
             ,0x2c,local_res10);
  FMemScope::~FMemScope(&local_800);
  FLLMScope::~FLLMScope(local_res20);
  pSVar8 = local_8a0._Widget.Object;
  if ((local_8a0._Widget.Object == (SHorizontalBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_8a0._Widget.Object,(FSlateBaseNamedArgs *)pFVar20);
  SHorizontalBox::Construct(local_8a0._Widget.Object,pFVar20);
  if ((local_8a0._Widget.Object == (SHorizontalBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((local_8a0._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar9 = (**(code **)(*(longlong *)local_8a0._Widget.Object + 0x228))(local_8a0._Widget.Object);
    bVar11 = 0;
    if (cVar9 != '\0') goto LAB_14bd4a222;
  }
  else {
LAB_14bd4a222:
    bVar11 = 0x20;
  }
  (local_8a0._Widget.Object)->field_0x30 = (local_8a0._Widget.Object)->field_0x30 & 0xdf;
  (local_8a0._Widget.Object)->field_0x30 = (local_8a0._Widget.Object)->field_0x30 | bVar11;
  if ((local_8a0._Widget.Object == (SHorizontalBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (local_8a0._Widget.Object)->field_0x31 = (local_8a0._Widget.Object)->field_0x31 | 4;
  if ((local_8a0._Widget.Object == (SHorizontalBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar7.ReferenceController = local_8a0._Widget.SharedReferenceCount.ReferenceController;
  local_8a0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_8a0._Widget.Object = (SHorizontalBox *)0x0;
  if ((pSVar8 == (SHorizontalBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_5c0._Slots.AllocatorInstance.Data,local_5c0._Slots.ArrayNum);
  if ((FSlotArguments *)local_5c0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_5c0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_5c0);
  if ((pSVar8 == (SHorizontalBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_01 = ::operator_new(0x58);
  if (this_01 == (FSlot *)0x0) {
    local_6d8._padding_ = 0;
  }
  else {
    *(undefined8 *)this_01 = 0;
    *(undefined8 *)&this_01->field_0x8 = 0;
    *(undefined8 *)&this_01->field_0x10 = 0;
    *(undefined8 *)&this_01->field_0x18 = 0;
    *(undefined8 *)&this_01->field_0x20 = 0;
    *(undefined8 *)&this_01->field_0x28 = 0;
    *(undefined8 *)&this_01->field_0x30 = 0;
    *(undefined8 *)&this_01->field_0x38 = 0;
    *(undefined8 *)&this_01->field_0x40 = 0;
    *(undefined8 *)&this_01->field_0x48 = 0;
    *(undefined8 *)&this_01->field_0x50 = 0;
    local_6d8._padding_ = (longlong)SHorizontalBox::FSlot::FSlot(this_01);
    local_6d8._padding_ = 0;
    if ((FSlot *)local_6d8._padding_ != (FSlot *)0x0) goto LAB_14bd4a3ba;
  }
  local_6d8._padding_ = 0;
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("Slot.Get()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                      ,0x9b,L"");
  if (bVar10) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14bd4a3ba:
  local_6d8._padding_._0_1_ = 0;
  local_6d8._padding_._4_1_ = 0;
  local_6d8._padding_._4_1_ = 0;
  local_6d8._padding_._0_1_ = 0;
  local_6d8._padding_._0_4_ = 0;
  local_6d8._padding_._4_1_ = 0;
  local_6d8._padding_._0_4_ = 0;
  local_6d8._padding_._4_1_ = 0;
  local_6d8._padding_ =
       (longlong)&___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  local_6d8.Children = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar8->field_0x218;
  local_6d8._padding_ = 0;
  local_6d8._padding_ = 0;
  local_6d8._padding_ = 0;
  local_6d8._padding_ = 0;
  local_6d8._padding_ = 0;
  local_6d8._padding_ = 0;
  local_6d8._padding_ = 0;
  local_6d8._padding_ = 0;
  local_6d8._padding_ = 0;
  local_6d8._padding_ = 0;
  local_6d8._padding_ = 0;
  local_6d8.Index = -1;
  if (((this->Slider).Object == (SSlider *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar5 = (this->Slider).SharedReferenceCount.ReferenceController;
  pSVar6 = (this->Slider).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar6 == (SSlider *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_828 = 0;
  local_820.ReferenceController = pTVar5;
  local_6d8._padding_ = (longlong)pSVar6;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)&local_6d8._padding_,&local_820);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_820.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_6d8);
  if ((pSVar8 == (SHorizontalBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar8 == (SHorizontalBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar21 = &this->_padding_;
  if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar21);
  }
  else {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar21);
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_738 = this->_padding_;
  pTStack_730 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar8;
  this->_padding_ = (longlong)FVar7.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_730);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar21);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return;
}

// OnPaint @ 14bd7b360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SDS_ColorSlider::OnPaint
          (SDS_ColorSlider *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float *pfVar1;
  TTransform2<float> *pTVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  byte bVar6;
  ESlateColorStylingMode EVar7;
  int iVar8;
  TSlateAttribute<EOrientation,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar9;
  FDeprecateSlateVector2D FVar10;
  void *_Src;
  SSlider *pSVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  FSlateWindowElementList *pFVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  ISlateStyle *pIVar21;
  FName *pFVar22;
  FSlateBrush *pFVar23;
  FSlateColor *pFVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  uint uVar28;
  ForAnyElementType FVar29;
  longlong lVar30;
  undefined8 uVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float afVar39 [2];
  float afVar40 [2];
  float fVar41;
  float fVar42;
  undefined1 auStackY_3e8 [32];
  undefined8 local_398;
  uint local_390;
  undefined8 local_388;
  ForAnyElementType local_380;
  undefined8 local_378;
  undefined8 local_370;
  FWidgetStyle *local_368;
  float local_360;
  TSlateAttribute<float,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TStack_35c;
  undefined8 local_358;
  ForAnyElementType local_350;
  int local_348;
  int local_344;
  FSlateWindowElementList *local_340;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> local_320;
  TSlateAttribute<float,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> local_310;
  float fStack_30c;
  FLinearColor_u_0 local_308;
  FLinearColor_u_0 local_2f8;
  TVector2<float>_u_0_s_0 local_2e4;
  undefined8 local_2d8;
  undefined8 local_2cc;
  undefined8 local_2c0;
  FName local_2b8;
  FName local_2b0;
  TVector4<float>_u_0 local_2a8;
  TTransform2<float> local_298;
  TTransform2<float> local_280;
  TTransform2<float> local_268;
  TTransform2<float> local_250;
  TTransform2<float> local_238;
  TTransform2<float> local_220;
  TTransform2<float> local_208;
  TTransform2<float> local_1f0;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  TVector2<float>_u_0 local_1c8;
  float local_1c0;
  undefined8 local_1bc;
  FDeprecateSlateVector2D local_1b4;
  float local_1ac [2];
  float afStack_1a4 [2];
  TVector2<float>_u_0 local_19c;
  byte local_194;
  TVector2<float>_u_0 local_190;
  float local_188;
  undefined8 local_184;
  FDeprecateSlateVector2D local_17c;
  float local_174 [2];
  float afStack_16c [2];
  TVector2<float>_u_0 local_164;
  byte local_15c;
  TVector2<float>_u_0 local_158;
  float local_150;
  undefined8 local_14c;
  undefined8 local_144;
  float local_13c [2];
  float afStack_134 [2];
  TVector2<float>_u_0 local_12c;
  byte local_124;
  TVector2<float>_u_0 local_120;
  float local_118;
  undefined8 local_114;
  FDeprecateSlateVector2D local_10c;
  float local_104 [2];
  float afStack_fc [2];
  TVector2<float>_u_0 local_f4;
  byte local_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  local_368 = param_6;
  local_340 = param_4;
  local_370 = (TVector2<float>_u_0)param_2;
  iVar19 = SCompoundWidget::OnPaint
                     ((SCompoundWidget *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                      param_7);
  afVar40 = _UNK_15076b188;
  afVar39 = ___xmm_3f80000000000000000000003f800000;
  fVar4 = __real_3f800000;
  FVar10 = param_2->Size;
  uVar20 = iVar19 + 1;
  local_398._4_4_ = FVar10._4_4_;
  fVar3 = (float)local_398._4_4_;
  local_398._0_4_ = FVar10._0_4_;
  fVar42 = (float)(undefined4)local_398;
  local_388 = (TVector2<float>_u_0)0x0;
  fVar41 = (float)local_398._4_4_;
  if (this->Orientation ==
      (TSlateAttribute<EOrientation,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
    fVar41 = (float)(undefined4)local_398;
  }
  iVar8 = *(int *)&(this->GradientColors).field_0x8;
  local_398 = (TVector2<float>_u_0)(longlong)iVar8;
  local_390 = uVar20;
  if (0 < iVar8) {
    if (this->bHasAlphaBackground !=
        (TSlateAttribute<bool,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      fVar35 = param_2->Scale;
      local_2e4 = (param_2->AbsolutePosition).field0_0x0._s_0;
      pFVar23 = this->AlphaBackgroundBrush;
      local_298.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
      local_298.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
      local_298.M.M[0][1] = _UNK_15076b184;
      local_298.M.M[1][0] = _UNK_15076b188;
      local_298.M.M[1][1] = _UNK_15076b18c;
      local_388._4_4_ = fVar35 * 0.0 + local_2e4.Y;
      local_388._0_4_ = fVar35 * 0.0 + local_2e4.X;
      Concatenate<TTransform2<float>_>(&local_280,&local_298,&param_2->AccumulatedRenderTransform);
      local_1c8 = local_388;
      local_194 = param_2->bHasRenderTransform * '\x02' | local_194 & 0xfc;
      local_1bc = 0;
      local_390 = iVar19 + 2;
      local_1ac[0] = local_280.M.M[0][0];
      local_1ac[1] = local_280.M.M[0][1];
      afStack_1a4[0] = local_280.M.M[1][0];
      afStack_1a4[1] = local_280.M.M[1][1];
      local_19c = local_280.Trans.field0_0x0;
      local_1c0 = fVar35;
      local_1b4 = FVar10;
      FSlateDrawElement::MakeBox
                (local_340,uVar20,(FPaintGeometry *)&local_1c8._s_0,pFVar23,None,
                 &FLinearColor::White);
    }
    local_348 = *(int *)&(this->GradientColors).field_0x8;
    lVar30 = (longlong)local_348;
    _Src = *(void **)&this->GradientColors;
    local_350.Data = (FScriptContainerElement *)0x0;
    if (local_348 == 0) {
      local_344 = 0;
      iVar19 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_348,0,&local_350,local_348,&local_344);
      memcpy(local_350.Data,_Src,lVar30 << 4);
      afVar39 = ___xmm_3f80000000000000000000003f800000;
      afVar40 = _UNK_15076b188;
      iVar19 = local_348;
    }
    if ((this->Orientation ==
         (TSlateAttribute<EOrientation,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x1) &&
       (lVar30 = (longlong)(iVar19 / 2), 0 < iVar19 / 2)) {
      pFVar26 = local_350.Data + (longlong)(iVar19 + -1) * 0x10;
      FVar29.Data = local_350.Data;
      do {
        uVar31 = *(undefined8 *)(pFVar26 + 8);
        uVar13 = *(undefined8 *)FVar29.Data;
        uVar14 = *(undefined8 *)(FVar29.Data + 8);
        *(undefined8 *)FVar29.Data = *(undefined8 *)pFVar26;
        *(undefined8 *)(FVar29.Data + 8) = uVar31;
        FVar29.Data = FVar29.Data + 0x10;
        *(undefined8 *)pFVar26 = uVar13;
        *(undefined8 *)(pFVar26 + 8) = uVar14;
        lVar30 = lVar30 + -1;
        pFVar26 = pFVar26 + -0x10;
        iVar19 = local_348;
      } while (lVar30 != 0);
    }
    fVar16 = __real_437f0000;
    fVar15 = __real_3b808081;
    fVar35 = __real_3f000000;
    uVar20 = 0;
    local_380.Data = (FScriptContainerElement *)0x0;
    local_378 = 0;
    if (0 < iVar8) {
      lVar30 = 0;
      do {
        uVar25 = 0;
        if ((int)uVar20 < iVar19) {
          uVar25 = ~uVar20 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar12 = (code *)swi(3);
          iVar19 = (*pcVar12)();
          return iVar19;
        }
        pFVar26 = local_350.Data + lVar30;
        if (this->bUseSRGB ==
            (TSlateAttribute<bool,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
          fVar38 = *(float *)(pFVar26 + 0xc);
          fVar36 = *(float *)(pFVar26 + 4);
          if (fVar38 <= 0.0) {
            fVar38 = 0.0;
          }
          fVar37 = *(float *)pFVar26;
          if (fVar36 <= 0.0) {
            fVar36 = 0.0;
          }
          fVar34 = *(float *)(pFVar26 + 8);
          if (fVar37 <= 0.0) {
            fVar37 = 0.0;
          }
          if (fVar34 <= 0.0) {
            fVar34 = 0.0;
          }
          if (fVar4 <= fVar38) {
            fVar38 = fVar4;
          }
          if (fVar4 <= fVar36) {
            fVar36 = fVar4;
          }
          if (fVar4 <= fVar37) {
            fVar37 = fVar4;
          }
          if (fVar4 <= fVar34) {
            fVar34 = fVar4;
          }
          uVar33 = (uint)(fVar38 * fVar16 + fVar35);
          uVar25 = (uint)(fVar34 * fVar16 + fVar35);
          uVar28 = (uint)(fVar36 * fVar16 + fVar35);
          uVar32 = (uint)(fVar37 * fVar16 + fVar35);
          local_388._1_1_ = (char)uVar28;
          local_388._0_1_ = (char)uVar25;
          local_388._2_1_ = (char)uVar32;
          local_388._3_1_ = (char)uVar33;
          local_388._4_4_ = 0;
        }
        else {
          FLinearColor::ToFColorSRGB((FLinearColor *)pFVar26);
          uVar33 = (uint)(byte)local_388._3_1_;
          uVar32 = (uint)(byte)local_388._2_1_;
          uVar28 = (uint)(byte)local_388._1_1_;
          uVar25 = (uint)(byte)(undefined1)local_388;
        }
        local_338 = (float)(int)((float)(int)uVar20 * (fVar4 / (float)(iVar8 + -1)) * fVar41);
        fStack_330 = FLinearColor::sRGBToLinearTable[uVar32 & 0xff];
        fStack_32c = FLinearColor::sRGBToLinearTable[uVar28 & 0xff];
        local_328 = FLinearColor::sRGBToLinearTable[uVar25 & 0xff];
        fStack_324 = (float)(uVar33 & 0xff) * fVar15;
        fStack_334 = local_338;
        if (((local_380.Data <= (FScriptContainerElement *)&local_338) &&
            ((FScriptContainerElement *)&local_338 <
             local_380.Data + (longlong)local_378._4_4_ * 0x18)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar12 = (code *)swi(3);
          iVar19 = (*pcVar12)();
          return iVar19;
        }
        if ((int)local_378 == local_378._4_4_) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x418,&local_380,(int *)((longlong)&local_378 + 4));
          local_378 = CONCAT44(local_378._4_4_,iVar19);
        }
        lVar27 = (longlong)(int)local_378;
        uVar20 = uVar20 + 1;
        lVar30 = lVar30 + 0x10;
        local_398 = local_398 + -1;
        local_378 = CONCAT44(local_378._4_4_,(int)local_378 + 1);
        *(ulonglong *)(local_380.Data + lVar27 * 0x18) = CONCAT44(fStack_334,local_338);
        *(ulonglong *)(local_380.Data + lVar27 * 0x18 + 8) = CONCAT44(fStack_32c,fStack_330);
        *(ulonglong *)(local_380.Data + lVar27 * 0x18 + 0x10) = CONCAT44(fStack_324,local_328);
        afVar39 = ___xmm_3f80000000000000000000003f800000;
        afVar40 = _UNK_15076b188;
        iVar19 = local_348;
      } while (local_398 != (TVector2<float>_u_0)0x0);
    }
    FVar29.Data = local_380.Data;
    uVar13 = _UNK_1509253f8;
    uVar31 = ___xmm_40800000408000004080000040800000;
    lVar30 = (longlong)(int)local_378;
    TVar9 = this->Orientation;
    local_320.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_320.ArrayNum = (int)local_378;
    if ((int)local_378 == 0) {
      local_320.ArrayMax = (int)local_378;
      local_268.M.M[0] = afVar39;
      local_268.M.M[1] = afVar40;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,(int)local_378,0,&local_320.AllocatorInstance,(int)local_378,
                 &local_320.ArrayMax);
      memcpy(local_320.AllocatorInstance.Data,FVar29.Data,lVar30 * 0x18);
      local_268.M.M[0] = ___xmm_3f80000000000000000000003f800000;
      local_268.M.M[1] = _UNK_15076b188;
    }
    param_2 = (FGeometry *)local_370;
    local_268.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
    fVar35 = *(float *)((longlong)local_370 + 8);
    pTVar2 = (TTransform2<float> *)((longlong)local_370 + 0x1c);
    local_2d8 = (TVector2<float>_u_0)
                *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)((longlong)local_370 + 0xc))->_s_0;
    bVar6 = *(byte *)((longlong)local_370 + 0x34);
    local_370._4_4_ = fVar35 * 0.0 + local_2d8._4_4_;
    local_370._0_4_ = fVar35 * 0.0 + (float)local_2d8;
    Concatenate<TTransform2<float>_>(&local_250,&local_268,pTVar2);
    local_190 = local_370;
    local_15c = (bVar6 & 1) * '\x02' | local_15c & 0xfc;
    local_184 = 0;
    uVar20 = local_390 + 1;
    local_174[0] = local_250.M.M[0][0];
    local_174[1] = local_250.M.M[0][1];
    afStack_16c[0] = local_250.M.M[1][0];
    afStack_16c[1] = local_250.M.M[1][1];
    local_164 = local_250.Trans.field0_0x0;
    local_2a8._0_8_ = uVar31;
    local_2a8._8_8_ = uVar13;
    local_188 = fVar35;
    local_17c = FVar10;
    FSlateDrawElement::MakeGradient
              (local_340,local_390,(FPaintGeometry *)&local_190._s_0,&local_320,
               (uint)(TVar9 == (TSlateAttribute<EOrientation,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                                )0x0),None,(TVector4<float> *)&local_2a8._s_0);
    if (local_380.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_380.Data);
    }
    local_390 = uVar20;
    if (local_350.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350.Data);
    }
  }
  if (((this->Slider).Object == (SSlider *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    iVar19 = (*pcVar12)();
    return iVar19;
  }
  fVar35 = SSlider::GetValue((this->Slider).Object);
  if (((this->Slider).Object == (SSlider *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    iVar19 = (*pcVar12)();
    return iVar19;
  }
  pSVar11 = (this->Slider).Object;
  pfVar1 = &pSVar11->MaxValue;
  if ((*pfVar1 <= fVar35 && fVar35 != *pfVar1) &&
     (this->bSupportDynamicSliderMaxValue !=
      (TSlateAttribute<bool,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    if ((pSVar11 == (SSlider *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar12 = (code *)swi(3);
      iVar19 = (*pcVar12)();
      return iVar19;
    }
    pSVar11 = (this->Slider).Object;
    if ((pSVar11 == (SSlider *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar12 = (code *)swi(3);
      iVar19 = (*pcVar12)();
      return iVar19;
    }
    SSlider::SetMinAndMaxValues(pSVar11,((this->Slider).Object)->MinValue,fVar35);
  }
  if (((this->Slider).Object == (SSlider *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    iVar19 = (*pcVar12)();
    return iVar19;
  }
  fVar35 = fVar35 / ((this->Slider).Object)->MaxValue;
  if (this->Orientation ==
      (TSlateAttribute<EOrientation,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
    pIVar21 = FAppStyle::Get();
    pcVar12 = *(code **)((longlong)*pIVar21 + 0x50);
    pFVar22 = ::FName::FName(&local_2b8,"ColorPicker.SpinBoxSelectorVertical");
    pFVar23 = (FSlateBrush *)(*pcVar12)(pIVar21,*pFVar22,0,0);
    fStack_30c = fVar3 - __real_40000000;
    local_310 = this->SelectorThickness;
    uVar31 = CONCAT44(fStack_30c,local_310);
    fVar42 = fVar4;
    fVar4 = (fVar41 - (float)local_310) * fVar35;
  }
  else {
    pIVar21 = FAppStyle::Get();
    pcVar12 = *(code **)((longlong)*pIVar21 + 0x50);
    pFVar22 = ::FName::FName(&local_2b0,"ColorPicker.SpinBoxSelectorHorizontal");
    pFVar23 = (FSlateBrush *)(*pcVar12)(pIVar21,*pFVar22,0,0);
    TStack_35c = this->SelectorThickness;
    local_360 = fVar42 - __real_40000000;
    uVar31 = CONCAT44(TStack_35c,local_360);
    fVar42 = (fVar41 - (float)TStack_35c) * (fVar4 - fVar35);
  }
  EVar7 = (pFVar23->TintColor).ColorUseRule;
  pFVar24 = &pFVar23->TintColor;
  if (EVar7 != UseColor_Specified) {
    if (EVar7 == UseColor_ColorTable) {
      pFVar24 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar24);
    }
    else if ((EVar7 == UseColor_Foreground) || (EVar7 != UseColor_Foreground_Subdued)) {
      pFVar24 = (FSlateColor *)&local_368->ForegroundColor;
    }
    else {
      pFVar24 = (FSlateColor *)&local_368->SubduedForeground;
    }
  }
  local_1d8 = (pFVar24->SpecifiedColor).field0_0x0._s_0.R;
  fStack_1d4 = (pFVar24->SpecifiedColor).field0_0x0._s_0.G;
  fStack_1d0 = (pFVar24->SpecifiedColor).field0_0x0._s_0.B;
  fStack_1cc = (pFVar24->SpecifiedColor).field0_0x0._s_0.A;
  local_2cc = (TVector2<float>_u_0)
              *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)((longlong)param_2 + 0xc))->_s_0;
  fVar3 = *(float *)((longlong)param_2 + 8);
  bVar6 = *(byte *)((longlong)param_2 + 0x34);
  local_308._s_0.R = local_1d8 * (local_368->ColorAndOpacityTint).field0_0x0._s_0.R;
  local_308._s_0.G = fStack_1d4 * (local_368->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_358._4_4_ = fVar42;
  local_358._0_4_ = fVar4;
  local_308._s_0.B = fStack_1d0 * (local_368->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_370 = local_358;
  local_308._s_0.A = fStack_1cc * (local_368->ColorAndOpacityTint).field0_0x0._s_0.A;
  local_238.Trans.field0_0x0 = local_358;
  local_238.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_238.M.M[0][1] = _UNK_15076b184;
  local_238.M.M[1][0] = _UNK_15076b188;
  local_238.M.M[1][1] = _UNK_15076b18c;
  local_398._4_4_ = fVar3 * fVar42 + local_2cc._4_4_;
  local_398._0_4_ = fVar3 * fVar4 + (float)local_2cc;
  Concatenate<TTransform2<float>_>
            (&local_220,&local_238,(TTransform2<float> *)((longlong)param_2 + 0x1c));
  pFVar17 = local_340;
  local_158 = local_398;
  local_124 = (bVar6 & 1) * '\x02' | local_124 & 0xfc;
  local_14c = 0;
  local_13c[0] = local_220.M.M[0][0];
  local_13c[1] = local_220.M.M[0][1];
  afStack_134[0] = local_220.M.M[1][0];
  afStack_134[1] = local_220.M.M[1][1];
  local_12c = local_220.Trans.field0_0x0;
  local_150 = fVar3;
  local_144 = uVar31;
  FSlateDrawElement::MakeBox
            (local_340,local_390,(FPaintGeometry *)&local_158._s_0,pFVar23,None,
             (FLinearColor *)&local_308._s_0);
  if (((this->Slider).Object == (SSlider *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    iVar19 = (*pcVar12)();
    return iVar19;
  }
  bVar18 = SWidget::HasMouseCapture((SWidget *)(this->Slider).Object);
  if (bVar18) {
    pFVar23 = this->BorderActiveBrush;
  }
  else {
    if (((this->Slider).Object == (SSlider *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar12 = (code *)swi(3);
      iVar19 = (*pcVar12)();
      return iVar19;
    }
    if (*(char *)((longlong)&((this->Slider).Object)->_padding_ + 3) == '\0') {
      pFVar23 = this->BorderBrush;
    }
    else {
      pFVar23 = this->BorderHoveredBrush;
    }
  }
  EVar7 = (pFVar23->TintColor).ColorUseRule;
  pFVar24 = &pFVar23->TintColor;
  if (EVar7 != UseColor_Specified) {
    if (EVar7 == UseColor_ColorTable) {
      pFVar24 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar24);
    }
    else if ((EVar7 == UseColor_Foreground) || (EVar7 != UseColor_Foreground_Subdued)) {
      pFVar24 = (FSlateColor *)&local_368->ForegroundColor;
    }
    else {
      pFVar24 = (FSlateColor *)&local_368->SubduedForeground;
    }
  }
  fVar4 = *(float *)((longlong)param_2 + 8);
  local_2c0 = (TVector2<float>_u_0)
              *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)((longlong)param_2 + 0xc))->_s_0;
  bVar6 = *(byte *)((longlong)param_2 + 0x34);
  local_2f8._s_0.R =
       (pFVar24->SpecifiedColor).field0_0x0._s_0.R *
       (local_368->ColorAndOpacityTint).field0_0x0._s_0.R;
  local_2f8._s_0.G =
       (pFVar24->SpecifiedColor).field0_0x0._s_0.G *
       (local_368->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_358 = (TVector2<float>_u_0)0x0;
  local_2f8._s_0.B =
       (pFVar24->SpecifiedColor).field0_0x0._s_0.B *
       (local_368->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_208.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
  TStack_35c = (TSlateAttribute<float,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)
               (fVar4 * 0.0 + local_2c0._4_4_);
  local_360 = fVar4 * 0.0 + (float)local_2c0;
  local_2f8._s_0.A =
       (pFVar24->SpecifiedColor).field0_0x0._s_0.A *
       (local_368->ColorAndOpacityTint).field0_0x0._s_0.A;
  local_208.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_208.M.M[0][1] = _UNK_15076b184;
  local_208.M.M[1][0] = _UNK_15076b188;
  local_208.M.M[1][1] = _UNK_15076b18c;
  Concatenate<TTransform2<float>_>
            (&local_1f0,&local_208,(TTransform2<float> *)((longlong)param_2 + 0x1c));
  local_120._s_0.Y = (float)TStack_35c;
  local_120._s_0.X = local_360;
  local_ec = (bVar6 & 1) * '\x02' | local_ec & 0xfc;
  local_114 = 0;
  local_104[0] = local_1f0.M.M[0][0];
  local_104[1] = local_1f0.M.M[0][1];
  afStack_fc[0] = local_1f0.M.M[1][0];
  afStack_fc[1] = local_1f0.M.M[1][1];
  local_f4 = local_1f0.Trans.field0_0x0;
  local_118 = fVar4;
  local_10c = FVar10;
  FSlateDrawElement::MakeBox
            (pFVar17,local_390 + 1,(FPaintGeometry *)&local_120._s_0,pFVar23,None,
             (FLinearColor *)&local_2f8._s_0);
  return local_390 + 2;
}

// OnSpinBoxValueCommitted @ 14bd82a80

void __thiscall
SDS_ColorSlider::OnSpinBoxValueCommitted(SDS_ColorSlider *this,float param_1,Type param_2)

{
  float *pfVar1;
  SSlider *pSVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->Slider).Object == (SSlider *)0x0) {
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
  pSVar2 = (this->Slider).Object;
  pfVar1 = &pSVar2->MaxValue;
  if ((*pfVar1 <= param_1 && param_1 != *pfVar1) &&
     (this->bSupportDynamicSliderMaxValue !=
      (TSlateAttribute<bool,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    if (pSVar2 == (SSlider *)0x0) {
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
    pSVar2 = (this->Slider).Object;
    if (pSVar2 == (SSlider *)0x0) {
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
    SSlider::SetMinAndMaxValues(pSVar2,((this->Slider).Object)->MinValue,param_1);
  }
  return;
}

