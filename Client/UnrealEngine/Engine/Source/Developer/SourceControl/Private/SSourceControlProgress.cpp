// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 6

// Construct @ 146b0d920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSourceControlProgress::Construct(SSourceControlProgress *this,FArguments *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWidget *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  SBox *pSVar11;
  TReferenceControllerBase<1> *pTVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  float fVar16;
  FMemScope FVar17;
  FSharedReferencer<1> FVar18;
  FArguments *pFVar19;
  char cVar20;
  byte bVar21;
  bool bVar22;
  FArguments *this_00;
  ISlateStyle *pIVar23;
  FName *pFVar24;
  FArguments *pFVar25;
  FSlotArguments *pFVar26;
  FSizeParam *pFVar27;
  FArguments *pFVar28;
  TSharedRef<STextBlock,1> *pTVar29;
  FArguments *pFVar30;
  FSlotArguments *pFVar31;
  FArguments *pFVar32;
  TSharedRef<SImage,1> *pTVar33;
  FText *pFVar34;
  TSharedRef<SHorizontalBox,1> *pTVar35;
  FArguments *pFVar36;
  TSharedRef<SThrobber,1> *pTVar37;
  FName FVar38;
  undefined8 *puVar39;
  FSlotArguments *pFVar40;
  FArguments *pFVar41;
  TSharedRef<SButton,1> *pTVar42;
  TSharedRef<SWidget_const_,1> *pTVar43;
  ulong64 uVar44;
  FArguments *pFVar45;
  SUniformGridPanel *pSVar46;
  SUniformGridPanel *pSVar47;
  TSharedRef<SVerticalBox,1> *pTVar48;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SBox,1> *pTVar49;
  FSlotArguments *pFVar50;
  FSlotArguments *pFVar51;
  SSourceControlProgress *pSVar52;
  undefined4 local_res10 [2];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  ulonglong uStack_3920;
  T0RequiredArgs local_3918;
  T0RequiredArgs local_3917;
  T0RequiredArgs local_3916;
  T0RequiredArgs local_3915;
  T0RequiredArgs local_3914;
  T0RequiredArgs local_3913;
  T0RequiredArgs local_3912;
  T0RequiredArgs local_3911;
  FName local_3910;
  FLLMScope local_3908;
  FLLMScope local_3904;
  FLLMScope local_3900;
  FLLMScope local_38fc;
  FLLMScope local_38f8;
  FLLMScope local_38f4;
  FLLMScope local_38f0;
  FLLMScope local_38ec;
  FLLMScope local_38e8;
  FLLMScope local_38e4;
  undefined4 local_38e0;
  undefined1 local_38dc;
  undefined1 local_38d8 [8];
  ForAnyElementType FStack_38d0;
  ulonglong local_38c8;
  float local_38c0;
  undefined1 local_38bc;
  undefined1 local_38b8 [8];
  ForAnyElementType FStack_38b0;
  ulonglong local_38a8;
  FMemScope local_38a0;
  SButton *local_3898;
  FSharedReferencer<1> local_3890;
  SButton *local_3888;
  FSharedReferencer<1> local_3880;
  SThrobber *local_3878;
  FSharedReferencer<1> local_3870;
  SHorizontalBox *local_3868;
  FSharedReferencer<1> local_3860;
  STextBlock *local_3858;
  FSharedReferencer<1> local_3850;
  SImage *local_3848;
  FSharedReferencer<1> local_3840;
  STextBlock *local_3838;
  FSharedReferencer<1> local_3830;
  FMemScope local_3828;
  FName local_3820;
  FName local_3818;
  FMemScope local_3810;
  FSlateBrush *local_3808;
  undefined1 local_3800;
  undefined1 local_37f8 [8];
  ForAnyElementType FStack_37f0;
  ulonglong local_37e8;
  FSlateBrush *local_37e0;
  undefined1 local_37d8;
  undefined1 local_37d0 [8];
  ForAnyElementType FStack_37c8;
  ulonglong local_37c0;
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> local_37b8;
  FArguments *local_37a0;
  undefined8 local_3798;
  FSharedReferencer<1> local_3790;
  undefined8 local_3788;
  undefined8 uStack_3780;
  undefined1 local_3778;
  undefined1 local_3770 [8];
  ForAnyElementType FStack_3768;
  ulonglong local_3760;
  SVerticalBox *local_3758;
  TReferenceControllerBase<1> *pTStack_3750;
  float local_3748;
  undefined1 local_3744;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3740;
  float local_3728;
  undefined1 local_3724;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3720;
  undefined4 local_3708 [2];
  undefined4 local_3700 [2];
  FName local_36f8;
  FMemScope local_36f0;
  FSlotArguments *local_36e8;
  FArguments *local_36e0;
  FName local_36d8;
  FMemScope local_36d0;
  FArguments *local_36c8;
  TReferenceControllerBase<1> *local_36c0;
  TReferenceControllerBase<1> *local_36b8;
  TReferenceControllerBase<1> *local_36b0;
  undefined4 local_36a8 [2];
  FMemScope local_36a0;
  FName local_3698;
  undefined1 local_3690 [8];
  FMemScope local_3688;
  FMemScope local_3680;
  FName local_3678;
  FMemScope local_3670;
  FName local_3668;
  undefined4 local_3660 [2];
  FName local_3658;
  FMemScope local_3650;
  FName local_3648;
  LARGE_INTEGER local_3640;
  undefined4 local_3638 [2];
  FSlotArguments *local_3630;
  FArguments *local_3628;
  undefined4 local_3620 [2];
  TAttribute<float> local_3618;
  TSharedRef<SWidget,1> local_35f8;
  TSharedRef<STextBlock,1> local_35e8;
  FText local_35d8;
  bool local_35c8;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> local_35c0;
  FDestructionSentinel local_35a8;
  FDestructionSentinel local_3590;
  FDestructionSentinel local_3578;
  FDestructionSentinel local_3560;
  FDestructionSentinel local_3548;
  FDestructionSentinel local_3530;
  FDelegateAllocation *local_3518;
  TAttribute<FText> local_3510;
  TAttribute<FText> local_34e0;
  TAttribute<FText> local_34b0;
  TSharedRef<STextBlock,1> local_3480;
  FText local_3470;
  TSharedRef<SImage,1> local_3460;
  FName local_3450;
  FName local_3448 [2];
  code *local_3438;
  longlong lStack_3430;
  FName local_3428;
  FName local_3420;
  code *local_3418;
  longlong lStack_3410;
  code *local_3408;
  longlong lStack_3400;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_33f8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_33e0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_33c8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_33b0;
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> local_3398;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3380;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3368;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3350;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3338;
  FName local_3320;
  code *local_3318;
  longlong lStack_3310;
  TSharedRef<SWidget_const_,1> local_3308;
  code *local_32f8;
  longlong lStack_32f0;
  TSharedRef<SBox,1> local_32e8;
  TSharedRef<SVerticalBox,1> local_32d8;
  TSharedRef<SHorizontalBox,1> local_32c8;
  TSharedRef<SButton,1> local_32b8;
  FText local_32a8;
  TSharedRef<SButton,1> local_3298;
  FText local_3288;
  TSharedRef<SThrobber,1> local_3278;
  TSharedRef<SHorizontalBox,1> local_3268;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_3258;
  undefined8 *local_3240 [2];
  TReferenceControllerBase<1> *local_3230;
  undefined8 *local_3218 [2];
  TReferenceControllerBase<1> *local_3208;
  undefined1 local_31f0 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_31c0;
  undefined1 local_31a8 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_3178;
  undefined1 local_3160 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_3130;
  undefined1 local_3118 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_30e8;
  undefined1 local_30d0 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_30a0;
  undefined1 local_3088 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_3058;
  FArguments local_3040;
  FArguments local_2dc8;
  FArguments local_2bc0;
  FArguments local_29b8;
  FSlotArguments local_27b0;
  FSlotArguments local_26c8;
  FSlotArguments local_25e0;
  FSlotArguments local_24f8;
  FSlotArguments local_2410;
  FSlotArguments local_2328;
  FSlotArguments local_2240;
  FArguments local_2158;
  FArguments local_1eb0;
  FArguments local_1ca8;
  FArguments local_1968;
  FArguments local_1588;
  FArguments local_1048;
  FArguments local_b08;
  FArguments local_5b0;
  undefined8 uStack_48;
  
  uStack_48 = 0x146b0d943;
  local_res10[0] = 0;
  bVar15 = false;
  bVar14 = false;
  bVar22 = false;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnCancelled,&param_1->_OnCancelled);
  this->bCancelClicked = false;
  QueryPerformanceCounter(&local_3640);
  this->TimeStamp =
       (double)local_3640.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  this_00 = SBorder::FArguments::FArguments(&local_1968);
  pIVar23 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar23 + 0x50);
  pFVar24 = ::FName::FName(&local_3320,"ChildWindow.Background");
  local_37e0 = (FSlateBrush *)(*pcVar3)(pIVar23,*pFVar24);
  local_37d8 = 1;
  local_37c0 = 0;
  local_37d0 = (undefined1  [8])0x0;
  FStack_37c8.Data = (FScriptContainerElement *)0x0;
  (this_00->_BorderImage).Value = local_37e0;
  (this_00->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_00->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_37d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_37d0,
             (FWriteAccessScope *)&local_35a8);
  if (((int)local_37c0 != 0) && (FStack_37c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_37c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_37c8,0,0,0x10);
    local_37c0 = local_37c0 & 0xffffffff00000000;
  }
  if (local_35a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_35a8.Accessor,&local_35a8);
  }
  if (FStack_37c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_37c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_37d0);
  local_37a0 = SBorder::FArguments::Padding(this_00,__real_41800000);
  local_37a0->_VAlign = VAlign_Center;
  local_36c8 = SBox::FArguments::FArguments(&local_1ca8);
  local_38e0 = 0x43fa0000;
  local_38dc = 1;
  local_38d8 = (undefined1  [8])0x0;
  FStack_38d0.Data = (FScriptContainerElement *)0x0;
  local_38c8 = 0;
  (local_36c8->_WidthOverride).Value.Size = 500.0;
  (local_36c8->_WidthOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_36c8->_WidthOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38d8,
             (FWriteAccessScope *)&local_3590);
  if (((int)local_38c8 != 0) && (FStack_38d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_38d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38d0,0,0,0x10);
    local_38c8 = local_38c8 & 0xffffffff00000000;
  }
  if (local_3590.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3590.Accessor,&local_3590);
  }
  if (FStack_38d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38d8);
  pFVar25 = SVerticalBox::FArguments::FArguments(&local_29b8);
  pFVar26 = SVerticalBox::Slot(&local_2240);
  pFVar27 = (FSizeParam *)FAuto::FAuto((FAuto *)local_31f0);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar26->field_0x58,pFVar27);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_31c0)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_31f0 + 0x10));
  pFVar26 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar26->field_0x18,0.0,__real_41000000);
  pFVar28 = STextBlock::FArguments::FArguments(&local_5b0);
  local_35d8.TextData.Reference = (param_1->_Text).Value.TextData.Reference;
  if (local_35d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_35d8.TextData.Reference + 8))
              (local_35d8.TextData.Reference,local_3690);
  }
  local_35d8.Flags = (param_1->_Text).Value.Flags;
  local_35c8 = (param_1->_Text).bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>(&local_35c0,&(param_1->_Text).Getter);
  FText::operator=(&(pFVar28->_Text).Value,&local_35d8);
  (pFVar28->_Text).bIsSet = local_35c8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar28->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_35c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_35c0);
  if (local_35d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_35d8.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_3908,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3648 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3650,&local_3648,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_3338,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\ScopedSourceControlProgress.cpp"
             ,0x42,(T0RequiredArgs *)local_res10);
  FMemScope::~FMemScope(&local_3650);
  FLLMScope::~FLLMScope(&local_3908);
  pTVar29 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3338,&local_35e8,pFVar28);
  local_3838 = pTVar29->Object;
  local_3830.ReferenceController = (pTVar29->SharedReferenceCount).ReferenceController;
  if (local_3830.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3830.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3830.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_3830.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3830.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_36b0 = local_3830.ReferenceController;
  if ((STextBlock **)&pFVar26->field_0x8 != &local_3838) {
    *(STextBlock **)&pFVar26->field_0x8 = local_3838;
    local_3838 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar26->field_0x10,&local_3830);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3830.ReferenceController);
  local_3818 = (FName)SVerticalBox::FArguments::operator+(pFVar25,pFVar26);
  pFVar26 = SVerticalBox::Slot(&local_2328);
  pFVar27 = (FSizeParam *)FAuto::FAuto((FAuto *)local_31a8);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar26->field_0x58,pFVar27);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3178)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_31a8 + 0x10));
  local_3828 = (FMemScope)
               TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar26->field_0x18,0.0,__real_41000000);
  pFVar30 = SHorizontalBox::FArguments::FArguments(&local_2bc0);
  uVar13 = uStack_3920 >> 0x20;
  uStack_3920 = uVar13 << 0x20;
  local_3418 = GetWarningVisibility;
  lStack_3410 = uStack_3920;
  TAttribute<EVisibility>::Bind<SSourceControlProgress>
            ((TAttribute<EVisibility> *)&pFVar30->_padding_,this,(pmf_f55bedd7 *)&local_3418);
  pFVar31 = SHorizontalBox::Slot(&local_2410);
  pFVar27 = (FSizeParam *)FAuto::FAuto((FAuto *)local_3160);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar31->field_0x58,pFVar27);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3130)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_3160 + 0x10));
  if (local_3708 != (undefined4 *)&pFVar31->field_0x50) {
    *(undefined4 *)&pFVar31->field_0x50 = 2;
    pFVar31->field_0x54 = 1;
  }
  pFVar50 = (FSlotArguments *)0x0;
  if (pFVar31 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar50 = pFVar31;
  }
  puVar1 = &pFVar50->field_0x48;
  if (local_3700 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 2;
    pFVar50->field_0x4c = 1;
  }
  pFVar31 = (FSlotArguments *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar31 = pFVar50;
  }
  pFVar32 = SImage::FArguments::FArguments(&local_2158);
  pIVar23 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar23 + 0x50);
  pFVar24 = ::FName::FName(&local_3450,"SourceControl.ProgressWindow.Warning");
  local_3808 = (FSlateBrush *)(*pcVar3)(pIVar23,*pFVar24);
  local_3800 = 1;
  local_37e8 = 0;
  local_37f8 = (undefined1  [8])0x0;
  FStack_37f0.Data = (FScriptContainerElement *)0x0;
  (pFVar32->_Image).Value = local_3808;
  (pFVar32->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_37f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_37f8,
             (FWriteAccessScope *)&local_3578);
  if (((int)local_37e8 != 0) && (FStack_37f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_37f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_37f0,0,0,0x10);
    local_37e8 = local_37e8 & 0xffffffff00000000;
  }
  if (local_3578.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3578.Accessor,&local_3578);
  }
  if (FStack_37f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_37f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_37f8);
  FLLMScope::FLLMScope(&local_3904,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3658 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3688,&local_3658,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_3350,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\ScopedSourceControlProgress.cpp"
             ,0x50,local_res18);
  FMemScope::~FMemScope(&local_3688);
  FLLMScope::~FLLMScope(&local_3904);
  pTVar33 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3350,&local_3460,pFVar32);
  local_3848 = pTVar33->Object;
  local_3840.ReferenceController = (pTVar33->SharedReferenceCount).ReferenceController;
  if (local_3840.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3840.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3840.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_3840.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3840.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar50 = (FSlotArguments *)0x0;
  local_36b8 = local_3840.ReferenceController;
  if ((SImage **)&pFVar31->field_0x8 != &local_3848) {
    *(SImage **)&pFVar31->field_0x8 = local_3848;
    local_3848 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar31->field_0x10,&local_3840);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3840.ReferenceController);
  pFVar30 = SHorizontalBox::FArguments::operator+(pFVar30,pFVar31);
  pFVar31 = SHorizontalBox::Slot(&local_24f8);
  if (local_36a8 != (undefined4 *)&pFVar31->field_0x50) {
    *(undefined4 *)&pFVar31->field_0x50 = 2;
    pFVar31->field_0x54 = 1;
  }
  pFVar51 = pFVar50;
  if (pFVar31 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar51 = pFVar31;
  }
  pFVar27 = (FSizeParam *)FAuto::FAuto((FAuto *)local_3118);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar51->field_0x58,pFVar27);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_30e8)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_3118 + 0x10));
  pFVar28 = STextBlock::FArguments::FArguments(&local_b08);
  pFVar34 = FText::AsLocalizable_Advanced_LocText
                      (&local_3470,L"SourceControlProgress",L"LongTaskMessage",
                       L"Operation is taking a long time to complete. Click cancel to stop the current operation, you can try again later."
                      );
  FText::FText(&local_3510.Value,pFVar34);
  local_3510.bIsSet = true;
  local_3510.Getter._16_8_ = 0;
  local_3510.Getter._0_8_ = 0;
  local_3510.Getter._8_8_ = 0;
  pFVar28 = STextBlock::FArguments::Text(pFVar28,&local_3510);
  local_38bc = 1;
  local_38c0 = __real_43e10000;
  local_38a8 = 0;
  local_38b8 = (undefined1  [8])0x0;
  FStack_38b0.Data = (FScriptContainerElement *)0x0;
  (pFVar28->_WrapTextAt).Value = __real_43e10000;
  (pFVar28->_WrapTextAt).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar28->_WrapTextAt).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38b8,
             (FWriteAccessScope *)&local_3560);
  if (((int)local_38a8 != 0) && (FStack_38b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_38b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38b0,0,0,0x10);
    local_38a8 = local_38a8 & 0xffffffff00000000;
  }
  if (local_3560.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3560.Accessor,&local_3560);
  }
  if (FStack_38b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38b8);
  FLLMScope::FLLMScope(&local_3900,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3668 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3670,&local_3668,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_3368,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\ScopedSourceControlProgress.cpp"
             ,0x57,local_res20);
  FMemScope::~FMemScope(&local_3670);
  FLLMScope::~FLLMScope(&local_3900);
  pTVar29 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3368,&local_3480,pFVar28);
  pTVar4 = (pTVar29->SharedReferenceCount).ReferenceController;
  local_3858 = pTVar29->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3850.ReferenceController = pTVar4;
  if ((STextBlock **)&pFVar51->field_0x8 != &local_3858) {
    *(STextBlock **)&pFVar51->field_0x8 = local_3858;
    local_3858 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar51->field_0x10,&local_3850);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3850.ReferenceController);
  pFVar30 = SHorizontalBox::FArguments::operator+(pFVar30,pFVar51);
  FLLMScope::FLLMScope(&local_38fc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3678 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3680,&local_3678,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_3380,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\ScopedSourceControlProgress.cpp"
             ,0x49,&local_3918);
  FMemScope::~FMemScope(&local_3680);
  FLLMScope::~FLLMScope(&local_38fc);
  pTVar35 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3380,&local_3268,pFVar30);
  FVar17 = local_3828;
  pTVar5 = (pTVar35->SharedReferenceCount).ReferenceController;
  local_3868 = pTVar35->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3860.ReferenceController = pTVar5;
  if ((SHorizontalBox **)((longlong)local_3828 + 8) != &local_3868) {
    *(SHorizontalBox **)((longlong)local_3828 + 8) = local_3868;
    local_3868 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)local_3828 + 0x10),&local_3860);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3860.ReferenceController);
  local_36e0 = SVerticalBox::FArguments::operator+
                         ((FArguments *)local_3818,(FSlotArguments *)FVar17);
  pFVar26 = SVerticalBox::Slot(&local_25e0);
  pFVar27 = (FSizeParam *)FAuto::FAuto((FAuto *)local_30d0);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar26->field_0x58,pFVar27);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_30a0)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_30d0 + 0x10));
  local_36e8 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar26->field_0x18,0.0,__real_41000000,0.0,0.0);
  pFVar30 = SHorizontalBox::FArguments::FArguments(&local_2dc8);
  pFVar31 = SHorizontalBox::Slot(&local_26c8);
  local_3618.Value = 1.0;
  local_3618.bIsSet = true;
  local_3618.Getter._16_8_ = 0;
  local_3618.Getter._0_8_ = 0;
  local_3618.Getter._8_8_ = 0;
  pFVar31 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar31,&local_3618);
  if (local_3660 != (undefined4 *)&pFVar31->field_0x50) {
    *(undefined4 *)&pFVar31->field_0x50 = 2;
    pFVar31->field_0x54 = 1;
  }
  pFVar51 = pFVar50;
  if (pFVar31 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar51 = pFVar31;
  }
  puVar1 = &pFVar51->field_0x48;
  if (local_3620 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 1;
    pFVar51->field_0x4c = 1;
  }
  if (puVar1 != (undefined1 *)0x0) {
    pFVar50 = pFVar51;
  }
  pFVar36 = SThrobber::FArguments::FArguments(&local_1eb0);
  FLLMScope::FLLMScope(&local_38f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3818 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3828,&local_3818,true);
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>
            (&local_3398,"SThrobber",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\ScopedSourceControlProgress.cpp"
             ,0x66,&local_3917);
  FMemScope::~FMemScope(&local_3828);
  FLLMScope::~FLLMScope(&local_38f8);
  pTVar37 = TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3398,&local_3278,pFVar36);
  pTVar6 = (pTVar37->SharedReferenceCount).ReferenceController;
  local_3878 = pTVar37->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3870.ReferenceController = pTVar6;
  if ((SThrobber **)&pFVar50->field_0x8 != &local_3878) {
    *(SThrobber **)&pFVar50->field_0x8 = local_3878;
    local_3878 = (SThrobber *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar50->field_0x10,&local_3870);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3870.ReferenceController);
  local_3628 = SHorizontalBox::FArguments::operator+(pFVar30,pFVar50);
  pFVar31 = SHorizontalBox::Slot(&local_27b0);
  puVar1 = &pFVar31->field_0x48;
  if (local_3638 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 3;
    pFVar31->field_0x4c = 1;
  }
  pFVar50 = (FSlotArguments *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar50 = pFVar31;
  }
  local_3630 = pFVar50;
  pFVar27 = (FSizeParam *)FAuto::FAuto((FAuto *)local_3088);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar50->field_0x58,pFVar27);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3058)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_3088 + 0x10));
  FVar38 = (FName)SUniformGridPanel::FArguments::FArguments(&local_3040);
  local_3910 = FVar38;
  pIVar23 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar23 + 0x48);
  pFVar24 = ::FName::FName(local_3448,"StandardDialog.SlotPadding");
  puVar39 = (undefined8 *)(*pcVar3)(pIVar23,*pFVar24,0,&FStyleDefaults::DefaultMargin,0);
  local_3788 = *puVar39;
  uStack_3780 = puVar39[1];
  local_3778 = 1;
  local_3760 = 0;
  local_3770 = (undefined1  [8])0x0;
  FStack_3768.Data = (FScriptContainerElement *)0x0;
  (((TAttribute<FMargin> *)((longlong)FVar38 + 0x208))->Value).Left = (float)(int)local_3788;
  (((TAttribute<FMargin> *)((longlong)FVar38 + 0x208))->Value).Top =
       (float)(int)((ulonglong)local_3788 >> 0x20);
  *(undefined8 *)((longlong)FVar38 + 0x210) = uStack_3780;
  *(bool *)((longlong)FVar38 + 0x218) = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar38 + 0x220),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3770);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3770,
             (FWriteAccessScope *)&local_3548);
  if (((int)local_3760 != 0) && (FStack_3768.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3768.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3768,0,0,0x10);
    local_3760 = local_3760 & 0xffffffff00000000;
  }
  if (local_3548.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3548.Accessor,&local_3548);
  }
  if (FStack_3768.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3768.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3770);
  pIVar23 = FAppStyle::Get();
  fVar16 = FStyleDefaults::DefaultFloat;
  pcVar3 = *(code **)((longlong)*pIVar23 + 0x28);
  pFVar24 = ::FName::FName(&local_3428,"StandardDialog.MinDesiredSlotWidth");
  local_3748 = (float)(*pcVar3)(pIVar23,*pFVar24,0,fVar16,0);
  local_3744 = 1;
  local_3740._16_8_ = 0;
  local_3740._0_8_ = 0;
  local_3740._8_8_ = 0;
  ((TAttribute<float> *)((longlong)FVar38 + 0x238))->Value = local_3748;
  *(bool *)((longlong)FVar38 + 0x23c) = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar38 + 0x240),&local_3740);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3740)
  ;
  pIVar23 = FAppStyle::Get();
  fVar16 = FStyleDefaults::DefaultFloat;
  pcVar3 = *(code **)((longlong)*pIVar23 + 0x28);
  pFVar24 = ::FName::FName(&local_3420,"StandardDialog.MinDesiredSlotHeight");
  local_3728 = (float)(*pcVar3)(pIVar23,*pFVar24,0,fVar16,0);
  local_3724 = 1;
  local_3720._16_8_ = 0;
  local_3720._0_8_ = 0;
  local_3720._8_8_ = 0;
  ((TAttribute<float> *)((longlong)FVar38 + 600))->Value = local_3728;
  *(bool *)((longlong)FVar38 + 0x25c) = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar38 + 0x260),&local_3720);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3720)
  ;
  pFVar40 = SUniformGridPanel::Slot((FSlotArguments *)local_3240,0,0);
  pFVar41 = SButton::FArguments::FArguments(&local_1048);
  pFVar41->_HAlign = HAlign_Center;
  pFVar34 = FText::AsLocalizable_Advanced_LocText
                      (&local_3288,L"SourceControlProgress",L"ContinueButtonLabel",L"Continue");
  FText::FText(&local_34e0.Value,pFVar34);
  local_34e0.bIsSet = true;
  local_34e0.Getter._16_8_ = 0;
  local_34e0.Getter._0_8_ = 0;
  local_34e0.Getter._8_8_ = 0;
  pFVar41 = SButton::FArguments::Text(pFVar41,&local_34e0);
  uStack_3920 = uVar13 << 0x20;
  local_3408 = OnContinueClicked;
  lStack_3400 = uStack_3920;
  pFVar41 = SButton::FArguments::OnClicked<SSourceControlProgress>
                      (pFVar41,this,(pmf_b8defd44 *)&local_3408);
  uStack_3920 = uVar13 << 0x20;
  local_3438 = GetWarningVisibility;
  lStack_3430 = uStack_3920;
  TAttribute<EVisibility>::Bind<SSourceControlProgress>
            ((TAttribute<EVisibility> *)&pFVar41->_padding_,this,(pmf_f55bedd7 *)&local_3438);
  FLLMScope::FLLMScope(&local_38f4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3698 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_36a0,&local_3698,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_33b0,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\ScopedSourceControlProgress.cpp"
             ,0x73,&local_3916);
  FMemScope::~FMemScope(&local_36a0);
  FLLMScope::~FLLMScope(&local_38f4);
  pTVar42 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_33b0,&local_3298,pFVar41);
  local_3888 = pTVar42->Object;
  local_3880.ReferenceController = (pTVar42->SharedReferenceCount).ReferenceController;
  if (local_3880.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3880.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3880.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_3880.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3880.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_36c0 = local_3880.ReferenceController;
  if ((SButton **)&pFVar40->field_0x8 != &local_3888) {
    *(SButton **)&pFVar40->field_0x8 = local_3888;
    local_3888 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar40->field_0x10,&local_3880);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3880.ReferenceController);
  local_3820 = (FName)SUniformGridPanel::FArguments::operator+((FArguments *)local_3910,pFVar40);
  local_38a0 = (FMemScope)SUniformGridPanel::Slot((FSlotArguments *)local_3218,1,0);
  pFVar41 = SButton::FArguments::FArguments(&local_1588);
  pFVar41->_HAlign = HAlign_Center;
  pFVar34 = FText::AsLocalizable_Advanced_LocText
                      (&local_32a8,L"SourceControlProgress",L"CancelButtonLabel",L"Cancel");
  FText::FText(&local_34b0.Value,pFVar34);
  local_34b0.bIsSet = true;
  local_34b0.Getter._16_8_ = 0;
  local_34b0.Getter._0_8_ = 0;
  local_34b0.Getter._8_8_ = 0;
  pFVar41 = SButton::FArguments::Text(pFVar41,&local_34b0);
  uStack_3920 = uVar13 << 0x20;
  local_3318 = OnCancelClicked;
  lStack_3310 = uStack_3920;
  FVar38 = (FName)SButton::FArguments::OnClicked<SSourceControlProgress>
                            (pFVar41,this,(pmf_b8defd44 *)&local_3318);
  *(undefined1 *)((longlong)FVar38 + 0xa9) = 1;
  local_3910 = FVar38;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar38 + 0xb0),
             (FWriteAccessScope *)&local_3530);
  local_3518 = (FDelegateAllocation *)((longlong)FVar38 + 0xb8);
  puVar39 = UE::Core::Private::DelegateAllocate(0x38,local_3518);
  pSVar52 = this;
  if (puVar39 != (undefined8 *)0x0) {
    uStack_3920 = (ulonglong)local_35e8.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar43 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3308);
    pSVar52 = (SSourceControlProgress *)(pTVar43->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar43->Object;
    if (pSVar52 != (SSourceControlProgress *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar52->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar52->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar52->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar52->_padding_ + 1);
      UNLOCK();
    }
    *puVar39 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar44 = FDelegateHandle::GenerateNewID();
    puVar39[2] = uVar44;
    *puVar39 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlProgress___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar39[3] = pSVar7;
    puVar39[4] = pSVar52;
    if (pSVar52 != (SSourceControlProgress *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar52->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar52->_padding_)[1] + 1);
      UNLOCK();
    }
    bVar15 = true;
    bVar14 = true;
    bVar22 = true;
    puVar39[5] = IsCancelEnabled;
    puVar39[6] = uStack_3920;
  }
  if (bVar22) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar52);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar52);
  }
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3308.SharedReferenceCount.ReferenceController);
  }
  if (local_3530.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3530.Accessor,&local_3530);
  }
  FVar38 = local_3910;
  local_32f8 = GetCancelVisibility;
  lStack_32f0 = uStack_3920;
  TAttribute<EVisibility>::Bind<SSourceControlProgress>
            ((TAttribute<EVisibility> *)((longlong)local_3910 + 0x88),this,
             (pmf_f55bedd7 *)&local_32f8);
  FLLMScope::FLLMScope(&local_38f0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3910 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_36f0,&local_3910,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_33c8,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\ScopedSourceControlProgress.cpp"
             ,0x7b,&local_3915);
  FMemScope::~FMemScope(&local_36f0);
  FLLMScope::~FLLMScope(&local_38f0);
  pTVar42 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_33c8,&local_32b8,(FArguments *)FVar38);
  FVar17 = local_38a0;
  pTVar8 = (pTVar42->SharedReferenceCount).ReferenceController;
  local_3898 = pTVar42->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3890.ReferenceController = pTVar8;
  if ((SButton **)((longlong)local_38a0 + 8) != &local_3898) {
    *(SButton **)((longlong)local_38a0 + 8) = local_3898;
    local_3898 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)local_38a0 + 0x10),&local_3890);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3890.ReferenceController);
  pFVar45 = SUniformGridPanel::FArguments::operator+
                      ((FArguments *)local_3820,(FSlotArguments *)FVar17);
  FLLMScope::FLLMScope(&local_38ec,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3820 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_38a0,&local_3820,true);
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>
            (&local_37b8,"SUniformGridPanel",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\ScopedSourceControlProgress.cpp"
             ,0x6d,&local_3914);
  FMemScope::~FMemScope(&local_38a0);
  FLLMScope::~FLLMScope(&local_38ec);
  pSVar46 = TSharedPtr<SUniformGridPanel,1>::operator->(&local_37b8._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar46,(FSlateBaseNamedArgs *)pFVar45);
  pSVar46 = local_37b8._Widget.Object;
  SUniformGridPanel::Construct(local_37b8._Widget.Object,pFVar45);
  pSVar47 = TSharedPtr<SUniformGridPanel,1>::operator->(&local_37b8._Widget);
  if ((pSVar47->_padding_ & 0x10) == 0) {
    cVar20 = (**(code **)(pSVar47->_padding_ + 0x228))(pSVar47);
    bVar21 = 0;
    if (cVar20 == '\0') goto LAB_146b0ef05;
  }
  bVar21 = 0x20;
