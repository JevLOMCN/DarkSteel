// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 23

// FSlateAsyncTaskNotificationImpl @ 1427b4160

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateAsyncTaskNotificationImpl * __thiscall
FSlateAsyncTaskNotificationImpl::FSlateAsyncTaskNotificationImpl
          (FSlateAsyncTaskNotificationImpl *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  FCoreAsyncTaskNotificationImpl::FCoreAsyncTaskNotificationImpl
            ((FCoreAsyncTaskNotificationImpl *)this);
  this->_padding_ = (longlong)&___7FSlateAsyncTaskNotificationImpl__6B_;
  FText::FText(&(this->NotificationConfig).TitleText);
  FText::FText(&(this->NotificationConfig).ProgressText);
  (this->NotificationConfig).bCanCancel.Value = false;
  (this->NotificationConfig).bCanCancel.bIsSet = true;
  (this->NotificationConfig).FadeInDuration = 0.5;
  (this->NotificationConfig).FadeOutDuration = 2.0;
  (this->NotificationConfig).ExpireDuration = 1.0;
  (this->NotificationConfig).bIsHeadless = false;
  *(undefined4 *)&(this->NotificationConfig).bCanCancel.Getter.field_0x14 = 0;
  *(undefined8 *)&(this->NotificationConfig).bCanCancel.Getter = 0;
  *(undefined8 *)&(this->NotificationConfig).bCanCancel.Getter.field_0x8 = 0;
  *(undefined4 *)&(this->NotificationConfig).bCanCancel.Getter.field_0x10 = 0;
  (this->NotificationConfig).bKeepOpenOnSuccess.Value = false;
  (this->NotificationConfig).bKeepOpenOnSuccess.bIsSet = true;
  *(undefined4 *)&(this->NotificationConfig).bKeepOpenOnSuccess.Getter.field_0x14 = 0;
  *(undefined8 *)&(this->NotificationConfig).bKeepOpenOnSuccess.Getter = 0;
  *(undefined8 *)&(this->NotificationConfig).bKeepOpenOnSuccess.Getter.field_0x8 = 0;
  *(undefined4 *)&(this->NotificationConfig).bKeepOpenOnSuccess.Getter.field_0x10 = 0;
  (this->NotificationConfig).bKeepOpenOnFailure.Value = false;
  (this->NotificationConfig).bKeepOpenOnFailure.bIsSet = true;
  *(undefined4 *)&(this->NotificationConfig).bKeepOpenOnFailure.Getter.field_0x14 = 0;
  *(undefined8 *)&(this->NotificationConfig).bKeepOpenOnFailure.Getter = 0;
  *(undefined8 *)&(this->NotificationConfig).bKeepOpenOnFailure.Getter.field_0x8 = 0;
  *(undefined4 *)&(this->NotificationConfig).bKeepOpenOnFailure.Getter.field_0x10 = 0;
  (this->NotificationConfig).Icon = (FSlateBrush *)0x0;
  (this->NotificationConfig).LogCategory = (FLogCategoryBase *)0x0;
  (this->TickerHandle).Object = (FElement *)0x0;
  (this->TickerHandle).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->PromptAction = (TAtomic<EAsyncTaskNotificationPromptAction>)0x0;
  FText::FText(&this->PromptButtonText);
  (this->bCanCancelAttr).Value = false;
  (this->bCanCancelAttr).bIsSet = true;
  *(undefined8 *)&(this->bCanCancelAttr).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bCanCancelAttr).Getter = 0;
  *(undefined8 *)&(this->bCanCancelAttr).Getter.field_0x8 = 0;
  (this->bKeepOpenOnSuccessAttr).Value = false;
  (this->bKeepOpenOnSuccessAttr).bIsSet = true;
  this->bCanCancel = false;
  *(undefined8 *)&(this->bKeepOpenOnSuccessAttr).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bKeepOpenOnSuccessAttr).Getter = 0;
  *(undefined8 *)&(this->bKeepOpenOnSuccessAttr).Getter.field_0x8 = 0;
  (this->bKeepOpenOnFailureAttr).Value = false;
  (this->bKeepOpenOnFailureAttr).bIsSet = true;
  this->bKeepOpenOnSuccess = false;
  *(undefined8 *)&(this->bKeepOpenOnFailureAttr).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bKeepOpenOnFailureAttr).Getter = 0;
  *(undefined8 *)&(this->bKeepOpenOnFailureAttr).Getter.field_0x8 = 0;
  this->bKeepOpenOnFailure = false;
  this->bInitializedNotification = false;
  this->CurrentNotificationState = None;
  (this->PendingNotificationState).bIsSet = false;
  (this->OwningNotification).Object = (SNotificationItem *)0x0;
  (this->OwningNotification).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AttributesCS,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CompletionCS,4000);
  return this;
}

// ~FSlateAsyncTaskNotificationImpl @ 1427b9970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAsyncTaskNotificationImpl::~FSlateAsyncTaskNotificationImpl
          (FSlateAsyncTaskNotificationImpl *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  void *pvVar6;
  ITextData *pIVar7;
  longlong *plVar8;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  this->_padding_ = (longlong)&___7FSlateAsyncTaskNotificationImpl__6B_;
  if ((((this->TickerHandle).Object != (FElement *)0x0) &&
      (pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
      pTVar5 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar5->SharedReferenceCount)) {
    local_18.Object = (this->TickerHandle).Object;
    local_18.WeakReferenceCount.ReferenceController =
         (this->TickerHandle).WeakReferenceCount.ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FTSTicker::RemoveTicker(&local_18);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CompletionCS);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AttributesCS);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningNotification).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bKeepOpenOnFailureAttr).Getter);
  pvVar6 = *(void **)&(this->bKeepOpenOnFailureAttr).Getter.field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bKeepOpenOnFailureAttr).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bKeepOpenOnSuccessAttr).Getter);
  pvVar6 = *(void **)&(this->bKeepOpenOnSuccessAttr).Getter.field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bKeepOpenOnSuccessAttr).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bCanCancelAttr).Getter);
  pvVar6 = *(void **)&(this->bCanCancelAttr).Getter.field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bCanCancelAttr).Getter);
  pIVar7 = (this->PromptButtonText).TextData.Reference;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  FAsyncTaskNotificationConfig::~FAsyncTaskNotificationConfig(&this->NotificationConfig);
  FCoreAsyncTaskNotificationImpl::~FCoreAsyncTaskNotificationImpl
            ((FCoreAsyncTaskNotificationImpl *)this);
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  return;
}

// CreateNotification @ 1427fec00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAsyncTaskNotificationImpl::CreateNotification(FSlateAsyncTaskNotificationImpl *this)

