// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 17

// <lambda_1> @ 142bc3380

<lambda_1> * __thiscall
`SMessageLogMessageListRow::CreateMessage'::__l42::<lambda_1>::<lambda_1>
          (void *this,FString *param_1,int *param_2)

{
  ::FString::FString(this,param_1);
  *(int *)((longlong)this + 0x10) = *param_2;
  return this;
}

// ~<lambda_1> @ 142bc91e0

void __thiscall
`SMessageLogMessageListRow::CreateMessage'::__l42::<lambda_1>::~<lambda_1>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~SMessageLogMessageListRow @ 142bcd120

void __thiscall
SMessageLogMessageListRow::~SMessageLogMessageListRow(SMessageLogMessageListRow *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMessageDoubleClicked);
  pvVar1 = *(void **)&(this->OnMessageDoubleClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMessageDoubleClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTokenClicked);
  pvVar1 = *(void **)&(this->OnTokenClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTokenClicked);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Message).SharedReferenceCount.ReferenceController);
  STableRow<TSharedPtr<FTokenizedMessage,1>_>::~STableRow<TSharedPtr<FTokenizedMessage,1>_>
            ((STableRow<TSharedPtr<FTokenizedMessage,1>_> *)this);
  return;
}

// operator() @ 142bd03d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SMessageLogMessageListRow::CreateMessage'::__l42::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentApplication.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                       ,0x141,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = IsInSlateThread();
    if (!bVar2) {
      bVar2 = (*IsInAsyncLoadingThread)();
      if (!bVar2) {
        bVar2 = IsInParallelLoadingThread();
        if (!bVar2) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                             ,0x142,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
    }
  }
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSlateApplication::GotoLineInSource
            (FSlateApplication::CurrentApplication.Object,this,*(int *)((longlong)this + 0x10));
  return;
}

// operator() @ 142bd04b0

FSlateBrush * __thiscall
`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_2>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  char cVar5;
  FSlateBrush *pFVar6;
  ISlateStyle *pIVar7;
  FName *pFVar8;
  char *pcVar9;
  code *pcVar10;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x40) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar10 = (code *)swi(3);
      pFVar6 = (FSlateBrush *)(*pcVar10)();
      return pFVar6;
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0x40);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar10 = (code *)swi(3);
      pFVar6 = (FSlateBrush *)(*pcVar10)();
      return pFVar6;
    }
  }
  cVar5 = (**(code **)(*plVar2 + 8))(plVar2,*(undefined4 *)(*(longlong *)this + 0x50));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pIVar7 = FAppStyle::Get();
  if (cVar5 == '\0') {
    pcVar10 = *(code **)((longlong)*pIVar7 + 0x50);
    pcVar9 = "MessageLog.Fix";
    pFVar8 = local_res18;
  }
  else {
    pcVar10 = *(code **)((longlong)*pIVar7 + 0x50);
    if (cVar5 == '\x01') {
      pcVar9 = "Icons.Check";
      pFVar8 = &local_res10;
    }
    else {
      pcVar9 = "Icons.BulletPoint16";
      pFVar8 = &local_res8;
    }
  }
  pFVar8 = ::FName::FName(pFVar8,pcVar9);
  pFVar6 = (FSlateBrush *)(*pcVar10)(pIVar7,*pFVar8,0,0);
  return pFVar6;
}

// operator() @ 142bd05b0

bool __thiscall
`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_3>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x40) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0x40);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  cVar7 = (**(code **)(*plVar2 + 8))(plVar2,*(undefined4 *)(*(longlong *)this + 0x50));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return cVar7 == '\0';
}

// operator() @ 142bd0670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_4>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FText *pFVar6;
  FSlateNotificationManager *this_00;
  TSharedPtr<SNotificationItem,1> *pTVar7;
  undefined1 local_res8 [8];
  FText local_208;
  undefined1 local_1f8;
  undefined1 local_1f0 [8];
  ForAnyElementType FStack_1e8;
  ulonglong local_1e0;
  char local_1d8 [8];
  ITextData *local_1d0;
  uint local_1c8;
  FDestructionSentinel local_1c0;
  FText local_1a8;
  FText local_198;
  TSharedPtr<SNotificationItem,1> local_188;
  FNotificationInfo local_178;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  if (*(longlong *)(lVar1 + 0x40) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0x40);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 0x48);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (**(code **)(*plVar2 + 0x10))
            (plVar2,local_1d8,*(undefined4 *)(*(longlong *)((longlong)this + 8) + 0x50));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_1d8[0] == '\0') {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_198,L"SMessageLogMessageListRow",L"FailedToApplyFix",
                        L"Failed to apply fix");
    FNotificationInfo::FNotificationInfo(&local_178,pFVar6);
    local_1a8.TextData.Reference = local_198.TextData.Reference;
  }
  else {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_1a8,L"SMessageLogMessageListRow",L"FixAppliedSuccessfully",
                        L"Fix applied successfully");
    FNotificationInfo::FNotificationInfo(&local_178,pFVar6);
  }
  if (local_1a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
  }
  local_208.TextData.Reference = local_1d0;
  if (local_1d0 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d0 + 8))(local_1d0,local_res8);
  }
  local_208.Flags = local_1c8;
  local_1f8 = 1;
  local_1e0 = 0;
  local_1f0 = (undefined1  [8])0x0;
  FStack_1e8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&local_178.SubText.Value,&local_208);
  local_178.SubText.bIsSet = (bool)local_1f8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_178.SubText.Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f0,
             (FWriteAccessScope *)&local_1c0);
  if (((int)local_1e0 != 0) && (FStack_1e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1e8,0,0,0x10);
    local_1e0 = local_1e0 & 0xffffffff00000000;
  }
  if (local_1c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
  }
  if (FStack_1e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f0);
  if (local_208.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
  }
  local_178.bUseThrobber = false;
  this_00 = FSlateNotificationManager::Get();
  pTVar7 = FSlateNotificationManager::AddNotification(this_00,&local_188,&local_178);
  if (pTVar7->Object == (SNotificationItem *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (**(code **)(*(longlong *)pTVar7->Object + 0x280))
            (pTVar7->Object,3 - (uint)(local_1d8[0] != '\0'));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  FNotificationInfo::~FNotificationInfo(&local_178);
  if (local_1d0 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d0 + 0x10))();
  }
  return;
}

// Construct @ 142bddc80

void __thiscall
SMessageLogMessageListRow::Construct
          (SMessageLogMessageListRow *this,FArguments *param_1,TSharedRef<STableViewBase,1> *param_2
          )

{
  TAttribute<TSharedPtr<FTokenizedMessage,1>_> *pTVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTokenizedMessage *pFVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  char cVar7;
  FArguments *pFVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 local_358 [8];
  ForAnyElementType local_350;
  int local_348;
  FDestructionSentinel local_340;
  FTokenizedMessage *local_328;
  FSharedReferencer<1> local_320;
  FArguments local_318;
  
  plVar10 = (longlong *)0x0;
  if (&param_1->_OnTokenClicked != &this->OnTokenClicked) {
    local_358 = (undefined1  [8])0x0;
    local_350.Data = (FScriptContainerElement *)0x0;
    local_348 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnTokenClicked,
               (FReadAccessScope *)&local_340);
    if ((*(int *)&(param_1->_OnTokenClicked).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnTokenClicked).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_358);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_340);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTokenClicked,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_358);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_358,
               (FWriteAccessScope *)&local_340);
    if ((local_348 != 0) &&
       ((TReferenceControllerBase<1> *)local_350.Data != (TReferenceControllerBase<1> *)0x0)) {
      (*(code *)**(undefined8 **)local_350.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_350,0,0,0x10);
      local_348 = 0;
    }
    if (local_340.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_340.Accessor,&local_340);
    }
    if ((TReferenceControllerBase<1> *)local_350.Data != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(local_350.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_358);
  }
  if (&param_1->_OnMessageDoubleClicked != &this->OnMessageDoubleClicked) {
    local_358 = (undefined1  [8])0x0;
    local_350.Data = (FScriptContainerElement *)0x0;
    local_348 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnMessageDoubleClicked,(FReadAccessScope *)&local_340);
    if ((*(int *)&(param_1->_OnMessageDoubleClicked).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnMessageDoubleClicked).field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_358);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_340);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnMessageDoubleClicked,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_358);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_358,
               (FWriteAccessScope *)&local_340);
    if ((local_348 != 0) &&
       ((TReferenceControllerBase<1> *)local_350.Data != (TReferenceControllerBase<1> *)0x0)) {
      (*(code *)**(undefined8 **)local_350.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_350,0,0,0x10);
      local_348 = 0;
    }
    if (local_340.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_340.Accessor,&local_340);
    }
    if ((TReferenceControllerBase<1> *)local_350.Data != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(local_350.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_358);
  }
  pTVar1 = &param_1->_Message;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(param_1->_Message).Getter,
             (FReadAccessScope *)&local_340);
  if (((*(int *)&(param_1->_Message).Getter.field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(param_1->_Message).Getter.field_0x8, plVar2 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(*plVar2 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_340);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_340);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(param_1->_Message).Getter
               ,(FReadAccessScope *)&local_340);
    if (*(int *)&(param_1->_Message).Getter.field_0x10 != 0) {
      plVar10 = *(longlong **)&(param_1->_Message).Getter.field_0x8;
    }
    (**(code **)(*plVar10 + 0x60))(plVar10,&local_328);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_340);
    if (pTVar1 != (TAttribute<TSharedPtr<FTokenizedMessage,1>_> *)&local_328) {
      (pTVar1->Value).Object = local_328;
      local_328 = (FTokenizedMessage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->_Message).Value.SharedReferenceCount,&local_320);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_320.ReferenceController);
  }
  pTVar3 = (param_1->_Message).Value.SharedReferenceCount.ReferenceController;
  pFVar4 = (pTVar1->Value).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->Message).SharedReferenceCount.ReferenceController;
  (this->Message).Object = pFVar4;
  (this->Message).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pFVar8 = STableRow<TSharedPtr<FTokenizedMessage,1>_>::FArguments::FArguments(&local_318);
  puVar9 = (undefined8 *)(**(code **)(this->_padding_ + 0xa0))(this,local_358);
  pTVar3 = (TReferenceControllerBase<1> *)puVar9[1];
  pSVar5 = (SWidget *)*puVar9;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (pFVar8->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar8->_Content).Widget.Object = pSVar5;
  (pFVar8->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  STableRow<TSharedPtr<FTokenizedMessage,1>_>::ConstructInternal
            ((STableRow<TSharedPtr<FTokenizedMessage,1>_> *)this,pFVar8,param_2);
  (**(code **)(this->_padding_ + 0x80))
            (this,param_2->Object->TableViewMode,&pFVar8->_Padding,&pFVar8->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_350.Data);
  STableRow<TSharedPtr<FTokenizedMessage,1>_>::FArguments::~FArguments(&local_318);
  return;
}

// CreateHyperlink @ 142bea240

TSharedRef<SWidget,1> * __thiscall
SMessageLogMessageListRow::CreateHyperlink
          (SMessageLogMessageListRow *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<IMessageToken,1> *param_1,FText *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  longlong *plVar3;
  ISlateStyle *pIVar4;
  FTextBlockStyle *pFVar5;
  TSharedRef<SHyperlink,1> *pTVar6;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FDestructionSentinel local_408;
  FText local_3e8;
  bool local_3d8;
  undefined1 local_3d0 [8];
  ForAnyElementType FStack_3c8;
  ulonglong local_3c0;
  FText local_3b8;
  undefined1 local_3a8;
  undefined1 local_3a0 [8];
  ForAnyElementType FStack_398;
  ulonglong local_390;
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> local_388;
  TSharedRef<SHyperlink,1> local_370;
  FArguments local_360;
  
  pFVar2 = SHyperlink::FArguments::FArguments(&local_360);
  plVar3 = (longlong *)(**(code **)(param_1->Object->_padding_ + 0x10))();
  local_3e8.TextData.Reference = (ITextData *)*plVar3;
  if (local_3e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3e8.TextData.Reference + 8))
              (local_3e8.TextData.Reference,local_res18);
  }
  local_3e8.Flags = *(uint *)(plVar3 + 1);
  local_3d8 = true;
  local_3c0 = 0;
  local_3d0 = (undefined1  [8])0x0;
  FStack_3c8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar2->_Text).Value,&local_3e8);
  (pFVar2->_Text).bIsSet = local_3d8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar2->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3d0,
             (FWriteAccessScope *)&local_408);
  if (((int)local_3c0 != 0) && (FStack_3c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3c8,0,0,0x10);
    local_3c0 = local_3c0 & 0xffffffff00000000;
  }
  if (local_408.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_408.Accessor,&local_408);
  }
  if (FStack_3c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3d0);
  if (local_3e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3e8.TextData.Reference + 0x10))();
  }
  local_3b8.TextData.Reference = (param_2->TextData).Reference;
  if (local_3b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3b8.TextData.Reference + 8))
              (local_3b8.TextData.Reference,local_res18);
  }
  local_3b8.Flags = param_2->Flags;
  local_3a8 = 1;
  local_390 = 0;
  local_3a0 = (undefined1  [8])0x0;
  FStack_398.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)pFVar2,&local_3b8);
  *(undefined1 *)&pFVar2->_padding_ = local_3a8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar2->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a0,
             (FWriteAccessScope *)&local_408);
  if (((int)local_390 != 0) && (FStack_398.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_398.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_398,0,0,0x10);
    local_390 = local_390 & 0xffffffff00000000;
  }
  if (local_408.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_408.Accessor,&local_408);
  }
  if (FStack_398.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_398.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3a0);
  if (local_3b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
  }
  ::FName::FName(&local_res20,"MessageLog");
  pIVar4 = FAppStyle::Get();
  pFVar5 = (FTextBlockStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FTextBlockStyle::TypeName,local_res20,0,1)
  ;
  if (pFVar5 == (FTextBlockStyle *)0x0) {
    pFVar5 = FTextBlockStyle::GetDefault();
  }
  pFVar2->_TextStyle = pFVar5;
  local_388._Widget.Object = (SHyperlink *)param_1->Object;
  local_388._Widget.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_388._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_388._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_388._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_408.Accessor = (FMRSWRecursiveAccessDetector *)((ulonglong)local_408.Accessor._4_4_ << 0x20)
  ;
  local_408._0_8_ = HandleHyperlinkNavigate;
  pFVar2 = SHyperlink::FArguments::
           OnNavigate<SMessageLogMessageListRow,TSharedRef<IMessageToken,1>_>
                     (pFVar2,this,(pmf_d6c30f68 *)&local_408,
                      (TSharedRef<IMessageToken,1> *)&local_388);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_388._Widget.Object = (SHyperlink *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_408,(FName *)&local_388,true);
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>
            (&local_388,"SHyperlink",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
             ,0x1a,local_res10);
  FMemScope::~FMemScope((FMemScope *)&local_408);
  FLLMScope::~FLLMScope(local_res18);
  pTVar6 = TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_388,&local_370,pFVar2);
  __return_storage_ptr__->Object = (SWidget *)pTVar6->Object;
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_370.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_388._Widget.SharedReferenceCount.ReferenceController);
  SHyperlink::FArguments::~FArguments(&local_360);
  return __return_storage_ptr__;
}

// CreateMessage @ 142bea960

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142becfbe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMessageLogMessageListRow::CreateMessage
          (SMessageLogMessageListRow *this,TSharedRef<SHorizontalBox,1> *param_1,
          TSharedRef<IMessageToken,1> *param_2,float param_3)

