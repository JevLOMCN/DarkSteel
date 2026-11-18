// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 18

// ~SNamingTokenDataTreeViewWidget @ 14d0f02e0

void __thiscall
SNamingTokenDataTreeViewWidget::~SNamingTokenDataTreeViewWidget
          (SNamingTokenDataTreeViewWidget *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7SNamingTokenDataTreeViewWidget__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnFocusedDelegate);
  pvVar1 = *(void **)&(this->OnFocusedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFocusedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ItemSelectedDelegate);
  pvVar1 = *(void **)&(this->ItemSelectedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ItemSelectedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ItemSelectionChangedDelegate);
  pvVar1 = *(void **)&(this->ItemSelectionChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ItemSelectionChangedDelegate);
  pFVar2 = (this->NamespaceFilterText).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TokenFilterText).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LastFilterText).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSharedPtr<FNamingTokenDataTreeItem,1>,int>
            ((TSharedPtr<FNamingTokenDataTreeItem,1> *)
             (this->FilteredRootTreeItems).AllocatorInstance.Data,
             (this->FilteredRootTreeItems).ArrayNum);
  pFVar2 = (this->FilteredRootTreeItems).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSharedPtr<FNamingTokenDataTreeItem,1>,int>
            ((TSharedPtr<FNamingTokenDataTreeItem,1> *)(this->RootTreeItems).AllocatorInstance.Data,
             (this->RootTreeItems).ArrayNum);
  pFVar2 = (this->RootTreeItems).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TreeView).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// ClearCurrentSelection @ 14d0f4a90

void __thiscall
SNamingTokenDataTreeViewWidget::ClearCurrentSelection(SNamingTokenDataTreeViewWidget *this)

