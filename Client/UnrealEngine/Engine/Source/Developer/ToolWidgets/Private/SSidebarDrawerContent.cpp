// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 11

// operator() @ 142d698b0

bool __thiscall
`SSidebarDrawerContent::BuildContent'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<ISidebarDrawerContent,1> *param_1,
          TSharedRef<ISidebarDrawerContent,1> *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  FName local_res10;
  FName local_res18;
  
  iVar1 = (**(code **)(*(longlong *)param_1->Object + 0x30))();
  iVar2 = (**(code **)(*(longlong *)param_2->Object + 0x30))();
  if (iVar1 != iVar2) {
    return iVar1 < iVar2;
  }
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&General,L"General");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar3 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FName::FName(&::All,L"All");
      _Init_thread_footer(&::_TSS1);
    }
  }
  (**(code **)(*(longlong *)param_1->Object + 0x10))(param_1->Object,&local_res18);
  (**(code **)(*(longlong *)param_2->Object + 0x10))(param_2->Object,&local_res10);
  if ((local_res18.ComparisonIndex.Value != General.ComparisonIndex.Value) ||
     (local_res18.Number != General.Number)) {
    if ((local_res10.ComparisonIndex.Value != ::All.ComparisonIndex.Value) ||
       (local_res10.Number != ::All.Number)) {
      if (((local_res18.ComparisonIndex.Value != ::All.ComparisonIndex.Value) ||
          (local_res18.Number != ::All.Number)) &&
         ((local_res10.ComparisonIndex.Value != General.ComparisonIndex.Value ||
          (local_res10.Number != General.Number)))) {
        iVar1 = ::FName::Compare(&local_res18,&local_res10);
        return SUB41((uint)iVar1 >> 0x1f,0);
      }
      return false;
    }
  }
  return true;
}

// AddContentSlot @ 142d70dc0

void __thiscall
SSidebarDrawerContent::AddContentSlot
          (SSidebarDrawerContent *this,TSharedRef<ISidebarDrawerContent,1> *param_1)

{
  SVerticalBox *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  FSlot *this_00;
  FSlotArguments *pFVar6;
  FArguments *pFVar7;
  TWeakPtr<ISidebarDrawerContent,1> *pTVar8;
  FName *pFVar9;
  undefined8 *puVar10;
  TSharedRef<SBox,1> *pTVar11;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  float local_res18;
  char local_res1c;
  FSlot *local_res20;
  SBox *local_538;
  FSharedReferencer<1> local_530;
  FName local_528;
  undefined4 uStack_520;
  uint uStack_51c;
  FMemScope local_518;
  TAttribute<float> local_510;
  undefined1 local_4f0 [8];
  code *local_4e8;
  longlong lStack_4e0;
  SWidget *local_4d8;
  TReferenceControllerBase<1> *pTStack_4d0;
  TSharedRef<SBox,1> local_4c8;
  undefined1 local_4b8 [8];
  TReferenceControllerBase<1> *local_4b0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_4a8;
  undefined **local_490;
  undefined8 *local_488 [2];
  TReferenceControllerBase<1> *local_478;
  undefined1 local_470 [24];
  undefined1 local_458 [40];
  FSlotArgumentsMixin local_430;
  TPanelChildren<SBoxPanel::FSlot> *local_3a0;
  int local_398;
  TWeakPtr<ISidebarDrawerContent,1> local_390;
  FArguments local_380;
  
  if ((this->ContentBox).Object == (SVerticalBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pSVar1 = (this->ContentBox).Object;
  this_00 = ::operator_new(0x58);
  local_res20 = (FSlot *)0x0;
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
    local_res20 = SVerticalBox::FSlot::FSlot(this_00);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_488,(FSlot *)&local_res20);
  local_3a0 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar1->field_0x218;
  local_490 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  local_398 = -1;
  pFVar6 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_470,0.0,0.0,0.0,__real_40000000);
  pFVar7 = SBox::FArguments::FArguments(&local_380);
  pTVar8 = TSharedFromThis<ISidebarDrawerContent,1>::AsWeak
                     ((TSharedFromThis<ISidebarDrawerContent,1> *)&param_1->Object->field_0x8,
                      &local_390);
  pFVar9 = (FName *)(**(code **)(*(longlong *)param_1->Object + 0x10))(param_1->Object,local_4f0);
  uStack_520 = 0;
  local_528 = (FName)GetSectionContentVisibility;
  lStack_4e0 = (ulonglong)uStack_51c << 0x20;
  local_4e8 = GetSectionContentVisibility;
  pFVar7 = TSlateBaseNamedArgs<SBox>::
           Visibility<SSidebarDrawerContent,FName,TWeakPtr<ISidebarDrawerContent,1>_>
                     ((TSlateBaseNamedArgs<SBox> *)pFVar7,this,(pmf_2aafdeaf *)&local_4e8,*pFVar9,
                      pTVar8);
  puVar10 = (undefined8 *)
            (**(code **)(*(longlong *)param_1->Object + 0x38))(param_1->Object,local_4b8);
  pTVar2 = (TReferenceControllerBase<1> *)puVar10[1];
  pSVar3 = (SWidget *)*puVar10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4d8 = (pFVar7->_Content).Widget.Object;
  pTStack_4d0 = (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar7->_Content).Widget.Object = pSVar3;
  (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4d0);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_528 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_518,&local_528,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_4a8,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarDrawerContent.cpp"
             ,0x102,local_res8);
  FMemScope::~FMemScope(&local_518);
  FLLMScope::~FLLMScope(local_res10);
  pTVar11 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(&local_4a8,&local_4c8,pFVar7)
  ;
  pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
  local_538 = pTVar11->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_530.ReferenceController = pTVar2;
  if ((SBox **)&pFVar6->field_0x8 != &local_538) {
    *(SBox **)&pFVar6->field_0x8 = local_538;
    local_538 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar6->field_0x10,&local_530);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_530.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4b0);
  SBox::FArguments::~FArguments(&local_380);
  (**(code **)(*(longlong *)param_1->Object + 0x28))(param_1->Object,&local_res18);
  if (local_res1c == '\0') {
    SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)local_488);
  }
  else {
    local_510.Value = local_res18;
    local_510.Getter._0_8_ = 0;
    local_510.Getter._8_8_ = 0;
    local_510.bIsSet = true;
    local_510.Getter._16_8_ = 0;
    SVerticalBox::FSlot::FSlotArguments::FillHeight((FSlotArguments *)local_488,&local_510);
  }
  local_490 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
  if (local_488[0] != (undefined8 *)0x0) {
    if (local_398 == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_3a0,(FSlotArguments *)local_488);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot(local_3a0,(FSlotArguments *)local_488,local_398);
    }
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_430);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_458);
  if ((void *)local_458._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_458._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_458);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_478);
  if (local_488[0] != (undefined8 *)0x0) {
    (**(code **)*local_488[0])(local_488[0],1);
  }
  return;
}

// BuildContent @ 142d72550

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142d72d69) */

void __thiscall SSidebarDrawerContent::BuildContent(SSidebarDrawerContent *this)

{
  byte *pbVar1;
  TMap<FName,TSharedRef<ISidebarDrawerContent,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>_>
  *pTVar2;
  atomic<int> aVar3;
  int iVar4;
  uint uVar5;
  TReferenceControllerBase<1> *pTVar6;
  SCheckBox *pSVar7;
  undefined1 *puVar8;
  longlong lVar9;
  code *pcVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  FSidebarDrawer *pFVar20;
  SSidebarDrawerContent *this_00;
  FSharedReferencer<1> FVar21;
  TSharedRef<ISidebarDrawerContent,1> *pTVar22;
  TMap<FName,TSharedRef<ISidebarDrawerContent,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>_>
  *pTVar23;
  bool bVar24;
  char cVar25;
  byte bVar26;
  bool bVar27;
  atomic<int> aVar28;
  SWrapBox *this_01;
  SBoxPanel *this_02;
  ulonglong uVar29;
  FArguments *pFVar30;
  atomic<int> *paVar31;
  undefined8 *puVar32;
  TSharedRef<SWidget_const_,1> *pTVar33;
  ulong64 uVar34;
  FArguments *pFVar35;
  ISlateStyle *pIVar36;
  FCheckBoxStyle *pFVar37;
  TSharedRef<SWidget,1> *pTVar38;
  FArguments *pFVar39;
  FTextBlockStyle *pFVar40;
  FText *pFVar41;
  STextBlock *pSVar42;
  STextBlock *pSVar43;
  TSharedRef<SCheckBox,1> *pTVar44;
  TSharedRef<SBox,1> *pTVar45;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar46;
  longlong *plVar47;
  TReferenceControllerBase<1> *pTVar48;
  longlong lVar49;
  uint uVar50;
  int iVar51;
  TReferenceControllerBase<1> *pTVar52;
  undefined1 *puVar53;
  uint *puVar54;
  TSharedPtr<SWrapBox,1> *this_03;
  undefined1 *puVar55;
  uint uVar56;
  ForAnyElementType FVar57;
  TReferenceControllerBase<1> *pTVar58;
  undefined1 auStackY_11d8 [32];
  undefined1 local_11a8;
  undefined1 local_11a7;
  undefined1 local_11a6;
  undefined1 local_11a5;
  T0RequiredArgs local_11a4;
  T0RequiredArgs local_11a3;
  T0RequiredArgs local_11a2 [2];
  FName local_11a0;
  FSidebarDrawer *local_1198;
  FSharedReferencer<1> local_1190;
  uint local_1188;
  ulonglong local_1180;
  FArguments *local_1178;
  FLLMScope local_1170;
  FLLMScope local_116c;
  FLLMScope local_1168 [2];
  SSidebarDrawerContent *local_1160;
  longlong local_1158;
  TSharedRef<ISidebarDrawerContent,1> *local_1150;
  SBox *local_1148;
  FSharedReferencer<1> local_1140;
  TMap<FName,TSharedRef<ISidebarDrawerContent,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>_>
  *local_1138;
  longlong lStack_1130;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1128;
  uint uStack_1120;
  int iStack_111c;
  int iStack_1118;
  undefined4 uStack_1114;
  int local_1110;
  undefined4 uStack_110c;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1108;
  TReferenceControllerBase<1> *local_10f0;
  FArguments *local_10e8;
  TReferenceControllerBase<1> *local_10e0;
  TReferenceControllerBase<1> *local_10d8;
  undefined8 local_10d0;
  SWidget *local_10c8;
  TReferenceControllerBase<1> *pTStack_10c0;
  TArray<TSharedRef<ISidebarDrawerContent,1>,TSizedDefaultAllocator<32>_> local_10b8;
  Type local_10a8;
  undefined1 local_10a4;
  undefined1 local_10a0 [8];
  void *pvStack_1098;
  undefined8 local_1090;
  longlong *local_1088;
  undefined4 local_107c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1078;
  FMemScope local_1058;
  FName local_1050;
  FMemScope local_1048;
  FName local_1040;
  FMemScope local_1038;
  FScopedWidgetSlotArguments *local_1030;
  TSharedPtr<SWrapBox,1> *local_1028;
  TSharedRef<ISidebarDrawerContent,1> *local_1020;
  int local_1018;
  int local_1014;
  FName local_1010;
  FValueComparisonClass<_public:_void___cdecl_SSidebarDrawerContent::BuildContent(void)_::_2_::<lambda_1>_>
  local_1008;
  code *local_1000;
  undefined4 uStack_ff8;
  undefined4 uStack_ff4;
  code *local_ff0;
  undefined4 uStack_fe8;
  undefined4 uStack_fe4;
  code *local_fe0;
  undefined4 uStack_fd8;
  undefined4 uStack_fd4;
  TReferenceControllerBase<1> *local_fd0;
  FName local_fc8;
  TReferenceControllerBase<1> *local_fc0;
  TReferenceControllerBase<1> *local_fb8;
  FName local_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined1 local_f98;
  undefined1 local_f90 [8];
  void *pvStack_f88;
  undefined8 local_f80;
  TMap<FName,TSharedRef<ISidebarDrawerContent,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>_>
  *local_f78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f70;
  undefined8 uStack_f50;
  TMap<FName,TSharedRef<ISidebarDrawerContent,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>_>
  *local_f48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f40;
  undefined8 uStack_f20;
  TAttribute<FText> local_f18;
  FDestructionSentinel local_ee8;
  longlong *local_ed0;
  FDestructionSentinel local_ec8;
  undefined1 *local_eb0;
  FDestructionSentinel local_ea8;
  undefined1 *local_e90;
  TSharedRef<SBox,1> local_e88;
  TSharedRef<SCheckBox,1> local_e78;
  undefined1 local_e68 [8];
  TSharedRef<SWidget_const_,1> local_e60;
  TSharedRef<SWidget,1> local_e50;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_e40;
  TSharedRef<SWidget_const_,1> local_e28;
  SWidget *local_e18;
  TReferenceControllerBase<1> *pTStack_e10;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_e08;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_df0;
  undefined4 local_db4;
  undefined1 local_db0 [536];
  undefined1 local_b98 [32];
  undefined1 local_b78 [64];
  undefined1 local_b38 [64];
  undefined1 local_af8 [48];
  undefined1 local_ac8 [32];
  undefined1 local_aa8 [216];
  FArguments local_9d0;
  FArguments local_690;
  undefined1 local_138 [32];
  undefined8 local_118;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  ForElementType<FSetElementId> local_100;
  int local_f0 [2];
  FScopedWidgetSlotArguments local_e8;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x142d7256b;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_11d8;
  bVar19 = false;
  bVar18 = false;
  bVar17 = false;
  bVar16 = false;
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  bVar27 = false;
  local_1188 = 0;
  local_1198 = (FSidebarDrawer *)0x0;
  local_1160 = this;
  SharedPointerInternals::FSharedReferencer<1>::FSharedReferencer<1>
            (&local_1190,&(this->OwnerDrawerWeak).WeakReferenceCount);
  if (local_1190.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    local_1198 = (this->OwnerDrawerWeak).Object;
  }
  pFVar20 = local_1198;
  if (local_1198 == (FSidebarDrawer *)0x0) goto LAB_142d7387c;
  local_138._0_8_ = 0;
  local_138._8_8_ = 0;
  local_118 = 0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_100.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_f0[0] = 0;
  if ((local_1198 == (FSidebarDrawer *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar24)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  TSet<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>,FDefaultSetAllocator>
             *)local_138,
            *(int *)&(pFVar20->ContentSections).field_0x8 -
            *(int *)&(pFVar20->ContentSections).field_0x34);
  this_03 = &this->ButtonBox;
  local_1028 = this_03;
  this_01 = TSharedPtr<SWrapBox,1>::operator->(this_03);
  SWrapBox::ClearChildren(this_01);
  this_02 = (SBoxPanel *)TSharedPtr<SVerticalBox,1>::operator->(&this->ContentBox);
  SBoxPanel::ClearChildren(this_02);
  if ((pFVar20 == (FSidebarDrawer *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar24)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (*(int *)&(pFVar20->ContentSections).field_0x8 !=
      *(int *)&(pFVar20->ContentSections).field_0x34) {
    if ((pFVar20 == (FSidebarDrawer *)0x0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar24)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((TMap<FName,TSharedRef<ISidebarDrawerContent,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>_>
         *)local_138 != &pFVar20->ContentSections) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                (&local_100,local_f0,
                 (ForElementType<FSetElementId> *)&(pFVar20->ContentSections).field_0x38,
                 *(int *)&(pFVar20->ContentSections).field_0x48);
      TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_138,
                  (TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&pFVar20->ContentSections);
    }
    local_1008.Predicate.Predicate =
         (TDereferenceWrapper<TSharedRef<ISidebarDrawerContent,1>,_public:_void___cdecl_SSidebarDrawerContent::BuildContent(void)_::_2_::<lambda_1>_>
          )&local_11a5;
    TSet<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>,FDefaultSetAllocator>
    ::
    Sort<TSortableMapBase<FName,TSharedRef<ISidebarDrawerContent,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>_>::FValueComparisonClass<_SSidebarDrawerContent::BuildContent_::__l2::<lambda_1>_>_>
              ((TSet<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>,FDefaultSetAllocator>
                *)local_138,&local_1008);
    GetOrderedSections(this,&local_10b8);
    uVar29 = (ulonglong)local_10b8.ArrayNum;
    local_1020 = (TSharedRef<ISidebarDrawerContent,1> *)
                 (local_10b8.AllocatorInstance.Data + uVar29 * 0x10);
    local_1188 = local_10b8.ArrayNum;
    local_1180 = CONCAT44(local_1180._4_4_,1);
    FVar57.Data = local_10b8.AllocatorInstance.Data;
    while( true ) {
      pTVar22 = local_1020;
      local_1150 = (TSharedRef<ISidebarDrawerContent,1> *)FVar57.Data;
      if (local_10b8.ArrayNum != (uint)uVar29) {
        local_11a8 = 0;
        `TCheckedPointerIterator<TSharedRef<ISidebarDrawerContent,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_11a8);
      }
      if ((TSharedRef<ISidebarDrawerContent,1> *)FVar57.Data == pTVar22) break;
      (**(code **)(*(longlong *)((TSharedRef<ISidebarDrawerContent,1> *)FVar57.Data)->Object + 0x10)
      )(((TSharedRef<ISidebarDrawerContent,1> *)FVar57.Data)->Object,&local_10d0);
      if ((this_03->Object == (SWrapBox *)0x0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar24)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_1030 = SWrapBox::AddSlot(this_03->Object,&local_e8);
      pFVar30 = SBox::FArguments::FArguments(&local_9d0);
      local_f98 = 1;
      local_f80 = 0;
      local_fa8 = 0;
      uStack_fa0 = 0;
      local_f90 = (undefined1  [8])0x0;
      pvStack_f88 = (void *)0x0;
      (pFVar30->_Padding).Value.Left = 0.0;
      (pFVar30->_Padding).Value.Top = 0.0;
      (pFVar30->_Padding).Value.Right = 0.0;
      (pFVar30->_Padding).Value.Bottom = 0.0;
      (pFVar30->_Padding).bIsSet = true;
      local_10e8 = pFVar30;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_Padding).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f90);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f90);
      if (pvStack_f88 != (void *)0x0) {
        FMemory::Free(pvStack_f88);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_f90);
      pTVar52 = (TReferenceControllerBase<1> *)0x0;
      pFVar30->_HAlign = HAlign_Fill;
      pFVar30->_VAlign = VAlign_Fill;
      puVar55 = &((TSharedRef<ISidebarDrawerContent,1> *)FVar57.Data)->Object->field_0x8;
      pTVar6 = *(TReferenceControllerBase<1> **)
                &((TSharedRef<ISidebarDrawerContent,1> *)FVar57.Data)->Object->field_0x10;
      local_1178 = *(FArguments **)puVar55;
      pTVar48 = pTVar6;
      pTVar58 = pTVar52;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
        aVar3 = pTVar6->SharedReferenceCount;
        do {
          pTVar48 = pTVar52;
          pTVar58 = pTVar52;
          if (aVar3 == (atomic<int>)0x0) break;
          LOCK();
          aVar28 = pTVar6->SharedReferenceCount;
          bVar24 = aVar3 == aVar28;
          if (bVar24) {
            pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar28 = aVar3;
          }
          UNLOCK();
          pTVar48 = pTVar6;
          pTVar58 = (TReferenceControllerBase<1> *)local_1178;
          aVar3 = aVar28;
        } while (!bVar24);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar48);
      paVar31 = &pTVar58->SharedReferenceCount;
      if (pTVar58 == (TReferenceControllerBase<1> *)0x0) {
        paVar31 = (atomic<int> *)0x0;
      }
      if ((paVar31 != (atomic<int> *)puVar55) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("Result.Pin().Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x6c3,L""), bVar24)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar30 = local_10e8;
      *(undefined1 *)((longlong)&local_10e8->_padding_ + 1) = 1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_10e8->_padding_,
                 (FWriteAccessScope *)&local_ee8);
      local_ed0 = &pFVar30->_padding_;
      puVar32 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_ed0);
      if (puVar32 != (undefined8 *)0x0) {
        local_1000 = GetSectionButtonVisibility;
        uStack_ff4 = local_107c;
        uStack_ff8 = 0;
        pTVar33 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&local_1160->_padding_,&local_e60);
        local_11a0 = (FName)pTVar33->Object;
        pTVar48 = (pTVar33->SharedReferenceCount).ReferenceController;
        if (pTVar48 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar15 = true;
        bVar14 = true;
        bVar13 = true;
        *puVar32 = &
                   ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TWeakPtr_VISidebarDrawerContent___00____6B_
        ;
        puVar32[1] = local_1178;
        puVar32[2] = pTVar6;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
          UNLOCK();
        }
        local_10e0 = pTVar48;
        local_fd0 = pTVar48;
        uVar34 = FDelegateHandle::GenerateNewID();
        puVar32[3] = uVar34;
        *puVar32 = &
                   ___7__TBaseSPMethodDelegateInstance__00__CBVSSidebarDrawerContent___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TWeakPtr_VISidebarDrawerContent___00____6B_
        ;
        *(FName *)(puVar32 + 4) = local_11a0;
        puVar32[5] = pTVar48;
        if (pTVar48 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar48->WeakReferenceCount = (atomic<int>)((int)pTVar48->WeakReferenceCount + 1);
          UNLOCK();
        }
        puVar32[6] = local_1000;
        puVar32[7] = CONCAT44(uStack_ff4,uStack_ff8);
      }
      if (bVar14) {
        bVar14 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_10e0);
      }
      if (bVar15) {
        bVar15 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_fd0);
      }
      if (bVar13) {
        bVar13 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e60.SharedReferenceCount.ReferenceController);
      }
      if (local_ee8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_ee8.Accessor,&local_ee8);
      }
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar31 = &pTVar6->WeakReferenceCount;
        aVar3 = *paVar31;
        *paVar31 = (atomic<int>)((int)*paVar31 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,local_1180);
        }
      }
      pFVar35 = SCheckBox::FArguments::FArguments((FArguments *)local_db0);
      local_1178 = pFVar35;
      ::FName::FName(&local_fc8,L"DetailsView.SectionButton");
      pIVar36 = FAppStyle::Get();
      pFVar37 = (FCheckBoxStyle *)
                (**(code **)((longlong)*pIVar36 + 0xa0))(pIVar36,FCheckBoxStyle::TypeName);
      if (pFVar37 == (FCheckBoxStyle *)0x0) {
        pFVar37 = FCheckBoxStyle::GetDefault();
      }
      uVar12 = local_10d0;
      pFVar35->_Style = pFVar37;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar35->_OnCheckStateChanged,(FWriteAccessScope *)&local_ec8);
      local_eb0 = &(pFVar35->_OnCheckStateChanged).field_0x8;
      puVar32 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_eb0);
      if (puVar32 != (undefined8 *)0x0) {
        local_ff0 = OnSectionSelected;
        uStack_fe4 = local_107c;
        uStack_fe8 = 0;
        pTVar38 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&local_1160->_padding_,&local_e50);
        local_11a0 = (FName)pTVar38->Object;
        pTVar6 = (pTVar38->SharedReferenceCount).ReferenceController;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar18 = true;
        bVar17 = true;
        bVar16 = true;
        *puVar32 = &
                   ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__VFName____6B_
        ;
        puVar32[1] = uVar12;
        local_10d8 = pTVar6;
        local_fc0 = pTVar6;
        uVar34 = FDelegateHandle::GenerateNewID();
        puVar32[2] = uVar34;
        *puVar32 = &
                   ___7__TBaseSPMethodDelegateInstance__0A_VSSidebarDrawerContent___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__VFName____6B_
        ;
        *(FName *)(puVar32 + 3) = local_11a0;
        puVar32[4] = pTVar6;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
          UNLOCK();
        }
        puVar32[5] = local_ff0;
        puVar32[6] = CONCAT44(uStack_fe4,uStack_fe8);
        pFVar35 = local_1178;
      }
      if (bVar16) {
        bVar16 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_10d8);
      }
      if (bVar17) {
        bVar17 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_fc0);
      }
      if (bVar18) {
        bVar18 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e50.SharedReferenceCount.ReferenceController);
      }
      if (local_ec8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_ec8.Accessor,&local_ec8);
      }
      uVar12 = local_10d0;
      (pFVar35->_IsChecked).bIsSet = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(pFVar35->_IsChecked).Getter,(FWriteAccessScope *)&local_ea8);
      local_e90 = &(pFVar35->_IsChecked).Getter.field_0x8;
      puVar32 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_e90);
      if (puVar32 != (undefined8 *)0x0) {
        local_fe0 = GetSectionCheckBoxState;
        uStack_fd4 = local_107c;
        uStack_fd8 = 0;
        pTVar33 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&local_1160->_padding_,&local_e28);
        local_11a0 = (FName)pTVar33->Object;
        pTVar6 = (pTVar33->SharedReferenceCount).ReferenceController;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar19 = true;
        bVar27 = true;
        *puVar32 = &
                   ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__VFName____6B_
        ;
        puVar32[1] = uVar12;
        local_10f0 = pTVar6;
        local_fb8 = pTVar6;
        uVar34 = FDelegateHandle::GenerateNewID();
        puVar32[2] = uVar34;
        *puVar32 = &
                   ___7__TBaseSPMethodDelegateInstance__00__CBVSSidebarDrawerContent___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__VFName____6B_
        ;
        *(FName *)(puVar32 + 3) = local_11a0;
        puVar32[4] = pTVar6;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
          UNLOCK();
        }
        puVar32[5] = local_fe0;
        puVar32[6] = CONCAT44(uStack_fd4,uStack_fd8);
      }
      if (bVar27) {
        bVar27 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_10f0);
      }
      if (bVar19) {
        bVar19 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e28.SharedReferenceCount.ReferenceController);
      }
      if (local_ea8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_ea8.Accessor,&local_ea8);
      }
      pFVar39 = STextBlock::FArguments::FArguments(&local_690);
      ::FName::FName(&local_fb0,L"SmallText");
      pIVar36 = FAppStyle::Get();
      pFVar40 = ISlateStyle::GetWidgetStyle<FTextBlockStyle>
                          (pIVar36,local_fb0,(char *)0x0,(FTextBlockStyle *)0x0);
      pFVar39->_TextStyle = pFVar40;
      pFVar41 = (FText *)(**(code **)(*(longlong *)local_1150->Object + 0x18))
                                   (local_1150->Object,&local_1088);
      FText::FText(&local_f18.Value,pFVar41);
      local_f18.bIsSet = true;
      local_f18.Getter._16_8_ = 0;
      local_f18.Getter._0_8_ = 0;
      local_f18.Getter._8_8_ = 0;
      FText::operator=(&(pFVar39->_Text).Value,&local_f18.Value);
      (pFVar39->_Text).bIsSet = local_f18.bIsSet;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar39->_Text).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_f18.Getter);
      TAttribute<FText>::~TAttribute<FText>(&local_f18);
      local_10a8 = (Type)local_1180;
      local_10a4 = 1;
      local_1090 = 0;
      local_10a0 = (undefined1  [8])0x0;
      pvStack_1098 = (void *)0x0;
      (pFVar39->_Justification).Value = local_10a8;
      (pFVar39->_Justification).bIsSet = true;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar39->_Justification).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_10a0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_10a0);
      if (pvStack_1098 != (void *)0x0) {
        FMemory::Free(pvStack_1098);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_10a0);
      FLLMScope::FLLMScope
                (&local_1170,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_11a0 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_1058,&local_11a0,true);
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                (&local_1108,"STextBlock",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarDrawerContent.cpp"
                 ,0x79,&local_11a4);
      FMemScope::~FMemScope(&local_1058);
      FLLMScope::~FLLMScope(&local_1170);
      pSVar42 = TSharedPtr<STextBlock,1>::operator->(&local_1108._Widget);
      SWidget::SWidgetConstruct((SWidget *)pSVar42,(FSlateBaseNamedArgs *)pFVar39);
      pSVar42 = local_1108._Widget.Object;
      STextBlock::Construct(local_1108._Widget.Object,pFVar39);
      pSVar43 = TSharedPtr<STextBlock,1>::operator->(&local_1108._Widget);
      if ((pSVar43->_padding_ & 0x10) == 0) {
        cVar25 = (**(code **)(pSVar43->_padding_ + 0x228))(pSVar43);
        bVar26 = 0;
        if (cVar25 != '\0') goto LAB_142d72f9d;
      }
      else {
LAB_142d72f9d:
        bVar26 = 0x20;
      }
      *(byte *)&pSVar43->_padding_ = (byte)pSVar43->_padding_ & 0xdf;
      *(byte *)&pSVar43->_padding_ = (byte)pSVar43->_padding_ | bVar26;
      pSVar43 = TSharedPtr<STextBlock,1>::operator->(&local_1108._Widget);
      pbVar1 = (byte *)((longlong)&pSVar43->_padding_ + 1);
      *pbVar1 = *pbVar1 | 4;
      if ((pSVar42 == (STextBlock *)0x0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar24)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FVar21.ReferenceController = local_1108._Widget.SharedReferenceCount.ReferenceController;
      local_1108._Widget.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_1108._Widget.Object = (STextBlock *)0x0;
      if ((pSVar42 == (STextBlock *)0x0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar24)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar35 = local_1178;
      if (FVar21.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar21.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar21.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        (FVar21.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar21.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e18 = (local_1178->_Content).Widget.Object;
      pTStack_e10 = (local_1178->_Content).Widget.SharedReferenceCount.ReferenceController;
      (local_1178->_Content).Widget.Object = (SWidget *)pSVar42;
      (local_1178->_Content).Widget.SharedReferenceCount.ReferenceController =
           FVar21.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_e10);
      FLLMScope::FLLMScope
                (&local_116c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_1050 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_1048,&local_1050,true);
      TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                (&local_e40,"SCheckBox",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarDrawerContent.cpp"
                 ,0x74,&local_11a3);
      FMemScope::~FMemScope(&local_1048);
      FLLMScope::~FLLMScope(&local_116c);
      pTVar44 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_e40,&local_e78,pFVar35);
      pFVar30 = local_10e8;
      pTVar6 = (pTVar44->SharedReferenceCount).ReferenceController;
      pSVar7 = pTVar44->Object;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_10c8 = (local_10e8->_Content).Widget.Object;
      pTStack_10c0 = (local_10e8->_Content).Widget.SharedReferenceCount.ReferenceController;
      (local_10e8->_Content).Widget.Object = (SWidget *)pSVar7;
      (local_10e8->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_10c0);
      FLLMScope::FLLMScope(local_1168,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
      ;
      local_1040 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_1038,&local_1040,true);
      TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
                (&local_e08,"SBox",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarDrawerContent.cpp"
                 ,0x6e,local_11a2);
      FMemScope::~FMemScope(&local_1038);
      FLLMScope::~FLLMScope(local_1168);
      pTVar45 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_e08,&local_e88,pFVar30);
      pTVar48 = (pTVar45->SharedReferenceCount).ReferenceController;
      local_1148 = pTVar45->Object;
      if (pTVar48 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar48->SharedReferenceCount = (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1140.ReferenceController = pTVar48;
      if ((SBox **)&local_1030->_padding_ != &local_1148) {
        local_1030->_padding_ = (longlong)local_1148;
        local_1148 = (SBox *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&local_1030->_padding_,&local_1140);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1140.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e88.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e08._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e78.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e40._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar21.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar21.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1108._Widget.SharedReferenceCount.ReferenceController);
      if (local_1088 != (longlong *)0x0) {
        (**(code **)(*local_1088 + 0x10))();
      }
      STextBlock::FArguments::~FArguments(&local_690);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_aa8);
      if ((void *)local_aa8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_aa8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_aa8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ac8);
      if ((void *)local_ac8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_ac8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_ac8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_af8);
      if ((void *)local_af8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_af8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_af8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b38);
      if ((void *)local_b38._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b38._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_b38);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b78);
      if ((void *)local_b78._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b78._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_b78);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b98);
      if ((void *)local_b98._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b98._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_b98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_db0._512_8_);
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_db0);
      SBox::FArguments::~FArguments(&local_9d0);
      TPanelChildren<SWrapBox::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
                (&local_e8);
      FVar57.Data = (FScriptContainerElement *)(local_1150 + 1);
      uVar29 = (ulonglong)local_1188;
      this_03 = local_1028;
    }
    local_1078.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
    iVar51 = 0;
    local_1078._padding_._0_4_ = 0;
    local_1078._padding_._4_4_ = (undefined4)local_1180;
    local_1078.UnvisitedBitMask = 0xffffffff;
    local_1078.CurrentBitIndex = 0;
    local_1078.BaseBitIndex = 0;
    if (local_110 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1078);
    }
    lStack_1130 = CONCAT44(local_1078._padding_._4_4_,(undefined4)local_1078._padding_);
    local_1138 = (TMap<FName,TSharedRef<ISidebarDrawerContent,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>_>
                  *)local_138;
    iStack_111c = local_1078.CurrentBitIndex;
    uStack_1120 = local_1078.UnvisitedBitMask;
    uStack_1114 = local_1078._28_4_;
    iStack_1118 = local_1078.BaseBitIndex;
    local_1110 = local_138._8_4_ - local_104;
    pTStack_1128 = local_1078.Array;
    uStack_f50 = CONCAT44(uStack_110c,local_1110);
    TStack_f70.Array = local_1078.Array;
    local_f78 = local_1138;
    TStack_f70._padding_ = lStack_1130;
    TStack_f70._16_8_ = _uStack_1120;
    TStack_f70._24_8_ = _iStack_1118;
    pTVar46 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_df0,(TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),
                         local_110);
    this_00 = local_1160;
    lStack_1130 = pTVar46->_padding_;
    pTVar11 = pTVar46->Array;
    uVar12._0_4_ = pTVar46->UnvisitedBitMask;
    uVar12._4_4_ = pTVar46->CurrentBitIndex;
    iStack_1118 = pTVar46->BaseBitIndex;
    uStack_1114 = *(undefined4 *)&pTVar46->field_0x1c;
    pTStack_1128 = pTVar11;
    _uStack_1120 = uVar12;
    while( true ) {
      pTVar2 = local_f78;
      if (*(int *)&local_f78->field_0x8 - *(int *)&local_f78->field_0x34 != (int)uStack_f50) {
        local_11a7 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_11a7);
      }
      pFVar20 = local_1198;
      if (((TStack_f70.CurrentBitIndex == uVar12._4_4_) && (TStack_f70.Array == pTVar11)) &&
         (pTVar2 == (TMap<FName,TSharedRef<ISidebarDrawerContent,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>_>
                     *)local_138)) break;
      AddContentSlot(this_00,(TSharedRef<ISidebarDrawerContent,1> *)
                             (*(longlong *)pTVar2 + 8 + (longlong)TStack_f70.CurrentBitIndex * 0x20)
                    );
      TStack_f70.UnvisitedBitMask = TStack_f70.UnvisitedBitMask & ~TStack_f70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f70);
    }
    if ((local_1198 == (FSidebarDrawer *)0x0) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar27)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (*(int *)&(pFVar20->State).SelectedSections.Elements.field_0x8 ==
        *(int *)&(pFVar20->State).SelectedSections.Elements.field_0x34) {
      local_1158 = 0;
      if ((pFVar20 == (FSidebarDrawer *)0x0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar27)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar2 = &pFVar20->ContentSections;
      iVar4 = *(int *)&(pFVar20->ContentSections).field_0x28;
      pTStack_1128 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar20->ContentSections).field_0x10;
      iStack_1118 = 0;
      iStack_111c = iStack_1118;
      if (iVar4 != 0) {
        puVar54 = *(uint **)&(pFVar20->ContentSections).field_0x20;
        if (puVar54 == (uint *)0x0) {
          puVar54 = (uint *)pTStack_1128;
        }
        uVar50 = *puVar54;
        iStack_1118 = 0;
        iVar51 = 0;
        while (uVar50 == 0) {
          lVar49 = (longlong)iVar51;
          iStack_1118 = iStack_1118 + 0x20;
          iVar51 = iVar51 + 1;
          iStack_111c = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar51) goto LAB_142d73625;
          uVar50 = puVar54[lVar49 + 1];
        }
        local_1180 = (ulonglong)(-uVar50 & uVar50);
        uVar29 = local_1180 * 2 + 1;
        lVar49 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar49 == 0; lVar49 = lVar49 + -1) {
          }
        }
        local_1018 = (int)lVar49;
        iStack_111c = local_1018 + -1 + iStack_1118;
        if (iVar4 < iStack_111c) {
          iStack_111c = iVar4;
        }
      }