{
  TSharedPtr<SNotificationItem,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  TDelegate<bool___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy> *pTVar5;
  TDelegate<EVisibility___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
  *pTVar6;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar7;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar8;
  longlong lVar9;
  FSlateNotificationManager *this_00;
  TSharedPtr<SNotificationItem,1> *pTVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint uStack_71c;
  undefined1 local_718 [8];
  ForAnyElementType local_710;
  int local_708;
  undefined1 local_700 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_6e8;
  ForAnyElementType FStack_6e0;
  ulonglong local_6d8;
  undefined1 local_6d0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_6b8;
  ForAnyElementType FStack_6b0;
  ulonglong local_6a8;
  undefined1 local_6a0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_688;
  ForAnyElementType FStack_680;
  ulonglong local_678;
  undefined1 local_670 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_658;
  ForAnyElementType FStack_650;
  ulonglong local_648;
  undefined1 local_640 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_628;
  ForAnyElementType FStack_620;
  ulonglong local_618;
  TDelegate<bool___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy> local_610;
  FDestructionSentinel local_5f8;
  FDestructionSentinel local_5e0;
  FDestructionSentinel local_5c8;
  FDestructionSentinel local_5b0;
  FDestructionSentinel local_598;
  FDestructionSentinel local_580;
  undefined1 local_568 [24];
  undefined1 local_550 [24];
  code *local_538;
  longlong lStack_530;
  code *local_528;
  longlong lStack_520;
  code *local_518;
  longlong lStack_510;
  code *local_508;
  longlong lStack_500;
  code *local_4f8;
  longlong lStack_4f0;
  code *local_4e8;
  longlong lStack_4e0;
  code *local_4d8;
  longlong lStack_4d0;
  TSharedPtr<SNotificationItem,1> local_4c8;
  FText local_4b8;
  code *local_4a8;
  longlong lStack_4a0;
  code *local_498;
  longlong lStack_490;
  FText local_488;
  FNotificationInfo local_478;
  TDelegate<EVisibility___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
  local_310;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_2f8;
  TDelegate<bool___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy> local_2e0;
  TDelegate<EVisibility___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
  local_2c8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_2b0;
  TDelegate<EVisibility___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
  local_298;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_280;
  TDelegate<bool___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy> local_268;
  FNotificationButtonInfo local_250;
  FNotificationButtonInfo local_1a0;
  FNotificationButtonInfo local_f0;
  
  if (((this->NotificationConfig).bIsHeadless != false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NotificationConfig.bIsHeadless",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Notifications\\SlateAsyncTaskNotificationImpl.cpp"
                         ,0x5d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar1 = &this->OwningNotification;
  if (pTVar1->Object == (SNotificationItem *)0x0) {
    pFVar4 = FText::GetEmpty();
    FNotificationInfo::FNotificationInfo(&local_478,pFVar4);
    local_478.Image = (this->NotificationConfig).Icon;
    local_478.FadeOutDuration = (this->NotificationConfig).FadeOutDuration;
    local_478.ExpireDuration = (this->NotificationConfig).ExpireDuration;
    local_478.FadeInDuration = (this->NotificationConfig).FadeInDuration;
    lStack_530 = (ulonglong)uStack_71c << 0x20;
    local_538 = IsPromptButtonEnabled;
    local_478.bFireAndForget = false;
    local_478.bUseThrobber = true;
    local_478.bUseSuccessFailIcons = true;
    pTVar5 = TDelegate<bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
             ::CreateSP<FSlateAsyncTaskNotificationImpl>(&local_268,this,(pmf_52160062 *)&local_538)
    ;
    lStack_520 = (ulonglong)uStack_71c << 0x20;
    local_528 = GetPromptButtonVisibility;
    pTVar6 = TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
             ::CreateSP<FSlateAsyncTaskNotificationImpl>(&local_310,this,(pmf_a30f9f71 *)&local_528)
    ;
    lStack_510 = (ulonglong)uStack_71c << 0x20;
    local_518 = OnPromptButtonClicked;
    pTVar7 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
             CreateSP<FSlateAsyncTaskNotificationImpl>(&local_2f8,this,(pmf_2f44b965 *)&local_518);
    pFVar4 = FText::GetEmpty();
    local_6a0._0_8_ = (pFVar4->TextData).Reference;
    if ((ITextData *)local_6a0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_6a0._0_8_ + 8))(local_6a0._0_8_,local_res8);
    }
    local_6a0._8_4_ = pFVar4->Flags;
    local_6a0[0x10] = true;
    lStack_500 = (ulonglong)uStack_71c << 0x20;
    local_508 = GetPromptButtonText;
    local_688.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_680.Data = (FScriptContainerElement *)0x0;
    local_678 = 0;
    pTVar8 = TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
             CreateSP<FSlateAsyncTaskNotificationImpl>
                       ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_718,this,
                        (pmf_834887e5 *)&local_508);
    FText::FText((FText *)local_568);
    local_568[0x10] = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_550,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_718,
               (FWriteAccessScope *)&local_5f8);
    if ((local_708 != 0) && (local_710.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_710.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_710,0,0,0x10);
      local_708 = 0;
    }
    if (local_5f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f8.Accessor,&local_5f8);
    }
    if (local_710.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_710.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_718);
    FNotificationButtonInfo::FNotificationButtonInfo
              (&local_250,(TAttribute<FText> *)local_568,(TAttribute<FText> *)local_6a0,pTVar7,
               pTVar6,pTVar5);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_550);
    if ((void *)local_550._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_550._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_550);
    if ((ITextData *)local_568._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_568._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_688,(FWriteAccessScope *)&local_5e0);
    if (((int)local_678 != 0) && (FStack_680.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_680.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_680,0,0,0x10);
      local_678 = local_678 & 0xffffffff00000000;
    }
    if (local_5e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5e0.Accessor,&local_5e0);
    }
    if (FStack_680.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_680.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_688.AccessDetector);
    if ((ITextData *)local_6a0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_6a0._0_8_ + 0x10))();
    }
    if (((local_478.ButtonDetails.AllocatorInstance.Data <= &local_250) &&
        (&local_250 <
         (FNotificationButtonInfo *)
         (local_478.ButtonDetails.AllocatorInstance.Data +
         (longlong)local_478.ButtonDetails.ArrayMax * 0xb0))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_478.ButtonDetails.ArrayNum == local_478.ButtonDetails.ArrayMax) {
      local_478.ButtonDetails.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x8b0,&local_478.ButtonDetails.AllocatorInstance,
                      &local_478.ButtonDetails.ArrayMax);
    }
    lVar9 = (longlong)local_478.ButtonDetails.ArrayNum;
    local_478.ButtonDetails.ArrayNum = local_478.ButtonDetails.ArrayNum + 1;
    FNotificationButtonInfo::FNotificationButtonInfo
              ((FNotificationButtonInfo *)
               (local_478.ButtonDetails.AllocatorInstance.Data + lVar9 * 0xb0),&local_250);
    FNotificationButtonInfo::~FNotificationButtonInfo(&local_250);
    lStack_4f0 = (ulonglong)uStack_71c << 0x20;
    local_4f8 = IsCancelButtonEnabled;
    pTVar5 = TDelegate<bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
             ::CreateSP<FSlateAsyncTaskNotificationImpl>(&local_2e0,this,(pmf_52160062 *)&local_4f8)
    ;
    lStack_4e0 = (ulonglong)uStack_71c << 0x20;
    local_4e8 = GetCancelButtonVisibility;
    pTVar6 = TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
             ::CreateSP<FSlateAsyncTaskNotificationImpl>(&local_2c8,this,(pmf_a30f9f71 *)&local_4e8)
    ;
    lStack_4d0 = (ulonglong)uStack_71c << 0x20;
    local_4d8 = OnCancelButtonClicked;
    pTVar7 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
             CreateSP<FSlateAsyncTaskNotificationImpl>(&local_2b0,this,(pmf_2f44b965 *)&local_4d8);
    pFVar4 = FText::GetEmpty();
    local_6d0._0_8_ = (pFVar4->TextData).Reference;
    if ((ITextData *)local_6d0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_6d0._0_8_ + 8))(local_6d0._0_8_,local_res10);
    }
    local_6d0._8_4_ = pFVar4->Flags;
    local_6d0[0x10] = true;
    local_6a8 = 0;
    local_6b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_6b0.Data = (FScriptContainerElement *)0x0;
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_488,L"SlateAsyncTaskNotification",L"CancelButton",L"Cancel");
    FText::FText((FText *)local_640,pFVar4);
    local_618 = 0;
    local_640[0x10] = true;
    local_628.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_620.Data = (FScriptContainerElement *)0x0;
    FNotificationButtonInfo::FNotificationButtonInfo
              (&local_1a0,(TAttribute<FText> *)local_640,(TAttribute<FText> *)local_6d0,pTVar7,
               pTVar6,pTVar5);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_628,(FWriteAccessScope *)&local_5c8);
    if (((int)local_618 != 0) && (FStack_620.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_620.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_620,0,0,0x10);
      local_618 = local_618 & 0xffffffff00000000;
    }
    if (local_5c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5c8.Accessor,&local_5c8);
    }
    if (FStack_620.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_620.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_628.AccessDetector);
    if ((ITextData *)local_640._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_640._0_8_ + 0x10))();
    }
    if (local_488.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_488.TextData.Reference + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_6b8,(FWriteAccessScope *)&local_5b0);
    if (((int)local_6a8 != 0) && (FStack_6b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_6b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6b0,0,0,0x10);
      local_6a8 = local_6a8 & 0xffffffff00000000;
    }
    if (local_5b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5b0.Accessor,&local_5b0);
    }
    if (FStack_6b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_6b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_6b8.AccessDetector);
    if ((ITextData *)local_6d0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_6d0._0_8_ + 0x10))();
    }
    if (((local_478.ButtonDetails.AllocatorInstance.Data <= &local_1a0) &&
        (&local_1a0 <
         (FNotificationButtonInfo *)
         (local_478.ButtonDetails.AllocatorInstance.Data +
         (longlong)local_478.ButtonDetails.ArrayMax * 0xb0))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_478.ButtonDetails.ArrayNum == local_478.ButtonDetails.ArrayMax) {
      local_478.ButtonDetails.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x8b0,&local_478.ButtonDetails.AllocatorInstance,
                      &local_478.ButtonDetails.ArrayMax);
    }
    lVar9 = (longlong)local_478.ButtonDetails.ArrayNum;
    local_478.ButtonDetails.ArrayNum = local_478.ButtonDetails.ArrayNum + 1;
    FNotificationButtonInfo::FNotificationButtonInfo
              ((FNotificationButtonInfo *)
               (local_478.ButtonDetails.AllocatorInstance.Data + lVar9 * 0xb0),&local_1a0);
    FNotificationButtonInfo::~FNotificationButtonInfo(&local_1a0);
    lStack_490 = (ulonglong)uStack_71c << 0x20;
    local_498 = GetCloseButtonVisibility;
    local_610._16_8_ = 0;
    local_610._0_8_ = 0;
    local_610._8_8_ = 0;
    pTVar6 = TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
             ::CreateSP<FSlateAsyncTaskNotificationImpl>(&local_298,this,(pmf_a30f9f71 *)&local_498)
    ;
    lStack_4a0 = (ulonglong)uStack_71c << 0x20;
    local_4a8 = OnCloseButtonClicked;
    pTVar7 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
             CreateSP<FSlateAsyncTaskNotificationImpl>(&local_280,this,(pmf_2f44b965 *)&local_4a8);
    pFVar4 = FText::GetEmpty();
    local_700._0_8_ = (pFVar4->TextData).Reference;
    if ((ITextData *)local_700._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_700._0_8_ + 8))(local_700._0_8_,local_res18);
    }
    local_700._8_4_ = pFVar4->Flags;
    local_700[0x10] = true;
    local_6d8 = 0;
    local_6e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_6e0.Data = (FScriptContainerElement *)0x0;
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_4b8,L"SlateAsyncTaskNotification",L"CloseButton",L"Close");
    FText::FText((FText *)local_670,pFVar4);
    local_670[0x10] = true;
    local_648 = 0;
    local_658.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_650.Data = (FScriptContainerElement *)0x0;
    FNotificationButtonInfo::FNotificationButtonInfo
              (&local_f0,(TAttribute<FText> *)local_670,(TAttribute<FText> *)local_700,pTVar7,pTVar6
               ,&local_610);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_658,(FWriteAccessScope *)&local_598);
    if (((int)local_648 != 0) && (FStack_650.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_650.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_650,0,0,0x10);
      local_648 = local_648 & 0xffffffff00000000;
    }
    if (local_598.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_598.Accessor,&local_598);
    }
    if (FStack_650.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_650.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_658.AccessDetector);
    if ((ITextData *)local_670._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_670._0_8_ + 0x10))();
    }
    if (local_4b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4b8.TextData.Reference + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_6e8,(FWriteAccessScope *)&local_580);
    if (((int)local_6d8 != 0) && (FStack_6e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_6e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6e0,0,0,0x10);
      local_6d8 = local_6d8 & 0xffffffff00000000;
    }
    if (local_580.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_580.Accessor,&local_580);
    }
    if (FStack_6e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_6e0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_6e8.AccessDetector);
    if ((ITextData *)local_700._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_700._0_8_ + 0x10))();
    }
    if (((local_478.ButtonDetails.AllocatorInstance.Data <= &local_f0) &&
        (&local_f0 <
         (FNotificationButtonInfo *)
         (local_478.ButtonDetails.AllocatorInstance.Data +
         (longlong)local_478.ButtonDetails.ArrayMax * 0xb0))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_478.ButtonDetails.ArrayNum == local_478.ButtonDetails.ArrayMax) {
      local_478.ButtonDetails.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x8b0,&local_478.ButtonDetails.AllocatorInstance,
                      &local_478.ButtonDetails.ArrayMax);
    }
    lVar9 = (longlong)local_478.ButtonDetails.ArrayNum;
    local_478.ButtonDetails.ArrayNum = local_478.ButtonDetails.ArrayNum + 1;
    FNotificationButtonInfo::FNotificationButtonInfo
              ((FNotificationButtonInfo *)
               ((longlong)local_478.ButtonDetails.AllocatorInstance.Data + lVar9 * 0xb0),&local_f0);
    FNotificationButtonInfo::~FNotificationButtonInfo(&local_f0);
    this_00 = FSlateNotificationManager::Get();
    pTVar10 = FSlateNotificationManager::AddNotification(this_00,&local_4c8,&local_478);
    if (pTVar1 != pTVar10) {
      pTVar1->Object = pTVar10->Object;
      pTVar10->Object = (SNotificationItem *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OwningNotification).SharedReferenceCount,&pTVar10->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4c8.SharedReferenceCount.ReferenceController);
    if ((pTVar1->Object == (SNotificationItem *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwningNotification",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Notifications\\SlateAsyncTaskNotificationImpl.cpp"
                           ,0x8e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FNotificationInfo::~FNotificationInfo(&local_478);
  }
  return;
}

// DestroyNotification @ 142801120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAsyncTaskNotificationImpl::DestroyNotification(FSlateAsyncTaskNotificationImpl *this)

{
  TSharedPtr<SNotificationItem,1> *pTVar1;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->OwningNotification;
  if (pTVar1->Object != (SNotificationItem *)0x0) {
    (**(code **)(*(longlong *)pTVar1->Object + 0x288))();
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<SNotificationItem,1> *)&local_18) {
      pTVar1->Object = (SNotificationItem *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OwningNotification).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    return;
  }
  return;
}

