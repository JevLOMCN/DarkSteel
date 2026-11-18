// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 54

// SCheckBox @ 142847240

SCheckBox * __thiscall SCheckBox::SCheckBox(SCheckBox *this)

{
  byte *pbVar1;
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&___7SCheckBox__6B_;
  (this->IsCheckboxChecked).Value = Unchecked;
  (this->IsCheckboxChecked).bIsSet = false;
  *(undefined8 *)&(this->IsCheckboxChecked).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->IsCheckboxChecked).Getter = 0;
  *(undefined8 *)&(this->IsCheckboxChecked).Getter.field_0x8 = 0;
  *(undefined8 *)&this->OnCheckStateChanged = 0;
  *(undefined4 *)&(this->OnCheckStateChanged).field_0x10 = 0;
  (this->PaddingOverride).bIsSet = false;
  (this->PaddingOverride).Value.Left = 0.0;
  (this->PaddingOverride).Value.Top = 0.0;
  (this->PaddingOverride).Value.Right = 0.0;
  (this->PaddingOverride).Value.Bottom = 0.0;
  *(undefined8 *)&(this->OnCheckStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->PaddingOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->PaddingOverride).Getter = 0;
  *(undefined8 *)&(this->PaddingOverride).Getter.field_0x8 = 0;
  (this->ForegroundColorOverride).Value.ColorUseRule = UseColor_Specified;
  (this->ForegroundColorOverride).bIsSet = false;
  *(undefined8 *)&(this->ForegroundColorOverride).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ForegroundColorOverride).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ForegroundColorOverride).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->ForegroundColorOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ForegroundColorOverride).Getter = 0;
  *(undefined8 *)&(this->ForegroundColorOverride).Getter.field_0x8 = 0;
  (this->BorderBackgroundColorOverride).Value.ColorUseRule = UseColor_Specified;
  (this->BorderBackgroundColorOverride).bIsSet = false;
  *(undefined8 *)&(this->BorderBackgroundColorOverride).Value.SpecifiedColor.field0_0x0 = 0x3f800000
  ;
  (this->BorderBackgroundColorOverride).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->BorderBackgroundColorOverride).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->BorderBackgroundColorOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->BorderBackgroundColorOverride).Getter = 0;
  *(undefined8 *)&(this->BorderBackgroundColorOverride).Getter.field_0x8 = 0;
  (this->CheckBoxTypeOverride).bIsSet = false;
  *(undefined8 *)&this->OnGetMenuContent = 0;
  *(undefined8 *)&(this->OnGetMenuContent).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetMenuContent).field_0x10 = 0;
  FSlateSound::FSlateSound(&this->HoveredSound);
  FSlateSound::FSlateSound(&this->CheckedSound);
  FSlateSound::FSlateSound(&this->UncheckedSound);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfb;
  (this->ContentContainer).Object = (SBorder *)0x0;
  (this->ContentContainer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 2;
  return this;
}

// ~SCheckBox @ 14284a4f0

void __thiscall SCheckBox::~SCheckBox(SCheckBox *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SCheckBox__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ContentContainer).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetMenuContent);
  pvVar1 = *(void **)&(this->OnGetMenuContent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetMenuContent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->BorderBackgroundColorOverride).Getter);
  pvVar1 = *(void **)&(this->BorderBackgroundColorOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BorderBackgroundColorOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ForegroundColorOverride).Getter);
  pvVar1 = *(void **)&(this->ForegroundColorOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ForegroundColorOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->PaddingOverride).Getter);
  pvVar1 = *(void **)&(this->PaddingOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->PaddingOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCheckStateChanged);
  pvVar1 = *(void **)&(this->OnCheckStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCheckStateChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->IsCheckboxChecked).Getter);
  pvVar1 = *(void **)&(this->IsCheckboxChecked).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->IsCheckboxChecked).Getter);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// BuildCheckBox @ 142855bd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SCheckBox::BuildCheckBox(SCheckBox *this,TSharedRef<SWidget,1> *param_1)

