// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 20

// ~SSidebarButton @ 142d67620

void __thiscall SSidebarButton::~SSidebarButton(SSidebarButton *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DockCheckBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PinCheckBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MainButton).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OpenBorder).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveIndicator).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Label).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetContextMenuContent);
  pvVar3 = *(void **)&(this->OnGetContextMenuContent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetContextMenuContent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDockToggled);
  pvVar3 = *(void **)&(this->OnDockToggled).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDockToggled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPinToggled);
  pvVar3 = *(void **)&(this->OnPinToggled).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPinToggled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPressed);
  pvVar3 = *(void **)&(this->OnPressed).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPressed);
  pTVar4 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 142d69be0

void __thiscall `SSidebarButton::Construct'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  lVar1 = *(longlong *)this;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  local_30 = *(TReferenceControllerBase<1> **)(lVar1 + 0x2b0);
  pTVar6 = local_30;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = local_30->SharedReferenceCount;
    do {
      pTVar6 = pTVar7;
      if (aVar4 == (atomic<int>)0x0) goto LAB_142d69c25;
      LOCK();
      aVar5 = local_30->SharedReferenceCount;
      bVar8 = aVar4 == aVar5;
      if (bVar8) {
        local_30->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar8);
    pTVar7 = *(TReferenceControllerBase<1> **)(lVar1 + 0x2a8);
    pTVar6 = local_30;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_142d69c4b;
  }
LAB_142d69c25:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  local_30 = pTVar6;
  if (bVar8) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_142d69c4b:
  local_38 = pTVar7;
  if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x2c0),&local_28);
  if ((*(int *)(lVar1 + 0x2d0) != 0) &&
     (plVar2 = *(longlong **)(lVar1 + 0x2c8), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Construct @ 142d88370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SSidebarButton::Construct
          (SSidebarButton *this,FArguments *param_1,TSharedRef<FSidebarDrawer,1> *param_2,
          ESidebarTabLocation param_3)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *pTVar3;
  atomic<int> aVar4;
  float fVar5;
  ESidebarTabLocation EVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong lVar9;
  FSidebarDrawer *pFVar10;
  SImage *pSVar11;
  FScriptContainerElement *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  code *pcVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  SVerticalBox *pSVar19;
  SComplexGradient *pSVar20;
  undefined4 uVar21;
  bool bVar22;
  ISlateStyle *pIVar23;
  FDockTabStyle *pFVar24;
  float *pfVar25;
  FArguments *pFVar26;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SImage,1> *pTVar27;
  FArguments *pFVar28;
  TAttribute<FText> *this_01;
  ETextOverflowPolicy *pEVar29;
  SSidebarButtonText *pSVar30;
  SSidebarButtonText *pSVar31;
  FArguments *pFVar32;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *this_02;
  FArguments *pFVar33;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_03;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar34;
  FSlotArguments *pFVar35;
  undefined1 *puVar36;
  TSharedRef<SSidebarButtonText,1> *pTVar37;
  TSharedRef<SCheckBox,1> *pTVar38;
  FArguments *pFVar39;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_04;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar40;
  FSlotArguments *pFVar41;
  TAttribute<float> *pTVar42;
  FArguments *pFVar43;
  FArguments *this_05;
  undefined8 *puVar44;
  ulong64 uVar45;
  TSharedRef<SButton,1> *pTVar46;
  FSlotArguments *pFVar47;
  FArguments *pFVar48;
  TSharedRef<SBorder,1> *pTVar49;
  longlong *plVar50;
  FArguments *pFVar51;
  SComplexGradient *pSVar52;
  FArguments *pFVar53;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> *this_06;
  TSharedRef<SOverlay,1> *pTVar54;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_07;
  TSharedRef<SBox,1> *pTVar55;
  FSlateColor *this_08;
  ulonglong uVar56;
  FSlotArgumentsMixin *this_09;
  FSharedReferencer<1> FVar57;
  undefined4 uVar58;
  FSlotArgumentsMixin *this_10;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auStackY_3c88 [32];
  undefined2 local_3c56 [7];
  TReferenceControllerBase<1> *local_3c48;
  undefined4 uStack_3c40;
  uint uStack_3c3c;
  T0RequiredArgs local_3c38;
  T0RequiredArgs local_3c37;
  T0RequiredArgs local_3c36;
  T0RequiredArgs local_3c35;
  T0RequiredArgs local_3c34;
  T0RequiredArgs local_3c33;
  T0RequiredArgs local_3c32;
  T0RequiredArgs local_3c31;
  T0RequiredArgs local_3c30;
  T0RequiredArgs local_3c2f;
  T0RequiredArgs local_3c2e;
  T0RequiredArgs local_3c2d;
  T0RequiredArgs local_3c2c [4];
  FArguments *local_3c28;
  FLLMScope local_3c20;
  FLLMScope local_3c1c;
  FLLMScope local_3c18;
  FLLMScope local_3c14;
  FLLMScope local_3c10;
  FLLMScope local_3c0c;
  FLLMScope local_3c08;
  FLLMScope local_3c04;
  FArguments *local_3c00;
  undefined1 local_3bf8 [8];
  ForAnyElementType local_3bf0;
  int local_3be8;
  SVerticalBox *local_3be0;
  FSharedReferencer<1> local_3bd8;
  float local_3bd0;
  undefined1 local_3bcc;
  undefined1 local_3bc8 [8];
  ForAnyElementType FStack_3bc0;
  ulonglong local_3bb8;
  float local_3bb0;
  undefined1 local_3bac;
  undefined1 local_3ba8 [8];
  ForAnyElementType FStack_3ba0;
  ulonglong local_3b98;
  float local_3b90;
  undefined1 local_3b8c;
  undefined1 local_3b88 [8];
  ForAnyElementType FStack_3b80;
  ulonglong local_3b78;
  uchar local_3b70;
  undefined1 local_3b6f;
  undefined1 local_3b68 [8];
  ForAnyElementType FStack_3b60;
  ulonglong local_3b58;
  float local_3b50 [2];
  TSharedPtr<SImage,1> local_3b48;
  SButton *local_3b38;
  FSharedReferencer<1> local_3b30;
  SBorder *local_3b28;
  FSharedReferencer<1> local_3b20;
  TSlateDecl<SSidebarButtonText,RequiredArgs::T0RequiredArgs> local_3b18;
  TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs> local_3b00;
  undefined4 local_3ae8;
  float fStack_3ae4;
  undefined4 uStack_3ae0;
  float fStack_3adc;
  undefined1 local_3ad8;
  undefined1 local_3ad0 [8];
  ForAnyElementType FStack_3ac8;
  ulonglong local_3ac0;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_3ab8;
  bool local_3aa8;
  undefined1 local_3aa0 [8];
  void *pvStack_3a98;
  undefined8 local_3a90;
  FText local_3a88;
  undefined1 local_3a78;
  undefined1 local_3a70 [8];
  ForAnyElementType FStack_3a68;
  int local_3a60;
  undefined8 local_3a58;
  undefined8 uStack_3a50;
  undefined4 local_3a48;
  undefined1 local_3a44;
  undefined1 local_3a40 [8];
  ForAnyElementType FStack_3a38;
  ulonglong local_3a30;
  SWidget *local_3a28;
  TReferenceControllerBase<1> *pTStack_3a20;
  SComplexGradient *local_3a18;
  FSharedReferencer<1> local_3a10;
  SWidget *local_3a08;
  TReferenceControllerBase<1> *pTStack_3a00;
  float local_39f8;
  undefined1 local_39f4;
  undefined1 local_39f0 [8];
  void *pvStack_39e8;
  undefined8 local_39e0;
  double local_39d8;
  double dStack_39d0;
  undefined1 local_39c8;
  undefined1 local_39c0;
  undefined1 local_39b8 [8];
  ForAnyElementType FStack_39b0;
  ulonglong local_39a8;
  FName local_3998;
  undefined4 uStack_3990;
  uint uStack_398c;
  SOverlay *local_3988;
  TReferenceControllerBase<1> *pTStack_3980;
  FName local_3978;
  FMemScope local_3970;
  FName local_3968;
  FName local_3960;
  FMemScope local_3958;
  FMemScope local_3950;
  FArguments *local_3948;
  FSlotArguments *local_3940;
  FMemScope local_3938;
  undefined4 local_3930 [2];
  undefined4 local_3928 [2];
  undefined8 local_3920;
  FSharedReferencer<1> local_3918;
  undefined8 local_3910;
  FSharedReferencer<1> FStack_3908;
  undefined8 local_3900;
  FSharedReferencer<1> local_38f8;
  undefined8 local_38f0;
  FSharedReferencer<1> local_38e8;
  undefined1 local_38e0 [8];
  undefined1 local_38d8 [8];
  undefined1 local_38d0 [8];
  FName local_38c8;
  FMemScope local_38c0;
  FName local_38b8;
  FName local_38b0;
  FMemScope local_38a8;
  FName local_38a0;
  FMemScope local_3898;
  FName local_3890;
  FName local_3888;
  FMemScope local_3880;
  TAttribute<float> local_3878;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_3858;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3840;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_3828;
  undefined8 local_3810;
  undefined8 uStack_3808;
  undefined4 local_3800;
  undefined8 local_37fc;
  undefined8 uStack_37f4;
  undefined4 local_37ec;
  undefined8 local_37e8;
  undefined8 uStack_37e0;
  undefined4 local_37d8;
  undefined8 local_37d4;
  undefined8 uStack_37cc;
  undefined4 local_37c4;
  TSharedRef<SWidget,1> local_37c0;
  TSharedRef<SWidget,1> local_37b0;
  initializer_list<FLinearColor> local_3798;
  TSharedRef<SWidget,1> local_3788;
  TSharedRef<SWidget,1> local_3778;
  TSharedRef<SVerticalBox,1> local_3768;
  TSharedRef<SWidget,1> local_3758;
  TSharedRef<SWidget,1> local_3748;
  TSharedRef<SWidget,1> local_3738;
  TSharedRef<SWidget,1> local_3728;
  TSharedRef<SHorizontalBox,1> local_3718;
  TSharedRef<SWidget,1> local_3708;
  TSharedRef<SWidget,1> local_36f8;
  FDestructionSentinel local_36e8;
  FDestructionSentinel local_36d0;
  FDestructionSentinel local_36b8;
  FDestructionSentinel local_36a0;
  FDestructionSentinel local_3688;
  FDestructionSentinel local_3670;
  FDestructionSentinel local_3658;
  FDestructionSentinel local_3640;
  FLinearColor_u_0 local_3628;
  undefined4 local_3618;
  undefined1 local_3614;
  undefined8 local_3610;
  undefined8 uStack_3608;
  undefined8 local_3600;
  FLinearColor_u_0 local_35f8;
  undefined4 local_35e8;
  undefined1 local_35e4;
  undefined8 local_35e0;
  undefined8 uStack_35d8;
  undefined8 local_35d0;
  FLinearColor_u_0 local_35c8;
  undefined4 local_35b8;
  undefined1 local_35b4;
  undefined8 local_35b0;
  undefined8 uStack_35a8;
  undefined8 local_35a0;
  FDestructionSentinel local_3598;
  FDestructionSentinel local_3580;
  undefined1 *local_3568;
  TAttribute<FMargin> local_3560;
  TAttribute<FMargin> local_3530;
  TAttribute<FMargin> local_3500;
  TVector2<double>_u_0 local_34d0;
  undefined1 local_34c0;
  undefined1 local_34b8;
  undefined8 local_34b0;
  undefined8 uStack_34a8;
  undefined8 local_34a0;
  TSharedRef<SImage,1> local_3498;
  SSidebarButtonText *local_3488;
  TReferenceControllerBase<1> *pTStack_3480;
  code *local_3478;
  longlong lStack_3470;
  code *local_3468;
  longlong lStack_3460;
  code *local_3458;
  longlong lStack_3450;
  code *local_3448;
  longlong lStack_3440;
  code *local_3438;
  longlong lStack_3430;
  SCheckBox *local_3428;
  TReferenceControllerBase<1> *pTStack_3420;
  TSharedRef<SCheckBox,1> local_3418;
  TSharedRef<SImage,1> local_3408;
  code *local_33f8;
  longlong lStack_33f0;
  code *local_33e8;
  longlong lStack_33e0;
  code *local_33d8;
  longlong lStack_33d0;
  code *local_33c8;
  longlong lStack_33c0;
  code *local_33b8;
  longlong lStack_33b0;
  TSharedRef<SCheckBox,1> local_33a8;
  TSharedRef<SImage,1> local_3398;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3388;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_3370;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3358;
  TSharedRef<SImage,1> local_3340;
  TSharedRef<SSidebarButtonText,1> local_3330;
  TSharedRef<SCheckBox,1> local_3320;
  TSharedRef<SCheckBox,1> local_3310;
  TSharedRef<SImage,1> local_3300;
  TSharedRef<SSidebarButtonText,1> local_32f0;
  TSharedRef<SCheckBox,1> local_32e0;
  TSharedRef<SCheckBox,1> local_32d0;
  SWidget *local_32c0;
  TReferenceControllerBase<1> *pTStack_32b8;
  SButton *local_32b0;
  TReferenceControllerBase<1> *pTStack_32a8;
  SBorder *local_32a0;
  TReferenceControllerBase<1> *pTStack_3298;
  code *local_3288;
  longlong lStack_3280;
  TSharedRef<SBox,1> local_3278;
  TSharedRef<SOverlay,1> local_3268;
  TSharedRef<SBorder,1> local_3258;
  TSharedRef<SButton,1> local_3248;
  TSharedPtr<FSidebarDrawer,1> local_3238;
  FName local_3228;
  FName local_3220;
  TAttribute<FSlateBrush_const_*> local_3218;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_31f0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_31d8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_31c0;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_31a8;
  FReadAccessScope local_3190;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3178;
  undefined1 local_3160 [24];
  TAttribute<float> local_3148;
  TAttribute<FText> local_3128;
  FSlotArguments local_30f8;
  FSlotArguments local_3098;
  FSlotArguments local_3038;
  FArguments local_2fd8;
  FArguments local_2dd0;
  undefined1 local_2bc8 [592];
  undefined1 local_2978 [24];
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_2960;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_2860;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_2760;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_2660;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_2560;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_2460;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_2360;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_2260;
  FArguments local_2160;
  FArguments local_1f08;
  FArguments local_1d00;
  FArguments local_1a58;
  FArguments local_17b0;
  FArguments local_1508;
  FArguments local_11c8;
  FArguments local_de8;
  FArguments local_a08;
  FArguments local_628;
  FLinearColor_u_0 local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  FLinearColor_u_0 local_b8 [8];
  
  local_b8[0]._0_8_ = __security_cookie.value ^ (ulonglong)auStackY_3c88;
  (this->DrawerWeak).Object = param_2->Object;
  pTVar7 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar7 != (this->DrawerWeak).WeakReferenceCount.ReferenceController) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar8->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
      }
    }
    (this->DrawerWeak).WeakReferenceCount.ReferenceController = pTVar7;
  }
  this->TabLocation = param_3;
  uVar58 = 0;
  if (&param_1->_OnPressed != &this->OnPressed) {
    local_3bf8 = (undefined1  [8])0x0;
    local_3bf0.Data = (FScriptContainerElement *)0x0;
    local_3be8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnPressed,
               &local_3190);
    if ((*(int *)&(param_1->_OnPressed).field_0x10 != 0) &&
       (plVar50 = *(longlong **)&(param_1->_OnPressed).field_0x8, plVar50 != (longlong *)0x0)) {
      (**(code **)(*plVar50 + 0x50))(plVar50,local_3bf8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_3190);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPressed,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3bf8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3bf8,
               (FWriteAccessScope *)&local_36e8);
    if ((local_3be8 != 0) && (local_3bf0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_3bf0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_3bf0,0,0,0x10);
      local_3be8 = 0;
    }
    if (local_36e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_36e8.Accessor,&local_36e8);
    }
    if (local_3bf0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3bf0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3bf8);
  }
  TDelegate<void___cdecl(TSharedRef<FSidebarDrawer,1>_const_&,bool),FDefaultDelegateUserPolicy>::
  operator=(&this->OnPinToggled,&param_1->_OnPinToggled);
  TDelegate<void___cdecl(TSharedRef<FSidebarDrawer,1>_const_&,bool),FDefaultDelegateUserPolicy>::
  operator=(&this->OnDockToggled,&param_1->_OnDockToggled);
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnGetContextMenuContent,&param_1->_OnGetContextMenuContent);
  pIVar23 = FAppStyle::Get();
  ::FName::FName(&local_3228,L"Docking.Tab");
  pFVar24 = (FDockTabStyle *)
            (**(code **)((longlong)*pIVar23 + 0xa0))(pIVar23,FDockTabStyle::TypeName);
  if (pFVar24 == (FDockTabStyle *)0x0) {
    pFVar24 = FDockTabStyle::GetDefault();
  }
  uVar56 = (ulonglong)_tls_index;
  this->DockTabStyle = pFVar24;
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar56 * 8);
  if ((*(int *)(lVar9 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar23 = FAppStyle::Get();
    pcVar15 = *(code **)((longlong)*pIVar23 + 0x40);
    ::FName::FName(&local_3220,L"Docking.Tab.ActiveTabIndicatorColor");
    this_08 = (FSlateColor *)(*pcVar15)(pIVar23,local_3160);
    FSlateColor::GetSpecifiedColor(this_08,&ActiveBorderColor);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar9 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ActiveBorderColorTransparent.field0_0x0._s_0.R = ActiveBorderColor.field0_0x0._s_0.R;
    ActiveBorderColorTransparent.field0_0x0._s_0.B = ActiveBorderColor.field0_0x0._s_0.B;
    ActiveBorderColorTransparent.field0_0x0._s_0.G = ActiveBorderColor.field0_0x0._s_0.G;
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar9 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    local_e8._s_0.G = ActiveBorderColorTransparent.field0_0x0._s_0.G;
    local_e8._s_0.R = ActiveBorderColorTransparent.field0_0x0._s_0.R;
    local_e8._s_0.B = ActiveBorderColorTransparent.field0_0x0._s_0.B;
    local_e8._s_0.A = ActiveBorderColorTransparent.field0_0x0._s_0.A;
    local_3798._First = (FLinearColor *)&local_e8;
    local_c8._4_4_ = ActiveBorderColorTransparent.field0_0x0._s_0.G;
    local_c8._0_4_ = ActiveBorderColorTransparent.field0_0x0._s_0.R;
    local_c8._8_4_ = ActiveBorderColorTransparent.field0_0x0._s_0.B;
    local_c8._12_4_ = ActiveBorderColorTransparent.field0_0x0._s_0.A;
    local_3798._Last = (FLinearColor *)local_b8;
    local_d8._4_4_ = ActiveBorderColor.field0_0x0._s_0.G;
    local_d8._0_4_ = ActiveBorderColor.field0_0x0._s_0.R;
    local_d8._8_4_ = ActiveBorderColor.field0_0x0._s_0.B;
    local_d8._12_4_ = ActiveBorderColor.field0_0x0._s_0.A;
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>::
    TArray<FLinearColor,TSizedDefaultAllocator<32>_>(&GradientStops,&local_3798);
    atexit(`SSidebarButton::Construct'::__l2::_dynamic_atexit_destructor_for__GradientStops__);
    _Init_thread_footer(&::_TSS2);
  }
  if ((this->TabLocation == Top) || (this->TabLocation == Bottom)) {
    fVar60 = param_1->_MinButtonSize;
    pfVar25 = &param_1->_ButtonThickness;
    fVar61 = *pfVar25;
    fVar59 = param_1->_MaxButtonSize;
  }
  else {
    fVar59 = param_1->_ButtonThickness;
    pfVar25 = &param_1->_MaxButtonSize;
    fVar61 = param_1->_MinButtonSize;
    fVar60 = fVar59;
  }
  fVar5 = *pfVar25;
  local_3b48.Object = (SImage *)0x0;
  local_3b48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (((param_2->Object->Config).Icon.bIsSet != false) ||
     (bVar22 = TAttribute<FSlateBrush_const_*>::IsBound(&(param_2->Object->Config).Icon), bVar22)) {
    pFVar26 = SImage::FArguments::FArguments(&local_1d00);
    local_3800 = CONCAT22(local_3800._2_2_,2);
    local_3618 = local_3800;
    local_3810 = ___xmm_3f8000003f800000000000003f800000;
    uStack_3808 = _UNK_15090c6d8;
    local_3614 = 1;
    local_3628._0_8_ = ___xmm_3f8000003f800000000000003f800000;
    local_3628._8_8_ = _UNK_15090c6d8;
    local_3600 = 0;
    local_3610 = 0;
    uStack_3608 = 0;
    pFVar26 = SImage::FArguments::ColorAndOpacity
                        (pFVar26,(TAttribute<FSlateColor> *)&local_3628._s_0);
    pFVar10 = param_2->Object;
    local_3218.Value = (pFVar10->Config).Icon.Value;
    local_3218.bIsSet = (pFVar10->Config).Icon.bIsSet;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_3218.Getter,&(pFVar10->Config).Icon.Getter);
    pFVar26 = SImage::FArguments::Image(pFVar26,&local_3218);
    local_34c0 = 1;
    local_34b8 = 1;
    local_34d0._s_0.X = ___xmm_40300000000000004030000000000000;
    local_34d0._s_0.Y = _UNK_15094b758;
    local_34a0 = 0;
    local_34b0 = 0;
    uStack_34a8 = 0;
    pFVar26 = SImage::FArguments::DesiredSizeOverride
                        (pFVar26,(TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)
                                 &local_34d0._s_0);
    this_00 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_3178,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarButton.cpp"
                         ,0x2d,&local_3c38);
    pTVar27 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_00,&local_3498,pFVar26);
    local_3918.ReferenceController = (pTVar27->SharedReferenceCount).ReferenceController;
    local_3b48.Object = pTVar27->Object;
    if (local_3918.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3918.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_3918.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3920 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_3b48.SharedReferenceCount,&local_3918);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3918.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3498.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3178._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_1d00);
  }
  local_3910 = 0;
  FStack_3908.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Label != (TSharedPtr<SSidebarButtonText,1> *)&local_3910) {
    (this->Label).Object = (SSidebarButtonText *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Label).SharedReferenceCount,&FStack_3908);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_3908.ReferenceController);
  if (((param_2->Object->Config).ButtonText.bIsSet != false) ||
     (bVar22 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                         ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                          &(param_2->Object->Config).ButtonText.Getter), bVar22)) {
    pFVar28 = SSidebarButtonText::FArguments::FArguments(&local_2160);
    pFVar28->_TextStyle = &this->DockTabStyle->TabTextStyle;
    this_01 = TAttribute<FText>::TAttribute<FText>
                        (&local_3128,&(param_2->Object->Config).ButtonText);
    TAttribute<FText>::operator=(&pFVar28->_Text,this_01);
    TAttribute<FText>::~TAttribute<FText>(this_01);
    local_3c56[0] = 0x101;
    if ((TOptional<ETextOverflowPolicy> *)local_3c56 != &pFVar28->_OverflowPolicy) {
      pEVar29 = TOptional<enum_ETextOverflowPolicy>::GetValue(local_3c56);
      (pFVar28->_OverflowPolicy).TypedValue = *pEVar29;
      (pFVar28->_OverflowPolicy).bIsSet = true;
    }
    *(undefined1 *)((longlong)&pFVar28->_padding_ + 2) = 1;
    FLLMScope::FLLMScope(&local_3c20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_38c8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_38c0,&local_38c8,true);
    TSlateDecl<SSidebarButtonText,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SSidebarButtonText,RequiredArgs::T0RequiredArgs>
              (&local_3b18,"SSidebarButtonText",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarButton.cpp"
               ,0x36,&local_3c37);
    FMemScope::~FMemScope(&local_38c0);
    FLLMScope::~FLLMScope(&local_3c20);
    if (local_3b18._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3b18._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3b18._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_3488 = (this->Label).Object;
    pTStack_3480 = (this->Label).SharedReferenceCount.ReferenceController;
    (this->Label).Object = local_3b18._Widget.Object;
    (this->Label).SharedReferenceCount.ReferenceController =
         local_3b18._Widget.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_3480);
    pSVar30 = TSharedPtr<SSidebarButtonText,1>::operator->(&local_3b18._Widget);
    SWidget::SWidgetConstruct((SWidget *)pSVar30,(FSlateBaseNamedArgs *)pFVar28);
    pSVar30 = local_3b18._Widget.Object;
    SSidebarButtonText::Construct(local_3b18._Widget.Object,pFVar28);
    pSVar31 = TSharedPtr<SSidebarButtonText,1>::operator->(&local_3b18._Widget);
    SWidget::CacheVolatility((SWidget *)pSVar31);
    pSVar31 = TSharedPtr<SSidebarButtonText,1>::operator->(&local_3b18._Widget);
    pSVar31->field_0x31 = pSVar31->field_0x31 | 4;
    if ((local_3b18._Widget.Object == (SSidebarButtonText *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar22)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    FVar57.ReferenceController = local_3b18._Widget.SharedReferenceCount.ReferenceController;
    local_3b18._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    local_3b18._Widget.Object = (SSidebarButtonText *)0x0;
    if ((pSVar30 == (SSidebarButtonText *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar22)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar57.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    TAttribute<float>::~TAttribute<float>(&local_2160._AngleDegrees);
    TAttribute<FText>::~TAttribute<FText>(&local_2160._Text);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2160);
  }
  pFVar32 = SCheckBox::FArguments::FArguments(&local_11c8);
  ::FName::FName(&local_38b8,L"ToggleButtonCheckbox");
  pIVar23 = FAppStyle::Get();
  pFVar32 = SCheckBox::FArguments::Style(pFVar32,pIVar23,&local_38b8,(char *)0x0);
  uStack_3c40 = 0;
  local_3c48 = (TReferenceControllerBase<1> *)GetPinVisibility;
  lStack_3470 = (ulonglong)uStack_3c3c << 0x20;
  local_3478 = GetPinVisibility;
  TAttribute<EVisibility>::Bind<SSidebarButton>
            ((TAttribute<EVisibility> *)&pFVar32->_padding_,this,(pmf_3a289416 *)&local_3478);
  uStack_3c40 = 0;
  local_3c48 = (TReferenceControllerBase<1> *)GetPinToolTipText;
  lStack_3460 = (ulonglong)uStack_3c3c << 0x20;
  local_3468 = GetPinToolTipText;
  pFVar32 = TSlateBaseNamedArgs<SCheckBox>::ToolTipText<SSidebarButton>
                      ((TSlateBaseNamedArgs<SCheckBox> *)pFVar32,this,(pmf_27539715 *)&local_3468);
  uStack_3c40 = 0;
  local_3c48 = (TReferenceControllerBase<1> *)IsPinChecked;
  lStack_3450 = (ulonglong)uStack_3c3c << 0x20;
  local_3458 = IsPinChecked;
  pFVar32 = SCheckBox::FArguments::IsChecked<SSidebarButton>
                      (pFVar32,this,(pmf_5660de24 *)&local_3458);
  uStack_3c40 = 0;
  local_3c48 = (TReferenceControllerBase<1> *)OnPinStateChanged;
  lStack_3440 = (ulonglong)uStack_3c3c << 0x20;
  local_3448 = OnPinStateChanged;
  pFVar32 = SCheckBox::FArguments::OnCheckStateChanged<SSidebarButton>
                      (pFVar32,this,(pmf_c439c63c *)&local_3448);
  local_3560.bIsSet = true;
  local_3560.Getter._16_8_ = 0;
  local_3560.Value.Left = ___xmm_40000000400000004000000040000000;
  local_3560.Value.Top = _UNK_15076ba34;
  local_3560.Value.Right = _UNK_15076ba38;
  local_3560.Value.Bottom = _UNK_15076ba3c;
  local_3560.Getter._0_8_ = 0;
  local_3560.Getter._8_8_ = 0;
  pFVar32 = SCheckBox::FArguments::Padding(pFVar32,&local_3560);
  pFVar32->_HAlign = HAlign_Center;
  pFVar26 = SImage::FArguments::FArguments(&local_1a58);
  local_37ec = CONCAT22(local_37ec._2_2_,2);
  local_35e8 = local_37ec;
  local_37fc = ___xmm_3f8000003f800000000000003f800000;
  uStack_37f4 = _UNK_15090c6d8;
  local_35e4 = 1;
  local_35f8._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_35f8._8_8_ = _UNK_15090c6d8;
  local_35d0 = 0;
  local_35e0 = 0;
  uStack_35d8 = 0;
  pFVar26 = SImage::FArguments::ColorAndOpacity(pFVar26,(TAttribute<FSlateColor> *)&local_35f8._s_0)
  ;
  local_3c48 = (TReferenceControllerBase<1> *)GetPinImage;
  uStack_3c40 = 0;
  lStack_3430 = (ulonglong)uStack_3c3c << 0x20;
  local_3438 = GetPinImage;
  pFVar26 = SImage::FArguments::Image<SSidebarButton>(pFVar26,this,(pmf_49ec6536 *)&local_3438);
  FLLMScope::FLLMScope(&local_3c1c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_38b0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_38a8,&local_38b0,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_3388,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarButton.cpp"
             ,0x46,&local_3c36);
  FMemScope::~FMemScope(&local_38a8);
  FLLMScope::~FLLMScope(&local_3c1c);
  pTVar27 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3388,&local_3408,pFVar26);
  pTVar7 = (pTVar27->SharedReferenceCount).ReferenceController;
  pSVar11 = pTVar27->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3a08 = (pFVar32->_Content).Widget.Object;
  pTStack_3a00 = (pFVar32->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar32->_Content).Widget.Object = (SWidget *)pSVar11;
  (pFVar32->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3a00);
  FLLMScope::FLLMScope(&local_3c18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_38a0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3898,&local_38a0,true);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
            (&local_3828,"SCheckBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarButton.cpp"
             ,0x3d,&local_3c35);
  FMemScope::~FMemScope(&local_3898);
  FLLMScope::~FLLMScope(&local_3c18);
  if (local_3828._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3828._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3828._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_3428 = (this->PinCheckBox).Object;
  pTStack_3420 = (this->PinCheckBox).SharedReferenceCount.ReferenceController;
  (this->PinCheckBox).Object = local_3828._Widget.Object;
  (this->PinCheckBox).SharedReferenceCount.ReferenceController =
       local_3828._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3420);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=(&local_3828,&local_3418,pFVar32);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3418.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3828._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3408.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3388._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_1a58);
  SCheckBox::FArguments::~FArguments(&local_11c8);
  pFVar32 = SCheckBox::FArguments::FArguments(&local_de8);
  ::FName::FName(&local_3890,L"ToggleButtonCheckbox");
  pIVar23 = FAppStyle::Get();
  pFVar32 = SCheckBox::FArguments::Style(pFVar32,pIVar23,&local_3890,(char *)0x0);
  uStack_3c40 = 0;
  local_3c48 = (TReferenceControllerBase<1> *)GetDockVisibility;
  lStack_33f0 = (ulonglong)uStack_3c3c << 0x20;
  local_33f8 = GetDockVisibility;
  TAttribute<EVisibility>::Bind<SSidebarButton>
            ((TAttribute<EVisibility> *)&pFVar32->_padding_,this,(pmf_3a289416 *)&local_33f8);
  uStack_3c40 = 0;
  local_3c48 = (TReferenceControllerBase<1> *)GetDockToolTipText;
  lStack_33e0 = (ulonglong)uStack_3c3c << 0x20;
  local_33e8 = GetDockToolTipText;
  pFVar32 = TSlateBaseNamedArgs<SCheckBox>::ToolTipText<SSidebarButton>
                      ((TSlateBaseNamedArgs<SCheckBox> *)pFVar32,this,(pmf_27539715 *)&local_33e8);
  uStack_3c40 = 0;
  local_3c48 = (TReferenceControllerBase<1> *)IsDockChecked;
  lStack_33d0 = (ulonglong)uStack_3c3c << 0x20;
  local_33d8 = IsDockChecked;
  pFVar32 = SCheckBox::FArguments::IsChecked<SSidebarButton>
                      (pFVar32,this,(pmf_5660de24 *)&local_33d8);
  uStack_3c40 = 0;
  local_3c48 = (TReferenceControllerBase<1> *)OnDockStateChanged;
  lStack_33c0 = (ulonglong)uStack_3c3c << 0x20;
  local_33c8 = OnDockStateChanged;
  pFVar32 = SCheckBox::FArguments::OnCheckStateChanged<SSidebarButton>
                      (pFVar32,this,(pmf_c439c63c *)&local_33c8);
  local_3530.Value.Left = ___xmm_40000000400000004000000040000000;
  local_3530.Value.Top = _UNK_15076ba34;
  local_3530.Value.Right = _UNK_15076ba38;
  local_3530.Value.Bottom = _UNK_15076ba3c;
  local_3530.bIsSet = true;
  local_3530.Getter._0_8_ = 0;
  local_3530.Getter._8_8_ = 0;
  local_3530.Getter._16_8_ = 0;
  pFVar32 = SCheckBox::FArguments::Padding(pFVar32,&local_3530);
  pFVar32->_HAlign = HAlign_Center;
  pFVar26 = SImage::FArguments::FArguments(&local_17b0);
  local_37d8 = CONCAT22(local_37d8._2_2_,2);
  local_35b8 = local_37d8;
  local_37e8 = ___xmm_3f8000003f800000000000003f800000;
  uStack_37e0 = _UNK_15090c6d8;
  local_35b4 = 1;
  local_35c8._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_35c8._8_8_ = _UNK_15090c6d8;
  local_35a0 = 0;
  local_35b0 = 0;
  uStack_35a8 = 0;
  pFVar26 = SImage::FArguments::ColorAndOpacity(pFVar26,(TAttribute<FSlateColor> *)&local_35c8._s_0)
  ;
  uStack_3c40 = 0;
  local_3c48 = (TReferenceControllerBase<1> *)GetDockImage;
  lStack_33b0 = (ulonglong)uStack_3c3c << 0x20;
  local_33b8 = GetDockImage;
  pFVar26 = SImage::FArguments::Image<SSidebarButton>(pFVar26,this,(pmf_49ec6536 *)&local_33b8);
  FLLMScope::FLLMScope(&local_3c14,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3888 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3880,&local_3888,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_3358,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarButton.cpp"
             ,0x54,&local_3c34);
  FMemScope::~FMemScope(&local_3880);
  FLLMScope::~FLLMScope(&local_3c14);
  pTVar27 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3358,&local_3398,pFVar26);
  pTVar7 = (pTVar27->SharedReferenceCount).ReferenceController;
  pSVar11 = pTVar27->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3a28 = (pFVar32->_Content).Widget.Object;
  pTStack_3a20 = (pFVar32->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar32->_Content).Widget.Object = (SWidget *)pSVar11;
  (pFVar32->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3a20);
  FLLMScope::FLLMScope(&local_3c10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3978 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3970,&local_3978,true);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
            (&local_3370,"SCheckBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarButton.cpp"
             ,0x4b,&local_3c33);
  FMemScope::~FMemScope(&local_3970);
  FLLMScope::~FLLMScope(&local_3c10);
  this_02 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::Expose<SCheckBox>
                      (&local_3370,&this->DockCheckBox);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_02,&local_33a8,pFVar32);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_33a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3370._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3398.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3358._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_17b0);
  SCheckBox::FArguments::~FArguments(&local_de8);
  local_3bd8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_3 < Top) {
    pFVar33 = SVerticalBox::FArguments::FArguments(&local_2fd8);
    this_03 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                        (&local_31f0,"SVerticalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarButton.cpp"
                         ,0x5e,&local_3c32);
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_03,&local_3768,pFVar33);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_31f0._Widget.SharedReferenceCount.ReferenceController);
    DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_2fd8._Slots.AllocatorInstance.Data,local_2fd8._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_2fd8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_2fd8._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2fd8);
    fVar17 = __real_40400000;
    if (local_3b48.Object != (SImage *)0x0) {
      pFVar34 = SVerticalBox::AddSlot(local_3768.Object,&local_2360);
      pFVar35 = SVerticalBox::FSlot::FSlotArguments::AutoHeight
                          ((FSlotArguments *)&pFVar34->_padding_);
      pFVar35 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                          ((FSlotArgumentsMixin *)&pFVar35->field_0x48,HAlign_Center);
      pFVar35 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                          ((FSlotArgumentsMixin *)&pFVar35->field_0x48,VAlign_Center);
      pFVar35 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar35->field_0x18,0.0,__real_40000000,0.0,
                           fVar17);
      pTVar27 = TSharedPtr<SImage,1>::ToSharedRef(&local_3b48,&local_3340);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_3788,pTVar27);
      TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar35,&local_3788);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3788.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3340.SharedReferenceCount.ReferenceController);
      SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_2360);
    }
    fVar16 = __real_3f800000;
    this_10 = (FSlotArgumentsMixin *)&DAT_00000018;
    if ((this->Label).Object != (SSidebarButtonText *)0x0) {
      pFVar34 = SVerticalBox::AddSlot(local_3768.Object,&local_2260);
      local_3878.Value = 1.0;
      local_3878.bIsSet = true;
      local_3878.Getter._0_8_ = 0;
      local_3878.Getter._8_8_ = 0;
      local_3878.Getter._16_8_ = 0;
      pFVar35 = SVerticalBox::FSlot::FSlotArguments::FillHeight
                          ((FSlotArguments *)&pFVar34->_padding_,&local_3878);
      puVar36 = &pFVar35->field_0x48;
      if (local_3930 != (undefined4 *)puVar36) {
        *(undefined4 *)puVar36 = 2;
        pFVar35->field_0x4c = 1;
      }
      this_09 = (FSlotArgumentsMixin *)&pFVar35->field_0x18;
      if (puVar36 == (undefined1 *)0x0) {
        this_09 = (FSlotArgumentsMixin *)&DAT_00000018;
      }
      pFVar35 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                          (this_09,0.0,fVar17,0.0,fVar17);
      pTVar37 = TSharedPtr<SSidebarButtonText,1>::ToSharedRef(&this->Label,&local_3330);
      pTVar7 = (pTVar37->SharedReferenceCount).ReferenceController;
      local_3708.Object = (SWidget *)pTVar37->Object;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_3708.SharedReferenceCount.ReferenceController = pTVar7;
      TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar35,&local_3708);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3330.SharedReferenceCount.ReferenceController);
      SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_2260);
    }
    if (param_2->Object->bDisablePin == false) {
      pFVar34 = SVerticalBox::AddSlot(local_3768.Object,&local_2960);
      pFVar35 = SVerticalBox::FSlot::FSlotArguments::AutoHeight
                          ((FSlotArguments *)&pFVar34->_padding_);
      puVar36 = &pFVar35->field_0x48;
      if (local_3928 != (undefined4 *)puVar36) {
        *(undefined4 *)puVar36 = 2;
        pFVar35->field_0x4c = 1;
      }
      if (puVar36 != (undefined1 *)0x0) {
        this_10 = (FSlotArgumentsMixin *)&pFVar35->field_0x18;
      }
      pFVar35 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                          (this_10,0.0,fVar17,0.0,fVar16);
      pTVar38 = TSharedPtr<SCheckBox,1>::ToSharedRef(&this->PinCheckBox,&local_3320);
      pTVar7 = (pTVar38->SharedReferenceCount).ReferenceController;
      local_36f8.Object = (SWidget *)pTVar38->Object;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_36f8.SharedReferenceCount.ReferenceController = pTVar7;
      TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar35,&local_36f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3320.SharedReferenceCount.ReferenceController);
      SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_2960);
    }
    if (param_2->Object->bDisableDock == false) {
      pFVar34 = SVerticalBox::AddSlot(local_3768.Object,&local_2860);
      pFVar35 = SVerticalBox::FSlot::FSlotArguments::AutoHeight
                          ((FSlotArguments *)&pFVar34->_padding_);
      pFVar35 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                          ((FSlotArgumentsMixin *)&pFVar35->field_0x48,HAlign_Center);
      pFVar35 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar35->field_0x18,0.0,fVar16,0.0,fVar17);
      pTVar38 = TSharedPtr<SCheckBox,1>::ToSharedRef(&this->DockCheckBox,&local_3310);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_3778,pTVar38);
      TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar35,&local_3778);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3778.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3310.SharedReferenceCount.ReferenceController);
      SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_2860);
    }
    local_38f8.ReferenceController = local_3768.SharedReferenceCount.ReferenceController;
    if (local_3768.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3768.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3768.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3be0 = local_3768.Object;
    local_3900 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_3bd8,&local_38f8);
    FVar57.ReferenceController = local_38f8.ReferenceController;
    local_3718.SharedReferenceCount.ReferenceController =
         local_3768.SharedReferenceCount.ReferenceController;
  }
  else {
    pFVar39 = SHorizontalBox::FArguments::FArguments(&local_1f08);
    this_04 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_31d8,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarButton.cpp"
                         ,0x91,&local_3c31);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
              (this_04,&local_3718,pFVar39);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_31d8._Widget.SharedReferenceCount.ReferenceController);
    TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
    ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1f08._Slots);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1f08);
    fVar17 = __real_40400000;
    if (local_3b48.Object != (SImage *)0x0) {
      pFVar40 = SHorizontalBox::AddSlot(local_3718.Object,&local_2760);
      pFVar41 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                          ((FSlotArguments *)&pFVar40->_padding_);
      pFVar41 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                          ((FSlotArgumentsMixin *)&pFVar41->field_0x48,HAlign_Center);
      pFVar41 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                          ((FSlotArgumentsMixin *)&pFVar41->field_0x48,VAlign_Center);
      pFVar41 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar41->field_0x18,__real_40000000,0.0,fVar17,
                           0.0);
      pTVar27 = TSharedPtr<SImage,1>::ToSharedRef(&local_3b48,&local_3300);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_3758,pTVar27);
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar41,&local_3758);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3758.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3300.SharedReferenceCount.ReferenceController);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_2760);
    }
    fVar16 = __real_3f800000;
    if ((this->Label).Object != (SSidebarButtonText *)0x0) {
      pFVar40 = SHorizontalBox::AddSlot(local_3718.Object,&local_2660);
      local_3b50[0] = 1.0;
      pTVar42 = TAttribute<float>::TAttribute<float>(&local_3148,local_3b50);
      pFVar41 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                          ((FSlotArguments *)&pFVar40->_padding_,pTVar42);
      pFVar41 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                          ((FSlotArgumentsMixin *)&pFVar41->field_0x48,VAlign_Center);
      pFVar41 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar41->field_0x18,fVar17,0.0,fVar17,0.0);
      pTVar37 = TSharedPtr<SSidebarButtonText,1>::ToSharedRef(&this->Label,&local_32f0);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSidebarButtonText>(&local_3748,pTVar37);
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar41,&local_3748);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3748.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_32f0.SharedReferenceCount.ReferenceController);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_2660);
    }
    if (param_2->Object->bDisablePin == false) {
      pFVar40 = SHorizontalBox::AddSlot(local_3718.Object,&local_2560);
      pFVar41 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                          ((FSlotArguments *)&pFVar40->_padding_);
      pFVar41 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                          ((FSlotArgumentsMixin *)&pFVar41->field_0x48,VAlign_Center);
      pFVar41 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar41->field_0x18,fVar17,0.0,fVar16,0.0);
      pTVar38 = TSharedPtr<SCheckBox,1>::ToSharedRef(&this->PinCheckBox,&local_32e0);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_3738,pTVar38);
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar41,&local_3738);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3738.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_32e0.SharedReferenceCount.ReferenceController);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_2560);
    }
    if (param_2->Object->bDisableDock == false) {
      pFVar40 = SHorizontalBox::AddSlot(local_3718.Object,&local_2460);
      pFVar41 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                          ((FSlotArguments *)&pFVar40->_padding_);
      pFVar41 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                          ((FSlotArgumentsMixin *)&pFVar41->field_0x48,VAlign_Center);
      pFVar41 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                          ((FSlotArgumentsMixin *)&pFVar41->field_0x18,fVar16,0.0,fVar17,0.0);
      pTVar38 = TSharedPtr<SCheckBox,1>::ToSharedRef(&this->DockCheckBox,&local_32d0);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SCheckBox>(&local_3728,pTVar38);
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar41,&local_3728);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3728.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_32d0.SharedReferenceCount.ReferenceController);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_2460);
    }
    local_38e8.ReferenceController = local_3718.SharedReferenceCount.ReferenceController;
    if (local_3718.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3718.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3718.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3be0 = (SVerticalBox *)local_3718.Object;
    local_38f0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_3bd8,&local_38e8);
    FVar57.ReferenceController = local_38e8.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar57.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3718.SharedReferenceCount.ReferenceController);
  local_3500.bIsSet = true;
  local_3500.Getter._16_8_ = 0;
  local_3500.Value.Left = 0.0;
  local_3500.Value.Top = 0.0;
  local_3500.Value.Right = 0.0;
  local_3500.Value.Bottom = 0.0;
  local_3500.Getter._0_8_ = 0;
  local_3500.Getter._8_8_ = 0;
  TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::SetPadding
            ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0> *)
             &this->_padding_,&local_3500);
  local_3940 = (FSlotArguments *)&this->_padding_;
  if (&this->_padding_ == (longlong *)0x0) {
    local_3940 = (FSlotArguments *)0x0;
  }
  pFVar43 = SBox::FArguments::FArguments(&local_1508);
  local_39f4 = 1;
  local_39e0 = 0;
  local_39f0 = (undefined1  [8])0x0;
  pvStack_39e8 = (void *)0x0;
  (pFVar43->_MinDesiredWidth).Value.Size = fVar60;
  (pFVar43->_MinDesiredWidth).bIsSet = true;
  local_39f8 = fVar60;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar43->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_39f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_39f0);
  if (pvStack_39e8 != (void *)0x0) {
    FMemory::Free(pvStack_39e8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_39f0);
  local_3bcc = 1;
  local_3bb8 = 0;
  local_3bc8 = (undefined1  [8])0x0;
  FStack_3bc0.Data = (FScriptContainerElement *)0x0;
  (pFVar43->_MaxDesiredWidth).Value.Size = fVar59;
  (pFVar43->_MaxDesiredWidth).bIsSet = true;
  local_3bd0 = fVar59;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar43->_MaxDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3bc8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3bc8,
             (FWriteAccessScope *)&local_36d0);
  if (((int)local_3bb8 != 0) && (FStack_3bc0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3bc0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3bc0,0,0,0x10);
    local_3bb8 = local_3bb8 & 0xffffffff00000000;
  }
  if (local_36d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_36d0.Accessor,&local_36d0);
  }
  if (FStack_3bc0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3bc0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3bc8);
  local_3bac = 1;
  local_3b98 = 0;
  local_3ba8 = (undefined1  [8])0x0;
  FStack_3ba0.Data = (FScriptContainerElement *)0x0;
  (pFVar43->_MinDesiredHeight).Value.Size = fVar61;
  (pFVar43->_MinDesiredHeight).bIsSet = true;
  local_3bb0 = fVar61;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar43->_MinDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3ba8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3ba8,
             (FWriteAccessScope *)&local_36b8);
  if (((int)local_3b98 != 0) && (FStack_3ba0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3ba0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3ba0,0,0,0x10);
    local_3b98 = local_3b98 & 0xffffffff00000000;
  }
  if (local_36b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_36b8.Accessor,&local_36b8);
  }
  if (FStack_3ba0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3ba0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3ba8);
  local_3b8c = 1;
  local_3b78 = 0;
  local_3b88 = (undefined1  [8])0x0;
  FStack_3b80.Data = (FScriptContainerElement *)0x0;
  (pFVar43->_MaxDesiredHeight).Value.Size = fVar5;
  (pFVar43->_MaxDesiredHeight).bIsSet = true;
  local_3b90 = fVar5;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar43->_MaxDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3b88,
             (FWriteAccessScope *)&local_36a0);
  if (((int)local_3b78 != 0) && (FStack_3b80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3b80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3b80,0,0,0x10);
    local_3b78 = local_3b78 & 0xffffffff00000000;
  }
  if (local_36a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_36a0.Accessor,&local_36a0);
  }
  if (FStack_3b80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3b80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3b88);
  *(undefined1 *)((longlong)&pFVar43->_padding_ + 2) = 1;
  local_3c28 = SOverlay::FArguments::FArguments(&local_2dd0);
  local_3c00 = (FArguments *)SOverlay::Slot(&local_3038,0);
  this_05 = SButton::FArguments::FArguments(&local_628);
  pFVar10 = param_2->Object;
  local_3a88.TextData.Reference = (pFVar10->Config).ToolTipText.Value.TextData.Reference;
  if (local_3a88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3a88.TextData.Reference + 8))
              (local_3a88.TextData.Reference,local_38e0);
  }
  local_3a88.Flags = (pFVar10->Config).ToolTipText.Value.Flags;
  local_3a78 = (pFVar10->Config).ToolTipText.bIsSet;
  local_3a70 = (undefined1  [8])0x0;
  FStack_3a68.Data = (FScriptContainerElement *)0x0;
  local_3a60 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_3a70,
             &(pFVar10->Config).ToolTipText.Getter);
  FText::operator=((FText *)this_05,&local_3a88);
  *(undefined1 *)&this_05->_padding_ = local_3a78;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_05->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a70,
             (FWriteAccessScope *)&local_3688);
  if ((local_3a60 != 0) && (FStack_3a68.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3a68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a68,0,0,0x10);
    local_3a60 = 0;
  }
  if (local_3688.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3688.Accessor,&local_3688);
  }
  if (FStack_3a68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3a68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3a70);
  if (local_3a88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3a88.TextData.Reference + 0x10))();
  }
  fStack_3ae4 = (this->DockTabStyle->TabPadding).Top;
  fStack_3adc = (this->DockTabStyle->TabPadding).Bottom;
  local_3ad8 = 1;
  local_3ac0 = 0;
  local_3ad0 = (undefined1  [8])0x0;
  FStack_3ac8.Data = (FScriptContainerElement *)0x0;
  local_3ae8 = 0;
  uStack_3ae0 = 0;
  (this_05->_ContentPadding).Value.Left = 0.0;
  (this_05->_ContentPadding).Value.Top = fStack_3ae4;
  (this_05->_ContentPadding).Value.Right = 0.0;
  (this_05->_ContentPadding).Value.Bottom = fStack_3adc;
  (this_05->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_05->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3ad0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3ad0,
             (FWriteAccessScope *)&local_3670);
  if (((int)local_3ac0 != 0) && (FStack_3ac8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3ac8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3ac8,0,0,0x10);
    local_3ac0 = local_3ac0 & 0xffffffff00000000;
  }
  if (local_3670.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3670.Accessor,&local_3670);
  }
  if (FStack_3ac8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3ac8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3ad0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_05->_OnPressed,
             (FWriteAccessScope *)&local_3580);
  local_3568 = &(this_05->_OnPressed).field_0x8;
  puVar44 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_3568);
  if (puVar44 != (undefined8 *)0x0) {
    *puVar44 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar45 = FDelegateHandle::GenerateNewID();
    puVar44[2] = uVar45;
    *puVar44 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`SSidebarButton::Construct'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar44[3] = this;
  }
  if (local_3580.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3580.Accessor,&local_3580);
  }
  uStack_37cc = _UNK_15090c6d8;
  local_37d4 = ___xmm_3f8000003f800000000000003f800000;
  local_3a44 = 1;
  local_3a58 = ___xmm_3f8000003f800000000000003f800000;
  uStack_3a50 = _UNK_15090c6d8;
  local_37c4 = CONCAT22(local_37c4._2_2_,2);
  uVar21 = local_37c4;
  local_3a48 = local_37c4;
  local_3a30 = 0;
  local_3a40 = (undefined1  [8])0x0;
  FStack_3a38.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this_05->_ForegroundColor).Value.SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(this_05->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_37cc;
  local_37c4._0_1_ = (undefined1)2;
  local_37c4._1_1_ = (undefined1)(2 >> 8);
  (this_05->_ForegroundColor).Value.ColorUseRule = (undefined1)local_37c4;
  (this_05->_ForegroundColor).Value.ColorTableId = local_37c4._1_1_;
  *(undefined2 *)&(this_05->_ForegroundColor).Value.field_0x12 = local_37c4._2_2_;
  (this_05->_ForegroundColor).bIsSet = true;
  local_37c4 = uVar21;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_05->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a40,
             (FWriteAccessScope *)&local_3658);
  if (((int)local_3a30 != 0) && (FStack_3a38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3a38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a38,0,0,0x10);
    local_3a30 = local_3a30 & 0xffffffff00000000;
  }
  if (local_3658.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3658.Accessor,&local_3658);
  }
  if (FStack_3a38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3a38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3a40);
  pSVar19 = local_3be0;
  if ((local_3be0 == (SVerticalBox *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  FVar57.ReferenceController = local_3bd8.ReferenceController;
  local_3c48 = local_3bd8.ReferenceController;
  if (local_3bd8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3bd8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3bd8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar19 == (SVerticalBox *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if (FVar57.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar57.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar57.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_32c0 = (this_05->_Content).Widget.Object;
  pTStack_32b8 = (this_05->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this_05->_Content).Widget.Object = (SWidget *)pSVar19;
  (this_05->_Content).Widget.SharedReferenceCount.ReferenceController = FVar57.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_32b8);
  FLLMScope::FLLMScope(&local_3c0c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3968 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3938,&local_3968,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_3840,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarButton.cpp"
             ,0xd0,&local_3c30);
  FMemScope::~FMemScope(&local_3938);
  FLLMScope::~FLLMScope(&local_3c0c);
  if (local_3840._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3840._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3840._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_32b0 = (this->MainButton).Object;
  pTStack_32a8 = (this->MainButton).SharedReferenceCount.ReferenceController;
  (this->MainButton).Object = local_3840._Widget.Object;
  (this->MainButton).SharedReferenceCount.ReferenceController =
       local_3840._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_32a8);
  pTVar46 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3840,&local_3248,this_05);
  pFVar51 = local_3c00;
  pTVar7 = (pTVar46->SharedReferenceCount).ReferenceController;
  local_3b38 = pTVar46->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3b30.ReferenceController = pTVar7;
  if ((SButton **)&local_3c00->_padding_ != &local_3b38) {
    local_3c00->_padding_ = (longlong)local_3b38;
    local_3b38 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_3c00->_padding_,&local_3b30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b30.ReferenceController);
  local_3c28 = SOverlay::FArguments::operator+(local_3c28,(FSlotArguments *)pFVar51);
  pFVar47 = SOverlay::Slot(&local_3098,0);
  pFVar48 = SBorder::FArguments::FArguments(&local_a08);
  local_3b70 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_3b6f = 1;
  local_3b58 = 0;
  local_3b68 = (undefined1  [8])0x0;
  FStack_3b60.Data = (FScriptContainerElement *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar48->_padding_ =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar48->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar48->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3b68,
             (FWriteAccessScope *)&local_3598);
  if (((int)local_3b58 != 0) && (FStack_3b60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3b60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3b60,0,0,0x10);
    local_3b58 = local_3b58 & 0xffffffff00000000;
  }
  if (local_3598.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3598.Accessor,&local_3598);
  }
  if (FStack_3b60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3b60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3b68);
  FLLMScope::FLLMScope(&local_3c08,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3960 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3958,&local_3960,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_3858,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarButton.cpp"
             ,0xdf,&local_3c2f);
  FMemScope::~FMemScope(&local_3958);
  FLLMScope::~FLLMScope(&local_3c08);
  if (local_3858._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3858._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3858._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_32a0 = (this->OpenBorder).Object;
  pTStack_3298 = (this->OpenBorder).SharedReferenceCount.ReferenceController;
  (this->OpenBorder).Object = local_3858._Widget.Object;
  (this->OpenBorder).SharedReferenceCount.ReferenceController =
       local_3858._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3298);
  pTVar49 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3858,&local_3258,pFVar48);
  pTVar8 = (pTVar49->SharedReferenceCount).ReferenceController;
  local_3b28 = pTVar49->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3b20.ReferenceController = pTVar8;
  if ((SBorder **)&pFVar47->_padding_ != &local_3b28) {
    pFVar47->_padding_ = (longlong)local_3b28;
    local_3b28 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar47->_padding_,&local_3b20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b20.ReferenceController);
  local_3948 = SOverlay::FArguments::operator+(local_3c28,pFVar47);
  pFVar47 = SOverlay::Slot(&local_30f8,0);
  EVar6 = this->TabLocation;
  plVar50 = &pFVar47->_padding_;
  if (EVar6 == Left) {
    uVar58 = 1;
  }
  else if (EVar6 == Right) {
    uVar58 = 3;
  }
  if ((longlong *)local_38d8 != plVar50) {
    *(undefined4 *)plVar50 = uVar58;
    *(undefined1 *)((longlong)&pFVar47->_padding_ + 4) = 1;
    EVar6 = this->TabLocation;
  }
  if (plVar50 == (longlong *)0x0) {
    pFVar47 = (FSlotArguments *)0x0;
  }
  if ((EVar6 != Left) && (EVar6 != Right)) {
    if (EVar6 == Top) {
      uVar58 = 1;
      goto LAB_142d8a575;
    }
    uVar58 = 3;
    if (EVar6 == Bottom) goto LAB_142d8a575;
  }
  uVar58 = 0;
LAB_142d8a575:
  if ((longlong *)local_38d0 != &pFVar47->_padding_) {
    *(undefined4 *)&pFVar47->_padding_ = uVar58;
    *(undefined1 *)((longlong)&pFVar47->_padding_ + 4) = 1;
  }
  local_3c28 = (FArguments *)(FSlotArguments *)0x0;
  if (pFVar47 != (FSlotArguments *)0xffffffffffffffb8) {
    local_3c28 = (FArguments *)pFVar47;
  }
  pFVar51 = SComplexGradient::FArguments::FArguments((FArguments *)local_2bc8);
  dVar18 = _UNK_150689688;
  local_39c8 = 1;
  local_39c0 = 1;
  local_39a8 = 0;
  local_39d8 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_39d0 = _UNK_150689688;
  local_39b8 = (undefined1  [8])0x0;
  FStack_39b0.Data = (FScriptContainerElement *)0x0;
  if ((TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&local_39d8 !=
      &pFVar51->_DesiredSizeOverride) {
    (pFVar51->_DesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.X =
         ___xmm_3ff00000000000003ff0000000000000;
    (pFVar51->_DesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.Y = dVar18;
    (pFVar51->_DesiredSizeOverride).Value.bIsSet = true;
  }
  (pFVar51->_DesiredSizeOverride).bIsSet = true;
  local_3c00 = pFVar51;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar51->_DesiredSizeOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_39b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_39b8,
             (FWriteAccessScope *)&local_3640);
  if (((int)local_39a8 != 0) && (FStack_39b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_39b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_39b0,0,0,0x10);
    local_39a8 = local_39a8 & 0xffffffff00000000;
  }
  if (local_3640.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3640.Accessor,&local_3640);
  }
  if (FStack_39b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_39b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_39b8);
  local_3ab8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_>::CopyToEmpty<FLinearColor,int>
            (&local_3ab8,(FLinearColor *)GradientStops.AllocatorInstance.Data,GradientStops.ArrayNum
             ,0);
  pTVar3 = &pFVar51->_GradientColors;
  local_3aa8 = true;
  local_3a90 = 0;
  local_3aa0 = (undefined1  [8])0x0;
  pvStack_3a98 = (void *)0x0;
  if (pTVar3 != (TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *)&local_3ab8) {
    pFVar12 = (pTVar3->Value).AllocatorInstance.Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar3->Value).AllocatorInstance.Data = local_3ab8.AllocatorInstance.Data;
    local_3ab8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar51->_GradientColors).Value.ArrayNum = local_3ab8.ArrayNum;
    (pFVar51->_GradientColors).Value.ArrayMax = local_3ab8.ArrayMax;
    local_3ab8.ArrayNum = 0;
    local_3ab8.ArrayMax = 0;
  }
  (pFVar51->_GradientColors).bIsSet = local_3aa8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar51->_GradientColors).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3aa0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3aa0);
  if (pvStack_3a98 != (void *)0x0) {
    FMemory::Free(pvStack_3a98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3aa0);
  if (local_3ab8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3ab8.AllocatorInstance.Data);
  }
  uStack_3990 = 0;
  local_3998 = (FName)GetActiveTabIndicatorVisibility;
  lStack_3280 = (ulonglong)uStack_398c << 0x20;
  local_3288 = GetActiveTabIndicatorVisibility;
  pFVar51->_Orientation = Orient_Horizontal;
  TAttribute<EVisibility>::Bind<SSidebarButton>
            ((TAttribute<EVisibility> *)&pFVar51->_padding_,this,(pmf_3a289416 *)&local_3288);
  FLLMScope::FLLMScope(&local_3c04,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3998 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3950,&local_3998,true);
  TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComplexGradient,RequiredArgs::T0RequiredArgs>
            (&local_3b00,"SComplexGradient",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarButton.cpp"
             ,0xe6,&local_3c2e);
  FMemScope::~FMemScope(&local_3950);
  FLLMScope::~FLLMScope(&local_3c04);
  FVar57.ReferenceController = local_3b00._Widget.SharedReferenceCount.ReferenceController;
  pSVar20 = local_3b00._Widget.Object;
  local_3a10.ReferenceController = local_3b00._Widget.SharedReferenceCount.ReferenceController;
  local_3a18 = local_3b00._Widget.Object;
  if (local_3b00._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3b00._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3b00._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  if (&this->ActiveIndicator != (TSharedPtr<SWidget,1> *)&local_3a18) {
    (this->ActiveIndicator).Object = (SWidget *)local_3b00._Widget.Object;
    local_3a18 = (SComplexGradient *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ActiveIndicator).SharedReferenceCount,&local_3a10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a10.ReferenceController);
  pSVar52 = TSharedPtr<SComplexGradient,1>::operator->(&local_3b00._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar52,(FSlateBaseNamedArgs *)local_3c00);
  SComplexGradient::Construct(local_3b00._Widget.Object,local_3c00);
  pSVar52 = TSharedPtr<SComplexGradient,1>::operator->(&local_3b00._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar52);
  pSVar52 = TSharedPtr<SComplexGradient,1>::operator->(&local_3b00._Widget);
  pbVar2 = (byte *)((longlong)&pSVar52->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_3b00._Widget.Object == (SComplexGradient *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  local_3b00._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3b00._Widget.Object = (SComplexGradient *)0x0;
  if ((pSVar20 == (SComplexGradient *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  local_37b0.Object = (SWidget *)pSVar20;
  local_37b0.SharedReferenceCount.ReferenceController = FVar57.ReferenceController;
  if (FVar57.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar57.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar57.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar47 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_3c28,&local_37b0);
  pFVar53 = SOverlay::FArguments::operator+(local_3948,pFVar47);
  this_06 = MakeTDecl<SOverlay,RequiredArgs::T0RequiredArgs>
                      (&local_31a8,"SOverlay",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarButton.cpp"
                       ,0xcd,&local_3c2d);
  pTVar54 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_06,&local_3268,pFVar53);
  pTVar13 = (pTVar54->SharedReferenceCount).ReferenceController;
  local_3988 = pTVar54->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar14 = (pFVar43->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar43->_Content).Widget.Object = (SWidget *)local_3988;
  (pFVar43->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar13;
  pTStack_3980 = pTVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  this_07 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_31c0,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarButton.cpp"
                       ,0xc6,local_3c2c);
  pTVar55 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_07,&local_3278,pFVar43);
  pTVar14 = (pTVar55->SharedReferenceCount).ReferenceController;
  local_37c0.Object = (SWidget *)pTVar55->Object;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_37c0.SharedReferenceCount.ReferenceController = pTVar14;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             local_3940,&local_37c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3278.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_31c0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3268.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_31a8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar57.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar57.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2978);
  if ((void *)local_2978._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2978._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2978);
  TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>::
  ~TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
            ((TAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *)(local_2bc8 + 0x1f8));
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2bc8);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_30f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3258.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3858._Widget.SharedReferenceCount.ReferenceController);
  SBorder::FArguments::~FArguments(&local_a08);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_3098);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3248.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3840._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3c48);
  SButton::FArguments::~FArguments(&local_628);
  SOverlay::FOverlaySlot::FSlotArguments::~FSlotArguments(&local_3038);
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_2dd0._Slots.AllocatorInstance.Data,local_2dd0._Slots.ArrayNum);
  if ((FSlotArguments *)local_2dd0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2dd0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2dd0);
  SBox::FArguments::~FArguments(&local_1508);
  local_3238.Object = (FSidebarDrawer *)0x0;
  local_3238.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UpdateAppearance(this,&local_3238);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3bd8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b48.SharedReferenceCount.ReferenceController);
  return;
}

// GetActiveTabIndicatorVisibility @ 142daa7f0

EVisibility __thiscall SSidebarButton::GetActiveTabIndicatorVisibility(SSidebarButton *this)

{
  FSidebarDrawer *pFVar1;
  atomic<int> aVar2;
  EVisibility EVar3;
  atomic<int> aVar4;
  SSidebarDrawer *this_00;
  uchar *in_RDX;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142daa823;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    pFVar1 = (this->DrawerWeak).Object;
    if (((pFVar1 != (FSidebarDrawer *)0x0) && (pFVar1->bIsOpen != false)) &&
       ((pFVar1->DrawerWidget).Object != (SSidebarDrawer *)0x0)) {
      this_00 = TSharedPtr<SSidebarDrawer,1>::operator->(&pFVar1->DrawerWidget);
      bVar6 = SWidget::HasAnyUserFocusOrFocusedDescendants((SWidget *)this_00);
      EVar3 = EVisibility::HitTestInvisible;
      if (bVar6) goto LAB_142daa82a;
    }
  }
LAB_142daa823:
  EVar3.Value.Value = EVisibility::Collapsed.Value.Value;
LAB_142daa82a:
  *in_RDX = (uchar)EVar3.Value.Value;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (EVisibility)SUB81(in_RDX,0);
}

// GetDockImage @ 142dabb80

FSlateBrush * __thiscall SSidebarButton::GetDockImage(SSidebarButton *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FSlateBrush *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FName local_res8;
  
  pTVar7 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
  }
  pIVar4 = FAppStyle::Get();
  pcVar1 = *(code **)((longlong)*pIVar4 + 0x50);
  pFVar5 = ::FName::FName(&local_res8,L"Icons.Layout");
  pFVar6 = (FSlateBrush *)(*pcVar1)(pIVar4,*pFVar5,0,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return pFVar6;
}

// GetDockToolTipText @ 142dabc10

FText * __thiscall
SSidebarButton::GetDockToolTipText(SSidebarButton *this,FText *__return_storage_ptr__)

{
  FSidebarDrawer *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  
  pTVar4 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142dabc43;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    pFVar1 = (this->DrawerWeak).Object;
    if ((pFVar1 != (FSidebarDrawer *)0x0) && ((pFVar1->State).bIsDocked != false)) {
      pwVar6 = L"Undock Tab";
      pwVar5 = L"UndockTabToolTip";
      goto LAB_142dabc51;
    }
  }
LAB_142dabc43:
  pwVar6 = L"Dock Tab";
  pwVar5 = L"DockTabToolTip";
LAB_142dabc51:
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SSidebarDrawerButton",pwVar5,pwVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// GetDockVisibility @ 142dabcb0

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall SSidebarButton::GetDockVisibility(SSidebarButton *this)

{
  FSidebarDrawer *pFVar1;
  atomic<int> aVar2;
  EVisibility EVar3;
  atomic<int> aVar4;
  TEnumAsByte<EVisibility::Private> *in_RDX;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
  EVar3.Value.Value = EVisibility::Collapsed.Value.Value;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      EVisibility::Collapsed.Value.Value = EVar3.Value.Value;
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142dabce9;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
      EVar3.Value.Value = EVisibility::Collapsed.Value.Value;
    } while (!bVar6);
    pFVar1 = (this->DrawerWeak).Object;
    if (((pFVar1 != (FSidebarDrawer *)0x0) && (pFVar1->bDisableDock == false)) &&
       (((pFVar1->State).bIsDocked != false ||
        ((*(char *)((longlong)&this->_padding_ + 3) != '\0' ||
         (EVar3.Value.Value = EVisibility::Hidden.Value.Value, pFVar1->bIsOpen != false)))))) {
      in_RDX->Value = (uchar)EVisibility::Visible.Value.Value;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return (EVisibility)(uchar)in_RDX;
    }
  }
LAB_142dabce9:
  in_RDX->Value = (uchar)EVar3.Value.Value;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (TEnumAsByte<EVisibility::Private>)(uchar)in_RDX;
}

// GetForegroundColor @ 142dac5f0

FSlateColor * __thiscall
SSidebarButton::GetForegroundColor(SSidebarButton *this,FSlateColor *__return_storage_ptr__)

{
  FDockTabStyle *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  EStyleColor EVar4;
  undefined2 uVar5;
  bool bVar6;
  FSlateColor *pFVar7;
  
  if ((this->ActiveIndicator).Object == (SWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FSlateColor *)(*pcVar2)();
      return pFVar7;
    }
  }
  if ((TEnumAsByte<EVisibility::Private>)
      *(uchar *)&((this->ActiveIndicator).Object)->VisibilityAttribute !=
      EVisibility::Collapsed.Value.Value) {
    pFVar1 = this->DockTabStyle;
    uVar3 = *(undefined8 *)
             ((longlong)&(pFVar1->ActiveForegroundColor).SpecifiedColor.field0_0x0 + 8);
    *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
         *(undefined8 *)&(pFVar1->ActiveForegroundColor).SpecifiedColor.field0_0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar3;
    EVar4 = (pFVar1->ActiveForegroundColor).ColorTableId;
    uVar5 = *(undefined2 *)&(pFVar1->ActiveForegroundColor).field_0x12;
    __return_storage_ptr__->ColorUseRule = (pFVar1->ActiveForegroundColor).ColorUseRule;
    __return_storage_ptr__->ColorTableId = EVar4;
    *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar5;
    return __return_storage_ptr__;
  }
  if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
    pFVar1 = this->DockTabStyle;
    uVar3 = *(undefined8 *)
             ((longlong)&(pFVar1->HoveredForegroundColor).SpecifiedColor.field0_0x0 + 8);
    *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
         *(undefined8 *)&(pFVar1->HoveredForegroundColor).SpecifiedColor.field0_0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar3;
    EVar4 = (pFVar1->HoveredForegroundColor).ColorTableId;
    uVar5 = *(undefined2 *)&(pFVar1->HoveredForegroundColor).field_0x12;
    __return_storage_ptr__->ColorUseRule = (pFVar1->HoveredForegroundColor).ColorUseRule;
    __return_storage_ptr__->ColorTableId = EVar4;
    *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar5;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
  __return_storage_ptr__->ColorUseRule = UseColor_UseStyle;
  __return_storage_ptr__->ColorTableId = Black;
  return __return_storage_ptr__;
}

// GetHAlignFromTabLocation @ 142dac7c0

EHorizontalAlignment __cdecl SSidebarButton::GetHAlignFromTabLocation(ESidebarTabLocation param_1)

{
  if (param_1 == Left) {
    return HAlign_Left;
  }
  if (param_1 != Right) {
    return HAlign_Fill;
  }
  return HAlign_Right;
}

// GetPinImage @ 142daf780

FSlateBrush * __thiscall SSidebarButton::GetPinImage(SSidebarButton *this)

{
  FSidebarDrawer *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FSlateBrush *pFVar6;
  wchar_t *pwVar7;
  code *pcVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  FName local_res8;
  
  pTVar9 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar9->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142daf7b5;
      }
      LOCK();
      aVar3 = pTVar9->SharedReferenceCount;
      bVar10 = aVar2 == aVar3;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar10);
    pFVar1 = (this->DrawerWeak).Object;
    if ((pFVar1 != (FSidebarDrawer *)0x0) && ((pFVar1->State).bIsPinned != false)) {
      pIVar4 = FAppStyle::Get();
      pwVar7 = L"Icons.Pinned";
      pcVar8 = *(code **)((longlong)*pIVar4 + 0x50);
      goto LAB_142daf7c8;
    }
  }
LAB_142daf7b5:
  pIVar4 = FAppStyle::Get();
  pcVar8 = *(code **)((longlong)*pIVar4 + 0x50);
  pwVar7 = L"Icons.Unpinned";
LAB_142daf7c8:
  pFVar5 = ::FName::FName(&local_res8,pwVar7);
  pFVar6 = (FSlateBrush *)(*pcVar8)(pIVar4,*pFVar5,0,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return pFVar6;
}

// GetPinToolTipText @ 142daf840

FText * __thiscall
SSidebarButton::GetPinToolTipText(SSidebarButton *this,FText *__return_storage_ptr__)

{
  FSidebarDrawer *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  
  pTVar4 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142daf873;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    pFVar1 = (this->DrawerWeak).Object;
    if ((pFVar1 != (FSidebarDrawer *)0x0) && ((pFVar1->State).bIsPinned != false)) {
      pwVar6 = L"Unpin Tab";
      pwVar5 = L"UnpinTabToolTip";
      goto LAB_142daf881;
    }
  }
LAB_142daf873:
  pwVar6 = L"Pin Tab";
  pwVar5 = L"PinTabToolTip";
LAB_142daf881:
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"SSidebarDrawerButton",pwVar5,pwVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// GetPinVisibility @ 142daf8e0

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall SSidebarButton::GetPinVisibility(SSidebarButton *this)

{
  FSidebarDrawer *pFVar1;
  atomic<int> aVar2;
  EVisibility EVar3;
  atomic<int> aVar4;
  TEnumAsByte<EVisibility::Private> *in_RDX;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
  EVar3.Value.Value = EVisibility::Collapsed.Value.Value;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      EVisibility::Collapsed.Value.Value = EVar3.Value.Value;
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142daf919;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
      EVar3.Value.Value = EVisibility::Collapsed.Value.Value;
    } while (!bVar6);
    pFVar1 = (this->DrawerWeak).Object;
    if (((pFVar1 != (FSidebarDrawer *)0x0) && (pFVar1->bDisablePin == false)) &&
       (((pFVar1->State).bIsPinned != false ||
        ((*(char *)((longlong)&this->_padding_ + 3) != '\0' ||
         (EVar3.Value.Value = EVisibility::Hidden.Value.Value, pFVar1->bIsOpen != false)))))) {
      in_RDX->Value = (uchar)EVisibility::Visible.Value.Value;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return (EVisibility)(uchar)in_RDX;
    }
  }
LAB_142daf919:
  in_RDX->Value = (uchar)EVar3.Value.Value;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (TEnumAsByte<EVisibility::Private>)(uchar)in_RDX;
}

// GetVAlignFromTabLocation @ 142db2870

EVerticalAlignment __cdecl SSidebarButton::GetVAlignFromTabLocation(ESidebarTabLocation param_1)

{
  if ((param_1 != Left) && (param_1 != Right)) {
    if (param_1 == Top) {
      return VAlign_Top;
    }
    if (param_1 == Bottom) {
      return VAlign_Bottom;
    }
  }
  return VAlign_Fill;
}

// IsDockChecked @ 142db55a0

ECheckBoxState __thiscall SSidebarButton::IsDockChecked(SSidebarButton *this)

{
  FSidebarDrawer *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142db55d0;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar1 = (this->DrawerWeak).Object;
    if ((pFVar1 != (FSidebarDrawer *)0x0) && ((pFVar1->State).bIsDocked != false)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return Checked;
    }
  }
LAB_142db55d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return Unchecked;
}

// IsPinChecked @ 142db60b0

ECheckBoxState __thiscall SSidebarButton::IsPinChecked(SSidebarButton *this)

{
  FSidebarDrawer *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142db60e0;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar1 = (this->DrawerWeak).Object;
    if ((pFVar1 != (FSidebarDrawer *)0x0) && ((pFVar1->State).bIsPinned != false)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return Checked;
    }
  }
LAB_142db60e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return Unchecked;
}

// OnDockStateChanged @ 142dbca60

void __thiscall SSidebarButton::OnDockStateChanged(SSidebarButton *this,ECheckBoxState param_1)

{
  TAttribute<FText> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  FSidebarDrawer *pFVar6;
  FSidebarDrawer *pFVar7;
  bool bVar8;
  FSidebarDrawer *local_38;
  FSidebarDrawer *local_30;
  FReadAccessScope local_28;
  
  local_30 = (FSidebarDrawer *)(this->DrawerWeak).WeakReferenceCount.ReferenceController;
  pFVar7 = (FSidebarDrawer *)0x0;
  pFVar6 = local_30;
  if (local_30 != (FSidebarDrawer *)0x0) {
    iVar4 = *(int *)&(local_30->Config).ButtonText.Value.TextData.Reference;
    do {
      pFVar6 = pFVar7;
      if (iVar4 == 0) goto LAB_142dbcab5;
      pTVar1 = &(local_30->Config).ButtonText;
      LOCK();
      iVar5 = *(int *)&(pTVar1->Value).TextData.Reference;
      bVar8 = iVar4 == iVar5;
      if (bVar8) {
        *(int *)&(pTVar1->Value).TextData.Reference = iVar4 + 1;
        iVar5 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar5;
    } while (!bVar8);
    pFVar7 = (this->DrawerWeak).Object;
    pFVar6 = local_30;
    if (pFVar7 != (FSidebarDrawer *)0x0) goto LAB_142dbcadb;
  }
LAB_142dbcab5:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  local_30 = pFVar6;
  if (bVar8) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_142dbcadb:
  local_38 = pFVar7;
  if ((pFVar7 == (FSidebarDrawer *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDockToggled,
             &local_28);
  if ((*(int *)&(this->OnDockToggled).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnDockToggled).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,&local_38,param_1 == Checked);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// OnMouseButtonDown @ 142dc2980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSidebarButton::OnMouseButtonDown
          (SSidebarButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  FWidgetPath *pFVar6;
  FSlateApplication *this_00;
  FSlateApplication *pFVar7;
  FDeprecateVector2DParameter *pFVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ForElementType<FArrangedWidget> FVar10;
  longlong *plVar11;
  undefined1 auStackY_538 [32];
  undefined1 local_4d8;
  undefined1 local_4d7;
  FPopupTransitionEffect local_4d4;
  TVector2<float>_u_0 local_4d0;
  FDeprecateVector2DParameter local_4c8;
  FReadAccessScope local_4c0;
  TSharedRef<SWidget,1> local_4a8;
  undefined1 local_498 [8];
  TSharedPtr<IMenu,1> local_490;
  FReadAccessScope local_480;
  FWidgetPath local_468;
  FWidgetPath local_308;
  FWidgetPath local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_538;
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  plVar11 = (longlong *)0x0;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar2 == EKeys::RightMouseButton.KeyName) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnGetContextMenuContent,&local_4c0);
    if ((*(int *)&(this->OnGetContextMenuContent).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnGetContextMenuContent).field_0x8, plVar3 != (longlong *)0x0
       )) {
      cVar5 = (**(code **)(*plVar3 + 0x38))();
      if (cVar5 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_4c0);
        bVar4 = true;
        goto LAB_142dc2a1d;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_4c0);
  }
  bVar4 = false;
LAB_142dc2a1d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar4) {
    if ((FWidgetPath *)param_2->_padding_ == (FWidgetPath *)0x0) {
      pFVar6 = FWidgetPath::FWidgetPath(&local_1a8);
      FWidgetPath::FWidgetPath(&local_468,pFVar6);
      if (local_1a8.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_1a8.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar10 = (ForElementType<FArrangedWidget>)&local_1a8.Widgets.Array;
      if (local_1a8.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar10 = local_1a8.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,local_1a8.Widgets.Array.ArrayNum)
      ;
      local_308.Widgets.Array.AllocatorInstance.SecondaryData =
           local_1a8.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    else {
      pFVar6 = FWidgetPath::FWidgetPath(&local_308,(FWidgetPath *)param_2->_padding_);
      FWidgetPath::FWidgetPath(&local_468,pFVar6);
      if (local_308.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_308.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_308.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar10 = (ForElementType<FArrangedWidget>)&local_308.Widgets.Array;
      if (local_308.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar10 = local_308.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,local_308.Widgets.Array.ArrayNum)
      ;
    }
    if (local_308.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_308.Widgets.Array.AllocatorInstance.SecondaryData);
    }
    this_00 = FSlateApplication::Get();
    local_4d7 = 0;
    local_4d0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_4d4.SlideDirection = ContextMenu;
    pFVar7 = FSlateApplication::Get();
    pFVar8 = (FDeprecateVector2DParameter *)
             (**(code **)(*(longlong *)pFVar7 + 0x68))(pFVar7,local_498);
    local_4c8 = *pFVar8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnGetContextMenuContent,&local_480);
    if (*(int *)&(this->OnGetContextMenuContent).field_0x10 != 0) {
      plVar11 = *(longlong **)&(this->OnGetContextMenuContent).field_0x8;
    }
    (**(code **)(*plVar11 + 0x60))(plVar11,&local_4a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_480);
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_4c0);
    FSlateApplication::PushMenu
              (this_00,&local_490,pTVar9,&local_468,&local_4a8,&local_4c8,&local_4d4,true,
               (FDeprecateVector2DParameter *)&local_4d0._s_0,SUB82(&local_4d8,0),true,-1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_490.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_4c0.DestructionSentinel.Accessor);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4a8.SharedReferenceCount.ReferenceController);
    FReply::FReply(__return_storage_ptr__,true);
    if (local_468.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_468.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_468.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar10 = (ForElementType<FArrangedWidget>)&local_468.Widgets.Array;
    if (local_468.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar10 = local_468.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,local_468.Widgets.Array.ArrayNum);
    if (local_468.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_468.Widgets.Array.AllocatorInstance.SecondaryData);
    }
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnPinStateChanged @ 142dc94b0

void __thiscall SSidebarButton::OnPinStateChanged(SSidebarButton *this,ECheckBoxState param_1)

{
  TAttribute<FText> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  FSidebarDrawer *pFVar6;
  FSidebarDrawer *pFVar7;
  bool bVar8;
  FSidebarDrawer *local_38;
  FSidebarDrawer *local_30;
  FReadAccessScope local_28;
  
  local_30 = (FSidebarDrawer *)(this->DrawerWeak).WeakReferenceCount.ReferenceController;
  pFVar7 = (FSidebarDrawer *)0x0;
  pFVar6 = local_30;
  if (local_30 != (FSidebarDrawer *)0x0) {
    iVar4 = *(int *)&(local_30->Config).ButtonText.Value.TextData.Reference;
    do {
      pFVar6 = pFVar7;
      if (iVar4 == 0) goto LAB_142dc9505;
      pTVar1 = &(local_30->Config).ButtonText;
      LOCK();
      iVar5 = *(int *)&(pTVar1->Value).TextData.Reference;
      bVar8 = iVar4 == iVar5;
      if (bVar8) {
        *(int *)&(pTVar1->Value).TextData.Reference = iVar4 + 1;
        iVar5 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar5;
    } while (!bVar8);
    pFVar7 = (this->DrawerWeak).Object;
    pFVar6 = local_30;
    if (pFVar7 != (FSidebarDrawer *)0x0) goto LAB_142dc952b;
  }
LAB_142dc9505:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  local_30 = pFVar6;
  if (bVar8) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_142dc952b:
  local_38 = pFVar7;
  if ((pFVar7 == (FSidebarDrawer *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPinToggled,&local_28
            );
  if ((*(int *)&(this->OnPinToggled).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnPinToggled).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,&local_38,param_1 == Checked);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// OnTabRenamed @ 142dca260

void __thiscall
SSidebarButton::OnTabRenamed(SSidebarButton *this,TWeakPtr<FSidebarDrawer,1> *param_1)

{
  FSidebarDrawer *pFVar1;
  SSidebarButtonText *pSVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  atomic<int> aVar8;
  SButton *this_00;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 local_res8 [8];
  
  bVar7 = TWeakPtr<FSidebarDrawer,1>::UEOpEquals<FSidebarDrawer>(param_1,&this->DrawerWeak);
  if (bVar7) {
    if (((param_1->Object != (FSidebarDrawer *)0x0) &&
        (pTVar9 = (param_1->WeakReferenceCount).ReferenceController,
        pTVar9 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar9->SharedReferenceCount)) {
      pTVar9 = (param_1->WeakReferenceCount).ReferenceController;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        aVar6 = pTVar9->SharedReferenceCount;
        do {
          if (aVar6 == (atomic<int>)0x0) {
            pTVar9 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_142dca2f0;
          }
          LOCK();
          aVar8 = pTVar9->SharedReferenceCount;
          bVar7 = aVar6 == aVar8;
          if (bVar7) {
            pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar8 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar8;
        } while (!bVar7);
        pFVar1 = param_1->Object;
        if (pFVar1 != (FSidebarDrawer *)0x0) {
          pSVar2 = (this->Label).Object;
          if (pSVar2 != (SSidebarButtonText *)0x0) {
            pIVar3 = (pFVar1->Config).ButtonText.Value.TextData.Reference;
            pIVar4 = (pSVar2->Text).Value.TextData.Reference;
            if (pIVar4 != pIVar3) {
              (pSVar2->Text).Value.TextData.Reference = pIVar3;
              if (pIVar3 != (ITextData *)0x0) {
                (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
              }
              if (pIVar4 != (ITextData *)0x0) {
                (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
              }
            }
            (pSVar2->Text).Value.Flags = (pFVar1->Config).ButtonText.Value.Flags;
            (pSVar2->Text).bIsSet = (pFVar1->Config).ButtonText.bIsSet;
            TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
            CopyFrom<FDefaultDelegateUserPolicy>
                      (&(pSVar2->Text).Getter,&(pFVar1->Config).ButtonText.Getter);
          }
          this_00 = TSharedPtr<SButton,1>::operator->(&this->MainButton);
          SWidget::SetToolTipText((SWidget *)this_00,&(pFVar1->Config).ToolTipText);
        }
      }
LAB_142dca2f0:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    }
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1873460452432806187>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarButton.cpp"
                       ,299,"InDrawer == DrawerWeak");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// UpdateAppearance @ 142ddc820

void __thiscall
SSidebarButton::UpdateAppearance(SSidebarButton *this,TSharedPtr<FSidebarDrawer,1> *param_1)

{
  FSidebarDrawer *pFVar1;
  SSidebarButtonText *pSVar2;
  code *pcVar3;
  atomic<int> aVar4;
  float fVar5;
  atomic<int> aVar6;
  SBorder *pSVar7;
  ISlateStyle *pIVar8;
  SButton *this_00;
  FName *pFVar9;
  FButtonStyle *pFVar10;
  wchar_t *pwVar11;
  FName FVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  float fVar15;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  undefined1 local_f0 [8];
  ForAnyElementType FStack_e8;
  ulonglong local_e0;
  TAttribute<EVisibility> local_d8;
  TAttribute<EVisibility> local_b8;
  TAttribute<FSlateBrush_const_*> local_98;
  FDestructionSentinel local_70;
  FName local_58;
  FName local_50 [3];
  
  pTVar13 = (this->DrawerWeak).WeakReferenceCount.ReferenceController;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar13->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142ddc87c;
      }
      LOCK();
      aVar6 = pTVar13->SharedReferenceCount;
      bVar14 = aVar4 == aVar6;
      if (bVar14) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      fVar15 = __real_c2b40000;
      fVar5 = __real_42b40000;
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar14);
    pFVar1 = (this->DrawerWeak).Object;
    if (pFVar1 != (FSidebarDrawer *)0x0) {
      if (this->TabLocation == Left) {
        ::FName::FName(&local_res20,L"Docking.Sidebar.Border_SquareRight");
        FVar12 = local_res20;
      }
      else if (this->TabLocation == Right) {
        ::FName::FName(&local_res18,L"Docking.Sidebar.Border_SquareLeft");
        FVar12 = local_res18;
        fVar15 = fVar5;
      }
      else {
        ::FName::FName(&local_res8,L"None");
        FVar12 = local_res8;
        fVar15 = 0.0;
      }
      pSVar2 = (this->Label).Object;
      if (pSVar2 != (SSidebarButtonText *)0x0) {
        local_e0 = 0;
        local_f0 = (undefined1  [8])0x0;
        FStack_e8.Data = (FScriptContainerElement *)0x0;
        (pSVar2->AngleDegrees).Value = fVar15;
        (pSVar2->AngleDegrees).bIsSet = true;
        TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  (&(pSVar2->AngleDegrees).Getter,
                   (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_f0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
                   (FWriteAccessScope *)&local_70);
        if (((int)local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_e8.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
          local_e0 = local_e0 & 0xffffffff00000000;
        }
        if (local_70.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
        }
        if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_e8.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_f0);
      }
      if (((param_1->Object == pFVar1) && ((pFVar1->State).bIsDocked == false)) &&
         (pFVar1->bIsOpen != false)) {
        pSVar7 = TSharedPtr<SBorder,1>::operator->(&this->OpenBorder);
        local_d8.Value = (EVisibility)EVisibility::HitTestInvisible.Value.Value;
        local_d8.bIsSet = true;
        local_d8.Getter._0_8_ = 0;
        local_d8.Getter._8_8_ = 0;
        local_d8.Getter._16_8_ = 0;
        SCompoundWidget::SetVisibility((SCompoundWidget *)pSVar7,&local_d8);
        pSVar7 = TSharedPtr<SBorder,1>::operator->(&this->OpenBorder);
        pIVar8 = FAppStyle::Get();
        local_98.Value = (FSlateBrush *)(**(code **)((longlong)*pIVar8 + 0x50))(pIVar8,FVar12,0,0);
        local_98.bIsSet = true;
        local_98.Getter._16_8_ = 0;
        local_98.Getter._0_8_ = 0;
        local_98.Getter._8_8_ = 0;
        SBorder::SetBorderImage(pSVar7,&local_98);
      }
      else {
        if (((this->OpenBorder).Object == (SBorder *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_b8.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
        local_b8.Getter._16_8_ = 0;
        local_b8.bIsSet = true;
        local_b8.Getter._0_8_ = 0;
        local_b8.Getter._8_8_ = 0;
        SCompoundWidget::SetVisibility((SCompoundWidget *)(this->OpenBorder).Object,&local_b8);
      }
      if ((param_1->Object == pFVar1) || ((pFVar1->State).bIsDocked != false)) {
        if (((this->MainButton).Object == (SButton *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = (this->MainButton).Object;
        pIVar8 = FAppStyle::Get();
        pwVar11 = L"Docking.SidebarButton.Opened";
        pFVar9 = local_50;
      }
      else {
        this_00 = TSharedPtr<SButton,1>::operator->(&this->MainButton);
        pIVar8 = FAppStyle::Get();
        pwVar11 = L"Docking.SidebarButton.Closed";
        pFVar9 = &local_58;
      }
      pFVar9 = ::FName::FName(pFVar9,pwVar11);
      pFVar10 = (FButtonStyle *)
                (**(code **)((longlong)*pIVar8 + 0xa0))(pIVar8,FButtonStyle::TypeName,*pFVar9,0,1);
      if (pFVar10 == (FButtonStyle *)0x0) {
        pFVar10 = FButtonStyle::GetDefault();
      }
      SButton::SetButtonStyle(this_00,pFVar10);
    }
  }
LAB_142ddc87c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return;
}

