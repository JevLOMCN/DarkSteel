// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 34

// SScrollBar @ 1428ba830

SScrollBar * __thiscall SScrollBar::SScrollBar(SScrollBar *this)

{
  SBorder::SBorder((SBorder *)this);
  this->_padding_ = (longlong)&___7SScrollBar__6B_;
  (this->UserVisibility).Value = (TEnumAsByte<EVisibility::Private>)0x19;
  (this->UserVisibility).bIsSet = false;
  *(undefined8 *)&(this->UserVisibility).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->UserVisibility).Getter = 0;
  *(undefined8 *)&(this->UserVisibility).Getter.field_0x8 = 0;
  (this->TopImage).Object = (SImage *)0x0;
  (this->TopImage).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->BottomImage).Object = (SImage *)0x0;
  (this->BottomImage).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->DragThumb).Object = (SBorder *)0x0;
  (this->DragThumb).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ThicknessSpacer).Object = (SSpacer *)0x0;
  (this->ThicknessSpacer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Track).Object = (SScrollBarTrack *)0x0;
  (this->Track).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnUserScrolled = 0;
  *(undefined8 *)&(this->OnUserScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->OnUserScrolled).field_0x10 = 0;
  *(undefined8 *)&this->OnScrollBarVisibilityChanged = 0;
  *(undefined8 *)&(this->OnScrollBarVisibilityChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnScrollBarVisibilityChanged).field_0x10 = 0;
  this->bDraggingThumb = false;
  this->DragGrabOffset = 0.0;
  (this->ScrollbarDisabledVisibility).Value.Value = (uchar)EVisibility::Collapsed.Value.Value;
  return this;
}

// ~SScrollBar @ 1428c17d0

void __thiscall SScrollBar::~SScrollBar(SScrollBar *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SScrollBar__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnScrollBarVisibilityChanged);
  pvVar1 = *(void **)&(this->OnScrollBarVisibilityChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnScrollBarVisibilityChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUserScrolled);
  pvVar1 = *(void **)&(this->OnUserScrolled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUserScrolled);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Track).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ThicknessSpacer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DragThumb).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BottomImage).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TopImage).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->UserVisibility).Getter);
  pvVar1 = *(void **)&(this->UserVisibility).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->UserVisibility).Getter);
  this->_padding_ = (longlong)&___7SBorder__6B_;
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// AlwaysShowScrollbar @ 1428d22f0

bool __thiscall SScrollBar::AlwaysShowScrollbar(SScrollBar *this)

{
  return this->bAlwaysShowScrollbar;
}

// BeginScrolling @ 1428d9b50

void __thiscall SScrollBar::BeginScrolling(SScrollBar *this)

{
  this->bIsScrolling = true;
  return;
}

// Construct @ 142900fe0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall SScrollBar::Construct(SScrollBar *this,FArguments *param_1)

