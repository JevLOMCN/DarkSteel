// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 24

// AdvanceToPage @ 14301d110

void __thiscall SWizard::AdvanceToPage(SWizard *this,int param_1)

{
  SBreadcrumbTrail<int> *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  FText *pFVar7;
  FReadAccessScope *this_01;
  longlong lVar8;
  longlong *plVar9;
  uint local_res8 [2];
  undefined1 local_res18 [16];
  undefined1 local_b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  ForAnyElementType FStack_98;
  ulonglong local_90;
  FText local_88;
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  if ((this->WidgetSwitcher).Object == (SWidgetSwitcher *)0x0) {
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
  puVar6 = (uint *)TAttribute<int>::Get(&((this->WidgetSwitcher).Object)->WidgetIndex);
  plVar9 = (longlong *)0x0;
  local_res8[0] = *puVar6;
  if (local_res8[0] != 0xffffffff) {
    if ((this->BreadcrumbTrail).Object == (SBreadcrumbTrail<int> *)0x0) {
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
    lVar8 = (longlong)(int)local_res8[0];
    this_00 = (this->BreadcrumbTrail).Object;
    uVar5 = 0;
    if ((int)local_res8[0] < (this->Pages).Array.ArrayNum) {
      uVar5 = ~local_res8[0] >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar7 = TAttribute<FText>::Get
                       ((TAttribute<FText> *)
                        (*(longlong *)((this->Pages).Array.AllocatorInstance.Data + lVar8 * 8) +
                        0x70));
    local_88.TextData.Reference = (pFVar7->TextData).Reference;
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 8))
                (local_88.TextData.Reference,local_res18);
    }
    local_88.Flags = pFVar7->Flags;
    FText::FText((FText *)local_b8,&local_88);
    local_b8[0x10] = true;
    local_90 = 0;
    local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_98.Data = (FScriptContainerElement *)0x0;
    SBreadcrumbTrail<int>::PushCrumb(this_00,(TAttribute<FText> *)local_b8,(int *)local_res8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_a0,(FWriteAccessScope *)&local_78);
    if (((int)local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_98.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
      local_90 = local_90 & 0xffffffff00000000;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (FStack_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_98.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
    if ((ITextData *)local_b8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_b8._0_8_ + 0x10))();
    }
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTryToMoveToPage,
             &local_60);
  if ((*(int *)&(this->OnTryToMoveToPage).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnTryToMoveToPage).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar1 + 0x38))();
    if (cVar4 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_60);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnTryToMoveToPage,
                 &local_48);
      if (*(int *)&(this->OnTryToMoveToPage).field_0x10 != 0) {
        plVar9 = *(longlong **)&(this->OnTryToMoveToPage).field_0x8;
      }
      param_1 = (**(code **)(*plVar9 + 0x60))(plVar9,param_1);
      this_01 = &local_48;
      goto LAB_14301d362;
    }
  }
  this_01 = &local_60;
LAB_14301d362:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_01);
  ShowPage(this,param_1);
  return;
}

// CanShowPage @ 14301f9f0

bool __thiscall SWizard::CanShowPage(SWizard *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  bool *pbVar5;
  
  if ((-1 < param_1) && (param_1 < (this->Pages).Array.ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->Pages).Array.ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pbVar5 = TAttribute<bool>::Get
                       ((TAttribute<bool> *)
                        (*(longlong *)
                          ((this->Pages).Array.AllocatorInstance.Data + (longlong)param_1 * 8) +
                        0x10));
    return *pbVar5;
  }
  return false;
}

// ComputeDesiredSize @ 14301fc80