LAB_146b0ef05:
  *(byte *)&pSVar47->_padding_ = (byte)pSVar47->_padding_ & 0xdf;
  *(byte *)&pSVar47->_padding_ = (byte)pSVar47->_padding_ | bVar21;
  pSVar47 = TSharedPtr<SUniformGridPanel,1>::operator->(&local_37b8._Widget);
  pbVar2 = (byte *)((longlong)&pSVar47->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_37b8._Widget.Object == (SUniformGridPanel *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar22)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar18.ReferenceController = local_37b8._Widget.SharedReferenceCount.ReferenceController;
  local_37b8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_37b8._Widget.Object = (SUniformGridPanel *)0x0;
  if ((pSVar46 == (SUniformGridPanel *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar22)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar31 = local_3630;
  local_3790.ReferenceController = FVar18.ReferenceController;
  if (FVar18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar18.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar18.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar18.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar18.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((undefined8 *)&local_3630->field_0x8 != &local_3798) {
    *(SUniformGridPanel **)&local_3630->field_0x8 = pSVar46;
    local_3798 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_3630->field_0x10,&local_3790);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3790.ReferenceController);
  pFVar30 = SHorizontalBox::FArguments::operator+(local_3628,pFVar31);
  FLLMScope::FLLMScope(&local_38e8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_36f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3810,&local_36f8,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_33e0,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\ScopedSourceControlProgress.cpp"
             ,0x60,&local_3913);
  FMemScope::~FMemScope(&local_3810);
  FLLMScope::~FLLMScope(&local_38e8);
  pTVar35 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_33e0,&local_32c8,pFVar30);
  local_35f8.Object = (SWidget *)pTVar35->Object;
  local_3810 = (FMemScope)(pTVar35->SharedReferenceCount).ReferenceController;
  if (local_3810 != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_3810 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_3810 + 8) + 1);
    UNLOCK();
  }
  local_35f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_3810;
  pFVar26 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_36e8,&local_35f8);
  pFVar25 = SVerticalBox::FArguments::operator+(local_36e0,pFVar26);
  FLLMScope::FLLMScope(&local_38e4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_36d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_36d0,&local_36d8,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_33f8,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\ScopedSourceControlProgress.cpp"
             ,0x3d,&local_3912);
  FMemScope::~FMemScope(&local_36d0);
  FLLMScope::~FLLMScope(&local_38e4);
  pTVar48 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_33f8,&local_32d8,pFVar25);
  pFVar19 = local_36c8;
  pTVar9 = (pTVar48->SharedReferenceCount).ReferenceController;
  local_3758 = pTVar48->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (local_36c8->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_36c8->_Content).Widget.Object = (SWidget *)local_3758;
  (local_36c8->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar9;
  pTStack_3750 = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  this_01 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_3258,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\ScopedSourceControlProgress.cpp"
                       ,0x3a,&local_3911);
  pTVar49 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_01,&local_32e8,pFVar19);
  pTVar10 = (pTVar49->SharedReferenceCount).ReferenceController;
  pSVar11 = pTVar49->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = (local_37a0->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_37a0->_Content).Widget.Object = (SWidget *)pSVar11;
  (local_37a0->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SBorder::Construct((SBorder *)this,local_37a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_32e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3258._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_32d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_33f8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3810);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_32c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_33e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar18.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar18.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37b8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_32b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_33c8._Widget.SharedReferenceCount.ReferenceController);
  if (local_32a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_32a8.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_1588);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3208);
  if (local_3218[0] != (undefined8 *)0x0) {
    (**(code **)*local_3218[0])(local_3218[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_36c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3298.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_33b0._Widget.SharedReferenceCount.ReferenceController);
  if (local_3288.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3288.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_1048);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3230);
  if (local_3240[0] != (undefined8 *)0x0) {
    (**(code **)*local_3240[0])(local_3240[0],1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3040._MinDesiredSlotHeight.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3040._MinDesiredSlotWidth.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3040._SlotPadding.Getter);
  DestructItems<SUniformGridPanel::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3040._Slots.AllocatorInstance.Data,local_3040._Slots.ArrayNum);
  if ((FSlotArguments *)local_3040._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3040._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3040);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_27b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3278.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3398._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1eb0);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_26c8);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2dc8._Slots.AllocatorInstance.Data,local_2dc8._Slots.ArrayNum);
  if ((FSlotArguments *)local_2dc8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2dc8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2dc8);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_25e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3268.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3380._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3480.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3368._Widget.SharedReferenceCount.ReferenceController);
  if (local_3470.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3470.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_b08);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_24f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_36b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3460.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3350._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2158._OnMouseButtonDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2158._DesiredSizeOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2158._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2158._Image.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2158);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2410);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2bc0._Slots.AllocatorInstance.Data,local_2bc0._Slots.ArrayNum);
  if ((FSlotArguments *)local_2bc0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2bc0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2bc0);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2328);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_36b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_35e8.SharedReferenceCount.ReferenceController._4_4_,
                      local_35e8.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3338._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5b0);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2240);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_29b8._Slots.AllocatorInstance.Data,local_29b8._Slots.ArrayNum);
  if ((FSlotArguments *)local_29b8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_29b8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_29b8);
  SBox::FArguments::~FArguments(&local_1ca8);
  SBorder::FArguments::~FArguments(&local_1968);
  return;
}