{
  atomic<int> aVar1;
  IMessageToken *pIVar2;
  longlong lVar3;
  SWidget *pSVar4;
  SHorizontalBox *pSVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FRegexPatternImplementation *pFVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  FSharedReferencer<1> FVar14;
  FSharedReferencer<1> FVar15;
  bool bVar16;
  char cVar17;
  bool bVar18;
  undefined4 uVar19;
  int iVar20;
  FArguments *pFVar21;
  TSharedRef<IMessageToken,1> *pTVar22;
  TAttribute<FSlateBrush_const_*> *pTVar23;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SButton,1> *pTVar24;
  FWeakObjectPtr *pFVar25;
  UObject *pUVar26;
  TStringView<wchar_t> *pTVar27;
  FName *pFVar28;
  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode> *pTVar29;
  TBaseRawMethodDelegateInstance<1,SMessageLogMessageListRow_const_,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
  *this_01;
  TAttribute<EVisibility> *pTVar30;
  FArguments *pFVar31;
  TAttribute<FSlateColor> *pTVar32;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar33;
  TSharedRef<STextBlock,1> *pTVar34;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar35;
  FString *pFVar36;
  FRegexPattern *pFVar37;
  <lambda_1> *p<Var38;
  FMargin *pFVar39;
  TAttribute<FMargin> *pTVar40;
  FSlateColor *pFVar41;
  FName FVar42;
  undefined8 *puVar43;
  ulong64 uVar44;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *pTVar45;
  FName FVar46;
  FArguments *pFVar47;
  FText *pFVar48;
  TAttribute<FText> *pTVar49;
  TSharedRef<SWidget,1> *pTVar50;
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> *pTVar51;
  TSharedRef<SHyperlink,1> *pTVar52;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar53;
  FSlot *pFVar54;
  FSlotArguments *pFVar55;
  FArguments *pFVar56;
  FArguments *pFVar57;
  ISlateStyle *pIVar58;
  TSharedRef<SImage,1> *pTVar59;
  TSharedRef<SHorizontalBox,1> *pTVar60;
  wchar_t *pwVar61;
  atomic<int> *paVar62;
  undefined ***pppuVar63;
  FSlotArguments *pFVar64;
  int iVar65;
  SMessageLogMessageListRow *pSVar66;
  TReferenceControllerBase<1> *pTVar67;
  atomic<int> *paVar68;
  undefined1 auStackY_4828 [32];
  FStaticCastTag local_47f8;
  FStaticCastTag local_47f7;
  char local_47f6;
  FStaticCastTag local_47f5 [5];
  TSharedPtr<SWidget,1> local_47f0;
  T0RequiredArgs local_47e0;
  T0RequiredArgs local_47df;
  T0RequiredArgs local_47de;
  T0RequiredArgs local_47dd;
  T0RequiredArgs local_47dc;
  T0RequiredArgs local_47db;
  T0RequiredArgs local_47da;
  T0RequiredArgs local_47d9;
  T0RequiredArgs local_47d8;
  T0RequiredArgs local_47d7;
  T0RequiredArgs local_47d6;
  T0RequiredArgs local_47d5 [5];
  TSharedRef<SHorizontalBox,1> *local_47d0;
  FName local_47c8;
  TReferenceControllerBase<1> *local_47c0;
  FName local_47b8;
  FName local_47b0;
  FName local_47a8;
  undefined1 local_47a0 [8];
  undefined1 local_4798 [8];
  ForAnyElementType FStack_4790;
  ulonglong local_4788;
  FLLMScope local_4780;
  FLLMScope local_477c;
  undefined1 local_4778 [8];
  FDelegateAllocation local_4770;
  SMessageLogMessageListRow *local_4760;
  FSlot *local_4758;
  undefined4 uStack_4750;
  uint uStack_474c;
  SHorizontalBox *local_4748;
  FSharedReferencer<1> local_4740;
  FName local_4738;
  FArguments *local_4730;
  FName local_4728 [2];
  code *local_4718;
  FSharedReferencer<1> FStack_4710;
  FString local_4708;
  code *local_46f8;
  FSharedReferencer<1> FStack_46f0;
  SImage *local_46e8;
  FSharedReferencer<1> local_46e0;
  TSharedRef<SWidget,1> local_46d8;
  SHyperlink *local_46c8;
  FSharedReferencer<1> local_46c0;
  TEnumAsByte<EVisibility::Private> local_46b8;
  undefined1 local_46b7;
  undefined1 local_46b0 [8];
  void *pvStack_46a8;
  undefined4 local_46a0;
  FRegexPattern local_4698;
  TSharedRef<FFixToken,1> local_4688;
  TSharedRef<FActionToken,1> local_4678;
  uchar local_4668;
  undefined1 local_4667;
  undefined1 local_4660 [8];
  void *pvStack_4658;
  undefined8 local_4650;
  FRegexMatcher local_4648;
  uchar local_4628;
  undefined1 local_4627;
  undefined1 local_4620 [24];
  FSlotArguments *local_4608;
  FName local_4600;
  FName local_45f8;
  FMemScope local_45f0;
  FName local_45e8;
  FMemScope local_45e0;
  undefined4 local_45d8 [2];
  undefined8 local_45d0;
  FSharedReferencer<1> local_45c8;
  undefined8 local_45c0;
  FSharedReferencer<1> local_45b8;
  undefined8 local_45b0;
  FSharedReferencer<1> local_45a8;
  undefined4 local_45a0 [2];
  undefined8 local_4598;
  FSharedReferencer<1> local_4590;
  undefined4 local_4588 [2];
  undefined4 local_4580 [2];
  FSlateBrush *local_4578;
  FName local_4570;
  TReferenceControllerBase<1> *local_4568;
  FName local_4560;
  FSlotArguments *local_4558;
  undefined8 local_4550;
  undefined8 uStack_4548;
  undefined4 local_4540;
  TSharedPtr<SWidget,1> local_4538;
  TSharedRef<SWidget,1> local_4528;
  TSharedPtr<SWidget,1> local_4518;
  FString local_4508;
  TSharedPtr<SWidget,1> local_44f8;
  TSharedRef<FAssetNameToken,1> local_44e8;
  TSharedPtr<SWidget,1> local_44d8;
  TSharedRef<FDynamicTextToken,1> local_44c8;
  TSharedPtr<SWidget,1> local_44b8;
  FString local_44a8;
  FString local_4498;
  TSharedRef<SWidget,1> local_4488;
  FString local_4478;
  TSharedPtr<SWidget,1> local_4468;
  TSharedRef<SWidget,1> local_4458;
  TSharedPtr<SWidget,1> local_4448;
  TSharedRef<SWidget,1> local_4438;
  TSharedRef<FTextToken,1> local_4428;
  TStringView<wchar_t> local_4418;
  NamedSlotProperty<SButton::FArguments> local_4408;
  SImage *local_43f8;
  TReferenceControllerBase<1> *local_43f0;
  TSharedRef<SWidget,1> local_43e8;
  TSharedRef<SWidget,1> local_43d8;
  TSharedRef<FActorToken,1> local_43c8;
  TSharedPtr<SWidget,1> local_43b8;
  SWidget *local_43a8;
  TReferenceControllerBase<1> *local_43a0;
  TAttribute<FSlateBrush_const_*> local_4398;
  FDestructionSentinel local_4370;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> local_4358;
  FDestructionSentinel local_4340;
  FLinearColor_u_0 local_4328;
  undefined4 local_4318;
  undefined1 local_4314;
  undefined8 local_4310;
  undefined8 uStack_4308;
  undefined8 local_4300;
  FLinearColor_u_0 local_42f8;
  undefined4 local_42e8;
  undefined1 local_42e4;
  undefined8 local_42e0;
  undefined8 uStack_42d8;
  undefined8 local_42d0;
  FDestructionSentinel local_42c8;
  longlong *local_42b0;
  FDestructionSentinel local_42a8;
  FDelegateAllocation *local_4290;
  FDestructionSentinel local_4288;
  FDelegateAllocation *local_4270;
  FDestructionSentinel local_4268;
  FDelegateAllocation *local_4250;
  TSharedRef<SWidget,1> local_4248;
  FText local_4238;
  TSharedRef<SWidget,1> local_4228;
  TSharedRef<FActionToken,1> local_4218;
  code *local_4208;
  longlong lStack_4200;
  TSharedRef<SHyperlink,1> local_41f8;
  FSlot *local_41e8 [2];
  TSharedRef<SWidget,1> local_41d8;
  TSharedRef<STextBlock,1> local_41c8;
  TSharedRef<SWidget,1> local_41b8;
  FRegexPattern local_41a8;
  FString local_4198;
  FString local_4188;
  TSharedRef<SHyperlink,1> local_4178;
  FText local_4168;
  FString local_4158;
  TSharedRef<SHorizontalBox,1> local_4148;
  TSharedRef<STextBlock,1> local_4138;
  FText local_4128;
  TSharedRef<SHorizontalBox,1> local_4118;
  TSharedRef<STextBlock,1> local_4108;
  FText local_40f8;
  TSharedRef<SWidget,1> local_40e8;
  TSharedRef<SHorizontalBox,1> local_40d8;
  TSharedRef<SHyperlink,1> local_40c8;
  TSharedRef<SWidget,1> local_40b8;
  TSharedRef<SImage,1> local_40a8;
  TSharedRef<SHorizontalBox,1> local_4098;
  TSharedRef<SImage,1> local_4088;
  FName local_4078;
  FName local_4070;
  FName local_4068;
  FName local_4060;
  FName local_4058;
  FName local_4050;
  FReadAccessScope local_4048;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_4030;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_4018;
  code *local_3ff8;
  TReferenceControllerBase<1> *pTStack_3ff0;
  TSharedRef<SButton,1> local_3fe8;
  TSharedRef<SImage,1> local_3fd8;
  TSharedRef<SImage,1> local_3fc8;
  TSharedRef<SWidget,1> local_3fb8;
  FText local_3fa8;
  FText local_3f98;
  TStringView<wchar_t> local_3f88;
  TStringView<wchar_t> local_3f78;
  TSharedRef<SWidget,1> local_3f68;
  FText local_3f58;
  FText local_3f48;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3f38;
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> local_3f20;
  undefined1 local_3f08 [24];
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3ef0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3ed8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3ec0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3ea8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3e90;
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> local_3e78;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3e60;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3e48;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3e30;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_3e18;
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> local_3e00;
  undefined **local_3de8;
  undefined8 *local_3de0 [2];
  TReferenceControllerBase<1> *local_3dd0;
  undefined1 local_3db0 [40];
  FSlotArgumentsMixin local_3d88;
  TPanelChildren<SBoxPanel::FSlot> *local_3cf8;
  int local_3cf0;
  TSharedRef<IMessageToken,1> local_3ce8;
  FMargin local_3cd8;
  FMargin local_3cc8;
  TStringView<wchar_t> local_3cb8;
  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode> local_3ca8;
  TAttribute<EVisibility> local_3c88;
  FSlateColor local_3c68;
  FSlateColor local_3c54;
  FSlateColor local_3c40;
  FSlateColor local_3c2c;
  undefined8 *local_3c18 [2];
  TReferenceControllerBase<1> *local_3c08;
  undefined1 local_3be8 [40];
  FSlotArgumentsMixin local_3bc0;
  undefined8 *local_3b30 [2];
  TReferenceControllerBase<1> *local_3b20;
  undefined1 local_3b00 [40];
  FSlotArgumentsMixin local_3ad8;
  TAttribute<FSlateBrush_const_*> local_3a48;
  TAttribute<FSlateBrush_const_*> local_3a20;
  TAttribute<FText> local_39f8;
  TAttribute<FSlateColor> local_39c8;
  TAttribute<FText> local_3998;
  TAttribute<FText> local_3968;
  TAttribute<FMargin> local_3938;
  TAttribute<FText> local_3908;
  TAttribute<FSlateColor> local_38d8;
  TAttribute<FMargin> local_38a8;
  TAttribute<FText> local_3878;
  TAttribute<FSlateColor> local_3848;
  TAttribute<FText> local_3818;
  TAttribute<FText> local_37e8;
  FArguments local_37b8;
  FSlotArguments local_35b0;
  FSlotArguments local_34c8;
  FSlotArguments local_33e0;
  FSlotArguments local_32f8;
  FSlotArguments local_3210;
  FSlotArguments local_3128;
  FArguments local_3040;
  FArguments local_2e38;
  FArguments local_2c30;
  FArguments local_2a28;
  FArguments local_2780;
  FArguments local_24d8;
  FArguments local_2230;
  FArguments local_1f88;
  FArguments local_1c68;
  FArguments local_1948;
  FArguments local_1628;
  FArguments local_10e8;
  FArguments local_b90;
  FArguments local_638;
  code *local_d8;
  undefined **local_c8;
  FFixToken *local_c0;
  TReferenceControllerBase<1> *local_b8;
  undefined ***local_b0;
  code *local_a8;
  undefined **local_98;
  FFixToken *local_90;
  TReferenceControllerBase<1> *local_88;
  undefined ***local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_4828;
  bVar16 = false;
  local_47c0 = (TReferenceControllerBase<1> *)((ulonglong)local_47c0 & 0xffffffff00000000);
  local_47a0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_47a0[1] = false;
  local_4798 = (undefined1  [8])0x0;
  FStack_4790.Data = (FScriptContainerElement *)0x0;
  local_4788 = 0;
  local_47f0.Object = (SWidget *)0x0;
  local_47f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_47c8.ComparisonIndex.Value = 0;
  local_47c8.Number = 0;
  local_47d0 = param_1;
  local_4760 = this;
  uVar19 = (**(code **)(param_2->Object->_padding_ + 8))();
  fVar13 = __real_40000000;
  bVar11 = true;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  switch(uVar19) {
  case 0:
    pTVar67 = (param_2->SharedReferenceCount).ReferenceController;
    local_4738 = (FName)param_2->Object;
    if (pTVar67 == (TReferenceControllerBase<1> *)0x0) {
      paVar68 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar68 = &pTVar67->SharedReferenceCount;
      LOCK();
      *paVar68 = (atomic<int>)((int)*paVar68 + 1);
      UNLOCK();
    }
    local_4678.Object = (FActionToken *)local_4738;
    local_4678.SharedReferenceCount.ReferenceController = pTVar67;
    pFVar28 = ::FName::FName(&local_4058,"MessageLog.Action");
    FVar42 = *pFVar28;
    pFVar47 = SHyperlink::FArguments::FArguments(&local_1f88);
    pFVar48 = (FText *)(**(code **)(param_2->Object->_padding_ + 0x10))();
    pTVar49 = TAttribute<FText>::TAttribute<FText><FText>(&local_37e8,pFVar48);
    pFVar47 = SHyperlink::FArguments::Text(pFVar47,pTVar49);
    FVar46 = local_4738;
    pTVar49 = TAttribute<FText>::TAttribute<FText><FText>
                        (&local_39f8,(FText *)((longlong)local_4738 + 0x70));
    pFVar47 = TSlateBaseNamedArgs<SHyperlink>::ToolTipText
                        ((TSlateBaseNamedArgs<SHyperlink> *)pFVar47,pTVar49);
    ::FName::FName(&local_4570,"MessageLog");
    pIVar58 = FAppStyle::Get();
    pFVar47 = SHyperlink::FArguments::TextStyle(pFVar47,pIVar58,&local_4570,(char *)0x0);
    if (pTVar67 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar68 = (atomic<int>)((int)*paVar68 + 1);
      UNLOCK();
    }
    *(undefined1 *)((longlong)&pFVar47->_padding_ + 1) = 1;
    FStack_4710.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)(uint)local_4418._12_4_ << 0x20);
    local_4718 = GetActionLinkEnable;
    local_4730 = pFVar47;
    local_4568 = pTVar67;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar47->_padding_,
               (FWriteAccessScope *)&local_42c8);
    local_42b0 = &pFVar47->_padding_;
    puVar43 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_42b0);
    pSVar66 = local_4760;
    if (puVar43 != (undefined8 *)0x0) {
      *puVar43 = &
                 ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__V__TSharedRef_VFActionToken___00____6B_
      ;
      *(FName *)(puVar43 + 1) = FVar46;
      puVar43[2] = pTVar67;
      if (pTVar67 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar68 = (atomic<int>)((int)*paVar68 + 1);
        UNLOCK();
      }
      uVar44 = FDelegateHandle::GenerateNewID();
      pSVar66 = local_4760;
      puVar43[3] = uVar44;
      *puVar43 = &
                 ___7__TBaseRawMethodDelegateInstance__00__CBVSMessageLogMessageListRow____A6A_NXZUFDefaultDelegateUserPolicy__V__TSharedRef_VFActionToken___00____6B_
      ;
      puVar43[4] = local_4760;
      puVar43[5] = local_4718;
      puVar43[6] = FStack_4710.ReferenceController;
      if (((local_4760 == (SMessageLogMessageListRow *)0x0) || (puVar43[5] == 0)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InUserObject != nullptr && MethodPtr != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                              ,0x1d8,L""), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (local_42c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_42c8.Accessor,&local_42c8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4568);
    local_4218.Object = local_4678.Object;
    local_4218.SharedReferenceCount.ReferenceController =
         local_4678.SharedReferenceCount.ReferenceController;
    if (pTVar67 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar67->SharedReferenceCount = (atomic<int>)((int)pTVar67->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_4758 = (FSlot *)HandleActionHyperlinkNavigate;
    uStack_4750 = 0;
    lStack_4200 = (ulonglong)uStack_474c << 0x20;
    local_4208 = HandleActionHyperlinkNavigate;
    pFVar47 = SHyperlink::FArguments::
              OnNavigate<SMessageLogMessageListRow,TSharedRef<FActionToken,1>_>
                        (local_4730,pSVar66,(pmf_5df2fc06 *)&local_4208,&local_4218);
    pTVar51 = MakeTDecl<SHyperlink,RequiredArgs::T0RequiredArgs>
                        (&local_3e00,"SHyperlink",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                         ,0x110,(T0RequiredArgs *)&local_47f7);
    pTVar52 = TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar51,&local_41f8,pFVar47);
    local_4590.ReferenceController = (pTVar52->SharedReferenceCount).ReferenceController;
    local_47f0.Object = (SWidget *)pTVar52->Object;
    if (local_4590.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4590.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_4590.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_4598 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_47f0.SharedReferenceCount,&local_4590);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4590.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_41f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3e00._Widget.SharedReferenceCount.ReferenceController);
    SHyperlink::FArguments::~FArguments(&local_1f88);
    uStack_4750 = 0;
    local_4758 = (FSlot *)GetActionLinkVisibility;
    uStack_474c = local_4418._12_4_;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>(&local_4358);
    pTVar29 = TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>::
              TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>
                        (&local_3ca8,(TDelegateBase<FNotThreadSafeDelegateMode> *)&local_4358);
    this_01 = UE::Core::Private::DelegateAllocate(0x38,pTVar29->Allocation);
    if (this_01 !=
        (TBaseRawMethodDelegateInstance<1,SMessageLogMessageListRow_const_,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
         *)0x0) {
      local_41e8[1]._4_4_ = uStack_474c;
      local_41e8[1]._0_4_ = uStack_4750;
      local_41e8[0] = local_4758;
      TBaseRawMethodDelegateInstance<1,SMessageLogMessageListRow_const_,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_>
      ::
      TBaseRawMethodDelegateInstance<1,SMessageLogMessageListRow_const_,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<FActionToken,1>_><TSharedRef<FActionToken,1>_const_&>
                (this_01,pSVar66,(pmf_c1824939 *)local_41e8,&local_4678);
    }
    TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>::
    ~TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>(&local_3ca8);
    pTVar30 = TAttribute<EVisibility>::Create(&local_3c88,&local_4358);
    TAttribute<EVisibility>::operator=((TAttribute<EVisibility> *)local_47a0,pTVar30);
    TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_3c88);
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    ~TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>(&local_4358);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar67);
    param_1 = local_47d0;
    goto LAB_142bec802;
  case 1:
    TSharedRef<FActorToken,1>::TSharedRef<FActorToken,1><IMessageToken>
              (&local_43c8,param_2,local_47f8);
    pFVar28 = ::FName::FName(&local_45e8,"Icons.Search");
    FVar42 = *pFVar28;
    pFVar48 = (FText *)(**(code **)((local_43c8.Object)->_padding_ + 0x10))();
    pTVar50 = CreateHyperlink(this,&local_40e8,param_2,pFVar48);
    TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SWidget>(&local_43b8,pTVar50);
    TSharedPtr<SWidget,1>::operator=(&local_47f0,&local_43b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_43b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_43c8.SharedReferenceCount.ReferenceController);
    goto LAB_142bec802;
  case 2:
    TSharedRef<FAssetNameToken,1>::TSharedRef<FAssetNameToken,1><IMessageToken>
              (&local_44e8,param_2,local_47f7);
    pFVar28 = ::FName::FName(&local_4050,"Icons.Search");
    FVar42 = *pFVar28;
    pFVar48 = (FText *)(**(code **)((local_44e8.Object)->_padding_ + 0x10))();
    pTVar50 = CreateHyperlink(this,&local_41d8,param_2,pFVar48);
    TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SWidget>(&local_44f8,pTVar50);
    TSharedPtr<SWidget,1>::operator=(&local_47f0,&local_44f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_44f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_41d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_44e8.SharedReferenceCount.ReferenceController);
    goto LAB_142bec802;
  case 3:
    pTVar67 = (param_2->SharedReferenceCount).ReferenceController;
    pIVar2 = param_2->Object;
    if (pTVar67 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar67->SharedReferenceCount = (atomic<int>)((int)pTVar67->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar28 = ::FName::FName(&local_4078,"Icons.Search");
    FVar42 = *pFVar28;
    bVar16 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                       ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                        &FAssetDataToken::DefaultGetAssetDisplayName);
    if (!bVar16) {
      pFVar48 = (FText *)(**(code **)(param_2->Object->_padding_ + 0x10))();
      pFVar48 = FText::FText(&local_3fa8,pFVar48);
    }
    else {
      pFVar48 = TDelegate<FText___cdecl(FAssetData_const_&,bool),FDefaultDelegateUserPolicy>::
                Execute(&FAssetDataToken::DefaultGetAssetDisplayName,&local_3f98,
                        (FAssetData *)(pIVar2 + 1),true);
    }
    pTVar50 = CreateHyperlink(this,&local_3fb8,param_2,pFVar48);
    local_45c8.ReferenceController = (pTVar50->SharedReferenceCount).ReferenceController;
    local_47f0.Object = pTVar50->Object;
    if (local_45c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_45c8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_45c8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_45d0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_47f0.SharedReferenceCount,&local_45c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_45c8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3fb8.SharedReferenceCount.ReferenceController);
    if (!bVar16) {
      FText::~FText(&local_3fa8);
    }
    else {
      pFVar48 = &local_3f98;
LAB_142beae58:
      FText::~FText(pFVar48);
    }
    goto LAB_142beae5d;
  case 5:
    pTVar67 = (param_2->SharedReferenceCount).ReferenceController;
    pIVar2 = param_2->Object;
    if (pTVar67 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar67->SharedReferenceCount = (atomic<int>)((int)pTVar67->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pIVar2[1]._padding_ != 0) {
      pTVar35 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                (**(code **)(param_2->Object->_padding_ + 0x18))();
      bVar16 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound(pTVar35);
      if (bVar16) {
        pFVar21 = SButton::FArguments::FArguments(&local_1628);
        pTVar22 = TSharedRef<IMessageToken,1>::TSharedRef<IMessageToken,1>(&local_3ce8,param_2);
        local_46f8 = HandleTokenButtonClicked;
        FStack_46f0.ReferenceController =
             (TReferenceControllerBase<1> *)
             ((ulonglong)FStack_46f0.ReferenceController._4_4_ << 0x20);
        local_3ff8 = HandleTokenButtonClicked;
        pTStack_3ff0 = FStack_46f0.ReferenceController;
        local_4408.OwnerDeclaration =
             SButton::FArguments::OnClicked<SMessageLogMessageListRow,TSharedRef<IMessageToken,1>_>
                       (pFVar21,this,(pmf_d702ca20 *)&local_3ff8,pTVar22);
        local_4408.SlotContent = &(local_4408.OwnerDeclaration)->_Content;
        pFVar57 = SImage::FArguments::FArguments(&local_2a28);
        pIVar58 = FAppStyle::Get();
        local_4760 = (SMessageLogMessageListRow *)
                     (**(code **)((longlong)*pIVar58 + 0x50))(pIVar58,pIVar2[1]._padding_,0,0);
        pTVar23 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                            (&local_3a48,(FSlateBrush **)&local_4760);
        pFVar57 = SImage::FArguments::Image(pFVar57,pTVar23);
        pTVar45 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                            (&local_3e30,"SImage",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                             ,0xc5,&local_47e0);
        pTVar59 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar45,&local_3fd8,pFVar57);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_4528,pTVar59);
        pFVar21 = NamedSlotProperty<SButton::FArguments>::operator[](&local_4408,&local_4528);
        this_00 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                            (&local_3e48,"SButton",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                             ,0xc1,&local_47df);
        pTVar24 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                            (this_00,&local_3fe8,pFVar21);
        TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SButton>(&local_4538,pTVar24);
        TSharedPtr<SWidget,1>::operator=(&local_47f0,&local_4538);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4538.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3fe8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3e48._Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4528.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3fd8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3e30._Widget.SharedReferenceCount.ReferenceController);
        SImage::FArguments::~FArguments(&local_2a28);
        SButton::FArguments::~FArguments(&local_1628);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar67)
        ;
        param_1 = local_47d0;
        break;
      }
      pFVar57 = SImage::FArguments::FArguments(&local_2780);
      pIVar58 = FAppStyle::Get();
      local_4578 = (FSlateBrush *)
                   (**(code **)((longlong)*pIVar58 + 0x50))(pIVar58,pIVar2[1]._padding_,0,0);
      pTVar23 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                          (&local_3a20,&local_4578);
      pFVar57 = SImage::FArguments::Image(pFVar57,pTVar23);
      pTVar45 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                          (&local_3e18,"SImage",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                           ,0xcb,&local_47de);
      pTVar59 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar45,&local_3fc8,pFVar57);
      TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SImage>(&local_4518,pTVar59);
      TSharedPtr<SWidget,1>::operator=(&local_47f0,&local_4518);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4518.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3fc8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3e18._Widget.SharedReferenceCount.ReferenceController);
      SImage::FArguments::~FArguments(&local_2780);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar67);
    param_1 = local_47d0;
    break;
  case 6:
    pTVar67 = (param_2->SharedReferenceCount).ReferenceController;
    pIVar2 = param_2->Object;
    if (pTVar67 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar67->SharedReferenceCount = (atomic<int>)((int)pTVar67->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_47c0 = pTVar67;
    pFVar28 = ::FName::FName(&local_4070,"Icons.Search");
    FVar42 = *pFVar28;
    pFVar25 = (FWeakObjectPtr *)(**(code **)(pIVar2->_padding_ + 0x28))(pIVar2);
    bVar16 = FWeakObjectPtr::IsValid(pFVar25);
    if (bVar16) {
      pFVar48 = (FText *)(**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      pFVar36 = FText::ToString(pFVar48);
      pFVar25 = (FWeakObjectPtr *)(**(code **)(pIVar2->_padding_ + 0x28))(pIVar2);
      pUVar26 = FWeakObjectPtr::Get(pFVar25);
      local_4738.ComparisonIndex.Value = *(uint *)&pUVar26->field_0x18;
      local_4738.Number = *(uint *)&pUVar26->field_0x1c;
      ::FName::ToString(&local_4738,&local_4508);
      bVar16 = ::FString::Equals(pFVar36,&local_4508,CaseSensitive);
      ::FString::~FString(&local_4508);
      if (bVar16) {
        pFVar25 = (FWeakObjectPtr *)(**(code **)(pIVar2->_padding_ + 0x28))(pIVar2);
        pUVar26 = FWeakObjectPtr::Get(pFVar25);
        pTVar67 = local_47c0;
      }
      else {
        if ((int)pIVar2[1]._padding_ == 0) {
          pwVar61 = L"";
        }
        else {
          pwVar61 = (wchar_t *)pIVar2[1]._padding_;
        }
        pTVar27 = TStringView<wchar_t>::TStringView<wchar_t>(&local_3cb8,pwVar61);
        local_3f88.DataPtr = pTVar27->DataPtr;
        local_3f88.Size = pTVar27->Size;
        local_3f88._12_4_ = *(undefined4 *)&pTVar27->field_0xc;
        pUVar26 = FindObject<UObject>((UObject *)0x0,&local_3f88,None);
        pTVar67 = local_47c0;
      }
    }
    else {
      if ((int)pIVar2[1]._padding_ == 0) {
        pwVar61 = L"";
      }
      else {
        pwVar61 = (wchar_t *)pIVar2[1]._padding_;
      }
      pTVar27 = TStringView<wchar_t>::TStringView<wchar_t>(&local_4418,pwVar61);
      local_3f78.DataPtr = pTVar27->DataPtr;
      local_3f78.Size = pTVar27->Size;
      local_3f78._12_4_ = *(undefined4 *)&pTVar27->field_0xc;
      pUVar26 = FindObject<UObject>((UObject *)0x0,&local_3f78,None);
    }
    bVar16 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                       ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                        &FUObjectToken::DefaultGetObjectDisplayName);
    if (!bVar16) {
      pFVar48 = (FText *)(**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      pFVar48 = FText::FText(&local_3f58,pFVar48);
    }
    else {
      pFVar48 = TDelegate<FText___cdecl(UObject_const_*,bool),FDefaultDelegateUserPolicy>::Execute
                          (&FUObjectToken::DefaultGetObjectDisplayName,&local_3f48,pUVar26,true);
    }
    pTVar50 = CreateHyperlink(this,&local_3f68,param_2,pFVar48);
    local_45b8.ReferenceController = (pTVar50->SharedReferenceCount).ReferenceController;
    local_47f0.Object = pTVar50->Object;
    if (local_45b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_45b8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_45b8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_45c0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_47f0.SharedReferenceCount,&local_45b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_45b8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3f68.SharedReferenceCount.ReferenceController);
    if (bVar16) {
      pFVar48 = &local_3f48;
      goto LAB_142beae58;
    }
    FText::~FText(&local_3f58);
    goto LAB_142beae5d;
  case 8:
    pTVar35 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
              (**(code **)(param_2->Object->_padding_ + 0x18))();
    bVar16 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound(pTVar35);
    lVar3 = param_2->Object->_padding_;
    if (bVar16) {
      pFVar48 = (FText *)(**(code **)(lVar3 + 0x10))();
      pTVar50 = CreateHyperlink(this,&local_41b8,param_2,pFVar48);
      TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SWidget>(&local_44b8,pTVar50);
      TSharedPtr<SWidget,1>::operator=(&local_47f0,&local_44b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_44b8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_41b8.SharedReferenceCount.ReferenceController);
    }
    else {
      pFVar48 = (FText *)(**(code **)(lVar3 + 0x10))();
      pFVar36 = FText::ToString(pFVar48);
      ::FString::FString(&local_4708,pFVar36);
      TSharedRef<FTextToken,1>::TSharedRef<FTextToken,1><IMessageToken>
                (&local_4428,param_2,local_47f5[0]);
      ::FString::FString(&local_44a8,
                         L"^((?:[\\w]\\:|\\\\)(?:(?:\\\\[A-Za-z_\\-\\s0-9\\.]+)+)\\.(?:cpp|h))\\((\\d+)\\)"
                        );
      FRegexPattern::FRegexPattern(&local_4698,&local_44a8,None);
      ::FString::~FString(&local_44a8);
      if ((local_4428.Object)->bIsSourceLinkOnLeft == false) {
        ::FString::FString(&local_4498,
                           L"((?:[\\w]\\:|\\\\)(?:(?:\\\\[A-Za-z_\\-\\s0-9\\.]+)+)\\.(?:cpp|h))\\((\\d+)\\)$"
                          );
        pFVar37 = FRegexPattern::FRegexPattern(&local_41a8,&local_4498,None);
        pFVar10 = (pFVar37->Implementation).Object;
        pTVar67 = (pFVar37->Implementation).SharedReferenceCount.ReferenceController;
        (pFVar37->Implementation).Object = local_4698.Implementation.Object;
        (pFVar37->Implementation).SharedReferenceCount.ReferenceController =
             local_4698.Implementation.SharedReferenceCount.ReferenceController;
        local_4698.Implementation.Object = pFVar10;
        local_4698.Implementation.SharedReferenceCount.ReferenceController = pTVar67;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_41a8.Implementation.SharedReferenceCount.ReferenceController);
        ::FString::~FString(&local_4498);
      }
      FRegexMatcher::FRegexMatcher(&local_4648,&local_4698,&local_4708);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1>(&local_46d8,&SNullWidget::NullWidget);
      bVar16 = FRegexMatcher::FindNext(&local_4648);
      if (bVar16) {
        FRegexMatcher::GetCaptureGroup(&local_4648,&local_4478,1);
        pFVar36 = FRegexMatcher::GetCaptureGroup(&local_4648,&local_4198,2);
        if ((pFVar36->Data).ArrayNum == 0) {
          pwVar61 = L"";
        }
        else {
          pwVar61 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
        }
        iVar20 = _wtoi(pwVar61);
        local_47c0 = (TReferenceControllerBase<1> *)CONCAT44(local_47c0._4_4_,iVar20);
        ::FString::~FString(&local_4198);
        if ((local_4428.Object)->bIsSourceLinkOnLeft == false) {
          pFVar36 = FRegexMatcher::GetCaptureGroup(&local_4648,&local_4188,0);
          iVar20 = (pFVar36->Data).ArrayNum;
          iVar65 = iVar20 + -1;
          if (iVar20 == 0) {
            iVar65 = 0;
          }
          ::FString::LeftChopInline(&local_4708,iVar65,No);
          ::FString::~FString(&local_4188);
        }
        else {
          iVar20 = FRegexMatcher::GetMatchEnding(&local_4648);
          ::FString::RemoveAt(&local_4708,0,iVar20,No);
        }
        pFVar47 = SHyperlink::FArguments::FArguments(&local_1c68);
        ::FName::FName(local_4728,"Common.GotoNativeCodeHyperlink");
        pIVar58 = FAppStyle::Get();
        pFVar47 = SHyperlink::FArguments::Style(pFVar47,pIVar58,local_4728,(char *)0x0);
        ::FName::FName(&local_47b8,"MessageLog");
        pIVar58 = FAppStyle::Get();
        pFVar47 = SHyperlink::FArguments::TextStyle(pFVar47,pIVar58,&local_47b8,(char *)0x0);
        p<Var38 = `SMessageLogMessageListRow::CreateMessage'::__l42::<lambda_1>::<lambda_1>
                            (local_3f08,&local_4478,(int *)&local_47c0);
        pFVar47 = SHyperlink::FArguments::
                  OnNavigate_Lambda<_SMessageLogMessageListRow::CreateMessage_::__l42::<lambda_1>_>
                            (pFVar47,p<Var38);
        pFVar36 = FRegexMatcher::GetCaptureGroup(&local_4648,&local_4158,0);
        pFVar48 = FText::FromString(&local_4168,pFVar36);
        pTVar49 = TAttribute<FText>::TAttribute<FText>(&local_3968,pFVar48);
        pFVar47 = SHyperlink::FArguments::Text(pFVar47,pTVar49);
        pTVar51 = MakeTDecl<SHyperlink,RequiredArgs::T0RequiredArgs>
                            (&local_3f20,"SHyperlink",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                             ,0x153,&local_47dd);
        pTVar52 = TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar51,&local_4178,pFVar47);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHyperlink>(&local_4488,pTVar52);
        FVar15.ReferenceController = local_4488.SharedReferenceCount.ReferenceController;
        pSVar4 = local_4488.Object;
        FVar14.ReferenceController = local_46d8.SharedReferenceCount.ReferenceController;
        local_4488.Object = local_46d8.Object;
        local_4488.SharedReferenceCount.ReferenceController =
             local_46d8.SharedReferenceCount.ReferenceController;
        local_46d8.Object = pSVar4;
        local_46d8.SharedReferenceCount.ReferenceController = FVar15.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar14.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4178.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3f20._Widget.SharedReferenceCount.ReferenceController);
        FText::~FText(&local_4168);
        ::FString::~FString(&local_4158);
        `SMessageLogMessageListRow::CreateMessage'::__l42::<lambda_1>::~<lambda_1>(local_3f08);
        SHyperlink::FArguments::~FArguments(&local_1c68);
        ::FString::~FString(&local_4478);
      }
      if ((local_4428.Object)->bIsSourceLinkOnLeft == false) {
        pFVar56 = SHorizontalBox::FArguments::FArguments(&local_2e38);
        pFVar55 = SHorizontalBox::Slot(&local_32f8);
        pFVar55 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar55);
        pFVar39 = FMargin::FMargin(&local_3cc8,0.0,__real_40800000);
        pTVar40 = TAttribute<FMargin>::TAttribute<FMargin>(&local_38a8,pFVar39);
        pFVar55 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                            ((FSlotArgumentsMixin *)&pFVar55->field_0x18,pTVar40);
        pFVar31 = STextBlock::FArguments::FArguments(&local_638);
        pFVar48 = FText::FromString(&local_40f8,&local_4708);
        pTVar49 = TAttribute<FText>::TAttribute<FText>(&local_3878,pFVar48);
        pFVar31 = STextBlock::FArguments::Text(pFVar31,pTVar49);
        pFVar41 = FSlateColor::UseForeground(&local_3c2c);
        pTVar32 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(&local_3848,pFVar41);
        pFVar31 = STextBlock::FArguments::ColorAndOpacity(pFVar31,pTVar32);
        ::FName::FName(&local_47a8,"MessageLog");
        pIVar58 = FAppStyle::Get();
        pFVar31 = STextBlock::FArguments::TextStyle(pFVar31,pIVar58,&local_47a8,(char *)0x0);
        pTVar33 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                            (&local_3ea8,"STextBlock",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                             ,0x174,&local_47da);
        pTVar34 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar33,&local_4108,pFVar31);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_4438,pTVar34);
        pFVar55 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                            ((FSlotArguments *)pFVar55,&local_4438);
        pFVar56 = SHorizontalBox::FArguments::operator+(pFVar56,pFVar55);
        pFVar55 = SHorizontalBox::Slot(&local_33e0);
        pFVar55 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar55);
        pFVar55 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                            ((FSlotArgumentsMixin *)&pFVar55->field_0x18,0.0);
        pFVar55 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                            ((FSlotArguments *)pFVar55,&local_46d8);
        pFVar56 = SHorizontalBox::FArguments::operator+(pFVar56,pFVar55);
        pTVar53 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                            (&local_3ec0,"SHorizontalBox",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                             ,0x16f,(T0RequiredArgs *)&local_47f8);
        pTVar60 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar53,&local_4118,pFVar56);
        TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SHorizontalBox>(&local_4448,pTVar60);
        TSharedPtr<SWidget,1>::operator=(&local_47f0,&local_4448);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4448.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4118.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3ec0._Widget.SharedReferenceCount.ReferenceController);
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_33e0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4438.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4108.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3ea8._Widget.SharedReferenceCount.ReferenceController);
        FText::~FText(&local_40f8);
        STextBlock::FArguments::~FArguments(&local_638);
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_32f8);
        pFVar56 = &local_2e38;
      }
      else {
        pFVar56 = SHorizontalBox::FArguments::FArguments(&local_3040);
        pFVar55 = SHorizontalBox::Slot(&local_34c8);
        pFVar55 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar55);
        pFVar55 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                            ((FSlotArgumentsMixin *)&pFVar55->field_0x18,0.0);
        pFVar55 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                            ((FSlotArguments *)pFVar55,&local_46d8);
        pFVar56 = SHorizontalBox::FArguments::operator+(pFVar56,pFVar55);
        pFVar55 = SHorizontalBox::Slot(&local_35b0);
        pFVar55 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar55);
        pFVar39 = FMargin::FMargin(&local_3cd8,0.0,__real_40800000);
        pTVar40 = TAttribute<FMargin>::TAttribute<FMargin>(&local_3938,pFVar39);
        pFVar55 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                            ((FSlotArgumentsMixin *)&pFVar55->field_0x18,pTVar40);
        pFVar31 = STextBlock::FArguments::FArguments(&local_b90);
        pFVar48 = FText::FromString(&local_4128,&local_4708);
        pTVar49 = TAttribute<FText>::TAttribute<FText>(&local_3908,pFVar48);
        pFVar31 = STextBlock::FArguments::Text(pFVar31,pTVar49);
        pFVar41 = FSlateColor::UseForeground(&local_3c40);
        pTVar32 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(&local_38d8,pFVar41);
        pFVar31 = STextBlock::FArguments::ColorAndOpacity(pFVar31,pTVar32);
        ::FName::FName(&local_47b0,"MessageLog");
        pIVar58 = FAppStyle::Get();
        pFVar31 = STextBlock::FArguments::TextStyle(pFVar31,pIVar58,&local_47b0,(char *)0x0);
        pTVar33 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                            (&local_3ed8,"STextBlock",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                             ,0x167,&local_47dc);
        pTVar34 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar33,&local_4138,pFVar31);
        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_4458,pTVar34);
        pFVar55 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                            ((FSlotArguments *)pFVar55,&local_4458);
        pFVar56 = SHorizontalBox::FArguments::operator+(pFVar56,pFVar55);
        pTVar53 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                            (&local_3ef0,"SHorizontalBox",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                             ,0x15c,&local_47db);
        pTVar60 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar53,&local_4148,pFVar56);
        TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SHorizontalBox>(&local_4468,pTVar60);
        TSharedPtr<SWidget,1>::operator=(&local_47f0,&local_4468);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4468.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4148.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3ef0._Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4458.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4138.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3ed8._Widget.SharedReferenceCount.ReferenceController);
        FText::~FText(&local_4128);
        STextBlock::FArguments::~FArguments(&local_b90);
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_35b0);
        SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_34c8);
        pFVar56 = &local_3040;
      }
      SHorizontalBox::FArguments::~FArguments(pFVar56);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_46d8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4648.Implementation.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4648.Pattern.Implementation.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4698.Implementation.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4428.SharedReferenceCount.ReferenceController);
      ::FString::~FString(&local_4708);
      param_1 = local_47d0;
    }
    break;
  case 10:
    pTVar67 = (param_2->SharedReferenceCount).ReferenceController;
    pIVar2 = param_2->Object;
    if (pTVar67 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar67->SharedReferenceCount = (atomic<int>)((int)pTVar67->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar28 = ::FName::FName(&local_4068,"MessageLog.Url");
    FVar42 = *pFVar28;
    pFVar48 = FText::FromString(&local_4238,(FString *)(pIVar2 + 1));
    pTVar50 = CreateHyperlink(this,&local_4248,param_2,pFVar48);
    local_45a8.ReferenceController = (pTVar50->SharedReferenceCount).ReferenceController;
    local_47f0.Object = pTVar50->Object;
    if (local_45a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_45a8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_45a8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_45b0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_47f0.SharedReferenceCount,&local_45a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_45a8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4248.SharedReferenceCount.ReferenceController);
    if (local_4238.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4238.TextData.Reference + 0x10))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar67);
      param_1 = local_47d0;
      goto LAB_142bec802;
    }
