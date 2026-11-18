// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayer
// Functions: 3

// Construct @ 146c78e40

void __thiscall
SLoadingScreenTestWidget::Construct(SLoadingScreenTestWidget *this,FArguments *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  code *pcVar3;
  SVerticalBox *pSVar4;
  FSharedReferencer<1> FVar5;
  STextBlock *pSVar6;
  FSharedReferencer<1> FVar7;
  SThrobber *pSVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  FArguments *pFVar13;
  FSlotArguments *pFVar14;
  FArguments *pFVar15;
  FArguments *pFVar16;
  FText *pFVar17;
  FSlotArguments *pFVar18;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_ce8;
  FLLMScope local_ce4;
  FLLMScope local_ce0 [2];
  SThrobber *local_cd8;
  FSharedReferencer<1> local_cd0;
  STextBlock *local_cc8;
  FSharedReferencer<1> local_cc0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_cb8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_ca0;
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs> local_c88;
  FText local_c70;
  bool local_c60;
  undefined1 local_c58 [8];
  ForAnyElementType FStack_c50;
  ulonglong local_c48;
  FName local_c38;
  undefined4 uStack_c30;
  uint uStack_c2c;
  FMemScope local_c28;
  undefined4 uStack_c20;
  uint uStack_c1c;
  undefined4 local_c18 [2];
  undefined4 local_c10 [2];
  undefined4 local_c08 [2];
  undefined4 local_c00 [2];
  FName local_bf8;
  FMemScope local_bf0;
  FMemScope local_be8;
  FName local_be0;
  FDestructionSentinel local_bd8;
  code *local_bb8;
  longlong lStack_bb0;
  code *local_ba8;
  longlong lStack_ba0;
  undefined8 local_b98;
  TReferenceControllerBase<1> *pTStack_b90;
  FText local_b88;
  undefined8 *local_b78 [2];
  TReferenceControllerBase<1> *local_b68;
  undefined1 local_b48 [40];
  FSlotArgumentsMixin local_b20;
  undefined8 *local_a90 [2];
  TReferenceControllerBase<1> *local_a80;
  undefined1 local_a60 [40];
  FSlotArgumentsMixin local_a38;
  FArguments local_9a8;
  FArguments local_7a0;
  FArguments local_598;
  
  pFVar13 = SVerticalBox::FArguments::FArguments(&local_9a8);
  pFVar14 = SVerticalBox::Slot((FSlotArguments *)local_a90);
  if (local_c18 != (undefined4 *)&pFVar14->field_0x50) {
    *(undefined4 *)&pFVar14->field_0x50 = 2;
    pFVar14->field_0x54 = 1;
  }
  pFVar18 = (FSlotArguments *)0x0;
  if (pFVar14 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar18 = pFVar14;
  }
  puVar1 = &pFVar18->field_0x48;
  if (local_c10 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 2;
    pFVar18->field_0x4c = 1;
  }
  pFVar14 = (FSlotArguments *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar14 = pFVar18;
  }
  pFVar15 = SThrobber::FArguments::FArguments(&local_7a0);
  uStack_c20 = 0;
  local_c28 = (FMemScope)GetLoadIndicatorVisibility;
  lStack_bb0 = (ulonglong)uStack_c1c << 0x20;
  local_bb8 = GetLoadIndicatorVisibility;
  TAttribute<EVisibility>::Bind<SLoadingScreenTestWidget>
            ((TAttribute<EVisibility> *)&pFVar15->_padding_,this,(pmf_a0f6c506 *)&local_bb8);
  FLLMScope::FLLMScope(&local_ce8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_bf8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_bf0,&local_bf8,true);
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SThrobber,RequiredArgs::T0RequiredArgs>
            (&local_c88,"SThrobber",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\MoviePlayer.cpp"
             ,0x25,local_res8);
  FMemScope::~FMemScope(&local_bf0);
  FLLMScope::~FLLMScope(&local_ce8);
  pSVar8 = local_c88._Widget.Object;
  if (local_c88._Widget.Object == (SThrobber *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_c88._Widget.Object,(FSlateBaseNamedArgs *)pFVar15);
  SThrobber::Construct(local_c88._Widget.Object,pFVar15);
  if (local_c88._Widget.Object == (SThrobber *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((local_c88._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_c88._Widget.Object)->_padding_ + 0x228))(local_c88._Widget.Object);
    bVar12 = 0;
    if (cVar11 != '\0') goto LAB_146c79006;
  }
  else {
LAB_146c79006:
    bVar12 = 0x20;
  }
  *(byte *)&(local_c88._Widget.Object)->_padding_ =
       (byte)(local_c88._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_c88._Widget.Object)->_padding_ =
       (byte)(local_c88._Widget.Object)->_padding_ | bVar12;
  if (local_c88._Widget.Object == (SThrobber *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pbVar2 = (byte *)((longlong)&(local_c88._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if (local_c88._Widget.Object == (SThrobber *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar9.ReferenceController = local_c88._Widget.SharedReferenceCount.ReferenceController;
  local_c88._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_c88._Widget.Object = (SThrobber *)0x0;
  if (pSVar8 == (SThrobber *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_cd8 = pSVar8;
  local_cd0.ReferenceController = FVar9.ReferenceController;
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
  if ((SThrobber **)&pFVar14->field_0x8 != &local_cd8) {
    *(SThrobber **)&pFVar14->field_0x8 = pSVar8;
    local_cd8 = (SThrobber *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar14->field_0x10,&local_cd0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cd0.ReferenceController);
  pFVar13 = SVerticalBox::FArguments::operator+(pFVar13,pFVar14);
  pFVar14 = SVerticalBox::Slot((FSlotArguments *)local_b78);
  if (local_c08 != (undefined4 *)&pFVar14->field_0x50) {
    *(undefined4 *)&pFVar14->field_0x50 = 2;
    pFVar14->field_0x54 = 1;
  }
  if (pFVar14 == (FSlotArguments *)0xffffffffffffffb8) {
    pFVar14 = (FSlotArguments *)0x0;
  }
  puVar1 = &pFVar14->field_0x48;
  if (local_c00 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 2;
    pFVar14->field_0x4c = 1;
  }
  pFVar18 = (FSlotArguments *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar18 = pFVar14;
  }
  pFVar16 = STextBlock::FArguments::FArguments(&local_598);
  pFVar17 = FText::AsLocalizable_Advanced_LocText
                      (&local_b88,L"MoviePlayerTestLoadingScreen",L"LoadingComplete",
                       L"Loading complete!");
  FText::FText(&local_c70,pFVar17);
  local_c60 = true;
  local_c48 = 0;
  local_c58 = (undefined1  [8])0x0;
  FStack_c50.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar16->_Text).Value,&local_c70);
  (pFVar16->_Text).bIsSet = local_c60;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c58,
             (FWriteAccessScope *)&local_bd8);
  if (((int)local_c48 != 0) && (FStack_c50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_c50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c50,0,0,0x10);
    local_c48 = local_c48 & 0xffffffff00000000;
  }
  if (local_bd8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_bd8.Accessor,&local_bd8);
  }
  if (FStack_c50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c58);
  if (local_c70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c70.TextData.Reference + 0x10))();
  }
  uStack_c30 = 0;
  local_c38 = (FName)GetMessageIndicatorVisibility;
  lStack_ba0 = (ulonglong)uStack_c2c << 0x20;
  local_ba8 = GetMessageIndicatorVisibility;
  TAttribute<EVisibility>::Bind<SLoadingScreenTestWidget>
            ((TAttribute<EVisibility> *)&pFVar16->_padding_,this,(pmf_a0f6c506 *)&local_ba8);
  FLLMScope::FLLMScope(&local_ce4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_c38 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_be8,&local_c38,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_ca0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\MoviePlayer.cpp"
             ,0x2c,local_res18);
  FMemScope::~FMemScope(&local_be8);
  FLLMScope::~FLLMScope(&local_ce4);
  pSVar6 = local_ca0._Widget.Object;
  if (local_ca0._Widget.Object == (STextBlock *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_ca0._Widget.Object,(FSlateBaseNamedArgs *)pFVar16);
  STextBlock::Construct(local_ca0._Widget.Object,pFVar16);
  if (local_ca0._Widget.Object == (STextBlock *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((local_ca0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_ca0._Widget.Object)->_padding_ + 0x228))(local_ca0._Widget.Object);
    bVar12 = 0;
    if (cVar11 != '\0') goto LAB_146c7937b;
  }
  else {
LAB_146c7937b:
    bVar12 = 0x20;
  }
  *(byte *)&(local_ca0._Widget.Object)->_padding_ =
       (byte)(local_ca0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_ca0._Widget.Object)->_padding_ =
       (byte)(local_ca0._Widget.Object)->_padding_ | bVar12;
  if (local_ca0._Widget.Object == (STextBlock *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pbVar2 = (byte *)((longlong)&(local_ca0._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if (local_ca0._Widget.Object == (STextBlock *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7.ReferenceController = local_ca0._Widget.SharedReferenceCount.ReferenceController;
  local_ca0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_ca0._Widget.Object = (STextBlock *)0x0;
  if (pSVar6 == (STextBlock *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_cc8 = pSVar6;
  local_cc0.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((STextBlock **)&pFVar18->field_0x8 != &local_cc8) {
    *(STextBlock **)&pFVar18->field_0x8 = pSVar6;
    local_cc8 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar18->field_0x10,&local_cc0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cc0.ReferenceController);
  pFVar13 = SVerticalBox::FArguments::operator+(pFVar13,pFVar18);
  FLLMScope::FLLMScope(local_ce0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_be0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_c28,&local_be0,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_cb8,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\MoviePlayer.cpp"
             ,0x20,local_res20);
  FMemScope::~FMemScope(&local_c28);
  FLLMScope::~FLLMScope(local_ce0);
  pSVar4 = local_cb8._Widget.Object;
  if (local_cb8._Widget.Object == (SVerticalBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_cb8._Widget.Object,(FSlateBaseNamedArgs *)pFVar13);
  SVerticalBox::Construct(local_cb8._Widget.Object,pFVar13);
  if (local_cb8._Widget.Object == (SVerticalBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((local_cb8._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar11 = (**(code **)(*(longlong *)local_cb8._Widget.Object + 0x228))(local_cb8._Widget.Object);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_146c7958e;
  }
  bVar12 = 0x20;
LAB_146c7958e:
  (local_cb8._Widget.Object)->field_0x30 = (local_cb8._Widget.Object)->field_0x30 & 0xdf;
  (local_cb8._Widget.Object)->field_0x30 = (local_cb8._Widget.Object)->field_0x30 | bVar12;
  if (local_cb8._Widget.Object == (SVerticalBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (local_cb8._Widget.Object)->field_0x31 = (local_cb8._Widget.Object)->field_0x31 | 4;
  if (local_cb8._Widget.Object == (SVerticalBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar5.ReferenceController = local_cb8._Widget.SharedReferenceCount.ReferenceController;
  local_cb8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_cb8._Widget.Object = (SVerticalBox *)0x0;
  if (pSVar4 == (SVerticalBox *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = &this->field_0x238;
  if (FVar5.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)puVar1);
  }
  else {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)puVar1);
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b98 = *(undefined8 *)&this->field_0x248;
  pTStack_b90 = *(TReferenceControllerBase<1> **)&this->field_0x250;
  *(SVerticalBox **)&this->field_0x248 = pSVar4;
  *(TReferenceControllerBase<1> **)&this->field_0x250 = FVar5.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b90);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)puVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cb8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ca0._Widget.SharedReferenceCount.ReferenceController);
  if (local_b88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b88.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_598);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_b20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b48);
  if ((void *)local_b48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b68);
  if (local_b78[0] != (undefined8 *)0x0) {
    (**(code **)*local_b78[0])(local_b78[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c88._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_7a0);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_a38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a60);
  if ((void *)local_a60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a80);
  if (local_a90[0] != (undefined8 *)0x0) {
    (**(code **)*local_a90[0])(local_a90[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_9a8._Slots.AllocatorInstance.Data,local_9a8._Slots.ArrayNum);
  if ((FSlotArguments *)local_9a8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_9a8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_9a8);
  return;
}

// GetLoadIndicatorVisibility @ 146c7c9c0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

EVisibility __thiscall
SLoadingScreenTestWidget::GetLoadIndicatorVisibility(SLoadingScreenTestWidget *this)

{
  bool bVar1;
  char cVar2;
  FNullGameMoviePlayer *pFVar3;
  EVisibility EVar4;
  uchar *in_RDX;
  
  bVar1 = FCommandLine::IsInitialized();
  pFVar3 = FNullGameMoviePlayer::MoviePlayer.Object;
  if (((bVar1) &&
      (bVar1 = IsMoviePlayerEnabled(), pFVar3 = FNullGameMoviePlayer::MoviePlayer.Object, bVar1)) &&
     (GRHIGlobals.UsingNullRHI == false)) {
    pFVar3 = (FNullGameMoviePlayer *)&(FDefaultGameMoviePlayer::MoviePlayer.Object)->_padding_;
    if (FDefaultGameMoviePlayer::MoviePlayer.Object == (FDefaultGameMoviePlayer *)0x0) {
      pFVar3 = (FNullGameMoviePlayer *)0x0;
    }
  }
  cVar2 = (**(code **)(pFVar3->_padding_ + 0x60))();
  EVar4 = EVisibility::Visible;
  if (cVar2 != '\0') {
    EVar4 = EVisibility::Collapsed;
  }
  *in_RDX = (uchar)EVar4.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetMessageIndicatorVisibility @ 146c7ca30

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

EVisibility __thiscall
SLoadingScreenTestWidget::GetMessageIndicatorVisibility(SLoadingScreenTestWidget *this)

{
  bool bVar1;
  char cVar2;
  FNullGameMoviePlayer *pFVar3;
  EVisibility EVar4;
  uchar *in_RDX;
  
  bVar1 = FCommandLine::IsInitialized();
  pFVar3 = FNullGameMoviePlayer::MoviePlayer.Object;
  if (((bVar1) &&
      (bVar1 = IsMoviePlayerEnabled(), pFVar3 = FNullGameMoviePlayer::MoviePlayer.Object, bVar1)) &&
     (GRHIGlobals.UsingNullRHI == false)) {
    pFVar3 = (FNullGameMoviePlayer *)&(FDefaultGameMoviePlayer::MoviePlayer.Object)->_padding_;
    if (FDefaultGameMoviePlayer::MoviePlayer.Object == (FDefaultGameMoviePlayer *)0x0) {
      pFVar3 = (FNullGameMoviePlayer *)0x0;
    }
  }
  cVar2 = (**(code **)(pFVar3->_padding_ + 0x60))();
  EVar4 = EVisibility::Collapsed;
  if (cVar2 != '\0') {
    EVar4 = EVisibility::Visible;
  }
  *in_RDX = (uchar)EVar4.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