LAB_142d73625:
      puVar55 = &(pFVar20->ContentSections).field_0x10;
      local_1110 = *(int *)&(pFVar20->ContentSections).field_0x8 -
                   *(int *)&(pFVar20->ContentSections).field_0x34;
      uVar50 = *(uint *)&(pFVar20->ContentSections).field_0x28;
      uStack_1120 = 0xffffffff;
      lStack_1130 = CONCAT44((int)local_1180,iVar51);
      uVar56 = uVar50 & 0xffffffe0;
      uStack_1114 = local_db4;
      iVar51 = (int)uVar50 >> 5;
      uStack_f20 = CONCAT44(uStack_110c,local_1110);
      TStack_f40.UnvisitedBitMask = 0xffffffff;
      TStack_f40.CurrentBitIndex = iStack_111c;
      TStack_f40.BaseBitIndex = iStack_1118;
      TStack_f40._28_4_ = local_db4;
      local_1138 = pTVar2;
      local_f48 = pTVar2;
      TStack_f40._padding_ = lStack_1130;
      TStack_f40.Array = pTStack_1128;
      if (((int)uVar50 < 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar27)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar5 = *(uint *)&(pFVar20->ContentSections).field_0x28;
      if (uVar50 != uVar5) {
        puVar8 = *(undefined1 **)&(pFVar20->ContentSections).field_0x20;
        puVar53 = puVar55;
        if (puVar8 != (undefined1 *)0x0) {
          puVar53 = puVar8;
        }
        uVar50 = -1 << ((byte)uVar50 & 0x1f) & *(uint *)(puVar53 + (longlong)iVar51 * 4);
        while (uVar50 == 0) {
          lVar49 = (longlong)iVar51;
          uVar56 = uVar56 + 0x20;
          iVar51 = iVar51 + 1;
          uVar50 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar51)
          goto LAB_142d73742;
          uVar50 = *(uint *)(puVar53 + lVar49 * 4 + 4);
        }
        uVar29 = (ulonglong)(-uVar50 & uVar50) * 2 + 1;
        lVar49 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar49 == 0; lVar49 = lVar49 + -1) {
          }
        }
        local_1014 = (int)lVar49;
        uVar50 = local_1014 + -1 + uVar56;
        if ((int)uVar5 < (int)uVar50) {
          uVar50 = uVar5;
        }
      }