LAB_142beae5d:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar67);
    param_1 = local_47d0;
    goto LAB_142bec802;
  case 0xb:
    pFVar28 = ::FName::FName(&local_4060,"Icons.Search");
    FVar42 = *pFVar28;
    pFVar48 = (FText *)(**(code **)(param_2->Object->_padding_ + 0x10))();
    pTVar50 = CreateHyperlink(this,&local_4228,param_2,pFVar48);
    FStack_4710.ReferenceController = (pTVar50->SharedReferenceCount).ReferenceController;
    local_47f0.Object = pTVar50->Object;
    if (FStack_4710.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_4710.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_4710.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_4718 = (code *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_47f0.SharedReferenceCount,&FStack_4710);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_4710.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4228.SharedReferenceCount.ReferenceController);
    goto LAB_142bec802;
  case 0xc:
    TSharedRef<FDynamicTextToken,1>::TSharedRef<FDynamicTextToken,1><IMessageToken>
              (&local_44c8,param_2,local_47f7);
    pFVar31 = STextBlock::FArguments::FArguments(&local_10e8);
    pFVar41 = FSlateColor::UseSubduedForeground(&local_3c54);
    pTVar32 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(&local_39c8,pFVar41);
    pFVar31 = STextBlock::FArguments::ColorAndOpacity(pFVar31,pTVar32);
    pTVar49 = TAttribute<FText>::TAttribute<FText>(&local_3998,&(local_44c8.Object)->Message);
    pFVar31 = STextBlock::FArguments::Text(pFVar31,pTVar49);
    pTVar33 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_3f38,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                         ,0x127,(T0RequiredArgs *)local_47f5);
    pTVar34 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar33,&local_41c8,pFVar31);
    TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><STextBlock>(&local_44d8,pTVar34);
    TSharedPtr<SWidget,1>::operator=(&local_47f0,&local_44d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_44d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_41c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3f38._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_10e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_44c8.SharedReferenceCount.ReferenceController);
    break;
  case 0xd:
    TSharedRef<FFixToken,1>::TSharedRef<FFixToken,1><IMessageToken>(&local_4688,param_2,local_47f8);
    local_47b8 = (FName)SHorizontalBox::FArguments::FArguments(&local_2c30);
    pFVar55 = SHorizontalBox::Slot(&local_3128);
    pFVar55 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar55);
    local_47b0 = (FName)TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                                  ((FSlotArgumentsMixin *)&pFVar55->field_0x18,0.0,fVar13,
                                   __real_40800000,fVar13);
    pFVar57 = SImage::FArguments::FArguments(&local_24d8);
    pFVar41 = FSlateColor::UseForeground(&local_3c68);
    local_4328._0_8_ = *(undefined8 *)&(pFVar41->SpecifiedColor).field0_0x0;
    local_4328._8_8_ = *(undefined8 *)((longlong)&(pFVar41->SpecifiedColor).field0_0x0 + 8);
    local_4318._0_1_ = pFVar41->ColorUseRule;
    local_4318._1_1_ = pFVar41->ColorTableId;
    local_4318._2_2_ = *(undefined2 *)&pFVar41->field_0x12;
    local_4300 = 0;
    local_4314 = 1;
    local_4310 = 0;
    uStack_4308 = 0;
    FVar42 = (FName)SImage::FArguments::ColorAndOpacity
                              (pFVar57,(TAttribute<FSlateColor> *)&local_4328._s_0);
    paVar68 = (atomic<int> *)&DAT_00000008;
    if (local_4688.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar62 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar62 = &(local_4688.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar62 = (atomic<int>)((int)*paVar62 + 1);
      UNLOCK();
    }
    local_b8 = local_4688.SharedReferenceCount.ReferenceController;
    local_b0 = (undefined ***)0x0;
    local_c8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::`54'::<lambda_2>,0,0>
                ::_vftable_;
    local_c0 = local_4688.Object;
    if (local_4688.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar62 = (atomic<int>)((int)*paVar62 + 1);
      UNLOCK();
    }
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_2>,FSlateBrush_const_*>
               ::Call;
    *(bool *)((longlong)FVar42 + 0x200) = true;
    local_47a8 = FVar42;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar42 + 0x208),
               (FWriteAccessScope *)&local_42a8);
    local_4290 = (FDelegateAllocation *)((longlong)FVar42 + 0x210);
    puVar43 = UE::Core::Private::DelegateAllocate(0x50,local_4290);
    if (puVar43 != (undefined8 *)0x0) {
      *puVar43 = &
                 ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar44 = FDelegateHandle::GenerateNewID();
      puVar43[2] = uVar44;
      *puVar43 = &
                 ___7__TBaseFunctorDelegateInstance___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy__V__TFunction___A6APEBUFSlateBrush__XZ____V__6B_
      ;
      puVar43[4] = local_d8;
      puVar43[9] = 0;
      if (local_d8 != (code *)0x0) {
        pppuVar63 = &local_c8;
        if (local_b0 != (undefined ***)0x0) {
          pppuVar63 = local_b0;
        }
        (*(code *)**pppuVar63)();
      }
    }
    FVar42.ComparisonIndex.Value = 0;
    FVar42.Number = 0;
    if (local_42a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_42a8.Accessor,&local_42a8);
    }
    pTVar45 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_3e60,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                         ,0x1b9,&local_47d9);
    pTVar59 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar45,&local_40a8,(FArguments *)local_47a8);
    local_43d8.Object = (SWidget *)pTVar59->Object;
    local_4728[0] = (FName)(pTVar59->SharedReferenceCount).ReferenceController;
    if (local_4728[0] != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_4728[0] + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)local_4728[0] + 8) + 1);
      UNLOCK();
    }
    local_43d8.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)local_4728[0];
    pFVar55 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_47b0,&local_43d8);
    local_47b8 = (FName)SHorizontalBox::FArguments::operator+((FArguments *)local_47b8,pFVar55);
    pFVar55 = SHorizontalBox::Slot(&local_3210);
    FVar46 = (FName)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar55);
    if (local_45d8 != (undefined4 *)((longlong)FVar46 + 0x50)) {
      *(undefined4 *)((longlong)FVar46 + 0x50) = 2;
      *(undefined1 *)((longlong)FVar46 + 0x54) = 1;
    }
    local_47b0 = FVar42;
    if (FVar46 != (FName)0xffffffffffffffb8) {
      local_47b0 = FVar46;
    }
    pFVar47 = SHyperlink::FArguments::FArguments(&local_1948);
    pFVar48 = (FText *)(**(code **)(param_2->Object->_padding_ + 0x10))();
    pTVar49 = TAttribute<FText>::TAttribute<FText><FText>(&local_3818,pFVar48);
    pFVar47 = SHyperlink::FArguments::Text(pFVar47,pTVar49);
    ::FName::FName(&local_4560,"MessageLog");
    pIVar58 = FAppStyle::Get();
    FVar42 = (FName)SHyperlink::FArguments::TextStyle(pFVar47,pIVar58,&local_4560,(char *)0x0);
    if (local_4688.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      paVar68 = &(local_4688.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar68 = (atomic<int>)((int)*paVar68 + 1);
      UNLOCK();
    }
    local_88 = local_4688.SharedReferenceCount.ReferenceController;
    local_98 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::`54'::<lambda_3>,0,0>
                ::_vftable_;
    local_90 = local_4688.Object;
    local_80 = (undefined ***)0x0;
    if (local_4688.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar68 = (atomic<int>)((int)*paVar68 + 1);
      UNLOCK();
    }
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_3>,bool>
               ::Call;
    *(undefined1 *)((longlong)FVar42 + 0xa9) = 1;
    local_47a8 = FVar42;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)FVar42 + 0xb0),
               (FWriteAccessScope *)&local_4288);
    local_4270 = (FDelegateAllocation *)((longlong)FVar42 + 0xb8);
    puVar43 = UE::Core::Private::DelegateAllocate(0x50,local_4270);
    if (puVar43 != (undefined8 *)0x0) {
      *puVar43 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar44 = FDelegateHandle::GenerateNewID();
      puVar43[2] = uVar44;
      *puVar43 = &
                 ___7__TBaseFunctorDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy__V__TFunction___A6A_NXZ____V__6B_
      ;
      puVar43[4] = local_a8;
      puVar43[9] = 0;
      if (local_a8 != (code *)0x0) {
        pppuVar63 = &local_98;
        if (local_80 != (undefined ***)0x0) {
          pppuVar63 = local_80;
        }
        (*(code *)**pppuVar63)();
      }
    }
    if (local_4288.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4288.Accessor,&local_4288);
    }
    if (local_4688.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4688.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_4688.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar50 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_40b8);
    local_4778 = (undefined1  [8])0x0;
    local_4770.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_4770.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4778,
               (FWriteAccessScope *)&local_4268);
    local_4250 = &local_4770;
    puVar43 = UE::Core::Private::DelegateAllocate(0x40,&local_4770);
    if (puVar43 != (undefined8 *)0x0) {
      pSVar4 = pTVar50->Object;
      local_45e8 = (FName)(pTVar50->SharedReferenceCount).ReferenceController;
      if (local_45e8 == (FName)0x0) {
        paVar68 = (atomic<int> *)&DAT_0000000c;
      }
      else {
        paVar68 = (atomic<int> *)((longlong)local_45e8 + 0xc);
        LOCK();
        *paVar68 = (atomic<int>)((int)*paVar68 + 1);
        UNLOCK();
      }
      *puVar43 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar44 = FDelegateHandle::GenerateNewID();
      puVar43[2] = uVar44;
      *puVar43 = &TBaseSPLambdaDelegateInstance<1,void___cdecl(void),FDefaultDelegateUserPolicy,`SMessageLogMessageListRow::CreateMessage'::`54'::<lambda_4>_>
                  ::_vftable_;
      puVar43[3] = pSVar4;
      *(FName *)(puVar43 + 4) = local_45e8;
      if (local_45e8 != (FName)0x0) {
        LOCK();
        *paVar68 = (atomic<int>)((int)*paVar68 + 1);
        UNLOCK();
      }
      bVar16 = true;
      puVar43[6] = local_4688.Object;
      puVar43[5] = this;
      puVar43[7] = local_4688.SharedReferenceCount.ReferenceController;
      if (local_4688.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_4688.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_4688.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    if ((bVar16) && (local_45e8 != (FName)0x0)) {
      LOCK();
      paVar68 = (atomic<int> *)((longlong)local_45e8 + 0xc);
      aVar1 = *paVar68;
      *paVar68 = (atomic<int>)((int)*paVar68 + -1);
      UNLOCK();
      if (aVar1 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)local_45e8 + 8))(local_45e8,1);
      }
    }
    if (local_4268.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4268.Accessor,&local_4268);
    }
    FVar42 = local_47a8;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)local_47a8 + 0x270),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4778);
    pTVar51 = MakeTDecl<SHyperlink,RequiredArgs::T0RequiredArgs>
                        (&local_3e78,"SHyperlink",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                         ,0x1cc,&local_47d8);
    pTVar52 = TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar51,&local_40c8,(FArguments *)FVar42);
    pTVar67 = (pTVar52->SharedReferenceCount).ReferenceController;
    local_43e8.Object = (SWidget *)pTVar52->Object;
    if (pTVar67 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar67->SharedReferenceCount = (atomic<int>)((int)pTVar67->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_43e8.SharedReferenceCount.ReferenceController = pTVar67;
    pFVar55 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_47b0,&local_43e8);
    pFVar56 = SHorizontalBox::FArguments::operator+((FArguments *)local_47b8,pFVar55);
    pTVar53 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_3e90,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                         ,0x1b4,&local_47d7);
    pTVar60 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar53,&local_40d8,pFVar56);
    FStack_46f0.ReferenceController = (pTVar60->SharedReferenceCount).ReferenceController;
    local_47f0.Object = (SWidget *)pTVar60->Object;
    if (FStack_46f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_46f0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_46f0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_46f8 = (code *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_47f0.SharedReferenceCount,&FStack_46f0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_46f0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3e90._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar67);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3e78._Widget.SharedReferenceCount.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4778,
               (FWriteAccessScope *)&local_4340);
    if ((local_4770.DelegateSize != 0) &&
       (local_4770.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_4770.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_4770,0,0,0x10);
      local_4770.DelegateSize = 0;
    }
    if (local_4340.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4340.Accessor,&local_4340);
    }
    if (local_4770.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_4770.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4778);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4688.SharedReferenceCount.ReferenceController);
    if (local_a8 != (code *)0x0) {
      pppuVar63 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar63 = local_80;
      }
      (*(code *)(*pppuVar63)[2])();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4688.SharedReferenceCount.ReferenceController);
    SHyperlink::FArguments::~FArguments(&local_1948);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3210);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_4728[0]);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3e60._Widget.SharedReferenceCount.ReferenceController);
    if (local_d8 != (code *)0x0) {
      pppuVar63 = &local_c8;
      if (local_b0 != (undefined ***)0x0) {
        pppuVar63 = local_b0;
      }
      (*(code *)(*pppuVar63)[2])();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4688.SharedReferenceCount.ReferenceController);
    SImage::FArguments::~FArguments(&local_24d8);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3128);
    SHorizontalBox::FArguments::~FArguments(&local_2c30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4688.SharedReferenceCount.ReferenceController);
    param_1 = local_47d0;
  }
  FVar42 = local_47c8;
