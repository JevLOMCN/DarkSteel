// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 36

// SMessageLogListing @ 142bc8910

SMessageLogListing * __thiscall SMessageLogListing::SMessageLogListing(SMessageLogListing *this)

{
  FUICommandList *pFVar1;
  TRawPtrProxy<FUICommandList> local_res8;
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&___7SMessageLogListing__6B_;
  pFVar1 = ::operator_new(0x140);
  local_res8.Object = (FUICommandList *)0x0;
  if (pFVar1 != (FUICommandList *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FUICommandList__6B_;
    *(undefined8 *)&(pFVar1->ContextsInList).Elements = 0;
    *(undefined8 *)&(pFVar1->ContextsInList).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar1->ContextsInList).Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar1->ContextsInList).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar1->ContextsInList).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar1->ContextsInList).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar1->ContextsInList).Elements.field_0x34 = 0;
    (pFVar1->ContextsInList).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar1->ContextsInList).HashSize = 0;
    *(undefined8 *)&pFVar1->UICommandBindingMap = 0;
    *(undefined8 *)&(pFVar1->UICommandBindingMap).field_0x8 = 0;
    *(undefined8 *)&(pFVar1->UICommandBindingMap).field_0x20 = 0;
    *(undefined4 *)&(pFVar1->UICommandBindingMap).field_0x28 = 0;
    *(undefined4 *)&(pFVar1->UICommandBindingMap).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar1->UICommandBindingMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar1->UICommandBindingMap).field_0x34 = 0;
    *(undefined8 *)&(pFVar1->UICommandBindingMap).field_0x40 = 0;
    *(undefined4 *)&(pFVar1->UICommandBindingMap).field_0x48 = 0;
    *(undefined8 *)&pFVar1->UICommandContextMap = 0;
    *(undefined8 *)&(pFVar1->UICommandContextMap).field_0x8 = 0;
    *(undefined8 *)&(pFVar1->UICommandContextMap).field_0x20 = 0;
    *(undefined4 *)&(pFVar1->UICommandContextMap).field_0x28 = 0;
    *(undefined4 *)&(pFVar1->UICommandContextMap).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar1->UICommandContextMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar1->UICommandContextMap).field_0x34 = 0;
    *(undefined8 *)&(pFVar1->UICommandContextMap).field_0x40 = 0;
    *(undefined4 *)&(pFVar1->UICommandContextMap).field_0x48 = 0;
    (pFVar1->ParentUICommandLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->ParentUICommandLists).ArrayNum = 0;
    (pFVar1->ParentUICommandLists).ArrayMax = 0;
    (pFVar1->ChildUICommandLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->ChildUICommandLists).ArrayNum = 0;
    (pFVar1->ChildUICommandLists).ArrayMax = 0;
    *(undefined8 *)&pFVar1->CanProduceActionForCommand = 0;
    *(undefined8 *)&(pFVar1->CanProduceActionForCommand).field_0x8 = 0;
    *(undefined4 *)&(pFVar1->CanProduceActionForCommand).field_0x10 = 0;
    local_res8.Object = pFVar1;
  }
  TSharedRef<FUICommandList,1>::TSharedRef<FUICommandList,1><FUICommandList>
            (&this->UICommandList,&local_res8);
  (this->MessageLogListingViewModel).Object = (FMessageLogListingViewModel *)0x0;
  (this->MessageLogListingViewModel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bUpdatingSelection = false;
  (this->MessageListView).Object = (SListView<TSharedRef<FTokenizedMessage,1>_> *)0x0;
  (this->MessageListView).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~SMessageLogListing @ 142bcd040

void __thiscall SMessageLogListing::~SMessageLogListing(SMessageLogListing *this)

{
  code *pcVar1;
  bool bVar2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar3;
  
  this->_padding_ = (longlong)&___7SMessageLogListing__6B_;
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
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
  pTVar3 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)(((this->MessageLogListingViewModel).Object)->_padding_ + 200))();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar3,this);
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
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
  pTVar3 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)(((this->MessageLogListingViewModel).Object)->_padding_ + 0xd0))();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar3,this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageListView).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageLogListingViewModel).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UICommandList).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// BroadcastMessageDoubleClicked @ 142bd63d0

void __thiscall
SMessageLogListing::BroadcastMessageDoubleClicked
          (SMessageLogListing *this,TSharedPtr<FTokenizedMessage,1> *param_1)