{
  longlong *this_00;
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  Type TVar10;
  SBorder *pSVar11;
  FSlot *pFVar12;
  FSizeParam *pFVar13;
  FArguments *pFVar14;
  FSlotArguments *pFVar15;
  FArguments *pFVar16;
  TSharedRef<SImage,1> *pTVar17;
  TSharedRef<SOverlay,1> *pTVar18;
  FSlot *pFVar19;
  undefined8 *puVar20;
  TSharedRef<SWidget_const_,1> *pTVar21;
  ulong64 uVar22;
  FArguments *pFVar23;
  TSharedRef<SBorder,1> *pTVar24;
  FArguments *pFVar25;
  TSharedRef<SHorizontalBox,1> *pTVar26;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar27;
  SHorizontalBox *pSVar28;
  FSlot *pFVar29;
  SWidget *local_res8;
  FSlot *local_res10;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  longlong lStack_1840;
  T0RequiredArgs local_1838;
  T0RequiredArgs local_1837;
  T0RequiredArgs local_1836 [6];
  SHorizontalBox *local_1830;
  SWidget *local_1828;
  TReferenceControllerBase<1> *pTStack_1820;
  FLLMScope local_1818;
  FLLMScope local_1814;
  FLLMScope local_1810;
  FLLMScope local_180c;
  FLLMScope local_1808 [2];
  SImage *local_1800;
  FSharedReferencer<1> local_17f8;
  FArguments *local_17f0;
  SImage *local_17e8;
  FSharedReferencer<1> local_17e0;
  undefined8 local_17d8;
  FSharedReferencer<1> local_17d0;
  undefined8 local_17c8;
  FSharedReferencer<1> local_17c0;
  TSharedRef<SBorder,1> local_17b8;
  undefined8 local_17a8;
  undefined8 uStack_17a0;
  undefined1 local_1798;
  undefined1 local_1790 [8];
  FDelegateAllocation FStack_1788;
  FName local_1778;
  FMemScope local_1770;
  FName local_1768;
  FMemScope local_1760;
  FName local_1758;
  FMemScope local_1750;
  FName local_1748;
  FMemScope local_1740;
  FArguments *local_1738;
  FName local_1730;
  FMemScope local_1728;
  undefined8 *local_1720;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1718;
  TSharedRef<SWidget,1> local_1700;
  TAttribute<FSlateBrush_const_*> local_16f0;
  FLinearColor_u_0 local_16c8;
  undefined4 local_16b8;
  undefined1 local_16b4;
  undefined8 local_16b0;
  undefined8 uStack_16a8;
  undefined8 local_16a0;
  FDestructionSentinel local_1698;
  FDelegateAllocation *local_1680;
  FDestructionSentinel local_1678;
  undefined1 *local_1660;
  FDestructionSentinel local_1658;
  undefined1 *local_1640;
  undefined4 local_1628;
  TSharedRef<SImage,1> local_1620;
  code *local_1608;
  TReferenceControllerBase<1> *pTStack_1600;
  TSharedRef<SWidget_const_,1> local_15f8;
  TSharedRef<SWidget_const_,1> local_15e8;
  TSharedRef<SHorizontalBox,1> local_15d8;
  TSharedRef<SImage,1> local_15c8;
  code *local_15b8;
  ulonglong uStack_15b0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_15a8;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1590;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1578;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1560;
  code *local_1548;
  TReferenceControllerBase<1> *pTStack_1540;
  TSharedRef<SWidget_const_,1> local_1538;
  SWidget *local_1528;
  TReferenceControllerBase<1> *pTStack_1520;
  SBorder *local_1518;
  TReferenceControllerBase<1> *pTStack_1510;
  TSharedRef<SBorder,1> local_1508;
  TSharedRef<SOverlay,1> local_14f8;
  undefined1 local_14e8 [16];
  undefined1 local_14d8 [32];
  undefined1 local_14b8 [24];
  undefined1 local_14a0 [16];
  undefined1 local_1490 [32];
  undefined1 local_1470 [24];
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1458;
  undefined8 *local_1440;
  SBorder *local_1438;
  FSharedReferencer<1> local_1430 [4];
  undefined1 local_1410 [32];
  undefined4 local_13f0;
  undefined1 local_13ec;
  FSlotArgumentsMixin local_13e8;
  undefined8 *local_1358;
  SOverlay *local_1350;
  FSharedReferencer<1> local_1348 [4];
  undefined1 local_1328 [24];
  undefined4 local_1310;
  undefined1 local_130c;
  EVerticalAlignment local_1308;
  undefined1 local_1304;
  FSlotArgumentsMixin local_1300;
  undefined1 local_1270 [56];
  void *local_1238;
  undefined1 local_1210 [56];
  void *local_11d8;
  FSizeParam local_11b0;
  FArguments local_1168;
  FArguments local_f60;
  FArguments local_d58;
  FArguments local_ab0;
  FArguments local_808;
  FArguments local_428;
  
  pFVar29 = (FSlot *)0x0;
  local_res8 = (SWidget *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_res10 = (FSlot *)param_1;
  if ((this->ContentContainer).Object != (SBorder *)0x0) {
    pSVar11 = TSharedPtr<SBorder,1>::operator->(&this->ContentContainer);
    pcVar1 = *(code **)(pSVar11->_padding_ + 0x248);
    local_1828 = SNullWidget::NullWidget.Object;
    pTStack_1820 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar1)(pSVar11);
  }
  if ((this->CheckBoxTypeOverride).bIsSet == false) {
    TVar10 = (Type)(this->Style->CheckBoxType).Value;
  }
  else {
    TVar10 = (this->CheckBoxTypeOverride).TypedValue;
  }
  if (TVar10 == CheckBox) {
    local_17f0 = SHorizontalBox::FArguments::FArguments(&local_f60);
    pFVar12 = ::operator_new(0x58);
    local_1830 = (SHorizontalBox *)pFVar29;
    if (pFVar12 != (FSlot *)0x0) {
      *(undefined8 *)pFVar12 = 0;
      *(undefined8 *)&pFVar12->field_0x8 = 0;
      *(undefined8 *)&pFVar12->field_0x10 = 0;
      *(undefined8 *)&pFVar12->field_0x18 = 0;
      *(undefined8 *)&pFVar12->field_0x20 = 0;
      *(undefined8 *)&pFVar12->field_0x28 = 0;
      *(undefined8 *)&pFVar12->field_0x30 = 0;
      *(undefined8 *)&pFVar12->field_0x38 = 0;
      *(undefined8 *)&pFVar12->field_0x40 = 0;
      *(undefined8 *)&pFVar12->field_0x48 = 0;
      *(undefined8 *)&pFVar12->field_0x50 = 0;
      local_1830 = (SHorizontalBox *)SHorizontalBox::FSlot::FSlot(pFVar12);
    }
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)&local_1358,(FSlot *)&local_1830);
    pFVar13 = (FSizeParam *)FAuto::FAuto((FAuto *)local_14e8);
    TOptional<FSizeParam>::operator=(&local_1300._SizeParam,pFVar13);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_14b8);
    if ((void *)local_14b8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_14b8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_14b8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_14d8);
    if ((void *)local_14d8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_14d8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_14d8);
    local_1308 = this->CheckBoxImageVAlign;
    local_1304 = 1;
    local_1310 = 2;
    local_130c = 1;
    pFVar14 = SOverlay::FArguments::FArguments(&local_1168);
    pFVar15 = SOverlay::Slot((FSlotArguments *)local_1210,0);
    pFVar16 = SImage::FArguments::FArguments(&local_ab0);
    pTStack_1820 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_1820 & 0xffffffff00000000);
    local_1828 = (SWidget *)OnGetBackgroundImage;
    local_15b8 = OnGetBackgroundImage;
    uStack_15b0 = (ulonglong)pTStack_1820;
    TAttribute<FSlateBrush_const_*>::Bind<SCheckBox>
              (&pFVar16->_Image,this,(pmf_ed12e3c9 *)&local_15b8);
    FLLMScope::FLLMScope(&local_1818,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1778 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1770,&local_1778,true);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
              (&local_1560,"SImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SCheckBox.cpp"
               ,0x210,(T0RequiredArgs *)&local_res8);
    FMemScope::~FMemScope(&local_1770);
    FLLMScope::~FLLMScope(&local_1818);
    pTVar17 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1560,&local_1620,pFVar16);
    pTVar2 = (pTVar17->SharedReferenceCount).ReferenceController;
    local_17e8 = pTVar17->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_17e0.ReferenceController = pTVar2;
    if ((SImage **)&pFVar15->_padding_ != &local_17e8) {
      pFVar15->_padding_ = (longlong)local_17e8;
      local_17e8 = (SImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar15->_padding_,&local_17e0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_17e0.ReferenceController);
    pFVar14 = SOverlay::FArguments::operator+(pFVar14,pFVar15);
    pFVar15 = SOverlay::Slot((FSlotArguments *)local_1270,0);
    pFVar16 = SImage::FArguments::FArguments(&local_d58);
    pTStack_1820 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_1820 & 0xffffffff00000000);
    local_1828 = (SWidget *)OnGetCheckImage;
    local_1548 = OnGetCheckImage;
    pTStack_1540 = pTStack_1820;
    TAttribute<FSlateBrush_const_*>::Bind<SCheckBox>
              (&pFVar16->_Image,this,(pmf_ed12e3c9 *)&local_1548);
    local_1628 = CONCAT22(local_1628._2_2_,2);
    local_16b8 = local_1628;
    local_16a0 = 0;
    local_16c8._0_8_ = ___xmm_3f8000003f800000000000003f800000;
    local_16c8._8_8_ = _UNK_15090c6d8;
    local_16b4 = 1;
    local_16b0 = 0;
    uStack_16a8 = 0;
    pFVar16 = SImage::FArguments::ColorAndOpacity
                        (pFVar16,(TAttribute<FSlateColor> *)&local_16c8._s_0);
    FLLMScope::FLLMScope(&local_1814,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1768 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1760,&local_1768,true);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
              (&local_1578,"SImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SCheckBox.cpp"
               ,0x215,local_res18);
    FMemScope::~FMemScope(&local_1760);
    FLLMScope::~FLLMScope(&local_1814);
    pTVar17 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1578,&local_15c8,pFVar16);
    pTVar3 = (pTVar17->SharedReferenceCount).ReferenceController;
    local_1800 = pTVar17->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_17f8.ReferenceController = pTVar3;
    if ((SImage **)&pFVar15->_padding_ != &local_1800) {
      pFVar15->_padding_ = (longlong)local_1800;
      local_1800 = (SImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar15->_padding_,&local_17f8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_17f8.ReferenceController);
    pFVar14 = SOverlay::FArguments::operator+(pFVar14,pFVar15);
    FLLMScope::FLLMScope(&local_1810,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1758 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1750,&local_1758,true);
    TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
              (&local_1590,"SOverlay",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SCheckBox.cpp"
               ,0x20c,local_res20);
    FMemScope::~FMemScope(&local_1750);
    FLLMScope::~FLLMScope(&local_1810);
    pTVar18 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1590,&local_14f8,pFVar14);
    pTVar4 = (pTVar18->SharedReferenceCount).ReferenceController;
    local_1350 = pTVar18->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar19 = (FSlot *)0x0;
    local_17d8 = 0;
    local_17d0.ReferenceController = pTVar4;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_1348,&local_17d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_17d0.ReferenceController);
    local_1738 = SHorizontalBox::FArguments::operator+(local_17f0,(FSlotArguments *)&local_1358);
    pFVar12 = ::operator_new(0x58);
    if (pFVar12 != (FSlot *)0x0) {
      *(undefined8 *)pFVar12 = 0;
      *(undefined8 *)&pFVar12->field_0x8 = 0;
      *(undefined8 *)&pFVar12->field_0x10 = 0;
      *(undefined8 *)&pFVar12->field_0x18 = 0;
      *(undefined8 *)&pFVar12->field_0x20 = 0;
      *(undefined8 *)&pFVar12->field_0x28 = 0;
      *(undefined8 *)&pFVar12->field_0x30 = 0;
      *(undefined8 *)&pFVar12->field_0x38 = 0;
      *(undefined8 *)&pFVar12->field_0x40 = 0;
      *(undefined8 *)&pFVar12->field_0x48 = 0;
      *(undefined8 *)&pFVar12->field_0x50 = 0;
      pFVar19 = SHorizontalBox::FSlot::FSlot(pFVar12);
    }
    local_17f0 = (FArguments *)pFVar19;
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)&local_1440,(FSlot *)&local_17f0);
    local_1798 = 1;
    FStack_1788.DelegateSize = 0;
    local_17a8 = 0;
    uStack_17a0 = 0;
    local_1790 = (undefined1  [8])0x0;
    FStack_1788.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1790,
               (FWriteAccessScope *)&local_1698);
    local_1680 = &FStack_1788;
    puVar20 = UE::Core::Private::DelegateAllocate(0x38,&FStack_1788);
    pSVar28 = (SHorizontalBox *)local_res10;
    if (puVar20 != (undefined8 *)0x0) {
      lStack_1840 = (ulonglong)local_17b8.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
      pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1538);
      pFVar29 = (FSlot *)(pTVar21->SharedReferenceCount).ReferenceController;
      pSVar5 = pTVar21->Object;
      if (pFVar29 != (FSlot *)0x0) {
        LOCK();
        *(int *)&pFVar29->field_0x8 = *(int *)&pFVar29->field_0x8 + 1;
        UNLOCK();
        LOCK();
        *(int *)&pFVar29->field_0x8 = *(int *)&pFVar29->field_0x8 + 1;
        UNLOCK();
      }
      *puVar20 = &
                 ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      local_1830 = (SHorizontalBox *)pFVar29;
      uVar22 = FDelegateHandle::GenerateNewID();
      puVar20[2] = uVar22;
      *puVar20 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSCheckBox___00__A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar20[3] = pSVar5;
      puVar20[4] = pFVar29;
      if (pFVar29 != (FSlot *)0x0) {
        LOCK();
        *(int *)&pFVar29->field_0xc = *(int *)&pFVar29->field_0xc + 1;
        UNLOCK();
      }
      pFVar29 = (FSlot *)&DAT_00000007;
      puVar20[5] = OnGetPadding;
      puVar20[6] = lStack_1840;
      pSVar28 = local_1830;
    }
    if (((ulonglong)pFVar29 & 4) != 0) {
      pFVar29 = (FSlot *)(ulonglong)((uint)pFVar29 & 0xfffffffb);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar28);
    }
    if (((ulonglong)pFVar29 & 2) != 0) {
      pFVar29 = (FSlot *)(ulonglong)((uint)pFVar29 & 0xfffffffd);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar28);
    }
    if (((ulonglong)pFVar29 & 1) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1538.SharedReferenceCount.ReferenceController);
    }
    if (local_1698.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1698.Accessor,&local_1698);
    }
    local_1430[3].ReferenceController._0_1_ = local_1798;
    local_1430[1].ReferenceController = (TReferenceControllerBase<1> *)local_17a8;
    local_1430[2].ReferenceController = (TReferenceControllerBase<1> *)uStack_17a0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1410,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1790);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1790);
    if (FStack_1788.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)FStack_1788.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1790);
    local_1720 = local_1440;
    local_13f0 = 2;
    local_13ec = 1;
    pFVar23 = SBorder::FArguments::FArguments(&local_808);
    local_16f0.Value = FStyleDefaults::GetNoBrush();
    local_16f0.bIsSet = true;
    local_16f0.Getter._16_8_ = 0;
    local_16f0.Getter._0_8_ = 0;
    local_16f0.Getter._8_8_ = 0;
    pFVar23 = SBorder::FArguments::BorderImage(pFVar23,&local_16f0);
    pFVar23 = SBorder::FArguments::Padding(pFVar23,0.0);
    pSVar5 = *(SWidget **)local_res10;
    pTVar6 = *(TReferenceControllerBase<1> **)&local_res10->field_0x8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1528 = (pFVar23->_Content).Widget.Object;
    pTStack_1520 = (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar23->_Content).Widget.Object = pSVar5;
    (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_1520);
    FLLMScope::FLLMScope(&local_180c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1748 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1740,&local_1748,true);
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
              (&local_1718,"SBorder",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SCheckBox.cpp"
               ,0x21f,&local_1838);
    FMemScope::~FMemScope(&local_1740);
    FLLMScope::~FLLMScope(&local_180c);
    if (local_1718._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1718._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1718._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    local_1518 = (this->ContentContainer).Object;
    pTStack_1510 = (this->ContentContainer).SharedReferenceCount.ReferenceController;
    (this->ContentContainer).Object = local_1718._Widget.Object;
    (this->ContentContainer).SharedReferenceCount.ReferenceController =
         local_1718._Widget.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_1510);
    pTVar24 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1718,&local_1508,pFVar23);
    pTVar6 = (pTVar24->SharedReferenceCount).ReferenceController;
    local_1438 = pTVar24->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_17c8 = 0;
    local_17c0.ReferenceController = pTVar6;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_1430,&local_17c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_17c0.ReferenceController);
    pFVar25 = SHorizontalBox::FArguments::operator+(local_1738,(FSlotArguments *)&local_1440);
    FLLMScope::FLLMScope(local_1808,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1730 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1728,&local_1730,true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_15a8,"SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SCheckBox.cpp"
               ,0x206,&local_1837);
    FMemScope::~FMemScope(&local_1728);
    FLLMScope::~FLLMScope(local_1808);
    pTVar26 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_15a8,&local_15d8,pFVar25);
    this_00 = &this->_padding_;
    local_1830 = pTVar26->Object;
    pTVar7 = (pTVar26->SharedReferenceCount).ReferenceController;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    }
    else {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)local_1830;
    this->_padding_ = (longlong)pTVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_15d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_15a8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1508.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1718._Widget.SharedReferenceCount.ReferenceController);
    SBorder::FArguments::~FArguments(&local_808);
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_13e8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1410);
    if ((void *)local_1410._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1410._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1410);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1430[0].ReferenceController);
    if (local_1440 != (undefined8 *)0x0) {
      (**(code **)*local_1440)(local_1440,1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_14f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1590._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_15c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1578._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_d58);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1270 + 0x30));
    if (local_1238 != (void *)0x0) {
      FMemory::Free(local_1238);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_1270 + 0x30));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1270._16_8_);
    if ((undefined8 *)local_1270._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_1270._0_8_)(local_1270._0_8_,1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1620.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1560._Widget.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_ab0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1210 + 0x30));
    if (local_11d8 != (void *)0x0) {
      FMemory::Free(local_11d8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_1210 + 0x30));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1210._16_8_);
    if ((undefined8 *)local_1210._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_1210._0_8_)(local_1210._0_8_,1);
    }
    DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
              ((FSlotArguments *)local_1168._Slots.AllocatorInstance.Data,local_1168._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_1168._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_1168._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1168);
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_1300);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1328);
    if ((void *)local_1328._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1328._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1328);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1348[0].ReferenceController);
    if (local_1358 != (undefined8 *)0x0) {
      (**(code **)*local_1358)(local_1358,1);
    }
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_f60._Slots.AllocatorInstance.Data,local_f60._Slots.ArrayNum);
    if ((FSlotArguments *)local_f60._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_f60._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_f60);
    pFVar29 = local_res10;
    if (this->bCheckBoxContentUsesAutoWidth != false) {
      pFVar13 = (FSizeParam *)FAuto::FAuto((FAuto *)local_14a0);
      pFVar13 = FSizeParam::FSizeParam(&local_11b0,pFVar13);
      TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::SetSizeParam
                ((TResizingWidgetSlotMixin<SHorizontalBox::FSlot> *)(local_1720 + 8),pFVar13);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1470);
      if ((void *)local_1470._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1470._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1470);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1490);
      if ((void *)local_1490._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1490._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1490);
      pFVar29 = local_res10;
    }
  }
  else if (TVar10 == ToggleButton) {
    pFVar23 = SBorder::FArguments::FArguments(&local_428);
    pTStack_1820 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_1820 & 0xffffffff00000000);
    local_1828 = (SWidget *)OnGetCheckImage;
    local_1608 = OnGetCheckImage;
    pTStack_1600 = pTStack_1820;
    TAttribute<FSlateBrush_const_*>::Bind<SCheckBox>
              (&pFVar23->_BorderImage,this,(pmf_ed12e3c9 *)&local_1608);
    (pFVar23->_Padding).bIsSet = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_Padding).Getter
               ,(FWriteAccessScope *)&local_1678);
    local_1660 = &(pFVar23->_Padding).Getter.field_0x8;
    puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1660);
    pFVar12 = local_res10;
    if (puVar20 != (undefined8 *)0x0) {
      lStack_1840 = (ulonglong)local_17b8.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
      pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_15f8);
      pFVar12 = (FSlot *)(pTVar21->SharedReferenceCount).ReferenceController;
      pSVar5 = pTVar21->Object;
      if (pFVar12 != (FSlot *)0x0) {
        LOCK();
        *(int *)&pFVar12->field_0x8 = *(int *)&pFVar12->field_0x8 + 1;
        UNLOCK();
        LOCK();
        *(int *)&pFVar12->field_0x8 = *(int *)&pFVar12->field_0x8 + 1;
        UNLOCK();
      }
      *puVar20 = &
                 ___7__TCommonDelegateInstanceState___A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar22 = FDelegateHandle::GenerateNewID();
      puVar20[2] = uVar22;
      *puVar20 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSCheckBox___00__A6A_AUFMargin__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar20[3] = pSVar5;
      puVar20[4] = pFVar12;
      if (pFVar12 != (FSlot *)0x0) {
        LOCK();
        *(int *)&pFVar12->field_0xc = *(int *)&pFVar12->field_0xc + 1;
        UNLOCK();
      }
      pFVar29 = (FSlot *)&DAT_00000038;
      puVar20[5] = OnGetPadding;
      puVar20[6] = lStack_1840;
    }
    if (((ulonglong)pFVar29 & 0x20) != 0) {
      pFVar29 = (FSlot *)(ulonglong)((uint)pFVar29 & 0xffffffdf);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar12);
    }
    if (((ulonglong)pFVar29 & 0x10) != 0) {
      pFVar29 = (FSlot *)(ulonglong)((uint)pFVar29 & 0xffffffef);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar12);
    }
    if (((ulonglong)pFVar29 & 8) != 0) {
      pFVar29 = (FSlot *)(ulonglong)((uint)pFVar29 & 0xfffffff7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_15f8.SharedReferenceCount.ReferenceController);
    }
    if (local_1678.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1678.Accessor,&local_1678);
    }
    (pFVar23->_BorderBackgroundColor).bIsSet = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar23->_BorderBackgroundColor).Getter,(FWriteAccessScope *)&local_1658);
    local_1640 = &(pFVar23->_BorderBackgroundColor).Getter.field_0x8;
    puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1640);
    pFVar12 = local_res10;
    if (puVar20 != (undefined8 *)0x0) {
      lStack_1840 = (ulonglong)local_17b8.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
      pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_15e8);
      pFVar12 = (FSlot *)(pTVar21->SharedReferenceCount).ReferenceController;
      local_res8 = pTVar21->Object;
      if (pFVar12 != (FSlot *)0x0) {
        LOCK();
        *(int *)&pFVar12->field_0x8 = *(int *)&pFVar12->field_0x8 + 1;
        UNLOCK();
        LOCK();
        *(int *)&pFVar12->field_0x8 = *(int *)&pFVar12->field_0x8 + 1;
        UNLOCK();
      }
      pFVar29 = (FSlot *)(ulonglong)((uint)pFVar29 | 0x1c0);
      *puVar20 = &
                 ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar22 = FDelegateHandle::GenerateNewID();
      puVar20[2] = uVar22;
      *puVar20 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSCheckBox___00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar20[3] = local_res8;
      puVar20[4] = pFVar12;
      if (pFVar12 != (FSlot *)0x0) {
        LOCK();
        *(int *)&pFVar12->field_0xc = *(int *)&pFVar12->field_0xc + 1;
        UNLOCK();
      }
      puVar20[5] = OnGetBorderBackgroundColor;
      puVar20[6] = lStack_1840;
    }
    if ((uint)pFVar29 >> 8 != 0) {
      pFVar29 = (FSlot *)(ulonglong)((uint)pFVar29 & 0xfffffeff);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar12);
    }
    if ((char)pFVar29 < '\0') {
      pFVar29 = (FSlot *)(ulonglong)((uint)pFVar29 & 0xffffff7f);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar12);
    }
    if (((ulonglong)pFVar29 & 0x40) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_15e8.SharedReferenceCount.ReferenceController);
    }
    if (local_1658.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1658.Accessor,&local_1658);
    }
    pFVar29 = local_res10;
    pFVar23->_HAlign = this->HorizontalAlignment;
    pFVar23 = SBorder::FArguments::operator[](pFVar23,(TSharedRef<SWidget,1> *)local_res10);
    pTVar27 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                        (&local_1458,"SBorder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SCheckBox.cpp"
                         ,0x231,local_1836);
    pTVar27 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::Expose<SBorder>
                        (pTVar27,&this->ContentContainer);
    pTVar24 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar27,&local_17b8,pFVar23);
    pTVar2 = (pTVar24->SharedReferenceCount).ReferenceController;
    local_1700.Object = (SWidget *)pTVar24->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1700.SharedReferenceCount.ReferenceController = pTVar2;
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&local_1700);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_17b8.SharedReferenceCount.ReferenceController._4_4_,
                        local_17b8.SharedReferenceCount.ReferenceController._0_4_));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1458._Widget.SharedReferenceCount.ReferenceController);
    SBorder::FArguments::~FArguments(&local_428);
  }
  else {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4946083689533537748>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SCheckBox.cpp"
                       ,0x22c,"CheckBoxType == ESlateCheckBoxType::ToggleButton");
    pFVar29 = local_res10;
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&pFVar29->field_0x8);
  return;
}