LAB_142bec802:
  pSVar4 = local_47f0.Object;
  local_47f6 = (SHyperlink *)local_47f0.Object != (SHyperlink *)0x0;
  if ((SHyperlink *)local_47f0.Object != (SHyperlink *)0x0) {
    pSVar5 = param_1->Object;
    pFVar54 = ::operator_new(0x58);
    local_4558 = (FSlotArguments *)0x0;
    if (pFVar54 != (FSlot *)0x0) {
      *(undefined8 *)pFVar54 = 0;
      *(undefined8 *)&pFVar54->field_0x8 = 0;
      *(undefined8 *)&pFVar54->field_0x10 = 0;
      *(undefined8 *)&pFVar54->field_0x18 = 0;
      *(undefined8 *)&pFVar54->field_0x20 = 0;
      *(undefined8 *)&pFVar54->field_0x28 = 0;
      *(undefined8 *)&pFVar54->field_0x30 = 0;
      *(undefined8 *)&pFVar54->field_0x38 = 0;
      *(undefined8 *)&pFVar54->field_0x40 = 0;
      *(undefined8 *)&pFVar54->field_0x48 = 0;
      *(undefined8 *)&pFVar54->field_0x50 = 0;
      local_4558 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar54);
    }
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)local_3de0,(FSlot *)&local_4558);
    local_3cf0 = -1;
    local_3de8 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
    local_3cf8 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar5->field_0x218;
    pFVar55 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_3de0);
    if (local_45a0 != (undefined4 *)&pFVar55->field_0x50) {
      *(undefined4 *)&pFVar55->field_0x50 = 2;
      pFVar55->field_0x54 = 1;
    }
    pFVar64 = (FSlotArguments *)0x0;
    if (pFVar55 != (FSlotArguments *)0xffffffffffffffb8) {
      pFVar64 = pFVar55;
    }
    local_4730 = (FArguments *)
                 TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                           ((FSlotArgumentsMixin *)&pFVar64->field_0x18,param_3,0.0,0.0,0.0);
    pFVar56 = SHorizontalBox::FArguments::FArguments(&local_37b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4798,&local_4048);
    if ((((int)local_4788 == 0) || (FStack_4790.Data == (FScriptContainerElement *)0x0)) ||
       (cVar17 = (**(code **)(*(longlong *)FStack_4790.Data + 0x38))(), cVar17 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_4048);
      local_4668 = (uchar)EVisibility::Visible.Value.Value;
      bVar12 = false;
      bVar16 = true;
      local_4627 = 1;
      local_4650 = 0;
      local_4667 = 1;
      local_4660 = (undefined1  [8])0x0;
      pvStack_4658 = (void *)0x0;
      pTVar35 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4660;
      local_4628 = (uchar)EVisibility::Visible;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_4048);
      local_46b8 = local_47a0[0];
      local_46b7 = local_47a0[1];
      bVar12 = true;
      bVar16 = false;
      local_46a0 = 0;
      local_46b0 = (undefined1  [8])0x0;
      pvStack_46a8 = (void *)0x0;
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_46b0,
                 (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_4798);
      pTVar35 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_46b0;
      local_4627 = local_46b7;
      local_4628 = local_46b8.Value;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4620,pTVar35);
    *(uchar *)&pFVar56->_padding_ = local_4628;
    *(undefined1 *)((longlong)&pFVar56->_padding_ + 1) = local_4627;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar56->_padding_,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4620);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4620);
    if ((void *)local_4620._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_4620._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4620);
    pFVar54 = ::operator_new(0x58);
    local_4608 = (FSlotArguments *)0x0;
    if (pFVar54 != (FSlot *)0x0) {
      *(undefined8 *)pFVar54 = 0;
      *(undefined8 *)&pFVar54->field_0x8 = 0;
      *(undefined8 *)&pFVar54->field_0x10 = 0;
      *(undefined8 *)&pFVar54->field_0x18 = 0;
      *(undefined8 *)&pFVar54->field_0x20 = 0;
      *(undefined8 *)&pFVar54->field_0x28 = 0;
      *(undefined8 *)&pFVar54->field_0x30 = 0;
      *(undefined8 *)&pFVar54->field_0x38 = 0;
      *(undefined8 *)&pFVar54->field_0x40 = 0;
      *(undefined8 *)&pFVar54->field_0x48 = 0;
      *(undefined8 *)&pFVar54->field_0x50 = 0;
      local_4608 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar54);
    }
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)local_3b30,(FSlot *)&local_4608);
    pFVar55 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_3b30);
    if (local_4588 != (undefined4 *)&pFVar55->field_0x50) {
      *(undefined4 *)&pFVar55->field_0x50 = 2;
      pFVar55->field_0x54 = 1;
    }
    local_46e0.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    local_46e8 = (SImage *)SNullWidget::NullWidget.Object;
    pFVar64 = (FSlotArguments *)0x0;
    if (pFVar55 != (FSlotArguments *)0xffffffffffffffb8) {
      pFVar64 = pFVar55;
    }
    if (FVar42 == (FName)0x0) {
      local_43a8 = SNullWidget::NullWidget.Object;
      local_43a0 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    else {
      pFVar57 = SImage::FArguments::FArguments(&local_2230);
      local_4540 = CONCAT22(local_4540._2_2_,2);
      local_42e8 = local_4540;
      local_4550 = ___xmm_3f8000003f800000000000003f800000;
      uStack_4548 = _UNK_15090c6d8;
      local_42e4 = 1;
      local_42f8._0_8_ = ___xmm_3f8000003f800000000000003f800000;
      local_42f8._8_8_ = _UNK_15090c6d8;
      local_42d0 = 0;
      local_42e0 = 0;
      uStack_42d8 = 0;
      pFVar57 = SImage::FArguments::ColorAndOpacity
                          (pFVar57,(TAttribute<FSlateColor> *)&local_42f8._s_0);
      pIVar58 = FAppStyle::Get();
      local_4398.Value = (FSlateBrush *)(**(code **)((longlong)*pIVar58 + 0x50))(pIVar58);
      local_4398.bIsSet = true;
      local_4398.Getter._16_8_ = 0;
      local_4398.Getter._0_8_ = 0;
      local_4398.Getter._8_8_ = 0;
      pFVar57 = SImage::FArguments::Image(pFVar57,&local_4398);
      FLLMScope::FLLMScope
                (&local_4780,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_4600 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_45e0,&local_4600,true);
      TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
                (&local_4018,"SImage",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                 ,0x1fa,&local_47d6);
      FMemScope::~FMemScope(&local_45e0);
      FLLMScope::~FLLMScope(&local_4780);
      pTVar59 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_4018,&local_4088,pFVar57);
      local_46e0.ReferenceController = (pTVar59->SharedReferenceCount).ReferenceController;
      local_46e8 = pTVar59->Object;
      if (local_46e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_46e0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_46e0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar11 = false;
      bVar9 = true;
      bVar8 = true;
      bVar7 = true;
      local_43f8 = local_46e8;
      local_43f0 = local_46e0.ReferenceController;
    }
    if (local_46e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_46e0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_46e0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((SImage **)&pFVar64->field_0x8 != &local_46e8) {
      *(SImage **)&pFVar64->field_0x8 = local_46e8;
      local_46e8 = (SImage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar64->field_0x10,&local_46e0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_46e0.ReferenceController);
    pFVar56 = SHorizontalBox::FArguments::operator+(pFVar56,pFVar64);
    pFVar54 = ::operator_new(0x58);
    if (pFVar54 == (FSlot *)0x0) {
      local_4758 = (FSlot *)0x0;
    }
    else {
      *(undefined8 *)pFVar54 = 0;
      *(undefined8 *)&pFVar54->field_0x8 = 0;
      *(undefined8 *)&pFVar54->field_0x10 = 0;
      *(undefined8 *)&pFVar54->field_0x18 = 0;
      *(undefined8 *)&pFVar54->field_0x20 = 0;
      *(undefined8 *)&pFVar54->field_0x28 = 0;
      *(undefined8 *)&pFVar54->field_0x30 = 0;
      *(undefined8 *)&pFVar54->field_0x38 = 0;
      *(undefined8 *)&pFVar54->field_0x40 = 0;
      *(undefined8 *)&pFVar54->field_0x48 = 0;
      *(undefined8 *)&pFVar54->field_0x50 = 0;
      local_4758 = SHorizontalBox::FSlot::FSlot(pFVar54);
    }
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)local_3c18,(FSlot *)&local_4758);
    pFVar55 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_3c18);
    if (local_4580 != (undefined4 *)&pFVar55->field_0x50) {
      *(undefined4 *)&pFVar55->field_0x50 = 2;
      pFVar55->field_0x54 = 1;
    }
    pFVar64 = (FSlotArguments *)0x0;
    if (pFVar55 != (FSlotArguments *)0xffffffffffffffb8) {
      pFVar64 = pFVar55;
    }
    pFVar55 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar64->field_0x18,fVar13,0.0,0.0,0.0);
    if ((local_47f6 == '\0') &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar14.ReferenceController = local_47f0.SharedReferenceCount.ReferenceController;
    if (local_47f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_47f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_47f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((SHyperlink *)pSVar4 == (SHyperlink *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_46c8 = (SHyperlink *)pSVar4;
    local_46c0.ReferenceController = FVar14.ReferenceController;
    if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar14.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((SHyperlink **)&pFVar55->field_0x8 != &local_46c8) {
      *(SWidget **)&pFVar55->field_0x8 = pSVar4;
      local_46c8 = (SHyperlink *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar55->field_0x10,&local_46c0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_46c0.ReferenceController);
    pFVar56 = SHorizontalBox::FArguments::operator+(pFVar56,pFVar55);
    FLLMScope::FLLMScope(&local_477c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_45f8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_45f0,&local_45f8,true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_4030,"SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
               ,0x1f1,local_47d5);
    FMemScope::~FMemScope(&local_45f0);
    FLLMScope::~FLLMScope(&local_477c);
    pTVar60 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_4030,&local_4098,pFVar56);
    pTVar67 = (pTVar60->SharedReferenceCount).ReferenceController;
    local_4748 = pTVar60->Object;
    if (pTVar67 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar67->SharedReferenceCount = (atomic<int>)((int)pTVar67->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar67->SharedReferenceCount = (atomic<int>)((int)pTVar67->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_4740.ReferenceController = pTVar67;
    if ((SHorizontalBox **)&local_4730->_padding_ != &local_4748) {
      local_4730->_padding_ = (longlong)local_4748;
      local_4748 = (SHorizontalBox *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&local_4730->_padding_,&local_4740);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4740.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar67);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4098.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4030._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar14.ReferenceController);
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_3bc0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3be8);
    if ((void *)local_3be8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_3be8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3be8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3c08);
    if (local_3c18[0] != (undefined8 *)0x0) {
      (**(code **)*local_3c18[0])(local_3c18[0],1);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_43f0);
    }
    if (bVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4088.SharedReferenceCount.ReferenceController);
    }
    if (bVar9) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4018._Widget.SharedReferenceCount.ReferenceController);
    }
    if (bVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_43a0);
    }
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_3ad8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b00);
    if ((void *)local_3b00._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_3b00._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3b00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3b20);
    if (local_3b30[0] != (undefined8 *)0x0) {
      (**(code **)*local_3b30[0])(local_3b30[0],1);
    }
    if (bVar16) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4660);
      if (pvStack_4658 != (void *)0x0) {
        FMemory::Free(pvStack_4658);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_4660);
    }
    if (bVar12) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_46b0);
      if (pvStack_46a8 != (void *)0x0) {
        FMemory::Free(pvStack_46a8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_46b0);
    }
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_37b8._Slots.AllocatorInstance.Data,local_37b8._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_37b8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_37b8._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_37b8);
    local_3de8 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
    if (local_3de0[0] != (undefined8 *)0x0) {
      if (local_3cf0 == -1) {
        TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_3cf8,(FSlotArguments *)local_3de0);
      }
      else {
        TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                  (local_3cf8,(FSlotArguments *)local_3de0,local_3cf0);
      }
    }
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_3d88);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3db0);
    if ((void *)local_3db0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_3db0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3db0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3dd0);
    if (local_3de0[0] != (undefined8 *)0x0) {
      (**(code **)*local_3de0[0])(local_3de0[0],1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4798,
             (FWriteAccessScope *)&local_4370);
  if (((int)local_4788 != 0) && (FStack_4790.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_4790.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4790,0,0,0x10);
    local_4788 = local_4788 & 0xffffffff00000000;
  }
  if (local_4370.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4370.Accessor,&local_4370);
  }
  if (FStack_4790.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4790.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4798);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_47f0.SharedReferenceCount.ReferenceController);
  return;
}