LAB_142d73742:
      do {
        pTVar23 = local_f48;
        if (*(int *)&local_f48->field_0x8 - *(int *)&local_f48->field_0x34 != (int)uStack_f20) {
          local_11a6 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_11a6);
        }
        lVar49 = (longlong)TStack_f40.CurrentBitIndex;
        if (((TStack_f40.CurrentBitIndex == uVar50) &&
            (TStack_f40.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar55)) &&
           (pTVar23 == pTVar2)) goto LAB_142d737d4;
        lVar9 = *(longlong *)pTVar23;
        cVar25 = (**(code **)(**(longlong **)(lVar49 * 0x20 + 8 + lVar9) + 0x20))();
        if (cVar25 != '\0') goto LAB_142d737bb;
        TStack_f40.UnvisitedBitMask = TStack_f40.UnvisitedBitMask & ~TStack_f40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f40);
      } while( true );
    }
    goto LAB_142d73823;
  }
  goto LAB_142d73857;
LAB_142d737bb:
  plVar47 = *(longlong **)(lVar49 * 0x20 + 8 + lVar9);
  plVar47 = (longlong *)(**(code **)(*plVar47 + 0x10))(plVar47,local_e68);
  local_1158 = *plVar47;
LAB_142d737d4:
  if (local_1158 != 0) {
    if ((pFVar20 == (FSidebarDrawer *)0x0) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar27)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&(pFVar20->State).SelectedSections,&local_1010,(bool *)&local_1158);
  }