// Construct @ 142858ad0

void __thiscall SCheckBox::Construct(SCheckBox *this,FArguments *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  EStyleColor EVar7;
  undefined2 uVar8;
  bool bVar9;
  FSlateSound *pFVar10;
  TSharedRef<SWidget,1> local_68;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_48;
  FDestructionSentinel local_40;
  FReadAccessScope local_28;
  
  if (param_1->_Style == (FCheckBoxStyle *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._Style != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SCheckBox.cpp"
                       ,0x20,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Style = param_1->_Style;
  this->UncheckedImage = param_1->_UncheckedImage;
  this->UncheckedHoveredImage = param_1->_UncheckedHoveredImage;
  this->UncheckedPressedImage = param_1->_UncheckedPressedImage;
  this->CheckedImage = param_1->_CheckedImage;
  this->CheckedHoveredImage = param_1->_CheckedHoveredImage;
  this->CheckedPressedImage = param_1->_CheckedPressedImage;
  this->UndeterminedImage = param_1->_UndeterminedImage;
  this->UndeterminedHoveredImage = param_1->_UndeterminedHoveredImage;
  this->UndeterminedPressedImage = param_1->_UndeterminedPressedImage;
  this->BackgroundImage = param_1->_BackgroundImage;
  this->BackgroundHoveredImage = param_1->_BackgroundHoveredImage;
  this->BackgroundPressedImage = param_1->_BackgroundPressedImage;
  fVar4 = (param_1->_Padding).Value.Top;
  fVar5 = (param_1->_Padding).Value.Right;
  fVar6 = (param_1->_Padding).Value.Bottom;
  (this->PaddingOverride).Value.Left = (param_1->_Padding).Value.Left;
  (this->PaddingOverride).Value.Top = fVar4;
  (this->PaddingOverride).Value.Right = fVar5;
  (this->PaddingOverride).Value.Bottom = fVar6;
  (this->PaddingOverride).bIsSet = (param_1->_Padding).bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->PaddingOverride).Getter,&(param_1->_Padding).Getter);
  uVar3 = *(undefined8 *)
           ((longlong)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ForegroundColorOverride).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_ForegroundColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ForegroundColorOverride).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar3;
  EVar7 = (param_1->_ForegroundColor).Value.ColorTableId;
  uVar8 = *(undefined2 *)&(param_1->_ForegroundColor).Value.field_0x12;
  (this->ForegroundColorOverride).Value.ColorUseRule =
       (param_1->_ForegroundColor).Value.ColorUseRule;
  (this->ForegroundColorOverride).Value.ColorTableId = EVar7;
  *(undefined2 *)&(this->ForegroundColorOverride).Value.field_0x12 = uVar8;
  (this->ForegroundColorOverride).bIsSet = (param_1->_ForegroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->ForegroundColorOverride).Getter,&(param_1->_ForegroundColor).Getter);
  uVar3 = *(undefined8 *)
           ((longlong)&(param_1->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->BorderBackgroundColorOverride).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->_BorderBackgroundColor).Value.SpecifiedColor.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->BorderBackgroundColorOverride).Value.SpecifiedColor.field0_0x0 + 8) = uVar3;
  EVar7 = (param_1->_BorderBackgroundColor).Value.ColorTableId;
  uVar8 = *(undefined2 *)&(param_1->_BorderBackgroundColor).Value.field_0x12;
  (this->BorderBackgroundColorOverride).Value.ColorUseRule =
       (param_1->_BorderBackgroundColor).Value.ColorUseRule;
  (this->BorderBackgroundColorOverride).Value.ColorTableId = EVar7;
  *(undefined2 *)&(this->BorderBackgroundColorOverride).Value.field_0x12 = uVar8;
  (this->BorderBackgroundColorOverride).bIsSet = (param_1->_BorderBackgroundColor).bIsSet;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->BorderBackgroundColorOverride).Getter,&(param_1->_BorderBackgroundColor).Getter
            );
  if (&param_1->_Type != &this->CheckBoxTypeOverride) {
    if ((param_1->_Type).bIsSet == false) {
      if ((this->CheckBoxTypeOverride).bIsSet != false) {
        (this->CheckBoxTypeOverride).bIsSet = false;
      }
    }
    else {
      (this->CheckBoxTypeOverride).TypedValue = (param_1->_Type).TypedValue;
      (this->CheckBoxTypeOverride).bIsSet = true;
    }
  }
  this->HorizontalAlignment = param_1->_HAlign;
  this->CheckBoxImageVAlign = param_1->_CheckBoxImageVAlign;
  this->bCheckBoxContentUsesAutoWidth = param_1->_CheckBoxContentUsesAutoWidth;
  this->bIsPressed = false;
  this->bIsFocusable = param_1->_IsFocusable;
  local_68.Object = (param_1->_Content).Widget.Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  BuildCheckBox(this,&local_68);
  TAttribute<enum_ECheckBoxState>::operator=(&this->IsCheckboxChecked,&param_1->_IsChecked);
  if (&param_1->_OnCheckStateChanged != &this->OnCheckStateChanged) {
    local_58 = (undefined1  [8])0x0;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnCheckStateChanged,&local_28);
    if ((*(int *)&(param_1->_OnCheckStateChanged).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(param_1->_OnCheckStateChanged).field_0x8, plVar1 != (longlong *)0x0
       )) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_58);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCheckStateChanged,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  this->ClickMethod = param_1->_ClickMethod;
  (this->TouchMethod).Value = (char)param_1->_TouchMethod;
  (this->PressMethod).Value = (char)param_1->_PressMethod;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnGetMenuContent,&param_1->_OnGetMenuContent);
  pFVar10 = &(param_1->_HoveredSoundOverride).TypedValue;
  if ((param_1->_HoveredSoundOverride).bIsSet == false) {
    pFVar10 = &param_1->_Style->HoveredSlateSound;
  }
  FSlateSound::operator=(&this->HoveredSound,pFVar10);
  pFVar10 = &(param_1->_CheckedSoundOverride).TypedValue;
  if ((param_1->_CheckedSoundOverride).bIsSet == false) {
    pFVar10 = &param_1->_Style->CheckedSlateSound;
  }
  FSlateSound::operator=(&this->CheckedSound,pFVar10);
  pFVar10 = &(param_1->_UncheckedSoundOverride).TypedValue;
  if ((param_1->_UncheckedSoundOverride).bIsSet == false) {
    pFVar10 = &param_1->_Style->UncheckedSlateSound;
  }
  FSlateSound::operator=(&this->UncheckedSound,pFVar10);
  return;
}

