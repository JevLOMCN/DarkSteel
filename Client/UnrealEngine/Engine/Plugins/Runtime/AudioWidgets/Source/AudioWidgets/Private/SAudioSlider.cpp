// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 9

// SAudioSlider @ 14d8b7890

/* WARNING: Enum "Type": Some values do not have unique names */

SAudioSlider * __thiscall SAudioSlider::SAudioSlider(SAudioSlider *this)

{
  undefined8 local_res8;
  
  SAudioSliderBase::SAudioSliderBase((SAudioSliderBase *)this);
  this->_padding_ = (longlong)&___7SAudioSlider__6B_;
  (this->LinToOutputCurve).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->LinToOutputCurve).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->OutputToLinCurve).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->OutputToLinCurve).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~SAudioSlider @ 14d8c03c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioSlider::~SAudioSlider(SAudioSlider *this)

{
  this->_padding_ = (longlong)&___7SAudioSlider__6B_;
  SAudioSliderBase::~SAudioSliderBase((SAudioSliderBase *)this);
  return;
}

// Construct @ 14d8ebc40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SAudioSlider::Construct(SAudioSlider *this,FArguments *param_1)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidgetSwitcher *pSVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  SSlider *pSVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  char cVar12;
  byte bVar13;
  ISlateStyle *pIVar14;
  FName *pFVar15;
  FAudioSliderStyle *pFVar16;
  FSlateColor *pFVar17;
  FSlateBrush *pFVar18;
  FArguments *pFVar19;
  FArguments *pFVar20;
  EOrientation *pEVar21;
  undefined8 *puVar22;
  ulong64 uVar23;
  FArguments *pFVar24;
  TSharedRef<SWidgetSwitcher,1> *pTVar25;
  longlong *plVar26;
  T0RequiredArgs aTStackX_8 [8];
  T0RequiredArgs aTStackX_10 [8];
  T0RequiredArgs aTStackX_18 [8];
  T0RequiredArgs aTStackX_20 [8];
  FLLMScope FStack_f28;
  FLLMScope FStack_f24;
  FLLMScope FStack_f20;
  FLLMScope FStack_f1c;
  EOrientation EStack_f18;
  undefined1 uStack_f14;
  undefined1 auStack_f10 [8];
  ForAnyElementType FStack_f08;
  ulonglong uStack_f00;
  TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs> TStack_ef8;
  float fStack_ee0;
  float fStack_edc;
  float fStack_ed8;
  bool bStack_ed4;
  undefined1 auStack_ed0 [8];
  void *pvStack_ec8;
  undefined4 uStack_ec0;
  undefined2 uStack_eb8;
  undefined1 auStack_eb0 [8];
  void *pvStack_ea8;
  undefined8 uStack_ea0;
  TSharedPtr<SAudioTextBox,1> TStack_e98;
  SWidgetSwitcher *pSStack_e88;
  TReferenceControllerBase<1> *pTStack_e80;
  longlong *plStack_e78;
  undefined1 uStack_e70;
  undefined1 auStack_e68 [8];
  void *pvStack_e60;
  undefined8 uStack_e58;
  FSlateBrush *pFStack_e50;
  undefined1 uStack_e48;
  undefined1 auStack_e40 [8];
  void *pvStack_e38;
  undefined8 uStack_e30;
  FName FStack_e28;
  FName FStack_e20;
  FMemScope FStack_e18;
  FName FStack_e10;
  FMemScope FStack_e08;
  FName FStack_e00;
  FMemScope FStack_df8;
  FName FStack_df0;
  FMemScope FStack_de8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> TStack_de0;
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs> TStack_dc8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> TStack_db0;
  FLinearColor_u_0 FStack_d98;
  FLinearColor_u_0 FStack_d88;
  FDestructionSentinel FStack_d78;
  FDestructionSentinel FStack_d60;
  undefined1 *puStack_d48;
  FDestructionSentinel FStack_d40;
  undefined1 *puStack_d28;
  FDestructionSentinel FStack_d20;
  undefined1 *puStack_d08;
  FLinearColor_u_0 FStack_d00;
  undefined4 uStack_cf0;
  undefined1 uStack_cec;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> TStack_ce8;
  TSharedRef<SImage,1> TStack_cd0;
  TSharedRef<SImage,1> TStack_cc0;
  longlong lStack_cb0;
  TReferenceControllerBase<1> *pTStack_ca8;
  FName FStack_ca0;
  longlong lStack_c98;
  TReferenceControllerBase<1> *pTStack_c90;
  TSharedRef<SAudioTextBox,1> TStack_c88;
  TSharedRef<SWidgetSwitcher,1> TStack_c78;
  longlong lStack_c68;
  TReferenceControllerBase<1> *pTStack_c60;
  undefined **appuStack_c58 [20];
  TReferenceControllerBase<1> *pTStack_bb8;
  FArguments FStack_ba8;
  FArguments FStack_920;
  FArguments FStack_678;
  FArguments FStack_3d0;
  
  this->_padding_ = (longlong)param_1->_Style;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)&this->_padding_,
             &param_1->_OnValueChanged);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)&this->_padding_,
             &param_1->_OnValueCommitted);
  *(float *)&this->_padding_ = (param_1->_SliderValue).Value;
  *(bool *)((longlong)&this->_padding_ + 4) = (param_1->_SliderValue).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_,
             &(param_1->_SliderValue).Getter);
  lVar8 = *(longlong *)
           ((longlong)&(param_1->_SliderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  this->_padding_ = *(longlong *)&(param_1->_SliderBackgroundColor).Value.SpecifiedColor.field0_0x0;
  this->_padding_ = lVar8;
  *(undefined4 *)&this->_padding_ =
       *(undefined4 *)&(param_1->_SliderBackgroundColor).Value.ColorUseRule;
  *(bool *)((longlong)&this->_padding_ + 4) = (param_1->_SliderBackgroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_,
             &(param_1->_SliderBackgroundColor).Getter);
  lVar8 = *(longlong *)((longlong)&(param_1->_SliderBarColor).Value.SpecifiedColor.field0_0x0 + 8);
  this->_padding_ = *(longlong *)&(param_1->_SliderBarColor).Value.SpecifiedColor.field0_0x0;
  this->_padding_ = lVar8;
  *(undefined4 *)&this->_padding_ = *(undefined4 *)&(param_1->_SliderBarColor).Value.ColorUseRule;
  *(bool *)((longlong)&this->_padding_ + 4) = (param_1->_SliderBarColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_,
             &(param_1->_SliderBarColor).Getter);
  lVar8 = *(longlong *)((longlong)&(param_1->_SliderThumbColor).Value.SpecifiedColor.field0_0x0 + 8)
  ;
  this->_padding_ = *(longlong *)&(param_1->_SliderThumbColor).Value.SpecifiedColor.field0_0x0;
  this->_padding_ = lVar8;
  *(undefined4 *)&this->_padding_ = *(undefined4 *)&(param_1->_SliderThumbColor).Value.ColorUseRule;
  *(bool *)((longlong)&this->_padding_ + 4) = (param_1->_SliderThumbColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_,
             &(param_1->_SliderThumbColor).Getter);
  lVar8 = *(longlong *)
           ((longlong)&(param_1->_WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  this->_padding_ = *(longlong *)&(param_1->_WidgetBackgroundColor).Value.SpecifiedColor.field0_0x0;
  this->_padding_ = lVar8;
  *(undefined4 *)&this->_padding_ =
       *(undefined4 *)&(param_1->_WidgetBackgroundColor).Value.ColorUseRule;
  *(bool *)((longlong)&this->_padding_ + 4) = (param_1->_WidgetBackgroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_,
             &(param_1->_WidgetBackgroundColor).Getter);
  EStack_f18 = param_1->_Orientation;
  uStack_f14 = 1;
  uStack_f00 = 0;
  auStack_f10 = (undefined1  [8])0x0;
  FStack_f08.Data = (FScriptContainerElement *)0x0;
  *(EOrientation *)&this->_padding_ = EStack_f18;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_f10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_f10,
             (FWriteAccessScope *)&FStack_d78);
  if (((int)uStack_f00 != 0) && (FStack_f08.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f08.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f08,0,0,0x10);
    uStack_f00 = uStack_f00 & 0xffffffff00000000;
  }
  if (FStack_d78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_d78.Accessor,&FStack_d78);
  }
  if (FStack_f08.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f08.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_f10);
  TAttribute<TOptional<UE::Math::TVector2<double>_>_>::operator=
            ((TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&this->_padding_,
             &param_1->_DesiredSizeOverride);
  ::FName::FName(&FStack_e28,"AudioWidgetsStyle");
  pIVar14 = FSlateStyleRegistry::FindSlateStyle(&FStack_e28);
  if (pIVar14 != (ISlateStyle *)0x0) {
    pFVar15 = ::FName::FName(&FStack_ca0,"AudioSlider.Style");
    pFVar16 = (FAudioSliderStyle *)
              (**(code **)((longlong)*pIVar14 + 0xa0))
                        (pIVar14,FAudioSliderStyle::TypeName,*pFVar15,0,1);
    if (pFVar16 == (FAudioSliderStyle *)0x0) {
      pFVar16 = FAudioSliderStyle::GetDefault();
    }
    this->_padding_ = (longlong)pFVar16;
  }
  dVar6 = *(double *)(this->_padding_ + 0x5f8);
  dVar5 = *(double *)(this->_padding_ + 0x600);
  fStack_ee0 = (float)dVar6;
  fStack_edc = (float)dVar5;
  this->_padding_ = (longlong)dVar6;
  this->_padding_ = (longlong)dVar5;
  pFVar17 = TAttribute<FSlateColor>::Get((TAttribute<FSlateColor> *)&this->_padding_);
  if (pFVar17->ColorUseRule == UseColor_ColorTable) {
    pFVar17 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar17);
  }
  FStack_d88._0_8_ = *(undefined8 *)&(pFVar17->SpecifiedColor).field0_0x0;
  FStack_d88._8_8_ = *(undefined8 *)((longlong)&(pFVar17->SpecifiedColor).field0_0x0 + 8);
  dVar5 = (double)this->_padding_ * __real_3fe0000000000000;
  pFVar17 = TAttribute<FSlateColor>::Get((TAttribute<FSlateColor> *)&this->_padding_);
  if (pFVar17->ColorUseRule == UseColor_ColorTable) {
    pFVar17 = (FSlateColor *)FSlateColor::GetColorFromTable(pFVar17);
  }
  FStack_d98._0_8_ = *(undefined8 *)&(pFVar17->SpecifiedColor).field0_0x0;
  FStack_d98._8_8_ = *(undefined8 *)((longlong)&(pFVar17->SpecifiedColor).field0_0x0 + 8);
  plVar26 = &this->_padding_;
  pFVar18 = (FSlateBrush *)
            FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FLinearColor,FLinearColor,double>
                      ((FSlateRoundedBoxBrush *)appuStack_c58,(FLinearColor *)&FStack_d98._s_0,dVar5
                       ,(FLinearColor *)&FStack_d88._s_0,(float)(dVar6 * __real_3fd5555555555555),
                       (FDeprecateVector2DParameter *)&fStack_ee0);
  FSlateBrush::operator=((FSlateBrush *)plVar26,pFVar18);
  appuStack_c58[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_bb8);
  pFVar19 = SImage::FArguments::FArguments(&FStack_920);
  uStack_e70 = 1;
  uStack_e58 = 0;
  auStack_e68 = (undefined1  [8])0x0;
  pvStack_e60 = (void *)0x0;
  (pFVar19->_Image).Value = (FSlateBrush *)plVar26;
  (pFVar19->_Image).bIsSet = true;
  plStack_e78 = plVar26;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_e68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_e68);
  if (pvStack_e60 != (void *)0x0) {
    FMemory::Free(pvStack_e60);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_e68);
  FLLMScope::FLLMScope(&FStack_f28,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  FStack_e20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&FStack_e18,&FStack_e20,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&TStack_de0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSlider.cpp"
             ,0x2d,aTStackX_8);
  FMemScope::~FMemScope(&FStack_e18);
  FLLMScope::~FLLMScope(&FStack_f28);
  if (TStack_de0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_de0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_de0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  lStack_cb0 = this->_padding_;
  pTStack_ca8 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)TStack_de0._Widget.Object;
  this->_padding_ = (longlong)TStack_de0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_ca8);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=(&TStack_de0,&TStack_cc0,pFVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_cc0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_de0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&FStack_920);
  pFVar19 = SImage::FArguments::FArguments(&FStack_678);
  uStack_e48 = 1;
  pFStack_e50 = (FSlateBrush *)(this->_padding_ + 0x530);
  uStack_e30 = 0;
  auStack_e40 = (undefined1  [8])0x0;
  pvStack_e38 = (void *)0x0;
  (pFVar19->_Image).Value = pFStack_e50;
  (pFVar19->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_e40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_e40);
  if (pvStack_e38 != (void *)0x0) {
    FMemory::Free(pvStack_e38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_e40);
  FStack_d00._0_8_ = this->_padding_;
  FStack_d00._8_8_ = this->_padding_;
  uStack_cf0 = (undefined4)this->_padding_;
  uStack_cec = *(undefined1 *)((longlong)&this->_padding_ + 4);
  TStack_ce8._16_4_ = 0;
  TStack_ce8._0_8_ = 0;
  TStack_ce8._8_8_ = 0;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&TStack_ce8,
             (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
  pFVar19 = SImage::FArguments::ColorAndOpacity(pFVar19,(TAttribute<FSlateColor> *)&FStack_d00._s_0)
  ;
  FLLMScope::FLLMScope(&FStack_f24,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  FStack_e10 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&FStack_e08,&FStack_e10,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&TStack_db0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSlider.cpp"
             ,0x2f,aTStackX_10);
  FMemScope::~FMemScope(&FStack_e08);
  FLLMScope::~FLLMScope(&FStack_f24);
  if (TStack_db0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_db0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_db0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  lStack_c68 = this->_padding_;
  pTStack_c60 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)TStack_db0._Widget.Object;
  this->_padding_ = (longlong)TStack_db0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c60);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=(&TStack_db0,&TStack_cd0,pFVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_cd0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_db0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&FStack_678);
  pFVar20 = SSlider::FArguments::FArguments(&FStack_3d0);
  fStack_ed8 = *(float *)&this->_padding_;
  bStack_ed4 = *(bool *)((longlong)&this->_padding_ + 4);
  auStack_ed0 = (undefined1  [8])0x0;
  pvStack_ec8 = (void *)0x0;
  uStack_ec0 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_ed0,
             (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
  (pFVar20->_Value).Value = fStack_ed8;
  (pFVar20->_Value).bIsSet = bStack_ed4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar20->_Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_ed0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_ed0);
  if (pvStack_ec8 != (void *)0x0) {
    FMemory::Free(pvStack_ec8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_ed0);
  pFVar20->_Style = (FSliderStyle *)(this->_padding_ + 0x10);
  pEVar21 = TAttribute<enum_EOrientation>::Get(&this->_padding_);
  pFVar20->_Orientation = *pEVar21;
  uStack_eb8 = 0x100;
  uStack_ea0 = 0;
  auStack_eb0 = (undefined1  [8])0x0;
  pvStack_ea8 = (void *)0x0;
  (pFVar20->_IndentHandle).Value = false;
  (pFVar20->_IndentHandle).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar20->_IndentHandle).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_eb0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_eb0);
  if (pvStack_ea8 != (void *)0x0) {
    FMemory::Free(pvStack_ea8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_eb0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar20->_OnValueChanged,
             (FWriteAccessScope *)&FStack_d60);
  puStack_d48 = &(pFVar20->_OnValueChanged).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puStack_d48);
  if (puVar22 != (undefined8 *)0x0) {
    *puVar22 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar23;
    *puVar22 = &TBaseFunctorDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar22[3] = this;
  }
  if (FStack_d60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_d60.Accessor,&FStack_d60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar20->_OnMouseCaptureEnd,
             (FWriteAccessScope *)&FStack_d40);
  puStack_d28 = &(pFVar20->_OnMouseCaptureEnd).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puStack_d28);
  if (puVar22 != (undefined8 *)0x0) {
    *puVar22 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar23;
    *puVar22 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::`2'::<lambda_2>_>
                ::_vftable_;
    puVar22[3] = this;
  }
  if (FStack_d40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_d40.Accessor,&FStack_d40);
  }
  FLLMScope::FLLMScope(&FStack_f20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  FStack_e00 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&FStack_df8,&FStack_e00,true);
  TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>
            (&TStack_ef8,"SSlider",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSlider.cpp"
             ,0x34,aTStackX_18);
  FMemScope::~FMemScope(&FStack_df8);
  FLLMScope::~FLLMScope(&FStack_f20);
  if (TStack_ef8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_ef8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_ef8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  lStack_c98 = this->_padding_;
  pTStack_c90 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)TStack_ef8._Widget.Object;
  this->_padding_ = (longlong)TStack_ef8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c90);
  pSVar9 = TStack_ef8._Widget.Object;
  if (TStack_ef8._Widget.Object == (SSlider *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)TStack_ef8._Widget.Object,(FSlateBaseNamedArgs *)pFVar20);
  SSlider::Construct(TStack_ef8._Widget.Object,pFVar20);
  if (TStack_ef8._Widget.Object == (SSlider *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((TStack_ef8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar12 = (**(code **)((TStack_ef8._Widget.Object)->_padding_ + 0x228))
                       (TStack_ef8._Widget.Object);
    bVar13 = 0;
    if (cVar12 == '\0') goto LAB_14d8ec63c;
  }
  bVar13 = 0x20;
LAB_14d8ec63c:
  *(byte *)&(TStack_ef8._Widget.Object)->_padding_ =
       (byte)(TStack_ef8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(TStack_ef8._Widget.Object)->_padding_ =
       (byte)(TStack_ef8._Widget.Object)->_padding_ | bVar13;
  if (TStack_ef8._Widget.Object == (SSlider *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(TStack_ef8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (TStack_ef8._Widget.Object == (SSlider *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar10.ReferenceController = TStack_ef8._Widget.SharedReferenceCount.ReferenceController;
  TStack_ef8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TStack_ef8._Widget.Object = (SSlider *)0x0;
  if (pSVar9 == (SSlider *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SSlider::FArguments::~FArguments(&FStack_3d0);
  pFVar24 = SAudioTextBox::FArguments::FArguments(&FStack_ba8);
  pFVar24->_Style = (FAudioTextBoxStyle *)(this->_padding_ + 0x450);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar24->_OnValueTextCommitted,(FWriteAccessScope *)&FStack_d20);
  puStack_d08 = &(pFVar24->_OnValueTextCommitted).field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)puStack_d08);
  if (puVar22 != (undefined8 *)0x0) {
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar23;
    *puVar22 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`SAudioSliderBase::Construct'::`2'::<lambda_3>_>
                ::_vftable_;
    puVar22[3] = this;
  }
  if (FStack_d20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_d20.Accessor,&FStack_d20);
  }
  FLLMScope::FLLMScope(&FStack_f1c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  FStack_df0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&FStack_de8,&FStack_df0,true);
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>
            (&TStack_dc8,"SAudioTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSlider.cpp"
             ,0x46,aTStackX_20);
  FMemScope::~FMemScope(&FStack_de8);
  FLLMScope::~FLLMScope(&FStack_f1c);
  if (TStack_dc8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_dc8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_dc8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  TStack_e98.Object = (SAudioTextBox *)this->_padding_;
  TStack_e98.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)TStack_dc8._Widget.Object;
  this->_padding_ = (longlong)TStack_dc8._Widget.SharedReferenceCount.ReferenceController;
  TSharedPtr<SAudioTextBox,1>::~TSharedPtr<SAudioTextBox,1>(&TStack_e98);
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
            (&TStack_dc8,&TStack_c88,pFVar24);
  TSharedRef<SAudioTextBox,1>::~TSharedRef<SAudioTextBox,1>(&TStack_c88);
  TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SAudioTextBox,RequiredArgs::T0RequiredArgs>(&TStack_dc8);
  SAudioTextBox::FArguments::~FArguments(&FStack_ba8);
  pTVar25 = SAudioSliderBase::CreateWidgetLayout((SAudioSliderBase *)this,&TStack_c78);
  plVar26 = &this->_padding_;
  pTVar2 = (pTVar25->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar25->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar26);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar26);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar3;
  this->_padding_ = (longlong)pTVar2;
  pSStack_e88 = pSVar3;
  pTStack_e80 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar26);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_c78.SharedReferenceCount.ReferenceController);
  return;
}