LAB_142d73823:
  DestructItems<TSharedRef<ISidebarDrawerContent,1>,int>
            ((TSharedRef<ISidebarDrawerContent,1> *)local_10b8.AllocatorInstance.Data,
             local_10b8.ArrayNum);
  if ((TSharedRef<ISidebarDrawerContent,1> *)local_10b8.AllocatorInstance.Data !=
      (TSharedRef<ISidebarDrawerContent,1> *)0x0) {
    FMemory::Free(local_10b8.AllocatorInstance.Data);
  }
LAB_142d73857:
  local_f0[0] = 0;
  if (local_100.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_100.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
LAB_142d7387c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1190.ReferenceController);
  return;
}

// Construct @ 142d8b590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SSidebarDrawerContent::Construct
          (SSidebarDrawerContent *this,FArguments *param_1,TWeakPtr<FSidebarDrawer,1> *param_2)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  longlong *this_00;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSidebarDrawer *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  FWeakReferencer<1> *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  SWrapBox *pSVar14;
  FSharedReferencer<1> FVar15;
  undefined8 uVar16;
  bool bVar17;
  char cVar18;
  byte bVar19;
  FSlot *pFVar20;
  FSizeParam *pFVar21;
  FArguments *pFVar22;
  undefined8 *puVar23;
  ulong64 uVar24;
  FArguments *pFVar25;
  FArguments *pFVar26;
  TSharedRef<SBox,1> *pTVar27;
  FArguments *pFVar28;
  FSlotArguments *pFVar29;
  FArguments *pFVar30;
  TSharedRef<SVerticalBox,1> *pTVar31;
  undefined ***pppuVar32;
  FSlotArguments *pFVar33;
  undefined1 auStackY_1228 [32];
  T0RequiredArgs local_11f8;
  T0RequiredArgs local_11f7;
  T0RequiredArgs local_11f6;
  T0RequiredArgs local_11f5;
  T0RequiredArgs local_11f4 [4];
  FLLMScope local_11f0;
  FLLMScope local_11ec;
  FLLMScope local_11e8;
  FLLMScope local_11e4;
  FLLMScope local_11e0 [2];
  SVerticalBox *local_11d8;
  undefined4 local_11d0;
  undefined1 local_11cc;
  undefined1 local_11c8 [8];
  ForAnyElementType FStack_11c0;
  ulonglong local_11b8;
  SVerticalBox *local_11b0;
  FSharedReferencer<1> local_11a8;
  TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs> local_11a0;
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined1 local_1178;
  undefined1 local_1170 [8];
  ForAnyElementType FStack_1168;
  ulonglong local_1160;
  SBox *local_1158;
  TReferenceControllerBase<1> *pTStack_1150;
  undefined8 local_1148;
  FSharedReferencer<1> local_1140;
  SVerticalBox *local_1138;
  TReferenceControllerBase<1> *pTStack_1130;
  undefined4 local_1128 [2];
  FName local_1120;
  FMemScope local_1118;
  FName local_1110;
  FSlotArguments *local_1108;
  FName local_1100;
  FMemScope local_10f8;
  FName local_10f0;
  FMemScope local_10e8;
  FMemScope local_10e0;
  FName local_10d8;
  FMemScope local_10d0;
  FArguments *local_10c8;
  TAttribute<float> local_10c0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_10a0;
  FDestructionSentinel local_1088;
  FDestructionSentinel local_1070;
  FDestructionSentinel local_1058;
  longlong *local_1040;
  undefined4 local_1038;
  undefined4 uStack_1034;
  undefined4 uStack_1030;
  undefined4 uStack_102c;
  SWrapBox *local_1028;
  TReferenceControllerBase<1> *pTStack_1020;
  SWidget *local_1018;
  TReferenceControllerBase<1> *pTStack_1010;
  SVerticalBox *local_1008;
  TReferenceControllerBase<1> *pTStack_1000;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_ff8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_fe0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_fc8;
  TSharedRef<SVerticalBox,1> local_fb0;
  TSharedRef<SVerticalBox,1> local_fa0;
  TSharedRef<SBox,1> local_f90;
  TSharedRef<SBox,1> local_f80;
  undefined1 local_f70 [16];
  undefined1 local_f60 [32];
  undefined1 local_f40 [24];
  undefined8 *local_f28;
  SBox *local_f20;
  FSharedReferencer<1> local_f18 [4];
  undefined1 local_ef8 [24];
  undefined4 local_ee0;
  undefined1 local_edc;
  FSlotArgumentsMixin local_ed0;
  undefined8 *local_e40 [2];
  TReferenceControllerBase<1> *local_e30;
  undefined1 local_e10 [40];
  FSlotArgumentsMixin local_de8;
  undefined1 local_d58 [528];
  undefined1 local_b48 [32];
  undefined1 local_b28 [48];
  FArguments local_af8;
  FArguments local_8f0;
  FArguments local_6e8;
  FArguments local_3a8;
  code *local_68;
  undefined **local_58;
  SSidebarDrawerContent *local_50;
  undefined ***local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142d8b5ba;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1228;
  pTVar4 = (param_2->WeakReferenceCount).ReferenceController;
  pFVar5 = param_2->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_1038 = *(undefined4 *)&(this->OwnerDrawerWeak).Object;
  uStack_1034 = *(undefined4 *)((longlong)&(this->OwnerDrawerWeak).Object + 4);
  pFVar10 = &(this->OwnerDrawerWeak).WeakReferenceCount;
  uStack_1030 = *(undefined4 *)&pFVar10->ReferenceController;
  uStack_102c = *(undefined4 *)
                 ((longlong)&(this->OwnerDrawerWeak).WeakReferenceCount.ReferenceController + 4);
  pTVar6 = pFVar10->ReferenceController;
  (this->OwnerDrawerWeak).Object = pFVar5;
  (this->OwnerDrawerWeak).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  local_10c8 = SVerticalBox::FArguments::FArguments(&local_8f0);
  pFVar20 = ::operator_new(0x58);
  local_11d8 = (SVerticalBox *)0x0;
  if (pFVar20 != (FSlot *)0x0) {
    *(undefined8 *)pFVar20 = 0;
    *(undefined8 *)&pFVar20->field_0x8 = 0;
    *(undefined8 *)&pFVar20->field_0x10 = 0;
    *(undefined8 *)&pFVar20->field_0x18 = 0;
    *(undefined8 *)&pFVar20->field_0x20 = 0;
    *(undefined8 *)&pFVar20->field_0x28 = 0;
    *(undefined8 *)&pFVar20->field_0x30 = 0;
    *(undefined8 *)&pFVar20->field_0x38 = 0;
    *(undefined8 *)&pFVar20->field_0x40 = 0;
    *(undefined8 *)&pFVar20->field_0x48 = 0;
    *(undefined8 *)&pFVar20->field_0x50 = 0;
    local_11d8 = (SVerticalBox *)SVerticalBox::FSlot::FSlot(pFVar20);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_f28,(FSlot *)&local_11d8);
  pFVar21 = (FSizeParam *)FAuto::FAuto((FAuto *)local_f70);
  TOptional<FSizeParam>::operator=(&local_ed0._SizeParam,pFVar21);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f40);
  if ((void *)local_f40._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f40._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f60);
  if ((void *)local_f60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f60);
  local_ee0 = 0;
  local_edc = 1;
  pFVar22 = SBox::FArguments::FArguments(&local_3a8);
  local_40 = (undefined ***)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SSidebarDrawerContent::Construct'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`SSidebarDrawerContent::Construct'::__l2::<lambda_1>,EVisibility>::
             Call;
  *(undefined1 *)((longlong)&pFVar22->_padding_ + 1) = 1;
  local_50 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar22->_padding_,
             (FWriteAccessScope *)&local_1058);
  local_1040 = &pFVar22->_padding_;
  puVar23 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_1040);
  if (puVar23 != (undefined8 *)0x0) {
    *puVar23 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar24;
    *puVar23 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUEVisibility__XZ____V__6B_
    ;
    puVar23[4] = local_68;
    puVar23[9] = 0;
    if (local_68 != (code *)0x0) {
      pppuVar32 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar32 = local_40;
      }
      (*(code *)**pppuVar32)();
    }
  }
  if (local_1058.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1058.Accessor,&local_1058);
  }
  pFVar25 = SBox::FArguments::FArguments(&local_6e8);
  uVar13 = _UNK_1509ecef8;
  local_1178 = 1;
  local_1160 = 0;
  local_1188 = ___xmm_40800000000000004080000000000000;
  uStack_1180 = _UNK_1509ecef8;
  local_1170 = (undefined1  [8])0x0;
  FStack_1168.Data = (FScriptContainerElement *)0x0;
  uVar12 = _UNK_1509ecef4;
  (pFVar25->_Padding).Value.Left = (float)___xmm_40800000000000004080000000000000;
  uVar16 = _UNK_1509ecef8;
  (pFVar25->_Padding).Value.Top = (float)uVar12;
  _UNK_1509ecef8 = (undefined4)uVar13;
  _UNK_1509ecefc = SUB84(uVar13,4);
  uVar12 = _UNK_1509ecefc;
  (pFVar25->_Padding).Value.Right = (float)_UNK_1509ecef8;
  _UNK_1509ecef8 = uVar16;
  (pFVar25->_Padding).Value.Bottom = (float)uVar12;
  (pFVar25->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1170);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1170,
             (FWriteAccessScope *)&local_1088);
  if (((int)local_1160 != 0) && (FStack_1168.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1168.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1168,0,0,0x10);
    local_1160 = local_1160 & 0xffffffff00000000;
  }
  if (local_1088.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1088.Accessor,&local_1088);
  }
  if (FStack_1168.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1168.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1170);
  pFVar26 = SWrapBox::FArguments::FArguments((FArguments *)local_d58);
  local_11cc = 1;
  local_11d0 = 2;
  local_11b8 = 0;
  local_11c8 = (undefined1  [8])0x0;
  FStack_11c0.Data = (FScriptContainerElement *)0x0;
  (pFVar26->_HAlign).Value = HAlign_Center;
  (pFVar26->_HAlign).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_HAlign).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_11c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_11c8,
             (FWriteAccessScope *)&local_1070);
  if (((int)local_11b8 != 0) && (FStack_11c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_11c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_11c0,0,0,0x10);
    local_11b8 = local_11b8 & 0xffffffff00000000;
  }
  if (local_1070.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1070.Accessor,&local_1070);
  }
  if (FStack_11c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_11c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11c8);
  pFVar26->_UseAllottedSize = true;
  (pFVar26->_InnerSlotPadding).field0_0x0._s_0.X = 4.0;
  (pFVar26->_InnerSlotPadding).field0_0x0._s_0.Y = 4.0;
  FLLMScope::FLLMScope(&local_11f0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1120 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1118,&local_1120,true);
  TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs>
            (&local_11a0,"SWrapBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarDrawerContent.cpp"
             ,0x23,&local_11f8);
  FMemScope::~FMemScope(&local_1118);
  FLLMScope::~FLLMScope(&local_11f0);
  if (local_11a0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_11a0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_11a0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1028 = (this->ButtonBox).Object;
  pTStack_1020 = (this->ButtonBox).SharedReferenceCount.ReferenceController;
  (this->ButtonBox).Object = local_11a0._Widget.Object;
  (this->ButtonBox).SharedReferenceCount.ReferenceController =
       local_11a0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1020);
  pSVar14 = local_11a0._Widget.Object;
  if ((local_11a0._Widget.Object == (SWrapBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_11a0._Widget.Object,(FSlateBaseNamedArgs *)pFVar26);
  SWrapBox::Construct(local_11a0._Widget.Object,pFVar26);
  if ((local_11a0._Widget.Object == (SWrapBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((local_11a0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar18 = (**(code **)((local_11a0._Widget.Object)->_padding_ + 0x228))
                       (local_11a0._Widget.Object);
    bVar19 = 0;
    if (cVar18 == '\0') goto LAB_142d8bad9;
  }
  bVar19 = 0x20;
LAB_142d8bad9:
  *(byte *)&(local_11a0._Widget.Object)->_padding_ =
       (byte)(local_11a0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_11a0._Widget.Object)->_padding_ =
       (byte)(local_11a0._Widget.Object)->_padding_ | bVar19;
  if ((local_11a0._Widget.Object == (SWrapBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pbVar2 = (byte *)((longlong)&(local_11a0._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_11a0._Widget.Object == (SWrapBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar15.ReferenceController = local_11a0._Widget.SharedReferenceCount.ReferenceController;
  local_11a0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_11a0._Widget.Object = (SWrapBox *)0x0;
  if ((pSVar14 == (SWrapBox *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar15.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar15.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1018 = (pFVar25->_Content).Widget.Object;
  pTStack_1010 = (pFVar25->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar25->_Content).Widget.Object = (SWidget *)pSVar14;
  (pFVar25->_Content).Widget.SharedReferenceCount.ReferenceController = FVar15.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1010);
  FLLMScope::FLLMScope(&local_11ec,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1110 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10d0,&local_1110,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_fc8,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarDrawerContent.cpp"
             ,0x20,&local_11f7);
  FMemScope::~FMemScope(&local_10d0);
  FLLMScope::~FLLMScope(&local_11ec);
  pTVar27 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_fc8,&local_f80,pFVar25);
  pTVar4 = (pTVar27->SharedReferenceCount).ReferenceController;
  local_1158 = pTVar27->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar22->_Content).Widget.Object = (SWidget *)local_1158;
  (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  pTStack_1150 = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FLLMScope::FLLMScope(&local_11e8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_10d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10e0,&local_10d8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_fe0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarDrawerContent.cpp"
             ,0x1a,&local_11f6);
  FMemScope::~FMemScope(&local_10e0);
  FLLMScope::~FLLMScope(&local_11e8);
  pTVar27 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_fe0,&local_f90,pFVar22);
  pTVar6 = (pTVar27->SharedReferenceCount).ReferenceController;
  local_f20 = pTVar27->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1148 = 0;
  local_1140.ReferenceController = pTVar6;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_f18,&local_1140);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1140.ReferenceController);
  pFVar28 = SVerticalBox::FArguments::operator+(local_10c8,(FSlotArguments *)&local_f28);
  pFVar20 = ::operator_new(0x58);
  local_1108 = (FSlotArguments *)0x0;
  if (pFVar20 != (FSlot *)0x0) {
    *(undefined8 *)pFVar20 = 0;
    *(undefined8 *)&pFVar20->field_0x8 = 0;
    *(undefined8 *)&pFVar20->field_0x10 = 0;
    *(undefined8 *)&pFVar20->field_0x18 = 0;
    *(undefined8 *)&pFVar20->field_0x20 = 0;
    *(undefined8 *)&pFVar20->field_0x28 = 0;
    *(undefined8 *)&pFVar20->field_0x30 = 0;
    *(undefined8 *)&pFVar20->field_0x38 = 0;
    *(undefined8 *)&pFVar20->field_0x40 = 0;
    *(undefined8 *)&pFVar20->field_0x48 = 0;
    *(undefined8 *)&pFVar20->field_0x50 = 0;
    local_1108 = (FSlotArguments *)SVerticalBox::FSlot::FSlot(pFVar20);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_e40,(FSlot *)&local_1108);
  local_10c0.Value = 1.0;
  local_10c0.Getter._16_8_ = 0;
  local_10c0.bIsSet = true;
  local_10c0.Getter._0_8_ = 0;
  local_10c0.Getter._8_8_ = 0;
  pFVar29 = SVerticalBox::FSlot::FSlotArguments::FillHeight((FSlotArguments *)local_e40,&local_10c0)
  ;
  if (local_1128 != (undefined4 *)&pFVar29->field_0x50) {
    *(undefined4 *)&pFVar29->field_0x50 = 0;
    pFVar29->field_0x54 = 1;
  }
  pFVar33 = (FSlotArguments *)0x0;
  if (pFVar29 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar33 = pFVar29;
  }
  pFVar30 = SVerticalBox::FArguments::FArguments(&local_af8);
  FLLMScope::FLLMScope(&local_11e4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1100 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10f8,&local_1100,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_10a0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarDrawerContent.cpp"
             ,0x2e,&local_11f5);
  FMemScope::~FMemScope(&local_10f8);
  FLLMScope::~FLLMScope(&local_11e4);
  if (local_10a0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10a0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_10a0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1008 = (this->ContentBox).Object;
  pTStack_1000 = (this->ContentBox).SharedReferenceCount.ReferenceController;
  (this->ContentBox).Object = local_10a0._Widget.Object;
  (this->ContentBox).SharedReferenceCount.ReferenceController =
       local_10a0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1000);
  pTVar31 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_10a0,&local_fa0,pFVar30);
  pTVar7 = (pTVar31->SharedReferenceCount).ReferenceController;
  local_11b0 = pTVar31->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_11a8.ReferenceController = pTVar7;
  if ((SVerticalBox **)&pFVar33->field_0x8 != &local_11b0) {
    *(SVerticalBox **)&pFVar33->field_0x8 = local_11b0;
    local_11b0 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar33->field_0x10,&local_11a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11a8.ReferenceController);
  pFVar28 = SVerticalBox::FArguments::operator+(pFVar28,pFVar33);
  FLLMScope::FLLMScope(local_11e0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_10f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10e8,&local_10f0,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_ff8,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Sidebar\\SSidebarDrawerContent.cpp"
             ,0x15,local_11f4);
  FMemScope::~FMemScope(&local_10e8);
  FLLMScope::~FLLMScope(local_11e0);
  pTVar31 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_ff8,&local_fb0,pFVar28);
  this_00 = &this->_padding_;
  local_11d8 = pTVar31->Object;
  pTVar8 = (pTVar31->SharedReferenceCount).ReferenceController;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = (TReferenceControllerBase<1> *)this->_padding_;
  local_1138 = local_11d8;
  this->_padding_ = (longlong)local_11d8;
  this->_padding_ = (longlong)pTVar8;
  pTStack_1130 = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fb0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ff8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fa0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10a0._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_af8._Slots.AllocatorInstance.Data,local_af8._Slots.ArrayNum);
  if ((FSlotArguments *)local_af8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_af8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_af8);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_de8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e10);
  if ((void *)local_e10._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e10._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e30);
  if (local_e40[0] != (undefined8 *)0x0) {
    (**(code **)*local_e40[0])(local_e40[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f90.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fe0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f80.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fc8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11a0._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b28);
  if ((void *)local_b28._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b28._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b48);
  if ((void *)local_b48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b48);
  DestructItems<SWrapBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_d58._504_8_,local_d58._512_4_);
  if ((FSlotArguments *)local_d58._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_d58._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_d58);
  SBox::FArguments::~FArguments(&local_6e8);
  if (local_68 != (code *)0x0) {
    pppuVar32 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar32 = local_40;
    }
    (*(code *)(*pppuVar32)[2])();
  }
  SBox::FArguments::~FArguments(&local_3a8);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_ed0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ef8);
  if ((void *)local_ef8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_ef8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ef8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f18[0].ReferenceController);
  if (local_f28 != (undefined8 *)0x0) {
    (**(code **)*local_f28)(local_f28,1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_8f0._Slots.AllocatorInstance.Data,local_8f0._Slots.ArrayNum);
  if ((FSlotArguments *)local_8f0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_8f0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_8f0);
  BuildContent(this);
  return;
}

// GetOrderedSections @ 142daee20

TArray<TSharedRef<ISidebarDrawerContent,1>,TSizedDefaultAllocator<32>_> * __thiscall
SSidebarDrawerContent::GetOrderedSections
          (SSidebarDrawerContent *this,
          TArray<TSharedRef<ISidebarDrawerContent,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  ulonglong uVar1;
  uint uVar2;
  FSidebarDrawer *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  ForElementType<unsigned_int> FVar6;
  TMap<FName,TSharedRef<ISidebarDrawerContent,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>_>
  *pTVar7;
  TMap<FName,TSharedRef<ISidebarDrawerContent,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>_>
  *pTVar8;
  atomic<int> aVar9;
  TArray<TSharedRef<ISidebarDrawerContent,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  TReferenceControllerBase<1> *pTVar15;
  int iVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  ForElementType<unsigned_int> FVar21;
  TReferenceControllerBase<1> *pTVar22;
  uint *puVar23;
  FScriptContainerElement *pFVar24;
  bool bVar25;
  undefined1 local_res8 [8];
  TArray<TSharedRef<ISidebarDrawerContent,1>,TSizedDefaultAllocator<32>_> *local_res10;
  int local_res18;
  int local_res20;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  ForElementType<unsigned_int> local_d8;
  TMap<FName,TSharedRef<ISidebarDrawerContent,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>_>
  *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<FName,TSharedRef<ISidebarDrawerContent,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>_>
  *local_a0;
  TReferenceControllerBase<1> *local_98;
  TMap<FName,TSharedRef<ISidebarDrawerContent,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ISidebarDrawerContent,1>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined1 local_60 [32];
  
  local_98 = (this->OwnerDrawerWeak).WeakReferenceCount.ReferenceController;
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  pTVar22 = local_98;
  local_res10 = __return_storage_ptr__;
  if (local_98 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = local_98->SharedReferenceCount;
    do {
      pTVar22 = pTVar15;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142daee72;
      LOCK();
      aVar9 = local_98->SharedReferenceCount;
      bVar25 = aVar5 == aVar9;
      if (bVar25) {
        local_98->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar9 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar9;
    } while (!bVar25);
    pFVar3 = (this->OwnerDrawerWeak).Object;
    pTVar22 = local_98;
    if (pFVar3 != (FSidebarDrawer *)0x0) {
      local_a0 = &pFVar3->ContentSections;
      local_b0 = 0;
      uStack_c4 = 1;
      local_d8 = (ForElementType<unsigned_int>)&(pFVar3->ContentSections).field_0x10;
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0._0_4_ = 0;
      local_e0._4_4_ = 0;
      uVar2 = *(uint *)&(pFVar3->ContentSections).field_0x28;
      uStack_c8 = 0;
      uStack_b4 = local_b0;
      if (uVar2 != 0) {
        puVar23 = *(uint **)&(pFVar3->ContentSections).field_0x20;
        if (puVar23 == (uint *)0x0) {
          puVar23 = (uint *)local_d8;
        }
        uVar20 = *puVar23;
        pTVar22 = pTVar15;
        local_b0 = 0;
        uStack_c8 = 0;
        while (uVar20 == 0) {
          iVar16 = (int)pTVar15;
          local_b0 = (int)pTVar22 + 0x20;
          pTVar22 = (TReferenceControllerBase<1> *)(ulonglong)local_b0;
          uStack_c8 = iVar16 + 1;
          pTVar15 = (TReferenceControllerBase<1> *)(ulonglong)uStack_c8;
          uStack_b4 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_c8)
          goto LAB_142daef6e;
          uVar20 = (puVar23 + 1)[iVar16];
        }
        uStack_c4 = -uVar20 & uVar20;
        uVar1 = (ulonglong)uStack_c4 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_res18 = (int)lVar13;
        uStack_b4 = (local_b0 - 1) + local_res18;
        if ((int)uVar2 < (int)uStack_b4) {
          uStack_b4 = uVar2;
        }
      }
LAB_142daef6e:
      local_d0 = &pFVar3->ContentSections;
      iStack_a8 = *(int *)&(pFVar3->ContentSections).field_0x8 -
                  *(int *)&(pFVar3->ContentSections).field_0x34;
      uVar20 = *(uint *)&(pFVar3->ContentSections).field_0x28;
      uStack_b8 = 0xffffffff;
      TStack_88.CurrentBitIndex = uStack_b4;
      TStack_88.UnvisitedBitMask = 0xffffffff;
      TStack_88._padding_ = CONCAT44(uStack_c4,uStack_c8);
      uVar18 = uVar20 & 0xffffffe0;
      iVar16 = (int)uVar20 >> 5;
      TStack_88._28_4_ = uStack_b4;
      TStack_88.BaseBitIndex = local_b0;
      uStack_68 = CONCAT44(uStack_a4,iStack_a8);
      local_c0 = (undefined1 *)local_d8;
      uStack_ac = uStack_b4;
      local_90 = local_d0;
      TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d8;
      if ((((int)uVar20 < 0) || ((int)uVar2 < (int)uVar20)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar25)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<TSharedRef<ISidebarDrawerContent,1>,TSizedDefaultAllocator<32>_> *)
                  (*pcVar4)();
        return pTVar10;
      }
      pTVar7 = local_a0;
      FVar6 = local_d8;
      uVar2 = *(int *)((longlong)local_d8 + 0x18);
      if (uVar20 != uVar2) {
        FVar21 = *(ForElementType<unsigned_int> *)((longlong)local_d8 + 0x10);
        if (*(ForElementType<unsigned_int> *)((longlong)local_d8 + 0x10) ==
            (ForElementType<unsigned_int>)0x0) {
          FVar21 = local_d8;
        }
        uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)((longlong)FVar21 + (longlong)iVar16 * 4);
        while (uVar20 == 0) {
          lVar13 = (longlong)iVar16;
          uVar18 = uVar18 + 0x20;
          iVar16 = iVar16 + 1;
          uVar20 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_142daf090;
          uVar20 = *(uint *)((undefined1 *)((longlong)FVar21 + 4) + lVar13 * 4);
        }
        uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_res20 = (int)lVar13;
        uVar20 = local_res20 + -1 + uVar18;
        if ((int)uVar2 < (int)uVar20) {
          uVar20 = uVar2;
        }
      }
LAB_142daf090:
      while( true ) {
        pTVar8 = local_90;
        if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<ISidebarDrawerContent,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        FVar17.Data = local_e8.Data;
        __return_storage_ptr__ = local_res10;
        if (((TStack_88.CurrentBitIndex == uVar20) &&
            ((ForElementType<unsigned_int>)TStack_88.Array == FVar6)) && (pTVar8 == pTVar7)) break;
        pFVar19 = local_e8.Data + (longlong)(int)local_e0 * 0x10;
        pFVar24 = (FScriptContainerElement *)
                  (*(longlong *)pTVar8 + 8 + (longlong)TStack_88.CurrentBitIndex * 0x20);
        for (; FVar17.Data != pFVar19; FVar17.Data = FVar17.Data + 0x10) {
          plVar11 = (longlong *)
                    (**(code **)(**(longlong **)FVar17.Data + 0x10))
                              (*(longlong **)FVar17.Data,local_60);
          plVar12 = (longlong *)(**(code **)(**(longlong **)pFVar24 + 0x10))();
          if (*plVar12 == *plVar11) goto LAB_142daf1da;
        }
        if (((local_e8.Data <= pFVar24) &&
            (pFVar24 < local_e8.Data + (longlong)local_e0._4_4_ * 0x10)) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar25)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<TSharedRef<ISidebarDrawerContent,1>,TSizedDefaultAllocator<32>_> *)
                    (*pcVar4)();
          return pTVar10;
        }
        if ((int)local_e0 == local_e0._4_4_) {
          local_e0._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_e8,(int *)((longlong)&local_e0 + 4));
        }
        lVar14 = (longlong)(int)local_e0;
        local_e0._0_4_ = (int)local_e0 + 1;
        *(undefined8 *)(local_e8.Data + lVar14 * 0x10) = *(undefined8 *)pFVar24;
        lVar13 = *(longlong *)(pFVar24 + 8);
        *(longlong *)(local_e8.Data + lVar14 * 0x10 + 8) = lVar13;
        if (lVar13 != 0) {
          LOCK();
          *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
          UNLOCK();
        }
LAB_142daf1da:
        TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
      }
      local_e8.Data = (FScriptContainerElement *)0x0;
      (local_res10->AllocatorInstance).Data = FVar17.Data;
      local_res10->ArrayNum = (int)local_e0;
      local_res10->ArrayMax = local_e0._4_4_;
      local_e0 = 0;
      DestructItems<TSharedRef<ISidebarDrawerContent,1>,int>
                ((TSharedRef<ISidebarDrawerContent,1> *)0x0,0);
      pTVar22 = local_98;
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      goto LAB_142daee7a;
    }
  }
LAB_142daee72:
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
LAB_142daee7a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  return __return_storage_ptr__;
}