// CreateAccessibleWidget @ 142866480

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
SCheckBox::CreateAccessibleWidget
          (SCheckBox *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  FSlateAccessibleWidget *this_00;
  TSharedRef<SWidget,1> *pTVar6;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar7;
  TRawPtrProxy<FSlateAccessibleWidget> TVar8;
  bool bVar9;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  bVar9 = false;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  this_00 = ::operator_new(0x78);
  if (this_00 == (FSlateAccessibleWidget *)0x0) {
    this_00 = (FSlateAccessibleWidget *)0x0;
    TVar8.Object = local_res10.Object;
  }
  else {
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
    TVar8.Object = (FSlateAccessibleWidget *)(pTVar6->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar6->Object;
    if (TVar8.Object == (FSlateAccessibleWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      *(atomic<int> *)&(TVar8.Object)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(TVar8.Object)->_padding_ + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
      LOCK();
      ((atomic<int> *)&(TVar8.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar8.Object)->_padding_)[1] + 1);
      UNLOCK();
    }
    local_28.Object = pSVar3;
    local_28.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar8.Object;
    FSlateAccessibleWidget::FSlateAccessibleWidget(this_00,&local_28,CheckBox);
    this_00->_padding_ =
         (longlong)&FSlateAccessibleCheckBox::_vftable__for__FSlateAccessibleWidget__;
    this_00[1]._padding_ =
         (longlong)&FSlateAccessibleCheckBox::_vftable__for__IAccessibleActivatable__;
    this_00[1]._padding_ = (longlong)&FSlateAccessibleCheckBox::_vftable__for__IAccessibleProperty__
    ;
    if (TVar8.Object != (FSlateAccessibleWidget *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)&(TVar8.Object)->_padding_ + 1;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TVar8.Object)->_padding_ + 8))(TVar8.Object,1);
      }
    }
    bVar9 = true;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar4)();
        return pTVar7;
      }
    }
  }
  local_res10.Object = this_00;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar8.Object);
  }
  return __return_storage_ptr__;
}

// GetBackgroundHoveredImage @ 142874fd0

FSlateBrush * __thiscall SCheckBox::GetBackgroundHoveredImage(SCheckBox *this)

{
  FSlateBrush *pFVar1;
  
  pFVar1 = this->BackgroundHoveredImage;
  if (pFVar1 == (FSlateBrush *)0x0) {
    pFVar1 = &this->Style->BackgroundHoveredImage;
  }
  return pFVar1;
}

// GetBackgroundImage @ 142874ff0

FSlateBrush * __thiscall SCheckBox::GetBackgroundImage(SCheckBox *this)

{
  FSlateBrush *pFVar1;
  
  pFVar1 = this->BackgroundImage;
  if (pFVar1 == (FSlateBrush *)0x0) {
    pFVar1 = &this->Style->BackgroundImage;
  }
  return pFVar1;
}

// GetBackgroundPressedImage @ 142875010

FSlateBrush * __thiscall SCheckBox::GetBackgroundPressedImage(SCheckBox *this)