// GetCancelButtonVisibility @ 14280e060

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall
FSlateAsyncTaskNotificationImpl::GetCancelButtonVisibility
          (FSlateAsyncTaskNotificationImpl *this,ECompletionState param_1)

{
  undefined4 in_register_00000014;
  
  if ((this->bCanCancel != false) &&
     ((this->CurrentNotificationState == Pending || (this->CurrentNotificationState == Prompt)))) {
    ((TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1))->Value =
         (uchar)EVisibility::Visible.Value.Value;
    return (TEnumAsByte<EVisibility::Private>)(uchar)param_1;
  }
  ((TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1))->Value =
       (uchar)EVisibility::Collapsed.Value.Value;
  return (EVisibility)(uchar)param_1;
}

// GetCloseButtonVisibility @ 14280ed50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall
FSlateAsyncTaskNotificationImpl::GetCloseButtonVisibility
          (FSlateAsyncTaskNotificationImpl *this,ECompletionState param_1)

{
  bool bVar1;
  undefined4 in_register_00000014;
  
  bVar1 = FApp::IsUnattended();
  if ((!bVar1) &&
     (((this->bKeepOpenOnSuccess != false && (this->CurrentNotificationState == Success)) ||
      ((this->bKeepOpenOnFailure != false && (this->CurrentNotificationState == Failure)))))) {
    ((TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1))->Value =
         (uchar)EVisibility::Visible.Value.Value;
    return (TEnumAsByte<EVisibility::Private>)(uchar)param_1;
  }
  ((TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1))->Value =
       (uchar)EVisibility::Collapsed.Value.Value;
  return (EVisibility)(uchar)param_1;
}

