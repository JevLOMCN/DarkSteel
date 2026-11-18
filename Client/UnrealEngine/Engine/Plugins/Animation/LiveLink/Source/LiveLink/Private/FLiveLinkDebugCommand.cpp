// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 3

// FLiveLinkDebugCommand @ 14d011290

FLiveLinkDebugCommand * __thiscall
FLiveLinkDebugCommand::FLiveLinkDebugCommand(FLiveLinkDebugCommand *this,FLiveLinkClient *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FAutoConsoleCommand *this_00;
  FAutoConsoleCommand *pFVar3;
  FAutoConsoleCommand *pFVar4;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this->Client = param_1;
  pFVar4 = (FAutoConsoleCommand *)0x0;
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[4] = ShowDebugInfo;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkDebugCommand____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  this_00 = ::operator_new(0x10);
  pFVar3 = pFVar4;
  if (this_00 != (FAutoConsoleCommand *)0x0) {
    pFVar3 = FAutoConsoleCommand::FAutoConsoleCommand
                       (this_00,L"LiveLink.ShowDebugInfo",
                        L"Show debug information for LiveLink Sources and Subjects",
                        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58,0);
  }
  (this->CommandShow).Ptr = pFVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    puVar1[4] = HideDebugInfo;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLiveLinkDebugCommand____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  pFVar3 = ::operator_new(0x10);
  if (pFVar3 != (FAutoConsoleCommand *)0x0) {
    pFVar4 = FAutoConsoleCommand::FAutoConsoleCommand
                       (pFVar3,L"LiveLink.HideDebugInfo",
                        L"Hide debug information for LiveLink Sources and Subjects",
                        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_58,0);
  }
  (this->CommandHide).Ptr = pFVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  this->bRenderDebugInfo = false;
  (this->DebugViewEditor).Object = (SLiveLinkDebugView *)0x0;
  (this->DebugViewEditor).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DebugViewGame).Object = (SLiveLinkDebugView *)0x0;
  (this->DebugViewGame).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// HideDebugInfo @ 14d05a890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FLiveLinkDebugCommand::HideDebugInfo(FLiveLinkDebugCommand *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SLiveLinkDebugView *pSVar4;
  UGameViewportClient *pUVar5;
  code *pcVar6;
  atomic<int> aVar7;
  TSharedRef<SWidget,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  TSharedRef<SWidget,1> local_38;
  undefined8 local_28 [2];
  undefined8 local_18 [2];
  
  if (this->bRenderDebugInfo != false) {
    this->bRenderDebugInfo = false;
    if ((((GEngine != (UEngine *)0x0) &&
         ((GEngine->GameViewport).field0_0x0.DebugPtr != (UGameViewportClient *)0x0)) &&
        ((this->DebugViewGame).Object != (SLiveLinkDebugView *)0x0)) &&
       ((pTVar3 = (this->DebugViewGame).WeakReferenceCount.ReferenceController,
        pTVar3 != (TReferenceControllerBase<1> *)0x0 && (0 < (int)pTVar3->SharedReferenceCount)))) {
      pTVar3 = (this->DebugViewGame).WeakReferenceCount.ReferenceController;
      pTVar9 = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = pTVar3->SharedReferenceCount;
        do {
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
          if (aVar2 == (atomic<int>)0x0) goto LAB_14d05a915;
          LOCK();
          aVar7 = pTVar3->SharedReferenceCount;
          bVar10 = aVar2 == aVar7;
          if (bVar10) {
            pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar7 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar7;
        } while (!bVar10);
        pSVar4 = (this->DebugViewGame).Object;
        pTVar9 = pTVar3;
        if (pSVar4 != (SLiveLinkDebugView *)0x0) {
          pUVar5 = (GEngine->GameViewport).field0_0x0.DebugPtr;
          pcVar6 = *(code **)(pUVar5->_padding_ + 0x2f0);
          pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                             ((TSharedFromThis<SWidget,1> *)&pSVar4->_padding_,&local_38);
          (*pcVar6)(pUVar5,pTVar8);
        }
      }
LAB_14d05a915:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    }
    if (&this->DebugViewEditor != (TWeakPtr<SLiveLinkDebugView,1> *)local_28) {
      pTVar3 = (this->DebugViewEditor).WeakReferenceCount.ReferenceController;
      (this->DebugViewEditor).Object = (SLiveLinkDebugView *)0x0;
      (this->DebugViewEditor).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
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
    }
    if (&this->DebugViewGame != (TWeakPtr<SLiveLinkDebugView,1> *)local_18) {
      pTVar3 = (this->DebugViewGame).WeakReferenceCount.ReferenceController;
      (this->DebugViewGame).Object = (SLiveLinkDebugView *)0x0;
      (this->DebugViewGame).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
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
    }
  }
  return;
}