{
  FSlateBrush *pFVar1;
  
  pFVar1 = this->BackgroundPressedImage;
  if (pFVar1 == (FSlateBrush *)0x0) {
    pFVar1 = &this->Style->BackgroundPressedImage;
  }
  return pFVar1;
}

// GetCheckedHoveredImage @ 142875550

FSlateBrush * __thiscall SCheckBox::GetCheckedHoveredImage(SCheckBox *this)

{
  FSlateBrush *pFVar1;
  
  pFVar1 = this->CheckedHoveredImage;
  if (pFVar1 == (FSlateBrush *)0x0) {
    pFVar1 = &this->Style->CheckedHoveredImage;
  }
  return pFVar1;
}

// GetCheckedImage @ 142875570

FSlateBrush * __thiscall SCheckBox::GetCheckedImage(SCheckBox *this)

{
  FSlateBrush *pFVar1;
  
  pFVar1 = this->CheckedImage;
  if (pFVar1 == (FSlateBrush *)0x0) {
    pFVar1 = &this->Style->CheckedImage;
  }
  return pFVar1;
}

// GetCheckedPressedImage @ 142875590

FSlateBrush * __thiscall SCheckBox::GetCheckedPressedImage(SCheckBox *this)

{
  FSlateBrush *pFVar1;
  
  pFVar1 = this->CheckedPressedImage;
  if (pFVar1 == (FSlateBrush *)0x0) {
    pFVar1 = &this->Style->CheckedPressedImage;
  }
  return pFVar1;
}

// GetCheckedState @ 142875690

ECheckBoxState __thiscall SCheckBox::GetCheckedState(SCheckBox *this)

{
  ECheckBoxState *pEVar1;
  
  pEVar1 = TAttribute<enum_ECheckBoxState>::Get(&this->IsCheckboxChecked);
  return *pEVar1;
}

// GetClickMethodFromInputType @ 142875ab0

TEnumAsByte<EButtonClickMethod::Type> __thiscall
SCheckBox::GetClickMethodFromInputType(SCheckBox *this,FPointerEvent *param_1)

{
  uchar uVar1;
  TEnumAsByte<EButtonClickMethod::Type> TVar2;
  longlong in_R8;
  
  TVar2.Value = (uchar)param_1;
  if (*(char *)(in_R8 + 0x6c) != '\0') {
    uVar1 = (this->TouchMethod).Value;
    if (uVar1 == '\0') {
      *(undefined1 *)&param_1->_padding_ = 0;
      return (TEnumAsByte<EButtonClickMethod::Type>)TVar2.Value;
    }
    if (uVar1 == '\x01') {
      *(undefined1 *)&param_1->_padding_ = 1;
      return (TEnumAsByte<EButtonClickMethod::Type>)TVar2.Value;
    }
    if (uVar1 == '\x02') {
      *(undefined1 *)&param_1->_padding_ = 3;
      return (TEnumAsByte<EButtonClickMethod::Type>)TVar2.Value;
    }
  }
  *(char *)&param_1->_padding_ = (char)this->ClickMethod;
  return (TEnumAsByte<EButtonClickMethod::Type>)TVar2.Value;
}

// GetForegroundColor @ 142876990

/* WARNING: Removing unreachable block (ram,0x000142876a02) */

FSlateColor * __thiscall
SCheckBox::GetForegroundColor(SCheckBox *this,FSlateColor *__return_storage_ptr__)

{
  undefined1 uVar1;
  FCheckBoxStyle *pFVar2;
  float fVar3;
  FSlateColor *pFVar4;
  ECheckBoxState *pEVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pFVar4 = TAttribute<FSlateColor>::Get(&this->ForegroundColorOverride);
  uVar1 = pFVar4->ColorUseRule;
  if (((((pFVar4->SpecifiedColor).field0_0x0._s_0.R != __real_3f800000) ||
       ((pFVar4->SpecifiedColor).field0_0x0._s_0.G != 0.0)) ||
      ((pFVar4->SpecifiedColor).field0_0x0._s_0.B != __real_3f800000)) ||
     (((pFVar4->SpecifiedColor).field0_0x0._s_0.A != __real_3f800000 || (uVar1 != '\x04')))) {
    fVar9 = (pFVar4->SpecifiedColor).field0_0x0._s_0.R;
    fVar10 = (pFVar4->SpecifiedColor).field0_0x0._s_0.G;
    fVar11 = (pFVar4->SpecifiedColor).field0_0x0._s_0.B;
    fVar12 = (pFVar4->SpecifiedColor).field0_0x0._s_0.A;
    fVar3 = *(float *)&pFVar4->ColorUseRule;
    goto LAB_142876aaa;
  }
  pEVar5 = TAttribute<enum_ECheckBoxState>::Get(&this->IsCheckboxChecked);
  if (*pEVar5 == Unchecked) {
    if (this->bIsPressed != false) {
      pFVar2 = this->Style;
      fVar9 = (pFVar2->PressedForeground).SpecifiedColor.field0_0x0._s_0.R;
      fVar10 = (pFVar2->PressedForeground).SpecifiedColor.field0_0x0._s_0.G;
      fVar11 = (pFVar2->PressedForeground).SpecifiedColor.field0_0x0._s_0.B;
      fVar12 = (pFVar2->PressedForeground).SpecifiedColor.field0_0x0._s_0.A;
      fVar3 = *(float *)&(pFVar2->PressedForeground).ColorUseRule;
      goto LAB_142876aaa;
    }
    lVar6 = 0x874;
    lVar8 = 0x860;
  }
  else {
    if (*pEVar5 != Checked) {
      pFVar2 = this->Style;
      fVar9 = (pFVar2->UndeterminedForeground).SpecifiedColor.field0_0x0._s_0.R;
      fVar10 = (pFVar2->UndeterminedForeground).SpecifiedColor.field0_0x0._s_0.G;
      fVar11 = (pFVar2->UndeterminedForeground).SpecifiedColor.field0_0x0._s_0.B;
      fVar12 = (pFVar2->UndeterminedForeground).SpecifiedColor.field0_0x0._s_0.A;
      fVar3 = *(float *)&(pFVar2->UndeterminedForeground).ColorUseRule;
      goto LAB_142876aaa;
    }
    if (this->bIsPressed != false) {
      pFVar2 = this->Style;
      fVar9 = (pFVar2->CheckedPressedForeground).SpecifiedColor.field0_0x0._s_0.R;
      fVar10 = (pFVar2->CheckedPressedForeground).SpecifiedColor.field0_0x0._s_0.G;
      fVar11 = (pFVar2->CheckedPressedForeground).SpecifiedColor.field0_0x0._s_0.B;
      fVar12 = (pFVar2->CheckedPressedForeground).SpecifiedColor.field0_0x0._s_0.A;
      fVar3 = *(float *)&(pFVar2->CheckedPressedForeground).ColorUseRule;
      goto LAB_142876aaa;
    }
    lVar6 = 0x8b0;
    lVar8 = 0x89c;
  }
  if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
    lVar6 = lVar8;
  }
  pfVar7 = (float *)(&this->Style->field_0x0 + lVar6);
  fVar9 = *pfVar7;
  fVar10 = pfVar7[1];
  fVar11 = pfVar7[2];
  fVar12 = pfVar7[3];
  fVar3 = pfVar7[4];
LAB_142876aaa:
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = fVar9;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = fVar10;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = fVar11;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar12;
  *(float *)&__return_storage_ptr__->ColorUseRule = fVar3;
  return __return_storage_ptr__;
}

// GetUncheckedHoveredImage @ 14287d550

FSlateBrush * __thiscall SCheckBox::GetUncheckedHoveredImage(SCheckBox *this)

{
  FSlateBrush *pFVar1;
  
  pFVar1 = this->UncheckedHoveredImage;
  if (pFVar1 == (FSlateBrush *)0x0) {
    pFVar1 = &this->Style->UncheckedHoveredImage;
  }
  return pFVar1;
}

// GetUncheckedImage @ 14287d570

FSlateBrush * __thiscall SCheckBox::GetUncheckedImage(SCheckBox *this)

{
  FSlateBrush *pFVar1;
  
  pFVar1 = this->UncheckedImage;
  if (pFVar1 == (FSlateBrush *)0x0) {
    pFVar1 = &this->Style->UncheckedImage;
  }
  return pFVar1;
}

// GetUncheckedPressedImage @ 14287d590

FSlateBrush * __thiscall SCheckBox::GetUncheckedPressedImage(SCheckBox *this)

{
  FSlateBrush *pFVar1;
  
  pFVar1 = this->UncheckedPressedImage;
  if (pFVar1 == (FSlateBrush *)0x0) {
    pFVar1 = &this->Style->UncheckedPressedImage;
  }
  return pFVar1;
}

// GetUndeterminedHoveredImage @ 14287d5b0

FSlateBrush * __thiscall SCheckBox::GetUndeterminedHoveredImage(SCheckBox *this)

{
  FSlateBrush *pFVar1;
  
  pFVar1 = this->UndeterminedHoveredImage;
  if (pFVar1 == (FSlateBrush *)0x0) {
    pFVar1 = &this->Style->UndeterminedHoveredImage;
  }
  return pFVar1;
}

// GetUndeterminedImage @ 14287d5d0

FSlateBrush * __thiscall SCheckBox::GetUndeterminedImage(SCheckBox *this)

{
  FSlateBrush *pFVar1;
  
  pFVar1 = this->UndeterminedImage;
  if (pFVar1 == (FSlateBrush *)0x0) {
    pFVar1 = &this->Style->UndeterminedImage;
  }
  return pFVar1;
}

// GetUndeterminedPressedImage @ 14287d5f0

FSlateBrush * __thiscall SCheckBox::GetUndeterminedPressedImage(SCheckBox *this)

{
  FSlateBrush *pFVar1;
  
  pFVar1 = this->UndeterminedPressedImage;
  if (pFVar1 == (FSlateBrush *)0x0) {
    pFVar1 = &this->Style->UndeterminedPressedImage;
  }
  return pFVar1;
}

// IsInteractable @ 142881f20

