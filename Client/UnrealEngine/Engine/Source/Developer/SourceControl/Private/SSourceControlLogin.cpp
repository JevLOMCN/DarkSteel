// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 16

// ~SSourceControlLogin @ 146b01340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSourceControlLogin::~SSourceControlLogin(SSourceControlLogin *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SettingsBorder).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->SourceControlLoginClosed);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DetailsView).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
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
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// AreControlsEnabled @ 146b05070

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SSourceControlLogin::AreControlsEnabled(SSourceControlLogin *this)

{
  return this->ConnectionState == Disconnected;
}

// ConfirmDisableSourceControl @ 146b088d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SSourceControlLogin::ConfirmDisableSourceControl(SSourceControlLogin *this)

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

// Construct @ 146b0aaf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSourceControlLogin::Construct(SSourceControlLogin *this,FArguments *param_1)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FName FVar6;
  code *pcVar7;
  SWidget *pSVar8;
  STextBlock *pSVar9;
  SBox *pSVar10;
  SBorder *pSVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  float fVar15;
  undefined8 uVar16;
  FSharedReferencer<1> FVar17;
  SSourceControlPicker *pSVar18;
  bool bVar19;
  char cVar20;
  byte bVar21;
  FName *pFVar22;
  FModuleManager *pFVar23;
  IModuleInterface *pIVar24;
  IModuleInterface *pIVar25;
  FArguments *pFVar26;
  ISlateStyle *pIVar27;
  FSlotArguments *pFVar28;
  FSizeParam *pFVar29;
  FArguments *pFVar30;
  FSlotArguments *pFVar31;
  FSlateBaseNamedArgs *pFVar32;
  FArguments *pFVar33;
  undefined8 *puVar34;
  TSharedRef<SBox,1> *pTVar35;
  FArguments *pFVar36;
  FText *pFVar37;
  TSharedRef<STextBlock,1> *pTVar38;
  TSharedRef<SVerticalBox,1> *pTVar39;
  FArguments *pFVar40;
  TSharedRef<SWidget,1> *pTVar41;
  TSharedRef<SBorder,1> *pTVar42;
  SExpandableArea *pSVar43;
  SExpandableArea *pSVar44;
  FArguments *pFVar45;
  FSlotArguments *pFVar46;
  FArguments *pFVar47;
  TSharedRef<SThrobber,1> *pTVar48;
  undefined1 *puVar49;
  FSlotArguments *pFVar50;
  FMemScope FVar51;
  FArguments *pFVar52;
  FButtonStyle *pFVar53;
  TSharedRef<SButton,1> *pTVar54;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_00;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar55;
  TSharedRef<SHorizontalBox,1> *pTVar56;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_02;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_03;
  FSlotArgumentsMixin *pFVar57;
  TOptional<FSizeParam> *this_04;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_4ad8;
  T0RequiredArgs local_4ad7;
  T0RequiredArgs local_4ad6;
  T0RequiredArgs local_4ad5;
  T0RequiredArgs local_4ad4;
  T0RequiredArgs local_4ad3;
  T0RequiredArgs local_4ad2;
  T0RequiredArgs local_4ad1;
  T0RequiredArgs local_4ad0;
  T0RequiredArgs local_4acf;
  T0RequiredArgs local_4ace;
  T0RequiredArgs local_4acd [5];
  SWidget *local_4ac8;
  TReferenceControllerBase<1> *pTStack_4ac0;
  FMemScope local_4ab8;
  FName local_4ab0;
  FMemScope local_4aa8;
  FLLMScope local_4aa0;
  FLLMScope local_4a9c;
  FLLMScope local_4a98;
  FLLMScope local_4a94;
  FLLMScope local_4a90;
  FLLMScope local_4a8c;
  FLLMScope local_4a88;
  FLLMScope local_4a84;
  FLLMScope local_4a80;
  FLLMScope local_4a7c;
  TSharedRef<SWidget,1> local_4a78;
  undefined4 local_4a68;
  undefined1 local_4a64;
  undefined1 local_4a60 [8];
  ForAnyElementType FStack_4a58;
  ulonglong local_4a50;
  float local_4a48;
  undefined1 local_4a44;
  undefined1 local_4a40 [8];
  ForAnyElementType FStack_4a38;
  ulonglong local_4a30;
  FName local_4a28;
  FName local_4a20;
  FArguments *local_4a18;
  FArguments *local_4a10;
  TReferenceControllerBase<1> *local_4a08;
  undefined4 uStack_4a00;
  uint uStack_49fc;
  SSourceControlPicker *local_49f8;
  FSharedReferencer<1> local_49f0;
  TReferenceControllerBase<1> *local_49e8;
  TReferenceControllerBase<1> *local_49d8;
  undefined4 uStack_49d0;
  uint uStack_49cc;
  SBox *local_49c8;
  FSharedReferencer<1> local_49c0;
  FMemScope local_49b8;
  STextBlock *local_49b0;
  FSharedReferencer<1> local_49a8;
  SVerticalBox *local_49a0;
  FSharedReferencer<1> local_4998;
  SThrobber *local_4990;
  FSharedReferencer<1> local_4988;
  FMemScope local_4980;
  SBorder *local_4978;
  undefined8 uStack_4970;
  FSlateBrush *local_4968;
  undefined1 local_4960;
  undefined1 local_4958 [8];
  ForAnyElementType FStack_4950;
  ulonglong local_4948;
  FSlateBrush *local_4940;
  undefined1 local_4938;
  undefined1 local_4930 [8];
  ForAnyElementType FStack_4928;
  ulonglong local_4920;
  TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs> local_4918;
  TSlateDecl<SSourceControlPicker,RequiredArgs::T0RequiredArgs> local_4900;
  SWidget *local_48e8;
  TReferenceControllerBase<1> *pTStack_48e0;
  SWidget *local_48d8;
  TReferenceControllerBase<1> *pTStack_48d0;
  undefined8 local_48c8;
  FSharedReferencer<1> local_48c0;
  TReferenceControllerBase<1> *local_48b8;
  undefined4 uStack_48b0;
  uint uStack_48ac;
  SVerticalBox *local_48a8;
  TReferenceControllerBase<1> *pTStack_48a0;
  undefined4 local_4898;
  undefined1 local_4894;
  TDelegateBase<FNotThreadSafeDelegateMode> local_4890;
  FMemScope local_4878;
  FName local_4870;
  FMemScope local_4868;
  FName local_4860;
  undefined4 local_4858 [2];
  FName local_4850;
  FArguments *local_4848;
  TReferenceControllerBase<1> *local_4840;
  TReferenceControllerBase<1> *local_4838;
  FArguments *local_4830;
  undefined4 local_4828 [2];
  undefined4 local_4820 [2];
  undefined4 local_4818 [2];
  undefined4 local_4810 [2];
  FName local_4808;
  FName local_4800;
  FMemScope local_47f8;
  FName local_47f0;
  FName local_47e8;
  FMemScope local_47e0;
  FName local_47d8;
  FMemScope local_47d0;
  FName local_47c8;
  FName local_47c0;
  FMemScope local_47b8;
  FName local_47b0;
  TAttribute<float> local_47a8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_4788;
  TSharedRef<SWidget,1> local_4770;
  TSharedRef<SWidget,1> local_4760;
  TSharedRef<SWidget,1> local_4750;
  TSharedRef<SWidget,1> local_4740;
  undefined1 local_4730 [8];
  TReferenceControllerBase<1> *local_4728;
  undefined8 local_4720;
  undefined8 uStack_4718;
  undefined1 local_4710;
  TDelegateBase<FNotThreadSafeDelegateMode> local_4708;
  undefined8 local_46f0;
  undefined8 uStack_46e8;
  undefined1 local_46e0;
  TDelegateBase<FNotThreadSafeDelegateMode> local_46d8;
  TAttribute<FSlateBrush_const_*> local_46c0;
  FDestructionSentinel local_4698;
  FDestructionSentinel local_4680;
  FDestructionSentinel local_4668;
  FDestructionSentinel local_4650;
  TAttribute<FText> local_4638;
  TAttribute<FText> local_4608;
  TAttribute<FText> local_45d8;
  TAttribute<FText> local_45a8;
  TSharedRef<SVerticalBox,1> local_4578;
  TSharedRef<SHorizontalBox,1> local_4568;
  TSharedRef<SHorizontalBox,1> local_4558;
  TSharedRef<SButton,1> local_4548;
  FText local_4538;
  TSharedRef<SButton,1> local_4528;
  FText local_4518;
  TSharedRef<SThrobber,1> local_4508;
  TSharedRef<SBorder,1> local_44f8;
  TSharedRef<SBox,1> local_44e8;
  undefined1 local_44d8 [8];
  TReferenceControllerBase<1> *local_44d0;
  TSharedRef<STextBlock,1> local_44c8;
  FText local_44b8;
  TSharedRef<SVerticalBox,1> local_44a8;
  TSharedRef<STextBlock,1> local_4498;
  FText local_4488;
  TSharedRef<SBox,1> local_4478;
  undefined1 local_4468 [8];
  TReferenceControllerBase<1> *local_4460;
  FName local_4458;
  FName local_4450;
  FName local_4448;
  FName local_4440;
  FName local_4438 [2];
  code *local_4428;
  longlong lStack_4420;
  code *local_4418;
  longlong lStack_4410;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4408;
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> local_43f0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_43d8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_43c0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_43a8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_4390;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4378;
  code *local_4358;
  longlong lStack_4350;
  SWidget *local_4348;
  TReferenceControllerBase<1> *pTStack_4340;
  SBox *local_4338;
  TReferenceControllerBase<1> *pTStack_4330;
  code *local_4328;
  longlong lStack_4320;
  code *local_4318;
  longlong lStack_4310;
  code *local_4308;
  longlong lStack_4300;
  code *local_42f8;
  ulonglong uStack_42f0;
  code *local_42e8;
  ulonglong uStack_42e0;
  code *local_42d8;
  ulonglong uStack_42d0;
  code *local_42c8;
  TReferenceControllerBase<1> *pTStack_42c0;
  code *local_42b8;
  TReferenceControllerBase<1> *pTStack_42b0;
  TSharedRef<SBox,1> local_42a8;
  TSharedRef<SBorder,1> local_4298;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_4288;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_4270;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_4258;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_4240;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4228;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_4210;
  undefined1 local_41f8 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_41c8;
  undefined1 local_41b0 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_4180;
  undefined1 local_4168 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_4138;
  undefined1 local_4120 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_40f0;
  undefined1 local_40d8 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_40a8;
  FArguments local_4090;
  FArguments local_3c48;
  FArguments local_3a40;
  FArguments local_3838;
  FArguments local_3630;
  FSlotArguments local_3428;
  FSlotArguments local_3340;
  FSlotArguments local_3258;
  FSlotArguments local_3170;
  FSlotArguments local_3088;
  FSlotArguments local_2fa0;
  FSlotArguments local_2eb8;
  FSlotArguments local_2dd0;
  FSlotArguments local_2ce8;
  FSlotArguments local_2c00;
  FArguments local_2b18;
  FSlateBaseNamedArgs local_2910;
  FArguments local_2718;
  FArguments local_23d8;
  FArguments local_2098;
  FArguments local_1d58;
  FArguments local_1978;
  FArguments local_1598;
  FArguments local_1058;
  FArguments local_b18;
  FArguments local_5c0;
  undefined8 uStack_48;
  
  uStack_48 = 0x146b0ab0f;
  (this->ParentWindowPtr).Object = (param_1->_ParentWindow).Object;
  pTVar4 = (param_1->_ParentWindow).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (this->ParentWindowPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (this->ParentWindowPtr).WeakReferenceCount.ReferenceController = pTVar4;
  }
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->SourceControlLoginClosed,&param_1->_OnSourceControlLoginClosed);
  this->ConnectionState = Disconnected;
  pFVar22 = ::FName::FName(&local_4458,"SourceControl");
  FVar6 = *pFVar22;
  pFVar23 = FModuleManager::Get();
  pIVar24 = FModuleManager::LoadModuleChecked(pFVar23,FVar6);
  pFVar22 = ::FName::FName(&local_4450,"MessageLog");
  FVar6 = *pFVar22;
  pFVar23 = FModuleManager::Get();
  pIVar25 = FModuleManager::LoadModuleChecked(pFVar23,FVar6);
  pcVar7 = *(code **)((longlong)*pIVar25 + 0x58);
  local_49e8 = (TReferenceControllerBase<1> *)pIVar25;
  ::FName::FName(&local_4808,"SourceControl");
  (*pcVar7)(pIVar25,local_4730);
  local_4830 = SBox::FArguments::FArguments(&local_2098);
  local_4a68 = 0x43f00000;
  local_4a64 = 1;
  local_4a60 = (undefined1  [8])0x0;
  FStack_4a58.Data = (FScriptContainerElement *)0x0;
  local_4a50 = 0;
  (local_4830->_MinDesiredWidth).Value.Size = 480.0;
  (local_4830->_MinDesiredWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(local_4830->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a60,
             (FWriteAccessScope *)&local_4650);
  if (((int)local_4a50 != 0) && (FStack_4a58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4a58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4a58,0,0,0x10);
    local_4a50 = local_4a50 & 0xffffffff00000000;
  }
  if (local_4650.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4650.Accessor,&local_4650);
  }
  if (FStack_4a58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4a58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4a60);
  pFVar26 = SBorder::FArguments::FArguments(&local_1978);
  pFVar26 = SBorder::FArguments::Padding(pFVar26,0.0);
  local_4848 = pFVar26;
  pIVar27 = FAppStyle::Get();
  pcVar7 = *(code **)((longlong)*pIVar27 + 0x50);
  pFVar22 = ::FName::FName(&local_4448,"Brushes.Panel");
  local_4968 = (FSlateBrush *)(*pcVar7)(pIVar27,*pFVar22);
  local_4960 = 1;
  local_4948 = 0;
  local_4958 = (undefined1  [8])0x0;
  FStack_4950.Data = (FScriptContainerElement *)0x0;
  (pFVar26->_BorderImage).Value = local_4968;
  (pFVar26->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4958);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4958,
             (FWriteAccessScope *)&local_4698);
  if (((int)local_4948 != 0) && (FStack_4950.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4950.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4950,0,0,0x10);
    local_4948 = local_4948 & 0xffffffff00000000;
  }
  if (local_4698.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4698.Accessor,&local_4698);
  }
  if (FStack_4950.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4950.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4958);
  local_4a10 = SVerticalBox::FArguments::FArguments(&local_3630);
  pFVar28 = SVerticalBox::Slot(&local_3088);
  pFVar29 = (FSizeParam *)FAuto::FAuto((FAuto *)local_41f8);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar28->field_0x58,pFVar29);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_41c8)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_41f8 + 0x10));
  fVar15 = __real_41800000;
  pFVar28 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar28->field_0x18,__real_41800000,__real_41800000,
                       __real_41800000,0.0);
  pFVar30 = SVerticalBox::FArguments::FArguments(&local_3838);
  pFVar31 = SVerticalBox::Slot(&local_3170);
  pFVar29 = (FSizeParam *)FAuto::FAuto((FAuto *)local_41b0);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar31->field_0x58,pFVar29);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_4180)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_41b0 + 0x10));
  pFVar31 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar31->field_0x18,0.0);
  pFVar32 = (FSlateBaseNamedArgs *)
            SSourceControlPicker::FArguments::FArguments((FArguments *)&local_2910);
  uStack_4970 = (TReferenceControllerBase<1> *)((ulonglong)uStack_4970._4_4_ << 0x20);
  local_4978 = (SBorder *)AreControlsEnabled;
  local_4428 = AreControlsEnabled;
  lStack_4420 = (longlong)uStack_4970;
  TAttribute<bool>::Bind<SSourceControlLogin>(&pFVar32->_IsEnabled,this,(pmf_f7c03816 *)&local_4428)
  ;
  FLLMScope::FLLMScope(&local_4aa0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4800 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_47f8,&local_4800,true);
  TSlateDecl<SSourceControlPicker,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSourceControlPicker,RequiredArgs::T0RequiredArgs>
            (&local_4900,"SSourceControlPicker",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
             ,0x41,local_res8);
  FMemScope::~FMemScope(&local_47f8);
  FLLMScope::~FLLMScope(&local_4aa0);
  pSVar18 = local_4900._Widget.Object;
  if ((local_4900._Widget.Object == (SSourceControlPicker *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_4900._Widget.Object,pFVar32);
  SSourceControlPicker::Construct(local_4900._Widget.Object,(FArguments *)pFVar32);
  if ((local_4900._Widget.Object == (SSourceControlPicker *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((local_4900._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar20 = (**(code **)((local_4900._Widget.Object)->_padding_ + 0x228))
                       (local_4900._Widget.Object);
    bVar21 = 0;
    if (cVar20 != '\0') goto LAB_146b0b055;
  }
  else {
LAB_146b0b055:
    bVar21 = 0x20;
  }
  *(byte *)&(local_4900._Widget.Object)->_padding_ =
       (byte)(local_4900._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_4900._Widget.Object)->_padding_ =
       (byte)(local_4900._Widget.Object)->_padding_ | bVar21;
  if ((local_4900._Widget.Object == (SSourceControlPicker *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pbVar2 = (byte *)((longlong)&(local_4900._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_4900._Widget.Object == (SSourceControlPicker *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar17.ReferenceController = local_4900._Widget.SharedReferenceCount.ReferenceController;
  local_4838 = local_4900._Widget.SharedReferenceCount.ReferenceController;
  local_4900._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_4900._Widget.Object = (SSourceControlPicker *)0x0;
  if ((pSVar18 == (SSourceControlPicker *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_49f8 = pSVar18;
  local_49f0.ReferenceController = FVar17.ReferenceController;
  if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SSourceControlPicker **)&pFVar31->field_0x8 != &local_49f8) {
    *(SSourceControlPicker **)&pFVar31->field_0x8 = pSVar18;
    local_49f8 = (SSourceControlPicker *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar31->field_0x10,&local_49f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_49f0.ReferenceController);
  pFVar30 = SVerticalBox::FArguments::operator+(pFVar30,pFVar31);
  pFVar31 = SVerticalBox::Slot(&local_3258);
  pFVar29 = (FSizeParam *)FAuto::FAuto((FAuto *)local_4168);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar31->field_0x58,pFVar29);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_4138)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_4168 + 0x10));
  pFVar33 = SBox::FArguments::FArguments(&local_23d8);
  local_4a08 = (TReferenceControllerBase<1> *)GetSettingsVisibility;
  uStack_4a00 = 0;
  lStack_4410 = (ulonglong)uStack_49fc << 0x20;
  local_4418 = GetSettingsVisibility;
  TAttribute<EVisibility>::Bind<SSourceControlLogin>
            ((TAttribute<EVisibility> *)&pFVar33->_padding_,this,(pmf_30dce5c3 *)&local_4418);
  uStack_4a00 = 0;
  local_4a08 = (TReferenceControllerBase<1> *)AreControlsEnabled;
  lStack_4350 = (ulonglong)uStack_49fc << 0x20;
  local_4358 = AreControlsEnabled;
  TAttribute<bool>::Bind<SSourceControlLogin>
            ((TAttribute<bool> *)&pFVar33->_padding_,this,(pmf_f7c03816 *)&local_4358);
  puVar34 = (undefined8 *)(**(code **)(*(longlong *)pIVar24[4] + 0x188))(pIVar24[4],local_4468);
  pTVar4 = (TReferenceControllerBase<1> *)puVar34[1];
  pSVar8 = (SWidget *)*puVar34;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4348 = (pFVar33->_Content).Widget.Object;
  pTStack_4340 = (pFVar33->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar33->_Content).Widget.Object = pSVar8;
  (pFVar33->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4340);
  FLLMScope::FLLMScope(&local_4a9c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_47f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_47e0,&local_47f0,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_4788,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
             ,0x47,local_res10);
  FMemScope::~FMemScope(&local_47e0);
  FLLMScope::~FLLMScope(&local_4a9c);
  if (local_4788._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4788._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_4788._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_4338 = (this->SettingsBorder).Object;
  pTStack_4330 = (this->SettingsBorder).SharedReferenceCount.ReferenceController;
  (this->SettingsBorder).Object = local_4788._Widget.Object;
  (this->SettingsBorder).SharedReferenceCount.ReferenceController =
       local_4788._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4330);
  pTVar35 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4788,&local_4478,pFVar33);
  local_49c8 = pTVar35->Object;
  local_4a08 = (pTVar35->SharedReferenceCount).ReferenceController;
  if (local_4a08 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_4a08->SharedReferenceCount = (atomic<int>)((int)local_4a08->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_4a08->SharedReferenceCount = (atomic<int>)((int)local_4a08->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_49c0.ReferenceController = local_4a08;
  if ((SBox **)&pFVar31->field_0x8 != &local_49c8) {
    *(SBox **)&pFVar31->field_0x8 = local_49c8;
    local_49c8 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar31->field_0x10,&local_49c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_49c0.ReferenceController);
  pFVar30 = SVerticalBox::FArguments::operator+(pFVar30,pFVar31);
  pFVar31 = SVerticalBox::Slot(&local_3340);
  pFVar29 = (FSizeParam *)FAuto::FAuto((FAuto *)local_4120);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar31->field_0x58,pFVar29);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_40f0)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_4120 + 0x10));
  pFVar36 = STextBlock::FArguments::FArguments(&local_5c0);
  uStack_48b0 = 0;
  local_48b8 = (TReferenceControllerBase<1> *)GetDisabledTextVisibility;
  lStack_4320 = (ulonglong)uStack_48ac << 0x20;
  local_4328 = GetDisabledTextVisibility;
  TAttribute<EVisibility>::Bind<SSourceControlLogin>
            ((TAttribute<EVisibility> *)&pFVar36->_padding_,this,(pmf_30dce5c3 *)&local_4328);
  local_4a44 = 1;
  local_4a48 = __real_43e10000;
  local_4a30 = 0;
  local_4a40 = (undefined1  [8])0x0;
  FStack_4a38.Data = (FScriptContainerElement *)0x0;
  (pFVar36->_WrapTextAt).Value = __real_43e10000;
  (pFVar36->_WrapTextAt).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar36->_WrapTextAt).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a40,
             (FWriteAccessScope *)&local_4680);
  if (((int)local_4a30 != 0) && (FStack_4a38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4a38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4a38,0,0,0x10);
    local_4a30 = local_4a30 & 0xffffffff00000000;
  }
  if (local_4680.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4680.Accessor,&local_4680);
  }
  if (FStack_4a38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4a38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4a40);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_4488,L"SSourceControlLogin",L"SourceControlDisabledText",
                       L"Revision control is currently disabled.\n\nTo enable, select a provider from the drop-down box above and enter your credentials."
                      );
  FText::FText(&local_4638.Value,pFVar37);
  local_4638.bIsSet = true;
  local_4638.Getter._16_8_ = 0;
  local_4638.Getter._0_8_ = 0;
  local_4638.Getter._8_8_ = 0;
  pFVar36 = STextBlock::FArguments::Text(pFVar36,&local_4638);
  FLLMScope::FLLMScope(&local_4a98,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_47d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_47d0,&local_47d8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_4378,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
             ,0x51,local_res18);
  FMemScope::~FMemScope(&local_47d0);
  FLLMScope::~FLLMScope(&local_4a98);
  pTVar38 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4378,&local_4498,pFVar36);
  local_49b0 = pTVar38->Object;
  local_49a8.ReferenceController = (pTVar38->SharedReferenceCount).ReferenceController;
  if (local_49a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_49a8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_49a8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_49a8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_49a8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48b8 = local_49a8.ReferenceController;
  if ((STextBlock **)&pFVar31->field_0x8 != &local_49b0) {
    *(STextBlock **)&pFVar31->field_0x8 = local_49b0;
    local_49b0 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar31->field_0x10,&local_49a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_49a8.ReferenceController);
  pFVar30 = SVerticalBox::FArguments::operator+(pFVar30,pFVar31);
  FLLMScope::FLLMScope(&local_4a94,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_47c0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_47b8,&local_47c0,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_4390,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
             ,0x3c,local_res20);
  FMemScope::~FMemScope(&local_47b8);
  FLLMScope::~FLLMScope(&local_4a94);
  pTVar39 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4390,&local_44a8,pFVar30);
  local_49a0 = pTVar39->Object;
  local_4998.ReferenceController = (pTVar39->SharedReferenceCount).ReferenceController;
  if (local_4998.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4998.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4998.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_4998.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_4998.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4840 = local_4998.ReferenceController;
  if ((SVerticalBox **)&pFVar28->field_0x8 != &local_49a0) {
    *(SVerticalBox **)&pFVar28->field_0x8 = local_49a0;
    local_49a0 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar28->field_0x10,&local_4998);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4998.ReferenceController);
  local_4a18 = SVerticalBox::FArguments::operator+(local_4a10,pFVar28);
  pFVar28 = SVerticalBox::Slot(&local_3428);
  if (local_4858 != (undefined4 *)&pFVar28->field_0x50) {
    *(undefined4 *)&pFVar28->field_0x50 = 1;
    pFVar28->field_0x54 = 1;
  }
  if (pFVar28 == (FSlotArguments *)0xffffffffffffffb8) {
    this_04 = (TOptional<FSizeParam> *)&DAT_00000058;
    pFVar57 = (FSlotArgumentsMixin *)&DAT_00000018;
  }
  else {
    this_04 = (TOptional<FSizeParam> *)&pFVar28->field_0x58;
    pFVar57 = (FSlotArgumentsMixin *)&pFVar28->field_0x18;
  }
  pFVar29 = (FSizeParam *)FAuto::FAuto((FAuto *)local_40d8);
  TOptional<FSizeParam>::operator=(this_04,pFVar29);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_40a8)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_40d8 + 0x10));
  local_4a10 = (FArguments *)
               TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         (pFVar57,0.0);
  pFVar40 = SExpandableArea::FArguments::FArguments(&local_4090);
  pIVar27 = FAppStyle::Get();
  pcVar7 = *(code **)((longlong)*pIVar27 + 0x50);
  pFVar22 = ::FName::FName(&local_4440,"NoBorder");
  local_4940 = (FSlateBrush *)(*pcVar7)(pIVar27,*pFVar22,0,0);
  local_4938 = 1;
  local_4920 = 0;
  local_4930 = (undefined1  [8])0x0;
  FStack_4928.Data = (FScriptContainerElement *)0x0;
  (pFVar40->_BorderImage).Value = local_4940;
  (pFVar40->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar40->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4930);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4930,
             (FWriteAccessScope *)&local_4668);
  if (((int)local_4920 != 0) && (FStack_4928.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4928.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4928,0,0,0x10);
    local_4920 = local_4920 & 0xffffffff00000000;
  }
  if (local_4668.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4668.Accessor,&local_4668);
  }
  if (FStack_4928.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4928.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4930);
  uStack_49d0 = 0;
  local_49d8 = (TReferenceControllerBase<1> *)GetSettingsVisibility;
  lStack_4310 = (ulonglong)uStack_49cc << 0x20;
  local_4318 = GetSettingsVisibility;
  TAttribute<EVisibility>::Bind<SSourceControlLogin>
            ((TAttribute<EVisibility> *)&pFVar40->_padding_,this,(pmf_30dce5c3 *)&local_4318);
  uStack_49d0 = 0;
  local_49d8 = (TReferenceControllerBase<1> *)AreControlsEnabled;
  lStack_4300 = (ulonglong)uStack_49cc << 0x20;
  local_4308 = AreControlsEnabled;
  TAttribute<bool>::Bind<SSourceControlLogin>
            ((TAttribute<bool> *)&pFVar40->_padding_,this,(pmf_f7c03816 *)&local_4308);
  pFVar40->_InitiallyCollapsed = true;
  pFVar36 = STextBlock::FArguments::FArguments(&local_b18);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_44b8,L"SSourceControlLogin",L"LogTitle",L"Revision Control Log");
  FText::FText(&local_4608.Value,pFVar37);
  local_4608.bIsSet = true;
  local_4608.Getter._16_8_ = 0;
  local_4608.Getter._0_8_ = 0;
  local_4608.Getter._8_8_ = 0;
  pFVar36 = STextBlock::FArguments::Text(pFVar36,&local_4608);
  FLLMScope::FLLMScope(&local_4a90,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_47b0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4878,&local_47b0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_43a8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
             ,100,&local_4ad8);
  FMemScope::~FMemScope(&local_4878);
  FLLMScope::~FLLMScope(&local_4a90);
  pTVar38 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_43a8,&local_44c8,pFVar36);
  pSVar9 = pTVar38->Object;
  local_49d8 = (pTVar38->SharedReferenceCount).ReferenceController;
  if (local_49d8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_49d8->SharedReferenceCount = (atomic<int>)((int)local_49d8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_49d8->SharedReferenceCount = (atomic<int>)((int)local_49d8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48e8 = (pFVar40->_HeaderContent).Widget.Object;
  pTStack_48e0 = (pFVar40->_HeaderContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar40->_HeaderContent).Widget.Object = (SWidget *)pSVar9;
  (pFVar40->_HeaderContent).Widget.SharedReferenceCount.ReferenceController = local_49d8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48e0);
  pFVar26 = SBorder::FArguments::FArguments(&local_1d58);
  pIVar27 = FAppStyle::Get();
  pcVar7 = *(code **)((longlong)*pIVar27 + 0x50);
  pFVar22 = ::FName::FName(local_4438,"Brushes.Recessed");
  local_46c0.Value = (FSlateBrush *)(*pcVar7)(pIVar27,*pFVar22,0);
  local_46c0.bIsSet = true;
  local_46c0.Getter._16_8_ = 0;
  local_46c0.Getter._0_8_ = 0;
  local_46c0.Getter._8_8_ = 0;
  pFVar26 = SBorder::FArguments::BorderImage(pFVar26,&local_46c0);
  pFVar26 = SBorder::FArguments::Padding(pFVar26,0.0);
  pFVar33 = SBox::FArguments::FArguments(&local_2718);
  local_4898 = 0x437a0000;
  local_4894 = 1;
  local_4890._0_8_ = 0;
  local_4890._8_8_ = 0;
  local_4890._16_8_ = 0;
  (pFVar33->_HeightOverride).Value.Size = 250.0;
  (pFVar33->_HeightOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar33->_HeightOverride).Getter,
             &local_4890);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_4890)
  ;
  pTVar41 = (TSharedRef<SWidget,1> *)
            (**(code **)((longlong)*(IModuleInterface *)local_49e8 + 0x70))(local_49e8,local_44d8);
  pFVar33 = SBox::FArguments::operator[](pFVar33,pTVar41);
  FLLMScope::FLLMScope(&local_4a8c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4870 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4868,&local_4870,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_43c0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
             ,0x6d,&local_4ad7);
  FMemScope::~FMemScope(&local_4868);
  FLLMScope::~FLLMScope(&local_4a8c);
  pTVar35 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_43c0,&local_44e8,pFVar33);
  pSVar10 = pTVar35->Object;
  local_49e8 = (pTVar35->SharedReferenceCount).ReferenceController;
  if (local_49e8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_49e8->SharedReferenceCount = (atomic<int>)((int)local_49e8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_49e8->SharedReferenceCount = (atomic<int>)((int)local_49e8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48d8 = (pFVar26->_Content).Widget.Object;
  pTStack_48d0 = (pFVar26->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar26->_Content).Widget.Object = (SWidget *)pSVar10;
  (pFVar26->_Content).Widget.SharedReferenceCount.ReferenceController = local_49e8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48d0);
  FLLMScope::FLLMScope(&local_4a88,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4860 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_49b8,&local_4860,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_43d8,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
             ,0x69,&local_4ad6);
  FMemScope::~FMemScope(&local_49b8);
  FLLMScope::~FLLMScope(&local_4a88);
  pTVar42 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_43d8,&local_44f8,pFVar26);
  pTVar4 = (pTVar42->SharedReferenceCount).ReferenceController;
  pSVar11 = pTVar42->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4ac8 = (pFVar40->_BodyContent).Widget.Object;
  pTStack_4ac0 = (pFVar40->_BodyContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar40->_BodyContent).Widget.Object = (SWidget *)pSVar11;
  (pFVar40->_BodyContent).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4ac0);
  FLLMScope::FLLMScope(&local_4a84,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4a28 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4980,&local_4a28,true);
  TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SExpandableArea,RequiredArgs::T0RequiredArgs>
            (&local_4918,"SExpandableArea",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
             ,0x5d,&local_4ad5);
  FMemScope::~FMemScope(&local_4980);
  FLLMScope::~FLLMScope(&local_4a84);
  pSVar43 = TSharedPtr<SExpandableArea,1>::operator->(&local_4918._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar43,(FSlateBaseNamedArgs *)pFVar40);
  pSVar43 = local_4918._Widget.Object;
  SExpandableArea::Construct(local_4918._Widget.Object,pFVar40);
  pSVar44 = TSharedPtr<SExpandableArea,1>::operator->(&local_4918._Widget);
  if ((pSVar44->_padding_ & 0x10) == 0) {
    cVar20 = (**(code **)(pSVar44->_padding_ + 0x228))(pSVar44);
    bVar21 = 0;
    if (cVar20 == '\0') goto LAB_146b0be68;
  }
  bVar21 = 0x20;
