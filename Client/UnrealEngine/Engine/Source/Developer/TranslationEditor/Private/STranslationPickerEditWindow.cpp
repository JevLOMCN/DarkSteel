// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 12

// ~STranslationPickerEditWindow @ 146b99200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STranslationPickerEditWindow::~STranslationPickerEditWindow(STranslationPickerEditWindow *this)

{
  atomic<int> *paVar1;
  TSharedPtr<FTranslationPickerEditInputProcessor,1> *pTVar2;
  atomic<int> aVar3;
  ITextData *pIVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FSlateApplication *this_00;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedPtr<IInputProcessor,1> local_18;
  
  pTVar2 = &this->InputProcessor;
  this->_padding_ = (longlong)&___7STranslationPickerEditWindow__6B_;
  if (pTVar2->Object != (FTranslationPickerEditInputProcessor *)0x0) {
    pTVar2->Object->Owner = (STranslationPickerEditWindow *)0x0;
    if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
      this_00 = FSlateApplication::Get();
      local_18.Object = (IInputProcessor *)pTVar2->Object;
      local_18.SharedReferenceCount.ReferenceController =
           (this->InputProcessor).SharedReferenceCount.ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSlateApplication::UnregisterInputPreProcessor(this_00,&local_18);
    }
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar2 != (TSharedPtr<FTranslationPickerEditInputProcessor,1> *)&local_28) {
      pTVar2->Object = (FTranslationPickerEditInputProcessor *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->InputProcessor).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
  }
  pIVar4 = (this->FilterText).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FilterBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextListView).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FTranslationPickerTextItem,1>,int>
            ((TSharedPtr<FTranslationPickerTextItem,1> *)
             (this->FilteredItems).AllocatorInstance.Data,(this->FilteredItems).ArrayNum);
  pFVar5 = (this->FilteredItems).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TSharedPtr<FTranslationPickerTextItem,1>,int>
            ((TSharedPtr<FTranslationPickerTextItem,1> *)(this->AllItems).AllocatorInstance.Data,
             (this->AllItems).ArrayNum);
  pFVar5 = (this->AllItems).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WindowContents).SharedReferenceCount.ReferenceController);
  pTVar6 = (this->ParentWindow).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputProcessor).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Close @ 146b9d2c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STranslationPickerEditWindow::Close
          (STranslationPickerEditWindow *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FSlateApplication *pFVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FReply *pFVar5;
  SWindow *local_38;
  TReferenceControllerBase<1> *local_30;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<SWidget,1> local_18;
  
  pFVar3 = FSlateApplication::Get();
  pcVar1 = *(code **)(*(longlong *)pFVar3 + 0x28);
  pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  local_28 = pTVar4->Object;
  local_20 = (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(pFVar3,&local_38,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (local_38 != (SWindow *)0x0) {
    if ((local_38 == (SWindow *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar1)();
      return pFVar5;
    }
    SWindow::RequestDestroyWindow(local_38);
  }
  FReply::FReply(__return_storage_ptr__,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return __return_storage_ptr__;
}

// Construct @ 146ba1550

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000146ba22e6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STranslationPickerEditWindow::Construct(STranslationPickerEditWindow *this,FArguments *param_1)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  TSharedPtr<SBox,1> *pTVar3;
  atomic<int> aVar4;
  SWindow *pSVar5;
  UTranslationPickerSettings *pUVar6;
  SWidget *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  code *pcVar10;
  FWeakReferencer<1> *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  SSearchBox *pSVar16;
  FSharedReferencer<1> FVar17;
  FSharedReferencer<1> FVar18;
  bool bVar19;
  char cVar20;
  bool bVar21;
  char cVar22;
  byte bVar23;
  bool bVar24;
  FArguments *pFVar25;
  TSharedRef<SBox,1> *pTVar26;
  FArguments *pFVar27;
  TSharedPtr<FTranslationPickerSettingsManager,1> *pTVar28;
  ILocalizationServiceModule *pIVar29;
  longlong *plVar30;
  wchar_t *pwVar31;
  FArguments *pFVar32;
  FName *pFVar33;
  ISlateStyle *pIVar34;
  FName FVar35;
  FSizeParam *pFVar36;
  FArguments *this_00;
  FText *pFVar37;
  undefined8 *puVar38;
  TSharedRef<SWidget,1> *pTVar39;
  ulong64 uVar40;
  FSlotArguments *pFVar41;
  FArguments *pFVar42;
  TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1> *pTVar43;
  FArguments *pFVar44;
  FSlotArguments *pFVar45;
  FArguments *this_01;
  TSharedRef<SCheckBox,1> *pTVar46;
  FSlotArguments *pFVar47;
  FArguments *pFVar48;
  TSharedRef<STextBlock,1> *pTVar49;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SHorizontalBox,1> *pTVar50;
  FArguments *pFVar51;
  FMargin *pFVar52;
  FSlotArguments *pFVar53;
  FArguments *pFVar54;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar55;
  TSharedRef<SButton,1> *pTVar56;
  SUniformGridPanel *pSVar57;
  SUniformGridPanel *pSVar58;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar59;
  TSharedRef<SVerticalBox,1> *pTVar60;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SBorder,1> *pTVar61;
  TSharedRef<FTranslationPickerEditInputProcessor,1> *pTVar62;
  FSlateApplication *this_04;
  TSharedPtr<IInputProcessor,1> *pTVar63;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar64;
  FSlotArgumentsMixin *this_05;
  undefined1 *puVar65;
  FSlotArgumentsMixin *this_06;
  TReferenceControllerBase<1> *pTVar66;
  TReferenceControllerBase<1> *local_res8;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_3f78;
  T0RequiredArgs local_3f77;
  T0RequiredArgs local_3f76;
  T0RequiredArgs local_3f75;
  T0RequiredArgs local_3f74;
  T0RequiredArgs local_3f73;
  T0RequiredArgs local_3f72;
  T0RequiredArgs local_3f71;
  T0RequiredArgs local_3f70;
  T0RequiredArgs local_3f6f [7];
  FArguments *local_3f68;
  undefined4 uStack_3f60;
  undefined4 uStack_3f5c;
  SWidget *local_3f58;
  FLLMScope local_3f50;
  FLLMScope local_3f4c;
  FLLMScope local_3f48;
  FLLMScope local_3f44;
  FLLMScope local_3f40;
  FLLMScope local_3f3c;
  FLLMScope local_3f38 [2];
  undefined2 local_3f30;
  undefined1 local_3f28 [8];
  ForAnyElementType FStack_3f20;
  ulonglong local_3f18;
  FArguments *local_3f10;
  FName local_3f08 [2];
  FName local_3ef8;
  undefined4 uStack_3ef0;
  uint uStack_3eec;
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> local_3ee8;
  SSearchBox *local_3ed0;
  FSharedReferencer<1> local_3ec8;
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *local_3ec0;
  FSharedReferencer<1> local_3eb8;
  FArguments *local_3eb0;
  FSlateBrush *local_3ea8;
  undefined1 local_3ea0;
  undefined1 local_3e98 [8];
  ForAnyElementType FStack_3e90;
  ulonglong local_3e88;
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> local_3e80;
  FText local_3e68;
  bool local_3e58;
  undefined1 local_3e50 [8];
  ForAnyElementType FStack_3e48;
  ulonglong local_3e40;
  FText local_3e38;
  undefined1 local_3e28;
  undefined1 local_3e20 [8];
  ForAnyElementType FStack_3e18;
  ulonglong local_3e10;
  FArguments *local_3e08;
  SBox *local_3e00;
  FSharedReferencer<1> local_3df8 [2];
  TSharedPtr<FTranslationPickerEditInputProcessor,1> local_3de8;
  TSharedRef<SVerticalBox,1> local_3dd8;
  SVerticalBox *local_3dc8;
  TReferenceControllerBase<1> *pTStack_3dc0;
  float local_3db8;
  undefined1 local_3db4;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3db0;
  float local_3d98;
  undefined1 local_3d94;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3d90;
  undefined1 local_3d78;
  undefined1 local_3d77;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3d70;
  uchar local_3d58;
  undefined1 local_3d57;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3d50;
  FMemScope local_3d38;
  undefined4 local_3d30 [2];
  SBox *local_3d28;
  STranslationPickerEditWindow *local_3d20;
  undefined4 local_3d18 [2];
  undefined4 local_3d10 [2];
  undefined4 local_3d08 [2];
  undefined4 local_3d00 [2];
  FName local_3cf8;
  FMemScope local_3cf0;
  FName local_3ce8;
  TSharedRef<SWidget,1> local_3ce0;
  TSharedRef<SWidget,1> local_3cd0;
  TSharedRef<SWidget,1> local_3cc0;
  TSharedRef<SWidget,1> local_3cb0;
  TSharedRef<SWidget,1> local_3ca0;
  FMemScope local_3c90;
  FMemScope local_3c88;
  FMemScope local_3c80;
  TSharedRef<SWidget,1> local_3c78;
  UTranslationPickerSettings *local_3c68;
  FName local_3c60;
  FMemScope local_3c58;
  FName local_3c50;
  FMemScope local_3c48;
  FName local_3c40;
  FText local_3c38;
  undefined1 local_3c28;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3c20;
  FText local_3c08;
  undefined1 local_3bf8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3bf0;
  TAttribute<EVisibility> local_3bd8;
  TAttribute<float> local_3bb8;
  TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>
  local_3b98;
  undefined8 local_3b80;
  undefined8 uStack_3b78;
  undefined1 local_3b70;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3b68;
  undefined8 local_3b50;
  undefined8 uStack_3b48;
  undefined1 local_3b40;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3b38;
  TSharedRef<SWidget,1> local_3b20;
  TSharedRef<SWidget,1> local_3b10;
  TSharedRef<SWidget,1> local_3b00;
  undefined8 local_3af0;
  undefined8 uStack_3ae8;
  undefined1 local_3ae0;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3ad8;
  undefined8 local_3ac0;
  undefined8 uStack_3ab8;
  undefined1 local_3ab0;
  TDelegateBase<FNotThreadSafeDelegateMode> local_3aa8;
  FDestructionSentinel local_3a90;
  FDestructionSentinel local_3a78;
  FDestructionSentinel local_3a60;
  FDestructionSentinel local_3a48;
  FDestructionSentinel local_3a30;
  undefined1 *local_3a18;
  FDestructionSentinel local_3a10;
  undefined1 *local_39f8;
  FDestructionSentinel local_39f0;
  undefined1 *local_39d8;
  FDestructionSentinel local_39d0;
  undefined1 *local_39b8;
  TAttribute<FMargin> local_39b0;
  TAttribute<FText> local_3980;
  TAttribute<FText> local_3950;
  TAttribute<FMargin> local_3920;
  TAttribute<FText> local_38f0;
  FName local_38c0;
  FName local_38b8;
  FName local_38b0;
  FText local_38a8;
  TSharedRef<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,1> local_3898;
  FText local_3888;
  FText local_3878;
  TSharedRef<SBox,1> local_3868;
  TSharedRef<FTranslationPickerEditInputProcessor,1> local_3858;
  code *local_3848;
  longlong lStack_3840;
  TSharedRef<FActiveTimerHandle,1> local_3838;
  TSharedRef<SHorizontalBox,1> local_3828;
  FName local_3818;
  FText local_3810;
  TSharedRef<SButton,1> local_3800;
  FText local_37f0;
  FText local_37e0;
  FText local_37d0;
  TSharedRef<SCheckBox,1> local_37c0;
  TSharedRef<STextBlock,1> local_37b0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_37a0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3788;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3770;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_3758;
  TSharedRef<SButton,1> local_3740;
  TSharedRef<SVerticalBox,1> local_3730;
  TSharedRef<SVerticalBox,1> local_3720;
  TSharedRef<SBorder,1> local_3710;
  code *local_36f8;
  longlong lStack_36f0;
  code *local_36e8;
  longlong lStack_36e0;
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *local_36d8;
  TReferenceControllerBase<1> *pTStack_36d0;
  FName local_36c8;
  TSharedRef<SWidget,1> local_36c0;
  SSearchBox *local_36b0;
  TReferenceControllerBase<1> *pTStack_36a8;
  TSharedRef<SWidget,1> local_36a0;
  TSharedRef<SWidget,1> local_3690;
  TSharedRef<SBox,1> local_3680;
  undefined4 local_3670;
  undefined4 uStack_366c;
  undefined4 uStack_3668;
  undefined4 uStack_3664;
  FName local_3660;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3658;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3640;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3628;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3610;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_35f8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_35e0;
  undefined8 *local_35c8 [2];
  TReferenceControllerBase<1> *local_35b8;
  undefined8 *local_35a0 [2];
  TReferenceControllerBase<1> *local_3590;
  TSharedPtr<IInputProcessor,1> local_3578;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> local_3568;
  undefined1 local_3550 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_3520;
  undefined1 local_3508 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_34d8;
  FArguments local_34c0;
  FArguments local_3180;
  FArguments local_2f78;
  FSlotArguments local_2d00;
  FSlotArguments local_2c18;
  FSlotArguments local_2b30;
  FSlotArguments local_2a48;
  FSlotArguments local_2960;
  FSlotArguments local_2878;
  FSlotArguments local_2790;
  FArguments local_26a8;
  FArguments local_24a0;
  FArguments local_2298;
  FArguments local_2090;
  FArguments local_1cd8;
  FArguments local_18f8;
  FArguments local_1518;
  FArguments local_1038;
  FArguments local_af8;
  FArguments local_5b8;
  undefined8 uStack_48;
  
  uStack_48 = 0x146ba156f;
  pTVar66 = (param_1->_ParentWindow).WeakReferenceCount.ReferenceController;
  bVar21 = false;
  bVar13 = false;
  bVar24 = false;
  pSVar5 = (param_1->_ParentWindow).Object;
  uVar14 = (ulonglong)local_res8 >> 8;
  if (pTVar66 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar66->WeakReferenceCount = (atomic<int>)((int)pTVar66->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_3670 = *(undefined4 *)&(this->ParentWindow).Object;
  uStack_366c = *(undefined4 *)((longlong)&(this->ParentWindow).Object + 4);
  pFVar11 = &(this->ParentWindow).WeakReferenceCount;
  uStack_3668 = *(undefined4 *)&pFVar11->ReferenceController;
  uStack_3664 = *(undefined4 *)
                 ((longlong)&(this->ParentWindow).WeakReferenceCount.ReferenceController + 4);
  pTVar8 = pFVar11->ReferenceController;
  (this->ParentWindow).Object = pSVar5;
  (this->ParentWindow).WeakReferenceCount.ReferenceController = pTVar66;
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
  pFVar25 = SBox::FArguments::FArguments(&local_34c0);
  FLLMScope::FLLMScope(&local_3f50,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3cf8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3cf0,&local_3cf8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_37a0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
             ,0x75,local_res10);
  FMemScope::~FMemScope(&local_3cf0);
  FLLMScope::~FLLMScope(&local_3f50);
  pTVar26 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_37a0,&local_3680,pFVar25);
  local_3df8[0].ReferenceController = (pTVar26->SharedReferenceCount).ReferenceController;
  local_3e00 = pTVar26->Object;
  if (local_3df8[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3df8[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3df8[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = &this->WindowContents;
  if (pTVar3 != (TSharedPtr<SBox,1> *)&local_3e00) {
    pTVar3->Object = local_3e00;
    local_3e00 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WindowContents).SharedReferenceCount,local_3df8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3df8[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3680.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37a0._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_34c0._MaxAspectRatio.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_34c0._MinAspectRatio.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_34c0._MaxDesiredHeight.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_34c0._MaxDesiredWidth.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_34c0._MinDesiredHeight.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_34c0._MinDesiredWidth.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_34c0._HeightOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_34c0._WidthOverride.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_34c0._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_34c0._Padding.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_34c0);
  pFVar27 = SVerticalBox::FArguments::FArguments(&local_3180);
  FLLMScope::FLLMScope(&local_3f4c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3ce8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3c90,&local_3ce8,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_3788,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
             ,0x76,local_res18);
  FMemScope::~FMemScope(&local_3c90);
  FLLMScope::~FLLMScope(&local_3f4c);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_3788,&local_3dd8,pFVar27);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3788._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3180._Slots.AllocatorInstance.Data,local_3180._Slots.ArrayNum);
  if ((FSlotArguments *)local_3180._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_3180._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3180);
  pTVar28 = FTranslationPickerSettingsManager::Get();
  if ((pTVar28->Object == (FTranslationPickerSettingsManager *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pUVar6 = pTVar28->Object->TranslationPickerSettingsObject;
  local_3c68 = pUVar6;
  pIVar29 = ILocalizationServiceModule::Get();
  plVar30 = (longlong *)(**(code **)((longlong)*pIVar29 + 0x50))(pIVar29);
  cVar20 = (**(code **)(*plVar30 + 0x30))(plVar30);
  pwVar31 = FCommandLine::Get();
  bVar19 = FParse::Param(pwVar31,L"AllowTranslationPickerSubmissionsToOneSky");
  if (!bVar19) {
    local_res8._0_1_ = '\0';
    pUVar6->bSubmitTranslationPickerChangesToLocalizationService = false;
    cVar20 = (char)local_res8;
  }
  local_res8 = (TReferenceControllerBase<1> *)(CONCAT71((int7)uVar14,cVar20) & 0xffffffff000000ff);
  if ((pTVar3->Object == (SBox *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_3d28 = pTVar3->Object;
  pFVar32 = SBorder::FArguments::FArguments(&local_18f8);
  local_3e08 = pFVar32;
  pFVar33 = ::FName::FName(&local_38c0,"ToolPanel.GroupBorder");
  FVar35 = *pFVar33;
  pIVar34 = FAppStyle::Get();
  local_3ea8 = (FSlateBrush *)(**(code **)((longlong)*pIVar34 + 0x50))(pIVar34,FVar35,0,0);
  local_3ea0 = 1;
  local_3e88 = 0;
  local_3e98 = (undefined1  [8])0x0;
  FStack_3e90.Data = (FScriptContainerElement *)0x0;
  (pFVar32->_BorderImage).Value = local_3ea8;
  (pFVar32->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3e98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e98,
             (FWriteAccessScope *)&local_3a90);
  if (((int)local_3e88 != 0) && (FStack_3e90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3e90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3e90,0,0,0x10);
    local_3e88 = local_3e88 & 0xffffffff00000000;
  }
  if (local_3a90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a90.Accessor,&local_3a90);
  }
  if (FStack_3e90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3e90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3e98);
  local_3f58 = (SWidget *)SVerticalBox::FArguments::FArguments(&local_2298);
  FVar35 = (FName)SVerticalBox::Slot(&local_2790);
  local_3f08[0] = FVar35;
  pFVar36 = (FSizeParam *)FAuto::FAuto((FAuto *)local_3550);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)((longlong)FVar35 + 0x58),pFVar36);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3520)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_3550 + 0x10));
  this_00 = SSearchBox::FArguments::FArguments(&local_2090);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_3878,L"TranslationPicker",L"FilterBox_Hint",L"Filter text entries");
  FText::FText(&local_3e68,pFVar37);
  local_3e58 = true;
  local_3e40 = 0;
  local_3e50 = (undefined1  [8])0x0;
  FStack_3e48.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(this_00->_HintText).Value,&local_3e68);
  (this_00->_HintText).bIsSet = local_3e58;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_00->_HintText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3e50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e50,
             (FWriteAccessScope *)&local_3a78);
  if (((int)local_3e40 != 0) && (FStack_3e48.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3e48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3e48,0,0,0x10);
    local_3e40 = local_3e40 & 0xffffffff00000000;
  }
  if (local_3a78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a78.Accessor,&local_3a78);
  }
  if (FStack_3e48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3e48.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3e50);
  if (local_3e68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3e68.TextData.Reference + 0x10))();
  }
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_3888,L"TranslationPicker",L"FilterBox_ToolTip",
                       L"Type here to filter the list of text entries.");
  FText::FText(&local_3e38,pFVar37);
  local_3e28 = 1;
  local_3e10 = 0;
  local_3e20 = (undefined1  [8])0x0;
  FStack_3e18.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)this_00,&local_3e38);
  *(undefined1 *)&this_00->_padding_ = local_3e28;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3e20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3e20,
             (FWriteAccessScope *)&local_3a60);
  if (((int)local_3e10 != 0) && (FStack_3e18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3e18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3e18,0,0,0x10);
    local_3e10 = local_3e10 & 0xffffffff00000000;
  }
  if (local_3a60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a60.Accessor,&local_3a60);
  }
  if (FStack_3e18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3e18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3e20);
  if (local_3e38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3e38.TextData.Reference + 0x10))();
  }
  local_3f30 = 0x100;
  local_3f18 = 0;
  local_3f28 = (undefined1  [8])0x0;
  FStack_3f20.Data = (FScriptContainerElement *)0x0;
  (this_00->_SelectAllTextWhenFocused).Value = false;
  (this_00->_SelectAllTextWhenFocused).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this_00->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3f28,
             (FWriteAccessScope *)&local_3a48);
  if (((int)local_3f18 != 0) && (FStack_3f20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3f20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3f20,0,0,0x10);
    local_3f18 = local_3f18 & 0xffffffff00000000;
  }
  if (local_3a48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a48.Accessor,&local_3a48);
  }
  if (FStack_3f20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3f20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->_OnTextChanged,
             (FWriteAccessScope *)&local_39d0);
  local_39b8 = &(this_00->_OnTextChanged).field_0x8;
  puVar38 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_39b8);
  pTVar66 = local_res8;
  if (puVar38 != (undefined8 *)0x0) {
    uStack_3f5c = local_3dd8.SharedReferenceCount.ReferenceController._4_4_;
    local_3f68 = (FArguments *)FilterBox_OnTextChanged;
    uStack_3f60 = 0;
    pTVar39 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3690);
    pTVar66 = (pTVar39->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar39->Object;
    if (pTVar66 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar66->SharedReferenceCount = (atomic<int>)((int)pTVar66->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar66->SharedReferenceCount = (atomic<int>)((int)pTVar66->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar38 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar40 = FDelegateHandle::GenerateNewID();
    puVar38[2] = uVar40;
    *puVar38 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTranslationPickerEditWindow___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar38[3] = pSVar7;
    puVar38[4] = pTVar66;
    if (pTVar66 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar66->WeakReferenceCount = (atomic<int>)((int)pTVar66->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar21 = true;
    bVar13 = true;
    bVar24 = true;
    puVar38[5] = local_3f68;
    puVar38[6] = CONCAT44(uStack_3f5c,uStack_3f60);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar66);
  }
  if (bVar21) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar66);
  }
  if (bVar24) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3690.SharedReferenceCount.ReferenceController);
  }
  bVar21 = false;
  bVar13 = false;
  bVar24 = false;
  if (local_39d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_39d0.Accessor,&local_39d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->_OnTextCommitted,
             (FWriteAccessScope *)&local_39f0);
  local_39d8 = &(this_00->_OnTextCommitted).field_0x8;
  puVar38 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_39d8);
  pTVar66 = local_res8;
  if (puVar38 != (undefined8 *)0x0) {
    uStack_3f60 = 0;
    uStack_3f5c = local_3dd8.SharedReferenceCount.ReferenceController._4_4_;
    local_3f68 = (FArguments *)FilterBox_OnTextCommitted;
    pTVar39 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_36a0);
    pTVar66 = (pTVar39->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar39->Object;
    if (pTVar66 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar66->SharedReferenceCount = (atomic<int>)((int)pTVar66->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar66->SharedReferenceCount = (atomic<int>)((int)pTVar66->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar24 = true;
    bVar21 = true;
    bVar13 = true;
    *puVar38 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar40 = FDelegateHandle::GenerateNewID();
    puVar38[2] = uVar40;
    *puVar38 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTranslationPickerEditWindow___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar38[3] = pSVar7;
    puVar38[4] = pTVar66;
    if (pTVar66 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar66->WeakReferenceCount = (atomic<int>)((int)pTVar66->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar38[5] = local_3f68;
    puVar38[6] = CONCAT44(uStack_3f5c,uStack_3f60);
    FVar35 = local_3f08[0];
  }
  if (bVar24) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar66);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar66);
  }
  if (bVar21) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_36a0.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar24 = false;
  if (local_39f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_39f0.Accessor,&local_39f0);
  }
  FLLMScope::FLLMScope(&local_3f48,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3f08[0] = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3c88,local_3f08,true);
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>
            (&local_3ee8,"SSearchBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
             ,0x8e,local_res20);
  FMemScope::~FMemScope(&local_3c88);
  FLLMScope::~FLLMScope(&local_3f48);
  if (local_3ee8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3ee8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3ee8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_36b0 = (this->FilterBox).Object;
  pTStack_36a8 = (this->FilterBox).SharedReferenceCount.ReferenceController;
  (this->FilterBox).Object = local_3ee8._Widget.Object;
  (this->FilterBox).SharedReferenceCount.ReferenceController =
       local_3ee8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_36a8);
  pSVar16 = local_3ee8._Widget.Object;
  if ((local_3ee8._Widget.Object == (SSearchBox *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_3ee8._Widget.Object,(FSlateBaseNamedArgs *)this_00);
  SSearchBox::Construct(local_3ee8._Widget.Object,this_00);
  if ((local_3ee8._Widget.Object == (SSearchBox *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (((local_3ee8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar22 = (**(code **)((local_3ee8._Widget.Object)->_padding_ + 0x228))
                       (local_3ee8._Widget.Object);
    bVar23 = 0;
    if (cVar22 == '\0') goto LAB_146ba20a1;
  }
  bVar23 = 0x20;
LAB_146ba20a1:
  *(byte *)&(local_3ee8._Widget.Object)->_padding_ =
       (byte)(local_3ee8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_3ee8._Widget.Object)->_padding_ =
       (byte)(local_3ee8._Widget.Object)->_padding_ | bVar23;
  if ((local_3ee8._Widget.Object == (SSearchBox *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pbVar2 = (byte *)((longlong)&(local_3ee8._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_3ee8._Widget.Object == (SSearchBox *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar17.ReferenceController = local_3ee8._Widget.SharedReferenceCount.ReferenceController;
  local_3ee8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3ee8._Widget.Object = (SSearchBox *)0x0;
  if ((pSVar16 == (SSearchBox *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_3ed0 = pSVar16;
  local_3ec8.ReferenceController = FVar17.ReferenceController;
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
  if ((SSearchBox **)((longlong)FVar35 + 8) != &local_3ed0) {
    *(SSearchBox **)((longlong)FVar35 + 8) = pSVar16;
    local_3ed0 = (SSearchBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)FVar35 + 0x10),&local_3ec8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3ec8.ReferenceController);
  local_3eb0 = SVerticalBox::FArguments::operator+
                         ((FArguments *)local_3f58,(FSlotArguments *)FVar35);
  pFVar41 = SVerticalBox::Slot(&local_2878);
  local_3bb8.Value = 1.0;
  local_3bb8.bIsSet = true;
  local_3bb8.Getter._16_8_ = 0;
  local_3bb8.Getter._0_8_ = 0;
  local_3bb8.Getter._8_8_ = 0;
  pFVar41 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar41,&local_3bb8);
  pFVar42 = SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::FArguments::FArguments
                      (&local_1518);
  pFVar42 = SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::FArguments::ListItemsSource
                      (pFVar42,&this->FilteredItems);
  local_3f10 = pFVar42;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar42->_OnGenerateRow,
             (FWriteAccessScope *)&local_3a10);
  local_39f8 = &(pFVar42->_OnGenerateRow).field_0x8;
  puVar38 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_39f8);
  if (puVar38 != (undefined8 *)0x0) {
    uStack_3f5c = local_3dd8.SharedReferenceCount.ReferenceController._4_4_;
    local_3f68 = (FArguments *)TextListView_OnGenerateRow;
    uStack_3f60 = 0;
    pTVar39 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_36c0);
    local_res8 = (pTVar39->SharedReferenceCount).ReferenceController;
    local_3f58 = pTVar39->Object;
    if (local_res8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res8->SharedReferenceCount = (atomic<int>)((int)local_res8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      local_res8->SharedReferenceCount = (atomic<int>)((int)local_res8->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar24 = true;
    bVar13 = true;
    *puVar38 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFTranslationPickerTextItem___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar40 = FDelegateHandle::GenerateNewID();
    puVar38[2] = uVar40;
    *puVar38 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSTranslationPickerEditWindow___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFTranslationPickerTextItem___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar38[3] = local_3f58;
    puVar38[4] = local_res8;
    if (local_res8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res8->WeakReferenceCount = (atomic<int>)((int)local_res8->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar38[5] = local_3f68;
    puVar38[6] = CONCAT44(uStack_3f5c,uStack_3f60);
  }
  if (bVar24) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res8);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_36c0.SharedReferenceCount.ReferenceController);
  }
  if (local_3a10.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a10.Accessor,&local_3a10);
  }
  FLLMScope::FLLMScope(&local_3f44,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3c40 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3c80,&local_3c40,true);
  TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_3b98,"STextListView",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
             ,0x99,&local_3f78);
  FMemScope::~FMemScope(&local_3c80);
  FLLMScope::~FLLMScope(&local_3f44);
  if (local_3b98._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3b98._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3b98._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_36d8 = (this->TextListView).Object;
  pTStack_36d0 = (this->TextListView).SharedReferenceCount.ReferenceController;
  (this->TextListView).Object = local_3b98._Widget.Object;
  (this->TextListView).SharedReferenceCount.ReferenceController =
       local_3b98._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_36d0);
  pTVar43 = TSlateDecl<SListView<TSharedPtr<FTranslationPickerTextItem,1>_>,RequiredArgs::T0RequiredArgs>
            ::operator<<=(&local_3b98,&local_3898,local_3f10);
  pTVar66 = (pTVar43->SharedReferenceCount).ReferenceController;
  local_3ec0 = pTVar43->Object;
  if (pTVar66 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar66->SharedReferenceCount = (atomic<int>)((int)pTVar66->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar66->SharedReferenceCount = (atomic<int>)((int)pTVar66->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3eb8.ReferenceController = pTVar66;
  if ((SListView<TSharedPtr<FTranslationPickerTextItem,1>_> **)&pFVar41->field_0x8 != &local_3ec0) {
    *(SListView<TSharedPtr<FTranslationPickerTextItem,1>_> **)&pFVar41->field_0x8 = local_3ec0;
    local_3ec0 = (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar41->field_0x10,&local_3eb8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3eb8.ReferenceController);
  local_3f68 = SVerticalBox::FArguments::operator+(local_3eb0,pFVar41);
  pFVar41 = SVerticalBox::Slot(&local_2960);
  pFVar36 = (FSizeParam *)FAuto::FAuto((FAuto *)local_3508);
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar41->field_0x58,pFVar36);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_34d8)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_3508 + 0x10));
  puVar65 = &pFVar41->field_0x48;
  if (local_3d30 != (undefined4 *)puVar65) {
    *(undefined4 *)puVar65 = 0;
    pFVar41->field_0x4c = 1;
  }
  this_05 = (FSlotArgumentsMixin *)&pFVar41->field_0x18;
  this_06 = (FSlotArgumentsMixin *)&DAT_00000018;
  if (puVar65 == (undefined1 *)0x0) {
    this_05 = (FSlotArgumentsMixin *)&DAT_00000018;
  }
  local_3f58 = (SWidget *)
               TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         (this_05,0.0);
  local_3f10 = (FArguments *)SVerticalBox::FArguments::FArguments(&local_24a0);
  pFVar41 = SVerticalBox::Slot(&local_2a48);
  pFVar41 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar41);
  puVar65 = &pFVar41->field_0x48;
  if (local_3d18 != (undefined4 *)puVar65) {
    *(undefined4 *)puVar65 = 1;
    pFVar41->field_0x4c = 1;
  }
  if (puVar65 != (undefined1 *)0x0) {
    this_06 = (FSlotArgumentsMixin *)&pFVar41->field_0x18;
  }
  local_3eb0 = (FArguments *)
               TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         (this_06,0.0);
  pFVar44 = SHorizontalBox::FArguments::FArguments(&local_26a8);
  local_3d57 = 1;
  local_3d58 = (uchar)EVisibility::Collapsed;
  if (cVar20 != '\0') {
    local_3d58 = (uchar)EVisibility::Visible;
  }
  local_3d50._16_8_ = 0;
  local_3d50._0_8_ = 0;
  local_3d50._8_8_ = 0;
  *(uchar *)&pFVar44->_padding_ = local_3d58;
  *(undefined1 *)((longlong)&pFVar44->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar44->_padding_,&local_3d50);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3d50)
  ;
  pFVar45 = SHorizontalBox::Slot(&local_2b30);
  uVar15 = _UNK_15076be98;
  local_3ab0 = 1;
  local_3aa8._16_8_ = 0;
  local_3ac0 = ___xmm_40400000404000004040000040400000;
  uStack_3ab8 = _UNK_15076be98;
  local_3aa8._0_8_ = 0;
  local_3aa8._8_8_ = 0;
  *(undefined8 *)&pFVar45->field_0x18 = ___xmm_40400000404000004040000040400000;
  *(undefined8 *)&pFVar45->field_0x20 = uVar15;
  pFVar45->field_0x28 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar45->field_0x30,&local_3aa8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3aa8)
  ;
  if (local_3d10 != (undefined4 *)&pFVar45->field_0x50) {
    *(undefined4 *)&pFVar45->field_0x50 = 2;
    pFVar45->field_0x54 = 1;
  }
  pFVar47 = (FSlotArguments *)0x0;
  if (pFVar45 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar47 = pFVar45;
  }
  pFVar45 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar47);
  this_01 = SCheckBox::FArguments::FArguments(&local_1cd8);
  this_01->_HAlign = HAlign_Center;
  local_3d77 = 1;
  local_3d70._0_8_ = 0;
  local_3d70._8_8_ = 0;
  local_3d78 = local_3c68->bSubmitTranslationPickerChangesToLocalizationService != false;
  local_3d70._16_8_ = 0;
  (this_01->_IsChecked).Value = local_3d78;
  (this_01->_IsChecked).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_01->_IsChecked).Getter,&local_3d70)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3d70)
  ;
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_38a8,L"TranslationPicker",
                       L"SubmitTranslationPickerChangesToLocalizationServiceToolTip",
                       L"Submit changes to localization service");
  FText::FText(&local_3c38,pFVar37);
  local_3c28 = 1;
  local_3c20._16_8_ = 0;
  local_3c20._0_8_ = 0;
  local_3c20._8_8_ = 0;
  FText::operator=((FText *)this_01,&local_3c38);
  *(undefined1 *)&this_01->_padding_ = local_3c28;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_01->_padding_,&local_3c20);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3c20)
  ;
  if (local_3c38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3c38.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this_01->_OnCheckStateChanged,(FWriteAccessScope *)&local_3a30);
  local_3a18 = &(this_01->_OnCheckStateChanged).field_0x8;
  puVar38 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_3a18);
  if (puVar38 != (undefined8 *)0x0) {
    *puVar38 = &
               ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar40 = FDelegateHandle::GenerateNewID();
    puVar38[2] = uVar40;
    *puVar38 = &TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`STranslationPickerEditWindow::Construct'::`2'::<lambda_1>_>
                ::_vftable_;
  }
  if (local_3a30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a30.Accessor,&local_3a30);
  }
  FLLMScope::FLLMScope(&local_3f40,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3c60 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3c58,&local_3c60,true);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
            (&local_3758,"SCheckBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
             ,0xb2,&local_3f77);
  FMemScope::~FMemScope(&local_3c58);
  FLLMScope::~FLLMScope(&local_3f40);
  pTVar46 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3758,&local_37c0,this_01);
  local_3c78.Object = (SWidget *)pTVar46->Object;
  local_3c78.SharedReferenceCount.ReferenceController =
       (pTVar46->SharedReferenceCount).ReferenceController;
  if (local_3c78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3c78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3c78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar45 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar45,&local_3c78);
  pFVar44 = SHorizontalBox::FArguments::operator+(pFVar44,pFVar45);
  pFVar47 = SHorizontalBox::Slot(&local_2c18);
  uVar15 = _UNK_15140dc98;
  local_3b70 = 1;
  local_3b80 = ___xmm_00000000404000000000000000000000;
  uStack_3b78 = _UNK_15140dc98;
  local_3b68._0_8_ = 0;
  local_3b68._8_8_ = 0;
  local_3b68._16_8_ = 0;
  *(undefined8 *)&pFVar47->field_0x18 = ___xmm_00000000404000000000000000000000;
  *(undefined8 *)&pFVar47->field_0x20 = uVar15;
  pFVar47->field_0x28 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar47->field_0x30,&local_3b68);
  pFVar45 = (FSlotArguments *)0x0;
  if (&pFVar47->field_0x18 != (undefined1 *)0x0) {
    pFVar45 = pFVar47;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3b68)
  ;
  if (local_3d08 != (undefined4 *)&pFVar45->field_0x50) {
    *(undefined4 *)&pFVar45->field_0x50 = 2;
    pFVar45->field_0x54 = 1;
  }
  pFVar47 = (FSlotArguments *)0x0;
  if (pFVar45 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar47 = pFVar45;
  }
  pFVar45 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar47);
  pFVar48 = STextBlock::FArguments::FArguments(&local_5b8);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_37d0,L"TranslationPicker",
                       L"SubmitTranslationPickerChangesToLocalizationService",
                       L"Save to Localization Service");
  FText::FText(&local_3980.Value,pFVar37);
  local_3980.bIsSet = true;
  local_3980.Getter._16_8_ = 0;
  local_3980.Getter._0_8_ = 0;
  local_3980.Getter._8_8_ = 0;
  pFVar48 = STextBlock::FArguments::Text(pFVar48,&local_3980);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_37e0,L"TranslationPicker",
                       L"SubmitTranslationPickerChangesToLocalizationServiceToolTip",
                       L"Submit changes to localization service");
  FText::FText(&local_3c08,pFVar37);
  local_3bf8 = 1;
  local_3bf0._16_8_ = 0;
  local_3bf0._0_8_ = 0;
  local_3bf0._8_8_ = 0;
  FText::operator=((FText *)pFVar48,&local_3c08);
  *(undefined1 *)&pFVar48->_padding_ = local_3bf8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar48->_padding_,&local_3bf0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3bf0)
  ;
  if (local_3c08.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3c08.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_3f3c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3c50 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3c48,&local_3c50,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_3770,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
             ,0xc4,&local_3f76);
  FMemScope::~FMemScope(&local_3c48);
  FLLMScope::~FLLMScope(&local_3f3c);
  pTVar49 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3770,&local_37b0,pFVar48);
  local_3ca0.Object = (SWidget *)pTVar49->Object;
  local_3ca0.SharedReferenceCount.ReferenceController =
       (pTVar49->SharedReferenceCount).ReferenceController;
  if (local_3ca0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3ca0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3ca0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar45 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar45,&local_3ca0);
  pFVar44 = SHorizontalBox::FArguments::operator+(pFVar44,pFVar45);
  this_02 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3658,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                       ,0xaa,&local_3f75);
  pTVar50 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_3828,pFVar44);
  local_3cb0.Object = (SWidget *)pTVar50->Object;
  local_3cb0.SharedReferenceCount.ReferenceController =
       (pTVar50->SharedReferenceCount).ReferenceController;
  if (local_3cb0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3cb0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3cb0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar41 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_3eb0,&local_3cb0);
  pFVar27 = SVerticalBox::FArguments::operator+((FArguments *)local_3f10,pFVar41);
  pFVar41 = SVerticalBox::Slot(&local_2d00);
  pFVar41 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar41);
  puVar65 = &pFVar41->field_0x48;
  if (local_3d00 != (undefined4 *)puVar65) {
    *(undefined4 *)puVar65 = 3;
    pFVar41->field_0x4c = 1;
  }
  uVar15 = _UNK_15140dca8;
  if (puVar65 == (undefined1 *)0x0) {
    pFVar41 = (FSlotArguments *)0x0;
  }
  local_3ae0 = 1;
  local_3ad8._16_8_ = 0;
  local_3af0 = ___xmm_40a000000000000040a0000000000000;
  uStack_3ae8 = _UNK_15140dca8;
  local_3ad8._0_8_ = 0;
  local_3ad8._8_8_ = 0;
  *(undefined8 *)&pFVar41->field_0x18 = ___xmm_40a000000000000040a0000000000000;
  *(undefined8 *)&pFVar41->field_0x20 = uVar15;
  pFVar41->field_0x28 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar41->field_0x30,&local_3ad8);
  if (&pFVar41->field_0x18 == (undefined1 *)0x0) {
    pFVar41 = (FSlotArguments *)0x0;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3ad8)
  ;
  pFVar51 = SUniformGridPanel::FArguments::FArguments(&local_2f78);
  pFVar33 = ::FName::FName(&local_38b8,"StandardDialog.SlotPadding");
  pFVar52 = FAppStyle::GetMargin(*pFVar33,(char *)0x0);
  local_3b50._0_4_ = pFVar52->Left;
  local_3b50._4_4_ = pFVar52->Top;
  uStack_3b48._0_4_ = pFVar52->Right;
  uStack_3b48._4_4_ = pFVar52->Bottom;
  local_3b40 = 1;
  local_3b38._16_8_ = 0;
  local_3b38._0_8_ = 0;
  local_3b38._8_8_ = 0;
  (pFVar51->_SlotPadding).Value.Left = (float)(undefined4)local_3b50;
  (pFVar51->_SlotPadding).Value.Top = (float)local_3b50._4_4_;
  (pFVar51->_SlotPadding).Value.Right = (float)(undefined4)uStack_3b48;
  (pFVar51->_SlotPadding).Value.Bottom = (float)uStack_3b48._4_4_;
  (pFVar51->_SlotPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar51->_SlotPadding).Getter,
             &local_3b38);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3b38)
  ;
  pFVar33 = ::FName::FName(&local_38b0,"StandardDialog.MinDesiredSlotWidth");
  local_3d98 = FAppStyle::GetFloat(*pFVar33,(char *)0x0);
  local_3d94 = 1;
  local_3d90._16_8_ = 0;
  local_3d90._0_8_ = 0;
  local_3d90._8_8_ = 0;
  (pFVar51->_MinDesiredSlotWidth).Value = local_3d98;
  (pFVar51->_MinDesiredSlotWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar51->_MinDesiredSlotWidth).Getter,
             &local_3d90);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3d90)
  ;
  pFVar33 = ::FName::FName(&local_3818,"StandardDialog.MinDesiredSlotHeight");
  local_3db8 = FAppStyle::GetFloat(*pFVar33,(char *)0x0);
  local_3db4 = 1;
  local_3db0._16_8_ = 0;
  local_3db0._0_8_ = 0;
  local_3db0._8_8_ = 0;
  (pFVar51->_MinDesiredSlotHeight).Value = local_3db8;
  (pFVar51->_MinDesiredSlotHeight).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar51->_MinDesiredSlotHeight).Getter,
             &local_3db0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_3db0)
  ;
  pFVar53 = SUniformGridPanel::Slot((FSlotArguments *)local_35a0,0,0);
  pFVar54 = SButton::FArguments::FArguments(&local_af8);
  pFVar54->_HAlign = HAlign_Center;
  pFVar54->_VAlign = VAlign_Center;
  pFVar33 = ::FName::FName(&local_3660,"StandardDialog.ContentPadding");
  pFVar52 = FAppStyle::GetMargin(*pFVar33,(char *)0x0);
  local_39b0.Value.Left = pFVar52->Left;
  local_39b0.Value.Top = pFVar52->Top;
  local_39b0.Value.Right = pFVar52->Right;
  local_39b0.Value.Bottom = pFVar52->Bottom;
  local_39b0.bIsSet = true;
  local_39b0.Getter._16_8_ = 0;
  local_39b0.Getter._0_8_ = 0;
  local_39b0.Getter._8_8_ = 0;
  pFVar54 = SButton::FArguments::ContentPadding(pFVar54,&local_39b0);
  local_3ef8 = (FName)SaveAllAndExit;
  uStack_3ef0 = 0;
  lStack_36e0 = (ulonglong)uStack_3eec << 0x20;
  local_36e8 = SaveAllAndExit;
  pFVar54 = SButton::FArguments::OnClicked<STranslationPickerEditWindow>
                      (pFVar54,this,(pmf_7e1130fa *)&local_36e8);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_3810,L"TranslationPicker",L"SaveAllAndClose",L"Save All and Close");
  FText::FText(&local_38f0.Value,pFVar37);
  local_38f0.bIsSet = true;
  local_38f0.Getter._16_8_ = 0;
  local_38f0.Getter._0_8_ = 0;
  local_38f0.Getter._8_8_ = 0;
  pFVar54 = SButton::FArguments::Text(pFVar54,&local_38f0);
  local_3bd8.Value = (EVisibility)EVisibility::Hidden.Value.Value;
  local_3bd8.bIsSet = true;
  local_3bd8.Getter._16_8_ = 0;
  local_3bd8.Getter._0_8_ = 0;
  local_3bd8.Getter._8_8_ = 0;
  pFVar54 = TSlateBaseNamedArgs<SButton>::Visibility
                      ((TSlateBaseNamedArgs<SButton> *)pFVar54,&local_3bd8);
  pTVar55 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_3640,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                       ,0xd6,&local_3f74);
  pTVar56 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar55,&local_3800,pFVar54);
  local_3cc0.Object = (SWidget *)pTVar56->Object;
  local_3cc0.SharedReferenceCount.ReferenceController =
       (pTVar56->SharedReferenceCount).ReferenceController;
  if (local_3cc0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3cc0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3cc0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar53 = TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar53,&local_3cc0);
  pFVar51 = SUniformGridPanel::FArguments::operator+(pFVar51,pFVar53);
  pFVar53 = SUniformGridPanel::Slot((FSlotArguments *)local_35c8,1,0);
  pFVar54 = SButton::FArguments::FArguments(&local_1038);
  pFVar54->_HAlign = HAlign_Center;
  pFVar54->_VAlign = VAlign_Center;
  pFVar33 = ::FName::FName(&local_36c8,"StandardDialog.ContentPadding");
  pFVar52 = FAppStyle::GetMargin(*pFVar33,(char *)0x0);
  local_3920.Value.Left = pFVar52->Left;
  local_3920.Value.Top = pFVar52->Top;
  local_3920.Value.Right = pFVar52->Right;
  local_3920.Value.Bottom = pFVar52->Bottom;
  local_3920.bIsSet = true;
  local_3920.Getter._16_8_ = 0;
  local_3920.Getter._0_8_ = 0;
  local_3920.Getter._8_8_ = 0;
  pFVar54 = SButton::FArguments::ContentPadding(pFVar54,&local_3920);
  local_3ef8 = (FName)Exit;
  uStack_3ef0 = 0;
  lStack_36f0 = (ulonglong)uStack_3eec << 0x20;
  local_36f8 = Exit;
  pFVar54 = SButton::FArguments::OnClicked<STranslationPickerEditWindow>
                      (pFVar54,this,(pmf_7e1130fa *)&local_36f8);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_37f0,L"TranslationPicker",L"CancelButton",L"Cancel");
  FText::FText(&local_3950.Value,pFVar37);
  local_3950.bIsSet = true;
  local_3950.Getter._16_8_ = 0;
  local_3950.Getter._0_8_ = 0;
  local_3950.Getter._8_8_ = 0;
  pFVar54 = SButton::FArguments::Text(pFVar54,&local_3950);
  pTVar55 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_3628,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                       ,0xe5,&local_3f73);
  pTVar56 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar55,&local_3740,pFVar54);
  local_3cd0.Object = (SWidget *)pTVar56->Object;
  local_3cd0.SharedReferenceCount.ReferenceController =
       (pTVar56->SharedReferenceCount).ReferenceController;
  if (local_3cd0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3cd0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3cd0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar53 = TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar53,&local_3cd0);
  pFVar51 = SUniformGridPanel::FArguments::operator+(pFVar51,pFVar53);
  FLLMScope::FLLMScope(local_3f38,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_3ef8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3d38,&local_3ef8,true);
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>
            (&local_3e80,"SUniformGridPanel",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
             ,0xcf,&local_3f72);
  FMemScope::~FMemScope(&local_3d38);
  FLLMScope::~FLLMScope(local_3f38);
  pSVar57 = TSharedPtr<SUniformGridPanel,1>::operator->(&local_3e80._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar57,(FSlateBaseNamedArgs *)pFVar51);
  pSVar57 = local_3e80._Widget.Object;
  SUniformGridPanel::Construct(local_3e80._Widget.Object,pFVar51);
  pSVar58 = TSharedPtr<SUniformGridPanel,1>::operator->(&local_3e80._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar58);
  pSVar58 = TSharedPtr<SUniformGridPanel,1>::operator->(&local_3e80._Widget);
  pbVar2 = (byte *)((longlong)&pSVar58->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_3e80._Widget.Object == (SUniformGridPanel *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar24)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar18.ReferenceController = local_3e80._Widget.SharedReferenceCount.ReferenceController;
  local_3e80._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3e80._Widget.Object = (SUniformGridPanel *)0x0;
  if ((pSVar57 == (SUniformGridPanel *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar24)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_3b20.Object = (SWidget *)pSVar57;
  local_3b20.SharedReferenceCount.ReferenceController = FVar18.ReferenceController;
  if (FVar18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar18.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar18.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar41 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar41,&local_3b20);
  pFVar27 = SVerticalBox::FArguments::operator+(pFVar27,pFVar41);
  pTVar59 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3610,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                       ,0xa3,&local_3f71);
  pTVar60 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar59,&local_3730,pFVar27);
  pTVar8 = (pTVar60->SharedReferenceCount).ReferenceController;
  local_3b10.Object = (SWidget *)pTVar60->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3b10.SharedReferenceCount.ReferenceController = pTVar8;
  pFVar41 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_3f58,&local_3b10);
  pFVar27 = SVerticalBox::FArguments::operator+(local_3f68,pFVar41);
  pTVar59 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_35f8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                       ,0x89,&local_3f70);
  pTVar60 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar59,&local_3720,pFVar27);
  pTVar9 = (pTVar60->SharedReferenceCount).ReferenceController;
  local_3dc8 = pTVar60->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = (local_3e08->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_3e08->_Content).Widget.Object = (SWidget *)local_3dc8;
  (local_3e08->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar9;
  pTStack_3dc0 = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  this_03 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_35e0,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                       ,0x86,local_3f6f);
  pTVar61 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_3710,local_3e08);
  local_3ce0.Object = (SWidget *)pTVar61->Object;
  local_3ce0.SharedReferenceCount.ReferenceController =
       (pTVar61->SharedReferenceCount).ReferenceController;
  if (local_3ce0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3ce0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3ce0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SBox::SetContent(local_3d28,&local_3ce0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3ce0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3710.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_35e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3720.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_35f8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3730.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3610._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar18.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar18.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3cd0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3740.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3628._Widget.SharedReferenceCount.ReferenceController);
  if (local_37f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_37f0.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_1038);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_35b8);
  if (local_35c8[0] != (undefined8 *)0x0) {
    (**(code **)*local_35c8[0])(local_35c8[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3cc0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3800.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3640._Widget.SharedReferenceCount.ReferenceController);
  if (local_3810.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3810.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_af8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3590);
  if (local_35a0[0] != (undefined8 *)0x0) {
    (**(code **)*local_35a0[0])(local_35a0[0],1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2f78._MinDesiredSlotHeight.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2f78._MinDesiredSlotWidth.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2f78._SlotPadding.Getter);
  TArray<SUniformGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SUniformGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_2f78._Slots);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2f78);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2d00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3cb0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3828.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3658._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3ca0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3770._Widget.SharedReferenceCount.ReferenceController);
  if (local_37e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_37e0.TextData.Reference + 0x10))();
  }
  if (local_37d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_37d0.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5b8);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2c18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3758._Widget.SharedReferenceCount.ReferenceController);
  if (local_38a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38a8.TextData.Reference + 0x10))();
  }
  SCheckBox::FArguments::~FArguments(&local_1cd8);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2b30);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_26a8._Slots);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_26a8);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2a48);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_24a0._Slots);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_24a0);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2960);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar66);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3898.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b98._Widget.SharedReferenceCount.ReferenceController);
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::FArguments::~FArguments(&local_1518);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2878);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3ee8._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_3888);
  FText::~FText(&local_3878);
  SSearchBox::FArguments::~FArguments(&local_2090);
  SBoxPanel::TSlot<SVerticalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)&local_2790);
  SVerticalBox::FArguments::~FArguments(&local_2298);
  SBorder::FArguments::~FArguments(&local_18f8);
  pTVar26 = TSharedPtr<SBox,1>::ToSharedRef(&this->WindowContents,&local_3868);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_3b00,pTVar26);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_3b00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3b00.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3868.SharedReferenceCount.ReferenceController);
  local_3d20 = this;
  pTVar62 = MakeShared<FTranslationPickerEditInputProcessor,1,STranslationPickerEditWindow_*>
                      (&local_3858,&local_3d20);
  TSharedPtr<FTranslationPickerEditInputProcessor,1>::
  TSharedPtr<FTranslationPickerEditInputProcessor,1><FTranslationPickerEditInputProcessor>
            (&local_3de8,pTVar62);
  TSharedPtr<FTranslationPickerEditInputProcessor,1>::operator=(&this->InputProcessor,&local_3de8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_3de8.SharedReferenceCount.ReferenceController._4_4_,
                      local_3de8.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3858.SharedReferenceCount.ReferenceController);
  this_04 = FSlateApplication::Get();
  pTVar63 = TSharedPtr<IInputProcessor,1>::
            TSharedPtr<IInputProcessor,1><FTranslationPickerEditInputProcessor>
                      (&local_3578,&this->InputProcessor);
  FSlateApplication::RegisterInputPreProcessor(this_04,pTVar63,0);
  UpdateListItems(this);
  local_3de8.Object = (FTranslationPickerEditInputProcessor *)SetFocusPostConstruct;
  local_3de8.SharedReferenceCount.ReferenceController._0_4_ = 0;
  lStack_3840 = (ulonglong)local_3de8.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_3848 = SetFocusPostConstruct;
  pTVar64 = TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
            ::CreateSP<STranslationPickerEditWindow>(&local_3568,this,(pmf_dcecc2dd *)&local_3848);
  SWidget::RegisterActiveTimer((SWidget *)this,&local_3838,0.0,pTVar64);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3838.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_3dd8.SharedReferenceCount.ReferenceController._4_4_,
                      local_3dd8.SharedReferenceCount.ReferenceController._0_4_));
  return;
}