{
  byte *pbVar1;
  SImage *pSVar2;
  SBox *pSVar3;
  SSpacer *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  SBorder *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  code *pcVar10;
  double dVar11;
  TReferenceControllerBase<1> *pTVar12;
  FArguments *pFVar13;
  FSharedReferencer<1> FVar14;
  bool bVar15;
  char cVar16;
  byte bVar17;
  FSlateBrush *pFVar18;
  FArguments *pFVar19;
  ISlateStyle *pIVar20;
  FName *pFVar21;
  FSlot *this_00;
  FSlot *pFVar22;
  FArguments *pFVar23;
  FArguments *pFVar24;
  TSharedRef<SImage,1> *pTVar25;
  TSharedRef<SBox,1> *pTVar26;
  FArguments *pFVar27;
  TSharedRef<SSpacer,1> *pTVar28;
  TSharedRef<SBorder,1> *pTVar29;
  SScrollBarTrack *pSVar30;
  FSlotArguments *pFVar31;
  FArguments *pFVar32;
  TSharedRef<SVerticalBox,1> *pTVar33;
  TSharedRef<SScrollBarTrack,1> *pTVar34;
  undefined8 *puVar35;
  ulong64 uVar36;
  FSlateBrush *pFVar37;
  double *pdVar38;
  FScrollBarStyle *pFVar39;
  FSlateBrush *pFVar40;
  EHorizontalAlignment EVar41;
  EHorizontalAlignment EVar42;
  bool bVar43;
  undefined4 local_res8 [2];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_2728;
  T0RequiredArgs local_2727;
  T0RequiredArgs local_2726;
  T0RequiredArgs local_2725;
  T0RequiredArgs local_2724 [4];
  FLLMScope local_2720;
  FLLMScope local_271c;
  FLLMScope local_2718;
  FLLMScope local_2714;
  FLLMScope local_2710;
  FLLMScope local_270c;
  FLLMScope local_2708;
  FLLMScope local_2704;
  FLLMScope local_2700 [2];
  SScrollBarTrack *local_26f8;
  SVerticalBox *local_26f0;
  TReferenceControllerBase<1> *pTStack_26e8;
  undefined1 local_26e0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_26d8;
  FDelegateAllocation FStack_26d0;
  FArguments *local_26c0;
  FMemScope local_26b8;
  FArguments *local_26b0;
  TSlateDecl<SScrollBarTrack,RequiredArgs::T0RequiredArgs> local_26a8;
  FArguments *local_2690;
  SWidget *local_2688;
  TReferenceControllerBase<1> *pTStack_2680;
  SWidget *local_2678;
  TReferenceControllerBase<1> *pTStack_2670;
  SWidget *local_2668;
  TReferenceControllerBase<1> *pTStack_2660;
  SWidget *local_2658;
  TReferenceControllerBase<1> *pTStack_2650;
  SWidget *local_2648;
  TReferenceControllerBase<1> *pTStack_2640;
  SWidget *local_2638;
  TReferenceControllerBase<1> *pTStack_2630;
  double local_2628;
  double dStack_2620;
  undefined1 local_2618;
  undefined1 local_2610 [8];
  ForAnyElementType FStack_2608;
  int local_2600;
  FSlateBrush *local_25f8;
  undefined1 local_25f0;
  undefined1 local_25e8 [8];
  void *pvStack_25e0;
  undefined8 local_25d8;
  FSlateBrush *local_25d0;
  undefined1 local_25c8;
  undefined1 local_25c0 [8];
  void *pvStack_25b8;
  undefined8 local_25b0;
  FSlateBrush *local_25a8;
  undefined1 local_25a0;
  undefined1 local_2598 [8];
  void *pvStack_2590;
  undefined8 local_2588;
  FName local_2580;
  FMemScope local_2578;
  FName local_2570;
  FMemScope local_2568;
  FName local_2560;
  FName local_2558;
  FMemScope local_2550;
  FName local_2548;
  FMemScope local_2540;
  TReferenceControllerBase<1> *local_2538;
  FMemScope local_2530;
  FSlotArguments *local_2528;
  FArguments *local_2520;
  FName local_2518;
  FMemScope local_2510;
  TReferenceControllerBase<1> *local_2508;
  FName local_2500;
  FMemScope local_24f8;
  FName local_24f0;
  FSlot *local_24e8;
  FName local_24e0;
  FMemScope local_24d8;
  double local_24d0;
  double dStack_24c8;
  bool local_24c0;
  undefined1 local_24b8 [8];
  void *pvStack_24b0;
  undefined4 local_24a8;
  undefined1 local_24a0 [16];
  undefined1 local_2490 [8];
  undefined1 local_2488 [8];
  void *pvStack_2480;
  undefined8 local_2478;
  undefined8 local_2470;
  undefined8 uStack_2468;
  bool local_2460;
  undefined1 local_2458 [8];
  void *pvStack_2450;
  undefined4 local_2448;
  TAttribute<float> local_2440;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2420;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_2408;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_23f0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_23d8;
  double local_23c0;
  double dStack_23b8;
  char local_23b0;
  undefined1 local_23a8 [8];
  void *pvStack_23a0;
  undefined4 local_2398;
  TSharedRef<SWidget,1> local_2390;
  TAttribute<FSlateBrush_const_*> local_2380;
  FDestructionSentinel local_2358;
  FDestructionSentinel local_2340;
  FDestructionSentinel local_2328;
  FDelegateAllocation *local_2310;
  SBorder *local_2308;
  TReferenceControllerBase<1> *pTStack_2300;
  SImage *local_22f8;
  TReferenceControllerBase<1> *pTStack_22f0;
  SScrollBarTrack *local_22e8;
  TReferenceControllerBase<1> *pTStack_22e0;
  SWidget *local_22d8;
  TReferenceControllerBase<1> *pTStack_22d0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_22c8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_22b0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2298;
  TSharedRef<SVerticalBox,1> local_2280;
  TSharedRef<SBorder,1> local_2270;
  TSharedRef<SBox,1> local_2260;
  TSharedRef<SImage,1> local_2250;
  TSharedRef<SBorder,1> local_2240;
  TSharedRef<SSpacer,1> local_2230;
  TSharedRef<SBox,1> local_2220;
  TSharedRef<SImage,1> local_2210;
  TSharedRef<SScrollBarTrack,1> local_2200;
  FName local_21f0;
  SImage *local_21e8;
  TReferenceControllerBase<1> *pTStack_21e0;
  SSpacer *local_21d8;
  TReferenceControllerBase<1> *pTStack_21d0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_21c8;
  FSlotArguments local_21b0;
  FArguments local_20c8;
  undefined1 local_1ec0 [528];
  undefined1 local_1cb0 [24];
  FArguments local_1c98;
  FArguments local_1a68;
  FArguments local_17c8;
  FArguments local_1520;
  FArguments local_1278;
  FArguments local_f38;
  FArguments local_bf8;
  FArguments local_818;
  FArguments local_438;
  undefined8 uStack_48;
  
  uStack_48 = 0x142900fff;
  EVar41 = HAlign_Fill;
  local_res8[0] = 0;
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnUserScrolled,&param_1->_OnUserScrolled);
  TDelegate<void___cdecl(EVisibility),FDefaultDelegateUserPolicy>::operator=
            (&this->OnScrollBarVisibilityChanged,&param_1->_OnScrollBarVisibilityChanged);
  this->Orientation = param_1->_Orientation;
  this->DragFocusCause = param_1->_DragFocusCause;
  (this->UserVisibility).Value.Value.Value = (uchar)param_1->_padding_;
  (this->UserVisibility).bIsSet = *(bool *)((longlong)&param_1->_padding_ + 1);
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->UserVisibility).Getter,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)&param_1->_padding_)
  ;
  if ((param_1->_Style == (FScrollBarStyle *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._Style",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
                          ,0x13,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar39 = param_1->_Style;
  if (param_1->_Style == (FScrollBarStyle *)0x0) {
    FArguments::FArguments(&local_1a68);
    FArguments::~FArguments(&local_1a68);
    pFVar39 = local_1a68._Style;
    if ((local_1a68._Style == (FScrollBarStyle *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Style",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
                            ,0x16f,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  this->NormalThumbImage = &pFVar39->NormalThumbImage;
  this->HoveredThumbImage = &pFVar39->HoveredThumbImage;
  this->DraggedThumbImage = &pFVar39->DraggedThumbImage;
  if (this->Orientation == Orient_Vertical) {
    pFVar18 = &pFVar39->VerticalBottomSlotImage;
    pFVar37 = &pFVar39->VerticalTopSlotImage;
    pFVar40 = &pFVar39->VerticalBackgroundImage;
  }
  else {
    pFVar18 = &pFVar39->HorizontalBottomSlotImage;
    pFVar37 = &pFVar39->HorizontalTopSlotImage;
    pFVar40 = &pFVar39->HorizontalBackgroundImage;
  }
  this->BackgroundBrush = pFVar40;
  this->TopBrush = pFVar37;
  this->BottomBrush = pFVar18;
  SWidget::Invalidate((SWidget *)this,Layout);
  bVar15 = (param_1->_Thickness).bIsSet;
  bVar43 = bVar15 == false;
  if (bVar43) {
    pdVar38 = (double *)local_24a0;
    dVar11 = (double)param_1->_Style->Thickness;
    local_2490[0] = 1;
    local_2478 = 0;
    local_24a0._8_4_ = SUB84(dVar11,0);
    local_24a0._0_8_ = dVar11;
    local_24a0._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    local_2488 = (undefined1  [8])0x0;
    pvStack_2480 = (void *)0x0;
  }
  else {
    local_23c0 = (param_1->_Thickness).Value.field0_0x0._s_0.X;
    dStack_23b8 = (param_1->_Thickness).Value.field0_0x0._s_0.Y;
    local_2398 = 0;
    local_23a8 = (undefined1  [8])0x0;
    pvStack_23a0 = (void *)0x0;
    local_23b0 = bVar15;
    TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
               local_23a8,&(param_1->_Thickness).Getter);
    pdVar38 = &local_23c0;
  }
  local_2628 = *pdVar38;
  dStack_2620 = pdVar38[1];
  local_2618 = *(undefined1 *)(pdVar38 + 2);
  local_2600 = 0;
  local_2610 = (undefined1  [8])0x0;
  FStack_2608.Data = (FScriptContainerElement *)0x0;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_2610,
             (TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
             (pdVar38 + 3));
  if (bVar43) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2488);
    if (pvStack_2480 != (void *)0x0) {
      FMemory::Free(pvStack_2480);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2488);
  }
  if (!bVar43) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_23a8);
    if (pvStack_23a0 != (void *)0x0) {
      FMemory::Free(pvStack_23a0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_23a8);
  }
  bVar15 = this->Orientation == Orient_Vertical;
  this->bHideWhenNotInUse = param_1->_HideWhenNotInUse;
  EVar42 = HAlign_Center;
  if (bVar15) {
    EVar42 = EVar41;
  }
  local_26f8 = (SScrollBarTrack *)CONCAT44(local_26f8._4_4_,EVar42);
  if (bVar15) {
    EVar41 = HAlign_Center;
  }
  this->bPreventThrottling = param_1->_PreventThrottling;
  this->bIsScrolling = false;
  this->LastInteractionTime = 0.0;
  pFVar19 = SBorder::FArguments::FArguments(&local_438);
  local_2690 = pFVar19;
  pIVar20 = FAppStyle::Get();
  pcVar10 = *(code **)((longlong)*pIVar20 + 0x50);
  pFVar21 = ::FName::FName(&local_21f0,"NoBorder");
  local_25f8 = (FSlateBrush *)(*pcVar10)(pIVar20,*pFVar21);
  local_25f0 = 1;
  local_25e8 = (undefined1  [8])0x0;
  pvStack_25e0 = (void *)0x0;
  pFVar22 = (FSlot *)0x0;
  local_25d8 = 0;
  (pFVar19->_BorderImage).Value = local_25f8;
  (pFVar19->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_25e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_25e8);
  if (pvStack_25e0 != (void *)0x0) {
    FMemory::Free(pvStack_25e0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_25e8);
  local_2470._0_4_ = (param_1->_Padding).Value.Left;
  local_2470._4_4_ = (param_1->_Padding).Value.Top;
  uStack_2468._0_4_ = (param_1->_Padding).Value.Right;
  uStack_2468._4_4_ = (param_1->_Padding).Value.Bottom;
  local_2460 = (param_1->_Padding).bIsSet;
  local_2448 = 0;
  local_2458 = (undefined1  [8])0x0;
  pvStack_2450 = (void *)0x0;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_2458,
             &(param_1->_Padding).Getter);
  (pFVar19->_Padding).Value.Left = (float)(undefined4)local_2470;
  (pFVar19->_Padding).Value.Top = (float)local_2470._4_4_;
  (pFVar19->_Padding).Value.Right = (float)(undefined4)uStack_2468;
  (pFVar19->_Padding).Value.Bottom = (float)uStack_2468._4_4_;
  (pFVar19->_Padding).bIsSet = local_2460;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2458);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2458);
  if (pvStack_2450 != (void *)0x0) {
    FMemory::Free(pvStack_2450);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2458);
  local_2520 = SVerticalBox::FArguments::FArguments(&local_20c8);
  this_00 = ::operator_new(0x58);
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    pFVar22 = SVerticalBox::FSlot::FSlot(this_00);
  }
  local_24e8 = pFVar22;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments(&local_21b0,(FSlot *)&local_24e8);
  local_2440.Value = 1.0;
  local_2440.Getter._16_8_ = 0;
  local_2440.bIsSet = true;
  local_2440.Getter._0_8_ = 0;
  local_2440.Getter._8_8_ = 0;
  local_2528 = SVerticalBox::FSlot::FSlotArguments::FillHeight(&local_21b0,&local_2440);
  pFVar19 = SBorder::FArguments::FArguments(&local_818);
  local_25d0 = this->BackgroundBrush;
  local_25c8 = 1;
  local_25b0 = 0;
  local_25c0 = (undefined1  [8])0x0;
  pvStack_25b8 = (void *)0x0;
  (pFVar19->_BorderImage).Value = local_25d0;
  (pFVar19->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_25c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_25c0);
  if (pvStack_25b8 != (void *)0x0) {
    FMemory::Free(pvStack_25b8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_25c0);
  pFVar19->_HAlign = EVar41;
  pFVar19->_VAlign = EVar42;
  local_26c0 = SBorder::FArguments::Padding(pFVar19,0.0);
  local_26b0 = SScrollBarTrack::FArguments::FArguments(&local_1c98);
  local_26b0->_Orientation = param_1->_Orientation;
  pFVar23 = SBox::FArguments::FArguments(&local_f38);
  pFVar23->_HAlign = EVar41;
  pFVar23->_VAlign = EVar42;
  pFVar24 = SImage::FArguments::FArguments(&local_1520);
  local_25a8 = this->TopBrush;
  local_25a0 = 1;
  local_2598 = (undefined1  [8])0x0;
  pvStack_2590 = (void *)0x0;
  local_2588 = 0;
  (pFVar24->_Image).Value = local_25a8;
  (pFVar24->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2598);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2598);
  if (pvStack_2590 != (void *)0x0) {
    FMemory::Free(pvStack_2590);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2598);
  FLLMScope::FLLMScope(&local_2720,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_24e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_24d8,&local_24e0,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_23d8,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x37,(T0RequiredArgs *)local_res8);
  FMemScope::~FMemScope(&local_24d8);
  FLLMScope::~FLLMScope(&local_2720);
  if (local_23d8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_23d8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_23d8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_21e8 = (this->TopImage).Object;
  pTStack_21e0 = (this->TopImage).SharedReferenceCount.ReferenceController;
  (this->TopImage).Object = local_23d8._Widget.Object;
  (this->TopImage).SharedReferenceCount.ReferenceController =
       local_23d8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_21e0);
  pTVar25 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_23d8,&local_2210,pFVar24);
  pSVar2 = pTVar25->Object;
  local_2538 = (pTVar25->SharedReferenceCount).ReferenceController;
  if (local_2538 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_2538->SharedReferenceCount = (atomic<int>)((int)local_2538->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_2538->SharedReferenceCount = (atomic<int>)((int)local_2538->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2688 = (pFVar23->_Content).Widget.Object;
  pTStack_2680 = (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar23->_Content).Widget.Object = (SWidget *)pSVar2;
  (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController = local_2538;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2680);
  FLLMScope::FLLMScope(&local_271c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2580 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2578,&local_2580,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_21c8,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x33,local_res10);
  FMemScope::~FMemScope(&local_2578);
  FLLMScope::~FLLMScope(&local_271c);
  pTVar26 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_21c8,&local_2220,pFVar23);
  pFVar13 = local_26b0;
  pSVar3 = pTVar26->Object;
  local_2508 = (pTVar26->SharedReferenceCount).ReferenceController;
  if (local_2508 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_2508->SharedReferenceCount = (atomic<int>)((int)local_2508->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_2508->SharedReferenceCount = (atomic<int>)((int)local_2508->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2678 = (local_26b0->_TopSlot).Widget.Object;
  pTStack_2670 = (local_26b0->_TopSlot).Widget.SharedReferenceCount.ReferenceController;
  (local_26b0->_TopSlot).Widget.Object = (SWidget *)pSVar3;
  (local_26b0->_TopSlot).Widget.SharedReferenceCount.ReferenceController = local_2508;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2670);
  pFVar19 = SBorder::FArguments::FArguments(&local_bf8);
  pFVar19->_HAlign = HAlign_Center;
  pFVar19->_VAlign = VAlign_Center;
  pFVar19 = SBorder::FArguments::Padding(pFVar19,0.0);
  pFVar27 = SSpacer::FArguments::FArguments((FArguments *)local_1ec0);
  local_24c0 = (bool)local_2618;
  local_24d0 = local_2628;
  dStack_24c8 = dStack_2620;
  local_24a8 = 0;
  local_24b8 = (undefined1  [8])0x0;
  pvStack_24b0 = (void *)0x0;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_24b8,
             (TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_2610);
  (pFVar27->_Size).Value.field0_0x0._s_0.X = local_24d0;
  (pFVar27->_Size).Value.field0_0x0._s_0.Y = dStack_24c8;
  (pFVar27->_Size).bIsSet = local_24c0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_Size).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_24b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_24b8);
  if (pvStack_24b0 != (void *)0x0) {
    FMemory::Free(pvStack_24b0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_24b8);
  FLLMScope::FLLMScope(&local_2718,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2570 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2568,&local_2570,true);
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
            (&local_23f0,"SSpacer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x42,local_res18);
  FMemScope::~FMemScope(&local_2568);
  FLLMScope::~FLLMScope(&local_2718);
  if (local_23f0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_23f0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_23f0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_21d8 = (this->ThicknessSpacer).Object;
  pTStack_21d0 = (this->ThicknessSpacer).SharedReferenceCount.ReferenceController;
  (this->ThicknessSpacer).Object = local_23f0._Widget.Object;
  (this->ThicknessSpacer).SharedReferenceCount.ReferenceController =
       local_23f0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_21d0);
  pTVar28 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_23f0,&local_2230,pFVar27);
  pSVar4 = pTVar28->Object;
  local_26b0 = (FArguments *)(pTVar28->SharedReferenceCount).ReferenceController;
  if (local_26b0 != (FArguments *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_26b0)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_26b0)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    ((TReferenceControllerBase<1> *)local_26b0)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_26b0)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2668 = (pFVar19->_Content).Widget.Object;
  pTStack_2660 = (pFVar19->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar19->_Content).Widget.Object = (SWidget *)pSVar4;
  (pFVar19->_Content).Widget.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_26b0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2660);
  FLLMScope::FLLMScope(&local_2714,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2560 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2530,&local_2560,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_2408,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x3d,local_res20);
  FMemScope::~FMemScope(&local_2530);
  FLLMScope::~FLLMScope(&local_2714);
  if (local_2408._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2408._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2408._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_2308 = (this->DragThumb).Object;
  pTStack_2300 = (this->DragThumb).SharedReferenceCount.ReferenceController;
  (this->DragThumb).Object = local_2408._Widget.Object;
  (this->DragThumb).SharedReferenceCount.ReferenceController =
       local_2408._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2300);
  pTVar29 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2408,&local_2240,pFVar19);
  pTVar5 = (pTVar29->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar29->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2658 = (pFVar13->_ThumbSlot).Widget.Object;
  pTStack_2650 = (pFVar13->_ThumbSlot).Widget.SharedReferenceCount.ReferenceController;
  (pFVar13->_ThumbSlot).Widget.Object = (SWidget *)pSVar6;
  (pFVar13->_ThumbSlot).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2650);
  pFVar23 = SBox::FArguments::FArguments(&local_1278);
  pFVar23->_HAlign = EVar41;
  pFVar23->_VAlign = (EVerticalAlignment)local_26f8;
  pFVar24 = SImage::FArguments::FArguments(&local_17c8);
  local_2380.Value = this->BottomBrush;
  local_2380.bIsSet = true;
  local_2380.Getter._16_8_ = 0;
  local_2380.Getter._0_8_ = 0;
  local_2380.Getter._8_8_ = 0;
  pFVar24 = SImage::FArguments::Image(pFVar24,&local_2380);
  FLLMScope::FLLMScope(&local_2710,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2558 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2550,&local_2558,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_2420,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x4c,&local_2728);
  FMemScope::~FMemScope(&local_2550);
  FLLMScope::~FLLMScope(&local_2710);
  if (local_2420._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2420._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2420._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_22f8 = (this->BottomImage).Object;
  pTStack_22f0 = (this->BottomImage).SharedReferenceCount.ReferenceController;
  (this->BottomImage).Object = local_2420._Widget.Object;
  (this->BottomImage).SharedReferenceCount.ReferenceController =
       local_2420._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_22f0);
  pTVar25 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2420,&local_2250,pFVar24);
  pTVar7 = (pTVar25->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar25->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2648 = (pFVar23->_Content).Widget.Object;
  pTStack_2640 = (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar23->_Content).Widget.Object = (SWidget *)pSVar2;
  (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2640);
  FLLMScope::FLLMScope(&local_270c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2548 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2540,&local_2548,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_2298,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x48,&local_2727);
  FMemScope::~FMemScope(&local_2540);
  FLLMScope::~FLLMScope(&local_270c);
  pTVar26 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2298,&local_2260,pFVar23);
  pTVar8 = (pTVar26->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar26->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2638 = (pFVar13->_BottomSlot).Widget.Object;
  pTStack_2630 = (pFVar13->_BottomSlot).Widget.SharedReferenceCount.ReferenceController;
  (pFVar13->_BottomSlot).Widget.Object = (SWidget *)pSVar3;
  (pFVar13->_BottomSlot).Widget.SharedReferenceCount.ReferenceController = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2630);
  FLLMScope::FLLMScope(&local_2708,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_24f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_24f8,&local_24f0,true);
  TSlateDecl<SScrollBarTrack,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScrollBarTrack,RequiredArgs::T0RequiredArgs>
            (&local_26a8,"SScrollBarTrack",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x2f,&local_2726);
  FMemScope::~FMemScope(&local_24f8);
  FLLMScope::~FLLMScope(&local_2708);
  if (local_26a8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_26a8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_26a8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_22e8 = (this->Track).Object;
  pTStack_22e0 = (this->Track).SharedReferenceCount.ReferenceController;
  (this->Track).Object = local_26a8._Widget.Object;
  (this->Track).SharedReferenceCount.ReferenceController =
       local_26a8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_22e0);
  pSVar30 = TSharedPtr<SScrollBarTrack,1>::operator->(&local_26a8._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar30,(FSlateBaseNamedArgs *)pFVar13);
  local_26f8 = local_26a8._Widget.Object;
  SScrollBarTrack::Construct(local_26a8._Widget.Object,pFVar13);
  pSVar30 = TSharedPtr<SScrollBarTrack,1>::operator->(&local_26a8._Widget);
  if ((pSVar30->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)(pSVar30->_padding_ + 0x228))(pSVar30);
    bVar17 = 0;
    if (cVar16 == '\0') goto LAB_142901ee1;
  }
  bVar17 = 0x20;