// GetLinToOutputCurve @ 14d92f8c0

TWeakObjectPtr<UCurveFloat_const_,FWeakObjectPtr> __thiscall
SAudioSlider::GetLinToOutputCurve(SAudioSlider *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->LinToOutputCurve).WeakPtr;
  return (TWeakObjectPtr<UCurveFloat_const_,FWeakObjectPtr>)in_RDX;
}

// GetOutputToLinCurve @ 14d932210

TWeakObjectPtr<UCurveFloat_const_,FWeakObjectPtr> __thiscall
SAudioSlider::GetOutputToLinCurve(SAudioSlider *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->OutputToLinCurve).WeakPtr;
  return (TWeakObjectPtr<UCurveFloat_const_,FWeakObjectPtr>)in_RDX;
}

// GetOutputValue @ 14d9325a0

float __thiscall SAudioSlider::GetOutputValue(SAudioSlider *this,float param_1)

{
  bool bVar1;
  UCurveFloat *this_00;
  float fVar2;
  double dVar3;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->LinToOutputCurve).WeakPtr);
  if (bVar1) {
    this_00 = (UCurveFloat *)FWeakObjectPtr::Get(&(this->LinToOutputCurve).WeakPtr);
    fVar2 = UCurveFloat::GetFloatValue(this_00,param_1);
    dVar3 = (double)this->_padding_;
    if ((double)fVar2 <= (double)this->_padding_) {
      dVar3 = (double)fVar2;
    }
    if (dVar3 <= (double)this->_padding_) {
      dVar3 = (double)this->_padding_;
    }
  }
  else {
    dVar3 = SAudioSliderBase::NormalizedLinearSliderRange.field0_0x0._s_0.Y -
            SAudioSliderBase::NormalizedLinearSliderRange.field0_0x0._s_0.X;
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar3 = ((double)param_1 - SAudioSliderBase::NormalizedLinearSliderRange.field0_0x0._s_0.X) /
              dVar3;
    }
    else {
      dVar3 = __real_3ff0000000000000;
      if ((double)param_1 < SAudioSliderBase::NormalizedLinearSliderRange.field0_0x0._s_0.Y) {
        dVar3 = 0.0;
      }
    }
    if (__real_3ff0000000000000 <= dVar3) {
      dVar3 = __real_3ff0000000000000;
    }
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    dVar3 = dVar3 * ((double)this->_padding_ - (double)this->_padding_) + (double)this->_padding_;
  }
  return (float)dVar3;
}

