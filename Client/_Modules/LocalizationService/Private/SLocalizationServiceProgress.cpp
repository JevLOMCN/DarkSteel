// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizationService
// Functions: 6

// Construct @ 146b2e830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SLocalizationServiceProgress::Construct(SLocalizationServiceProgress *this,FArguments *param_1)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  FSharedReferencer<1> FVar9;
  FSharedReferencer<1> FVar10;
  FSharedReferencer<1> FVar11;
  FSharedReferencer<1> FVar12;
  SImage *pSVar13;
  FSharedReferencer<1> FVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  char cVar18;
  byte bVar19;
  bool bVar20;
  FArguments *pFVar21;
  FName *pFVar22;
  ISlateStyle *pIVar23;
  FArguments *pFVar24;
  FSlotArguments *pFVar25;
  FSizeParam *pFVar26;
  FArguments *pFVar27;
  TSharedRef<STextBlock,1> *pTVar28;
  FArguments *pFVar29;
  FSlotArguments *pFVar30;
  FArguments *pFVar31;
  FText *pFVar32;
  TSharedRef<SHorizontalBox,1> *pTVar33;
  FArguments *pFVar34;
  SThrobber *pSVar35;
  SThrobber *pSVar36;
  undefined1 *puVar37;
  FName FVar38;
  undefined8 *puVar39;
  FArguments *pFVar40;
  TSharedRef<SButton,1> *pTVar41;
  FName FVar42;
  TSharedRef<SWidget_const_,1> *pTVar43;
  ulong64 uVar44;
  FSlotArguments *pFVar45;
  FArguments *pFVar46;
  SUniformGridPanel *pSVar47;
  SUniformGridPanel *pSVar48;
  FArguments *pFVar49;
  SVerticalBox *pSVar50;
  SVerticalBox *pSVar51;
  SBox *pSVar52;
  SBox *pSVar53;
  FSlotArguments *pFVar54;
  SLocalizationServiceProgress *pSVar55;
  undefined4 local_res10 [2];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  code *local_39b8;
  undefined8 uStack_39b0;
  T0RequiredArgs local_39a8;
  T0RequiredArgs local_39a7;
  T0RequiredArgs local_39a6;
  T0RequiredArgs local_39a5;
  T0RequiredArgs local_39a4;
  T0RequiredArgs local_39a3;
  T0RequiredArgs local_39a2;
  T0RequiredArgs local_39a1;
  FArguments *local_39a0;
  FArguments *local_3998;
  SLocalizationServiceProgress *local_3990;
  FName local_3988;
  FLLMScope local_3980;
  FLLMScope local_397c;
  FLLMScope local_3978;
  FLLMScope local_3974;
  FLLMScope local_3970;
  FLLMScope local_396c;
  FLLMScope local_3968;
  FLLMScope local_3964;
  FLLMScope local_3960;
  FLLMScope local_395c;
  FLLMScope local_3958 [2];
  undefined4 local_3950;
  undefined1 local_394c;
  undefined1 local_3948 [8];
  ForAnyElementType FStack_3940;
  ulonglong local_3938;
  float local_3930;
  undefined1 local_392c;
  undefined1 local_3928 [8];
  ForAnyElementType FStack_3920;
  ulonglong local_3918;
  FName local_3910;
  STextBlock *local_3908;
  FSharedReferencer<1> local_3900;
  SImage *local_38f8;
  FSharedReferencer<1> local_38f0;
  STextBlock *local_38e8;
  FSharedReferencer<1> local_38e0;
  SHorizontalBox *local_38d8;
  FSharedReferencer<1> local_38d0;
  SThrobber *local_38c8;
  FSharedReferencer<1> local_38c0;
  SButton *local_38b8;
  FSharedReferencer<1> local_38b0;
  TSharedRef<SWidget,1> local_38a8;
  FSlateBrush *local_3898;
  undefined1 local_3890;
  undefined1 local_3888 [8];
  ForAnyElementType FStack_3880;
  ulonglong local_3878;
  FSlateBrush *local_3870;
  undefined1 local_3868;
  undefined1 local_3860 [8];
  ForAnyElementType FStack_3858;
  ulonglong local_3850;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_3848;
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> local_3830;
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> local_3818;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3800;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_37e8;
  float local_37d0;
  undefined1 local_37cc;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> local_37c8;
  undefined8 local_37b0;
  undefined8 uStack_37a8;
  undefined1 local_37a0;
  undefined1 local_3798 [8];
  ForAnyElementType FStack_3790;
  ulonglong local_3788;
  undefined8 local_3780;
  undefined8 uStack_3778;
  undefined1 local_3770;
  undefined1 local_3768 [8];
  ForAnyElementType FStack_3760;
  ulonglong local_3758;
  float local_3750;
  undefined1 local_374c;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3748;
  float local_3730;
  undefined1 local_372c;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3728;
  LARGE_INTEGER local_3710;
  FName local_3708;
  FMemScope local_3700;
  FName local_36f8;
  FMemScope local_36f0;
  FName local_36e8;
  FMemScope local_36e0;
  FName local_36d8;
  FMemScope local_36d0;
  FName local_36c8;
  FMemScope local_36c0;
  FName local_36b8;
  FMemScope local_36b0;
  FMemScope local_36a8;
  FSlotArguments *local_36a0;
  FMemScope local_3698;
  FArguments *local_3690;
  FName local_3688;
  FMemScope local_3680;
  FArguments *local_3678;
  FName local_3670;
  FMemScope local_3668;
  FName local_3660;
  FMemScope local_3658;
  TReferenceControllerBase<1> *local_3650;
  TReferenceControllerBase<1> *local_3648;
  TSharedRef<SWidget,1> local_3640;
  TSharedRef<SWidget,1> local_3630;
  TReferenceControllerBase<1> *local_3620;
  undefined1 local_3618 [8];
  undefined4 local_3610 [2];
  undefined4 local_3608 [2];
  undefined4 local_3600 [2];
  undefined4 local_35f8 [2];
  undefined4 local_35f0 [2];
  undefined4 local_35e8 [2];
  TSharedRef<STextBlock,1> local_35e0;
  FText local_35d0;
  bool local_35c0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> local_35b8;
  undefined8 local_35a0;
  undefined8 uStack_3598;
  undefined1 local_3590;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3588;
  FDestructionSentinel local_3570;
  FDestructionSentinel local_3558;
  FDestructionSentinel local_3540;
  FDestructionSentinel local_3528;
  FDestructionSentinel local_3510;
  FDestructionSentinel local_34f8;
  FDestructionSentinel local_34e0;
  FDelegateAllocation *local_34c8;
  TAttribute<FText> local_34c0;
  TAttribute<FText> local_3490;
  TAttribute<FText> local_3460;
  FSizeParam local_3430;
  FText local_33e8;
  code *local_33d8;
  TReferenceControllerBase<1> *pTStack_33d0;
  FText local_33c8;
  FName local_33b8 [2];
  code *local_33a8;
  undefined4 uStack_33a0;
  uint uStack_339c;
  FName local_3398;
  FName local_3390;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3388;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3370;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3358;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3340;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3328;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3310;
  FName local_32f8 [2];
  code *local_32e8;
  ulonglong uStack_32e0;
  code *local_32d8;
  ulonglong uStack_32d0;
  TSharedRef<SWidget_const_,1> local_32c8;
  SWidget *local_32b8;
  TReferenceControllerBase<1> *pTStack_32b0;
  SWidget *local_32a8;
  TReferenceControllerBase<1> *pTStack_32a0;
  FName local_3298;
  TSharedRef<SHorizontalBox,1> local_3290;
  TSharedRef<SButton,1> local_3280;
  TSharedRef<SButton,1> local_3270;
  FText local_3260;
  TSharedRef<SHorizontalBox,1> local_3250;
  TSharedRef<STextBlock,1> local_3240;
  undefined8 *local_3230 [2];
  TReferenceControllerBase<1> *local_3220;
  undefined8 *local_3208 [2];
  TReferenceControllerBase<1> *local_31f8;
  undefined1 local_31e0 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_31b0;
  undefined1 local_3198 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_3168;
  undefined1 local_3150 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_3120;
  undefined1 local_3108 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_30d8;
  undefined1 local_30c0 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_3090;
  undefined1 local_3078 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_3048;
  FArguments local_3030;
  FArguments local_2c50;
  FArguments local_2910;
  FArguments local_2698;
  FArguments local_2490;
  FArguments local_2288;
  FSlotArguments local_2080;
  FSlotArguments local_1f98;
  FSlotArguments local_1eb0;
  FSlotArguments local_1dc8;
  FSlotArguments local_1ce0;
  FSlotArguments local_1bf8;
  FSlotArguments local_1b10;
  FArguments local_1a28;
  FArguments local_1780;
  FArguments local_1578;
  FArguments local_1038;
  FArguments local_af8;
  FArguments local_5a0;
  undefined8 uStack_48;
  
  uStack_48 = 0x146b2e853;
  local_res10[0] = 0;
  bVar6 = false;
  bVar5 = false;
  bVar20 = false;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnCancelled,&param_1->_OnCancelled);
  this->bCancelClicked = false;
  QueryPerformanceCounter(&local_3710);
  this->TimeStamp =
       (float)((double)local_3710.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000);
  pFVar21 = SBorder::FArguments::FArguments(&local_3030);
  pFVar22 = ::FName::FName(&local_3298,"ChildWindow.Background");
  FVar42 = *pFVar22;
  pIVar23 = FAppStyle::Get();
  local_3898 = (FSlateBrush *)(**(code **)((longlong)*pIVar23 + 0x50))(pIVar23,FVar42);
  local_3890 = 1;
  local_3878 = 0;
  local_3888 = (undefined1  [8])0x0;
  FStack_3880.Data = (FScriptContainerElement *)0x0;
  (pFVar21->_BorderImage).Value = local_3898;
  (pFVar21->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3888);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3888,
             (FWriteAccessScope *)&local_3558);
  if (((int)local_3878 != 0) && (FStack_3880.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3880.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3880,0,0,0x10);
    local_3878 = local_3878 & 0xffffffff00000000;
  }
  if (local_3558.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3558.Accessor,&local_3558);
  }
  if (FStack_3880.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3880.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3888);
  uVar8 = _UNK_15076c248;
  uVar16 = ___xmm_41800000418000004180000041800000;
  local_3770 = 1;
  local_3758 = 0;
  local_3780 = ___xmm_41800000418000004180000041800000;
  uStack_3778 = _UNK_15076c248;
  (pFVar21->_Padding).bIsSet = true;
  uVar15 = ___xmm_41800000418000004180000041800000;
  local_3768 = (undefined1  [8])0x0;
  FStack_3760.Data = (FScriptContainerElement *)0x0;
  ___xmm_41800000418000004180000041800000 = (undefined4)uVar16;
  _UNK_15076c244 = SUB84(uVar16,4);
  uVar7 = _UNK_15076c244;
  (pFVar21->_Padding).Value.Left = (float)___xmm_41800000418000004180000041800000;
  ___xmm_41800000418000004180000041800000 = uVar15;
  uVar16 = _UNK_15076c248;
  (pFVar21->_Padding).Value.Top = (float)uVar7;
  _UNK_15076c248 = (undefined4)uVar8;
  _UNK_15076c24c = SUB84(uVar8,4);
  uVar7 = _UNK_15076c24c;
  (pFVar21->_Padding).Value.Right = (float)_UNK_15076c248;
  _UNK_15076c248 = uVar16;
  (pFVar21->_Padding).Value.Bottom = (float)uVar7;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3768);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3768,
             (FWriteAccessScope *)&local_3540);
  if (((int)local_3758 != 0) && (FStack_3760.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3760.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3760,0,0,0x10);
    local_3758 = local_3758 & 0xffffffff00000000;
  }
  if (local_3540.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3540.Accessor,&local_3540);
  }
  if (FStack_3760.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3760.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3768);
  pFVar21->_VAlign = VAlign_Center;
  pFVar24 = SBox::FArguments::FArguments(&local_2c50);
  local_3950 = 0x43fa0000;
  local_394c = 1;
  local_3948 = (undefined1  [8])0x0;
  FStack_3940.Data = (FScriptContainerElement *)0x0;
  local_3938 = 0;
  (pFVar24->_WidthOverride).Value.Size = 500.0;
  (pFVar24->_WidthOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_WidthOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3948);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3948,
             (FWriteAccessScope *)&local_3528);
  if (((int)local_3938 != 0) && (FStack_3940.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3940.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3940,0,0,0x10);
    local_3938 = local_3938 & 0xffffffff00000000;
  }
  if (local_3528.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3528.Accessor,&local_3528);
  }
  if (FStack_3940.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3940.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3948);
  local_3998 = SVerticalBox::FArguments::FArguments(&local_2288);
  pFVar25 = SVerticalBox::Slot(&local_1b10);
  pFVar26 = (FSizeParam *)FAuto::FAuto((FAuto *)local_31e0);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar25->field_0x58,pFVar26);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_31b0)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_31e0 + 0x10));
  pFVar25 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar25->field_0x18,0.0,__real_41000000);
  pFVar27 = STextBlock::FArguments::FArguments(&local_5a0);
  local_35d0.TextData.Reference = (param_1->_Text).Value.TextData.Reference;
  if (local_35d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_35d0.TextData.Reference + 8))
              (local_35d0.TextData.Reference,local_3618);
  }
  local_35d0.Flags = (param_1->_Text).Value.Flags;
  local_35c0 = (param_1->_Text).bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>(&local_35b8,&(param_1->_Text).Getter);
  FText::operator=(&(pFVar27->_Text).Value,&local_35d0);
  (pFVar27->_Text).bIsSet = local_35c0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_35b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_35b8);
  if (local_35d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_35d0.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_3958,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3708 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3700,&local_3708,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_3310,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\LocalizationService\\Private\\ScopedLocalizationServiceProgress.cpp"
             ,0x3f,(T0RequiredArgs *)local_res10);
  FMemScope::~FMemScope(&local_3700);
  FLLMScope::~FLLMScope(local_3958);
  pTVar28 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3310,&local_35e0,pFVar27);
  local_3908 = pTVar28->Object;
  local_3900.ReferenceController = (pTVar28->SharedReferenceCount).ReferenceController;
  if (local_3900.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3900.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3900.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_3900.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3900.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3648 = local_3900.ReferenceController;
  if ((STextBlock **)&pFVar25->field_0x8 != &local_3908) {
    *(STextBlock **)&pFVar25->field_0x8 = local_3908;
    local_3908 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar25->field_0x10,&local_3900);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3900.ReferenceController);
  local_39a0 = SVerticalBox::FArguments::operator+(local_3998,pFVar25);
  pFVar25 = SVerticalBox::Slot(&local_1bf8);
  pFVar26 = (FSizeParam *)FAuto::FAuto((FAuto *)local_3198);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar25->field_0x58,pFVar26);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3168)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_3198 + 0x10));
  local_3998 = (FArguments *)
               TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar25->field_0x18,0.0,__real_41000000);
  pFVar29 = SHorizontalBox::FArguments::FArguments(&local_2490);
  local_38a8.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       ((ulonglong)local_38a8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  local_38a8.Object = (SWidget *)GetWarningVisibility;
  local_33d8 = GetWarningVisibility;
  pTStack_33d0 = local_38a8.SharedReferenceCount.ReferenceController;
  TAttribute<EVisibility>::Bind<SLocalizationServiceProgress>
            ((TAttribute<EVisibility> *)&pFVar29->_padding_,this,(pmf_aa95d6b1 *)&local_33d8);
  pFVar30 = SHorizontalBox::Slot(&local_1ce0);
  pFVar26 = (FSizeParam *)FAuto::FAuto((FAuto *)local_3150);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar30->field_0x58,pFVar26);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3120)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_3150 + 0x10));
  if (local_3610 != (undefined4 *)&pFVar30->field_0x50) {
    *(undefined4 *)&pFVar30->field_0x50 = 2;
    pFVar30->field_0x54 = 1;
  }
  pFVar54 = (FSlotArguments *)0x0;
  if (pFVar30 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar54 = pFVar30;
  }
  puVar37 = &pFVar54->field_0x48;
  if (local_3608 != (undefined4 *)puVar37) {
    *(undefined4 *)puVar37 = 2;
    pFVar54->field_0x4c = 1;
  }
  pFVar30 = (FSlotArguments *)0x0;
  if (puVar37 != (undefined1 *)0x0) {
    pFVar30 = pFVar54;
  }
  pFVar31 = SImage::FArguments::FArguments(&local_1a28);
  pFVar22 = ::FName::FName(local_32f8,"LocalizationService.ProgressWindow.Warning");
  FVar42 = *pFVar22;
  pIVar23 = FAppStyle::Get();
  local_3870 = (FSlateBrush *)(**(code **)((longlong)*pIVar23 + 0x50))(pIVar23,FVar42);
  local_3868 = 1;
  local_3850 = 0;
  local_3860 = (undefined1  [8])0x0;
  FStack_3858.Data = (FScriptContainerElement *)0x0;
  (pFVar31->_Image).Value = local_3870;
  (pFVar31->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar31->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3860);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3860,
             (FWriteAccessScope *)&local_3510);
  if (((int)local_3850 != 0) && (FStack_3858.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3858.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3858,0,0,0x10);
    local_3850 = local_3850 & 0xffffffff00000000;
  }
  if (local_3510.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3510.Accessor,&local_3510);
  }
  if (FStack_3858.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3858.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3860);
  FLLMScope::FLLMScope(&local_3980,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_36f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_36f0,&local_36f8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_37e8,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\LocalizationService\\Private\\ScopedLocalizationServiceProgress.cpp"
             ,0x4d,local_res18);
  FMemScope::~FMemScope(&local_36f0);
  FLLMScope::~FLLMScope(&local_3980);
  pSVar13 = local_37e8._Widget.Object;
  if ((local_37e8._Widget.Object == (SImage *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_37e8._Widget.Object,(FSlateBaseNamedArgs *)pFVar31);
  SImage::Construct(local_37e8._Widget.Object,pFVar31);
  if ((local_37e8._Widget.Object == (SImage *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((local_37e8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar18 = (**(code **)((local_37e8._Widget.Object)->_padding_ + 0x228))
                       (local_37e8._Widget.Object);
    bVar19 = 0;
    if (cVar18 != '\0') goto LAB_146b2f0e6;
  }
  else {
LAB_146b2f0e6:
    bVar19 = 0x20;
  }
  *(byte *)&(local_37e8._Widget.Object)->_padding_ =
       (byte)(local_37e8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_37e8._Widget.Object)->_padding_ =
       (byte)(local_37e8._Widget.Object)->_padding_ | bVar19;
  if ((local_37e8._Widget.Object == (SImage *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_37e8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_37e8._Widget.Object == (SImage *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar14.ReferenceController = local_37e8._Widget.SharedReferenceCount.ReferenceController;
  local_37e8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_37e8._Widget.Object = (SImage *)0x0;
  if ((pSVar13 == (SImage *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_38f8 = pSVar13;
  local_38f0.ReferenceController = FVar14.ReferenceController;
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
  if ((SImage **)&pFVar30->field_0x8 != &local_38f8) {
    *(SImage **)&pFVar30->field_0x8 = pSVar13;
    local_38f8 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar30->field_0x10,&local_38f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38f0.ReferenceController);
  pFVar29 = SHorizontalBox::FArguments::operator+(pFVar29,pFVar30);
  pFVar30 = SHorizontalBox::Slot(&local_1dc8);
  if (local_3600 != (undefined4 *)&pFVar30->field_0x50) {
    *(undefined4 *)&pFVar30->field_0x50 = 2;
    pFVar30->field_0x54 = 1;
  }
  if (pFVar30 == (FSlotArguments *)0xffffffffffffffb8) {
    pFVar30 = (FSlotArguments *)0x0;
  }
  pFVar26 = (FSizeParam *)FAuto::FAuto((FAuto *)local_3108);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar30->field_0x58,pFVar26);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_30d8)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_3108 + 0x10));
  pFVar27 = STextBlock::FArguments::FArguments(&local_af8);
  pFVar32 = FText::AsLocalizable_Advanced_LocText
                      (&local_33e8,L"LocalizationServiceProgress",L"LongTaskMessage",
                       L"Operation is taking a long time to complete. Click cancel to stop the current operation, you can try again later."
                      );
  FText::FText(&local_34c0.Value,pFVar32);
  local_34c0.bIsSet = true;
  local_34c0.Getter._16_8_ = 0;
  local_34c0.Getter._0_8_ = 0;
  local_34c0.Getter._8_8_ = 0;
  pFVar27 = STextBlock::FArguments::Text(pFVar27,&local_34c0);
  local_392c = 1;
  local_3930 = __real_43e10000;
  local_3918 = 0;
  local_3928 = (undefined1  [8])0x0;
  FStack_3920.Data = (FScriptContainerElement *)0x0;
  (pFVar27->_WrapTextAt).Value = __real_43e10000;
  (pFVar27->_WrapTextAt).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_WrapTextAt).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3928);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3928,
             (FWriteAccessScope *)&local_3570);
  if (((int)local_3918 != 0) && (FStack_3920.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3920.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3920,0,0,0x10);
    local_3918 = local_3918 & 0xffffffff00000000;
  }
  if (local_3570.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3570.Accessor,&local_3570);
  }
  if (FStack_3920.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3920.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3928);
  FLLMScope::FLLMScope(&local_397c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_36e8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_36e0,&local_36e8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_3328,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\LocalizationService\\Private\\ScopedLocalizationServiceProgress.cpp"
             ,0x54,local_res20);
  FMemScope::~FMemScope(&local_36e0);
  FLLMScope::~FLLMScope(&local_397c);
  pTVar28 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3328,&local_3240,pFVar27);
  local_38e8 = pTVar28->Object;
  local_38e0.ReferenceController = (pTVar28->SharedReferenceCount).ReferenceController;
  if (local_38e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_38e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_38e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_38e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3620 = local_38e0.ReferenceController;
  if ((STextBlock **)&pFVar30->field_0x8 != &local_38e8) {
    *(STextBlock **)&pFVar30->field_0x8 = local_38e8;
    local_38e8 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar30->field_0x10,&local_38e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38e0.ReferenceController);
  pFVar29 = SHorizontalBox::FArguments::operator+(pFVar29,pFVar30);
  FLLMScope::FLLMScope(&local_3978,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_36d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_36d0,&local_36d8,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_3340,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\LocalizationService\\Private\\ScopedLocalizationServiceProgress.cpp"
             ,0x46,&local_39a8);
  FMemScope::~FMemScope(&local_36d0);
  FLLMScope::~FLLMScope(&local_3978);
  pTVar33 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3340,&local_3250,pFVar29);
  pFVar49 = local_3998;
  pTVar2 = (pTVar33->SharedReferenceCount).ReferenceController;
  local_38d8 = pTVar33->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38d0.ReferenceController = pTVar2;
  if ((SHorizontalBox **)&local_3998->_padding_ != &local_38d8) {
    local_3998->_padding_ = (longlong)local_38d8;
    local_38d8 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_3998->_padding_,&local_38d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38d0.ReferenceController);
  local_3678 = SVerticalBox::FArguments::operator+(local_39a0,(FSlotArguments *)pFVar49);
  pFVar25 = SVerticalBox::Slot(&local_1eb0);
  pFVar26 = (FSizeParam *)FAuto::FAuto((FAuto *)local_30c0);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar25->field_0x58,pFVar26);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3090)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_30c0 + 0x10));
  uVar15 = _UNK_1513f7888;
  uVar16 = ___xmm_00000000000000004100000000000000;
  local_37a0 = 1;
  local_37b0 = ___xmm_00000000000000004100000000000000;
  uStack_37a8 = _UNK_1513f7888;
  local_3788 = 0;
  local_3798 = (undefined1  [8])0x0;
  FStack_3790.Data = (FScriptContainerElement *)0x0;
  pFVar25->field_0x28 = 1;
  *(undefined8 *)&pFVar25->field_0x18 = uVar16;
  *(undefined8 *)&pFVar25->field_0x20 = uVar15;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar25->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3798);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3798,
             (FWriteAccessScope *)&local_34f8);
  if (((int)local_3788 != 0) && (FStack_3790.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3790.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3790,0,0,0x10);
    local_3788 = local_3788 & 0xffffffff00000000;
  }
  if (local_34f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_34f8.Accessor,&local_34f8);
  }
  if (FStack_3790.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3790.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3798);
  local_3998 = (FArguments *)pFVar25;
  if (&pFVar25->field_0x18 == (undefined1 *)0x0) {
    local_3998 = (FArguments *)0x0;
  }
  local_3990 = (SLocalizationServiceProgress *)SHorizontalBox::FArguments::FArguments(&local_2698);
  pFVar30 = SHorizontalBox::Slot(&local_1f98);
  local_37d0 = __real_3f800000;
  local_3430.Value.Value = __real_3f800000;
  local_37c8._16_8_ = 0;
  local_37cc = 1;
  local_37c8._0_8_ = 0;
  local_37c8._8_8_ = 0;
  local_3430.SizeRule = SizeRule_Stretch;
  local_3430.Value.bIsSet = true;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>(&local_3430.Value.Getter,&local_37c8);
  local_3430.ShrinkValue.Value = local_37d0;
  local_3430.ShrinkValue.bIsSet = (bool)local_37cc;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_3430.ShrinkValue.Getter,&local_37c8);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar30->field_0x58,&local_3430);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3430.ShrinkValue.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3430.Value.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_37c8);
  if (local_35f8 != (undefined4 *)&pFVar30->field_0x50) {
    *(undefined4 *)&pFVar30->field_0x50 = 2;
    pFVar30->field_0x54 = 1;
  }
  pFVar54 = (FSlotArguments *)0x0;
  if (pFVar30 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar54 = pFVar30;
  }
  puVar37 = &pFVar54->field_0x48;
  if (local_35f0 != (undefined4 *)puVar37) {
    *(undefined4 *)puVar37 = 1;
    pFVar54->field_0x4c = 1;
  }
  local_39a0 = (FArguments *)(FSlotArguments *)0x0;
  if (puVar37 != (undefined1 *)0x0) {
    local_39a0 = (FArguments *)pFVar54;
  }
  pFVar34 = SThrobber::FArguments::FArguments(&local_1780);
  FLLMScope::FLLMScope(&local_3974,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_36c8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_36c0,&local_36c8,true);
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>
            (&local_3830,"SThrobber",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\LocalizationService\\Private\\ScopedLocalizationServiceProgress.cpp"
             ,99,&local_39a7);
  FMemScope::~FMemScope(&local_36c0);
  FLLMScope::~FLLMScope(&local_3974);
  pSVar35 = TSharedPtr<SThrobber,1>::operator->(&local_3830._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar35,(FSlateBaseNamedArgs *)pFVar34);
  pSVar35 = local_3830._Widget.Object;
  SThrobber::Construct(local_3830._Widget.Object,pFVar34);
  pSVar36 = TSharedPtr<SThrobber,1>::operator->(&local_3830._Widget);
  if ((pSVar36->_padding_ & 0x10) == 0) {
    cVar18 = (**(code **)(pSVar36->_padding_ + 0x228))(pSVar36);
    bVar19 = 0;
    if (cVar18 != '\0') goto LAB_146b2f8c4;
  }
  else {
LAB_146b2f8c4:
    bVar19 = 0x20;
  }
  *(byte *)&pSVar36->_padding_ = (byte)pSVar36->_padding_ & 0xdf;
  *(byte *)&pSVar36->_padding_ = (byte)pSVar36->_padding_ | bVar19;
  pSVar36 = TSharedPtr<SThrobber,1>::operator->(&local_3830._Widget);
  pbVar1 = (byte *)((longlong)&pSVar36->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_3830._Widget.Object == (SThrobber *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar10.ReferenceController = local_3830._Widget.SharedReferenceCount.ReferenceController;
  local_3830._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3830._Widget.Object = (SThrobber *)0x0;
  if ((pSVar35 == (SThrobber *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar49 = local_39a0;
  local_38c8 = pSVar35;
  local_38c0.ReferenceController = FVar10.ReferenceController;
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SThrobber **)&local_39a0->_padding_ != &local_38c8) {
    local_39a0->_padding_ = (longlong)pSVar35;
    local_38c8 = (SThrobber *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_39a0->_padding_,&local_38c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38c0.ReferenceController);
  local_3690 = SHorizontalBox::FArguments::operator+
                         ((FArguments *)local_3990,(FSlotArguments *)pFVar49);
  pFVar30 = SHorizontalBox::Slot(&local_2080);
  puVar37 = &pFVar30->field_0x48;
  if (local_35e8 != (undefined4 *)puVar37) {
    *(undefined4 *)puVar37 = 3;
    pFVar30->field_0x4c = 1;
  }
  if (puVar37 == (undefined1 *)0x0) {
    pFVar30 = (FSlotArguments *)0x0;
  }
  local_39a0 = (FArguments *)pFVar30;
  pFVar26 = (FSizeParam *)FAuto::FAuto((FAuto *)local_3078);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar30->field_0x58,pFVar26);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3048)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_3078 + 0x10));
  FVar38 = (FName)SUniformGridPanel::FArguments::FArguments(&local_2910);
  local_3988 = FVar38;
  pFVar22 = ::FName::FName(&local_3398,"StandardDialog.SlotPadding");
  FVar42 = *pFVar22;
  pIVar23 = FAppStyle::Get();
  puVar39 = (undefined8 *)
            (**(code **)((longlong)*pIVar23 + 0x48))
                      (pIVar23,FVar42,0,&FStyleDefaults::DefaultMargin,0);
  local_35a0 = *puVar39;
  uStack_3598 = puVar39[1];
  local_3590 = 1;
  local_3588._16_8_ = 0;
  local_3588._0_8_ = 0;
  local_3588._8_8_ = 0;
  (((TAttribute<FMargin> *)((longlong)FVar38 + 0x208))->Value).Left = (float)(int)local_35a0;
  (((TAttribute<FMargin> *)((longlong)FVar38 + 0x208))->Value).Top =
       (float)(int)((ulonglong)local_35a0 >> 0x20);
  *(undefined8 *)((longlong)FVar38 + 0x210) = uStack_3598;
  *(bool *)((longlong)FVar38 + 0x218) = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar38 + 0x220),&local_3588);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3588)
  ;
  pFVar22 = ::FName::FName(local_33b8,"StandardDialog.MinDesiredSlotWidth");
  FVar42 = *pFVar22;
  pIVar23 = FAppStyle::Get();
  local_3730 = (float)(**(code **)((longlong)*pIVar23 + 0x28))
                                (pIVar23,FVar42,0,FStyleDefaults::DefaultFloat,0);
  local_372c = 1;
  local_3728._16_8_ = 0;
  local_3728._0_8_ = 0;
  local_3728._8_8_ = 0;
  ((TAttribute<float> *)((longlong)FVar38 + 0x238))->Value = local_3730;
  *(bool *)((longlong)FVar38 + 0x23c) = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar38 + 0x240),&local_3728);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3728)
  ;
  pFVar22 = ::FName::FName(&local_3390,"StandardDialog.MinDesiredSlotHeight");
  FVar42 = *pFVar22;
  pIVar23 = FAppStyle::Get();
  local_3750 = (float)(**(code **)((longlong)*pIVar23 + 0x28))
                                (pIVar23,FVar42,0,FStyleDefaults::DefaultFloat,0);
  local_374c = 1;
  local_3748._16_8_ = 0;
  local_3748._0_8_ = 0;
  local_3748._8_8_ = 0;
  ((TAttribute<float> *)((longlong)FVar38 + 600))->Value = local_3750;
  *(bool *)((longlong)FVar38 + 0x25c) = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar38 + 0x260),&local_3748);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3748)
  ;
  local_3990 = (SLocalizationServiceProgress *)
               SUniformGridPanel::Slot((FSlotArguments *)local_3208,0,0);
  pFVar40 = SButton::FArguments::FArguments(&local_1038);
  pFVar40->_HAlign = HAlign_Center;
  pFVar32 = FText::AsLocalizable_Advanced_LocText
                      (&local_3260,L"LocalizationServiceProgress",L"ContinueButtonLabel",L"Continue"
                      );
  FText::FText(&local_3490.Value,pFVar32);
  local_3490.bIsSet = true;
  local_3490.Getter._16_8_ = 0;
  local_3490.Getter._0_8_ = 0;
  local_3490.Getter._8_8_ = 0;
  pFVar40 = SButton::FArguments::Text(pFVar40,&local_3490);
  uStack_39b0._0_4_ = 0;
  local_39b8 = OnContinueClicked;
  local_33a8 = OnContinueClicked;
  uStack_33a0 = 0;
  uStack_339c = uStack_39b0._4_4_;
  TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<SLocalizationServiceProgress>
            ((TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar40->_OnClicked,this,(pmf_5c183f6a *)&local_33a8);
  uStack_39b0 = (ulonglong)uStack_39b0._4_4_ << 0x20;
  local_39b8 = GetWarningVisibility;
  local_32e8 = GetWarningVisibility;
  uStack_32e0 = uStack_39b0;
  TAttribute<EVisibility>::Bind<SLocalizationServiceProgress>
            ((TAttribute<EVisibility> *)&pFVar40->_padding_,this,(pmf_aa95d6b1 *)&local_32e8);
  FLLMScope::FLLMScope(&local_3970,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_36b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_36b0,&local_36b8,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_3358,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\LocalizationService\\Private\\ScopedLocalizationServiceProgress.cpp"
             ,0x70,&local_39a6);
  FMemScope::~FMemScope(&local_36b0);
  FLLMScope::~FLLMScope(&local_3970);
  pTVar41 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3358,&local_3270,pFVar40);
  pSVar55 = local_3990;
  local_38b8 = pTVar41->Object;
  local_38b0.ReferenceController = (pTVar41->SharedReferenceCount).ReferenceController;
  if (local_38b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_38b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_38b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_38b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3650 = local_38b0.ReferenceController;
  if ((SButton **)&local_3990->_padding_ != &local_38b8) {
    local_3990->_padding_ = (longlong)local_38b8;
    local_38b8 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_3990->_padding_,&local_38b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38b0.ReferenceController);
  local_3910 = (FName)SUniformGridPanel::FArguments::operator+
                                ((FArguments *)local_3988,(FSlotArguments *)pSVar55);
  local_36a0 = SUniformGridPanel::Slot((FSlotArguments *)local_3230,1,0);
  pFVar40 = SButton::FArguments::FArguments(&local_1578);
  pFVar40->_HAlign = HAlign_Center;
  pFVar32 = FText::AsLocalizable_Advanced_LocText
                      (&local_33c8,L"LocalizationServiceProgress",L"CancelButtonLabel",L"Cancel");
  FText::FText(&local_3460.Value,pFVar32);
  local_3460.bIsSet = true;
  local_3460.Getter._16_8_ = 0;
  local_3460.Getter._0_8_ = 0;
  local_3460.Getter._8_8_ = 0;
  FVar42 = (FName)SButton::FArguments::Text(pFVar40,&local_3460);
  uStack_39b0 = uStack_39b0 & 0xffffffff00000000;
  local_39b8 = OnCancelClicked;
  local_32d8 = OnCancelClicked;
  uStack_32d0 = uStack_39b0;
  local_3988 = FVar42;
  TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<SLocalizationServiceProgress>
            ((TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy> *)
             ((longlong)FVar42 + 0x2e0),this,(pmf_5c183f6a *)&local_32d8);
  *(undefined1 *)((longlong)FVar42 + 0xa9) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar42 + 0xb0),
             (FWriteAccessScope *)&local_34e0);
  local_34c8 = (FDelegateAllocation *)((longlong)FVar42 + 0xb8);
  puVar39 = UE::Core::Private::DelegateAllocate(0x38,local_34c8);
  pSVar55 = this;
  if (puVar39 != (undefined8 *)0x0) {
    local_39b8 = IsCancelEnabled;
    uStack_39b0 = (ulonglong)local_35e0.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar43 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_32c8);
    pSVar55 = (SLocalizationServiceProgress *)(pTVar43->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar43->Object;
    if (pSVar55 != (SLocalizationServiceProgress *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar55->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar55->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar55->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar55->_padding_ + 1);
      UNLOCK();
    }
    *puVar39 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    local_3990 = pSVar55;
    uVar44 = FDelegateHandle::GenerateNewID();
    puVar39[2] = uVar44;
    *puVar39 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSLocalizationServiceProgress___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar39[3] = pSVar3;
    puVar39[4] = pSVar55;
    if (pSVar55 != (SLocalizationServiceProgress *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar55->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar55->_padding_)[1] + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar20 = true;
    puVar39[5] = local_39b8;
    puVar39[6] = uStack_39b0;
    pSVar55 = local_3990;
  }
  if (bVar20) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar55);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar55);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_32c8.SharedReferenceCount.ReferenceController);
  }
  if (local_34e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_34e0.Accessor,&local_34e0);
  }
  FVar42 = local_3988;
  uStack_39b0 = uStack_39b0 & 0xffffffff00000000;
  local_39b8 = GetCancelVisibility;
  TAttribute<EVisibility>::Bind<SLocalizationServiceProgress>
            ((TAttribute<EVisibility> *)((longlong)local_3988 + 0x88),this,
             (pmf_aa95d6b1 *)&local_39b8);
  FLLMScope::FLLMScope(&local_396c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3988 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_36a8,&local_3988,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_3370,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\LocalizationService\\Private\\ScopedLocalizationServiceProgress.cpp"
             ,0x78,&local_39a5);
  FMemScope::~FMemScope(&local_36a8);
  FLLMScope::~FLLMScope(&local_396c);
  pTVar41 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3370,&local_3280,(FArguments *)FVar42);
  local_38a8.Object = (SWidget *)pTVar41->Object;
  local_38a8.SharedReferenceCount.ReferenceController =
       (pTVar41->SharedReferenceCount).ReferenceController;
  if (local_38a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar45 = TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_36a0,&local_38a8);
  pFVar46 = SUniformGridPanel::FArguments::operator+((FArguments *)local_3910,pFVar45);
  FLLMScope::FLLMScope(&local_3968,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3910 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3698,&local_3910,true);
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>
            (&local_3818,"SUniformGridPanel",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\LocalizationService\\Private\\ScopedLocalizationServiceProgress.cpp"
             ,0x6a,&local_39a4);
  FMemScope::~FMemScope(&local_3698);
  FLLMScope::~FLLMScope(&local_3968);
  pSVar47 = TSharedPtr<SUniformGridPanel,1>::operator->(&local_3818._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar47,(FSlateBaseNamedArgs *)pFVar46);
  pSVar47 = local_3818._Widget.Object;
  SUniformGridPanel::Construct(local_3818._Widget.Object,pFVar46);
  pSVar48 = TSharedPtr<SUniformGridPanel,1>::operator->(&local_3818._Widget);
  if ((pSVar48->_padding_ & 0x10) == 0) {
    cVar18 = (**(code **)(pSVar48->_padding_ + 0x228))(pSVar48);
    bVar19 = 0;
    if (cVar18 == '\0') goto LAB_146b301bd;
  }
  bVar19 = 0x20;