bool __thiscall SCheckBox::IsInteractable(SCheckBox *this)

{
  return (bool)*(undefined1 *)((longlong)&this->_padding_ + 2);
}

// IsPreciseTapOrClick @ 1428821b0

bool __thiscall SCheckBox::IsPreciseTapOrClick(SCheckBox *this,FPointerEvent *param_1)

{
  uchar uVar1;
  
  if (param_1->bIsTouchEvent != false) {
    uVar1 = (this->TouchMethod).Value;
    if (uVar1 == '\0') {
      return false;
    }
    if (uVar1 == '\x01') {
      return false;
    }
    if (uVar1 == '\x02') {
      return true;
    }
  }
  return (char)this->ClickMethod == PreciseClick;
}

// OnGetBackgroundImage @ 142886530

FSlateBrush * __thiscall SCheckBox::OnGetBackgroundImage(SCheckBox *this)

{
  FSlateBrush *pFVar1;
  
  if (this->bIsPressed == false) {
    if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
      pFVar1 = this->BackgroundImage;
      if (pFVar1 == (FSlateBrush *)0x0) {
        pFVar1 = &this->Style->BackgroundImage;
      }
    }
    else {
      pFVar1 = this->BackgroundHoveredImage;
      if (pFVar1 == (FSlateBrush *)0x0) {
        return &this->Style->BackgroundHoveredImage;
      }
    }
  }
  else {
    pFVar1 = this->BackgroundPressedImage;
    if (pFVar1 == (FSlateBrush *)0x0) {
      return &this->Style->BackgroundPressedImage;
    }
  }
  return pFVar1;
}

// OnGetBorderBackgroundColor @ 1428865a0

FSlateColor * __thiscall
SCheckBox::OnGetBorderBackgroundColor(SCheckBox *this,FSlateColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  ESlateColorStylingMode EVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  FSlateColor *pFVar5;
  
  if ((this->BorderBackgroundColorOverride).bIsSet == false) {
    pFVar5 = &this->Style->BorderBackgroundColor;
  }
  else {
    pFVar5 = TAttribute<FSlateColor>::Get(&this->BorderBackgroundColorOverride);
  }
  uVar1 = *(undefined8 *)((longlong)&(pFVar5->SpecifiedColor).field0_0x0 + 8);
  EVar2 = pFVar5->ColorUseRule;
  EVar3 = pFVar5->ColorTableId;
  uVar4 = *(undefined2 *)&pFVar5->field_0x12;
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
       *(undefined8 *)&(pFVar5->SpecifiedColor).field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar1;
  __return_storage_ptr__->ColorUseRule = EVar2;
  __return_storage_ptr__->ColorTableId = EVar3;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar4;
  return __return_storage_ptr__;
}

// OnGetCheckBoxType @ 1428865f0

Type __thiscall SCheckBox::OnGetCheckBoxType(SCheckBox *this)

{
  if ((this->CheckBoxTypeOverride).bIsSet != false) {
    return (this->CheckBoxTypeOverride).TypedValue;
  }
  return (Type)(this->Style->CheckBoxType).Value;
}

// OnGetCheckImage @ 142886620

FSlateBrush * __thiscall SCheckBox::OnGetCheckImage(SCheckBox *this)

{
  ECheckBoxState *pEVar1;
  FSlateBrush *pFVar2;
  
  pEVar1 = TAttribute<enum_ECheckBoxState>::Get(&this->IsCheckboxChecked);
  if (*pEVar1 == Unchecked) {
    if (this->bIsPressed == false) {
      if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
        pFVar2 = this->UncheckedImage;
        if (pFVar2 == (FSlateBrush *)0x0) {
          pFVar2 = &this->Style->UncheckedImage;
        }
      }
      else {
        pFVar2 = this->UncheckedHoveredImage;
        if (pFVar2 == (FSlateBrush *)0x0) {
          return &this->Style->UncheckedHoveredImage;
        }
      }
    }
    else {
      pFVar2 = this->UncheckedPressedImage;
      if (pFVar2 == (FSlateBrush *)0x0) {
        return &this->Style->UncheckedPressedImage;
      }
    }
  }
  else if (*pEVar1 == Checked) {
    if (this->bIsPressed == false) {
      if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
        pFVar2 = this->CheckedImage;
        if (pFVar2 == (FSlateBrush *)0x0) {
          return &this->Style->CheckedImage;
        }
      }
      else {
        pFVar2 = this->CheckedHoveredImage;
        if (pFVar2 == (FSlateBrush *)0x0) {
          return &this->Style->CheckedHoveredImage;
        }
      }
    }
    else {
      pFVar2 = this->CheckedPressedImage;
      if (pFVar2 == (FSlateBrush *)0x0) {
        return &this->Style->CheckedPressedImage;
      }
    }
  }
  else if (this->bIsPressed == false) {
    if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
      pFVar2 = this->UndeterminedImage;
      if (pFVar2 == (FSlateBrush *)0x0) {
        return &this->Style->UndeterminedImage;
      }
    }
    else {
      pFVar2 = this->UndeterminedHoveredImage;
      if (pFVar2 == (FSlateBrush *)0x0) {
        return &this->Style->UndeterminedHoveredImage;
      }
    }
  }
  else {
    pFVar2 = this->UndeterminedPressedImage;
    if (pFVar2 == (FSlateBrush *)0x0) {
      return &this->Style->UndeterminedPressedImage;
    }
  }
  return pFVar2;
}

// OnGetPadding @ 1428867b0

FMargin * __thiscall SCheckBox::OnGetPadding(SCheckBox *this,FMargin *__return_storage_ptr__)

{
  FCheckBoxStyle *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FMargin *pFVar5;
  
  if ((this->PaddingOverride).bIsSet != false) {
    pFVar5 = TAttribute<FMargin>::Get(&this->PaddingOverride);
    fVar2 = pFVar5->Top;
    fVar3 = pFVar5->Right;
    fVar4 = pFVar5->Bottom;
    __return_storage_ptr__->Left = pFVar5->Left;
    __return_storage_ptr__->Top = fVar2;
    __return_storage_ptr__->Right = fVar3;
    __return_storage_ptr__->Bottom = fVar4;
    return __return_storage_ptr__;
  }
  pFVar1 = this->Style;
  fVar2 = (pFVar1->Padding).Top;
  fVar3 = (pFVar1->Padding).Right;
  fVar4 = (pFVar1->Padding).Bottom;
  __return_storage_ptr__->Left = (pFVar1->Padding).Left;
  __return_storage_ptr__->Top = fVar2;
  __return_storage_ptr__->Right = fVar3;
  __return_storage_ptr__->Bottom = fVar4;
  return __return_storage_ptr__;
}