{
  SNamingTokenDataTreeView *pSVar1;
  longlong lVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  Type *pTVar6;
  TSharedPtr<FNamingTokenDataTreeItem,1> local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  GetItemFromIndex(this,&local_28,this->CurrentSelectionIndex,&this->FilteredRootTreeItems);
  if (CONCAT44(local_28.Object._4_4_,local_28.Object._0_4_) == 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_28.SharedReferenceCount.ReferenceController._4_4_,
                        local_28.SharedReferenceCount.ReferenceController._0_4_));
    return;
  }
  if ((this->TreeView).Object == (SNamingTokenDataTreeView *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar1 = (this->TreeView).Object;
  pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar1->field_0x3e8);
  pTVar4 = (TReferenceControllerBase<1> *)
           CONCAT44(local_28.SharedReferenceCount.ReferenceController._4_4_,
                    local_28.SharedReferenceCount.ReferenceController._0_4_);
  if (*pTVar6 != None) {
    lVar2 = *(longlong *)&pSVar1->field_0x588;
    local_18 = local_28.Object._0_4_;
    uStack_14 = local_28.Object._4_4_;
    uStack_10 = local_28.SharedReferenceCount.ReferenceController._0_4_;
    uStack_c = local_28.SharedReferenceCount.ReferenceController._4_4_;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    (**(code **)(lVar2 + 0x28))(&pSVar1->field_0x588,&local_18,0,0);
    (**(code **)(*(longlong *)&pSVar1->field_0x588 + 0x40))(&pSVar1->field_0x588,3);
  }
  this->CurrentSelectionIndex = -1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Construct @ 14d0f7670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00014d0f813d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SNamingTokenDataTreeViewWidget::Construct(SNamingTokenDataTreeViewWidget *this,FArguments *param_1)

{
  byte *pbVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  SHeaderRow *this_00;
  FSharedReferencer<1> FVar10;
  FSharedReferencer<1> FVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  char cVar15;
  byte bVar16;
  FArguments *pFVar17;
  FText *pFVar18;
  FArguments *pFVar19;
  FArguments *pFVar20;
  undefined8 *puVar21;
  TSharedRef<SWidget,1> *pTVar22;
  ulong64 uVar23;
  TSharedRef<SWidget_const_,1> *pTVar24;
  TSharedRef<SNamingTokenDataTreeView,1> *pTVar25;
  TSharedRef<SBox,1> *pTVar26;
  TReferenceControllerBase<1> *pTVar27;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  FName local_12b8;
  undefined4 uStack_12b0;
  undefined4 uStack_12ac;
  FLLMScope local_12a8 [2];
  undefined4 local_12a0;
  undefined1 local_129c;
  undefined1 local_1298 [8];
  ForAnyElementType FStack_1290;
  ulonglong local_1288;
  undefined4 local_1280;
  undefined1 local_127c;
  undefined1 local_1278 [8];
  ForAnyElementType FStack_1270;
  ulonglong local_1268;
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> local_1260;
  TSharedRef<SNamingTokenDataTreeView,1> local_1248;
  FText local_1238;
  undefined1 local_1228;
  undefined1 local_1220 [8];
  ForAnyElementType FStack_1218;
  ulonglong local_1210;
  undefined8 local_1208;
  undefined8 uStack_1200;
  undefined1 local_11f8;
  undefined1 local_11f0 [8];
  ForAnyElementType FStack_11e8;
  ulonglong local_11e0;
  FString local_11d8;
  SNamingTokenDataTreeView *local_11c8;
  TReferenceControllerBase<1> *pTStack_11c0;
  FName local_11b8;
  FMemScope local_11b0;
  FName local_11a8;
  FName local_11a0;
  T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewWidget,1>_&&> local_1198;
  FArguments *local_1190;
  FMemScope local_1188;
  TReferenceControllerBase<1> *local_1180;
  FMemScope local_1178;
  undefined8 local_1170;
  FSharedReferencer<1> FStack_1168;
  TSharedRef<SNamingTokenDataTreeViewWidget,1> local_1160;
  TAttribute<EVisibility> local_1150;
  TSlateDecl<SNamingTokenDataTreeView,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewWidget,1>_&&>_>
  local_1130;
  TSharedRef<SWidget,1> local_1118;
  FDestructionSentinel local_1108;
  FDestructionSentinel local_10f0;
  FDestructionSentinel local_10d8;
  FDestructionSentinel local_10c0;
  FDestructionSentinel local_10a8;
  undefined1 *local_1090;
  FDestructionSentinel local_1088;
  undefined1 *local_1070;
  FDestructionSentinel local_1068;
  undefined1 *local_1050;
  FDestructionSentinel local_1048;
  undefined1 *local_1030;
  FDestructionSentinel local_1028;
  undefined1 *local_1010;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1008;
  FText local_ff0;
  TSharedRef<SBox,1> local_fe0;
  TSharedRef<SWidget,1> local_fd0;
  TSharedRef<SWidget,1> local_fc0;
  TSharedRef<SWidget,1> local_fb0;
  TSharedRef<SWidget_const_,1> local_fa0;
  SNamingTokenDataTreeView *local_f90;
  TReferenceControllerBase<1> *pTStack_f88;
  TSharedRef<SWidget,1> local_f80;
  TSharedRef<SWidget,1> local_f70;
  SHeaderRow *local_f60;
  TReferenceControllerBase<1> *pTStack_f58;
  undefined1 local_f50 [528];
  undefined1 local_d40 [24];
  undefined1 local_d28 [40];
  ForAnyElementType local_d00;
  undefined1 local_cf0 [24];
  FArguments local_cd8;
  FArguments local_860;
  FArguments local_520;
  undefined8 uStack_48;
  
  uStack_48 = 0x14d0f768f;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  local_res8 = 0;
  TDelegate<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::operator=(&this->ItemSelectionChangedDelegate,&param_1->_OnSelectionChanged);
  TDelegate<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>::
  operator=(&this->ItemSelectedDelegate,&param_1->_OnItemSelected);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnFocusedDelegate,&param_1->_OnFocused);
  pFVar17 = SHeaderRow::FArguments::FArguments((FArguments *)local_f50);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_11b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_11b0,&local_11b8,true);
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>
            (&local_1260,"SHeaderRow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensDataTreeView.cpp"
             ,0x8c,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_11b0);
  FLLMScope::~FLLMScope(local_res18);
  FVar10.ReferenceController = local_1260._Widget.SharedReferenceCount.ReferenceController;
  this_00 = local_1260._Widget.Object;
  if (local_1260._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1260._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1260._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1180 = local_1260._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((local_1260._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_1260._Widget.Object,(FSlateBaseNamedArgs *)pFVar17);
  SHeaderRow::Construct(local_1260._Widget.Object,pFVar17);
  if ((local_1260._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((local_1260._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar15 = (**(code **)((local_1260._Widget.Object)->_padding_ + 0x228))
                       (local_1260._Widget.Object);
    bVar16 = 0;
    if (cVar15 == '\0') goto LAB_14d0f7813;
  }
  bVar16 = 0x20;
LAB_14d0f7813:
  *(byte *)&(local_1260._Widget.Object)->_padding_ =
       (byte)(local_1260._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_1260._Widget.Object)->_padding_ =
       (byte)(local_1260._Widget.Object)->_padding_ | bVar16;
  if ((local_1260._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_1260._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_1260._Widget.Object == (SHeaderRow *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar11.ReferenceController = local_1260._Widget.SharedReferenceCount.ReferenceController;
  local_1260._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1260._Widget.Object = (SHeaderRow *)0x0;
  if ((this_00 == (SHeaderRow *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_cf0);
  if ((void *)local_cf0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_cf0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_cf0);
  if (local_d00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d00.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d28);
  if ((void *)local_d28._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d28._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d40);
  if ((void *)local_d40._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d40._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d40);
  if ((FScriptContainerElement *)local_f50._512_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f50._512_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_f50);
  SHeaderRow::FColumn::FArguments::FArguments(&local_cd8);
  ::FName::FName(&local_11a8,"Primary");
  local_cd8._ColumnId = local_11a8;
  pFVar18 = FText::AsLocalizable_Advanced_LocText
                      (&local_ff0,L"SNamingTokenDataTreeView",L"ItemLabel_HeaderText",L"Primary");
  FText::FText(&local_1238,pFVar18);
  local_1228 = 1;
  local_1210 = 0;
  local_1220 = (undefined1  [8])0x0;
  FStack_1218.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&local_cd8._DefaultLabel.Value,&local_1238);
  local_cd8._DefaultLabel.bIsSet = (bool)local_1228;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_cd8._DefaultLabel.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1220);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1220,
             (FWriteAccessScope *)&local_10c0);
  if (((int)local_1210 != 0) && (FStack_1218.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1218.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1218,0,0,0x10);
    local_1210 = local_1210 & 0xffffffff00000000;
  }
  if (local_10c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_10c0.Accessor,&local_10c0);
  }
  if (FStack_1218.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1218.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1220);
  if (local_1238.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1238.TextData.Reference + 0x10))();
  }
  if (local_ff0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_ff0.TextData.Reference + 0x10))();
  }
  if ((this_00 == (SHeaderRow *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_1150.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
  local_1150.bIsSet = true;
  local_1150.Getter._16_8_ = 0;
  local_1150.Getter._0_8_ = 0;
  local_1150.Getter._8_8_ = 0;
  SCompoundWidget::SetVisibility((SCompoundWidget *)this_00,&local_1150);
  if ((this_00 == (SHeaderRow *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SHeaderRow::AddColumn(this_00,&local_cd8);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_cd8);
  PopulateTreeItems(this);
  pFVar19 = SBox::FArguments::FArguments(&local_860);
  local_12a0 = 0x437a0000;
  local_129c = 1;
  local_1298 = (undefined1  [8])0x0;
  FStack_1290.Data = (FScriptContainerElement *)0x0;
  local_1288 = 0;
  (pFVar19->_MaxDesiredHeight).Value.Size = 250.0;
  (pFVar19->_MaxDesiredHeight).bIsSet = true;
  local_1190 = pFVar19;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_MaxDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1298);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1298,
             (FWriteAccessScope *)&local_10f0);
  if (((int)local_1288 != 0) && (FStack_1290.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1290.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1290,0,0,0x10);
    local_1288 = local_1288 & 0xffffffff00000000;
  }
  if (local_10f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_10f0.Accessor,&local_10f0);
  }
  if (FStack_1290.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1290.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1298);
  uVar9 = _UNK_15076b1f8;
  uVar13 = ___xmm_3f8000003f8000003f8000003f800000;
  local_11f8 = 1;
  local_11e0 = 0;
  local_1208 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_1200 = _UNK_15076b1f8;
  (pFVar19->_Padding).bIsSet = true;
  uVar12 = ___xmm_3f8000003f8000003f8000003f800000;
  local_11f0 = (undefined1  [8])0x0;
  FStack_11e8.Data = (FScriptContainerElement *)0x0;
  ___xmm_3f8000003f8000003f8000003f800000 = (undefined4)uVar13;
  _UNK_15076b1f4 = SUB84(uVar13,4);
  uVar8 = _UNK_15076b1f4;
  (pFVar19->_Padding).Value.Left = (float)___xmm_3f8000003f8000003f8000003f800000;
  ___xmm_3f8000003f8000003f8000003f800000 = uVar12;
  uVar13 = _UNK_15076b1f8;
  (pFVar19->_Padding).Value.Top = (float)uVar8;
  _UNK_15076b1f8 = (undefined4)uVar9;
  _UNK_15076b1fc = SUB84(uVar9,4);
  uVar8 = _UNK_15076b1fc;
  (pFVar19->_Padding).Value.Right = (float)_UNK_15076b1f8;
  _UNK_15076b1f8 = uVar13;
  (pFVar19->_Padding).Value.Bottom = (float)uVar8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar19->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_11f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_11f0,
             (FWriteAccessScope *)&local_10d8);
  if (((int)local_11e0 != 0) && (FStack_11e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_11e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_11e8,0,0,0x10);
    local_11e0 = local_11e0 & 0xffffffff00000000;
  }
  if (local_10d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_10d8.Accessor,&local_10d8);
  }
  if (FStack_11e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_11e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11f0);
  pFVar20 = STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::FArguments::FArguments(&local_520);
  local_127c = 1;
  local_1280 = 1;
  local_1268 = 0;
  local_1278 = (undefined1  [8])0x0;
  FStack_1270.Data = (FScriptContainerElement *)0x0;
  (pFVar20->_SelectionMode).Value = Single;
  (pFVar20->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar20->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1278);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1278,
             (FWriteAccessScope *)&local_1108);
  if (((int)local_1268 != 0) && (FStack_1270.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1270.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1270,0,0,0x10);
    local_1268 = local_1268 & 0xffffffff00000000;
  }
  if (local_1108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1108.Accessor,&local_1108);
  }
  if (FStack_1270.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1270.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1278);
  pFVar20->_TreeItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar20->_TreeItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)0x0;
  local_1170 = 0;
  FStack_1168.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&pFVar20->_TreeItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1>
       *)&local_1170) {
    (pFVar20->_TreeItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar20->_TreeItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_1168)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1168.ReferenceController);
  pFVar20->_TreeItemsSource_ArrayPointer = &this->FilteredRootTreeItems;
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
  local_f60 = (pFVar20->_HeaderRow).Object;
  pTStack_f58 = (pFVar20->_HeaderRow).SharedReferenceCount.ReferenceController;
  (pFVar20->_HeaderRow).Object = this_00;
  (pFVar20->_HeaderRow).SharedReferenceCount.ReferenceController = FVar10.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar20->_OnGenerateRow,
             (FWriteAccessScope *)&local_1028);
  local_1010 = &(pFVar20->_OnGenerateRow).field_0x8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1010);
  if (puVar21 == (undefined8 *)0x0) {
    pTVar27 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_12ac = local_1248.SharedReferenceCount.ReferenceController._4_4_;
    local_12b8 = (FName)OnGenerateRowForTree;
    uStack_12b0 = 0;
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_f80);
    pTVar27 = (pTVar22->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar22->Object;
    if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFNamingTokenDataTreeItem___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar23;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSNamingTokenDataTreeViewWidget___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFNamingTokenDataTreeItem___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = pSVar2;
    puVar21[4] = pTVar27;
    if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar27->WeakReferenceCount = (atomic<int>)((int)pTVar27->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    *(FName *)(puVar21 + 5) = local_12b8;
    puVar21[6] = CONCAT44(uStack_12ac,uStack_12b0);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f80.SharedReferenceCount.ReferenceController);
  }
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  if (local_1028.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1028.Accessor,&local_1028);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar20->_OnGetChildren,
             (FWriteAccessScope *)&local_10a8);
  local_1090 = &(pFVar20->_OnGetChildren).field_0x8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1090);
  if (puVar21 == (undefined8 *)0x0) {
    pTVar27 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_12ac = local_1248.SharedReferenceCount.ReferenceController._4_4_;
    local_12b8 = (FName)OnGetChildrenForTree;
    uStack_12b0 = 0;
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_f70);
    pTVar27 = (pTVar22->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar22->Object;
    if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFNamingTokenDataTreeItem___00__AEAV__TArray_V__TSharedPtr_UFNamingTokenDataTreeItem___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar23;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSNamingTokenDataTreeViewWidget___00__A6AXV__TSharedPtr_UFNamingTokenDataTreeItem___00__AEAV__TArray_V__TSharedPtr_UFNamingTokenDataTreeItem___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = pSVar2;
    puVar21[4] = pTVar27;
    if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar27->WeakReferenceCount = (atomic<int>)((int)pTVar27->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar21 + 5) = local_12b8;
    puVar21[6] = CONCAT44(uStack_12ac,uStack_12b0);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f70.SharedReferenceCount.ReferenceController);
  }
  bVar6 = false;
  bVar5 = false;
  if (local_10a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_10a8.Accessor,&local_10a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar20->_OnExpansionChanged
             ,(FWriteAccessScope *)&local_1088);
  local_1070 = &(pFVar20->_OnExpansionChanged).field_0x8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1070);
  if (puVar21 == (undefined8 *)0x0) {
    pTVar27 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_12ac = local_1248.SharedReferenceCount.ReferenceController._4_4_;
    local_12b8 = (FName)OnItemExpansionChanged;
    uStack_12b0 = 0;
    pTVar24 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_fa0);
    pTVar27 = (pTVar24->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar24->Object;
    if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFNamingTokenDataTreeItem___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar23;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSNamingTokenDataTreeViewWidget___00__A6AXV__TSharedPtr_UFNamingTokenDataTreeItem___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = pSVar2;
    puVar21[4] = pTVar27;
    if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar27->WeakReferenceCount = (atomic<int>)((int)pTVar27->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar21 + 5) = local_12b8;
    puVar21[6] = CONCAT44(uStack_12ac,uStack_12b0);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_fa0.SharedReferenceCount.ReferenceController);
  }
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  if (local_1088.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1088.Accessor,&local_1088);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar20->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_1068);
  local_1050 = &(pFVar20->_OnSelectionChanged).field_0x8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1050);
  if (puVar21 == (undefined8 *)0x0) {
    pTVar27 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_12ac = local_1248.SharedReferenceCount.ReferenceController._4_4_;
    local_12b8 = (FName)OnTreeViewItemSelectionChanged;
    uStack_12b0 = 0;
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_fb0);
    pTVar27 = (pTVar22->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar22->Object;
    if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFNamingTokenDataTreeItem___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar23;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSNamingTokenDataTreeViewWidget___00__A6AXV__TSharedPtr_UFNamingTokenDataTreeItem___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = pSVar2;
    puVar21[4] = pTVar27;
    if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar27->WeakReferenceCount = (atomic<int>)((int)pTVar27->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar21 + 5) = local_12b8;
    puVar21[6] = CONCAT44(uStack_12ac,uStack_12b0);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_fb0.SharedReferenceCount.ReferenceController);
  }
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  if (local_1068.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1068.Accessor,&local_1068);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar20->_OnMouseButtonDoubleClick,(FWriteAccessScope *)&local_1048);
  local_1030 = &(pFVar20->_OnMouseButtonDoubleClick).field_0x8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1030);
  if (puVar21 == (undefined8 *)0x0) {
    pTVar27 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_12ac = local_1248.SharedReferenceCount.ReferenceController._4_4_;
    local_12b8 = (FName)OnTreeViewItemDoubleClicked;
    uStack_12b0 = 0;
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_fc0);
    pTVar27 = (pTVar22->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar22->Object;
    if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFNamingTokenDataTreeItem___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar23;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSNamingTokenDataTreeViewWidget___00__A6AXV__TSharedPtr_UFNamingTokenDataTreeItem___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = pSVar2;
    puVar21[4] = pTVar27;
    if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar27->WeakReferenceCount = (atomic<int>)((int)pTVar27->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar21 + 5) = local_12b8;
    puVar21[6] = CONCAT44(uStack_12ac,uStack_12b0);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_fc0.SharedReferenceCount.ReferenceController);
  }
  if (local_1048.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1048.Accessor,&local_1048);
  }
  pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_fd0);
  local_1160.Object = (SNamingTokenDataTreeViewWidget *)pTVar22->Object;
  local_1160.SharedReferenceCount.ReferenceController =
       (pTVar22->SharedReferenceCount).ReferenceController;
  if (local_1160.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1160.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1160.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fd0.SharedReferenceCount.ReferenceController);
  local_1198.Arg0 = &local_1160;
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_11a0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1178,&local_11a0,true);
  TSlateDecl<SNamingTokenDataTreeView,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewWidget,1>_&&>_>
  ::
  TSlateDecl<SNamingTokenDataTreeView,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewWidget,1>_&&>_>
            (&local_1130,"SNamingTokenDataTreeView",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensDataTreeView.cpp"
             ,0x9f,&local_1198);
  FMemScope::~FMemScope(&local_1178);
  FLLMScope::~FLLMScope(local_res20);
  if (local_1130._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1130._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1130._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_f90 = (this->TreeView).Object;
  pTStack_f88 = (this->TreeView).SharedReferenceCount.ReferenceController;
  (this->TreeView).Object = local_1130._Widget.Object;
  (this->TreeView).SharedReferenceCount.ReferenceController =
       local_1130._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f88);
  pTVar25 = TSlateDecl<SNamingTokenDataTreeView,RequiredArgs::T1RequiredArgs<TSharedRef<SNamingTokenDataTreeViewWidget,1>_&&>_>
            ::operator<<=(&local_1130,&local_1248,pFVar20);
  pFVar19 = local_1190;
  pTVar27 = (pTVar25->SharedReferenceCount).ReferenceController;
  local_11c8 = pTVar25->Object;
  if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (local_1190->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1190->_Content).Widget.Object = (SWidget *)local_11c8;
  (local_1190->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar27;
  pTStack_11c0 = pTVar27;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_12a8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_12b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1188,&local_12b8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1008,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensDataTreeView.cpp"
             ,0x9b,local_res10);
  FMemScope::~FMemScope(&local_1188);
  FLLMScope::~FLLMScope(local_12a8);
  pTVar26 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1008,&local_fe0,pFVar19);
  pTVar3 = (pTVar26->SharedReferenceCount).ReferenceController;
  local_1118.Object = (SWidget *)pTVar26->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1118.SharedReferenceCount.ReferenceController = pTVar3;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_1118);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fe0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1008._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_1248.SharedReferenceCount.ReferenceController._4_4_,
                      local_1248.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1130._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1160.SharedReferenceCount.ReferenceController);
  STreeView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::FArguments::~FArguments(&local_520);
  SBox::FArguments::~FArguments(&local_860);
  local_11d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_11d8.Data.ArrayNum = 0;
  local_11d8.Data.ArrayMax = 0;
  FilterTreeItems(this,&local_11d8);
  if (local_11d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11d8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1180);
  return;
}