LAB_146b301bd:
  *(byte *)&pSVar48->_padding_ = (byte)pSVar48->_padding_ & 0xdf;
  *(byte *)&pSVar48->_padding_ = (byte)pSVar48->_padding_ | bVar19;
  pSVar48 = TSharedPtr<SUniformGridPanel,1>::operator->(&local_3818._Widget);
  pbVar1 = (byte *)((longlong)&pSVar48->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_3818._Widget.Object == (SUniformGridPanel *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar20)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar11.ReferenceController = local_3818._Widget.SharedReferenceCount.ReferenceController;
  local_3818._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3818._Widget.Object = (SUniformGridPanel *)0x0;
  if ((pSVar47 == (SUniformGridPanel *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar20)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_3630.Object = (SWidget *)pSVar47;
  local_3630.SharedReferenceCount.ReferenceController = FVar11.ReferenceController;
  if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar11.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar30 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_39a0,&local_3630);
  pFVar29 = SHorizontalBox::FArguments::operator+(local_3690,pFVar30);
  FLLMScope::FLLMScope(&local_3964,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3688 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3680,&local_3688,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_3388,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\LocalizationService\\Private\\ScopedLocalizationServiceProgress.cpp"
             ,0x5d,&local_39a3);
  FMemScope::~FMemScope(&local_3680);
  FLLMScope::~FLLMScope(&local_3964);
  pTVar33 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3388,&local_3290,pFVar29);
  local_3640.Object = (SWidget *)pTVar33->Object;
  local_3640.SharedReferenceCount.ReferenceController =
       (pTVar33->SharedReferenceCount).ReferenceController;
  if (local_3640.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3640.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3640.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar25 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_3998,&local_3640);
  pFVar49 = SVerticalBox::FArguments::operator+(local_3678,pFVar25);
  FLLMScope::FLLMScope(&local_3960,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3670 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3668,&local_3670,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_3800,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\LocalizationService\\Private\\ScopedLocalizationServiceProgress.cpp"
             ,0x3a,&local_39a2);
  FMemScope::~FMemScope(&local_3668);
  FLLMScope::~FLLMScope(&local_3960);
  pSVar50 = TSharedPtr<SVerticalBox,1>::operator->(&local_3800._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar50,(FSlateBaseNamedArgs *)pFVar49);
  pSVar50 = local_3800._Widget.Object;
  SVerticalBox::Construct(local_3800._Widget.Object,pFVar49);
  pSVar51 = TSharedPtr<SVerticalBox,1>::operator->(&local_3800._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar51);
  pSVar51 = TSharedPtr<SVerticalBox,1>::operator->(&local_3800._Widget);
  pSVar51->field_0x31 = pSVar51->field_0x31 | 4;
  if ((local_3800._Widget.Object == (SVerticalBox *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar20)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar12.ReferenceController = local_3800._Widget.SharedReferenceCount.ReferenceController;
  local_3800._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3800._Widget.Object = (SVerticalBox *)0x0;
  if ((pSVar50 == (SVerticalBox *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar20)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_32b8 = (pFVar24->_Content).Widget.Object;
  pTStack_32b0 = (pFVar24->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar24->_Content).Widget.Object = (SWidget *)pSVar50;
  (pFVar24->_Content).Widget.SharedReferenceCount.ReferenceController = FVar12.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_32b0);
  FLLMScope::FLLMScope(&local_395c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3660 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3658,&local_3660,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_3848,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\LocalizationService\\Private\\ScopedLocalizationServiceProgress.cpp"
             ,0x37,&local_39a1);
  FMemScope::~FMemScope(&local_3658);
  FLLMScope::~FLLMScope(&local_395c);
  pSVar52 = TSharedPtr<SBox,1>::operator->(&local_3848._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar52,(FSlateBaseNamedArgs *)pFVar24);
  pSVar52 = local_3848._Widget.Object;
  SBox::Construct(local_3848._Widget.Object,pFVar24);
  pSVar53 = TSharedPtr<SBox,1>::operator->(&local_3848._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar53);
  pSVar53 = TSharedPtr<SBox,1>::operator->(&local_3848._Widget);
  pbVar1 = (byte *)((longlong)&pSVar53->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_3848._Widget.Object == (SBox *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar20)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar9.ReferenceController = local_3848._Widget.SharedReferenceCount.ReferenceController;
  local_3848._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3848._Widget.Object = (SBox *)0x0;
  if ((pSVar52 == (SBox *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar20)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_32a8 = (pFVar21->_Content).Widget.Object;
  pTStack_32a0 = (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar21->_Content).Widget.Object = (SWidget *)pSVar52;
  (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController = FVar9.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_32a0);
  SBorder::Construct((SBorder *)this,pFVar21);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3848._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3800._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3640.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3290.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3388._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3630.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3818._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3280.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3370._Widget.SharedReferenceCount.ReferenceController);
  if (local_33c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_33c8.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_1578);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3220);
  if (local_3230[0] != (undefined8 *)0x0) {
    (**(code **)*local_3230[0])(local_3230[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3650);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3270.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3358._Widget.SharedReferenceCount.ReferenceController);
  if (local_3260.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3260.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_1038);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_31f8);
  if (local_3208[0] != (undefined8 *)0x0) {
    (**(code **)*local_3208[0])(local_3208[0],1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2910._MinDesiredSlotHeight.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2910._MinDesiredSlotWidth.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2910._SlotPadding.Getter);
  DestructItems<SUniformGridPanel::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2910._Slots.AllocatorInstance.Data,local_2910._Slots.ArrayNum);
  if ((FSlotArguments *)local_2910._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2910._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2910);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2080);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3830._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1780);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_1f98);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2698._Slots.AllocatorInstance.Data,local_2698._Slots.ArrayNum);
  if ((FSlotArguments *)local_2698._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2698._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2698);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_1eb0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3250.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3340._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3620);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3240.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3328._Widget.SharedReferenceCount.ReferenceController);
  if (local_33e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_33e8.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_af8);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_1dc8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37e8._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1a28._OnMouseButtonDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1a28._DesiredSizeOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1a28._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1a28._Image.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1a28);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_1ce0);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2490._Slots.AllocatorInstance.Data,local_2490._Slots.ArrayNum);
  if ((FSlotArguments *)local_2490._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2490._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2490);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_1bf8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3648);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_35e0.SharedReferenceCount.ReferenceController._4_4_,
                      local_35e0.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3310._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5a0);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_1b10);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2288._Slots.AllocatorInstance.Data,local_2288._Slots.ArrayNum);
  if ((FSlotArguments *)local_2288._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_2288._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2288);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2c50._MaxAspectRatio.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2c50._MinAspectRatio.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2c50._MaxDesiredHeight.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2c50._MaxDesiredWidth.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2c50._MinDesiredHeight.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2c50._MinDesiredWidth.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2c50._HeightOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2c50._WidthOverride.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c50._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2c50._Padding.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2c50);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3030._ShowEffectWhenDisabled.Getter
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3030._ForegroundColor.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3030._BorderBackgroundColor.Getter)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3030._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3030._DesiredSizeScale.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3030._ContentScale.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3030._BorderImage.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3030._OnMouseDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3030._OnMouseMove);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3030._OnMouseButtonUp);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3030._OnMouseButtonDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3030._Padding.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3030._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3030);
  return;
}