// OnKeyDown @ 142886cc0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCheckBox::OnKeyDown
          (SCheckBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  char cVar1;
  FSlateApplication *pFVar2;
  ECheckBoxState *pEVar3;
  FSlateSound *pFVar4;
  
  pFVar2 = FSlateApplication::Get();
  cVar1 = (**(code **)(*(longlong *)pFVar2 + 0xb0))(pFVar2,param_2);
  if (cVar1 != '\0') {
    SWidget::OnKeyDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  this->bIsPressed = true;
  if ((this->PressMethod).Value == '\x01') {
    ToggleCheckedState(this);
    pEVar3 = TAttribute<enum_ECheckBoxState>::Get(&this->IsCheckboxChecked);
    if (*pEVar3 == Checked) {
      pFVar2 = FSlateApplication::Get();
      pFVar4 = &this->CheckedSound;
    }
    else {
      if (*pEVar3 != Unchecked) goto LAB_142886d4e;
      pFVar2 = FSlateApplication::Get();
      pFVar4 = &this->UncheckedSound;
    }
    FSlateApplication::PlaySound(pFVar2,pFVar4,0);
  }
LAB_142886d4e:
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnKeyUp @ 142887360

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCheckBox::OnKeyUp(SCheckBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
                  FKeyEvent *param_2)

{
  uchar uVar1;
  char cVar2;
  FSlateApplication *pFVar3;
  ECheckBoxState *pEVar4;
  bool bVar5;
  
  pFVar3 = FSlateApplication::Get();
  cVar2 = (**(code **)(*(longlong *)pFVar3 + 0xb0))(pFVar3);
  if (cVar2 == '\0') {
    bVar5 = this->bIsPressed;
    this->bIsPressed = false;
    uVar1 = (this->PressMethod).Value;
    if ((uVar1 == '\x02') || ((uVar1 == '\0' && (bVar5 != false)))) {
      ToggleCheckedState(this);
      pEVar4 = TAttribute<enum_ECheckBoxState>::Get(&this->IsCheckboxChecked);
      if (*pEVar4 == Checked) {
        pFVar3 = FSlateApplication::Get();
        FSlateApplication::PlaySound(pFVar3,&this->CheckedSound,0);
        bVar5 = true;
        goto LAB_142887409;
      }
      if (*pEVar4 == Unchecked) {
        pFVar3 = FSlateApplication::Get();
        FSlateApplication::PlaySound(pFVar3,&this->UncheckedSound,0);
      }
    }
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
LAB_142887409:
  FReply::FReply(__return_storage_ptr__,bVar5);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 1428874f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCheckBox::OnMouseButtonDoubleClick
          (SCheckBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  (**(code **)(this->_padding_ + 0x58))();
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 142887aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCheckBox::OnMouseButtonDown
          (SCheckBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  uchar uVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  ECheckBoxState *pEVar4;
  FSlateApplication *pFVar5;
  TSharedRef<SWidget,1> *pTVar6;
  FReply *pFVar7;
  FWidgetPath *pFVar8;
  ForElementType<FArrangedWidget> FVar9;
  FSlateSound *pFVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStackY_528 [32];
  undefined1 local_4c8;
  undefined1 local_4c7;
  FPopupTransitionEffect local_4c4;
  TVector2<float>_u_0 local_4c0;
  FDeprecateSlateVector2D local_4b8;
  TSharedRef<SWidget,1> local_4b0;
  TSharedRef<SWidget,1> local_4a0;
  TSharedRef<SWidget,1> local_490;
  FReadAccessScope local_480;
  FWidgetPath local_468;
  FWidgetPath local_308;
  FWidgetPath local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_528;
  FVar2 = (param_2->EffectingButton).KeyName;
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  plVar11 = (longlong *)0x0;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar12 = FVar2 != EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar12) {
    pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->EffectingButton).KeyName;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FVar2 == EKeys::RightMouseButton.KeyName) &&
       (bVar12 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                           ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetMenuContent),
       bVar12)) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (!bVar12) {
      FReply::FReply(__return_storage_ptr__,false);
      return __return_storage_ptr__;
    }
    if ((FWidgetPath *)param_2->_padding_ == (FWidgetPath *)0x0) {
      pFVar8 = FWidgetPath::FWidgetPath(&local_1a8);
      FWidgetPath::FWidgetPath(&local_468,pFVar8);
      if (local_1a8.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_1a8.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar9 = (ForElementType<FArrangedWidget>)&local_1a8.Widgets.Array;
      if (local_1a8.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar9 = local_1a8.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar9,local_1a8.Widgets.Array.ArrayNum);
      local_308.Widgets.Array.AllocatorInstance.SecondaryData =
           local_1a8.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    else {
      pFVar8 = FWidgetPath::FWidgetPath(&local_308,(FWidgetPath *)param_2->_padding_);
      FWidgetPath::FWidgetPath(&local_468,pFVar8);
      if (local_308.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_308.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_308.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar9 = (ForElementType<FArrangedWidget>)&local_308.Widgets.Array;
      if (local_308.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar9 = local_308.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar9,local_308.Widgets.Array.ArrayNum);
    }
    if (local_308.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_308.Widgets.Array.AllocatorInstance.SecondaryData);
    }
    pFVar5 = FSlateApplication::Get();
    local_4c0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_4b8 = param_2->ScreenSpacePosition;
    local_4c7 = 0;
    local_4c4.SlideDirection = ContextMenu;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetMenuContent,
               &local_480);
    if (*(int *)&(this->OnGetMenuContent).field_0x10 != 0) {
      plVar11 = *(longlong **)&(this->OnGetMenuContent).field_0x8;
    }
    (**(code **)(*plVar11 + 0x60))(plVar11,&local_4a0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_480);
    pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4b0);
    FSlateApplication::PushMenu
              (pFVar5,(TSharedPtr<IMenu,1> *)&local_490,pTVar6,&local_468,&local_4a0,
               (FDeprecateVector2DParameter *)&local_4b8,&local_4c4,true,
               (FDeprecateVector2DParameter *)&local_4c0._s_0,SUB82(&local_4c8,0),true,-1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_490.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4b0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4a0.SharedReferenceCount.ReferenceController);
    FReply::FReply(__return_storage_ptr__,true);
    if (local_468.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_468.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_468.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar9 = (ForElementType<FArrangedWidget>)&local_468.Widgets.Array;
    if (local_468.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar9 = local_468.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar9,local_468.Widgets.Array.ArrayNum);
    if (local_468.Widgets.Array.AllocatorInstance.SecondaryData ==
        (ForElementType<FArrangedWidget>)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free((void *)local_468.Widgets.Array.AllocatorInstance.SecondaryData);
    return __return_storage_ptr__;
  }
  this->bIsPressed = true;
  if (param_2->bIsTouchEvent == false) {
LAB_142887b27:
    if ((char)this->ClickMethod != MouseDown) {
LAB_142887bbd:
      FReply::FReply((FReply *)&local_468,true);
      pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4b0);
      pFVar7 = FReply::CaptureMouse((FReply *)&local_468,pTVar6);
      pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_490);
      pFVar7 = FReply::SetUserFocus(pFVar7,pTVar6,Mouse,false);
      FReply::FReply(__return_storage_ptr__,pFVar7);
      FReply::~FReply((FReply *)&local_468);
      return __return_storage_ptr__;
    }
  }
  else {
    uVar1 = (this->TouchMethod).Value;
    if (uVar1 == '\0') goto LAB_142887bbd;
    if (uVar1 != '\x01') {
      if (uVar1 == '\x02') goto LAB_142887bbd;
      goto LAB_142887b27;
    }
  }
  ToggleCheckedState(this);
  pEVar4 = TAttribute<enum_ECheckBoxState>::Get(&this->IsCheckboxChecked);
  if (*pEVar4 == Checked) {
    pFVar5 = FSlateApplication::Get();
    pFVar10 = &this->CheckedSound;
  }
  else {
    if (*pEVar4 != Unchecked) goto LAB_142887b79;
    pFVar5 = FSlateApplication::Get();
    pFVar10 = &this->UncheckedSound;
  }
  FSlateApplication::PlaySound(pFVar5,pFVar10,0);
LAB_142887b79:
  FReply::FReply((FReply *)&local_468,true);
  pTVar6 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4b0);
  pFVar7 = FReply::SetUserFocus((FReply *)&local_468,pTVar6,Mouse,false);
  FReply::FReply(__return_storage_ptr__,pFVar7);
  FReply::~FReply((FReply *)&local_468);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142888b30

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCheckBox::OnMouseButtonUp
          (SCheckBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uchar uVar3;
  FName FVar4;
  bool bVar5;
  FWeakReferencer<1> FVar6;
  bool bVar7;
  ECheckBoxState *pEVar8;
  FSlateApplication *this_00;
  FSlateSound *pFVar9;
  undefined1 uVar10;
  undefined8 local_res20;
  TVector2<float>_u_0 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  FSlateRotatedRect local_f0;
  FReply local_d8;
  
  bVar7 = false;
  local_res20 = (TReferenceControllerBase<1> *)((ulonglong)local_res20 & 0xffffffff00000000);
  if (param_2->bIsTouchEvent == false) {
LAB_142888be0:
    uVar10 = (undefined1)this->ClickMethod;
    if ((uVar10 == DownAndUp) || (uVar10 == PreciseClick)) goto LAB_142888bf4;
LAB_142888b83:
    local_res20 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->EffectingButton).KeyName;
    if (local_res20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res20->SharedReferenceCount = (atomic<int>)((int)local_res20->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FVar4 != EKeys::LeftMouseButton.KeyName) && (bVar7 = true, param_2->bIsTouchEvent == false)
       ) goto LAB_142888ba9;
    bVar5 = true;
  }
  else {
    uVar3 = (this->TouchMethod).Value;
    if (uVar3 == '\0') {
      uVar10 = DownAndUp;
    }
    else {
      if (uVar3 == '\x01') {
        uVar10 = MouseDown;
        goto LAB_142888b83;
      }
      if (uVar3 != '\x02') goto LAB_142888be0;
      uVar10 = PreciseClick;
    }
LAB_142888bf4:
    if (this->bIsPressed != false) goto LAB_142888b83;
LAB_142888ba9:
    bVar5 = false;
    if (!bVar7) goto LAB_142888bb1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res20);
  if (!bVar5) {
LAB_142888bb1:
    FReply::FReply(__return_storage_ptr__,false);
    return __return_storage_ptr__;
  }
  this->bIsPressed = false;
  if (uVar10 != MouseDown) {
    local_res20._0_4_ = SUB84(param_1->Size,0);
    local_res20._4_4_ = SUB84(param_1->Size,4);
    local_100 = (undefined4)local_res20;
    local_f4 = local_res20._4_4_;
    local_108 = (TVector2<float>_u_0)0x0;
    local_fc = 0;
    TransformRect<TTransform2<float>_>
              (&local_f0,&param_1->AccumulatedRenderTransform,(FSlateRotatedRect *)&local_108._s_0);
    bVar7 = FSlateRotatedRect::IsUnderLocation
                      (&local_f0,*(FDeprecateVector2DParameter *)&param_2->ScreenSpacePosition);
    if ((bVar7) &&
       ((uVar10 == MouseUp || (bVar7 = SWidget::HasMouseCapture((SWidget *)this), bVar7)))) {
      ToggleCheckedState(this);
      pEVar8 = TAttribute<enum_ECheckBoxState>::Get(&this->IsCheckboxChecked);
      if (*pEVar8 == Checked) {
        this_00 = FSlateApplication::Get();
        pFVar9 = &this->CheckedSound;
      }
      else {
        if (*pEVar8 != Unchecked) goto LAB_142888cdb;
        this_00 = FSlateApplication::Get();
        pFVar9 = &this->UncheckedSound;
      }
      FSlateApplication::PlaySound(this_00,pFVar9,0);
    }
  }
LAB_142888cdb:
  FReply::FReply(&local_d8,true);
  FVar6.ReferenceController = local_d8.MouseCaptor.WeakReferenceCount.ReferenceController;
  local_d8.MouseCaptor.Object = (SWidget *)0x0;
  local_d8.MouseCaptor.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
    }
  }
  local_d8.bUseHighPrecisionMouse = 0;
  local_d8.bReleaseMouseCapture = 1;
  FReply::FReply(__return_storage_ptr__,&local_d8);
  FReply::~FReply(&local_d8);
  return __return_storage_ptr__;
}

// OnMouseEnter @ 1428897d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SCheckBox::OnMouseEnter(SCheckBox *this,FGeometry *param_1,FPointerEvent *param_2)

{
  FSlateApplication *this_00;
  
  this_00 = FSlateApplication::Get();
  FSlateApplication::PlaySound(this_00,&this->HoveredSound,0);
  SWidget::OnMouseEnter((SWidget *)this,param_1,param_2);
  return;
}

// OnMouseLeave @ 1428899a0

void __thiscall SCheckBox::OnMouseLeave(SCheckBox *this,FPointerEvent *param_1)