// FilterTreeItems @ 14d101d80

void __thiscall
SNamingTokenDataTreeViewWidget::FilterTreeItems
          (SNamingTokenDataTreeViewWidget *this,FString *param_1)

{
  TSharedPtr<FNamingTokenData,1> *this_00;
  int *piVar1;
  atomic<int> aVar2;
  longlong lVar3;
  longlong lVar4;
  TSharedPtr<FNamingTokenDataTreeItem,1> *pTVar5;
  longlong *plVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  int iVar16;
  FNamingTokenDataTreeItem *pFVar17;
  ulonglong uVar18;
  TReferenceControllerBase<1> *pTVar19;
  FString *pFVar20;
  FNamingTokenData *pFVar21;
  atomic<int> aVar22;
  ulonglong uVar23;
  TReferenceControllerBase<1> *pTVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  longlong *plVar28;
  FScriptContainerElement *pFVar29;
  TReferenceControllerBase<1> *pTVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FNamingTokenDataTreeItem *local_1b8;
  TReferenceControllerBase<1> *pTStack_1b0;
  FString local_1a8;
  FString local_198;
  TReferenceControllerBase<1> *local_188;
  TReferenceControllerBase<1> *local_180;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  ulonglong local_168;
  uint local_160;
  uint local_15c;
  undefined8 local_158;
  undefined4 local_150;
  float fStack_14c;
  int local_148;
  float fStack_144;
  ulonglong local_140;
  FScriptContainerElement *local_138;
  TSharedPtr<FNamingTokenDataTreeItem,1> local_130;
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118;
  longlong local_110;
  TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_> *local_108;
  FScriptContainerElement *local_100;
  TSharedRef<FNamingTokenDataTreeItem,1> local_f8 [11];
  
  iVar16 = (param_1->Data).ArrayNum;
  iVar26 = (this->LastFilterText).Data.ArrayNum;
  bVar15 = false;
  if (iVar26 == iVar16) {
    if (1 < iVar26) {
      iVar16 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(this->LastFilterText).Data.AllocatorInstance.Data,
                          (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar31 = iVar16 == 0;
      goto LAB_14d101e26;
    }
  }
  else {
    bVar31 = iVar26 + iVar16 == 1;
LAB_14d101e26:
    if (!bVar31) goto LAB_14d101ee5;
  }
  if ((this->FilteredRootTreeItems).ArrayNum < 1) goto LAB_14d101ee5;
  GetItemFromIndex(this,&local_130,this->CurrentSelectionIndex,&this->FilteredRootTreeItems);
  if (local_130.Object != (FNamingTokenDataTreeItem *)0x0) {
    if ((local_130.Object == (FNamingTokenDataTreeItem *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar16 = (param_1->Data).ArrayNum;
    iVar26 = ((local_130.Object)->Namespace).Data.ArrayNum;
    if (iVar16 == iVar26) {
      if (1 < iVar16) {
        iVar16 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                            (wchar_t *)((local_130.Object)->Namespace).Data.AllocatorInstance.Data);
        bVar15 = iVar16 == 0;
        goto LAB_14d101eb7;
      }
LAB_14d101ebe:
      pFVar17 = TSharedPtr<FNamingTokenDataTreeItem,1>::operator->(&local_130);
      bVar15 = true;
      if ((pFVar17->NamingTokenData).Object == (FNamingTokenData *)0x0) goto LAB_14d101edc;
    }
    else {
      bVar15 = iVar16 + iVar26 == 1;
LAB_14d101eb7:
      if (bVar15) goto LAB_14d101ebe;
    }
    bVar15 = false;
  }
LAB_14d101edc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_130.SharedReferenceCount.ReferenceController);
LAB_14d101ee5:
  ::FString::operator=(&this->LastFilterText,param_1);
  UE::NamingTokens::Utils::GetNamespaceFromTokenKey(&local_1a8,param_1);
  UE::NamingTokens::Utils::RemoveNamespaceFromTokenKey(&local_198,param_1);
  iVar16 = 0;
  iVar26 = local_198.Data.ArrayNum + -1;
  if (local_198.Data.ArrayNum == 0) {
    iVar26 = 0;
  }
  ::FString::AssignRange
            (&this->TokenFilterText,(wchar_t *)local_198.Data.AllocatorInstance.Data,iVar26);
  iVar26 = local_1a8.Data.ArrayNum + -1;
  if (local_1a8.Data.ArrayNum == 0) {
    iVar26 = 0;
  }
  ::FString::AssignRange
            (&this->NamespaceFilterText,(wchar_t *)local_1a8.Data.AllocatorInstance.Data,iVar26);
  iVar26 = local_1a8.Data.ArrayNum;
  local_170 = local_1a8.Data.ArrayNum;
  if (local_1a8.Data.ArrayNum < 2) {
    ::FString::operator=(&local_1a8,param_1);
    ::FString::operator=(&local_198,param_1);
  }
  local_108 = &this->FilteredRootTreeItems;
  TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_>::Reset(local_108,0);
  fVar12 = __real_3f400000;
  fVar11 = __real_3f000000;
  fVar10 = __real_3f800000;
  fVar9 = __real_3f666666;
  local_15c = (this->RootTreeItems).ArrayNum;
  uVar18 = (ulonglong)(int)local_15c;
  pFVar29 = (this->RootTreeItems).AllocatorInstance.Data;
  fVar35 = 0.0;
  local_100 = pFVar29 + uVar18 * 0x10;
  local_16c = 0;
  local_174 = 0;
  do {
    pFVar14 = local_100;
    pTVar24 = (TReferenceControllerBase<1> *)0x0;
    local_138 = pFVar29;
    if ((this->RootTreeItems).ArrayNum != (int)uVar18) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FNamingTokenDataTreeItem,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar29 == pFVar14) goto LAB_14d102bef;
    if ((*(longlong *)pFVar29 == 0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar31)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar3 = *(longlong *)pFVar29;
    pTVar19 = ::operator_new(0x78);
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
      pTVar19[1]._padding_ = 0;
      pTVar19->SharedReferenceCount = (atomic<int>)0x1;
      pTVar19->WeakReferenceCount = (atomic<int>)0x1;
      pTVar19->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFNamingTokenDataTreeItem___00_SharedPointerInternals__6B_
      ;
      pTVar19[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar19[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar19[2]._padding_ = *(longlong *)(lVar3 + 0x10);
      lVar4 = *(longlong *)(lVar3 + 0x18);
      pTVar19[2].SharedReferenceCount = (atomic<int>)(int)lVar4;
      pTVar19[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar4 >> 0x20);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      ::FString::FString((FString *)(pTVar19 + 3),(FString *)(lVar3 + 0x20));
      pTVar19[4]._padding_ = 0;
      plVar28 = *(longlong **)(lVar3 + 0x30);
      pTVar19[4]._padding_ = (longlong)plVar28;
      if (plVar28 != (longlong *)0x0) {
        (**(code **)(*plVar28 + 8))(plVar28,local_120);
      }
      pTVar19[4].SharedReferenceCount = *(atomic<int> *)(lVar3 + 0x38);
      (((TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_> *)(pTVar19 + 5))
      ->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<TSharedPtr<FNamingTokenDataTreeItem,1>,int>
                ((TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_> *)
                 (pTVar19 + 5),*(TSharedPtr<FNamingTokenDataTreeItem,1> **)(lVar3 + 0x40),
                 *(int *)(lVar3 + 0x48),0);
      pTVar19[6]._padding_ = *(longlong *)(lVar3 + 0x50);
      lVar4 = *(longlong *)(lVar3 + 0x58);
      pTVar19[6].SharedReferenceCount = (atomic<int>)(int)lVar4;
      pTVar19[6].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar4 >> 0x20);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
        UNLOCK();
      }
      *(undefined4 *)&pTVar19[7]._padding_ = *(undefined4 *)(lVar3 + 0x60);
      *(undefined1 *)((longlong)&pTVar19[7]._padding_ + 4) = *(undefined1 *)(lVar3 + 100);
      pTVar24 = pTVar19;
    }
    TSharedRef<FNamingTokenDataTreeItem,1>::TSharedRef<FNamingTokenDataTreeItem,1>
              (local_f8,(FNamingTokenDataTreeItem *)(pTVar24 + 1),pTVar24);
    local_1b8 = local_f8[0].Object;
    pTStack_1b0 = local_f8[0].SharedReferenceCount.ReferenceController;
    if (local_f8[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_f8[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_f8[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8[0].SharedReferenceCount.ReferenceController);
    if ((local_1b8 == (FNamingTokenDataTreeItem *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar17 = local_1b8;
    piVar1 = &(local_1b8->ChildItems).ArrayMax;
    pTVar5 = (TSharedPtr<FNamingTokenDataTreeItem,1> *)
             (local_1b8->ChildItems).AllocatorInstance.Data;
    iVar25 = (local_1b8->ChildItems).ArrayNum;
    if ((local_1b8->ChildItems).ArrayMax < 0) {
      DestructItems<TSharedPtr<FNamingTokenDataTreeItem,1>,int>(pTVar5,iVar25);
      iVar25 = *piVar1;
      (pFVar17->ChildItems).ArrayNum = 0;
      if (iVar25 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(pFVar17->ChildItems).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedPtr<FNamingTokenDataTreeItem,1>,int>(pTVar5,iVar25);
      (pFVar17->ChildItems).ArrayNum = 0;
    }
    if ((*(longlong *)pFVar29 == 0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar3 = *(longlong *)pFVar29;
    fVar33 = fVar11;
    if (local_1a8.Data.ArrayNum < 2) {
LAB_14d1023ae:
      if ((iVar26 < 2) || (0.0 < fVar33)) goto LAB_14d1023c1;
    }
    else {
      this_00 = (TSharedPtr<FNamingTokenData,1> *)(lVar3 + 0x10);
      iVar25 = 0;
      fVar33 = fVar10;
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        iVar27 = (this_00->Object->TokenKey).Data.ArrayNum;
        if (iVar27 == local_1a8.Data.ArrayNum) {
          if (iVar27 < 2) goto LAB_14d1023ae;
          iVar27 = wcscmp((wchar_t *)(this_00->Object->TokenKey).Data.AllocatorInstance.Data,
                          (wchar_t *)local_1a8.Data.AllocatorInstance.Data);
          bVar31 = iVar27 == 0;
        }
        else {
          bVar31 = iVar27 + local_1a8.Data.ArrayNum == 1;
        }
        if (!bVar31) {
          pFVar21 = TSharedPtr<FNamingTokenData,1>::operator->
                              ((TSharedPtr<FNamingTokenData,1> *)(lVar3 + 0x10));
          iVar27 = (pFVar21->TokenKey).Data.ArrayNum;
          fVar33 = fVar9;
          if (iVar27 == local_1a8.Data.ArrayNum) {
            if (iVar27 < 2) goto LAB_14d1023ae;
            iVar27 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)(pFVar21->TokenKey).Data.AllocatorInstance.Data,
                                (wchar_t *)local_1a8.Data.AllocatorInstance.Data);
            bVar31 = iVar27 == 0;
          }
          else {
            bVar31 = local_1a8.Data.ArrayNum + iVar27 == 1;
          }
          if (!bVar31) {
            pFVar21 = TSharedPtr<FNamingTokenData,1>::operator->(this_00);
            iVar27 = local_1a8.Data.ArrayNum + -1;
            FVar8.Data = local_1a8.Data.AllocatorInstance.Data;
            if (local_1a8.Data.ArrayNum == 0) {
              iVar27 = iVar25;
              FVar8.Data = (FScriptContainerElement *)L"";
            }
            bVar31 = ::FString::StartsWith
                               (&pFVar21->TokenKey,(wchar_t *)FVar8.Data,iVar27,IgnoreCase);
            fVar33 = fVar12;
            if (!bVar31) {
              pFVar21 = TSharedPtr<FNamingTokenData,1>::operator->(this_00);
              pFVar20 = FText::ToString(&pFVar21->DisplayName);
              iVar27 = local_1a8.Data.ArrayNum + -1;
              FVar8.Data = local_1a8.Data.AllocatorInstance.Data;
              if (local_1a8.Data.ArrayNum == 0) {
                iVar27 = iVar25;
                FVar8.Data = (FScriptContainerElement *)L"";
              }
              bVar31 = ::FString::StartsWith(pFVar20,(wchar_t *)FVar8.Data,iVar27,IgnoreCase);
              if (!bVar31) goto LAB_14d102398;
            }
          }
        }
        goto LAB_14d1023ae;
      }
      iVar27 = *(int *)(lVar3 + 0x28);
      if (iVar27 == local_1a8.Data.ArrayNum) {
        if (iVar27 < 2) goto LAB_14d1023ae;
        iVar27 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)(lVar3 + 0x20),
                            (wchar_t *)local_1a8.Data.AllocatorInstance.Data);
        bVar31 = iVar27 == 0;
      }
      else {
        bVar31 = iVar27 + local_1a8.Data.ArrayNum == 1;
      }
      if (bVar31) goto LAB_14d1023ae;
      if (1 < iVar26) {
LAB_14d102398:
        fVar33 = 0.0;
        goto LAB_14d1023ae;
      }
      iVar27 = local_1a8.Data.ArrayNum + -1;
      FVar8.Data = local_1a8.Data.AllocatorInstance.Data;
      if (local_1a8.Data.ArrayNum == 0) {
        iVar27 = 0;
        FVar8.Data = (FScriptContainerElement *)L"";
      }
      bVar31 = ::FString::StartsWith
                         ((FString *)(lVar3 + 0x20),(wchar_t *)FVar8.Data,iVar27,IgnoreCase);
      fVar33 = fVar12;
      if (!bVar31) {
        pFVar20 = FText::ToString((FText *)(lVar3 + 0x30));
        iVar27 = local_1a8.Data.ArrayNum + -1;
        FVar8.Data = local_1a8.Data.AllocatorInstance.Data;
        if (local_1a8.Data.ArrayNum == 0) {
          iVar27 = iVar25;
          FVar8.Data = (FScriptContainerElement *)L"";
        }
        bVar31 = ::FString::StartsWith(pFVar20,(wchar_t *)FVar8.Data,iVar27,IgnoreCase);
        if (!bVar31) goto LAB_14d102398;
      }
LAB_14d1023c1:
      iVar25 = iVar16 + 1;
      local_178 = iVar25;
      if ((local_1b8 == (FNamingTokenDataTreeItem *)0x0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar31)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar34 = 0.0;
      local_168 = 0;
      local_1b8->ItemIndex = iVar16;
      if ((*(longlong *)pFVar29 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar31)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_110 = *(longlong *)pFVar29;
      local_160 = *(uint *)(local_110 + 0x48);
      uVar23 = (ulonglong)(int)local_160;
      plVar28 = *(longlong **)(local_110 + 0x40);
      local_118 = plVar28 + uVar23 * 2;
      uVar18 = local_168;
      while( true ) {
        plVar6 = local_118;
        pTVar24 = (TReferenceControllerBase<1> *)0x0;
        if (*(int *)(local_110 + 0x48) != (int)uVar23) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FNamingTokenDataTreeItem,1>,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res20);
        }
        if (plVar28 == plVar6) break;
        if ((*plVar28 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar31)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar3 = *plVar28;
        pTVar19 = ::operator_new(0x78);
        if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
          pTVar30 = (TReferenceControllerBase<1> *)&DAT_00000010;
LAB_14d1025f6:
          if (((pTVar30->_padding_ == 0) || (*(longlong *)&pTVar30->SharedReferenceCount == 0)) ||
             (*(int *)(*(longlong *)&pTVar30->SharedReferenceCount + 8) < 1)) {
            if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar30->_padding_ = (longlong)pTVar30;
            if (pTVar24 != *(TReferenceControllerBase<1> **)&pTVar30->SharedReferenceCount) {
              if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar24->WeakReferenceCount = (atomic<int>)((int)pTVar24->WeakReferenceCount + 1);
                UNLOCK();
              }
              plVar6 = *(longlong **)&pTVar30->SharedReferenceCount;
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar16 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar16 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
              *(TReferenceControllerBase<1> **)&pTVar30->SharedReferenceCount = pTVar24;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar24);
          }
        }
        else {
          pTVar19[1]._padding_ = 0;
          pTVar19->SharedReferenceCount = (atomic<int>)0x1;
          pTVar19->WeakReferenceCount = (atomic<int>)0x1;
          pTVar19->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFNamingTokenDataTreeItem___00_SharedPointerInternals__6B_
          ;
          pTVar19[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar19[1].WeakReferenceCount = (atomic<int>)0x0;
          pTVar19[2]._padding_ = *(longlong *)(lVar3 + 0x10);
          lVar4 = *(longlong *)(lVar3 + 0x18);
          pTVar19[2].SharedReferenceCount = (atomic<int>)(int)lVar4;
          pTVar19[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar4 >> 0x20);
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          ::FString::FString((FString *)(pTVar19 + 3),(FString *)(lVar3 + 0x20));
          pTVar19[4]._padding_ = 0;
          plVar6 = *(longlong **)(lVar3 + 0x30);
          pTVar19[4]._padding_ = (longlong)plVar6;
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 8))(plVar6,local_11c);
          }
          pTVar24 = pTVar19 + 5;
          pTVar19[4].SharedReferenceCount = *(atomic<int> *)(lVar3 + 0x38);
          pTVar24->_padding_ = 0;
          aVar22 = *(atomic<int> *)(lVar3 + 0x48);
          pTVar5 = *(TSharedPtr<FNamingTokenDataTreeItem,1> **)(lVar3 + 0x40);
          pTVar19[5].SharedReferenceCount = aVar22;
          if (aVar22 == (atomic<int>)0x0) {
            pTVar19[5].WeakReferenceCount = (atomic<int>)0x0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,(int)aVar22,0,(ForAnyElementType *)pTVar24,(int)aVar22,
                       (int *)&pTVar19[5].WeakReferenceCount);
            ConstructItems<TSharedPtr<FNamingTokenDataTreeItem,1>,TSharedPtr<FNamingTokenDataTreeItem,1>,int>
                      ((FScriptContainerElement *)pTVar24->_padding_,pTVar5,(int)aVar22);
          }
          pTVar19[6]._padding_ = *(longlong *)(lVar3 + 0x50);
          lVar4 = *(longlong *)(lVar3 + 0x58);
          pTVar19[6].SharedReferenceCount = (atomic<int>)(int)lVar4;
          pTVar19[6].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar4 >> 0x20);
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
            UNLOCK();
          }
          pTVar30 = pTVar19 + 1;
          *(undefined4 *)&pTVar19[7]._padding_ = *(undefined4 *)(lVar3 + 0x60);
          *(undefined1 *)((longlong)&pTVar19[7]._padding_ + 4) = *(undefined1 *)(lVar3 + 100);
          pTVar24 = pTVar19;
          if (pTVar30 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d1025f6;
          bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L"");
          if (bVar31) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_188 = pTVar30;
        local_180 = pTVar24;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24)
        ;
        if ((local_188 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar31)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar24 = local_188;
        aVar22 = local_198.Data.ArrayNum;
        fVar32 = fVar11;
        if ((int)aVar22 < 2) {
LAB_14d102874:
          iVar16 = local_178;
          iVar25 = local_178 + 1;
          local_178 = iVar25;
          if ((local_188 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar31)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(int *)&local_188[6]._padding_ = iVar16;
          if ((local_1b8 == (FNamingTokenDataTreeItem *)0x0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar31)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar17 = local_1b8;
          pFVar29 = (local_1b8->ChildItems).AllocatorInstance.Data;
          if (((pFVar29 <= (FScriptContainerElement *)&local_188) &&
              ((FScriptContainerElement *)&local_188 <
               pFVar29 + (longlong)(local_1b8->ChildItems).ArrayMax * 0x10)) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar31)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar16 = (pFVar17->ChildItems).ArrayNum;
          piVar1 = &(pFVar17->ChildItems).ArrayMax;
          if (iVar16 == *piVar1) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(pFVar17->ChildItems).AllocatorInstance,piVar1);
          }
          (pFVar17->ChildItems).ArrayNum = iVar16 + 1;
          pFVar29 = (pFVar17->ChildItems).AllocatorInstance.Data;
          *(TReferenceControllerBase<1> **)(pFVar29 + (longlong)iVar16 * 0x10) = local_188;
          *(TReferenceControllerBase<1> **)(pFVar29 + (longlong)iVar16 * 0x10 + 8) = local_180;
          if (local_180 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_180->SharedReferenceCount =
                 (atomic<int>)((int)local_180->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (fVar34 < fVar32) {
            if ((local_188 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar31)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_150 = (undefined4)local_188[6]._padding_;
            uVar18 = CONCAT44(fVar32,local_150);
            fVar34 = fVar32;
            local_168 = uVar18;
            fStack_14c = fVar32;
          }
        }
        else {
          iVar16 = 0;
          fVar32 = fVar10;
          if (local_188[1]._padding_ != 0) {
            aVar2 = *(atomic<int> *)((undefined8 *)local_188[1]._padding_ + 1);
            if (aVar2 == aVar22) {
              if ((int)aVar2 < 2) goto LAB_14d102874;
              iVar26 = wcscmp(*(wchar_t **)local_188[1]._padding_,
                              (wchar_t *)local_198.Data.AllocatorInstance.Data);
              bVar31 = iVar26 == 0;
            }
            else {
              bVar31 = (int)aVar2 + (int)aVar22 == 1;
            }
            if (!bVar31) {
              pFVar21 = TSharedPtr<FNamingTokenData,1>::operator->
                                  ((TSharedPtr<FNamingTokenData,1> *)(pTVar24 + 1));
              iVar26 = (pFVar21->TokenKey).Data.ArrayNum;
              fVar32 = fVar9;
              if (iVar26 == local_198.Data.ArrayNum) {
                if (iVar26 < 2) goto LAB_14d102874;
                iVar26 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)(pFVar21->TokenKey).Data.AllocatorInstance.Data,
                                    (wchar_t *)local_198.Data.AllocatorInstance.Data);
                bVar31 = iVar26 == 0;
              }
              else {
                bVar31 = local_198.Data.ArrayNum + iVar26 == 1;
              }
              if (!bVar31) {
                pFVar21 = TSharedPtr<FNamingTokenData,1>::operator->
                                    ((TSharedPtr<FNamingTokenData,1> *)(pTVar24 + 1));
                iVar26 = local_198.Data.ArrayNum + -1;
                FVar8.Data = local_198.Data.AllocatorInstance.Data;
                if (local_198.Data.ArrayNum == 0) {
                  iVar26 = iVar16;
                  FVar8.Data = (FScriptContainerElement *)L"";
                }
                bVar31 = ::FString::StartsWith
                                   (&pFVar21->TokenKey,(wchar_t *)FVar8.Data,iVar26,IgnoreCase);
                fVar32 = fVar12;
                if (!bVar31) {
                  pFVar21 = TSharedPtr<FNamingTokenData,1>::operator->
                                      ((TSharedPtr<FNamingTokenData,1> *)(pTVar24 + 1));
                  pFVar20 = FText::ToString(&pFVar21->DisplayName);
                  iVar26 = local_198.Data.ArrayNum + -1;
                  FVar8.Data = local_198.Data.AllocatorInstance.Data;
                  if (local_198.Data.ArrayNum == 0) {
                    iVar26 = iVar16;
                    FVar8.Data = (FScriptContainerElement *)L"";
                  }
                  bVar31 = ::FString::StartsWith(pFVar20,(wchar_t *)FVar8.Data,iVar26,IgnoreCase);
                  if (!bVar31) goto LAB_14d102858;
                }
              }
            }
            goto LAB_14d102874;
          }
          aVar2 = local_188[2].SharedReferenceCount;
          if (aVar2 == aVar22) {
            if ((int)aVar2 < 2) goto LAB_14d102874;
            iVar26 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)local_188[2]._padding_,
                                (wchar_t *)local_198.Data.AllocatorInstance.Data);
            aVar22 = local_198.Data.ArrayNum;
            bVar31 = iVar26 == 0;
          }
          else {
            bVar31 = (int)aVar2 + (int)aVar22 == 1;
          }
          if (bVar31) goto LAB_14d102874;
          iVar26 = (int)aVar22 + -1;
          FVar8.Data = local_198.Data.AllocatorInstance.Data;
          if (aVar22 == (atomic<int>)0x0) {
            iVar26 = 0;
            FVar8.Data = (FScriptContainerElement *)L"";
          }
          bVar31 = ::FString::StartsWith
                             ((FString *)(pTVar24 + 2),(wchar_t *)FVar8.Data,iVar26,IgnoreCase);
          fVar32 = fVar12;
          if (bVar31) goto LAB_14d102874;
          pFVar20 = FText::ToString((FText *)(pTVar24 + 3));
          iVar26 = local_198.Data.ArrayNum + -1;
          FVar8.Data = local_198.Data.AllocatorInstance.Data;
          if (local_198.Data.ArrayNum == 0) {
            iVar26 = iVar16;
            FVar8.Data = (FScriptContainerElement *)L"";
          }
          bVar31 = ::FString::StartsWith(pFVar20,(wchar_t *)FVar8.Data,iVar26,IgnoreCase);
          if (bVar31) goto LAB_14d102874;
LAB_14d102858:
          fVar32 = 0.0;
          iVar25 = local_178;
          if (0.0 < fVar33) goto LAB_14d102874;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_180);
        plVar28 = plVar28 + 2;
        uVar23 = (ulonglong)local_160;
      }
      if (fVar33 == 0.0) {
        if ((local_1b8 == (FNamingTokenDataTreeItem *)0x0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar31)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar26 = local_170;
        iVar16 = local_174;
        uVar23 = local_158;
        if (0 < (local_1b8->ChildItems).ArrayNum) goto LAB_14d102a54;
      }
      else {
LAB_14d102a54:
        pTVar13 = local_108;
        pFVar29 = (local_108->AllocatorInstance).Data;
        local_174 = iVar25;
        if (((pFVar29 <= (FScriptContainerElement *)&local_1b8) &&
            ((FScriptContainerElement *)&local_1b8 < pFVar29 + (longlong)local_108->ArrayMax * 0x10)
            ) && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar31)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar16 = pTVar13->ArrayNum;
        if (iVar16 == pTVar13->ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
        }
        iVar26 = local_170;
        pTVar13->ArrayNum = iVar16 + 1;
        pFVar29 = (pTVar13->AllocatorInstance).Data;
        *(FNamingTokenDataTreeItem **)(pFVar29 + (longlong)iVar16 * 0x10) = local_1b8;
        *(TReferenceControllerBase<1> **)(pFVar29 + (longlong)iVar16 * 0x10 + 8) = pTStack_1b0;
        if (pTStack_1b0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_1b0->SharedReferenceCount =
               (atomic<int>)((int)pTStack_1b0->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar31 = false;
        local_158 = local_158 & 0xffffffff;
        if (((local_170 < 2) && (fVar34 <= fVar33)) && (0.0 < fVar33)) {
          if ((local_1b8 == (FNamingTokenDataTreeItem *)0x0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar31)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_148 = local_1b8->ItemIndex;
          bVar31 = true;
          uVar18 = CONCAT44(fVar33,local_148);
          fStack_144 = fVar33;
        }
        local_158._4_4_ = (float)(uVar18 >> 0x20);
        iVar16 = iVar25;
        uVar23 = uVar18;
        if ((fVar35 < local_158._4_4_) ||
           (((bVar31 && (fVar12 <= local_158._4_4_)) && (fVar35 <= local_158._4_4_)))) {
          local_16c = (int)uVar18;
          fVar35 = local_158._4_4_;
          local_140 = uVar18;
        }
      }
      local_158 = uVar23;
      pFVar29 = local_138;
      if (1 < iVar26) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_1b0);
LAB_14d102bef:
        if (((this->TreeView).Object == (SNamingTokenDataTreeView *)0x0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar31)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (**(code **)(*(longlong *)(this->TreeView).Object + 0x248))();
        if (((this->TreeView).Object == (SNamingTokenDataTreeView *)0x0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar31)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        SNamingTokenDataTreeView::SetExpansionStateFromItems
                  ((this->TreeView).Object,&this->FilteredRootTreeItems);
        if (0 < (this->FilteredRootTreeItems).ArrayNum) {
          iVar16 = local_16c;
          if (bVar15) {
            iVar16 = 1;
          }
          SetItemFromIndex(this,iVar16);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1b0)
    ;
    uVar18 = (ulonglong)local_15c;
    pFVar29 = pFVar29 + 0x10;
  } while( true );
}

// FinalizeSelection @ 14d102d60

void __thiscall
SNamingTokenDataTreeViewWidget::FinalizeSelection
          (SNamingTokenDataTreeViewWidget *this,TSharedPtr<FNamingTokenDataTreeItem,1> *param_1)

{
  TSharedPtr<FNamingTokenDataTreeItem,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegate<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>::
  ExecuteIfBound(&this->ItemSelectedDelegate,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ForwardKeyEventForNavigation @ 14d1030e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
SNamingTokenDataTreeViewWidget::ForwardKeyEventForNavigation
          (SNamingTokenDataTreeViewWidget *this,FKeyEvent *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FSlateApplicationBase *pFVar7;
  TSharedPtr<FNamingTokenDataTreeItem,1> local_28;
  TSharedPtr<FNamingTokenDataTreeItem,1> local_18;
  
  if ((this->TreeView).Object == (SNamingTokenDataTreeView *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TreeView.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensDataTreeView.cpp"
                       ,0x15b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pTVar1 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_1->Key).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar2 == EKeys::Tab.KeyName) || (FVar2 == EKeys::Enter.KeyName)) {
    GetItemFromIndex(this,&local_28,this->CurrentSelectionIndex,&this->FilteredRootTreeItems);
    local_18.Object = local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegate<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>::
    ExecuteIfBound(&this->ItemSelectedDelegate,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    pFVar7 = FSlateApplicationBase::Get();
    cVar6 = (**(code **)(*(longlong *)pFVar7 + 0xa0))(pFVar7,param_1);
    if (cVar6 == '\x02') {
      if (0 < this->CurrentSelectionIndex) {
        SetItemFromIndex(this,this->CurrentSelectionIndex + -1);
      }
    }
    else {
      if (cVar6 != '\x03') {
        bVar4 = false;
        goto LAB_14d1031ed;
      }
      SetItemFromIndex(this,this->CurrentSelectionIndex + 1);
    }
  }
  bVar4 = true;
LAB_14d1031ed:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar4;
}

// GetItemFromIndex @ 14d108ad0

TSharedPtr<FNamingTokenDataTreeItem,1> * __thiscall
SNamingTokenDataTreeViewWidget::GetItemFromIndex
          (SNamingTokenDataTreeViewWidget *this,
          TSharedPtr<FNamingTokenDataTreeItem,1> *__return_storage_ptr__,int param_1,
          TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  FNamingTokenDataTreeItem *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<FNamingTokenDataTreeItem,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  TSharedPtr<FNamingTokenDataTreeItem,1> local_28;
  
  iVar9 = param_2->ArrayNum;
  uVar8 = 0;
  if (0 < iVar9) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar9) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FNamingTokenDataTreeItem,1> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar7 = (param_2->AllocatorInstance).Data + lVar10;
      if ((*(longlong *)pFVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FNamingTokenDataTreeItem,1> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar1 = *(FNamingTokenDataTreeItem **)pFVar7;
      if (pFVar1->ItemIndex == param_1) {
        __return_storage_ptr__->Object = pFVar1;
        pTVar2 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
        if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
          return __return_storage_ptr__;
        }
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        return __return_storage_ptr__;
      }
      if ((pFVar1 == (FNamingTokenDataTreeItem *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FNamingTokenDataTreeItem,1> *)(*pcVar3)();
        return pTVar6;
      }
      if (0 < *(int *)(*(longlong *)pFVar7 + 0x48)) {
        if ((*(longlong *)pFVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TSharedPtr<FNamingTokenDataTreeItem,1> *)(*pcVar3)();
          return pTVar6;
        }
        GetItemFromIndex(this,&local_28,param_1,
                         (TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_>
                          *)(*(longlong *)pFVar7 + 0x40));
        if (local_28.Object != (FNamingTokenDataTreeItem *)0x0) {
          __return_storage_ptr__->Object = local_28.Object;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               local_28.SharedReferenceCount.ReferenceController;
          if (local_28.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_28.SharedReferenceCount.ReferenceController);
          return __return_storage_ptr__;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
      }
      iVar9 = param_2->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar8 < iVar9);
  }
  __return_storage_ptr__->Object = (FNamingTokenDataTreeItem *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetItemFromIndex @ 14d108ca0

TSharedPtr<FNamingTokenDataTreeItem,1> * __thiscall
SNamingTokenDataTreeViewWidget::GetItemFromIndex
          (SNamingTokenDataTreeViewWidget *this,
          TSharedPtr<FNamingTokenDataTreeItem,1> *__return_storage_ptr__,int param_1)

{
  GetItemFromIndex(this,__return_storage_ptr__,param_1,&this->FilteredRootTreeItems);
  return __return_storage_ptr__;
}

// GetSelectedItem @ 14d109af0

TSharedPtr<FNamingTokenDataTreeItem,1> * __thiscall
SNamingTokenDataTreeViewWidget::GetSelectedItem
          (SNamingTokenDataTreeViewWidget *this,
          TSharedPtr<FNamingTokenDataTreeItem,1> *__return_storage_ptr__)

{
  GetItemFromIndex(this,__return_storage_ptr__,this->CurrentSelectionIndex,
                   &this->FilteredRootTreeItems);
  return __return_storage_ptr__;
}

// NotifyFocusReceived @ 14d10c540

void __thiscall
SNamingTokenDataTreeViewWidget::NotifyFocusReceived(SNamingTokenDataTreeViewWidget *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnFocusedDelegate,
             &local_28);
  if ((*(int *)&(this->OnFocusedDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnFocusedDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnFocusReceived @ 14d10dae0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SNamingTokenDataTreeViewWidget::OnFocusReceived
          (SNamingTokenDataTreeViewWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnFocusedDelegate,
             &local_28);
  if ((*(int *)&(this->OnFocusedDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnFocusedDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SWidget::OnFocusReceived((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnGenerateRowForTree @ 14d10dc50

TSharedRef<ITableRow,1> * __thiscall
SNamingTokenDataTreeViewWidget::OnGenerateRowForTree
          (SNamingTokenDataTreeViewWidget *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FNamingTokenDataTreeItem,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  FNamingTokenDataTreeItem *pFVar1;
  code *pcVar2;
  SNamingTokenDataTreeViewRow *pSVar3;
  bool bVar4;
  FArguments *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<ITableRow,1> *pTVar7;
  TSharedRef<SNamingTokenDataTreeViewRow,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FLLMScope local_res10 [2];
  FName local_res18;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_res20;
  TSlateDecl<SNamingTokenDataTreeViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_2a8;
  FMemScope local_290;
  undefined8 local_288;
  FSharedReferencer<1> local_280;
  TSharedRef<SNamingTokenDataTreeViewRow,1> local_278;
  FNamingTokenDataTreeItem *local_268;
  TReferenceControllerBase<1> *pTStack_260;
  TSharedRef<SNamingTokenDataTreeViewRow,1> local_258;
  FArguments local_248;
  
  pFVar5 = SNamingTokenDataTreeViewRow::FArguments::FArguments(&local_248);
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar1 = param_1->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_268 = (pFVar5->_Item).Object;
  pTStack_260 = (pFVar5->_Item).SharedReferenceCount.ReferenceController;
  (pFVar5->_Item).Object = pFVar1;
  (pFVar5->_Item).SharedReferenceCount.ReferenceController = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_260);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  local_res20.Arg0 = param_2;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_290,&local_res18,true);
  local_2a8._RequiredArgs = &local_res20;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_2a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x478);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSNamingTokenDataTreeViewRow___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x468);
    STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>::
    STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_>
              ((STableRow<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)(pTVar6 + 1));
    pTVar6[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x41]._padding_ = 0;
    pTVar6[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x42]._padding_ = 0;
    pTVar6[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[0x44]._padding_ + 4) = 0x80;
    pTVar6[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x46]._padding_ = 0;
    pTVar6[1]._padding_ = (longlong)&SNamingTokenDataTreeViewRow::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar6[1].SharedReferenceCount =
         &SNamingTokenDataTreeViewRow::_vftable__for__SBorder__;
    pTVar6[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x47]._padding_ = 0;
    pTVar9 = pTVar6;
  }
  TSharedRef<SNamingTokenDataTreeViewRow,1>::TSharedRef<SNamingTokenDataTreeViewRow,1>
            (&local_278,(SNamingTokenDataTreeViewRow *)(pTVar9 + 1),pTVar9);
  local_280.ReferenceController = local_278.SharedReferenceCount.ReferenceController;
  if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a8._Widget.Object = local_278.Object;
  local_288 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_2a8._Widget.SharedReferenceCount,&local_280);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278.SharedReferenceCount.ReferenceController);
  pSVar3 = local_2a8._Widget.Object;
  if ((local_2a8._Widget.Object == (SNamingTokenDataTreeViewRow *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedRef<ITableRow,1> *)(*pcVar2)();
    return pTVar7;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&pSVar3->_padding_,"SNamingTokenDataTreeViewRow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokensUI\\Private\\SNamingTokensDataTreeView.cpp"
             ,0x1c2,0x468);
  FMemScope::~FMemScope(&local_290);
  FLLMScope::~FLLMScope(local_res10);
  pTVar8 = TSlateDecl<SNamingTokenDataTreeViewRow,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
           ::operator<<=(&local_2a8,&local_258,pFVar5);
  __return_storage_ptr__->Object = (ITableRow *)pTVar8->Object;
  pTVar9 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248._Item.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_248);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnGetChildrenForTree @ 14d10df20

void __thiscall
SNamingTokenDataTreeViewWidget::OnGetChildrenForTree
          (SNamingTokenDataTreeViewWidget *this,TSharedPtr<FNamingTokenDataTreeItem,1> *param_1,
          TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FNamingTokenDataTreeItem *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (param_1->Object == (FNamingTokenDataTreeItem *)0x0) {
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
  pFVar2 = param_1->Object;
  pTVar6 = &pFVar2->ChildItems;
  if (param_2 == pTVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = (pFVar2->ChildItems).ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    ConstructItems<TSharedPtr<FNamingTokenDataTreeItem,1>,TSharedPtr<FNamingTokenDataTreeItem,1>,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10,
               (TSharedPtr<FNamingTokenDataTreeItem,1> *)(pTVar6->AllocatorInstance).Data,iVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnItemExpansionChanged @ 14d10e1f0

void __thiscall
SNamingTokenDataTreeViewWidget::OnItemExpansionChanged
          (SNamingTokenDataTreeViewWidget *this,TSharedPtr<FNamingTokenDataTreeItem,1> *param_1,
          bool param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTreeViewItemDoubleClicked @ 14d111820

void __thiscall
SNamingTokenDataTreeViewWidget::OnTreeViewItemDoubleClicked
          (SNamingTokenDataTreeViewWidget *this,TSharedPtr<FNamingTokenDataTreeItem,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FNamingTokenDataTreeItem,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  TDelegate<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>),FDefaultDelegateUserPolicy>::
  ExecuteIfBound(&this->ItemSelectedDelegate,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTreeViewItemSelectionChanged @ 14d111880

void __thiscall
SNamingTokenDataTreeViewWidget::OnTreeViewItemSelectionChanged
          (SNamingTokenDataTreeViewWidget *this,TSharedPtr<FNamingTokenDataTreeItem,1> *param_1,
          Type param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FNamingTokenDataTreeItem,1> local_18;
  
  if ((param_2 == OnMouseClick) && (param_1->Object != (FNamingTokenDataTreeItem *)0x0)) {
    ClearCurrentSelection(this);
    if (param_1->Object == (FNamingTokenDataTreeItem *)0x0) {
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
    this->CurrentSelectionIndex = param_1->Object->ItemIndex;
  }
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegate<void___cdecl(TSharedPtr<FNamingTokenDataTreeItem,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::ExecuteIfBound(&this->ItemSelectionChangedDelegate,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// PopulateTreeItems @ 14d1135c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
SNamingTokenDataTreeViewWidget::PopulateTreeItems(SNamingTokenDataTreeViewWidget *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  undefined1 uVar3;
  void *pvVar4;
  longlong *plVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  UNamingTokensEngineSubsystem *this_00;
  bool bVar9;
  bool bVar10;
  atomic<int> aVar11;
  ulonglong uVar12;
  TReferenceControllerBase<1> *pTVar13;
  UNamingTokens *this_01;
  int iVar14;
  undefined8 *puVar15;
  FScriptContainerElement *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  ForAnyElementType FVar18;
  FSharedReferencer<1> FVar19;
  atomic<int> *paVar20;
  TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_> *this_02;
  int *piVar21;
  TReferenceControllerBase<1> *pTVar22;
  int iVar23;
  atomic<int> *paVar24;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  uint local_res20;
  TReferenceControllerBase<1> *local_d8;
  TReferenceControllerBase<1> *local_d0;
  TReferenceControllerBase<1> *local_c8;
  TReferenceControllerBase<1> *local_c0;
  TReferenceControllerBase<1> *local_b8;
  TArray<FNamingTokenData,TSizedDefaultAllocator<32>_> local_b0;
  undefined1 local_a0 [8];
  FSharedReferencer<1> FStack_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_90;
  TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_> *local_80;
  int *local_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  UNamingTokensEngineSubsystem *local_68;
  TReferenceControllerBase<1> *local_60;
  
  this_02 = &this->RootTreeItems;
  local_80 = this_02;
  TArray<TSharedPtr<FNamingTokenDataTreeItem,1>,TSizedDefaultAllocator<32>_>::Reset(this_02,0);
  if ((GEngine != (UEngine *)0x0) &&
     (local_68 = UEngine::GetEngineSubsystem<UNamingTokensEngineSubsystem>(GEngine),
     local_68 != (UNamingTokensEngineSubsystem *)0x0)) {
    UNamingTokensEngineSubsystem::GetAllNamespaces(local_68,&local_90);
    iVar14 = local_90.ArrayNum;
    if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_90._8_8_ & 0xffffffff);
    }
    piVar21 = &(this->RootTreeItems).ArrayMax;
    local_78 = piVar21;
    if (*piVar21 < iVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar14,&this_02->AllocatorInstance,(this->RootTreeItems).ArrayNum,piVar21);
    }
    pTVar8 = _UNK_150651568;
    pTVar7 = ___xmm_00000000000000000000000000000010;
    iVar14 = 0;
    local_res20 = local_90.ArrayNum;
    uVar12 = (ulonglong)(int)local_res20;
    local_60 = (TReferenceControllerBase<1> *)(local_90.AllocatorInstance.Data + uVar12 * 0x10);
    FVar18.Data = local_90.AllocatorInstance.Data;
    while( true ) {
      pTVar13 = local_60;
      pTVar17 = (TReferenceControllerBase<1> *)0x0;
      iVar23 = local_90.ArrayNum;
      local_c8 = (TReferenceControllerBase<1> *)FVar18.Data;
      if (iVar23 != (int)uVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        iVar23 = local_90.ArrayNum;
      }
      if ((TReferenceControllerBase<1> *)FVar18.Data == pTVar13) break;
      pTVar13 = ::operator_new(0x78);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        pTVar22 = (TReferenceControllerBase<1> *)&DAT_00000010;
LAB_14d1137a5:
        if (((pTVar22->_padding_ == 0) || (*(longlong *)&pTVar22->SharedReferenceCount == 0)) ||
           (*(int *)(*(longlong *)&pTVar22->SharedReferenceCount + 8) < 1)) {
          if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar22->_padding_ = (longlong)pTVar22;
          if (pTVar17 != *(TReferenceControllerBase<1> **)&pTVar22->SharedReferenceCount) {
            if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
              UNLOCK();
            }
            plVar5 = *(longlong **)&pTVar22->SharedReferenceCount;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar23 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar23 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
            *(TReferenceControllerBase<1> **)&pTVar22->SharedReferenceCount = pTVar17;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar17);
        }
      }
      else {
        pTVar13->SharedReferenceCount = (atomic<int>)0x1;
        pTVar13->WeakReferenceCount = (atomic<int>)0x1;
        pTVar13->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFNamingTokenDataTreeItem___00_SharedPointerInternals__6B_
        ;
        pTVar13[4]._padding_ = 0;
        pTVar13[4].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[4].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[5]._padding_ = 0;
        pTVar13[5].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[5].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[6]._padding_ = 0;
        pTVar13[6].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[6].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[7]._padding_ = 0;
        pTVar13[1]._padding_ = 0;
        pTVar13[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[2]._padding_ = 0;
        pTVar13[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[2].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[3]._padding_ = 0;
        pTVar13[3].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[3].WeakReferenceCount = (atomic<int>)0x0;
        FText::FText((FText *)(pTVar13 + 4));
        pTVar22 = pTVar13 + 1;
        pTVar13[5]._padding_ = 0;
        pTVar13[6]._padding_ = 0;
        pTVar13[6].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[6].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[5].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[5].WeakReferenceCount = (atomic<int>)0x0;
        *(undefined4 *)&pTVar13[7]._padding_ = 0xffffffff;
        *(undefined1 *)((longlong)&pTVar13[7]._padding_ + 4) = 0;
        pTVar17 = pTVar13;
        if (pTVar22 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d1137a5;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8 = pTVar22;
      local_d0 = pTVar17;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      if ((local_d8 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar13 = local_d8 + 2;
      if (pTVar13 != local_c8) {
        aVar11 = local_c8->SharedReferenceCount;
        paVar24 = &local_d8[2].WeakReferenceCount;
        pvVar4 = (void *)local_c8->_padding_;
        local_d8[2].SharedReferenceCount = aVar11;
        if ((aVar11 == (atomic<int>)0x0) && (*paVar24 == (atomic<int>)0x0)) {
          *paVar24 = (atomic<int>)0x0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)aVar11,(int)*paVar24,(ForAnyElementType *)pTVar13,(int)aVar11,
                     (int *)paVar24);
          if (aVar11 != (atomic<int>)0x0) {
            memcpy((void *)pTVar13->_padding_,pvVar4,(longlong)(int)aVar11 * 2);
          }
        }
      }
      pTVar13 = local_c8;
      iVar23 = iVar14 + 1;
      local_res18 = iVar23;
      if ((local_d8 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = local_68;
      *(int *)&local_d8[6]._padding_ = iVar14;
      bVar9 = UNamingTokensEngineSubsystem::IsGlobalNamespaceRegistered(local_68,(FString *)pTVar13)
      ;
      if ((local_d8 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(bool *)((longlong)&local_d8[6]._padding_ + 4) = bVar9;
      this_01 = UNamingTokensEngineSubsystem::GetNamingTokens(this_00,(FString *)pTVar13);
      iVar14 = iVar23;
      if (this_01 == (UNamingTokens *)0x0) {
LAB_14d113fc0:
        if ((local_d8 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (0 < (int)local_d8[4].SharedReferenceCount) {
          pFVar16 = (this_02->AllocatorInstance).Data;
          if (((pFVar16 <= (FScriptContainerElement *)&local_d8) &&
              ((FScriptContainerElement *)&local_d8 < pFVar16 + (longlong)*piVar21 * 0x10)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar23 = this_02->ArrayNum;
          if (iVar23 == *piVar21) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&this_02->AllocatorInstance,piVar21);
          }
          this_02->ArrayNum = iVar23 + 1;
          pFVar16 = (this_02->AllocatorInstance).Data + (longlong)iVar23 * 0x10;
          *(TReferenceControllerBase<1> **)pFVar16 = local_d8;
          *(TReferenceControllerBase<1> **)(pFVar16 + 8) = local_d0;
          if (local_d0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_d0->SharedReferenceCount = (atomic<int>)((int)local_d0->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
      }
      else {
        if ((local_d8 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FText::operator=((FText *)(local_d8 + 3),&this_01->NamespaceDisplayName);
        UNamingTokens::GetAllTokens(this_01,&local_b0);
        if (local_b0.ArrayNum != 0) {
          if ((local_d8 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar14 = local_b0.ArrayNum;
          if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(local_b0._8_8_ & 0xffffffff);
          }
          if ((int)local_d8[4].WeakReferenceCount < iVar14) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar14,(ForAnyElementType *)(local_d8 + 4),
                       (int)local_d8[4].SharedReferenceCount,(int *)&local_d8[4].WeakReferenceCount)
            ;
          }
          iVar14 = local_b0.ArrayNum;
          paVar24 = (atomic<int> *)(local_b0.AllocatorInstance.Data + 0x18);
          paVar20 = (atomic<int> *)(local_b0.AllocatorInstance.Data + (longlong)iVar14 * 0x50);
          while( true ) {
            pTVar17 = (TReferenceControllerBase<1> *)0x0;
            iVar23 = local_b0.ArrayNum;
            if (iVar23 != iVar14) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<FNamingTokenData_const_,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(local_res10);
              iVar23 = local_b0.ArrayNum;
            }
            if (paVar24 + -6 == paVar20) break;
            pTVar13 = ::operator_new(0x78);
            if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
              pTVar22 = (TReferenceControllerBase<1> *)&DAT_00000010;
LAB_14d113b62:
              if (((pTVar22->_padding_ == 0) || (*(longlong *)&pTVar22->SharedReferenceCount == 0))
                 || (*(int *)(*(longlong *)&pTVar22->SharedReferenceCount + 8) < 1)) {
                if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar17->SharedReferenceCount =
                       (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
                  UNLOCK();
                }
                pTVar22->_padding_ = (longlong)pTVar22;
                if (pTVar17 != *(TReferenceControllerBase<1> **)&pTVar22->SharedReferenceCount) {
                  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar17->WeakReferenceCount =
                         (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
                    UNLOCK();
                  }
                  plVar5 = *(longlong **)&pTVar22->SharedReferenceCount;
                  if (plVar5 != (longlong *)0x0) {
                    LOCK();
                    piVar21 = (int *)((longlong)plVar5 + 0xc);
                    iVar23 = *piVar21;
                    *piVar21 = *piVar21 + -1;
                    UNLOCK();
                    if (iVar23 == 1) {
                      (**(code **)(*plVar5 + 8))(plVar5,1);
                    }
                  }
                  *(TReferenceControllerBase<1> **)&pTVar22->SharedReferenceCount = pTVar17;
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar17);
              }
            }
            else {
              pTVar13->SharedReferenceCount = (atomic<int>)0x1;
              pTVar13->WeakReferenceCount = (atomic<int>)0x1;
              pTVar13->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_UFNamingTokenDataTreeItem___00_SharedPointerInternals__6B_
              ;
              pTVar13[4]._padding_ = 0;
              pTVar13[4].SharedReferenceCount = (atomic<int>)0x0;
              pTVar13[4].WeakReferenceCount = (atomic<int>)0x0;
              pTVar13[5]._padding_ = 0;
              pTVar13[5].SharedReferenceCount = (atomic<int>)0x0;
              pTVar13[5].WeakReferenceCount = (atomic<int>)0x0;
              pTVar13[6]._padding_ = 0;
              pTVar13[6].SharedReferenceCount = (atomic<int>)0x0;
              pTVar13[6].WeakReferenceCount = (atomic<int>)0x0;
              pTVar13[7]._padding_ = 0;
              pTVar13[1]._padding_ = 0;
              pTVar13[1].SharedReferenceCount = (atomic<int>)0x0;
              pTVar13[1].WeakReferenceCount = (atomic<int>)0x0;
              pTVar13[2]._padding_ = 0;
              pTVar13[2].SharedReferenceCount = (atomic<int>)0x0;
              pTVar13[2].WeakReferenceCount = (atomic<int>)0x0;
              pTVar13[3]._padding_ = 0;
              pTVar13[3].SharedReferenceCount = (atomic<int>)0x0;
              pTVar13[3].WeakReferenceCount = (atomic<int>)0x0;
              FText::FText((FText *)(pTVar13 + 4));
              pTVar22 = pTVar13 + 1;
              pTVar13[5]._padding_ = 0;
              pTVar13[6]._padding_ = 0;
              pTVar13[6].SharedReferenceCount = (atomic<int>)0x0;
              pTVar13[6].WeakReferenceCount = (atomic<int>)0x0;
              pTVar13[5].SharedReferenceCount = (atomic<int>)0x0;
              pTVar13[5].WeakReferenceCount = (atomic<int>)0x0;
              *(undefined4 *)&pTVar13[7]._padding_ = 0xffffffff;
              *(undefined1 *)((longlong)&pTVar13[7]._padding_ + 4) = 0;
              pTVar17 = pTVar13;
              if (pTVar22 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d113b62;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L"");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_c0 = pTVar22;
            local_b8 = pTVar17;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar17);
            pTVar13 = ::operator_new(0x60);
            if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
              pTVar13 = (TReferenceControllerBase<1> *)0x0;
              pTVar17 = pTVar7;
              FVar19.ReferenceController = pTVar8;
            }
            else {
              pTVar13->SharedReferenceCount = (atomic<int>)0x1;
              pTVar13->WeakReferenceCount = (atomic<int>)0x1;
              pTVar13->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_UFNamingTokenData___00_SharedPointerInternals__6B_
              ;
              ::FString::FString((FString *)(pTVar13 + 1),(FString *)(paVar24 + -6));
              pTVar13[2]._padding_ = 0;
              plVar5 = *(longlong **)(paVar24 + -2);
              pTVar13[2]._padding_ = (longlong)plVar5;
              if (plVar5 != (longlong *)0x0) {
                (**(code **)(*plVar5 + 8))(plVar5,local_70);
              }
              pTVar13[2].SharedReferenceCount = *paVar24;
              pTVar13[3]._padding_ = 0;
              plVar5 = *(longlong **)(paVar24 + 2);
              pTVar13[3]._padding_ = (longlong)plVar5;
              if (plVar5 != (longlong *)0x0) {
                (**(code **)(*plVar5 + 8))(plVar5,local_6c);
              }
              pTVar13[3].SharedReferenceCount = paVar24[4];
              pTVar13[4]._padding_ = *(longlong *)(paVar24 + 6);
              pTVar13[4].SharedReferenceCount = (atomic<int>)0x0;
              pTVar13[4].WeakReferenceCount = (atomic<int>)0x0;
              pTVar13[5]._padding_ = 0;
              pTVar13[5].SharedReferenceCount = (atomic<int>)0x0;
              TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
              CopyFrom<FDefaultDelegateUserPolicy>
                        ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
                         &pTVar13[4].SharedReferenceCount,
                         (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(paVar24 + 8))
              ;
              if ((pTVar13 + 1 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InObject != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x246,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              LOCK();
              pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
              UNLOCK();
              pTVar17 = pTVar13 + 1;
              FVar19.ReferenceController = pTVar13;
            }
            local_a0 = (undefined1  [8])pTVar17;
            FStack_98.ReferenceController = FVar19.ReferenceController;
            if ((local_c0 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (local_c0 + 1 != (TReferenceControllerBase<1> *)local_a0) {
              local_c0[1]._padding_ = (longlong)pTVar17;
              local_a0 = (undefined1  [8])0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)&local_c0[1].SharedReferenceCount,&FStack_98);
              FVar19.ReferenceController = FStack_98.ReferenceController;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar19.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar13);
            if ((local_c0 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar13 = local_c0 + 2;
            if (pTVar13 != local_c8) {
              aVar11 = local_c8->SharedReferenceCount;
              paVar2 = &local_c0[2].WeakReferenceCount;
              pvVar4 = (void *)local_c8->_padding_;
              local_c0[2].SharedReferenceCount = aVar11;
              if ((aVar11 == (atomic<int>)0x0) && (*paVar2 == (atomic<int>)0x0)) {
                *paVar2 = (atomic<int>)0x0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,(int)aVar11,(int)*paVar2,(ForAnyElementType *)pTVar13,(int)aVar11,
                           (int *)paVar2);
                if (aVar11 != (atomic<int>)0x0) {
                  memcpy((void *)pTVar13->_padding_,pvVar4,(longlong)(int)aVar11 * 2);
                }
              }
            }
            pTVar13 = local_c8;
            if ((local_d8 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar3 = *(undefined1 *)((longlong)&local_d8[6]._padding_ + 4);
            if ((local_c0 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar23 = local_res18;
            *(undefined1 *)((longlong)&local_c0[6]._padding_ + 4) = uVar3;
            local_res18 = local_res18 + 1;
            if ((local_c0 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(int *)&local_c0[6]._padding_ = iVar23;
            if ((local_d8 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pTVar17 = local_d8;
            if ((((TReferenceControllerBase<1> **)local_d8[4]._padding_ <= &local_c0) &&
                (&local_c0 <
                 (TReferenceControllerBase<1> **)local_d8[4]._padding_ +
                 (longlong)(int)local_d8[4].WeakReferenceCount * 2)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            aVar11 = pTVar17[4].SharedReferenceCount;
            if (aVar11 == pTVar17[4].WeakReferenceCount) {
              aVar11 = (atomic<int>)
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,(ForAnyElementType *)(pTVar17 + 4),
                                  (int *)&pTVar17[4].WeakReferenceCount);
            }
            pTVar17[4].SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
            puVar15 = (undefined8 *)((longlong)(int)aVar11 * 0x10 + pTVar17[4]._padding_);
            *puVar15 = local_c0;
            puVar15[1] = local_b8;
            if (local_b8 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_b8->SharedReferenceCount =
                   (atomic<int>)((int)local_b8->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_b8);
            paVar24 = paVar24 + 0x14;
          }
          DestructItems<FNamingTokenData,int>
                    ((FNamingTokenData *)local_b0.AllocatorInstance.Data,iVar23);
          this_02 = local_80;
          piVar21 = local_78;
          iVar14 = local_res18;
          if ((FNamingTokenData *)local_b0.AllocatorInstance.Data != (FNamingTokenData *)0x0) {
            FMemory::Free(local_b0.AllocatorInstance.Data);
            this_02 = local_80;
            piVar21 = local_78;
            iVar14 = local_res18;
          }
          goto LAB_14d113fc0;
        }
        DestructItems<FNamingTokenData,int>((FNamingTokenData *)local_b0.AllocatorInstance.Data,0);
        if ((FNamingTokenData *)local_b0.AllocatorInstance.Data != (FNamingTokenData *)0x0) {
          FMemory::Free(local_b0.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
      FVar18.Data = (FScriptContainerElement *)(pTVar13 + 1);
      uVar12 = (ulonglong)local_res20;
    }
    DestructItems<FString,int>((FString *)local_90.AllocatorInstance.Data,iVar23);
    if ((TReferenceControllerBase<1> *)local_90.AllocatorInstance.Data !=
        (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(local_90.AllocatorInstance.Data);
    }
  }
  return;
}

// SetItemFromIndex @ 14d11a170

void __thiscall
SNamingTokenDataTreeViewWidget::SetItemFromIndex(SNamingTokenDataTreeViewWidget *this,int param_1)

{
  SNamingTokenDataTreeView *pSVar1;
  longlong lVar2;
  ITableRow *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  Type *pTVar7;
  atomic<int> *paVar8;
  TSharedRef<ITableRow,1> *pTVar9;
  TSharedPtr<FNamingTokenDataTreeItem,1> local_88;
  FNamingTokenDataTreeItem *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TSharedPtr<FNamingTokenDataTreeItem_const_,1> local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  TSharedPtr<FNamingTokenDataTreeItem,1> local_38 [2];
  
  GetItemFromIndex(this,&local_88,param_1,&this->FilteredRootTreeItems);
  if (local_88.Object != (FNamingTokenDataTreeItem *)0x0) {
    ClearCurrentSelection(this);
    this->CurrentSelectionIndex = param_1;
    if (((this->TreeView).Object == (SNamingTokenDataTreeView *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pSVar1 = (this->TreeView).Object;
    pTVar7 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar1->field_0x3e8);
    if (*pTVar7 != None) {
      lVar2 = *(longlong *)&pSVar1->field_0x588;
      local_78 = local_88.Object;
      pTStack_70 = local_88.SharedReferenceCount.ReferenceController;
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)(lVar2 + 0x28))(&pSVar1->field_0x588,&local_78,1,0);
      (**(code **)(*(longlong *)&pSVar1->field_0x588 + 0x40))(&pSVar1->field_0x588,3);
    }
    if (((this->TreeView).Object == (SNamingTokenDataTreeView *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pSVar1 = (this->TreeView).Object;
    if (local_88.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = &(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    local_68.Object = local_88.Object;
    local_68.SharedReferenceCount.ReferenceController =
         local_88.SharedReferenceCount.ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    pTVar9 = TMapBase<TSharedPtr<FNamingTokenDataTreeItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FNamingTokenDataTreeItem,1>,TSharedRef<ITableRow,1>,0>_>
             ::Find((TMapBase<TSharedPtr<FNamingTokenDataTreeItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FNamingTokenDataTreeItem,1>,TSharedRef<ITableRow,1>,0>_>
                     *)&pSVar1->field_0x598,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    if (pTVar9 == (TSharedRef<ITableRow,1> *)0x0) {
      local_40 = 0;
      local_48 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
    }
    else {
      pIVar3 = pTVar9->Object;
      pTVar4 = (pTVar9->SharedReferenceCount).ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_50 = 0;
      local_58 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      if (pIVar3 != (ITableRow *)0x0) goto LAB_14d11a3ab;
    }
    if (((this->TreeView).Object == (SNamingTokenDataTreeView *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pSVar1 = (this->TreeView).Object;
    local_38[0].Object = local_88.Object;
    local_38[0].SharedReferenceCount.ReferenceController =
         local_88.SharedReferenceCount.ReferenceController;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::RequestScrollIntoView
              ((SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)pSVar1,local_38,0);
  }
LAB_14d11a3ab:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return;
}