LAB_142901ee1:
  *(byte *)&pSVar30->_padding_ = (byte)pSVar30->_padding_ & 0xdf;
  *(byte *)&pSVar30->_padding_ = (byte)pSVar30->_padding_ | bVar17;
  pSVar30 = TSharedPtr<SScrollBarTrack,1>::operator->(&local_26a8._Widget);
  pbVar1 = (byte *)((longlong)&pSVar30->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_26a8._Widget.Object == (SScrollBarTrack *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar14.ReferenceController = local_26a8._Widget.SharedReferenceCount.ReferenceController;
  pSVar30 = local_26f8;
  local_26a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_26a8._Widget.Object = (SScrollBarTrack *)0x0;
  if ((local_26f8 == (SScrollBarTrack *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_22d8 = (local_26c0->_Content).Widget.Object;
  pTStack_22d0 = (local_26c0->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_26c0->_Content).Widget.Object = (SWidget *)pSVar30;
  (local_26c0->_Content).Widget.SharedReferenceCount.ReferenceController =
       FVar14.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_22d0);
  FLLMScope::FLLMScope(&local_2704,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2500 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_26b8,&local_2500,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_22b0,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x29,&local_2725);
  FMemScope::~FMemScope(&local_26b8);
  FLLMScope::~FLLMScope(&local_2704);
  pTVar29 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_22b0,&local_2270,local_26c0);
  local_2390.Object = (SWidget *)pTVar29->Object;
  local_26b8 = (FMemScope)(pTVar29->SharedReferenceCount).ReferenceController;
  if (local_26b8 != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_26b8 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_26b8 + 8) + 1);
    UNLOCK();
  }
  local_2390.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_26b8;
  pFVar31 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_2528,&local_2390);
  pFVar32 = SVerticalBox::FArguments::operator+(local_2520,pFVar31);
  FLLMScope::FLLMScope(local_2700,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2518 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2510,&local_2518,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_22c8,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
             ,0x24,local_2724);
  FMemScope::~FMemScope(&local_2510);
  FLLMScope::~FLLMScope(local_2700);
  pTVar33 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_22c8,&local_2280,pFVar32);
  pTVar9 = (pTVar33->SharedReferenceCount).ReferenceController;
  local_26f0 = pTVar33->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = (local_2690->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_2690->_Content).Widget.Object = (SWidget *)local_26f0;
  (local_2690->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar9;
  pTStack_26e8 = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SBorder::Construct((SBorder *)this,local_2690);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2280.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_22c8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_26b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2270.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_22b0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26a8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2260.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2298._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2250.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2420._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_17c8);
  SBox::FArguments::~FArguments(&local_1278);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2240.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2408._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_26b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2230.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23f0._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1cb0);
  if ((void *)local_1cb0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1cb0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1cb0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1ec0);
  SBorder::FArguments::~FArguments(&local_bf8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2508);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2220.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_21c8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2538);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2210.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23d8._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_1520);
  SBox::FArguments::~FArguments(&local_f38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c98._BottomSlot.Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c98._ThumbSlot.Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c98._TopSlot.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1c98);
  SBorder::FArguments::~FArguments(&local_818);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_21b0);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_20c8._Slots.AllocatorInstance.Data,local_20c8._Slots.ArrayNum);
  if ((FSlotArguments *)local_20c8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_20c8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_20c8);
  SBorder::FArguments::~FArguments(&local_438);
  pTVar34 = TSharedPtr<SScrollBarTrack,1>::ToSharedRef(&this->Track,&local_2200);
  local_26e0[0] = false;
  local_26e0[1] = true;
  FStack_26d0.DelegateSize = 0;
  local_26d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_26d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_26d8,(FWriteAccessScope *)&local_2328);
  local_2310 = &FStack_26d0;
  puVar35 = UE::Core::Private::DelegateAllocate(0x38,&FStack_26d0);
  if (puVar35 != (undefined8 *)0x0) {
    pSVar30 = pTVar34->Object;
    pTVar5 = (pTVar34->SharedReferenceCount).ReferenceController;
    local_26f0 = (SVerticalBox *)SScrollBarTrack::IsNeeded;
    pTStack_26e8 = (TReferenceControllerBase<1> *)
                   ((ulonglong)local_2200.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar35 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar36 = FDelegateHandle::GenerateNewID();
    puVar35[2] = uVar36;
    *puVar35 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSScrollBarTrack___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar35[3] = pSVar30;
    puVar35[4] = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar35[5] = local_26f0;
    puVar35[6] = pTStack_26e8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  if (local_2328.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2328.Accessor,&local_2328);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar34->SharedReferenceCount).ReferenceController);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)((longlong)&this->_padding_ + 2),(SWidget *)this,(TAttribute<bool> *)local_26e0,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_26d8,(FWriteAccessScope *)&local_2358);
  if ((FStack_26d0.DelegateSize != 0) &&
     (FStack_26d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_26d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_26d0,0,0,0x10);
    FStack_26d0.DelegateSize = 0;
  }
  if (local_2358.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2358.Accessor,&local_2358);
  }
  if (FStack_26d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_26d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_26d8.AccessDetector);
  SetScrollBarAlwaysVisible(this,param_1->_AlwaysShowScrollbar);
  this->bAlwaysShowScrollbarTrack = param_1->_AlwaysShowScrollbarTrack;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2610,
             (FWriteAccessScope *)&local_2340);
  if ((local_2600 != 0) && (FStack_2608.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2608.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2608,0,0,0x10);
    local_2600 = 0;
  }
  if (local_2340.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2340.Accessor,&local_2340);
  }
  if (FStack_2608.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2608.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2610);
  return;
}