TVector2<double> * __thiscall
SWizard::ComputeDesiredSize(SWizard *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  
  if (((this->DesiredSize).field0_0x0._s_0.X == 0.0) &&
     ((this->DesiredSize).field0_0x0._s_0.Y == 0.0)) {
    SCompoundWidget::ComputeDesiredSize((SCompoundWidget *)this,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  dVar1 = (this->DesiredSize).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->DesiredSize).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// Construct @ 143028b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014302b2e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWizard::Construct(SWizard *this,FArguments *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  SHorizontalBox *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  SWidget *pSVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  float fVar18;
  FSharedReferencer<1> FVar19;
  SVerticalBox *pSVar20;
  undefined8 uVar21;
  char cVar22;
  byte bVar23;
  bool bVar24;
  bool bVar25;
  uint uVar26;
  int iVar27;
  TVector2<double> *pTVar28;
  FArguments *pFVar29;
  ISlateStyle *pIVar30;
  FName *pFVar31;
  TAttribute<FSlateBrush_const_*> *pTVar32;
  FArguments *pFVar33;
  FSlotArguments *pFVar34;
  FArguments *pFVar35;
  TAttribute<EVisibility> *pTVar36;
  TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs> *pTVar37;
  TSharedRef<SBreadcrumbTrail<int>,1> *pTVar38;
  FMargin *pFVar39;
  TAttribute<FMargin> *pTVar40;
  FArguments *pFVar41;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar42;
  TSharedRef<STextBlock,1> *pTVar43;
  FSlot *pFVar44;
  FArguments *pFVar45;
  FSlot *pFVar46;
  FSizeParam *pFVar47;
  FSlotArguments *pFVar48;
  FArguments *pFVar49;
  TSharedRef<SVerticalBox,1> *pTVar50;
  FSlot *pFVar51;
  FArguments *pFVar52;
  SWidgetSwitcher *pSVar53;
  SWidgetSwitcher *pSVar54;
  TSharedRef<SHorizontalBox,1> *pTVar55;
  FArguments *pFVar56;
  undefined8 *puVar57;
  FArguments *pFVar58;
  FText *pFVar59;
  FArguments *pFVar60;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *pTVar61;
  TSharedRef<SImage,1> *pTVar62;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar63;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar64;
  TSharedRef<SButton,1> *pTVar65;
  FSlotArguments *pFVar66;
  TAttribute<bool> *pTVar67;
  TAttribute<FText> *pTVar68;
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> *pTVar69;
  TSharedRef<SUniformGridPanel,1> *pTVar70;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SBorder,1> *pTVar71;
  SUniformGridPanel *this_02;
  FScopedWidgetSlotArguments *this_03;
  FSlot *this_04;
  FArguments *pFVar72;
  undefined8 *puVar73;
  TSharedRef<SWidget_const_,1> *pTVar74;
  ulong64 uVar75;
  TSharedRef<SWidget,1> *pTVar76;
  FCheckBoxStyle *pFVar77;
  SCheckBox *pSVar78;
  SCheckBox *pSVar79;
  FScopedWidgetSlotArguments *pFVar80;
  int *piVar81;
  EVisibility *pEVar82;
  undefined1 *puVar83;
  uint uVar84;
  EVisibility *pEVar85;
  FSlotArguments *this_05;
  undefined1 auStackY_5f08 [32];
  FArguments *local_5eb8;
  T0RequiredArgs local_5ea0;
  T0RequiredArgs local_5e9f;
  T0RequiredArgs local_5e9e;
  T0RequiredArgs local_5e9d;
  T0RequiredArgs local_5e9c;
  T0RequiredArgs local_5e9b;
  T0RequiredArgs local_5e9a;
  T0RequiredArgs local_5e99;
  T0RequiredArgs local_5e98;
  T0RequiredArgs local_5e97;
  T0RequiredArgs local_5e96;
  T0RequiredArgs local_5e95;
  T0RequiredArgs local_5e94;
  T0RequiredArgs local_5e93;
  T0RequiredArgs local_5e92;
  T0RequiredArgs local_5e91;
  T0RequiredArgs local_5e90;
  T0RequiredArgs local_5e8f;
  T0RequiredArgs local_5e8e [6];
  TReferenceControllerBase<1> *local_5e88;
  TReferenceControllerBase<1> *local_5e78;
  undefined4 uStack_5e70;
  float fStack_5e6c;
  FArguments *local_5e68;
  TReferenceControllerBase<1> *local_5e58;
  undefined4 uStack_5e50;
  uint uStack_5e4c;
  FSlotArguments *local_5e48;
  SWidget *local_5e38;
  undefined4 uStack_5e30;
  uint uStack_5e2c;
  FLLMScope local_5e28;
  FLLMScope local_5e24;
  FLLMScope local_5e20;
  FLLMScope local_5e1c;
  undefined8 *local_5e18 [2];
  FSlotArguments *local_5e08;
  undefined4 uStack_5e00;
  uint uStack_5dfc;
  TSharedPtr<SWidget,1> local_5df8;
  SWizard *local_5de8;
  FArguments *local_5de0;
  FArguments *local_5dd8;
  SVerticalBox *local_5dd0;
  FSharedReferencer<1> local_5dc8;
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs> local_5dc0;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_5da8;
  TReferenceControllerBase<1> *local_5d90;
  undefined4 uStack_5d88;
  float fStack_5d84;
  TReferenceControllerBase<1> *local_5d80;
  undefined4 uStack_5d78;
  float fStack_5d74;
  SWidget *local_5d70;
  FSharedReferencer<1> local_5d68;
  SWidget *local_5d60;
  TReferenceControllerBase<1> *pTStack_5d58;
  SWidget *local_5d50;
  TReferenceControllerBase<1> *pTStack_5d48;
  longlong local_5d40;
  FSharedReferencer<1> local_5d38;
  undefined8 local_5d30;
  FSharedReferencer<1> local_5d28;
  uchar local_5d20;
  undefined1 local_5d1f;
  TDelegateBase<FNotThreadSafeDelegateMode> local_5d18;
  float local_5d00;
  undefined1 local_5cfc;
  TDelegateBase<FNotThreadSafeDelegateMode> local_5cf8;
  float local_5ce0;
  undefined1 local_5cdc;
  TDelegateBase<FNotThreadSafeDelegateMode> local_5cd8;
  FSlot *local_5cc0;
  FArguments *local_5cb8;
  TReferenceControllerBase<1> *local_5cb0;
  TReferenceControllerBase<1> *local_5ca8;
  FName local_5ca0;
  undefined4 local_5c98 [2];
  undefined4 local_5c90 [2];
  SVerticalBox *local_5c88;
  FSlot *local_5c80;
  FName local_5c78;
  FMemScope local_5c70;
  FArguments *local_5c68;
  TReferenceControllerBase<1> *local_5c60;
  undefined4 local_5c58 [2];
  undefined4 local_5c50 [2];
  undefined4 local_5c48 [2];
  FSlateBrush *local_5c40;
  FSlot *local_5c38;
  FSlot *local_5c30;
  FName local_5c28;
  TSharedPtr<SUniformGridPanel,1> local_5c20;
  FMargin local_5c10;
  FMemScope local_5c00;
  FSlot *local_5bf8;
  FMemScope local_5bf0;
  FName local_5be8;
  FMemScope local_5be0;
  TAttribute<float> local_5bd8;
  TAttribute<float> local_5bb8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_5b98;
  TSharedRef<SWidget,1> local_5b80;
  TSharedRef<SWidget,1> local_5b70;
  TSharedRef<SWidget,1> local_5b60;
  TSharedRef<SWidget,1> local_5b50;
  TSharedRef<SWidget,1> local_5b40;
  TSharedRef<SWidget,1> local_5b30;
  TSharedRef<SWidget,1> local_5b20;
  TSharedRef<SWidget,1> local_5b10;
  TSharedRef<SWidget,1> local_5b00;
  TSharedRef<SWidget,1> local_5af0;
  TSharedRef<SWidget,1> local_5ae0;
  TSharedRef<SWidget,1> local_5ad0;
  TSharedRef<SWidget,1> local_5ac0;
  TSharedRef<SWidget,1> local_5ab0;
  TSharedRef<SWidget,1> local_5aa0;
  undefined8 local_5a90;
  undefined8 uStack_5a88;
  undefined1 local_5a80;
  TDelegateBase<FNotThreadSafeDelegateMode> local_5a78;
  undefined8 local_5a60;
  undefined8 uStack_5a58;
  undefined1 local_5a50;
  TDelegateBase<FNotThreadSafeDelegateMode> local_5a48;
  TAttribute<FSlateBrush_const_*> local_5a30;
  TAttribute<FSlateBrush_const_*> local_5a08;
  undefined8 local_59e0;
  undefined8 uStack_59d8;
  undefined1 local_59d0;
  TDelegateBase<FNotThreadSafeDelegateMode> local_59c8;
  FDestructionSentinel local_59b0;
  undefined1 *local_5998;
  FDestructionSentinel local_5990;
  undefined1 *local_5978;
  FDestructionSentinel local_5970;
  longlong *local_5958;
  TAttribute<FMargin> local_5950;
  TAttribute<FText> local_5920;
  TAttribute<FText> local_58f0;
  TAttribute<FMargin> local_58c0;
  TAttribute<FText> local_5890;
  TAttribute<FText> local_5860;
  TAttribute<FMargin> local_5830;
  TSharedRef<SButton,1> local_5800;
  TSharedRef<SButton,1> local_57f0;
  TSharedRef<SHorizontalBox,1> local_57e0;
  TSharedRef<SImage,1> local_57d0;
  TSharedRef<STextBlock,1> local_57c0;
  FText local_57b0;
  FText local_57a0;
  TSharedRef<SButton,1> local_5790;
  TSharedRef<SHorizontalBox,1> local_5780;
  TSharedRef<STextBlock,1> local_5770;
  FText local_5760;
  TSharedRef<SImage,1> local_5750;
  FText local_5740;
  TSharedRef<SHorizontalBox,1> local_5730;
  TSharedRef<SVerticalBox,1> local_5720;
  TSharedRef<STextBlock,1> local_5710;
  TSharedRef<SBreadcrumbTrail<int>,1> local_5700;
  code *local_56e8;
  longlong lStack_56e0;
  TSharedRef<SButton,1> local_56d8;
  FText local_56c8;
  FText local_56b8;
  TSharedRef<SWidget_const_,1> local_56a8;
  TSharedRef<SWidget_const_,1> local_5698;
  TSharedRef<SWidget,1> local_5688;
  SWidget *local_5678;
  TReferenceControllerBase<1> *pTStack_5670;
  FName local_5668;
  FName local_5660;
  FName local_5658;
  FName local_5650;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_5648;
  FName local_5630;
  FName local_5628;
  FName local_5620;
  FName local_5618;
  FName local_5610;
  FName local_5608;
  FName local_5600;
  code *local_55f8;
  TReferenceControllerBase<1> *pTStack_55f0;
  code *local_55e8;
  TReferenceControllerBase<1> *pTStack_55e0;
  SWidgetSwitcher *local_55d8;
  TReferenceControllerBase<1> *pTStack_55d0;
  code *local_55c8;
  longlong lStack_55c0;
  code *local_55b8;
  longlong lStack_55b0;
  code *local_55a8;
  longlong lStack_55a0;
  code *local_5598;
  longlong lStack_5590;
  code *local_5588;
  longlong lStack_5580;
  code *local_5578;
  longlong lStack_5570;
  code *local_5568;
  longlong lStack_5560;
  TSharedRef<SBorder,1> local_5558;
  TSharedRef<SVerticalBox,1> local_5548;
  TSharedRef<SUniformGridPanel,1> local_5538;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_5528;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_5510;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_54f8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_54e0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_54c8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_54b0;
  TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs> local_5498;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5480;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_5468;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_5450;
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> local_5438;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_5420;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_5408;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_53f0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_53d8;
  FMargin local_53c0;
  undefined **local_53b0;
  undefined1 local_53a8 [16];
  FSharedReferencer<1> local_5398 [9];
  TOptional<FSizeParam> local_5350;
  TPanelChildren<SBoxPanel::FSlot> *local_52c0;
  int local_52b8;
  FSlotArguments local_52b0;
  FSlotArguments local_5288;
  FSlotArguments local_5260;
  undefined1 local_5238 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_5208;
  undefined1 local_51f0 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_51c0;
  undefined1 local_51a8 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_5178;
  undefined1 local_5160 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_5130;
  TAttribute<EVisibility> local_5118;
  TAttribute<EVisibility> local_50f8;
  TAttribute<bool> local_50d8;
  TAttribute<FSlateBrush_const_*> local_50b8;
  FSlotArguments local_5090;
  TAttribute<FMargin> local_4fa8;
  TAttribute<FText> local_4f78;
  TAttribute<FText> local_4f48;
  TAttribute<FMargin> local_4f18;
  TAttribute<FText> local_4ee8;
  TAttribute<FText> local_4eb8;
  undefined1 local_4e88 [88];
  TOptional<FSizeParam> local_4e30;
  undefined1 local_4da0 [88];
  TOptional<FSizeParam> local_4d48;
  FSlotArguments local_4cb8;
  FArguments local_4bd0;
  FSlotArguments local_47f0;
  FSlotArguments local_4708;
  FSlotArguments local_4620;
  FSlotArguments local_4538;
  FSlotArguments local_4450;
  FSlotArguments local_4368;
  FSlotArguments local_4280;
  FArguments local_4198;
  FArguments local_3f90;
  FArguments local_3d88;
  FArguments local_3b80;
  FArguments local_3978;
  FArguments local_3750;
  FArguments local_34d8;
  FArguments local_32d0;
  FArguments local_3028;
  FArguments local_2d80;
  FArguments local_2a68;
  FArguments local_2688;
  FArguments local_2148;
  FArguments local_1c08;
  FArguments local_16c8;
  FArguments local_1188;
  FArguments local_c30;
  FArguments local_6d8;
  FScopedWidgetSlotArguments local_178;
  FScopedWidgetSlotArguments local_108;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_5f08;
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar25 = false;
  local_5de8 = this;
  local_5c68 = param_1;
  pTVar28 = TAttribute<UE::Math::TVector2<double>_>::Get(&param_1->_DesiredSize);
  dVar7 = (pTVar28->field0_0x0)._s_0.Y;
  (this->DesiredSize).field0_0x0._s_0.X = (pTVar28->field0_0x0)._s_0.X;
  (this->DesiredSize).field0_0x0._s_0.Y = dVar7;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnCanceled,&param_1->_OnCanceled);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnFinished,&param_1->_OnFinished);
  TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnFirstPageBackClicked,&param_1->_OnFirstPageBackClicked);
  this->bShowHistoryButtons = param_1->_ShowHistoryButtons;
  local_5c20.Object = (SUniformGridPanel *)0x0;
  local_5c20.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar29 = SBorder::FArguments::FArguments(&local_2a68);
  pIVar30 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar30 + 0x50);
  pFVar31 = ::FName::FName(&local_5668,"Brushes.Panel");
  local_5c40 = (FSlateBrush *)(*pcVar2)(pIVar30,*pFVar31,0,0);
  pTVar32 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                      (&local_50b8,&local_5c40);
  pFVar29 = SBorder::FArguments::BorderImage(pFVar29,pTVar32);
  local_5cb8 = SBorder::FArguments::Padding(pFVar29,__real_41200000);
  pFVar33 = SVerticalBox::FArguments::FArguments(&local_3b80);
  pFVar34 = SVerticalBox::Slot(&local_4450);
  pFVar34 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar34);
  pFVar35 = SBreadcrumbTrail<int>::FArguments::FArguments(&local_2d80);
  local_5df8.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       ((ulonglong)local_5df8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  local_5df8.Object = (SWidget *)HandleBreadcrumbClicked;
  local_55f8 = HandleBreadcrumbClicked;
  pTStack_55f0 = local_5df8.SharedReferenceCount.ReferenceController;
  pFVar35 = SBreadcrumbTrail<int>::FArguments::OnCrumbClicked<SWizard>
                      (pFVar35,this,(pmf_7a89d44a *)&local_55f8);
  pEVar85 = &EVisibility::Collapsed;
  pEVar82 = &EVisibility::Collapsed;
  if (param_1->_ShowBreadcrumbs != false) {
    pEVar82 = &EVisibility::Visible;
  }
  pTVar36 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>(&local_5118,pEVar82);
  pFVar35 = TSlateBaseNamedArgs<SBreadcrumbTrail<int>_>::Visibility
                      ((TSlateBaseNamedArgs<SBreadcrumbTrail<int>_> *)pFVar35,pTVar36);
  pTVar37 = MakeTDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs>
                      (&local_5498,"SBreadcrumbTrail<int32>",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
                       ,0x33,&local_5ea0);
  pTVar37 = TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs>::
            Expose<SBreadcrumbTrail<int>_>(pTVar37,&this->BreadcrumbTrail);
  pTVar38 = TSlateDecl<SBreadcrumbTrail<int>,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar37,&local_5700,pFVar35);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBreadcrumbTrail<int>_>(&local_5b00,pTVar38);
  pFVar34 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar34,&local_5b00);
  pFVar33 = SVerticalBox::FArguments::operator+(pFVar33,pFVar34);
  pFVar34 = SVerticalBox::Slot(&local_4538);
  pFVar34 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar34);
  if (param_1->_ShowBreadcrumbs == false) {
    pFVar39 = FMargin::FMargin(&local_5c10,0.0);
  }
  else {
    pFVar39 = FMargin::FMargin(&local_53c0,0.0,__real_4024000000000000,0.0,0.0);
  }
  pTVar40 = TAttribute<FMargin>::TAttribute<FMargin>(&local_4fa8,pFVar39);
  pFVar34 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar34->field_0x18,pTVar40);
  pFVar41 = STextBlock::FArguments::FArguments(&local_6d8);
  pFVar41->_TextStyle = param_1->_PageTitleTextStyle;
  local_5df8.Object = (SWidget *)HandleGetPageTitle;
  local_5df8.SharedReferenceCount.ReferenceController =
       local_5df8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_55e8 = HandleGetPageTitle;
  pTStack_55e0 = local_5df8.SharedReferenceCount.ReferenceController;
  pFVar41 = STextBlock::FArguments::Text<SWizard>(pFVar41,this,(pmf_d1dd2fc0 *)&local_55e8);
  if (param_1->_ShowPageTitle != false) {
    pEVar85 = &EVisibility::Visible;
  }
  pTVar36 = TAttribute<EVisibility>::TAttribute<EVisibility><EVisibility>(&local_50f8,pEVar85);
  pFVar41 = TSlateBaseNamedArgs<STextBlock>::Visibility
                      ((TSlateBaseNamedArgs<STextBlock> *)pFVar41,pTVar36);
  pTVar42 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_54b0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
                       ,0x3b,&local_5e9f);
  pTVar43 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar42,&local_5710,pFVar41);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5b10,pTVar43);
  pFVar34 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar34,&local_5b10);
  pFVar33 = SVerticalBox::FArguments::operator+(pFVar33,pFVar34);
  pFVar44 = ::operator_new(0x58);
  if (pFVar44 == (FSlot *)0x0) {
    local_5c38 = (FSlot *)0x0;
  }
  else {
    *(undefined8 *)pFVar44 = 0;
    *(undefined8 *)&pFVar44->field_0x8 = 0;
    *(undefined8 *)&pFVar44->field_0x10 = 0;
    *(undefined8 *)&pFVar44->field_0x18 = 0;
    *(undefined8 *)&pFVar44->field_0x20 = 0;
    *(undefined8 *)&pFVar44->field_0x28 = 0;
    *(undefined8 *)&pFVar44->field_0x30 = 0;
    *(undefined8 *)&pFVar44->field_0x38 = 0;
    *(undefined8 *)&pFVar44->field_0x40 = 0;
    *(undefined8 *)&pFVar44->field_0x48 = 0;
    *(undefined8 *)&pFVar44->field_0x50 = 0;
    local_5c38 = SVerticalBox::FSlot::FSlot(pFVar44);
  }
  pFVar51 = (FSlot *)0x0;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments(&local_4cb8,(FSlot *)&local_5c38);
  local_5bd8.Value = 1.0;
  local_5bd8.Getter._16_8_ = 0;
  local_5bd8.bIsSet = true;
  local_5bd8.Getter._0_8_ = 0;
  local_5bd8.Getter._8_8_ = 0;
  pFVar34 = SVerticalBox::FSlot::FSlotArguments::FillHeight(&local_4cb8,&local_5bd8);
  pFVar45 = SHorizontalBox::FArguments::FArguments(&local_3d88);
  pFVar46 = ::operator_new(0x58);
  local_5c30 = pFVar51;
  if (pFVar46 != (FSlot *)0x0) {
    *(undefined8 *)pFVar46 = 0;
    *(undefined8 *)&pFVar46->field_0x8 = 0;
    *(undefined8 *)&pFVar46->field_0x10 = 0;
    *(undefined8 *)&pFVar46->field_0x18 = 0;
    *(undefined8 *)&pFVar46->field_0x20 = 0;
    *(undefined8 *)&pFVar46->field_0x28 = 0;
    *(undefined8 *)&pFVar46->field_0x30 = 0;
    *(undefined8 *)&pFVar46->field_0x38 = 0;
    *(undefined8 *)&pFVar46->field_0x40 = 0;
    *(undefined8 *)&pFVar46->field_0x48 = 0;
    *(undefined8 *)&pFVar46->field_0x50 = 0;
    local_5c30 = SHorizontalBox::FSlot::FSlot(pFVar46);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_4da0,(FSlot *)&local_5c30);
  pFVar47 = (FSizeParam *)FAuto::FAuto((FAuto *)local_5238);
  TOptional<FSizeParam>::operator=(&local_4d48,pFVar47);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_5208)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_5238 + 0x10));
  pFVar48 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)(local_4da0 + 0x18),0.0,0.0,__real_41a00000,0.0);
  pFVar49 = SVerticalBox::FArguments::FArguments(&local_34d8);
  local_5d1f = 1;
  local_5d20 = (uchar)EVisibility::Collapsed;
  if (param_1->_ShowPageList != false) {
    local_5d20 = (uchar)EVisibility::Visible;
  }
  local_5d18._16_8_ = 0;
  local_5d18._0_8_ = 0;
  local_5d18._8_8_ = 0;
  *(uchar *)&pFVar49->_padding_ = local_5d20;
  *(undefined1 *)((longlong)&pFVar49->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar49->_padding_,&local_5d18);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_5d18)
  ;
  FLLMScope::FLLMScope(&local_5e24,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5c28 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5c00,&local_5c28,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_5b98,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
             ,0x49,&local_5e9e);
  FMemScope::~FMemScope(&local_5c00);
  FLLMScope::~FLLMScope(&local_5e24);
  local_5c60 = local_5b98._Widget.SharedReferenceCount.ReferenceController;
  if (local_5b98._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5b98._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5b98._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_5c88 = local_5b98._Widget.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar50 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5b98,&local_5720,pFVar49);
  local_5dd0 = pTVar50->Object;
  local_5e38 = (SWidget *)(pTVar50->SharedReferenceCount).ReferenceController;
  if (local_5e38 != (SWidget *)0x0) {
    LOCK();
    *(atomic<int> *)&local_5e38->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&local_5e38->_padding_ + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)&local_5e38->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&local_5e38->_padding_ + 1);
    UNLOCK();
  }
  local_5dc8.ReferenceController = (TReferenceControllerBase<1> *)local_5e38;
  if ((SVerticalBox **)&pFVar48->field_0x8 != &local_5dd0) {
    *(SVerticalBox **)&pFVar48->field_0x8 = local_5dd0;
    local_5dd0 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar48->field_0x10,&local_5dc8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5dc8.ReferenceController);
  pFVar45 = SHorizontalBox::FArguments::operator+(pFVar45,pFVar48);
  pFVar46 = ::operator_new(0x58);
  if (pFVar46 != (FSlot *)0x0) {
    *(undefined8 *)pFVar46 = 0;
    *(undefined8 *)&pFVar46->field_0x8 = 0;
    *(undefined8 *)&pFVar46->field_0x10 = 0;
    *(undefined8 *)&pFVar46->field_0x18 = 0;
    *(undefined8 *)&pFVar46->field_0x20 = 0;
    *(undefined8 *)&pFVar46->field_0x28 = 0;
    *(undefined8 *)&pFVar46->field_0x30 = 0;
    *(undefined8 *)&pFVar46->field_0x38 = 0;
    *(undefined8 *)&pFVar46->field_0x40 = 0;
    *(undefined8 *)&pFVar46->field_0x48 = 0;
    *(undefined8 *)&pFVar46->field_0x50 = 0;
    pFVar51 = SHorizontalBox::FSlot::FSlot(pFVar46);
  }
  local_5bf8 = pFVar51;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_5090,(FSlot *)&local_5bf8);
  local_5090._80_4_ = 0;
  local_5bb8.Getter._16_8_ = 0;
  local_5090._84_1_ = 1;
  local_5bb8.Value = 1.0;
  local_5bb8.bIsSet = true;
  local_5bb8.Getter._0_8_ = 0;
  local_5bb8.Getter._8_8_ = 0;
  pFVar48 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(&local_5090,&local_5bb8);
  pFVar52 = SWidgetSwitcher::FArguments::FArguments(&local_3978);
  FLLMScope::FLLMScope(&local_5e1c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5ca0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5bf0,&local_5ca0,true);
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>
            (&local_5dc0,"SWidgetSwitcher",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
             ,0x52,&local_5e9d);
  FMemScope::~FMemScope(&local_5bf0);
  FLLMScope::~FLLMScope(&local_5e1c);
  if (local_5dc0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5dc0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5dc0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_55d8 = (this->WidgetSwitcher).Object;
  pTStack_55d0 = (this->WidgetSwitcher).SharedReferenceCount.ReferenceController;
  (this->WidgetSwitcher).Object = local_5dc0._Widget.Object;
  (this->WidgetSwitcher).SharedReferenceCount.ReferenceController =
       local_5dc0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_55d0);
  pSVar53 = TSharedPtr<SWidgetSwitcher,1>::operator->(&local_5dc0._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar53,(FSlateBaseNamedArgs *)pFVar52);
  pSVar53 = local_5dc0._Widget.Object;
  SWidgetSwitcher::Construct(local_5dc0._Widget.Object,pFVar52);
  pSVar54 = TSharedPtr<SWidgetSwitcher,1>::operator->(&local_5dc0._Widget);
  if ((pSVar54->_padding_ & 0x10) == 0) {
    cVar22 = (**(code **)(pSVar54->_padding_ + 0x228))(pSVar54);
    bVar23 = 0;
    if (cVar22 == '\0') goto LAB_1430293ab;
  }
  bVar23 = 0x20;
