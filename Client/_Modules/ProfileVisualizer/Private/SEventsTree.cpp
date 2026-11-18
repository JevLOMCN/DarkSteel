// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 29

// ~SEventsTree @ 148d58930

void __thiscall SEventsTree::~SEventsTree(SEventsTree *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->FilterText).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEventSelectionChangedDelegate);
  pvVar2 = *(void **)&(this->OnEventSelectionChangedDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEventSelectionChangedDelegate);
  *(undefined4 *)&(this->ViewToEventsMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ViewToEventsMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ViewToEventsMap);
  DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
            ((TSharedPtr<FVisualizerEvent,1> *)(this->SelectedEventsView).AllocatorInstance.Data,
             (this->SelectedEventsView).ArrayNum);
  pFVar1 = (this->SelectedEventsView).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
            ((TSharedPtr<FVisualizerEvent,1> *)(this->SelectedEvents).AllocatorInstance.Data,
             (this->SelectedEvents).ArrayNum);
  pFVar1 = (this->SelectedEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectedThread).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ProfileData).SharedReferenceCount.ReferenceController);
  TSharedPtr<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedPtr<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>(&this->EventsListView);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// CheckDurationUnits @ 148d5d8d0

bool __thiscall SEventsTree::CheckDurationUnits(SEventsTree *this,uchar param_1)

{
  return param_1 == this->DurationUnits;
}

// CheckViewMode @ 148d5d8f0

bool __thiscall SEventsTree::CheckViewMode(SEventsTree *this,uchar param_1)

{
  return this->ViewMode == param_1;
}

