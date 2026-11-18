// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 6

// ChangeSourceControlProvider @ 146b057d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSourceControlPicker::ChangeSourceControlProvider(SSourceControlPicker *this,int param_1)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  SSourceControlLogin *pSVar3;
  SBox *this_00;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  FName *pFVar7;
  FModuleManager *pFVar8;
  FSourceControlModule *this_01;
  IModuleInterface *pIVar9;
  IModularFeatures *this_02;
  TSharedRef<SWidget,1> *pTVar10;
  IModuleInterface IVar11;
  uint uVar12;
  FName local_res8 [2];
  FName local_res18;
  FName local_res20;
  TArray<ISourceControlProvider_*,TSizedDefaultAllocator<32>_> local_78;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  pFVar7 = ::FName::FName(local_res8,"SourceControl");
  FVar1 = *pFVar7;
  pFVar8 = FModuleManager::Get();
  this_01 = (FSourceControlModule *)FModuleManager::LoadModuleChecked(pFVar8,FVar1);
  IVar11 = (IModuleInterface)0x0;
  if (this->CurrentProviderIndex != param_1) {
    pFVar7 = ::FName::FName(&local_res18,"SourceControl");
    FVar1 = *pFVar7;
    pFVar8 = FModuleManager::Get();
    pIVar9 = FModuleManager::LoadModuleChecked(pFVar8,FVar1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pIVar9 + 0x11),&local_58);
    if (((*(int *)(pIVar9 + 0x13) == 0) || (pIVar9[0x12] == (IModuleInterface)0x0)) ||
       (cVar5 = (**(code **)(*(longlong *)pIVar9[0x12] + 0x38))(), cVar5 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pIVar9 + 0x11),&local_40
                );
      if (*(int *)(pIVar9 + 0x13) != 0) {
        IVar11 = pIVar9[0x12];
      }
      cVar5 = (**(code **)(*(longlong *)IVar11 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_40);
      if (cVar5 == '\0') {
        return;
      }
    }
  }
  this_02 = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<ISourceControlProvider>
            (this_02,&local_78,SourceControlFeatureName);
  if (((param_1 < 0) || (local_78.ArrayNum <= param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Providers.IsValidIndex(ProviderIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlModule.cpp"
                         ,0x1ba,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = 0;
  if (param_1 < local_78.ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FSourceControlModule::SetCurrentSourceControlProvider
            (this_01,*(ISourceControlProvider **)
                      (local_78.AllocatorInstance.Data + (longlong)param_1 * 8));
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  pTVar2 = (this_01->SourceControlLoginPtr).SharedReferenceCount.ReferenceController;
  pSVar3 = (this_01->SourceControlLoginPtr).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pSVar3 != (SSourceControlLogin *)0x0) {
    pTVar2 = (this_01->SourceControlLoginPtr).SharedReferenceCount.ReferenceController;
    pSVar3 = (this_01->SourceControlLoginPtr).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pSVar3 == (SSourceControlLogin *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar7 = ::FName::FName(&local_res20,"SourceControl");
    FVar1 = *pFVar7;
    pFVar8 = FModuleManager::Get();
    pIVar9 = FModuleManager::LoadModuleChecked(pFVar8,FVar1);
    if (((pSVar3->SettingsBorder).Object == (SBox *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = (pSVar3->SettingsBorder).Object;
    pTVar10 = (TSharedRef<SWidget,1> *)
              (**(code **)(*(longlong *)pIVar9[4] + 0x188))(pIVar9[4],local_68);
    SBox::SetContent(this_00,pTVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// ConfirmProviderChanging @ 146b08980

bool __thiscall SSourceControlPicker::ConfirmProviderChanging(SSourceControlPicker *this)

{
  FName FVar1;
  char cVar2;
  undefined1 uVar3;
  FName *pFVar4;
  FModuleManager *this_00;
  IModuleInterface *pIVar5;
  IModuleInterface IVar6;
  FName local_res10 [3];
  FReadAccessScope local_28;
  
  pFVar4 = ::FName::FName(local_res10,"SourceControl");
  FVar1 = *pFVar4;
  this_00 = FModuleManager::Get();
  pIVar5 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pIVar5 + 0x11),&local_28);
  if ((*(int *)(pIVar5 + 0x13) != 0) && (pIVar5[0x12] != (IModuleInterface)0x0)) {
    cVar2 = (**(code **)(*(longlong *)pIVar5[0x12] + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pIVar5 + 0x11),&local_28
                );
      if (*(int *)(pIVar5 + 0x13) == 0) {
        IVar6 = (IModuleInterface)0x0;
      }
      else {
        IVar6 = pIVar5[0x12];
      }
      uVar3 = (**(code **)(*(longlong *)IVar6 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return (bool)uVar3;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return true;
}

// Construct @ 146b0ce10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SSourceControlPicker::Construct(SSourceControlPicker *this,FArguments *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FName FVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  FMemScope FVar13;
  FArguments *pFVar14;
  FSlotArguments *pFVar15;
  FSlotArguments *pFVar16;
  FArguments *pFVar17;
  FText *pFVar18;
  TSharedRef<STextBlock,1> *pTVar19;
  FArguments *this_00;
  undefined8 *puVar20;
  TSharedRef<SWidget,1> *pTVar21;
  ulong64 uVar22;
  TSharedRef<SWidget_const_,1> *pTVar23;
  TSharedRef<SComboButton,1> *pTVar24;
  TSharedRef<SHorizontalBox,1> *pTVar25;
  FSlotArguments *pFVar26;
  SSourceControlPicker *pSVar27;
  longlong *this_01;
  undefined4 local_res18 [2];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_1428;
  T0RequiredArgs local_1424;
  T0RequiredArgs local_1423 [3];
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_1420;
  TSharedRef<SWidget,1> local_1408;
  FDestructionSentinel local_13f8;
  FName local_13e0;
  TReferenceControllerBase<1> *pTStack_13d8;
  FMemScope local_13d0;
  STextBlock *local_13c8;
  FSharedReferencer<1> local_13c0;
  SComboButton *local_13b8;
  FSharedReferencer<1> local_13b0;
  FDestructionSentinel local_13a8;
  undefined1 *local_1390;
  FText local_1388;
  undefined1 local_1378;
  undefined1 local_1370 [8];
  ForAnyElementType FStack_1368;
  ulonglong local_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined1 local_1348;
  undefined1 local_1340 [8];
  ForAnyElementType FStack_1338;
  ulonglong local_1330;
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined1 local_1318;
  undefined1 local_1310 [8];
  ForAnyElementType FStack_1308;
  ulonglong local_1300;
  undefined4 local_12f8 [2];
  undefined4 local_12f0 [2];
  undefined4 local_12e8 [2];
  FText local_12e0;
  TAttribute<float> local_12d0;
  TAttribute<float> local_12b0;
  TAttribute<FText> local_1290;
  TSharedRef<STextBlock,1> local_1260;
  FText local_1250;
  TSharedRef<STextBlock,1> local_1240;
  TSharedRef<SHorizontalBox,1> local_1230;
  TSharedRef<SComboButton,1> local_1220;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1210;
  FArguments local_11f8;
  FSlotArguments local_ff0;
  FSlotArguments local_f08;
  FArguments local_e20;
  FArguments local_ae8;
  FArguments local_590;
  
  local_590._OnDoubleClicked._16_8_ = 0x146b0ce37;
  pFVar26 = (FSlotArguments *)0x0;
  local_res18[0] = 0;
  pFVar14 = SHorizontalBox::FArguments::FArguments(&local_11f8);
  pFVar15 = SHorizontalBox::Slot(&local_f08);
  if (local_12f8 != (undefined4 *)&pFVar15->field_0x50) {
    *(undefined4 *)&pFVar15->field_0x50 = 2;
    pFVar15->field_0x54 = 1;
  }
  pFVar16 = pFVar26;
  if (pFVar15 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar16 = pFVar15;
  }
  puVar1 = &pFVar16->field_0x48;
  if (local_12f0 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 3;
    pFVar16->field_0x4c = 1;
  }
  local_12d0.Value = 1.0;
  local_12d0.bIsSet = true;
  pFVar15 = pFVar26;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar15 = pFVar16;
  }
  local_12d0.Getter._16_8_ = 0;
  local_12d0.Getter._0_8_ = 0;
  local_12d0.Getter._8_8_ = 0;
  pFVar16 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar15,&local_12d0);
  uVar12 = _UNK_1513f6c48;
  local_1348 = 1;
  local_1358 = ___xmm_41200000418000000000000000000000;
  uStack_1350 = _UNK_1513f6c48;
  local_1330 = 0;
  local_1340 = (undefined1  [8])0x0;
  FStack_1338.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&pFVar16->field_0x18 = ___xmm_41200000418000000000000000000000;
  *(undefined8 *)&pFVar16->field_0x20 = uVar12;
  pFVar16->field_0x28 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1340);
  pFVar15 = pFVar26;
  if (&pFVar16->field_0x18 != (undefined1 *)0x0) {
    pFVar15 = pFVar16;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1340,
             (FWriteAccessScope *)&local_13f8);
  if (((int)local_1330 != 0) && (FStack_1338.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1338.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1338,0,0,0x10);
    local_1330 = local_1330 & 0xffffffff00000000;
  }
  if (local_13f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_13f8.Accessor,&local_13f8);
  }
  if (FStack_1338.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1338.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1340);
  pFVar17 = STextBlock::FArguments::FArguments(&local_590);
  pFVar18 = FText::AsLocalizable_Advanced_LocText
                      (&local_12e0,L"SSourceControlPicker",L"ProviderLabel",L"Provider");
  FText::FText(&local_1290.Value,pFVar18);
  local_1290.bIsSet = true;
  local_1290.Getter._16_8_ = 0;
  local_1290.Getter._0_8_ = 0;
  local_1290.Getter._8_8_ = 0;
  pFVar17 = STextBlock::FArguments::Text(pFVar17,&local_1290);
  FLLMScope::FLLMScope(&local_1428,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1408.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_1420,(FName *)&local_1408,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1210,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlPicker.cpp"
             ,0x20,(T0RequiredArgs *)local_res18);
  FMemScope::~FMemScope((FMemScope *)&local_1420);
  FLLMScope::~FLLMScope(&local_1428);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1210,&local_1240,pFVar17);
  pTVar2 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_13c8 = pTVar19->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_13c0.ReferenceController = pTVar2;
  if ((STextBlock **)&pFVar15->field_0x8 != &local_13c8) {
    *(STextBlock **)&pFVar15->field_0x8 = local_13c8;
    local_13c8 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar15->field_0x10,&local_13c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13c0.ReferenceController);
  local_13e0 = (FName)SHorizontalBox::FArguments::operator+(pFVar14,pFVar15);
  pFVar15 = SHorizontalBox::Slot(&local_ff0);
  if (local_12e8 != (undefined4 *)&pFVar15->field_0x50) {
    *(undefined4 *)&pFVar15->field_0x50 = 2;
    pFVar15->field_0x54 = 1;
  }
  uVar12 = _UNK_1513f6c38;
  local_1318 = 1;
  local_1328 = ___xmm_41200000000000000000000000000000;
  uStack_1320 = _UNK_1513f6c38;
  pFVar16 = (FSlotArguments *)0x0;
  if (pFVar15 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar16 = pFVar15;
  }
  local_1310 = (undefined1  [8])0x0;
  FStack_1308.Data = (FScriptContainerElement *)0x0;
  local_1300 = 0;
  *(undefined8 *)&pFVar16->field_0x18 = ___xmm_41200000000000000000000000000000;
  *(undefined8 *)&pFVar16->field_0x20 = uVar12;
  pFVar16->field_0x28 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1310);
  if (&pFVar16->field_0x18 == (undefined1 *)0x0) {
    pFVar16 = (FSlotArguments *)0x0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1310,
             (FWriteAccessScope *)&local_13f8);
  if (((int)local_1300 != 0) && (FStack_1308.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1308.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1308,0,0,0x10);
    local_1300 = local_1300 & 0xffffffff00000000;
  }
  if (local_13f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_13f8.Accessor,&local_13f8);
  }
  if (FStack_1308.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1308.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1310);
  local_12b0.Value = 2.0;
  local_12b0.Getter._16_8_ = 0;
  local_12b0.bIsSet = true;
  local_12b0.Getter._0_8_ = 0;
  local_12b0.Getter._8_8_ = 0;
  local_13d0 = (FMemScope)SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar16,&local_12b0);
  this_00 = SComboButton::FArguments::FArguments(&local_e20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->_OnGetMenuContent,
             (FWriteAccessScope *)&local_13a8);
  local_1390 = &(this_00->_OnGetMenuContent).field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1390);
  pSVar27 = this;
  if (puVar20 != (undefined8 *)0x0) {
    local_1420._Widget.Object = (SComboButton *)OnGetMenuContent;
    local_1420._Widget.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)(uint)local_12e0._12_4_ << 0x20);
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1408);
    pSVar27 = (SSourceControlPicker *)(pTVar21->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar21->Object;
    if (pSVar27 != (SSourceControlPicker *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar27->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar27->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar27->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar27->_padding_ + 1);
      UNLOCK();
    }
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlPicker___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pSVar3;
    puVar20[4] = pSVar27;
    if (pSVar27 != (SSourceControlPicker *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar27->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar27->_padding_)[1] + 1);
      UNLOCK();
    }
    pFVar26 = (FSlotArguments *)&DAT_00000007;
    puVar20[5] = local_1420._Widget.Object;
    puVar20[6] = local_1420._Widget.SharedReferenceCount.ReferenceController;
  }
  if (((ulonglong)pFVar26 & 4) != 0) {
    pFVar26 = (FSlotArguments *)(ulonglong)((uint)pFVar26 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar27);
  }
  if (((ulonglong)pFVar26 & 2) != 0) {
    pFVar26 = (FSlotArguments *)(ulonglong)((uint)pFVar26 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar27);
  }
  if (((ulonglong)pFVar26 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_1408.SharedReferenceCount.ReferenceController._4_4_,
                        local_1408.SharedReferenceCount.ReferenceController._0_4_));
  }
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  if (local_13a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_13a8.Accessor,&local_13a8);
  }
  pFVar18 = FText::AsLocalizable_Advanced_LocText
                      (&local_1250,L"SSourceControlPicker",L"ChooseProvider",
                       L"Choose the revision control provider you want to use before you edit login settings."
                      );
  FText::FText(&local_1388,pFVar18);
  local_1378 = 1;
  local_1360 = 0;
  local_1370 = (undefined1  [8])0x0;
  FStack_1368.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)this_00,&local_1388);
  *(undefined1 *)&this_00->_padding_ = local_1378;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1370);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1370,
             (FWriteAccessScope *)&local_13f8);
  if (((int)local_1360 != 0) && (FStack_1368.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1368.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1368,0,0,0x10);
    local_1360 = local_1360 & 0xffffffff00000000;
  }
  if (local_13f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_13f8.Accessor,&local_13f8);
  }
  if (FStack_1368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1370);
  if (local_1388.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1388.TextData.Reference + 0x10))();
  }
  pFVar17 = STextBlock::FArguments::FArguments(&local_ae8);
  (pFVar17->_Text).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Text).Getter,
             (FWriteAccessScope *)&local_13a8);
  local_1390 = &(pFVar17->_Text).Getter.field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1390);
  pSVar27 = this;
  if (puVar20 != (undefined8 *)0x0) {
    local_1408.SharedReferenceCount.ReferenceController._4_4_ = local_12e0._12_4_;
    local_1408.Object = (SWidget *)OnGetButtonText;
    local_1408.SharedReferenceCount.ReferenceController._0_4_ = 0;
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget_const_,1> *)&local_13f8);
    pSVar27 = (SSourceControlPicker *)(pTVar23->SharedReferenceCount).ReferenceController;
    local_1420._Widget.Object = (SComboButton *)pTVar23->Object;
    if (pSVar27 != (SSourceControlPicker *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar27->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar27->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar27->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar27->_padding_ + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar10 = true;
    bVar9 = true;
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlPicker___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = local_1420._Widget.Object;
    puVar20[4] = pSVar27;
    if (pSVar27 != (SSourceControlPicker *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar27->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar27->_padding_)[1] + 1);
      UNLOCK();
    }
    *(SWidget **)(puVar20 + 5) = local_1408.Object;
    puVar20[6] = CONCAT44(local_1408.SharedReferenceCount.ReferenceController._4_4_,
                          local_1408.SharedReferenceCount.ReferenceController._0_4_);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar27);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar27);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_13f8.Accessor);
  }
  if (local_13a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_13a8.Accessor,&local_13a8);
  }
  FLLMScope::FLLMScope(&local_1428,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1420._Widget.Object = (SComboButton *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_1408,(FName *)&local_1420,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_13a8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlPicker.cpp"
             ,0x2d,local_res20);
  FMemScope::~FMemScope((FMemScope *)&local_1408);
  FLLMScope::~FLLMScope(&local_1428);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_13a8,
                       &local_1260,pFVar17);
  pTVar4 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_1420._Widget.Object = (SComboButton *)pTVar19->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this_00->_ButtonContent).Widget.SharedReferenceCount.ReferenceController;
  (this_00->_ButtonContent).Widget.Object = (SWidget *)local_1420._Widget.Object;
  (this_00->_ButtonContent).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  local_1420._Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FLLMScope::FLLMScope(&local_1428,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1420._Widget.Object = (SComboButton *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_1408,(FName *)&local_1420,true);
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>
            (&local_1420,"SComboButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlPicker.cpp"
             ,0x28,&local_1424);
  FMemScope::~FMemScope((FMemScope *)&local_1408);
  FLLMScope::~FLLMScope(&local_1428);
  pTVar24 = TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1420,&local_1220,this_00);
  FVar13 = local_13d0;
  pTVar5 = (pTVar24->SharedReferenceCount).ReferenceController;
  local_13b8 = pTVar24->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_13b0.ReferenceController = pTVar5;
  if ((SComboButton **)((longlong)local_13d0 + 8) != &local_13b8) {
    *(SComboButton **)((longlong)local_13d0 + 8) = local_13b8;
    local_13b8 = (SComboButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)local_13d0 + 0x10),&local_13b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13b0.ReferenceController);
  pFVar14 = SHorizontalBox::FArguments::operator+((FArguments *)local_13e0,(FSlotArguments *)FVar13)
  ;
  FLLMScope::FLLMScope(&local_1428,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_13e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_13d0,&local_13e0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *)&local_13f8,"SHorizontalBox"
             ,
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlPicker.cpp"
             ,0x19,local_1423);
  FMemScope::~FMemScope(&local_13d0);
  FLLMScope::~FLLMScope(&local_1428);
  pTVar25 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *)&local_13f8,
                       &local_1230,pFVar14);
  this_01 = &this->_padding_;
  pTVar6 = (pTVar25->SharedReferenceCount).ReferenceController;
  FVar7 = (FName)pTVar25->Object;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
  }
  else {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)FVar7;
  this->_padding_ = (longlong)pTVar6;
  local_13e0 = FVar7;
  pTStack_13d8 = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_01);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1230.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_13f8.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1220.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1420._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1260.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_13a8.Accessor);
  STextBlock::FArguments::~FArguments(&local_ae8);
  if (local_1250.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1250.TextData.Reference + 0x10))();
  }
  SComboButton::FArguments::~FArguments(&local_e20);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_ff0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1240.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1210._Widget.SharedReferenceCount.ReferenceController);
  if (local_12e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_12e0.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_590);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_f08);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_11f8._Slots.AllocatorInstance.Data,local_11f8._Slots.ArrayNum);
  if ((FSlotArguments *)local_11f8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_11f8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_11f8);
  return;
}

