// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizationService
// Functions: 3

// FScopedLocalizationServiceProgress @ 146b2da30

/* WARNING: Enum "Type": Some values do not have unique names */

FScopedLocalizationServiceProgress * __thiscall
FScopedLocalizationServiceProgress::FScopedLocalizationServiceProgress
          (FScopedLocalizationServiceProgress *this,FText *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  byte *pbVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  SWindow *this_00;
  FSharedReferencer<1> FVar6;
  SLocalizationServiceProgress *pSVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  FArguments *pFVar12;
  FScopedLocalizationServiceProgress *pFVar13;
  FArguments *pFVar14;
  TSharedRef<FGlobalTabmanager,1> *pTVar15;
  FSlateApplication *pFVar16;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_698;
  FLLMScope local_694;
  undefined1 local_690 [8];
  ForAnyElementType local_688;
  int local_680;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_678;
  TSlateDecl<SLocalizationServiceProgress,RequiredArgs::T0RequiredArgs> local_660;
  FText local_648;
  bool local_638;
  undefined1 local_630 [8];
  ForAnyElementType FStack_628;
  ulonglong local_620;
  undefined1 local_618 [4];
  FName local_614;
  FMemScope local_608;
  FName local_600;
  FMemScope local_5f8;
  TSharedRef<SWidget,1> local_5f0;
  TSharedRef<SWindow,1> local_5e0;
  TSharedPtr<SWindow,1> local_5c8;
  FDestructionSentinel local_5b8;
  FDestructionSentinel local_5a0;
  TSharedPtr<SWidget_const_,1> local_588;
  FArguments local_578;
  FArguments local_280;
  
  (this->WindowPtr).Object = (SWindow *)0x0;
  (this->WindowPtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar9 = FApp::IsUnattended();
  if (bVar9) {
    return this;
  }
  if (PRIVATE_GIsRunningCommandlet != false) {
    return this;
  }
  bVar9 = FText::IsEmpty(param_1);
  if (bVar9) {
    return this;
  }
  pFVar12 = SWindow::FArguments::FArguments(&local_578);
  pFVar12->_SizingRule = Autosized;
  pFVar12->_IsPopupWindow = true;
  pFVar12->_SupportsMaximize = false;
  pFVar12->_SupportsMinimize = false;
  pFVar12->_CreateTitleBar = false;
  FLLMScope::FLLMScope(&local_698,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_614 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_608,&local_614,true);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
            (&local_678,"SWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\LocalizationService\\Private\\ScopedLocalizationServiceProgress.cpp"
             ,0xc1,local_res8);
  FMemScope::~FMemScope(&local_608);
  FLLMScope::~FLLMScope(&local_698);
  this_00 = local_678._Widget.Object;
  if ((local_678._Widget.Object == (SWindow *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FScopedLocalizationServiceProgress *)(*pcVar5)();
    return pFVar13;
  }
  SWidget::SWidgetConstruct((SWidget *)local_678._Widget.Object,(FSlateBaseNamedArgs *)pFVar12);
  SWindow::Construct(local_678._Widget.Object,pFVar12);
  if ((local_678._Widget.Object == (SWindow *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FScopedLocalizationServiceProgress *)(*pcVar5)();
    return pFVar13;
  }
  if (((local_678._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_678._Widget.Object)->_padding_ + 0x228))(local_678._Widget.Object);
    bVar11 = 0;
    if (cVar10 != '\0') goto LAB_146b2dbd2;
  }
  else {
LAB_146b2dbd2:
    bVar11 = 0x20;
  }
  *(byte *)&(local_678._Widget.Object)->_padding_ =
       (byte)(local_678._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_678._Widget.Object)->_padding_ =
       (byte)(local_678._Widget.Object)->_padding_ | bVar11;
  if ((local_678._Widget.Object == (SWindow *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FScopedLocalizationServiceProgress *)(*pcVar5)();
    return pFVar13;
  }
  pbVar1 = (byte *)((longlong)&(local_678._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_678._Widget.Object == (SWindow *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FScopedLocalizationServiceProgress *)(*pcVar5)();
    return pFVar13;
  }
  FVar6.ReferenceController = local_678._Widget.SharedReferenceCount.ReferenceController;
  local_678._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_678._Widget.Object = (SWindow *)0x0;
  if ((this_00 == (SWindow *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FScopedLocalizationServiceProgress *)(*pcVar5)();
    return pFVar13;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_578._CloseButtonToolTipText.Getter)
  ;
  if (local_578._CloseButtonToolTipText.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_578._CloseButtonToolTipText.Value.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_578._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_578._Title.Getter);
  if (local_578._Title.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_578._Title.Value.TextData.Reference + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_578);
  (this->WindowPtr).Object = this_00;
  if (FVar6.ReferenceController != (this->WindowPtr).WeakReferenceCount.ReferenceController) {
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar6.ReferenceController)->WeakReferenceCount =
           (atomic<int>)((int)(FVar6.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->WindowPtr).WeakReferenceCount.ReferenceController;
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
    (this->WindowPtr).WeakReferenceCount.ReferenceController = FVar6.ReferenceController;
  }
  pFVar14 = SLocalizationServiceProgress::FArguments::FArguments(&local_280);
  local_648.TextData.Reference = (param_1->TextData).Reference;
  if (local_648.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_648.TextData.Reference + 8))
              (local_648.TextData.Reference,local_618);
  }
  local_648.Flags = param_1->Flags;
  local_620 = 0;
  local_638 = true;
  local_630 = (undefined1  [8])0x0;
  FStack_628.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar14->_Text).Value,&local_648);
  (pFVar14->_Text).bIsSet = local_638;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar14->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_630);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_630,
             (FWriteAccessScope *)&local_5b8);
  if (((int)local_620 != 0) && (FStack_628.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_628.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_628,0,0,0x10);
    local_620 = local_620 & 0xffffffff00000000;
  }
  if (local_5b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5b8.Accessor,&local_5b8);
  }
  if (FStack_628.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_628.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_630);
  if (local_648.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_648.TextData.Reference + 0x10))();
  }
  local_690 = (undefined1  [8])0x0;
  local_688.Data = (FScriptContainerElement *)0x0;
  local_680 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_690,param_2);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar14->_OnCancelled,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_690);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_690,
             (FWriteAccessScope *)&local_5a0);
  if ((local_680 != 0) && (local_688.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_688.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_688,0,0,0x10);
    local_680 = 0;
  }
  if (local_5a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5a0.Accessor,&local_5a0);
  }
  if (local_688.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_688.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_690);
  FLLMScope::FLLMScope(&local_694,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_600 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5f8,&local_600,true);
  TSlateDecl<SLocalizationServiceProgress,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SLocalizationServiceProgress,RequiredArgs::T0RequiredArgs>
            (&local_660,"SLocalizationServiceProgress",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\LocalizationService\\Private\\ScopedLocalizationServiceProgress.cpp"
             ,0xcb,local_res20);
  FMemScope::~FMemScope(&local_5f8);
  FLLMScope::~FLLMScope(&local_694);
  pSVar7 = local_660._Widget.Object;
  if ((local_660._Widget.Object == (SLocalizationServiceProgress *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FScopedLocalizationServiceProgress *)(*pcVar5)();
    return pFVar13;
  }
  SWidget::SWidgetConstruct((SWidget *)local_660._Widget.Object,(FSlateBaseNamedArgs *)pFVar14);
  SLocalizationServiceProgress::Construct(local_660._Widget.Object,pFVar14);
  if ((local_660._Widget.Object == (SLocalizationServiceProgress *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FScopedLocalizationServiceProgress *)(*pcVar5)();
    return pFVar13;
  }
  if (((local_660._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_660._Widget.Object)->_padding_ + 0x228))(local_660._Widget.Object);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_146b2dfac;
  }
  bVar11 = 0x20;
LAB_146b2dfac:
  *(byte *)&(local_660._Widget.Object)->_padding_ =
       (byte)(local_660._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_660._Widget.Object)->_padding_ =
       (byte)(local_660._Widget.Object)->_padding_ | bVar11;
  if ((local_660._Widget.Object == (SLocalizationServiceProgress *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FScopedLocalizationServiceProgress *)(*pcVar5)();
    return pFVar13;
  }
  pbVar1 = (byte *)((longlong)&(local_660._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_660._Widget.Object == (SLocalizationServiceProgress *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FScopedLocalizationServiceProgress *)(*pcVar5)();
    return pFVar13;
  }
  FVar8.ReferenceController = local_660._Widget.SharedReferenceCount.ReferenceController;
  local_660._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_660._Widget.Object = (SLocalizationServiceProgress *)0x0;
  if ((pSVar7 == (SLocalizationServiceProgress *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FScopedLocalizationServiceProgress *)(*pcVar5)();
    return pFVar13;
  }
  local_5f0.Object = (SWidget *)pSVar7;
  local_5f0.SharedReferenceCount.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SWindow::SetContent(this_00,&local_5f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_280._OnCancelled);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_280._Text.Getter);
  if (local_280._Text.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_280._Text.Value.TextData.Reference + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_280);
  pTVar15 = FGlobalTabmanager::Get();
  FGlobalTabmanager::GetRootWindow(pTVar15->Object,&local_5c8);
  pFVar16 = FSlateApplication::Get();
  local_588.Object = (SWidget *)local_5c8.Object;
  local_588.SharedReferenceCount.ReferenceController =
       local_5c8.SharedReferenceCount.ReferenceController;
  if (local_5c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5e0.Object = this_00;
  local_5e0.SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateApplication::AddModalWindow(pFVar16,&local_5e0,&local_588,true);
  SWindow::ShowWindow(this_00);
  bVar9 = FApp::IsUnattended();
  if ((((!bVar9) && (PRIVATE_GIsRunningCommandlet == false)) &&
      ((this->WindowPtr).Object != (SWindow *)0x0)) &&
     ((pTVar4 = (this->WindowPtr).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0 && (0 < (int)pTVar4->SharedReferenceCount)))) {
    pFVar16 = FSlateApplication::Get();
    bVar9 = FSlateApplication::CanDisplayWindows(pFVar16);
    if (bVar9) {
      pFVar16 = FSlateApplication::Get();
      FSlateApplication::Tick(pFVar16,All);
      pFVar16 = FSlateApplication::Get();
      (**(code **)(**(longlong **)&pFVar16->field_0x60 + 200))();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  return this;
}

// ~FScopedLocalizationServiceProgress @ 146b2e1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FScopedLocalizationServiceProgress::~FScopedLocalizationServiceProgress
          (FScopedLocalizationServiceProgress *this)

{
  FWeakReferencer<1> *pFVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  SWindow *pSVar7;
  SWindow *pSVar8;
  SWindow *this_00;
  bool bVar9;
  
  pFVar1 = &(this->WindowPtr).WeakReferenceCount;
  if ((((this->WindowPtr).Object == (SWindow *)0x0) ||
      (pTVar4 = pFVar1->ReferenceController, pTVar4 == (TReferenceControllerBase<1> *)0x0)) ||
     ((int)pTVar4->SharedReferenceCount < 1)) goto LAB_146b2e285;
  pSVar8 = (SWindow *)pFVar1->ReferenceController;
  this_00 = (SWindow *)0x0;
  pSVar7 = pSVar8;
  if (pSVar8 == (SWindow *)0x0) {
LAB_146b2e241:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar8 = pSVar7;
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    aVar3 = *(atomic<int> *)&pSVar8->_padding_;
    do {
      pSVar7 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146b2e241;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar8->_padding_;
      bVar9 = aVar3 == aVar6;
      if (bVar9) {
        *(atomic<int> *)&pSVar8->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar9);
    this_00 = (this->WindowPtr).Object;
    pSVar7 = pSVar8;
    if (this_00 == (SWindow *)0x0) goto LAB_146b2e241;
  }
  SWindow::RequestDestroyWindow(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
LAB_146b2e285:
  pTVar4 = (this->WindowPtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000146b2e2ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      return;
    }
  }
  return;
}

// Tick @ 146b33830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FScopedLocalizationServiceProgress::Tick(FScopedLocalizationServiceProgress *this)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  FSlateApplication *pFVar3;
  
  bVar2 = FApp::IsUnattended();
  if ((((!bVar2) && (PRIVATE_GIsRunningCommandlet == false)) &&
      ((this->WindowPtr).Object != (SWindow *)0x0)) &&
     ((pTVar1 = (this->WindowPtr).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0 && (0 < (int)pTVar1->SharedReferenceCount)))) {
    pFVar3 = FSlateApplication::Get();
    bVar2 = FSlateApplication::CanDisplayWindows(pFVar3);
    if (bVar2) {
      pFVar3 = FSlateApplication::Get();
      FSlateApplication::Tick(pFVar3,All);
      pFVar3 = FSlateApplication::Get();
                    /* WARNING: Could not recover jumptable at 0x000146b33891. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)&pFVar3->field_0x60 + 200))();
      return;
    }
  }
  return;
}