// DistanceFromBottom @ 142925eb0

float __thiscall SScrollBar::DistanceFromBottom(SScrollBar *this)

{
  SScrollBarTrack *pSVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  if ((this->Track).Object == (SScrollBarTrack *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return fVar4;
    }
  }
  pSVar1 = (this->Track).Object;
  return __real_3f800000 - (pSVar1->ThumbSizeFraction + pSVar1->OffsetFraction);
}

// DistanceFromTop @ 142925f50

float __thiscall SScrollBar::DistanceFromTop(SScrollBar *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->Track).Object != (SScrollBarTrack *)0x0) {
    return ((this->Track).Object)->OffsetFraction;
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
  return ((this->Track).Object)->OffsetFraction;
}

// EndScrolling @ 142926bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SScrollBar::EndScrolling(SScrollBar *this)

{
  FSlateApplication *pFVar1;
  double dVar2;
  
  this->bIsScrolling = false;
  pFVar1 = FSlateApplication::Get();
  dVar2 = (double)(**(code **)(*(longlong *)pFVar1 + 0x60))(pFVar1);
  this->LastInteractionTime = dVar2;
  return;
}

// ExecuteOnUserScrolled @ 142934480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SScrollBar::ExecuteOnUserScrolled(SScrollBar *this,FGeometry *param_1,FPointerEvent *param_2)