// GetPromptAction @ 142813fd0

/* WARNING: Enum "Type": Some values do not have unique names */

EAsyncTaskNotificationPromptAction __thiscall
FSlateAsyncTaskNotificationImpl::GetPromptAction(FSlateAsyncTaskNotificationImpl *this)

{
  if ((this->NotificationConfig).bIsHeadless != false) {
    return Unattended;
  }
  return (EAsyncTaskNotificationPromptAction)this->PromptAction;
}

// GetPromptButtonText @ 142813ff0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
FSlateAsyncTaskNotificationImpl::GetPromptButtonText
          (FSlateAsyncTaskNotificationImpl *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->PromptButtonText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->PromptButtonText).Flags;
  return __return_storage_ptr__;
}

// GetPromptButtonVisibility @ 142814040

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall
FSlateAsyncTaskNotificationImpl::GetPromptButtonVisibility
          (FSlateAsyncTaskNotificationImpl *this,ECompletionState param_1)

{
  bool bVar1;
  EVisibility EVar2;
  undefined4 in_register_00000014;
  
  bVar1 = FApp::IsUnattended();
  if ((bVar1) || (EVar2 = EVisibility::Visible, this->CurrentNotificationState != Prompt)) {
    EVar2 = EVisibility::Collapsed;
  }
  *(TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1) = EVar2.Value.Value;
  return (EVisibility)SUB41(param_1,0);
}

