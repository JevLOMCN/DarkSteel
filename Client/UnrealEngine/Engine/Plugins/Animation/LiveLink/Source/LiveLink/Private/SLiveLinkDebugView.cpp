// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 6

// ~SLiveLinkDebugView @ 14d016ba0

void __thiscall SLiveLinkDebugView::~SLiveLinkDebugView(SLiveLinkDebugView *this)

{
  FScriptContainerElement *pFVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  this->_padding_ = (longlong)&___7SLiveLinkDebugView__6B_;
  if (this->Client != (FLiveLinkClient *)0x0) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)(this->Client->_padding_ + 0x1d8))();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackgroundBrushSubject).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackgroundBrushSource).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DebugItemView).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FLiveLinkDebugUIEntry,1>,int>
            ((TSharedPtr<FLiveLinkDebugUIEntry,1> *)(this->DebugItemData).AllocatorInstance.Data,
             (this->DebugItemData).ArrayNum);
  pFVar1 = (this->DebugItemData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 14d02c130

void __thiscall
SLiveLinkDebugView::Construct(SLiveLinkDebugView *this,FArguments *param_1,FLiveLinkClient *param_2)

{
  byte *pbVar1;
  SWidget *pSVar2;
  FName FVar3;
  SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  SHorizontalBox *pSVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  TSharedRef<FSlateColorBrush,1> *pTVar13;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar14;
  FArguments *pFVar15;
  undefined8 *puVar16;
  TSharedRef<SWidget,1> *pTVar17;
  ulong64 uVar18;
  FName *pFVar19;
  FModuleManager *this_00;
  IModuleInterface *pIVar20;
  FSlateBrush *pFVar21;
  FArguments *pFVar22;
  FSlot *pFVar23;
  FSlot *pFVar24;
  TSharedRef<SHorizontalBox,1> *pTVar25;
  longlong *plVar26;
  TReferenceControllerBase<1> *pTVar27;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  FName local_9f8;
  undefined4 uStack_9f0;
  uint uStack_9ec;
  longlong *local_9e8;
  TReferenceControllerBase<1> *local_9e0;
  FLLMScope local_9d8 [2];
  undefined4 local_9d0;
  undefined1 local_9cc;
  undefined1 local_9c8 [8];
  ForAnyElementType FStack_9c0;
  ulonglong local_9b8;
  TSlateDecl<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T0RequiredArgs> local_9b0
  ;
  FSlateColorBrush *local_998;
  FSharedReferencer<1> local_990;
  FSlateColorBrush *local_988;
  FSharedReferencer<1> local_980;
  SHorizontalBox *local_978;
  TReferenceControllerBase<1> *pTStack_970;
  undefined8 local_968;
  FSharedReferencer<1> local_960;
  FMemScope local_958;
  FSlot *local_950;
  FName local_948;
  FMemScope local_940;
  undefined8 local_938;
  FSharedReferencer<1> FStack_930;
  TAttribute<EVisibility> local_928;
  TSharedRef<SHorizontalBox,1> local_908;
  FDestructionSentinel local_8f8;
  FDestructionSentinel local_8e0;
  undefined1 *local_8c8;
  undefined1 local_8c0 [16];
  FName local_8b0;
  FName local_8a8;
  TSharedRef<FSlateColorBrush,1> local_8a0;
  TSharedRef<FSlateColorBrush,1> local_890;
  code *local_878;
  longlong lStack_870;
  code *local_868;
  longlong lStack_860;
  TSharedRef<SWidget,1> local_858;
  SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *local_848;
  TReferenceControllerBase<1> *pTStack_840;
  FName local_838;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_830;
  FName local_818;
  undefined8 *local_810;
  SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *local_808;
  FSharedReferencer<1> local_800 [4];
  TDelegateBase<FNotThreadSafeDelegateMode> local_7e0;
  undefined4 local_7c8;
  undefined1 local_7c4;
  undefined4 local_7c0;
  undefined1 local_7bc;
  TDelegateBase<FNotThreadSafeDelegateMode> local_7a8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_788;
  char local_770;
  TDelegateBase<FNotThreadSafeDelegateMode> local_760;
  TDelegateBase<FNotThreadSafeDelegateMode> local_740;
  FArguments local_728;
  FArguments local_248;
  
  pFVar24 = (FSlot *)0x0;
  local_res8 = 0;
  if ((param_2 == (FLiveLinkClient *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InClient",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkDebugView.cpp"
                          ,0x3b,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this->Client = param_2;
  local_928.Value = (EVisibility)EVisibility::HitTestInvisible.Value.Value;
  local_928.bIsSet = true;
  local_928.Getter._16_8_ = 0;
  local_928.Getter._0_8_ = 0;
  local_928.Getter._8_8_ = 0;
  SCompoundWidget::SetVisibility((SCompoundWidget *)this,&local_928);
  pTVar13 = MakeShared<FSlateColorBrush,1,FLinearColor_const_&>(&local_8a0,&BackgroundColorSource);
  local_990.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
  local_998 = pTVar13->Object;
  if (local_990.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_990.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_990.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->BackgroundBrushSource != (TSharedPtr<FSlateColorBrush,1> *)&local_998) {
    (this->BackgroundBrushSource).Object = local_998;
    local_998 = (FSlateColorBrush *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BackgroundBrushSource).SharedReferenceCount,&local_990);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_990.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8a0.SharedReferenceCount.ReferenceController);
  pTVar13 = MakeShared<FSlateColorBrush,1,FLinearColor_const_&>(&local_890,&BackgroundColorSubject);
  local_980.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
  local_988 = pTVar13->Object;
  if (local_980.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_980.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_980.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->BackgroundBrushSubject != (TSharedPtr<FSlateColorBrush,1> *)&local_988) {
    (this->BackgroundBrushSubject).Object = local_988;
    local_988 = (FSlateColorBrush *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BackgroundBrushSubject).SharedReferenceCount,&local_980);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_980.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_890.SharedReferenceCount.ReferenceController);
  RefreshSourceItems(this);
  pTVar14 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (**(code **)(this->Client->_padding_ + 0x1d8))();
  uStack_9f0 = 0;
  local_9f8 = (FName)HandleSourcesChanged;
  lStack_870 = (ulonglong)uStack_9ec << 0x20;
  local_878 = HandleSourcesChanged;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddSP<SLiveLinkDebugView>(pTVar14,(SLiveLinkDebugView *)local_8c0,(pmf_bdbe0d3d *)this);
  pTVar14 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (**(code **)(this->Client->_padding_ + 0x1e0))();
  local_9f8 = (FName)HandleSourcesChanged;
  uStack_9f0 = 0;
  lStack_860 = (ulonglong)uStack_9ec << 0x20;
  local_868 = HandleSourcesChanged;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddSP<SLiveLinkDebugView>(pTVar14,(SLiveLinkDebugView *)(local_8c0 + 8),(pmf_bdbe0d3d *)this);
  pFVar15 = SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::FArguments::FArguments(&local_728);
  local_938 = 0;
  FStack_930.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar15->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FLiveLinkDebugUIEntry,1>,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar15->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0;
  if (&pFVar15->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1> *
      )&local_938) {
    (pFVar15->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar15->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_930);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_930.ReferenceController);
  pFVar15->_ListItemsSource_ArrayPointer = &this->DebugItemData;
  local_9cc = 1;
  local_9d0 = 0;
  local_9b8 = 0;
  local_9c8 = (undefined1  [8])0x0;
  FStack_9c0.Data = (FScriptContainerElement *)0x0;
  (pFVar15->_SelectionMode).Value = None;
  (pFVar15->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9c8,
             (FWriteAccessScope *)&local_8f8);
  if (((int)local_9b8 != 0) && (FStack_9c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9c0,0,0,0x10);
    local_9b8 = local_9b8 & 0xffffffff00000000;
  }
  if (local_8f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8f8.Accessor,&local_8f8);
  }
  if (FStack_9c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar15->_OnGenerateRow,
             (FWriteAccessScope *)&local_8e0);
  local_8c8 = &(pFVar15->_OnGenerateRow).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_8c8);
  if (puVar16 == (undefined8 *)0x0) {
    pTVar27 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    pFVar23 = pFVar24;
  }
  else {
    uStack_9ec = local_908.SharedReferenceCount.ReferenceController._4_4_;
    local_9f8 = (FName)GenerateRow;
    uStack_9f0 = 0;
    pTVar17 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_858);
    pTVar27 = (pTVar17->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar17->Object;
    if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFLiveLinkDebugUIEntry___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar18;
    *puVar16 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSLiveLinkDebugView___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFLiveLinkDebugUIEntry___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar16[3] = pSVar2;
    puVar16[4] = pTVar27;
    if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar27->WeakReferenceCount = (atomic<int>)((int)pTVar27->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(FName *)(puVar16 + 5) = local_9f8;
    puVar16[6] = CONCAT44(uStack_9ec,uStack_9f0);
    pFVar23 = (FSlot *)&DAT_00000007;
  }
  if (((ulonglong)pFVar23 & 4) != 0) {
    pFVar23 = (FSlot *)(ulonglong)((uint)pFVar23 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  }
  if (((ulonglong)pFVar23 & 2) != 0) {
    pFVar23 = (FSlot *)(ulonglong)((uint)pFVar23 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  }
  if (((ulonglong)pFVar23 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_858.SharedReferenceCount.ReferenceController);
  }
  if (local_8e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8e0.Accessor,&local_8e0);
  }
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_9f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_958,&local_9f8,true);
  TSlateDecl<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_9b0,"SListView<FLiveLinkDebugUIEntryPtr>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkDebugView.cpp"
             ,0x49,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_958);
  FLLMScope::~FLLMScope(local_res20);
  if (local_9b0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_9b0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_9b0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_848 = (this->DebugItemView).Object;
  pTStack_840 = (this->DebugItemView).SharedReferenceCount.ReferenceController;
  (this->DebugItemView).Object = local_9b0._Widget.Object;
  (this->DebugItemView).SharedReferenceCount.ReferenceController =
       local_9b0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_840);
  pSVar4 = local_9b0._Widget.Object;
  if ((local_9b0._Widget.Object == (SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_9b0._Widget.Object,(FSlateBaseNamedArgs *)pFVar15);
  SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::Construct(local_9b0._Widget.Object,pFVar15);
  if ((local_9b0._Widget.Object == (SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((local_9b0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_9b0._Widget.Object)->_padding_ + 0x228))(local_9b0._Widget.Object);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_14d02c688;
  }
  bVar12 = 0x20;
LAB_14d02c688:
  *(byte *)&(local_9b0._Widget.Object)->_padding_ =
       (byte)(local_9b0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_9b0._Widget.Object)->_padding_ =
       (byte)(local_9b0._Widget.Object)->_padding_ | bVar12;
  if ((local_9b0._Widget.Object == (SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_9b0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_9b0._Widget.Object == (SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar9.ReferenceController = local_9b0._Widget.SharedReferenceCount.ReferenceController;
  local_9b0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_9b0._Widget.Object = (SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0;
  if ((pSVar4 == (SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._OnItemToString_Debug);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._IsFocusable.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._ScrollbarVisibility.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_728._ExternalScrollbar.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_728._HeaderRow.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._SelectionMode.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._OnMouseButtonClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._OnItemsRebuilt);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._MaxPinnedItems.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._ItemHeight.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_728._ListItemsSource_SharedObservableArray.SharedReferenceCount.
             ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._OnListViewScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._OnEntryInitialized);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_728._OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_728);
  pFVar19 = ::FName::FName(&local_8b0,"LiveLink");
  FVar3 = *pFVar19;
  this_00 = FModuleManager::Get();
  pIVar20 = FModuleManager::LoadModuleChecked(this_00,FVar3);
  (**(code **)((longlong)*pIVar20 + 0x40))(pIVar20,&local_9e8);
  if (local_9e8 != (longlong *)0x0) {
    if ((local_9e8 == (longlong *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar26 = local_9e8;
    pcVar7 = *(code **)(*local_9e8 + 0x50);
    pFVar19 = ::FName::FName(&local_8a8,"LiveLink.Subject.Okay");
    pFVar21 = (FSlateBrush *)(*pcVar7)(plVar26,*pFVar19);
    this->ValidBrush = pFVar21;
    if ((local_9e8 == (longlong *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar26 = local_9e8;
    pcVar7 = *(code **)(*local_9e8 + 0x50);
    pFVar19 = ::FName::FName(&local_818,"LiveLink.Subject.Warning");
    pFVar21 = (FSlateBrush *)(*pcVar7)(plVar26,*pFVar19);
    this->InvalidBrush = pFVar21;
    plVar26 = local_9e8;
    if ((local_9e8 == (longlong *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), plVar26 = local_9e8, bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = *(code **)(*plVar26 + 0x50);
    pFVar19 = ::FName::FName(&local_838,"LiveLink.Subject.Paused");
    pFVar21 = (FSlateBrush *)(*pcVar7)(plVar26,*pFVar19);
    this->PausedBrush = pFVar21;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_9e0);
  pFVar22 = SHorizontalBox::FArguments::FArguments(&local_248);
  pFVar23 = ::operator_new(0x58);
  if (pFVar23 != (FSlot *)0x0) {
    *(undefined8 *)pFVar23 = 0;
    *(undefined8 *)&pFVar23->field_0x8 = 0;
    *(undefined8 *)&pFVar23->field_0x10 = 0;
    *(undefined8 *)&pFVar23->field_0x18 = 0;
    *(undefined8 *)&pFVar23->field_0x20 = 0;
    *(undefined8 *)&pFVar23->field_0x28 = 0;
    *(undefined8 *)&pFVar23->field_0x30 = 0;
    *(undefined8 *)&pFVar23->field_0x38 = 0;
    *(undefined8 *)&pFVar23->field_0x40 = 0;
    *(undefined8 *)&pFVar23->field_0x48 = 0;
    *(undefined8 *)&pFVar23->field_0x50 = 0;
    pFVar24 = SHorizontalBox::FSlot::FSlot(pFVar23);
  }
  local_950 = pFVar24;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_810,(FSlot *)&local_950);
  local_7c0 = 3;
  local_7bc = 1;
  local_7c8 = 3;
  local_7c4 = 1;
  if (((this->DebugItemView).Object == (SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar27 = (this->DebugItemView).SharedReferenceCount.ReferenceController;
  pSVar4 = (this->DebugItemView).Object;
  if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar4 == (SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_968 = 0;
  local_960.ReferenceController = pTVar27;
  local_808 = pSVar4;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_800,&local_960);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_960.ReferenceController);
  pFVar22 = SHorizontalBox::FArguments::operator+(pFVar22,(FSlotArguments *)&local_810);
  FLLMScope::FLLMScope(local_9d8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_948 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_940,&local_948,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_830,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkDebugView.cpp"
             ,0x57,local_res18);
  FMemScope::~FMemScope(&local_940);
  FLLMScope::~FLLMScope(local_9d8);
  pTVar25 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_830,&local_908,pFVar22);
  plVar26 = &this->_padding_;
  pTVar5 = (pTVar25->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar25->Object;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar26);
  }
  else {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar26);
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar6;
  this->_padding_ = (longlong)pTVar5;
  local_978 = pSVar6;
  pTStack_970 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar26);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_908.SharedReferenceCount.ReferenceController._4_4_,
                      local_908.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_830._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_740);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_760);
  if (local_770 != '\0') {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_788);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_7a8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_7e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_800[0].ReferenceController);
  if (local_810 != (undefined8 *)0x0) {
    (**(code **)*local_810)(local_810,1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_248._Slots.AllocatorInstance.Data,local_248._Slots.ArrayNum);
  if ((FSlotArguments *)local_248._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_248._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_248);
  return;
}

// GenerateRow @ 14d045400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

TSharedRef<ITableRow,1> * __thiscall
SLiveLinkDebugView::GenerateRow
          (SLiveLinkDebugView *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FLiveLinkDebugUIEntry,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  FName FVar3;
  FSlateBrush *pFVar4;
  FLiveLinkDebugUIEntry *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  SHorizontalBox *pSVar8;
  TReferenceControllerBase<1> *pTVar9;
  code *pcVar10;
  SBorder *pSVar11;
  FSharedReferencer<1> FVar12;
  SImage *pSVar13;
  FSharedReferencer<1> FVar14;
  FArguments *pFVar15;
  STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *pSVar16;
  bool bVar17;
  byte bVar18;
  char cVar19;
  byte bVar20;
  TSharedRef<ITableRow,1> *pTVar21;
  ULiveLinkSettings *pUVar22;
  FArguments *pFVar23;
  FSlot *pFVar24;
  FSizeParam *pFVar25;
  FSlotArguments *pFVar26;
  FArguments *pFVar27;
  FSlot *pFVar28;
  FSlotArguments *pFVar29;
  FArguments *pFVar30;
  FName *pFVar31;
  FSlateFontInfo *pFVar32;
  TSharedRef<STextBlock,1> *pTVar33;
  FArguments *pFVar34;
  TSharedRef<SHorizontalBox,1> *pTVar35;
  TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1> *pTVar36;
  longlong lVar37;
  FSlotArguments *pFVar38;
  T0RequiredArgs local_16b8;
  T0RequiredArgs local_16b7;
  T0RequiredArgs local_16b6;
  T0RequiredArgs local_16b5;
  FLLMScope local_16b4;
  FLLMScope local_16b0;
  FLLMScope local_16ac;
  FLLMScope local_16a8;
  FLLMScope local_16a4;
  SImage *local_16a0;
  FSharedReferencer<1> local_1698;
  STextBlock *local_1690;
  FSharedReferencer<1> local_1688;
  FArguments *local_1680;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1678;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1660;
  UObject *local_1648;
  UObject *local_1640;
  int local_1638;
  bool local_1634;
  bool local_1633;
  bool local_1632;
  UObject *local_1630;
  undefined8 local_1628;
  undefined8 uStack_1620;
  FCompositeFont *local_1618;
  TReferenceControllerBase<1> *local_1610;
  FName local_1608;
  float local_1600;
  int local_15fc;
  float local_15f8;
  EFontFallback local_15f4;
  bool local_15f3;
  bool local_15f2;
  float local_15f0;
  bool local_15e8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_15e0;
  FArguments *local_15c8;
  SWidget *local_15c0;
  TReferenceControllerBase<1> *pTStack_15b8;
  TSlateDecl<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_15b0;
  FName local_1598;
  undefined4 uStack_1590;
  uint uStack_158c;
  FMemScope local_1588;
  FSlot *local_1580;
  FName local_1578;
  FMemScope local_1570;
  FName local_1568;
  FMemScope local_1560;
  FName local_1558;
  FName local_1550;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_1548;
  FMemScope local_1540;
  FMemScope local_1538;
  undefined8 local_1530;
  FSharedReferencer<1> local_1528;
  undefined4 local_1520 [2];
  undefined4 local_1518 [2];
  FSlotArguments *local_1510;
  undefined4 local_1508;
  undefined1 local_1504;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1500;
  FSlateBrush *local_14e8;
  undefined1 local_14e0;
  TDelegateBase<FNotThreadSafeDelegateMode> local_14d8;
  FFontOutlineSettings local_14c0;
  TSharedPtr<FLiveLinkDebugUIEntry,1> local_14a0;
  TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1> local_1490;
  TSharedRef<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1> local_1480;
  TSharedRef<SHorizontalBox,1> local_1470;
  TSharedRef<STextBlock,1> local_1460;
  FName local_1450;
  code *local_1448;
  longlong lStack_1440;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1438;
  FCompositeFont *local_1420;
  TReferenceControllerBase<1> *pTStack_1418;
  SWidget *local_1410;
  TReferenceControllerBase<1> *pTStack_1408;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1400;
  undefined1 local_13e8 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_13b8;
  undefined1 local_13a0 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_1370;
  undefined1 local_1358 [88];
  TOptional<FSizeParam> local_1300;
  undefined4 local_1290;
  undefined1 local_128c;
  TDelegateBase<FNotThreadSafeDelegateMode> local_1288;
  FSlateFontInfo local_1270;
  undefined1 local_1210 [88];
  TOptional<FSizeParam> local_11b8;
  FArguments local_1128;
  FArguments local_d48;
  FArguments local_a50;
  FArguments local_848;
  FArguments local_5a0;
  
  if ((param_1->Object == (FLiveLinkDebugUIEntry *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar21 = (TSharedRef<ITableRow,1> *)(*pcVar10)();
    return pTVar21;
  }
  FVar3 = (param_1->Object->SubjectKey).SubjectName.Name;
  if ((param_1->Object == (FLiveLinkDebugUIEntry *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar21 = (TSharedRef<ITableRow,1> *)(*pcVar10)();
    return pTVar21;
  }
  if ((param_1->Object->SubjectKey).SubjectName.Name == (FName)0x0) {
    pUVar22 = GetDefault<ULiveLinkSettings>();
    bVar18 = pUVar22->TextSizeSource;
  }
  else {
    pUVar22 = GetDefault<ULiveLinkSettings>();
    bVar18 = pUVar22->TextSizeSubject;
  }
  if ((param_1->Object == (FLiveLinkDebugUIEntry *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar21 = (TSharedRef<ITableRow,1> *)(*pcVar10)();
    return pTVar21;
  }
  lVar37 = 0x2d0;
  if ((param_1->Object->SubjectKey).SubjectName.Name != (FName)0x0) {
    lVar37 = 0x2e0;
  }
  pFVar4 = *(FSlateBrush **)((longlong)&this->_padding_ + lVar37);
  local_15c8 = STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::FArguments::FArguments(&local_d48);
  pFVar23 = SBorder::FArguments::FArguments(&local_1128);
  local_14e0 = 1;
  pFVar29 = (FSlotArguments *)0x0;
  local_14d8._16_8_ = 0;
  local_14d8._0_8_ = 0;
  local_14d8._8_8_ = 0;
  (pFVar23->_BorderImage).Value = pFVar4;
  (pFVar23->_BorderImage).bIsSet = true;
  local_14e8 = pFVar4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_BorderImage).Getter,
             &local_14d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_14d8)
  ;
  local_1680 = SHorizontalBox::FArguments::FArguments(&local_a50);
  pFVar24 = ::operator_new(0x58);
  local_1510 = pFVar29;
  if (pFVar24 != (FSlot *)0x0) {
    *(undefined8 *)pFVar24 = 0;
    *(undefined8 *)&pFVar24->field_0x8 = 0;
    *(undefined8 *)&pFVar24->field_0x10 = 0;
    *(undefined8 *)&pFVar24->field_0x18 = 0;
    *(undefined8 *)&pFVar24->field_0x20 = 0;
    *(undefined8 *)&pFVar24->field_0x28 = 0;
    *(undefined8 *)&pFVar24->field_0x30 = 0;
    *(undefined8 *)&pFVar24->field_0x38 = 0;
    *(undefined8 *)&pFVar24->field_0x40 = 0;
    *(undefined8 *)&pFVar24->field_0x48 = 0;
    *(undefined8 *)&pFVar24->field_0x50 = 0;
    local_1510 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar24);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1358,(FSlot *)&local_1510);
  pFVar25 = (FSizeParam *)FAuto::FAuto((FAuto *)local_13e8);
  TOptional<FSizeParam>::operator=(&local_1300,pFVar25);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_13b8)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_13e8 + 0x10));
  local_1508 = __real_41a00000;
  local_1500._16_8_ = 0;
  local_1290 = __real_41a00000;
  local_1504 = 1;
  local_1500._0_8_ = 0;
  local_1500._8_8_ = 0;
  local_128c = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=(&local_1288,&local_1500);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_1500)
  ;
  pFVar26 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)(local_1358 + 0x18),__real_40800000,0.0,
                       __real_40c00000,0.0);
  puVar1 = &pFVar26->field_0x48;
  if (local_1520 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 1;
    pFVar26->field_0x4c = 1;
  }
  pFVar38 = pFVar29;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar38 = pFVar26;
  }
  if (local_1518 != (undefined4 *)&pFVar38->field_0x50) {
    *(undefined4 *)&pFVar38->field_0x50 = 2;
    pFVar38->field_0x54 = 1;
  }
  if (pFVar38 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar29 = pFVar38;
  }
  pFVar27 = SImage::FArguments::FArguments(&local_848);
  local_14a0.Object = param_1->Object;
  local_14a0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_14a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_14a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_14a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uStack_1590 = 0;
  local_1598 = (FName)GetSubjectIcon;
  lStack_1440 = (ulonglong)uStack_158c << 0x20;
  local_1448 = GetSubjectIcon;
  pFVar27 = SImage::FArguments::Image<SLiveLinkDebugView,TSharedPtr<FLiveLinkDebugUIEntry,1>_>
                      (pFVar27,this,(pmf_a88e9c44 *)&local_1448,&local_14a0);
  FLLMScope::FLLMScope(&local_16b4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1598 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1588,&local_1598,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1660,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkDebugView.cpp"
             ,0x7d,&local_16b8);
  FMemScope::~FMemScope(&local_1588);
  FLLMScope::~FLLMScope(&local_16b4);
  pSVar13 = local_1660._Widget.Object;
  if ((local_1660._Widget.Object == (SImage *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar21 = (TSharedRef<ITableRow,1> *)(*pcVar10)();
    return pTVar21;
  }
  SWidget::SWidgetConstruct((SWidget *)local_1660._Widget.Object,(FSlateBaseNamedArgs *)pFVar27);
  SImage::Construct(local_1660._Widget.Object,pFVar27);
  if ((local_1660._Widget.Object == (SImage *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar21 = (TSharedRef<ITableRow,1> *)(*pcVar10)();
    return pTVar21;
  }
  if (((local_1660._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar19 = (**(code **)((local_1660._Widget.Object)->_padding_ + 0x228))
                       (local_1660._Widget.Object);
    bVar20 = 0;
    if (cVar19 != '\0') goto LAB_14d045868;
  }
  else {
LAB_14d045868:
    bVar20 = 0x20;
  }
  *(byte *)&(local_1660._Widget.Object)->_padding_ =
       (byte)(local_1660._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_1660._Widget.Object)->_padding_ =
       (byte)(local_1660._Widget.Object)->_padding_ | bVar20;
  if ((local_1660._Widget.Object == (SImage *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar21 = (TSharedRef<ITableRow,1> *)(*pcVar10)();
    return pTVar21;
  }
  pbVar2 = (byte *)((longlong)&(local_1660._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_1660._Widget.Object == (SImage *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar21 = (TSharedRef<ITableRow,1> *)(*pcVar10)();
    return pTVar21;
  }
  FVar14.ReferenceController = local_1660._Widget.SharedReferenceCount.ReferenceController;
  local_1660._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1660._Widget.Object = (SImage *)0x0;
  if ((pSVar13 == (SImage *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar21 = (TSharedRef<ITableRow,1> *)(*pcVar10)();
    return pTVar21;
  }
  local_16a0 = pSVar13;
  local_1698.ReferenceController = FVar14.ReferenceController;
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SImage **)&pFVar29->field_0x8 != &local_16a0) {
    *(SImage **)&pFVar29->field_0x8 = pSVar13;
    local_16a0 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar29->field_0x10,&local_1698);
  }
  pFVar28 = (FSlot *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1698.ReferenceController);
  local_1680 = SHorizontalBox::FArguments::operator+(local_1680,pFVar29);
  pFVar24 = ::operator_new(0x58);
  if (pFVar24 != (FSlot *)0x0) {
    *(undefined8 *)pFVar24 = 0;
    *(undefined8 *)&pFVar24->field_0x8 = 0;
    *(undefined8 *)&pFVar24->field_0x10 = 0;
    *(undefined8 *)&pFVar24->field_0x18 = 0;
    *(undefined8 *)&pFVar24->field_0x20 = 0;
    *(undefined8 *)&pFVar24->field_0x28 = 0;
    *(undefined8 *)&pFVar24->field_0x30 = 0;
    *(undefined8 *)&pFVar24->field_0x38 = 0;
    *(undefined8 *)&pFVar24->field_0x40 = 0;
    *(undefined8 *)&pFVar24->field_0x48 = 0;
    *(undefined8 *)&pFVar24->field_0x50 = 0;
    pFVar28 = SHorizontalBox::FSlot::FSlot(pFVar24);
  }
  local_1580 = pFVar28;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1210,(FSlot *)&local_1580);
  pFVar25 = (FSizeParam *)FAuto::FAuto((FAuto *)local_13a0);
  TOptional<FSizeParam>::operator=(&local_11b8,pFVar25);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_1370)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_13a0 + 0x10));
  pFVar29 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)(local_1210 + 0x18),
                       (float)(-(FVar3 != (FName)0x0) & 0xc),0.0,0.0,0.0);
  pFVar30 = STextBlock::FArguments::FArguments(&local_5a0);
  local_14c0.OutlineSize = 0;
  local_14c0.bMiteredCorners = false;
  local_14c0.bSeparateFillAlpha = false;
  local_14c0.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_14c0.bApplyOutlineToDropShadows = false;
  local_14c0.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar31 = ::FName::FName(&local_1450,"Regular");
  pFVar32 = FCoreStyle::GetDefaultFontStyle(&local_1270,*pFVar31,(float)bVar18,&local_14c0);
  local_1648 = (pFVar32->FontObject).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1648 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1648);
  }
  local_1640 = (pFVar32->FontMaterial).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1640 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1640);
  }
  local_1638 = (pFVar32->OutlineSettings).OutlineSize;
  local_1634 = (pFVar32->OutlineSettings).bMiteredCorners;
  local_1633 = (pFVar32->OutlineSettings).bSeparateFillAlpha;
  local_1632 = (pFVar32->OutlineSettings).bApplyOutlineToDropShadows;
  local_1630 = (pFVar32->OutlineSettings).OutlineMaterial.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1630 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1630);
  }
  local_1628 = *(undefined8 *)&(pFVar32->OutlineSettings).OutlineColor.field0_0x0;
  uStack_1620 = *(undefined8 *)((longlong)&(pFVar32->OutlineSettings).OutlineColor.field0_0x0 + 8);
  local_1618 = (pFVar32->CompositeFont).Object;
  local_1610 = (pFVar32->CompositeFont).SharedReferenceCount.ReferenceController;
  if (local_1610 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1610->SharedReferenceCount = (atomic<int>)((int)local_1610->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1608 = pFVar32->TypefaceFontName;
  local_1600 = pFVar32->Size;
  local_15fc = pFVar32->LetterSpacing;
  local_15f8 = pFVar32->SkewAmount;
  local_15f4 = pFVar32->FontFallback;
  local_15f3 = pFVar32->bForceMonospaced;
  local_15f2 = pFVar32->bMaterialIsStencil;
  local_15f0 = pFVar32->MonospacedWidth;
  local_15e0._0_8_ = 0;
  local_15e0._8_8_ = 0;
  local_15e8 = true;
  local_15e0._16_8_ = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1648 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1648);
  }
  (pFVar30->_Font).Value.FontObject.field0_0x0.DebugPtr = local_1648;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1640 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1640);
  }
  (pFVar30->_Font).Value.FontMaterial.field0_0x0.DebugPtr = local_1640;
  (pFVar30->_Font).Value.OutlineSettings.OutlineSize = local_1638;
  (pFVar30->_Font).Value.OutlineSettings.bMiteredCorners = local_1634;
  (pFVar30->_Font).Value.OutlineSettings.bSeparateFillAlpha = local_1633;
  (pFVar30->_Font).Value.OutlineSettings.bApplyOutlineToDropShadows = local_1632;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1630 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1630);
  }
  (pFVar30->_Font).Value.OutlineSettings.OutlineMaterial.field0_0x0.DebugPtr = local_1630;
  *(undefined8 *)&(pFVar30->_Font).Value.OutlineSettings.OutlineColor.field0_0x0 = local_1628;
  *(undefined8 *)((longlong)&(pFVar30->_Font).Value.OutlineSettings.OutlineColor.field0_0x0 + 8) =
       uStack_1620;
  if (local_1610 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1610->SharedReferenceCount = (atomic<int>)((int)local_1610->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1420 = (pFVar30->_Font).Value.CompositeFont.Object;
  pTStack_1418 = (pFVar30->_Font).Value.CompositeFont.SharedReferenceCount.ReferenceController;
  (pFVar30->_Font).Value.CompositeFont.Object = local_1618;
  (pFVar30->_Font).Value.CompositeFont.SharedReferenceCount.ReferenceController = local_1610;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1418);
  (pFVar30->_Font).Value.TypefaceFontName = local_1608;
  (pFVar30->_Font).Value.Size = local_1600;
  (pFVar30->_Font).Value.LetterSpacing = local_15fc;
  (pFVar30->_Font).Value.SkewAmount = local_15f8;
  (pFVar30->_Font).Value.FontFallback = local_15f4;
  (pFVar30->_Font).Value.bForceMonospaced = local_15f3;
  (pFVar30->_Font).Value.bMaterialIsStencil = local_15f2;
  (pFVar30->_Font).Value.MonospacedWidth = local_15f0;
  (pFVar30->_Font).bIsSet = local_15e8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_Font).Getter,&local_15e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_15e0)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1610);
  pFVar5 = param_1->Object;
  (pFVar30->_Text).bIsSet = true;
  TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<FLiveLinkDebugUIEntry>
            ((TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(pFVar30->_Text).Getter,pFVar5,(pmf_2a13e278)0x14d04dd70);
  FLLMScope::FLLMScope(&local_16b0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1578 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1570,&local_1578,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1400,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkDebugView.cpp"
             ,0x84,&local_16b7);
  FMemScope::~FMemScope(&local_1570);
  FLLMScope::~FLLMScope(&local_16b0);
  pTVar33 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1400,&local_1460,pFVar30);
  pTVar6 = (pTVar33->SharedReferenceCount).ReferenceController;
  local_1690 = pTVar33->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1688.ReferenceController = pTVar6;
  if ((STextBlock **)&pFVar29->field_0x8 != &local_1690) {
    *(STextBlock **)&pFVar29->field_0x8 = local_1690;
    local_1690 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar29->field_0x10,&local_1688);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1688.ReferenceController);
  pFVar34 = SHorizontalBox::FArguments::operator+(local_1680,pFVar29);
  FLLMScope::FLLMScope(&local_16ac,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1568 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1560,&local_1568,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1438,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkDebugView.cpp"
             ,0x75,&local_16b6);
  FMemScope::~FMemScope(&local_1560);
  FLLMScope::~FLLMScope(&local_16ac);
  pTVar35 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1438,&local_1470,pFVar34);
  pTVar7 = (pTVar35->SharedReferenceCount).ReferenceController;
  pSVar8 = pTVar35->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_15c0 = (pFVar23->_Content).Widget.Object;
  pTStack_15b8 = (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar23->_Content).Widget.Object = (SWidget *)pSVar8;
  (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_15b8);
  FLLMScope::FLLMScope(&local_16a8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1558 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1538,&local_1558,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_1678,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkDebugView.cpp"
             ,0x71,&local_16b5);
  FMemScope::~FMemScope(&local_1538);
  FLLMScope::~FLLMScope(&local_16a8);
  pSVar11 = local_1678._Widget.Object;
  if ((local_1678._Widget.Object == (SBorder *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar21 = (TSharedRef<ITableRow,1> *)(*pcVar10)();
    return pTVar21;
  }
  SWidget::SWidgetConstruct((SWidget *)local_1678._Widget.Object,(FSlateBaseNamedArgs *)pFVar23);
  SBorder::Construct(local_1678._Widget.Object,pFVar23);
  if ((local_1678._Widget.Object == (SBorder *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar21 = (TSharedRef<ITableRow,1> *)(*pcVar10)();
    return pTVar21;
  }
  if (((local_1678._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar19 = (**(code **)((local_1678._Widget.Object)->_padding_ + 0x228))
                       (local_1678._Widget.Object);
    bVar18 = 0;
    if (cVar19 == '\0') goto LAB_14d045fc3;
  }
  bVar18 = 0x20;
LAB_14d045fc3:
  *(byte *)&(local_1678._Widget.Object)->_padding_ =
       (byte)(local_1678._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_1678._Widget.Object)->_padding_ =
       (byte)(local_1678._Widget.Object)->_padding_ | bVar18;
  if ((local_1678._Widget.Object == (SBorder *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar21 = (TSharedRef<ITableRow,1> *)(*pcVar10)();
    return pTVar21;
  }
  pbVar2 = (byte *)((longlong)&(local_1678._Widget.Object)->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_1678._Widget.Object == (SBorder *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar21 = (TSharedRef<ITableRow,1> *)(*pcVar10)();
    return pTVar21;
  }
  FVar12.ReferenceController = local_1678._Widget.SharedReferenceCount.ReferenceController;
  local_1678._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1678._Widget.Object = (SBorder *)0x0;
  if ((pSVar11 == (SBorder *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar21 = (TSharedRef<ITableRow,1> *)(*pcVar10)();
    return pTVar21;
  }
  pFVar15 = local_15c8;
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1410 = (local_15c8->_Content).Widget.Object;
  pTStack_1408 = (local_15c8->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_15c8->_Content).Widget.Object = (SWidget *)pSVar11;
  (local_15c8->_Content).Widget.SharedReferenceCount.ReferenceController =
       FVar12.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1408);
  local_1548.Arg0 = param_2;
  FLLMScope::FLLMScope(&local_16a4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1550 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1540,&local_1550,true);
  local_15b0._RequiredArgs = &local_1548;
  local_15b0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar36 = MakeShared<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>(&local_1490);
  local_1528.ReferenceController = (pTVar36->SharedReferenceCount).ReferenceController;
  local_15b0._Widget.Object = pTVar36->Object;
  if (local_1528.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1528.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1528.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1530 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_15b0._Widget.SharedReferenceCount,&local_1528);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1528.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1490.SharedReferenceCount.ReferenceController);
  pSVar16 = local_15b0._Widget.Object;
  if ((local_15b0._Widget.Object == (STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pTVar21 = (TSharedRef<ITableRow,1> *)(*pcVar10)();
    return pTVar21;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&pSVar16->_padding_,"STableRow<FLiveLinkDebugUIEntryPtr>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkDebugView.cpp"
             ,0x6f,0x3f8);
  FMemScope::~FMemScope(&local_1540);
  FLLMScope::~FLLMScope(&local_16a4);
  pTVar36 = TSlateDecl<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
            ::operator<<=(&local_15b0,&local_1480,pFVar15);
  __return_storage_ptr__->Object = (ITableRow *)pTVar36->Object;
  pTVar9 = (pTVar36->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1480.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15b0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1678._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1470.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1438._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1460.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1400._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1270.CompositeFont.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5a0);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)local_1210);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1660._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_848._OnMouseButtonDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_848._DesiredSizeOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_848._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_848._Image.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_848);
  SBoxPanel::TSlot<SHorizontalBox::FSlot>::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)local_1358);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_a50._Slots.AllocatorInstance.Data,local_a50._Slots.ArrayNum);
  if ((FSlotArguments *)local_a50._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_a50._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_a50);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1128._ShowEffectWhenDisabled.Getter
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1128._ForegroundColor.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1128._BorderBackgroundColor.Getter)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1128._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1128._DesiredSizeScale.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1128._ContentScale.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1128._BorderImage.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1128._OnMouseDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1128._OnMouseMove);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1128._OnMouseButtonUp);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1128._OnMouseButtonDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1128._Padding.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1128._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1128);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d48._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d48._Padding.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d48._OnDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d48._OnDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d48._OnDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d48._OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d48._OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d48._OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_d48._OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_d48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetSubjectIcon @ 14d0568c0

FSlateBrush * __thiscall
SLiveLinkDebugView::GetSubjectIcon
          (SLiveLinkDebugView *this,TSharedPtr<FLiveLinkDebugUIEntry,1> *param_1)

{
  FLiveLinkClient *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FSlateBrush *pFVar5;
  longlong lVar6;
  
  if (param_1->Object == (FLiveLinkDebugUIEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSlateBrush *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar1 = param_1->Object->Client;
  cVar4 = (**(code **)(pFVar1->_padding_ + 0x120))(pFVar1,&param_1->Object->SubjectKey,1);
  if (cVar4 == '\0') {
    pFVar5 = this->DisabledBrush;
  }
  else {
    if (param_1->Object == (FLiveLinkDebugUIEntry *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FSlateBrush *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar1 = param_1->Object->Client;
    cVar4 = (**(code **)(pFVar1->_padding_ + 0x148))
                      (pFVar1,(param_1->Object->SubjectKey).SubjectName.Name);
    if (cVar4 == '\x04') {
      pFVar5 = this->PausedBrush;
    }
    else {
      if (param_1->Object == (FLiveLinkDebugUIEntry *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FSlateBrush *)(*pcVar2)();
          return pFVar5;
        }
      }
      pFVar1 = param_1->Object->Client;
      cVar4 = (**(code **)(pFVar1->_padding_ + 0x108))
                        (pFVar1,(param_1->Object->SubjectKey).SubjectName.Name);
      lVar6 = 0x2f0;
      if (cVar4 == '\0') {
        lVar6 = 0x2f8;
      }
      pFVar5 = *(FSlateBrush **)((longlong)&this->_padding_ + lVar6);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pFVar5;
}

// HandleSourcesChanged @ 14d058fe0

void __thiscall SLiveLinkDebugView::HandleSourcesChanged(SLiveLinkDebugView *this)

{
  code *pcVar1;
  bool bVar2;
  
  RefreshSourceItems(this);
  if ((this->DebugItemView).Object == (SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x00014d05902d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->DebugItemView).Object)->_padding_ + 0x250))();
  return;
}

// RefreshSourceItems @ 14d074d50

void __thiscall SLiveLinkDebugView::RefreshSourceItems(SLiveLinkDebugView *this)

{
  int *piVar1;
  TArray<TSharedPtr<FLiveLinkDebugUIEntry,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  TSharedPtr<FLiveLinkDebugUIEntry,1> *pTVar4;
  FLiveLinkClient *pFVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  TReferenceControllerBase<1> *pTVar15;
  ulonglong uVar16;
  longlong *plVar17;
  FScriptContainerElement *pFVar18;
  int *piVar19;
  TReferenceControllerBase<1> *pTVar20;
  longlong *plVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  TReferenceControllerBase<1> *local_108;
  TReferenceControllerBase<1> *local_100;
  TReferenceControllerBase<1> *local_f8;
  TReferenceControllerBase<1> *local_f0;
  uint local_e8;
  uint local_e4;
  longlong *local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong *local_b0;
  uint local_a8;
  longlong *local_a0;
  longlong lStack_98;
  longlong *local_90;
  longlong **local_88;
  undefined1 local_80;
  code *local_78;
  undefined8 ***local_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  
  pTVar2 = &this->DebugItemData;
  piVar19 = &(this->DebugItemData).ArrayMax;
  pTVar4 = (TSharedPtr<FLiveLinkDebugUIEntry,1> *)(pTVar2->AllocatorInstance).Data;
  iVar12 = (this->DebugItemData).ArrayNum;
  if ((this->DebugItemData).ArrayMax < 0) {
    DestructItems<TSharedPtr<FLiveLinkDebugUIEntry,1>,int>(pTVar4,iVar12);
    (this->DebugItemData).ArrayNum = 0;
    if (*piVar19 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar19);
    }
  }
  else {
    DestructItems<TSharedPtr<FLiveLinkDebugUIEntry,1>,int>(pTVar4,iVar12);
    (this->DebugItemData).ArrayNum = 0;
  }
  local_88 = &local_e0;
  local_70 = &local_88;
  local_e0 = (longlong *)0x0;
  local_d8 = 0;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLiveLinkClient::GetDisplayableSources'::__l2::<lambda_1>,void,FLiveLinkCollectionSourceItem_&>
             ::Call;
  local_80 = 0;
  FLiveLinkSourceCollection::ForEachSource
            ((this->Client->Collection).Ptr,
             (TFunctionRef<void___cdecl(FLiveLinkCollectionSourceItem_&)> *)&local_78);
  uVar14 = (ulonglong)(int)(uint)local_d8;
  local_90 = local_e0 + uVar14 * 2;
  local_e4 = (uint)local_d8;
  uVar16 = uVar14;
  plVar17 = local_e0;
  do {
    plVar21 = local_90;
    piVar19 = &(this->DebugItemData).ArrayMax;
    local_c8 = plVar17;
    if ((int)uVar14 != (int)uVar16) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (plVar17 == plVar21) {
      if (local_e0 != (longlong *)0x0) {
        FMemory::Free(local_e0);
      }
      return;
    }
    local_c0 = *plVar17;
    uStack_b8 = plVar17[1];
    local_d0 = 0;
    local_58 = 0;
    local_a0 = (longlong *)local_c0;
    lStack_98 = uStack_b8;
    local_68 = local_c0;
    lStack_60 = uStack_b8;
    pTVar15 = ::operator_new(0x40);
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
      pTVar20 = (TReferenceControllerBase<1> *)&DAT_00000010;
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
LAB_14d074efb:
      if (((pTVar20->_padding_ == 0) || (*(longlong *)&pTVar20->SharedReferenceCount == 0)) ||
         (*(int *)(*(longlong *)&pTVar20->SharedReferenceCount + 8) < 1)) {
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar20->_padding_ = (longlong)pTVar20;
        if (pTVar15 != *(TReferenceControllerBase<1> **)&pTVar20->SharedReferenceCount) {
          if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
            UNLOCK();
          }
          plVar17 = *(longlong **)&pTVar20->SharedReferenceCount;
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
          *(TReferenceControllerBase<1> **)&pTVar20->SharedReferenceCount = pTVar15;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
      }
    }
    else {
      pTVar15->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFLiveLinkDebugUIEntry___00_SharedPointerInternals__6B_
      ;
      pTVar15->SharedReferenceCount = (atomic<int>)0x1;
      pTVar15->WeakReferenceCount = (atomic<int>)0x1;
      pFVar5 = this->Client;
      pTVar20 = pTVar15 + 1;
      pTVar15[1]._padding_ = 0;
      pTVar15[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar15[1].WeakReferenceCount = (atomic<int>)0x0;
      *(FLiveLinkClient **)&pTVar15[3].SharedReferenceCount = pFVar5;
      pTVar15[2]._padding_ = (longlong)local_a0;
      pTVar15[2].SharedReferenceCount = (atomic<int>)(undefined4)lStack_98;
      pTVar15[2].WeakReferenceCount = (atomic<int>)lStack_98._4_4_;
      pTVar15[3]._padding_ = local_58;
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d074efb;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar18 = (pTVar2->AllocatorInstance).Data;
    local_108 = pTVar20;
    local_100 = pTVar15;
    if ((pFVar18 <= (FScriptContainerElement *)&local_108) &&
       ((FScriptContainerElement *)&local_108 < pFVar18 + (longlong)*piVar19 * 0x10)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar12 = (this->DebugItemData).ArrayNum;
    if (iVar12 == *piVar19) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,piVar19);
    }
    (this->DebugItemData).ArrayNum = iVar12 + 1;
    pFVar18 = (pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
    *(TReferenceControllerBase<1> **)pFVar18 = local_108;
    *(TReferenceControllerBase<1> **)(pFVar18 + 8) = local_100;
    local_100 = (TReferenceControllerBase<1> *)0x0;
    local_108 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    (**(code **)(this->Client->_padding_ + 0x100))(this->Client,&local_b0,1);
    uVar16 = (ulonglong)(int)local_a8;
    iVar10 = uStack_b8._4_4_;
    iVar9 = local_c0._4_4_;
    iVar12 = (int)local_c0;
    plVar17 = local_b0 + uVar16 * 3;
    local_e8 = local_a8;
    local_res20 = (int)uStack_b8;
    plVar21 = local_b0;
    iVar13 = (int)uStack_b8;
    local_a0 = plVar17;
    while( true ) {
      if (local_a8 != (uint)uVar16) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FLiveLinkSubjectKey_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
        iVar13 = local_res20;
      }
      if (plVar21 == plVar17) break;
      if (((iVar10 == *(int *)((longlong)plVar21 + 0xc) && iVar13 == (int)plVar21[1]) &&
          iVar9 == *(int *)((longlong)plVar21 + 4)) && iVar12 == (int)*plVar21) {
        pTVar15 = ::operator_new(0x40);
        if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
          pTVar20 = (TReferenceControllerBase<1> *)&DAT_00000010;
          pTVar15 = (TReferenceControllerBase<1> *)0x0;
LAB_14d075188:
          if (((pTVar20->_padding_ == 0) || (*(longlong *)&pTVar20->SharedReferenceCount == 0)) ||
             (*(int *)(*(longlong *)&pTVar20->SharedReferenceCount + 8) < 1)) {
            if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar20->_padding_ = (longlong)pTVar20;
            if (pTVar15 != *(TReferenceControllerBase<1> **)&pTVar20->SharedReferenceCount) {
              if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
                UNLOCK();
              }
              plVar17 = *(longlong **)&pTVar20->SharedReferenceCount;
              if (plVar17 != (longlong *)0x0) {
                LOCK();
                piVar19 = (int *)((longlong)plVar17 + 0xc);
                iVar13 = *piVar19;
                *piVar19 = *piVar19 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar17 + 8))(plVar17,1);
                }
              }
              *(TReferenceControllerBase<1> **)&pTVar20->SharedReferenceCount = pTVar15;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar15);
          }
        }
        else {
          pTVar15->SharedReferenceCount = (atomic<int>)0x1;
          pTVar15->WeakReferenceCount = (atomic<int>)0x1;
          pTVar15->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_UFLiveLinkDebugUIEntry___00_SharedPointerInternals__6B_
          ;
          pFVar5 = this->Client;
          pTVar20 = pTVar15 + 1;
          lVar3 = plVar21[2];
          lVar7 = *plVar21;
          lVar8 = plVar21[1];
          pTVar15[1]._padding_ = 0;
          pTVar15[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar15[1].WeakReferenceCount = (atomic<int>)0x0;
          *(FLiveLinkClient **)&pTVar15[3].SharedReferenceCount = pFVar5;
          pTVar15[2]._padding_ = lVar7;
          pTVar15[2].SharedReferenceCount = (atomic<int>)(int)lVar8;
          pTVar15[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar8 >> 0x20);
          pTVar15[3]._padding_ = lVar3;
          if (pTVar20 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d075188;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L"");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar18 = (pTVar2->AllocatorInstance).Data;
        piVar19 = &(this->DebugItemData).ArrayMax;
        local_f8 = pTVar20;
        local_f0 = pTVar15;
        if ((pFVar18 <= (FScriptContainerElement *)&local_f8) &&
           ((FScriptContainerElement *)&local_f8 < pFVar18 + (longlong)*piVar19 * 0x10)) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar13 = (this->DebugItemData).ArrayNum;
        if (iVar13 == *piVar19) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar2->AllocatorInstance,piVar19);
        }
        (this->DebugItemData).ArrayNum = iVar13 + 1;
        pFVar18 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
        *(TReferenceControllerBase<1> **)pFVar18 = local_f8;
        *(TReferenceControllerBase<1> **)(pFVar18 + 8) = local_f0;
        local_f0 = (TReferenceControllerBase<1> *)0x0;
        local_f8 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
        plVar17 = local_a0;
        iVar13 = local_res20;
      }
      uVar16 = (ulonglong)local_e8;
      plVar21 = plVar21 + 3;
    }
    if (local_b0 != (longlong *)0x0) {
      FMemory::Free(local_b0);
    }
    uVar14 = local_d8 & 0xffffffff;
    plVar17 = local_c8 + 2;
    uVar16 = (ulonglong)local_e4;
  } while( true );
}

