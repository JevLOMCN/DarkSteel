// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 6

// Construct @ 14d84b3a0

void __thiscall
UE::PropertyViewer::SEnumPropertyValue::Construct(SEnumPropertyValue *this,FArguments *param_1)

{
  byte *pbVar1;
  longlong *this_00;
  SWidget *pSVar2;
  STextBlock *pSVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  bool bVar7;
  TUniquePtr<FSlateStyleSet,TDefaultDelete<FSlateStyleSet>_> TVar8;
  SComboButton *pSVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  char cVar12;
  byte bVar13;
  FProperty *pFVar14;
  UObject *pUVar15;
  FArguments *pFVar16;
  FName *pFVar17;
  FComboButtonStyle *pFVar18;
  undefined8 *puVar19;
  TSharedRef<SWidget,1> *pTVar20;
  ulong64 uVar21;
  FArguments *pFVar22;
  TSharedRef<SWidget_const_,1> *pTVar23;
  TSharedRef<STextBlock,1> *pTVar24;
  FProperty *pFVar25;
  FProperty *pFVar26;
  FProperty *pFVar27;
  TReferenceControllerBase<1> *pTVar28;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  SWidget *local_res18;
  FLLMScope local_res20 [2];
  longlong lStack_a10;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_a08;
  UObject *local_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined1 local_9d8;
  undefined1 local_9d0 [8];
  ForAnyElementType FStack_9c8;
  ulonglong local_9c0;
  FName local_9b8;
  FMemScope local_9b0;
  FName local_9a8;
  FMemScope local_9a0;
  TSharedRef<STextBlock,1> local_998;
  FDestructionSentinel local_988;
  FDestructionSentinel local_970;
  undefined1 *local_958;
  FDestructionSentinel local_950;
  undefined1 *local_938;
  FName local_930;
  TSharedRef<SWidget,1> local_928;
  TSharedRef<SWidget_const_,1> local_918;
  longlong local_908;
  TReferenceControllerBase<1> *pTStack_900;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8f8;
  undefined1 local_8e0 [552];
  undefined1 local_6b8 [24];
  undefined1 local_6a0 [24];
  undefined1 local_688 [56];
  undefined1 local_650 [48];
  undefined1 local_620 [48];
  undefined1 local_5f0 [32];
  undefined1 local_5d0 [40];
  FArguments local_5a8;
  
  pFVar27 = (FProperty *)0x0;
  local_res8 = 0;
  FPropertyPath::operator=(&this->Path,&param_1->_Path);
  this->NotifyHook = param_1->_NotifyHook;
  pFVar14 = FPropertyPath::GetLastProperty(&this->Path);
  if ((((pFVar14 == (FProperty *)0x0) ||
       (pFVar26 = pFVar14, (*(ulonglong *)(pFVar14->_padding_ + 0x18) & 0x1000000000000) == 0)) &&
      (pFVar26 = pFVar27, pFVar14 == (FProperty *)0x0)) ||
     (pFVar25 = pFVar14, (*(uint *)(pFVar14->_padding_ + 0x18) >> 0x18 & 1) == 0)) {
    pFVar25 = pFVar27;
  }
  if (pFVar26 == (FProperty *)0x0) {
    if (pFVar25 == (FProperty *)0x0) {
      pUVar15 = (UObject *)0x0;
    }
    else {
      pUVar15 = (UObject *)(**(code **)(pFVar25->_padding_ + 0x1e0))();
    }
  }
  else {
    pUVar15 = (UObject *)pFVar26[1]._padding_;
  }
  local_9f0 = pUVar15;
  if ((GC::GIsIncrementalReachabilityPending == false) || (pUVar15 == (UObject *)0x0)) {
    FWeakObjectPtr::operator=(&(this->EnumType).WeakPtr,(FObjectPtr)&local_9f0);
    if (pUVar15 == (UObject *)0x0) {
      return;
    }
  }
  else {
    GC::MarkAsReachable(pUVar15);
    FWeakObjectPtr::operator=(&(this->EnumType).WeakPtr,(FObjectPtr)&local_9f0);
  }
  if (pFVar14->ArrayDim != 1) {
    return;
  }
  pFVar16 = SComboButton::FArguments::FArguments((FArguments *)local_8e0);
  TVar8 = AdvancedWidgets::FAdvancedWidgetsStyle::Instance;
  pFVar17 = ::FName::FName(&local_930,"PropertyValue.ComboButton");
  pFVar18 = (FComboButtonStyle *)
            (**(code **)((TVar8.Ptr)->_padding_ + 0xa0))
                      (TVar8.Ptr,FComboButtonStyle::TypeName,*pFVar17,0,1);
  if (pFVar18 == (FComboButtonStyle *)0x0) {
    pFVar18 = FComboButtonStyle::GetDefault();
  }
  pFVar16->_ComboButtonStyle = pFVar18;
  local_9d8 = 1;
  local_9c0 = 0;
  local_9e8 = 0;
  uStack_9e0 = 0;
  local_9d0 = (undefined1  [8])0x0;
  FStack_9c8.Data = (FScriptContainerElement *)0x0;
  (pFVar16->_ContentPadding).Value.Left = 0.0;
  (pFVar16->_ContentPadding).Value.Top = 0.0;
  (pFVar16->_ContentPadding).Value.Right = 0.0;
  (pFVar16->_ContentPadding).Value.Bottom = 0.0;
  (pFVar16->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9d0,
             (FWriteAccessScope *)&local_988);
  if (((int)local_9c0 != 0) && (FStack_9c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9c8,0,0,0x10);
    local_9c0 = local_9c0 & 0xffffffff00000000;
  }
  if (local_988.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_988.Accessor,&local_988);
  }
  if (FStack_9c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9d0);
  pFVar16->_HAlign = HAlign_Left;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar16->_OnGetMenuContent,
             (FWriteAccessScope *)&local_970);
  local_958 = &(pFVar16->_OnGetMenuContent).field_0x8;
  puVar19 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_958);
  if (puVar19 == (undefined8 *)0x0) {
    pTVar28 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    lStack_a10 = (ulonglong)local_998.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar20 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_928);
    pTVar28 = (pTVar20->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar20->Object;
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar19 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar19[2] = uVar21;
    *puVar19 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSEnumPropertyValue_PropertyViewer_UE___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar19[3] = pSVar2;
    puVar19[4] = pTVar28;
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar28->WeakReferenceCount = (atomic<int>)((int)pTVar28->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar27 = (FProperty *)&DAT_00000007;
    puVar19[5] = OnGetMenuContent;
    puVar19[6] = lStack_a10;
  }
  if (((ulonglong)pFVar27 & 4) != 0) {
    pFVar27 = (FProperty *)(ulonglong)((uint)pFVar27 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  }
  if (((ulonglong)pFVar27 & 2) != 0) {
    pFVar27 = (FProperty *)(ulonglong)((uint)pFVar27 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  }
  if (((ulonglong)pFVar27 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_928.SharedReferenceCount.ReferenceController);
  }
  bVar7 = false;
  bVar6 = false;
  bVar11 = false;
  if (local_970.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_970.Accessor,&local_970);
  }
  pFVar22 = STextBlock::FArguments::FArguments(&local_5a8);
  (pFVar22->_Text).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_Text).Getter,
             (FWriteAccessScope *)&local_950);
  local_938 = &(pFVar22->_Text).Getter.field_0x8;
  puVar19 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_938);
  if (puVar19 == (undefined8 *)0x0) {
    pTVar28 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    lStack_a10 = (ulonglong)local_998.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_918);
    pTVar28 = (pTVar23->SharedReferenceCount).ReferenceController;
    local_res18 = pTVar23->Object;
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar11 = true;
    *puVar19 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar21 = FDelegateHandle::GenerateNewID();
    puVar19[2] = uVar21;
    *puVar19 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSEnumPropertyValue_PropertyViewer_UE___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar19[3] = local_res18;
    puVar19[4] = pTVar28;
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar28->WeakReferenceCount = (atomic<int>)((int)pTVar28->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar19[5] = GetText;
    puVar19[6] = lStack_a10;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_918.SharedReferenceCount.ReferenceController);
  }
  if (local_950.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_950.Accessor,&local_950);
  }
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_9b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_9b0,&local_9b8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_8f8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SEnumPropertyValue.cpp"
             ,0x32,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_9b0);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res18);
  pTVar24 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_8f8,&local_998,pFVar22);
  pTVar28 = (pTVar24->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar24->Object;
  if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar28->SharedReferenceCount = (atomic<int>)((int)pTVar28->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar16->_ButtonContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar16->_ButtonContent).Widget.Object = (SWidget *)pSVar3;
  (pFVar16->_ButtonContent).Widget.SharedReferenceCount.ReferenceController = pTVar28;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_9a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_9a0,&local_9a8,true);
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>
            (&local_a08,"SComboButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SEnumPropertyValue.cpp"
             ,0x2b,local_res10);
  FMemScope::~FMemScope(&local_9a0);
  FLLMScope::~FLLMScope(local_res20);
  pSVar9 = local_a08._Widget.Object;
  if ((local_a08._Widget.Object == (SComboButton *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_a08._Widget.Object,(FSlateBaseNamedArgs *)pFVar16);
  SComboButton::Construct(local_a08._Widget.Object,pFVar16);
  if ((local_a08._Widget.Object == (SComboButton *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((local_a08._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar12 = (**(code **)((local_a08._Widget.Object)->_padding_ + 0x228))(local_a08._Widget.Object);
    bVar13 = 0;
    if (cVar12 == '\0') goto LAB_14d84b9c7;
  }
  bVar13 = 0x20;
LAB_14d84b9c7:
  *(byte *)&(local_a08._Widget.Object)->_padding_ =
       (byte)(local_a08._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_a08._Widget.Object)->_padding_ =
       (byte)(local_a08._Widget.Object)->_padding_ | bVar13;
  if ((local_a08._Widget.Object == (SComboButton *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_a08._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_a08._Widget.Object == (SComboButton *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar10.ReferenceController = local_a08._Widget.SharedReferenceCount.ReferenceController;
  local_a08._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_a08._Widget.Object = (SComboButton *)0x0;
  if ((pSVar9 == (SComboButton *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = &this->_padding_;
  if (FVar10.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_908 = this->_padding_;
  pTStack_900 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar9;
  this->_padding_ = (longlong)FVar10.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_900);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a08._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_998.SharedReferenceCount.ReferenceController._4_4_,
                      local_998.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8f8._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5a8);
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_620);
  if ((void *)local_620._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_620._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_620);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_650);
  if ((void *)local_650._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_650._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_650);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_688);
  if ((void *)local_688._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_688._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_688);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6a0);
  if ((void *)local_6a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6b8);
  if ((void *)local_6b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_8e0._544_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_8e0._528_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_8e0);
  return;
}

// CreateInstance @ 14d85a110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<SWidget,1> * __cdecl
UE::PropertyViewer::SEnumPropertyValue::CreateInstance
          (TSharedPtr<SWidget,1> *__return_storage_ptr__,FGenerateArgs *param_1)

{
  byte *pbVar1;
  ForElementType<FProperty_const_*> FVar2;
  code *pcVar3;
  SEnumPropertyValue *pSVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  FPropertyPath *pFVar10;
  TSharedPtr<SWidget,1> *pTVar11;
  undefined1 auStackY_328 [32];
  T0RequiredArgs local_2f8 [4];
  FLLMScope local_2f4;
  undefined1 local_2f0;
  undefined1 local_2ef;
  undefined1 local_2e8 [8];
  ForAnyElementType FStack_2e0;
  ulonglong local_2d8;
  TSlateDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs> local_2d0;
  FName local_2b8;
  FMemScope local_2b0;
  FDestructionSentinel local_2a8;
  FPropertyPath local_290;
  FArguments local_260;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_328;
  pFVar9 = FArguments::FArguments(&local_260);
  pFVar10 = FPropertyPath::FPropertyPath(&local_290,&param_1->Path);
  FPropertyPath::operator=(&pFVar9->_Path,pFVar10);
  FVar2 = (pFVar10->Properties).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar9->_NotifyHook = param_1->NotifyHook;
  local_2f0 = param_1->bCanEditValue;
  local_2ef = 1;
  local_2e8 = (undefined1  [8])0x0;
  FStack_2e0.Data = (FScriptContainerElement *)0x0;
  local_2d8 = 0;
  *(undefined1 *)&pFVar9->_padding_ = local_2f0;
  *(undefined1 *)((longlong)&pFVar9->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2e8,
             (FWriteAccessScope *)&local_2a8);
  if (((int)local_2d8 != 0) && (FStack_2e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e0,0,0,0x10);
    local_2d8 = local_2d8 & 0xffffffff00000000;
  }
  if (local_2a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a8.Accessor,&local_2a8);
  }
  if (FStack_2e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e8);
  FLLMScope::FLLMScope(&local_2f4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2b0,&local_2b8,true);
  TSlateDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs>
            (&local_2d0,"SEnumPropertyValue",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SEnumPropertyValue.cpp"
             ,0x15,local_2f8);
  FMemScope::~FMemScope(&local_2b0);
  FLLMScope::~FLLMScope(&local_2f4);
  pSVar4 = local_2d0._Widget.Object;
  if (local_2d0._Widget.Object == (SEnumPropertyValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_2d0._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  Construct(local_2d0._Widget.Object,pFVar9);
  if (local_2d0._Widget.Object == (SEnumPropertyValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  if (((local_2d0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_2d0._Widget.Object)->_padding_ + 0x228))(local_2d0._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_14d85a348;
  }
  bVar8 = 0x20;
LAB_14d85a348:
  *(byte *)&(local_2d0._Widget.Object)->_padding_ =
       (byte)(local_2d0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2d0._Widget.Object)->_padding_ =
       (byte)(local_2d0._Widget.Object)->_padding_ | bVar8;
  if (local_2d0._Widget.Object == (SEnumPropertyValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_2d0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_2d0._Widget.Object == (SEnumPropertyValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  FVar5.ReferenceController = local_2d0._Widget.SharedReferenceCount.ReferenceController;
  local_2d0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2d0._Widget.Object = (SEnumPropertyValue *)0x0;
  if (pSVar4 == (SEnumPropertyValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_260._Path.Properties.AllocatorInstance.SecondaryData !=
      (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)local_260._Path.Properties.AllocatorInstance.SecondaryData);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_260);
  FVar2 = (param_1->Path).Properties.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return __return_storage_ptr__;
}

// GetCurrentValue @ 14d866e30

int __thiscall UE::PropertyViewer::SEnumPropertyValue::GetCurrentValue(SEnumPropertyValue *this)

{
  code *UNRECOVERED_JUMPTABLE_00;
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  void *pvVar5;
  FProperty *pFVar6;
  FPropertyPath *this_00;
  
  pUVar4 = FWeakObjectPtr::Get(&(this->EnumType).WeakPtr);
  if (pUVar4 != (UObject *)0x0) {
    this_00 = &this->Path;
    pvVar5 = FPropertyPath::GetContainerPtr(this_00);
    if (pvVar5 != (void *)0x0) {
      pFVar6 = FPropertyPath::GetLastProperty(this_00);
      if ((pFVar6 != (FProperty *)0x0) && ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x18 & 1) != 0))
      {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(pFVar6->_padding_ + 0x210);
        if (pFVar6->ArrayDim < 1) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar2) {
            UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
            iVar3 = (*UNRECOVERED_JUMPTABLE_00)();
            return iVar3;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00014d866eef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (*UNRECOVERED_JUMPTABLE_00)
                          (pFVar6,(longlong)pFVar6->Offset_Internal + (longlong)pvVar5);
        return iVar3;
      }
      pFVar6 = FPropertyPath::GetLastProperty(this_00);
      if ((pFVar6 != (FProperty *)0x0) &&
         ((*(ulonglong *)(pFVar6->_padding_ + 0x18) & 0x1000000000000) != 0)) {
        plVar1 = (longlong *)pFVar6[1]._padding_;
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x210);
        if (pFVar6->ArrayDim < 1) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar2) {
            UNRECOVERED_JUMPTABLE_00 = (code *)swi(3);
            iVar3 = (*UNRECOVERED_JUMPTABLE_00)();
            return iVar3;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00014d866f87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (*UNRECOVERED_JUMPTABLE_00)
                          (plVar1,(longlong)pFVar6->Offset_Internal + (longlong)pvVar5);
        return iVar3;
      }
    }
  }
  return 0;
}

// GetText @ 14d86d060

FText * __thiscall
UE::PropertyViewer::SEnumPropertyValue::GetText
          (SEnumPropertyValue *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  bool bVar4;
  int iVar5;
  UEnum *this_00;
  UObject *pUVar6;
  void *pvVar7;
  FProperty *pFVar8;
  FText *pFVar9;
  FPropertyPath *this_01;
  undefined1 local_res8 [8];
  
  this_00 = (UEnum *)FWeakObjectPtr::Get(&(this->EnumType).WeakPtr);
  if (this_00 == (UEnum *)0x0) {
    pFVar9 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar3 = (pFVar9->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar9->Flags;
    return __return_storage_ptr__;
  }
  pUVar6 = FWeakObjectPtr::Get(&(this->EnumType).WeakPtr);
  if (pUVar6 != (UObject *)0x0) {
    this_01 = &this->Path;
    pvVar7 = FPropertyPath::GetContainerPtr(this_01);
    if (pvVar7 != (void *)0x0) {
      pFVar8 = FPropertyPath::GetLastProperty(this_01);
      if ((pFVar8 != (FProperty *)0x0) && ((*(uint *)(pFVar8->_padding_ + 0x18) >> 0x18 & 1) != 0))
      {
        pcVar1 = *(code **)(pFVar8->_padding_ + 0x210);
        if (pFVar8->ArrayDim < 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            pFVar9 = (FText *)(*pcVar1)();
            return pFVar9;
          }
        }
        iVar5 = (*pcVar1)(pFVar8,(longlong)pFVar8->Offset_Internal + (longlong)pvVar7);
        goto LAB_14d86d1b8;
      }
      pFVar8 = FPropertyPath::GetLastProperty(this_01);
      if ((pFVar8 != (FProperty *)0x0) &&
         ((*(ulonglong *)(pFVar8->_padding_ + 0x18) & 0x1000000000000) != 0)) {
        plVar2 = (longlong *)pFVar8[1]._padding_;
        pcVar1 = *(code **)(*plVar2 + 0x210);
        if (pFVar8->ArrayDim < 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            pFVar9 = (FText *)(*pcVar1)();
            return pFVar9;
          }
        }
        iVar5 = (*pcVar1)(plVar2,(longlong)pFVar8->Offset_Internal + (longlong)pvVar7);
        goto LAB_14d86d1b8;
      }
    }
  }
  iVar5 = 0;
LAB_14d86d1b8:
  UEnum::GetDisplayNameTextByValue(this_00,__return_storage_ptr__,(longlong)iVar5);
  return __return_storage_ptr__;
}

// OnGetMenuContent @ 14d874d20

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UE::PropertyViewer::SEnumPropertyValue::OnGetMenuContent
          (SEnumPropertyValue *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  ITextData *pIVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ISlateStyle *pIVar9;
  FUICommandList *this_00;
  FText *pFVar10;
  undefined8 *puVar11;
  TSharedRef<SWidget,1> *pTVar12;
  ulong64 uVar13;
  FUIAction *pFVar14;
  SEnumPropertyValue *pSVar15;
  FDestructionSentinel local_3e8;
  FDelegateAllocation *local_3d0;
  int local_3c8;
  undefined8 local_3c0;
  FSlateIcon *local_3b8;
  undefined1 local_3b0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3a8;
  ForAnyElementType FStack_3a0;
  ulonglong local_398;
  TSharedPtr<FExtender,1> local_390;
  undefined1 local_380 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_368;
  ForAnyElementType FStack_360;
  ulonglong local_358;
  undefined1 local_350 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_338;
  ForAnyElementType FStack_330;
  ulonglong local_328;
  undefined1 local_320 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_308;
  ForAnyElementType FStack_300;
  ulonglong local_2f8;
  undefined1 local_2f0 [8];
  FDelegateAllocation local_2e8;
  undefined1 local_2d8 [8];
  SWidget *local_2d0;
  SEnumPropertyValue *local_2c8;
  TSharedPtr<FUICommandList_const_,1> local_2c0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_2b0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_298;
  longlong *local_280;
  uint local_274;
  FMenuBuilder local_270;
  TSharedRef<SWidget,1> local_e8;
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined1 local_90 [32];
  FSlateIcon local_70;
  
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  pIVar9 = FAppStyle::Get();
  local_390.Object = (FExtender *)0x0;
  local_390.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2c0.Object = (FUICommandList *)0x0;
  local_2c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)&local_270,Menu,true,&local_2c0,false,&local_390,pIVar9,(FName)0x0,
             (FName)0x0);
  local_270.CurrentSectionExtensionHook.ComparisonIndex.Value = 0;
  local_270.CurrentSectionExtensionHook.Number = 0;
  local_270._padding_ = (longlong)&___7FMenuBuilder__6B_;
  FText::FText(&local_270.CurrentSectionHeadingText);
  local_270.CurrentSectionVisibility.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_270.CurrentSectionVisibility.bIsSet = false;
  local_270.CurrentSectionVisibility.Getter._16_8_ = 0;
  local_270.CurrentSectionVisibility.Getter._0_8_ = 0;
  local_270.CurrentSectionVisibility.Getter._8_8_ = 0;
  memset(&local_270.CurrentSectionResizeParams,0,200);
  local_270.CurrentSectionResizeParams.Value.ClippingPriority.Value = 0;
  local_270.CurrentSectionResizeParams.Value.ClippingPriority.Getter._16_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.AllowClipping.Getter._16_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._16_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._16_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._16_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._16_8_ = 0;
  local_270.CurrentSectionResizeParams.Getter._16_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.ClippingPriority.bIsSet = false;
  local_270.CurrentSectionResizeParams.Value.ClippingPriority.Getter._0_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.ClippingPriority.Getter._8_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.AllowClipping.Value = false;
  local_270.CurrentSectionResizeParams.Value.AllowClipping.bIsSet = false;
  local_270.CurrentSectionResizeParams.Value.AllowClipping.Getter._0_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.AllowClipping.Getter._8_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.VisibleInOverflow.Value = false;
  local_270.CurrentSectionResizeParams.Value.VisibleInOverflow.bIsSet = false;
  local_270.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._0_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._8_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.Wrapping.Allow.Value = false;
  local_270.CurrentSectionResizeParams.Value.Wrapping.Allow.bIsSet = false;
  local_270.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._0_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._8_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.Wrapping.Priority.Value = 0;
  local_270.CurrentSectionResizeParams.Value.Wrapping.Priority.bIsSet = false;
  local_270.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._0_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._8_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.Wrapping.Mode.Value = Preferred;
  local_270.CurrentSectionResizeParams.Value.Wrapping.Mode.bIsSet = false;
  local_270.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._0_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._8_8_ = 0;
  local_270.CurrentSectionResizeParams.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
  local_270.CurrentSectionResizeParams.Value.Wrapping.ForceNewLine.bIsSet = false;
  local_270.CurrentSectionResizeParams.bIsSet = false;
  local_270.CurrentSectionResizeParams.Getter._0_8_ = 0;
  local_270.CurrentSectionResizeParams.Getter._8_8_ = 0;
  local_270.bSectionNeedsToBeApplied = false;
  local_270.bSearchable = true;
  local_270.bRecursivelySearchable = true;
  local_270.bIsEditing = false;
  FMenuBuilder::AddSearchWidget(&local_270);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  this_00 = (FUICommandList *)FWeakObjectPtr::Get(&(this->EnumType).WeakPtr);
  local_2c0.Object = this_00;
  if (this_00 != (FUICommandList *)0x0) {
    bVar7 = UEnum::ContainsExistingMax((UEnum *)this_00);
    iVar1 = *(int *)(this_00->ContextsInList).Hash.InlineData;
    iVar8 = 0;
    local_3c8 = iVar1 + -1;
    if (!bVar7) {
      local_3c8 = iVar1;
    }
    if (0 < local_3c8) {
      local_3c0 = 0;
      pSVar15 = this;
      do {
        pFVar10 = FText::GetEmpty();
        pIVar3 = (pFVar10->TextData).Reference;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_2d8);
        }
        uVar2 = pFVar10->Flags;
        local_3b0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
        local_3b0[1] = false;
        local_398 = 0;
        local_3a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_3a0.Data = (FScriptContainerElement *)0x0;
        FText::FText((FText *)local_320);
        local_320[0x10] = false;
        local_2f8 = 0;
        local_2b0._16_8_ = 0;
        local_308.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_300.Data = (FScriptContainerElement *)0x0;
        local_2b0._0_8_ = 0;
        local_2b0._8_8_ = 0;
        local_298._16_8_ = 0;
        local_298._0_8_ = 0;
        local_298._8_8_ = 0;
        local_2f0 = (undefined1  [8])0x0;
        local_2e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_2e8.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f0,
                   (FWriteAccessScope *)&local_3e8);
        local_3d0 = &local_2e8;
        puVar11 = Core::Private::DelegateAllocate(0x38,&local_2e8);
        if (puVar11 != (undefined8 *)0x0) {
          local_390.Object = (FExtender *)SetEnumEntry;
          local_390.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)((ulonglong)local_274 << 0x20);
          pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                              ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e8);
          pSVar15 = (SEnumPropertyValue *)(pTVar12->SharedReferenceCount).ReferenceController;
          local_2d0 = pTVar12->Object;
          if (pSVar15 != (SEnumPropertyValue *)0x0) {
            LOCK();
            *(atomic<int> *)&pSVar15->_padding_ =
                 (atomic<int>)((int)*(atomic<int> *)&pSVar15->_padding_ + 1);
            UNLOCK();
            LOCK();
            *(atomic<int> *)&pSVar15->_padding_ =
                 (atomic<int>)((int)*(atomic<int> *)&pSVar15->_padding_ + 1);
            UNLOCK();
          }
          bVar6 = true;
          bVar5 = true;
          bVar4 = true;
          *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_
          ;
          *(int *)(puVar11 + 1) = iVar8;
          local_2c8 = pSVar15;
          uVar13 = FDelegateHandle::GenerateNewID();
          puVar11[2] = uVar13;
          *puVar11 = &
                     ___7__TBaseSPMethodDelegateInstance__0A_VSEnumPropertyValue_PropertyViewer_UE___00__A6AXXZUFDefaultDelegateUserPolicy__H__6B_
          ;
          puVar11[3] = local_2d0;
          puVar11[4] = pSVar15;
          if (pSVar15 != (SEnumPropertyValue *)0x0) {
            LOCK();
            ((atomic<int> *)&pSVar15->_padding_)[1] =
                 (atomic<int>)((int)((atomic<int> *)&pSVar15->_padding_)[1] + 1);
            UNLOCK();
          }
          puVar11[5] = local_390.Object;
          puVar11[6] = local_390.SharedReferenceCount.ReferenceController;
        }
        if (bVar4) {
          bVar4 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pSVar15);
        }
        if (bVar5) {
          bVar5 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_2c8);
        }
        if (bVar6) {
          bVar6 = false;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e8.SharedReferenceCount.ReferenceController);
        }
        if (local_3e8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
        }
        pFVar14 = FUIAction::FUIAction
                            ((FUIAction *)local_d8,
                             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2f0,
                             &local_298,&local_2b0,RepeatDisabled);
        local_3b8 = FSlateIcon::FSlateIcon(&local_70);
        local_380._0_8_ = pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_3c0);
        }
        local_358 = 0;
        local_380[0x10] = true;
        local_368.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_360.Data = (FScriptContainerElement *)0x0;
        local_380._8_4_ = uVar2;
        pFVar10 = (FText *)(**(code **)((local_2c0.Object)->_padding_ + 0x2c0))
                                     (local_2c0.Object,&local_280,iVar8);
        FText::FText((FText *)local_350,pFVar10);
        local_350[0x10] = true;
        local_328 = 0;
        local_338.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_330.Data = (FScriptContainerElement *)0x0;
        FBaseMenuBuilder::AddMenuEntry
                  ((FBaseMenuBuilder *)&local_270,(TAttribute<FText> *)local_350,
                   (TAttribute<FText> *)local_380,local_3b8,pFVar14,(FName)0x0,None,(FName)0x0,
                   (TAttribute<FText> *)local_320,(TAttribute<EVisibility> *)local_3b0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_338,(FWriteAccessScope *)&local_3e8);
        if (((int)local_328 != 0) && (FStack_330.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_330.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_330,0,0,0x10)
          ;
          local_328 = local_328 & 0xffffffff00000000;
        }
        if (local_3e8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
        }
        if (FStack_330.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_330.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_338.AccessDetector);
        if ((ITextData *)local_350._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_350._0_8_ + 0x10))();
        }
        if (local_280 != (longlong *)0x0) {
          (**(code **)(*local_280 + 0x10))();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_368,(FWriteAccessScope *)&local_3e8);
        if (((int)local_358 != 0) && (FStack_360.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_360.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_360,0,0,0x10)
          ;
          local_358 = local_358 & 0xffffffff00000000;
        }
        if (local_3e8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
        }
        if (FStack_360.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_360.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_368.AccessDetector);
        if ((ITextData *)local_380._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_380._0_8_ + 0x10))();
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
        if ((void *)local_90._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_90._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_90);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
        if ((void *)local_a8._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_a8._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_a8);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c0);
        if ((void *)local_c0._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_c0._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_c0);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d8);
        if ((void *)local_d8._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_d8._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_d8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_308,(FWriteAccessScope *)&local_3e8);
        if (((int)local_2f8 != 0) && (FStack_300.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_300.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_300,0,0,0x10)
          ;
          local_2f8 = local_2f8 & 0xffffffff00000000;
        }
        if (local_3e8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
        }
        if (FStack_300.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_300.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_308.AccessDetector);
        if ((ITextData *)local_320._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_320._0_8_ + 0x10))();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_3a8,(FWriteAccessScope *)&local_3e8);
        if (((int)local_398 != 0) && (FStack_3a0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_3a0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a0,0,0,0x10)
          ;
          local_398 = local_398 & 0xffffffff00000000;
        }
        if (local_3e8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
        }
        if (FStack_3a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_3a0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3a8.AccessDetector);
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_3c8);
    }
  }
  FMenuBuilder::MakeWidget
            (&local_270,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_270);
  return __return_storage_ptr__;
}