// GetProviderText @ 146b195d0

FText * __thiscall
SSourceControlPicker::GetProviderText
          (SSourceControlPicker *this,FText *__return_storage_ptr__,FName *param_1)

{
  bool bVar1;
  
  bVar1 = ::FName::Equals(*param_1,"None");
  if (bVar1) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"SSourceControlPicker",L"NoProviderDescription",
               L"None  (revision control disabled)");
    return __return_storage_ptr__;
  }
  bVar1 = ::FName::Equals(*param_1,"Git");
  if (bVar1) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"SSourceControlPicker",L"GitBetaProviderName",
               L"Git  (beta version)");
    return __return_storage_ptr__;
  }
  FText::FromName(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// OnGetButtonText @ 146b1f9b0

FText * __thiscall
SSourceControlPicker::OnGetButtonText(SSourceControlPicker *this,FText *__return_storage_ptr__)

{
  ISourceControlModule *pIVar1;
  longlong *plVar2;
  FName *pFVar3;
  
  pIVar1 = ISourceControlModule::Get();
  plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x78))(pIVar1);
  pFVar3 = (FName *)(**(code **)(*plVar2 + 0x20))(plVar2);
  GetProviderText(this,__return_storage_ptr__,pFVar3);
  return __return_storage_ptr__;
}