{
  FMessageLogListingViewModel *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  TArray<TSharedRef<IMessageToken,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedPtr<IMessageToken,1> local_18;
  
  if ((param_1->Object == (FTokenizedMessage *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar6 = FTokenizedMessage::GetMessageTokens(param_1->Object);
  if (0 < pTVar6->ArrayNum) {
    if ((param_1->Object == (FTokenizedMessage *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FTokenizedMessage::GetMessageLink(param_1->Object,&local_18);
    if (local_18.Object != (IMessageToken *)0x0) {
      if (((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->MessageLogListingViewModel).Object;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0xb8);
      if ((local_18.Object == (IMessageToken *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
      pTVar7 = (TReferenceControllerBase<1> *)(local_18.Object)->_padding_;
      pTVar8 = pTVar7;
      pTVar9 = pTVar10;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar7->SharedReferenceCount;
        do {
          pTVar8 = pTVar10;
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
          if (aVar3 == (atomic<int>)0x0) goto LAB_142bd6511;
          LOCK();
          aVar5 = pTVar7->SharedReferenceCount;
          bVar4 = aVar3 == aVar5;
          if (bVar4) {
            pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar5 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar5;
        } while (!bVar4);
        pTVar8 = pTVar7;
        pTVar9 = (TReferenceControllerBase<1> *)(local_18.Object)->_padding_;
      }
LAB_142bd6511:
      pTVar7 = (TReferenceControllerBase<1> *)&pTVar9->SharedReferenceCount;
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        pTVar7 = pTVar10;
      }
      if ((pTVar7 != (TReferenceControllerBase<1> *)&(local_18.Object)->_padding_) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("SharedThis.Get() == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x67f,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pTVar9 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x416,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_28 = pTVar9;
      local_20 = pTVar8;
      if ((pTVar9 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x26c,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      (*pcVar2)(pFVar1,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// BroadcastMessageTokenClicked @ 142bd6610

void __thiscall
SMessageLogListing::BroadcastMessageTokenClicked
          (SMessageLogListing *this,TSharedPtr<FTokenizedMessage,1> *param_1,
          TSharedRef<IMessageToken,1> *param_2)

{
  FMessageLogListingViewModel *pFVar1;
  code *pcVar2;
  bool bVar3;
  FTokenizedMessage *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
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
  (**(code **)(((this->MessageLogListingViewModel).Object)->_padding_ + 0x78))();
  if (param_1->Object == (FTokenizedMessage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  local_18 = param_1->Object;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_18 == (FTokenizedMessage *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
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
  pFVar1 = (this->MessageLogListingViewModel).Object;
  (**(code **)(pFVar1->_padding_ + 0x68))(pFVar1,&local_18,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
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
  pFVar1 = (this->MessageLogListingViewModel).Object;
  (**(code **)(pFVar1->_padding_ + 0xb8))(pFVar1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ClearSelectedMessages @ 142bd71e0

void __thiscall SMessageLogListing::ClearSelectedMessages(SMessageLogListing *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000142bd7228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->MessageLogListingViewModel).Object)->_padding_ + 0x78))();
  return;
}

// Construct @ 142bdb630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000142bdbd7c) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMessageLogListing::Construct
          (SMessageLogListing *this,FArguments *param_1,TSharedRef<IMessageLogListing,1> *param_2)

{
  byte *pbVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  SListView<TSharedRef<FTokenizedMessage,1>_> *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  FSlotArguments *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FUICommandList *this_00;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FArguments *pFVar14;
  FSharedReferencer<1> FVar15;
  FSharedReferencer<1> FVar16;
  SScrollBar *pSVar17;
  FSharedReferencer<1> FVar18;
  uint uVar19;
  bool bVar20;
  char cVar21;
  byte bVar22;
  int iVar23;
  FArguments *pFVar24;
  FArguments *pFVar25;
  undefined8 *puVar26;
  TSharedRef<SWidget,1> *pTVar27;
  ulong64 uVar28;
  FArguments *this_01;
  ISlateStyle *pIVar29;
  FName *pFVar30;
  FSlot *this_02;
  FSizeParam *pFVar31;
  FSlot *this_03;
  FSlot *pFVar32;
  FSlotArguments *pFVar33;
  FArguments *pFVar34;
  TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1> *pTVar35;
  TSharedRef<SScrollBorder,1> *pTVar36;
  SScrollBox *pSVar37;
  SScrollBox *pSVar38;
  FSlotArguments *pFVar39;
  FArguments *pFVar40;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SBox,1> *pTVar41;
  FArguments *pFVar42;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar43;
  TSharedRef<SHorizontalBox,1> *pTVar44;
  FSlotArguments *pFVar45;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SVerticalBox,1> *pTVar46;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_06;
  TSharedRef<SBorder,1> *pTVar47;
  FMessageLogListingViewModel *pFVar48;
  SVerticalBox *pSVar49;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar50;
  FMargin *pFVar51;
  TAttribute<FMargin> *pTVar52;
  SHorizontalBox *this_07;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar53;
  TAttribute<float> *pTVar54;
  FArguments *pFVar55;
  TAttribute<FSlateColor> *pTVar56;
  FArguments *pFVar57;
  FText *pFVar58;
  TAttribute<FText> *pTVar59;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar60;
  TSharedRef<STextBlock,1> *pTVar61;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> *pTVar62;
  TSharedRef<SComboButton,1> *pTVar63;
  undefined1 *puVar64;
  TSharedRef<SWidget_const_,1> *pTVar65;
  SHorizontalBox *pSVar66;
  FArguments *pFVar67;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_08;
  TSharedRef<SButton,1> *pTVar68;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar69;
  TWeakPtr<FGenericCommands,1> *pTVar70;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar71;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar72;
  FGenericCommands *pFVar73;
  TSharedPtr<FUICommandInfo_const_,1> *pTVar74;
  TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar75;
  FSlotArguments *local_res8;
  SWidget *local_res18;
  FArguments *local_res20;
  uint uStack_485c;
  T0RequiredArgs local_4858;
  T0RequiredArgs local_4857;
  T0RequiredArgs local_4856;
  T0RequiredArgs local_4855;
  T0RequiredArgs local_4854;
  T0RequiredArgs local_4853;
  T0RequiredArgs local_4852;
  T0RequiredArgs local_4851;
  T0RequiredArgs local_4850;
  T0RequiredArgs local_484f;
  T0RequiredArgs local_484e [6];
  FArguments *local_4848;
  TSharedRef<SWidget,1> local_4838;
  FArguments *local_4828;
  FArguments *local_4820;
  TSharedRef<SWidget,1> local_4818;
  TSharedRef<SWidget,1> local_4808;
  FLLMScope local_47f8;
  FLLMScope local_47f4;
  FLLMScope local_47f0;
  FLLMScope local_47ec;
  FArguments *local_47e8;
  TSharedPtr<SVerticalBox,1> local_47d8;
  float local_47c8;
  float local_47c4;
  SScrollBorder *local_47c0;
  FSharedReferencer<1> local_47b8 [2];
  TSharedPtr<SHorizontalBox,1> local_47a8;
  FMessageLogListingViewModel *local_4798;
  FSharedReferencer<1> local_4790;
  FArguments *local_4788;
  undefined1 local_4780 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4778;
  ForAnyElementType FStack_4770;
  ulonglong local_4768;
  undefined1 local_4760 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4758;
  ForAnyElementType FStack_4750;
  ulonglong local_4748;
  FSlateBrush *local_4740;
  undefined1 local_4738;
  undefined1 local_4730 [8];
  ForAnyElementType FStack_4728;
  ulonglong local_4720;
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> local_4718;
  TSlateDecl<SListView<TSharedRef<FTokenizedMessage,1>_>,RequiredArgs::T0RequiredArgs> local_4700;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> local_46e8;
  SListView<TSharedRef<FTokenizedMessage,1>_> *local_46d0;
  FSharedReferencer<1> local_46c8;
  SWidget *local_46c0;
  TReferenceControllerBase<1> *pTStack_46b8;
  SWidget *local_46b0;
  TReferenceControllerBase<1> *pTStack_46a8;
  SWidget *local_46a0;
  TReferenceControllerBase<1> *pTStack_4698;
  undefined8 local_4690;
  undefined8 uStack_4688;
  undefined1 local_4680;
  undefined1 local_4678 [8];
  ForAnyElementType FStack_4670;
  ulonglong local_4668;
  code *local_4658;
  undefined8 uStack_4650;
  undefined4 local_4648 [2];
  FName local_4640;
  FMemScope local_4638;
  T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&> local_4630;
  FName local_4628;
  undefined8 local_4620;
  FSharedReferencer<1> FStack_4618;
  FSlot *local_4610;
  FSlot *local_4608;
  FMemScope local_4600;
  FName local_45f8;
  FName local_45f0;
  FMemScope local_45e8;
  FName local_45e0;
  FName local_45d8;
  FMemScope local_45d0;
  TAttribute<float> local_45c8;
  TAttribute<float> local_45a8;
  TAttribute<FOptionalSize> local_4588;
  TSharedRef<SWidget,1> local_4568;
  TSharedRef<SWidget,1> local_4558;
  TSharedRef<SWidget,1> local_4548;
  TSharedRef<SWidget,1> local_4538;
  NamedSlotProperty<SComboButton::FArguments> local_4528;
  TSharedRef<SWidget,1> local_4518;
  TSharedRef<SWidget,1> local_4508;
  TSharedRef<SWidget,1> local_44f8;
  NamedSlotProperty<SComboButton::FArguments> local_44e8;
  TSharedRef<SWidget,1> local_44d8;
  FDestructionSentinel local_44c8;
  FDestructionSentinel local_44b0;
  FDestructionSentinel local_4498;
  FDestructionSentinel local_4480;
  FLinearColor_u_0 local_4468;
  ESlateColorStylingMode local_4458;
  EStyleColor EStack_4457;
  undefined2 uStack_4456;
  undefined1 local_4454;
  undefined8 local_4450;
  undefined8 uStack_4448;
  undefined8 local_4440;
  FDestructionSentinel local_4438;
  undefined1 *local_4420;
  FDestructionSentinel local_4418;
  undefined1 *local_4400;
  FDestructionSentinel local_43f8;
  undefined1 *local_43e0;
  FDestructionSentinel local_43d8;
  undefined1 *local_43c0;
  FLinearColor_u_0 local_43b8;
  ESlateColorStylingMode local_43a8;
  EStyleColor EStack_43a7;
  undefined2 uStack_43a6;
  undefined1 local_43a4;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_43a0;
  code *local_4388;
  longlong lStack_4380;
  TSharedRef<SWidget_const_,1> local_4378;
  code *local_4368;
  longlong lStack_4360;
  TSharedRef<SComboButton,1> local_4358;
  TSharedRef<SWidget,1> local_4348;
  FText local_4338;
  code *local_4328;
  longlong lStack_4320;
  code *local_4318;
  longlong lStack_4310;
  code *local_4308;
  longlong lStack_4300;
  TSharedRef<SButton,1> local_42f8;
  TSharedRef<STextBlock,1> local_42e8;
  FText local_42d8;
  FText local_42c8;
  code *local_42b8;
  longlong lStack_42b0;
  code *local_42a8;
  longlong lStack_42a0;
  FName local_4298;
  FMargin local_4290;
  undefined1 local_4280 [16];
  TSharedRef<SWidget,1> local_4270;
  SScrollBar *local_4260;
  TReferenceControllerBase<1> *pTStack_4258;
  TSharedRef<SWidget,1> local_4250;
  TSharedRef<SBorder,1> local_4240;
  TSharedRef<STextBlock,1> local_4230;
  TSlateDecl<SScrollBorder,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
  local_4220;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_4208;
  TSharedRef<SVerticalBox,1> local_41f0;
  TSharedRef<SHorizontalBox,1> local_41e0;
  TSharedRef<SBox,1> local_41d0;
  TSharedRef<SScrollBorder,1> local_41c0;
  TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1> local_41b0;
  TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1> local_41a0;
  TSharedRef<SHorizontalBox,1> local_4190;
  code *local_4178;
  longlong lStack_4170;
  TSharedRef<SComboButton,1> local_4168;
  TSharedRef<STextBlock,1> local_4158;
  FText local_4148;
  FText local_4138;
  code *local_4128;
  longlong lStack_4120;
  undefined1 local_4118 [16];
  undefined1 local_4108 [32];
  undefined1 local_40e8 [24];
  undefined1 local_40d0 [16];
  undefined1 local_40c0 [32];
  undefined1 local_40a0 [24];
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_4088;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_4070;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_4058;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_4040;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_4028;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_4010;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_3ff8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3fe0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3fc8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3fb0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3f98;
  TSharedPtr<FUICommandInfo_const_,1> local_3f80;
  FMargin local_3f70;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_3f60;
  TAttribute<float> local_3f48;
  TAttribute<float> local_3f28;
  undefined1 local_3f08 [88];
  TOptional<FSizeParam> local_3eb0;
  undefined1 local_3e20 [608];
  undefined1 local_3bc0 [24];
  undefined1 local_3ba8 [24];
  undefined1 local_3b90 [24];
  undefined1 local_3b78 [32];
  TAttribute<FText> local_3b58;
  TAttribute<FSlateColor> local_3b28;
  TAttribute<FMargin> local_3af8;
  TAttribute<FText> local_3ac8;
  TAttribute<FText> local_3a98;
  TAttribute<FText> local_3a68;
  TAttribute<FMargin> local_3a38;
  TAttribute<FSlateColor> local_3a08;
  undefined1 local_39d8 [512];
  undefined1 local_37d8 [24];
  undefined1 local_37c0 [64];
  undefined1 local_3780 [48];
  undefined1 local_3750 [24];
  TAttribute<FText> local_3738;
  FSlotArguments local_3708;
  undefined1 local_3620 [536];
  undefined1 local_3408 [32];
  FSharedReferencer<1> local_33e8;
  FArguments local_33e0;
  FArguments local_31d8;
  FArguments local_2fd0;
  FSlotArguments local_2dc8;
  FSlotArguments local_2ce0;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_2bf8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_2af8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_29f8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_28f8;
  FArguments local_27f8;
  FArguments local_24c0;
  FArguments local_2188;
  FArguments local_1e48;
  FArguments local_1a68;
  FArguments local_1588;
  FArguments local_1048;
  FArguments local_af0;
  FArguments local_598;
  undefined8 uStack_40;
  
  uStack_40 = 0x142bdb652;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  local_res8 = (FSlotArguments *)((ulonglong)local_res8 & 0xffffffff00000000);
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  local_4798 = (FMessageLogListingViewModel *)param_2->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4790.ReferenceController = pTVar3;
  if (&this->MessageLogListingViewModel != (TSharedPtr<FMessageLogListingViewModel,1> *)&local_4798)
  {
    (this->MessageLogListingViewModel).Object = local_4798;
    local_4798 = (FMessageLogListingViewModel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MessageLogListingViewModel).SharedReferenceCount,&local_4790);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4790.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_47a8.Object = (SHorizontalBox *)0x0;
  local_47a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_47d8.Object = (SVerticalBox *)0x0;
  local_47d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar24 = SScrollBar::FArguments::FArguments((FArguments *)local_39d8);
  FLLMScope::FLLMScope(&local_47f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_45d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_45d0,&local_45d8,true);
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>
            (&local_4718,"SScrollBar",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
             ,0x2d,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_45d0);
  FLLMScope::~FLLMScope(&local_47f8);
  pSVar17 = local_4718._Widget.Object;
  if ((local_4718._Widget.Object == (SScrollBar *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_4718._Widget.Object,(FSlateBaseNamedArgs *)pFVar24);
  SScrollBar::Construct(local_4718._Widget.Object,pFVar24);
  if ((local_4718._Widget.Object == (SScrollBar *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (((local_4718._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar21 = (**(code **)((local_4718._Widget.Object)->_padding_ + 0x228))
                       (local_4718._Widget.Object);
    bVar22 = 0;
    if (cVar21 != '\0') goto LAB_142bdb7f5;
  }
  else {
LAB_142bdb7f5:
    bVar22 = 0x20;
  }
  *(byte *)&(local_4718._Widget.Object)->_padding_ =
       (byte)(local_4718._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_4718._Widget.Object)->_padding_ =
       (byte)(local_4718._Widget.Object)->_padding_ | bVar22;
  if ((local_4718._Widget.Object == (SScrollBar *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_4718._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_4718._Widget.Object == (SScrollBar *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar18.ReferenceController = local_4718._Widget.SharedReferenceCount.ReferenceController;
  local_4718._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_4718._Widget.Object = (SScrollBar *)0x0;
  if ((pSVar17 == (SScrollBar *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3750);
  if ((void *)local_3750._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3750._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3750);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3780);
  if ((void *)local_3780._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3780._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3780);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_37c0);
  if ((void *)local_37c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_37c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_37c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_37d8);
  if ((void *)local_37d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_37d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_37d8);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_39d8);
  pFVar25 = SListView<TSharedRef<FTokenizedMessage,1>_>::FArguments::FArguments(&local_1a68);
  if (((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar48 = (this->MessageLogListingViewModel).Object;
  pFVar25->_ListItemsSource_ArrayPointer =
       (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar25->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedRef<FTokenizedMessage,1>_> *)0x0;
  local_4620 = 0;
  FStack_4618.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&pFVar25->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedRef<FTokenizedMessage,1>_>,1> *)
      &local_4620) {
    (pFVar25->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedRef<FTokenizedMessage,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar25->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_4618)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_4618.ReferenceController);
  pFVar25->_ListItemsSource_ArrayPointer = &pFVar48->FilteredMessages;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar25->_OnGenerateRow,
             (FWriteAccessScope *)&local_4438);
  local_4420 = &(pFVar25->_OnGenerateRow).field_0x8;
  puVar26 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_4420);
  pFVar39 = local_res8;
  if (puVar26 != (undefined8 *)0x0) {
    uVar19 = uStack_4650._4_4_;
    uStack_485c = uStack_4650._4_4_;
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4270);
    pFVar39 = (FSlotArguments *)(pTVar27->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar27->Object;
    if (pFVar39 != (FSlotArguments *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar39->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pFVar39->field_0x8 + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pFVar39->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pFVar39->field_0x8 + 1);
      UNLOCK();
    }
    *puVar26 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_VFTokenizedMessage___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_VFTokenizedMessage___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar26[3] = pSVar4;
    puVar26[4] = pFVar39;
    if (pFVar39 != (FSlotArguments *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar39->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pFVar39->field_0xc + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    puVar26[5] = MakeMessageLogListItemWidget;
    puVar26[6] = (ulonglong)uVar19 << 0x20;
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar39);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar39);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4270.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  if (local_4438.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4438.Accessor,&local_4438);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar25->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_4418);
  local_4400 = &(pFVar25->_OnSelectionChanged).field_0x8;
  puVar26 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_4400);
  pFVar39 = local_res8;
  if (puVar26 != (undefined8 *)0x0) {
    uVar19 = uStack_4650._4_4_;
    uStack_485c = uStack_4650._4_4_;
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4348);
    pFVar39 = (FSlotArguments *)(pTVar27->SharedReferenceCount).ReferenceController;
    local_4848 = (FArguments *)pTVar27->Object;
    if (pFVar39 != (FSlotArguments *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar39->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pFVar39->field_0x8 + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pFVar39->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pFVar39->field_0x8 + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar13 = true;
    bVar12 = true;
    *puVar26 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFTokenizedMessage___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXV__TSharedPtr_VFTokenizedMessage___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar26[3] = local_4848;
    puVar26[4] = pFVar39;
    if (pFVar39 != (FSlotArguments *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar39->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pFVar39->field_0xc + 1);
      UNLOCK();
    }
    puVar26[5] = OnLineSelectionChanged;
    puVar26[6] = (ulonglong)uVar19 << 0x20;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar39);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar39);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4348.SharedReferenceCount.ReferenceController);
  }
  bVar12 = false;
  bVar11 = false;
  if (local_4418.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4418.Accessor,&local_4418);
  }
  if (FVar18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar18.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar18.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar18.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar18.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4260 = (pFVar25->_ExternalScrollbar).Object;
  pTStack_4258 = (pFVar25->_ExternalScrollbar).SharedReferenceCount.ReferenceController;
  (pFVar25->_ExternalScrollbar).Object = pSVar17;
  (pFVar25->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       FVar18.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4258);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar18.ReferenceController);
  pFVar25->_ConsumeMouseWheel = Always;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar25->_OnContextMenuOpening,(FWriteAccessScope *)&local_43f8);
  local_43e0 = &(pFVar25->_OnContextMenuOpening).field_0x8;
  puVar26 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_43e0);
  pFVar39 = local_res8;
  if (puVar26 != (undefined8 *)0x0) {
    uVar19 = uStack_4650._4_4_;
    uStack_485c = uStack_4650._4_4_;
    pTVar27 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4250);
    pFVar39 = (FSlotArguments *)(pTVar27->SharedReferenceCount).ReferenceController;
    local_4848 = (FArguments *)pTVar27->Object;
    if (pFVar39 != (FSlotArguments *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar39->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pFVar39->field_0x8 + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pFVar39->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pFVar39->field_0x8 + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar12 = true;
    *puVar26 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar28 = FDelegateHandle::GenerateNewID();
    puVar26[2] = uVar28;
    *puVar26 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar26[3] = local_4848;
    puVar26[4] = pFVar39;
    if (pFVar39 != (FSlotArguments *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar39->field_0xc =
           (atomic<int>)((int)*(atomic<int> *)&pFVar39->field_0xc + 1);
      UNLOCK();
    }
    puVar26[5] = ContextMenuOpening;
    puVar26[6] = (ulonglong)uVar19 << 0x20;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar39);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4250.SharedReferenceCount.ReferenceController);
  }
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  if (local_43f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_43f8.Accessor,&local_43f8);
  }
  FLLMScope::FLLMScope(&local_47f4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_45e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_45e8,&local_45e0,true);
  TSlateDecl<SListView<TSharedRef<FTokenizedMessage,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedRef<FTokenizedMessage,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_4700,"SListView<TSharedRef<FTokenizedMessage>>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
             ,0x2f,(T0RequiredArgs *)&local_res18);
  FMemScope::~FMemScope(&local_45e8);
  FLLMScope::~FLLMScope(&local_47f4);
  pSVar5 = local_4700._Widget.Object;
  if ((local_4700._Widget.Object == (SListView<TSharedRef<FTokenizedMessage,1>_> *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_4700._Widget.Object,(FSlateBaseNamedArgs *)pFVar25);
  SListView<TSharedRef<FTokenizedMessage,1>_>::Construct(local_4700._Widget.Object,pFVar25);
  if ((local_4700._Widget.Object == (SListView<TSharedRef<FTokenizedMessage,1>_> *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (((local_4700._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar21 = (**(code **)((local_4700._Widget.Object)->_padding_ + 0x228))
                       (local_4700._Widget.Object);
    bVar22 = 0;
    if (cVar21 != '\0') goto LAB_142bdbed5;
  }
  else {
LAB_142bdbed5:
    bVar22 = 0x20;
  }
  *(byte *)&(local_4700._Widget.Object)->_padding_ =
       (byte)(local_4700._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_4700._Widget.Object)->_padding_ =
       (byte)(local_4700._Widget.Object)->_padding_ | bVar22;
  if ((local_4700._Widget.Object == (SListView<TSharedRef<FTokenizedMessage,1>_> *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_4700._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_4700._Widget.Object == (SListView<TSharedRef<FTokenizedMessage,1>_> *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar16.ReferenceController = local_4700._Widget.SharedReferenceCount.ReferenceController;
  local_4700._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_4700._Widget.Object = (SListView<TSharedRef<FTokenizedMessage,1>_> *)0x0;
  if ((pSVar5 == (SListView<TSharedRef<FTokenizedMessage,1>_> *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_46d0 = pSVar5;
  local_46c8.ReferenceController = FVar16.ReferenceController;
  if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MessageListView !=
      (TSharedPtr<SListView<TSharedRef<FTokenizedMessage,1>_>,1> *)&local_46d0) {
    (this->MessageListView).Object = pSVar5;
    local_46d0 = (SListView<TSharedRef<FTokenizedMessage,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MessageListView).SharedReferenceCount,&local_46c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_46c8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SListView<TSharedRef<FTokenizedMessage,1>_>::FArguments::~FArguments(&local_1a68);
  this_01 = SBorder::FArguments::FArguments(&local_1e48);
  pIVar29 = FAppStyle::Get();
  pcVar10 = *(code **)((longlong)*pIVar29 + 0x50);
  pFVar30 = ::FName::FName(&local_4298,"Brushes.Recessed");
  local_4740 = (FSlateBrush *)(*pcVar10)(pIVar29,*pFVar30);
  local_4738 = 1;
  local_4730 = (undefined1  [8])0x0;
  FStack_4728.Data = (FScriptContainerElement *)0x0;
  pFVar32 = (FSlot *)0x0;
  local_4720 = 0;
  (this_01->_BorderImage).Value = local_4740;
  (this_01->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_01->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4730);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4730,
             (FWriteAccessScope *)&local_44c8);
  if (((int)local_4720 != 0) && (FStack_4728.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4728.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4728,0,0,0x10);
    local_4720 = local_4720 & 0xffffffff00000000;
  }
  if (local_44c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_44c8.Accessor,&local_44c8);
  }
  if (FStack_4728.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4728.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4730);
  local_4848 = SBorder::FArguments::Padding(this_01,__real_40c00000);
  local_4828 = SVerticalBox::FArguments::FArguments(&local_31d8);
  this_02 = ::operator_new(0x58);
  local_4608 = pFVar32;
  if (this_02 != (FSlot *)0x0) {
    *(undefined8 *)this_02 = 0;
    *(undefined8 *)&this_02->field_0x8 = 0;
    *(undefined8 *)&this_02->field_0x10 = 0;
    *(undefined8 *)&this_02->field_0x18 = 0;
    *(undefined8 *)&this_02->field_0x20 = 0;
    *(undefined8 *)&this_02->field_0x28 = 0;
    *(undefined8 *)&this_02->field_0x30 = 0;
    *(undefined8 *)&this_02->field_0x38 = 0;
    *(undefined8 *)&this_02->field_0x40 = 0;
    *(undefined8 *)&this_02->field_0x48 = 0;
    *(undefined8 *)&this_02->field_0x50 = 0;
    local_4608 = SVerticalBox::FSlot::FSlot(this_02);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_3f08,(FSlot *)&local_4608);
  local_4780._0_4_ = 1.0;
  local_4768 = 0;
  local_4780[4] = true;
  local_4778.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_4770.Data = (FScriptContainerElement *)0x0;
  pFVar31 = (FSizeParam *)FStretch::FStretch((FStretch *)local_4118,(TAttribute<float> *)local_4780)
  ;
  TOptional<FSizeParam>::operator=(&local_3eb0,pFVar31);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40e8);
  if ((void *)local_40e8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_40e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4108);
  if ((void *)local_4108._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4108._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4108);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4778,(FWriteAccessScope *)&local_44b0);
  if (((int)local_4768 != 0) && (FStack_4770.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4770.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4770,0,0,0x10);
    local_4768 = local_4768 & 0xffffffff00000000;
  }
  if (local_44b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_44b0.Accessor,&local_44b0);
  }
  if (FStack_4770.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4770.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4778.AccessDetector);
  local_4680 = 1;
  local_3f08[0x28] = 1;
  local_4668 = 0;
  local_4690 = 0;
  uStack_4688 = 0;
  local_4678 = (undefined1  [8])0x0;
  FStack_4670.Data = (FScriptContainerElement *)0x0;
  local_3f08._24_8_ = 0;
  local_3f08._32_8_ = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_3f08 + 0x30),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4678);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4678,
             (FWriteAccessScope *)&local_4498);
  if (((int)local_4668 != 0) && (FStack_4670.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4670.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4670,0,0,0x10);
    local_4668 = local_4668 & 0xffffffff00000000;
  }
  if (local_4498.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4498.Accessor,&local_4498);
  }
  if (FStack_4670.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4670.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4678);
  local_4820 = SHorizontalBox::FArguments::FArguments(&local_33e0);
  this_03 = ::operator_new(0x58);
  if (this_03 != (FSlot *)0x0) {
    *(undefined8 *)this_03 = 0;
    *(undefined8 *)&this_03->field_0x8 = 0;
    *(undefined8 *)&this_03->field_0x10 = 0;
    *(undefined8 *)&this_03->field_0x18 = 0;
    *(undefined8 *)&this_03->field_0x20 = 0;
    *(undefined8 *)&this_03->field_0x28 = 0;
    *(undefined8 *)&this_03->field_0x30 = 0;
    *(undefined8 *)&this_03->field_0x38 = 0;
    *(undefined8 *)&this_03->field_0x40 = 0;
    *(undefined8 *)&this_03->field_0x48 = 0;
    *(undefined8 *)&this_03->field_0x50 = 0;
    pFVar32 = (FSlot *)SHorizontalBox::FSlot::FSlot(this_03);
  }
  local_4610 = pFVar32;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_3708,(FSlot *)&local_4610);
  local_45a8.Value = 1.0;
  local_45a8.Getter._16_8_ = 0;
  local_45a8.bIsSet = true;
  local_45a8.Getter._0_8_ = 0;
  local_45a8.Getter._8_8_ = 0;
  local_4788 = (FArguments *)
               SHorizontalBox::FSlot::FSlotArguments::FillWidth(&local_3708,&local_45a8);
  local_47e8 = SScrollBox::FArguments::FArguments((FArguments *)local_3e20);
  local_47e8->_Orientation = Orient_Horizontal;
  pFVar33 = SScrollBox::Slot(&local_2dc8);
  local_4760._0_4_ = 1.0;
  local_4748 = 0;
  local_4760[4] = true;
  local_4758.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_4750.Data = (FScriptContainerElement *)0x0;
  pFVar31 = (FSizeParam *)FStretch::FStretch((FStretch *)local_40d0,(TAttribute<float> *)local_4760)
  ;
  TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar33->field_0x58,pFVar31);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40a0);
  if ((void *)local_40a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_40a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40c0);
  if ((void *)local_40c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_40c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4758,(FWriteAccessScope *)&local_4480);
  if (((int)local_4748 != 0) && (FStack_4750.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4750.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4750,0,0,0x10);
    local_4748 = local_4748 & 0xffffffff00000000;
  }
  if (local_4480.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4480.Accessor,&local_4480);
  }
  if (FStack_4750.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4750.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4758.AccessDetector);
  pFVar34 = SScrollBorder::FArguments::FArguments((FArguments *)local_3620);
  pTVar35 = TSharedPtr<SListView<TSharedRef<FTokenizedMessage,1>_>,1>::ToSharedRef
                      (&this->MessageListView,&local_41a0);
  pTVar3 = (pTVar35->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar35->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_46c0 = (pFVar34->_Content).Widget.Object;
  pTStack_46b8 = (pFVar34->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar34->_Content).Widget.Object = (SWidget *)pSVar5;
  (pFVar34->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_46b8);
  local_4630.Arg0 =
       TSharedPtr<SListView<TSharedRef<FTokenizedMessage,1>_>,1>::ToSharedRef
                 (&this->MessageListView,&local_41b0);
  FLLMScope::FLLMScope(&local_47f0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4628 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4600,&local_4628,true);
  TSlateDecl<SScrollBorder,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
  ::
  TSlateDecl<SScrollBorder,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
            (&local_4220,"SScrollBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
             ,0x4b,&local_4630);
  FMemScope::~FMemScope(&local_4600);
  FLLMScope::~FLLMScope(&local_47f0);
  pTVar36 = TSlateDecl<SScrollBorder,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<FTokenizedMessage,1>_>,1>_&&>_>
            ::operator<<=(&local_4220,&local_41c0,pFVar34);
  pTVar6 = (pTVar36->SharedReferenceCount).ReferenceController;
  local_47c0 = pTVar36->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_47b8[0].ReferenceController = pTVar6;
  if ((SScrollBorder **)&pFVar33->field_0x8 != &local_47c0) {
    *(SScrollBorder **)&pFVar33->field_0x8 = local_47c0;
    local_47c0 = (SScrollBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar33->field_0x10,local_47b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_47b8[0].ReferenceController);
  pFVar14 = local_47e8;
  pTVar75 = &local_47e8->_Slots;
  pFVar7 = (FSlotArguments *)(pTVar75->AllocatorInstance).Data;
  if (((pFVar7 <= pFVar33) && (pFVar33 < pFVar7 + (local_47e8->_Slots).ArrayMax)) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar20)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar23 = (pFVar14->_Slots).ArrayNum;
  piVar2 = &(pFVar14->_Slots).ArrayMax;
  if (iVar23 == *piVar2) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8e8,&pTVar75->AllocatorInstance,piVar2);
  }
  (pFVar14->_Slots).ArrayNum = iVar23 + 1;
  SScrollBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)((pTVar75->AllocatorInstance).Data + (longlong)iVar23 * 0xe8),pFVar33
            );
  FLLMScope::FLLMScope(&local_47ec,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4640 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4638,&local_4640,true);
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
            (&local_46e8,"SScrollBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
             ,0x46,(T0RequiredArgs *)&local_res20);
  FMemScope::~FMemScope(&local_4638);
  FLLMScope::~FLLMScope(&local_47ec);
  pSVar37 = TSharedPtr<SScrollBox,1>::operator->(&local_46e8._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar37,(FSlateBaseNamedArgs *)local_47e8);
  pSVar37 = local_46e8._Widget.Object;
  SScrollBox::Construct(local_46e8._Widget.Object,local_47e8);
  pSVar38 = TSharedPtr<SScrollBox,1>::operator->(&local_46e8._Widget);
  if ((pSVar38->field_0x30 & 0x10) == 0) {
    cVar21 = (**(code **)(*(longlong *)pSVar38 + 0x228))(pSVar38);
    bVar22 = 0;
    if (cVar21 == '\0') goto LAB_142bdc841;
  }
  bVar22 = 0x20;
LAB_142bdc841:
  pSVar38->field_0x30 = pSVar38->field_0x30 & 0xdf;
  pSVar38->field_0x30 = pSVar38->field_0x30 | bVar22;
  pSVar38 = TSharedPtr<SScrollBox,1>::operator->(&local_46e8._Widget);
  pSVar38->field_0x31 = pSVar38->field_0x31 | 4;
  if ((local_46e8._Widget.Object == (SScrollBox *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar16.ReferenceController = local_46e8._Widget.SharedReferenceCount.ReferenceController;
  local_46e8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_46e8._Widget.Object = (SScrollBox *)0x0;
  if ((pSVar37 == (SScrollBox *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar20)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_4508.SharedReferenceCount.ReferenceController = FVar16.ReferenceController;
  if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar39 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_4788,&local_4508);
  local_4788 = SHorizontalBox::FArguments::operator+(local_4820,pFVar39);
  pFVar39 = SHorizontalBox::Slot(&local_2ce0);
  local_4820 = (FArguments *)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar39);
  pFVar40 = SBox::FArguments::FArguments(&local_2188);
  local_4588.Value.Size = __real_41800000;
  local_4588.Getter._16_8_ = 0;
  local_4588.Getter._0_8_ = 0;
  local_4588.Getter._8_8_ = 0;
  local_4588.bIsSet = true;
  pFVar40 = SBox::FArguments::WidthOverride(pFVar40,&local_4588);
  if (FVar18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar18.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar18.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar18.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar18.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_46b0 = (pFVar40->_Content).Widget.Object;
  pTStack_46a8 = (pFVar40->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar40->_Content).Widget.Object = (SWidget *)pSVar17;
  (pFVar40->_Content).Widget.SharedReferenceCount.ReferenceController = FVar18.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_46a8);
  this_04 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_4088,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
                       ,0x54,&local_4858);
  pTVar41 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_04,&local_41d0,pFVar40);
  local_4568.Object = (SWidget *)pTVar41->Object;
  local_47e8 = (FArguments *)(pTVar41->SharedReferenceCount).ReferenceController;
  if (local_47e8 != (FArguments *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_47e8)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_47e8)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4568.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_47e8;
  pFVar39 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_4820,&local_4568);
  pFVar42 = SHorizontalBox::FArguments::operator+(local_4788,pFVar39);
  pTVar43 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_4040,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
                       ,0x42,&local_4857);
  pTVar44 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar43,&local_41e0,pFVar42);
  local_4558.Object = (SWidget *)pTVar44->Object;
  local_4820 = (FArguments *)(pTVar44->SharedReferenceCount).ReferenceController;
  if (local_4820 != (FArguments *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_4820)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_4820)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4558.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_4820;
  pFVar45 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_3f08,&local_4558);
  local_4828 = SVerticalBox::FArguments::operator+(local_4828,pFVar45);
  this_05 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_4058,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
                       ,0x3d,&local_4856);
  FVar15.ReferenceController = local_47d8.SharedReferenceCount.ReferenceController;
  local_47d8.Object = (this_05->_Widget).Object;
  pTVar8 = (this_05->_Widget).SharedReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_47d8.SharedReferenceCount.ReferenceController = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  pTVar46 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_05,&local_41f0,local_4828);
  pTVar9 = (pTVar46->SharedReferenceCount).ReferenceController;
  pSVar49 = pTVar46->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_46a0 = (local_4848->_Content).Widget.Object;
  pTStack_4698 = (local_4848->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_4848->_Content).Widget.Object = (SWidget *)pSVar49;
  (local_4848->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4698);
  this_06 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_4070,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
                       ,0x39,&local_4855);
  pTVar47 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_06,&local_4240,local_4848);
  local_4548.Object = (SWidget *)pTVar47->Object;
  local_4828 = (FArguments *)(pTVar47->SharedReferenceCount).ReferenceController;
  if (local_4828 != (FArguments *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_4828)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_4828)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4548.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_4828;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_4548);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4828);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_4240);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4070._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_41f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4058._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_4820);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_41e0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4040._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_47e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_41d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4088._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar18.ReferenceController);
  SBox::FArguments::~FArguments(&local_2188);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2ce0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_46e8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_41c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4220._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_41b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_41a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_33e8.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3408);
  if ((void *)local_3408._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3408._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3408);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_3620);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_2dc8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b78);
  if ((void *)local_3b78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3b78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3b78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b90);
  if ((void *)local_3b90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3b90._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3b90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3ba8);
  if ((void *)local_3ba8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3ba8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3ba8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3bc0);
  if ((void *)local_3bc0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3bc0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3bc0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3e20._544_8_);
  DestructItems<SScrollBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_3e20._504_8_,local_3e20._512_4_);
  if ((FSlotArguments *)local_3e20._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_3e20._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_3e20);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3708);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_33e0._Slots.AllocatorInstance.Data,local_33e0._Slots.ArrayNum);
  if ((FSlotArguments *)local_33e0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_33e0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_33e0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_3f08);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_31d8._Slots.AllocatorInstance.Data,local_31d8._Slots.ArrayNum);
  if ((FSlotArguments *)local_31d8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_31d8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_31d8);
  SBorder::FArguments::~FArguments(&local_1e48);
  pFVar48 = TSharedPtr<FMessageLogListingViewModel,1>::operator->(&this->MessageLogListingViewModel)
  ;
  if (((pFVar48->bShowFilters != false) ||
      (pFVar48 = TSharedPtr<FMessageLogListingViewModel,1>::operator->
                           (&this->MessageLogListingViewModel), pFVar48->bShowPages != false)) ||
     (pFVar48 = TSharedPtr<FMessageLogListingViewModel,1>::operator->
                          (&this->MessageLogListingViewModel), pFVar48->bAllowClear != false)) {
    pSVar49 = TSharedPtr<SVerticalBox,1>::operator->(&local_47d8);
    pFVar50 = SVerticalBox::AddSlot(pSVar49,&local_2bf8);
    pFVar45 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)&pFVar50->_padding_)
    ;
    pFVar51 = FMargin::FMargin(&local_4290,__real_4018000000000000,__real_4018000000000000,0.0,0.0);
    pTVar52 = TAttribute<FMargin>::TAttribute<FMargin>(&local_3a38,pFVar51);
    pFVar45 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar45->field_0x18,pTVar52);
    pFVar42 = SHorizontalBox::FArguments::FArguments(&local_2fd0);
    pTVar43 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_4010,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
                         ,0x67,&local_4854);
    FVar16.ReferenceController = local_47a8.SharedReferenceCount.ReferenceController;
    local_47a8.SharedReferenceCount.ReferenceController =
         (pTVar43->_Widget).SharedReferenceCount.ReferenceController;
    pSVar66 = (pTVar43->_Widget).Object;
    if (local_47a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_47a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_47a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_47a8.Object = pSVar66;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar16.ReferenceController);
    pTVar44 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar43,&local_4190,pFVar42);
    pTVar3 = (pTVar44->SharedReferenceCount).ReferenceController;
    local_4538.Object = (SWidget *)pTVar44->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_4538.SharedReferenceCount.ReferenceController = pTVar3;
    TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar45,&local_4538);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4190.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4010._Widget.SharedReferenceCount.ReferenceController);
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_2fd0._Slots.AllocatorInstance.Data,local_2fd0._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_2fd0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_2fd0._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2fd0);
    SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_2bf8);
    pFVar48 = TSharedPtr<FMessageLogListingViewModel,1>::operator->
                        (&this->MessageLogListingViewModel);
    if (pFVar48->bShowFilters != false) {
      this_07 = TSharedPtr<SHorizontalBox,1>::operator->(&local_47a8);
      pFVar53 = SHorizontalBox::AddSlot(this_07,&local_2af8);
      local_47c8 = 1.0;
      pTVar54 = TAttribute<float>::TAttribute<float>(&local_3f48,&local_47c8);
      pFVar39 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                          ((FSlotArguments *)&pFVar53->_padding_,pTVar54);
      pFVar39 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                          ((FSlotArgumentsMixin *)&pFVar39->field_0x48,HAlign_Left);
      pFVar55 = SComboButton::FArguments::FArguments(&local_27f8);
      ::FName::FName(&local_45f8,"Button");
      pIVar29 = FAppStyle::Get();
      pFVar55 = SComboButton::FArguments::ButtonStyle(pFVar55,pIVar29,&local_45f8,(char *)0x0);
      pTVar56 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FSlateColor>
                          (&local_3a08,&FStyleColors::White);
      pFVar55 = SComboButton::FArguments::ForegroundColor(pFVar55,pTVar56);
      lStack_4170 = (ulonglong)uStack_485c << 0x20;
      local_4178 = OnGetFilterMenuContent;
      local_4528.OwnerDeclaration =
           SComboButton::FArguments::OnGetMenuContent<SMessageLogListing>
                     (pFVar55,this,(pmf_4cac8ddc *)&local_4178);
      local_4528.SlotContent = &(local_4528.OwnerDeclaration)->_ButtonContent;
      pFVar57 = STextBlock::FArguments::FArguments(&local_1048);
      pFVar58 = FText::AsLocalizable_Advanced_LocText
                          (&local_4138,L"Developer.MessageLog",L"Show",L"SHOW");
      pTVar59 = TAttribute<FText>::TAttribute<FText>(&local_3738,pFVar58);
      pFVar57 = STextBlock::FArguments::Text(pFVar57,pTVar59);
      pFVar58 = FText::AsLocalizable_Advanced_LocText
                          (&local_4148,L"Developer.MessageLog",L"ShowToolTip",
                           L"Only show messages of the selected types");
      pTVar59 = TAttribute<FText>::TAttribute<FText>(&local_3a68,pFVar58);
      pFVar57 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                          ((TSlateBaseNamedArgs<STextBlock> *)pFVar57,pTVar59);
      pTVar60 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                          (&local_3fe0,"STextBlock",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
                           ,0x76,&local_4853);
      pTVar61 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar60,&local_4158,pFVar57);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_4818,pTVar61);
      pFVar55 = NamedSlotProperty<SComboButton::FArguments>::operator[](&local_4528,&local_4818);
      pTVar62 = MakeTDecl<SComboButton,RequiredArgs::T0RequiredArgs>
                          (&local_3ff8,"SComboButton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
                           ,0x70,&local_4852);
      pTVar63 = TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar62,&local_4168,pFVar55);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SComboButton>(&local_4518,pTVar63);
      TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar39,&local_4518);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4518.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4168.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3ff8._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_4818.SharedReferenceCount.ReferenceController._4_4_,
                          local_4818.SharedReferenceCount.ReferenceController._0_4_));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4158.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3fe0._Widget.SharedReferenceCount.ReferenceController);
      FText::~FText(&local_4148);
      FText::~FText(&local_4138);
      STextBlock::FArguments::~FArguments(&local_1048);
      SComboButton::FArguments::~FArguments(&local_27f8);
      SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_2af8);
    }
    if ((pSVar66 == (SHorizontalBox *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar53 = SHorizontalBox::AddSlot(pSVar66,&local_29f8);
    local_45c8.Value = 1.0;
    local_45c8.bIsSet = true;
    local_45c8.Getter._16_8_ = 0;
    local_45c8.Getter._0_8_ = 0;
    local_45c8.Getter._8_8_ = 0;
    local_res8 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                           ((FSlotArguments *)&pFVar53->_padding_,&local_45c8);
    puVar64 = &local_res8->field_0x48;
    if (local_4648 != (undefined4 *)puVar64) {
      *(undefined4 *)puVar64 = 3;
      local_res8->field_0x4c = 1;
    }
    if (puVar64 == (undefined1 *)0x0) {
      local_res8 = (FSlotArguments *)0x0;
    }
    pFVar55 = SComboButton::FArguments::FArguments(&local_24c0);
    local_4818.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_4818.Object = (SWidget *)IsPageWidgetEnabled;
    lStack_4120 = (ulonglong)local_4818.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_4128 = IsPageWidgetEnabled;
    TAttribute<bool>::Bind<SMessageLogListing>
              ((TAttribute<bool> *)&pFVar55->_padding_,this,(pmf_b078e480 *)&local_4128);
    local_4818.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_4818.Object = (SWidget *)GetPageWidgetVisibility;
    lStack_4380 = (ulonglong)local_4818.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_4388 = GetPageWidgetVisibility;
    TAttribute<EVisibility>::Bind<SMessageLogListing>
              ((TAttribute<EVisibility> *)&pFVar55->_padding_,this,(pmf_4cd0b4cf *)&local_4388);
    ::FName::FName(&local_45f0,"Button");
    pIVar29 = FAppStyle::Get();
    pFVar55 = SComboButton::FArguments::ButtonStyle(pFVar55,pIVar29,&local_45f0,(char *)0x0);
    local_4458 = FStyleColors::White.ColorUseRule;
    EStack_4457 = FStyleColors::White.ColorTableId;
    uStack_4456 = FStyleColors::White._18_2_;
    local_4454 = 1;
    local_4468 = FStyleColors::White.SpecifiedColor.field0_0x0;
    local_4440 = 0;
    local_4450 = 0;
    uStack_4448 = 0;
    pFVar55 = SComboButton::FArguments::ForegroundColor
                        (pFVar55,(TAttribute<FSlateColor> *)&local_4468._s_0);
    local_res20 = pFVar55;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar55->_OnGetMenuContent
               ,(FWriteAccessScope *)&local_43d8);
    local_43c0 = &(pFVar55->_OnGetMenuContent).field_0x8;
    puVar26 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_43c0);
    pFVar39 = local_res8;
    if (puVar26 != (undefined8 *)0x0) {
      local_47d8.Object = (SVerticalBox *)OnGetPageMenuContent;
      local_47d8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)((ulonglong)(uint)local_4290.Bottom << 0x20);
      pTVar65 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4378);
      pFVar39 = (FSlotArguments *)(pTVar65->SharedReferenceCount).ReferenceController;
      local_res18 = pTVar65->Object;
      if (pFVar39 != (FSlotArguments *)0x0) {
        LOCK();
        *(int *)&pFVar39->field_0x8 = *(int *)&pFVar39->field_0x8 + 1;
        UNLOCK();
        LOCK();
        *(int *)&pFVar39->field_0x8 = *(int *)&pFVar39->field_0x8 + 1;
        UNLOCK();
      }
      bVar13 = true;
      bVar12 = true;
      bVar11 = true;
      *puVar26 = &
                 ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar28 = FDelegateHandle::GenerateNewID();
      puVar26[2] = uVar28;
      *puVar26 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSMessageLogListing___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar26[3] = local_res18;
      puVar26[4] = pFVar39;
      if (pFVar39 != (FSlotArguments *)0x0) {
        LOCK();
        *(int *)&pFVar39->field_0xc = *(int *)&pFVar39->field_0xc + 1;
        UNLOCK();
      }
      puVar26[5] = local_47d8.Object;
      puVar26[6] = local_47d8.SharedReferenceCount.ReferenceController;
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar39);
    }
    if (bVar12) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar39);
    }
    if (bVar13) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4378.SharedReferenceCount.ReferenceController);
    }
    if (local_43d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_43d8.Accessor,&local_43d8);
    }
    local_43a8 = FStyleColors::White.ColorUseRule;
    EStack_43a7 = FStyleColors::White.ColorTableId;
    uStack_43a6 = FStyleColors::White._18_2_;
    local_43b8 = FStyleColors::White.SpecifiedColor.field0_0x0;
    local_43a4 = 1;
    local_43a0._16_8_ = 0;
    local_43a0._0_8_ = 0;
    local_43a0._8_8_ = 0;
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>(&local_43a0);
    local_44e8.OwnerDeclaration =
         SComboButton::FArguments::ButtonColorAndOpacity
                   (local_res20,(TAttribute<FSlateColor> *)&local_43b8._s_0);
    local_44e8.SlotContent = &(local_44e8.OwnerDeclaration)->_ButtonContent;
    pFVar57 = STextBlock::FArguments::FArguments(&local_af0);
    local_4818.Object = (SWidget *)OnGetPageMenuLabel;
    local_4818.SharedReferenceCount.ReferenceController._0_4_ = 0;
    lStack_4360 = (ulonglong)local_4818.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_4368 = OnGetPageMenuLabel;
    pFVar57 = STextBlock::FArguments::Text<SMessageLogListing>
                        (pFVar57,this,(pmf_6c0c314e *)&local_4368);
    pFVar58 = FText::AsLocalizable_Advanced_LocText
                        (&local_4338,L"Developer.MessageLog",L"PageToolTip",
                         L"Choose the log page to view");
    pTVar59 = TAttribute<FText>::TAttribute<FText>(&local_3b58,pFVar58);
    pFVar57 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                        ((TSlateBaseNamedArgs<STextBlock> *)pFVar57,pTVar59);
    pTVar60 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_3fc8,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
                         ,0x8a,&local_4851);
    pTVar61 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar60,&local_4230,pFVar57);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_4808,pTVar61);
    pFVar55 = NamedSlotProperty<SComboButton::FArguments>::operator[](&local_44e8,&local_4808);
    pTVar62 = MakeTDecl<SComboButton,RequiredArgs::T0RequiredArgs>
                        (&local_4028,"SComboButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
                         ,0x81,&local_4850);
    pTVar63 = TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar62,&local_4358,pFVar55);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SComboButton>(&local_44d8,pTVar63);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)local_res8,&local_44d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_44d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4358.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4028._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_4808.SharedReferenceCount.ReferenceController._4_4_,
                        local_4808.SharedReferenceCount.ReferenceController._0_4_));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4230.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3fc8._Widget.SharedReferenceCount.ReferenceController);
    FText::~FText(&local_4338);
    STextBlock::FArguments::~FArguments(&local_af0);
    SComboButton::FArguments::~FArguments(&local_24c0);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_29f8);
    pSVar66 = TSharedPtr<SHorizontalBox,1>::operator->(&local_47a8);
    pFVar53 = SHorizontalBox::AddSlot(pSVar66,&local_28f8);
    local_47c4 = 1.0;
    pTVar54 = TAttribute<float>::TAttribute<float>(&local_3f28,&local_47c4);
    pFVar39 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                        ((FSlotArguments *)&pFVar53->_padding_,pTVar54);
    pFVar39 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar39->field_0x48,HAlign_Right);
    pFVar67 = SButton::FArguments::FArguments(&local_1588);
    local_4808.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_4808.Object = (SWidget *)OnClear;
    lStack_4320 = (ulonglong)local_4808.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_4328 = OnClear;
    pFVar67 = SButton::FArguments::OnClicked<SMessageLogListing>
                        (pFVar67,this,(pmf_5744ddcc *)&local_4328);
    local_4808.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_4808.Object = (SWidget *)IsClearWidgetEnabled;
    lStack_4310 = (ulonglong)local_4808.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_4318 = IsClearWidgetEnabled;
    pFVar67 = TSlateBaseNamedArgs<SButton>::IsEnabled<SMessageLogListing>
                        ((TSlateBaseNamedArgs<SButton> *)pFVar67,this,(pmf_b078e480 *)&local_4318);
    local_4808.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_4808.Object = (SWidget *)GetClearWidgetVisibility;
    lStack_4300 = (ulonglong)local_4808.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_4308 = GetClearWidgetVisibility;
    pFVar67 = TSlateBaseNamedArgs<SButton>::Visibility<SMessageLogListing>
                        ((TSlateBaseNamedArgs<SButton> *)pFVar67,this,(pmf_4cd0b4cf *)&local_4308);
    pTVar56 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FSlateColor>
                        (&local_3b28,&FStyleColors::White);
    pFVar67 = SButton::FArguments::ForegroundColor(pFVar67,pTVar56);
    pFVar51 = FMargin::FMargin(&local_3f70,__real_40d00000,__real_40000000);
    pTVar52 = TAttribute<FMargin>::TAttribute<FMargin>(&local_3af8,pFVar51);
    pFVar67 = SButton::FArguments::ContentPadding(pFVar67,pTVar52);
    pFVar57 = STextBlock::FArguments::FArguments(&local_598);
    pFVar58 = FText::AsLocalizable_Advanced_LocText
                        (&local_42c8,L"Developer.MessageLog",L"ClearMessageLog",L"CLEAR");
    pTVar59 = TAttribute<FText>::TAttribute<FText>(&local_3ac8,pFVar58);
    pFVar57 = STextBlock::FArguments::Text(pFVar57,pTVar59);
    pFVar58 = FText::AsLocalizable_Advanced_LocText
                        (&local_42d8,L"Developer.MessageLog",L"ClearMessageLog_ToolTip",
                         L"Clear the messages in this log");
    pTVar59 = TAttribute<FText>::TAttribute<FText>(&local_3a98,pFVar58);
    pFVar57 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                        ((TSlateBaseNamedArgs<STextBlock> *)pFVar57,pTVar59);
    pTVar60 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_3f98,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
                         ,0x9b,&local_484f);
    pTVar61 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar60,&local_42e8,pFVar57);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_4838,pTVar61);
    pFVar67 = SButton::FArguments::operator[](pFVar67,&local_4838);
    this_08 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                        (&local_3fb0,"SButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
                         ,0x94,local_484e);
    pTVar68 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_08,&local_42f8,pFVar67);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_44f8,pTVar68);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar39,&local_44f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_44f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_42f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3fb0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_4838.SharedReferenceCount.ReferenceController._4_4_,
                        local_4838.SharedReferenceCount.ReferenceController._0_4_));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_42e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3f98._Widget.SharedReferenceCount.ReferenceController);
    FText::~FText(&local_42d8);
    FText::~FText(&local_42c8);
    STextBlock::FArguments::~FArguments(&local_598);
    SButton::FArguments::~FArguments(&local_1588);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_28f8);
  }
  pFVar48 = TSharedPtr<FMessageLogListingViewModel,1>::operator->(&this->MessageLogListingViewModel)
  ;
  pTVar69 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (**(code **)(pFVar48->_padding_ + 200))(pFVar48);
  local_4838.SharedReferenceCount.ReferenceController._0_4_ = 0;
  local_4838.Object = (SWidget *)OnChanged;
  lStack_42b0 = (ulonglong)local_4838.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_42b8 = OnChanged;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddSP<SMessageLogListing>(pTVar69,(SMessageLogListing *)local_4280,(pmf_e536bfa8 *)this);
  pFVar48 = TSharedPtr<FMessageLogListingViewModel,1>::operator->(&this->MessageLogListingViewModel)
  ;
  pTVar69 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (**(code **)(pFVar48->_padding_ + 0xd0))(pFVar48);
  local_4838.SharedReferenceCount.ReferenceController._0_4_ = 0;
  local_4838.Object = (SWidget *)OnSelectionChanged;
  lStack_42a0 = (ulonglong)local_4838.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_42a8 = OnSelectionChanged;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddSP<SMessageLogListing>(pTVar69,(SMessageLogListing *)(local_4280 + 8),(pmf_e536bfa8 *)this);
  pTVar70 = TCommands<FGenericCommands>::GetInstance();
  if (((pTVar70->Object != (FGenericCommands *)0x0) &&
      (pTVar3 = (pTVar70->WeakReferenceCount).ReferenceController,
      pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) {
    this_00 = (this->UICommandList).Object;
    local_4208._0_8_ = 0;
    local_4208._8_8_ = 0;
    local_4208._16_8_ = 0;
    pTVar71 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
              TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>(&local_4208);
    local_4838.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_4838.Object = (SWidget *)CopySelectedToClipboard;
    uStack_4650 = (ulonglong)local_4838.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_4658 = CopySelectedToClipboard;
    pTVar72 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SMessageLogListing>
                        (&local_3f60,this,(pmf_459a2357 *)&local_4658);
    pFVar73 = TCommands<FGenericCommands>::Get();
    pTVar74 = TSharedPtr<FUICommandInfo_const_,1>::
              TSharedPtr<FUICommandInfo_const_,1><FUICommandInfo>(&local_3f80,&pFVar73->Copy);
    FUICommandList::MapAction(this_00,pTVar74,pTVar72,pTVar71,RepeatDisabled);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar18.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_47a8.SharedReferenceCount.ReferenceController);
  return;
}

// ContextMenuOpening @ 142be1680

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
SMessageLogListing::ContextMenuOpening
          (SMessageLogListing *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TSharedPtr<SWidget,1> *pTVar9;
  FText *pFVar10;
  FString *pFVar11;
  TArray<TSharedRef<IMessageToken,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  ISlateStyle *pIVar13;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar14;
  FUIAction *pFVar15;
  FSlateIcon *pFVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  TSharedRef<SWidget,1> *pTVar19;
  ForAnyElementType FVar20;
  wchar_t *pwVar21;
  FScriptContainerElement *pFVar22;
  ForAnyElementType FVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  ForAnyElementType _Str1;
  int iVar26;
  TSharedRef<FTokenizedMessage,1> *pTVar27;
  undefined1 local_res18 [8];
  uint local_res20;
  FString local_9d8;
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> local_9c8;
  TArray<FHistoricTextFormatData,TSizedDefaultAllocator<32>_> local_9b8;
  FHistoricTextFormatData *local_9a8;
  undefined4 uStack_9a0;
  uint uStack_99c;
  undefined1 local_998 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_990;
  ForAnyElementType FStack_988;
  ulonglong local_980;
  undefined1 local_978 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_970;
  ForAnyElementType FStack_968;
  ulonglong local_960;
  undefined8 local_958;
  undefined8 local_950;
  FName local_948;
  FName local_940;
  undefined8 local_938;
  FName local_930;
  FName local_928;
  undefined8 local_920;
  undefined8 local_918;
  longlong local_910;
  undefined1 local_908 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_8f0;
  ForAnyElementType FStack_8e8;
  ulonglong local_8e0;
  undefined1 local_8d8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_8c0;
  ForAnyElementType FStack_8b8;
  ulonglong local_8b0;
  undefined1 local_8a8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_890;
  ForAnyElementType FStack_888;
  ulonglong local_880;
  undefined1 local_878 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_860;
  ForAnyElementType FStack_858;
  ulonglong local_850;
  undefined1 local_848 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_830;
  ForAnyElementType FStack_828;
  ulonglong local_820;
  undefined1 local_818 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_800;
  ForAnyElementType FStack_7f8;
  ulonglong local_7f0;
  undefined1 local_7e8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7d0;
  ForAnyElementType FStack_7c8;
  ulonglong local_7c0;
  undefined1 local_7b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7a0;
  ForAnyElementType FStack_798;
  ulonglong local_790;
  undefined1 local_788 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_770;
  ForAnyElementType FStack_768;
  ulonglong local_760;
  undefined1 local_758 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_740;
  ForAnyElementType FStack_738;
  ulonglong local_730;
  undefined1 local_728 [8];
  undefined1 local_720 [8];
  void *pvStack_718;
  undefined8 local_710;
  undefined1 local_708 [8];
  undefined1 local_700 [8];
  void *pvStack_6f8;
  undefined8 local_6f0;
  undefined1 local_6e8 [8];
  FDelegateAllocation local_6e0;
  wchar_t *local_6d0;
  undefined1 local_6c8 [24];
  undefined1 local_6b0 [8];
  void *pvStack_6a8;
  undefined8 local_6a0;
  undefined1 local_698 [24];
  undefined1 local_680 [8];
  void *pvStack_678;
  undefined8 local_670;
  TSharedRef<SWidget,1> local_668;
  FDestructionSentinel local_658;
  FDestructionSentinel local_640;
  FDestructionSentinel local_628;
  FDestructionSentinel local_610;
  FDestructionSentinel local_5f8;
  FDestructionSentinel local_5e0;
  FDestructionSentinel local_5c8;
  FDestructionSentinel local_5b0;
  FDestructionSentinel local_598;
  FDestructionSentinel local_580;
  FDestructionSentinel local_568;
  FDestructionSentinel local_550;
  FDestructionSentinel local_538;
  FDelegateAllocation *local_520;
  FText local_518;
  FText local_508;
  code *local_4f8;
  longlong lStack_4f0;
  FText local_4e8;
  FText local_4d8;
  FString local_4c8;
  TSharedPtr<FExtender,1> local_4b8;
  TSharedPtr<FUICommandList_const_,1> local_4a8;
  code *local_498;
  longlong lStack_490;
  FText local_488;
  FText local_478;
  FText local_468;
  FText local_458;
  code *local_448;
  longlong lStack_440;
  undefined1 local_438 [24];
  undefined1 local_420 [24];
  undefined1 local_408 [24];
  undefined1 local_3f0 [32];
  undefined1 local_3d0 [24];
  undefined1 local_3b8 [24];
  undefined1 local_3a0 [24];
  undefined1 local_388 [32];
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_368;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_350;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_338;
  FSlateIcon local_320;
  FSlateIcon local_300;
  FSlateIcon local_2e0;
  FSlateIcon local_2c0;
  FUIAction local_2a0;
  FUIAction local_238;
  FMenuBuilder local_1d0;
  
  if (((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
    return pTVar9;
  }
  pFVar10 = (FText *)(**(code **)(((this->MessageLogListingViewModel).Object)->_padding_ + 0xa8))();
  pFVar11 = FText::BuildSourceString(pFVar10,&local_4c8);
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar21 = L"";
  }
  else {
    pwVar21 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp(pwVar21,L"Map Check");
  if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
  }
  if (iVar5 == 0) {
    GetSelectedMessages(this,&local_9c8);
    iVar5 = local_9c8.ArrayNum;
    pTVar27 = (TSharedRef<FTokenizedMessage,1> *)
              (local_9c8.AllocatorInstance.Data + (longlong)local_9c8.ArrayNum * 0x10);
    FVar23.Data = local_9c8.AllocatorInstance.Data;
    while( true ) {
      if (local_9c8.ArrayNum != iVar5) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FTokenizedMessage,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if ((TSharedRef<FTokenizedMessage,1> *)FVar23.Data == pTVar27) break;
      pTVar12 = FTokenizedMessage::GetMessageTokens
                          (((TSharedRef<FTokenizedMessage,1> *)FVar23.Data)->Object);
      pFVar22 = (pTVar12->AllocatorInstance).Data;
      pFVar25 = pFVar22 + (longlong)pTVar12->ArrayNum * 0x10;
      for (; pFVar22 != pFVar25; pFVar22 = pFVar22 + 0x10) {
        uVar6 = (**(code **)(**(longlong **)pFVar22 + 8))();
        if ((uVar6 < 7) && ((0x4aU >> (uVar6 & 0x1f) & 1) != 0)) {
          iVar5 = 0;
          local_938 = 0;
          pIVar13 = FAppStyle::Get();
          local_4b8.Object = (FExtender *)0x0;
          local_4b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_4a8.Object = (FUICommandList *)0x0;
          local_4a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          FMenuBuilder::FMenuBuilder
                    (&local_1d0,true,&local_4a8,&local_4b8,false,pIVar13,true,(FName)0x0,true);
          if (local_9c8.ArrayNum != 1) {
            local_6f0 = 0;
            local_708[0] = (TEnumAsByte<EVisibility::Private>)0x19;
            local_708[1] = false;
            local_700 = (undefined1  [8])0x0;
            pvStack_6f8 = (void *)0x0;
            FText::FText((FText *)local_698);
            local_9d8.Data.ArrayNum = 0;
            local_698[0x10] = false;
            local_9d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)ContextMenuSelect;
            lStack_4f0 = (ulonglong)(uint)local_9d8.Data.ArrayMax << 0x20;
            local_4f8 = ContextMenuSelect;
            local_680 = (undefined1  [8])0x0;
            pvStack_678 = (void *)0x0;
            local_670 = 0;
            local_920 = 0;
            local_918 = 0;
            pTVar14 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                      CreateRaw<SMessageLogListing>(&local_350,this,(pmf_459a2357 *)&local_4f8);
            pFVar15 = FUIAction::FUIAction((FUIAction *)local_3d0,pTVar14,RepeatDisabled);
            pFVar16 = FSlateIcon::FSlateIcon(&local_2c0);
            pFVar10 = FText::AsLocalizable_Advanced_LocText
                                (&local_4e8,L"Developer.MessageLog",L"SelectActorsTooltip",
                                 L"Select actors referenced by all selected messages");
            FText::FText((FText *)local_7e8,pFVar10);
            local_7e8[0x10] = true;
            local_7c0 = 0;
            local_7d0.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            FStack_7c8.Data = (FScriptContainerElement *)0x0;
            pFVar10 = FText::AsLocalizable_Advanced_LocText
                                (&local_4d8,L"Developer.MessageLog",L"SelectActors",L"Select actors"
                                );
            FText::FText((FText *)local_818,pFVar10);
            local_818[0x10] = true;
            local_7f0 = 0;
            local_800.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            FStack_7f8.Data = (FScriptContainerElement *)0x0;
            FBaseMenuBuilder::AddMenuEntry
                      ((FBaseMenuBuilder *)&local_1d0,(TAttribute<FText> *)local_818,
                       (TAttribute<FText> *)local_7e8,pFVar16,pFVar15,(FName)0x0,Button,(FName)0x0,
                       (TAttribute<FText> *)local_698,(TAttribute<EVisibility> *)local_708);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_800,(FWriteAccessScope *)&local_580);
            if (((int)local_7f0 != 0) && (FStack_7f8.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)FStack_7f8.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_7f8,0,0,0x10);
              local_7f0 = local_7f0 & 0xffffffff00000000;
            }
            if (local_580.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_580.Accessor,&local_580);
            }
            if (FStack_7f8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_7f8.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_800.AccessDetector);
            if ((ITextData *)local_818._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_818._0_8_ + 0x10))();
            }
            if (local_4d8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_4d8.TextData.Reference + 0x10))();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_7d0,(FWriteAccessScope *)&local_568);
            if (((int)local_7c0 != 0) && (FStack_7c8.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)FStack_7c8.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_7c8,0,0,0x10);
              local_7c0 = local_7c0 & 0xffffffff00000000;
            }
            if (local_568.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_568.Accessor,&local_568);
            }
            if (FStack_7c8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_7c8.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7d0.AccessDetector);
            if ((ITextData *)local_7e8._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_7e8._0_8_ + 0x10))();
            }
            if (local_4e8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_4e8.TextData.Reference + 0x10))();
            }
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_388);
            if ((void *)local_388._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_388._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_388);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a0);
            if ((void *)local_3a0._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_3a0._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_3a0);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b8);
            if ((void *)local_3b8._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_3b8._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_3b8);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d0);
            if ((void *)local_3d0._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_3d0._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_3d0);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_680);
            if (pvStack_678 != (void *)0x0) {
              FMemory::Free(pvStack_678);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_680);
            if ((ITextData *)local_698._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_698._0_8_ + 0x10))();
            }
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_700);
            if (pvStack_6f8 != (void *)0x0) {
              FMemory::Free(pvStack_6f8);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_700);
            goto LAB_142be2ad1;
          }
          local_980 = 0;
          local_998[0] = (TEnumAsByte<EVisibility::Private>)0x19;
          local_998[1] = false;
          local_990.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_988.Data = (FScriptContainerElement *)0x0;
          FText::FText((FText *)local_8d8);
          uStack_9a0 = 0;
          local_8d8[0x10] = false;
          local_9a8 = (FHistoricTextFormatData *)ContextMenuSelect;
          lStack_490 = (ulonglong)uStack_99c << 0x20;
          local_498 = ContextMenuSelect;
          local_8c0.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_8b8.Data = (FScriptContainerElement *)0x0;
          local_8b0 = 0;
          local_958 = 0;
          local_950 = 0;
          pTVar14 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                    CreateRaw<SMessageLogListing>(&local_338,this,(pmf_459a2357 *)&local_498);
          pFVar15 = FUIAction::FUIAction((FUIAction *)local_438,pTVar14,RepeatDisabled);
          pFVar16 = FSlateIcon::FSlateIcon(&local_300);
          pFVar10 = FText::AsLocalizable_Advanced_LocText
                              (&local_478,L"Developer.MessageLog",L"SelectActorTooltip",
                               L"Select actor referenced by message");
          FText::FText((FText *)local_908,pFVar10);
          local_908[0x10] = true;
          local_8e0 = 0;
          local_8f0.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_8e8.Data = (FScriptContainerElement *)0x0;
          pFVar10 = FText::AsLocalizable_Advanced_LocText
                              (&local_488,L"Developer.MessageLog",L"SelectActor",L"Select actor");
          FText::FText((FText *)local_758,pFVar10);
          local_758[0x10] = true;
          local_730 = 0;
          local_740.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_738.Data = (FScriptContainerElement *)0x0;
          FBaseMenuBuilder::AddMenuEntry
                    ((FBaseMenuBuilder *)&local_1d0,(TAttribute<FText> *)local_758,
                     (TAttribute<FText> *)local_908,pFVar16,pFVar15,(FName)0x0,Button,(FName)0x0,
                     (TAttribute<FText> *)local_8d8,(TAttribute<EVisibility> *)local_998);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_740,(FWriteAccessScope *)&local_658);
          if (((int)local_730 != 0) && (FStack_738.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_738.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_738,0,0,0x10);
            local_730 = local_730 & 0xffffffff00000000;
          }
          if (local_658.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_658.Accessor,&local_658);
          }
          if (FStack_738.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_738.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_740.AccessDetector);
          if ((ITextData *)local_758._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_758._0_8_ + 0x10))();
          }
          if (local_488.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_488.TextData.Reference + 0x10))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_8f0,(FWriteAccessScope *)&local_640);
          if (((int)local_8e0 != 0) && (FStack_8e8.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_8e8.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_8e8,0,0,0x10);
            local_8e0 = local_8e0 & 0xffffffff00000000;
          }
          if (local_640.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_640.Accessor,&local_640);
          }
          if (FStack_8e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_8e8.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_8f0.AccessDetector);
          if ((ITextData *)local_908._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_908._0_8_ + 0x10))();
          }
          if (local_478.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_478.TextData.Reference + 0x10))();
          }
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f0);
          if ((void *)local_3f0._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_3f0._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_3f0);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_408);
          if ((void *)local_408._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_408._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_408);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_420);
          if ((void *)local_420._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_420._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_420);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_438);
          if ((void *)local_438._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_438._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_438);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_8c0,(FWriteAccessScope *)&local_628);
          if (((int)local_8b0 != 0) && (FStack_8b8.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_8b8.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_8b8,0,0,0x10);
            local_8b0 = local_8b0 & 0xffffffff00000000;
          }
          if (local_628.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_628.Accessor,&local_628);
          }
          if (FStack_8b8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_8b8.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_8c0.AccessDetector);
          if ((ITextData *)local_8d8._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_8d8._0_8_ + 0x10))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_990,(FWriteAccessScope *)&local_610);
          if (((int)local_980 != 0) && (FStack_988.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_988.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_988,0,0,0x10);
            local_980 = local_980 & 0xffffffff00000000;
          }
          if (local_610.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_610.Accessor,&local_610);
          }
          if (FStack_988.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_988.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_990.AccessDetector);
          pFVar22 = (pTVar12->AllocatorInstance).Data;
          pFVar25 = pFVar22 + (longlong)pTVar12->ArrayNum * 0x10;
          goto joined_r0x000142be1c8a;
        }
      }
      FVar23.Data = FVar23.Data + 0x10;
    }
    DestructItems<TSharedRef<FTokenizedMessage,1>,int>
              ((TSharedRef<FTokenizedMessage,1> *)local_9c8.AllocatorInstance.Data,
               local_9c8.ArrayNum);
    if ((TSharedRef<FTokenizedMessage,1> *)local_9c8.AllocatorInstance.Data !=
        (TSharedRef<FTokenizedMessage,1> *)0x0) {
      FMemory::Free(local_9c8.AllocatorInstance.Data);
    }
  }
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
joined_r0x000142be1c8a:
  if (pFVar22 == pFVar25) goto LAB_142be2ad1;
  iVar7 = (**(code **)(**(longlong **)pFVar22 + 8))();
  if (iVar7 == 8) {
    pFVar10 = (FText *)(**(code **)(**(longlong **)pFVar22 + 0x10))();
    local_9b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9b8.ArrayNum = 0;
    local_9b8.ArrayMax = 0;
    FTextInspector::GetHistoricFormatData(pFVar10,&local_9b8);
    if (0 < local_9b8.ArrayNum) {
      local_978[0] = (TEnumAsByte<EVisibility::Private>)0x19;
      local_978[1] = false;
      local_960 = 0;
      local_970.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_968.Data = (FScriptContainerElement *)0x0;
      FText::FText((FText *)local_878);
      local_878[0x10] = false;
      local_850 = 0;
      local_9a8 = (FHistoricTextFormatData *)ContextMenuSelectByMessage;
      uStack_99c = local_668.SharedReferenceCount.ReferenceController._4_4_;
      local_860.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_858.Data = (FScriptContainerElement *)0x0;
      local_948.ComparisonIndex.Value = 0;
      local_948.Number = 0;
      local_940.ComparisonIndex.Value = 0;
      local_940.Number = 0;
      uStack_9a0 = 0;
      local_6e8 = (undefined1  [8])0x0;
      local_6e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_6e0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6e8,
                 (FWriteAccessScope *)&local_538);
      local_520 = &local_6e0;
      puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_6e0);
      if (puVar17 != (undefined8 *)0x0) {
        *puVar17 = &
                   ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__PEB_W__6B_
        ;
        puVar17[1] = 0;
        uVar18 = FDelegateHandle::GenerateNewID();
        puVar17[2] = uVar18;
        *puVar17 = &
                   ___7__TBaseRawMethodDelegateInstance__00__CBVSMessageLogListing____A6AXXZUFDefaultDelegateUserPolicy__PEB_W__6B_
        ;
        puVar17[3] = this;
        puVar17[4] = local_9a8;
        puVar17[5] = CONCAT44(uStack_99c,uStack_9a0);
        if (((this == (SMessageLogListing *)0x0) || (puVar17[4] == 0)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InUserObject != nullptr && MethodPtr != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                               ,0x1d8,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
          return pTVar9;
        }
      }
      if (local_538.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_538.Accessor,&local_538);
      }
      pFVar15 = FUIAction::FUIAction
                          (&local_2a0,
                           (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_6e8,
                           RepeatDisabled);
      pFVar16 = FSlateIcon::FSlateIcon(&local_2e0);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_458,L"Developer.MessageLog",L"SelectActorsByMessageTooltip",
                           L"Select actors with the same map check message");
      FText::FText((FText *)local_8a8,pFVar10);
      local_8a8[0x10] = true;
      local_880 = 0;
      local_890.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_888.Data = (FScriptContainerElement *)0x0;
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_468,L"Developer.MessageLog",L"SelectActorsByMessage",
                           L"Select actors by message");
      FText::FText((FText *)local_6c8,pFVar10);
      local_6c8[0x10] = true;
      local_6a0 = 0;
      local_6b0 = (undefined1  [8])0x0;
      pvStack_6a8 = (void *)0x0;
      FBaseMenuBuilder::AddMenuEntry
                ((FBaseMenuBuilder *)&local_1d0,(TAttribute<FText> *)local_6c8,
                 (TAttribute<FText> *)local_8a8,pFVar16,pFVar15,local_940,Button,local_948,
                 (TAttribute<FText> *)local_878,(TAttribute<EVisibility> *)local_978);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6b0);
      if (pvStack_6a8 != (void *)0x0) {
        FMemory::Free(pvStack_6a8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_6b0);
      if ((ITextData *)local_6c8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_6c8._0_8_ + 0x10))();
      }
      if (local_468.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_468.TextData.Reference + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_890,(FWriteAccessScope *)&local_5e0);
      if (((int)local_880 != 0) && (FStack_888.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_888.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_888,0,0,0x10);
        local_880 = local_880 & 0xffffffff00000000;
      }
      if (local_5e0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5e0.Accessor,&local_5e0);
      }
      if (FStack_888.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_888.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_890.AccessDetector);
      if ((ITextData *)local_8a8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_8a8._0_8_ + 0x10))();
      }
      if (local_458.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_458.TextData.Reference + 0x10))();
      }
      FUIAction::~FUIAction(&local_2a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_860,(FWriteAccessScope *)&local_5f8);
      if (((int)local_850 != 0) && (FStack_858.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_858.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_858,0,0,0x10);
        local_850 = local_850 & 0xffffffff00000000;
      }
      if (local_5f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f8.Accessor,&local_5f8);
      }
      if (FStack_858.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_858.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_860.AccessDetector);
      if ((ITextData *)local_878._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_878._0_8_ + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_970,(FWriteAccessScope *)&local_550);
      if (((int)local_960 != 0) && (FStack_968.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_968.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_968,0,0,0x10);
        local_960 = local_960 & 0xffffffff00000000;
      }
      if (local_550.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_550.Accessor,&local_550);
      }
      if (FStack_968.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_968.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_970.AccessDetector);
      if ((local_9b8.ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
        return pTVar9;
      }
      FVar20.Data = local_9b8.AllocatorInstance.Data;
      local_9a8 = (FHistoricTextFormatData *)local_9b8.AllocatorInstance.Data;
      ::FString::FString(&local_9d8,L"MeshName");
      FVar23.Data = local_9d8.Data.AllocatorInstance.Data;
      uVar6 = *(uint *)(FVar20.Data + 0x28);
      iVar7 = 0;
      lVar1 = *(longlong *)(FVar20.Data + 0x20);
      local_res20 = uVar6;
      local_910 = lVar1;
      if (0 < (int)uVar6) {
        do {
          uVar24 = uVar6 >> 1;
          iVar26 = uVar24 + iVar5;
          FVar20.Data = (FScriptContainerElement *)L"";
          if (local_9d8.Data.ArrayNum != 0) {
            FVar20.Data = FVar23.Data;
          }
          if (*(int *)(lVar1 + 8 + (longlong)iVar26 * 0x30) == 0) {
            pwVar21 = L"";
          }
          else {
            pwVar21 = *(wchar_t **)(lVar1 + (longlong)iVar26 * 0x30);
          }
          iVar8 = wcscmp(pwVar21,(wchar_t *)FVar20.Data);
          iVar7 = iVar5;
          if (iVar8 < 0) {
            iVar7 = (uVar6 & 1) + iVar26;
          }
          FVar20.Data = (FScriptContainerElement *)local_9a8;
          uVar6 = uVar24;
          iVar5 = iVar7;
        } while (uVar24 != 0);
      }
      pFVar22 = (FScriptContainerElement *)0x0;
      if (iVar7 < (int)local_res20) {
        if (*(int *)(local_910 + 8 + (longlong)iVar7 * 0x30) == 0) {
          pwVar21 = L"";
        }
        else {
          pwVar21 = *(wchar_t **)(local_910 + (longlong)iVar7 * 0x30);
        }
        _Str1.Data = (FScriptContainerElement *)L"";
        if (local_9d8.Data.ArrayNum != 0) {
          _Str1.Data = FVar23.Data;
        }
        iVar5 = wcscmp((wchar_t *)_Str1.Data,pwVar21);
        if ((-1 < iVar5) && (iVar7 != -1)) {
          if ((iVar7 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             FVar23.Data = local_9d8.Data.AllocatorInstance.Data, bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
            return pTVar9;
          }
          pFVar22 = (((FHistoricTextFormatData *)FVar20.Data)->Arguments).Pairs.AllocatorInstance.
                    Data + (longlong)iVar7 * 0x30 + 0x10;
        }
      }
      if (FVar23.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar23.Data);
      }
      if (pFVar22 != (FScriptContainerElement *)0x0) {
        local_728[0] = (TEnumAsByte<EVisibility::Private>)0x19;
        local_728[1] = false;
        local_710 = 0;
        local_720 = (undefined1  [8])0x0;
        pvStack_718 = (void *)0x0;
        FText::FText((FText *)local_788);
        local_9d8.Data.ArrayNum = 0;
        local_930.ComparisonIndex.Value = 0;
        local_930.Number = 0;
        local_928.ComparisonIndex.Value = 0;
        local_928.Number = 0;
        local_788[0x10] = false;
        local_6d0 = L"MeshName";
        local_9d8.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)ContextMenuSelectByMessage;
        lStack_440 = (ulonglong)(uint)local_9d8.Data.ArrayMax << 0x20;
        local_448 = ContextMenuSelectByMessage;
        local_770.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_768.Data = (FScriptContainerElement *)0x0;
        local_760 = 0;
        pTVar14 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateRaw<SMessageLogListing,wchar_t_const_*>
                            (&local_368,this,(pmf_2fb07b08 *)&local_448,&local_6d0);
        pFVar15 = FUIAction::FUIAction(&local_238,pTVar14,RepeatDisabled);
        pFVar16 = FSlateIcon::FSlateIcon(&local_320);
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_508,L"Developer.MessageLog",
                             L"SelectActorsByMessageAndMeshTooltip",
                             L"Select actors with the same map check message and mesh");
        FText::FText((FText *)local_848,pFVar10);
        local_848[0x10] = true;
        local_820 = 0;
        local_830.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_828.Data = (FScriptContainerElement *)0x0;
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_518,L"Developer.MessageLog",L"SelectActorsByMessageAndMesh",
                             L"Select actors by message / mesh");
        FText::FText((FText *)local_7b8,pFVar10);
        local_7b8[0x10] = true;
        local_790 = 0;
        local_7a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_798.Data = (FScriptContainerElement *)0x0;
        FBaseMenuBuilder::AddMenuEntry
                  ((FBaseMenuBuilder *)&local_1d0,(TAttribute<FText> *)local_7b8,
                   (TAttribute<FText> *)local_848,pFVar16,pFVar15,local_928,Button,local_930,
                   (TAttribute<FText> *)local_788,(TAttribute<EVisibility> *)local_728);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_7a0,(FWriteAccessScope *)&local_5c8);
        if (((int)local_790 != 0) && (FStack_798.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_798.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_798,0,0,0x10)
          ;
          local_790 = local_790 & 0xffffffff00000000;
        }
        if (local_5c8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5c8.Accessor,&local_5c8);
        }
        if (FStack_798.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_798.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7a0.AccessDetector);
        if ((ITextData *)local_7b8._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_7b8._0_8_ + 0x10))();
        }
        if (local_518.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_518.TextData.Reference + 0x10))();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_830,(FWriteAccessScope *)&local_5b0);
        if (((int)local_820 != 0) && (FStack_828.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_828.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_828,0,0,0x10)
          ;
          local_820 = local_820 & 0xffffffff00000000;
        }
        if (local_5b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5b0.Accessor,&local_5b0);
        }
        if (FStack_828.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_828.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_830.AccessDetector);
        if ((ITextData *)local_848._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_848._0_8_ + 0x10))();
        }
        if (local_508.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_508.TextData.Reference + 0x10))();
        }
        FUIAction::~FUIAction(&local_238);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_770,(FWriteAccessScope *)&local_598);
        if (((int)local_760 != 0) && (FStack_768.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_768.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_768,0,0,0x10)
          ;
          local_760 = local_760 & 0xffffffff00000000;
        }
        if (local_598.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_598.Accessor,&local_598);
        }
        if (FStack_768.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_768.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_770.AccessDetector);
        if ((ITextData *)local_788._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_788._0_8_ + 0x10))();
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_720);
        if (pvStack_718 != (void *)0x0) {
          FMemory::Free(pvStack_718);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_720);
      }
    }
    DestructItems<FHistoricTextFormatData,int>
              ((FHistoricTextFormatData *)local_9b8.AllocatorInstance.Data,local_9b8.ArrayNum);
    if ((FHistoricTextFormatData *)local_9b8.AllocatorInstance.Data !=
        (FHistoricTextFormatData *)0x0) {
      FMemory::Free(local_9b8.AllocatorInstance.Data);
    }