LAB_1430293ab:
  *(byte *)&pSVar54->_padding_ = (byte)pSVar54->_padding_ & 0xdf;
  *(byte *)&pSVar54->_padding_ = (byte)pSVar54->_padding_ | bVar23;
  pSVar54 = TSharedPtr<SWidgetSwitcher,1>::operator->(&local_5dc0._Widget);
  pbVar1 = (byte *)((longlong)&pSVar54->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_5dc0._Widget.Object == (SWidgetSwitcher *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar24)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar19.ReferenceController = local_5dc0._Widget.SharedReferenceCount.ReferenceController;
  local_5e88 = local_5dc0._Widget.SharedReferenceCount.ReferenceController;
  local_5dc0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_5dc0._Widget.Object = (SWidgetSwitcher *)0x0;
  if ((pSVar53 == (SWidgetSwitcher *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar24)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_5b50.Object = (SWidget *)pSVar53;
  local_5b50.SharedReferenceCount.ReferenceController = FVar19.ReferenceController;
  if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar19.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar48 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar48,&local_5b50);
  pFVar45 = SHorizontalBox::FArguments::operator+(pFVar45,pFVar48);
  FLLMScope::FLLMScope(&local_5e20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5be8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5be0,&local_5be8,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_5648,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
             ,0x43,&local_5e9c);
  FMemScope::~FMemScope(&local_5be0);
  FLLMScope::~FLLMScope(&local_5e20);
  pTVar55 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5648,&local_5730,pFVar45);
  local_5b40.Object = (SWidget *)pTVar55->Object;
  local_5de0 = (FArguments *)(pTVar55->SharedReferenceCount).ReferenceController;
  if (local_5de0 != (FArguments *)0x0) {
    LOCK();
    *(atomic<int> *)&local_5de0->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&local_5de0->_padding_ + 1);
    UNLOCK();
  }
  local_5b40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_5de0;
  pFVar34 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar34,&local_5b40);
  pFVar33 = SVerticalBox::FArguments::operator+(pFVar33,pFVar34);
  pFVar44 = ::operator_new(0x58);
  if (pFVar44 == (FSlot *)0x0) {
    local_5cc0 = (FSlot *)0x0;
  }
  else {
    *(undefined8 *)pFVar44 = 0;
    *(undefined8 *)&pFVar44->field_0x8 = 0;
    *(undefined8 *)&pFVar44->field_0x10 = 0;
    *(undefined8 *)&pFVar44->field_0x18 = 0;
    *(undefined8 *)&pFVar44->field_0x20 = 0;
    *(undefined8 *)&pFVar44->field_0x28 = 0;
    *(undefined8 *)&pFVar44->field_0x30 = 0;
    *(undefined8 *)&pFVar44->field_0x38 = 0;
    *(undefined8 *)&pFVar44->field_0x40 = 0;
    *(undefined8 *)&pFVar44->field_0x48 = 0;
    *(undefined8 *)&pFVar44->field_0x50 = 0;
    local_5cc0 = SVerticalBox::FSlot::FSlot(pFVar44);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_4e88,(FSlot *)&local_5cc0);
  pFVar47 = (FSizeParam *)FAuto::FAuto((FAuto *)local_51f0);
  TOptional<FSizeParam>::operator=(&local_4e30,pFVar47);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_51c0)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_51f0 + 0x10));
  pFVar34 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)(local_4e88 + 0x18),0.0);
  local_5d68.ReferenceController =
       (param_1->_PageFooter).Widget.SharedReferenceCount.ReferenceController;
  local_5d70 = (param_1->_PageFooter).Widget.Object;
  if (local_5d68.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5d68.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_5d68.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar34->field_0x8 != &local_5d70) {
    *(SWidget **)&pFVar34->field_0x8 = local_5d70;
    local_5d70 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar34->field_0x10,&local_5d68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5d68.ReferenceController);
  pFVar33 = SVerticalBox::FArguments::operator+(pFVar33,pFVar34);
  pFVar34 = SVerticalBox::Slot(&local_4620);
  pFVar47 = (FSizeParam *)FAuto::FAuto((FAuto *)local_51a8);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar34->field_0x58,pFVar47);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_5178)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_51a8 + 0x10));
  puVar83 = &pFVar34->field_0x48;
  if (local_5c90 != (undefined4 *)puVar83) {
    *(undefined4 *)puVar83 = 3;
    pFVar34->field_0x4c = 1;
  }
  uStack_59d8 = _UNK_150a1f5a8;
  local_59e0 = ___xmm_00000000000000004120000000000000;
  if (puVar83 == (undefined1 *)0x0) {
    pFVar34 = (FSlotArguments *)0x0;
  }
  local_59d0 = 1;
  local_59c8._16_8_ = 0;
  pFVar34->field_0x28 = 1;
  local_59c8._0_8_ = 0;
  local_59c8._8_8_ = 0;
  *(undefined8 *)&pFVar34->field_0x18 = local_59e0;
  *(undefined8 *)&pFVar34->field_0x20 = uStack_59d8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar34->field_0x30,&local_59c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_59c8)
  ;
  local_5e48 = pFVar34;
  if (&pFVar34->field_0x18 == (undefined1 *)0x0) {
    local_5e48 = (FSlotArguments *)0x0;
  }
  pFVar56 = SUniformGridPanel::FArguments::FArguments(&local_3750);
  local_5e68 = pFVar56;
  pIVar30 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar30 + 0x48);
  pFVar31 = ::FName::FName(&local_5660,"StandardDialog.SlotPadding");
  puVar57 = (undefined8 *)(*pcVar2)(pIVar30,*pFVar31,0,&FStyleDefaults::DefaultMargin);
  local_5a90 = *puVar57;
  uStack_5a88 = puVar57[1];
  local_5a80 = 1;
  local_5a78._16_8_ = 0;
  local_5a78._0_8_ = 0;
  local_5a78._8_8_ = 0;
  (pFVar56->_SlotPadding).Value.Left = (float)(int)local_5a90;
  (pFVar56->_SlotPadding).Value.Top = (float)(int)((ulonglong)local_5a90 >> 0x20);
  (pFVar56->_SlotPadding).Value.Right = (float)(int)uStack_5a88;
  (pFVar56->_SlotPadding).Value.Bottom = (float)(int)((ulonglong)uStack_5a88 >> 0x20);
  (pFVar56->_SlotPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar56->_SlotPadding).Getter,
             &local_5a78);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_5a78)
  ;
  pIVar30 = FAppStyle::Get();
  fVar18 = FStyleDefaults::DefaultFloat;
  pcVar2 = *(code **)((longlong)*pIVar30 + 0x28);
  pFVar31 = ::FName::FName(&local_5658,"StandardDialog.MinDesiredSlotWidth");
  local_5d00 = (float)(*pcVar2)(pIVar30,*pFVar31,0,fVar18);
  local_5cfc = 1;
  local_5cf8._16_8_ = 0;
  local_5cf8._0_8_ = 0;
  local_5cf8._8_8_ = 0;
  (pFVar56->_MinDesiredSlotWidth).Value = local_5d00;
  (pFVar56->_MinDesiredSlotWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar56->_MinDesiredSlotWidth).Getter,
             &local_5cf8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_5cf8)
  ;
  pIVar30 = FAppStyle::Get();
  fVar18 = FStyleDefaults::DefaultFloat;
  pcVar2 = *(code **)((longlong)*pIVar30 + 0x28);
  pFVar31 = ::FName::FName(&local_5650,"StandardDialog.MinDesiredSlotHeight");
  local_5ce0 = (float)(*pcVar2)(pIVar30,*pFVar31,0,fVar18);
  local_5cdc = 1;
  local_5cd8._16_8_ = 0;
  local_5cd8._0_8_ = 0;
  local_5cd8._8_8_ = 0;
  (pFVar56->_MinDesiredSlotHeight).Value = local_5ce0;
  (pFVar56->_MinDesiredSlotHeight).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar56->_MinDesiredSlotHeight).Getter,
             &local_5cd8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_5cd8)
  ;
  local_5e08 = SUniformGridPanel::Slot(&local_5288,0,0);
  pFVar58 = SButton::FArguments::FArguments(&local_1c08);
  pFVar58->_ButtonStyle = param_1->_ButtonStyle;
  pFVar58->_TextStyle = param_1->_ButtonTextStyle;
  pFVar58->_HAlign = HAlign_Center;
  pFVar58->_VAlign = VAlign_Center;
  pIVar30 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar30 + 0x48);
  pFVar31 = ::FName::FName(&local_5630,"StandardDialog.ContentPadding");
  puVar57 = (undefined8 *)(*pcVar2)(pIVar30,*pFVar31,0,&FStyleDefaults::DefaultMargin);
  local_5950.Value._0_8_ = *puVar57;
  local_5950.Value._8_8_ = puVar57[1];
  local_5950.bIsSet = true;
  local_5950.Getter._16_8_ = 0;
  local_5950.Getter._0_8_ = 0;
  local_5950.Getter._8_8_ = 0;
  pFVar58 = SButton::FArguments::ContentPadding(pFVar58,&local_5950);
  uStack_5e50 = 0;
  local_5e58 = (TReferenceControllerBase<1> *)HandlePrevButtonIsEnabled;
  lStack_55c0 = (ulonglong)uStack_5e4c << 0x20;
  local_55c8 = HandlePrevButtonIsEnabled;
  pFVar58 = TSlateBaseNamedArgs<SButton>::IsEnabled<SWizard>
                      ((TSlateBaseNamedArgs<SButton> *)pFVar58,this,(pmf_61b52ff2 *)&local_55c8);
  uStack_5e50 = 0;
  local_5e58 = (TReferenceControllerBase<1> *)HandlePrevButtonClicked;
  lStack_55b0 = (ulonglong)uStack_5e4c << 0x20;
  local_55b8 = HandlePrevButtonClicked;
  pFVar58 = SButton::FArguments::OnClicked<SWizard>(pFVar58,this,(pmf_068f7f22 *)&local_55b8);
  uStack_5e50 = 0;
  local_5e58 = (TReferenceControllerBase<1> *)HandlePrevButtonVisibility;
  lStack_55a0 = (ulonglong)uStack_5e4c << 0x20;
  local_55a8 = HandlePrevButtonVisibility;
  pFVar58 = TSlateBaseNamedArgs<SButton>::Visibility<SWizard>
                      ((TSlateBaseNamedArgs<SButton> *)pFVar58,this,(pmf_9faaf41f *)&local_55a8);
  pFVar59 = FText::AsLocalizable_Advanced_LocText
                      (&local_5740,L"SWizard",L"PrevButtonTooltip",L"Go back to the previous step");
  FText::FText(&local_5920.Value,pFVar59);
  local_5920.bIsSet = true;
  local_5920.Getter._16_8_ = 0;
  local_5920.Getter._0_8_ = 0;
  local_5920.Getter._8_8_ = 0;
  pFVar58 = TSlateBaseNamedArgs<SButton>::ToolTipText
                      ((TSlateBaseNamedArgs<SButton> *)pFVar58,&local_5920);
  pFVar45 = SHorizontalBox::FArguments::FArguments(&local_3f90);
  pFVar48 = SHorizontalBox::Slot(&local_4708);
  pFVar48 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar48->field_0x18,0.0,0.0);
  pFVar48 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar48);
  if (local_5c58 != (undefined4 *)&pFVar48->field_0x50) {
    *(undefined4 *)&pFVar48->field_0x50 = 2;
    pFVar48->field_0x54 = 1;
  }
  if (pFVar48 == (FSlotArguments *)0xffffffffffffffb8) {
    pFVar48 = (FSlotArguments *)0x0;
  }
  pFVar60 = SImage::FArguments::FArguments(&local_3028);
  pIVar30 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar30 + 0x50);
  pFVar31 = ::FName::FName(&local_5628,"Wizard.BackIcon");
  local_5a30.Value = (FSlateBrush *)(*pcVar2)(pIVar30,*pFVar31,0,0);
  local_5a30.bIsSet = true;
  local_5a30.Getter._16_8_ = 0;
  local_5a30.Getter._0_8_ = 0;
  local_5a30.Getter._8_8_ = 0;
  pFVar60 = SImage::FArguments::Image(pFVar60,&local_5a30);
  pTVar61 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_54c8,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
                       ,0x7c,&local_5e9b);
  pTVar62 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar61,&local_5750,pFVar60);
  local_5b30.Object = (SWidget *)pTVar62->Object;
  local_5e58 = (pTVar62->SharedReferenceCount).ReferenceController;
  if (local_5e58 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_5e58->SharedReferenceCount = (atomic<int>)((int)local_5e58->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5b30.SharedReferenceCount.ReferenceController = local_5e58;
  pFVar48 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar48,&local_5b30);
  pFVar45 = SHorizontalBox::FArguments::operator+(pFVar45,pFVar48);
  pFVar48 = SHorizontalBox::Slot(&local_4368);
  pFVar48 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar48);
  if (local_5c50 != (undefined4 *)&pFVar48->field_0x50) {
    *(undefined4 *)&pFVar48->field_0x50 = 2;
    pFVar48->field_0x54 = 1;
  }
  if (pFVar48 == (FSlotArguments *)0xffffffffffffffb8) {
    pFVar48 = (FSlotArguments *)0x0;
  }
  pFVar41 = STextBlock::FArguments::FArguments(&local_c30);
  pFVar41->_TextStyle = param_1->_ButtonTextStyle;
  pFVar59 = FText::AsLocalizable_Advanced_LocText(&local_5760,L"SWizard",L"PrevButtonLabel",L"Back")
  ;
  FText::FText(&local_58f0.Value,pFVar59);
  local_58f0.bIsSet = true;
  local_58f0.Getter._16_8_ = 0;
  local_58f0.Getter._0_8_ = 0;
  local_58f0.Getter._8_8_ = 0;
  pFVar41 = STextBlock::FArguments::Text(pFVar41,&local_58f0);
  pTVar42 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_53d8,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
                       ,0x83,&local_5e9a);
  pTVar43 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar42,&local_5770,pFVar41);
  local_5b20.Object = (SWidget *)pTVar43->Object;
  local_5dd8 = (FArguments *)(pTVar43->SharedReferenceCount).ReferenceController;
  if (local_5dd8 != (FArguments *)0x0) {
    LOCK();
    *(atomic<int> *)&local_5dd8->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&local_5dd8->_padding_ + 1);
    UNLOCK();
  }
  local_5b20.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_5dd8;
  pFVar48 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar48,&local_5b20);
  pFVar45 = SHorizontalBox::FArguments::operator+(pFVar45,pFVar48);
  pTVar63 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_53f0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
                       ,0x75,&local_5e99);
  pTVar55 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar63,&local_5780,pFVar45);
  pSVar3 = pTVar55->Object;
  local_5d90 = (pTVar55->SharedReferenceCount).ReferenceController;
  if (local_5d90 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_5d90->SharedReferenceCount = (atomic<int>)((int)local_5d90->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_5d90->SharedReferenceCount = (atomic<int>)((int)local_5d90->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5d60 = (pFVar58->_Content).Widget.Object;
  pTStack_5d58 = (pFVar58->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar58->_Content).Widget.Object = (SWidget *)pSVar3;
  (pFVar58->_Content).Widget.SharedReferenceCount.ReferenceController = local_5d90;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_5d58);
  pTVar64 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_5468,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
                       ,0x6a,&local_5e98);
  pTVar65 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar64,&local_5790,pFVar58);
  local_5ae0.Object = (SWidget *)pTVar65->Object;
  local_5d80 = (pTVar65->SharedReferenceCount).ReferenceController;
  if (local_5d80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_5d80->SharedReferenceCount = (atomic<int>)((int)local_5d80->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5ae0.SharedReferenceCount.ReferenceController = local_5d80;
  pFVar66 = TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_5e08,&local_5ae0);
  local_5e68 = SUniformGridPanel::FArguments::operator+(local_5e68,pFVar66);
  local_5e08 = SUniformGridPanel::Slot(&local_5260,1,0);
  pFVar58 = SButton::FArguments::FArguments(&local_2148);
  pFVar58->_ButtonStyle = param_1->_FinishButtonStyle;
  pFVar58->_TextStyle = param_1->_ButtonTextStyle;
  pFVar58->_HAlign = HAlign_Center;
  pFVar58->_VAlign = VAlign_Center;
  pIVar30 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar30 + 0x48);
  pFVar31 = ::FName::FName(&local_5620,"StandardDialog.ContentPadding");
  puVar57 = (undefined8 *)(*pcVar2)(pIVar30,*pFVar31,0,&FStyleDefaults::DefaultMargin);
  local_58c0.Value._0_8_ = *puVar57;
  local_58c0.Value._8_8_ = puVar57[1];
  local_58c0.bIsSet = true;
  local_58c0.Getter._16_8_ = 0;
  local_58c0.Getter._0_8_ = 0;
  local_58c0.Getter._8_8_ = 0;
  pFVar58 = SButton::FArguments::ContentPadding(pFVar58,&local_58c0);
  uStack_5e70 = 0;
  local_5e78 = (TReferenceControllerBase<1> *)HandleNextButtonIsEnabled;
  lStack_5590 = (ulonglong)(uint)fStack_5e6c << 0x20;
  local_5598 = HandleNextButtonIsEnabled;
  pFVar58 = TSlateBaseNamedArgs<SButton>::IsEnabled<SWizard>
                      ((TSlateBaseNamedArgs<SButton> *)pFVar58,this,(pmf_61b52ff2 *)&local_5598);
  uStack_5e70 = 0;
  local_5e78 = (TReferenceControllerBase<1> *)HandleNextButtonClicked;
  lStack_5580 = (ulonglong)(uint)fStack_5e6c << 0x20;
  local_5588 = HandleNextButtonClicked;
  pFVar58 = SButton::FArguments::OnClicked<SWizard>(pFVar58,this,(pmf_068f7f22 *)&local_5588);
  uStack_5e70 = 0;
  local_5e78 = (TReferenceControllerBase<1> *)HandleNextButtonVisibility;
  lStack_5570 = (ulonglong)(uint)fStack_5e6c << 0x20;
  local_5578 = HandleNextButtonVisibility;
  pFVar58 = TSlateBaseNamedArgs<SButton>::Visibility<SWizard>
                      ((TSlateBaseNamedArgs<SButton> *)pFVar58,this,(pmf_9faaf41f *)&local_5578);
  pFVar59 = FText::AsLocalizable_Advanced_LocText
                      (&local_57a0,L"SWizard",L"NextButtonTooltip",L"Go to the next step");
  FText::FText(&local_5890.Value,pFVar59);
  local_5890.bIsSet = true;
  local_5890.Getter._16_8_ = 0;
  local_5890.Getter._0_8_ = 0;
  local_5890.Getter._8_8_ = 0;
  pFVar58 = TSlateBaseNamedArgs<SButton>::ToolTipText
                      ((TSlateBaseNamedArgs<SButton> *)pFVar58,&local_5890);
  pFVar45 = SHorizontalBox::FArguments::FArguments(&local_4198);
  pFVar48 = SHorizontalBox::Slot(&local_47f0);
  pFVar48 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar48);
  if (local_5c48 != (undefined4 *)&pFVar48->field_0x50) {
    *(undefined4 *)&pFVar48->field_0x50 = 2;
    pFVar48->field_0x54 = 1;
  }
  if (pFVar48 == (FSlotArguments *)0xffffffffffffffb8) {
    pFVar48 = (FSlotArguments *)0x0;
  }
  pFVar41 = STextBlock::FArguments::FArguments(&local_1188);
  pFVar41->_TextStyle = param_1->_ButtonTextStyle;
  pFVar59 = FText::AsLocalizable_Advanced_LocText(&local_57b0,L"SWizard",L"NextButtonLabel",L"Next")
  ;
  FText::FText(&local_5860.Value,pFVar59);
  local_5860.bIsSet = true;
  local_5860.Getter._16_8_ = 0;
  local_5860.Getter._0_8_ = 0;
  local_5860.Getter._8_8_ = 0;
  pFVar41 = STextBlock::FArguments::Text(pFVar41,&local_5860);
  pTVar42 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_5480,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
                       ,0x9e,&local_5e97);
  pTVar43 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar42,&local_57c0,pFVar41);
  local_5ad0.Object = (SWidget *)pTVar43->Object;
  local_5e78 = (pTVar43->SharedReferenceCount).ReferenceController;
  if (local_5e78 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_5e78->SharedReferenceCount = (atomic<int>)((int)local_5e78->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5ad0.SharedReferenceCount.ReferenceController = local_5e78;
  pFVar48 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar48,&local_5ad0);
  pFVar45 = SHorizontalBox::FArguments::operator+(pFVar45,pFVar48);
  pFVar48 = SHorizontalBox::Slot(&local_4280);
  pFVar48 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar48->field_0x18,__real_40000000,0.0);
  pFVar48 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar48);
  if (local_5c98 != (undefined4 *)&pFVar48->field_0x50) {
    *(undefined4 *)&pFVar48->field_0x50 = 2;
    pFVar48->field_0x54 = 1;
  }
  this_05 = (FSlotArguments *)0x0;
  if (pFVar48 != (FSlotArguments *)0xffffffffffffffb8) {
    this_05 = pFVar48;
  }
  pFVar60 = SImage::FArguments::FArguments(&local_32d0);
  pIVar30 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar30 + 0x50);
  pFVar31 = ::FName::FName(&local_5618,"Wizard.NextIcon");
  local_5a08.Value = (FSlateBrush *)(*pcVar2)(pIVar30,*pFVar31,0,0);
  local_5a08.bIsSet = true;
  local_5a08.Getter._16_8_ = 0;
  local_5a08.Getter._0_8_ = 0;
  local_5a08.Getter._8_8_ = 0;
  pFVar60 = SImage::FArguments::Image(pFVar60,&local_5a08);
  pTVar61 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                      (&local_54e0,"SImage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
                       ,0xa8,&local_5e96);
  pTVar62 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar61,&local_57d0,pFVar60);
  local_5ac0.Object = (SWidget *)pTVar62->Object;
  local_5ca8 = (pTVar62->SharedReferenceCount).ReferenceController;
  if (local_5ca8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_5ca8->SharedReferenceCount = (atomic<int>)((int)local_5ca8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5ac0.SharedReferenceCount.ReferenceController = local_5ca8;
  pFVar48 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)this_05,&local_5ac0);
  pFVar45 = SHorizontalBox::FArguments::operator+(pFVar45,pFVar48);
  pTVar63 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_54f8,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
                       ,0x98,&local_5e95);
  pTVar55 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar63,&local_57e0,pFVar45);
  pTVar4 = (pTVar55->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar55->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5d50 = (pFVar58->_Content).Widget.Object;
  pTStack_5d48 = (pFVar58->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar58->_Content).Widget.Object = (SWidget *)pSVar3;
  (pFVar58->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_5d48);
  pTVar64 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_5510,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
                       ,0x8d,&local_5e94);
  pTVar65 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar64,&local_57f0,pFVar58);
  local_5ab0.Object = (SWidget *)pTVar65->Object;
  local_5cb0 = (pTVar65->SharedReferenceCount).ReferenceController;
  if (local_5cb0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_5cb0->SharedReferenceCount = (atomic<int>)((int)local_5cb0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5ab0.SharedReferenceCount.ReferenceController = local_5cb0;
  pFVar66 = TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_5e08,&local_5ab0);
  local_5eb8 = SUniformGridPanel::FArguments::operator+(local_5e68,pFVar66);
  pFVar66 = SUniformGridPanel::Slot(&local_52b0,2,0);
  pFVar58 = SButton::FArguments::FArguments(&local_2688);
  pFVar58->_ButtonStyle = param_1->_FinishButtonStyle;
  pFVar58->_TextStyle = param_1->_ButtonTextStyle;
  pFVar58->_HAlign = HAlign_Center;
  pFVar58->_VAlign = VAlign_Center;
  pIVar30 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar30 + 0x48);
  pFVar31 = ::FName::FName(&local_5610,"StandardDialog.ContentPadding");
  puVar57 = (undefined8 *)(*pcVar2)(pIVar30,*pFVar31,0,&FStyleDefaults::DefaultMargin);
  local_5830.Value._0_8_ = *puVar57;
  local_5830.Value._8_8_ = puVar57[1];
  local_5830.bIsSet = true;
  local_5830.Getter._16_8_ = 0;
  local_5830.Getter._0_8_ = 0;
  local_5830.Getter._8_8_ = 0;
  pFVar58 = SButton::FArguments::ContentPadding(pFVar58,&local_5830);
  pTVar67 = TAttribute<bool>::TAttribute<bool>(&local_50d8,&param_1->_CanFinish);
  *(bool *)&pFVar58->_padding_ = pTVar67->Value;
  *(bool *)((longlong)&pFVar58->_padding_ + 1) = pTVar67->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar58->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar67->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar67->Getter);
  local_5e08 = (FSlotArguments *)HandleFinishButtonClicked;
  uStack_5e00 = 0;
  lStack_5560 = (ulonglong)uStack_5dfc << 0x20;
  local_5568 = HandleFinishButtonClicked;
  pFVar58 = SButton::FArguments::OnClicked<SWizard>(pFVar58,this,(pmf_068f7f22 *)&local_5568);
  pTVar68 = TAttribute<FText>::TAttribute<FText>(&local_4f78,&param_1->_FinishButtonToolTip);
  pFVar58 = TSlateBaseNamedArgs<SButton>::ToolTipText
                      ((TSlateBaseNamedArgs<SButton> *)pFVar58,pTVar68);
  pTVar68 = TAttribute<FText>::TAttribute<FText>(&local_4f48,&param_1->_FinishButtonText);
  pFVar58 = SButton::FArguments::Text(pFVar58,pTVar68);
  pTVar64 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_5528,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
                       ,0xb1,&local_5e93);
  local_5df8.Object = (SWidget *)(pTVar64->_Widget).Object;
  local_5df8.SharedReferenceCount.ReferenceController =
       (pTVar64->_Widget).SharedReferenceCount.ReferenceController;
  if (local_5df8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5df8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5df8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSharedPtr<SWidget,1>::operator=(&this->FinishButton,&local_5df8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5df8.SharedReferenceCount.ReferenceController);
  pTVar65 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar64,&local_5800,pFVar58);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5b60,pTVar65);
  pFVar66 = TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar66,&local_5b60);
  pFVar56 = SUniformGridPanel::FArguments::operator+(local_5eb8,pFVar66);
  pTVar69 = MakeTDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>
                      (&local_5438,"SUniformGridPanel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
                       ,0x62,&local_5e92);
  pTVar69 = TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::Expose<SUniformGridPanel>
                      (pTVar69,&local_5c20);
  pTVar70 = TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar69,&local_5538,pFVar56);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SUniformGridPanel>(&local_5b70,pTVar70);
  pFVar34 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_5e48,&local_5b70);
  pFVar33 = SVerticalBox::FArguments::operator+(pFVar33,pFVar34);
  this_00 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_5420,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
                       ,0x2e,&local_5e91);
  pTVar50 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_5548,pFVar33);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_5b80,pTVar50);
  pFVar29 = SBorder::FArguments::operator[](local_5cb8,&local_5b80);
  this_01 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_5408,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
                       ,0x2a,&local_5e90);
  pTVar71 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_5558,pFVar29);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_5aa0,pTVar71);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_5aa0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5aa0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5558.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5408._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b80.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5548.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5420._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b70.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5538.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5438._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b60.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5800.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5528._Widget.SharedReferenceCount.ReferenceController);
  SButton::FArguments::~FArguments(&local_2688);
  SUniformGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_52b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5cb0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_57f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5510._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_57e0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_54f8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5ca8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_57d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_54e0._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_32d0);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_4280);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5e78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_57c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5480._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_57b0);
  STextBlock::FArguments::~FArguments(&local_1188);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_47f0);
  SHorizontalBox::FArguments::~FArguments(&local_4198);
  FText::~FText(&local_57a0);
  SButton::FArguments::~FArguments(&local_2148);
  SUniformGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5260);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5d80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5790.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5468._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5d90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5780.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_53f0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5dd8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5770.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_53d8._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_5760);
  STextBlock::FArguments::~FArguments(&local_c30);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_4368);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5e58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5750.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_54c8._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_3028);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_4708);
  SHorizontalBox::FArguments::~FArguments(&local_3f90);
  FText::~FText(&local_5740);
  SButton::FArguments::~FArguments(&local_1c08);
  SUniformGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5288);
  SUniformGridPanel::FArguments::~FArguments(&local_3750);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_4620);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)local_4e88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5de0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5730.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5648._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5e88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5e88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5dc0._Widget.SharedReferenceCount.ReferenceController);
  SWidgetSwitcher::FArguments::~FArguments(&local_3978);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_5090);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5e38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5720.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b98._Widget.SharedReferenceCount.ReferenceController);
  SVerticalBox::FArguments::~FArguments(&local_34d8);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)local_4da0);
  SHorizontalBox::FArguments::~FArguments(&local_3d88);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_4cb8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b10.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5710.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_54b0._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_6d8);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_4538);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b00.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5700.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5498._Widget.SharedReferenceCount.ReferenceController);
  SBreadcrumbTrail<int>::FArguments::~FArguments(&local_2d80);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_4450);
  SVerticalBox::FArguments::~FArguments(&local_3b80);
  SBorder::FArguments::~FArguments(&local_2a68);
  if (param_1->_ShowCancelButton != false) {
    this_02 = TSharedPtr<SUniformGridPanel,1>::operator->(&local_5c20);
    this_03 = SUniformGridPanel::AddSlot(this_02,&local_178,3,0);
    pFVar58 = SButton::FArguments::FArguments(&local_16c8);
    pFVar58->_ButtonStyle = param_1->_CancelButtonStyle;
    pFVar58->_TextStyle = param_1->_ButtonTextStyle;
    pFVar58->_HAlign = HAlign_Center;
    pFVar58->_VAlign = VAlign_Center;
    pIVar30 = FAppStyle::Get();
    pcVar2 = *(code **)((longlong)*pIVar30 + 0x48);
    pFVar31 = ::FName::FName(&local_5608,"StandardDialog.ContentPadding");
    pFVar39 = (FMargin *)(*pcVar2)(pIVar30,*pFVar31,0,&FStyleDefaults::DefaultMargin);
    pTVar40 = TAttribute<FMargin>::TAttribute<FMargin><FMargin>(&local_4f18,pFVar39);
    pFVar58 = SButton::FArguments::ContentPadding(pFVar58,pTVar40);
    local_5e38 = (SWidget *)HandleCancelButtonClicked;
    uStack_5e30 = 0;
    lStack_56e0 = (ulonglong)uStack_5e2c << 0x20;
    local_56e8 = HandleCancelButtonClicked;
    pFVar58 = SButton::FArguments::OnClicked<SWizard>(pFVar58,this,(pmf_068f7f22 *)&local_56e8);
    pFVar59 = FText::AsLocalizable_Advanced_LocText
                        (&local_56b8,L"SWizard",L"CancelButtonTooltip",L"Cancel this wizard");
    pTVar68 = TAttribute<FText>::TAttribute<FText>(&local_4ee8,pFVar59);
    pFVar58 = TSlateBaseNamedArgs<SButton>::ToolTipText
                        ((TSlateBaseNamedArgs<SButton> *)pFVar58,pTVar68);
    pFVar59 = FText::AsLocalizable_Advanced_LocText
                        (&local_56c8,L"SWizard",L"CancelButtonLabel",L"Cancel");
    pTVar68 = TAttribute<FText>::TAttribute<FText>(&local_4eb8,pFVar59);
    pFVar58 = SButton::FArguments::Text(pFVar58,pTVar68);
    pTVar64 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                        (&local_5450,"SButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
                         ,0xc5,&local_5e8f);
    pTVar65 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar64,&local_56d8,pFVar58);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5af0,pTVar65);
    TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)this_03,&local_5af0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5af0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_56d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5450._Widget.SharedReferenceCount.ReferenceController);
    FText::~FText(&local_56c8);
    FText::~FText(&local_56b8);
    SButton::FArguments::~FArguments(&local_16c8);
    TPanelChildren<SUniformGridPanel::FSlot>::FScopedWidgetSlotArguments::
    ~FScopedWidgetSlotArguments(&local_178);
  }
  uVar17 = _UNK_150a1f5d8;
  uVar15 = ___xmm_4080000041c000004080000041000000;
  uVar84 = 0;
  if (0 < (param_1->Slots).ArrayNum) {
    local_5e48 = (FSlotArguments *)0x0;
    do {
      uVar26 = 0;
      if ((int)uVar84 < (param_1->Slots).ArrayNum) {
        uVar26 = ~uVar84 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar57 = *(undefined8 **)((param_1->Slots).AllocatorInstance.Data + (longlong)local_5e48);
      pFVar5 = (this->Pages).Array.AllocatorInstance.Data;
      local_5e18[0] = puVar57;
      if (((pFVar5 <= (FScriptContainerElement *)local_5e18) &&
          ((FScriptContainerElement *)local_5e18 <
           pFVar5 + (longlong)(this->Pages).Array.ArrayMax * 8)) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar24)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar27 = (this->Pages).Array.ArrayNum;
      if (iVar27 == (this->Pages).Array.ArrayMax) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&this->Pages,&(this->Pages).Array.ArrayMax);
      }
      pSVar20 = local_5c88;
      (this->Pages).Array.ArrayNum = iVar27 + 1;
      *(undefined8 **)((this->Pages).Array.AllocatorInstance.Data + (longlong)iVar27 * 8) =
           local_5e18[0];
      if (param_1->_ShowPageList != false) {
        if ((local_5c88 == (SVerticalBox *)0x0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar24)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_04 = ::operator_new(0x58);
        pFVar44 = (FSlot *)0x0;
        if (this_04 != (FSlot *)0x0) {
          *(undefined8 *)this_04 = 0;
          *(undefined8 *)&this_04->field_0x8 = 0;
          *(undefined8 *)&this_04->field_0x10 = 0;
          *(undefined8 *)&this_04->field_0x18 = 0;
          *(undefined8 *)&this_04->field_0x20 = 0;
          *(undefined8 *)&this_04->field_0x28 = 0;
          *(undefined8 *)&this_04->field_0x30 = 0;
          *(undefined8 *)&this_04->field_0x38 = 0;
          *(undefined8 *)&this_04->field_0x40 = 0;
          *(undefined8 *)&this_04->field_0x48 = 0;
          *(undefined8 *)&this_04->field_0x50 = 0;
          pFVar44 = SVerticalBox::FSlot::FSlot(this_04);
        }
        local_5c80 = pFVar44;
        SVerticalBox::FSlot::FSlotArguments::FSlotArguments
                  ((FSlotArguments *)local_53a8,(FSlot *)&local_5c80);
        local_52b8 = -1;
        local_53b0 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
        local_52c0 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar20->field_0x218;
        pFVar47 = (FSizeParam *)FAuto::FAuto((FAuto *)local_5160);
        TOptional<FSizeParam>::operator=(&local_5350,pFVar47);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  (&local_5130);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_5160 + 0x10));
        pFVar72 = SCheckBox::FArguments::FArguments(&local_4bd0);
        (pFVar72->_IsChecked).bIsSet = true;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(pFVar72->_IsChecked).Getter,(FWriteAccessScope *)&local_5990);
        local_5978 = &(pFVar72->_IsChecked).Getter.field_0x8;
        puVar73 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_5978);
        pFVar56 = local_5e68;
        if (puVar73 != (undefined8 *)0x0) {
          fStack_5d84 = local_5c10.Bottom;
          local_5d90 = (TReferenceControllerBase<1> *)HandlePageButtonIsChecked;
          uStack_5d88 = 0;
          pTVar74 = TSharedFromThis<SWidget,1>::AsShared
                              ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_56a8);
          pFVar56 = (FArguments *)(pTVar74->SharedReferenceCount).ReferenceController;
          local_5e38 = pTVar74->Object;
          if (pFVar56 != (FArguments *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar56->_padding_ =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar56->_padding_ + 1);
            UNLOCK();
            LOCK();
            *(atomic<int> *)&pFVar56->_padding_ =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar56->_padding_ + 1);
            UNLOCK();
          }
          bVar10 = true;
          bVar9 = true;
          bVar8 = true;
          *puVar73 = &
                     ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__H__6B_
          ;
          *(uint *)(puVar73 + 1) = uVar84;
          local_5e68 = pFVar56;
          local_5de0 = pFVar56;
          uVar75 = FDelegateHandle::GenerateNewID();
          puVar73[2] = uVar75;
          *puVar73 = &
                     ___7__TBaseSPMethodDelegateInstance__00__CBVSWizard___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__H__6B_
          ;
          puVar73[3] = local_5e38;
          puVar73[4] = pFVar56;
          if (pFVar56 != (FArguments *)0x0) {
            LOCK();
            ((atomic<int> *)&pFVar56->_padding_)[1] =
                 (atomic<int>)((int)((atomic<int> *)&pFVar56->_padding_)[1] + 1);
            UNLOCK();
          }
          puVar73[5] = local_5d90;
          puVar73[6] = CONCAT44(fStack_5d84,uStack_5d88);
        }
        if (bVar9) {
          bVar9 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar56);
        }
        if (bVar10) {
          bVar10 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_5de0);
        }
        if (bVar8) {
          bVar8 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_56a8.SharedReferenceCount.ReferenceController);
        }
        if (local_5990.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5990.Accessor,&local_5990);
        }
        *(undefined1 *)((longlong)&pFVar72->_padding_ + 1) = 1;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar72->_padding_,
                   (FWriteAccessScope *)&local_5970);
        local_5958 = &pFVar72->_padding_;
        puVar73 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_5958);
        pFVar66 = local_5e08;
        if (puVar73 != (undefined8 *)0x0) {
          local_5d80 = (TReferenceControllerBase<1> *)HandlePageButtonIsEnabled;
          fStack_5d74 = local_5c10.Bottom;
          uStack_5d78 = 0;
          pTVar74 = TSharedFromThis<SWidget,1>::AsShared
                              ((TSharedFromThis<SWidget,1> *)&local_5de8->_padding_,&local_5698);
          pFVar66 = (FSlotArguments *)(pTVar74->SharedReferenceCount).ReferenceController;
          local_5e38 = pTVar74->Object;
          if (pFVar66 != (FSlotArguments *)0x0) {
            LOCK();
            ((TReferenceControllerBase<1> *)pFVar66)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)((TReferenceControllerBase<1> *)pFVar66)->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            ((TReferenceControllerBase<1> *)pFVar66)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)((TReferenceControllerBase<1> *)pFVar66)->SharedReferenceCount + 1);
            UNLOCK();
          }
          bVar13 = true;
          bVar12 = true;
          bVar11 = true;
          *puVar73 = &
                     ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__H__6B_
          ;
          *(uint *)(puVar73 + 1) = uVar84;
          local_5e58 = (TReferenceControllerBase<1> *)pFVar66;
          local_5e08 = pFVar66;
          uVar75 = FDelegateHandle::GenerateNewID();
          puVar73[2] = uVar75;
          *puVar73 = &
                     ___7__TBaseSPMethodDelegateInstance__00__CBVSWizard___00__A6A_NXZUFDefaultDelegateUserPolicy__H__6B_
          ;
          puVar73[3] = local_5e38;
          puVar73[4] = pFVar66;
          if (pFVar66 != (FSlotArguments *)0x0) {
            LOCK();
            ((TReferenceControllerBase<1> *)pFVar66)->WeakReferenceCount =
                 (atomic<int>)
                 ((int)((TReferenceControllerBase<1> *)pFVar66)->WeakReferenceCount + 1);
            UNLOCK();
          }
          puVar73[5] = local_5d80;
          puVar73[6] = CONCAT44(fStack_5d74,uStack_5d78);
        }
        if (bVar11) {
          bVar11 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar66);
        }
        if (bVar12) {
          bVar12 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_5e58);
        }
        if (bVar13) {
          bVar13 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_5698.SharedReferenceCount.ReferenceController);
        }
        if (local_5970.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5970.Accessor,&local_5970);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pFVar72->_OnCheckStateChanged,(FWriteAccessScope *)&local_59b0);
        local_5998 = &(pFVar72->_OnCheckStateChanged).field_0x8;
        puVar73 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_5998);
        if (puVar73 != (undefined8 *)0x0) {
          local_5e78 = (TReferenceControllerBase<1> *)HandlePageButtonCheckStateChanged;
          fStack_5e6c = local_5c10.Bottom;
          uStack_5e70 = 0;
          pTVar76 = TSharedFromThis<SWidget,1>::AsShared
                              ((TSharedFromThis<SWidget,1> *)&local_5de8->_padding_,&local_5688);
          local_5eb8 = (FArguments *)(pTVar76->SharedReferenceCount).ReferenceController;
          local_5e38 = pTVar76->Object;
          if (local_5eb8 != (FArguments *)0x0) {
            LOCK();
            *(int *)&local_5eb8->_padding_ = (int)local_5eb8->_padding_ + 1;
            UNLOCK();
            LOCK();
            *(int *)&local_5eb8->_padding_ = (int)local_5eb8->_padding_ + 1;
            UNLOCK();
          }
          bVar14 = true;
          bVar25 = true;
          *puVar73 = &
                     ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__H__6B_
          ;
          *(uint *)(puVar73 + 1) = uVar84;
          local_5dd8 = local_5eb8;
          uVar75 = FDelegateHandle::GenerateNewID();
          puVar73[2] = uVar75;
          *puVar73 = &
                     ___7__TBaseSPMethodDelegateInstance__0A_VSWizard___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__H__6B_
          ;
          puVar73[3] = local_5e38;
          puVar73[4] = local_5eb8;
          if (local_5eb8 != (FArguments *)0x0) {
            LOCK();
            puVar83 = (undefined1 *)((longlong)&local_5eb8->_padding_ + 4);
            *(int *)puVar83 = *(int *)puVar83 + 1;
            UNLOCK();
          }
          puVar73[5] = local_5e78;
          puVar73[6] = CONCAT44(fStack_5e6c,uStack_5e70);
        }
        if (bVar25) {
          bVar25 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_5eb8);
        }
        if (bVar14) {
          bVar14 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_5688.SharedReferenceCount.ReferenceController);
        }
        if (local_59b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_59b0.Accessor,&local_59b0);
        }
        uVar21 = ___xmm_4080000041c000004080000041000000;
        local_5a50 = 1;
        local_5a48._16_8_ = 0;
        local_5a60 = uVar15;
        uStack_5a58 = uVar17;
        local_5a48._0_8_ = 0;
        local_5a48._8_8_ = 0;
        ___xmm_4080000041c000004080000041000000 = (undefined4)uVar15;
        _UNK_150a1f5d4 = SUB84(uVar15,4);
        uVar16 = _UNK_150a1f5d4;
        (pFVar72->_Padding).Value.Left = (float)___xmm_4080000041c000004080000041000000;
        ___xmm_4080000041c000004080000041000000 = uVar21;
        uVar21 = _UNK_150a1f5d8;
        (pFVar72->_Padding).Value.Top = (float)uVar16;
        _UNK_150a1f5d8 = (undefined4)uVar17;
        _UNK_150a1f5dc = SUB84(uVar17,4);
        uVar16 = _UNK_150a1f5dc;
        (pFVar72->_Padding).Value.Right = (float)_UNK_150a1f5d8;
        _UNK_150a1f5d8 = uVar21;
        (pFVar72->_Padding).Value.Bottom = (float)uVar16;
        (pFVar72->_Padding).bIsSet = true;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar72->_Padding).Getter,
                   &local_5a48);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  (&local_5a48);
        pIVar30 = FAppStyle::Get();
        ::FName::FName(&local_5600,"ToggleButtonCheckbox");
        pFVar77 = (FCheckBoxStyle *)
                  (**(code **)((longlong)*pIVar30 + 0xa0))(pIVar30,FCheckBoxStyle::TypeName);
        if (pFVar77 == (FCheckBoxStyle *)0x0) {
          pFVar77 = FCheckBoxStyle::GetDefault();
        }
        pFVar72->_Style = pFVar77;
        pSVar6 = (SWidget *)*puVar57;
        pTVar4 = (TReferenceControllerBase<1> *)puVar57[1];
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_5678 = (pFVar72->_Content).Widget.Object;
        pTStack_5670 = (pFVar72->_Content).Widget.SharedReferenceCount.ReferenceController;
        (pFVar72->_Content).Widget.Object = pSVar6;
        (pFVar72->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_5670);
        FLLMScope::FLLMScope
                  (&local_5e28,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
        local_5c78 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(&local_5c70,&local_5c78,true);
        TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
        TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                  (&local_5da8,"SCheckBox",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
                   ,0xdd,local_5e8e);
        FMemScope::~FMemScope(&local_5c70);
        FLLMScope::~FLLMScope(&local_5e28);
        pSVar78 = TSharedPtr<SCheckBox,1>::operator->(&local_5da8._Widget);
        SWidget::SWidgetConstruct((SWidget *)pSVar78,(FSlateBaseNamedArgs *)pFVar72);
        pSVar78 = local_5da8._Widget.Object;
        SCheckBox::Construct(local_5da8._Widget.Object,pFVar72);
        pSVar79 = TSharedPtr<SCheckBox,1>::operator->(&local_5da8._Widget);
        if ((pSVar79->_padding_ & 0x10) == 0) {
          cVar22 = (**(code **)(pSVar79->_padding_ + 0x228))(pSVar79);
          bVar23 = 0;
          if (cVar22 != '\0') goto LAB_14302b4d9;
        }
        else {
LAB_14302b4d9:
          bVar23 = 0x20;
        }
        *(byte *)&pSVar79->_padding_ = (byte)pSVar79->_padding_ & 0xdf;
        *(byte *)&pSVar79->_padding_ = (byte)pSVar79->_padding_ | bVar23;
        pSVar79 = TSharedPtr<SCheckBox,1>::operator->(&local_5da8._Widget);
        pbVar1 = (byte *)((longlong)&pSVar79->_padding_ + 1);
        *pbVar1 = *pbVar1 | 4;
        if ((pSVar78 == (SCheckBox *)0x0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x416,L""), bVar24)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar19.ReferenceController = local_5da8._Widget.SharedReferenceCount.ReferenceController;
        local_5da8._Widget.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_5da8._Widget.Object = (SCheckBox *)0x0;
        if ((pSVar78 == (SCheckBox *)0x0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x26c,L""), bVar24)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_5d28.ReferenceController = FVar19.ReferenceController;
        if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar19.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          (FVar19.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_53a8._8_8_ = pSVar78;
        local_5d30 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(local_5398,&local_5d28);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_5d28.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar19.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar19.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4bd0._OnGetMenuContent);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                   &local_4bd0._BorderBackgroundColor.Getter);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4bd0._ForegroundColor.Getter)
        ;
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4bd0._Padding.Getter);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4bd0._IsChecked.Getter);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4bd0._OnCheckStateChanged);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4bd0._Content.Widget.SharedReferenceCount.ReferenceController);
        FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4bd0);
        local_53b0 = &___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_;
        if (local_53a8._0_8_ != 0) {
          if (local_52b8 == -1) {
            TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_52c0,(FSlotArguments *)local_53a8);
          }
          else {
            TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                      (local_52c0,(FSlotArguments *)local_53a8,local_52b8);
          }
        }
        SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
                  ((FSlotArguments *)local_53a8);
        this = local_5de8;
        param_1 = local_5c68;
      }
      if (((this->WidgetSwitcher).Object == (SWidgetSwitcher *)0x0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar24)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar80 = SWidgetSwitcher::AddSlot((this->WidgetSwitcher).Object,&local_108,-1);
      local_5d40 = puVar57[0xc];
      local_5d38.ReferenceController = (TReferenceControllerBase<1> *)puVar57[0xd];
      if (local_5d38.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_5d38.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_5d38.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (&pFVar80->_padding_ != &local_5d40) {
        pFVar80->_padding_ = local_5d40;
        local_5d40 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&pFVar80->_padding_,&local_5d38);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_5d38.ReferenceController);
      TPanelChildren<FBasicLayoutWidgetSlot>::FScopedWidgetSlotArguments::
      ~FScopedWidgetSlotArguments(&local_108);
      local_5e48 = (FSlotArguments *)((longlong)local_5e48 + 8);
      uVar84 = uVar84 + 1;
    } while ((int)uVar84 < (param_1->Slots).ArrayNum);
  }
  TDelegate<int___cdecl(int),FDefaultDelegateUserPolicy>::operator=
            (&this->OnGetNextPageIndex,&param_1->_OnGetNextPageIndex);
  TDelegate<int___cdecl(int),FDefaultDelegateUserPolicy>::operator=
            (&this->OnTryToMoveToPage,&param_1->_OnTryToMoveToPage);
  if (((this->WidgetSwitcher).Object == (SWidgetSwitcher *)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar25)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SWidgetSwitcher::SetActiveWidgetIndex((this->WidgetSwitcher).Object,-1);
  piVar81 = TAttribute<int>::Get(&param_1->_InitialPageIndex);
  ShowPage(this,*piVar81);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c20.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5c60);
  return;
}