// OnGetMenuContent @ 146b1fa00

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SSourceControlPicker::OnGetMenuContent
          (SSourceControlPicker *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  FName FVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FName *pFVar7;
  FModuleManager *pFVar8;
  FSourceControlModule *this_00;
  ISlateStyle *pIVar9;
  IModularFeatures *pIVar10;
  IModuleInterface *pIVar11;
  TSharedRef<SWidget,1> *pTVar12;
  undefined8 *puVar13;
  TSharedRef<SWidget_const_,1> *pTVar14;
  ulong64 uVar15;
  FUIAction *pFVar16;
  FSlateIcon *pFVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  TReferenceControllerBase<1> *pTVar24;
  uint local_res18;
  undefined4 uStackX_1c;
  undefined1 local_res20 [8];
  ForAnyElementType local_4b8;
  undefined8 local_4b0;
  SWidget *local_4a8;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_4a0
  ;
  FText local_490;
  undefined8 local_480;
  undefined8 local_478;
  FName local_470;
  FName local_468;
  undefined1 local_460 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_448;
  ForAnyElementType FStack_440;
  ulonglong local_438;
  undefined1 local_430 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_418;
  ForAnyElementType FStack_410;
  ulonglong local_408;
  undefined1 local_400 [8];
  FDelegateAllocation local_3f8;
  undefined1 local_3e8 [8];
  FName local_3e0;
  TReferenceControllerBase<1> *local_3d8;
  code *local_3d0;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  TAttribute<EVisibility> local_3c0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_3a0;
  FString local_388;
  FText local_378;
  FFormatArgumentValue local_368;
  TAttribute<FText> local_348;
  FDestructionSentinel local_318;
  FDestructionSentinel local_300;
  FMenuBuilder local_2e8;
  FDestructionSentinel local_160;
  FDelegateAllocation *local_148;
  FName local_140;
  TSharedRef<SWidget_const_,1> local_138;
  FText local_128;
  TSharedPtr<FExtender,1> local_118;
  FName local_108;
  FName local_100;
  TSharedPtr<FUICommandList_const_,1> local_f8;
  FTextFormat local_e8;
  FUIAction local_d8;
  FSlateIcon local_70;
  
  uVar20 = 0;
  local_res18 = 0;
  pFVar7 = ::FName::FName(&local_140,"SourceControl");
  FVar1 = *pFVar7;
  pFVar8 = FModuleManager::Get();
  this_00 = (FSourceControlModule *)FModuleManager::LoadModuleChecked(pFVar8,FVar1);
  local_480 = 0;
  pIVar9 = FAppStyle::Get();
  local_478 = 0;
  local_118.Object = (FExtender *)0x0;
  local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_f8.Object = (FUICommandList *)0x0;
  local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)&local_2e8,Menu,true,&local_f8,false,&local_118,pIVar9,(FName)0x0,
             (FName)0x0);
  local_2e8.CurrentSectionExtensionHook.ComparisonIndex.Value = 0;
  local_2e8.CurrentSectionExtensionHook.Number = 0;
  local_2e8._padding_ = (longlong)&___7FMenuBuilder__6B_;
  FText::FText(&local_2e8.CurrentSectionHeadingText);
  local_2e8.CurrentSectionVisibility.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_2e8.CurrentSectionVisibility.bIsSet = false;
  local_2e8.CurrentSectionVisibility.Getter._16_8_ = 0;
  local_2e8.CurrentSectionVisibility.Getter._0_8_ = 0;
  local_2e8.CurrentSectionVisibility.Getter._8_8_ = 0;
  memset(&local_2e8.CurrentSectionResizeParams,0,200);
  local_2e8.CurrentSectionResizeParams.Value.ClippingPriority.Value = 0;
  local_2e8.CurrentSectionResizeParams.Value.ClippingPriority.Getter._16_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.AllowClipping.Getter._16_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._16_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._16_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._16_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._16_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Getter._16_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.ClippingPriority.bIsSet = false;
  local_2e8.CurrentSectionResizeParams.Value.ClippingPriority.Getter._0_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.ClippingPriority.Getter._8_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.AllowClipping.Value = false;
  local_2e8.CurrentSectionResizeParams.Value.AllowClipping.bIsSet = false;
  local_2e8.CurrentSectionResizeParams.Value.AllowClipping.Getter._0_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.AllowClipping.Getter._8_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.VisibleInOverflow.Value = false;
  local_2e8.CurrentSectionResizeParams.Value.VisibleInOverflow.bIsSet = false;
  local_2e8.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._0_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._8_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.Wrapping.Allow.Value = false;
  local_2e8.CurrentSectionResizeParams.Value.Wrapping.Allow.bIsSet = false;
  local_2e8.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._0_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._8_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.Wrapping.Priority.Value = 0;
  local_2e8.CurrentSectionResizeParams.Value.Wrapping.Priority.bIsSet = false;
  local_2e8.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._0_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._8_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.Wrapping.Mode.Value = Preferred;
  local_2e8.CurrentSectionResizeParams.Value.Wrapping.Mode.bIsSet = false;
  local_2e8.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._0_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._8_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
  local_2e8.CurrentSectionResizeParams.Value.Wrapping.ForceNewLine.bIsSet = false;
  local_2e8.CurrentSectionResizeParams.bIsSet = false;
  local_2e8.CurrentSectionResizeParams.Getter._0_8_ = 0;
  local_2e8.CurrentSectionResizeParams.Getter._8_8_ = 0;
  local_2e8.bSectionNeedsToBeApplied = false;
  local_2e8.bSearchable = true;
  local_2e8.bRecursivelySearchable = true;
  local_2e8.bIsEditing = false;
  FMenuBuilder::AddSearchWidget(&local_2e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_4b8.Data = (FScriptContainerElement *)0x0;
  local_4b0 = 0;
  pIVar10 = IModularFeatures::Get();
  uVar5 = (**(code **)((longlong)*pIVar10 + 0x18))(pIVar10,SourceControlFeatureName);
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (local_4b0._4_4_ < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar5,&local_4b8,(int)local_4b0,(int *)((longlong)&local_4b0 + 4));
  }
  uVar23 = uVar20;
  uVar22 = uVar20;
  if (0 < (int)uVar5) {
    do {
      FSourceControlModule::GetSourceControlProviderName(this_00,(int)&local_3e0);
      pFVar7 = ::FName::FName(&local_100,"None");
      FVar1 = local_3e0;
      uVar22 = uVar20;
      if (local_3e0 == *pFVar7) {
        uVar22 = uVar23;
      }
      iVar6 = (int)local_4b0;
      if ((int)local_4b0 == local_4b0._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&local_4b8,(int *)((longlong)&local_4b0 + 4));
      }
      local_4b0 = CONCAT44(local_4b0._4_4_,iVar6 + 1);
      *(FName *)(local_4b8.Data + (longlong)iVar6 * 0xc) = FVar1;
      *(uint *)(local_4b8.Data + (longlong)iVar6 * 0xc + 8) = uVar22;
      pFVar7 = ::FName::FName(&local_108,"SourceControl");
      FVar2 = *pFVar7;
      pFVar8 = FModuleManager::Get();
      pIVar11 = FModuleManager::LoadModuleChecked(pFVar8,FVar2);
      pFVar7 = (FName *)(**(code **)(*(longlong *)pIVar11[4] + 0x20))();
      if (FVar1 == *pFVar7) {
        this->CurrentProviderIndex = uVar20;
      }
      uVar20 = uVar20 + 1;
      uVar23 = uVar23 - 1;
      uVar22 = local_res18;
    } while ((int)uVar20 < (int)uVar5);
  }
  AlgoImpl::
  IntroSortInternal<TTuple<FName,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<FName,int>,_SSourceControlPicker::OnGetMenuContent_::__l2::<lambda_1>_>_>
            ((TTuple<FName,int> *)local_4b8.Data,(int)local_4b0,local_res18._0_1_,
             (<lambda_1> *)&local_res18);
  uVar5 = 0;
  pTVar24 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_1c,local_res18);
  while( true ) {
    if (((int)uVar5 < 0) || ((int)local_4b0 <= (int)uVar5)) {
      FMenuBuilder::MakeWidget
                (&local_2e8,__return_storage_ptr__,
                 (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                  *)0x0);
      if ((TTuple<FName,int> *)local_4b8.Data != (TTuple<FName,int> *)0x0) {
        FMemory::Free(local_4b8.Data);
      }
      FMenuBuilder::~FMenuBuilder(&local_2e8);
      return __return_storage_ptr__;
    }
    uVar20 = 0;
    if ((int)uVar5 < (int)local_4b0) {
      uVar20 = ~uVar5 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar12;
    }
    local_4a8 = (SWidget *)((longlong)(int)uVar5 * 0xc);
    pFVar7 = (FName *)(local_4b8.Data + (longlong)local_4a8);
    bVar4 = ::FName::Equals(*pFVar7,"None");
    if (bVar4) {
      FText::AsLocalizable_Advanced_LocText
                (&local_490,L"SSourceControlPicker",L"NoProviderDescription",
                 L"None  (revision control disabled)");
    }
    else {
      bVar4 = ::FName::Equals(*pFVar7,"Git");
      if (bVar4) {
        FText::AsLocalizable_Advanced_LocText
                  (&local_490,L"SSourceControlPicker",L"GitBetaProviderName",L"Git  (beta version)")
        ;
      }
      else {
        FText::FromName(&local_490,pFVar7);
      }
    }
    uVar20 = 0;
    if ((int)uVar5 < (int)local_4b0) {
      uVar20 = ~uVar5 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar12;
    }
    local_368.Type = Text;
    iVar6 = *(int *)(local_4b8.Data + (longlong)&local_4a8->_padding_);
    local_4a0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4a0.Pairs.ArrayNum = 0;
    local_4a0.Pairs.ArrayMax = 0;
    local_368.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_490.TextData.Reference;
    if (local_490.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_490.TextData.Reference + 8))
                (local_490.TextData.Reference,local_res20);
    }
    local_368.TextValue.field0_0x0.TypedValue.Flags = local_490.Flags;
    if ((local_368.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) break;
    ::FString::FString(&local_388,L"ProviderName");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_4a0,&local_388,&local_368);
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
    if (local_368.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_368.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    local_3c0.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
    local_3c0.bIsSet = false;
    local_3c0.Getter._16_8_ = 0;
    local_3c0.Getter._0_8_ = 0;
    local_3c0.Getter._8_8_ = 0;
    FText::FText(&local_348.Value);
    local_348.bIsSet = false;
    local_348.Getter._16_8_ = 0;
    iVar21 = -iVar6;
    local_470.ComparisonIndex.Value = 0;
    local_470.Number = 0;
    local_468.ComparisonIndex.Value = 0;
    local_468.Number = 0;
    local_3a0._16_8_ = 0;
    if (iVar21 < 0) {
      iVar21 = iVar6;
    }
    local_3a0._0_8_ = 0;
    local_348.Getter._0_8_ = 0;
    local_348.Getter._8_8_ = 0;
    local_3a0._8_8_ = 0;
    local_400 = (undefined1  [8])0x0;
    local_3f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_3f8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_400,
               (FWriteAccessScope *)&local_160);
    local_148 = &local_3f8;
    puVar13 = UE::Core::Private::DelegateAllocate(0x38,&local_3f8);
    if (puVar13 != (undefined8 *)0x0) {
      local_3d0 = ChangeSourceControlProvider;
      uStack_3c8 = 0;
      uStack_3c4 = local_378._12_4_;
      pTVar14 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_138);
      pTVar24 = (pTVar14->SharedReferenceCount).ReferenceController;
      local_4a8 = pTVar14->Object;
      if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar22 = uVar22 | 7;
      *puVar13 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
      *(int *)(puVar13 + 1) = iVar21;
      local_3d8 = pTVar24;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar13[2] = uVar15;
      *puVar13 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlPicker___00__A6AXXZUFDefaultDelegateUserPolicy__H__6B_
      ;
      puVar13[3] = local_4a8;
      puVar13[4] = pTVar24;
      if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar24->WeakReferenceCount = (atomic<int>)((int)pTVar24->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar13[5] = local_3d0;
      puVar13[6] = CONCAT44(uStack_3c4,uStack_3c8);
    }
    if ((uVar22 & 4) != 0) {
      uVar22 = uVar22 & 0xfffffffb;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    }
    if ((uVar22 & 2) != 0) {
      uVar22 = uVar22 & 0xfffffffd;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3d8)
      ;
    }
    if ((uVar22 & 1) != 0) {
      uVar22 = uVar22 & 0xfffffffe;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.SharedReferenceCount.ReferenceController);
    }
    if (local_160.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
    }
    pFVar16 = FUIAction::FUIAction
                        (&local_d8,
                         (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_400,
                         &local_3a0,RepeatDisabled);
    pFVar17 = FSlateIcon::FSlateIcon(&local_70);
    pFVar18 = FText::AsLocalizable_Advanced_LocText
                        (&local_378,L"SSourceControlPicker",L"SourceControlProvider_Tooltip",
                         L"Use {ProviderName} as revision control provider");
    pFVar19 = FTextFormat::FTextFormat(&local_e8,pFVar18,Default);
    pFVar18 = FText::Format(&local_128,pFVar19,&local_4a0);
    FText::FText((FText *)local_430,pFVar18);
    local_408 = 0;
    local_430[0x10] = true;
    local_460._0_8_ = local_490.TextData.Reference;
    local_418.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_410.Data = (FScriptContainerElement *)0x0;
    if (local_490.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_490.TextData.Reference + 8))
                (local_490.TextData.Reference,local_3e8);
    }
    local_460._8_4_ = local_490.Flags;
    local_460[0x10] = true;
    local_438 = 0;
    local_448.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_440.Data = (FScriptContainerElement *)0x0;
    FBaseMenuBuilder::AddMenuEntry
              ((FBaseMenuBuilder *)&local_2e8,(TAttribute<FText> *)local_460,
               (TAttribute<FText> *)local_430,pFVar17,pFVar16,local_468,Button,local_470,&local_348,
               &local_3c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_448,(FWriteAccessScope *)&local_318);
    if (((int)local_438 != 0) && (FStack_440.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_440.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_440,0,0,0x10);
      local_438 = local_438 & 0xffffffff00000000;
    }
    if (local_318.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
    }
    if (FStack_440.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_440.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_448.AccessDetector);
    if ((ITextData *)local_460._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_460._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_418,(FWriteAccessScope *)&local_300);
    if (((int)local_408 != 0) && (FStack_410.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_410.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_410,0,0,0x10);
      local_408 = local_408 & 0xffffffff00000000;
    }
    if (local_300.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_300.Accessor,&local_300);
    }
    if (FStack_410.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_410.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_418.AccessDetector);
    if ((ITextData *)local_430._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_430._0_8_ + 0x10))();
    }
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
    if (local_378.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_378.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d8.IsActionVisibleDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d8.GetActionCheckState);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d8.CanExecuteAction);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d8);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_348.Getter);
    if (local_348.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_348.Value.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3c0.Getter);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_4a0.Pairs.AllocatorInstance.Data,
               local_4a0.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_4a0.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_4a0.Pairs.AllocatorInstance.Data);
    }
    if (local_490.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_490.TextData.Reference + 0x10))();
    }
    uVar5 = uVar5 + 1;
  }
  pcVar3 = (code *)swi(3);
  pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar3)();
  return pTVar12;
}