// GetSliderValue @ 14d935f20

float __thiscall SAudioSlider::GetSliderValue(SAudioSlider *this,float param_1)

{
  bool bVar1;
  UCurveFloat *this_00;
  float fVar2;
  double dVar3;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->OutputToLinCurve).WeakPtr);
  if (!bVar1) {
    dVar3 = (double)this->_padding_ - (double)this->_padding_;
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar3 = ((double)param_1 - (double)this->_padding_) / dVar3;
    }
    else {
      dVar3 = __real_3ff0000000000000;
      if ((double)param_1 < (double)this->_padding_) {
        dVar3 = 0.0;
      }
    }
    if (__real_3ff0000000000000 <= dVar3) {
      dVar3 = __real_3ff0000000000000;
    }
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    return (float)(dVar3 * (SAudioSliderBase::NormalizedLinearSliderRange.field0_0x0._s_0.Y -
                           SAudioSliderBase::NormalizedLinearSliderRange.field0_0x0._s_0.X) +
                  SAudioSliderBase::NormalizedLinearSliderRange.field0_0x0._s_0.X);
  }
  this_00 = (UCurveFloat *)FWeakObjectPtr::Get(&(this->OutputToLinCurve).WeakPtr);
  fVar2 = UCurveFloat::GetFloatValue(this_00,param_1);
  dVar3 = (double)fVar2;
  if ((double)this->_padding_ <= (double)fVar2) {
    dVar3 = (double)this->_padding_;
  }
  if (dVar3 <= (double)this->_padding_) {
    dVar3 = (double)this->_padding_;
  }
  return (float)dVar3;
}

// SetLinToOutputCurve @ 14d969c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SAudioSlider::SetLinToOutputCurve
          (SAudioSlider *this,TWeakObjectPtr<UCurveFloat_const_,FWeakObjectPtr> param_1)

{
  SAudioTextBox *this_00;
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  float fVar4;
  
  (this->LinToOutputCurve).WeakPtr = param_1.WeakPtr;
  if (this->_padding_ == 0) {
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
  this_00 = (SAudioTextBox *)this->_padding_;
  pcVar1 = *(code **)(this->_padding_ + 0x298);
  pfVar3 = TAttribute<float>::Get((TAttribute<float> *)&this->_padding_);
  fVar4 = (float)(*pcVar1)(this,*pfVar3);
  SAudioTextBox::SetValueText(this_00,fVar4);
  return;
}

// SetOutputToLinCurve @ 14d96bac0

void __thiscall
SAudioSlider::SetOutputToLinCurve
          (SAudioSlider *this,TWeakObjectPtr<UCurveFloat_const_,FWeakObjectPtr> param_1)

{
  (this->OutputToLinCurve).WeakPtr = param_1.WeakPtr;
  return;
}