// ShowDebugInfo @ 14d07f610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FLiveLinkDebugCommand::ShowDebugInfo(FLiveLinkDebugCommand *this)

{
  byte *pbVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  UGameViewportClient *pUVar5;
  longlong lVar6;
  code *pcVar7;
  SLiveLinkDebugView *pSVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  FSlateBaseNamedArgs *pFVar13;
  FLLMScope local_res8 [2];
  FLiveLinkClient *local_res10;
  FName local_res18;
  T1RequiredArgs<FLiveLinkClient_*_&&> local_res20;
  TSlateDecl<SLiveLinkDebugView,RequiredArgs::T1RequiredArgs<FLiveLinkClient_*_&&>_> local_258;
  FMemScope local_240;
  SLiveLinkDebugView *local_238;
  TReferenceControllerBase<1> *local_230;
  FSlateBaseNamedArgs local_228;
  
  if (this->bRenderDebugInfo != false) {
    return;
  }
  this->bRenderDebugInfo = true;
  if (GEngine == (UEngine *)0x0) {
    return;
  }
  if ((GEngine->GameViewport).field0_0x0.DebugPtr == (UGameViewportClient *)0x0) {
    return;
  }
  pFVar13 = (FSlateBaseNamedArgs *)
            SLiveLinkDebugView::FArguments::FArguments((FArguments *)&local_228);
  local_res10 = this->Client;
  local_res20.Arg0 = &local_res10;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_240,&local_res18,true);
  TSlateDecl<SLiveLinkDebugView,RequiredArgs::T1RequiredArgs<FLiveLinkClient_*_&&>_>::
  TSlateDecl<SLiveLinkDebugView,RequiredArgs::T1RequiredArgs<FLiveLinkClient_*_&&>_>
            (&local_258,"SLiveLinkDebugView",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkDebugCommand.cpp"
             ,0x36,&local_res20);
  FMemScope::~FMemScope(&local_240);
  FLLMScope::~FLLMScope(local_res8);
  pSVar8 = local_258._Widget.Object;
  if ((local_258._Widget.Object == (SLiveLinkDebugView *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_258._Widget.Object,pFVar13);
  SLiveLinkDebugView::Construct
            (local_258._Widget.Object,(FArguments *)pFVar13,*(local_258._RequiredArgs)->Arg0);
  if ((local_258._Widget.Object == (SLiveLinkDebugView *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((local_258._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_258._Widget.Object)->_padding_ + 0x228))(local_258._Widget.Object);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_14d07f7a6;
  }
  bVar12 = 0x20;
LAB_14d07f7a6:
  *(byte *)&(local_258._Widget.Object)->_padding_ =
       (byte)(local_258._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_258._Widget.Object)->_padding_ =
       (byte)(local_258._Widget.Object)->_padding_ | bVar12;
  if ((local_258._Widget.Object == (SLiveLinkDebugView *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_258._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_258._Widget.Object == (SLiveLinkDebugView *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar9.ReferenceController = local_258._Widget.SharedReferenceCount.ReferenceController;
  local_258._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_258._Widget.Object = (SLiveLinkDebugView *)0x0;
  if ((pSVar8 == (SLiveLinkDebugView *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_228);
  (this->DebugViewGame).Object = pSVar8;
  if (FVar9.ReferenceController != (this->DebugViewGame).WeakReferenceCount.ReferenceController) {
    if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar9.ReferenceController)->WeakReferenceCount =
           (atomic<int>)((int)(FVar9.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->DebugViewGame).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->DebugViewGame).WeakReferenceCount.ReferenceController = FVar9.ReferenceController;
  }
  pUVar5 = (GEngine->GameViewport).field0_0x0.DebugPtr;
  lVar6 = pUVar5->_padding_;
  local_238 = pSVar8;
  local_230 = FVar9.ReferenceController;
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(lVar6 + 0x2e8))(pUVar5,&local_238,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  return;
}