LAB_142be2ad1:
    pTVar19 = FMenuBuilder::MakeWidget
                        (&local_1d0,&local_668,
                         (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                          *)0x0);
    __return_storage_ptr__->Object = pTVar19->Object;
    pTVar2 = (pTVar19->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_668.SharedReferenceCount.ReferenceController._4_4_,
                        local_668.SharedReferenceCount.ReferenceController._0_4_));
    FMenuBuilder::~FMenuBuilder(&local_1d0);
    DestructItems<TSharedRef<FTokenizedMessage,1>,int>
              ((TSharedRef<FTokenizedMessage,1> *)local_9c8.AllocatorInstance.Data,
               local_9c8.ArrayNum);
    if ((TSharedRef<FTokenizedMessage,1> *)local_9c8.AllocatorInstance.Data !=
        (TSharedRef<FTokenizedMessage,1> *)0x0) {
      FMemory::Free(local_9c8.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    return __return_storage_ptr__;
  }
  pFVar22 = pFVar22 + 0x10;
  goto joined_r0x000142be1c8a;
}

// ContextMenuSelect @ 142be2ba0

void __thiscall SMessageLogListing::ContextMenuSelect(SMessageLogListing *this)

{
  int iVar1;
  ForAnyElementType FVar2;
  TSharedRef<FTokenizedMessage,1> *pTVar3;
  undefined1 local_res10 [8];
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> local_38;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FMessageLog::MultiSelectActorBegin,&local_28);
  if ((FMessageLog::MultiSelectActorBegin._16_4_ != 0) &&
     (FMessageLog::MultiSelectActorBegin._8_8_ != 0)) {
    (**(code **)(*(longlong *)FMessageLog::MultiSelectActorBegin._8_8_ + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  GetSelectedMessages(this,&local_38);
  iVar1 = local_38.ArrayNum;
  pTVar3 = (TSharedRef<FTokenizedMessage,1> *)
           (local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10);
  FVar2.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FTokenizedMessage,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if ((TSharedRef<FTokenizedMessage,1> *)FVar2.Data == pTVar3) break;
    ActivateMessageToken((TSharedRef<FTokenizedMessage,1> *)FVar2.Data);
    FVar2.Data = FVar2.Data + 0x10;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FMessageLog::MultiSelectActorEnd,&local_28);
  if ((FMessageLog::MultiSelectActorEnd._16_4_ != 0) &&
     (FMessageLog::MultiSelectActorEnd._8_8_ != 0)) {
    (**(code **)(*(longlong *)FMessageLog::MultiSelectActorEnd._8_8_ + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((TSharedRef<FTokenizedMessage,1> *)local_38.AllocatorInstance.Data !=
      (TSharedRef<FTokenizedMessage,1> *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// ContextMenuSelectByMessage @ 142be2ca0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
SMessageLogListing::ContextMenuSelectByMessage(SMessageLogListing *this,wchar_t *param_1)

{
  IItemsSource<TSharedRef<FTokenizedMessage,1>_> *pIVar1;
  uint uVar2;
  int iVar3;
  TArray<TSharedRef<IMessageToken,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  SListView<TSharedRef<FTokenizedMessage,1>_> *pSVar5;
  wchar_t **ppwVar6;
  FScriptContainerElement *pFVar7;
  TSharedRef<FTokenizedMessage,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  TSharedRef<FTokenizedMessage,1> *pTVar10;
  bool bVar11;
  FString local_78;
  FString local_68;
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FReadAccessScope local_38;
  
  GetSelectedMessages(this,&local_58);
  if (local_58.ArrayNum != 1) goto LAB_142be2eee;
  pTVar4 = FTokenizedMessage::GetMessageTokens
                     (*(FTokenizedMessage **)local_58.AllocatorInstance.Data);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  GetSourceStringFromMessage(&local_48,pTVar4,param_1,&local_78);
  if ((1 < local_48.Data.ArrayNum) && ((param_1 == (wchar_t *)0x0 || (1 < local_78.Data.ArrayNum))))
  {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    pFVar9 = pFVar7 + (longlong)pTVar4->ArrayNum * 0x10;
    for (; pFVar7 != pFVar9; pFVar7 = pFVar7 + 0x10) {
      uVar2 = (**(code **)(**(longlong **)pFVar7 + 8))();
      if ((uVar2 < 7) && ((0x4aU >> (uVar2 & 0x1f) & 1) != 0)) {
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&FMessageLog::MultiSelectActorBegin);
        pSVar5 = TSharedPtr<SListView<TSharedRef<FTokenizedMessage,1>_>,1>::operator->
                           (&this->MessageListView);
        pIVar1 = (pSVar5->ViewSource).Ptr;
        if (pIVar1 == (IItemsSource<TSharedRef<FTokenizedMessage,1>_> *)0x0) {
          local_38.DestructionSentinel._0_8_ = (FScriptContainerElement *)0x0;
          ppwVar6 = (wchar_t **)&local_38;
          local_38.DestructionSentinel.Accessor._0_4_ = 0;
        }
        else {
          ppwVar6 = (wchar_t **)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_38);
        }
        pTVar8 = (TSharedRef<FTokenizedMessage,1> *)*ppwVar6;
        pTVar10 = pTVar8 + (int)ppwVar6[1];
        if (pTVar8 == pTVar10) goto LAB_142be2e7e;
        goto LAB_142be2dd0;
      }
    }
  }
  goto LAB_142be2ec2;
LAB_142be2dd0:
  do {
    pTVar4 = FTokenizedMessage::GetMessageTokens(pTVar8->Object);
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    GetSourceStringFromMessage((FString *)&local_38,pTVar4,param_1,&local_68);
    if ((int)local_38.DestructionSentinel.Accessor == local_48.Data.ArrayNum) {
      if (1 < (int)local_38.DestructionSentinel.Accessor) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_38.DestructionSentinel._0_8_,
                           (wchar_t *)local_48.Data.AllocatorInstance.Data);
        bVar11 = iVar3 == 0;
        goto LAB_142be2e1a;
      }
LAB_142be2e21:
      if (local_68.Data.ArrayNum == local_78.Data.ArrayNum) {
        if (1 < local_68.Data.ArrayNum) {
          iVar3 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_68.Data.AllocatorInstance.Data,
                             (wchar_t *)local_78.Data.AllocatorInstance.Data);
          bVar11 = iVar3 == 0;
          goto LAB_142be2e46;
        }
      }
      else {
        bVar11 = local_68.Data.ArrayNum + local_78.Data.ArrayNum == 1;
LAB_142be2e46:
        if (!bVar11) goto LAB_142be2e55;
      }
      ActivateMessageToken(pTVar8);
    }
    else {
      bVar11 = (int)local_38.DestructionSentinel.Accessor + local_48.Data.ArrayNum == 1;
LAB_142be2e1a:
      if (bVar11) goto LAB_142be2e21;
    }
LAB_142be2e55:
    if ((FScriptContainerElement *)local_38.DestructionSentinel._0_8_ !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38.DestructionSentinel._0_8_);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    pTVar8 = pTVar8 + 1;
  } while (pTVar8 != pTVar10);
LAB_142be2e7e:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FMessageLog::MultiSelectActorEnd,&local_38);
  if ((FMessageLog::MultiSelectActorEnd._16_4_ != 0) &&
     (FMessageLog::MultiSelectActorEnd._8_8_ != 0)) {
    (**(code **)(*(longlong *)FMessageLog::MultiSelectActorEnd._8_8_ + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
LAB_142be2ec2:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
LAB_142be2eee:
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if ((TSharedRef<FTokenizedMessage,1> *)local_58.AllocatorInstance.Data !=
      (TSharedRef<FTokenizedMessage,1> *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// CopyLogOutput @ 142be2f30

FString * __thiscall
SMessageLogListing::CopyLogOutput
          (SMessageLogListing *this,FString *__return_storage_ptr__,bool param_1,bool param_2)

{
  FMessageLogListingViewModel *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  FString local_28;
  FString local_18;
  
  pwVar6 = L"";
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar1 = (this->MessageLogListingViewModel).Object;
  if (param_1) {
    if ((pFVar1 == (FMessageLogListingViewModel *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
    pFVar1 = (this->MessageLogListingViewModel).Object;
    (**(code **)(pFVar1->_padding_ + 0x88))(pFVar1,&local_28);
    FVar7.Data = local_28.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_28) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar7.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    if ((pFVar1 == (FMessageLogListingViewModel *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
    pFVar1 = (this->MessageLogListingViewModel).Object;
    (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,&local_18);
    FVar7.Data = local_18.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_18) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar7.Data = (FScriptContainerElement *)0x0;
    }
  }
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  if (param_2) {
    if ((__return_storage_ptr__->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    }
    FWindowsPlatformApplicationMisc::ClipboardCopy(pwVar6);
  }
  return __return_storage_ptr__;
}

// CopySelectedToClipboard @ 142be30b0

void __thiscall SMessageLogListing::CopySelectedToClipboard(SMessageLogListing *this)

{
  FMessageLogListingViewModel *pFVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *local_18;
  int local_10;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
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
  pFVar1 = (this->MessageLogListingViewModel).Object;
  (**(code **)(pFVar1->_padding_ + 0x88))(pFVar1,&local_18);
  pwVar4 = L"";
  if (local_10 != 0) {
    pwVar4 = local_18;
  }
  FWindowsPlatformApplicationMisc::ClipboardCopy(pwVar4);
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// GetAllMessagesAsString @ 142bfac60

FString * __thiscall
SMessageLogListing::GetAllMessagesAsString(SMessageLogListing *this,FString *__return_storage_ptr__)

{
  FMessageLogListingViewModel *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->MessageLogListingViewModel).Object;
  (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetClearWidgetVisibility @ 142bfbf70

EVisibility __thiscall SMessageLogListing::GetClearWidgetVisibility(SMessageLogListing *this)

{
  code *pcVar1;
  bool bVar2;
  TEnumAsByte<EVisibility::Private> TVar3;
  EVisibility EVar4;
  uchar *in_RDX;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Value = (*pcVar1)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar3.Value;
    }
  }
  EVar4.Value.Value = EVisibility::Visible.Value.Value;
  if (((this->MessageLogListingViewModel).Object)->bAllowClear == false) {
    EVar4.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  *in_RDX = (uchar)EVar4.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetCommandList @ 142bfbff0

TSharedRef<FUICommandList_const_,1> * __thiscall
SMessageLogListing::GetCommandList
          (SMessageLogListing *this,TSharedRef<FUICommandList_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->UICommandList).Object;
  pTVar1 = (this->UICommandList).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFilterMenuVisibility @ 142bfc6c0

EVisibility __thiscall SMessageLogListing::GetFilterMenuVisibility(SMessageLogListing *this)

{
  code *pcVar1;
  bool bVar2;
  TEnumAsByte<EVisibility::Private> TVar3;
  EVisibility EVar4;
  uchar *in_RDX;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Value = (*pcVar1)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar3.Value;
    }
  }
  EVar4.Value.Value = EVisibility::Visible.Value.Value;
  if (((this->MessageLogListingViewModel).Object)->bShowFilters == false) {
    EVar4.Value.Value = EVisibility::Hidden.Value.Value;
  }
  *in_RDX = (uchar)EVar4.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetPageWidgetVisibility @ 142bff790

EVisibility __thiscall SMessageLogListing::GetPageWidgetVisibility(SMessageLogListing *this)

{
  code *pcVar1;
  bool bVar2;
  TEnumAsByte<EVisibility::Private> TVar3;
  EVisibility EVar4;
  uchar *in_RDX;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Value = (*pcVar1)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar3.Value;
    }
  }
  EVar4.Value.Value = EVisibility::Visible.Value.Value;
  if (((this->MessageLogListingViewModel).Object)->bShowPages == false) {
    EVar4.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  *in_RDX = (uchar)EVar4.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetSelectedMessages @ 142c00f50

TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> * __thiscall
SMessageLogListing::GetSelectedMessages
          (SMessageLogListing *this,
          TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  TSharedRef<FTokenizedMessage,1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 *puVar6;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  puVar6 = (undefined8 *)
           (**(code **)(((this->MessageLogListingViewModel).Object)->_padding_ + 0x50))();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)(puVar6 + 1);
  pTVar2 = (TSharedRef<FTokenizedMessage,1> *)*puVar6;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<TSharedRef<FTokenizedMessage,1>,TSharedRef<FTokenizedMessage,1>,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pTVar2,iVar1);
  return __return_storage_ptr__;
}

// GetSelectedMessagesAsString @ 142c012b0

FString * __thiscall
SMessageLogListing::GetSelectedMessagesAsString
          (SMessageLogListing *this,FString *__return_storage_ptr__)

{
  FMessageLogListingViewModel *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->MessageLogListingViewModel).Object;
  (**(code **)(pFVar1->_padding_ + 0x88))(pFVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InvertSelectedMessages @ 142c051c0

void __thiscall SMessageLogListing::InvertSelectedMessages(SMessageLogListing *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000142c05208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->MessageLogListingViewModel).Object)->_padding_ + 0x80))();
  return;
}

// IsClearWidgetEnabled @ 142c05220

bool __thiscall SMessageLogListing::IsClearWidgetEnabled(SMessageLogListing *this)

{
  FMessageLogListingViewModel *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FPage *pFVar5;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->MessageLogListingViewModel).Object;
  if ((pFVar1->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar5 = FMessageLogListingModel::PageAtIndex
                     ((pFVar1->MessageLogListingModel).Object,pFVar1->CurrentPageIndex);
  return (pFVar5->Messages).ArrayNum != 0;
}

// IsMessageSelected @ 142c05f40

bool __thiscall
SMessageLogListing::IsMessageSelected
          (SMessageLogListing *this,TSharedRef<FTokenizedMessage,1> *param_1)

{
  FMessageLogListingViewModel *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->MessageLogListingViewModel).Object;
                    /* WARNING: Could not recover jumptable at 0x000142c05f97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(pFVar1->_padding_ + 0x70))(pFVar1,param_1);
  return (bool)uVar4;
}

// IsPageWidgetEnabled @ 142c06280

bool __thiscall SMessageLogListing::IsPageWidgetEnabled(SMessageLogListing *this)

{
  FMessageLogListingViewModel *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->MessageLogListingViewModel).Object;
  if ((pFVar1->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return 1 < (uint)(((pFVar1->MessageLogListingModel).Object)->Pages).ListSize;
}

// MakeMessageLogListItemWidget @ 142c07a30

TSharedRef<ITableRow,1> * __thiscall
SMessageLogListing::MakeMessageLogListItemWidget
          (SMessageLogListing *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedRef<FTokenizedMessage,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  byte *pbVar1;
  SWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  SMessageLogMessageListRow *this_00;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FName FVar10;
  undefined8 *puVar11;
  TSharedRef<SWidget,1> *pTVar12;
  ulong64 uVar13;
  TReferenceControllerBase<1> *pTVar14;
  TSharedRef<ITableRow,1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *local_res20;
  FName local_398;
  FMemScope local_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  SMessageLogMessageListRow *local_380;
  FSharedReferencer<1> local_378;
  TReferenceControllerBase<1> **local_370;
  FTokenizedMessage *local_368;
  FSharedReferencer<1> local_360;
  bool local_358;
  undefined1 local_350 [8];
  ForAnyElementType FStack_348;
  ulonglong local_340;
  TReferenceControllerBase<1> *local_338;
  undefined8 local_330;
  FSharedReferencer<1> local_328;
  TSharedRef<SWidget,1> local_320;
  TSharedRef<SMessageLogMessageListRow,1> local_310;
  FDestructionSentinel local_300;
  FDestructionSentinel local_2e8;
  FDelegateAllocation *local_2d0;
  FDestructionSentinel local_2c8;
  FDelegateAllocation *local_2b0;
  TSharedRef<SWidget,1> local_2a8;
  undefined1 local_298 [528];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [32];
  
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  local_398 = (FName)((ulonglong)local_398 & 0xffffffff00000000);
  local_res20 = (TReferenceControllerBase<1> *)param_2;
  FVar10 = (FName)SMessageLogMessageListRow::FArguments::FArguments((FArguments *)local_298);
  local_360.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_368 = param_1->Object;
  if (local_360.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_360.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_360.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_358 = true;
  local_340 = 0;
  local_350 = (undefined1  [8])0x0;
  FStack_348.Data = (FScriptContainerElement *)0x0;
  local_398 = FVar10;
  if ((TAttribute<TSharedPtr<FTokenizedMessage,1>_> *)((longlong)FVar10 + 0x1f8) !=
      (TAttribute<TSharedPtr<FTokenizedMessage,1>_> *)&local_368) {
    (((TAttribute<TSharedPtr<FTokenizedMessage,1>_> *)((longlong)FVar10 + 0x1f8))->Value).Object =
         local_368;
    local_368 = (FTokenizedMessage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)FVar10 + 0x200),&local_360);
  }
  *(bool *)((longlong)FVar10 + 0x208) = local_358;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar10 + 0x210),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_350);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_350,
             (FWriteAccessScope *)&local_300);
  if (((int)local_340 != 0) && (FStack_348.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_348.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_348,0,0,0x10);
    local_340 = local_340 & 0xffffffff00000000;
  }
  if (local_300.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_300.Accessor,&local_300);
  }
  if (FStack_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_348.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_350);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_360.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar10 + 0x228),
             (FWriteAccessScope *)&local_2e8);
  local_2d0 = (FDelegateAllocation *)((longlong)FVar10 + 0x230);
  puVar11 = UE::Core::Private::DelegateAllocate(0x38,local_2d0);
  pTVar17 = pTVar16;
  pTVar14 = local_res20;
  if (puVar11 != (undefined8 *)0x0) {
    uStack_384 = local_320.SharedReferenceCount.ReferenceController._4_4_;
    local_390 = (FMemScope)BroadcastMessageTokenClicked;
    uStack_388 = 0;
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2a8);
    pTVar14 = (pTVar12->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar12->Object;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFTokenizedMessage___00__AEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar13;
    *puVar11 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXV__TSharedPtr_VFTokenizedMessage___00__AEBV__TSharedRef_VIMessageToken___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = pSVar2;
    puVar11[4] = pTVar14;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FMemScope *)(puVar11 + 5) = local_390;
    puVar11[6] = CONCAT44(uStack_384,uStack_388);
    pTVar17 = (TReferenceControllerBase<1> *)&DAT_00000007;
  }
  if (((ulonglong)pTVar17 & 4) != 0) {
    pTVar17 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar17 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  if (((ulonglong)pTVar17 & 2) != 0) {
    pTVar17 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar17 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  if (((ulonglong)pTVar17 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a8.SharedReferenceCount.ReferenceController);
  }
  bVar5 = false;
  bVar4 = false;
  bVar7 = false;
  if (local_2e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar10 + 0x240),
             (FWriteAccessScope *)&local_2c8);
  local_2b0 = (FDelegateAllocation *)((longlong)FVar10 + 0x248);
  puVar11 = UE::Core::Private::DelegateAllocate(0x38,local_2b0);
  pTVar14 = local_res20;
  if (puVar11 != (undefined8 *)0x0) {
    uStack_384 = local_320.SharedReferenceCount.ReferenceController._4_4_;
    local_390 = (FMemScope)BroadcastMessageDoubleClicked;
    uStack_388 = 0;
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_320);
    pTVar14 = (pTVar12->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar12->Object;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = true;
    bVar4 = true;
    bVar7 = true;
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VFTokenizedMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar13;
    *puVar11 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXV__TSharedPtr_VFTokenizedMessage___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = pSVar2;
    puVar11[4] = pTVar14;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FMemScope *)(puVar11 + 5) = local_390;
    puVar11[6] = CONCAT44(uStack_384,uStack_388);
    FVar10 = local_398;
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_320.SharedReferenceCount.ReferenceController._4_4_,
                        local_320.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (local_2c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c8.Accessor,&local_2c8);
  }
  local_338 = local_res20;
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_398 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_390,&local_398,true);
  local_370 = &local_338;
  local_378.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar14 = ::operator_new(0x448);
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSMessageLogMessageListRow___00_SharedPointerInternals__6B_
    ;
    memset(pTVar14 + 1,0,0x438);
    STableRow<TSharedPtr<FTokenizedMessage,1>_>::STableRow<TSharedPtr<FTokenizedMessage,1>_>
              ((STableRow<TSharedPtr<FTokenizedMessage,1>_> *)(pTVar14 + 1));
    pTVar14[1]._padding_ = (longlong)&SMessageLogMessageListRow::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar14[1].SharedReferenceCount =
         &SMessageLogMessageListRow::_vftable__for__SBorder__;
    pTVar14[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar14[0x41]._padding_ = 0;
    pTVar14[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar14[0x42]._padding_ = 0;
    pTVar14[0x42].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[0x43]._padding_ = 0;
    pTVar14[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar14[0x44]._padding_ = 0;
    pTVar16 = pTVar14;
  }
  TSharedRef<SMessageLogMessageListRow,1>::TSharedRef<SMessageLogMessageListRow,1>
            (&local_310,(SMessageLogMessageListRow *)(pTVar16 + 1),pTVar16);
  local_328.ReferenceController = local_310.SharedReferenceCount.ReferenceController;
  if (local_310.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_310.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_310.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_380 = local_310.Object;
  local_330 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_378,&local_328);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_328.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_310.SharedReferenceCount.ReferenceController);
  this_00 = local_380;
  if ((local_380 == (SMessageLogMessageListRow *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar15 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar15;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&this_00->_padding_,"SMessageLogMessageListRow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
             ,0x129,0x438);
  FMemScope::~FMemScope(&local_390);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res20);
  if ((this_00 == (SMessageLogMessageListRow *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar15 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar15;
  }
  SWidget::SWidgetConstruct((SWidget *)&this_00->_padding_,(FSlateBaseNamedArgs *)FVar10);
  SMessageLogMessageListRow::Construct
            (this_00,(FArguments *)FVar10,(TSharedRef<STableViewBase,1> *)*local_370);
  if ((this_00 == (SMessageLogMessageListRow *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar15 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar15;
  }
  if ((this_00->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)(this_00->_padding_ + 0x228))(&this_00->_padding_);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_142c07fa4;
  }
  bVar9 = 0x20;
LAB_142c07fa4:
  *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xdf;
  *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | bVar9;
  if ((this_00 == (SMessageLogMessageListRow *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar15 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar15;
  }
  pbVar1 = (byte *)((longlong)&this_00->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((this_00 == (SMessageLogMessageListRow *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar15 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar15;
  }
  FVar6.ReferenceController = local_378.ReferenceController;
  local_378.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_380 = (SMessageLogMessageListRow *)0x0;
  if ((this_00 == (SMessageLogMessageListRow *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar15 = (TSharedRef<ITableRow,1> *)(*pcVar3)();
    return pTVar15;
  }
  __return_storage_ptr__->Object = (ITableRow *)this_00;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  if ((void *)local_58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_70);
  if ((void *)local_70._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_70._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
  if ((void *)local_88._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_298._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_298);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// MakeShowWidget @ 142c08140

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

TSharedRef<ITableRow,1> * __thiscall
SMessageLogListing::MakeShowWidget
          (SMessageLogListing *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedRef<FMessageFilter,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMessageFilter *pFVar3;
  SImage *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  SHorizontalBox *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  FSharedReferencer<1> FVar10;
  STableRow<TSharedRef<FMessageFilter,1>_> *pSVar11;
  char cVar12;
  byte bVar13;
  bool bVar14;
  FArguments *pFVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  FArguments *pFVar18;
  FSlot *pFVar19;
  FSizeParam *pFVar20;
  FArguments *pFVar21;
  FArguments *pFVar22;
  TSharedRef<SImage,1> *pTVar23;
  TSharedRef<SBox,1> *pTVar24;
  FSlot *this_00;
  FArguments *pFVar25;
  TSharedRef<STextBlock,1> *pTVar26;
  TSharedRef<SHorizontalBox,1> *pTVar27;
  SCheckBox *pSVar28;
  SCheckBox *pSVar29;
  TSharedRef<ITableRow,1> *pTVar30;
  TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1> *pTVar31;
  TReferenceControllerBase<1> *pTVar32;
  atomic<int> *paVar33;
  TReferenceControllerBase<1> *pTVar34;
  atomic<int> *paVar35;
  TReferenceControllerBase<1> *local_res18;
  TSharedRef<STableViewBase,1> *local_res20;
  T0RequiredArgs local_19e8;
  T0RequiredArgs local_19e7;
  T0RequiredArgs local_19e6;
  T0RequiredArgs local_19e5;
  T0RequiredArgs local_19e4 [4];
  code *local_19e0;
  FSharedReferencer<1> FStack_19d8;
  FArguments *local_19d0;
  FLLMScope local_19c8;
  FLLMScope local_19c4;
  FLLMScope local_19c0;
  FLLMScope local_19bc;
  undefined4 local_19b8;
  undefined1 local_19b4;
  undefined1 local_19b0 [8];
  ForAnyElementType FStack_19a8;
  ulonglong local_19a0;
  undefined4 local_1998;
  undefined1 local_1994;
  undefined1 local_1990 [8];
  ForAnyElementType FStack_1988;
  ulonglong local_1980;
  FArguments *local_1978;
  FSlateBrush *local_1970;
  undefined1 local_1968;
  undefined1 local_1960 [8];
  ForAnyElementType FStack_1958;
  ulonglong local_1950;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_1948;
  FText local_1930;
  bool local_1920;
  undefined1 local_1918 [8];
  ForAnyElementType FStack_1910;
  ulonglong local_1908;
  FMessageFilter *local_1900;
  SWidget *local_18f8;
  TReferenceControllerBase<1> *pTStack_18f0;
  SWidget *local_18e8;
  TReferenceControllerBase<1> *pTStack_18e0;
  TSlateDecl<STableRow<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_18d8;
  undefined8 local_18c0;
  FSharedReferencer<1> local_18b8;
  FSlot *local_18b0;
  FName local_18a8;
  FMemScope local_18a0;
  FName local_1898;
  FMemScope local_1890;
  FName local_1888;
  FMemScope local_1880;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_1878;
  FMemScope local_1870;
  undefined8 local_1868;
  FSharedReferencer<1> local_1860;
  FName local_1858;
  TSharedRef<SImage,1> local_1850;
  FSlot *local_1840;
  FName local_1838;
  FMemScope local_1830;
  FName local_1828;
  FMemScope local_1820;
  FDestructionSentinel local_1818;
  FDestructionSentinel local_1800;
  FDestructionSentinel local_17e8;
  FDestructionSentinel local_17d0;
  FDestructionSentinel local_17b8;
  undefined1 *local_17a0;
  FDestructionSentinel local_1798;
  undefined1 *local_1780;
  TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1> local_1778;
  SWidget *local_1768;
  TReferenceControllerBase<1> *pTStack_1760;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1758;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1740;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1728;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1710;
  TSharedRef<SHorizontalBox,1> local_16f8;
  TSharedRef<STextBlock,1> local_16e8;
  TSharedRef<SBox,1> local_16d8;
  TSharedRef<STableRow<TSharedRef<FMessageFilter,1>_>,1> local_16c8;
  undefined1 local_16b8 [16];
  undefined1 local_16a8 [32];
  undefined1 local_1688 [24];
  undefined1 local_1670 [16];
  undefined1 local_1660 [32];
  undefined1 local_1640 [24];
  undefined8 *local_1628;
  STextBlock *local_1620;
  FSharedReferencer<1> local_1618 [4];
  undefined1 local_15f8 [40];
  FSlotArgumentsMixin local_15d0;
  undefined8 *local_1540;
  SBox *local_1538;
  FSharedReferencer<1> local_1530 [4];
  undefined1 local_1510 [40];
  FSlotArgumentsMixin local_14e8;
  undefined1 local_1458 [536];
  undefined1 local_1240 [32];
  undefined1 local_1220 [64];
  undefined1 local_11e0 [64];
  undefined1 local_11a0 [48];
  undefined1 local_1170 [32];
  undefined1 local_1150 [216];
  FArguments local_1078;
  FArguments local_e70;
  FArguments local_bc8;
  FArguments local_8d0;
  FArguments local_590;
  
  local_590._OnDoubleClicked._16_8_ = 0x142c08171;
  bVar14 = false;
  local_19d0 = (FArguments *)((ulonglong)local_19d0 & 0xffffffff00000000);
  local_res18 = (TReferenceControllerBase<1> *)param_1;
  local_res20 = param_2;
  local_1978 = STableRow<TSharedRef<FMessageFilter,1>_>::FArguments::FArguments(&local_bc8);
  pFVar15 = SCheckBox::FArguments::FArguments((FArguments *)local_1458);
  local_1900 = param_1->Object;
  paVar35 = (atomic<int> *)&DAT_00000008;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    paVar33 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar33 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar33 = (atomic<int>)((int)*paVar33 + 1);
    UNLOCK();
    LOCK();
    *paVar33 = (atomic<int>)((int)*paVar33 + 1);
    UNLOCK();
  }
  (pFVar15->_IsChecked).bIsSet = true;
  local_19d0 = pFVar15;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_IsChecked).Getter
             ,(FWriteAccessScope *)&local_17b8);
  local_17a0 = &(pFVar15->_IsChecked).Getter.field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_17a0);
  pTVar32 = local_res18;
  if (puVar16 != (undefined8 *)0x0) {
    local_19e0 = FMessageFilter::_vcall__8__flat______;
    FStack_19d8.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_1850.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar33 = (atomic<int>)((int)*paVar33 + 1);
      UNLOCK();
    }
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVFMessageFilter___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = local_1900;
    puVar16[4] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar14 = true;
    puVar16[5] = local_19e0;
    puVar16[6] = FStack_19d8.ReferenceController;
    pTVar32 = pTVar2;
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  }
  bVar14 = false;
  if (local_17b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_17b8.Accessor,&local_17b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar15 = local_19d0;
  pTVar32 = local_res18;
  pTVar2 = ((FSharedReferencer<1> *)&local_res18->SharedReferenceCount)->ReferenceController;
  pFVar3 = (FMessageFilter *)local_res18->_padding_;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    paVar35 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar35 = (atomic<int>)((int)*paVar35 + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &local_19d0->_OnCheckStateChanged,(FWriteAccessScope *)&local_1798);
  local_1780 = &(pFVar15->_OnCheckStateChanged).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1780);
  pTVar34 = local_res18;
  if (puVar16 != (undefined8 *)0x0) {
    local_19e0 = FMessageFilter::_vcall__16__flat______;
    FStack_19d8.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_1850.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar35 = (atomic<int>)((int)*paVar35 + 1);
      UNLOCK();
    }
    bVar14 = true;
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VFMessageFilter___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = pFVar3;
    puVar16[4] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar16[5] = local_19e0;
    puVar16[6] = FStack_19d8.ReferenceController;
    pTVar34 = pTVar2;
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar34);
  }
  if (local_1798.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1798.Accessor,&local_1798);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar18 = SHorizontalBox::FArguments::FArguments(&local_1078);
  pFVar19 = ::operator_new(0x58);
  if (pFVar19 == (FSlot *)0x0) {
    local_1840 = (FSlot *)0x0;
  }
  else {
    *(undefined8 *)pFVar19 = 0;
    *(undefined8 *)&pFVar19->field_0x8 = 0;
    *(undefined8 *)&pFVar19->field_0x10 = 0;
    *(undefined8 *)&pFVar19->field_0x18 = 0;
    *(undefined8 *)&pFVar19->field_0x20 = 0;
    *(undefined8 *)&pFVar19->field_0x28 = 0;
    *(undefined8 *)&pFVar19->field_0x30 = 0;
    *(undefined8 *)&pFVar19->field_0x38 = 0;
    *(undefined8 *)&pFVar19->field_0x40 = 0;
    *(undefined8 *)&pFVar19->field_0x48 = 0;
    *(undefined8 *)&pFVar19->field_0x50 = 0;
    local_1840 = SHorizontalBox::FSlot::FSlot(pFVar19);
  }
  pFVar19 = (FSlot *)0x0;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1540,(FSlot *)&local_1840);
  pFVar20 = (FSizeParam *)FAuto::FAuto((FAuto *)local_16b8);
  TOptional<FSizeParam>::operator=(&local_14e8._SizeParam,pFVar20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1688);
  if ((void *)local_1688._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1688._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1688);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_16a8);
  if ((void *)local_16a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_16a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_16a8);
  pFVar21 = SBox::FArguments::FArguments(&local_8d0);
  pFVar21->_HAlign = HAlign_Center;
  pFVar21->_VAlign = VAlign_Center;
  local_19b8 = 0x41800000;
  local_19b0 = (undefined1  [8])0x0;
  FStack_19a8.Data = (FScriptContainerElement *)0x0;
  local_19b4 = 1;
  local_19a0 = 0;
  (pFVar21->_WidthOverride).Value.Size = 16.0;
  (pFVar21->_WidthOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_WidthOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_19b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_19b0,
             (FWriteAccessScope *)&local_1818);
  if (((int)local_19a0 != 0) && (FStack_19a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_19a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_19a8,0,0,0x10);
    local_19a0 = local_19a0 & 0xffffffff00000000;
  }
  if (local_1818.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1818.Accessor,&local_1818);
  }
  if (FStack_19a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_19a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_19b0);
  local_1998 = 0x41800000;
  local_1994 = 1;
  local_1980 = 0;
  local_1990 = (undefined1  [8])0x0;
  FStack_1988.Data = (FScriptContainerElement *)0x0;
  (pFVar21->_HeightOverride).Value.Size = 16.0;
  (pFVar21->_HeightOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_HeightOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1990);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1990,
             (FWriteAccessScope *)&local_1800);
  if (((int)local_1980 != 0) && (FStack_1988.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1988.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1988,0,0,0x10);
    local_1980 = local_1980 & 0xffffffff00000000;
  }
  if (local_1800.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1800.Accessor,&local_1800);
  }
  if (FStack_1988.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1988.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1990);
  pFVar22 = SImage::FArguments::FArguments(&local_e70);
  local_1970 = FSlateIcon::GetIcon(&((FMessageFilter *)pTVar32->_padding_)->Icon);
  local_1968 = 1;
  local_1950 = 0;
  local_1960 = (undefined1  [8])0x0;
  FStack_1958.Data = (FScriptContainerElement *)0x0;
  (pFVar22->_Image).Value = local_1970;
  (pFVar22->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1960);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1960,
             (FWriteAccessScope *)&local_17e8);
  if (((int)local_1950 != 0) && (FStack_1958.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1958.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1958,0,0,0x10);
    local_1950 = local_1950 & 0xffffffff00000000;
  }
  if (local_17e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_17e8.Accessor,&local_17e8);
  }
  if (FStack_1958.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1958.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1960);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_1838 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1830,&local_1838,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1710,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
             ,0x21b,&local_19e8);
  FMemScope::~FMemScope(&local_1830);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res18);
  pTVar23 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1710,&local_1850,pFVar22);
  pTVar2 = (pTVar23->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar23->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18f8 = (pFVar21->_Content).Widget.Object;
  pTStack_18f0 = (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar21->_Content).Widget.Object = (SWidget *)pSVar4;
  (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18f0);
  FLLMScope::FLLMScope(&local_19c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1828 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1820,&local_1828,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1728,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
             ,0x215,&local_19e7);
  FMemScope::~FMemScope(&local_1820);
  FLLMScope::~FLLMScope(&local_19c8);
  pTVar24 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1728,&local_16d8,pFVar21);
  pTVar34 = (pTVar24->SharedReferenceCount).ReferenceController;
  local_1538 = pTVar24->Object;
  if (pTVar34 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar34->SharedReferenceCount = (atomic<int>)((int)pTVar34->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar34->SharedReferenceCount = (atomic<int>)((int)pTVar34->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18c0 = 0;
  local_18b8.ReferenceController = pTVar34;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1530,&local_18b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18b8.ReferenceController);
  pFVar18 = SHorizontalBox::FArguments::operator+(pFVar18,(FSlotArguments *)&local_1540);
  this_00 = ::operator_new(0x58);
  if (this_00 != (FSlot *)0x0) {
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)&this_00->field_0x8 = 0;
    *(undefined8 *)&this_00->field_0x10 = 0;
    *(undefined8 *)&this_00->field_0x18 = 0;
    *(undefined8 *)&this_00->field_0x20 = 0;
    *(undefined8 *)&this_00->field_0x28 = 0;
    *(undefined8 *)&this_00->field_0x30 = 0;
    *(undefined8 *)&this_00->field_0x38 = 0;
    *(undefined8 *)&this_00->field_0x40 = 0;
    *(undefined8 *)&this_00->field_0x48 = 0;
    *(undefined8 *)&this_00->field_0x50 = 0;
    pFVar19 = SHorizontalBox::FSlot::FSlot(this_00);
  }
  local_18b0 = pFVar19;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1628,(FSlot *)&local_18b0);
  pFVar20 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1670);
  TOptional<FSizeParam>::operator=(&local_15d0._SizeParam,pFVar20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1640);
  if ((void *)local_1640._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1640._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1640);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1660);
  if ((void *)local_1660._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1660._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1660);
  pFVar25 = STextBlock::FArguments::FArguments(&local_590);
  pFVar3 = (FMessageFilter *)pTVar32->_padding_;
  local_1930.TextData.Reference = (pFVar3->Name).TextData.Reference;
  if (local_1930.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1930.TextData.Reference + 8))
              (local_1930.TextData.Reference,&local_1900);
  }
  local_1930.Flags = (pFVar3->Name).Flags;
  local_1920 = true;
  local_1908 = 0;
  local_1918 = (undefined1  [8])0x0;
  FStack_1910.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar25->_Text).Value,&local_1930);
  (pFVar25->_Text).bIsSet = local_1920;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1918);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1918,
             (FWriteAccessScope *)&local_17d0);
  if (((int)local_1908 != 0) && (FStack_1910.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1910.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1910,0,0,0x10);
    local_1908 = local_1908 & 0xffffffff00000000;
  }
  if (local_17d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_17d0.Accessor,&local_17d0);
  }
  if (FStack_1910.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1910.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1918);
  if (local_1930.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1930.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_19c4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_18a0,&local_18a8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1740,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
             ,0x221,&local_19e6);
  FMemScope::~FMemScope(&local_18a0);
  FLLMScope::~FLLMScope(&local_19c4);
  pTVar26 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1740,&local_16e8,pFVar25);
  pTVar5 = (pTVar26->SharedReferenceCount).ReferenceController;
  local_1620 = pTVar26->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_19e0 = (code *)0x0;
  FStack_19d8.ReferenceController = pTVar5;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1618,&FStack_19d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_19d8.ReferenceController);
  pFVar18 = SHorizontalBox::FArguments::operator+(pFVar18,(FSlotArguments *)&local_1628);
  FLLMScope::FLLMScope(&local_19c0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1898 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1890,&local_1898,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1758,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
             ,0x212,&local_19e5);
  FMemScope::~FMemScope(&local_1890);
  FLLMScope::~FLLMScope(&local_19c0);
  pTVar27 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1758,&local_16f8,pFVar18);
  pFVar15 = local_19d0;
  pTVar6 = (pTVar27->SharedReferenceCount).ReferenceController;
  pSVar7 = pTVar27->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18e8 = (local_19d0->_Content).Widget.Object;
  pTStack_18e0 = (local_19d0->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_19d0->_Content).Widget.Object = (SWidget *)pSVar7;
  (local_19d0->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18e0);
  FLLMScope::FLLMScope(&local_19bc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1888 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1880,&local_1888,true);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
            (&local_1948,"SCheckBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
             ,0x20e,local_19e4);
  FMemScope::~FMemScope(&local_1880);
  FLLMScope::~FLLMScope(&local_19bc);
  pSVar28 = TSharedPtr<SCheckBox,1>::operator->(&local_1948._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar28,(FSlateBaseNamedArgs *)pFVar15);
  pSVar28 = local_1948._Widget.Object;
  SCheckBox::Construct(local_1948._Widget.Object,pFVar15);
  pSVar29 = TSharedPtr<SCheckBox,1>::operator->(&local_1948._Widget);
  if ((pSVar29->_padding_ & 0x10) == 0) {
    cVar12 = (**(code **)(pSVar29->_padding_ + 0x228))(pSVar29);
    bVar13 = 0;
    if (cVar12 == '\0') goto LAB_142c08cf7;
  }
  bVar13 = 0x20;
LAB_142c08cf7:
  *(byte *)&pSVar29->_padding_ = (byte)pSVar29->_padding_ & 0xdf;
  *(byte *)&pSVar29->_padding_ = (byte)pSVar29->_padding_ | bVar13;
  pSVar29 = TSharedPtr<SCheckBox,1>::operator->(&local_1948._Widget);
  pbVar1 = (byte *)((longlong)&pSVar29->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_1948._Widget.Object == (SCheckBox *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    pTVar30 = (TSharedRef<ITableRow,1> *)(*pcVar9)();
    return pTVar30;
  }
  FVar10.ReferenceController = local_1948._Widget.SharedReferenceCount.ReferenceController;
  local_1948._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1948._Widget.Object = (SCheckBox *)0x0;
  if ((pSVar28 == (SCheckBox *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    pTVar30 = (TSharedRef<ITableRow,1> *)(*pcVar9)();
    return pTVar30;
  }
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
  local_1768 = (local_1978->_Content).Widget.Object;
  pTStack_1760 = (local_1978->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1978->_Content).Widget.Object = (SWidget *)pSVar28;
  (local_1978->_Content).Widget.SharedReferenceCount.ReferenceController =
       FVar10.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1760);
  local_1878.Arg0 = local_res20;
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_19d0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_1858 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1870,&local_1858,true);
  local_18d8._RequiredArgs = &local_1878;
  local_18d8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar31 = MakeShared<STableRow<TSharedRef<FMessageFilter,1>_>,1>(&local_16c8);
  local_1860.ReferenceController = (pTVar31->SharedReferenceCount).ReferenceController;
  local_18d8._Widget.Object = pTVar31->Object;
  if (local_1860.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1860.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1860.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1868 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_18d8._Widget.SharedReferenceCount,&local_1860);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1860.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16c8.SharedReferenceCount.ReferenceController);
  pSVar11 = local_18d8._Widget.Object;
  if ((local_18d8._Widget.Object == (STableRow<TSharedRef<FMessageFilter,1>_> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    pTVar30 = (TSharedRef<ITableRow,1> *)(*pcVar9)();
    return pTVar30;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&pSVar11->_padding_,"STableRow< TSharedRef<FMessageFilter> >",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
             ,0x20c,0x3f8);
  FMemScope::~FMemScope(&local_1870);
  FLLMScope::~FLLMScope((FLLMScope *)&local_19d0);
  pTVar31 = TSlateDecl<STableRow<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
            ::operator<<=(&local_18d8,&local_1778,local_1978);
  __return_storage_ptr__->Object = (ITableRow *)pTVar31->Object;
  pTVar8 = (pTVar31->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1778.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18d8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1948._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1758._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1740._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_590);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_15d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_15f8);
  if ((void *)local_15f8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_15f8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_15f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1618[0].ReferenceController);
  if (local_1628 != (undefined8 *)0x0) {
    (**(code **)*local_1628)(local_1628,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar34);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1728._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_1850.SharedReferenceCount.ReferenceController._4_4_,
                      local_1850.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1710._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_e70);
  SBox::FArguments::~FArguments(&local_8d0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_14e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1510);
  if ((void *)local_1510._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1510._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1510);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1530[0].ReferenceController);
  if (local_1540 != (undefined8 *)0x0) {
    (**(code **)*local_1540)(local_1540,1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1078._Slots.AllocatorInstance.Data,local_1078._Slots.ArrayNum);
  if ((FSlotArguments *)local_1078._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1078._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1078);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1150);
  if ((void *)local_1150._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1150._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1150);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1170);
  if ((void *)local_1170._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1170._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1170);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_11a0);
  if ((void *)local_11a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_11a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_11e0);
  if ((void *)local_11e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_11e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1220);
  if ((void *)local_1220._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1220._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1220);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1240);
  if ((void *)local_1240._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1240._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1240);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1458._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1458);
  STableRow<TSharedRef<FMessageFilter,1>_>::FArguments::~FArguments(&local_bc8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (((FSharedReferencer<1> *)&pTVar32->SharedReferenceCount)->ReferenceController);
  return __return_storage_ptr__;
}

// OnChanged @ 142c0c010

void __thiscall SMessageLogListing::OnChanged(SMessageLogListing *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
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
  (**(code **)(((this->MessageLogListingViewModel).Object)->_padding_ + 0x78))();
  RefreshVisibility(this);
  return;
}

// OnClear @ 142c0c070

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMessageLogListing::OnClear(SMessageLogListing *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FReply *pFVar3;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FReply *)(*pcVar1)();
      return pFVar3;
    }
  }
  (**(code **)(((this->MessageLogListingViewModel).Object)->_padding_ + 0x48))();
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnGetFilterMenuContent @ 142c0dcc0

TSharedRef<SWidget,1> * __thiscall
SMessageLogListing::OnGetFilterMenuContent
          (SMessageLogListing *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  SWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  SListView<TSharedRef<FMessageFilter,1>_> *pSVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  FArguments *pFVar12;
  TSharedRef<SWidget,1> *pTVar13;
  TArray<TSharedRef<FMessageFilter,1>,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  TReferenceControllerBase<1> *pTVar17;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSlateDecl<SListView<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T0RequiredArgs> local_598;
  undefined8 local_580;
  FSharedReferencer<1> FStack_578;
  code *local_570;
  undefined4 uStack_568;
  undefined4 uStack_564;
  TSharedRef<SWidget,1> local_560;
  FDestructionSentinel local_550;
  undefined1 *local_538;
  FArguments local_530;
  
  bVar5 = false;
  bVar4 = false;
  bVar9 = false;
  local_res8 = 0;
  pFVar12 = SListView<TSharedRef<FMessageFilter,1>_>::FArguments::FArguments(&local_530);
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar13;
    }
  }
  pTVar14 = (TArray<TSharedRef<FMessageFilter,1>,TSizedDefaultAllocator<32>_> *)
            (**(code **)(((this->MessageLogListingViewModel).Object)->_padding_ + 0xb0))();
  pFVar12->_ListItemsSource_ArrayPointer =
       (TArray<TSharedRef<FMessageFilter,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar12->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedRef<FMessageFilter,1>_> *)0x0;
  local_580 = 0;
  FStack_578.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&pFVar12->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedRef<FMessageFilter,1>_>,1> *)
      &local_580) {
    (pFVar12->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedRef<FMessageFilter,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar12->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_578);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_578.ReferenceController);
  pFVar12->_ListItemsSource_ArrayPointer = pTVar14;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar12->_OnGenerateRow,
             (FWriteAccessScope *)&local_550);
  local_538 = &(pFVar12->_OnGenerateRow).field_0x8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_538);
  if (puVar15 == (undefined8 *)0x0) {
    pTVar17 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_564 = local_560.SharedReferenceCount.ReferenceController._4_4_;
    local_570 = MakeShowWidget;
    uStack_568 = 0;
    pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_560);
    pTVar17 = (pTVar13->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar13->Object;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_VFMessageFilter___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedRef_VFMessageFilter___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar15[3] = pSVar2;
    puVar15[4] = pTVar17;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = true;
    bVar4 = true;
    bVar9 = true;
    puVar15[5] = local_570;
    puVar15[6] = CONCAT44(uStack_564,uStack_568);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_560.SharedReferenceCount.ReferenceController._4_4_,
                        local_560.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (local_550.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_550.Accessor,&local_550);
  }
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SListView<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedRef<FMessageFilter,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_598,"SListView< TSharedRef<FMessageFilter> >",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogListing.cpp"
             ,0x22c,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar6 = local_598._Widget.Object;
  if (local_598._Widget.Object == (SListView<TSharedRef<FMessageFilter,1>_> *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_598._Widget.Object,(FSlateBaseNamedArgs *)pFVar12);
  SListView<TSharedRef<FMessageFilter,1>_>::Construct(local_598._Widget.Object,pFVar12);
  if (local_598._Widget.Object == (SListView<TSharedRef<FMessageFilter,1>_> *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar13;
    }
  }
  if (((local_598._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_598._Widget.Object)->_padding_ + 0x228))(local_598._Widget.Object);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_142c0df97;
  }
  bVar11 = 0x20;
LAB_142c0df97:
  *(byte *)&(local_598._Widget.Object)->_padding_ =
       (byte)(local_598._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_598._Widget.Object)->_padding_ =
       (byte)(local_598._Widget.Object)->_padding_ | bVar11;
  if (local_598._Widget.Object == (SListView<TSharedRef<FMessageFilter,1>_> *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar13;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_598._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_598._Widget.Object == (SListView<TSharedRef<FMessageFilter,1>_> *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar13;
    }
  }
  FVar7.ReferenceController = local_598._Widget.SharedReferenceCount.ReferenceController;
  local_598._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_598._Widget.Object = (SListView<TSharedRef<FMessageFilter,1>_> *)0x0;
  if (pSVar6 == (SListView<TSharedRef<FMessageFilter,1>_> *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar13;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SListView<TSharedRef<FMessageFilter,1>_>::FArguments::~FArguments(&local_530);
  return __return_storage_ptr__;
}

// OnGetPageMenuContent @ 142c0e090

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SMessageLogListing::OnGetPageMenuContent
          (SMessageLogListing *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FMessageLogListingViewModel *pFVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  TSharedRef<SWidget,1> *pTVar10;
  ISlateStyle *pIVar11;
  FPage *pFVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  FSlateIcon *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  TReferenceControllerBase<1> *pTVar18;
  uint local_res8;
  uint uStackX_c;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_478
  ;
  undefined1 local_468 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_460;
  ForAnyElementType FStack_458;
  ulonglong local_450;
  undefined1 local_448 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_430;
  ForAnyElementType FStack_428;
  ulonglong local_420;
  undefined8 local_418;
  FName local_410;
  FName local_408;
  undefined1 local_400 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3e8;
  ForAnyElementType FStack_3e0;
  ulonglong local_3d8;
  undefined1 local_3d0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3b8;
  ForAnyElementType FStack_3b0;
  ulonglong local_3a8;
  undefined1 local_3a0 [8];
  FDelegateAllocation local_398;
  TReferenceControllerBase<1> *local_388;
  code *local_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  FFormatArgumentValue local_370;
  FString local_350;
  FText local_340;
  FDestructionSentinel local_330;
  FDestructionSentinel local_318;
  FDestructionSentinel local_300;
  FDestructionSentinel local_2e8;
  FDestructionSentinel local_2d0;
  FDelegateAllocation *local_2b8;
  undefined1 local_2b0 [24];
  undefined1 local_298 [24];
  undefined1 local_280 [24];
  undefined1 local_268 [32];
  TSharedPtr<FExtender,1> local_248;
  TSharedPtr<FUICommandList_const_,1> local_238;
  TSharedRef<SWidget,1> local_228;
  FText local_218;
  FTextFormat local_208;
  FSlateIcon local_1f8;
  FMenuBuilder local_1d8;
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  if (((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar10;
  }
  pFVar2 = (this->MessageLogListingViewModel).Object;
  if (((pFVar2->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar10;
  }
  if ((uint)(((pFVar2->MessageLogListingModel).Object)->Pages).ListSize < 2) {
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar8 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar8.ReferenceController)->SharedReferenceCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    return __return_storage_ptr__;
  }
  local_418 = 0;
  pIVar11 = FAppStyle::Get();
  local_248.Object = (FExtender *)0x0;
  local_248.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_238.Object = (FUICommandList *)0x0;
  local_238.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMenuBuilder::FMenuBuilder
            (&local_1d8,true,&local_238,&local_248,false,pIVar11,true,(FName)0x0,true);
  local_res8 = 0;
  pTVar18 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  while( true ) {
    if (((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
    pFVar2 = (this->MessageLogListingViewModel).Object;
    if (((pFVar2->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
    if ((uint)(((pFVar2->MessageLogListingModel).Object)->Pages).ListSize <= local_res8) {
      FMenuBuilder::MakeWidget
                (&local_1d8,__return_storage_ptr__,
                 (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                  *)0x0);
      FMenuBuilder::~FMenuBuilder(&local_1d8);
      return __return_storage_ptr__;
    }
    local_478.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_478.Pairs.ArrayNum = 0;
    local_478.Pairs.ArrayMax = 0;
    if (((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
    pFVar2 = (this->MessageLogListingViewModel).Object;
    if (((pFVar2->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
    pFVar12 = FMessageLogListingModel::PageAtIndex
                        ((pFVar2->MessageLogListingModel).Object,local_res8);
    local_370.Type = Text;
    local_370.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar12->Title).TextData.Reference;
    if (local_370.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_370.TextValue.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_370.TextValue.field0_0x0.TypedValue.TextData.Reference,local_res18);
    }
    local_370.TextValue.field0_0x0.TypedValue.Flags = (pFVar12->Title).Flags;
    if ((local_370.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar9)) break;
    ::FString::FString(&local_350,L"PageName");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_478,&local_350,&local_370);
    if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350.Data.AllocatorInstance.Data);
    }
    if (local_370.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_370.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    local_468[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_468[1] = false;
    local_450 = 0;
    local_460.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_458.Data = (FScriptContainerElement *)0x0;
    FText::FText((FText *)local_3d0);
    local_3d0[0x10] = false;
    local_3a8 = 0;
    local_410.ComparisonIndex.Value = 0;
    local_410.Number = 0;
    local_3b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_3b0.Data = (FScriptContainerElement *)0x0;
    local_408.ComparisonIndex.Value = 0;
    local_408.Number = 0;
    local_3a0 = (undefined1  [8])0x0;
    local_398.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_398.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a0,
               (FWriteAccessScope *)&local_2d0);
    local_2b8 = &local_398;
    puVar13 = UE::Core::Private::DelegateAllocate(0x38,&local_398);
    if (puVar13 != (undefined8 *)0x0) {
      uStack_378 = 0;
      local_380 = OnPageSelected;
      uStack_374 = local_340._12_4_;
      pTVar10 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_228);
      pTVar18 = (pTVar10->SharedReferenceCount).ReferenceController;
      pSVar3 = pTVar10->Object;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
      *puVar13 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__I__6B_;
      *(uint *)(puVar13 + 1) = local_res8;
      local_388 = pTVar18;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar13[2] = uVar14;
      *puVar13 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSMessageLogListing___00__A6AXXZUFDefaultDelegateUserPolicy__I__6B_
      ;
      puVar13[3] = pSVar3;
      puVar13[4] = pTVar18;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->WeakReferenceCount = (atomic<int>)((int)pTVar18->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar13[5] = local_380;
      puVar13[6] = CONCAT44(uStack_374,uStack_378);
    }
    if (bVar5) {
      bVar5 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    }
    if (bVar6) {
      bVar6 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_388)
      ;
    }
    if (bVar7) {
      bVar7 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_228.SharedReferenceCount.ReferenceController);
    }
    if (local_2d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d0.Accessor,&local_2d0);
    }
    FUIAction::FUIAction
              ((FUIAction *)local_2b0,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_3a0,RepeatDisabled)
    ;
    pFVar15 = FSlateIcon::FSlateIcon(&local_1f8);
    pFVar16 = FText::AsLocalizable_Advanced_LocText
                        (&local_340,L"Developer.MessageLog",L"PageMenuEntry_Tooltip",
                         L"View page: {PageName}");
    pFVar17 = FTextFormat::FTextFormat(&local_208,pFVar16,Default);
    pFVar16 = FText::Format(&local_218,pFVar17,&local_478);
    FText::FText((FText *)local_400,pFVar16);
    local_400[0x10] = true;
    local_3d8 = 0;
    local_3e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_3e0.Data = (FScriptContainerElement *)0x0;
    if (((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
    pFVar2 = (this->MessageLogListingViewModel).Object;
    if (((pFVar2->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar10;
    }
    pFVar12 = FMessageLogListingModel::PageAtIndex
                        ((pFVar2->MessageLogListingModel).Object,local_res8);
    local_448._0_8_ = (pFVar12->Title).TextData.Reference;
    if ((ITextData *)local_448._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_448._0_8_ + 8))(local_448._0_8_,local_res20);
    }
    local_448._8_4_ = (pFVar12->Title).Flags;
    local_448[0x10] = true;
    local_420 = 0;
    local_430.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_428.Data = (FScriptContainerElement *)0x0;
    FBaseMenuBuilder::AddMenuEntry
              ((FBaseMenuBuilder *)&local_1d8,(TAttribute<FText> *)local_448,
               (TAttribute<FText> *)local_400,pFVar15,(FUIAction *)local_2b0,local_408,Button,
               local_410,(TAttribute<FText> *)local_3d0,(TAttribute<EVisibility> *)local_468);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_430,(FWriteAccessScope *)&local_330);
    if (((int)local_420 != 0) && (FStack_428.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_428.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_428,0,0,0x10);
      local_420 = local_420 & 0xffffffff00000000;
    }
    if (local_330.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_330.Accessor,&local_330);
    }
    if (FStack_428.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_428.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_430.AccessDetector);
    if ((ITextData *)local_448._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_448._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_3e8,(FWriteAccessScope *)&local_318);
    if (((int)local_3d8 != 0) && (FStack_3e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_3e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3e0,0,0,0x10);
      local_3d8 = local_3d8 & 0xffffffff00000000;
    }
    if (local_318.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
    }
    if (FStack_3e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3e0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3e8.AccessDetector);
    if ((ITextData *)local_400._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_400._0_8_ + 0x10))();
    }
    if (local_218.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
    }
    if (local_340.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_340.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_268);
    if ((void *)local_268._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_268._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_268);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_280);
    if ((void *)local_280._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_280._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_280);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_298);
    if ((void *)local_298._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_298._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_298);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b0);
    if ((void *)local_2b0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2b0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2b0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_3b8,(FWriteAccessScope *)&local_300);
    if (((int)local_3a8 != 0) && (FStack_3b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_3b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3b0,0,0,0x10);
      local_3a8 = local_3a8 & 0xffffffff00000000;
    }
    if (local_300.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_300.Accessor,&local_300);
    }
    if (FStack_3b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3b8.AccessDetector);
    if ((ITextData *)local_3d0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_3d0._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_460,(FWriteAccessScope *)&local_2e8);
    if (((int)local_450 != 0) && (FStack_458.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_458.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_458,0,0,0x10);
      local_450 = local_450 & 0xffffffff00000000;
    }
    if (local_2e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
    }
    if (FStack_458.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_458.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_460.AccessDetector);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_478.Pairs.AllocatorInstance.Data,
               local_478.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_478.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_478.Pairs.AllocatorInstance.Data);
    }
    local_res8 = local_res8 + 1;
  }
  pcVar4 = (code *)swi(3);
  pTVar10 = (TSharedRef<SWidget,1> *)(*pcVar4)();
  return pTVar10;
}

// OnGetPageMenuLabel @ 142c0e9c0

FText * __thiscall
SMessageLogListing::OnGetPageMenuLabel(SMessageLogListing *this,FText *__return_storage_ptr__)

{
  uint uVar1;
  FMessageLogListingViewModel *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  FText *pFVar6;
  FPage *pFVar7;
  undefined1 local_res8 [8];
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar4)();
      return pFVar6;
    }
  }
  pFVar2 = (this->MessageLogListingViewModel).Object;
  if ((pFVar2->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar4)();
      return pFVar6;
    }
  }
  if (1 < (uint)(((pFVar2->MessageLogListingModel).Object)->Pages).ListSize) {
    if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FText *)(*pcVar4)();
        return pFVar6;
      }
    }
    pFVar2 = (this->MessageLogListingViewModel).Object;
    if (pFVar2 == (FMessageLogListingViewModel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FText *)(*pcVar4)();
        return pFVar6;
      }
    }
    uVar1 = ((this->MessageLogListingViewModel).Object)->CurrentPageIndex;
    if ((pFVar2->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FText *)(*pcVar4)();
        return pFVar6;
      }
    }
    pFVar7 = FMessageLogListingModel::PageAtIndex((pFVar2->MessageLogListingModel).Object,uVar1);
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar3 = (pFVar7->Title).TextData.Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    __return_storage_ptr__->Flags = (pFVar7->Title).Flags;
    return __return_storage_ptr__;
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"Developer.MessageLog",L"PageMenuLabel",L"PAGE");
  return __return_storage_ptr__;
}

// OnKeyDown @ 142c0fa30

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMessageLogListing::OnKeyDown
          (SMessageLogListing *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  bool bVar1;
  FReply *this_00;
  FReply local_178;
  FReply local_c0;
  
  bVar1 = FUICommandList::ProcessCommandBindings((this->UICommandList).Object,param_2);
  this_00 = &local_178;
  if (bVar1) {
    this_00 = &local_c0;
  }
  FReply::FReply(this_00,bVar1);
  FReply::FReply(__return_storage_ptr__,this_00);
  if ((!bVar1 + 1U & 2) != 0) {
    FReply::~FReply(&local_178);
  }
  if (bVar1) {
    FReply::~FReply(&local_c0);
  }
  return __return_storage_ptr__;
}

// OnLineSelectionChanged @ 142c114b0

void __thiscall
SMessageLogListing::OnLineSelectionChanged
          (SMessageLogListing *this,TSharedPtr<FTokenizedMessage,1> *param_1,Type param_2)

{
  FMessageLogListingViewModel *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  TSharedRef<FTokenizedMessage,1> *local_18;
  int local_10;
  
  if (this->bUpdatingSelection == false) {
    this->bUpdatingSelection = true;
    if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
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
    pFVar1 = (this->MessageLogListingViewModel).Object;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x58);
    if ((this->MessageListView).Object == (SListView<TSharedRef<FTokenizedMessage,1>_> *)0x0) {
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
    plVar5 = &((this->MessageListView).Object)->_padding_;
    uVar4 = (**(code **)(*plVar5 + 0xd0))(plVar5,&local_18);
    (*pcVar2)(pFVar1,uVar4);
    DestructItems<TSharedRef<FTokenizedMessage,1>,int>(local_18,local_10);
    if (local_18 != (TSharedRef<FTokenizedMessage,1> *)0x0) {
      FMemory::Free(local_18);
    }
    this->bUpdatingSelection = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnPageSelected @ 142c159a0

void __thiscall SMessageLogListing::OnPageSelected(SMessageLogListing *this,uint param_1)

{
  FMessageLogListingViewModel *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
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
  this_00 = (this->MessageLogListingViewModel).Object;
  this_00->CurrentPageIndex = param_1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this_00->PageSelectionChangedEvent);
  FMessageLogListingViewModel::RefreshFilteredMessages(this_00);
  return;
}

// OnSelectionChanged @ 142c17400

void __thiscall SMessageLogListing::OnSelectionChanged(SMessageLogListing *this)

{
  SListView<TSharedRef<FTokenizedMessage,1>_> *pSVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  Type *pTVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  longlong local_20;
  
  if (this->bUpdatingSelection == false) {
    this->bUpdatingSelection = true;
    if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
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
    plVar5 = (longlong *)
             (**(code **)(((this->MessageLogListingViewModel).Object)->_padding_ + 0x50))();
    if ((this->MessageListView).Object == (SListView<TSharedRef<FTokenizedMessage,1>_> *)0x0) {
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
    pSVar1 = (this->MessageListView).Object;
    pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar1->_padding_);
    if ((*pTVar6 != None) &&
       (*(int *)&(pSVar1->SelectedItems).Elements.field_0x8 !=
        *(int *)&(pSVar1->SelectedItems).Elements.field_0x34)) {
      (**(code **)(pSVar1->_padding_ + 0x30))(&pSVar1->_padding_);
      (**(code **)(pSVar1->_padding_ + 0x40))(&pSVar1->_padding_,3);
    }
    for (uVar7 = 0; (-1 < (int)uVar7 && ((int)uVar7 < (int)plVar5[1])); uVar7 = uVar7 + 1) {
      if ((this->MessageListView).Object == (SListView<TSharedRef<FTokenizedMessage,1>_> *)0x0) {
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
      pSVar1 = (this->MessageListView).Object;
      uVar4 = 0;
      if ((int)uVar7 < (int)plVar5[1]) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
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
      puVar8 = (undefined8 *)((longlong)(int)uVar7 * 0x10 + *plVar5);
      pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar1->_padding_);
      if (*pTVar6 != None) {
        pcVar2 = *(code **)(pSVar1->_padding_ + 0x28);
        local_28 = *puVar8;
        local_20 = puVar8[1];
        if (local_20 != 0) {
          LOCK();
          *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
          UNLOCK();
        }
        (*pcVar2)(&pSVar1->_padding_,&local_28,1,0);
        (**(code **)(pSVar1->_padding_ + 0x40))(&pSVar1->_padding_,3);
      }
    }
    if (0 < (int)plVar5[1]) {
      ScrollToMessage(this,(TSharedRef<FTokenizedMessage,1> *)*plVar5);
    }
    this->bUpdatingSelection = false;
  }
  return;
}

// RefreshVisibility @ 142c1fcc0

void __thiscall SMessageLogListing::RefreshVisibility(SMessageLogListing *this)

{
  int iVar1;
  FMessageLogListingViewModel *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<FTokenizedMessage,1> *pTVar6;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
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
  pFVar2 = (this->MessageLogListingViewModel).Object;
  if (0 < (pFVar2->FilteredMessages).ArrayNum) {
    if (pFVar2 == (FMessageLogListingViewModel *)0x0) {
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
    iVar1 = (pFVar2->FilteredMessages).ArrayNum;
    if (((this->MessageLogListingViewModel).Object)->bScrollToBottom == false) {
      if (iVar1 < 1) {
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
      pTVar6 = (TSharedRef<FTokenizedMessage,1> *)(pFVar2->FilteredMessages).AllocatorInstance.Data;
    }
    else {
      uVar5 = 0;
      if ((int)(iVar1 - 1U) < iVar1) {
        uVar5 = ~(iVar1 - 1U) >> 0x1f;
      }
      if (uVar5 == 0) {
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
      pTVar6 = (TSharedRef<FTokenizedMessage,1> *)
               ((pFVar2->FilteredMessages).AllocatorInstance.Data +
               (longlong)((pFVar2->FilteredMessages).ArrayNum + -1) * 0x10);
    }
    ScrollToMessage(this,pTVar6);
  }
  if ((this->MessageListView).Object == (SListView<TSharedRef<FTokenizedMessage,1>_> *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000142c1fe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->MessageListView).Object)->_padding_ + 0x248))();
  return;
}

// ScrollToMessage @ 142c25e70

void __thiscall
SMessageLogListing::ScrollToMessage
          (SMessageLogListing *this,TSharedRef<FTokenizedMessage,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SListView<TSharedRef<FTokenizedMessage,1>_> *pSVar2;
  ITableRow *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<ITableRow,1> *pTVar7;
  TSharedRef<FTokenizedMessage_const_,1> local_58;
  TSharedRef<FTokenizedMessage,1> local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (((this->MessageListView).Object == (SListView<TSharedRef<FTokenizedMessage,1>_> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = (this->MessageListView).Object;
  local_58.Object = param_1->Object;
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
  local_58.SharedReferenceCount.ReferenceController = pTVar1;
  pTVar7 = TMapBase<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<FTokenizedMessage,1>,TSharedRef<ITableRow,1>,0>_>
                   *)&(pSVar2->WidgetGenerator).ItemToWidgetMap,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pTVar7 == (TSharedRef<ITableRow,1> *)0x0) {
    local_20 = 0;
    local_28 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  else {
    pIVar3 = pTVar7->Object;
    pTVar4 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_30 = 0;
    local_38 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (pIVar3 != (ITableRow *)0x0) {
      return;
    }
  }
  if (((this->MessageListView).Object == (SListView<TSharedRef<FTokenizedMessage,1>_> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_48.Object = param_1->Object;
  pSVar2 = (this->MessageListView).Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SListView<TSharedRef<FTokenizedMessage,1>_>::RequestScrollIntoView(pSVar2,&local_48,0);
  return;
}

// SelectMessage @ 142c26cf0

void __thiscall
SMessageLogListing::SelectMessage
          (SMessageLogListing *this,TSharedRef<FTokenizedMessage,1> *param_1,bool param_2)

{
  FMessageLogListingViewModel *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->MessageLogListingViewModel).Object == (FMessageLogListingViewModel *)0x0) {
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
  pFVar1 = (this->MessageLogListingViewModel).Object;
                    /* WARNING: Could not recover jumptable at 0x000142c26d59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 0x68))(pFVar1,param_1,param_2);
  return;
}