LAB_146b0be68:
  *(byte *)&pSVar44->_padding_ = (byte)pSVar44->_padding_ & 0xdf;
  *(byte *)&pSVar44->_padding_ = (byte)pSVar44->_padding_ | bVar21;
  pSVar44 = TSharedPtr<SExpandableArea,1>::operator->(&local_4918._Widget);
  pbVar2 = (byte *)((longlong)&pSVar44->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_4918._Widget.Object == (SExpandableArea *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar17.ReferenceController = local_4918._Widget.SharedReferenceCount.ReferenceController;
  local_4918._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_4918._Widget.Object = (SExpandableArea *)0x0;
  if ((pSVar43 == (SExpandableArea *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar30 = local_4a10;
  local_48c0.ReferenceController = FVar17.ReferenceController;
  if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&local_4a10->_padding_ != &local_48c8) {
    local_4a10->_padding_ = (longlong)pSVar43;
    local_48c8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_4a10->_padding_,&local_48c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48c0.ReferenceController);
  local_4a28 = (FName)SVerticalBox::FArguments::operator+(local_4a18,(FSlotArguments *)pFVar30);
  pFVar28 = SVerticalBox::Slot(&local_2c00);
  if (local_4828 != (undefined4 *)&pFVar28->field_0x50) {
    *(undefined4 *)&pFVar28->field_0x50 = 3;
    pFVar28->field_0x54 = 1;
  }
  pFVar57 = (FSlotArgumentsMixin *)&pFVar28->field_0x18;
  if (pFVar28 == (FSlotArguments *)0xffffffffffffffb8) {
    pFVar57 = (FSlotArgumentsMixin *)&DAT_00000018;
  }
  local_4980 = (FMemScope)
               TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         (pFVar57,__real_41000000,fVar15,__real_41000000,fVar15);
  pFVar45 = SHorizontalBox::FArguments::FArguments(&local_3a40);
  pFVar46 = SHorizontalBox::Slot(&local_2ce8);
  pFVar46 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar46);
  if (local_4820 != (undefined4 *)&pFVar46->field_0x50) {
    *(undefined4 *)&pFVar46->field_0x50 = 2;
    pFVar46->field_0x54 = 1;
  }
  if (pFVar46 == (FSlotArguments *)0xffffffffffffffb8) {
    pFVar46 = (FSlotArguments *)0x0;
  }
  puVar49 = &pFVar46->field_0x48;
  if (local_4818 != (undefined4 *)puVar49) {
    *(undefined4 *)puVar49 = 1;
    pFVar46->field_0x4c = 1;
  }
  pFVar50 = (FSlotArguments *)0x0;
  if (puVar49 != (undefined1 *)0x0) {
    pFVar50 = pFVar46;
  }
  pFVar47 = SThrobber::FArguments::FArguments(&local_2b18);
  pTStack_4ac0 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_4ac0 & 0xffffffff00000000);
  local_4ac8 = (SWidget *)GetThrobberVisibility;
  local_42f8 = GetThrobberVisibility;
  uStack_42f0 = (ulonglong)pTStack_4ac0;
  TAttribute<EVisibility>::Bind<SSourceControlLogin>
            ((TAttribute<EVisibility> *)&pFVar47->_padding_,this,(pmf_30dce5c3 *)&local_42f8);
  FLLMScope::FLLMScope(&local_4a80,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4a20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4aa8,&local_4a20,true);
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>
            (&local_43f0,"SThrobber",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
             ,0x80,&local_4ad4);
  FMemScope::~FMemScope(&local_4aa8);
  FLLMScope::~FLLMScope(&local_4a80);
  pTVar48 = TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_43f0,&local_4508,pFVar47);
  pTVar5 = (pTVar48->SharedReferenceCount).ReferenceController;
  local_4990 = pTVar48->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4988.ReferenceController = pTVar5;
  if ((SThrobber **)&pFVar50->field_0x8 != &local_4990) {
    *(SThrobber **)&pFVar50->field_0x8 = local_4990;
    local_4990 = (SThrobber *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar50->field_0x10,&local_4988);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4988.ReferenceController);
  local_4a18 = (FArguments *)SHorizontalBox::FArguments::operator+(pFVar45,pFVar50);
  pFVar46 = SHorizontalBox::Slot(&local_2dd0);
  local_47a8.Value = 1.0;
  local_47a8.Getter._16_8_ = 0;
  local_47a8.bIsSet = true;
  local_47a8.Getter._0_8_ = 0;
  local_47a8.Getter._8_8_ = 0;
  pFVar46 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar46,&local_47a8);
  puVar49 = &pFVar46->field_0x48;
  if (local_4810 != (undefined4 *)puVar49) {
    *(undefined4 *)puVar49 = 3;
    pFVar46->field_0x4c = 1;
  }
  if (puVar49 == (undefined1 *)0x0) {
    pFVar46 = (FSlotArguments *)0x0;
  }
  local_4a20 = (FName)SHorizontalBox::FArguments::FArguments(&local_3c48);
  pFVar50 = SHorizontalBox::Slot(&local_2eb8);
  FVar51 = (FMemScope)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar50);
  uVar16 = _UNK_150957998;
  local_4710 = 1;
  local_4720 = ___xmm_0000000040a000000000000040a00000;
  uStack_4718 = _UNK_150957998;
  local_4708._16_8_ = 0;
  local_4708._0_8_ = 0;
  local_4708._8_8_ = 0;
  *(undefined8 *)((longlong)FVar51 + 0x18) = ___xmm_0000000040a000000000000040a00000;
  *(undefined8 *)((longlong)FVar51 + 0x20) = uVar16;
  *(undefined1 *)((longlong)FVar51 + 0x28) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar51 + 0x30),&local_4708);
  local_4aa8.Inner.bActive = false;
  local_4aa8._1_3_ = 0;
  local_4aa8.PrevTag = 0;
  if ((undefined8 *)((longlong)FVar51 + 0x18) != (undefined8 *)0x0) {
    local_4aa8 = FVar51;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_4708)
  ;
  pFVar52 = SButton::FArguments::FArguments(&local_1058);
  pFVar52->_VAlign = VAlign_Center;
  ::FName::FName(&local_47c8,"PrimaryButton");
  pIVar27 = FAppStyle::Get();
  pFVar53 = ISlateStyle::GetWidgetStyle<FButtonStyle>
                      (pIVar27,local_47c8,(char *)0x0,(FButtonStyle *)0x0);
  pFVar52->_ButtonStyle = pFVar53;
  ::FName::FName(&local_47e8,"DialogButtonText");
  pIVar27 = FAppStyle::Get();
  pFVar52 = SButton::FArguments::TextStyle(pFVar52,pIVar27,&local_47e8,(char *)0x0);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_4518,L"SSourceControlLogin",L"AcceptSettings",L"Accept Settings");
  FText::FText(&local_45d8.Value,pFVar37);
  local_45d8.bIsSet = true;
  local_45d8.Getter._16_8_ = 0;
  local_45d8.Getter._0_8_ = 0;
  local_45d8.Getter._8_8_ = 0;
  pFVar52 = SButton::FArguments::Text(pFVar52,&local_45d8);
  pTStack_4ac0 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_4ac0 & 0xffffffff00000000);
  local_4ac8 = (SWidget *)OnAcceptSettings;
  local_42e8 = OnAcceptSettings;
  uStack_42e0 = (ulonglong)pTStack_4ac0;
  pFVar52 = SButton::FArguments::OnClicked<SSourceControlLogin>
                      (pFVar52,this,(pmf_3289367e *)&local_42e8);
  pTStack_4ac0 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_4ac0 & 0xffffffff00000000);
  local_4ac8 = (SWidget *)IsAcceptSettingsEnabled;
  local_42d8 = IsAcceptSettingsEnabled;
  uStack_42d0 = (ulonglong)pTStack_4ac0;
  TAttribute<bool>::Bind<SSourceControlLogin>
            ((TAttribute<bool> *)&pFVar52->_padding_,this,(pmf_f7c03816 *)&local_42d8);
  FLLMScope::FLLMScope(&local_4a7c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4ab0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4ab8,&local_4ab0,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_4408,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
             ,0x8c,&local_4ad3);
  FMemScope::~FMemScope(&local_4ab8);
  FLLMScope::~FLLMScope(&local_4a7c);
  pTVar54 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_4408,&local_4528,pFVar52);
  local_4a78.Object = (SWidget *)pTVar54->Object;
  local_4a78.SharedReferenceCount.ReferenceController =
       (pTVar54->SharedReferenceCount).ReferenceController;
  if ((FMemScope)local_4a78.SharedReferenceCount.ReferenceController != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_4a78.SharedReferenceCount.ReferenceController + 8) =
         (atomic<int>)
         ((int)*(atomic<int> *)((longlong)local_4a78.SharedReferenceCount.ReferenceController + 8) +
         1);
    UNLOCK();
  }
  local_49b8 = (FMemScope)local_4a78.SharedReferenceCount.ReferenceController;
  pFVar50 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_4aa8,&local_4a78);
  local_4ab0 = (FName)SHorizontalBox::FArguments::operator+((FArguments *)local_4a20,pFVar50);
  pFVar50 = SHorizontalBox::Slot(&local_2fa0);
  FVar51 = (FMemScope)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar50);
  uVar16 = _UNK_150957998;
  local_46e0 = 1;
  local_46f0 = ___xmm_0000000040a000000000000040a00000;
  uStack_46e8 = _UNK_150957998;
  local_46d8._16_8_ = 0;
  local_46d8._0_8_ = 0;
  local_46d8._8_8_ = 0;
  *(undefined8 *)((longlong)FVar51 + 0x18) = ___xmm_0000000040a000000000000040a00000;
  *(undefined8 *)((longlong)FVar51 + 0x20) = uVar16;
  *(undefined1 *)((longlong)FVar51 + 0x28) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar51 + 0x30),&local_46d8);
  local_4ab8.Inner.bActive = false;
  local_4ab8._1_3_ = 0;
  local_4ab8.PrevTag = 0;
  if ((undefined8 *)((longlong)FVar51 + 0x18) != (undefined8 *)0x0) {
    local_4ab8 = FVar51;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_46d8)
  ;
  pFVar52 = SButton::FArguments::FArguments(&local_1598);
  pFVar52->_VAlign = VAlign_Center;
  ::FName::FName(&local_4850,"DialogButtonText");
  pIVar27 = FAppStyle::Get();
  pFVar52 = SButton::FArguments::TextStyle(pFVar52,pIVar27,&local_4850,(char *)0x0);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_4538,L"SSourceControlLogin",L"RunWithoutSourceControl",
                       L"Disable Revision Control");
  FText::FText(&local_45a8.Value,pFVar37);
  local_45a8.bIsSet = true;
  local_45a8.Getter._16_8_ = 0;
  local_45a8.Getter._0_8_ = 0;
  local_45a8.Getter._8_8_ = 0;
  pFVar52 = SButton::FArguments::Text(pFVar52,&local_45a8);
  local_4a78.SharedReferenceCount.ReferenceController =
       local_4a78.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_4a78.Object = (SWidget *)OnDisableSourceControl;
  local_42c8 = OnDisableSourceControl;
  pTStack_42c0 = local_4a78.SharedReferenceCount.ReferenceController;
  pFVar52 = SButton::FArguments::OnClicked<SSourceControlLogin>
                      (pFVar52,this,(pmf_3289367e *)&local_42c8);
  local_4a78.SharedReferenceCount.ReferenceController =
       local_4a78.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_4a78.Object = (SWidget *)AreControlsEnabled;
  local_42b8 = AreControlsEnabled;
  pTStack_42b0 = local_4a78.SharedReferenceCount.ReferenceController;
  TAttribute<bool>::Bind<SSourceControlLogin>
            ((TAttribute<bool> *)&pFVar52->_padding_,this,(pmf_f7c03816 *)&local_42b8);
  this_00 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_4228,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
                       ,0x98,&local_4ad2);
  pTVar54 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_4548,pFVar52);
  local_4750.Object = (SWidget *)pTVar54->Object;
  local_4aa8 = (FMemScope)(pTVar54->SharedReferenceCount).ReferenceController;
  if (local_4aa8 != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_4aa8 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_4aa8 + 8) + 1);
    UNLOCK();
  }
  local_4750.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_4aa8;
  pFVar50 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_4ab8,&local_4750);
  pFVar45 = SHorizontalBox::FArguments::operator+((FArguments *)local_4ab0,pFVar50);
  pTVar55 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_4240,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
                       ,0x87,&local_4ad1);
  pTVar56 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar55,&local_4558,pFVar45);
  local_4770.Object = (SWidget *)pTVar56->Object;
  local_4ab0 = (FName)(pTVar56->SharedReferenceCount).ReferenceController;
  if (local_4ab0 != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_4ab0 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_4ab0 + 8) + 1);
    UNLOCK();
  }
  local_4770.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_4ab0;
  pFVar46 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar46,&local_4770);
  pFVar45 = SHorizontalBox::FArguments::operator+((FArguments *)local_4a18,pFVar46);
  pTVar55 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_4258,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
                       ,0x7a,&local_4ad0);
  pTVar56 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar55,&local_4568,pFVar45);
  local_4760.Object = (SWidget *)pTVar56->Object;
  local_4ab8 = (FMemScope)(pTVar56->SharedReferenceCount).ReferenceController;
  if (local_4ab8 != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_4ab8 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_4ab8 + 8) + 1);
    UNLOCK();
  }
  local_4760.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_4ab8;
  pFVar28 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_4980,&local_4760);
  pFVar30 = SVerticalBox::FArguments::operator+((FArguments *)local_4a28,pFVar28);
  this_01 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_4270,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
                       ,0x37,&local_4acf);
  pTVar39 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_4578,pFVar30);
  pFVar26 = local_4848;
  pTVar12 = (pTVar39->SharedReferenceCount).ReferenceController;
  local_48a8 = pTVar39->Object;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar13 = (local_4848->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_4848->_Content).Widget.Object = (SWidget *)local_48a8;
  (local_4848->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar12;
  pTStack_48a0 = pTVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  this_02 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_4288,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
                       ,0x33,&local_4ace);
  pTVar42 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_4298,pFVar26);
  pFVar33 = local_4830;
  pTVar13 = (pTVar42->SharedReferenceCount).ReferenceController;
  local_4978 = pTVar42->Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar14 = (local_4830->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_4830->_Content).Widget.Object = (SWidget *)local_4978;
  (local_4830->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar13;
  uStack_4970 = pTVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  this_03 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_4210,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
                       ,0x30,local_4acd);
  pTVar35 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_03,&local_42a8,pFVar33);
  pTVar14 = (pTVar35->SharedReferenceCount).ReferenceController;
  local_4740.Object = (SWidget *)pTVar35->Object;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4740.SharedReferenceCount.ReferenceController = pTVar14;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_4740);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_42a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4210._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4298.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4288._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4578.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4270._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4ab8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4568.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4258._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4ab0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4558.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4240._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4aa8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4548.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4228._Widget.SharedReferenceCount.ReferenceController);
  if (local_4538.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4538.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_1598);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2fa0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_49b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4528.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4408._Widget.SharedReferenceCount.ReferenceController);
  if (local_4518.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4518.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_1058);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2eb8);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3c48._Slots.AllocatorInstance.Data,local_3c48._Slots.ArrayNum);
  if ((FSlotArguments *)local_3c48._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3c48._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3c48);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2dd0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4508.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_43f0._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2b18);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2ce8);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3a40._Slots.AllocatorInstance.Data,local_3a40._Slots.ArrayNum);
  if ((FSlotArguments *)local_3a40._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3a40._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3a40);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2c00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4918._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_44f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_43d8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_49e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_44e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_43c0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_44d0);
  SBox::FArguments::~FArguments(&local_2718);
  SBorder::FArguments::~FArguments(&local_1d58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_49d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_44c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_43a8._Widget.SharedReferenceCount.ReferenceController);
  if (local_44b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_44b8.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_b18);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4090._HeaderCursor.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4090._AreaTitleFont.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4090._AreaTitleFont.Value.CompositeFont.SharedReferenceCount.ReferenceController)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4090._OnAreaExpansionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4090._Padding.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4090._HeaderPadding.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4090._AreaTitlePadding.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4090._AreaTitle.Getter);
  if (local_4090._AreaTitle.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4090._AreaTitle.Value.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4090._BodyContent.Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4090._HeaderContent.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &local_4090._BodyBorderBackgroundColor.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4090._BorderImage.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4090._BorderBackgroundColor.Getter)
  ;
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4090);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_3428);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4840);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_44a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4390._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4498.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4378._Widget.SharedReferenceCount.ReferenceController);
  if (local_4488.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_4488.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5c0);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_3340);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4a08);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4478.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4788._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4460);
  SBox::FArguments::~FArguments(&local_23d8);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_3258);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4838);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4838);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4900._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_2910);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_3170);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3838._Slots.AllocatorInstance.Data,local_3838._Slots.ArrayNum);
  if ((FSlotArguments *)local_3838._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3838._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3838);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_3088);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3630._Slots.AllocatorInstance.Data,local_3630._Slots.ArrayNum);
  if ((FSlotArguments *)local_3630._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3630._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3630);
  SBorder::FArguments::~FArguments(&local_1978);
  SBox::FArguments::~FArguments(&local_2098);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4728);
  return;
}