{
  uchar uVar1;
  
  SWidget::OnMouseLeave((SWidget *)this,param_1);
  if (this->ClickMethod != MouseDown) {
    if (param_1->bIsTouchEvent != false) {
      uVar1 = (this->TouchMethod).Value;
      if (uVar1 == '\0') {
        return;
      }
      if (uVar1 == '\x01') {
        return;
      }
      if (uVar1 == '\x02') goto LAB_1428899e0;
    }
    if ((char)this->ClickMethod != '\x03') {
      return;
    }
  }
LAB_1428899e0:
  this->bIsPressed = false;
  return;
}

// PlayCheckedSound @ 142891a30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SCheckBox::PlayCheckedSound(SCheckBox *this)

{
  FSlateApplication *this_00;
  
  this_00 = FSlateApplication::Get();
  FSlateApplication::PlaySound(this_00,&this->CheckedSound,0);
  return;
}

// PlayHoverSound @ 142891ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SCheckBox::PlayHoverSound(SCheckBox *this)

{
  FSlateApplication *this_00;
  
  this_00 = FSlateApplication::Get();
  FSlateApplication::PlaySound(this_00,&this->HoveredSound,0);
  return;
}

// PlayUncheckedSound @ 142891b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SCheckBox::PlayUncheckedSound(SCheckBox *this)

{
  FSlateApplication *this_00;
  
  this_00 = FSlateApplication::Get();
  FSlateApplication::PlaySound(this_00,&this->UncheckedSound,0);
  return;
}

// SetCheckedHoveredImage @ 142895ac0

void __thiscall SCheckBox::SetCheckedHoveredImage(SCheckBox *this,FSlateBrush *param_1)

{
  this->CheckedHoveredImage = param_1;
  return;
}

// SetCheckedImage @ 142895ad0

void __thiscall SCheckBox::SetCheckedImage(SCheckBox *this,FSlateBrush *param_1)

{
  this->CheckedImage = param_1;
  return;
}

// SetCheckedPressedImage @ 142895ae0

void __thiscall SCheckBox::SetCheckedPressedImage(SCheckBox *this,FSlateBrush *param_1)

{
  this->CheckedPressedImage = param_1;
  return;
}

// SetClickMethod @ 142895bb0

void __thiscall SCheckBox::SetClickMethod(SCheckBox *this,Type param_1)

{
  this->ClickMethod = param_1;
  return;
}

// SetContent @ 142895c50

void __thiscall SCheckBox::SetContent(SCheckBox *this,TSharedRef<SWidget,1> *param_1)

{
  SBorder *pSVar1;
  code *pcVar2;
  bool bVar3;
  SWidget *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((this->ContentContainer).Object == (SBorder *)0x0) {
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
  pSVar1 = (this->ContentContainer).Object;
  pcVar2 = *(code **)(pSVar1->_padding_ + 0x248);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(pSVar1,&local_18);
  return;
}

// SetIsChecked @ 142896e60

void __thiscall SCheckBox::SetIsChecked(SCheckBox *this,TAttribute<ECheckBoxState> *param_1)

{
  void *pvVar1;
  
  TAttribute<enum_ECheckBoxState>::operator=(&this->IsCheckboxChecked,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// SetPressMethod @ 142898670

void __thiscall SCheckBox::SetPressMethod(SCheckBox *this,Type param_1)

{
  (this->PressMethod).Value = (uchar)param_1;
  return;
}

// SetStyle @ 142898f50

void __thiscall SCheckBox::SetStyle(SCheckBox *this,FCheckBoxStyle *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<SWidget,1> *pTVar3;
  TSharedRef<SWidget,1> local_3f8;
  undefined1 local_3e8 [536];
  undefined1 local_1d0 [32];
  undefined1 local_1b0 [64];
  undefined1 local_170 [64];
  undefined1 local_130 [48];
  undefined1 local_100 [32];
  undefined1 local_e0 [216];
  
  this->Style = param_1;
  if (param_1 == (FCheckBoxStyle *)0x0) {
    FArguments::FArguments((FArguments *)local_3e8);
    this->Style = (FCheckBoxStyle *)local_3e8._520_8_;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
    if ((void *)local_e0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_e0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_e0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_100);
    if ((void *)local_100._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_100._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_100);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_130);
    if ((void *)local_130._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_130._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_130);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_170);
    if ((void *)local_170._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_170._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_170);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b0);
    if ((void *)local_1b0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1b0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1b0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d0);
    if ((void *)local_1d0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1d0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_3e8._512_8_);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_3e8);
  }
  if (this->Style == (FCheckBoxStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Input\\SCheckBox.cpp"
                       ,0x1c5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ContentContainer).Object == (SBorder *)0x0) {
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
  pTVar3 = SBorder::GetContent((this->ContentContainer).Object);
  local_3f8.Object = pTVar3->Object;
  local_3f8.SharedReferenceCount.ReferenceController =
       (pTVar3->SharedReferenceCount).ReferenceController;
  if (local_3f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  BuildCheckBox(this,&local_3f8);
  return;
}

// SetTouchMethod @ 14289b270

void __thiscall SCheckBox::SetTouchMethod(SCheckBox *this,Type param_1)

{
  (this->TouchMethod).Value = (uchar)param_1;
  return;
}

// SetUncheckedHoveredImage @ 14289b2a0

void __thiscall SCheckBox::SetUncheckedHoveredImage(SCheckBox *this,FSlateBrush *param_1)

{
  this->UncheckedHoveredImage = param_1;
  return;
}

// SetUncheckedImage @ 14289b2b0

void __thiscall SCheckBox::SetUncheckedImage(SCheckBox *this,FSlateBrush *param_1)

{
  this->UncheckedImage = param_1;
  return;
}

// SetUncheckedPressedImage @ 14289b2c0

void __thiscall SCheckBox::SetUncheckedPressedImage(SCheckBox *this,FSlateBrush *param_1)

{
  this->UncheckedPressedImage = param_1;
  return;
}

// SetUndeterminedHoveredImage @ 14289b2d0

void __thiscall SCheckBox::SetUndeterminedHoveredImage(SCheckBox *this,FSlateBrush *param_1)

{
  this->UndeterminedHoveredImage = param_1;
  return;
}

// SetUndeterminedImage @ 14289b2e0

void __thiscall SCheckBox::SetUndeterminedImage(SCheckBox *this,FSlateBrush *param_1)

{
  this->UndeterminedImage = param_1;
  return;
}

// SetUndeterminedPressedImage @ 14289b2f0

void __thiscall SCheckBox::SetUndeterminedPressedImage(SCheckBox *this,FSlateBrush *param_1)

{
  this->UndeterminedPressedImage = param_1;
  return;
}

// SupportsKeyboardFocus @ 14289d2a0

bool __thiscall SCheckBox::SupportsKeyboardFocus(SCheckBox *this)

{
  return this->bIsFocusable;
}

// ToggleCheckedState @ 14289daf0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SCheckBox::ToggleCheckedState(SCheckBox *this)

{
  TAttribute<ECheckBoxState> *this_00;
  ECheckBoxState EVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateAccessibleMessageHandler *this_01;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  char cVar6;
  ECheckBoxState *pEVar7;
  FSlateApplicationBase *pFVar8;
  FVariant *pFVar9;
  FVariant *pFVar10;
  TSharedRef<SWidget,1> *pTVar11;
  FReadAccessScope local_a8;
  FSlateWidgetAccessibleEventArgs local_90;
  FVariant local_40;
  FVariant local_28;
  
  this_00 = &this->IsCheckboxChecked;
  pEVar7 = TAttribute<enum_ECheckBoxState>::Get(this_00);
  EVar1 = *pEVar7;
  if ((EVar1 != Checked) && (EVar1 != Undetermined)) {
    if (EVar1 == Unchecked) {
      bVar5 = TAttribute<enum_ECheckBoxState>::IsBound(this_00);
      if (!bVar5) {
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->IsCheckboxChecked).Getter);
        this_00->Value = Checked;
        this_00->bIsSet = true;
      }
      TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->OnCheckStateChanged,Checked);
    }
    goto LAB_14289dbf3;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->IsCheckboxChecked).Getter,&local_a8);
  if ((*(int *)&(this->IsCheckboxChecked).Getter.field_0x10 == 0) ||
     (plVar2 = *(longlong **)&(this->IsCheckboxChecked).Getter.field_0x8, plVar2 == (longlong *)0x0)
     ) {
LAB_14289dba0:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->IsCheckboxChecked).Getter);
    this_00->Value = Unchecked;
    this_00->bIsSet = true;
  }
  else {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 == '\0') goto LAB_14289dba0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCheckStateChanged,
             &local_a8);
  if ((*(int *)&(this->OnCheckStateChanged).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnCheckStateChanged).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a8);
LAB_14289dbf3:
  pFVar8 = FSlateApplicationBase::Get();
  pTVar3 = (pFVar8->AccessibleMessageHandler).SharedReferenceCount.ReferenceController;
  this_01 = (pFVar8->AccessibleMessageHandler).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pEVar7 = TAttribute<enum_ECheckBoxState>::Get(this_00);
  pFVar9 = FVariant::FVariant<bool>(&local_40,*pEVar7 == Checked);
  pFVar10 = FVariant::FVariant<bool>(&local_28,EVar1 == Checked);
  pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                       (TSharedRef<SWidget,1> *)&local_a8);
  local_90.Widget.Object = pTVar11->Object;
  local_90.Widget.SharedReferenceCount.ReferenceController =
       (pTVar11->SharedReferenceCount).ReferenceController;
  if (local_90.Widget.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_90.Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_90.Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  local_90.Event = Activate;
  FVariant::FVariant(&local_90.OldValue,pFVar10);
  FVariant::FVariant(&local_90.NewValue,pFVar9);
  local_90.SlateUserIndex = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar11->SharedReferenceCount).ReferenceController);
  pFVar4 = (pFVar10->Value).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (pFVar9->Value).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FSlateAccessibleMessageHandler::OnWidgetEventRaised(this_01,&local_90);
  if (local_90.NewValue.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.NewValue.Value.AllocatorInstance.Data);
  }
  if (local_90.OldValue.Value.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.OldValue.Value.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