// Initialize @ 14281a340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAsyncTaskNotificationImpl::Initialize
          (FSlateAsyncTaskNotificationImpl *this,FAsyncTaskNotificationConfig *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  FScriptContainerElement *pFVar6;
  FSlateAsyncTaskNotificationImpl *pFVar7;
  code *pcVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  FSlateNotificationManager *pFVar15;
  TSharedRef<FSlateAsyncTaskNotificationImpl,1> *pTVar16;
  FTSTicker *this_00;
  undefined8 *puVar17;
  ulong64 uVar18;
  TWeakPtr<FTSTicker::FElement,1> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_res10 [8];
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FSlateAsyncTaskNotificationImpl *local_b0;
  TReferenceControllerBase<1> *local_a8;
  TSharedRef<FSlateAsyncTaskNotificationImpl,1> local_a0;
  TWeakPtr<FTSTicker::FElement,1> local_90;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  TSharedRef<FSlateAsyncTaskNotificationImpl,1> local_48;
  
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  local_res8 = 0;
  pIVar4 = (param_1->TitleText).TextData.Reference;
  pIVar5 = (this->NotificationConfig).TitleText.TextData.Reference;
  if (pIVar5 != pIVar4) {
    (this->NotificationConfig).TitleText.TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,&local_res8);
    }
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  (this->NotificationConfig).TitleText.Flags = (param_1->TitleText).Flags;
  pIVar4 = (param_1->ProgressText).TextData.Reference;
  pIVar5 = (this->NotificationConfig).ProgressText.TextData.Reference;
  if (pIVar5 != pIVar4) {
    (this->NotificationConfig).ProgressText.TextData.Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res10);
    }
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    }
  }
  (this->NotificationConfig).ProgressText.Flags = (param_1->ProgressText).Flags;
  (this->NotificationConfig).FadeInDuration = param_1->FadeInDuration;
  (this->NotificationConfig).FadeOutDuration = param_1->FadeOutDuration;
  (this->NotificationConfig).ExpireDuration = param_1->ExpireDuration;
  (this->NotificationConfig).bIsHeadless = param_1->bIsHeadless;
  (this->NotificationConfig).bCanCancel.Value = (param_1->bCanCancel).Value;
  (this->NotificationConfig).bCanCancel.bIsSet = (param_1->bCanCancel).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->NotificationConfig).bCanCancel.Getter,&(param_1->bCanCancel).Getter);
  (this->NotificationConfig).bKeepOpenOnSuccess.Value = (param_1->bKeepOpenOnSuccess).Value;
  (this->NotificationConfig).bKeepOpenOnSuccess.bIsSet = (param_1->bKeepOpenOnSuccess).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->NotificationConfig).bKeepOpenOnSuccess.Getter,
             &(param_1->bKeepOpenOnSuccess).Getter);
  (this->NotificationConfig).bKeepOpenOnFailure.Value = (param_1->bKeepOpenOnFailure).Value;
  (this->NotificationConfig).bKeepOpenOnFailure.bIsSet = (param_1->bKeepOpenOnFailure).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->NotificationConfig).bKeepOpenOnFailure.Getter,
             &(param_1->bKeepOpenOnFailure).Getter);
  (this->NotificationConfig).Icon = param_1->Icon;
  (this->NotificationConfig).LogCategory = param_1->LogCategory;
  if ((this->NotificationConfig).bIsHeadless == false) {
    pFVar15 = FSlateNotificationManager::Get();
    pTVar16 = TSharedFromThis<FSlateAsyncTaskNotificationImpl,1>::AsShared
                        ((TSharedFromThis<FSlateAsyncTaskNotificationImpl,1> *)&this->_padding_,
                         &local_a0);
    local_b0 = pTVar16->Object;
    local_a8 = (pTVar16->SharedReferenceCount).ReferenceController;
    if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_a8->SharedReferenceCount = (atomic<int>)((int)local_a8->SharedReferenceCount + 1);
      UNLOCK();
    }
    lpCriticalSection = &pFVar15->StagedNotificationCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar6 = (pFVar15->StagedNotifications).AllocatorInstance.Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_b0) &&
       ((FScriptContainerElement *)&local_b0 <
        pFVar6 + (longlong)(pFVar15->StagedNotifications).ArrayMax * 0x10)) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar14 = (pFVar15->StagedNotifications).ArrayNum;
    piVar2 = &(pFVar15->StagedNotifications).ArrayMax;
    if (iVar14 == *piVar2) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(pFVar15->StagedNotifications).AllocatorInstance,piVar2);
    }
    pFVar6 = (pFVar15->StagedNotifications).AllocatorInstance.Data;
    (pFVar15->StagedNotifications).ArrayNum = iVar14 + 1;
    *(FSlateAsyncTaskNotificationImpl **)(pFVar6 + (longlong)iVar14 * 0x10) = local_b0;
    *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar14 * 0x10 + 8) = local_a8;
    if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_a8->SharedReferenceCount = (atomic<int>)((int)local_a8->SharedReferenceCount + 1);
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_a0.SharedReferenceCount.ReferenceController._4_4_,
                        local_a0.SharedReferenceCount.ReferenceController._0_4_));
    bVar13 = FApp::IsUnattended();
    LOCK();
    this->PromptAction = (TAtomic<EAsyncTaskNotificationPromptAction>)(-bVar13 & 3);
    UNLOCK();
    (this->bCanCancelAttr).Value = (param_1->bCanCancel).Value;
    (this->bCanCancelAttr).bIsSet = (param_1->bCanCancel).bIsSet;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&(this->bCanCancelAttr).Getter,&(param_1->bCanCancel).Getter);
    (this->bKeepOpenOnSuccessAttr).Value = (param_1->bKeepOpenOnSuccess).Value;
    (this->bKeepOpenOnSuccessAttr).bIsSet = (param_1->bKeepOpenOnSuccess).bIsSet;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&(this->bKeepOpenOnSuccessAttr).Getter,&(param_1->bKeepOpenOnSuccess).Getter);
    (this->bKeepOpenOnFailureAttr).Value = (param_1->bKeepOpenOnFailure).Value;
    (this->bKeepOpenOnFailureAttr).bIsSet = (param_1->bKeepOpenOnFailure).bIsSet;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&(this->bKeepOpenOnFailureAttr).Getter,&(param_1->bKeepOpenOnFailure).Getter);
    this->CurrentNotificationState = None;
    SetPendingNotificationState(this,(EAsyncTaskNotificationState)this->_padding_);
    CreateNotification(this);
    bVar13 = TickNotification(this,0.0);
    if (bVar13) {
      this_00 = FTSTicker::GetCoreTicker();
      local_c8 = (undefined1  [8])0x0;
      local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_c0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                 (FWriteAccessScope *)&local_68);
      local_50 = &local_c0;
      puVar17 = UE::Core::Private::DelegateAllocate(0x38,&local_c0);
      if (puVar17 == (undefined8 *)0x0) {
        pTVar20 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
      }
      else {
        local_a0.SharedReferenceCount.ReferenceController._4_4_ =
             local_90.WeakReferenceCount.ReferenceController._4_4_;
        local_a0.Object = (FSlateAsyncTaskNotificationImpl *)TickNotification;
        local_a0.SharedReferenceCount.ReferenceController._0_4_ = 0;
        pTVar16 = TSharedFromThis<FSlateAsyncTaskNotificationImpl,1>::AsShared
                            ((TSharedFromThis<FSlateAsyncTaskNotificationImpl,1> *)&this->_padding_,
                             &local_48);
        pTVar20 = (pTVar16->SharedReferenceCount).ReferenceController;
        pFVar7 = pTVar16->Object;
        if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
          UNLOCK();
        }
        *puVar17 = &
                   ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar18 = FDelegateHandle::GenerateNewID();
        puVar17[2] = uVar18;
        *puVar17 = &
                   ___7__TBaseSPMethodDelegateInstance__0A_VFSlateAsyncTaskNotificationImpl___00__A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar17[3] = pFVar7;
        puVar17[4] = pTVar20;
        if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar20->WeakReferenceCount = (atomic<int>)((int)pTVar20->WeakReferenceCount + 1);
          UNLOCK();
        }
        bVar12 = true;
        bVar11 = true;
        bVar10 = true;
        puVar17[5] = local_a0.Object;
        puVar17[6] = CONCAT44(local_a0.SharedReferenceCount.ReferenceController._4_4_,
                              local_a0.SharedReferenceCount.ReferenceController._0_4_);
      }
      if (bVar10) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20)
        ;
      }
      if (bVar11) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20)
        ;
      }
      if (bVar12) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      pTVar19 = FTSTicker::AddTicker
                          (this_00,&local_90,
                           (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_c8,0.0
                          );
      if (&this->TickerHandle != pTVar19) {
        (this->TickerHandle).Object = pTVar19->Object;
        pTVar19->Object = (FElement *)0x0;
        pTVar20 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
        (this->TickerHandle).WeakReferenceCount.ReferenceController =
             (pTVar19->WeakReferenceCount).ReferenceController;
        (pTVar19->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar20->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar20->_padding_ + 8))(pTVar20,1);
          }
        }
      }
      plVar9 = (longlong *)
               CONCAT44(local_90.WeakReferenceCount.ReferenceController._4_4_,
                        local_90.WeakReferenceCount.ReferenceController._0_4_);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                 (FWriteAccessScope *)&local_80);
      if ((local_c0.DelegateSize != 0) &&
         (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_c0,0,0,0x10);
        local_c0.DelegateSize = 0;
      }
      if (local_80.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
      }
      if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_c0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_c8);
    }
  }
  FCoreAsyncTaskNotificationImpl::Initialize((FCoreAsyncTaskNotificationImpl *)this,param_1);
  this->bInitializedNotification = true;
  return;
}

// IsCancelButtonEnabled @ 14281cf90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateAsyncTaskNotificationImpl::IsCancelButtonEnabled
          (FSlateAsyncTaskNotificationImpl *this,ECompletionState param_1)

{
  if ((this->bCanCancel != false) &&
     (this->PromptAction == (TAtomic<EAsyncTaskNotificationPromptAction>)0x0)) {
    return true;
  }
  return false;
}

