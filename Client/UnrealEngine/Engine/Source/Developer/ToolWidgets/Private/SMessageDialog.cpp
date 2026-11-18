// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 4

// Construct @ 142d827c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SMessageDialog::Construct(SMessageDialog *this,FArguments *param_1)

{
  int *piVar1;
  TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<SCustomDialog::FButton,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  int iVar4;
  ITextData *pIVar5;
  ITextData *pIVar6;
  FButton *pFVar7;
  SWidget *pSVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  code *pcVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined4 uVar16;
  ForAnyElementType FVar17;
  SRichTextBlock *pSVar18;
  FSharedReferencer<1> FVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  FArguments *pFVar23;
  TAttribute<FText> *pTVar24;
  FArguments *pFVar25;
  TSharedRef<STextBlock,1> *pTVar26;
  FArguments *pFVar27;
  FArguments *this_01;
  FArguments *pFVar28;
  ISlateStyle *pIVar29;
  FButtonStyle *pFVar30;
  undefined8 *puVar31;
  TSharedRef<SWidget,1> *pTVar32;
  ulong64 uVar33;
  FText *pFVar34;
  FArguments *pFVar35;
  FName *pFVar36;
  TSharedRef<SImage,1> *pTVar37;
  TSharedRef<SButton,1> *pTVar38;
  SMessageDialog *pSVar39;
  undefined4 local_res10 [2];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_2008 [8];
  ForAnyElementType local_2000;
  int local_1ff8;
  int local_1ff4;
  FLLMScope local_1ff0;
  FLLMScope local_1fec;
  FLLMScope local_1fe8;
  FLLMScope local_1fe4;
  SRichTextBlock *local_1fe0;
  FSharedReferencer<1> local_1fd8;
  TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> local_1fd0;
  code *local_1fc0;
  FSharedReferencer<1> FStack_1fb8;
  FSlateBrush *local_1fb0;
  undefined1 local_1fa8;
  undefined1 local_1fa0 [8];
  ForAnyElementType FStack_1f98;
  ulonglong local_1f90;
  undefined8 local_1f88;
  undefined8 uStack_1f80;
  undefined4 local_1f78;
  undefined1 local_1f74;
  undefined1 local_1f70 [8];
  ForAnyElementType FStack_1f68;
  ulonglong local_1f60;
  undefined8 local_1f58;
  undefined8 uStack_1f50;
  undefined1 local_1f48;
  undefined1 local_1f40 [8];
  ForAnyElementType FStack_1f38;
  ulonglong local_1f30;
  float local_1f28;
  bool local_1f24;
  undefined1 local_1f20 [8];
  void *pvStack_1f18;
  undefined4 local_1f10;
  float local_1f08;
  bool local_1f04;
  undefined1 local_1f00 [8];
  void *pvStack_1ef8;
  undefined4 local_1ef0;
  float local_1ee8;
  bool local_1ee4;
  undefined1 local_1ee0 [8];
  void *pvStack_1ed8;
  undefined4 local_1ed0;
  float local_1ec8;
  bool local_1ec4;
  undefined1 local_1ec0 [8];
  void *pvStack_1eb8;
  undefined4 local_1eb0;
  SImage *local_1ea8;
  TReferenceControllerBase<1> *pTStack_1ea0;
  SButton *local_1e98;
  TReferenceControllerBase<1> *pTStack_1e90;
  FSlateBrush *local_1e88;
  undefined1 local_1e80;
  undefined1 local_1e78 [8];
  void *pvStack_1e70;
  undefined8 local_1e68;
  undefined1 local_1e60 [4];
  undefined1 local_1e5c [4];
  undefined1 local_1e58 [4];
  FName local_1e54;
  FMemScope local_1e48;
  FName local_1e40;
  FMemScope local_1e38;
  FName local_1e30;
  FName local_1e28;
  FMemScope local_1e20;
  FName local_1e18;
  FMemScope local_1e10;
  undefined8 local_1e08;
  FSharedReferencer<1> local_1e00;
  double local_1df8;
  double dStack_1df0;
  undefined1 local_1de8;
  undefined1 local_1de0;
  undefined1 local_1dd8 [8];
  void *pvStack_1dd0;
  undefined8 local_1dc8;
  undefined8 local_1dc0;
  undefined8 uStack_1db8;
  undefined1 local_1db0;
  undefined1 local_1da8 [8];
  void *pvStack_1da0;
  undefined8 local_1d98;
  undefined8 local_1d90;
  undefined8 uStack_1d88;
  undefined1 local_1d80;
  undefined1 local_1d78 [8];
  void *pvStack_1d70;
  undefined8 local_1d68;
  undefined8 local_1d60;
  undefined8 uStack_1d58;
  undefined1 local_1d50;
  undefined1 local_1d48 [8];
  void *pvStack_1d40;
  undefined8 local_1d38;
  TSharedRef<SRichTextBlock,1> local_1d30;
  FText local_1d20;
  FDestructionSentinel local_1d10;
  FDestructionSentinel local_1cf8;
  FDestructionSentinel local_1ce0;
  FDestructionSentinel local_1cc8;
  undefined1 *local_1cb0;
  undefined4 local_1c98;
  TAttribute<FText> local_1c90;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_1c60;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1c48;
  TSharedRef<SImage,1> local_1c30;
  TSharedRef<SButton,1> local_1c20;
  TSharedRef<SWidget,1> local_1c10;
  SWidget *local_1c00;
  TReferenceControllerBase<1> *pTStack_1bf8;
  TSharedRef<STextBlock,1> local_1bf0;
  FName local_1be0;
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> local_1bd8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1bc0;
  TAttribute<FText> local_1ba8;
  TAttribute<FText> local_1b78;
  FArguments local_1b48;
  FArguments local_18a0;
  FArguments local_15a8;
  FArguments local_11a8;
  FArguments local_c68;
  FArguments local_710;
  undefined8 uStack_48;
  
  uStack_48 = 0x142d827e3;
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  local_res10[0] = 0;
  pIVar5 = (param_1->_Message).TextData.Reference;
  pIVar6 = (this->Message).TextData.Reference;
  if (pIVar6 != pIVar5) {
    (this->Message).TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_1e60);
    }
    if (pIVar6 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
  }
  (this->Message).Flags = (param_1->_Message).Flags;
  local_1fd8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1->_UseRichText == false) {
    pFVar25 = STextBlock::FArguments::FArguments(&local_c68);
    pTVar24 = TAttribute<FText>::TAttribute<FText><FText>(&local_1b78,&this->Message);
    pFVar25 = STextBlock::FArguments::Text(pFVar25,pTVar24);
    local_1ee8 = (param_1->_ContentMinWidth).Value;
    local_1ee4 = (param_1->_ContentMinWidth).bIsSet;
    local_1ee0 = (undefined1  [8])0x0;
    pvStack_1ed8 = (void *)0x0;
    local_1ed0 = 0;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_1ee0,
               &(param_1->_ContentMinWidth).Getter);
    (pFVar25->_MinDesiredWidth).Value = local_1ee8;
    (pFVar25->_MinDesiredWidth).bIsSet = local_1ee4;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_MinDesiredWidth).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ee0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ee0);
    if (pvStack_1ed8 != (void *)0x0) {
      FMemory::Free(pvStack_1ed8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1ee0);
    local_1f08 = (param_1->_WrapMessageAt).Value;
    local_1f04 = (param_1->_WrapMessageAt).bIsSet;
    local_1f00 = (undefined1  [8])0x0;
    pvStack_1ef8 = (void *)0x0;
    local_1ef0 = 0;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_1f00,
               &(param_1->_WrapMessageAt).Getter);
    (pFVar25->_WrapTextAt).Value = local_1f08;
    (pFVar25->_WrapTextAt).bIsSet = local_1f04;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_WrapTextAt).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f00);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f00);
    if (pvStack_1ef8 != (void *)0x0) {
      FMemory::Free(pvStack_1ef8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f00);
    FLLMScope::FLLMScope(&local_1fec,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1e40 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1e38,&local_1e40,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_1bc0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Dialog\\SMessageDialog.cpp"
               ,0x24,local_res18);
    FMemScope::~FMemScope(&local_1e38);
    FLLMScope::~FLLMScope(&local_1fec);
    pTVar26 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1bc0,&local_1bf0,pFVar25);
    FStack_1fb8.ReferenceController = (pTVar26->SharedReferenceCount).ReferenceController;
    local_1fe0 = (SRichTextBlock *)pTVar26->Object;
    if (FStack_1fb8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_1fb8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_1fb8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1fc0 = (code *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1fd8,&FStack_1fb8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_1fb8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1bf0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1bc0._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_c68);
  }
  else {
    pFVar23 = SRichTextBlock::FArguments::FArguments(&local_15a8);
    pTVar24 = TAttribute<FText>::TAttribute<FText><FText>(&local_1ba8,&this->Message);
    pFVar23 = SRichTextBlock::FArguments::Text(pFVar23,pTVar24);
    local_1f28 = (param_1->_ContentMinWidth).Value;
    local_1f24 = (param_1->_ContentMinWidth).bIsSet;
    local_1f20 = (undefined1  [8])0x0;
    pvStack_1f18 = (void *)0x0;
    local_1f10 = 0;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_1f20,
               &(param_1->_ContentMinWidth).Getter);
    (pFVar23->_MinDesiredWidth).Value = local_1f28;
    (pFVar23->_MinDesiredWidth).bIsSet = local_1f24;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_MinDesiredWidth).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f20);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f20);
    if (pvStack_1f18 != (void *)0x0) {
      FMemory::Free(pvStack_1f18);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f20);
    local_1ec8 = (param_1->_WrapMessageAt).Value;
    local_1ec4 = (param_1->_WrapMessageAt).bIsSet;
    local_1ec0 = (undefined1  [8])0x0;
    pvStack_1eb8 = (void *)0x0;
    local_1eb0 = 0;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_1ec0,
               &(param_1->_WrapMessageAt).Getter);
    (pFVar23->_WrapTextAt).Value = local_1ec8;
    (pFVar23->_WrapTextAt).bIsSet = local_1ec4;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_WrapTextAt).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ec0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ec0);
    if (pvStack_1eb8 != (void *)0x0) {
      FMemory::Free(pvStack_1eb8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1ec0);
    local_1fd0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<TSharedRef<ITextDecorator,1>,int>
              (&local_1fd0,
               (TSharedRef<ITextDecorator,1> *)(param_1->_Decorators).AllocatorInstance.Data,
               (param_1->_Decorators).ArrayNum,0);
    this_00 = &pFVar23->_Decorators;
    if (this_00 != &local_1fd0) {
      DestructItems<TSharedRef<ITextDecorator,1>,int>
                ((TSharedRef<ITextDecorator,1> *)(this_00->AllocatorInstance).Data,
                 (pFVar23->_Decorators).ArrayNum);
      TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<TSharedRef<ITextDecorator,1>,int>
                (this_00,(TSharedRef<ITextDecorator,1> *)local_1fd0.AllocatorInstance.Data,
                 local_1fd0.ArrayNum,(pFVar23->_Decorators).ArrayMax);
    }
    DestructItems<TSharedRef<ITextDecorator,1>,int>
              ((TSharedRef<ITextDecorator,1> *)local_1fd0.AllocatorInstance.Data,local_1fd0.ArrayNum
              );
    if ((TSharedRef<ITextDecorator,1> *)local_1fd0.AllocatorInstance.Data !=
        (TSharedRef<ITextDecorator,1> *)0x0) {
      FMemory::Free(local_1fd0.AllocatorInstance.Data);
    }
    FLLMScope::FLLMScope(&local_1ff0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1e54 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1e48,&local_1e54,true);
    TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>
              (&local_1bd8,"SRichTextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Dialog\\SMessageDialog.cpp"
               ,0x15,(T0RequiredArgs *)local_res10);
    FMemScope::~FMemScope(&local_1e48);
    FLLMScope::~FLLMScope(&local_1ff0);
    TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
              (&local_1bd8,&local_1d30,pFVar23);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1bd8._Widget.SharedReferenceCount.ReferenceController);
    SRichTextBlock::FArguments::~FArguments(&local_15a8);
    if (param_1->_DecoratorStyleSet != (ISlateStyle *)0x0) {
      SRichTextBlock::SetDecoratorStyleSet(local_1d30.Object,param_1->_DecoratorStyleSet);
    }
    local_1e00.ReferenceController = local_1d30.SharedReferenceCount.ReferenceController;
    if (local_1d30.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1d30.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1d30.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1fe0 = local_1d30.Object;
    local_1e08 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1fd8,&local_1e00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e00.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d30.SharedReferenceCount.ReferenceController);
  }
  pFVar27 = SCustomDialog::FArguments::FArguments(&local_710);
  pIVar5 = (param_1->_Title).TextData.Reference;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_1e5c);
  }
  pIVar6 = (pFVar27->_Title).TextData.Reference;
  uVar3 = (param_1->_Title).Flags;
  if (pIVar6 != pIVar5) {
    (pFVar27->_Title).TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_1e58);
    }
    if (pIVar6 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
  }
  (pFVar27->_Title).Flags = uVar3;
  if (pIVar5 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
  }
  pSVar18 = local_1fe0;
  if ((local_1fe0 == (SRichTextBlock *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar22)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FVar19.ReferenceController = local_1fd8.ReferenceController;
  if (local_1fd8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1fd8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1fd8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar18 == (SRichTextBlock *)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar22)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar19.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1c00 = (pFVar27->_Content).Widget.Object;
  pTStack_1bf8 = (pFVar27->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar27->_Content).Widget.Object = (SWidget *)pSVar18;
  (pFVar27->_Content).Widget.SharedReferenceCount.ReferenceController = FVar19.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1bf8);
  this_01 = SWindow::FArguments::FArguments(&local_18a0,&param_1->_WindowArguments);
  SWindow::FArguments::operator=(&pFVar27->_WindowArguments,this_01);
  SWindow::FArguments::~FArguments(this_01);
  uVar21 = _UNK_15076c248;
  local_1db0 = 1;
  local_1d98 = 0;
  local_1dc0 = ___xmm_41800000418000004180000041800000;
  uStack_1db8 = _UNK_15076c248;
  local_1da8 = (undefined1  [8])0x0;
  pvStack_1da0 = (void *)0x0;
  uVar16 = _UNK_15076c244;
  (pFVar27->_RootPadding).Value.Left = (float)___xmm_41800000418000004180000041800000;
  uVar20 = _UNK_15076c248;
  (pFVar27->_RootPadding).Value.Top = (float)uVar16;
  _UNK_15076c248 = (undefined4)uVar21;
  _UNK_15076c24c = SUB84(uVar21,4);
  uVar16 = _UNK_15076c24c;
  (pFVar27->_RootPadding).Value.Right = (float)_UNK_15076c248;
  _UNK_15076c248 = uVar20;
  (pFVar27->_RootPadding).Value.Bottom = (float)uVar16;
  (pFVar27->_RootPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_RootPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1da8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1da8);
  if (pvStack_1da0 != (void *)0x0) {
    FMemory::Free(pvStack_1da0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1da8);
  iVar4 = (param_1->_Buttons).ArrayNum;
  pFVar7 = (FButton *)(param_1->_Buttons).AllocatorInstance.Data;
  local_2000.Data = (FScriptContainerElement *)0x0;
  local_1ff8 = iVar4;
  if (iVar4 == 0) {
    local_1ff4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,iVar4,0,&local_2000,iVar4,&local_1ff4);
    ConstructItems<SCustomDialog::FButton,SCustomDialog::FButton,int>(local_2000.Data,pFVar7,iVar4);
  }
  pTVar2 = &pFVar27->_Buttons;
  if (pTVar2 != (TArray<SCustomDialog::FButton,TSizedDefaultAllocator<32>_> *)&local_2000) {
    DestructItems<SCustomDialog::FButton,int>
              ((FButton *)(pTVar2->AllocatorInstance).Data,(pFVar27->_Buttons).ArrayNum);
    iVar4 = local_1ff8;
    FVar17.Data = local_2000.Data;
    piVar1 = &(pFVar27->_Buttons).ArrayMax;
    (pFVar27->_Buttons).ArrayNum = local_1ff8;
    if ((local_1ff8 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,8,local_1ff8,*piVar1,&pTVar2->AllocatorInstance,local_1ff8,piVar1);
      ConstructItems<SCustomDialog::FButton,SCustomDialog::FButton,int>
                ((pTVar2->AllocatorInstance).Data,(FButton *)FVar17.Data,iVar4);
    }
  }
  DestructItems<SCustomDialog::FButton,int>((FButton *)local_2000.Data,local_1ff8);
  if ((FButton *)local_2000.Data != (FButton *)0x0) {
    FMemory::Free(local_2000.Data);
  }
  pFVar27->_AutoCloseOnButtonPress = param_1->_AutoCloseOnButtonPress;
  local_1e88 = param_1->_Icon;
  local_1e80 = 1;
  local_1e78 = (undefined1  [8])0x0;
  pvStack_1e70 = (void *)0x0;
  local_1e68 = 0;
  (pFVar27->_Icon).Value = local_1e88;
  (pFVar27->_Icon).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_Icon).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e78);
  if (pvStack_1e70 != (void *)0x0) {
    FMemory::Free(pvStack_1e70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e78);
  dStack_1df0 = _UNK_1509ecee8;
  local_1df8 = ___xmm_40380000000000004038000000000000;
  pFVar27->_HAlignContent = HAlign_Fill;
  pFVar27->_VAlignContent = VAlign_Fill;
  local_1de8 = 1;
  local_1de0 = 1;
  local_1dc8 = 0;
  local_1dd8 = (undefined1  [8])0x0;
  pvStack_1dd0 = (void *)0x0;
  if ((TAttribute<TOptional<UE::Math::TVector2<double>_>_> *)&local_1df8 !=
      &pFVar27->_IconDesiredSizeOverride) {
    (pFVar27->_IconDesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.X = local_1df8;
    (pFVar27->_IconDesiredSizeOverride).Value.TypedValue.field0_0x0._s_0.Y = dStack_1df0;
    (pFVar27->_IconDesiredSizeOverride).Value.bIsSet = true;
  }
  (pFVar27->_IconDesiredSizeOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar27->_IconDesiredSizeOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1dd8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1dd8);
  if (pvStack_1dd0 != (void *)0x0) {
    FMemory::Free(pvStack_1dd0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1dd8);
  uStack_1d88 = _UNK_1509ece88;
  local_1d90 = ___xmm_00000000000000000000000041800000;
  pFVar27->_HAlignIcon = HAlign_Left;
  pFVar27->_VAlignIcon = VAlign_Top;
  uVar21 = ___xmm_00000000000000000000000041800000;
  local_1d80 = 1;
  local_1d68 = 0;
  local_1d78 = (undefined1  [8])0x0;
  pvStack_1d70 = (void *)0x0;
  ___xmm_00000000000000000000000041800000 = (undefined4)local_1d90;
  _UNK_1509ece84 = SUB84(local_1d90,4);
  uVar16 = _UNK_1509ece84;
  (pFVar27->_ContentAreaPadding).Value.Left = (float)___xmm_00000000000000000000000041800000;
  ___xmm_00000000000000000000000041800000 = uVar21;
  uVar21 = _UNK_1509ece88;
  (pFVar27->_ContentAreaPadding).Value.Top = (float)uVar16;
  _UNK_1509ece88 = (undefined4)uStack_1d88;
  _UNK_1509ece8c = SUB84(uStack_1d88,4);
  uVar16 = _UNK_1509ece8c;
  (pFVar27->_ContentAreaPadding).Value.Right = (float)_UNK_1509ece88;
  _UNK_1509ece88 = uVar21;
  (pFVar27->_ContentAreaPadding).Value.Bottom = (float)uVar16;
  (pFVar27->_ContentAreaPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_ContentAreaPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d78);
  if (pvStack_1d70 != (void *)0x0) {
    FMemory::Free(pvStack_1d70);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d78);
  uStack_1d58 = _UNK_1509ece98;
  local_1d60 = ___xmm_00000000000000004200000000000000;
  pFVar27->_UseScrollBox = param_1->_UseScrollBox;
  pFVar27->_ScrollBoxMaxHeight = param_1->_ScrollBoxMaxHeight;
  uVar21 = ___xmm_00000000000000004200000000000000;
  local_1d50 = 1;
  local_1d38 = 0;
  local_1d48 = (undefined1  [8])0x0;
  pvStack_1d40 = (void *)0x0;
  ___xmm_00000000000000004200000000000000 = (undefined4)local_1d60;
  _UNK_1509ece94 = SUB84(local_1d60,4);
  uVar16 = _UNK_1509ece94;
  (pFVar27->_ButtonAreaPadding).Value.Left = (float)___xmm_00000000000000004200000000000000;
  ___xmm_00000000000000004200000000000000 = uVar21;
  uVar21 = _UNK_1509ece98;
  (pFVar27->_ButtonAreaPadding).Value.Top = (float)uVar16;
  _UNK_1509ece98 = (undefined4)uStack_1d58;
  _UNK_1509ece9c = SUB84(uStack_1d58,4);
  uVar16 = _UNK_1509ece9c;
  (pFVar27->_ButtonAreaPadding).Value.Right = (float)_UNK_1509ece98;
  _UNK_1509ece98 = uVar21;
  (pFVar27->_ButtonAreaPadding).Value.Bottom = (float)uVar16;
  (pFVar27->_ButtonAreaPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_ButtonAreaPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d48);
  if (pvStack_1d40 != (void *)0x0) {
    FMemory::Free(pvStack_1d40);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d48);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar27->_OnClosed,&param_1->_OnClosed);
  pFVar28 = SButton::FArguments::FArguments(&local_11a8);
  ::FName::FName(&local_1e30,"SimpleButton");
  pIVar29 = FAppStyle::Get();
  pFVar30 = (FButtonStyle *)
            (**(code **)((longlong)*pIVar29 + 0xa0))(pIVar29,FButtonStyle::TypeName,local_1e30,0,1);
  if (pFVar30 == (FButtonStyle *)0x0) {
    pFVar30 = FButtonStyle::GetDefault();
  }
  pFVar28->_ButtonStyle = pFVar30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar28->_OnClicked,
             (FWriteAccessScope *)&local_1cc8);
  local_1cb0 = &(pFVar28->_OnClicked).field_0x8;
  puVar31 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1cb0);
  pSVar39 = this;
  if (puVar31 != (undefined8 *)0x0) {
    local_1fc0 = _vcall__608__flat______;
    FStack_1fb8.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)(uint)local_1d20._12_4_ << 0x20);
    pTVar32 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1c10);
    pSVar39 = (SMessageDialog *)(pTVar32->SharedReferenceCount).ReferenceController;
    pSVar8 = pTVar32->Object;
    if (pSVar39 != (SMessageDialog *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar39->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar39->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar39->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar39->_padding_ + 1);
      UNLOCK();
    }
    *puVar31 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar33 = FDelegateHandle::GenerateNewID();
    puVar31[2] = uVar33;
    *puVar31 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSMessageDialog___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar31[3] = pSVar8;
    puVar31[4] = pSVar39;
    if (pSVar39 != (SMessageDialog *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar39->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar39->_padding_)[1] + 1);
      UNLOCK();
    }
    bVar15 = true;
    bVar14 = true;
    bVar13 = true;
    puVar31[5] = local_1fc0;
    puVar31[6] = FStack_1fb8.ReferenceController;
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar39);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar39);
  }
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c10.SharedReferenceCount.ReferenceController);
  }
  if (local_1cc8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1cc8.Accessor,&local_1cc8);
  }
  pFVar34 = FText::AsLocalizable_Advanced_LocText
                      (&local_1d20,L"SChoiceDialog",L"CopyMessageTooltip",
                       L"Copy the text in this message to the clipboard (CTRL+C)");
  FText::FText(&local_1c90.Value,pFVar34);
  local_1c90.bIsSet = true;
  local_1c90.Getter._16_8_ = 0;
  local_1c90.Getter._0_8_ = 0;
  local_1c90.Getter._8_8_ = 0;
  pFVar28 = TSlateBaseNamedArgs<SButton>::ToolTipText
                      ((TSlateBaseNamedArgs<SButton> *)pFVar28,&local_1c90);
  uVar21 = _UNK_15076ba38;
  local_1f48 = 1;
  local_1f30 = 0;
  local_1f58 = ___xmm_40000000400000004000000040000000;
  uStack_1f50 = _UNK_15076ba38;
  local_1f40 = (undefined1  [8])0x0;
  FStack_1f38.Data = (FScriptContainerElement *)0x0;
  uVar16 = _UNK_15076ba34;
  (pFVar28->_ContentPadding).Value.Left = (float)___xmm_40000000400000004000000040000000;
  uVar20 = _UNK_15076ba38;
  (pFVar28->_ContentPadding).Value.Top = (float)uVar16;
  _UNK_15076ba38 = (undefined4)uVar21;
  _UNK_15076ba3c = SUB84(uVar21,4);
  uVar16 = _UNK_15076ba3c;
  (pFVar28->_ContentPadding).Value.Right = (float)_UNK_15076ba38;
  _UNK_15076ba38 = uVar20;
  (pFVar28->_ContentPadding).Value.Bottom = (float)uVar16;
  (pFVar28->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar28->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f40,
             (FWriteAccessScope *)&local_1d10);
  if (((int)local_1f30 != 0) && (FStack_1f38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1f38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f38,0,0,0x10);
    local_1f30 = local_1f30 & 0xffffffff00000000;
  }
  if (local_1d10.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d10.Accessor,&local_1d10);
  }
  if (FStack_1f38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1f38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f40);
  pFVar35 = SImage::FArguments::FArguments(&local_1b48);
  pIVar29 = FAppStyle::Get();
  pcVar11 = *(code **)((longlong)*pIVar29 + 0x50);
  pFVar36 = ::FName::FName(&local_1be0,"Icons.Clipboard");
  local_1fb0 = (FSlateBrush *)(*pcVar11)(pIVar29,*pFVar36);
  local_1fa8 = 1;
  local_1f90 = 0;
  local_1fa0 = (undefined1  [8])0x0;
  FStack_1f98.Data = (FScriptContainerElement *)0x0;
  (pFVar35->_Image).Value = local_1fb0;
  (pFVar35->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar35->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1fa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1fa0,
             (FWriteAccessScope *)&local_1cf8);
  if (((int)local_1f90 != 0) && (FStack_1f98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1f98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f98,0,0,0x10);
    local_1f90 = local_1f90 & 0xffffffff00000000;
  }
  if (local_1cf8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1cf8.Accessor,&local_1cf8);
  }
  if (FStack_1f98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1f98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1fa0);
  uVar21 = _UNK_15090c6d8;
  local_1f74 = 1;
  local_1f88 = ___xmm_3f8000003f800000000000003f800000;
  uStack_1f80 = _UNK_15090c6d8;
  local_1c98 = CONCAT22(local_1c98._2_2_,2);
  uVar16 = local_1c98;
  local_1f78 = local_1c98;
  local_1f60 = 0;
  local_1f70 = (undefined1  [8])0x0;
  FStack_1f68.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar35->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 =
       ___xmm_3f8000003f800000000000003f800000;
  *(undefined8 *)((longlong)&(pFVar35->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar21;
  local_1c98._0_1_ = (undefined1)2;
  local_1c98._1_1_ = (undefined1)(2 >> 8);
  (pFVar35->_ColorAndOpacity).Value.ColorUseRule = (undefined1)local_1c98;
  (pFVar35->_ColorAndOpacity).Value.ColorTableId = local_1c98._1_1_;
  *(undefined2 *)&(pFVar35->_ColorAndOpacity).Value.field_0x12 = local_1c98._2_2_;
  (pFVar35->_ColorAndOpacity).bIsSet = true;
  local_1c98 = uVar16;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar35->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f70,
             (FWriteAccessScope *)&local_1ce0);
  if (((int)local_1f60 != 0) && (FStack_1f68.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1f68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f68,0,0,0x10);
    local_1f60 = local_1f60 & 0xffffffff00000000;
  }
  if (local_1ce0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ce0.Accessor,&local_1ce0);
  }
  if (FStack_1f68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1f68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f70);
  FLLMScope::FLLMScope(&local_1fe8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1e28 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1e20,&local_1e28,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1c48,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Dialog\\SMessageDialog.cpp"
             ,0x48,local_res20);
  FMemScope::~FMemScope(&local_1e20);
  FLLMScope::~FLLMScope(&local_1fe8);
  pTVar37 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1c48,&local_1c30,pFVar35);
  pTVar9 = (pTVar37->SharedReferenceCount).ReferenceController;
  local_1ea8 = pTVar37->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (pFVar28->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar28->_Content).Widget.Object = (SWidget *)local_1ea8;
  (pFVar28->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar9;
  pTStack_1ea0 = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  FLLMScope::FLLMScope(&local_1fe4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1e18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1e10,&local_1e18,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_1c60,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Dialog\\SMessageDialog.cpp"
             ,0x41,local_2008);
  FMemScope::~FMemScope(&local_1e10);
  FLLMScope::~FLLMScope(&local_1fe4);
  pTVar38 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1c60,&local_1c20,pFVar28);
  pTVar10 = (pTVar38->SharedReferenceCount).ReferenceController;
  local_1e98 = pTVar38->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = (pFVar27->_BeforeButtons).Widget.SharedReferenceCount.ReferenceController;
  (pFVar27->_BeforeButtons).Widget.Object = (SWidget *)local_1e98;
  (pFVar27->_BeforeButtons).Widget.SharedReferenceCount.ReferenceController = pTVar10;
  pTStack_1e90 = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SCustomDialog::Construct((SCustomDialog *)this,pFVar27);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c20.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c60._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c30.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c48._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_1b48);
  if (local_1d20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d20.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_11a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  SCustomDialog::FArguments::~FArguments(&local_710);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1fd8.ReferenceController);
  return;
}

