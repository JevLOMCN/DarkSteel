// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 5

// ~SSynthTooltip @ 14f0bfeb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSynthTooltip::~SSynthTooltip(SSynthTooltip *this)

{
  TSharedPtr<SWindow,1> *pTVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->WindowContainer;
  this->_padding_ = (longlong)&___7SSynthTooltip__6B_;
  if (pTVar1->Object != (SWindow *)0x0) {
    SWindow::RequestDestroyWindow(pTVar1->Object);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<SWindow,1> *)&local_18) {
    pTVar1->Object = (SWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WindowContainer).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TooltipText).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WindowContainer).SharedReferenceCount.ReferenceController);
  SOverlay::~SOverlay((SOverlay *)this);
  return;
}

// Construct @ 14f0ce4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSynthTooltip::Construct(SSynthTooltip *this,FArguments *param_1)

{
  byte *pbVar1;
  TSharedPtr<SWindow,1> *pTVar2;
  TSharedPtr<STextBlock,1> *pTVar3;
  code *pcVar4;
  SWindow *this_00;
  STextBlock *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  FSharedReferencer<1> FVar7;
  SToolTip *pSVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  TSharedRef<SWindow,1> *pTVar12;
  FSlateApplication *pFVar13;
  FArguments *pFVar14;
  FText *pFVar15;
  FArguments *pFVar16;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_a08;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> local_9f0;
  FText local_9d8;
  bool local_9c8;
  undefined1 local_9c0 [8];
  ForAnyElementType FStack_9b8;
  ulonglong local_9b0;
  SWindow *local_9a8;
  FSharedReferencer<1> local_9a0;
  STextBlock *local_998;
  FSharedReferencer<1> local_990;
  undefined1 local_988 [4];
  FName local_984;
  FMemScope local_978;
  FName local_970;
  FMemScope local_968;
  SWindow *local_960;
  TReferenceControllerBase<1> *local_958;
  TArray<SOverlay::FOverlaySlot::FSlotArguments,TSizedDefaultAllocator<32>_> local_950;
  TSharedRef<SWidget,1> local_940;
  FDestructionSentinel local_930;
  TSharedRef<SWindow,1> local_918;
  undefined1 local_908 [8];
  TReferenceControllerBase<1> *local_900;
  SWidget *local_8f8;
  TReferenceControllerBase<1> *pTStack_8f0;
  undefined1 local_8e8 [528];
  undefined1 local_6d8 [32];
  FSharedReferencer<1> local_6b8;
  FSharedReferencer<1> local_678;
  undefined1 local_648 [48];
  undefined1 local_618 [40];
  undefined1 local_5f0 [32];
  undefined1 local_5d0 [24];
  undefined1 local_5b8 [24];
  FArguments local_5a0;
  
  pTVar12 = SWindow::MakeCursorDecorator(&local_918);
  local_9a0.ReferenceController = (pTVar12->SharedReferenceCount).ReferenceController;
  local_9a8 = pTVar12->Object;
  if (local_9a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_9a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_9a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->WindowContainer;
  if (pTVar2 != (TSharedPtr<SWindow,1> *)&local_9a8) {
    pTVar2->Object = local_9a8;
    local_9a8 = (SWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WindowContainer).SharedReferenceCount,&local_9a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_918.SharedReferenceCount.ReferenceController);
  pFVar13 = FSlateApplication::Get();
  pcVar4 = *(code **)(*(longlong *)pFVar13 + 0x10);
  if (pTVar2->Object == (SWindow *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_958 = (this->WindowContainer).SharedReferenceCount.ReferenceController;
  local_960 = pTVar2->Object;
  if (local_958 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_958->SharedReferenceCount = (atomic<int>)((int)local_958->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_960 == (SWindow *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*pcVar4)(pFVar13,local_908);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_900);
  pFVar14 = STextBlock::FArguments::FArguments(&local_5a0);
  pFVar15 = FText::GetEmpty();
  local_9d8.TextData.Reference = (pFVar15->TextData).Reference;
  if (local_9d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_9d8.TextData.Reference + 8))
              (local_9d8.TextData.Reference,local_988);
  }
  local_9d8.Flags = pFVar15->Flags;
  local_9c8 = true;
  local_9b0 = 0;
  local_9c0 = (undefined1  [8])0x0;
  FStack_9b8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar14->_Text).Value,&local_9d8);
  (pFVar14->_Text).bIsSet = local_9c8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9c0,
             (FWriteAccessScope *)&local_930);
  if (((int)local_9b0 != 0) && (FStack_9b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9b8,0,0,0x10);
    local_9b0 = local_9b0 & 0xffffffff00000000;
  }
  if (local_930.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_930.Accessor,&local_930);
  }
  if (FStack_9b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9c0);
  if (local_9d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_9d8.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_984 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_978,&local_984,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_a08,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\UI\\SSynthTooltip.cpp"
             ,0x18,local_res8);
  FMemScope::~FMemScope(&local_978);
  FLLMScope::~FLLMScope(local_res18);
  pSVar5 = local_a08._Widget.Object;
  if (local_a08._Widget.Object == (STextBlock *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_a08._Widget.Object,(FSlateBaseNamedArgs *)pFVar14);
  STextBlock::Construct(local_a08._Widget.Object,pFVar14);
  if (local_a08._Widget.Object == (STextBlock *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((local_a08._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_a08._Widget.Object)->_padding_ + 0x228))(local_a08._Widget.Object);
    bVar11 = 0;
    if (cVar10 != '\0') goto LAB_14f0ce7dd;
  }
  else {
LAB_14f0ce7dd:
    bVar11 = 0x20;
  }
  *(byte *)&(local_a08._Widget.Object)->_padding_ =
       (byte)(local_a08._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_a08._Widget.Object)->_padding_ =
       (byte)(local_a08._Widget.Object)->_padding_ | bVar11;
  if (local_a08._Widget.Object == (STextBlock *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_a08._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_a08._Widget.Object == (STextBlock *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar7.ReferenceController = local_a08._Widget.SharedReferenceCount.ReferenceController;
  local_a08._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_a08._Widget.Object = (STextBlock *)0x0;
  if (pSVar5 == (STextBlock *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_998 = pSVar5;
  local_990.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = &this->TooltipText;
  if (pTVar3 != (TSharedPtr<STextBlock,1> *)&local_998) {
    pTVar3->Object = pSVar5;
    local_998 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TooltipText).SharedReferenceCount,&local_990);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_990.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  STextBlock::FArguments::~FArguments(&local_5a0);
  if ((this->WindowContainer).Object == (SWindow *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = (this->WindowContainer).Object;
  pFVar16 = SToolTip::FArguments::FArguments((FArguments *)local_8e8);
  if (pTVar3->Object == (STextBlock *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pSVar5 = pTVar3->Object;
  pTVar6 = (this->TooltipText).SharedReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar5 == (STextBlock *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_8f8 = (pFVar16->_Content).Widget.Object;
  pTStack_8f0 = (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar16->_Content).Widget.Object = (SWidget *)pSVar5;
  (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_8f0);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_970 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_968,&local_970,true);
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>
            (&local_9f0,"SToolTip",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\UI\\SSynthTooltip.cpp"
             ,0x1d,local_res10);
  FMemScope::~FMemScope(&local_968);
  FLLMScope::~FLLMScope(local_res20);
  pSVar8 = local_9f0._Widget.Object;
  if (local_9f0._Widget.Object == (SToolTip *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_9f0._Widget.Object,(FSlateBaseNamedArgs *)pFVar16);
  SToolTip::Construct(local_9f0._Widget.Object,pFVar16);
  if (local_9f0._Widget.Object == (SToolTip *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((local_9f0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_9f0._Widget.Object)->_padding_ + 0x228))(local_9f0._Widget.Object);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_14f0cead1;
  }
  bVar11 = 0x20;
LAB_14f0cead1:
  *(byte *)&(local_9f0._Widget.Object)->_padding_ =
       (byte)(local_9f0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_9f0._Widget.Object)->_padding_ =
       (byte)(local_9f0._Widget.Object)->_padding_ | bVar11;
  if (local_9f0._Widget.Object == (SToolTip *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_9f0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_9f0._Widget.Object == (SToolTip *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar7.ReferenceController = local_9f0._Widget.SharedReferenceCount.ReferenceController;
  local_9f0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_9f0._Widget.Object = (SToolTip *)0x0;
  if (pSVar8 == (SToolTip *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_940.Object = (SWidget *)pSVar8;
  local_940.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SWindow::SetContent(this_00,&local_940);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5b8);
  if ((void *)local_5b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5d0);
  if ((void *)local_5d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5f0);
  if ((void *)local_5f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_618);
  if ((void *)local_618._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_618._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_618);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_648);
  if ((void *)local_648._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_648._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_648);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_678.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6b8.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6d8);
  if ((void *)local_6d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6d8);
  if ((ITextData *)local_8e8._504_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_8e8._504_8_ + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_8e8);
  local_950.AllocatorInstance.Data = (param_1->_Slots).AllocatorInstance.Data;
  (param_1->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_950.ArrayNum = (param_1->_Slots).ArrayNum;
  local_950.ArrayMax = (param_1->_Slots).ArrayMax;
  (param_1->_Slots).ArrayNum = 0;
  (param_1->_Slots).ArrayMax = 0;
  TPanelChildren<SOverlay::FOverlaySlot>::AddSlots
            ((TPanelChildren<SOverlay::FOverlaySlot> *)&this->_padding_,&local_950);
  this->bIsVisible = false;
  return;
}

// SetOverlayText @ 14f0ffaa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSynthTooltip::SetOverlayText(SSynthTooltip *this,FText *param_1)

{
  STextBlock *this_00;
  undefined1 local_res8 [8];
  TAttribute<FText> local_38;
  
  this_00 = (this->TooltipText).Object;
  if (this_00 != (STextBlock *)0x0) {
    local_38.Value.TextData.Reference = (param_1->TextData).Reference;
    if (local_38.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.Value.TextData.Reference + 8))
                (local_38.Value.TextData.Reference,local_res8);
    }
    local_38.Value.Flags = param_1->Flags;
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    STextBlock::SetText(this_00,&local_38);
  }
  return;
}

// SetOverlayWindowPosition @ 14f0ffb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SSynthTooltip::SetOverlayWindowPosition(SSynthTooltip *this,TVector2<double> *param_1)

{
  code *pcVar1;
  double dVar2;
  FDeprecateVector2DParameter FVar3;
  bool bVar4;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (this->WindowPosition).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->WindowPosition).field0_0x0._s_0.Y = dVar2;
  if ((this->WindowContainer).Object == (SWindow *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar3._4_4_ = (float)(this->WindowPosition).field0_0x0._s_0.Y;
  FVar3._0_4_ = (float)(this->WindowPosition).field0_0x0._s_0.X;
  SWindow::MoveWindowTo((this->WindowContainer).Object,FVar3);
  return;
}

// SetWindowContainerVisibility @ 14f103220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSynthTooltip::SetWindowContainerVisibility(SSynthTooltip *this,bool param_1)

{
  TSharedPtr<SWindow,1> *this_00;
  FDeprecateVector2DParameter FVar1;
  SWindow *pSVar2;
  
  this_00 = &this->WindowContainer;
  pSVar2 = this_00->Object;
  if (pSVar2 != (SWindow *)0x0) {
    if (param_1) {
      if (this->bIsVisible == false) {
        this->bIsVisible = true;
        FVar1._4_4_ = (float)(this->WindowPosition).field0_0x0._s_0.Y;
        FVar1._0_4_ = (float)(this->WindowPosition).field0_0x0._s_0.X;
        SWindow::MoveWindowTo(pSVar2,FVar1);
        pSVar2 = TSharedPtr<SWindow,1>::operator->(this_00);
        SWindow::ShowWindow(pSVar2);
        return;
      }
    }
    else if (this->bIsVisible != false) {
      this->bIsVisible = false;
      pSVar2 = TSharedPtr<SWindow,1>::operator->(this_00);
      SWindow::HideWindow(pSVar2);
      return;
    }
  }
  return;
}