// GenerateWidget @ 142bf7b70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<SWidget,1> * __thiscall
SMessageLogMessageListRow::GenerateWidget
          (SMessageLogMessageListRow *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  FTokenizedMessage *this_00;
  TArray<TSharedRef<IMessageToken,1>,TSizedDefaultAllocator<32>_> *pTVar13;
  FArguments *pFVar14;
  FArguments *pFVar15;
  TSharedRef<SWidget,1> *pTVar16;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_01;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar17;
  FSlotArguments *pFVar18;
  FName FVar19;
  FSlot *pFVar20;
  FSlotArguments *pFVar21;
  FSizeParam *pFVar22;
  FArguments *pFVar23;
  FArguments *pFVar24;
  FArguments *pFVar25;
  TSharedRef<SImage,1> *pTVar26;
  FSharedReferencer<1> FVar27;
  TSharedRef<SBox,1> *pTVar28;
  FSlotArguments *pFVar29;
  FSlotArguments *pFVar30;
  FArguments *pFVar31;
  ISlateStyle *pIVar32;
  FName *pFVar33;
  TSharedRef<SBorder,1> *pTVar34;
  FSlot *pFVar35;
  TSharedRef<SVerticalBox,1> *pTVar36;
  FSlotArguments *this_02;
  SBox *pSVar37;
  atomic<int> *paVar38;
  FSlotArguments *pFVar39;
  FSlotArguments *pFVar40;
  int iVar41;
  FSharedReferencer<1> FVar42;
  uint uVar43;
  atomic<int> *paVar44;
  TReferenceControllerBase<1> *pTVar45;
  TSharedRef<IMessageToken,1> *pTVar46;
  TReferenceControllerBase<1> *local_res8;
  FSlotArguments *local_res20;
  T0RequiredArgs local_2498;
  T0RequiredArgs local_2497;
  T0RequiredArgs local_2496;
  T0RequiredArgs local_2495;
  T0RequiredArgs local_2494;
  T0RequiredArgs local_2493;
  T0RequiredArgs local_2492;
  T0RequiredArgs local_2491;
  T0RequiredArgs local_2490 [4];
  uint local_248c;
  FLLMScope local_2488;
  FLLMScope local_2484;
  FLLMScope local_2480;
  FLLMScope local_247c;
  FLLMScope local_2478;
  FLLMScope local_2474;
  FLLMScope local_2470;
  FLLMScope local_246c;
  FLLMScope local_2468 [2];
  FArguments *local_2460;
  TSharedRef<SHorizontalBox,1> local_2458;
  undefined8 local_2448;
  SBorder *local_2440;
  FSharedReferencer<1> local_2438;
  undefined4 local_2430;
  undefined1 local_242c;
  undefined1 local_2428 [8];
  void *pvStack_2420;
  undefined8 local_2418;
  undefined4 local_2410;
  undefined1 local_240c;
  undefined1 local_2408 [8];
  void *pvStack_2400;
  undefined8 local_23f8;
  undefined8 local_23f0;
  undefined8 uStack_23e8;
  undefined1 local_23e0;
  undefined1 local_23d8 [8];
  ForAnyElementType FStack_23d0;
  ulonglong local_23c8;
  SImage *local_23c0;
  TReferenceControllerBase<1> *pTStack_23b8;
  undefined8 local_23b0;
  FSharedReferencer<1> local_23a8 [2];
  SHorizontalBox *local_2398;
  FSharedReferencer<1> FStack_2390;
  TSharedRef<SHorizontalBox,1> local_2388;
  TSharedRef<SHorizontalBox,1> local_2378;
  SVerticalBox *local_2368;
  FSharedReferencer<1> FStack_2360;
  SHorizontalBox *local_2358;
  FSharedReferencer<1> FStack_2350;
  TSharedRef<SVerticalBox,1> local_2348;
  FMemScope local_2338;
  FName local_2330;
  FMemScope local_2328;
  FSlotArguments *local_2320;
  FName local_2318;
  FMemScope local_2310;
  FName local_2308;
  FMemScope local_2300;
  FName local_22f8;
  FMemScope local_22f0;
  FSlotArguments *local_22e8;
  FName local_22e0;
  FMemScope local_22d8;
  FName local_22d0;
  FSlot *local_22c8;
  FSlot *local_22c0;
  FName local_22b8;
  FMemScope local_22b0;
  FMemScope local_22a8;
  undefined4 local_22a0 [2];
  FName local_2298;
  FMemScope local_2290;
  FName local_2288;
  TAttribute<float> local_2280;
  undefined8 local_2260;
  undefined8 uStack_2258;
  undefined1 local_2250;
  undefined1 local_2248 [8];
  void *pvStack_2240;
  undefined8 local_2238;
  TSharedRef<SHorizontalBox,1> local_2228;
  TAttribute<FSlateBrush_const_*> local_2218;
  TAttribute<FSlateBrush_const_*> local_21f0;
  FDestructionSentinel local_21c8;
  TAttribute<FMargin> local_21b0;
  TSharedRef<SBorder,1> local_2180;
  TSharedRef<SBox,1> local_2170;
  TReferenceControllerBase<1> *local_2158;
  TSharedRef<SBox,1> local_2150;
  TSharedRef<SImage,1> local_2140;
  TReferenceControllerBase<1> *local_2128;
  TSharedRef<SVerticalBox,1> local_2120;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2110;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_20f8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_20e0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_20c8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_20b0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2098;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2080;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2068;
  undefined1 local_2050 [8];
  FName local_2048;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2040;
  TSharedRef<SWidget,1> local_2028;
  SWidget *local_2018;
  TReferenceControllerBase<1> *pTStack_2010;
  undefined1 local_2008 [16];
  undefined1 local_1ff8 [32];
  undefined1 local_1fd8 [24];
  undefined1 local_1fc0 [16];
  undefined1 local_1fb0 [32];
  undefined1 local_1f90 [24];
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1f78;
  undefined8 *local_1f60;
  SBox *local_1f58;
  FSharedReferencer<1> local_1f50 [4];
  undefined1 local_1f30 [24];
  undefined4 local_1f18;
  undefined1 local_1f14;
  undefined4 local_1f10;
  undefined1 local_1f0c;
  FSlotArgumentsMixin local_1f08;
  TReferenceControllerBase<1> *local_1e70;
  TReferenceControllerBase<1> *local_1e60;
  undefined8 *local_1e58 [2];
  TReferenceControllerBase<1> *local_1e48;
  undefined1 local_1e40 [24];
  undefined1 local_1e28 [24];
  undefined4 local_1e10;
  undefined1 local_1e0c;
  undefined4 local_1e08;
  undefined1 local_1e04;
  FSlotArgumentsMixin local_1e00;
  undefined8 *local_1d70 [2];
  TReferenceControllerBase<1> *local_1d60;
  undefined1 local_1d40 [40];
  FSlotArgumentsMixin local_1d18;
  undefined8 *local_1c88 [2];
  TReferenceControllerBase<1> *local_1c78;
  undefined1 local_1c58 [40];
  FSlotArgumentsMixin local_1c30;
  undefined8 *local_1ba0 [2];
  TReferenceControllerBase<1> *local_1b90;
  undefined1 local_1b70 [40];
  FSlotArgumentsMixin local_1b48;
  FArguments local_1ab8;
  FArguments local_18b0;
  FArguments local_16a8;
  FArguments local_14a0;
  FArguments local_1298;
  FArguments local_1090;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_e88;
  FArguments local_d88;
  FArguments local_ae0;
  FArguments local_7a0;
  FArguments local_460;
  undefined8 uStack_48;
  
  uStack_48 = 0x142bf7b93;
  pFVar21 = (FSlotArguments *)0x0;
  this_00 = TSharedPtr<FTokenizedMessage,1>::operator->(&this->Message);
  pTVar13 = FTokenizedMessage::GetMessageTokens(this_00);
  pFVar14 = SHorizontalBox::FArguments::FArguments(&local_1ab8);
  FLLMScope::FLLMScope(local_2468,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2298 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2290,&local_2298,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_2110,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
             ,0x38,(T0RequiredArgs *)&local_res20);
  FMemScope::~FMemScope(&local_2290);
  FLLMScope::~FLLMScope(local_2468);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_2110,&local_2388,pFVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2110._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1ab8._Slots.AllocatorInstance.Data,local_1ab8._Slots.ArrayNum);
  if ((FSlotArguments *)local_1ab8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1ab8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1ab8);
  pFVar14 = SHorizontalBox::FArguments::FArguments(&local_18b0);
  FLLMScope::FLLMScope(&local_2488,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2288 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2338,&local_2288,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_20f8,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
             ,0x39,&local_2498);
  FMemScope::~FMemScope(&local_2338);
  FLLMScope::~FLLMScope(&local_2488);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_20f8,&local_2458,pFVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_18b0._Slots.AllocatorInstance.Data,local_18b0._Slots.ArrayNum);
  if ((FSlotArguments *)local_18b0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_18b0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_18b0);
  pFVar15 = SVerticalBox::FArguments::FArguments(&local_16a8);
  FLLMScope::FLLMScope(&local_2484,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2330 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2328,&local_2330,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_20e0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
             ,0x3a,&local_2497);
  FMemScope::~FMemScope(&local_2328);
  FLLMScope::~FLLMScope(&local_2484);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_20e0,&local_2348,pFVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20e0._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_16a8._Slots.AllocatorInstance.Data,local_16a8._Slots.ArrayNum);
  if ((FSlotArguments *)local_16a8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_16a8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_16a8);
  uVar9 = _UNK_1509b3ee8;
  uVar10 = ___xmm_00000000000000000000000041c00000;
  fVar6 = __real_40000000;
  fVar5 = __real_41200000;
  bVar4 = false;
  local_2448 = 0;
  local_res8 = (TReferenceControllerBase<1> *)((ulonglong)local_res8 & 0xffffffff00000000);
  pFVar39 = pFVar21;
  pFVar18 = pFVar21;
  do {
    while( true ) {
      iVar41 = (int)pFVar18;
      if ((iVar41 < 0) || (pTVar13->ArrayNum <= iVar41)) {
        pFVar14 = SHorizontalBox::FArguments::FArguments(&local_1298);
        pFVar20 = ::operator_new(0x58);
        if (pFVar20 != (FSlot *)0x0) {
          *(undefined8 *)pFVar20 = 0;
          *(undefined8 *)&pFVar20->field_0x8 = 0;
          *(undefined8 *)&pFVar20->field_0x10 = 0;
          *(undefined8 *)&pFVar20->field_0x18 = 0;
          *(undefined8 *)&pFVar20->field_0x20 = 0;
          *(undefined8 *)&pFVar20->field_0x28 = 0;
          *(undefined8 *)&pFVar20->field_0x30 = 0;
          *(undefined8 *)&pFVar20->field_0x38 = 0;
          *(undefined8 *)&pFVar20->field_0x40 = 0;
          *(undefined8 *)&pFVar20->field_0x48 = 0;
          *(undefined8 *)&pFVar20->field_0x50 = 0;
          pFVar21 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar20);
        }
        local_2320 = pFVar21;
        SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                  ((FSlotArguments *)&local_1f60,(FSlot *)&local_2320);
        pFVar22 = (FSizeParam *)FAuto::FAuto((FAuto *)local_2008);
        TOptional<FSizeParam>::operator=(&local_1f08._SizeParam,pFVar22);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1fd8);
        if ((void *)local_1fd8._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1fd8._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1fd8);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ff8);
        if ((void *)local_1ff8._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1ff8._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1ff8);
        local_1f18 = 2;
        local_1f14 = 1;
        local_1f10 = 1;
        local_1f0c = 1;
        pFVar23 = SBox::FArguments::FArguments(&local_7a0);
        uVar8 = _UNK_15076ba38;
        uVar10 = ___xmm_40000000400000004000000040000000;
        local_23e0 = 1;
        local_23f0 = ___xmm_40000000400000004000000040000000;
        uStack_23e8 = _UNK_15076ba38;
        local_23c8 = 0;
        local_23d8 = (undefined1  [8])0x0;
        FStack_23d0.Data = (FScriptContainerElement *)0x0;
        (pFVar23->_Padding).bIsSet = true;
        uVar9 = ___xmm_40000000400000004000000040000000;
        ___xmm_40000000400000004000000040000000 = (undefined4)uVar10;
        _UNK_15076ba34 = SUB84(uVar10,4);
        uVar7 = _UNK_15076ba34;
        (pFVar23->_Padding).Value.Left = (float)___xmm_40000000400000004000000040000000;
        ___xmm_40000000400000004000000040000000 = uVar9;
        uVar10 = _UNK_15076ba38;
        (pFVar23->_Padding).Value.Top = (float)uVar7;
        _UNK_15076ba38 = (undefined4)uVar8;
        _UNK_15076ba3c = SUB84(uVar8,4);
        uVar7 = _UNK_15076ba3c;
        (pFVar23->_Padding).Value.Right = (float)_UNK_15076ba38;
        _UNK_15076ba38 = uVar10;
        (pFVar23->_Padding).Value.Bottom = (float)uVar7;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_Padding).Getter,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_23d8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_23d8,
                   (FWriteAccessScope *)&local_21c8);
        if (((int)local_23c8 != 0) && (FStack_23d0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_23d0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&FStack_23d0,0,0,0x10);
          local_23c8 = local_23c8 & 0xffffffff00000000;
        }
        if (local_21c8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_21c8.Accessor,&local_21c8);
        }
        if (FStack_23d0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_23d0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_23d8);
        FVar27 = SNullWidget::NullWidget.SharedReferenceCount;
        pSVar37 = (SBox *)SNullWidget::NullWidget.Object;
        if (pFVar39 == (FSlotArguments *)0x0) {
          local_2128 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
          if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                 = (atomic<int>)
                   ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
            UNLOCK();
          }
          uVar43 = 0x201;
          local_248c = 0x7c01;
          pTVar45 = local_res8;
        }
        else {
          pFVar24 = SBox::FArguments::FArguments(&local_ae0);
          pFVar24->_HAlign = HAlign_Center;
          pFVar24->_VAlign = VAlign_Center;
          local_2430 = 0x41800000;
          local_2428 = (undefined1  [8])0x0;
          pvStack_2420 = (void *)0x0;
          local_242c = 1;
          local_2418 = 0;
          (pFVar24->_WidthOverride).Value.Size = 16.0;
          (pFVar24->_WidthOverride).bIsSet = true;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_WidthOverride).Getter,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2428);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2428);
          if (pvStack_2420 != (void *)0x0) {
            FMemory::Free(pvStack_2420);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_2428);
          local_2410 = 0x41800000;
          local_240c = 1;
          local_23f8 = 0;
          local_2408 = (undefined1  [8])0x0;
          pvStack_2400 = (void *)0x0;
          (pFVar24->_HeightOverride).Value.Size = 16.0;
          (pFVar24->_HeightOverride).bIsSet = true;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar24->_HeightOverride).Getter
                     ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_2408);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2408);
          if (pvStack_2400 != (void *)0x0) {
            FMemory::Free(pvStack_2400);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_2408);
          pFVar25 = SImage::FArguments::FArguments(&local_d88);
          pIVar32 = FAppStyle::Get();
          local_21f0.Value =
               (FSlateBrush *)(**(code **)((longlong)*pIVar32 + 0x50))(pIVar32,pFVar39);
          local_21f0.bIsSet = true;
          local_21f0.Getter._16_8_ = 0;
          local_21f0.Getter._0_8_ = 0;
          local_21f0.Getter._8_8_ = 0;
          pFVar25 = SImage::FArguments::Image(pFVar25,&local_21f0);
          FLLMScope::FLLMScope
                    (&local_2480,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
          local_2318 = LLMTagDeclaration_UI_Slate.UniqueName;
          FMemScope::FMemScope(&local_2310,&local_2318,true);
          TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
          TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
                    (&local_2080,"SImage",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                     ,0x7e,&local_2495);
          FMemScope::~FMemScope(&local_2310);
          FLLMScope::~FLLMScope(&local_2480);
          pTVar26 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                              (&local_2080,&local_2140,pFVar25);
          pTVar45 = (pTVar26->SharedReferenceCount).ReferenceController;
          local_23c0 = pTVar26->Object;
          if (pTVar45 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar45->SharedReferenceCount = (atomic<int>)((int)pTVar45->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar45->SharedReferenceCount = (atomic<int>)((int)pTVar45->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar1 = (pFVar24->_Content).Widget.SharedReferenceCount.ReferenceController;
          (pFVar24->_Content).Widget.Object = (SWidget *)local_23c0;
          (pFVar24->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar45;
          pTStack_23b8 = pTVar45;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          FLLMScope::FLLMScope
                    (&local_247c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
          local_2308 = LLMTagDeclaration_UI_Slate.UniqueName;
          FMemScope::FMemScope(&local_2300,&local_2308,true);
          TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::
          TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
                    (&local_2040,"SBox",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                     ,0x78,&local_2494);
          FMemScope::~FMemScope(&local_2300);
          FLLMScope::~FLLMScope(&local_247c);
          pTVar28 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                              (&local_2040,&local_2150,pFVar24);
          pSVar37 = pTVar28->Object;
          FVar27.ReferenceController = (pTVar28->SharedReferenceCount).ReferenceController;
          if (FVar27.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar27.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar27.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          uVar43 = 0x3fe;
          local_248c = 0x7dfe;
          local_2158 = FVar27.ReferenceController;
        }
        if (FVar27.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar27.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar27.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_2018 = (pFVar23->_Content).Widget.Object;
        pTStack_2010 = (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController;
        (pFVar23->_Content).Widget.Object = (SWidget *)pSVar37;
        (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController =
             FVar27.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_2010);
        FLLMScope::FLLMScope
                  (&local_2478,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
        local_22f8 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(&local_22f0,&local_22f8,true);
        TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
                  (&local_2098,"SBox",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                   ,0x72,&local_2493);
        FMemScope::~FMemScope(&local_22f0);
        FLLMScope::~FLLMScope(&local_2478);
        pTVar28 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                            (&local_2098,&local_2170,pFVar23);
        pTVar1 = (pTVar28->SharedReferenceCount).ReferenceController;
        local_1f58 = pTVar28->Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar30 = (FSlotArguments *)0x0;
        local_23b0 = 0;
        local_23a8[0].ReferenceController = pTVar1;
        SharedPointerInternals::FSharedReferencer<1>::operator=(local_1f50,local_23a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_23a8[0].ReferenceController);
        pFVar14 = SHorizontalBox::FArguments::operator+(pFVar14,(FSlotArguments *)&local_1f60);
        pFVar20 = ::operator_new(0x58);
        local_2460 = (FArguments *)pFVar30;
        if (pFVar20 != (FSlot *)0x0) {
          *(undefined8 *)pFVar20 = 0;
          *(undefined8 *)&pFVar20->field_0x8 = 0;
          *(undefined8 *)&pFVar20->field_0x10 = 0;
          *(undefined8 *)&pFVar20->field_0x18 = 0;
          *(undefined8 *)&pFVar20->field_0x20 = 0;
          *(undefined8 *)&pFVar20->field_0x28 = 0;
          *(undefined8 *)&pFVar20->field_0x30 = 0;
          *(undefined8 *)&pFVar20->field_0x38 = 0;
          *(undefined8 *)&pFVar20->field_0x40 = 0;
          *(undefined8 *)&pFVar20->field_0x48 = 0;
          *(undefined8 *)&pFVar20->field_0x50 = 0;
          local_2460 = (FArguments *)SHorizontalBox::FSlot::FSlot(pFVar20);
        }
        SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                  ((FSlotArguments *)local_1d70,(FSlot *)&local_2460);
        local_2280.Value = 1.0;
        local_2280.Getter._16_8_ = 0;
        local_2280.bIsSet = true;
        local_2280.Getter._0_8_ = 0;
        local_2280.Getter._8_8_ = 0;
        pFVar29 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                            ((FSlotArguments *)local_1d70,&local_2280);
        if (local_22a0 != (undefined4 *)&pFVar29->field_0x50) {
          *(undefined4 *)&pFVar29->field_0x50 = 1;
          pFVar29->field_0x54 = 1;
        }
        paVar44 = (atomic<int> *)&DAT_00000008;
        pFVar40 = pFVar30;
        if (pFVar29 != (FSlotArguments *)0xffffffffffffffb8) {
          pFVar40 = pFVar29;
        }
        if (local_2388.SharedReferenceCount.ReferenceController ==
            (TReferenceControllerBase<1> *)0x0) {
          paVar38 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar38 = &(local_2388.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
          LOCK();
          *paVar38 = (atomic<int>)((int)*paVar38 + 1);
          UNLOCK();
        }
        local_2398 = local_2388.Object;
        FStack_2390.ReferenceController = local_2388.SharedReferenceCount.ReferenceController;
        if (local_2388.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar38 = (atomic<int>)((int)*paVar38 + 1);
          UNLOCK();
        }
        if ((SHorizontalBox **)&pFVar40->field_0x8 != &local_2398) {
          *(SHorizontalBox **)&pFVar40->field_0x8 = local_2388.Object;
          local_2398 = (SHorizontalBox *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)&pFVar40->field_0x10,&FStack_2390);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_2390.ReferenceController);
        local_2460 = SHorizontalBox::FArguments::operator+(pFVar14,pFVar40);
        pFVar20 = ::operator_new(0x58);
        if (pFVar20 != (FSlot *)0x0) {
          *(undefined8 *)pFVar20 = 0;
          *(undefined8 *)&pFVar20->field_0x8 = 0;
          *(undefined8 *)&pFVar20->field_0x10 = 0;
          *(undefined8 *)&pFVar20->field_0x18 = 0;
          *(undefined8 *)&pFVar20->field_0x20 = 0;
          *(undefined8 *)&pFVar20->field_0x28 = 0;
          *(undefined8 *)&pFVar20->field_0x30 = 0;
          *(undefined8 *)&pFVar20->field_0x38 = 0;
          *(undefined8 *)&pFVar20->field_0x40 = 0;
          *(undefined8 *)&pFVar20->field_0x48 = 0;
          *(undefined8 *)&pFVar20->field_0x50 = 0;
          pFVar30 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar20);
        }
        local_22e8 = pFVar30;
        SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                  ((FSlotArguments *)local_1e58,(FSlot *)&local_22e8);
        pFVar22 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1fc0);
        TOptional<FSizeParam>::operator=(&local_1e00._SizeParam,pFVar22);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f90);
        if ((void *)local_1f90._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1f90._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1f90);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1fb0);
        if ((void *)local_1fb0._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1fb0._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1fb0);
        local_1e10 = 3;
        local_1e0c = 1;
        local_1e08 = 1;
        local_1e04 = 1;
        local_res20 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                                ((FSlotArgumentsMixin *)local_1e40,__real_3f800000);
        local_2438 = SNullWidget::NullWidget.SharedReferenceCount;
        local_2440 = (SBorder *)SNullWidget::NullWidget.Object;
        if ((char)local_res8 == '\0') {
          if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                 = (atomic<int>)
                   ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
            UNLOCK();
          }
          local_res8 = local_1e70;
          FVar42 = local_2438;
          FVar27.ReferenceController = local_1e70;
        }
        else {
          pFVar31 = SBorder::FArguments::FArguments(&local_460);
          pIVar32 = FAppStyle::Get();
          pcVar2 = *(code **)((longlong)*pIVar32 + 0x50);
          pFVar33 = ::FName::FName(&local_2048,"ToolPanel.GroupBorder");
          local_2218.Value = (FSlateBrush *)(*pcVar2)(pIVar32,*pFVar33);
          local_2218.bIsSet = true;
          local_2218.Getter._16_8_ = 0;
          local_2218.Getter._0_8_ = 0;
          local_2218.Getter._8_8_ = 0;
          pFVar31 = SBorder::FArguments::BorderImage(pFVar31,&local_2218);
          local_21b0.bIsSet = true;
          local_21b0.Getter._16_8_ = 0;
          local_21b0.Value.Left = ___xmm_3f800000412000003f80000000000000;
          local_21b0.Value.Top = _UNK_1509b3ef4;
          local_21b0.Value.Right = _UNK_1509b3ef8;
          local_21b0.Value.Bottom = _UNK_1509b3efc;
          local_21b0.Getter._0_8_ = 0;
          local_21b0.Getter._8_8_ = 0;
          pFVar31 = SBorder::FArguments::Padding(pFVar31,&local_21b0);
          FVar27.ReferenceController = local_2458.SharedReferenceCount.ReferenceController;
          if (local_2458.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_2458.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_2458.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
            LOCK();
            (local_2458.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_2458.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          pTVar3 = (pFVar31->_Content).Widget.SharedReferenceCount.ReferenceController;
          (pFVar31->_Content).Widget.Object = (SWidget *)local_2458.Object;
          (pFVar31->_Content).Widget.SharedReferenceCount.ReferenceController =
               local_2458.SharedReferenceCount.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          FLLMScope::FLLMScope
                    (&local_2474,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
          local_22e0 = LLMTagDeclaration_UI_Slate.UniqueName;
          FMemScope::FMemScope(&local_22d8,&local_22e0,true);
          TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
          TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
                    (&local_20b0,"SBorder",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                     ,0x93,&local_2492);
          FMemScope::~FMemScope(&local_22d8);
          FLLMScope::~FLLMScope(&local_2474);
          pTVar34 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                              (&local_20b0,&local_2180,pFVar31);
          local_2438.ReferenceController = (pTVar34->SharedReferenceCount).ReferenceController;
          local_2440 = pTVar34->Object;
          FVar42.ReferenceController = local_1e60;
          uVar43 = local_248c;
          local_res8 = local_2438.ReferenceController;
          if (local_2438.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_2438.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_2438.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        pFVar30 = local_res20;
        if (local_2438.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_2438.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_2438.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((SBorder **)&local_res20->field_0x8 != &local_2440) {
          *(SBorder **)&local_res20->field_0x8 = local_2440;
          local_2440 = (SBorder *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)&local_res20->field_0x10,&local_2438);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2438.ReferenceController);
        pFVar14 = SHorizontalBox::FArguments::operator+(local_2460,pFVar30);
        FLLMScope::FLLMScope
                  (&local_2470,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
        local_22d0 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(&local_22a8,&local_22d0,true);
        TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
        TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                  (&local_20c8,"SHorizontalBox",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                   ,0x6c,&local_2491);
        FMemScope::~FMemScope(&local_22a8);
        FLLMScope::~FLLMScope(&local_2470);
        TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                  (&local_20c8,&local_2378,pFVar14);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20c8._Widget.SharedReferenceCount.ReferenceController);
        if ((uVar43 >> 0xe & 1) != 0) {
          uVar43 = uVar43 & 0xffffbfff;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_res8);
        }
        if ((uVar43 >> 0xd & 1) != 0) {
          uVar43 = uVar43 & 0xffffdfff;
          TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_2180);
        }
        if ((uVar43 >> 0xc & 1) != 0) {
          uVar43 = uVar43 & 0xffffefff;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_20b0._Widget.SharedReferenceCount.ReferenceController);
        }
        if ((uVar43 >> 0xb & 1) != 0) {
          uVar43 = uVar43 & 0xfffff7ff;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar27.ReferenceController);
        }
        if ((uVar43 >> 10 & 1) != 0) {
          uVar43 = uVar43 & 0xfffffbff;
          SBorder::FArguments::~FArguments(&local_460);
        }
        if ((uVar43 >> 9 & 1) != 0) {
          uVar43 = uVar43 & 0xfffffdff;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar42.ReferenceController);
        }
        TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
                  (&local_1e00);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e28);
        if ((void *)local_1e28._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1e28._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1e28);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1e48);
        if (local_1e58[0] != (undefined8 *)0x0) {
          (**(code **)*local_1e58[0])(local_1e58[0],1);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2388.SharedReferenceCount.ReferenceController);
        TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
                  (&local_1d18);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d40);
        if ((void *)local_1d40._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1d40._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1d40);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1d60);
        if (local_1d70[0] != (undefined8 *)0x0) {
          (**(code **)*local_1d70[0])(local_1d70[0],1);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2170.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2098._Widget.SharedReferenceCount.ReferenceController);
        if ((uVar43 >> 8 & 1) != 0) {
          uVar43 = uVar43 & 0xfffffeff;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2158);
        }
        if ((char)uVar43 < '\0') {
          uVar43 = uVar43 & 0xffffff7f;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2150.SharedReferenceCount.ReferenceController);
        }
        if ((uVar43 & 0x40) != 0) {
          uVar43 = uVar43 & 0xffffffbf;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2040._Widget.SharedReferenceCount.ReferenceController);
        }
        if ((uVar43 & 0x20) != 0) {
          uVar43 = uVar43 & 0xffffffdf;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar45);
        }
        if ((uVar43 & 0x10) != 0) {
          uVar43 = uVar43 & 0xffffffef;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2140.SharedReferenceCount.ReferenceController);
        }
        if ((uVar43 & 8) != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2080._Widget.SharedReferenceCount.ReferenceController);
        }
        if ((uVar43 & 4) != 0) {
          SImage::FArguments::~FArguments(&local_d88);
        }
        if ((uVar43 & 2) != 0) {
          SBox::FArguments::~FArguments(&local_ae0);
        }
        if ((uVar43 & 1) != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2128);
        }
        SBox::FArguments::~FArguments(&local_7a0);
        TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
                  (&local_1f08);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f30);
        if ((void *)local_1f30._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1f30._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1f30);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1f50[0].ReferenceController);
        if (local_1f60 != (undefined8 *)0x0) {
          (**(code **)*local_1f60)(local_1f60,1);
        }
        DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
                  ((FSlotArguments *)local_1298._Slots.AllocatorInstance.Data,
                   local_1298._Slots.ArrayNum);
        if ((FSlotArguments *)local_1298._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
          FMemory::Free(local_1298._Slots.AllocatorInstance.Data);
        }
        FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1298);
        if (bVar4) {
          pFVar15 = SVerticalBox::FArguments::FArguments(&local_1090);
          pFVar35 = ::operator_new(0x58);
          local_22c8 = (FSlot *)0x0;
          if (pFVar35 != (FSlot *)0x0) {
            *(undefined8 *)pFVar35 = 0;
            *(undefined8 *)&pFVar35->field_0x8 = 0;
            *(undefined8 *)&pFVar35->field_0x10 = 0;
            *(undefined8 *)&pFVar35->field_0x18 = 0;
            *(undefined8 *)&pFVar35->field_0x20 = 0;
            *(undefined8 *)&pFVar35->field_0x28 = 0;
            *(undefined8 *)&pFVar35->field_0x30 = 0;
            *(undefined8 *)&pFVar35->field_0x38 = 0;
            *(undefined8 *)&pFVar35->field_0x40 = 0;
            *(undefined8 *)&pFVar35->field_0x48 = 0;
            *(undefined8 *)&pFVar35->field_0x50 = 0;
            local_22c8 = SVerticalBox::FSlot::FSlot(pFVar35);
          }
          SVerticalBox::FSlot::FSlotArguments::FSlotArguments
                    ((FSlotArguments *)local_1ba0,(FSlot *)&local_22c8);
          pFVar21 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)local_1ba0);
          if (local_2378.SharedReferenceCount.ReferenceController ==
              (TReferenceControllerBase<1> *)0x0) {
            paVar38 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar38 = &(local_2378.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            LOCK();
            *paVar38 = (atomic<int>)((int)*paVar38 + 1);
            UNLOCK();
          }
          local_2358 = local_2378.Object;
          FStack_2350.ReferenceController = local_2378.SharedReferenceCount.ReferenceController;
          if (local_2378.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar38 = (atomic<int>)((int)*paVar38 + 1);
            UNLOCK();
          }
          if ((SHorizontalBox **)&pFVar21->field_0x8 != &local_2358) {
            *(SHorizontalBox **)&pFVar21->field_0x8 = local_2378.Object;
            local_2358 = (SHorizontalBox *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)&pFVar21->field_0x10,&FStack_2350);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_2350.ReferenceController);
          pFVar15 = SVerticalBox::FArguments::operator+(pFVar15,pFVar21);
          pFVar35 = ::operator_new(0x58);
          local_22c0 = (FSlot *)0x0;
          if (pFVar35 != (FSlot *)0x0) {
            *(undefined8 *)pFVar35 = 0;
            *(undefined8 *)&pFVar35->field_0x8 = 0;
            *(undefined8 *)&pFVar35->field_0x10 = 0;
            *(undefined8 *)&pFVar35->field_0x18 = 0;
            *(undefined8 *)&pFVar35->field_0x20 = 0;
            *(undefined8 *)&pFVar35->field_0x28 = 0;
            *(undefined8 *)&pFVar35->field_0x30 = 0;
            *(undefined8 *)&pFVar35->field_0x38 = 0;
            *(undefined8 *)&pFVar35->field_0x40 = 0;
            *(undefined8 *)&pFVar35->field_0x48 = 0;
            *(undefined8 *)&pFVar35->field_0x50 = 0;
            local_22c0 = SVerticalBox::FSlot::FSlot(pFVar35);
          }
          SVerticalBox::FSlot::FSlotArguments::FSlotArguments
                    ((FSlotArguments *)local_1c88,(FSlot *)&local_22c0);
          pFVar21 = SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)local_1c88);
          if (local_2348.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            paVar44 = &(local_2348.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
            LOCK();
            *paVar44 = (atomic<int>)((int)*paVar44 + 1);
            UNLOCK();
          }
          local_2368 = local_2348.Object;
          FStack_2360.ReferenceController = local_2348.SharedReferenceCount.ReferenceController;
          if (local_2348.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar44 = (atomic<int>)((int)*paVar44 + 1);
            UNLOCK();
          }
          if ((SVerticalBox **)&pFVar21->field_0x8 != &local_2368) {
            *(SVerticalBox **)&pFVar21->field_0x8 = local_2348.Object;
            local_2368 = (SVerticalBox *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)&pFVar21->field_0x10,&FStack_2360);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_2360.ReferenceController);
          pFVar15 = SVerticalBox::FArguments::operator+(pFVar15,pFVar21);
          FLLMScope::FLLMScope
                    (&local_246c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
          local_22b8 = LLMTagDeclaration_UI_Slate.UniqueName;
          FMemScope::FMemScope(&local_22b0,&local_22b8,true);
          TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
          TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                    (&local_2068,"SVerticalBox",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                     ,0x9d,local_2490);
          FMemScope::~FMemScope(&local_22b0);
          FLLMScope::~FLLMScope(&local_246c);
          pTVar36 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                              (&local_2068,&local_2120,pFVar15);
          __return_storage_ptr__->Object = (SWidget *)pTVar36->Object;
          pTVar45 = (pTVar36->SharedReferenceCount).ReferenceController;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar45;
          if (pTVar45 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar45->SharedReferenceCount = (atomic<int>)((int)pTVar45->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2120.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2068._Widget.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2348.SharedReferenceCount.ReferenceController);
          TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
                    (&local_1c30);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c58);
          if ((void *)local_1c58._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_1c58._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_1c58);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c78);
          if (local_1c88[0] != (undefined8 *)0x0) {
            (**(code **)*local_1c88[0])(local_1c88[0],1);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2378.SharedReferenceCount.ReferenceController);
          TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
                    (&local_1b48);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b70);
          if ((void *)local_1b70._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_1b70._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_1b70);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1b90);
          if (local_1ba0[0] != (undefined8 *)0x0) {
            (**(code **)*local_1ba0[0])(local_1ba0[0],1);
          }
          DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
                    ((FSlotArguments *)local_1090._Slots.AllocatorInstance.Data,
                     local_1090._Slots.ArrayNum);
          if ((FSlotArguments *)local_1090._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
            FMemory::Free(local_1090._Slots.AllocatorInstance.Data);
          }
          FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1090);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2378.SharedReferenceCount.ReferenceController);
        }
        else {
          __return_storage_ptr__->Object = (SWidget *)local_2378.Object;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               local_2378.SharedReferenceCount.ReferenceController;
          if (local_2378.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_2378.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_2378.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2378.SharedReferenceCount.ReferenceController);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2348.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2458.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2388.SharedReferenceCount.ReferenceController);
        return __return_storage_ptr__;
      }
      if ((iVar41 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        pTVar16 = (TSharedRef<SWidget,1> *)(*pcVar2)();
        return pTVar16;
      }
      pTVar46 = (TSharedRef<IMessageToken,1> *)
                ((pTVar13->AllocatorInstance).Data + (longlong)iVar41 * 0x10);
      iVar12 = (**(code **)(pTVar46->Object->_padding_ + 8))();
      if (iVar12 != 4) break;
LAB_142bf8113:
      CreateMessage(this,&local_2458,pTVar46,fVar5);
      local_res8 = (TReferenceControllerBase<1> *)CONCAT71(local_res8._1_7_,1);
LAB_142bf812d:
      pFVar18 = (FSlotArguments *)(ulonglong)(iVar41 + 1);
    }
    if (iVar12 == 7) {
      if (pFVar39 != (FSlotArguments *)0x0) goto LAB_142bf812d;
      pTVar45 = (pTVar46->SharedReferenceCount).ReferenceController;
      if (pTVar45 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar45->SharedReferenceCount = (atomic<int>)((int)pTVar45->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar19 = FTokenizedMessage::GetSeverityIconName((Type)local_2050);
      pFVar39 = *(FSlotArguments **)FVar19;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar45);
      pFVar18 = (FSlotArguments *)(ulonglong)(iVar41 + 1);
    }
    else {
      if (iVar12 == 9) goto LAB_142bf8113;
      if (iVar12 == 0xd) {
        pFVar14 = SHorizontalBox::FArguments::FArguments(&local_14a0);
        this_01 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                            (&local_1f78,"SHorizontalBox",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\UserInterface\\SMessageLogMessageListRow.cpp"
                             ,0x5a,&local_2496);
        TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                  (this_01,&local_2228,pFVar14);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1f78._Widget.SharedReferenceCount.ReferenceController);
        DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
                  ((FSlotArguments *)local_14a0._Slots.AllocatorInstance.Data,
                   local_14a0._Slots.ArrayNum);
        if ((FSlotArguments *)local_14a0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
          FMemory::Free(local_14a0._Slots.AllocatorInstance.Data);
        }
        FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_14a0);
        CreateMessage(this,&local_2228,pTVar46,fVar6);
        pFVar17 = SVerticalBox::AddSlot(local_2348.Object,&local_e88);
        pFVar18 = SVerticalBox::FSlot::FSlotArguments::AutoHeight
                            ((FSlotArguments *)&pFVar17->_padding_);
        local_2250 = 1;
        local_2260 = uVar10;
        uStack_2258 = uVar9;
        local_2238 = 0;
        local_2248 = (undefined1  [8])0x0;
        pvStack_2240 = (void *)0x0;
        pFVar18->field_0x28 = 1;
        *(undefined8 *)&pFVar18->field_0x18 = uVar10;
        *(undefined8 *)&pFVar18->field_0x20 = uVar9;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar18->field_0x30,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2248);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2248);
        if (pvStack_2240 != (void *)0x0) {
          FMemory::Free(pvStack_2240);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_2248);
        FVar27.ReferenceController = local_2228.SharedReferenceCount.ReferenceController;
        local_2028.Object = (SWidget *)local_2228.Object;
        local_2028.SharedReferenceCount.ReferenceController =
             local_2228.SharedReferenceCount.ReferenceController;
        this_02 = pFVar21;
        if (&pFVar18->field_0x18 != (undefined1 *)0x0) {
          this_02 = pFVar18;
        }
        if (local_2228.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_2228.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2228.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
        }
        TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                  ((FSlotArguments *)this_02,&local_2028);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar27.ReferenceController);
        SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
        ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_e88);
        bVar4 = true;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar27.ReferenceController);
        pFVar18 = (FSlotArguments *)(ulonglong)(iVar41 + 1);
      }
      else {
        CreateMessage(this,&local_2388,pTVar46,fVar6);
        pFVar18 = (FSlotArguments *)(ulonglong)(iVar41 + 1);
      }
    }
  } while( true );
}