// CopyMessageToClipboard @ 142d91610

void __thiscall SMessageDialog::CopyMessageToClipboard(SMessageDialog *this)

{
  FString *pFVar1;
  
  pFVar1 = FText::ToString(&this->Message);
  if ((pFVar1->Data).ArrayNum != 0) {
    FWindowsPlatformApplicationMisc::ClipboardCopy((wchar_t *)(pFVar1->Data).AllocatorInstance.Data)
    ;
    return;
  }
  FWindowsPlatformApplicationMisc::ClipboardCopy(L"");
  return;
}

// OnCopyMessage @ 142dbc610

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMessageDialog::OnCopyMessage(SMessageDialog *this,FReply *__return_storage_ptr__)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  
  pFVar1 = FText::ToString(&this->Message);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  FWindowsPlatformApplicationMisc::ClipboardCopy(pwVar2);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnKeyDown @ 142dc0590

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMessageDialog::OnKeyDown
          (SMessageDialog *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2
          )

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FString *pFVar3;
  bool bVar4;
  
  FVar1 = (param_2->Key).KeyName;
  pTVar2 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar1 == EKeys::C.KeyName) && ((param_2->_padding_ & 0xc) != 0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar3 = FText::ToString(&this->Message);
    if ((pFVar3->Data).ArrayNum == 0) {
      FWindowsPlatformApplicationMisc::ClipboardCopy(L"");
      bVar4 = true;
    }
    else {
      FWindowsPlatformApplicationMisc::ClipboardCopy
                ((wchar_t *)(pFVar3->Data).AllocatorInstance.Data);
      bVar4 = true;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    bVar4 = false;
  }
  FReply::FReply(__return_storage_ptr__,bVar4);
  return __return_storage_ptr__;
}

