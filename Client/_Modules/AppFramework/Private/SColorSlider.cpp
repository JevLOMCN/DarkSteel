// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 5

// SColorSlider @ 14301ab20

SColorSlider * __thiscall SColorSlider::SColorSlider(SColorSlider *this)

{
  TSlateAttribute<EOrientation,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar1;
  TSlateAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  *pTVar2;
  TSlateAttribute<bool,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  SColorSlider *pSVar6;
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&___7SColorSlider__6B_;
  pSVar6 = this + 1;
  pTVar1 = &this->Orientation;
  *(undefined4 *)&pTVar1->field_0x0 = 0;
  if ((pTVar1 < this) || (pSVar6 <= pTVar1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pSVar6 = (SColorSlider *)(*pcVar4)();
      return pSVar6;
    }
  }
  pTVar2 = &this->GradientColors;
  *(undefined8 *)&pTVar2->field_0x0 = 0;
  *(undefined8 *)&(this->GradientColors).field_0x8 = 0;
  if ((pTVar2 < this) || (pSVar6 <= pTVar2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pSVar6 = (SColorSlider *)(*pcVar4)();
      return pSVar6;
    }
  }
  pTVar3 = &this->bHasAlphaBackground;
  pTVar3->field_0x0 = 0;
  if ((pTVar3 < this) || (pSVar6 <= pTVar3)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pSVar6 = (SColorSlider *)(*pcVar4)();
      return pSVar6;
    }
  }
  pTVar3 = &this->bUseSRGB;
  pTVar3->field_0x0 = 0;
  if ((pTVar3 < this) || (pSVar6 <= pTVar3)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pSVar6 = (SColorSlider *)(*pcVar4)();
      return pSVar6;
    }
  }
  pTVar3 = &this->bSupportDynamicSliderMaxValue;
  pTVar3->field_0x0 = 1;
  if ((pTVar3 < this) || (pSVar6 <= pTVar3)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pSVar6 = (SColorSlider *)(*pcVar4)();
      return pSVar6;
    }
  }
  (this->Slider).Object = (SSlider *)0x0;
  (this->Slider).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->ColorSliderSize = 0.0;
  return this;
}

// ComputeDesiredSize @ 14301fb10