// GetActionLinkEnable @ 142bfa7f0

bool __thiscall
SMessageLogMessageListRow::GetActionLinkEnable
          (SMessageLogMessageListRow *this,TSharedRef<FActionToken,1> *param_1)

{
  FActionToken *pFVar1;
  char cVar2;
  longlong *plVar3;
  bool bVar4;
  FReadAccessScope local_28;
  
  pFVar1 = param_1->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar1->ActionDelegate,
             &local_28);
  if ((*(int *)&(pFVar1->ActionDelegate).field_0x10 == 0) ||
     (plVar3 = *(longlong **)&(pFVar1->ActionDelegate).field_0x8, plVar3 == (longlong *)0x0)) {
LAB_142bfa8ce:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 == '\0') goto LAB_142bfa8ce;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if ((pFVar1->bSingleUse == false) || (pFVar1->bActionExecuted == false)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar1->CanExecuteActionDelegate,&local_28);
      if ((*(int *)&(pFVar1->CanExecuteActionDelegate).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(pFVar1->CanExecuteActionDelegate).field_0x8,
         plVar3 != (longlong *)0x0)) {
        cVar2 = (**(code **)(*plVar3 + 0x38))();
        if (cVar2 != '\0') {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_28);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pFVar1->CanExecuteActionDelegate,&local_28);
          if (*(int *)&(pFVar1->CanExecuteActionDelegate).field_0x10 == 0) {
            plVar3 = (longlong *)0x0;
          }
          else {
            plVar3 = *(longlong **)&(pFVar1->CanExecuteActionDelegate).field_0x8;
          }
          cVar2 = (**(code **)(*plVar3 + 0x60))();
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_28);
          if (cVar2 != '\0') {
            bVar4 = true;
            goto LAB_142bfa8da;
          }
          goto LAB_142bfa8d8;
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      bVar4 = true;
      goto LAB_142bfa8da;
    }
  }