// Exit @ 146baaa80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STranslationPickerEditWindow::Exit
          (STranslationPickerEditWindow *this,FReply *__return_storage_ptr__)

{
  FReply local_c8;
  
  TranslationPickerManager::RemoveOverlay();
  Close(this,&local_c8);
  FReply::~FReply(&local_c8);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// FilterBox_OnTextChanged @ 146baab40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STranslationPickerEditWindow::FilterBox_OnTextChanged
          (STranslationPickerEditWindow *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->FilterText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->FilterText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->FilterText).Flags = param_1->Flags;
  UpdateListItems(this);
  return;
}

// FilterBox_OnTextCommitted @ 146baabb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STranslationPickerEditWindow::FilterBox_OnTextCommitted
          (STranslationPickerEditWindow *this,FText *param_1,Type param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 auStackX_8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->FilterText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->FilterText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,auStackX_8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->FilterText).Flags = param_1->Flags;
  UpdateListItems(this);
  return;
}

// RestorePicker @ 146bbcde0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STranslationPickerEditWindow::RestorePicker
          (STranslationPickerEditWindow *this,FReply *__return_storage_ptr__)

{
  FReply local_c8;
  
  Close(this,&local_c8);
  FReply::~FReply(&local_c8);
  TranslationPickerManager::OpenPickerWindow();
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// SaveAllAndExit @ 146bbce30

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STranslationPickerEditWindow::SaveAllAndExit
          (STranslationPickerEditWindow *this,FReply *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  UTranslationPickerSettings *pUVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  bool bVar6;
  char cVar7;
  int iVar8;
  FReply *pFVar9;
  FString *pFVar10;
  TSharedPtr<FTranslationPickerSettingsManager,1> *pTVar11;
  ILocalizationServiceModule *pIVar12;
  longlong *plVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  FReply *local_res10;
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> local_1d0;
  FText local_1c0;
  FReply local_1b0;
  FReply local_f8;
  
  pFVar15 = (this->AllItems).AllocatorInstance.Data;
  iVar1 = (this->AllItems).ArrayNum;
  pFVar16 = pFVar15 + (longlong)iVar1 * 0x10;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0 = 0;
  local_res10 = __return_storage_ptr__;
  do {
    while( true ) {
      if ((this->AllItems).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FTranslationPickerTextItem,1>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar15 == pFVar16) {
        if (0 < (int)local_1e0) {
          pTVar11 = FTranslationPickerSettingsManager::Get();
          if ((pTVar11->Object == (FTranslationPickerSettingsManager *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FReply *)(*pcVar5)();
            return pFVar9;
          }
          pUVar4 = pTVar11->Object->TranslationPickerSettingsObject;
          pIVar12 = ILocalizationServiceModule::Get();
          plVar13 = (longlong *)(**(code **)((longlong)*pIVar12 + 0x50))(pIVar12);
          cVar7 = (**(code **)(*plVar13 + 0x30))(plVar13);
          _Src.Data = local_1e8.Data;
          if ((cVar7 == '\0') ||
             (pUVar4->bSubmitTranslationPickerChangesToLocalizationService == false)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          lVar14 = (longlong)(int)local_1e0;
          local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d0.ArrayNum = (int)local_1e0;
          if ((int)local_1e0 == 0) {
            local_1d0.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,(int)local_1e0,0,&local_1d0.AllocatorInstance,(int)local_1e0,
                       &local_1d0.ArrayMax);
            memcpy(local_1d0.AllocatorInstance.Data,_Src.Data,lVar14 << 3);
          }
          FTranslationDataManager::SaveSelectedTranslations(&local_1d0,bVar6);
        }
        TranslationPickerManager::RemoveOverlay();
        Close(this,&local_1b0);
        FReply::~FReply(&local_1b0);
        FReply::FReply(&local_f8,true);
        FReply::~FReply(&local_f8);
        pFVar9 = local_res10;
        FReply::FReply(local_res10,true);
        if (local_1e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data);
        }
        return pFVar9;
      }
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar15 + 8);
      lVar14 = *(longlong *)pFVar15;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((lVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FReply *)(*pcVar5)();
        return pFVar9;
      }
      if (*(longlong *)(lVar14 + 0x80) == 0) break;
      if ((*(longlong *)(lVar14 + 0x88) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FReply *)(*pcVar5)();
        return pFVar9;
      }
      lVar3 = *(longlong *)(lVar14 + 0x88);
      if ((*(longlong *)(lVar3 + 0x2e0) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FReply *)(*pcVar5)();
        return pFVar9;
      }
      SMultiLineEditableText::GetText(*(SMultiLineEditableText **)(lVar3 + 0x2e0),&local_1c0);
      pFVar10 = FText::ToString(&local_1c0);
      ::FString::operator=((FString *)(*(longlong *)(lVar14 + 0x80) + 0x58),pFVar10);
      if (local_1c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
      }
      local_1d8 = *(longlong *)(lVar14 + 0x80);
      if (local_1d8 == 0) goto LAB_146bbd0bc;
      if ((lVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FReply *)(*pcVar5)();
        return pFVar9;
      }
      if ((*(char *)(lVar14 + 0x20) == '\0') || (*(char *)(lVar14 + 0x21) == '\0'))
      goto LAB_146bbd0bc;
      if ((local_1e8.Data <= (FScriptContainerElement *)&local_1d8) &&
         (((FScriptContainerElement *)&local_1d8 < local_1e8.Data + (longlong)local_1e0._4_4_ * 8 &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)))) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FReply *)(*pcVar5)();
        return pFVar9;
      }
      iVar8 = (int)local_1e0;
      if ((int)local_1e0 == local_1e0._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_1e8,(int *)((longlong)&local_1e0 + 4));
      }
      local_1e0 = CONCAT44(local_1e0._4_4_,iVar8 + 1);
      *(longlong *)(local_1e8.Data + (longlong)iVar8 * 8) = local_1d8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      pFVar15 = pFVar15 + 0x10;
    }
    local_1d8 = 0;