// GetSectionButtonVisibility @ 142db08f0

EVisibility __thiscall
SSidebarDrawerContent::GetSectionButtonVisibility
          (SSidebarDrawerContent *this,TWeakPtr<ISidebarDrawerContent,1> *param_1)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  EVisibility EVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong *in_R8;
  bool bVar11;
  
  pTVar3 = (TReferenceControllerBase<1> *)in_R8[1];
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar3->SharedReferenceCount;
    do {
      pTVar9 = pTVar10;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142db0931;
      LOCK();
      aVar7 = pTVar3->SharedReferenceCount;
      bVar11 = aVar5 == aVar7;
      if (bVar11) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar11);
    pTVar9 = pTVar3;
    if (((longlong *)*in_R8 != (longlong *)0x0) &&
       (cVar6 = (**(code **)(*(longlong *)*in_R8 + 0x20))(),
       pTVar10 = (TReferenceControllerBase<1> *)0x0, cVar6 != '\0')) {
      pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000001;
    }
  }
LAB_142db0931:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  EVar8 = EVisibility::Collapsed;
  if ((int)pTVar10 != 0) {
    EVar8 = EVisibility::SelfHitTestInvisible;
  }
  *(TEnumAsByte<EVisibility::Private> *)&param_1->Object = EVar8.Value.Value;
  plVar4 = (longlong *)in_R8[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return (EVisibility)SUB81(param_1,0);
}