LAB_142bfa8d8:
  bVar4 = false;
LAB_142bfa8da:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar4;
}

// GetActionLinkVisibility @ 142bfa900

EVisibility __thiscall
SMessageLogMessageListRow::GetActionLinkVisibility
          (SMessageLogMessageListRow *this,TSharedRef<FActionToken,1> *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  EVisibility EVar4;
  longlong *in_R8;
  FReadAccessScope local_28;
  
  lVar1 = *in_R8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x40),&local_28);
  if ((*(int *)(lVar1 + 0x50) != 0) && (*(longlong **)(lVar1 + 0x48) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x38))();
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_142bfa948;
    }
  }
  bVar2 = false;
LAB_142bfa948:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  EVar4 = EVisibility::Collapsed;
  if (bVar2) {
    EVar4 = EVisibility::Visible;
  }
  *(TEnumAsByte<EVisibility::Private> *)&param_1->Object = EVar4.Value.Value;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_R8[1]);
  return (EVisibility)SUB81(param_1,0);
}

// HandleActionHyperlinkNavigate @ 142c02040

void __thiscall
SMessageLogMessageListRow::HandleActionHyperlinkNavigate
          (SMessageLogMessageListRow *this,TSharedRef<FActionToken,1> *param_1)

{
  FActionToken *pFVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  pFVar1 = param_1->Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar1->ActionDelegate,
             &local_28);
  if ((*(int *)&(pFVar1->ActionDelegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(pFVar1->ActionDelegate).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  pFVar1->bActionExecuted = true;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleHyperlinkNavigate @ 142c02a50

void __thiscall
SMessageLogMessageListRow::HandleHyperlinkNavigate
          (SMessageLogMessageListRow *this,TSharedRef<IMessageToken,1> *param_1)

{
  atomic<unsigned___int64> aVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  FReadAccessScope local_28;
  
  this_00 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
            (**(code **)(param_1->Object->_padding_ + 0x18))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_28);
  if ((*(int *)&this_00[2].AccessDetector.State != 0) &&
     (aVar1 = this_00[1].AccessDetector.State, aVar1 != (atomic<unsigned___int64>)0x0)) {
    (**(code **)(*(longlong *)aVar1 + 0x68))(aVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  local_28.DestructionSentinel._0_8_ = (this->Message).Object;
  local_28.DestructionSentinel.Accessor =
       (FMRSWRecursiveAccessDetector *)(this->Message).SharedReferenceCount.ReferenceController;
  if ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegate<void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
  ::ExecuteIfBound(&this->OnTokenClicked,(TSharedPtr<FTokenizedMessage,1> *)&local_28,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleTokenButtonClicked @ 142c02fe0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMessageLogMessageListRow::HandleTokenButtonClicked
          (SMessageLogMessageListRow *this,FReply *__return_storage_ptr__,
          TSharedRef<IMessageToken,1> *param_1)

{
  atomic<unsigned___int64> aVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  FReadAccessScope local_28;
  
  this_00 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
            (**(code **)(param_1->Object->_padding_ + 0x18))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_28);
  if ((*(int *)&this_00[2].AccessDetector.State != 0) &&
     (aVar1 = this_00[1].AccessDetector.State, aVar1 != (atomic<unsigned___int64>)0x0)) {
    (**(code **)(*(longlong *)aVar1 + 0x68))(aVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  local_28.DestructionSentinel._0_8_ = (this->Message).Object;
  local_28.DestructionSentinel.Accessor =
       (FMRSWRecursiveAccessDetector *)(this->Message).SharedReferenceCount.ReferenceController;
  if ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegate<void___cdecl(TSharedPtr<FTokenizedMessage,1>,TSharedRef<IMessageToken,1>_const_&),FDefaultDelegateUserPolicy>
  ::ExecuteIfBound(&this->OnTokenClicked,(TSharedPtr<FTokenizedMessage,1> *)&local_28,param_1);
  FReply::FReply(__return_storage_ptr__,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 142c11c90

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMessageLogMessageListRow::OnMouseButtonDoubleClick
          (SMessageLogMessageListRow *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  longlong lVar3;
  longlong *plVar4;
  FTokenizedMessage *pFVar5;
  bool bVar6;
  longlong local_e8;
  FTokenizedMessage *local_e0;
  FReadAccessScope local_d8;
  FReply local_c0;
  
  STableRow<TSharedPtr<FTokenizedMessage,1>_>::OnMouseButtonDoubleClick
            ((STableRow<TSharedPtr<FTokenizedMessage,1>_> *)this,__return_storage_ptr__,param_1,
             param_2);
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar6 = FVar2 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar6) {
    pFVar5 = (this->Message).Object;
    lVar3 = this->_padding_;
    if (pFVar5 != (FTokenizedMessage *)0x0) {
      LOCK();
      *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->OnTokenClicked).field_0x10,&local_d8);
    if ((*(int *)&(this->OnMessageDoubleClicked).field_0x8 == 0) ||
       (plVar4 = *(longlong **)&this->OnMessageDoubleClicked, plVar4 == (longlong *)0x0)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d8);
    }
    else {
      local_e8 = lVar3;
      local_e0 = pFVar5;
      (**(code **)(*plVar4 + 0x68))(plVar4,&local_e8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d8);
      pFVar5 = (FTokenizedMessage *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar5);
    FReply::FReply(&local_c0,true);
    FReply::operator=(__return_storage_ptr__,&local_c0);
    FReply::~FReply(&local_c0);
  }
  return __return_storage_ptr__;
}