TVector2<double> * __thiscall
SColorSlider::ComputeDesiredSize
          (SColorSlider *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  if (this->Orientation ==
      (TSlateAttribute<EOrientation,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 207.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 20.0;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 28.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 200.0;
  return __return_storage_ptr__;
}

// Construct @ 14301fcf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SColorSlider::Construct(SColorSlider *this,FArguments *param_1)

{
  byte *pbVar1;
  TDelegate<EOrientation___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  SHorizontalBox *this_01;
  TReferenceControllerBase<1> *pTVar4;
  SSlider *pSVar5;
  FSharedReferencer<1> FVar6;
  char cVar7;
  bool bVar8;
  byte bVar9;
  EOrientation EVar10;
  bool *pbVar11;
  ISlateStyle *pIVar12;
  FName *pFVar13;
  FSlateBrush *pFVar14;
  FArguments *pFVar15;
  FSliderStyle *pFVar16;
  float *pfVar17;
  FArguments *pFVar18;
  TSharedRef<SHorizontalBox,1> *pTVar19;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar20;
  FSlotArguments *pFVar21;
  FSlot *pFVar22;
  FArguments *pFVar23;
  FTextBlockStyle *pFVar24;
  TSharedRef<STextBlock,1> *pTVar25;
  FArguments *pFVar26;
  TSharedRef<SVerticalBox,1> *pTVar27;
  TSharedRef<SSlider,1> *pTVar28;
  FArguments *pFVar29;
  FSpinBoxStyle *pFVar30;
  TAttribute<bool> *pTVar31;
  undefined8 *puVar32;
  TSharedRef<SWidget,1> *pTVar33;
  ulong64 uVar34;
  SSpinBox<float> *pSVar35;
  SSpinBox<float> *pSVar36;
  FSlot *pFVar37;
  longlong *plVar38;
  TReferenceControllerBase<1> *pTVar39;
  float fVar40;
  TReferenceControllerBase<1> *local_res8;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_2068 [4];
  FLLMScope local_2064;
  FLLMScope local_2060;
  FLLMScope local_205c;
  FLLMScope local_2058;
  FLLMScope local_2054;
  TReferenceControllerBase<1> *local_2050;
  undefined2 local_2048;
  undefined1 local_2040 [8];
  ForAnyElementType FStack_2038;
  ulonglong local_2030;
  float local_2028;
  bool local_2024;
  undefined1 local_2020 [8];
  ForAnyElementType FStack_2018;
  int local_2010;
  float local_2008;
  undefined1 local_2004;
  undefined1 local_2000 [8];
  ForAnyElementType FStack_1ff8;
  ulonglong local_1ff0;
  undefined1 local_1fe8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1fe0;
  ForAnyElementType FStack_1fd8;
  ulonglong local_1fd0;
  undefined1 local_1fc8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1fc0;
  ForAnyElementType FStack_1fb8;
  ulonglong local_1fb0;
  SSlider *local_1fa8;
  FSharedReferencer<1> local_1fa0;
  SVerticalBox *local_1f98;
  FSharedReferencer<1> local_1f90;
  FName local_1f88;
  TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs> local_1f80;
  SWidget *local_1f68;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_1f60;
  FLinearColor_u_0 local_1f48;
  uint local_1f38;
  undefined1 local_1f34;
  undefined1 local_1f30 [8];
  ForAnyElementType FStack_1f28;
  ulonglong local_1f20;
  FLinearColor_u_0 local_1f18;
  uint local_1f08;
  undefined1 local_1f04;
  undefined1 local_1f00 [8];
  ForAnyElementType FStack_1ef8;
  ulonglong local_1ef0;
  FName local_1ee8;
  undefined4 uStack_1ee0;
  undefined4 uStack_1edc;
  undefined8 local_1ed8;
  FSharedReferencer<1> local_1ed0;
  float local_1ec8;
  bool local_1ec4;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> local_1ec0;
  float local_1ea8;
  bool local_1ea4;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> local_1ea0;
  undefined4 local_1e88;
  undefined1 local_1e84;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1e80;
  undefined4 local_1e68;
  undefined1 local_1e64;
  undefined1 local_1e60;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1e58;
  undefined1 local_1e40 [4];
  FName local_1e3c;
  FMemScope local_1e30;
  FName local_1e28;
  FMemScope local_1e20;
  FSlot *local_1e18;
  FName local_1e10;
  FSlotArguments *local_1e08;
  FMemScope local_1e00;
  FName local_1df8;
  FMemScope local_1df0;
  FMemScope local_1de8;
  TAttribute<TOptional<float>_> local_1de0;
  TAttribute<TOptional<float>_> local_1db8;
  TAttribute<TOptional<float>_> local_1d90;
  TAttribute<TOptional<float>_> local_1d68;
  TAttribute<float> local_1d40;
  TAttribute<float> local_1d20;
  TAttribute<float> local_1d00;
  TAttribute<float> local_1ce0;
  TAttribute<float> local_1cc0;
  TAttribute<float> local_1ca0;
  TSharedRef<SWidget,1> local_1c80;
  TSharedRef<SWidget,1> local_1c70;
  longlong local_1c60;
  undefined8 uStack_1c58;
  FDestructionSentinel local_1c50;
  FDestructionSentinel local_1c38;
  FDestructionSentinel local_1c20;
  FDestructionSentinel local_1c08;
  FDestructionSentinel local_1bf0;
  FDestructionSentinel local_1bd8;
  FDestructionSentinel local_1bc0;
  FDestructionSentinel local_1ba8;
  undefined1 *local_1b90;
  TSharedRef<SWidget,1> local_1b88;
  TSharedRef<SSlider,1> local_1b78;
  TSharedRef<STextBlock,1> local_1b68;
  TSharedRef<SVerticalBox,1> local_1b58;
  SSlider *local_1b48;
  TReferenceControllerBase<1> *pTStack_1b40;
  FName local_1b38;
  FName local_1b30;
  FName local_1b28;
  FName local_1b20;
  FName local_1b18;
  FName local_1b10;
  FName local_1b08;
  TSharedRef<SHorizontalBox,1> local_1b00;
  FReadAccessScope local_1af0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1ad8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1ac0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1aa8;
  TSharedRef<SSlider,1> local_1a90;
  TAttribute<FText> local_1a80;
  FReadAccessScope local_1a50;
  TAttribute<FSlateFontInfo> local_1a38;
  undefined1 local_19b8 [240];
  TPanelChildren<SBoxPanel::FSlot> *local_18c8;
  int local_18c0;
  undefined1 local_18b8 [240];
  TPanelChildren<SBoxPanel::FSlot> *local_17c8;
  int local_17c0;
  TAttribute<bool> local_17b8;
  FSlateFontInfo local_1798;
  undefined1 local_1738 [16];
  FSharedReferencer<1> local_1728 [8];
  undefined4 local_16e8;
  undefined1 local_16e4;
  FArguments local_1650;
  FArguments local_12d0;
  FArguments local_10c8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_ec0;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_dc0;
  FArguments local_cc0;
  FArguments local_768;
  
  pFVar37 = (FSlot *)0x0;
  local_2050 = (TReferenceControllerBase<1> *)((ulonglong)local_2050 & 0xffffffff00000000);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,TArray<FLinearColor,TSizedDefaultAllocator<32>_>,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->GradientColors,(SWidget *)this,&param_1->_GradientColors,None);
  pbVar11 = TAttribute<bool>::Get(&param_1->_HasAlphaBackground);
  local_1fe8[0] = *pbVar11;
  local_1fd0 = 0;
  local_1fe8[1] = true;
  local_1fe0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1fd8.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->bHasAlphaBackground,(SWidget *)this,(TAttribute<bool> *)local_1fe8,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1fe0,(FWriteAccessScope *)&local_1c50);
  if (((int)local_1fd0 != 0) && (FStack_1fd8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1fd8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1fd8,0,0,0x10);
    local_1fd0 = local_1fd0 & 0xffffffff00000000;
  }
  if (local_1c50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c50.Accessor,&local_1c50);
  }
  if (FStack_1fd8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1fd8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1fe0.AccessDetector);
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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_1af0);
  if (((*(int *)&(param_1->_Orientation).Getter.field_0x10 == 0) ||
      (plVar38 = *(longlong **)&(param_1->_Orientation).Getter.field_0x8, plVar38 == (longlong *)0x0
      )) || (cVar7 = (**(code **)(*plVar38 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1af0);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1af0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_1a50);
    pFVar22 = pFVar37;
    if (*(int *)&(param_1->_Orientation).Getter.field_0x10 != 0) {
      pFVar22 = *(FSlot **)&(param_1->_Orientation).Getter.field_0x8;
    }
    EVar10 = (**(code **)(*(longlong *)pFVar22 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1a50);
    (param_1->_Orientation).Value = EVar10;
  }
  local_1fc8._0_4_ = (param_1->_Orientation).Value;
  local_1fc8[4] = true;
  local_1fb0 = 0;
  local_1fc0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1fb8.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,enum_EOrientation,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign(&this->Orientation,(SWidget *)this,(TAttribute<EOrientation> *)local_1fc8,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1fc0,(FWriteAccessScope *)&local_1c38);
  if (((int)local_1fb0 != 0) && (FStack_1fb8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1fb8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1fb8,0,0,0x10);
    local_1fb0 = local_1fb0 & 0xffffffff00000000;
  }
  if (local_1c38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c38.Accessor,&local_1c38);
  }
  if (FStack_1fb8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1fb8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1fc0.AccessDetector);
  pIVar12 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar12 + 0x50);
  pFVar13 = ::FName::FName(&local_1b08,"ColorPicker.RoundedInputBorder");
  pFVar14 = (FSlateBrush *)(*pcVar2)(pIVar12,*pFVar13,0);
  this->BorderBrush = pFVar14;
  pIVar12 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar12 + 0x50);
  pFVar13 = ::FName::FName(&local_1b10,"ColorPicker.RoundedInputBorderActive");
  pFVar14 = (FSlateBrush *)(*pcVar2)(pIVar12,*pFVar13,0);
  this->BorderActiveBrush = pFVar14;
  pIVar12 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar12 + 0x50);
  pFVar13 = ::FName::FName(&local_1b18,"ColorPicker.RoundedInputBorderHovered");
  pFVar14 = (FSlateBrush *)(*pcVar2)(pIVar12,*pFVar13,0);
  this->BorderHoveredBrush = pFVar14;
  pIVar12 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar12 + 0x50);
  pFVar13 = ::FName::FName(&local_1b20,"ColorPicker.RoundedAlphaBackground");
  pFVar14 = (FSlateBrush *)(*pcVar2)(pIVar12,*pFVar13,0);
  this->AlphaBackgroundBrush = pFVar14;
  pIVar12 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar12 + 0x88);
  ::FName::FName(&local_1b28,"ColorPicker.SmallFont");
  (*pcVar2)(pIVar12,&local_1798);
  fVar40 = __real_43480000;
  if (this->Orientation ==
      (TSlateAttribute<EOrientation,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
    fVar40 = __real_42f60000;
  }
  this->ColorSliderSize = fVar40;
  pFVar15 = SSlider::FArguments::FArguments(&local_1650);
  local_2048 = 0x100;
  local_2030 = 0;
  local_2040 = (undefined1  [8])0x0;
  FStack_2038.Data = (FScriptContainerElement *)0x0;
  (pFVar15->_IndentHandle).Value = false;
  (pFVar15->_IndentHandle).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_IndentHandle).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2040);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2040,
             (FWriteAccessScope *)&local_1c20);
  if (((int)local_2030 != 0) && (FStack_2038.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2038.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2038,0,0,0x10);
    local_2030 = local_2030 & 0xffffffff00000000;
  }
  if (local_1c20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c20.Accessor,&local_1c20);
  }
  if (FStack_2038.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2038.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2040);
  pFVar15->_Orientation = (EOrientation)this->Orientation;
  local_1f38 = local_1f38 & 0xffffff00;
  local_1f34 = 1;
  local_1f48 = FLinearColor::Transparent.field0_0x0;
  local_1f20 = 0;
  local_1f30 = (undefined1  [8])0x0;
  FStack_1f28.Data = (FScriptContainerElement *)0x0;
  (pFVar15->_SliderBarColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
  (pFVar15->_SliderBarColor).Value.ColorUseRule = (undefined1)local_1f38;
  (pFVar15->_SliderBarColor).Value.ColorTableId = local_1f38._1_1_;
  *(undefined2 *)&(pFVar15->_SliderBarColor).Value.field_0x12 = local_1f38._2_2_;
  (pFVar15->_SliderBarColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_SliderBarColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f30,
             (FWriteAccessScope *)&local_1c08);
  if (((int)local_1f20 != 0) && (FStack_1f28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1f28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f28,0,0,0x10);
    local_1f20 = local_1f20 & 0xffffffff00000000;
  }
  if (local_1c08.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c08.Accessor,&local_1c08);
  }
  if (FStack_1f28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1f28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f30);
  local_1f08 = local_1f08 & 0xffffff00;
  local_1f04 = 1;
  local_1f18 = FLinearColor::Transparent.field0_0x0;
  local_1ef0 = 0;
  local_1f00 = (undefined1  [8])0x0;
  FStack_1ef8.Data = (FScriptContainerElement *)0x0;
  (pFVar15->_SliderHandleColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
  (pFVar15->_SliderHandleColor).Value.ColorUseRule = (undefined1)local_1f08;
  (pFVar15->_SliderHandleColor).Value.ColorTableId = local_1f08._1_1_;
  *(undefined2 *)&(pFVar15->_SliderHandleColor).Value.field_0x12 = local_1f08._2_2_;
  (pFVar15->_SliderHandleColor).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_SliderHandleColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f00,
             (FWriteAccessScope *)&local_1bf0);
  if (((int)local_1ef0 != 0) && (FStack_1ef8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1ef8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1ef8,0,0,0x10);
    local_1ef0 = local_1ef0 & 0xffffffff00000000;
  }
  if (local_1bf0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1bf0.Accessor,&local_1bf0);
  }
  if (FStack_1ef8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1ef8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f00);
  pIVar12 = FAppStyle::Get();
  pFVar13 = ::FName::FName(&local_1b30,"ColorPicker.Slider");
  pFVar16 = (FSliderStyle *)
            (**(code **)((longlong)*pIVar12 + 0xa0))(pIVar12,FSliderStyle::TypeName,*pFVar13,0,1);
  if (pFVar16 == (FSliderStyle *)0x0) {
    pFVar16 = FSliderStyle::GetDefault();
  }
  pFVar15->_Style = pFVar16;
  pfVar17 = TAttribute<float>::Get(&param_1->_MinSliderValue);
  pFVar15->_MinValue = *pfVar17;
  pfVar17 = TAttribute<float>::Get(&param_1->_MaxSliderValue);
  pFVar15->_MaxValue = *pfVar17;
  pfVar17 = TAttribute<float>::Get(&param_1->_Delta);
  local_2008 = *pfVar17;
  local_2004 = 1;
  local_1ff0 = 0;
  local_2000 = (undefined1  [8])0x0;
  FStack_1ff8.Data = (FScriptContainerElement *)0x0;
  (pFVar15->_StepSize).Value = local_2008;
  (pFVar15->_StepSize).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_StepSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2000);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2000,
             (FWriteAccessScope *)&local_1bd8);
  if (((int)local_1ff0 != 0) && (FStack_1ff8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1ff8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1ff8,0,0,0x10);
    local_1ff0 = local_1ff0 & 0xffffffff00000000;
  }
  if (local_1bd8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1bd8.Accessor,&local_1bd8);
  }
  if (FStack_1ff8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1ff8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2000);
  local_2028 = (param_1->_Value).Value;
  local_2024 = (param_1->_Value).bIsSet;
  local_2020 = (undefined1  [8])0x0;
  FStack_2018.Data = (FScriptContainerElement *)0x0;
  local_2010 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_2020,
             &(param_1->_Value).Getter);
  (pFVar15->_Value).Value = local_2028;
  (pFVar15->_Value).bIsSet = local_2024;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2020);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2020,
             (FWriteAccessScope *)&local_1bc0);
  if ((local_2010 != 0) && (FStack_2018.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2018.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2018,0,0,0x10);
    local_2010 = 0;
  }
  if (local_1bc0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1bc0.Accessor,&local_1bc0);
  }
  if (FStack_2018.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2018.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2020);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar15->_OnMouseCaptureBegin,&param_1->_OnBeginSliderMovement);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar15->_OnMouseCaptureEnd,&param_1->_OnEndSliderMovement);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&pFVar15->_OnValueChanged,&param_1->_OnValueChanged);
  FLLMScope::FLLMScope(&local_2064,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1e3c = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1e30,&local_1e3c,true);
  TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>
            (&local_1f80,"SSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorSlider.cpp"
             ,0x22,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_1e30);
  FLLMScope::~FLLMScope(&local_2064);
  if (local_1f80._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1f80._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1f80._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1b48 = (this->Slider).Object;
  pTStack_1b40 = (this->Slider).SharedReferenceCount.ReferenceController;
  (this->Slider).Object = local_1f80._Widget.Object;
  (this->Slider).SharedReferenceCount.ReferenceController =
       local_1f80._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1b40);
  pSVar5 = local_1f80._Widget.Object;
  if ((local_1f80._Widget.Object == (SSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_1f80._Widget.Object,(FSlateBaseNamedArgs *)pFVar15);
  SSlider::Construct(local_1f80._Widget.Object,pFVar15);
  if ((local_1f80._Widget.Object == (SSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((local_1f80._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_1f80._Widget.Object)->_padding_ + 0x228))(local_1f80._Widget.Object)
    ;
    bVar9 = 0;
    if (cVar7 == '\0') goto LAB_1430206b3;
  }
  bVar9 = 0x20;
LAB_1430206b3:
  *(byte *)&(local_1f80._Widget.Object)->_padding_ =
       (byte)(local_1f80._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_1f80._Widget.Object)->_padding_ =
       (byte)(local_1f80._Widget.Object)->_padding_ | bVar9;
  if ((local_1f80._Widget.Object == (SSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_1f80._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_1f80._Widget.Object == (SSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar6.ReferenceController = local_1f80._Widget.SharedReferenceCount.ReferenceController;
  local_1f80._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1f80._Widget.Object = (SSlider *)0x0;
  if ((pSVar5 == (SSlider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1650._OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1650._OnControllerCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1650._OnControllerCaptureBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1650._OnMouseCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1650._OnMouseCaptureBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1650._Value.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1650._StepSize.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1650._SliderHandleColor.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1650._SliderBarColor.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1650._Locked.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1650._IndentHandle.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1650);
  pFVar18 = SHorizontalBox::FArguments::FArguments(&local_12d0);
  FLLMScope::FLLMScope(&local_2060,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1e28 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1e20,&local_1e28,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1ad8,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorSlider.cpp"
             ,0x30,local_res10);
  FMemScope::~FMemScope(&local_1e20);
  FLLMScope::~FLLMScope(&local_2060);
  pTVar19 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1ad8,&local_1b00,pFVar18);
  pTVar3 = (pTVar19->SharedReferenceCount).ReferenceController;
  this_01 = pTVar19->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b00.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ad8._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_12d0._Slots.AllocatorInstance.Data,local_12d0._Slots.ArrayNum);
  if ((FSlotArguments *)local_12d0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_12d0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_12d0);
  if (this->Orientation ==
      (TSlateAttribute<EOrientation,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
    if ((this_01 == (SHorizontalBox *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar20 = SHorizontalBox::AddSlot
                        (this_01,(FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_19b8);
    fVar40 = __real_41000000;
    local_1d40.Value = 8.0;
    local_1d40.bIsSet = true;
    local_1d40.Getter._16_8_ = 0;
    local_1d40.Getter._0_8_ = 0;
    local_1d40.Getter._8_8_ = 0;
    pFVar21 = SHorizontalBox::FSlot::FSlotArguments::MinWidth
                        ((FSlotArguments *)&pFVar20->_padding_,&local_1d40);
    local_1ca0.Value = 8.0;
    local_1ca0.bIsSet = true;
    local_1ca0.Getter._16_8_ = 0;
    local_1ca0.Getter._0_8_ = 0;
    local_1ca0.Getter._8_8_ = 0;
    pFVar21 = SHorizontalBox::FSlot::FSlotArguments::MaxWidth(pFVar21,&local_1ca0);
    local_1f68 = (SWidget *)
                 TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                           ((FSlotArgumentsMixin *)&pFVar21->field_0x18,0.0,0.0,fVar40,0.0);
    local_1f88 = (FName)SVerticalBox::FArguments::FArguments(&local_10c8);
    pFVar22 = ::operator_new(0x58);
    local_1e18 = pFVar37;
    if (pFVar22 != (FSlot *)0x0) {
      *(undefined8 *)pFVar22 = 0;
      *(undefined8 *)&pFVar22->field_0x8 = 0;
      *(undefined8 *)&pFVar22->field_0x10 = 0;
      *(undefined8 *)&pFVar22->field_0x18 = 0;
      *(undefined8 *)&pFVar22->field_0x20 = 0;
      *(undefined8 *)&pFVar22->field_0x28 = 0;
      *(undefined8 *)&pFVar22->field_0x30 = 0;
      *(undefined8 *)&pFVar22->field_0x38 = 0;
      *(undefined8 *)&pFVar22->field_0x40 = 0;
      *(undefined8 *)&pFVar22->field_0x48 = 0;
      *(undefined8 *)&pFVar22->field_0x50 = 0;
      local_1e18 = SVerticalBox::FSlot::FSlot(pFVar22);
    }
    SVerticalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)local_1738,(FSlot *)&local_1e18);
    local_16e8 = 2;
    local_16e4 = 1;
    pFVar23 = STextBlock::FArguments::FArguments(&local_cc0);
    local_1a80.Value.TextData.Reference = (param_1->_Label).Value.TextData.Reference;
    if (local_1a80.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a80.Value.TextData.Reference + 8))
                (local_1a80.Value.TextData.Reference,local_1e40);
    }
    local_1a80.Value.Flags = (param_1->_Label).Value.Flags;
    local_1a80.bIsSet = (param_1->_Label).bIsSet;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_1a80.Getter,&(param_1->_Label).Getter);
    pFVar23 = STextBlock::FArguments::Text(pFVar23,&local_1a80);
    pIVar12 = FAppStyle::Get();
    pFVar13 = ::FName::FName(&local_1b38,"SmallText");
    pFVar24 = (FTextBlockStyle *)
              (**(code **)((longlong)*pIVar12 + 0xa0))
                        (pIVar12,FTextBlockStyle::TypeName,*pFVar13,0,1);
    if (pFVar24 == (FTextBlockStyle *)0x0) {
      pFVar24 = FTextBlockStyle::GetDefault();
    }
    pFVar23->_TextStyle = pFVar24;
    local_1e84 = 1;
    local_1e88 = 0;
    local_1e80._16_8_ = 0;
    local_1e80._0_8_ = 0;
    local_1e80._8_8_ = 0;
    (pFVar23->_Justification).Value = Left;
    (pFVar23->_Justification).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_Justification).Getter,
               &local_1e80);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_1e80);
    FLLMScope::FLLMScope(&local_205c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1e10 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1de8,&local_1e10,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_1aa8,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorSlider.cpp"
               ,0x3e,local_res18);
    FMemScope::~FMemScope(&local_1de8);
    FLLMScope::~FLLMScope(&local_205c);
    pTVar25 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1aa8,&local_1b68,pFVar23);
    pTVar39 = (pTVar25->SharedReferenceCount).ReferenceController;
    local_1738._8_8_ = pTVar25->Object;
    if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1ed8 = 0;
    local_1ed0.ReferenceController = pTVar39;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(local_1738 + 0x10),&local_1ed0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1ed0.ReferenceController);
    pFVar26 = SVerticalBox::FArguments::operator+
                        ((FArguments *)local_1f88,(FSlotArguments *)local_1738);
    FLLMScope::FLLMScope(&local_2058,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1f88 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1df0,&local_1f88,true);
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
              (&local_1ac0,"SVerticalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorSlider.cpp"
               ,0x39,local_res20);
    FMemScope::~FMemScope(&local_1df0);
    FLLMScope::~FLLMScope(&local_2058);
    pTVar27 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1ac0,&local_1b58,pFVar26);
    pTVar4 = (pTVar27->SharedReferenceCount).ReferenceController;
    local_1f98 = pTVar27->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1f90.ReferenceController = pTVar4;
    if ((SVerticalBox **)&local_1f68->_padding_ != &local_1f98) {
      local_1f68->_padding_ = (longlong)local_1f98;
      local_1f98 = (SVerticalBox *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&local_1f68->_padding_,&local_1f90);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f90.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1ac0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar39);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1aa8._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_cc0);
    SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
              ((FSlotArguments *)local_1738);
    DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_10c8._Slots.AllocatorInstance.Data,local_10c8._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_10c8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_10c8._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_10c8);
    local_19b8._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
    if (local_19b8._8_8_ != 0) {
      if (local_18c0 == -1) {
        TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_18c8,(FSlotArguments *)(local_19b8 + 8));
      }
      else {
        TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                  (local_18c8,(FSlotArguments *)(local_19b8 + 8),local_18c0);
      }
    }
    SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
              ((FSlotArguments *)(local_19b8 + 8));
    if ((this_01 == (SHorizontalBox *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar20 = SHorizontalBox::AddSlot
                        (this_01,(FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_18b8);
    local_1ce0.Value = this->ColorSliderSize;
    local_1ce0.bIsSet = true;
    local_1ce0.Getter._16_8_ = 0;
    local_1ce0.Getter._0_8_ = 0;
    local_1ce0.Getter._8_8_ = 0;
    pFVar21 = SHorizontalBox::FSlot::FSlotArguments::MinWidth
                        ((FSlotArguments *)&pFVar20->_padding_,&local_1ce0);
    local_1d20.Value = this->ColorSliderSize;
    local_1d20.bIsSet = true;
    local_1d20.Getter._0_8_ = 0;
    local_1d20.Getter._8_8_ = 0;
    local_1d20.Getter._16_8_ = 0;
    pFVar21 = SHorizontalBox::FSlot::FSlotArguments::MaxWidth(pFVar21,&local_1d20);
    pTVar28 = TSharedPtr<SSlider,1>::ToSharedRef(&this->Slider,&local_1b78);
    pTVar39 = (pTVar28->SharedReferenceCount).ReferenceController;
    local_1fa8 = pTVar28->Object;
    if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1fa0.ReferenceController = pTVar39;
    if ((SSlider **)&pFVar21->field_0x8 != &local_1fa8) {
      *(SSlider **)&pFVar21->field_0x8 = local_1fa8;
      local_1fa8 = (SSlider *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar21->field_0x10,&local_1fa0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1fa0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar39);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b78.SharedReferenceCount.ReferenceController);
    local_18b8._0_8_ = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
    if (local_18b8._8_8_ != 0) {
      if (local_17c0 == -1) {
        TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_17c8,(FSlotArguments *)(local_18b8 + 8));
      }
      else {
        TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                  (local_17c8,(FSlotArguments *)(local_18b8 + 8),local_17c0);
      }
    }
    SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
              ((FSlotArguments *)(local_18b8 + 8));
    if ((this_01 == (SHorizontalBox *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar20 = SHorizontalBox::AddSlot(this_01,&local_ec0);
    local_1d00.Value = 60.0;
    local_1d00.bIsSet = true;
    local_1d00.Getter._0_8_ = 0;
    local_1d00.Getter._8_8_ = 0;
    local_1d00.Getter._16_8_ = 0;
    pFVar21 = SHorizontalBox::FSlot::FSlotArguments::MinWidth
                        ((FSlotArguments *)&pFVar20->_padding_,&local_1d00);
    local_1cc0.Value = 60.0;
    local_1cc0.bIsSet = true;
    local_1cc0.Getter._16_8_ = 0;
    local_1cc0.Getter._0_8_ = 0;
    local_1cc0.Getter._8_8_ = 0;
    pFVar21 = SHorizontalBox::FSlot::FSlotArguments::MaxWidth(pFVar21,&local_1cc0);
    local_1e08 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                           ((FSlotArgumentsMixin *)&pFVar21->field_0x18,fVar40,0.0,0.0,0.0);
    pFVar29 = SSpinBox<float>::FArguments::FArguments(&local_768);
    ::FName::FName(&local_1df8,"ColorSlider.SpinBox");
    pIVar12 = FAppStyle::Get();
    pFVar30 = ISlateStyle::GetWidgetStyle<FSpinBoxStyle>
                        (pIVar12,local_1df8,(char *)0x0,(FSpinBoxStyle *)0x0);
    pFVar29->_Style = pFVar30;
    pfVar17 = TAttribute<float>::Get(&param_1->_MinSpinBoxValue);
    local_1de0.Value.TypedValue = *pfVar17;
    local_1de0.Getter._16_8_ = 0;
    local_1de0.Value.bIsSet = true;
    local_1de0.bIsSet = true;
    local_1de0.Getter._0_8_ = 0;
    local_1de0.Getter._8_8_ = 0;
    TAttribute<TOptional<float>_>::operator=(&pFVar29->_MinValue,&local_1de0);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1de0.Getter);
    pfVar17 = TAttribute<float>::Get(&param_1->_MaxSpinBoxValue);
    local_1db8.Value.TypedValue = *pfVar17;
    local_1db8.Getter._16_8_ = 0;
    local_1db8.Value.bIsSet = true;
    local_1db8.bIsSet = true;
    local_1db8.Getter._0_8_ = 0;
    local_1db8.Getter._8_8_ = 0;
    TAttribute<TOptional<float>_>::operator=(&pFVar29->_MaxValue,&local_1db8);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1db8.Getter);
    pfVar17 = TAttribute<float>::Get(&param_1->_MinSliderValue);
    local_1d90.Value.TypedValue = *pfVar17;
    local_1d90.Value.bIsSet = true;
    local_1d90.bIsSet = true;
    local_1d90.Getter._16_8_ = 0;
    local_1d90.Getter._0_8_ = 0;
    local_1d90.Getter._8_8_ = 0;
    TAttribute<TOptional<float>_>::operator=(&pFVar29->_MinSliderValue,&local_1d90);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1d90.Getter);
    pfVar17 = TAttribute<float>::Get(&param_1->_MaxSliderValue);
    local_1d68.Value.TypedValue = *pfVar17;
    local_1d68.Getter._16_8_ = 0;
    local_1d68.Value.bIsSet = true;
    local_1d68.bIsSet = true;
    local_1d68.Getter._0_8_ = 0;
    local_1d68.Getter._8_8_ = 0;
    TAttribute<TOptional<float>_>::operator=(&pFVar29->_MaxSliderValue,&local_1d68);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1d68.Getter);
    local_1e68 = 3;
    local_1e64 = 1;
    local_1e60 = 1;
    local_1e58._16_8_ = 0;
    local_1e58._0_8_ = 0;
    local_1e58._8_8_ = 0;
    if ((TAttribute<TOptional<int>_> *)&local_1e68 != &pFVar29->_MaxFractionalDigits) {
      (pFVar29->_MaxFractionalDigits).Value.TypedValue = 3;
      (pFVar29->_MaxFractionalDigits).Value.bIsSet = true;
    }
    (pFVar29->_MaxFractionalDigits).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_MaxFractionalDigits).Getter,
               &local_1e58);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_1e58);
    local_1ea8 = (param_1->_Delta).Value;
    local_1ea4 = (param_1->_Delta).bIsSet;
    local_1ea0._0_8_ = 0;
    local_1ea0._8_8_ = 0;
    local_1ea0._16_4_ = 0;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_1ea0,&(param_1->_Delta).Getter);
    (pFVar29->_Delta).Value = local_1ea8;
    (pFVar29->_Delta).bIsSet = local_1ea4;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_Delta).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1ea0);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1ea0);
    local_1ec8 = (param_1->_Value).Value;
    local_1ec4 = (param_1->_Value).bIsSet;
    local_1ec0._0_8_ = 0;
    local_1ec0._8_8_ = 0;
    local_1ec0._16_4_ = 0;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_1ec0,&(param_1->_Value).Getter);
    (pFVar29->_Value).Value = local_1ec8;
    (pFVar29->_Value).bIsSet = local_1ec4;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_Value).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1ec0);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1ec0);
    pTVar31 = TAttribute<bool>::TAttribute<bool>
                        (&local_17b8,&param_1->_SupportDynamicSliderMaxValue);
    (pFVar29->_SupportDynamicSliderMaxValue).Value = pTVar31->Value;
    (pFVar29->_SupportDynamicSliderMaxValue).bIsSet = pTVar31->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(pFVar29->_SupportDynamicSliderMaxValue).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar31->Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar31->Getter);
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&pFVar29->_OnBeginSliderMovement,&param_1->_OnBeginSpinBoxMovement);
    TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
              (&pFVar29->_OnEndSliderMovement,&param_1->_OnEndSpinBoxMovement);
    TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
              (&pFVar29->_OnValueChanged,&param_1->_OnValueChanged);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar29->_OnValueCommitted
               ,(FWriteAccessScope *)&local_1ba8);
    local_1b90 = &(pFVar29->_OnValueCommitted).field_0x8;
    puVar32 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1b90);
    pTVar39 = local_res8;
    if (puVar32 != (undefined8 *)0x0) {
      uStack_1edc = uStack_1c58._4_4_;
      local_1ee8 = (FName)OnSpinBoxValueCommitted;
      uStack_1ee0 = 0;
      pTVar33 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1b88);
      pTVar39 = (pTVar33->SharedReferenceCount).ReferenceController;
      local_1f68 = pTVar33->Object;
      if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar32 = &
                 ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      local_2050 = pTVar39;
      uVar34 = FDelegateHandle::GenerateNewID();
      puVar32[2] = uVar34;
      *puVar32 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSColorSlider___00__A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar32[3] = local_1f68;
      puVar32[4] = pTVar39;
      if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar39->WeakReferenceCount = (atomic<int>)((int)pTVar39->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar37 = (FSlot *)&DAT_00000007;
      *(FName *)(puVar32 + 5) = local_1ee8;
      puVar32[6] = CONCAT44(uStack_1edc,uStack_1ee0);
      pTVar39 = local_2050;
    }
    if (((ulonglong)pFVar37 & 4) != 0) {
      pFVar37 = (FSlot *)(ulonglong)((uint)pFVar37 & 0xfffffffb);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar39);
    }
    if (((ulonglong)pFVar37 & 2) != 0) {
      pFVar37 = (FSlot *)(ulonglong)((uint)pFVar37 & 0xfffffffd);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar39);
    }
    if (((ulonglong)pFVar37 & 1) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b88.SharedReferenceCount.ReferenceController);
    }
    if (local_1ba8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ba8.Accessor,&local_1ba8);
    }
    FSlateFontInfo::FSlateFontInfo(&local_1a38.Value,&local_1798);
    local_1a38.bIsSet = true;
    local_1a38.Getter._16_8_ = 0;
    local_1a38.Getter._0_8_ = 0;
    local_1a38.Getter._8_8_ = 0;
    TAttribute<FSlateFontInfo>::operator=(&pFVar29->_Font,&local_1a38);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1a38.Getter);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a38.Value.CompositeFont.SharedReferenceCount.ReferenceController);
    FLLMScope::FLLMScope(&local_2054,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1ee8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1e00,&local_1ee8,true);
    TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
              (&local_1f60,"SSpinBox<float>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorSlider.cpp"
               ,0x51,local_2068);
    FMemScope::~FMemScope(&local_1e00);
    FLLMScope::~FLLMScope(&local_2054);
    pSVar35 = TSharedPtr<SSpinBox<float>,1>::operator->(&local_1f60._Widget);
    SWidget::SWidgetConstruct((SWidget *)pSVar35,(FSlateBaseNamedArgs *)pFVar29);
    pSVar35 = local_1f60._Widget.Object;
    SSpinBox<float>::Construct(local_1f60._Widget.Object,pFVar29);
    pSVar36 = TSharedPtr<SSpinBox<float>,1>::operator->(&local_1f60._Widget);
    SWidget::CacheVolatility((SWidget *)pSVar36);
    pSVar36 = TSharedPtr<SSpinBox<float>,1>::operator->(&local_1f60._Widget);
    pbVar1 = (byte *)((longlong)&pSVar36->_padding_ + 1);
    *pbVar1 = *pbVar1 | 4;
    if ((local_1f60._Widget.Object == (SSpinBox<float> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x416,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar6.ReferenceController = local_1f60._Widget.SharedReferenceCount.ReferenceController;
    local_1f60._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    local_1f60._Widget.Object = (SSpinBox<float> *)0x0;
    if ((pSVar35 == (SSpinBox<float> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x26c,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_1c80.Object = (SWidget *)pSVar35;
    local_1c80.SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar6.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)local_1e08,&local_1c80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar6.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar6.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SSpinBox<float>::FArguments::~FArguments(&local_768);
    pFVar20 = &local_ec0;
  }
  else {
    if ((this_01 == (SHorizontalBox *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar20 = SHorizontalBox::AddSlot(this_01,&local_dc0);
    pTVar28 = TSharedPtr<SSlider,1>::ToSharedRef(&this->Slider,&local_1a90);
    pTVar39 = (pTVar28->SharedReferenceCount).ReferenceController;
    local_1c70.Object = (SWidget *)pTVar28->Object;
    if (pTVar39 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar39->SharedReferenceCount = (atomic<int>)((int)pTVar39->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1c70.SharedReferenceCount.ReferenceController = pTVar39;
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)&pFVar20->_padding_,&local_1c70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar39);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a90.SharedReferenceCount.ReferenceController);
    pFVar20 = &local_dc0;
  }
  SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(pFVar20);
  if ((this_01 == (SHorizontalBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_01 == (SHorizontalBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar38 = &this->_padding_;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar38);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar38);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1c60 = this->_padding_;
  uStack_1c58 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)this_01;
  this->_padding_ = (longlong)pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(uStack_1c58);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1798.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// OnPaint @ 14303b540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SColorSlider::OnPaint
          (SColorSlider *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  ESlateColorStylingMode EVar7;
  int iVar8;
  TSlateAttribute<EOrientation,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar9;
  void *_Src;
  SSlider *pSVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  TVector2<float>_u_0 TVar15;
  FSlateWindowElementList *pFVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  ISlateStyle *pIVar20;
  FName *pFVar21;
  FSlateBrush *pFVar22;
  FSlateColor *pFVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  uint uVar27;
  ForAnyElementType FVar28;
  longlong lVar29;
  undefined8 uVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float afVar38 [2];
  float afVar39 [2];
  float fVar40;
  undefined1 auStackY_3d8 [32];
  byte local_388;
  byte bStack_387;
  byte bStack_386;
  byte bStack_385;
  uint local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  ForAnyElementType local_360;
  undefined8 local_358;
  FWidgetStyle *local_350;
  ForAnyElementType local_348;
  int local_340;
  int local_33c;
  float local_338;
  float fStack_334;
  FSlateWindowElementList *local_330;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> local_310;
  float local_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  float fStack_2f4;
  FLinearColor_u_0 local_2f0;
  FLinearColor_u_0 local_2e0;
  TVector2<float>_u_0_s_0 local_2cc;
  TVector2<float>_u_0_s_0 local_2c0;
  TVector2<float>_u_0_s_0 local_2b4;
  TVector2<float>_u_0_s_0 local_2a8;
  FName local_2a0;
  FName local_298 [2];
  TVector4<float>_u_0 local_288;
  TTransform2<float> local_278;
  TTransform2<float> local_260;
  TTransform2<float> local_248;
  TTransform2<float> local_230;
  TTransform2<float> local_218;
  TTransform2<float> local_200;
  TTransform2<float> local_1e8;
  TTransform2<float> local_1d0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  TVector2<float>_u_0 local_1a8;
  float local_1a0;
  undefined8 local_19c;
  undefined8 local_194;
  float local_18c [2];
  float afStack_184 [2];
  TVector2<float>_u_0 local_17c;
  byte local_174;
  TVector2<float>_u_0 local_170;
  float local_168;
  undefined8 local_164;
  undefined8 local_15c;
  float local_154 [2];
  float afStack_14c [2];
  TVector2<float>_u_0 local_144;
  byte local_13c;
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
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_350 = param_6;
  local_330 = param_4;
  iVar18 = SCompoundWidget::OnPaint
                     ((SCompoundWidget *)this,param_1,param_2,param_3,param_4,param_5,param_6,
                      param_7);
  afVar39 = _UNK_15076b188;
  afVar38 = ___xmm_3f80000000000000000000003f800000;
  fVar5 = __real_3f800000;
  uVar19 = iVar18 + 1;
  fVar40 = 0.0;
  fVar2 = this->ColorSliderSize;
  local_388 = 0;
  bStack_387 = 0;
  bStack_386 = 0;
  bStack_385 = 0;
  if (this->Orientation ==
      (TSlateAttribute<EOrientation,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
    local_368._4_4_ = SUB84(param_2->Size,4);
    uStack_2fc = local_368._4_4_;
    uVar30 = CONCAT44(local_368._4_4_,fVar2);
    local_388 = SUB41(__real_41800000,0);
    bStack_387 = (byte)((uint)__real_41800000 >> 8);
    bStack_386 = (byte)((uint)__real_41800000 >> 0x10);
    bStack_385 = (byte)((uint)__real_41800000 >> 0x18);
    fVar40 = __real_41800000;
    local_300 = fVar2;
  }
  else {
    local_368._0_4_ = SUB84(param_2->Size,0);
    local_2f8 = (undefined4)local_368;
    uVar30 = CONCAT44(fVar2,(undefined4)local_368);
    fStack_2f4 = fVar2;
  }
  iVar8 = *(int *)&(this->GradientColors).field_0x8;
  local_378 = (TVector2<float>_u_0)(longlong)iVar8;
  fVar2 = (float)CONCAT13(bStack_385,CONCAT12(bStack_386,CONCAT11(bStack_387,local_388)));
  TVar15._s_0.Y = 0.0;
  TVar15._s_0.X = fVar2;
  local_380 = uVar19;
  if (1 < iVar8) {
    if (this->bHasAlphaBackground !=
        (TSlateAttribute<bool,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
      fVar34 = param_2->Scale;
      local_2cc = (param_2->AbsolutePosition).field0_0x0._s_0;
      pFVar22 = this->AlphaBackgroundBrush;
      fVar33 = fVar2 * fVar34 + local_2cc.X;
      local_278.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
      local_278.M.M[0][1] = _UNK_15076b184;
      local_278.M.M[1][0] = _UNK_15076b188;
      local_278.M.M[1][1] = _UNK_15076b18c;
      fVar35 = fVar34 * 0.0 + local_2cc.Y;
      local_388 = SUB41(fVar33,0);
      bStack_387 = (byte)((uint)fVar33 >> 8);
      bStack_386 = (byte)((uint)fVar33 >> 0x10);
      bStack_385 = (byte)((uint)fVar33 >> 0x18);
      local_278.Trans.field0_0x0 = TVar15;
      Concatenate<TTransform2<float>_>(&local_260,&local_278,&param_2->AccumulatedRenderTransform);
      local_1a8._s_0.Y = fVar35;
      local_1a8._s_0.X = fVar33;
      local_174 = param_2->bHasRenderTransform * '\x02' | local_174 & 0xfc;
      local_19c = 0;
      local_380 = iVar18 + 2;
      local_18c[0] = local_260.M.M[0][0];
      local_18c[1] = local_260.M.M[0][1];
      afStack_184[0] = local_260.M.M[1][0];
      afStack_184[1] = local_260.M.M[1][1];
      local_17c = local_260.Trans.field0_0x0;
      local_1a0 = fVar34;
      local_194 = uVar30;
      FSlateDrawElement::MakeBox
                (local_330,uVar19,(FPaintGeometry *)&local_1a8._s_0,pFVar22,None,
                 &FLinearColor::White);
    }
    local_340 = *(int *)&(this->GradientColors).field_0x8;
    lVar29 = (longlong)local_340;
    _Src = *(void **)&this->GradientColors;
    local_348.Data = (FScriptContainerElement *)0x0;
    if (local_340 == 0) {
      local_33c = 0;
      iVar18 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_340,0,&local_348,local_340,&local_33c);
      memcpy(local_348.Data,_Src,lVar29 << 4);
      afVar38 = ___xmm_3f80000000000000000000003f800000;
      afVar39 = _UNK_15076b188;
      iVar18 = local_340;
    }
    if ((this->Orientation ==
         (TSlateAttribute<EOrientation,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x1) &&
       (lVar29 = (longlong)(iVar18 / 2), 0 < iVar18 / 2)) {
      pFVar25 = local_348.Data + (longlong)(iVar18 + -1) * 0x10;
      FVar28.Data = local_348.Data;
      do {
        uVar12 = *(undefined8 *)(pFVar25 + 8);
        uVar13 = *(undefined8 *)FVar28.Data;
        uVar14 = *(undefined8 *)(FVar28.Data + 8);
        *(undefined8 *)FVar28.Data = *(undefined8 *)pFVar25;
        *(undefined8 *)(FVar28.Data + 8) = uVar12;
        FVar28.Data = FVar28.Data + 0x10;
        *(undefined8 *)pFVar25 = uVar13;
        *(undefined8 *)(pFVar25 + 8) = uVar14;
        lVar29 = lVar29 + -1;
        pFVar25 = pFVar25 + -0x10;
        iVar18 = local_340;
      } while (lVar29 != 0);
    }
    fVar35 = __real_437f0000;
    fVar33 = __real_3b808081;
    fVar34 = __real_3f000000;
    uVar19 = 0;
    local_360.Data = (FScriptContainerElement *)0x0;
    local_358 = 0;
    if (0 < iVar8) {
      lVar29 = 0;
      do {
        uVar24 = 0;
        if ((int)uVar19 < iVar18) {
          uVar24 = ~uVar19 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          iVar18 = (*pcVar11)();
          return iVar18;
        }
        pFVar25 = local_348.Data + lVar29;
        if (this->bUseSRGB ==
            (TSlateAttribute<bool,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
          fVar3 = *(float *)(pFVar25 + 4);
          fVar37 = *(float *)(pFVar25 + 0xc);
          if (*(float *)(pFVar25 + 0xc) <= 0.0) {
            fVar37 = 0.0;
          }
          if (fVar3 <= 0.0) {
            fVar3 = 0.0;
          }
          fVar4 = *(float *)(pFVar25 + 8);
          fVar36 = *(float *)pFVar25;
          if (*(float *)pFVar25 <= 0.0) {
            fVar36 = 0.0;
          }
          if (fVar4 <= 0.0) {
            fVar4 = 0.0;
          }
          if (fVar5 <= fVar37) {
            fVar37 = fVar5;
          }
          if (fVar5 <= fVar3) {
            fVar3 = fVar5;
          }
          if (fVar5 <= fVar36) {
            fVar36 = fVar5;
          }
          if (fVar5 <= fVar4) {
            fVar4 = fVar5;
          }
          uVar32 = (uint)(fVar37 * fVar35 + fVar34);
          uVar24 = (uint)(fVar4 * fVar35 + fVar34);
          bStack_385 = (byte)uVar32;
          uVar27 = (uint)(fVar3 * fVar35 + fVar34);
          local_388 = (byte)uVar24;
          uVar31 = (uint)(fVar36 * fVar35 + fVar34);
          bStack_387 = (byte)uVar27;
          bStack_386 = (byte)uVar31;
        }
        else {
          FLinearColor::ToFColorSRGB((FLinearColor *)pFVar25);
          uVar32 = (uint)bStack_385;
          uVar31 = (uint)bStack_386;
          uVar27 = (uint)bStack_387;
          uVar24 = (uint)local_388;
        }
        local_328 = (float)(int)((float)(int)uVar19 * (fVar5 / (float)(iVar8 + -1)) *
                                this->ColorSliderSize);
        fStack_320 = FLinearColor::sRGBToLinearTable[uVar31 & 0xff];
        fStack_31c = FLinearColor::sRGBToLinearTable[uVar27 & 0xff];
        local_318 = FLinearColor::sRGBToLinearTable[uVar24 & 0xff];
        fStack_314 = (float)(uVar32 & 0xff) * fVar33;
        fStack_324 = local_328;
        if (((local_360.Data <= (FScriptContainerElement *)&local_328) &&
            ((FScriptContainerElement *)&local_328 <
             local_360.Data + (longlong)local_358._4_4_ * 0x18)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          iVar18 = (*pcVar11)();
          return iVar18;
        }
        if ((int)local_358 == local_358._4_4_) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x418,&local_360,(int *)((longlong)&local_358 + 4));
          local_358 = CONCAT44(local_358._4_4_,iVar18);
        }
        lVar26 = (longlong)(int)local_358;
        uVar19 = uVar19 + 1;
        lVar29 = lVar29 + 0x10;
        local_378 = local_378 + -1;
        local_358 = CONCAT44(local_358._4_4_,(int)local_358 + 1);
        *(ulonglong *)(local_360.Data + lVar26 * 0x18) = CONCAT44(fStack_324,local_328);
        *(ulonglong *)(local_360.Data + lVar26 * 0x18 + 8) = CONCAT44(fStack_31c,fStack_320);
        *(ulonglong *)(local_360.Data + lVar26 * 0x18 + 0x10) = CONCAT44(fStack_314,local_318);
        afVar38 = ___xmm_3f80000000000000000000003f800000;
        afVar39 = _UNK_15076b188;
        iVar18 = local_340;
      } while (local_378 != (TVector2<float>_u_0)0x0);
    }
    FVar28.Data = local_360.Data;
    uVar13 = _UNK_1509253f8;
    uVar12 = ___xmm_40800000408000004080000040800000;
    lVar29 = (longlong)(int)local_358;
    TVar9 = this->Orientation;
    local_310.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_310.ArrayNum = (int)local_358;
    if ((int)local_358 == 0) {
      local_310.ArrayMax = (int)local_358;
      local_248.M.M[0] = afVar38;
      local_248.M.M[1] = afVar39;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,(int)local_358,0,&local_310.AllocatorInstance,(int)local_358,
                 &local_310.ArrayMax);
      memcpy(local_310.AllocatorInstance.Data,FVar28.Data,lVar29 * 0x18);
      local_248.M.M[0] = ___xmm_3f80000000000000000000003f800000;
      local_248.M.M[1] = _UNK_15076b188;
    }
    fVar34 = param_2->Scale;
    local_2c0 = (param_2->AbsolutePosition).field0_0x0._s_0;
    local_370._4_4_ = fVar34 * 0.0 + local_2c0.Y;
    local_370._0_4_ = fVar34 * fVar2 + local_2c0.X;
    local_248.Trans.field0_0x0 = TVar15;
    Concatenate<TTransform2<float>_>(&local_230,&local_248,&param_2->AccumulatedRenderTransform);
    local_170 = local_370;
    local_13c = param_2->bHasRenderTransform * '\x02' | local_13c & 0xfc;
    local_164 = 0;
    uVar19 = local_380 + 1;
    local_154[0] = local_230.M.M[0][0];
    local_154[1] = local_230.M.M[0][1];
    afStack_14c[0] = local_230.M.M[1][0];
    afStack_14c[1] = local_230.M.M[1][1];
    local_144 = local_230.Trans.field0_0x0;
    local_288._0_8_ = uVar12;
    local_288._8_8_ = uVar13;
    local_168 = fVar34;
    local_15c = uVar30;
    FSlateDrawElement::MakeGradient
              (local_330,local_380,(FPaintGeometry *)&local_170._s_0,&local_310,
               (uint)(TVar9 == (TSlateAttribute<EOrientation,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                                )0x0),None,(TVector4<float> *)&local_288._s_0);
    if (local_360.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_360.Data);
    }
    local_380 = uVar19;
    if (local_348.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data);
    }
  }
  if (((this->Slider).Object == (SSlider *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar11 = (code *)swi(3);
    iVar18 = (*pcVar11)();
    return iVar18;
  }
  fVar34 = SSlider::GetValue((this->Slider).Object);
  if (((this->Slider).Object == (SSlider *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar11 = (code *)swi(3);
    iVar18 = (*pcVar11)();
    return iVar18;
  }
  pSVar10 = (this->Slider).Object;
  pfVar1 = &pSVar10->MaxValue;
  if ((*pfVar1 <= fVar34 && fVar34 != *pfVar1) &&
     (this->bSupportDynamicSliderMaxValue !=
      (TSlateAttribute<bool,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    if ((pSVar10 == (SSlider *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      iVar18 = (*pcVar11)();
      return iVar18;
    }
    pSVar10 = (this->Slider).Object;
    if ((pSVar10 == (SSlider *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      iVar18 = (*pcVar11)();
      return iVar18;
    }
    SSlider::SetMinAndMaxValues(pSVar10,((this->Slider).Object)->MinValue,fVar34);
  }
  if (((this->Slider).Object == (SSlider *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar11 = (code *)swi(3);
    iVar18 = (*pcVar11)();
    return iVar18;
  }
  fVar34 = fVar34 / ((this->Slider).Object)->MaxValue;
  if (this->Orientation ==
      (TSlateAttribute<EOrientation,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) {
    pIVar20 = FAppStyle::Get();
    pcVar11 = *(code **)((longlong)*pIVar20 + 0x50);
    pFVar21 = ::FName::FName(&local_2a0,"ColorPicker.SpinBoxSelectorVertical");
    pFVar22 = (FSlateBrush *)(*pcVar11)(pIVar20,*pFVar21,0,0);
    local_338 = 3.0;
    fStack_334 = 18.0;
    local_368 = 0x4190000040400000;
    local_370._4_4_ = fVar5;
    fVar5 = (this->ColorSliderSize - 3.0) * fVar34;
  }
  else {
    pIVar20 = FAppStyle::Get();
    pcVar11 = *(code **)((longlong)*pIVar20 + 0x50);
    pFVar21 = ::FName::FName(local_298,"ColorPicker.SpinBoxSelectorHorizontal");
    pFVar22 = (FSlateBrush *)(*pcVar11)(pIVar20,*pFVar21,0,0);
    local_368 = 0x4040000041d00000;
    local_370._4_4_ = (this->ColorSliderSize - 3.0) * (fVar5 - fVar34);
  }
  EVar7 = (pFVar22->TintColor).ColorUseRule;
  pFVar23 = &pFVar22->TintColor;
  if (EVar7 != UseColor_Specified) {
    if (EVar7 == UseColor_ColorTable) {
      pFVar23 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar23);
    }
    else if ((EVar7 == UseColor_Foreground) || (EVar7 != UseColor_Foreground_Subdued)) {
      pFVar23 = (FSlateColor *)&local_350->ForegroundColor;
    }
    else {
      pFVar23 = (FSlateColor *)&local_350->SubduedForeground;
    }
  }
  local_1b8 = (pFVar23->SpecifiedColor).field0_0x0._s_0.R;
  fStack_1b4 = (pFVar23->SpecifiedColor).field0_0x0._s_0.G;
  fStack_1b0 = (pFVar23->SpecifiedColor).field0_0x0._s_0.B;
  fStack_1ac = (pFVar23->SpecifiedColor).field0_0x0._s_0.A;
  local_2b4 = (param_2->AbsolutePosition).field0_0x0._s_0;
  fVar34 = param_2->Scale;
  local_2f0._s_0.R = local_1b8 * (local_350->ColorAndOpacityTint).field0_0x0._s_0.R;
  local_2f0._s_0.G = fStack_1b4 * (local_350->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_370._0_4_ = fVar5 + fVar40;
  local_2f0._s_0.B = fStack_1b0 * (local_350->ColorAndOpacityTint).field0_0x0._s_0.B;
  local_2f0._s_0.A = fStack_1ac * (local_350->ColorAndOpacityTint).field0_0x0._s_0.A;
  local_218.Trans.field0_0x0 = local_370;
  local_218.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_218.M.M[0][1] = _UNK_15076b184;
  local_218.M.M[1][0] = _UNK_15076b188;
  local_218.M.M[1][1] = _UNK_15076b18c;
  local_378._4_4_ = fVar34 * (float)local_370._4_4_ + local_2b4.Y;
  local_378._0_4_ = fVar34 * (fVar5 + fVar40) + local_2b4.X;
  Concatenate<TTransform2<float>_>(&local_200,&local_218,&param_2->AccumulatedRenderTransform);
  pFVar16 = local_330;
  local_138 = local_378;
  local_104 = param_2->bHasRenderTransform * '\x02' | local_104 & 0xfc;
  local_12c = 0;
  local_11c[0] = local_200.M.M[0][0];
  local_11c[1] = local_200.M.M[0][1];
  afStack_114[0] = local_200.M.M[1][0];
  afStack_114[1] = local_200.M.M[1][1];
  local_10c = local_200.Trans.field0_0x0;
  local_130 = fVar34;
  local_124 = local_368;
  FSlateDrawElement::MakeBox
            (local_330,local_380,(FPaintGeometry *)&local_138._s_0,pFVar22,None,
             (FLinearColor *)&local_2f0._s_0);
  if (((this->Slider).Object == (SSlider *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar11 = (code *)swi(3);
    iVar18 = (*pcVar11)();
    return iVar18;
  }
  bVar17 = SWidget::HasMouseCapture((SWidget *)(this->Slider).Object);
  if (bVar17) {
    pFVar22 = this->BorderActiveBrush;
  }
  else {
    if (((this->Slider).Object == (SSlider *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      iVar18 = (*pcVar11)();
      return iVar18;
    }
    if (*(char *)((longlong)&((this->Slider).Object)->_padding_ + 3) == '\0') {
      pFVar22 = this->BorderBrush;
    }
    else {
      pFVar22 = this->BorderHoveredBrush;
    }
  }
  EVar7 = (pFVar22->TintColor).ColorUseRule;
  pFVar23 = &pFVar22->TintColor;
  if (EVar7 != UseColor_Specified) {
    if (EVar7 == UseColor_ColorTable) {
      pFVar23 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar23);
    }
    else if ((EVar7 == UseColor_Foreground) || (EVar7 != UseColor_Foreground_Subdued)) {
      pFVar23 = (FSlateColor *)&local_350->ForegroundColor;
    }
    else {
      pFVar23 = (FSlateColor *)&local_350->SubduedForeground;
    }
  }
  fVar5 = param_2->Scale;
  local_2a8 = (param_2->AbsolutePosition).field0_0x0._s_0;
  local_2e0._s_0.R =
       (pFVar23->SpecifiedColor).field0_0x0._s_0.R *
       (local_350->ColorAndOpacityTint).field0_0x0._s_0.R;
  local_2e0._s_0.G =
       (pFVar23->SpecifiedColor).field0_0x0._s_0.G *
       (local_350->ColorAndOpacityTint).field0_0x0._s_0.G;
  local_2e0._s_0.B =
       (pFVar23->SpecifiedColor).field0_0x0._s_0.B *
       (local_350->ColorAndOpacityTint).field0_0x0._s_0.B;
  fStack_334 = fVar5 * 0.0 + local_2a8.Y;
  local_338 = fVar5 * fVar2 + local_2a8.X;
  local_2e0._s_0.A =
       (pFVar23->SpecifiedColor).field0_0x0._s_0.A *
       (local_350->ColorAndOpacityTint).field0_0x0._s_0.A;
  local_1e8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
  local_1e8.M.M[0][1] = _UNK_15076b184;
  local_1e8.M.M[1][0] = _UNK_15076b188;
  local_1e8.M.M[1][1] = _UNK_15076b18c;
  local_1e8.Trans.field0_0x0 = TVar15;
  Concatenate<TTransform2<float>_>(&local_1d0,&local_1e8,&param_2->AccumulatedRenderTransform);
  local_100._s_0.Y = fStack_334;
  local_100._s_0.X = local_338;
  local_cc = param_2->bHasRenderTransform * '\x02' | local_cc & 0xfc;
  local_f4 = 0;
  local_e4[0] = local_1d0.M.M[0][0];
  local_e4[1] = local_1d0.M.M[0][1];
  afStack_dc[0] = local_1d0.M.M[1][0];
  afStack_dc[1] = local_1d0.M.M[1][1];
  local_d4 = local_1d0.Trans.field0_0x0;
  local_f8 = fVar5;
  local_ec = uVar30;
  FSlateDrawElement::MakeBox
            (pFVar16,local_380 + 1,(FPaintGeometry *)&local_100._s_0,pFVar22,None,
             (FLinearColor *)&local_2e0._s_0);
  return local_380 + 2;
}

// OnSpinBoxValueCommitted @ 14303c440

void __thiscall SColorSlider::OnSpinBoxValueCommitted(SColorSlider *this,float param_1,Type param_2)

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