// DisplayConnectionError @ 146b13880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SSourceControlLogin::DisplayConnectionError(SSourceControlLogin *this,FText *param_1)

{
  FActiveTimerHandle *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 local_res8 [8];
  FName local_res18;
  TSharedRef<FActiveTimerHandle,1> local_c8;
  FText local_b8;
  TSharedRef<FTokenizedMessage,1> local_a8;
  FText local_98;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FMessageLog local_48;
  FTextFormat local_18;
  
  ::FName::FName(&local_res18,"SourceControl");
  FMessageLog::FMessageLog(&local_48,&local_res18);
  bVar4 = FText::IsEmpty(param_1);
  if (bVar4) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_98,L"SSourceControlLogin",L"FailedToConnect",
                        L"Failed to connect to revision control. Check your settings and connection then try again."
                       );
    FMessageLog::Error(&local_48,&local_a8,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  else {
    local_b8.TextData.Reference = (param_1->TextData).Reference;
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 8))
                (local_b8.TextData.Reference,local_res8);
    }
    local_b8.Flags = param_1->Flags;
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"SSourceControlLogin",L"ConnectionErrorFormat",
                        L"Connection Error: {0}");
    pFVar7 = FTextFormat::FTextFormat(&local_18,pFVar6,Default);
    pFVar6 = FText::Format<FText>(&local_78,pFVar7,&local_b8);
    FMessageLog::Error(&local_48,&local_88,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    local_98.TextData.Reference = local_68.TextData.Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      local_98.TextData.Reference = local_68.TextData.Reference;
    }
  }
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  pFVar6 = FText::FText(&local_58);
  FMessageLog::Notify(&local_48,pFVar6,Info,false);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  pTVar8 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar8->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146b139e6;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar4 = aVar3 == aVar5;
      if (bVar4) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar4);
    pFVar1 = (this->ActiveTimerHandle).Object;
    if (pFVar1 != (FActiveTimerHandle *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      local_c8.Object = pFVar1;
      local_c8.SharedReferenceCount.ReferenceController = pTVar8;
      if ((pFVar1 == (FActiveTimerHandle *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      SWidget::UnRegisterActiveTimer((SWidget *)this,&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.SharedReferenceCount.ReferenceController);
    }
  }
LAB_146b139e6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  FMessageLog::~FMessageLog(&local_48);
  return;
}

// DisplayConnectionSuccess @ 146b13a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSourceControlLogin::DisplayConnectionSuccess(SSourceControlLogin *this)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FSlateNotificationManager *this_00;
  TSharedPtr<SNotificationItem,1> local_198;
  FText local_188;
  FNotificationInfo local_178;
  
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_188,L"SSourceControlLogin",L"ConnectionSuccessful",
                      L"Connection to revision control was successful!");
  FNotificationInfo::FNotificationInfo(&local_178,pFVar3);
  if (local_188.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
  }
  local_178.bFireAndForget = true;
  local_178.bUseSuccessFailIcons = true;
  this_00 = FSlateNotificationManager::Get();
  FSlateNotificationManager::AddNotification(this_00,&local_198,&local_178);
  if ((local_198.Object == (SNotificationItem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(*(longlong *)local_198.Object + 0x280))(local_198.Object,2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.ForWindow.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_178.HyperlinkText.Getter);
  if (local_178.HyperlinkText.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_178.HyperlinkText.Value.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_178.Hyperlink);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_178.CheckBoxText.Getter);
  if (local_178.CheckBoxText.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_178.CheckBoxText.Value.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_178.CheckBoxStateChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_178.CheckBoxState.Getter);
  DestructItems<FNotificationButtonInfo,int>
            ((FNotificationButtonInfo *)local_178.ButtonDetails.AllocatorInstance.Data,
             local_178.ButtonDetails.ArrayNum);
  if ((FNotificationButtonInfo *)local_178.ButtonDetails.AllocatorInstance.Data !=
      (FNotificationButtonInfo *)0x0) {
    FMemory::Free(local_178.ButtonDetails.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_178.SubText.Getter);
  if (local_178.SubText.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_178.SubText.Value.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_178.Text.Getter);
  if (local_178.Text.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_178.Text.Value.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.ContentWidget.SharedReferenceCount.ReferenceController);
  return;
}

// GetDisabledTextVisibility @ 146b17010

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SSourceControlLogin::GetDisabledTextVisibility(SSourceControlLogin *this)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  IModuleInterface *pIVar4;
  EVisibility EVar5;
  uchar *in_RDX;
  FName local_res10 [3];
  
  pFVar3 = ::FName::FName(local_res10,"SourceControl");
  FVar1 = *pFVar3;
  this_00 = FModuleManager::Get();
  pIVar4 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  pFVar3 = (FName *)(**(code **)(*(longlong *)pIVar4[4] + 0x20))();
  bVar2 = ::FName::Equals(*pFVar3,"None");
  EVar5 = EVisibility::Collapsed;
  if (bVar2) {
    EVar5 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar5.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetSettingsVisibility @ 146b198f0

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SSourceControlLogin::GetSettingsVisibility(SSourceControlLogin *this)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  IModuleInterface *pIVar4;
  EVisibility EVar5;
  uchar *in_RDX;
  FName local_res10 [3];
  
  pFVar3 = ::FName::FName(local_res10,"SourceControl");
  FVar1 = *pFVar3;
  this_00 = FModuleManager::Get();
  pIVar4 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  pFVar3 = (FName *)(**(code **)(*(longlong *)pIVar4[4] + 0x20))();
  bVar2 = ::FName::Equals(*pFVar3,"None");
  EVar5 = EVisibility::Visible;
  if (bVar2) {
    EVar5 = EVisibility::Collapsed;
  }
  *in_RDX = (uchar)EVar5.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetThrobberVisibility @ 146b1ade0

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SSourceControlLogin::GetThrobberVisibility(SSourceControlLogin *this)

{
  EVisibility EVar1;
  uchar *in_RDX;
  
  EVar1.Value.Value = EVisibility::Collapsed.Value.Value;
  if (this->ConnectionState == Connecting) {
    EVar1.Value.Value = EVisibility::Visible.Value.Value;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// IsAcceptSettingsEnabled @ 146b1bb40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SSourceControlLogin::IsAcceptSettingsEnabled(SSourceControlLogin *this)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  IModuleInterface *pIVar4;
  FName local_res8;
  
  pFVar3 = ::FName::FName(&local_res8,"SourceControl");
  FVar1 = *pFVar3;
  this_00 = FModuleManager::Get();
  pIVar4 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  if (this->ConnectionState == Disconnected) {
    pFVar3 = (FName *)(**(code **)(*(longlong *)pIVar4[4] + 0x20))();
    bVar2 = ::FName::Equals(*pFVar3,"None");
    if (!bVar2) {
      return true;
    }
  }
  return false;
}

// OnAcceptSettings @ 146b1efa0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSourceControlLogin::OnAcceptSettings(SSourceControlLogin *this,FReply *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWindow *pSVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  FName FVar7;
  IModuleInterface IVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FSlateApplication *this_00;
  TSharedPtr<SWindow,1> *pTVar14;
  undefined8 *puVar15;
  TSharedRef<SWidget,1> *pTVar16;
  ulong64 uVar17;
  TSharedRef<FActiveTimerHandle,1> *pTVar18;
  FName *pFVar19;
  FModuleManager *this_01;
  IModuleInterface *pIVar20;
  FReply *pFVar21;
  FString *pFVar22;
  FText *pFVar23;
  SWindow *pSVar24;
  SWindow *pSVar25;
  SWindow *pSVar26;
  bool bVar27;
  FName local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_128;
  FDelegateAllocation local_120;
  code *local_110;
  longlong lStack_108;
  FText local_100;
  undefined1 local_f0 [8];
  FDelegateAllocation local_e8;
  TSharedRef<SWidget,1> local_d8;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDelegateAllocation *local_98;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  TSharedPtr<SWindow,1> local_70;
  TSharedRef<SWidget,1> local_60;
  TSharedRef<FActiveTimerHandle,1> local_50;
  
  pSVar25 = (SWindow *)0x0;
  this->ConnectionState = Connecting;
  pSVar24 = (SWindow *)__return_storage_ptr__;
  if ((((this->ParentWindowPtr).Object != (SWindow *)0x0) &&
      (pTVar3 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController,
      pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) {
    pSVar4 = (SWindow *)(this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
    pSVar24 = pSVar4;
    pSVar26 = pSVar25;
    if (pSVar4 != (SWindow *)0x0) {
      iVar13 = (int)pSVar4->_padding_;
      do {
        pSVar24 = pSVar25;
        pSVar26 = (SWindow *)0x0;
        if (iVar13 == 0) goto LAB_146b1f021;
        LOCK();
        iVar12 = (int)pSVar4->_padding_;
        bVar27 = iVar13 == iVar12;
        if (bVar27) {
          *(int *)&pSVar4->_padding_ = iVar13 + 1;
          iVar12 = iVar13;
        }
        UNLOCK();
        iVar13 = iVar12;
      } while (!bVar27);
      pSVar24 = pSVar4;
      pSVar26 = (this->ParentWindowPtr).Object;
    }
LAB_146b1f021:
    this_00 = FSlateApplication::Get();
    pTVar14 = FSlateApplication::GetActiveModalWindow(this_00,&local_70);
    pSVar25 = (SWindow *)&DAT_00000003;
    if (pTVar14->Object == pSVar26) {
      bVar27 = true;
      goto LAB_146b1f051;
    }
  }
  bVar27 = false;
LAB_146b1f051:
  if (((ulonglong)pSVar25 & 2) != 0) {
    pSVar25 = (SWindow *)(ulonglong)((uint)pSVar25 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
  }
  if (((ulonglong)pSVar25 & 1) != 0) {
    pSVar25 = (SWindow *)(ulonglong)((uint)pSVar25 & 0xfffffffe);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar24);
  }
  if (bVar27) {
    local_f0 = (undefined1  [8])0x0;
    local_e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f0,
               (FWriteAccessScope *)&local_b0);
    local_98 = &local_e8;
    puVar15 = UE::Core::Private::DelegateAllocate(0x38,&local_e8);
    pFVar21 = __return_storage_ptr__;
    if (puVar15 != (undefined8 *)0x0) {
      local_110 = TickSourceControlModule;
      lStack_108 = (ulonglong)local_d8.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
      pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_60);
      pFVar21 = (FReply *)(pTVar16->SharedReferenceCount).ReferenceController;
      pSVar5 = pTVar16->Object;
      if (pFVar21 != (FReply *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar21->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar21->_padding_ + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&pFVar21->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar21->_padding_ + 1);
        UNLOCK();
      }
      pSVar25 = (SWindow *)(ulonglong)((uint)pSVar25 | 0xe0);
      *puVar15 = &
                 ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar17 = FDelegateHandle::GenerateNewID();
      puVar15[2] = uVar17;
      *puVar15 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlLogin___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar15[3] = pSVar5;
      puVar15[4] = pFVar21;
      if (pFVar21 != (FReply *)0x0) {
        LOCK();
        ((atomic<int> *)&pFVar21->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pFVar21->_padding_)[1] + 1);
        UNLOCK();
      }
      puVar15[5] = local_110;
      puVar15[6] = lStack_108;
    }
    if ((char)pSVar25 < '\0') {
      pSVar25 = (SWindow *)(ulonglong)((uint)pSVar25 & 0xffffff7f);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar21);
    }
    if (((ulonglong)pSVar25 & 0x40) != 0) {
      pSVar25 = (SWindow *)(ulonglong)((uint)pSVar25 & 0xffffffbf);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar21);
    }
    if (((ulonglong)pSVar25 & 0x20) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.SharedReferenceCount.ReferenceController);
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    pTVar18 = SWidget::RegisterActiveTimer
                        ((SWidget *)this,&local_50,0.0,
                         (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                          *)local_f0);
    (this->ActiveTimerHandle).Object = pTVar18->Object;
    pTVar3 = (pTVar18->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar6 = (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar6->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
      (this->ActiveTimerHandle).WeakReferenceCount.ReferenceController = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar10 = false;
  bVar27 = false;
  pFVar19 = ::FName::FName(&local_res18,"SourceControl");
  FVar7 = *pFVar19;
  this_01 = FModuleManager::Get();
  pIVar20 = FModuleManager::LoadModuleChecked(this_01,FVar7);
  IVar8 = pIVar20[4];
  local_128.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_120.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_120.DelegateSize = 0;
  pcVar9 = *(code **)(*(longlong *)IVar8 + 0x48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_90);
  local_78 = &local_120;
  puVar15 = UE::Core::Private::DelegateAllocate(0x38,&local_120);
  pFVar21 = __return_storage_ptr__;
  if (puVar15 != (undefined8 *)0x0) {
    local_100._12_4_ = local_d8.SharedReferenceCount.ReferenceController._4_4_;
    local_100.TextData.Reference = (ITextData *)SourceControlOperationComplete;
    local_100.Flags = 0;
    pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d8);
    pFVar21 = (FReply *)(pTVar16->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar16->Object;
    if (pFVar21 != (FReply *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar21->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar21->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pFVar21->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pFVar21->_padding_ + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar10 = true;
    bVar27 = true;
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar17;
    *puVar15 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlLogin___00__A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar15[3] = pSVar5;
    puVar15[4] = pFVar21;
    if (pFVar21 != (FReply *)0x0) {
      LOCK();
      ((atomic<int> *)&pFVar21->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pFVar21->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar15[5] = local_100.TextData.Reference;
    puVar15[6] = CONCAT44(local_100._12_4_,local_100.Flags);
  }
  if (bVar27) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar21);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar21);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_d8.SharedReferenceCount.ReferenceController._4_4_,
                        local_d8.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  local_110 = (code *)0x0;
  lStack_108 = 0;
  iVar13 = (*pcVar9)(IVar8,&local_110,1,&local_128);
  if (local_110 != (code *)0x0) {
    FMemory::Free(local_110);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_c8);
  if ((local_120.DelegateSize != 0) &&
     (local_120.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_120.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_120,0,0,0x10);
    local_120.DelegateSize = 0;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  if (local_120.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_120.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_128.AccessDetector);
  if (iVar13 == 1) {
    bVar27 = IsInGameThread();
    if ((!bVar27) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("::IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
                            ,0x13d,L""), bVar27)) {
      pcVar9 = (code *)swi(3);
      pFVar21 = (FReply *)(*pcVar9)();
      return pFVar21;
    }
    pFVar22 = USourceControlHelpers::GetSettingsIni();
    FConfigCacheIni::Flush(GConfig,false,pFVar22);
  }
  else if (iVar13 == 0) {
    pFVar23 = FText::FText(&local_100);
    DisplayConnectionError(this,pFVar23);
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
    this->ConnectionState = Disconnected;
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnDisableSourceControl @ 146b1f770

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SSourceControlLogin::OnDisableSourceControl
          (SSourceControlLogin *this,FReply *__return_storage_ptr__)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  FName *pFVar8;
  FModuleManager *pFVar9;
  IModuleInterface *pIVar10;
  FSourceControlModule *this_00;
  FReply *pFVar11;
  FString *pFVar12;
  IModuleInterface IVar13;
  IModuleInterface IVar14;
  IModuleInterface this_01;
  bool bVar15;
  FName local_res18;
  FName local_res20;
  FName local_68;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  pFVar8 = ::FName::FName(&local_res20,"SourceControl");
  FVar1 = *pFVar8;
  pFVar9 = FModuleManager::Get();
  pIVar10 = FModuleManager::LoadModuleChecked(pFVar9,FVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pIVar10 + 0x11),&local_60);
  this_01 = (IModuleInterface)0x0;
  if (((*(int *)(pIVar10 + 0x13) == 0) || (pIVar10[0x12] == (IModuleInterface)0x0)) ||
     (cVar6 = (**(code **)(*(longlong *)pIVar10[0x12] + 0x38))(), cVar6 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pIVar10 + 0x11),&local_48)
    ;
    IVar13 = this_01;
    if (*(int *)(pIVar10 + 0x13) != 0) {
      IVar13 = pIVar10[0x12];
    }
    cVar6 = (**(code **)(*(longlong *)IVar13 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    if (cVar6 == '\0') goto LAB_146b1f968;
  }
  pFVar8 = ::FName::FName(&local_68,"SourceControl");
  FVar1 = *pFVar8;
  pFVar9 = FModuleManager::Get();
  this_00 = (FSourceControlModule *)FModuleManager::LoadModuleChecked(pFVar9,FVar1);
  ::FName::FName(&local_res18,"None");
  FSourceControlModule::SetProvider(this_00,&local_res18);
  if ((((this->ParentWindowPtr).Object != (SWindow *)0x0) &&
      (pTVar2 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController,
      pTVar2 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar2->SharedReferenceCount)) {
    IVar13 = (IModuleInterface)(this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
    IVar14 = IVar13;
    if (IVar13 == (IModuleInterface)0x0) {
LAB_146b1f8b5:
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      IVar13 = IVar14;
      if (bVar15) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FReply *)(*pcVar4)();
        return pFVar11;
      }
    }
    else {
      iVar5 = *(int *)((longlong)IVar13 + 8);
      do {
        IVar14 = this_01;
        if (iVar5 == 0) goto LAB_146b1f8b5;
        LOCK();
        iVar7 = *(int *)((longlong)IVar13 + 8);
        bVar15 = iVar5 == iVar7;
        if (bVar15) {
          *(int *)((longlong)IVar13 + 8) = iVar5 + 1;
          iVar7 = iVar5;
        }
        UNLOCK();
        iVar5 = iVar7;
      } while (!bVar15);
      this_01 = (IModuleInterface)(this->ParentWindowPtr).Object;
      IVar14 = IVar13;
      if (this_01 == (IModuleInterface)0x0) goto LAB_146b1f8b5;
    }
    SWindow::RequestDestroyWindow((SWindow *)this_01);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)IVar13);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->SourceControlLoginClosed,&local_30);
  if ((*(int *)&(this->SourceControlLoginClosed).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->SourceControlLoginClosed).field_0x8, plVar3 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar3 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  bVar15 = IsInGameThread();
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("::IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
                          ,0x13d,L""), bVar15)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FReply *)(*pcVar4)();
    return pFVar11;
  }
  pFVar12 = USourceControlHelpers::GetSettingsIni();
  FConfigCacheIni::Flush(GConfig,false,pFVar12);
LAB_146b1f968:
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// RefreshSettings @ 146b22450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSourceControlLogin::RefreshSettings(SSourceControlLogin *this)

{
  FName FVar1;
  SBox *this_00;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FModuleManager *this_01;
  IModuleInterface *pIVar5;
  TSharedRef<SWidget,1> *pTVar6;
  FName local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pFVar4 = ::FName::FName(&local_res8,"SourceControl");
  FVar1 = *pFVar4;
  this_01 = FModuleManager::Get();
  pIVar5 = FModuleManager::LoadModuleChecked(this_01,FVar1);
  if ((this->SettingsBorder).Object == (SBox *)0x0) {
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
  this_00 = (this->SettingsBorder).Object;
  pTVar6 = (TSharedRef<SWidget,1> *)
           (**(code **)(*(longlong *)pIVar5[4] + 0x188))(pIVar5[4],local_18);
  SBox::SetContent(this_00,pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// SaveSettingsToDisk @ 146b24750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSourceControlLogin::SaveSettingsToDisk(SSourceControlLogin *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("::IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SSourceControlLogin.cpp"
                       ,0x13d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = USourceControlHelpers::GetSettingsIni();
  FConfigCacheIni::Flush(GConfig,false,pFVar3);
  return;
}

// SourceControlOperationComplete @ 146b26580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSourceControlLogin::SourceControlOperationComplete
          (SSourceControlLogin *this,TSharedRef<ISourceControlOperation,1> *param_1,Type param_2)

{
  FName FVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  ISourceControlOperation *pIVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool bVar7;
  atomic<int> aVar8;
  FName *pFVar9;
  FModuleManager *this_00;
  FSourceControlModule *this_01;
  FText *pFVar10;
  FSlateNotificationManager *this_02;
  SWindow *pSVar11;
  SWindow *pSVar12;
  SWindow *this_03;
  FName local_res20;
  TSharedPtr<SNotificationItem,1> local_1a8;
  FText local_198;
  FReadAccessScope local_188;
  FNotificationInfo local_170;
  
  if (param_2 != Succeeded) {
    this->ConnectionState = Disconnected;
    pSVar12 = (SWindow *)(param_1->SharedReferenceCount).ReferenceController;
    pIVar4 = param_1->Object;
    if (pSVar12 != (SWindow *)0x0) {
      LOCK();
      *(int *)&pSVar12->_padding_ = (int)pSVar12->_padding_ + 1;
      UNLOCK();
    }
    DisplayConnectionError(this,(FText *)&pIVar4[4].field_0x8);
    goto LAB_146b26821;
  }
  this->ConnectionState = Connected;
  pFVar9 = ::FName::FName(&local_res20,"SourceControl");
  FVar1 = *pFVar9;
  this_00 = FModuleManager::Get();
  this_01 = (FSourceControlModule *)FModuleManager::LoadModuleChecked(this_00,FVar1);
  FSourceControlModule::SaveSettings(this_01);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_198,L"SSourceControlLogin",L"ConnectionSuccessful",
                       L"Connection to revision control was successful!");
  FNotificationInfo::FNotificationInfo(&local_170,pFVar10);
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
  }
  local_170.bFireAndForget = true;
  local_170.bUseSuccessFailIcons = true;
  this_02 = FSlateNotificationManager::Get();
  FSlateNotificationManager::AddNotification(this_02,&local_1a8,&local_170);
  if ((local_1a8.Object == (SNotificationItem *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (**(code **)(*(longlong *)local_1a8.Object + 0x280))(local_1a8.Object,2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_170.ForWindow.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_170.HyperlinkText.Getter);
  if (local_170.HyperlinkText.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_170.HyperlinkText.Value.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_170.Hyperlink);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_170.CheckBoxText.Getter);
  if (local_170.CheckBoxText.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_170.CheckBoxText.Value.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_170.CheckBoxStateChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_170.CheckBoxState.Getter);
  DestructItems<FNotificationButtonInfo,int>
            ((FNotificationButtonInfo *)local_170.ButtonDetails.AllocatorInstance.Data,
             local_170.ButtonDetails.ArrayNum);
  if ((FNotificationButtonInfo *)local_170.ButtonDetails.AllocatorInstance.Data !=
      (FNotificationButtonInfo *)0x0) {
    FMemory::Free(local_170.ButtonDetails.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_170.SubText.Getter);
  if (local_170.SubText.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_170.SubText.Value.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_170.Text.Getter);
  if (local_170.Text.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_170.Text.Value.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_170.ContentWidget.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->SourceControlLoginClosed,&local_188);
  if ((*(int *)&(this->SourceControlLoginClosed).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->SourceControlLoginClosed).field_0x8, plVar2 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar2 + 0x68))(plVar2,1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_188);
  if ((this->ParentWindowPtr).Object == (SWindow *)0x0) {
    return;
  }
  pTVar3 = (this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar3->SharedReferenceCount < 1) {
    return;
  }
  pSVar12 = (SWindow *)(this->ParentWindowPtr).WeakReferenceCount.ReferenceController;
  this_03 = (SWindow *)0x0;
  pSVar11 = pSVar12;
  if (pSVar12 == (SWindow *)0x0) {
LAB_146b267c2:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar12 = pSVar11;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    aVar6 = *(atomic<int> *)&pSVar12->_padding_;
    do {
      pSVar11 = this_03;
      if (aVar6 == (atomic<int>)0x0) goto LAB_146b267c2;
      LOCK();
      aVar8 = *(atomic<int> *)&pSVar12->_padding_;
      bVar7 = aVar6 == aVar8;
      if (bVar7) {
        *(atomic<int> *)&pSVar12->_padding_ = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar7);
    this_03 = (this->ParentWindowPtr).Object;
    pSVar11 = pSVar12;
    if (this_03 == (SWindow *)0x0) goto LAB_146b267c2;
  }
  SWindow::RequestDestroyWindow(this_03);
LAB_146b26821:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar12);
  return;
}

// TickSourceControlModule @ 146b29550

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
SSourceControlLogin::TickSourceControlModule(SSourceControlLogin *this,double param_1,float param_2)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  FSourceControlModule *this_01;
  FName local_res20;
  
  pFVar2 = ::FName::FName(&local_res20,"SourceControl");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  this_01 = (FSourceControlModule *)FModuleManager::LoadModuleChecked(this_00,FVar1);
  FSourceControlModule::Tick(this_01);
  return Continue;
}