// IsPromptButtonEnabled @ 14281e7e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateAsyncTaskNotificationImpl::IsPromptButtonEnabled
          (FSlateAsyncTaskNotificationImpl *this,ECompletionState param_1)

{
  return this->PromptAction == (TAtomic<EAsyncTaskNotificationPromptAction>)0x0;
}

// OnCancelButtonClicked @ 142824240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAsyncTaskNotificationImpl::OnCancelButtonClicked(FSlateAsyncTaskNotificationImpl *this)

{
  LOCK();
  this->PromptAction = (TAtomic<EAsyncTaskNotificationPromptAction>)0x2;
  UNLOCK();
  return;
}

// OnCloseButtonClicked @ 1428254a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAsyncTaskNotificationImpl::OnCloseButtonClicked(FSlateAsyncTaskNotificationImpl *this)

{
  atomic<int> *paVar1;
  TSharedPtr<SNotificationItem,1> *pTVar2;
  TWeakPtr<FTSTicker::FElement,1> *pTVar3;
  atomic<int> aVar4;
  SNotificationItem *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  FSlateNotificationManager *this_00;
  TSharedRef<FSlateAsyncTaskNotificationImpl,1> *pTVar9;
  longlong local_58;
  FSharedReferencer<1> FStack_50;
  TWeakPtr<FTSTicker::FElement,1> local_48;
  TSharedPtr<IAsyncTaskNotificationImpl,1> local_38;
  TSharedRef<FSlateAsyncTaskNotificationImpl,1> local_28;
  longlong local_18 [2];
  
  pTVar2 = &this->OwningNotification;
  pSVar5 = pTVar2->Object;
  if (pSVar5 != (SNotificationItem *)0x0) {
    (**(code **)(*(longlong *)pSVar5 + 0x260))(pSVar5,0);
    if (pTVar2->Object == (SNotificationItem *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    (**(code **)(*(longlong *)pTVar2->Object + 0x270))(pTVar2->Object,__real_3f000000);
    if (pTVar2->Object == (SNotificationItem *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    (**(code **)(*(longlong *)pTVar2->Object + 0x288))();
    local_58 = 0;
    FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar2 != (TSharedPtr<SNotificationItem,1> *)&local_58) {
      pTVar2->Object = (SNotificationItem *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OwningNotification).SharedReferenceCount,&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
    pTVar3 = &this->TickerHandle;
    if (((pTVar3->Object != (FElement *)0x0) &&
        (pTVar6 = (this->TickerHandle).WeakReferenceCount.ReferenceController,
        pTVar6 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar6->SharedReferenceCount)) {
      local_48.Object = pTVar3->Object;
      local_48.WeakReferenceCount.ReferenceController =
           (this->TickerHandle).WeakReferenceCount.ReferenceController;
      if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      FTSTicker::RemoveTicker(&local_48);
      if (pTVar3 != (TWeakPtr<FTSTicker::FElement,1> *)local_18) {
        pTVar6 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
        pTVar3->Object = (FElement *)0x0;
        (this->TickerHandle).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar6->WeakReferenceCount;
          aVar4 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
          }
        }
      }
    }
    this_00 = FSlateNotificationManager::Get();
    pTVar9 = TSharedFromThis<FSlateAsyncTaskNotificationImpl,1>::AsShared
                       ((TSharedFromThis<FSlateAsyncTaskNotificationImpl,1> *)&this->_padding_,
                        &local_28);
    local_38.Object = (IAsyncTaskNotificationImpl *)pTVar9->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar9->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateNotificationManager::UnregisterStagedNotification(this_00,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnPromptButtonClicked @ 14282b380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAsyncTaskNotificationImpl::OnPromptButtonClicked(FSlateAsyncTaskNotificationImpl *this)

{
  LOCK();
  this->PromptAction = (TAtomic<EAsyncTaskNotificationPromptAction>)0x1;
  UNLOCK();
  return;
}

// SetCanCancel @ 142834d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAsyncTaskNotificationImpl::SetCanCancel
          (FSlateAsyncTaskNotificationImpl *this,TAttribute<bool> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  if ((this->NotificationConfig).bIsHeadless == false) {
    lpCriticalSection = &this->AttributesCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->bCanCancelAttr).Value = param_1->Value;
    (this->bCanCancelAttr).bIsSet = param_1->bIsSet;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&(this->bCanCancelAttr).Getter,&param_1->Getter);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SetKeepOpenOnFailure @ 142835000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAsyncTaskNotificationImpl::SetKeepOpenOnFailure
          (FSlateAsyncTaskNotificationImpl *this,TAttribute<bool> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  if ((this->NotificationConfig).bIsHeadless == false) {
    lpCriticalSection = &this->AttributesCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->bKeepOpenOnFailureAttr).Value = param_1->Value;
    (this->bKeepOpenOnFailureAttr).bIsSet = param_1->bIsSet;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&(this->bKeepOpenOnFailureAttr).Getter,&param_1->Getter);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SetKeepOpenOnSuccess @ 142835080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAsyncTaskNotificationImpl::SetKeepOpenOnSuccess
          (FSlateAsyncTaskNotificationImpl *this,TAttribute<bool> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  if ((this->NotificationConfig).bIsHeadless == false) {
    lpCriticalSection = &this->AttributesCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->bKeepOpenOnSuccessAttr).Value = param_1->Value;
    (this->bKeepOpenOnSuccessAttr).bIsSet = param_1->bIsSet;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&(this->bKeepOpenOnSuccessAttr).Getter,&param_1->Getter);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// SetPendingNotificationState @ 142835760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAsyncTaskNotificationImpl::SetPendingNotificationState
          (FSlateAsyncTaskNotificationImpl *this,EAsyncTaskNotificationState param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 local_res10 [8];
  
  lpCriticalSection = &this->CompletionCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((TOptional<EAsyncTaskNotificationState> *)local_res10 != &this->PendingNotificationState) {
      (this->PendingNotificationState).TypedValue = param_1;
      (this->PendingNotificationState).bIsSet = true;
    }
                    /* WARNING: Could not recover jumptable at 0x0001428357b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SyncAttributes @ 142836770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAsyncTaskNotificationImpl::SyncAttributes(FSlateAsyncTaskNotificationImpl *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool *pbVar1;
  bool bVar2;
  
  lpCriticalSection = &this->AttributesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->bCanCancelAttr).bIsSet == false) {
      bVar2 = false;
    }
    else {
      pbVar1 = TAttribute<bool>::Get(&this->bCanCancelAttr);
      bVar2 = *pbVar1;
    }
    this->bCanCancel = bVar2;
    if ((this->bKeepOpenOnSuccessAttr).bIsSet == false) {
      bVar2 = false;
    }
    else {
      pbVar1 = TAttribute<bool>::Get(&this->bKeepOpenOnSuccessAttr);
      bVar2 = *pbVar1;
    }
    this->bKeepOpenOnSuccess = bVar2;
    if ((this->bKeepOpenOnFailureAttr).bIsSet == false) {
      bVar2 = false;
    }
    else {
      pbVar1 = TAttribute<bool>::Get(&this->bKeepOpenOnFailureAttr);
      bVar2 = *pbVar1;
    }
    this->bKeepOpenOnFailure = bVar2;
                    /* WARNING: Could not recover jumptable at 0x0001428367fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TickNotification @ 142836f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateAsyncTaskNotificationImpl::TickNotification
          (FSlateAsyncTaskNotificationImpl *this,float param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *pFVar2;
  atomic<int> aVar3;
  SNotificationItem *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  EVisibility EVar9;
  bool *pbVar10;
  FSlateNotificationManager *this_00;
  TSharedRef<FSlateAsyncTaskNotificationImpl,1> *pTVar11;
  undefined8 uVar12;
  EAsyncTaskNotificationState local_68 [8];
  undefined8 local_60;
  FSharedReferencer<1> FStack_58;
  TSharedPtr<IAsyncTaskNotificationImpl,1> local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  TSharedRef<FSlateAsyncTaskNotificationImpl,1> local_30;
  undefined8 local_20 [3];
  
  pFVar2 = &this->AttributesCS;
  if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
    if ((this->bCanCancelAttr).bIsSet == false) {
      bVar7 = false;
    }
    else {
      pbVar10 = TAttribute<bool>::Get(&this->bCanCancelAttr);
      bVar7 = *pbVar10;
    }
    this->bCanCancel = bVar7;
    if ((this->bKeepOpenOnSuccessAttr).bIsSet == false) {
      bVar7 = false;
    }
    else {
      pbVar10 = TAttribute<bool>::Get(&this->bKeepOpenOnSuccessAttr);
      bVar7 = *pbVar10;
    }
    this->bKeepOpenOnSuccess = bVar7;
    if ((this->bKeepOpenOnFailureAttr).bIsSet == false) {
      bVar7 = false;
    }
    else {
      pbVar10 = TAttribute<bool>::Get(&this->bKeepOpenOnFailureAttr);
      bVar7 = *pbVar10;
    }
    this->bKeepOpenOnFailure = bVar7;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
    bVar7 = false;
    pFVar2 = &this->CompletionCS;
    if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
      if ((&this->PendingNotificationState != (TOptional<EAsyncTaskNotificationState> *)local_68) &&
         ((this->PendingNotificationState).bIsSet != false)) {
        bVar7 = true;
        local_68[0] = (this->PendingNotificationState).TypedValue;
      }
      if ((this->PendingNotificationState).bIsSet != false) {
        (this->PendingNotificationState).bIsSet = false;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
      if ((bVar7) && (this->CurrentNotificationState != local_68[0])) {
        pSVar4 = (this->OwningNotification).Object;
        this->CurrentNotificationState = local_68[0];
        if (pSVar4 != (SNotificationItem *)0x0) {
          uVar12 = 0;
          if (local_68[0] == Pending) {
            uVar12 = 1;
          }
          else if (local_68[0] == Success) {
            uVar12 = 2;
          }
          else if (local_68[0] == Failure) {
            uVar12 = 3;
          }
          else if (local_68[0] == Prompt) {
            local_40 = ___xmm_3f8000003f8000000000000000000000;
            uStack_38 = _UNK_15076b1e8;
            (**(code **)(*(longlong *)pSVar4 + 0x298))(pSVar4,&local_40);
          }
          if (((this->OwningNotification).Object == (SNotificationItem *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          pSVar4 = (this->OwningNotification).Object;
          (**(code **)(*(longlong *)pSVar4 + 0x280))(pSVar4,uVar12);
        }
        bVar7 = FApp::IsUnattended();
        LOCK();
        this->PromptAction = (TAtomic<EAsyncTaskNotificationPromptAction>)(-bVar7 & 3);
        UNLOCK();
      }
      pSVar4 = (this->OwningNotification).Object;
      if (pSVar4 != (SNotificationItem *)0x0) {
        (**(code **)(*(longlong *)pSVar4 + 0x278))();
      }
      if ((this->CurrentNotificationState == Success) || (this->CurrentNotificationState == Failure)
         ) {
        bVar7 = FApp::IsUnattended();
        EVar9 = EVisibility::Collapsed;
        if ((!bVar7) &&
           (((this->bKeepOpenOnSuccess != false && (this->CurrentNotificationState == Success)) ||
            ((this->bKeepOpenOnFailure != false && (this->CurrentNotificationState == Failure))))))
        {
          EVar9 = EVisibility::Visible;
        }
        if (EVar9.Value.Value == EVisibility::Collapsed.Value.Value) {
          pSVar4 = (this->OwningNotification).Object;
          if (pSVar4 != (SNotificationItem *)0x0) {
            (**(code **)(*(longlong *)pSVar4 + 0x288))();
            local_60 = 0;
            FStack_58.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if (&this->OwningNotification != (TSharedPtr<SNotificationItem,1> *)&local_60) {
              (this->OwningNotification).Object = (SNotificationItem *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&(this->OwningNotification).SharedReferenceCount,&FStack_58);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_58.ReferenceController);
          }
          if (&this->TickerHandle != (TWeakPtr<FTSTicker::FElement,1> *)local_20) {
            pTVar5 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
            (this->TickerHandle).Object = (FElement *)0x0;
            (this->TickerHandle).WeakReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &pTVar5->WeakReferenceCount;
              aVar3 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar3 == (atomic<int>)0x1) {
                (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
              }
            }
          }
          this_00 = FSlateNotificationManager::Get();
          pTVar11 = TSharedFromThis<FSlateAsyncTaskNotificationImpl,1>::AsShared
                              ((TSharedFromThis<FSlateAsyncTaskNotificationImpl,1> *)
                               &this->_padding_,&local_30);
          local_50.Object = (IAsyncTaskNotificationImpl *)pTVar11->Object;
          local_50.SharedReferenceCount.ReferenceController =
               (pTVar11->SharedReferenceCount).ReferenceController;
          if (local_50.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          FSlateNotificationManager::UnregisterStagedNotification(this_00,&local_50);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_30.SharedReferenceCount.ReferenceController);
          return false;
        }
      }
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateNotification @ 142839d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateAsyncTaskNotificationImpl::UpdateNotification(FSlateAsyncTaskNotificationImpl *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTSTicker *this_00;
  TWeakPtr<FSlateAsyncTaskNotificationImpl,1> *pTVar3;
  TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *pTVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  undefined1 local_a8 [8];
  ForAnyElementType local_a0;
  int local_98;
  FDestructionSentinel local_90;
  TSharedPtr<SNotificationItem,1> local_78;
  TWeakPtr<FSlateAsyncTaskNotificationImpl,1> local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  FCoreAsyncTaskNotificationImpl::UpdateNotification((FCoreAsyncTaskNotificationImpl *)this);
  if ((this->NotificationConfig).bIsHeadless == false) {
    if ((this->OwningNotification).Object != (SNotificationItem *)0x0) {
      if (this->bInitializedNotification == false) {
        pFVar5 = FText::FText((FText *)&local_68,(FText *)&this->_padding_);
        local_90.AccessType = Reader;
        local_90._4_4_ = 0;
        local_90.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
        local_90.bDestroyed = false;
        local_90._17_3_ = 0;
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_90,
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
        pFVar6 = FText::FText(&local_58,(FText *)&this->_padding_);
        pFVar7 = FText::FText(&local_48,(FText *)&this->_padding_);
        pFVar8 = FText::FText(&local_38,(FText *)&this->_padding_);
        local_78.Object = (this->OwningNotification).Object;
        local_78.SharedReferenceCount.ReferenceController =
             (this->OwningNotification).SharedReferenceCount.ReferenceController;
        if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar3 = TSharedFromThis<FSlateAsyncTaskNotificationImpl,1>::AsWeak
                           ((TSharedFromThis<FSlateAsyncTaskNotificationImpl,1> *)&this->_padding_,
                            (TWeakPtr<FSlateAsyncTaskNotificationImpl,1> *)local_a8);
        UpdateNotificationDeferred
                  (0.0,pTVar3,&local_78,pFVar8,pFVar7,pFVar6,
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_90,pFVar5);
      }
      else {
        this_00 = FTSTicker::GetCoreTicker();
        pTVar3 = TSharedFromThis<FSlateAsyncTaskNotificationImpl,1>::AsWeak
                           ((TSharedFromThis<FSlateAsyncTaskNotificationImpl,1> *)&this->_padding_,
                            &local_68);
        pTVar4 = TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy>::
                 CreateStatic<TWeakPtr<FSlateAsyncTaskNotificationImpl,1>,TSharedPtr<SNotificationItem,1>_&,FText_&,FText_&,FText_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_&,FText_&>
                           ((TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_a8,
                            UpdateNotificationDeferred,pTVar3,&this->OwningNotification,
                            (FText *)&this->_padding_,(FText *)&this->_padding_,
                            (FText *)&this->_padding_,
                            (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                            &this->_padding_,(FText *)&this->_padding_);
        FTSTicker::AddTicker(this_00,(TWeakPtr<FTSTicker::FElement,1> *)&local_78,pTVar4,0.0);
        if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          paVar1 = &(local_78.SharedReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_78.SharedReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_78.SharedReferenceCount.ReferenceController,1);
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
                   (FWriteAccessScope *)&local_90);
        if ((local_98 != 0) && (local_a0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_a0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,0x10);
          local_98 = 0;
        }
        if (local_90.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
        }
        if (local_a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_a8);
        if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_68.WeakReferenceCount.ReferenceController,1);
          }
        }
      }
    }
    SetPendingNotificationState(this,(EAsyncTaskNotificationState)this->_padding_);
  }
  return;
}

// UpdateNotificationDeferred @ 142839fb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FSlateAsyncTaskNotificationImpl::UpdateNotificationDeferred
          (float param_1,TWeakPtr<FSlateAsyncTaskNotificationImpl,1> *param_2,
          TSharedPtr<SNotificationItem,1> *param_3,FText *param_4,FText *param_5,FText *param_6,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_7,FText *param_8)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SNotificationItem *pSVar3;
  ITextData *pIVar4;
  FSlateAsyncTaskNotificationImpl *pFVar5;
  ITextData *pIVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  atomic<int> aVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined1 local_res18 [8];
  FText *local_res20;
  ITextData *local_128;
  uint local_120;
  undefined1 local_118;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_110;
  ForAnyElementType FStack_108;
  ulonglong local_100;
  ITextData *local_f8;
  uint local_f0;
  undefined1 local_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e0;
  ForAnyElementType FStack_d8;
  ulonglong local_d0;
  ITextData *local_c8;
  uint local_c0;
  undefined1 local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  ForAnyElementType FStack_a8;
  ulonglong local_a0;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [8];
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  
  local_res20 = param_4;
  if ((param_3->Object == (SNotificationItem *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  local_128 = (param_4->TextData).Reference;
  pSVar3 = param_3->Object;
  pcVar7 = *(code **)(*(longlong *)pSVar3 + 0x248);
  if (local_128 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128 + 8))(local_128,local_res18);
  }
  local_120 = param_4->Flags;
  local_118 = 1;
  local_100 = 0;
  local_110.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_108.Data = (FScriptContainerElement *)0x0;
  (*pcVar7)(pSVar3,&local_128);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_110,(FWriteAccessScope *)&local_88);
  if (((int)local_100 != 0) && (FStack_108.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_108.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_108,0,0,0x10);
    local_100 = local_100 & 0xffffffff00000000;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_108.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_110.AccessDetector);
  if (local_128 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128 + 0x10))();
  }
  if ((param_3->Object == (SNotificationItem *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pSVar3 = param_3->Object;
  local_f8 = (param_5->TextData).Reference;
  pcVar7 = *(code **)(*(longlong *)pSVar3 + 0x250);
  if (local_f8 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f8 + 8))(local_f8,local_98);
  }
  local_f0 = param_5->Flags;
  local_e8 = 1;
  local_d0 = 0;
  local_e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_d8.Data = (FScriptContainerElement *)0x0;
  (*pcVar7)(pSVar3,&local_f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_e0,(FWriteAccessScope *)&local_70);
  if (((int)local_d0 != 0) && (FStack_d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d8,0,0,0x10);
    local_d0 = local_d0 & 0xffffffff00000000;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e0.AccessDetector);
  if (local_f8 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f8 + 0x10))();
  }
  if ((param_3->Object == (SNotificationItem *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pSVar3 = param_3->Object;
  local_c8 = (param_8->TextData).Reference;
  pcVar7 = *(code **)(*(longlong *)pSVar3 + 600);
  if (local_c8 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8 + 8))(local_c8,local_94);
  }
  local_c0 = param_8->Flags;
  local_b8 = 1;
  local_a0 = 0;
  local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_a8.Data = (FScriptContainerElement *)0x0;
  (*pcVar7)(pSVar3,param_7);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)&local_58);
  if (((int)local_a0 != 0) && (FStack_a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a8,0,0,0x10);
    local_a0 = local_a0 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  if (local_c8 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8 + 0x10))();
  }
  pTVar11 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar11->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14283a314;
      }
      LOCK();
      aVar10 = pTVar11->SharedReferenceCount;
      bVar8 = aVar2 == aVar10;
      if (bVar8) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar10 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar10;
    } while (!bVar8);
    pFVar5 = param_2->Object;
    if (pFVar5 != (FSlateAsyncTaskNotificationImpl *)0x0) {
      pIVar4 = (param_6->TextData).Reference;
      pIVar6 = (pFVar5->PromptButtonText).TextData.Reference;
      if (pIVar6 != pIVar4) {
        (pFVar5->PromptButtonText).TextData.Reference = pIVar4;
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_90);
        }
        if (pIVar6 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
        }
      }
      (pFVar5->PromptButtonText).Flags = param_6->Flags;
    }
  }
LAB_14283a314:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  pTVar11 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar11->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar11->_padding_ + 8))(pTVar11,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  pIVar4 = (local_res20->TextData).Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar4 = (param_5->TextData).Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar4 = (param_6->TextData).Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_7);
  if (*(void **)&param_7->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_7->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_7);
  pIVar4 = (param_8->TextData).Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  return false;
}