// SetEnumEntry @ 14d886a90

void __thiscall
UE::PropertyViewer::SEnumPropertyValue::SetEnumEntry(SEnumPropertyValue *this,int param_1)

{
  FPropertyPath *this_00;
  undefined8 uVar1;
  INotifyHook *pIVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  void *pvVar7;
  TTuple<FName,__int64> *pTVar8;
  FProperty *pFVar9;
  TTuple<FName,__int64> local_28;
  
  pUVar6 = FWeakObjectPtr::Get(&(this->EnumType).WeakPtr);
  if (pUVar6 != (UObject *)0x0) {
    this_00 = &this->Path;
    pvVar7 = FPropertyPath::GetContainerPtr(this_00);
    if (pvVar7 != (void *)0x0) {
      if (((param_1 < 0) || (*(int *)(pUVar6 + 2) <= param_1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Names.IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xb2d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar8 = UEnum::FNameData::operator[]((FNameData *)&pUVar6[1].field_0x18,&local_28,param_1);
      uVar1 = *(undefined8 *)&pTVar8->field_0x8;
      pFVar9 = FPropertyPath::GetLastProperty(this_00);
      if ((pFVar9 == (FProperty *)0x0) || ((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x18 & 1) == 0))
      {
        pFVar9 = FPropertyPath::GetLastProperty(this_00);
        if (pFVar9 == (FProperty *)0x0) {
          return;
        }
        if ((*(ulonglong *)(pFVar9->_padding_ + 0x18) & 0x1000000000000) == 0) {
          return;
        }
        pIVar2 = this->NotifyHook;
        if (pIVar2 != (INotifyHook *)0x0) {
          (**(code **)*pIVar2)(pIVar2,this_00);
        }
        plVar3 = (longlong *)pFVar9[1]._padding_;
        pcVar4 = *(code **)(*plVar3 + 0x1e8);
        if ((pFVar9->ArrayDim < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*pcVar4)(plVar3,(longlong)pFVar9->Offset_Internal + (longlong)pvVar7,uVar1);
      }
      else {
        pIVar2 = this->NotifyHook;
        if (pIVar2 != (INotifyHook *)0x0) {
          (**(code **)*pIVar2)(pIVar2,this_00);
        }
        pcVar4 = *(code **)(pFVar9->_padding_ + 0x1e8);
        if ((pFVar9->ArrayDim < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*pcVar4)(pFVar9,(longlong)pFVar9->Offset_Internal + (longlong)pvVar7,uVar1);
      }
      pIVar2 = this->NotifyHook;
      if (pIVar2 != (INotifyHook *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,this_00);
      }
    }
  }
  return;
}