// GetSectionCheckBoxState @ 142db09b0

/* WARNING: Type propagation algorithm not settling */

ECheckBoxState __thiscall
SSidebarDrawerContent::GetSectionCheckBoxState(SSidebarDrawerContent *this,FName param_1)

{
  FSidebarDrawer *pFVar1;
  longlong lVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  uint uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  ECheckBoxState EVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  
  pTVar9 = (this->OwnerDrawerWeak).WeakReferenceCount.ReferenceController;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142db6ec0;
      }
      LOCK();
      aVar4 = pTVar9->SharedReferenceCount;
      bVar10 = aVar3 == aVar4;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar10);
    pFVar1 = (this->OwnerDrawerWeak).Object;
    if (pFVar1 != (FSidebarDrawer *)0x0) {
      uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
      if (*(int *)&(pFVar1->State).SelectedSections.Elements.field_0x8 !=
          *(int *)&(pFVar1->State).SelectedSections.Elements.field_0x34) {
        FVar7 = (pFVar1->State).SelectedSections.Hash.SecondaryData;
        if (FVar7 == (ForElementType<FSetElementId>)0x0) {
          FVar7 = (ForElementType<FSetElementId>)&(pFVar1->State).SelectedSections.Hash;
        }
        iVar6 = *(int *)((longlong)FVar7 +
                        (ulonglong)
                        ((pFVar1->State).SelectedSections.HashSize - 1U & param_1.Number + uVar5) *
                        4);
        if (iVar6 != -1) {
          lVar2 = *(longlong *)&(pFVar1->State).SelectedSections.Elements;
          do {
            if (*(FName *)(lVar2 + (longlong)iVar6 * 0x10) == param_1) {
              EVar8 = Checked;
              goto LAB_142db6ec2;
            }
            iVar6 = *(int *)(lVar2 + 8 + (longlong)iVar6 * 0x10);
          } while (iVar6 != -1);
        }
      }
    }
  }