// GetCancelVisibility @ 146b31950

EVisibility __thiscall
SLocalizationServiceProgress::GetCancelVisibility(SLocalizationServiceProgress *this)

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
      goto LAB_146b31993;
    }
  }
  bVar2 = false;
LAB_146b31993:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  EVar4 = EVisibility::Collapsed;
  if (bVar2) {
    EVar4 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar4.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetWarningVisibility @ 146b322b0

EVisibility __thiscall
SLocalizationServiceProgress::GetWarningVisibility(SLocalizationServiceProgress *this)

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
    if ((double)LocalizationServiceConstants::OperationTimeOut <
        ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) - (double)this->TimeStamp) {
      EVar3 = EVisibility::Visible;
    }
  }
  *in_RDX = (uchar)EVar3.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// IsCancelEnabled @ 146b32840

bool __thiscall SLocalizationServiceProgress::IsCancelEnabled(SLocalizationServiceProgress *this)

{
  return this->bCancelClicked == false;
}

// OnCancelClicked @ 146b32fe0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SLocalizationServiceProgress::OnCancelClicked
          (SLocalizationServiceProgress *this,FReply *__return_storage_ptr__)

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

// OnContinueClicked @ 146b33050

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SLocalizationServiceProgress::OnContinueClicked
          (SLocalizationServiceProgress *this,FReply *__return_storage_ptr__)

{
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  this->TimeStamp =
       (float)((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