{
  EOrientation EVar1;
  TReferenceControllerBase<1> *pTVar2;
  SScrollBarTrack *pSVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TTransform2<float> *pTVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  FDeprecateSlateVector2D local_d0;
  TSharedRef<SWidget,1> local_c8;
  FReadAccessScope local_b8;
  TTransform2<float> local_a0;
  FGeometry local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_f8;
  EVar1 = this->Orientation;
  if ((this->Track).Object == (SScrollBarTrack *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar2 = (this->Track).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->Track).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar3 == (SScrollBarTrack *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8.Object = (SWidget *)pSVar3;
  local_c8.SharedReferenceCount.ReferenceController = pTVar2;
  SWidget::FindChildGeometry((SWidget *)this,&local_88,param_1,&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar7 = Inverse<TTransform2<float>_>(&local_a0,&local_88.AccumulatedRenderTransform);
  local_d8._4_4_ = SUB84(param_2->ScreenSpacePosition,4);
  local_d8._0_4_ = SUB84(param_2->ScreenSpacePosition,0);
  uVar8 = (ulonglong)(-(uint)(EVar1 != Orient_Horizontal) & 4);
  local_d8 = CONCAT44((float)local_d8 * (pTVar7->M).M[0][1] + local_d8._4_4_ * (pTVar7->M).M[1][1] +
                      (pTVar7->Trans).field0_0x0._s_0.Y,
                      local_d8._4_4_ * (pTVar7->M).M[1][0] + (float)local_d8 * (pTVar7->M).M[0][0] +
                      (pTVar7->Trans).field0_0x0._s_0.X);
  fVar11 = *(float *)((longlong)&local_d8 + uVar8) - this->DragGrabOffset;
  local_d0 = local_88.Size;
  if ((this->Track).Object == (SScrollBarTrack *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar9 = *(float *)(&local_d0.field_0x0 + uVar8) - ((this->Track).Object)->MinThumbSize;
  fVar10 = fVar9;
  if (fVar11 <= fVar9) {
    fVar10 = fVar11;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnUserScrolled,
             &local_b8);
  if ((*(int *)&(this->OnUserScrolled).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->OnUserScrolled).field_0x8, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4,fVar10 / fVar9);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_b8);
  return;
}

// GetDragThumbImage @ 142940980

FSlateBrush * __thiscall SScrollBar::GetDragThumbImage(SScrollBar *this)

{
  if (this->bDraggingThumb != false) {
    return this->DraggedThumbImage;
  }
  if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
    return this->HoveredThumbImage;
  }
  return this->NormalThumbImage;
}

// GetOrientation @ 1429464b0

EOrientation __thiscall SScrollBar::GetOrientation(SScrollBar *this)

{
  return this->Orientation;
}

// GetThumbOpacity @ 14294a080

/* WARNING: Enum "Type": Some values do not have unique names */

FLinearColor * __thiscall
SScrollBar::GetThumbOpacity(SScrollBar *this,FLinearColor *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor *pFVar3;
  FSlateApplication *pFVar4;
  double dVar5;
  float fVar6;
  
  if ((this->Track).Object == (SScrollBarTrack *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLinearColor *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (0.0 < ((this->Track).Object)->ThumbSizeFraction) {
    if ((this->bDraggingThumb == false) && (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
      if ((this->bHideWhenNotInUse == false) || (this->bAlwaysShowScrollbar != false)) {
        (__return_storage_ptr__->field0_0x0)._s_0.A = 0.75;
      }
      else {
        if (this->bIsScrolling == false) {
          pFVar4 = FSlateApplication::Get();
          dVar5 = (double)(**(code **)(*(longlong *)pFVar4 + 0x60))(pFVar4);
          dVar5 = dVar5 - this->LastInteractionTime;
        }
        else {
          dVar5 = 0.0;
        }
        fVar6 = (float)((dVar5 - __real_3fc999999999999a) * __real_4014000000000000);
        if (__real_3f800000 <= fVar6) {
          fVar6 = __real_3f800000;
        }
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        (__return_storage_ptr__->field0_0x0)._s_0.A = __real_3f800000 - fVar6;
      }
    }
    else {
      (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.B = 1.0;
  }
  else {
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0x3f800000;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.G = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.R = 1.0;
  return __return_storage_ptr__;
}

// GetTrackOpacity @ 14294a3c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSlateColor * __thiscall
SScrollBar::GetTrackOpacity(SScrollBar *this,FSlateColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  SScrollBarTrack *pSVar2;
  
  uVar1 = _UNK_15076b1f8;
  if ((this->bDraggingThumb != false) || (*(char *)((longlong)&this->_padding_ + 3) != '\0')) {
    *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
         ___xmm_3f8000003f8000003f8000003f800000;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar1;
    __return_storage_ptr__->ColorUseRule = UseColor_Specified;
    return __return_storage_ptr__;
  }
  if (this->bAlwaysShowScrollbarTrack != false) {
    pSVar2 = TSharedPtr<SScrollBarTrack,1>::operator->(&this->Track);
    if (__real_38d1b717 < pSVar2->ThumbSizeFraction) goto LAB_14294a416;
  }
  if (this->bAlwaysShowScrollbar == false) {
    (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = 1.0;
    (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = 1.0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = 0x3f800000
    ;
    __return_storage_ptr__->ColorUseRule = UseColor_Specified;
    return __return_storage_ptr__;
  }
LAB_14294a416:
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 0.5;
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  return __return_storage_ptr__;
}

// InvalidateStyle @ 142952f60

void __thiscall SScrollBar::InvalidateStyle(SScrollBar *this)

{
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// IsNeeded @ 142955200

bool __thiscall SScrollBar::IsNeeded(SScrollBar *this)

{
  float *pfVar1;
  SScrollBarTrack *pSVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  if ((this->Track).Object == (SScrollBarTrack *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pSVar2 = (this->Track).Object;
  pfVar1 = &pSVar2->ThumbSizeFraction;
  if ((__real_3f7ff972 < *pfVar1 || __real_3f7ff972 == *pfVar1) &&
     (pSVar2->bIsAlwaysVisible == false)) {
    return false;
  }
  return true;
}

// IsScrolling @ 142956e10

bool __thiscall SScrollBar::IsScrolling(SScrollBar *this)

{
  return this->bDraggingThumb;
}

// OnMouseButtonDown @ 14296c870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SScrollBar::OnMouseButtonDown
          (SScrollBar *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  EFocusCause EVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  FDeprecateSlateVector2D FVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined1 auVar7 [8];
  undefined4 uVar8;
  bool bVar9;
  FReply *pFVar10;
  TTransform2<float> *pTVar11;
  TSharedRef<SWidget,1> *pTVar12;
  undefined1 auStack_278 [32];
  undefined1 local_258 [8];
  FSharedReferencer<1> local_250;
  TSharedRef<SWidget,1> local_248;
  TSharedRef<SWidget,1> local_238;
  TTransform2<float> local_228;
  TTransform2<float> local_210;
  FReply local_1f8;
  FReply local_138;
  FGeometry local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_278;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar3 = (param_2->EffectingButton).KeyName;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar3 == EKeys::LeftMouseButton.KeyName) {
    bVar9 = IsNeeded(this);
    if (bVar9) {
      bVar9 = true;
      goto LAB_14296c8c9;
    }
  }
  bVar9 = false;
LAB_14296c8c9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar9) {
    if ((this->DragThumb).Object == (SBorder *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FReply *)(*pcVar5)();
        return pFVar10;
      }
    }
    pTVar2 = (this->DragThumb).SharedReferenceCount.ReferenceController;
    FVar4 = (FDeprecateSlateVector2D)(this->DragThumb).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (FVar4 == (FDeprecateSlateVector2D)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FReply *)(*pcVar5)();
        return pFVar10;
      }
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_258 = (undefined1  [8])FVar4;
    local_250.ReferenceController = pTVar2;
    SWidget::FindChildGeometry((SWidget *)this,&local_80,param_1,(TSharedRef<SWidget,1> *)local_258)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if ((this->DragThumb).Object == (SBorder *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FReply *)(*pcVar5)();
        return pFVar10;
      }
    }
    bVar9 = SWidget::IsDirectlyHovered((SWidget *)(this->DragThumb).Object);
    auVar7 = local_258;
    if (bVar9) {
      FVar4 = param_2->ScreenSpacePosition;
      local_258._0_4_ = FVar4._0_4_;
      uVar6 = local_258._0_4_;
      local_258._4_4_ = FVar4._4_4_;
      uVar8 = local_258._4_4_;
      local_258 = auVar7;
      if (this->Orientation == Orient_Horizontal) {
        pTVar11 = Inverse<TTransform2<float>_>(&local_228,&local_80.AccumulatedRenderTransform);
        this->DragGrabOffset =
             (float)uVar8 * (pTVar11->M).M[1][0] + (float)uVar6 * (pTVar11->M).M[0][0] +
             (pTVar11->Trans).field0_0x0._s_0.X;
        this->bDraggingThumb = true;
        local_258 = (undefined1  [8])FVar4;
      }
      else {
        pTVar11 = Inverse<TTransform2<float>_>(&local_210,&local_80.AccumulatedRenderTransform);
        this->DragGrabOffset =
             (float)uVar6 * (pTVar11->M).M[0][1] + (float)uVar8 * (pTVar11->M).M[1][1] +
             (pTVar11->Trans).field0_0x0._s_0.Y;
        this->bDraggingThumb = true;
        local_258 = (undefined1  [8])FVar4;
      }
    }
    else {
      bVar9 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUserScrolled);
      if (bVar9) {
        local_258 = (undefined1  [8])local_80.Size;
        auVar7 = local_258;
        if (this->Orientation == Orient_Horizontal) {
          local_258._0_4_ = local_80.Size._0_4_;
        }
        else {
          local_258._4_4_ = local_80.Size._4_4_;
          local_258._0_4_ = local_258._4_4_;
        }
        local_258._0_4_ = (float)local_258._0_4_ * __real_3f000000;
        this->bDraggingThumb = true;
        this->DragGrabOffset = (float)local_258._0_4_;
        local_258 = auVar7;
        ExecuteOnUserScrolled(this,param_1,param_2);
      }
    }
  }
  if (this->bDraggingThumb == false) {
    FReply::FReply(__return_storage_ptr__,false);
  }
  else {
    FReply::FReply(&local_138,true);
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_248);
    pFVar10 = FReply::CaptureMouse(&local_138,pTVar12);
    EVar1 = this->DragFocusCause;
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_238);
    pFVar10 = FReply::SetUserFocus(pFVar10,pTVar12,EVar1,false);
    FReply::FReply(&local_1f8,pFVar10);
    FReply::~FReply(&local_138);
    if (this->bPreventThrottling != false) {
      local_1f8._180_4_ = local_1f8._180_4_ | 0x40;
    }
    FReply::FReply(__return_storage_ptr__,&local_1f8);
    FReply::~FReply(&local_1f8);
  }
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14296f460

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SScrollBar::OnMouseButtonUp
          (SScrollBar *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  FWeakReferencer<1> FVar5;
  bool bVar6;
  FReply local_c8;
  
  FVar3 = (param_2->EffectingButton).KeyName;
  pTVar4 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar6 = FVar3 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (bVar6) {
    this->bDraggingThumb = false;
    FReply::FReply(&local_c8,true);
    FVar5.ReferenceController = local_c8.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_c8.MouseCaptor.Object = (SWidget *)0x0;
    local_c8.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
      }
    }
    local_c8.bUseHighPrecisionMouse = 0;
    local_c8.bReleaseMouseCapture = 1;
    FReply::FReply(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnMouseEnter @ 14296fd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SScrollBar::OnMouseEnter(SScrollBar *this,FGeometry *param_1,FPointerEvent *param_2)

{
  FSlateApplication *pFVar1;
  double dVar2;
  
  SWidget::OnMouseEnter((SWidget *)this,param_1,param_2);
  pFVar1 = FSlateApplication::Get();
  dVar2 = (double)(**(code **)(*(longlong *)pFVar1 + 0x60))(pFVar1);
  this->LastInteractionTime = dVar2;
  return;
}

// OnMouseLeave @ 1429700e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SScrollBar::OnMouseLeave(SScrollBar *this,FPointerEvent *param_1)

{
  FSlateApplication *pFVar1;
  double dVar2;
  
  SWidget::OnMouseLeave((SWidget *)this,param_1);
  pFVar1 = FSlateApplication::Get();
  dVar2 = (double)(**(code **)(*(longlong *)pFVar1 + 0x60))(pFVar1);
  this->LastInteractionTime = dVar2;
  return;
}

// OnMouseMove @ 142975410

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SScrollBar::OnMouseMove
          (SScrollBar *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  bool bVar1;
  
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if ((bVar1) &&
     ((*(float *)&param_2->CursorDelta != 0.0 ||
      (*(float *)&(param_2->CursorDelta).field_0x4 != 0.0)))) {
    bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnUserScrolled);
    if (bVar1) {
      ExecuteOnUserScrolled(this,param_1,param_2);
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FReply::FReply(__return_storage_ptr__,bVar1);
  return __return_storage_ptr__;
}

// SetDragFocusCause @ 14298f8d0

void __thiscall SScrollBar::SetDragFocusCause(SScrollBar *this,EFocusCause param_1)

{
  this->DragFocusCause = param_1;
  return;
}

// SetOnScrollBarVisibilityChanged @ 142998320

void __thiscall
SScrollBar::SetOnScrollBarVisibilityChanged
          (SScrollBar *this,TDelegate<void___cdecl(EVisibility),FDefaultDelegateUserPolicy> *param_1
          )

{
  TDelegate<void___cdecl(EVisibility),FDefaultDelegateUserPolicy>::operator=
            (&this->OnScrollBarVisibilityChanged,param_1);
  return;
}

// SetOnUserScrolled @ 142998340

void __thiscall
SScrollBar::SetOnUserScrolled
          (SScrollBar *this,TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnUserScrolled,param_1);
  return;
}

// SetScrollBarAlwaysVisible @ 142998b70

void __thiscall SScrollBar::SetScrollBarAlwaysVisible(SScrollBar *this,bool param_1)

{
  SWidget *pSVar1;
  SScrollBarTrack *this_00;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SWidget,1> *pTVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  SWidget *pSVar7;
  atomic<int> *paVar8;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  TSharedRef<SWidget,1> local_88;
  undefined1 local_78 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70;
  FDelegateAllocation FStack_68;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  bVar3 = false;
  this->bAlwaysShowScrollbar = param_1;
  if (param_1) {
    local_a8._0_2_ = CONCAT11(true,EVisibility::Visible.Value.Value);
    local_90 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    SCompoundWidget::SetVisibility((SCompoundWidget *)this,(TAttribute<EVisibility> *)&local_a8);
  }
  else {
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_88);
    pSVar1 = (SWidget *)(pTVar4->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar4->Object;
    if (pSVar1 == (SWidget *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = (atomic<int> *)&pSVar1->_padding_;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_88.SharedReferenceCount.ReferenceController._4_4_,
                        local_88.SharedReferenceCount.ReferenceController._0_4_));
    local_78[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_78[1] = true;
    FStack_68.DelegateSize = 0;
    local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_70,(FWriteAccessScope *)&local_58);
    local_40 = &FStack_68;
    puVar5 = UE::Core::Private::DelegateAllocate(0x38,&FStack_68);
    if (puVar5 != (undefined8 *)0x0) {
      local_a8 = ShouldBeVisible;
      lStack_a0 = (ulonglong)local_88.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
      if (pSVar1 != (SWidget *)0x0) {
        LOCK();
        *paVar8 = (atomic<int>)((int)*paVar8 + 1);
        UNLOCK();
      }
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseSPMethodDelegateInstance__00__CBVSScrollBar___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar5[3] = pSVar7;
      puVar5[4] = pSVar1;
      if (pSVar1 != (SWidget *)0x0) {
        LOCK();
        ((atomic<int> *)&pSVar1->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pSVar1->_padding_)[1] + 1);
        UNLOCK();
      }
      bVar3 = true;
      puVar5[5] = local_a8;
      puVar5[6] = lStack_a0;
      pSVar7 = pSVar1;
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar7);
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar1);
    SCompoundWidget::SetVisibility((SCompoundWidget *)this,(TAttribute<EVisibility> *)local_78);
  }
  if (((this->Track).Object == (SScrollBarTrack *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (this->Track).Object;
  if (this_00->bIsAlwaysVisible != param_1) {
    this_00->bIsAlwaysVisible = param_1;
    SWidget::Invalidate((SWidget *)this_00,Layout);
  }
  return;
}

// SetScrollBarTrackAlwaysVisible @ 142999020

void __thiscall SScrollBar::SetScrollBarTrackAlwaysVisible(SScrollBar *this,bool param_1)

{
  this->bAlwaysShowScrollbarTrack = param_1;
  return;
}

// SetScrollbarDisabledVisibility @ 142999200

void __thiscall SScrollBar::SetScrollbarDisabledVisibility(SScrollBar *this,EVisibility param_1)

{
  (this->ScrollbarDisabledVisibility).Value.Value = (uchar)param_1.Value.Value;
  return;
}

// SetState @ 14299a020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SScrollBar::SetState(SScrollBar *this,float param_1,float param_2,bool param_3)

{
  SWidget *this_00;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  atomic<int> aVar9;
  SScrollBarTrack *pSVar10;
  TSharedRef<SWidget_const_,1> *pTVar11;
  FSlateApplication *pFVar12;
  TSharedRef<SWidget_const_,1> local_68;
  FReadAccessScope local_58 [2];
  
  if (((this->Track).Object == (SScrollBarTrack *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar10 = (this->Track).Object;
  if (param_1 == pSVar10->OffsetFraction) {
    if ((pSVar10 == (SScrollBarTrack *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pSVar10 = (this->Track).Object;
    if (param_2 == pSVar10->ThumbSizeFraction) {
      return;
    }
  }
  if ((pSVar10 == (SScrollBarTrack *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar10 = (this->Track).Object;
  pSVar10->OffsetFraction = param_1;
  pSVar10->ThumbSizeFraction = param_2;
  if ((param_2 == 0.0) && (pSVar10->bIsAlwaysVisible == false)) {
    pSVar10->ThumbSizeFraction = 1.0;
  }
  else if ((__real_3f800000 < param_2) && (pSVar10->bIsAlwaysVisible != false)) {
    pSVar10->ThumbSizeFraction = 0.0;
  }
  SWidget::Invalidate((SWidget *)pSVar10,Layout);
  pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_68);
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar11->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (SWidget *)((longlong)&this->_padding_ + 1);
  if (((this_00 < pSVar4) || (pSVar4 + 1 <= this_00)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(UPTRINT)&InAttribute >= (UPTRINT)&InWidget && (UPTRINT)&InAttribute < (UPTRINT)&InWidget + sizeof(WidgetType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                         ,99,L"The attribute is not a member of the widget."), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
LAB_14299a224:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) goto LAB_14299a24e;
  }
  else {
    aVar2 = pTVar3->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14299a231;
      }
      LOCK();
      aVar9 = pTVar3->SharedReferenceCount;
      bVar8 = aVar2 == aVar9;
      if (bVar8) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar8);
    if (pSVar4 == (SWidget *)0x0) goto LAB_14299a224;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUpdateNow
              ((FSlateAttributeImpl *)this_00,pSVar4,Member);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
LAB_14299a231:
  LOCK();
  paVar1 = &pTVar3->WeakReferenceCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
  }
LAB_14299a24e:
  pFVar12 = FSlateApplication::Get();
  dVar7 = (double)(**(code **)(*(longlong *)pFVar12 + 0x60))(pFVar12);
  this->LastInteractionTime = dVar7;
  if (param_3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnUserScrolled,
               local_58);
    if ((*(int *)&(this->OnUserScrolled).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(this->OnUserScrolled).field_0x8, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x68))(plVar5,param_1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_58);
  }
  return;
}

// SetStyle @ 14299a540

void __thiscall SScrollBar::SetStyle(SScrollBar *this,FScrollBarStyle *param_1)

{
  EOrientation EVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FArguments local_2a8;
  
  if (param_1 == (FScrollBarStyle *)0x0) {
    FArguments::FArguments(&local_2a8);
    FArguments::~FArguments(&local_2a8);
    param_1 = local_2a8._Style;
    if (local_2a8._Style == (FScrollBarStyle *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Style",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SScrollBar.cpp"
                         ,0x16f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  EVar1 = this->Orientation;
  this->NormalThumbImage = &param_1->NormalThumbImage;
  this->HoveredThumbImage = &param_1->HoveredThumbImage;
  this->DraggedThumbImage = &param_1->DraggedThumbImage;
  lVar4 = 0xc0;
  if (EVar1 != Orient_Vertical) {
    lVar4 = 0x10;
  }
  this->BackgroundBrush = (FSlateBrush *)(&param_1->field_0x0 + lVar4);
  lVar4 = 0x170;
  if (EVar1 != Orient_Vertical) {
    lVar4 = 0x220;
  }
  this->TopBrush = (FSlateBrush *)(&param_1->field_0x0 + lVar4);
  lVar4 = 0x2d0;
  if (EVar1 != Orient_Vertical) {
    lVar4 = 0x380;
  }
  this->BottomBrush = (FSlateBrush *)(&param_1->field_0x0 + lVar4);
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

// SetThickness @ 14299ec60

void __thiscall
SScrollBar::SetThickness(SScrollBar *this,TAttribute<UE::Math::TVector2<double>_> *param_1)

{
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  SSpacer *pSVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  TVector2<double>_u_0 local_38;
  undefined1 local_28;
  undefined1 local_20 [8];
  ForAnyElementType FStack_18;
  int local_10;
  
  if ((this->ThicknessSpacer).Object == (SSpacer *)0x0) {
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
  local_38._s_0.X = (param_1->Value).field0_0x0._s_0.X;
  local_38._s_0.Y = (param_1->Value).field0_0x0._s_0.Y;
  pSVar1 = (this->ThicknessSpacer).Object;
  local_28 = param_1->bIsSet;
  this_00 = &param_1->Getter;
  local_10 = 0;
  local_20 = (undefined1  [8])0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_20,this_00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,&local_50);
  if ((local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    cVar5 = (**(code **)(*(longlong *)FStack_18.Data + 0x38))();
    if (cVar5 != '\0') {
      bVar4 = true;
      goto LAB_14299ed12;
    }
  }
  bVar4 = false;
LAB_14299ed12:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  pSVar1->bIsSpacerSizeBound = bVar4;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&pSVar1->SpacerSize,(SWidget *)pSVar1,
           (TAttribute<UE::Math::TVector2<double>_> *)&local_38._s_0,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FWriteAccessScope *)&local_68);
  if ((local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar2 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// SetUserVisibility @ 14299efd0

void __thiscall SScrollBar::SetUserVisibility(SScrollBar *this,TAttribute<EVisibility> *param_1)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->UserVisibility).Value.Value.Value = (param_1->Value).Value.Value;
  (this->UserVisibility).bIsSet = param_1->bIsSet;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->UserVisibility).Getter,this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// ShouldBeVisible @ 1429a08b0

EVisibility __thiscall SScrollBar::ShouldBeVisible(SScrollBar *this)

{
  float *pfVar1;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  uchar uVar2;
  uchar uVar3;
  SScrollBarTrack *pSVar4;
  code *pcVar5;
  bool bVar6;
  TEnumAsByte<EVisibility::Private> TVar7;
  char cVar8;
  EVisibility EVar9;
  longlong *plVar10;
  uchar *in_RDX;
  EVisibility local_res8 [8];
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  FReadAccessScope local_28;
  
  uVar2 = *(uchar *)((longlong)&this->_padding_ + 1);
  *in_RDX = (this->ScrollbarDisabledVisibility).Value.Value;
  bVar6 = SWidget::HasMouseCapture((SWidget *)this);
  EVar9 = EVisibility::Visible;
  if (!bVar6) {
    if (((this->Track).Object == (SScrollBarTrack *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      TVar7.Value = (*pcVar5)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar7.Value;
    }
    pSVar4 = (this->Track).Object;
    pfVar1 = &pSVar4->ThumbSizeFraction;
    if ((__real_3f7ff972 < *pfVar1 || __real_3f7ff972 == *pfVar1) &&
       (pSVar4->bIsAlwaysVisible == false)) goto LAB_1429a09ce;
    this_00 = &(this->UserVisibility).Getter;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_58);
    if ((*(int *)&(this->UserVisibility).Getter.field_0x10 == 0) ||
       ((plVar10 = *(longlong **)&(this->UserVisibility).Getter.field_0x8,
        plVar10 == (longlong *)0x0 || (cVar8 = (**(code **)(*plVar10 + 0x38))(), cVar8 == '\0')))) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
      if (*(int *)&(this->UserVisibility).Getter.field_0x10 == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = *(longlong **)&(this->UserVisibility).Getter.field_0x8;
      }
      (**(code **)(*plVar10 + 0x60))(plVar10,local_res8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      (this->UserVisibility).Value.Value.Value = (uchar)local_res8[0].Value.Value;
    }
    EVar9.Value.Value =
         (TEnumAsByte<EVisibility::Private>)
         (TEnumAsByte<EVisibility::Private>)(this->UserVisibility).Value.Value.Value;
  }
  *in_RDX = (uchar)EVar9.Value.Value;
LAB_1429a09ce:
  uVar3 = *in_RDX;
  if (uVar3 != uVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnScrollBarVisibilityChanged,&local_40);
    if ((*(int *)&(this->OnScrollBarVisibilityChanged).field_0x10 != 0) &&
       (plVar10 = *(longlong **)&(this->OnScrollBarVisibilityChanged).field_0x8,
       plVar10 != (longlong *)0x0)) {
      (**(code **)(*plVar10 + 0x68))(plVar10,uVar3);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
  }
  return (EVisibility)SUB81(in_RDX,0);
}

// ThumbSizeFraction @ 1429a9320

float __thiscall SScrollBar::ThumbSizeFraction(SScrollBar *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((this->Track).Object != (SScrollBarTrack *)0x0) {
    return ((this->Track).Object)->ThumbSizeFraction;
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
  return ((this->Track).Object)->ThumbSizeFraction;
}

// Tick @ 1429a9f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SScrollBar::Tick(SScrollBar *this,FGeometry *param_1,double param_2,float param_3)

{
  SBorder *pSVar1;
  SImage *pSVar2;
  code *pcVar3;
  bool bVar4;
  FSlateApplication *pFVar5;
  FSlateColor *pFVar6;
  float fVar7;
  double dVar8;
  undefined1 local_128 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  ForAnyElementType FStack_110;
  ulonglong local_108;
  FLinearColor_u_0 local_100;
  undefined1 local_f0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  ForAnyElementType FStack_e0;
  ulonglong local_d8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FLinearColor_u_0 local_a0;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  FLinearColor_u_0 local_70;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  FSlateColor local_40;
  FSlateColor local_2c;
  
  SWidget::Tick((SWidget *)this,param_1,param_2,param_3);
  if (((this->DragThumb).Object == (SBorder *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar1 = (this->DragThumb).Object;
  if (this->bDraggingThumb == false) {
    if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
      local_128._0_8_ = this->NormalThumbImage;
    }
    else {
      local_128._0_8_ = this->HoveredThumbImage;
    }
  }
  else {
    local_128._0_8_ = this->DraggedThumbImage;
  }
  local_128[8] = true;
  local_108 = 0;
  local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_110.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&pSVar1->BorderImageAttribute,(SWidget *)pSVar1,
           (TAttribute<FSlateBrush_const_*> *)local_128,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)&local_d0);
  if (((int)local_108 != 0) && (FStack_110.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_110.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_110,0,0,0x10);
    local_108 = local_108 & 0xffffffff00000000;
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  if (FStack_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_110.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
  if (((this->DragThumb).Object == (SBorder *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar1 = (this->DragThumb).Object;
  if (((this->Track).Object == (SScrollBarTrack *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_100._s_0.R = ___xmm_000000003f8000003f8000003f800000;
  local_100._s_0.G = _UNK_150689544;
  local_100._s_0.B = _UNK_150689548;
  local_100._s_0.A = _UNK_15068954c;
  if ((((0.0 < ((this->Track).Object)->ThumbSizeFraction) &&
       (local_100._s_0.R = ___xmm_3f8000003f8000003f8000003f800000,
       local_100._s_0.G = _UNK_15076b1f4, local_100._s_0.B = _UNK_15076b1f8,
       local_100._s_0.A = _UNK_15076b1fc, this->bDraggingThumb == false)) &&
      (*(char *)((longlong)&this->_padding_ + 3) == '\0')) &&
     ((local_100._s_0.R = ___xmm_3f4000003f8000003f8000003f800000, local_100._s_0.G = _UNK_150971c24
      , local_100._s_0.B = _UNK_150971c28, local_100._s_0.A = _UNK_150971c2c,
      this->bHideWhenNotInUse != false && (this->bAlwaysShowScrollbar == false)))) {
    if (this->bIsScrolling == false) {
      pFVar5 = FSlateApplication::Get();
      dVar8 = (double)(**(code **)(*(longlong *)pFVar5 + 0x60))(pFVar5);
      dVar8 = dVar8 - this->LastInteractionTime;
    }
    else {
      dVar8 = 0.0;
    }
    fVar7 = (float)((dVar8 - __real_3fc999999999999a) * __real_4014000000000000);
    if (__real_3f800000 <= fVar7) {
      fVar7 = __real_3f800000;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    local_100._s_0.R = 1.0;
    local_100._s_0.G = 1.0;
    local_100._s_0.B = 1.0;
    local_100._s_0.A = __real_3f800000 - fVar7;
  }
  local_f0 = 1;
  local_d8 = 0;
  local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_e0.Data = (FScriptContainerElement *)0x0;
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&pSVar1->_padding_,(SWidget *)pSVar1,(TAttribute<FLinearColor> *)&local_100._s_0,None)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_e8,(FWriteAccessScope *)&local_b8);
  if (((int)local_d8 != 0) && (FStack_e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e0,0,0,0x10);
    local_d8 = local_d8 & 0xffffffff00000000;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  if (FStack_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  if (((this->TopImage).Object == (SImage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar2 = (this->TopImage).Object;
  pFVar6 = GetTrackOpacity(this,&local_40);
  local_a0._0_8_ = *(undefined8 *)&(pFVar6->SpecifiedColor).field0_0x0;
  local_a0._8_8_ = *(undefined8 *)((longlong)&(pFVar6->SpecifiedColor).field0_0x0 + 8);
  local_90._0_1_ = pFVar6->ColorUseRule;
  local_90._1_1_ = pFVar6->ColorTableId;
  local_90._2_2_ = *(undefined2 *)&pFVar6->field_0x12;
  local_78 = 0;
  local_8c = 1;
  local_88 = 0;
  uStack_80 = 0;
  SImage::SetColorAndOpacity(pSVar2,(TAttribute<FSlateColor> *)&local_a0._s_0);
  if (((this->BottomImage).Object == (SImage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar2 = (this->BottomImage).Object;
  pFVar6 = GetTrackOpacity(this,&local_2c);
  local_70._0_8_ = *(undefined8 *)&(pFVar6->SpecifiedColor).field0_0x0;
  local_70._8_8_ = *(undefined8 *)((longlong)&(pFVar6->SpecifiedColor).field0_0x0 + 8);
  local_60._0_1_ = pFVar6->ColorUseRule;
  local_60._1_1_ = pFVar6->ColorTableId;
  local_60._2_2_ = *(undefined2 *)&pFVar6->field_0x12;
  local_48 = 0;
  local_5c = 1;
  local_58 = 0;
  uStack_50 = 0;
  SImage::SetColorAndOpacity(pSVar2,(TAttribute<FSlateColor> *)&local_70._s_0);
  return;
}