LAB_142db6ec0:
  EVar8 = Unchecked;
LAB_142db6ec2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return EVar8;
}

// GetSectionContentVisibility @ 142db09c0

EVisibility __thiscall
SSidebarDrawerContent::GetSectionContentVisibility
          (SSidebarDrawerContent *this,FName param_1,TWeakPtr<ISidebarDrawerContent,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  EVisibility EVar5;
  TWeakPtr<ISidebarDrawerContent,1> *in_R9;
  
  bVar4 = IsSectionSelected(this,(FName)param_2);
  if (bVar4) {
    bVar4 = ShouldShowSection(this,in_R9);
    EVar5 = EVisibility::SelfHitTestInvisible;
    if (bVar4) goto LAB_142db0a01;
  }
  EVar5.Value.Value = EVisibility::Collapsed.Value.Value;
LAB_142db0a01:
  pTVar3 = (in_R9->WeakReferenceCount).ReferenceController;
  *(TEnumAsByte<EVisibility::Private> *)param_1 = EVar5.Value.Value;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return (EVisibility)param_1.ComparisonIndex.Value._0_1_;
}

// IsSectionSelected @ 142db6e80

/* WARNING: Type propagation algorithm not settling */

bool __thiscall SSidebarDrawerContent::IsSectionSelected(SSidebarDrawerContent *this,FName param_1)