// GetCancelVisibility @ 146b16e40

EVisibility __thiscall SSourceControlProgress::GetCancelVisibility(SSourceControlProgress *this)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  EVisibility EVar4;
  uchar *in_RDX;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCancelled,&local_28)
  ;
  if ((*(int *)&(this->OnCancelled).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnCancelled).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_146b16e83;
    }
  }
  bVar2 = false;
LAB_146b16e83:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  EVar4 = EVisibility::Collapsed;
  if (bVar2) {
    EVar4 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar4.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetWarningVisibility @ 146b1afc0

EVisibility __thiscall SSourceControlProgress::GetWarningVisibility(SSourceControlProgress *this)

{
  longlong *plVar1;
  char cVar2;
  EVisibility EVar3;
  uchar *in_RDX;
  LARGE_INTEGER local_res8;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCancelled,&local_28)
  ;
  if (((*(int *)&(this->OnCancelled).field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(this->OnCancelled).field_0x8, plVar1 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    EVar3 = EVisibility::Collapsed;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    QueryPerformanceCounter(&local_res8);
    EVar3 = EVisibility::Hidden;
    if ((double)SourceControlConstants::OperationTimeOut <
        ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) - this->TimeStamp) {
      EVar3 = EVisibility::Visible;
    }
  }
  *in_RDX = (uchar)EVar3.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// IsCancelEnabled @ 146b1bd00

bool __thiscall SSourceControlProgress::IsCancelEnabled(SSourceControlProgress *this)

{
  return this->bCancelClicked == false;
}

// OnCancelClicked @ 146b1f490

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSourceControlProgress::OnCancelClicked(SSourceControlProgress *this,FReply *__return_storage_ptr__)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  this->bCancelClicked = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCancelled,&local_28)
  ;
  if ((*(int *)&(this->OnCancelled).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnCancelled).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnContinueClicked @ 146b1f700

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSourceControlProgress::OnContinueClicked
          (SSourceControlProgress *this,FReply *__return_storage_ptr__)

{
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  this->TimeStamp =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