// Construct @ 148d62de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000148d65088) */
/* WARNING: Removing unreachable block (ram,0x000148d64bb0) */
/* WARNING: Removing unreachable block (ram,0x000148d646c6) */
/* WARNING: Removing unreachable block (ram,0x000148d641eb) */
/* WARNING: Removing unreachable block (ram,0x000148d63cb1) */
/* WARNING: Removing unreachable block (ram,0x000148d637dc) */
/* WARNING: Removing unreachable block (ram,0x000148d632f2) */
/* WARNING: Removing unreachable block (ram,0x000148d62ec0) */
/* WARNING: Removing unreachable block (ram,0x000148d631cd) */
/* WARNING: Removing unreachable block (ram,0x000148d636b7) */
/* WARNING: Removing unreachable block (ram,0x000148d63b9e) */
/* WARNING: Removing unreachable block (ram,0x000148d63ef0) */
/* WARNING: Removing unreachable block (ram,0x000148d64301) */
/* WARNING: Removing unreachable block (ram,0x000148d647eb) */
/* WARNING: Removing unreachable block (ram,0x000148d64cd2) */
/* WARNING: Removing unreachable block (ram,0x000148d651ad) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SEventsTree::Construct(SEventsTree *this,FArguments *param_1)

{
  TSharedPtr<FVisualizerEvent,1> *pTVar1;
  FText *pFVar2;
  FSlotArguments *pFVar3;
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SSearchBox,1> *pTVar4;
  FSlotArguments *pFVar5;
  TDelegate<EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SHeaderRow,1> *pTVar7;
  TSlateDecl<STreeView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> *pTVar8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SHorizontalBox,1> *pTVar9;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SVerticalBox,1> *pTVar10;
  longlong lVar11;
  undefined1 *puVar12;
  code **ppcVar13;
  pmf_7422e744 *ppVar14;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar15;
  pmf_eaa9086c *ppVar16;
  pmf_5d6d12bc *ppVar17;
  pmf_e285a096 *ppVar18;
  pmf_141d3f0a *ppVar19;
  pmf_7c10923e *ppVar20;
  pmf_1b9035a8 *ppVar21;
  pmf_55a27154 *ppVar22;
  pmf_21ae81a6 *ppVar23;
  pmf_f90f6e6c *ppVar24;
  T0RequiredArgs local_3b68;
  T0RequiredArgs local_3b67;
  T0RequiredArgs local_3b66;
  T0RequiredArgs local_3b65;
  T0RequiredArgs local_3b64;
  undefined1 local_3b63;
  FName *local_3b60;
  FName *local_3b58;
  FName *local_3b50;
  FName *local_3b48;
  FName *local_3b40;
  FName *local_3b38;
  FName *local_3b30;
  FName *local_3b28;
  FName *local_3b20;
  FName *local_3b18;
  FName *local_3b10;
  FName *local_3b08;
  FName *local_3b00;
  FName *local_3af8;
  FName *local_3af0;
  FName *local_3ae8;
  uint local_3ae0;
  uint local_3ad8;
  uint local_3ad0;
  uint local_3ac8;
  uint local_3ac0;
  uint local_3ab8;
  uint local_3ab0;
  uint local_3aa8;
  uint local_3aa0;
  uint local_3a98;
  uint local_3a94;
  uint local_3a90;
  uint local_3a88;
  uint local_3a80;
  uint local_3a78;
  uint local_3a70;
  int local_3a68 [4];
  uint local_3a58;
  float local_3a50;
  uint local_3a4c;
  uint local_3a48;
  uint local_3a40;
  uint local_3a38;
  uint local_3a30;
  uint local_3a28;
  uint local_3a20;
  uint local_3a18;
  float local_3a10;
  uint local_3a0c;
  uint local_3a08;
  uint local_3a00;
  uint local_39f8;
  uint local_39f0;
  uint local_39e8;
  uint local_39e0;
  FNameEntryId *local_39d8;
  FNameEntryId *local_39d0;
  FNameEntryId *local_39c8;
  FNameEntryId *local_39c0;
  FNameEntryId *local_39b8;
  FNameEntryId *local_39b0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_39a8;
  FNameEntryId *local_39a0;
  FNameEntryId *local_3998;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3990;
  FNameEntryId *local_3988;
  FNameEntryId *local_3980;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3978;
  FNameEntryId *local_3970;
  FNameEntryId *local_3968;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3960;
  FNameEntryId *local_3958;
  FNameEntryId *local_3950;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3948;
  FNameEntryId *local_3940;
  FNameEntryId *local_3938;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3930;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3928;
  undefined4 local_3920;
  undefined4 local_391c;
  FNameEntryId local_3918 [2];
  FNameEntryId local_3910 [2];
  FNameEntryId local_3908 [2];
  FNameEntryId local_3900 [2];
  FNameEntryId local_38f8 [2];
  FNameEntryId local_38f0 [2];
  FNameEntryId local_38e8 [2];
  FNameEntryId local_38e0 [2];
  FNameEntryId local_38d8 [2];
  FNameEntryId local_38d0 [2];
  FNameEntryId local_38c8 [2];
  FNameEntryId local_38c0 [2];
  FNameEntryId local_38b8 [2];
  FNameEntryId local_38b0 [2];
  FNameEntryId local_38a8 [2];
  FNameEntryId local_38a0 [2];
  FNameEntryId *local_3898;
  FName *local_3890;
  FName local_3888;
  FName local_3880;
  TSharedPtr<FExtender,1> *local_3878;
  TSharedPtr<FUICommandList_const_,1> *local_3870;
  FName local_3868;
  ISlateStyle *local_3860;
  TSharedPtr<FExtender,1> *local_3858;
  TSharedPtr<FUICommandList_const_,1> *local_3850;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3848;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_3840;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3838;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3830;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_3828;
  FNameEntryId *local_3820;
  FName *local_3818;
  FName local_3810;
  FName local_3808;
  FName local_3800;
  FName local_37f8;
  FName local_37f0;
  FNameEntryId *local_37e8;
  FName *local_37e0;
  FName local_37d8;
  FName local_37d0;
  FName local_37c8;
  FName local_37c0;
  FName local_37b8;
  TAttribute<EVisibility> *local_37b0;
  TAttribute<FText> *local_37a8;
  FName local_37a0;
  FName local_3798;
  FSlateIcon *local_3790;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3788;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_3780;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3778;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3770;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_3768;
  FNameEntryId *local_3760;
  FName *local_3758;
  FName local_3750;
  FName local_3748;
  FName local_3740;
  FName local_3738;
  FName local_3730;
  FNameEntryId *local_3728;
  FName *local_3720;
  FName local_3718;
  FName local_3710;
  FName local_3708;
  FName local_3700;
  FName local_36f8;
  TAttribute<EVisibility> *local_36f0;
  TAttribute<FText> *local_36e8;
  FName local_36e0;
  FName local_36d8;
  FSlateIcon *local_36d0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_36c8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_36c0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_36b8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_36b0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_36a8;
  FNameEntryId *local_36a0;
  FName *local_3698;
  FName local_3690;
  FName local_3688;
  FName local_3680;
  FName local_3678;
  FName local_3670;
  FNameEntryId *local_3668;
  FName *local_3660;
  FName local_3658;
  FName local_3650;
  FName local_3648;
  FName local_3640;
  FName local_3638;
  TAttribute<EVisibility> *local_3630;
  TAttribute<FText> *local_3628;
  FName local_3620;
  FName local_3618;
  FSlateIcon *local_3610;
  FNameEntryId *local_3608;
  FName *local_3600;
  FName local_35f8;
  FName local_35f0;
  TSharedPtr<FExtender,1> *local_35e8;
  TSharedPtr<FUICommandList_const_,1> *local_35e0;
  FName local_35d8;
  ISlateStyle *local_35d0;
  TSharedPtr<FExtender,1> *local_35c8;
  TSharedPtr<FUICommandList_const_,1> *local_35c0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_35b8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_35b0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_35a8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_35a0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_3598;
  FNameEntryId *local_3590;
  FName *local_3588;
  FName local_3580;
  FName local_3578;
  FName local_3570;
  FName local_3568;
  FName local_3560;
  FNameEntryId *local_3558;
  FName *local_3550;
  FName local_3548;
  FName local_3540;
  FName local_3538;
  FName local_3530;
  FName local_3528;
  TAttribute<EVisibility> *local_3520;
  TAttribute<FText> *local_3518;
  FName local_3510;
  FName local_3508;
  FSlateIcon *local_3500;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_34f8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_34f0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_34e8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_34e0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_34d8;
  FNameEntryId *local_34d0;
  FName *local_34c8;
  FName local_34c0;
  FName local_34b8;
  FName local_34b0;
  FName local_34a8;
  FName local_34a0;
  FNameEntryId *local_3498;
  FName *local_3490;
  FName local_3488;
  FName local_3480;
  FName local_3478;
  FName local_3470;
  FName local_3468;
  TAttribute<EVisibility> *local_3460;
  TAttribute<FText> *local_3458;
  FName local_3450;
  FName local_3448;
  FSlateIcon *local_3440;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3438;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_3430;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3428;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3420;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_3418;
  FNameEntryId *local_3410;
  FName *local_3408;
  FName local_3400;
  FName local_33f8;
  FName local_33f0;
  FName local_33e8;
  FName local_33e0;
  FNameEntryId *local_33d8;
  FName *local_33d0;
  FName local_33c8;
  FName local_33c0;
  FName local_33b8;
  FName local_33b0;
  FName local_33a8;
  TAttribute<EVisibility> *local_33a0;
  TAttribute<FText> *local_3398;
  FName local_3390;
  FName local_3388;
  FSlateIcon *local_3380;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3378;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_3370;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3368;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_3360;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_3358;
  FNameEntryId *local_3350;
  FName *local_3348;
  FName local_3340;
  FName local_3338;
  FName local_3330;
  FName local_3328;
  FName local_3320;
  FNameEntryId *local_3318;
  FName *local_3310;
  FName local_3308;
  FName local_3300;
  FName local_32f8;
  FName local_32f0;
  FName local_32e8;
  TAttribute<EVisibility> *local_32e0;
  TAttribute<FText> *local_32d8;
  FName local_32d0;
  FName local_32c8;
  FSlateIcon *local_32c0;
  undefined1 *local_32b8;
  TAttribute<FText> *local_32b0;
  TAttribute<FText> *local_32a8;
  FArguments *local_32a0;
  FArguments *local_3298;
  FArguments *local_3290;
  FArguments *local_3288;
  FSlotArguments *local_3280;
  FSlotArguments *local_3278;
  FArguments *local_3270;
  undefined1 *local_3268;
  TAttribute<float> *local_3260;
  TAttribute<float> *local_3258;
  FSlotArguments *local_3250;
  undefined1 *local_3248;
  undefined1 *local_3240;
  TAttribute<float> *local_3238;
  TAttribute<float> *local_3230;
  FSlotArguments *local_3228;
  undefined1 *local_3220;
  FArguments *local_3218;
  FArguments *local_3210;
  FArguments *local_3208;
  undefined1 *local_3200;
  TAttribute<ESelectionMode::Type> *local_31f8;
  FArguments *local_31f0;
  FArguments *local_31e8;
  TAttribute<FText> *local_31e0;
  TAttribute<FText> *local_31d8;
  FArguments *local_31d0;
  TAttribute<EColumnSortMode::Type> *local_31c8;
  TAttribute<EColumnSortMode::Type> *local_31c0;
  FArguments *local_31b8;
  TDelegate<void___cdecl(EColumnSortPriority::Type,FName_const_&,EColumnSortMode::Type),FDefaultDelegateUserPolicy>
  *local_31b0;
  FArguments *local_31a8;
  TAttribute<float> *local_31a0;
  TAttribute<float> *local_3198;
  FArguments *local_3190;
  FArguments *local_3188;
  TSharedRef<SWidget,1> *local_3180;
  NamedSlotProperty<SHeaderRow::FColumn::FArguments> *local_3178;
  FArguments *local_3170;
  FArguments *local_3168;
  FArguments *local_3160;
  TAttribute<EColumnSortMode::Type> *local_3158;
  TAttribute<EColumnSortMode::Type> *local_3150;
  FArguments *local_3148;
  TDelegate<void___cdecl(EColumnSortPriority::Type,FName_const_&,EColumnSortMode::Type),FDefaultDelegateUserPolicy>
  *local_3140;
  FArguments *local_3138;
  TOptional<float> *local_3130;
  TOptional<float> local_3128;
  FArguments *local_3120;
  FArguments *local_3118;
  TSharedRef<SWidget,1> *local_3110;
  NamedSlotProperty<SHeaderRow::FColumn::FArguments> *local_3108;
  FArguments *local_3100;
  FArguments *local_30f8;
  FArguments *local_30f0;
  TSharedPtr<SHeaderRow,1> *local_30e8;
  TSharedPtr<SHeaderRow,1> *local_30e0;
  FArguments *local_30d8;
  TSlateDecl<STreeView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs> *local_30d0;
  FArguments *local_30c8;
  FSlotArguments *local_30c0;
  FSlotArguments *local_30b8;
  FArguments *local_30b0;
  FArguments *local_30a8;
  FSlotArguments *local_30a0;
  FSlotArguments *local_3098;
  FArguments *local_3090;
  FArguments *local_3088;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_3080;
  code *local_3078;
  undefined4 local_3070;
  code *local_3068;
  undefined4 local_3060;
  code *local_3058;
  undefined4 local_3050;
  code *local_3048;
  undefined4 local_3040;
  code *local_3038;
  undefined4 local_3030;
  code *local_3028;
  undefined4 local_3020;
  code *local_3018;
  undefined4 local_3010;
  code *local_3008;
  undefined4 local_3000;
  code *local_2ff8;
  undefined4 local_2ff0;
  code *local_2fe8;
  undefined4 local_2fe0;
  code *local_2fd8;
  undefined4 local_2fd0;
  code *local_2fc8;
  undefined4 local_2fc0;
  code *local_2fb8;
  undefined4 local_2fb0;
  code *local_2fa8;
  undefined4 local_2fa0;
  code *local_2f98;
  undefined4 local_2f90;
  TSharedRef<SWidget,1> local_2f88;
  TSharedRef<SWidget,1> local_2f78;
  code *local_2f68;
  undefined4 local_2f60;
  code *local_2f58;
  undefined4 local_2f50;
  code *local_2f48;
  undefined4 local_2f40;
  code *local_2f38;
  undefined4 local_2f30;
  code *local_2f28;
  undefined4 local_2f20;
  code *local_2f18;
  undefined4 local_2f10;
  code *local_2f08;
  undefined4 local_2f00;
  TSharedRef<SWidget,1> local_2ef8;
  code *local_2ee8;
  undefined4 local_2ee0;
  TSharedRef<SWidget,1> local_2ed8;
  code *local_2ec8;
  undefined4 local_2ec0;
  FName local_2eb8;
  FName local_2eb0;
  FName local_2ea8;
  FName local_2ea0;
  FName local_2e98;
  FName local_2e90;
  FName local_2e88;
  FName local_2e80;
  FName local_2e78;
  FName local_2e70;
  FName local_2e68;
  FName local_2e60;
  FName local_2e58;
  FName local_2e50;
  TOptional<float> local_2e48;
  FName local_2e40;
  FName local_2e38 [2];
  pmf_7422e744 local_2e28;
  pmf_eaa9086c local_2e18;
  FText local_2e08;
  FText local_2df8;
  pmf_7422e744 local_2de8;
  pmf_eaa9086c local_2dd8;
  FText local_2dc8;
  FText local_2db8;
  pmf_7422e744 local_2da8;
  pmf_eaa9086c local_2d98;
  FText local_2d88;
  FText local_2d78;
  pmf_7422e744 local_2d68;
  pmf_eaa9086c local_2d58;
  FText local_2d48;
  FText local_2d38;
  pmf_7422e744 local_2d28;
  pmf_eaa9086c local_2d18;
  FText local_2d08;
  FText local_2cf8;
  pmf_7422e744 local_2ce8;
  pmf_eaa9086c local_2cd8;
  FText local_2cc8;
  FText local_2cb8;
  pmf_7422e744 local_2ca8;
  pmf_eaa9086c local_2c98;
  FText local_2c88;
  FText local_2c78;
  undefined1 local_2c68 [16];
  pmf_5d6d12bc local_2c58;
  undefined1 local_2c48 [16];
  pmf_e285a096 local_2c38;
  undefined1 local_2c28 [16];
  pmf_141d3f0a local_2c18;
  undefined1 local_2c08 [16];
  pmf_7c10923e local_2bf8;
  undefined1 local_2be8 [16];
  pmf_1b9035a8 local_2bd8;
  pmf_21ae81a6 local_2bc8;
  pmf_f90f6e6c local_2bb8;
  undefined1 local_2ba8 [16];
  pmf_55a27154 local_2b98;
  pmf_21ae81a6 local_2b88;
  pmf_f90f6e6c local_2b78;
  TSharedRef<SVerticalBox,1> local_2b68;
  TSharedRef<SHorizontalBox,1> local_2b58;
  TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> local_2b48;
  TSharedRef<SHeaderRow,1> local_2b38;
  TSharedRef<SWidget,1> local_2b28;
  TSharedRef<SWidget,1> local_2b18;
  FText local_2b08;
  TSharedRef<SSearchBox,1> local_2af8;
  FText local_2ae8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2ad8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2ac0;
  TSlateDecl<STreeView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs> local_2aa8;
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> local_2a90;
  TDelegate<void___cdecl(EColumnSortPriority::Type,FName_const_&,EColumnSortMode::Type),FDefaultDelegateUserPolicy>
  local_2a78;
  TDelegate<EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy> local_2a60;
  TDelegate<void___cdecl(EColumnSortPriority::Type,FName_const_&,EColumnSortMode::Type),FDefaultDelegateUserPolicy>
  local_2a48;
  TDelegate<EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy> local_2a30;
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> local_2a18;
  TSharedPtr<FExtender,1> local_2a00;
  TSharedPtr<FUICommandList_const_,1> local_29f0;
  TSharedPtr<SHeaderRow,1> local_29e0;
  NamedSlotProperty<SHeaderRow::FColumn::FArguments> local_29d0;
  NamedSlotProperty<SHeaderRow::FColumn::FArguments> local_29c0;
  TSharedPtr<FExtender,1> local_29b0;
  TSharedPtr<FUICommandList_const_,1> local_29a0;
  TAttribute<EVisibility> local_2990;
  TAttribute<EVisibility> local_2970;
  TAttribute<EVisibility> local_2950;
  TAttribute<EVisibility> local_2930;
  TAttribute<EVisibility> local_2910;
  TAttribute<EVisibility> local_28f0;
  TAttribute<EVisibility> local_28d0;
  TAttribute<FText> local_28b0;
  TAttribute<FText> local_2880;
  TAttribute<FText> local_2850;
  TAttribute<FText> local_2820;
  TAttribute<FText> local_27f0;
  TAttribute<FText> local_27c0;
  TAttribute<FText> local_2790;
  TAttribute<FText> local_2760;
  TAttribute<FText> local_2730;
  TAttribute<FText> local_2700;
  TAttribute<FText> local_26d0;
  TAttribute<FText> local_26a0;
  TAttribute<FText> local_2670;
  TAttribute<FText> local_2640;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_2610;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_25f8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_25e0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_25c8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_25b0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_2598;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_2580;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_2568;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_2550;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_2538;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_2520;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_2508;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_24f0;
  TAttribute<FText> local_24d8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_24a8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_2490;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_2478;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_2460;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_2448;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_2430;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_2418;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_2400;
  TAttribute<FText> local_23e8;
  TAttribute<FText> local_23b8;
  TAttribute<FText> local_2388;
  TAttribute<FText> local_2358;
  TAttribute<FText> local_2328;
  TAttribute<FText> local_22f8;
  TAttribute<EColumnSortMode::Type> local_22c8;
  TAttribute<float> local_22a8;
  TAttribute<EColumnSortMode::Type> local_2288;
  FSlateIcon local_2268;
  FSlateIcon local_2248;
  FSlateIcon local_2228;
  FSlateIcon local_2208;
  FSlateIcon local_21e8;
  FSlateIcon local_21c8;
  FSlateIcon local_21a8;
  TAttribute<float> local_2188;
  TAttribute<float> local_2168;
  undefined1 local_2148 [32];
  FUIAction local_2128;
  FUIAction local_20c0;
  FUIAction local_2058;
  FUIAction local_1ff0;
  FUIAction local_1f88;
  FUIAction local_1f20;
  FUIAction local_1eb8;
  TAttribute<FText> local_1e50;
  TAttribute<FText> local_1e20;
  FMenuBuilder local_1df0;
  FMenuBuilder local_1c68;
  FSlotArguments local_1ae0;
  FSlotArguments local_19f8;
  FSlotArguments local_1910;
  FArguments local_1828;
  FArguments local_1620;
  FArguments local_1418;
  FArguments local_11a0;
  FArguments local_de8;
  FArguments local_970;
  FArguments local_4f8;
  undefined8 uStack_18;
  
  uStack_18 = 0x148d62df6;
  local_3920 = 0;
  local_391c = 0;
  this->DurationUnits = '\x01';
  this->ViewMode = '\0';
  this->bSuppressSelectionChangedEvent = false;
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->OnEventSelectionChangedDelegate,&param_1->_OnEventSelectionChanged);
  pTVar1 = TAttribute<TSharedPtr<FVisualizerEvent,1>_>::Get(&param_1->_ProfileData);
  TSharedPtr<FVisualizerEvent,1>::operator=(&this->ProfileData,pTVar1);
  local_3b63 = 1;
  local_3b00 = &local_2e40;
  local_39c8 = FNameEntryId::FNameEntryId(local_3918);
  local_3a4c = local_39c8->Value;
  local_3a48 = local_3a4c;
  local_3898 = local_39c8;
  FNameEntryId::FNameEntryId(&local_3b00->ComparisonIndex);
  local_3b00->Number = 0;
  (local_3b00->ComparisonIndex).Value = local_3a48;
  local_3b00->Number = 0;
  local_3890 = local_3b00;
  local_3888 = *local_3b00;
  local_3880 = local_3888;
  local_3868 = local_3888;
  local_3860 = FCoreStyle::Get();
  local_3878 = &local_29b0;
  local_3858 = TSharedPtr<FExtender,1>::TSharedPtr<FExtender,1>(local_3878,(FNullTag *)0x0);
  local_3870 = &local_29a0;
  local_3850 = TSharedPtr<FUICommandList_const_,1>::TSharedPtr<FUICommandList_const_,1>
                         (local_3870,(FNullTag *)0x0);
  FMenuBuilder::FMenuBuilder
            (&local_1c68,true,local_3850,local_3858,false,local_3860,true,local_3868,true);
  local_3848 = &local_2610;
  local_2f68 = CheckDurationUnits;
  local_2f60 = 0;
  ppcVar13 = &local_2f68;
  ppVar14 = &local_2e28;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar14 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar14 = (pmf_7422e744 *)&ppVar14->field_0x1;
  }
  local_3838 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SEventsTree,unsigned_char_const_&>(local_3848,this,&local_2e28,"");
  local_3948 = &local_25f8;
  pTVar15 = local_3948;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&pTVar15->field_0x1;
  }
  local_3830 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>(local_3948);
  local_3840 = &local_25e0;
  local_2f58 = SetDurationUnits;
  local_2f50 = 0;
  ppcVar13 = &local_2f58;
  ppVar16 = &local_2e18;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar16 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar16 = (pmf_eaa9086c *)&ppVar16->field_0x1;
  }
  local_3828 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SEventsTree,unsigned_char_const_&>(local_3840,this,&local_2e18,"");
  FUIAction::FUIAction(&local_2128,local_3828,local_3830,local_3838,RepeatDisabled);
  local_37b0 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_2990);
  local_37a8 = TAttribute<FText>::TAttribute<FText>(&local_23e8);
  local_3af8 = &local_2eb8;
  local_3940 = FNameEntryId::FNameEntryId(local_3910);
  local_3a40 = local_3940->Value;
  local_3a38 = local_3a40;
  local_3820 = local_3940;
  FNameEntryId::FNameEntryId(&local_3af8->ComparisonIndex);
  local_3af8->Number = 0;
  (local_3af8->ComparisonIndex).Value = local_3a38;
  local_3af8->Number = 0;
  local_3818 = local_3af8;
  local_3810 = *local_3af8;
  local_3af0 = &local_2eb0;
  local_3808 = local_3810;
  local_3800 = local_3810;
  local_37f8 = local_3810;
  local_37f0 = local_3810;
  local_37a0 = local_3810;
  local_3938 = FNameEntryId::FNameEntryId(local_3908);
  local_3a30 = local_3938->Value;
  local_3a28 = local_3a30;
  local_37e8 = local_3938;
  FNameEntryId::FNameEntryId(&local_3af0->ComparisonIndex);
  local_3af0->Number = 0;
  (local_3af0->ComparisonIndex).Value = local_3a28;
  local_3af0->Number = 0;
  local_37e0 = local_3af0;
  local_37d8 = *local_3af0;
  local_37d0 = local_37d8;
  local_37c8 = local_37d8;
  local_37c0 = local_37d8;
  local_37b8 = local_37d8;
  local_3798 = local_37d8;
  local_3790 = FSlateIcon::FSlateIcon(&local_2268);
  pFVar2 = FText::FText(&local_2df8);
  TAttribute<FText>::TAttribute<FText>(&local_2880,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_2e08,L"SEventsTree",L"Microseconds",L"Microseconds");
  TAttribute<FText>::TAttribute<FText>(&local_28b0,pFVar2);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_1c68,&local_28b0,&local_2880,local_3790,&local_2128,
             local_3798,Check,local_37a0,local_37a8,local_37b0);
  TAttribute<FText>::~TAttribute<FText>(&local_28b0);
  FText::~FText(&local_2e08);
  TAttribute<FText>::~TAttribute<FText>(&local_2880);
  FText::~FText(&local_2df8);
  TAttribute<FText>::~TAttribute<FText>(&local_23e8);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_2990);
  FUIAction::~FUIAction(&local_2128);
  local_3788 = &local_25c8;
  local_2f48 = CheckDurationUnits;
  local_2f40 = 0;
  ppcVar13 = &local_2f48;
  ppVar14 = &local_2de8;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar14 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar14 = (pmf_7422e744 *)&ppVar14->field_0x1;
  }
  local_3778 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SEventsTree,unsigned_char_const_&>(local_3788,this,&local_2de8,"\x01\x02");
  local_3930 = &local_25b0;
  pTVar15 = local_3930;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&pTVar15->field_0x1;
  }
  local_3770 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>(local_3930);
  local_3780 = &local_2598;
  local_2f38 = SetDurationUnits;
  local_2f30 = 0;
  ppcVar13 = &local_2f38;
  ppVar16 = &local_2dd8;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar16 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar16 = (pmf_eaa9086c *)&ppVar16->field_0x1;
  }
  local_3768 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SEventsTree,unsigned_char_const_&>(local_3780,this,&local_2dd8,"\x01\x02");
  FUIAction::FUIAction(&local_20c0,local_3768,local_3770,local_3778,RepeatDisabled);
  local_36f0 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_2970);
  local_36e8 = TAttribute<FText>::TAttribute<FText>(&local_23b8);
  local_3ae8 = &local_2ea8;
  local_39d8 = FNameEntryId::FNameEntryId(local_3900);
  local_3a20 = local_39d8->Value;
  local_3a18 = local_3a20;
  local_3760 = local_39d8;
  FNameEntryId::FNameEntryId(&local_3ae8->ComparisonIndex);
  local_3ae8->Number = 0;
  (local_3ae8->ComparisonIndex).Value = local_3a18;
  local_3ae8->Number = 0;
  local_3758 = local_3ae8;
  local_3750 = *local_3ae8;
  local_3b08 = &local_2ea0;
  local_3748 = local_3750;
  local_3740 = local_3750;
  local_3738 = local_3750;
  local_3730 = local_3750;
  local_36e0 = local_3750;
  local_39d0 = FNameEntryId::FNameEntryId(local_38f8);
  local_3a0c = local_39d0->Value;
  local_3a08 = local_3a0c;
  local_3728 = local_39d0;
  FNameEntryId::FNameEntryId(&local_3b08->ComparisonIndex);
  local_3b08->Number = 0;
  (local_3b08->ComparisonIndex).Value = local_3a08;
  local_3b08->Number = 0;
  local_3720 = local_3b08;
  local_3718 = *local_3b08;
  local_3710 = local_3718;
  local_3708 = local_3718;
  local_3700 = local_3718;
  local_36f8 = local_3718;
  local_36d8 = local_3718;
  local_36d0 = FSlateIcon::FSlateIcon(&local_2248);
  pFVar2 = FText::FText(&local_2db8);
  TAttribute<FText>::TAttribute<FText>(&local_2820,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_2dc8,L"SEventsTree",L"Milliseconds",L"Milliseconds");
  TAttribute<FText>::TAttribute<FText>(&local_2850,pFVar2);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_1c68,&local_2850,&local_2820,local_36d0,&local_20c0,
             local_36d8,Check,local_36e0,local_36e8,local_36f0);
  TAttribute<FText>::~TAttribute<FText>(&local_2850);
  FText::~FText(&local_2dc8);
  TAttribute<FText>::~TAttribute<FText>(&local_2820);
  FText::~FText(&local_2db8);
  TAttribute<FText>::~TAttribute<FText>(&local_23b8);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_2970);
  FUIAction::~FUIAction(&local_20c0);
  local_36c8 = &local_2580;
  local_2f28 = CheckDurationUnits;
  local_2f20 = 0;
  ppcVar13 = &local_2f28;
  ppVar14 = &local_2da8;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar14 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar14 = (pmf_7422e744 *)&ppVar14->field_0x1;
  }
  local_36b8 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SEventsTree,unsigned_char_const_&>(local_36c8,this,&local_2da8,"\x02");
  local_3978 = &local_2550;
  pTVar15 = local_3978;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&pTVar15->field_0x1;
  }
  local_36b0 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>(local_3978);
  local_36c0 = &local_2538;
  local_2f18 = SetDurationUnits;
  local_2f10 = 0;
  ppcVar13 = &local_2f18;
  ppVar16 = &local_2d98;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar16 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar16 = (pmf_eaa9086c *)&ppVar16->field_0x1;
  }
  local_36a8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SEventsTree,unsigned_char_const_&>(local_36c0,this,&local_2d98,"\x02");
  FUIAction::FUIAction(&local_2058,local_36a8,local_36b0,local_36b8,RepeatDisabled);
  local_3630 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_2950);
  local_3628 = TAttribute<FText>::TAttribute<FText>(&local_2388);
  local_3b58 = &local_2e98;
  local_39c0 = FNameEntryId::FNameEntryId(local_38f0);
  local_3a00 = local_39c0->Value;
  local_39f8 = local_3a00;
  local_36a0 = local_39c0;
  FNameEntryId::FNameEntryId(&local_3b58->ComparisonIndex);
  local_3b58->Number = 0;
  (local_3b58->ComparisonIndex).Value = local_39f8;
  local_3b58->Number = 0;
  local_3698 = local_3b58;
  local_3690 = *local_3b58;
  local_3b50 = &local_2e90;
  local_3688 = local_3690;
  local_3680 = local_3690;
  local_3678 = local_3690;
  local_3670 = local_3690;
  local_3620 = local_3690;
  local_39b8 = FNameEntryId::FNameEntryId(local_38e8);
  local_39f0 = local_39b8->Value;
  local_39e8 = local_39f0;
  local_3668 = local_39b8;
  FNameEntryId::FNameEntryId(&local_3b50->ComparisonIndex);
  local_3b50->Number = 0;
  (local_3b50->ComparisonIndex).Value = local_39e8;
  local_3b50->Number = 0;
  local_3660 = local_3b50;
  local_3658 = *local_3b50;
  local_3650 = local_3658;
  local_3648 = local_3658;
  local_3640 = local_3658;
  local_3638 = local_3658;
  local_3618 = local_3658;
  local_3610 = FSlateIcon::FSlateIcon(&local_2228);
  pFVar2 = FText::FText(&local_2d78);
  TAttribute<FText>::TAttribute<FText>(&local_27c0,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_2d88,L"SEventsTree",L"Seconds",L"Seconds");
  TAttribute<FText>::TAttribute<FText>(&local_27f0,pFVar2);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_1c68,&local_27f0,&local_27c0,local_3610,&local_2058,
             local_3618,Check,local_3620,local_3628,local_3630);
  TAttribute<FText>::~TAttribute<FText>(&local_27f0);
  FText::~FText(&local_2d88);
  TAttribute<FText>::~TAttribute<FText>(&local_27c0);
  FText::~FText(&local_2d78);
  TAttribute<FText>::~TAttribute<FText>(&local_2388);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_2950);
  FUIAction::~FUIAction(&local_2058);
  local_3b48 = &local_2e88;
  local_39b0 = FNameEntryId::FNameEntryId(local_38e0);
  local_3ae0 = local_39b0->Value;
  local_39e0 = local_3ae0;
  local_3608 = local_39b0;
  FNameEntryId::FNameEntryId(&local_3b48->ComparisonIndex);
  local_3b48->Number = 0;
  (local_3b48->ComparisonIndex).Value = local_3ae0;
  local_3b48->Number = 0;
  local_3600 = local_3b48;
  local_35f8 = *local_3b48;
  local_35f0 = local_35f8;
  local_35d8 = local_35f8;
  local_35d0 = FCoreStyle::Get();
  local_35e8 = &local_2a00;
  local_35c8 = TSharedPtr<FExtender,1>::TSharedPtr<FExtender,1>(local_35e8,(FNullTag *)0x0);
  local_35e0 = &local_29f0;
  local_35c0 = TSharedPtr<FUICommandList_const_,1>::TSharedPtr<FUICommandList_const_,1>
                         (local_35e0,(FNullTag *)0x0);
  FMenuBuilder::FMenuBuilder
            (&local_1df0,true,local_35c0,local_35c8,false,local_35d0,true,local_35d8,true);
  local_35b8 = &local_2520;
  local_2f08 = CheckViewMode;
  local_2f00 = 0;
  ppcVar13 = &local_2f08;
  ppVar14 = &local_2d68;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar14 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar14 = (pmf_7422e744 *)&ppVar14->field_0x1;
  }
  local_35a8 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SEventsTree,unsigned_char_const_&>(local_35b8,this,&local_2d68,"");
  local_39a8 = &local_2508;
  pTVar15 = local_39a8;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&pTVar15->field_0x1;
  }
  local_35a0 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>(local_39a8);
  local_35b0 = &local_24f0;
  local_3078 = SetViewMode;
  local_3070 = 0;
  ppcVar13 = &local_3078;
  ppVar16 = &local_2d58;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar16 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar16 = (pmf_eaa9086c *)&ppVar16->field_0x1;
  }
  local_3598 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SEventsTree,unsigned_char_const_&>(local_35b0,this,&local_2d58,"");
  FUIAction::FUIAction(&local_1ff0,local_3598,local_35a0,local_35a8,RepeatDisabled);
  local_3520 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_2930);
  local_3518 = TAttribute<FText>::TAttribute<FText>(&local_24d8);
  local_3b40 = &local_2e80;
  local_39a0 = FNameEntryId::FNameEntryId(local_38d8);
  local_3ad8 = local_39a0->Value;
  local_3ad0 = local_3ad8;
  local_3590 = local_39a0;
  FNameEntryId::FNameEntryId(&local_3b40->ComparisonIndex);
  local_3b40->Number = 0;
  (local_3b40->ComparisonIndex).Value = local_3ad0;
  local_3b40->Number = 0;
  local_3588 = local_3b40;
  local_3580 = *local_3b40;
  local_3b38 = &local_2e78;
  local_3578 = local_3580;
  local_3570 = local_3580;
  local_3568 = local_3580;
  local_3560 = local_3580;
  local_3510 = local_3580;
  local_3998 = FNameEntryId::FNameEntryId(local_38d0);
  local_3ac8 = local_3998->Value;
  local_3ac0 = local_3ac8;
  local_3558 = local_3998;
  FNameEntryId::FNameEntryId(&local_3b38->ComparisonIndex);
  local_3b38->Number = 0;
  (local_3b38->ComparisonIndex).Value = local_3ac0;
  local_3b38->Number = 0;
  local_3550 = local_3b38;
  local_3548 = *local_3b38;
  local_3540 = local_3548;
  local_3538 = local_3548;
  local_3530 = local_3548;
  local_3528 = local_3548;
  local_3508 = local_3548;
  local_3500 = FSlateIcon::FSlateIcon(&local_2208);
  pFVar2 = FText::FText(&local_2d38);
  TAttribute<FText>::TAttribute<FText>(&local_2760,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_2d48,L"SEventsTree",L"Hierarchical",L"Hierarchical");
  TAttribute<FText>::TAttribute<FText>(&local_2790,pFVar2);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_1df0,&local_2790,&local_2760,local_3500,&local_1ff0,
             local_3508,Check,local_3510,local_3518,local_3520);
  TAttribute<FText>::~TAttribute<FText>(&local_2790);
  FText::~FText(&local_2d48);
  TAttribute<FText>::~TAttribute<FText>(&local_2760);
  FText::~FText(&local_2d38);
  TAttribute<FText>::~TAttribute<FText>(&local_24d8);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_2930);
  FUIAction::~FUIAction(&local_1ff0);
  local_34f8 = &local_24a8;
  local_2ee8 = CheckViewMode;
  local_2ee0 = 0;
  ppcVar13 = &local_2ee8;
  ppVar14 = &local_2d28;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar14 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar14 = (pmf_7422e744 *)&ppVar14->field_0x1;
  }
  local_34e8 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SEventsTree,unsigned_char_const_&>
                         (local_34f8,this,&local_2d28,"\x01\x02\x03");
  local_3990 = &local_2490;
  pTVar15 = local_3990;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&pTVar15->field_0x1;
  }
  local_34e0 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>(local_3990);
  local_34f0 = &local_2478;
  local_2fa8 = SetViewMode;
  local_2fa0 = 0;
  ppcVar13 = &local_2fa8;
  ppVar16 = &local_2d18;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar16 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar16 = (pmf_eaa9086c *)&ppVar16->field_0x1;
  }
  local_34d8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SEventsTree,unsigned_char_const_&>
                         (local_34f0,this,&local_2d18,"\x01\x02\x03");
  FUIAction::FUIAction(&local_1f88,local_34d8,local_34e0,local_34e8,RepeatDisabled);
  local_3460 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_2910);
  local_3458 = TAttribute<FText>::TAttribute<FText>(&local_2358);
  local_3b30 = &local_2e70;
  local_3988 = FNameEntryId::FNameEntryId(local_38c8);
  local_3ab8 = local_3988->Value;
  local_3ab0 = local_3ab8;
  local_34d0 = local_3988;
  FNameEntryId::FNameEntryId(&local_3b30->ComparisonIndex);
  local_3b30->Number = 0;
  (local_3b30->ComparisonIndex).Value = local_3ab0;
  local_3b30->Number = 0;
  local_34c8 = local_3b30;
  local_34c0 = *local_3b30;
  local_3b28 = &local_2e68;
  local_34b8 = local_34c0;
  local_34b0 = local_34c0;
  local_34a8 = local_34c0;
  local_34a0 = local_34c0;
  local_3450 = local_34c0;
  local_3980 = FNameEntryId::FNameEntryId(local_38c0);
  local_3aa8 = local_3980->Value;
  local_3aa0 = local_3aa8;
  local_3498 = local_3980;
  FNameEntryId::FNameEntryId(&local_3b28->ComparisonIndex);
  local_3b28->Number = 0;
  (local_3b28->ComparisonIndex).Value = local_3aa0;
  local_3b28->Number = 0;
  local_3490 = local_3b28;
  local_3488 = *local_3b28;
  local_3480 = local_3488;
  local_3478 = local_3488;
  local_3470 = local_3488;
  local_3468 = local_3488;
  local_3448 = local_3488;
  local_3440 = FSlateIcon::FSlateIcon(&local_21e8);
  pFVar2 = FText::FText(&local_2cf8);
  TAttribute<FText>::TAttribute<FText>(&local_2700,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_2d08,L"SEventsTree",L"Flat",L"Flat");
  TAttribute<FText>::TAttribute<FText>(&local_2730,pFVar2);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_1df0,&local_2730,&local_2700,local_3440,&local_1f88,
             local_3448,Check,local_3450,local_3458,local_3460);
  TAttribute<FText>::~TAttribute<FText>(&local_2730);
  FText::~FText(&local_2d08);
  TAttribute<FText>::~TAttribute<FText>(&local_2700);
  FText::~FText(&local_2cf8);
  TAttribute<FText>::~TAttribute<FText>(&local_2358);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_2910);
  FUIAction::~FUIAction(&local_1f88);
  local_3438 = &local_2460;
  local_2ec8 = CheckViewMode;
  local_2ec0 = 0;
  ppcVar13 = &local_2ec8;
  ppVar14 = &local_2ce8;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar14 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar14 = (pmf_7422e744 *)&ppVar14->field_0x1;
  }
  local_3428 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SEventsTree,unsigned_char_const_&>(local_3438,this,&local_2ce8,"\x02\x03");
  local_3928 = &local_2448;
  pTVar15 = local_3928;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&pTVar15->field_0x1;
  }
  local_3420 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>(local_3928);
  local_3430 = &local_2430;
  local_3068 = SetViewMode;
  local_3060 = 0;
  ppcVar13 = &local_3068;
  ppVar16 = &local_2cd8;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar16 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar16 = (pmf_eaa9086c *)&ppVar16->field_0x1;
  }
  local_3418 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SEventsTree,unsigned_char_const_&>(local_3430,this,&local_2cd8,"\x02\x03");
  FUIAction::FUIAction(&local_1f20,local_3418,local_3420,local_3428,RepeatDisabled);
  local_33a0 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_28f0);
  local_3398 = TAttribute<FText>::TAttribute<FText>(&local_2328);
  local_3b20 = &local_2e60;
  local_3970 = FNameEntryId::FNameEntryId(local_38b8);
  local_3a98 = local_3970->Value;
  local_3a58 = local_3a98;
  local_3410 = local_3970;
  FNameEntryId::FNameEntryId(&local_3b20->ComparisonIndex);
  local_3b20->Number = 0;
  (local_3b20->ComparisonIndex).Value = local_3a58;
  local_3b20->Number = 0;
  local_3408 = local_3b20;
  local_3400 = *local_3b20;
  local_3b60 = local_2e38;
  local_33f8 = local_3400;
  local_33f0 = local_3400;
  local_33e8 = local_3400;
  local_33e0 = local_3400;
  local_3390 = local_3400;
  local_3968 = FNameEntryId::FNameEntryId(local_38b0);
  local_3a94 = local_3968->Value;
  local_3a90 = local_3a94;
  local_33d8 = local_3968;
  FNameEntryId::FNameEntryId(&local_3b60->ComparisonIndex);
  local_3b60->Number = 0;
  (local_3b60->ComparisonIndex).Value = local_3a90;
  local_3b60->Number = 0;
  local_33d0 = local_3b60;
  local_33c8 = *local_3b60;
  local_33c0 = local_33c8;
  local_33b8 = local_33c8;
  local_33b0 = local_33c8;
  local_33a8 = local_33c8;
  local_3388 = local_33c8;
  local_3380 = FSlateIcon::FSlateIcon(&local_21c8);
  pFVar2 = FText::FText(&local_2cb8);
  TAttribute<FText>::TAttribute<FText>(&local_26a0,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_2cc8,L"SEventsTree",L"Coalesced",L"Coalesced");
  TAttribute<FText>::TAttribute<FText>(&local_26d0,pFVar2);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_1df0,&local_26d0,&local_26a0,local_3380,&local_1f20,
             local_3388,Check,local_3390,local_3398,local_33a0);
  TAttribute<FText>::~TAttribute<FText>(&local_26d0);
  FText::~FText(&local_2cc8);
  TAttribute<FText>::~TAttribute<FText>(&local_26a0);
  FText::~FText(&local_2cb8);
  TAttribute<FText>::~TAttribute<FText>(&local_2328);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_28f0);
  FUIAction::~FUIAction(&local_1f20);
  local_3378 = &local_2568;
  local_3058 = CheckViewMode;
  local_3050 = 0;
  ppcVar13 = &local_3058;
  ppVar14 = &local_2ca8;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar14 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar14 = (pmf_7422e744 *)&ppVar14->field_0x1;
  }
  local_3368 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SEventsTree,unsigned_char_const_&>(local_3378,this,&local_2ca8,"\x03");
  local_3960 = &local_2418;
  pTVar15 = local_3960;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&pTVar15->field_0x1;
  }
  local_3360 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>(local_3960);
  local_3370 = &local_2400;
  local_3048 = SetViewMode;
  local_3040 = 0;
  ppcVar13 = &local_3048;
  ppVar16 = &local_2c98;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar16 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar16 = (pmf_eaa9086c *)&ppVar16->field_0x1;
  }
  local_3358 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SEventsTree,unsigned_char_const_&>(local_3370,this,&local_2c98,"\x03");
  FUIAction::FUIAction(&local_1eb8,local_3358,local_3360,local_3368,RepeatDisabled);
  local_32e0 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_28d0);
  local_32d8 = TAttribute<FText>::TAttribute<FText>(&local_22f8);
  local_3b18 = &local_2e58;
  local_3958 = FNameEntryId::FNameEntryId(local_38a8);
  local_3a88 = local_3958->Value;
  local_3a80 = local_3a88;
  local_3350 = local_3958;
  FNameEntryId::FNameEntryId(&local_3b18->ComparisonIndex);
  local_3b18->Number = 0;
  (local_3b18->ComparisonIndex).Value = local_3a80;
  local_3b18->Number = 0;
  local_3348 = local_3b18;
  local_3340 = *local_3b18;
  local_3b10 = &local_2e50;
  local_3338 = local_3340;
  local_3330 = local_3340;
  local_3328 = local_3340;
  local_3320 = local_3340;
  local_32d0 = local_3340;
  local_3950 = FNameEntryId::FNameEntryId(local_38a0);
  local_3a78 = local_3950->Value;
  local_3a70 = local_3a78;
  local_3318 = local_3950;
  FNameEntryId::FNameEntryId(&local_3b10->ComparisonIndex);
  local_3b10->Number = 0;
  (local_3b10->ComparisonIndex).Value = local_3a70;
  local_3b10->Number = 0;
  local_3310 = local_3b10;
  local_3308 = *local_3b10;
  local_3300 = local_3308;
  local_32f8 = local_3308;
  local_32f0 = local_3308;
  local_32e8 = local_3308;
  local_32c8 = local_3308;
  local_32c0 = FSlateIcon::FSlateIcon(&local_21a8);
  pFVar2 = FText::FText(&local_2c78);
  TAttribute<FText>::TAttribute<FText>(&local_2640,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_2c88,L"SEventsTree",L"FlatCoalesced",L"Flat Coalesced");
  TAttribute<FText>::TAttribute<FText>(&local_2670,pFVar2);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_1df0,&local_2670,&local_2640,local_32c0,&local_1eb8,
             local_32c8,Check,local_32d0,local_32d8,local_32e0);
  TAttribute<FText>::~TAttribute<FText>(&local_2670);
  FText::~FText(&local_2c88);
  TAttribute<FText>::~TAttribute<FText>(&local_2640);
  FText::~FText(&local_2c78);
  TAttribute<FText>::~TAttribute<FText>(&local_22f8);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_28d0);
  FUIAction::~FUIAction(&local_1eb8);
  local_3080 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_3270 = SVerticalBox::FArguments::FArguments(&local_1620);
  pFVar3 = SVerticalBox::Slot(&local_1910);
  pFVar3 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar3);
  local_32b8 = &pFVar3->field_0x18;
  local_3280 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_32b8,__real_3f800000,0.0,__real_3f800000,
                          __real_40000000);
  local_32a0 = SSearchBox::FArguments::FArguments(&local_11a0);
  local_32b0 = &local_1e50;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_2ae8,L"ProfileVisualizer",L"FilterSearchHint",
                      L"Type here to search events.");
  local_32a8 = TAttribute<FText>::TAttribute<FText>(local_32b0,pFVar2);
  local_3298 = TSlateBaseNamedArgs<SSearchBox>::ToolTipText
                         ((TSlateBaseNamedArgs<SSearchBox> *)local_32a0,local_32a8);
  local_3038 = OnFilterTextChanged;
  local_3030 = 0;
  ppcVar13 = &local_3038;
  puVar12 = local_2c68;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar12 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_2c68;
  ppVar17 = &local_2c58;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar17 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar17 = (pmf_5d6d12bc *)&ppVar17->field_0x1;
  }
  local_3290 = SSearchBox::FArguments::OnTextChanged<SEventsTree>(local_3298,this,&local_2c58);
  local_3028 = OnFilterTextCommitted;
  local_3020 = 0;
  ppcVar13 = &local_3028;
  puVar12 = local_2c48;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar12 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_2c48;
  ppVar18 = &local_2c38;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar18 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar18 = (pmf_e285a096 *)&ppVar18->field_0x1;
  }
  local_3288 = SSearchBox::FArguments::OnTextCommitted<SEventsTree>(local_3290,this,&local_2c38);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3b68);
  this_00 = MakeTDecl<SSearchBox,RequiredArgs::T0RequiredArgs>
                      (&local_2a18,"SSearchBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SEventsTree.cpp"
                       ,0x86,&local_3b68);
  pTVar4 = TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_2af8,local_3288);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSearchBox>(&local_2ed8,pTVar4);
  local_3278 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3280,&local_2ed8);
  local_3090 = SVerticalBox::FArguments::operator+(local_3270,local_3278);
  pFVar3 = SVerticalBox::Slot(&local_19f8);
  local_3268 = &pFVar3->field_0x18;
  local_3250 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_3268,__real_40000000);
  local_3260 = &local_2188;
  local_3a68[0] = 1;
  local_3258 = TAttribute<float>::TAttribute<float><int>(local_3260,local_3a68);
  pFVar3 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_3250,local_3258);
  local_3248 = &pFVar3->field_0x48;
  local_30a0 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                         ((FSlotArgumentsMixin *)local_3248,VAlign_Fill);
  local_30b0 = SHorizontalBox::FArguments::FArguments(&local_1828);
  pFVar5 = SHorizontalBox::Slot(&local_1ae0);
  local_3240 = &pFVar5->field_0x18;
  local_3228 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_3240,__real_40000000);
  local_3238 = &local_2168;
  local_3a68[1] = 1;
  local_3230 = TAttribute<float>::TAttribute<float><int>(local_3238,local_3a68 + 1);
  pFVar5 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_3228,local_3230);
  local_3220 = &pFVar5->field_0x48;
  local_30c0 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_3220,HAlign_Fill);
  local_3218 = STreeView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::FArguments(&local_4f8);
  local_3210 = STreeView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::TreeItemsSource
                         (local_3218,&this->SelectedEventsView);
  local_3018 = OnGenerateWidgetForEventsList;
  local_3010 = 0;
  ppcVar13 = &local_3018;
  puVar12 = local_2c28;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar12 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_2c28;
  ppVar19 = &local_2c18;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar19 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar19 = (pmf_141d3f0a *)&ppVar19->field_0x1;
  }
  local_3208 = STreeView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::OnGenerateRow<SEventsTree>
                         (local_3210,this,&local_2c18);
  local_3008 = OnGetChildrenForEventsList;
  local_3000 = 0;
  ppcVar13 = &local_3008;
  puVar12 = local_2c08;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar12 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_2c08;
  ppVar20 = &local_2bf8;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar20 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar20 = (pmf_7c10923e *)&ppVar20->field_0x1;
  }
  local_31f0 = STreeView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::OnGetChildren<SEventsTree>
                         (local_3208,this,&local_2bf8);
  local_3200 = local_2148;
  local_3a68[2] = 1;
  local_31f8 = TAttribute<enum_ESelectionMode::Type>::TAttribute<enum_ESelectionMode::Type>
                         (local_3200,(Type *)(local_3a68 + 2));
  local_31e8 = STreeView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::SelectionMode
                         (local_31f0,local_31f8);
  local_2ff8 = OnEventSelectionChanged;
  local_2ff0 = 0;
  ppcVar13 = &local_2ff8;
  puVar12 = local_2be8;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar12 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_2be8;
  ppVar21 = &local_2bd8;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar21 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar21 = (pmf_1b9035a8 *)&ppVar21->field_0x1;
  }
  local_30d8 = STreeView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::
               OnSelectionChanged<SEventsTree>(local_31e8,this,&local_2bd8);
  local_30e8 = &local_29e0;
  local_3168 = SHeaderRow::FArguments::FArguments(&local_1418);
  local_31d0 = SHeaderRow::Column(&local_970,&NAME_NameColumn);
  local_31e0 = &local_1e20;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_2b08,L"ProfileVisualizer",L"ColumnName",L"Name");
  local_31d8 = TAttribute<FText>::TAttribute<FText>(local_31e0,pFVar2);
  local_31b8 = SHeaderRow::FColumn::FArguments::DefaultLabel(local_31d0,local_31d8);
  local_31c8 = &local_22c8;
  local_2fe8 = GetColumnSortMode;
  local_2fe0 = 0;
  ppcVar13 = &local_2fe8;
  ppVar23 = &local_2bc8;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar23 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar23 = (pmf_21ae81a6 *)&ppVar23->field_0x1;
  }
  pTVar6 = TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<SEventsTree,FName_&>(&local_2a30,this,&local_2bc8,&NAME_NameColumn);
  local_31c0 = TAttribute<enum_EColumnSortMode::Type>::Create(local_31c8,pTVar6);
  local_31a8 = SHeaderRow::FColumn::FArguments::SortMode(local_31b8,local_31c0);
  local_2fd8 = OnColumnSortModeChanged;
  local_2fd0 = 0;
  ppcVar13 = &local_2fd8;
  ppVar24 = &local_2bb8;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar24 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar24 = (pmf_f90f6e6c *)&ppVar24->field_0x1;
  }
  local_31b0 = TDelegate<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
               ::CreateSP<SEventsTree>(&local_2a48,this,&local_2bb8);
  local_3190 = SHeaderRow::FColumn::FArguments::OnSort(local_31a8,local_31b0);
  local_31a0 = &local_22a8;
  local_3a10 = __real_3f800000;
  local_3198 = TAttribute<float>::TAttribute<float>(local_31a0,&local_3a10);
  local_3188 = SHeaderRow::FColumn::FArguments::FillWidth(local_3190,local_3198);
  local_3178 = SHeaderRow::FColumn::FArguments::MenuContent(local_3188,&local_29d0);
  local_3180 = FMenuBuilder::MakeWidget
                         (&local_1df0,&local_2b18,
                          (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                           *)0x0);
  local_3170 = NamedSlotProperty<SHeaderRow::FColumn::FArguments>::operator[](local_3178,local_3180)
  ;
  local_30f8 = SHeaderRow::FArguments::operator+(local_3168,local_3170);
  local_3160 = SHeaderRow::Column(&local_de8,&NAME_DurationColumn);
  local_2fc8 = GetDurationColumnTitle;
  local_2fc0 = 0;
  ppcVar13 = &local_2fc8;
  puVar12 = local_2ba8;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar12 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    puVar12 = puVar12 + 1;
  }
  puVar12 = local_2ba8;
  ppVar22 = &local_2b98;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar22 = *puVar12;
    puVar12 = puVar12 + 1;
    ppVar22 = (pmf_55a27154 *)&ppVar22->field_0x1;
  }
  local_3148 = SHeaderRow::FColumn::FArguments::DefaultLabel<SEventsTree>
                         (local_3160,this,&local_2b98);
  local_3158 = &local_2288;
  local_2fb8 = GetColumnSortMode;
  local_2fb0 = 0;
  ppcVar13 = &local_2fb8;
  ppVar23 = &local_2b88;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar23 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar23 = (pmf_21ae81a6 *)&ppVar23->field_0x1;
  }
  pTVar6 = TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<SEventsTree,FName_&>(&local_2a60,this,&local_2b88,&NAME_DurationColumn);
  local_3150 = TAttribute<enum_EColumnSortMode::Type>::Create(local_3158,pTVar6);
  local_3138 = SHeaderRow::FColumn::FArguments::SortMode(local_3148,local_3150);
  local_2f98 = OnColumnSortModeChanged;
  local_2f90 = 0;
  ppcVar13 = &local_2f98;
  ppVar24 = &local_2b78;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)ppVar24 = *(undefined1 *)ppcVar13;
    ppcVar13 = (code **)((longlong)ppcVar13 + 1);
    ppVar24 = (pmf_f90f6e6c *)&ppVar24->field_0x1;
  }
  local_3140 = TDelegate<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
               ::CreateSP<SEventsTree>(&local_2a78,this,&local_2b78);
  local_3120 = SHeaderRow::FColumn::FArguments::OnSort(local_3138,local_3140);
  local_3130 = &local_2e48;
  local_3a50 = __real_43000000;
  local_3128 = (TOptional<float>)TOptional<float>::TOptional<float>(local_3130,&local_3a50);
  local_3118 = SHeaderRow::FColumn::FArguments::FixedWidth(local_3120,local_3128);
  local_3108 = SHeaderRow::FColumn::FArguments::MenuContent(local_3118,&local_29c0);
  local_3110 = FMenuBuilder::MakeWidget
                         (&local_1c68,&local_2b28,
                          (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                           *)0x0);
  local_3100 = NamedSlotProperty<SHeaderRow::FColumn::FArguments>::operator[](local_3108,local_3110)
  ;
  local_30f0 = SHeaderRow::FArguments::operator+(local_30f8,local_3100);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3b67);
  this_01 = MakeTDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>
                      (&local_2a90,"SHeaderRow",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SEventsTree.cpp"
                       ,0x9e,&local_3b67);
  pTVar7 = TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_2b38,local_30f0);
  local_30e0 = TSharedPtr<SHeaderRow,1>::TSharedPtr<SHeaderRow,1><SHeaderRow>(local_30e8,pTVar7);
  local_30c8 = STreeView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::HeaderRow
                         (local_30d8,local_30e0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3b66);
  local_30d0 = MakeTDecl<STreeView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>
                         (&local_2aa8,"STreeView< TSharedPtr< FVisualizerEvent > >",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SEventsTree.cpp"
                          ,0x91,&local_3b66);
  this_02 = TSlateDecl<STreeView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>::
            Expose<STreeView<TSharedPtr<FVisualizerEvent,1>_>_>(local_30d0,&this->EventsListView);
  pTVar8 = TSlateDecl<STreeView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>::
           operator<<=(this_02,&local_2b48,local_30c8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STreeView<TSharedPtr<FVisualizerEvent,1>_>_>
            (&local_2ef8,pTVar8);
  local_30b8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_30c0,&local_2ef8);
  local_30a8 = SHorizontalBox::FArguments::operator+(local_30b0,local_30b8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3b65);
  this_03 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_2ac0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SEventsTree.cpp"
                       ,0x8d,&local_3b65);
  pTVar9 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_03,&local_2b58,local_30a8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_2f78,pTVar9);
  local_3098 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_30a0,&local_2f78);
  local_3088 = SVerticalBox::FArguments::operator+(local_3090,local_3098);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_3b64);
  this_04 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_2ad8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SEventsTree.cpp"
                       ,0x83,&local_3b64);
  pTVar10 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_2b68,local_3088);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_2f88,pTVar10);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_3080,&local_2f88);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2f88);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2b68.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2ad8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2f78);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2b58.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_2ac0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2ef8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2b48.SharedReferenceCount);
  TSlateDecl<STreeView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STreeView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>(&local_2aa8);
  TSharedRef<SHeaderRow,1>::~TSharedRef<SHeaderRow,1>(&local_2b38);
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>(&local_2a90);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2b28);
  TDelegate<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
  ::
  ~TDelegate<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
            (&local_2a78);
  TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>(&local_2a60);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_de8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2b18);
  TDelegate<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
  ::
  ~TDelegate<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
            (&local_2a48);
  TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>(&local_2a30);
  FText::~FText(&local_2b08);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_970);
  SHeaderRow::FArguments::~FArguments(&local_1418);
  STreeView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::~FArguments(&local_4f8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1ae0);
  SHorizontalBox::FArguments::~FArguments(&local_1828);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_19f8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2ed8);
  TSharedRef<SSearchBox,1>::~TSharedRef<SSearchBox,1>(&local_2af8);
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>(&local_2a18);
  FText::~FText(&local_2ae8);
  SSearchBox::FArguments::~FArguments(&local_11a0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1910);
  SVerticalBox::FArguments::~FArguments(&local_1620);
  FMenuBuilder::~FMenuBuilder(&local_1df0);
  FMenuBuilder::~FMenuBuilder(&local_1c68);
  return;
}

// CountEvents @ 148d6a780

int __thiscall
SEventsTree::CountEvents
          (SEventsTree *this,
          TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  iVar5 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar5) {
    lVar9 = 0;
    iVar8 = iVar5;
    do {
      uVar4 = 0;
      if ((int)uVar7 < iVar8) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar1 + lVar9) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      iVar6 = CountEvents(this,(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *
                               )(*(longlong *)(pFVar1 + lVar9) + 0x48));
      iVar8 = param_1->ArrayNum;
      iVar5 = iVar5 + iVar6;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar7 < iVar8);
  }
  return iVar5;
}

// CreateSelectedEventsView @ 148d70510

void __thiscall SEventsTree::CreateSelectedEventsView(SEventsTree *this)

{
  int *piVar1;
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *this_00;
  uchar uVar3;
  int iVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<FVisualizerEvent,1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong local_res10;
  TSharedPtr<FVisualizerEvent,1> local_78;
  TSharedPtr<FVisualizerEvent,1> local_68;
  TSharedPtr<FVisualizerEvent,1> local_58;
  TSharedPtr<FVisualizerEvent,1> local_48;
  
  pTVar2 = &this->SelectedEvents;
  uVar10 = CountEvents(this,pTVar2);
  TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
           *)&this->ViewToEventsMap,uVar10);
  uVar11 = (this->SelectedEvents).ArrayNum;
  this_00 = &this->SelectedEventsView;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
            ((TSharedPtr<FVisualizerEvent,1> *)(this_00->AllocatorInstance).Data,
             (this->SelectedEventsView).ArrayNum);
  uVar15 = 0;
  piVar1 = &(this->SelectedEventsView).ArrayMax;
  (this->SelectedEventsView).ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar11,&this_00->AllocatorInstance,0,piVar1);
  }
  uVar3 = this->ViewMode;
  if (uVar3 == '\0') {
    uVar11 = (this->SelectedEvents).ArrayNum;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
              ((TSharedPtr<FVisualizerEvent,1> *)(this_00->AllocatorInstance).Data,
               (this->SelectedEventsView).ArrayNum);
    (this->SelectedEventsView).ArrayNum = 0;
    if (*piVar1 != uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar11,&this_00->AllocatorInstance,0,piVar1);
    }
    if (0 < (this->SelectedEvents).ArrayNum) {
      local_res10 = 0;
      do {
        uVar10 = (uint)uVar15;
        uVar11 = 0;
        if ((int)uVar10 < (this->SelectedEvents).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar14 = (pTVar2->AllocatorInstance).Data;
        lVar5 = *(longlong *)(pFVar14 + local_res10);
        pTVar6 = *(TReferenceControllerBase<1> **)(pFVar14 + local_res10 + 8);
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((lVar5 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(int *)(lVar5 + 0x50) < 1) {
          iVar4 = (this->FilterText).Data.ArrayNum;
          iVar12 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar12 = 0;
          }
          if (iVar12 == 0) goto LAB_148d7074c;
          if ((lVar5 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar4 = (this->FilterText).Data.ArrayNum;
          iVar12 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar12 = 0;
            pwVar13 = L"";
          }
          else {
            pwVar13 = (wchar_t *)(this->FilterText).Data.AllocatorInstance.Data;
          }
          bVar9 = ::FString::StartsWith((FString *)(lVar5 + 0x20),pwVar13,iVar12,IgnoreCase);
          if (bVar9) goto LAB_148d7074c;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
        }
        else {
LAB_148d7074c:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          uVar11 = 0;
          if ((int)uVar10 < (this->SelectedEvents).ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar14 = (pTVar2->AllocatorInstance).Data;
          local_68.Object = *(FVisualizerEvent **)(pFVar14 + local_res10);
          local_68.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(pFVar14 + local_res10 + 8);
          if (local_68.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          CreateSelectedEventsViewRecursively(this,&local_78,&local_68);
          if (local_78.Object != (FVisualizerEvent *)0x0) {
            pTVar7 = (TSharedPtr<FVisualizerEvent,1> *)(this_00->AllocatorInstance).Data;
            if (((pTVar7 <= &local_78) && (&local_78 < pTVar7 + *piVar1)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar12 = (this->SelectedEventsView).ArrayNum;
            if (iVar12 == *piVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&this_00->AllocatorInstance,piVar1);
            }
            (this->SelectedEventsView).ArrayNum = iVar12 + 1;
            pFVar14 = (this_00->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
            *(FVisualizerEvent **)pFVar14 = local_78.Object;
            *(TReferenceControllerBase<1> **)(pFVar14 + 8) =
                 local_78.SharedReferenceCount.ReferenceController;
            if (local_78.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_78.SharedReferenceCount.ReferenceController);
        }
        local_res10 = local_res10 + 0x10;
        uVar15 = (ulonglong)(uVar10 + 1);
      } while ((int)(uVar10 + 1) < (this->SelectedEvents).ArrayNum);
    }
  }
  else if (uVar3 == '\x01') {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
              ((TSharedPtr<FVisualizerEvent,1> *)(this_00->AllocatorInstance).Data,
               (this->SelectedEventsView).ArrayNum);
    (this->SelectedEventsView).ArrayNum = 0;
    if (*piVar1 != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar10,&this_00->AllocatorInstance,0,piVar1);
    }
    uVar16 = uVar15;
    if (0 < (this->SelectedEvents).ArrayNum) {
      do {
        uVar10 = (uint)uVar15;
        uVar11 = 0;
        if ((int)uVar10 < (this->SelectedEvents).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar14 = (pTVar2->AllocatorInstance).Data;
        local_58.Object = *(FVisualizerEvent **)(pFVar14 + uVar16);
        local_58.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar14 + uVar16 + 8);
        if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        CreateSelectedEventsViewRecursivelyAndFlatten(this,&local_58);
        uVar15 = (ulonglong)(uVar10 + 1);
        uVar16 = uVar16 + 0x10;
      } while ((int)(uVar10 + 1) < (this->SelectedEvents).ArrayNum);
    }
  }
  else if (uVar3 == '\x02') {
    uVar11 = (this->SelectedEvents).ArrayNum;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
              ((TSharedPtr<FVisualizerEvent,1> *)(this_00->AllocatorInstance).Data,
               (this->SelectedEventsView).ArrayNum);
    (this->SelectedEventsView).ArrayNum = 0;
    if (*piVar1 != uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar11,&this_00->AllocatorInstance,0,piVar1);
    }
    local_48.Object = (FVisualizerEvent *)0x0;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    CreateSelectedEventsViewRecursivelyCoalesced(this,pTVar2,this_00,&local_48);
  }
  else if (uVar3 == '\x03') {
    TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>::Empty(this_00,uVar10);
    CreateSelectedEventsViewRecursivelyFlatCoalesced(this,pTVar2);
  }
  return;
}

// CreateSelectedEventsViewRecursively @ 148d70a90

TSharedPtr<FVisualizerEvent,1> * __thiscall
SEventsTree::CreateSelectedEventsViewRecursively
          (SEventsTree *this,TSharedPtr<FVisualizerEvent,1> *__return_storage_ptr__,
          TSharedPtr<FVisualizerEvent,1> *param_1)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FVisualizerEvent *pFVar9;
  TSharedPtr<FVisualizerEvent,1> *pTVar10;
  FVisualizerEvent *pFVar11;
  FVisualizerEvent *pFVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FVisualizerEvent *pFVar16;
  TPairInitializer<TSharedPtr<FVisualizerEvent,1>_const_&,TSharedPtr<FVisualizerEvent,1>_const_&>
  local_res10;
  TSharedPtr<FVisualizerEvent,1> local_88;
  TSharedPtr<FVisualizerEvent,1> local_78;
  TSharedPtr<FVisualizerEvent,1> local_68;
  TSharedPtr<FVisualizerEvent,1> *local_58;
  TSharedPtr<FVisualizerEvent,1> *local_50;
  FVisualizerEvent *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  pFVar9 = ::operator_new(0x58);
  pFVar16 = (FVisualizerEvent *)0x0;
  pFVar11 = pFVar16;
  if (pFVar9 != (FVisualizerEvent *)0x0) {
    if ((param_1->Object == (FVisualizerEvent *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar5)();
      return pTVar10;
    }
    pFVar11 = FVisualizerEvent::FVisualizerEvent(pFVar9,param_1->Object);
  }
  __return_storage_ptr__->Object = pFVar11;
  pFVar12 = ::operator_new(0x18);
  pFVar9 = pFVar16;
  if (pFVar12 != (FVisualizerEvent *)0x0) {
    *(undefined4 *)&pFVar12->Duration = 1;
    pFVar12->Start =
         (double)&
                 ___7__TReferenceControllerWithDeleter_UFVisualizerEvent__U__DefaultDeleter_UFVisualizerEvent___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar12->Duration + 4) = 1;
    pFVar12->DurationMs = (double)pFVar11;
    pFVar9 = pFVar12;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar9;
  if ((__return_storage_ptr__->Object == (FVisualizerEvent *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar5)();
    return pTVar10;
  }
  pFVar11 = __return_storage_ptr__->Object;
  if ((param_1->Object == (FVisualizerEvent *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar5)();
    return pTVar10;
  }
  uVar15 = (param_1->Object->Children).ArrayNum;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
            ((TSharedPtr<FVisualizerEvent,1> *)(pFVar11->Children).AllocatorInstance.Data,
             (pFVar11->Children).ArrayNum);
  piVar1 = &(pFVar11->Children).ArrayMax;
  (pFVar11->Children).ArrayNum = 0;
  if (*piVar1 != uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar15,&(pFVar11->Children).AllocatorInstance,0,piVar1);
  }
  local_res10.Value = (TSharedPtr<FVisualizerEvent,1> *)0x0;
  pFVar11 = pFVar16;
LAB_148d70bf0:
  do {
    if ((param_1->Object == (FVisualizerEvent *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar5)();
      return pTVar10;
    }
    uVar15 = (uint)pFVar16;
    if ((param_1->Object->Children).ArrayNum <= (int)uVar15) {
      if ((__return_storage_ptr__->Object == (FVisualizerEvent *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar5)();
        return pTVar10;
      }
      if ((__return_storage_ptr__->Object->Children).ArrayNum < 1) {
        if ((param_1->Object == (FVisualizerEvent *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar5)();
          return pTVar10;
        }
        if ((param_1->Object->Children).ArrayNum != 0) {
          local_78.Object = (FVisualizerEvent *)0x0;
          local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (__return_storage_ptr__ != &local_78) {
            __return_storage_ptr__->Object = (FVisualizerEvent *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&__return_storage_ptr__->SharedReferenceCount,&local_78.SharedReferenceCount)
            ;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_78.SharedReferenceCount.ReferenceController);
          goto LAB_148d71068;
        }
      }
      local_58 = __return_storage_ptr__;
      local_50 = param_1;
      TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TSharedPtr<FVisualizerEvent,1>_const_&,TSharedPtr<FVisualizerEvent,1>_const_&>_>
                ((TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                  *)&this->ViewToEventsMap,&local_res10,(bool *)&local_58);
LAB_148d71068:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return __return_storage_ptr__;
    }
    if ((param_1->Object == (FVisualizerEvent *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar5)();
      return pTVar10;
    }
    pFVar9 = param_1->Object;
    uVar7 = 0;
    if ((int)uVar15 < (pFVar9->Children).ArrayNum) {
      uVar7 = ~uVar15 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar5)();
      return pTVar10;
    }
    pFVar14 = (pFVar9->Children).AllocatorInstance.Data;
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)&pFVar11->Duration + (longlong)pFVar14);
    lVar4 = *(longlong *)((longlong)&pFVar11->Start + (longlong)pFVar14);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar4 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar5)();
      return pTVar10;
    }
    if (*(int *)(lVar4 + 0x50) < 1) {
      iVar2 = (this->FilterText).Data.ArrayNum;
      iVar8 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar8 = 0;
      }
      if (iVar8 != 0) {
        if ((lVar4 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar5)();
          return pTVar10;
        }
        iVar2 = (this->FilterText).Data.ArrayNum;
        iVar8 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar8 = 0;
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)(this->FilterText).Data.AllocatorInstance.Data;
        }
        bVar6 = ::FString::StartsWith((FString *)(lVar4 + 0x20),pwVar13,iVar8,IgnoreCase);
        if (!bVar6) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          local_res10.Value =
               (TSharedPtr<FVisualizerEvent,1> *)((longlong)&(local_res10.Value)->Object + 1);
          pFVar16 = (FVisualizerEvent *)(ulonglong)(uVar15 + 1);
          pFVar11 = (FVisualizerEvent *)&pFVar11->DurationMs;
          goto LAB_148d70bf0;
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if ((param_1->Object == (FVisualizerEvent *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar5)();
      return pTVar10;
    }
    pFVar9 = param_1->Object;
    uVar7 = 0;
    if ((int)uVar15 < (pFVar9->Children).ArrayNum) {
      uVar7 = ~uVar15 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar5)();
      return pTVar10;
    }
    pFVar14 = (pFVar9->Children).AllocatorInstance.Data;
    local_68.Object = *(FVisualizerEvent **)((longlong)&pFVar11->Start + (longlong)pFVar14);
    local_68.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)&pFVar11->Duration + (longlong)pFVar14);
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    CreateSelectedEventsViewRecursively(this,&local_88,&local_68);
    if (local_88.Object != (FVisualizerEvent *)0x0) {
      if ((local_88.Object == (FVisualizerEvent *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar5)();
        return pTVar10;
      }
      pTVar3 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
      pFVar9 = __return_storage_ptr__->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = ((local_88.Object)->ParentEvent).Object;
      pTStack_40 = ((local_88.Object)->ParentEvent).SharedReferenceCount.ReferenceController;
      ((local_88.Object)->ParentEvent).Object = pFVar9;
      ((local_88.Object)->ParentEvent).SharedReferenceCount.ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      if ((__return_storage_ptr__->Object == (FVisualizerEvent *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar5)();
        return pTVar10;
      }
      pFVar9 = __return_storage_ptr__->Object;
      pTVar10 = (TSharedPtr<FVisualizerEvent,1> *)(pFVar9->Children).AllocatorInstance.Data;
      if (((pTVar10 <= &local_88) && (&local_88 < pTVar10 + (pFVar9->Children).ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar5)();
        return pTVar10;
      }
      iVar8 = (pFVar9->Children).ArrayNum;
      piVar1 = &(pFVar9->Children).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(pFVar9->Children).AllocatorInstance,piVar1);
      }
      (pFVar9->Children).ArrayNum = iVar8 + 1;
      pFVar14 = (pFVar9->Children).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
      *(FVisualizerEvent **)pFVar14 = local_88.Object;
      *(TReferenceControllerBase<1> **)(pFVar14 + 8) =
           local_88.SharedReferenceCount.ReferenceController;
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    local_res10.Value =
         (TSharedPtr<FVisualizerEvent,1> *)((longlong)&(local_res10.Value)->Object + 1);
    pFVar16 = (FVisualizerEvent *)(ulonglong)(uVar15 + 1);
    pFVar11 = (FVisualizerEvent *)&pFVar11->DurationMs;
  } while( true );
}

// CreateSelectedEventsViewRecursivelyAndFlatten @ 148d710a0

void __thiscall
SEventsTree::CreateSelectedEventsViewRecursivelyAndFlatten
          (SEventsTree *this,TSharedPtr<FVisualizerEvent,1> *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FVisualizerEvent *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  FVisualizerEvent *local_68;
  TReferenceControllerBase<1> *local_60;
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  TSharedPtr<FVisualizerEvent,1> local_48;
  FVisualizerEvent **local_38;
  TSharedPtr<FVisualizerEvent,1> *local_30;
  TSharedPtr<FVisualizerEvent,1> local_28;
  
  local_48.Object = param_1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar4 = FilterEvent(this,&local_48);
  if (bVar4) {
    if (param_1->Object == (FVisualizerEvent *)0x0) {
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
    if ((param_1->Object->Children).ArrayNum == 0) {
      pFVar7 = ::operator_new(0x58);
      if (pFVar7 == (FVisualizerEvent *)0x0) {
        pFVar7 = (FVisualizerEvent *)0x0;
      }
      else {
        if (param_1->Object == (FVisualizerEvent *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar7 = FVisualizerEvent::FVisualizerEvent(pFVar7,param_1->Object);
      }
      local_68 = pFVar7;
      local_60 = ::operator_new(0x18);
      if (local_60 != (TReferenceControllerBase<1> *)0x0) {
        local_60->SharedReferenceCount = (atomic<int>)0x1;
        local_60->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFVisualizerEvent__U__DefaultDeleter_UFVisualizerEvent___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        local_60->WeakReferenceCount = (atomic<int>)0x1;
        local_60[1]._padding_ = (longlong)pFVar7;
      }
      if (local_68 == (FVisualizerEvent *)0x0) {
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
      local_58 = 0;
      FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&local_68->ParentEvent != (TSharedPtr<FVisualizerEvent,1> *)&local_58) {
        (local_68->ParentEvent).Object = (FVisualizerEvent *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(local_68->ParentEvent).SharedReferenceCount,&FStack_50);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_50.ReferenceController);
      local_38 = &local_68;
      local_30 = param_1;
      TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TSharedPtr<FVisualizerEvent,1>_const_&,TSharedPtr<FVisualizerEvent,1>_const_&>_>
                ((TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                  *)&this->ViewToEventsMap,
                 (TPairInitializer<TSharedPtr<FVisualizerEvent,1>_const_&,TSharedPtr<FVisualizerEvent,1>_const_&>
                  *)&stack0x00000010,(bool *)&local_38);
      pTVar2 = &this->SelectedEventsView;
      pFVar8 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar8 <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 <
          pFVar8 + (longlong)(this->SelectedEventsView).ArrayMax * 0x10)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (this->SelectedEventsView).ArrayNum;
      piVar1 = &(this->SelectedEventsView).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      (this->SelectedEventsView).ArrayNum = iVar5 + 1;
      *(FVisualizerEvent **)pFVar8 = local_68;
      *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_60;
      if (local_60 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    }
  }
  uVar9 = 0;
  lVar10 = 0;
  while( true ) {
    if (param_1->Object == (FVisualizerEvent *)0x0) {
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
    if ((param_1->Object->Children).ArrayNum <= (int)uVar9) break;
    if (param_1->Object == (FVisualizerEvent *)0x0) {
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
    pFVar7 = param_1->Object;
    uVar6 = 0;
    if ((int)uVar9 < (pFVar7->Children).ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar8 = (pFVar7->Children).AllocatorInstance.Data;
    local_28.Object = *(FVisualizerEvent **)(pFVar8 + lVar10);
    local_28.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar8 + lVar10 + 8);
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    CreateSelectedEventsViewRecursivelyAndFlatten(this,&local_28);
    uVar9 = uVar9 + 1;
    lVar10 = lVar10 + 0x10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// CreateSelectedEventsViewRecursivelyCoalesced @ 148d71410

void __thiscall
SEventsTree::CreateSelectedEventsViewRecursivelyCoalesced
          (SEventsTree *this,
          TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_2,
          TSharedPtr<FVisualizerEvent,1> *param_3)

{
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  double *pdVar6;
  TSharedPtr<FVisualizerEvent,1> *pTVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  FVisualizerEvent *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  wchar_t *pwVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  double *local_e8;
  TReferenceControllerBase<1> *local_e0;
  FVisualizerEvent *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  TSharedPtr<FVisualizerEvent,1> local_c8;
  longlong local_b8;
  TPairInitializer<TSharedPtr<FVisualizerEvent,1>_const_&,TSharedPtr<FVisualizerEvent,1>_const_&>
  local_b0;
  double **local_a0;
  FVisualizerEvent **local_98;
  double **local_90;
  FVisualizerEvent *local_80;
  TReferenceControllerBase<1> *pTStack_78;
  FVisualizerEvent *local_70;
  TReferenceControllerBase<1> *pTStack_68;
  TSharedPtr<FVisualizerEvent,1> local_58 [2];
  
  iVar11 = param_1->ArrayNum;
  uVar20 = 0;
  if (0 < iVar11) {
    local_b8 = 0;
    do {
      lVar21 = local_b8;
      uVar18 = 0;
      if ((int)uVar20 < iVar11) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      pdVar6 = *(double **)(pFVar5 + lVar21 * 0x10);
      pTVar14 = *(TReferenceControllerBase<1> **)(pFVar5 + lVar21 * 0x10 + 8);
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      local_e8 = pdVar6;
      local_e0 = pTVar14;
      if ((pdVar6 == (double *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (*(int *)(pdVar6 + 10) < 1) {
        iVar4 = (this->FilterText).Data.ArrayNum;
        iVar11 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar11 = 0;
        }
        if (iVar11 == 0) goto LAB_148d7159f;
        if ((pdVar6 == (double *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar4 = (this->FilterText).Data.ArrayNum;
        iVar11 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar11 = 0;
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)(this->FilterText).Data.AllocatorInstance.Data;
        }
        bVar10 = ::FString::StartsWith((FString *)(pdVar6 + 4),pwVar15,iVar11,IgnoreCase);
        if (bVar10) goto LAB_148d7159f;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
      }
      else {
LAB_148d7159f:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        if ((local_e8 == (double *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*(int *)(local_e8 + 10) == 0) {
          uVar16 = 0;
          uVar19 = uVar16;
          if (0 < param_2->ArrayNum) {
            do {
              if ((local_e8 == (double *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pdVar6 = local_e8;
              uVar17 = (uint)uVar19;
              uVar18 = 0;
              if ((int)uVar17 < param_2->ArrayNum) {
                uVar18 = ~uVar17 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar5 = (param_2->AllocatorInstance).Data;
              if ((*(longlong *)(pFVar5 + uVar16) == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar21 = *(longlong *)(pFVar5 + uVar16);
              iVar11 = *(int *)(pdVar6 + 5);
              iVar4 = *(int *)(lVar21 + 0x28);
              if (iVar4 == iVar11) {
                if (iVar4 < 2) goto LAB_148d71ee6;
                iVar11 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)(lVar21 + 0x20),(wchar_t *)pdVar6[4]);
                bVar10 = iVar11 == 0;
              }
              else {
                bVar10 = iVar4 + iVar11 == 1;
              }
              if (bVar10) goto LAB_148d71ee6;
              uVar16 = uVar16 + 0x10;
              uVar19 = (ulonglong)(uVar17 + 1);
            } while ((int)(uVar17 + 1) < param_2->ArrayNum);
          }
          pFVar12 = ::operator_new(0x58);
          if (pFVar12 == (FVisualizerEvent *)0x0) {
            pFVar12 = (FVisualizerEvent *)0x0;
          }
          else {
            if ((local_e8 == (double *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pdVar6 = local_e8;
            pFVar12->Start = *local_e8;
            pFVar12->Duration = local_e8[1];
            pFVar12->DurationMs = local_e8[2];
            pFVar12->Category = *(int *)(local_e8 + 3);
            ::FString::FString(&pFVar12->EventName,(FString *)(local_e8 + 4));
            pFVar12->IsSelected = *(bool *)(pdVar6 + 6);
            pFVar12->ColorIndex = *(uint *)((longlong)pdVar6 + 0x34);
            (pFVar12->ParentEvent).Object = (FVisualizerEvent *)pdVar6[7];
            pTVar14 = (TReferenceControllerBase<1> *)pdVar6[8];
            (pFVar12->ParentEvent).SharedReferenceCount.ReferenceController = pTVar14;
            if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar1 = &pFVar12->Children;
            (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            piVar2 = &(pFVar12->Children).ArrayMax;
            iVar11 = *(int *)(pdVar6 + 10);
            pTVar7 = (TSharedPtr<FVisualizerEvent,1> *)pdVar6[9];
            (pFVar12->Children).ArrayNum = iVar11;
            if (iVar11 == 0) {
              *piVar2 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar11,0,&pTVar1->AllocatorInstance,iVar11,piVar2);
              ConstructItems<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,int>
                        ((pTVar1->AllocatorInstance).Data,pTVar7,iVar11);
            }
          }
          pTVar14 = (TReferenceControllerBase<1> *)0x0;
          local_c8.Object = pFVar12;
          pTVar13 = ::operator_new(0x18);
          if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
            pTVar13->SharedReferenceCount = (atomic<int>)0x1;
            pTVar13->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFVisualizerEvent__U__DefaultDeleter_UFVisualizerEvent___SharedPointerInternals___00_SharedPointerInternals__6B_
            ;
            pTVar13->WeakReferenceCount = (atomic<int>)0x1;
            pTVar13[1]._padding_ = (longlong)pFVar12;
            pTVar14 = pTVar13;
          }
          local_c8.SharedReferenceCount.ReferenceController = pTVar14;
          if ((local_c8.Object == (FVisualizerEvent *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar14 = (param_3->SharedReferenceCount).ReferenceController;
          pFVar12 = param_3->Object;
          if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_80 = ((local_c8.Object)->ParentEvent).Object;
          pTStack_78 = ((local_c8.Object)->ParentEvent).SharedReferenceCount.ReferenceController;
          ((local_c8.Object)->ParentEvent).Object = pFVar12;
          ((local_c8.Object)->ParentEvent).SharedReferenceCount.ReferenceController = pTVar14;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_78);
          local_b0.Value = &local_c8;
          local_a0 = &local_e8;
          TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<TSharedPtr<FVisualizerEvent,1>_const_&,TSharedPtr<FVisualizerEvent,1>_const_&>_>
                    ((TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                      *)&this->ViewToEventsMap,
                     (TPairInitializer<TSharedPtr<FVisualizerEvent,1>_const_&,TSharedPtr<FVisualizerEvent,1>_const_&>
                      *)&stack0x00000010,(bool *)&local_b0.Value);
          pTVar7 = (TSharedPtr<FVisualizerEvent,1> *)(param_2->AllocatorInstance).Data;
          if (((pTVar7 <= &local_c8) && (&local_c8 < pTVar7 + param_2->ArrayMax)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar11 = param_2->ArrayNum;
          if (iVar11 == param_2->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar11 + 1;
          pFVar5 = (param_2->AllocatorInstance).Data;
          *(FVisualizerEvent **)(pFVar5 + (longlong)iVar11 * 0x10) = local_c8.Object;
          *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar11 * 0x10 + 8) =
               local_c8.SharedReferenceCount.ReferenceController;
          if (local_c8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          iVar11 = param_1->ArrayNum;
          uVar18 = uVar20 + 1;
          if ((int)uVar18 < iVar11) {
            lVar21 = (local_b8 + 1) * 0x10;
            do {
              uVar17 = 0;
              if ((int)uVar18 < iVar11) {
                uVar17 = ~uVar18 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar5 = (param_1->AllocatorInstance).Data;
              pTVar14 = *(TReferenceControllerBase<1> **)(pFVar5 + lVar21 + 8);
              lVar8 = *(longlong *)(pFVar5 + lVar21);
              if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar14->SharedReferenceCount =
                     (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
                UNLOCK();
              }
              if ((lVar8 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if (*(int *)(lVar8 + 0x50) == 0) {
                if ((local_e8 == (double *)0x0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar11 = *(int *)(lVar8 + 0x28);
                if (iVar11 == *(int *)(local_e8 + 5)) {
                  if (1 < iVar11) {
                    iVar11 = FGenericPlatformStricmp::Stricmp
                                       (*(wchar_t **)(lVar8 + 0x20),(wchar_t *)local_e8[4]);
                    bVar10 = iVar11 == 0;
                    goto LAB_148d71a6b;
                  }
                }
                else {
                  bVar10 = iVar11 + *(int *)(local_e8 + 5) == 1;
LAB_148d71a6b:
                  if (!bVar10) goto LAB_148d71ab2;
                }
                dVar3 = *(double *)(lVar8 + 0x10);
                if ((local_c8.Object == (FVisualizerEvent *)0x0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                (local_c8.Object)->DurationMs = dVar3 + (local_c8.Object)->DurationMs;
              }
LAB_148d71ab2:
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar14);
              iVar11 = param_1->ArrayNum;
              uVar18 = uVar18 + 1;
              lVar21 = lVar21 + 0x10;
            } while ((int)uVar18 < iVar11);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c8.SharedReferenceCount.ReferenceController);
        }
        else {
          pFVar12 = ::operator_new(0x58);
          if (pFVar12 == (FVisualizerEvent *)0x0) {
            pFVar12 = (FVisualizerEvent *)0x0;
          }
          else {
            if ((local_e8 == (double *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pdVar6 = local_e8;
            pFVar12->Start = *local_e8;
            pFVar12->Duration = local_e8[1];
            pFVar12->DurationMs = local_e8[2];
            pFVar12->Category = *(int *)(local_e8 + 3);
            ::FString::FString(&pFVar12->EventName,(FString *)(local_e8 + 4));
            pFVar12->IsSelected = *(bool *)(pdVar6 + 6);
            pFVar12->ColorIndex = *(uint *)((longlong)pdVar6 + 0x34);
            (pFVar12->ParentEvent).Object = (FVisualizerEvent *)pdVar6[7];
            pTVar14 = (TReferenceControllerBase<1> *)pdVar6[8];
            (pFVar12->ParentEvent).SharedReferenceCount.ReferenceController = pTVar14;
            if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar1 = &pFVar12->Children;
            (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            piVar2 = &(pFVar12->Children).ArrayMax;
            iVar11 = *(int *)(pdVar6 + 10);
            pTVar7 = (TSharedPtr<FVisualizerEvent,1> *)pdVar6[9];
            (pFVar12->Children).ArrayNum = iVar11;
            if (iVar11 == 0) {
              *piVar2 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar11,0,&pTVar1->AllocatorInstance,iVar11,piVar2);
              ConstructItems<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,int>
                        ((pTVar1->AllocatorInstance).Data,pTVar7,iVar11);
            }
          }
          pTVar14 = (TReferenceControllerBase<1> *)0x0;
          local_d8 = pFVar12;
          pTVar13 = ::operator_new(0x18);
          if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
            pTVar13->SharedReferenceCount = (atomic<int>)0x1;
            pTVar13->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFVisualizerEvent__U__DefaultDeleter_UFVisualizerEvent___SharedPointerInternals___00_SharedPointerInternals__6B_
            ;
            pTVar13->WeakReferenceCount = (atomic<int>)0x1;
            pTVar13[1]._padding_ = (longlong)pFVar12;
            pTVar14 = pTVar13;
          }
          pTStack_d0 = pTVar14;
          if ((local_d8 == (FVisualizerEvent *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar12 = local_d8;
          if ((local_e8 == (double *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar18 = *(uint *)(local_e8 + 10);
          if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
          }
          DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
                    ((TSharedPtr<FVisualizerEvent,1> *)(pFVar12->Children).AllocatorInstance.Data,
                     (pFVar12->Children).ArrayNum);
          piVar2 = &(pFVar12->Children).ArrayMax;
          (pFVar12->Children).ArrayNum = 0;
          if (*piVar2 != uVar18) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar18,&(pFVar12->Children).AllocatorInstance,0,piVar2);
          }
          if ((local_d8 == (FVisualizerEvent *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar14 = (param_3->SharedReferenceCount).ReferenceController;
          pFVar12 = param_3->Object;
          if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_70 = (local_d8->ParentEvent).Object;
          pTStack_68 = (local_d8->ParentEvent).SharedReferenceCount.ReferenceController;
          (local_d8->ParentEvent).Object = pFVar12;
          (local_d8->ParentEvent).SharedReferenceCount.ReferenceController = pTVar14;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_68);
          local_58[0].Object = local_d8;
          local_58[0].SharedReferenceCount.ReferenceController = pTStack_d0;
          if (pTStack_d0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_d0->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_d0->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_d8 == (FVisualizerEvent *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar12 = local_d8;
          if ((local_e8 == (double *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          CreateSelectedEventsViewRecursivelyCoalesced
                    (this,(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *)
                          (local_e8 + 9),&pFVar12->Children,local_58);
          if ((local_d8 == (FVisualizerEvent *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((local_d8->Children).ArrayNum != 0) {
            local_98 = &local_d8;
            local_90 = &local_e8;
            TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<TSharedPtr<FVisualizerEvent,1>_const_&,TSharedPtr<FVisualizerEvent,1>_const_&>_>
                      ((TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                        *)&this->ViewToEventsMap,&local_b0,(bool *)&local_98);
            pFVar5 = (param_2->AllocatorInstance).Data;
            if (((pFVar5 <= (FScriptContainerElement *)&local_d8) &&
                ((FScriptContainerElement *)&local_d8 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)
                ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar11 = param_2->ArrayNum;
            if (iVar11 == param_2->ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar11 + 1;
            pFVar5 = (param_2->AllocatorInstance).Data;
            *(FVisualizerEvent **)(pFVar5 + (longlong)iVar11 * 0x10) = local_d8;
            *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar11 * 0x10 + 8) = pTStack_d0;
            if (pTStack_d0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTStack_d0->SharedReferenceCount =
                   (atomic<int>)((int)pTStack_d0->SharedReferenceCount + 1);
              UNLOCK();
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_d0);
        }
      }
LAB_148d71ee6:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
      uVar20 = uVar20 + 1;
      iVar11 = param_1->ArrayNum;
      local_b8 = local_b8 + 1;
    } while ((int)uVar20 < iVar11);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// CreateSelectedEventsViewRecursivelyFlatCoalesced @ 148d71f50

void __thiscall
SEventsTree::CreateSelectedEventsViewRecursivelyFlatCoalesced
          (SEventsTree *this,
          TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TSharedPtr<FVisualizerEvent,1> *pTVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  wchar_t *pwVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  TPairInitializer<TSharedPtr<FVisualizerEvent,1>_const_&,TSharedPtr<FVisualizerEvent,1>_const_&>
  local_res10;
  undefined8 *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined8 *local_88;
  TReferenceControllerBase<1> *local_80;
  undefined8 local_78;
  FSharedReferencer<1> FStack_70;
  undefined8 **local_68;
  undefined8 **local_60;
  
  iVar11 = param_1->ArrayNum;
  uVar20 = 0;
  if (0 < iVar11) {
    local_res10.Value = (TSharedPtr<FVisualizerEvent,1> *)0x0;
    do {
      pTVar6 = local_res10.Value;
      uVar16 = 0;
      uVar18 = 0;
      if ((int)uVar20 < iVar11) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      puVar12 = *(undefined8 **)(pFVar5 + (longlong)pTVar6 * 0x10);
      pTVar14 = *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)pTVar6 * 0x10 + 8);
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      local_98 = puVar12;
      local_90 = pTVar14;
      if ((puVar12 == (undefined8 *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(int *)(puVar12 + 10) < 1) {
        iVar11 = (this->FilterText).Data.ArrayNum;
        uVar18 = iVar11 - 1;
        if (iVar11 == 0) {
          uVar18 = 0;
        }
        if (uVar18 == 0) goto LAB_148d720d5;
        if ((puVar12 == (undefined8 *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar4 = (this->FilterText).Data.ArrayNum;
        iVar11 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar11 = 0;
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)(this->FilterText).Data.AllocatorInstance.Data;
        }
        bVar10 = ::FString::StartsWith((FString *)(puVar12 + 4),pwVar15,iVar11,IgnoreCase);
        if (bVar10) goto LAB_148d720d5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
      }
      else {
LAB_148d720d5:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        if ((local_98 == (undefined8 *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(int *)(local_98 + 10) == 0) {
          uVar19 = uVar16;
          if (0 < (this->SelectedEventsView).ArrayNum) {
            do {
              if ((local_98 == (undefined8 *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              puVar12 = local_98;
              uVar17 = (uint)uVar19;
              uVar18 = 0;
              if ((int)uVar17 < (this->SelectedEventsView).ArrayNum) {
                uVar18 = ~uVar17 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar5 = (this->SelectedEventsView).AllocatorInstance.Data;
              if ((*(longlong *)(pFVar5 + uVar16) == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar21 = *(longlong *)(pFVar5 + uVar16);
              iVar11 = *(int *)(puVar12 + 5);
              iVar4 = *(int *)(lVar21 + 0x28);
              if (iVar4 == iVar11) {
                if (iVar4 < 2) goto LAB_148d72619;
                iVar11 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)(lVar21 + 0x20),(wchar_t *)puVar12[4]);
                bVar10 = iVar11 == 0;
              }
              else {
                bVar10 = iVar4 + iVar11 == 1;
              }
              if (bVar10) goto LAB_148d72619;
              uVar19 = (ulonglong)(uVar17 + 1);
              uVar16 = uVar16 + 0x10;
            } while ((int)(uVar17 + 1) < (this->SelectedEventsView).ArrayNum);
          }
          puVar12 = ::operator_new(0x58);
          if (puVar12 == (undefined8 *)0x0) {
            puVar12 = (undefined8 *)0x0;
          }
          else {
            if ((local_98 == (undefined8 *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x44d,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            puVar9 = local_98;
            *puVar12 = *local_98;
            puVar12[1] = local_98[1];
            puVar12[2] = local_98[2];
            *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(local_98 + 3);
            ::FString::FString((FString *)(puVar12 + 4),(FString *)(local_98 + 4));
            *(undefined1 *)(puVar12 + 6) = *(undefined1 *)(puVar9 + 6);
            *(undefined4 *)((longlong)puVar12 + 0x34) = *(undefined4 *)((longlong)puVar9 + 0x34);
            puVar12[7] = puVar9[7];
            lVar21 = puVar9[8];
            puVar12[8] = lVar21;
            if (lVar21 != 0) {
              LOCK();
              *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
              UNLOCK();
            }
            puVar12[9] = 0;
            iVar11 = *(int *)(puVar9 + 10);
            pTVar6 = (TSharedPtr<FVisualizerEvent,1> *)puVar9[9];
            *(int *)(puVar12 + 10) = iVar11;
            if (iVar11 == 0) {
              *(int *)((longlong)puVar12 + 0x54) = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar11,0,(ForAnyElementType *)(puVar12 + 9),iVar11,
                         (int *)((longlong)puVar12 + 0x54));
              ConstructItems<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,int>
                        (((ForAnyElementType *)(puVar12 + 9))->Data,pTVar6,iVar11);
            }
          }
          pTVar14 = (TReferenceControllerBase<1> *)0x0;
          local_88 = puVar12;
          pTVar13 = ::operator_new(0x18);
          if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
            pTVar13->SharedReferenceCount = (atomic<int>)0x1;
            pTVar13->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFVisualizerEvent__U__DefaultDeleter_UFVisualizerEvent___SharedPointerInternals___00_SharedPointerInternals__6B_
            ;
            pTVar13->WeakReferenceCount = (atomic<int>)0x1;
            pTVar13[1]._padding_ = (longlong)puVar12;
            pTVar14 = pTVar13;
          }
          local_80 = pTVar14;
          if ((local_88 == (undefined8 *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_78 = 0;
          FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (local_88 + 7 != &local_78) {
            local_88[7] = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(local_88 + 8),&FStack_70);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_70.ReferenceController);
          local_68 = &local_88;
          local_60 = &local_98;
          TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<TSharedPtr<FVisualizerEvent,1>_const_&,TSharedPtr<FVisualizerEvent,1>_const_&>_>
                    ((TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                      *)&this->ViewToEventsMap,&local_res10,(bool *)&local_68);
          pTVar2 = &this->SelectedEventsView;
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 <
               pFVar5 + (longlong)(this->SelectedEventsView).ArrayMax * 0x10)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar11 = (this->SelectedEventsView).ArrayNum;
          piVar1 = &(this->SelectedEventsView).ArrayMax;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->SelectedEventsView).ArrayNum = iVar11 + 1;
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          *(undefined8 **)(pFVar5 + (longlong)iVar11 * 0x10) = local_88;
          *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar11 * 0x10 + 8) = local_80;
          if (local_80 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
            UNLOCK();
          }
          iVar11 = param_1->ArrayNum;
          uVar18 = uVar20 + 1;
          if ((int)uVar18 < iVar11) {
            lVar21 = (longlong)((longlong)&(local_res10.Value)->Object + 1) * 0x10;
            do {
              uVar17 = 0;
              if ((int)uVar18 < iVar11) {
                uVar17 = ~uVar18 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar5 = (param_1->AllocatorInstance).Data;
              pTVar14 = *(TReferenceControllerBase<1> **)(pFVar5 + lVar21 + 8);
              lVar7 = *(longlong *)(pFVar5 + lVar21);
              if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar14->SharedReferenceCount =
                     (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
                UNLOCK();
              }
              if ((lVar7 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (*(int *)(lVar7 + 0x50) == 0) {
                if ((local_98 == (undefined8 *)0x0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar11 = *(int *)(lVar7 + 0x28);
                if (iVar11 == *(int *)(local_98 + 5)) {
                  if (1 < iVar11) {
                    iVar11 = FGenericPlatformStricmp::Stricmp
                                       (*(wchar_t **)(lVar7 + 0x20),(wchar_t *)local_98[4]);
                    bVar10 = iVar11 == 0;
                    goto LAB_148d725a9;
                  }
                }
                else {
                  bVar10 = iVar11 + *(int *)(local_98 + 5) == 1;
LAB_148d725a9:
                  if (!bVar10) goto LAB_148d725ef;
                }
                dVar3 = *(double *)(lVar7 + 0x10);
                if ((local_88 == (undefined8 *)0x0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                local_88[2] = dVar3 + (double)local_88[2];
              }
LAB_148d725ef:
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar14);
              iVar11 = param_1->ArrayNum;
              uVar18 = uVar18 + 1;
              lVar21 = lVar21 + 0x10;
            } while ((int)uVar18 < iVar11);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_80);
        }
        else {
          CreateSelectedEventsViewRecursivelyFlatCoalesced
                    (this,(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *)
                          (local_98 + 9));
        }
      }
LAB_148d72619:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
      uVar20 = uVar20 + 1;
      iVar11 = param_1->ArrayNum;
      local_res10.Value =
           (TSharedPtr<FVisualizerEvent,1> *)((longlong)&(local_res10.Value)->Object + 1);
    } while ((int)uVar20 < iVar11);
  }
  return;
}

// FilterEvent @ 148d77020

bool __thiscall SEventsTree::FilterEvent(SEventsTree *this,TSharedPtr<FVisualizerEvent,1> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  wchar_t *pwVar5;
  int iVar6;
  
  pwVar5 = L"";
  if ((param_1->Object == (FVisualizerEvent *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_1->Object->Children).ArrayNum < 1) {
    iVar1 = (this->FilterText).Data.ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    if (iVar6 != 0) {
      if ((param_1->Object == (FVisualizerEvent *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar1 = (this->FilterText).Data.ArrayNum;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      else {
        pwVar5 = (wchar_t *)(this->FilterText).Data.AllocatorInstance.Data;
      }
      bVar3 = ::FString::StartsWith(&param_1->Object->EventName,pwVar5,iVar6,IgnoreCase);
      if (!bVar3) {
        bVar3 = false;
        goto LAB_148d770e9;
      }
    }
  }
  bVar3 = true;
LAB_148d770e9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar3;
}

// GetColumnSortMode @ 148d7ac90

Type __thiscall SEventsTree::GetColumnSortMode(SEventsTree *this,FName param_1)

{
  if (this->SortByColumn != param_1) {
    return None;
  }
  return this->SortMode;
}

// GetDurationColumnTitle @ 148d7ae20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
SEventsTree::GetDurationColumnTitle(SEventsTree *this,FText *__return_storage_ptr__)

{
  byte bVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  undefined1 local_res8 [8];
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (Units,L"ProfileVisualizer",L"microseconds",L"microseconds");
      FText::AsLocalizable_Advanced_LocText(Units + 1,L"ProfileVisualizer",L"milliseconds",L"ms");
      FText::AsLocalizable_Advanced_LocText(Units + 2,L"ProfileVisualizer",L"seconds",L"s");
      atexit(`SEventsTree::GetDurationColumnTitle'::__l2::_dynamic_atexit_destructor_for__Units__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar1 = this->DurationUnits;
  local_38.TextData.Reference = Units[bVar1].TextData.Reference;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 8))
              (local_38.TextData.Reference,local_res8);
  }
  local_38.Flags = Units[bVar1].Flags;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"ProfileVisualizer",L"ColumnDurationValue",L"Duration ({0})");
  pFVar3 = FTextFormat::FTextFormat(&local_18,pFVar2,Default);
  FText::Format<FText>(__return_storage_ptr__,pFVar3,&local_38);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetEventDuration @ 148d7b100

double __thiscall SEventsTree::GetEventDuration(SEventsTree *this,double param_1)

{
  uchar uVar1;
  
  uVar1 = this->DurationUnits;
  if (uVar1 == '\0') {
    param_1 = param_1 * __real_408f400000000000;
  }
  else if ((uVar1 != '\x01') && (uVar1 == '\x02')) {
    return param_1 * __real_3f50624dd2f1a9fc;
  }
  return param_1;
}

// GetTabTitle @ 148d7d310

FString * __thiscall SEventsTree::GetTabTitle(SEventsTree *this,FString *__return_storage_ptr__)

{
  FVisualizerEvent *pFVar1;
  FText *this_00;
  FString *pFVar2;
  FText local_18;
  
  pFVar1 = (this->SelectedThread).Object;
  if (pFVar1 != (FVisualizerEvent *)0x0) {
    ::FString::FString(__return_storage_ptr__,&pFVar1->EventName);
    return __return_storage_ptr__;
  }
  this_00 = FText::AsLocalizable_Advanced_LocText
                      (&local_18,L"ProfileVisualizer",L"EventsVisualizerName",L"Empty Events List");
  pFVar2 = FText::ToString(this_00);
  ::FString::FString(__return_storage_ptr__,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// HandleBarEventSelectionChanged @ 148d7d9e0

void __thiscall
SEventsTree::HandleBarEventSelectionChanged
          (SEventsTree *this,int param_1,TSharedPtr<FVisualizerEvent,1> *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TReferenceControllerBase<1> *pTVar5;
  FVisualizerEvent *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FVisualizerEvent *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  STreeView<TSharedPtr<FVisualizerEvent,1>_> *pSVar10;
  code *pcVar11;
  bool bVar12;
  longlong lVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  FVisualizerEvent *local_60;
  TReferenceControllerBase<1> *local_58;
  TSharedPtr<FVisualizerEvent,1> local_50;
  TSharedPtr<FVisualizerEvent,1> local_40;
  
  TStack_80._padding_._0_4_ = 0;
  iVar3 = *(int *)&(this->ViewToEventsMap).field_0x28;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ViewToEventsMap).field_0x10;
  TStack_80._padding_._4_4_ = 1;
  iVar15 = 0;
  TStack_80.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->ViewToEventsMap).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_80.Array;
    }
    uVar4 = *puVar16;
    while (uVar4 == 0) {
      lVar13 = (longlong)(int)TStack_80._padding_;
      iVar15 = iVar15 + 0x20;
      TStack_80._padding_._0_4_ = (int)TStack_80._padding_ + 1;
      TStack_80.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)TStack_80._padding_)
      goto LAB_148d7da8e;
      uVar4 = puVar16[lVar13 + 1];
    }
    TStack_80._padding_._4_4_ = -uVar4 & uVar4;
    uVar2 = (ulonglong)TStack_80._padding_._4_4_ * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    TStack_80.CurrentBitIndex = iVar15 + -1 + (int)lVar13;
    if (iVar3 < TStack_80.CurrentBitIndex) {
      TStack_80.CurrentBitIndex = iVar3;
    }
  }
LAB_148d7da8e:
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._28_4_ = TStack_80.CurrentBitIndex;
  TStack_80.BaseBitIndex = iVar15;
  if (TStack_80.CurrentBitIndex < iVar3) {
    do {
      plVar1 = (longlong *)
               (*(longlong *)&this->ViewToEventsMap + (longlong)TStack_80.CurrentBitIndex * 0x28);
      if ((FVisualizerEvent *)plVar1[2] == param_2->Object) {
        if (plVar1 != (longlong *)0x0) {
          pTVar5 = (TReferenceControllerBase<1> *)plVar1[1];
          pFVar6 = (FVisualizerEvent *)*plVar1;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (((this->EventsListView).Object == (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)0x0)
             && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          SListView<TSharedPtr<FVisualizerEvent,1>_>::ClearSelection
                    ((SListView<TSharedPtr<FVisualizerEvent,1>_> *)(this->EventsListView).Object);
          if (((this->EventsListView).Object == (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)0x0)
             && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          (**(code **)(*(longlong *)(this->EventsListView).Object + 0x248))();
          if ((pFVar6 == (FVisualizerEvent *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pTVar7 = (pFVar6->ParentEvent).SharedReferenceCount.ReferenceController;
          pFVar8 = (pFVar6->ParentEvent).Object;
          if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
          }
          while (pFVar8 != (FVisualizerEvent *)0x0) {
            if (((this->EventsListView).Object == (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)0x0)
               && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            puVar14 = &((this->EventsListView).Object)->field_0x588;
            lVar13 = *(longlong *)puVar14;
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_60 = pFVar8;
            local_58 = pTVar7;
            (**(code **)(lVar13 + 0x50))(puVar14,&local_60,1);
            if ((pFVar8 == (FVisualizerEvent *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar9 = (pFVar8->ParentEvent).SharedReferenceCount.ReferenceController;
            pFVar8 = (pFVar8->ParentEvent).Object;
            if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            pTVar7 = pTVar9;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
          if (((this->EventsListView).Object == (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)0x0)
             && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pSVar10 = (this->EventsListView).Object;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_50.Object = pFVar6;
          local_50.SharedReferenceCount.ReferenceController = pTVar5;
          SListView<TSharedPtr<FVisualizerEvent,1>_>::SetSelection
                    ((SListView<TSharedPtr<FVisualizerEvent,1>_> *)pSVar10,&local_50,Direct);
          if (((this->EventsListView).Object == (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)0x0)
             && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pSVar10 = (this->EventsListView).Object;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_40.Object = pFVar6;
          local_40.SharedReferenceCount.ReferenceController = pTVar5;
          SListView<TSharedPtr<FVisualizerEvent,1>_>::RequestScrollIntoView
                    ((SListView<TSharedPtr<FVisualizerEvent,1>_> *)pSVar10,&local_40,0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          goto LAB_148d7db4d;
        }
        break;
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    } while (TStack_80.CurrentBitIndex < (TStack_80.Array)->NumBits);
  }
  if (((this->EventsListView).Object == (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  SListView<TSharedPtr<FVisualizerEvent,1>_>::ClearSelection
            ((SListView<TSharedPtr<FVisualizerEvent,1>_> *)(this->EventsListView).Object);
LAB_148d7db4d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// HandleBarGraphExpansionChanged @ 148d7ddd0

void __thiscall
SEventsTree::HandleBarGraphExpansionChanged
          (SEventsTree *this,TSharedPtr<FVisualizerEvent,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FVisualizerEvent *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  if (param_1->Object != (FVisualizerEvent *)0x0) {
    this->bSuppressSelectionChangedEvent = true;
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->SelectedThread).SharedReferenceCount.ReferenceController;
    (this->SelectedThread).Object = pFVar2;
    (this->SelectedThread).SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>::operator=
              (&this->SelectedEvents,&param_1->Object->Children);
    CreateSelectedEventsView(this);
    SortEventsList(this);
    this->bSuppressSelectionChangedEvent = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleBarGraphSelectionChanged @ 148d7de70

void __thiscall
SEventsTree::HandleBarGraphSelectionChanged
          (SEventsTree *this,TSharedPtr<FVisualizerEvent,1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FVisualizerEvent *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  TSharedPtr<FVisualizerEvent,1> local_28;
  
  if ((param_1->Object != (FVisualizerEvent *)0x0) &&
     (uVar9 = 0, 0 < (this->SelectedEvents).ArrayNum)) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->SelectedEvents).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (this->SelectedEvents).AllocatorInstance.Data;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar10 + 8);
      pFVar4 = *(FVisualizerEvent **)(pFVar2 + lVar10);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar4 == (FVisualizerEvent *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((param_1->Object == (FVisualizerEvent *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (pFVar4->EventName).Data.ArrayNum;
      iVar1 = (param_1->Object->EventName).Data.ArrayNum;
      if (iVar1 == iVar8) {
        if (1 < iVar1) {
          iVar8 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_1->Object->EventName).Data.AllocatorInstance.Data,
                             (wchar_t *)(pFVar4->EventName).Data.AllocatorInstance.Data);
          bVar6 = iVar8 == 0;
          goto LAB_148d7df95;
        }
LAB_148d7dfb8:
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_28.Object = pFVar4;
        local_28.SharedReferenceCount.ReferenceController = pTVar3;
        if (((this->SelectedThread).Object == (FVisualizerEvent *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        HandleBarEventSelectionChanged(this,((this->SelectedThread).Object)->Category,&local_28);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        break;
      }
      bVar6 = iVar1 + iVar8 == 1;
LAB_148d7df95:
      if (bVar6) goto LAB_148d7dfb8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar9 < (this->SelectedEvents).ArrayNum);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnColumnSortModeChanged @ 148d83230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SEventsTree::OnColumnSortModeChanged(SEventsTree *this,Type param_1,FName *param_2,Type param_3)

{
  this->SortByColumn = *param_2;
  this->SortMode = param_3;
  SortEventsList(this);
  return;
}

// OnEventSelectionChanged @ 148d83a40

void __thiscall
SEventsTree::OnEventSelectionChanged
          (SEventsTree *this,TSharedPtr<FVisualizerEvent,1> *param_1,Type param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FVisualizerEvent *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  TSharedPtr<FVisualizerEvent_const_,1> local_48;
  TSharedPtr<FVisualizerEvent,1> local_38;
  TSharedPtr<FVisualizerEvent,1> local_28;
  
  if (param_1->Object == (FVisualizerEvent *)0x0) {
    if (this->bSuppressSelectionChangedEvent == false) {
      local_28.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      local_28.Object = (FVisualizerEvent *)0x0;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
      ExecuteIfBound(&this->OnEventSelectionChangedDelegate,&local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  ClearEventsSelection(&this->SelectedEventsView);
  if ((param_1->Object == (FVisualizerEvent *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1->Object->IsSelected = true;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_48.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar6 = ((uint)((ulonglong)local_48.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_48.Object >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  local_48.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar5 = TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<FVisualizerEvent_const_,1>_>
                    ((TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                      *)&this->ViewToEventsMap,uVar6 >> 0x10 ^ uVar6,&local_48);
  if (iVar5 == -1) {
    lVar7 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  else {
    lVar7 = *(longlong *)&(this->ViewToEventsMap).field_0x0 + (longlong)iVar5 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (lVar7 != 0) goto LAB_148d83b59;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_148d83b59:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar2 = *(FVisualizerEvent **)(lVar7 + 0x10);
  pTVar1 = *(TReferenceControllerBase<1> **)(lVar7 + 0x18);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar2 == (FVisualizerEvent *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2->IsSelected = true;
  if (this->bSuppressSelectionChangedEvent == false) {
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Object = pFVar2;
    local_38.SharedReferenceCount.ReferenceController = pTVar1;
    TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
    ExecuteIfBound(&this->OnEventSelectionChangedDelegate,&local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnFilterTextChanged @ 148d83c40

void __thiscall SEventsTree::OnFilterTextChanged(SEventsTree *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  pFVar3 = FText::ToString(param_1);
  ::FString::operator=(&this->FilterText,pFVar3);
  CreateSelectedEventsView(this);
  if ((this->EventsListView).Object == (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000148d83ca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->EventsListView).Object + 0x248))();
  return;
}

// OnFilterTextCommitted @ 148d83cc0

void __thiscall SEventsTree::OnFilterTextCommitted(SEventsTree *this,FText *param_1,Type param_2)

{
  return;
}

// OnGenerateWidgetForEventsList @ 148d83cd0

TSharedRef<ITableRow,1> * __thiscall
SEventsTree::OnGenerateWidgetForEventsList
          (SEventsTree *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FVisualizerEvent,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  double dVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  SWidget *pSVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FArguments *pFVar10;
  TSharedRef<ITableRow,1> *pTVar11;
  FString *pFVar12;
  undefined8 *puVar13;
  TSharedRef<SWidget_const_,1> *pTVar14;
  ulong64 uVar15;
  TSlateDecl<SEventItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *this_00;
  TSharedRef<SEventItem,1> *pTVar16;
  int iVar17;
  TReferenceControllerBase<1> *pTVar18;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_res10 [2];
  TReferenceControllerBase<1> *local_res20;
  FDestructionSentinel local_2e8;
  undefined1 *local_2d0;
  TSharedRef<SWidget_const_,1> local_2c8;
  TSharedRef<SEventItem,1> local_2b8;
  FString local_2a8;
  TSlateDecl<SEventItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_298;
  undefined1 local_280 [536];
  undefined1 local_68 [48];
  
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  local_res10[0].Arg0 = local_res10[0].Arg0 & 0xffffffff00000000;
  local_res20 = (TReferenceControllerBase<1> *)param_2;
  pFVar10 = SEventItem::FArguments::FArguments((FArguments *)local_280);
  if ((param_1->Object == (FVisualizerEvent *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
    return pTVar11;
  }
  pFVar12 = ::FString::FString(&local_2a8,&param_1->Object->EventName);
  iVar2 = (pFVar12->Data).ArrayNum;
  iVar17 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar17 = 0;
  }
  ::FString::AssignRange
            (&pFVar10->_EventName,(wchar_t *)(pFVar12->Data).AllocatorInstance.Data,iVar17);
  pFVar3 = (pFVar12->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if ((param_1->Object == (FVisualizerEvent *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
    return pTVar11;
  }
  dVar1 = param_1->Object->DurationMs;
  (pFVar10->_EventDuration).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar10->_EventDuration).Getter,(FWriteAccessScope *)&local_2e8);
  local_2d0 = &(pFVar10->_EventDuration).Getter.field_0x8;
  puVar13 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_2d0);
  pTVar18 = local_res20;
  if (puVar13 != (undefined8 *)0x0) {
    pTVar14 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2c8);
    pTVar18 = (pTVar14->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar14->Object;
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar13 = &___7__TCommonDelegateInstanceState___A6ANXZUFDefaultDelegateUserPolicy__N__6B_;
    puVar13[1] = dVar1;
    uVar15 = FDelegateHandle::GenerateNewID();
    puVar13[2] = uVar15;
    *puVar13 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSEventsTree___00__A6ANXZUFDefaultDelegateUserPolicy__N__6B_
    ;
    puVar13[3] = pSVar4;
    puVar13[4] = pTVar18;
    if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar18->WeakReferenceCount = (atomic<int>)((int)pTVar18->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    puVar13[5] = GetEventDuration;
    puVar13[6] = (ulonglong)(uint)local_2a8.Data.ArrayMax << 0x20;
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c8.SharedReferenceCount.ReferenceController);
  }
  if (local_2e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
  }
  local_res10[0].Arg0 = (TSharedRef<STableViewBase,1> *)local_res20;
  this_00 = MakeTDecl<SEventItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                      (&local_298,"SEventItem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SEventsTree.cpp"
                       ,0xf2,local_res10);
  pTVar16 = TSlateDecl<SEventItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
            ::operator<<=(this_00,&local_2b8,pFVar10);
  __return_storage_ptr__->Object = (ITableRow *)pTVar16->Object;
  pTVar18 = (pTVar16->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar18;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSharedRef<SEventItem,1>::~TSharedRef<SEventItem,1>(&local_2b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  if ((void *)local_68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  if ((FScriptContainerElement *)local_280._504_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_280._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_280);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnGetChildrenForEventsList @ 148d85570

void __thiscall
SEventsTree::OnGetChildrenForEventsList
          (SEventsTree *this,TSharedPtr<FVisualizerEvent,1> *param_1,
          TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->Object == (FVisualizerEvent *)0x0) {
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
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>::operator=
            (param_2,&param_1->Object->Children);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RestoreEventSelection @ 148d8f240

bool __thiscall
SEventsTree::RestoreEventSelection
          (SEventsTree *this,
          TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  STreeView<TSharedPtr<FVisualizerEvent,1>_> *pSVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  Type *pTVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  TSharedPtr<FVisualizerEvent,1> local_48;
  TSharedPtr<FVisualizerEvent,1> local_38;
  
  iVar13 = param_1->ArrayNum;
  uVar12 = 0;
  uVar14 = uVar12;
  if (0 < iVar13) {
    do {
      uVar11 = (uint)uVar12;
      uVar10 = ~uVar11 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar11 < iVar13) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar1 + uVar14) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar6 = 0;
      if (*(char *)(*(longlong *)(pFVar1 + uVar14) + 0x30) != '\0') {
        if (((this->EventsListView).Object == (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pSVar2 = (this->EventsListView).Object;
        pTVar8 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar2->field_0x3e8);
        if ((*pTVar8 != None) && (*(int *)&pSVar2->field_0x810 != *(int *)&pSVar2->field_0x83c)) {
          (**(code **)(*(longlong *)&pSVar2->field_0x588 + 0x30))(&pSVar2->field_0x588);
          (**(code **)(*(longlong *)&pSVar2->field_0x588 + 0x40))(&pSVar2->field_0x588,3);
        }
        if (((this->EventsListView).Object == (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        (**(code **)(*(longlong *)(this->EventsListView).Object + 0x248))();
        if (((this->EventsListView).Object == (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pSVar2 = (this->EventsListView).Object;
        uVar7 = uVar6;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar7 = uVar10;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        lVar9 = (longlong)(int)uVar11;
        local_48.Object = *(FVisualizerEvent **)(pFVar1 + lVar9 * 0x10);
        local_48.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar1 + lVar9 * 0x10 + 8);
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SListView<TSharedPtr<FVisualizerEvent,1>_>::SetSelection
                  ((SListView<TSharedPtr<FVisualizerEvent,1>_> *)pSVar2,&local_48,Direct);
        if (((this->EventsListView).Object == (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pSVar2 = (this->EventsListView).Object;
        if ((int)uVar11 < param_1->ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        local_38.Object = *(FVisualizerEvent **)(pFVar1 + lVar9 * 0x10);
        local_38.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar1 + lVar9 * 0x10 + 8);
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SListView<TSharedPtr<FVisualizerEvent,1>_>::RequestScrollIntoView
                  ((SListView<TSharedPtr<FVisualizerEvent,1>_> *)pSVar2,&local_38,0);
        return true;
      }
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar1 + uVar14) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      bVar4 = RestoreEventSelection
                        (this,(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *)
                              (*(longlong *)(pFVar1 + uVar14) + 0x48));
      if (bVar4) {
        return true;
      }
      iVar13 = param_1->ArrayNum;
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar14 = uVar14 + 0x10;
    } while ((int)(uVar11 + 1) < iVar13);
  }
  return false;
}

// SetDurationUnits @ 148d91210

void __thiscall SEventsTree::SetDurationUnits(SEventsTree *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  
  this->DurationUnits = param_1;
  if ((this->EventsListView).Object == (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000148d9125e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->EventsListView).Object + 0x248))();
  return;
}

// SetViewMode @ 148d91820

void __thiscall SEventsTree::SetViewMode(SEventsTree *this,uchar param_1)

{
  code *pcVar1;
  bool bVar2;
  
  this->ViewMode = param_1;
  CreateSelectedEventsView(this);
  SortEventsList(this);
  if ((this->EventsListView).Object == (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000148d9187b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->EventsListView).Object + 0x248))();
  return;
}

// SortEventsList @ 148d91a90

void __thiscall
SEventsTree::SortEventsList
          (SEventsTree *this,
          TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  if (this->SortByColumn == NAME_NameColumn) {
    if (this->SortMode == Ascending) {
      AlgoImpl::
      IntroSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l8::FCompareEventsByName>_>
                ((TSharedPtr<FVisualizerEvent,1> *)(param_1->AllocatorInstance).Data,
                 param_1->ArrayNum,local_res8[0],(FCompareEventsByName *)local_res8);
    }
    else if (this->SortMode == Descending) {
      AlgoImpl::
      IntroSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l12::FCompareEventsByNameDescending>_>
                ((TSharedPtr<FVisualizerEvent,1> *)(param_1->AllocatorInstance).Data,
                 param_1->ArrayNum,local_res8[0],(FCompareEventsByNameDescending *)local_res10);
    }
  }
  else if (this->SortByColumn == NAME_DurationColumn) {
    if (this->SortMode == Ascending) {
      AlgoImpl::
      IntroSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l19::FCompareEventsByDuration>_>
                ((TSharedPtr<FVisualizerEvent,1> *)(param_1->AllocatorInstance).Data,
                 param_1->ArrayNum,local_res8[0],(FCompareEventsByDuration *)local_res18);
    }
    else if (this->SortMode == Descending) {
      AlgoImpl::
      IntroSortInternal<TSharedPtr<FVisualizerEvent,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FVisualizerEvent,1>,_SEventsTree::SortEventsList_::__l23::FCompareEventsByDurationDescending>_>
                ((TSharedPtr<FVisualizerEvent,1> *)(param_1->AllocatorInstance).Data,
                 param_1->ArrayNum,local_res8[0],(FCompareEventsByDurationDescending *)local_res20);
    }
  }
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar1 + lVar7) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(*(longlong *)(pFVar1 + lVar7) + 0x50) != 0) {
        uVar4 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        if ((*(longlong *)(pFVar1 + lVar7) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        SortEventsList(this,(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *)
                            (*(longlong *)(pFVar1 + lVar7) + 0x48));
      }
      iVar5 = param_1->ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < iVar5);
  }
  return;
}

// SortEventsList @ 148d91ca0

void __thiscall SEventsTree::SortEventsList(SEventsTree *this)

{
  code *pcVar1;
  bool bVar2;
  
  SortEventsList(this,&this->SelectedEventsView);
  if ((this->EventsListView).Object == (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
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
  (**(code **)(*(longlong *)(this->EventsListView).Object + 0x248))();
  RestoreEventSelection(this,&this->SelectedEventsView);
  return;
}