{
  FSidebarDrawer *pFVar1;
  longlong lVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  uint uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  pTVar8 = (this->OwnerDrawerWeak).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar8->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142db6ec0;
      }
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar9 = aVar3 == aVar4;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar9);
    pFVar1 = (this->OwnerDrawerWeak).Object;
    if (pFVar1 != (FSidebarDrawer *)0x0) {
      uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
      if (*(int *)&(pFVar1->State).SelectedSections.Elements.field_0x8 !=
          *(int *)&(pFVar1->State).SelectedSections.Elements.field_0x34) {
        FVar7 = (pFVar1->State).SelectedSections.Hash.SecondaryData;
        if (FVar7 == (ForElementType<FSetElementId>)0x0) {
          FVar7 = (ForElementType<FSetElementId>)&(pFVar1->State).SelectedSections.Hash;
        }
        iVar6 = *(int *)((longlong)FVar7 +
                        (ulonglong)
                        ((pFVar1->State).SelectedSections.HashSize - 1U & param_1.Number + uVar5) *
                        4);
        if (iVar6 != -1) {
          lVar2 = *(longlong *)&(pFVar1->State).SelectedSections.Elements;
          do {
            if (*(FName *)(lVar2 + (longlong)iVar6 * 0x10) == param_1) {
              bVar9 = true;
              goto LAB_142db6ec2;
            }
            iVar6 = *(int *)(lVar2 + 8 + (longlong)iVar6 * 0x10);
          } while (iVar6 != -1);
        }
      }
    }
  }
LAB_142db6ec0:
  bVar9 = false;
LAB_142db6ec2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return bVar9;
}

// OnSectionSelected @ 142dc98b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSidebarDrawerContent::OnSectionSelected
          (SSidebarDrawerContent *this,ECheckBoxState param_1,FName param_2)

{
  TAttribute<FText> *pTVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  FSidebarDrawer *pFVar2;
  int iVar3;
  int iVar4;
  FSlateApplication *this_01;
  FSidebarDrawer *pFVar5;
  FSidebarDrawer *pFVar6;
  bool bVar7;
  ushort local_res8;
  FName local_res18;
  FName local_res20;
  
  pFVar2 = (FSidebarDrawer *)(this->OwnerDrawerWeak).WeakReferenceCount.ReferenceController;
  pFVar5 = (FSidebarDrawer *)0x0;
  local_res18 = param_2;
  if (pFVar2 != (FSidebarDrawer *)0x0) {
    iVar3 = *(int *)&(pFVar2->Config).ButtonText.Value.TextData.Reference;
    do {
      pFVar6 = pFVar5;
      if (iVar3 == 0) goto LAB_142dc9964;
      pTVar1 = &(pFVar2->Config).ButtonText;
      LOCK();
      iVar4 = *(int *)&(pTVar1->Value).TextData.Reference;
      bVar7 = iVar3 == iVar4;
      if (bVar7) {
        *(int *)&(pTVar1->Value).TextData.Reference = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar7);
    pFVar5 = (this->OwnerDrawerWeak).Object;
  }
  pFVar6 = pFVar2;
  if (pFVar5 == (FSidebarDrawer *)0x0) goto LAB_142dc9964;
  this_01 = FSlateApplication::Get();
  FSlateApplication::GetModifierKeys(this_01);
  if (((((local_res8 & 4) == 0) && ((local_res8 & 8) == 0)) && ((local_res8 & 1) == 0)) &&
     ((local_res8 & 2) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  this_00 = &(pFVar5->State).SelectedSections;
  if (param_1 == Checked) {
    if (!bVar7) {
LAB_142dc9945:
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(this_00);
    }
  }
  else {
    if (!bVar7) goto LAB_142dc9945;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove(this_00,param_2);
    if (*(int *)&(pFVar5->State).SelectedSections.Elements.field_0x8 !=
        *(int *)&(pFVar5->State).SelectedSections.Elements.field_0x34) goto LAB_142dc9964;
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (this_00,&local_res20,(bool *)&local_res18);
LAB_142dc9964:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  return;
}

// ShouldShowSection @ 142dda000

bool __thiscall
SSidebarDrawerContent::ShouldShowSection
          (SSidebarDrawerContent *this,TWeakPtr<ISidebarDrawerContent,1> *param_1)

{
  atomic<int> aVar1;
  char cVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142dda030;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar5);
    if ((param_1->Object != (ISidebarDrawerContent *)0x0) &&
       (cVar2 = (**(code **)(*(longlong *)param_1->Object + 0x20))(), cVar2 != '\0')) {
      bVar5 = true;
      goto LAB_142dda033;
    }
  }
LAB_142dda030:
  bVar5 = false;
LAB_142dda033:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return bVar5;
}