// GetCurrentPageIndex @ 143033800

int __thiscall SWizard::GetCurrentPageIndex(SWizard *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  if ((this->WidgetSwitcher).Object == (SWidgetSwitcher *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  piVar4 = TAttribute<int>::Get(&((this->WidgetSwitcher).Object)->WidgetIndex);
  return *piVar4;
}

// GetNextPageIndex @ 1430348a0

int __thiscall SWizard::GetNextPageIndex(SWizard *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  longlong *plVar6;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if ((this->WidgetSwitcher).Object == (SWidgetSwitcher *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  piVar5 = TAttribute<int>::Get(&((this->WidgetSwitcher).Object)->WidgetIndex);
  iVar4 = *piVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetNextPageIndex,
             &local_38);
  if ((*(int *)&(this->OnGetNextPageIndex).field_0x10 != 0) &&
     (plVar6 = *(longlong **)&(this->OnGetNextPageIndex).field_0x8, plVar6 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar6 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetNextPageIndex
                 ,&local_20);
      if (*(int *)&(this->OnGetNextPageIndex).field_0x10 == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)&(this->OnGetNextPageIndex).field_0x8;
      }
      iVar4 = (**(code **)(*plVar6 + 0x60))(plVar6,iVar4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      return iVar4;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  return iVar4 + 1;
}

// GetNumPages @ 1430349a0

int __thiscall SWizard::GetNumPages(SWizard *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->WidgetSwitcher).Object != (SWidgetSwitcher *)0x0) {
    return (((this->WidgetSwitcher).Object)->AllChildren).Children.ArrayNum;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return (((this->WidgetSwitcher).Object)->AllChildren).Children.ArrayNum;
}

// GetPageIndex @ 1430355b0

int __thiscall SWizard::GetPageIndex(SWizard *this,TSharedPtr<SWidget,1> *param_1)

{
  SWidgetSwitcher *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedRef<SWidget,1> *pTVar4;
  TSharedRef<SWidget,1> local_18;
  
  if (param_1->Object == (SWidget *)0x0) {
    return -1;
  }
  if ((this->WidgetSwitcher).Object == (SWidgetSwitcher *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  this_00 = (this->WidgetSwitcher).Object;
  pTVar4 = TSharedPtr<SWidget,1>::ToSharedRef(param_1,&local_18);
  iVar3 = SWidgetSwitcher::GetWidgetIndex(this_00,pTVar4);
  return iVar3;
}

// GetPrevPageIndex @ 143035640

int __thiscall SWizard::GetPrevPageIndex(SWizard *this)

{
  SBreadcrumbTrail<int> *pSVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ForAnyElementType local_18;
  int local_10;
  int iStack_c;
  
  uVar9 = 0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  iStack_c = 0;
  if (((this->BreadcrumbTrail).Object == (SBreadcrumbTrail<int> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  pSVar1 = (this->BreadcrumbTrail).Object;
  uVar10 = uVar9;
  if (0 < (pSVar1->CrumbList).ArrayNum) {
    do {
      uVar7 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar7 < (pSVar1->CrumbList).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      pFVar8 = (pSVar1->CrumbList).AllocatorInstance.Data + uVar10 + 0x48;
      if (((local_18.Data <= pFVar8) && (pFVar8 < local_18.Data + (longlong)iStack_c * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if (local_10 == iStack_c) {
        local_10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_18,&iStack_c);
      }
      lVar6 = (longlong)local_10;
      uVar9 = (ulonglong)(uVar7 + 1);
      local_10 = local_10 + 1;
      *(undefined4 *)(local_18.Data + lVar6 * 4) = *(undefined4 *)pFVar8;
      uVar10 = uVar10 + 0x50;
    } while ((int)(uVar7 + 1) < (pSVar1->CrumbList).ArrayNum);
  }
  if (local_10 < 1) {
    iVar4 = -1;
  }
  else {
    uVar7 = local_10 - 1;
    uVar5 = 0;
    if ((int)uVar7 < local_10) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    iVar4 = *(int *)(local_18.Data + (longlong)(int)uVar7 * 4);
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return iVar4;
}

// GetWidgetToFocusOnActivate @ 143036200

TSharedPtr<SWidget,1> * __thiscall
SWizard::GetWidgetToFocusOnActivate(SWizard *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->FinishButton).Object;
  pTVar1 = (this->FinishButton).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// HandleBreadcrumbClicked @ 143036230

void __thiscall SWizard::HandleBreadcrumbClicked(SWizard *this,int *param_1)

{
  SBreadcrumbTrail<int> *pSVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (((this->BreadcrumbTrail).Object == (SBreadcrumbTrail<int> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = SBreadcrumbTrail<int>::PeekCrumb((this->BreadcrumbTrail).Object);
  if (iVar4 != *param_1) {
    do {
      if (((this->BreadcrumbTrail).Object == (SBreadcrumbTrail<int> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      SBreadcrumbTrail<int>::PopCrumb((this->BreadcrumbTrail).Object);
      if (((this->BreadcrumbTrail).Object == (SBreadcrumbTrail<int> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pSVar1 = (this->BreadcrumbTrail).Object;
      if (((pSVar1->CrumbList).ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("HasCrumbs()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Navigation\\SBreadcrumbTrail.h"
                             ,0x10c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = (pSVar1->CrumbList).ArrayNum;
      uVar6 = iVar4 - 1;
      uVar5 = 0;
      if ((int)uVar6 < iVar4) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    } while (*(int *)((pSVar1->CrumbList).AllocatorInstance.Data +
                     (longlong)(pSVar1->CrumbList).ArrayNum * 0x50 + -8) != *param_1);
  }
  if (((this->BreadcrumbTrail).Object == (SBreadcrumbTrail<int> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SBreadcrumbTrail<int>::PopCrumb((this->BreadcrumbTrail).Object);
  ShowPage(this,*param_1);
  return;
}

// HandleCancelButtonClicked @ 143036400

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall SWizard::HandleCancelButtonClicked(SWizard *this,FReply *__return_storage_ptr__)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCanceled,&local_28);
  if ((*(int *)&(this->OnCanceled).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnCanceled).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// HandleFinishButtonClicked @ 143036460

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall SWizard::HandleFinishButtonClicked(SWizard *this,FReply *__return_storage_ptr__)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnFinished,&local_28);
  if ((*(int *)&(this->OnFinished).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnFinished).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// HandleGetPageTitle @ 1430364c0

FText * __thiscall SWizard::HandleGetPageTitle(SWizard *this,FText *__return_storage_ptr__)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  FText *pFVar4;
  uint *puVar5;
  ITextData *pIVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  if ((this->WidgetSwitcher).Object == (SWidgetSwitcher *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar8 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar8)();
      return pFVar4;
    }
  }
  puVar5 = (uint *)TAttribute<int>::Get(&((this->WidgetSwitcher).Object)->WidgetIndex);
  uVar1 = *puVar5;
  if (((int)uVar1 < 0) || ((this->Pages).Array.ArrayNum <= (int)uVar1)) {
    pFVar4 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar6 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar6;
    if (pIVar6 == (ITextData *)0x0) goto LAB_1430365d8;
    pcVar8 = *(code **)((longlong)*pIVar6 + 8);
    puVar7 = local_res18;
  }
  else {
    uVar3 = 0;
    if ((int)uVar1 < (this->Pages).Array.ArrayNum) {
      uVar3 = ~uVar1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar8 = (code *)swi(3);
        pFVar4 = (FText *)(*pcVar8)();
        return pFVar4;
      }
    }
    pFVar4 = TAttribute<FText>::Get
                       ((TAttribute<FText> *)
                        (*(longlong *)
                          ((this->Pages).Array.AllocatorInstance.Data + (longlong)(int)uVar1 * 8) +
                        0x70));
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar6 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar6;
    if (pIVar6 == (ITextData *)0x0) goto LAB_1430365d8;
    pcVar8 = *(code **)((longlong)*pIVar6 + 8);
    puVar7 = local_res8;
  }
  (*pcVar8)(pIVar6,puVar7);
LAB_1430365d8:
  __return_storage_ptr__->Flags = pFVar4->Flags;
  return __return_storage_ptr__;
}

// HandleNextButtonClicked @ 143036600

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall SWizard::HandleNextButtonClicked(SWizard *this,FReply *__return_storage_ptr__)

{
  int iVar1;
  
  iVar1 = GetNextPageIndex(this);
  AdvanceToPage(this,iVar1);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// HandleNextButtonIsEnabled @ 143036640

bool __thiscall SWizard::HandleNextButtonIsEnabled(SWizard *this)

{
  bool bVar1;
  int iVar2;
  
  if (this->bShowHistoryButtons == false) {
    return false;
  }
  iVar2 = GetNextPageIndex(this);
  bVar1 = CanShowPage(this,iVar2);
  return bVar1;
}

// HandleNextButtonVisibility @ 143036680

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall SWizard::HandleNextButtonVisibility(SWizard *this)

{
  EVisibility EVar1;
  int iVar2;
  TEnumAsByte<EVisibility::Private> *in_RDX;
  
  if (this->bShowHistoryButtons == false) {
    in_RDX->Value = (uchar)EVisibility::Collapsed.Value.Value;
    return (TEnumAsByte<EVisibility::Private>)(uchar)in_RDX;
  }
  iVar2 = GetNextPageIndex(this);
  if ((iVar2 < 0) || (EVar1 = EVisibility::Visible, (this->Pages).Array.ArrayNum <= iVar2)) {
    EVar1 = EVisibility::Hidden;
  }
  in_RDX->Value = (uchar)EVar1.Value.Value;
  return (EVisibility)(uchar)in_RDX;
}

// HandlePageButtonCheckStateChanged @ 1430366f0

void __thiscall
SWizard::HandlePageButtonCheckStateChanged(SWizard *this,ECheckBoxState param_1,int param_2)

{
  if (param_1 == Checked) {
    ShowPage(this,param_2);
    return;
  }
  return;
}

// HandlePageButtonIsChecked @ 143036710

ECheckBoxState __thiscall SWizard::HandlePageButtonIsChecked(SWizard *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ECheckBoxState EVar3;
  int *piVar4;
  
  if ((this->WidgetSwitcher).Object == (SWidgetSwitcher *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  piVar4 = TAttribute<int>::Get(&((this->WidgetSwitcher).Object)->WidgetIndex);
  return param_1 == *piVar4;
}

// HandlePageButtonIsEnabled @ 143036780

bool __thiscall SWizard::HandlePageButtonIsEnabled(SWizard *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  bool *pbVar5;
  
  if ((-1 < param_1) && (param_1 < (this->Pages).Array.ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->Pages).Array.ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pbVar5 = TAttribute<bool>::Get
                       ((TAttribute<bool> *)
                        (*(longlong *)
                          ((this->Pages).Array.AllocatorInstance.Data + (longlong)param_1 * 8) +
                        0x10));
    return *pbVar5;
  }
  return false;
}

// HandlePrevButtonClicked @ 143036790

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall SWizard::HandlePrevButtonClicked(SWizard *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  FReply *pFVar5;
  int *piVar6;
  longlong *plVar7;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if ((this->WidgetSwitcher).Object == (SWidgetSwitcher *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar1)();
      return pFVar5;
    }
  }
  piVar6 = TAttribute<int>::Get(&((this->WidgetSwitcher).Object)->WidgetIndex);
  if (*piVar6 == 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnFirstPageBackClicked,&local_38);
    if ((*(int *)&(this->OnFirstPageBackClicked).field_0x10 != 0) &&
       (plVar7 = *(longlong **)&(this->OnFirstPageBackClicked).field_0x8, plVar7 != (longlong *)0x0)
       ) {
      cVar3 = (**(code **)(*plVar7 + 0x38))();
      if (cVar3 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnFirstPageBackClicked,&local_20);
        if (*(int *)&(this->OnFirstPageBackClicked).field_0x10 == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)&(this->OnFirstPageBackClicked).field_0x8;
        }
        (**(code **)(*plVar7 + 0x60))(plVar7,__return_storage_ptr__);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_20);
        return __return_storage_ptr__;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  iVar4 = GetPrevPageIndex(this);
  ShowPage(this,iVar4);
  if ((this->BreadcrumbTrail).Object == (SBreadcrumbTrail<int> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar1)();
      return pFVar5;
    }
  }
  SBreadcrumbTrail<int>::PopCrumb((this->BreadcrumbTrail).Object);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// HandlePrevButtonIsEnabled @ 1430368f0

bool __thiscall SWizard::HandlePrevButtonIsEnabled(SWizard *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  
  if (this->bShowHistoryButtons != false) {
    if ((this->WidgetSwitcher).Object == (SWidgetSwitcher *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    piVar5 = TAttribute<int>::Get(&((this->WidgetSwitcher).Object)->WidgetIndex);
    if (*piVar5 == 0) {
      bVar2 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnFirstPageBackClicked)
      ;
      if (bVar2) {
        return true;
      }
    }
  }
  iVar4 = GetPrevPageIndex(this);
  bVar2 = CanShowPage(this,iVar4);
  return bVar2;
}

// HandlePrevButtonVisibility @ 143036980

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall SWizard::HandlePrevButtonVisibility(SWizard *this)

{
  bool bVar1;
  EVisibility EVar2;
  int iVar3;
  TEnumAsByte<EVisibility::Private> *in_RDX;
  
  if (this->bShowHistoryButtons == false) {
    in_RDX->Value = (uchar)EVisibility::Collapsed.Value.Value;
    return (TEnumAsByte<EVisibility::Private>)(uchar)in_RDX;
  }
  iVar3 = GetPrevPageIndex(this);
  if (iVar3 == -1) {
    bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnFirstPageBackClicked);
    EVar2 = EVisibility::Hidden;
    if (!bVar1) goto LAB_1430369d8;
  }
  EVar2.Value.Value = EVisibility::Visible.Value.Value;
LAB_1430369d8:
  in_RDX->Value = (uchar)EVar2.Value.Value;
  return (EVisibility)(uchar)in_RDX;
}

// ShowPage @ 14303e700

void __thiscall SWizard::ShowPage(SWizard *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  bool *pbVar7;
  SWidgetSwitcher *this_00;
  int *piVar8;
  FReadAccessScope local_48;
  
  if (((this->WidgetSwitcher).Object == (SWidgetSwitcher *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar6 = (uint *)TAttribute<int>::Get(&((this->WidgetSwitcher).Object)->WidgetIndex);
  uVar5 = *puVar6;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->Pages).Array.ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar5 < (this->Pages).Array.ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
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
    lVar1 = *(longlong *)((this->Pages).Array.AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x48),&local_48);
    if ((*(int *)(lVar1 + 0x58) == 0) || (*(longlong **)(lVar1 + 0x50) == (longlong *)0x0)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
    }
    else {
      (**(code **)(**(longlong **)(lVar1 + 0x50) + 0x68))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
    }
  }
  piVar8 = &(this->Pages).Array.ArrayNum;
  if ((-1 < param_1) && (param_1 < *piVar8)) {
    uVar5 = 0;
    if (param_1 < (this->Pages).Array.ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pbVar7 = TAttribute<bool>::Get
                       ((TAttribute<bool> *)
                        (*(longlong *)
                          ((this->Pages).Array.AllocatorInstance.Data + (longlong)param_1 * 8) +
                        0x10));
    if (*pbVar7 != false) {
      if (((this->WidgetSwitcher).Object == (SWidgetSwitcher *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      SWidgetSwitcher::SetActiveWidgetIndex((this->WidgetSwitcher).Object,param_1);
      uVar5 = 0;
      if (param_1 < (this->Pages).Array.ArrayNum) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 (*(longlong *)((this->Pages).Array.AllocatorInstance.Data + (longlong)param_1 * 8)
                 + 0x30));
      return;
    }
  }
  if ((*piVar8 < 1) ||
     (pbVar7 = TAttribute<bool>::Get
                         ((TAttribute<bool> *)
                          (*(longlong *)(this->Pages).Array.AllocatorInstance.Data + 0x10)),
     *pbVar7 == false)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5610773055895764721>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Workflow\\SWizard.cpp"
                       ,0x10f,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((this->WidgetSwitcher).Object == (SWidgetSwitcher *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    SWidgetSwitcher::SetActiveWidgetIndex((this->WidgetSwitcher).Object,-1);
  }
  else {
    this_00 = TSharedPtr<SWidgetSwitcher,1>::operator->(&this->WidgetSwitcher);
    SWidgetSwitcher::SetActiveWidgetIndex(this_00,0);
    if (((this->Pages).Array.ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               (*(longlong *)(this->Pages).Array.AllocatorInstance.Data + 0x30));
  }
  return;
}