LAB_146bbd0bc:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar15 = pFVar15 + 0x10;
  } while( true );
}

// SetFocusPostConstruct @ 146bc0800

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
STranslationPickerEditWindow::SetFocusPostConstruct
          (STranslationPickerEditWindow *this,double param_1,float param_2)

{
  FSlateApplication *this_00;
  TSharedPtr<SWidget,1> local_18;
  
  if ((this->FilterBox).Object != (SSearchBox *)0x0) {
    this_00 = FSlateApplication::Get();
    local_18.SharedReferenceCount.ReferenceController =
         (this->FilterBox).SharedReferenceCount.ReferenceController;
    local_18.Object = (SWidget *)(this->FilterBox).Object;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::SetKeyboardFocus(this_00,&local_18,SetDirectly);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return Stop;
}

// SupportsKeyboardFocus @ 146bc0ac0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
STranslationPickerEditWindow::SupportsKeyboardFocus(STranslationPickerEditWindow *this)

{
  return true;
}

// TextListView_OnGenerateRow @ 146bc12f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
STranslationPickerEditWindow::TextListView_OnGenerateRow
          (STranslationPickerEditWindow *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FTranslationPickerTextItem,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  TSlateDecl<STranslationPickerEditWidget,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>_>
  *this_00;
  TSharedRef<STranslationPickerEditWidget,1> *pTVar3;
  T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>
  local_338;
  TSharedRef<STranslationPickerEditWidget,1> local_328;
  TSlateDecl<STranslationPickerEditWidget,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>_>
  local_318;
  FArguments local_300;
  
  pFVar2 = STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::FArguments::FArguments(&local_300);
  local_338.Arg0 = param_2;
  local_338.Arg1 = param_1;
  this_00 = MakeTDecl<STranslationPickerEditWidget,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>_>
                      (&local_318,"STranslationPickerEditWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationPickerEditWindow.cpp"
                       ,0x2ba,&local_338);
  pTVar3 = TSlateDecl<STranslationPickerEditWidget,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<FTranslationPickerTextItem,1>_&>_>
           ::operator<<=(this_00,&local_328,pFVar2);
  __return_storage_ptr__->Object = (ITableRow *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_328.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_318._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_300._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_300._Padding.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_300._OnDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_300._OnDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_300._OnDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_300._OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_300._OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_300._OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_300._OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_300);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// UpdateListItems @ 146bc2aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STranslationPickerEditWindow::UpdateListItems(STranslationPickerEditWindow *this)

{
  int *piVar1;
  int *piVar2;
  TArray<TSharedPtr<FTranslationPickerTextItem,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TSharedPtr<FTranslationPickerTextItem,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  TSharedPtr<FTranslationPickerTextItem,1> *pTVar5;
  SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *pSVar6;
  code *pcVar7;
  FText *pFVar8;
  bool bVar9;
  int iVar10;
  FString *pFVar11;
  FString *pFVar12;
  size_t sVar13;
  FScriptContainerElement *pFVar14;
  wchar_t *pwVar15;
  ulonglong uVar16;
  bool bVar17;
  ForAnyElementType this_00;
  uint local_res10 [2];
  uint local_res18;
  FText *local_res20;
  TSharedPtr<FTranslationPickerTextItem,1> local_68;
  FString local_58;
  
  pTVar3 = &this->AllItems;
  local_res10[0] = 0;
  piVar1 = &(this->AllItems).ArrayMax;
  pTVar5 = (TSharedPtr<FTranslationPickerTextItem,1> *)(pTVar3->AllocatorInstance).Data;
  bVar17 = false;
  iVar10 = (this->AllItems).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSharedPtr<FTranslationPickerTextItem,1>,int>(pTVar5,iVar10);
    (this->AllItems).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FTranslationPickerTextItem,1>,int>(pTVar5,iVar10);
    (this->AllItems).ArrayNum = 0;
  }
  pTVar4 = &this->FilteredItems;
  piVar2 = &(this->FilteredItems).ArrayMax;
  pTVar5 = (TSharedPtr<FTranslationPickerTextItem,1> *)(pTVar4->AllocatorInstance).Data;
  iVar10 = (this->FilteredItems).ArrayNum;
  if (*piVar2 < 0) {
    DestructItems<TSharedPtr<FTranslationPickerTextItem,1>,int>(pTVar5,iVar10);
    (this->FilteredItems).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar4->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<TSharedPtr<FTranslationPickerTextItem,1>,int>(pTVar5,iVar10);
    (this->FilteredItems).ArrayNum = 0;
  }
  local_res18 = TranslationPickerManager::PickedTexts.ArrayNum;
  uVar16 = TranslationPickerManager::PickedTexts._8_8_ & 0xffffffff;
  local_res20 = (FText *)(TranslationPickerManager::PickedTexts.AllocatorInstance.Data +
                         (longlong)(int)local_res18 * 0x48);
  this_00.Data = TranslationPickerManager::PickedTexts.AllocatorInstance.Data;
  do {
    pFVar8 = local_res20;
    if (TranslationPickerManager::PickedTexts.ArrayNum != (int)uVar16) {
      local_res10[0] = local_res10[0] & 0xffffff00;
      `TCheckedPointerIterator<FTranslationPickerTextAndGeom,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if ((FText *)this_00.Data == pFVar8) {
      pSVar6 = (this->TextListView).Object;
      if (pSVar6 != (SListView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) {
        (**(code **)(pSVar6->_padding_ + 0x248))();
      }
      return;
    }
    FTranslationPickerTextItem::BuildTextItem(&local_68,(FText *)this_00.Data,true);
    pTVar5 = (TSharedPtr<FTranslationPickerTextItem,1> *)(pTVar3->AllocatorInstance).Data;
    if (((pTVar5 <= &local_68) && (&local_68 < pTVar5 + *piVar1)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = (this->AllItems).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar3->AllocatorInstance,piVar1);
    }
    pFVar14 = (pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    (this->AllItems).ArrayNum = iVar10 + 1;
    *(FTranslationPickerTextItem **)pFVar14 = local_68.Object;
    *(TReferenceControllerBase<1> **)(pFVar14 + 8) =
         local_68.SharedReferenceCount.ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar11 = FText::ToString(&this->FilterText);
    bVar9 = FText::IsEmptyOrWhitespace((FText *)this_00.Data);
    if (bVar9) {
LAB_146bc2d50:
      bVar9 = false;
    }
    else {
      pFVar12 = FText::ToString((FText *)this_00.Data);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar15 = L"";
LAB_146bc2cbf:
        sVar13 = wcslen(pwVar15);
        iVar10 = ::FString::Find(pFVar12,pwVar15,(int)sVar13,IgnoreCase,FromStart,-1);
        if (iVar10 != -1) goto LAB_146bc2d50;
      }
      else {
        pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        if ((FScriptContainerElement *)pwVar15 != (FScriptContainerElement *)0x0)
        goto LAB_146bc2cbf;
      }
      bVar17 = true;
      pFVar12 = FText::BuildSourceString((FText *)this_00.Data,&local_58);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar15 = L"";
LAB_146bc2d1b:
        sVar13 = wcslen(pwVar15);
        iVar10 = ::FString::Find(pFVar12,pwVar15,(int)sVar13,IgnoreCase,FromStart,-1);
        if (iVar10 != -1) goto LAB_146bc2d50;
      }
      else {
        pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        if ((FScriptContainerElement *)pwVar15 != (FScriptContainerElement *)0x0)
        goto LAB_146bc2d1b;
      }
      bVar9 = true;
    }
    if ((bVar17) &&
       (bVar17 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (!bVar9) {
      pTVar5 = (TSharedPtr<FTranslationPickerTextItem,1> *)(pTVar4->AllocatorInstance).Data;
      piVar2 = &(this->FilteredItems).ArrayMax;
      if (((pTVar5 <= &local_68) && (&local_68 < pTVar5 + *piVar2)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = (this->FilteredItems).ArrayNum;
      if (iVar10 == *piVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar4->AllocatorInstance,piVar2);
      }
      (this->FilteredItems).ArrayNum = iVar10 + 1;
      pFVar14 = (pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(FTranslationPickerTextItem **)pFVar14 = local_68.Object;
      *(TReferenceControllerBase<1> **)(pFVar14 + 8) =
           local_68.SharedReferenceCount.ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    this_00.Data = (FScriptContainerElement *)&((FText *)((longlong)this_00.Data + 0x40))->Flags;
    uVar16 = (ulonglong)local_res18;
  } while( true );
}

