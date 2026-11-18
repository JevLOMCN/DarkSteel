// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 61

// FMessageLogListingViewModel @ 142bc8650

FMessageLogListingViewModel * __thiscall
FMessageLogListingViewModel::FMessageLogListingViewModel(FMessageLogListingViewModel *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMessageLogListingViewModel__6B_;
  FText::FText(&this->LogLabel);
  (this->MessageLogListingModel).Object = (FMessageLogListingModel *)0x0;
  (this->MessageLogListingModel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->FilteredMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredMessages).ArrayNum = 0;
  (this->FilteredMessages).ArrayMax = 0;
  (this->SelectedFilteredMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedFilteredMessages).ArrayNum = 0;
  (this->SelectedFilteredMessages).ArrayMax = 0;
  (this->MessageFilters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MessageFilters).ArrayNum = 0;
  (this->MessageFilters).ArrayMax = 0;
  *(undefined8 *)&this->TokenClickedEvent = 0;
  *(undefined8 *)&(this->TokenClickedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->TokenClickedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->TokenClickedEvent).field_0x18 = 2;
  *(undefined8 *)&this->ChangedEvent = 0;
  *(undefined8 *)&(this->ChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedEvent).field_0x18 = 2;
  *(undefined8 *)&this->SelectionChangedEvent = 0;
  *(undefined8 *)&(this->SelectionChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->SelectionChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->SelectionChangedEvent).field_0x18 = 2;
  *(undefined8 *)&this->PageSelectionChangedEvent = 0;
  *(undefined8 *)&(this->PageSelectionChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PageSelectionChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PageSelectionChangedEvent).field_0x18 = 2;
  (this->OpenNotifications).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenNotifications).ArrayNum = 0;
  (this->OpenNotifications).ArrayMax = 0;
  return this;
}

// ~FMessageLogListingViewModel @ 142bcc730

void __thiscall
FMessageLogListingViewModel::~FMessageLogListingViewModel(FMessageLogListingViewModel *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  void *pvVar5;
  ITextData *pIVar6;
  code *pcVar7;
  bool bVar8;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  int iVar9;
  
  this->_padding_ = (longlong)&___7FMessageLogListingViewModel__6B_;
  if ((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("MessageLogListingModel.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Presentation\\MessageLogListingViewModel.cpp"
                       ,0x12,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if ((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) {
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
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((this->MessageLogListingModel).Object)->ChangedEvent,this);
  for (iVar9 = 0; (-1 < iVar9 && (iVar9 < (this->MessageFilters).ArrayNum)); iVar9 = iVar9 + 1) {
    if (iVar9 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar2 = (this->MessageFilters).AllocatorInstance.Data;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar9 * 0x10 + 8);
    plVar4 = *(longlong **)(pFVar2 + (longlong)iVar9 * 0x10);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar4 != (longlong *)0x0) {
      this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                (**(code **)(*plVar4 + 0x18))(plVar4);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  DestructItems<FMessageLogListingViewModel::FOpenNotification,int>
            ((FOpenNotification *)(this->OpenNotifications).AllocatorInstance.Data,
             (this->OpenNotifications).ArrayNum);
  pFVar2 = (this->OpenNotifications).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PageSelectionChangedEvent).field_0x8,
             *(int *)&(this->PageSelectionChangedEvent).field_0x10);
  pvVar5 = *(void **)&(this->PageSelectionChangedEvent).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PageSelectionChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SelectionChangedEvent).field_0x8,
             *(int *)&(this->SelectionChangedEvent).field_0x10);
  pvVar5 = *(void **)&(this->SelectionChangedEvent).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SelectionChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedEvent).field_0x8,*(int *)&(this->ChangedEvent).field_0x10);
  pvVar5 = *(void **)&(this->ChangedEvent).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->TokenClickedEvent).field_0x8,*(int *)&(this->TokenClickedEvent).field_0x10);
  pvVar5 = *(void **)&(this->TokenClickedEvent).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TokenClickedEvent);
  DestructItems<TSharedRef<FMessageFilter,1>,int>
            ((TSharedRef<FMessageFilter,1> *)(this->MessageFilters).AllocatorInstance.Data,
             (this->MessageFilters).ArrayNum);
  pFVar2 = (this->MessageFilters).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)
             (this->SelectedFilteredMessages).AllocatorInstance.Data,
             (this->SelectedFilteredMessages).ArrayNum);
  pFVar2 = (this->SelectedFilteredMessages).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)(this->FilteredMessages).AllocatorInstance.Data,
             (this->FilteredMessages).ArrayNum);
  pFVar2 = (this->FilteredMessages).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageLogListingModel).SharedReferenceCount.ReferenceController);
  pIVar6 = (this->LogLabel).TextData.Reference;
  if (pIVar6 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar6 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IMessageLog__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000142bcc9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// AddMessage @ 142bd53e0

void __thiscall
FMessageLogListingViewModel::AddMessage
          (FMessageLogListingViewModel *this,TSharedRef<FTokenizedMessage,1> *param_1,bool param_2)

{
  FMessageLogListingModel *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) {
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
  this_00 = (this->MessageLogListingModel).Object;
  bVar2 = this->bDiscardDuplicates;
  FMessageLogListingModel::CreateNewPageIfRequired(this_00);
  FMessageLogListingModel::AddMessageInternal(this_00,param_1,param_2,bVar2);
                    /* WARNING: Could not recover jumptable at 0x000142bd5468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this_00->_padding_ + 8))(this_00);
  return;
}

// AddMessages @ 142bd5800

void __thiscall
FMessageLogListingViewModel::AddMessages
          (FMessageLogListingViewModel *this,
          TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FMessageLogListingModel *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (this->MessageLogListingModel).Object;
  bVar2 = this->bDiscardDuplicates;
  FMessageLogListingModel::CreateNewPageIfRequired(this_00);
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FMessageLogListingModel::AddMessageInternal
                (this_00,(TSharedRef<FTokenizedMessage,1> *)
                         ((param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10),param_2,
                 bVar2);
      iVar5 = param_1->ArrayNum;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x000142bd58fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this_00->_padding_ + 8))(this_00);
  return;
}

// ClearMessages @ 142bd6fd0

void __thiscall FMessageLogListingViewModel::ClearMessages(FMessageLogListingViewModel *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  FMessageLogListingModel *pFVar4;
  TDoubleLinkedListNode *pTVar5;
  code *pcVar6;
  bool bVar7;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this_00;
  
  if (this->CurrentPageIndex != 0) {
    (**(code **)(this->_padding_ + 0x20))();
  }
  if (((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (this->MessageLogListingModel).Object;
  if (((pFVar4->Pages).ListSize < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pages.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogListingModel.cpp"
                         ,0xa9,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar5 = (pFVar4->Pages).HeadNode;
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)(pTVar5->Value).Messages.AllocatorInstance.Data,
             (pTVar5->Value).Messages.ArrayNum);
  piVar1 = &(pTVar5->Value).Messages.ArrayMax;
  (pTVar5->Value).Messages.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(pTVar5->Value).Messages.AllocatorInstance,0,piVar1);
  }
  if (((pFVar4->Pages).ListSize < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pages.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogListingModel.cpp"
                         ,0xa9,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar5 = (pFVar4->Pages).HeadNode;
  this_00 = &(pTVar5->Value).MessagesHashes;
  bVar7 = 1 < (pTVar5->Value).MessagesHashes.HashSize;
  if (!bVar7) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements(this_00)
    ;
  }
  puVar2 = &(pTVar5->Value).MessagesHashes.Elements.field_0xc;
  *(undefined4 *)&(pTVar5->Value).MessagesHashes.Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(pTVar5->Value).MessagesHashes.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(pTVar5->Value).MessagesHashes.Elements.field_0x34 = 0;
  iVar3 = *(int *)&(pTVar5->Value).MessagesHashes.Elements.field_0x2c;
  *(undefined4 *)&(pTVar5->Value).MessagesHashes.Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(pTVar5->Value).MessagesHashes.Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(pTVar5->Value).MessagesHashes.Elements.field_0x10,0);
  }
  if (bVar7) {
    (pTVar5->Value).MessagesHashes.HashSize = 1;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
                    /* WARNING: Could not recover jumptable at 0x000142bd715a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar4->_padding_ + 8))(pFVar4);
  return;
}

// ClearSelectedMessages @ 142bd7170

void __thiscall
FMessageLogListingViewModel::ClearSelectedMessages(FMessageLogListingViewModel *this)

{
  int *piVar1;
  
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)
             (this->SelectedFilteredMessages).AllocatorInstance.Data,
             (this->SelectedFilteredMessages).ArrayNum);
  piVar1 = &(this->SelectedFilteredMessages).ArrayMax;
  (this->SelectedFilteredMessages).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->SelectedFilteredMessages).AllocatorInstance,0,piVar1);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->SelectionChangedEvent);
  return;
}

// Create @ 142be3140

TSharedRef<FMessageLogListingViewModel,1> * __cdecl
FMessageLogListingViewModel::Create
          (TSharedRef<FMessageLogListingViewModel,1> *__return_storage_ptr__,
          TSharedRef<FMessageLogListingModel,1> *param_1,FText *param_2,
          FMessageLogInitializationOptions *param_3)

{
  FMessageLogListingModel *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  ITextData *pIVar3;
  FMessageLogListingViewModel *pFVar4;
  atomic<int> *paVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = ::operator_new(0x110);
  if (pFVar4 == (FMessageLogListingViewModel *)0x0) {
    pFVar4 = (FMessageLogListingViewModel *)0x0;
  }
  else {
    pFVar1 = param_1->Object;
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar5 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar5 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = (longlong)&___7FMessageLogListingViewModel__6B_;
    pFVar4->bShowFilters = param_3->bShowFilters;
    pFVar4->bShowPages = param_3->bShowPages;
    pFVar4->bAllowClear = param_3->bAllowClear;
    pFVar4->bDiscardDuplicates = param_3->bDiscardDuplicates;
    pFVar4->bScrollToBottom = param_3->bScrollToBottom;
    pFVar4->MaxPageCount = param_3->MaxPageCount;
    pFVar4->bShowInLogWindow = param_3->bShowInLogWindow;
    pFVar4->CurrentPageIndex = 0;
    pFVar4->bIsRefreshing = false;
    (pFVar4->LogLabel).TextData.Reference = (ITextData *)0x0;
    pIVar3 = (param_2->TextData).Reference;
    (pFVar4->LogLabel).TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    (pFVar4->LogLabel).Flags = param_2->Flags;
    (pFVar4->MessageLogListingModel).Object = pFVar1;
    (pFVar4->MessageLogListingModel).SharedReferenceCount.ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    (pFVar4->FilteredMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->FilteredMessages).ArrayNum = 0;
    (pFVar4->FilteredMessages).ArrayMax = 0;
    (pFVar4->SelectedFilteredMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->SelectedFilteredMessages).ArrayNum = 0;
    (pFVar4->SelectedFilteredMessages).ArrayMax = 0;
    (pFVar4->MessageFilters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->MessageFilters).ArrayNum = 0;
    (pFVar4->MessageFilters).ArrayMax = 0;
    *(undefined8 *)&pFVar4->TokenClickedEvent = 0;
    *(undefined8 *)&(pFVar4->TokenClickedEvent).field_0x8 = 0;
    *(undefined8 *)&(pFVar4->TokenClickedEvent).field_0x10 = 0;
    *(undefined8 *)&(pFVar4->TokenClickedEvent).field_0x18 = 2;
    *(undefined8 *)&pFVar4->ChangedEvent = 0;
    *(undefined8 *)&(pFVar4->ChangedEvent).field_0x8 = 0;
    *(undefined8 *)&(pFVar4->ChangedEvent).field_0x10 = 0;
    *(undefined8 *)&(pFVar4->ChangedEvent).field_0x18 = 2;
    *(undefined8 *)&pFVar4->SelectionChangedEvent = 0;
    *(undefined8 *)&(pFVar4->SelectionChangedEvent).field_0x8 = 0;
    *(undefined8 *)&(pFVar4->SelectionChangedEvent).field_0x10 = 0;
    *(undefined8 *)&(pFVar4->SelectionChangedEvent).field_0x18 = 2;
    *(undefined8 *)&pFVar4->PageSelectionChangedEvent = 0;
    *(undefined8 *)&(pFVar4->PageSelectionChangedEvent).field_0x8 = 0;
    *(undefined8 *)&(pFVar4->PageSelectionChangedEvent).field_0x10 = 0;
    *(undefined8 *)&(pFVar4->PageSelectionChangedEvent).field_0x18 = 2;
    (pFVar4->OpenNotifications).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->OpenNotifications).ArrayNum = 0;
    (pFVar4->OpenNotifications).ArrayMax = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  TSharedRef<FMessageLogListingViewModel,1>::
  TSharedRef<FMessageLogListingViewModel,1><FMessageLogListingViewModel>
            (__return_storage_ptr__,pFVar4);
  (**(code **)(__return_storage_ptr__->Object->_padding_ + 0xe0))();
  return __return_storage_ptr__;
}

// DismissNotification @ 142bef240

void __thiscall
FMessageLogListingViewModel::DismissNotification(FMessageLogListingViewModel *this,int param_1)

{
  TArray<FMessageLogListingViewModel::FOpenNotification,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  uint uVar6;
  atomic<int> aVar7;
  bool bVar8;
  uint uVar9;
  atomic<int> aVar10;
  FScriptContainerElement *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  
  this_00 = &this->OpenNotifications;
  pFVar2 = (this_00->AllocatorInstance).Data;
  iVar1 = (this->OpenNotifications).ArrayNum;
  pFVar11 = pFVar2;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x28) {
    while (*(int *)pFVar11 != param_1) {
      pFVar11 = pFVar11 + 0x28;
      if (pFVar11 == pFVar2 + (longlong)iVar1 * 0x28) {
        return;
      }
    }
    uVar6 = (uint)(((longlong)pFVar11 - (longlong)pFVar2) / 0x28);
    if (uVar6 != 0xffffffff) {
      uVar9 = 0;
      if ((int)uVar6 < iVar1) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (this_00->AllocatorInstance).Data;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)(int)uVar6 * 0x28 + 0x10);
      pTVar12 = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        aVar7 = pTVar3->SharedReferenceCount;
        do {
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
          if (aVar7 == (atomic<int>)0x0) goto LAB_142bef36a;
          LOCK();
          aVar10 = pTVar3->SharedReferenceCount;
          bVar8 = aVar7 == aVar10;
          if (bVar8) {
            pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
            aVar10 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar10;
        } while (!bVar8);
        plVar4 = *(longlong **)(pFVar2 + (longlong)(int)uVar6 * 0x28 + 8);
        pTVar12 = pTVar3;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x260))(plVar4,0);
          (**(code **)(*plVar4 + 0x288))(plVar4);
        }
      }
LAB_142bef36a:
      uVar9 = 0;
      if ((int)uVar6 < (this->OpenNotifications).ArrayNum) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TArray<FMessageLogListingViewModel::FOpenNotification,TSizedDefaultAllocator<32>_>::
      RemoveAtSwapImpl(this_00,uVar6);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,&this_00->AllocatorInstance,(this->OpenNotifications).ArrayNum,
                 &(this->OpenNotifications).ArrayMax);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
  }
  return;
}

// ExecuteToken @ 142bf42e0

void __thiscall
FMessageLogListingViewModel::ExecuteToken
          (FMessageLogListingViewModel *this,TSharedRef<IMessageToken,1> *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->TokenClickedEvent,
             (FWriteAccessScope *)&local_38);
  puVar1 = &(this->TokenClickedEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->TokenClickedEvent).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->TokenClickedEvent).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->TokenClickedEvent).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->TokenClickedEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->TokenClickedEvent,false)
    ;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// GetAllMessagesAsString @ 142bfabf0

FString * __thiscall
FMessageLogListingViewModel::GetAllMessagesAsString
          (FMessageLogListingViewModel *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  FMessageLogListingModel::GetAllMessagesAsString
            ((this->MessageLogListingModel).Object,__return_storage_ptr__,this->CurrentPageIndex);
  return __return_storage_ptr__;
}

// GetAllowClear @ 142bfacd0

bool __thiscall FMessageLogListingViewModel::GetAllowClear(FMessageLogListingViewModel *this)

{
  return this->bAllowClear;
}

// GetCurrentPageIndex @ 142bfc340

uint __thiscall FMessageLogListingViewModel::GetCurrentPageIndex(FMessageLogListingViewModel *this)

{
  return this->CurrentPageIndex;
}

// GetDiscardDuplicates @ 142bfc5f0

bool __thiscall FMessageLogListingViewModel::GetDiscardDuplicates(FMessageLogListingViewModel *this)

{
  return this->bDiscardDuplicates;
}

// GetFilteredMessageIterator @ 142bfc740

TIndexedContainerIterator<TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_const_,TSharedRef<FTokenizedMessage,1>_const_,int>
* __thiscall
FMessageLogListingViewModel::GetFilteredMessageIterator
          (FMessageLogListingViewModel *this,
          TIndexedContainerIterator<TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_const_,TSharedRef<FTokenizedMessage,1>_const_,int>
          *__return_storage_ptr__)

{
  __return_storage_ptr__->Index = 0;
  __return_storage_ptr__->Container = &this->FilteredMessages;
  return __return_storage_ptr__;
}

// GetFilteredMessages @ 142bfc760

TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> * __thiscall
FMessageLogListingViewModel::GetFilteredMessages(FMessageLogListingViewModel *this)

{
  return &this->FilteredMessages;
}

// GetLabel @ 142bfd620

FText * __thiscall FMessageLogListingViewModel::GetLabel(FMessageLogListingViewModel *this)

{
  return &this->LogLabel;
}

// GetMaxPageCount @ 142bfdac0

uint __thiscall FMessageLogListingViewModel::GetMaxPageCount(FMessageLogListingViewModel *this)

{
  return this->MaxPageCount;
}

// GetMessageAtIndex @ 142bfdbd0

TSharedPtr<FTokenizedMessage,1> * __thiscall
FMessageLogListingViewModel::GetMessageAtIndex
          (FMessageLogListingViewModel *this,TSharedPtr<FTokenizedMessage,1> *__return_storage_ptr__
          ,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSharedPtr<FTokenizedMessage,1> *pTVar5;
  TSharedPtr<FTokenizedMessage,1> local_18;
  
  __return_storage_ptr__->Object = (FTokenizedMessage *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((-1 < param_1) && (param_1 < (this->FilteredMessages).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->FilteredMessages).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FTokenizedMessage,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    pFVar1 = (this->FilteredMessages).AllocatorInstance.Data;
    local_18.Object = *(FTokenizedMessage **)(pFVar1 + (longlong)param_1 * 0x10);
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)param_1 * 0x10 + 8);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_18) {
      __return_storage_ptr__->Object = local_18.Object;
      local_18.Object = (FTokenizedMessage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_18.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetMessageFilters @ 142bfdcd0

TArray<TSharedRef<FMessageFilter,1>,TSizedDefaultAllocator<32>_> * __thiscall
FMessageLogListingViewModel::GetMessageFilters(FMessageLogListingViewModel *this)

{
  return &this->MessageFilters;
}

// GetName @ 142bfdd10

FName * __thiscall FMessageLogListingViewModel::GetName(FMessageLogListingViewModel *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  
  if ((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &((this->MessageLogListingModel).Object)->LogName;
}

// GetPageCount @ 142bff6c0

uint __thiscall FMessageLogListingViewModel::GetPageCount(FMessageLogListingViewModel *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((this->MessageLogListingModel).Object != (FMessageLogListingModel *)0x0) {
    return (((this->MessageLogListingModel).Object)->Pages).ListSize;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return (((this->MessageLogListingModel).Object)->Pages).ListSize;
}

// GetPageTitle @ 142bff730

FText * __thiscall
FMessageLogListingViewModel::GetPageTitle(FMessageLogListingViewModel *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FPage *pFVar4;
  
  if ((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = FMessageLogListingModel::PageAtIndex((this->MessageLogListingModel).Object,param_1);
  return &pFVar4->Title;
}

// GetScrollToBottom @ 142bff920

bool __thiscall FMessageLogListingViewModel::GetScrollToBottom(FMessageLogListingViewModel *this)

{
  return this->bScrollToBottom;
}

// GetSelectedMessageIterator @ 142c00f20

TIndexedContainerIterator<TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_const_,TSharedRef<FTokenizedMessage,1>_const_,int>
* __thiscall
FMessageLogListingViewModel::GetSelectedMessageIterator
          (FMessageLogListingViewModel *this,
          TIndexedContainerIterator<TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>_const_,TSharedRef<FTokenizedMessage,1>_const_,int>
          *__return_storage_ptr__)

{
  __return_storage_ptr__->Index = 0;
  __return_storage_ptr__->Container = &this->SelectedFilteredMessages;
  return __return_storage_ptr__;
}

// GetSelectedMessages @ 142c00f40

TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> * __thiscall
FMessageLogListingViewModel::GetSelectedMessages(FMessageLogListingViewModel *this)

{
  return &this->SelectedFilteredMessages;
}

// GetSelectedMessagesAsString @ 142c01020

FString * __thiscall
FMessageLogListingViewModel::GetSelectedMessagesAsString
          (FMessageLogListingViewModel *this,FString *__return_storage_ptr__)

{
  TSharedRef<FTokenizedMessage,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  FString *pFVar7;
  FText *this_00;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FText local_38;
  
  puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0x50))();
  uVar11 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  iVar5 = *(int *)(puVar6 + 1);
  pTVar1 = (TSharedRef<FTokenizedMessage,1> *)*puVar6;
  local_40 = iVar5;
  if (iVar5 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&local_48,iVar5,&local_3c);
    ConstructItems<TSharedRef<FTokenizedMessage,1>,TSharedRef<FTokenizedMessage,1>,int>
              (local_48.Data,pTVar1,iVar5);
  }
  local_50 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  uVar13 = uVar11;
  if (0 < local_40) {
    do {
      uVar10 = (uint)uVar11;
      uVar4 = 0;
      if ((int)uVar10 < local_40) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar2)();
        return pFVar7;
      }
      this_00 = FTokenizedMessage::ToText(*(FTokenizedMessage **)(local_48.Data + uVar13),&local_38)
      ;
      pFVar8 = (FScriptContainerElement *)FText::ToString(this_00);
      if (((local_58.Data <= pFVar8) && (pFVar8 < local_58.Data + (longlong)local_50._4_4_ * 0x10))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar2)();
        return pFVar7;
      }
      iVar5 = (int)local_50;
      if ((int)local_50 == local_50._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_58,(int *)((longlong)&local_50 + 4));
      }
      local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
      ::FString::FString((FString *)(local_58.Data + (longlong)iVar5 * 0x10),(FString *)pFVar8);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar13 = uVar13 + 0x10;
    } while ((int)(uVar10 + 1) < local_40);
  }
  iVar5 = (int)local_50;
  bVar3 = true;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8 = local_58.Data + (longlong)(int)local_50 * 0x10;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FVar9.Data = local_58.Data;
  while( true ) {
    if ((int)local_50 != iVar5) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar9.Data == pFVar8) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(__return_storage_ptr__,L"\n",1);
    }
    iVar12 = *(int *)(FVar9.Data + 8) + -1;
    if (*(int *)(FVar9.Data + 8) == 0) {
      iVar12 = 0;
    }
    ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)FVar9.Data,iVar12);
    FVar9.Data = FVar9.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)local_48.Data,local_40);
  if ((TSharedRef<FTokenizedMessage,1> *)local_48.Data != (TSharedRef<FTokenizedMessage,1> *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// GetShowFilters @ 142c01560

bool __thiscall FMessageLogListingViewModel::GetShowFilters(FMessageLogListingViewModel *this)

{
  return this->bShowFilters;
}

// GetShowPages @ 142c01570

bool __thiscall FMessageLogListingViewModel::GetShowPages(FMessageLogListingViewModel *this)

{
  return this->bShowPages;
}

// HighestSeverityPresent @ 142c04080

Type __thiscall
FMessageLogListingViewModel::HighestSeverityPresent(FMessageLogListingViewModel *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FTokenizedMessage *this_00;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  Type TVar6;
  FPage *pFVar7;
  int iVar8;
  
  TVar5 = Info;
  if ((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5 = (*pcVar3)();
      return TVar5;
    }
  }
  pFVar7 = FMessageLogListingModel::PageAtIndex((this->MessageLogListingModel).Object,param_1);
  for (iVar8 = 0; (-1 < iVar8 && (iVar8 < (pFVar7->Messages).ArrayNum)); iVar8 = iVar8 + 1) {
    if (iVar8 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar5 = (*pcVar3)();
        return TVar5;
      }
    }
    pFVar1 = (pFVar7->Messages).AllocatorInstance.Data;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)iVar8 * 0x10 + 8);
    this_00 = *(FTokenizedMessage **)(pFVar1 + (longlong)iVar8 * 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    TVar6 = FTokenizedMessage::GetSeverity(this_00);
    if ((int)TVar6 < (int)TVar5) {
      TVar5 = FTokenizedMessage::GetSeverity(this_00);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return TVar5;
}

// Initialize @ 142c041a0

void __thiscall FMessageLogListingViewModel::Initialize(FMessageLogListingViewModel *this)

{
  int *piVar1;
  FMessageLogListingModel *pFVar2;
  FName FVar3;
  TSharedRef<FMessageFilter,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  FMessageFilter *pFVar13;
  FName *pFVar14;
  FName FVar15;
  FSlateIcon *pFVar16;
  FText *pFVar17;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  undefined8 *puVar18;
  ulong64 uVar19;
  FScriptContainerElement *pFVar20;
  ForElementType<TAlignedBytes<16,16>_> *pFVar21;
  int iVar22;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_348;
  FDelegateAllocation local_340;
  TSharedRef<FMessageFilter,1> local_330;
  TSharedRef<FMessageFilter,1> local_320;
  TSharedRef<FMessageFilter,1> local_310;
  TSharedRef<FMessageFilter,1> local_300;
  TSharedRef<FMessageFilter,1> local_2f0;
  code *local_2d8;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  undefined1 local_2c8 [8];
  ForAnyElementType local_2c0;
  int local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  TRawPtrProxy<FMessageFilter> local_280;
  TRawPtrProxy<FMessageFilter> local_278;
  TRawPtrProxy<FMessageFilter> local_270;
  TRawPtrProxy<FMessageFilter> local_268;
  TRawPtrProxy<FMessageFilter> local_260;
  FText local_258;
  FDestructionSentinel local_248;
  FDestructionSentinel local_230;
  FDestructionSentinel local_218;
  FDestructionSentinel local_200;
  FDestructionSentinel local_1e8;
  FDelegateAllocation *local_1d0;
  undefined1 local_1c8 [24];
  FName local_1b0;
  code *local_1a8;
  longlong lStack_1a0;
  FText local_198;
  FText local_188;
  FText local_178;
  FText local_168;
  FName local_150 [3];
  FName local_138 [2];
  undefined1 local_128 [8];
  FReadAccessScope local_120;
  FName local_108;
  FReadAccessScope local_100;
  FSlateIcon local_e8;
  FSlateIcon local_c8;
  FSlateIcon local_a8;
  FSlateIcon local_88;
  FSlateIcon local_68;
  
  iVar22 = 0;
  if (((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("MessageLogListingModel.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Presentation\\MessageLogListingViewModel.cpp"
                         ,0x21,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar2 = (this->MessageLogListingModel).Object;
  local_2d8 = _vcall__232__flat______;
  uStack_2d0 = 0;
  lStack_1a0 = (ulonglong)uStack_2cc << 0x20;
  local_1a8 = _vcall__232__flat______;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<FMessageLogListingViewModel>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2c8,this,
             (pmf_2ceabe0f *)&local_1a8);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  AddDelegateInstance<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar2->ChangedEvent,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
             (FWriteAccessScope *)&local_248);
  if ((local_2b8 != 0) && (local_2c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_2c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2c0,0,0,0x10);
    local_2b8 = 0;
  }
  if (local_248.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_248.Accessor,&local_248);
  }
  if (local_2c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c8);
  pFVar13 = ::operator_new(0x70);
  if (pFVar13 == (FMessageFilter *)0x0) {
    local_280.Object = (FMessageFilter *)0x0;
    iVar12 = iVar22;
  }
  else {
    pFVar14 = ::FName::FName((FName *)(local_1c8 + 8),"Icons.ErrorWithColor");
    FVar3 = *pFVar14;
    FVar15 = FAppStyle::GetAppStyleSetName();
    pFVar16 = FSlateIcon::FSlateIcon(&local_e8,*(FName *)FVar15,FVar3,(FName)0x0,(FName)0x0);
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_198,L"MessageLog",L"CriticalErrors",L"Critical Errors");
    local_280.Object = FMessageFilter::FMessageFilter(pFVar13,pFVar17,pFVar16);
    iVar12 = 1;
    if ((((local_280.Object != (FMessageFilter *)0x0) && ((local_280.Object)->_padding_ != 0)) &&
        ((local_280.Object)->_padding_ != 0)) &&
       ((0 < *(int *)((local_280.Object)->_padding_ + 8) &&
        (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar8)))) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  TSharedRef<FMessageFilter,1>::TSharedRef<FMessageFilter,1><FMessageFilter>(&local_330,&local_280);
  pTVar4 = (TSharedRef<FMessageFilter,1> *)(this->MessageFilters).AllocatorInstance.Data;
  if (((pTVar4 <= &local_330) && (&local_330 < pTVar4 + (this->MessageFilters).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar11 = (this->MessageFilters).ArrayNum;
  if (iVar11 == (this->MessageFilters).ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(this->MessageFilters).AllocatorInstance,
                        &(this->MessageFilters).ArrayMax);
  }
  pFVar20 = (this->MessageFilters).AllocatorInstance.Data + (longlong)iVar11 * 0x10;
  (this->MessageFilters).ArrayNum = iVar11 + 1;
  *(FMessageFilter **)pFVar20 = local_330.Object;
  *(TReferenceControllerBase<1> **)(pFVar20 + 8) =
       local_330.SharedReferenceCount.ReferenceController;
  if (local_330.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_330.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_330.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_330.SharedReferenceCount.ReferenceController);
  if ((iVar12 != 0) && (local_198.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
  }
  bVar8 = false;
  pFVar13 = ::operator_new(0x70);
  if (pFVar13 == (FMessageFilter *)0x0) {
    local_278.Object = (FMessageFilter *)0x0;
  }
  else {
    pFVar14 = ::FName::FName(&local_1b0,"Icons.ErrorWithColor");
    FVar3 = *pFVar14;
    FVar15 = FAppStyle::GetAppStyleSetName();
    pFVar16 = FSlateIcon::FSlateIcon(&local_c8,*(FName *)FVar15,FVar3,(FName)0x0,(FName)0x0);
    bVar8 = true;
    pFVar17 = FText::AsLocalizable_Advanced_LocText(&local_188,L"MessageLog",L"Errors",L"Errors");
    local_278.Object = FMessageFilter::FMessageFilter(pFVar13,pFVar17,pFVar16);
    if ((((local_278.Object != (FMessageFilter *)0x0) && ((local_278.Object)->_padding_ != 0)) &&
        ((local_278.Object)->_padding_ != 0)) &&
       ((0 < *(int *)((local_278.Object)->_padding_ + 8) &&
        (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar9)))) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  TSharedRef<FMessageFilter,1>::TSharedRef<FMessageFilter,1><FMessageFilter>(&local_320,&local_278);
  pTVar4 = (TSharedRef<FMessageFilter,1> *)(this->MessageFilters).AllocatorInstance.Data;
  if (((pTVar4 <= &local_320) && (&local_320 < pTVar4 + (this->MessageFilters).ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar12 = (this->MessageFilters).ArrayNum;
  if (iVar12 == (this->MessageFilters).ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(this->MessageFilters).AllocatorInstance,
                        &(this->MessageFilters).ArrayMax);
  }
  pFVar20 = (this->MessageFilters).AllocatorInstance.Data + (longlong)iVar12 * 0x10;
  (this->MessageFilters).ArrayNum = iVar12 + 1;
  *(FMessageFilter **)pFVar20 = local_320.Object;
  *(TReferenceControllerBase<1> **)(pFVar20 + 8) =
       local_320.SharedReferenceCount.ReferenceController;
  if (local_320.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_320.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_320.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_320.SharedReferenceCount.ReferenceController);
  if ((bVar8) && (local_188.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
  }
  bVar8 = false;
  pFVar13 = ::operator_new(0x70);
  if (pFVar13 == (FMessageFilter *)0x0) {
    local_270.Object = (FMessageFilter *)0x0;
  }
  else {
    local_2b0 = 0;
    local_2a8 = 0;
    pFVar14 = ::FName::FName(local_150,"Icons.WarningWithColor");
    FVar3 = *pFVar14;
    FVar15 = FAppStyle::GetAppStyleSetName();
    pFVar16 = FSlateIcon::FSlateIcon(&local_a8,*(FName *)FVar15,FVar3,(FName)0x0,(FName)0x0);
    bVar8 = true;
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_178,L"MessageLog",L"PerformanceWarnings",L"Performance Warnings");
    local_270.Object = FMessageFilter::FMessageFilter(pFVar13,pFVar17,pFVar16);
    if ((((local_270.Object != (FMessageFilter *)0x0) && ((local_270.Object)->_padding_ != 0)) &&
        ((local_270.Object)->_padding_ != 0)) &&
       ((0 < *(int *)((local_270.Object)->_padding_ + 8) &&
        (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar9)))) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  TSharedRef<FMessageFilter,1>::TSharedRef<FMessageFilter,1><FMessageFilter>(&local_310,&local_270);
  pTVar4 = (TSharedRef<FMessageFilter,1> *)(this->MessageFilters).AllocatorInstance.Data;
  if (((pTVar4 <= &local_310) && (&local_310 < pTVar4 + (this->MessageFilters).ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar12 = (this->MessageFilters).ArrayNum;
  if (iVar12 == (this->MessageFilters).ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(this->MessageFilters).AllocatorInstance,
                        &(this->MessageFilters).ArrayMax);
  }
  pFVar20 = (this->MessageFilters).AllocatorInstance.Data + (longlong)iVar12 * 0x10;
  (this->MessageFilters).ArrayNum = iVar12 + 1;
  *(FMessageFilter **)pFVar20 = local_310.Object;
  *(TReferenceControllerBase<1> **)(pFVar20 + 8) =
       local_310.SharedReferenceCount.ReferenceController;
  if (local_310.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_310.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_310.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_310.SharedReferenceCount.ReferenceController);
  if ((bVar8) && (local_178.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
  }
  bVar8 = false;
  pFVar13 = ::operator_new(0x70);
  if (pFVar13 == (FMessageFilter *)0x0) {
    local_268.Object = (FMessageFilter *)0x0;
  }
  else {
    local_2a0 = 0;
    local_298 = 0;
    pFVar14 = ::FName::FName(&local_108,"Icons.WarningWithColor");
    FVar3 = *pFVar14;
    FVar15 = FAppStyle::GetAppStyleSetName();
    pFVar16 = FSlateIcon::FSlateIcon(&local_88,*(FName *)FVar15,FVar3,(FName)0x0,(FName)0x0);
    bVar8 = true;
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_168,L"MessageLog",L"Warnings",L"Warnings");
    local_268.Object = FMessageFilter::FMessageFilter(pFVar13,pFVar17,pFVar16);
    if ((((local_268.Object != (FMessageFilter *)0x0) && ((local_268.Object)->_padding_ != 0)) &&
        ((local_268.Object)->_padding_ != 0)) &&
       ((0 < *(int *)((local_268.Object)->_padding_ + 8) &&
        (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar9)))) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  TSharedRef<FMessageFilter,1>::TSharedRef<FMessageFilter,1><FMessageFilter>(&local_300,&local_268);
  pTVar4 = (TSharedRef<FMessageFilter,1> *)(this->MessageFilters).AllocatorInstance.Data;
  if (((pTVar4 <= &local_300) && (&local_300 < pTVar4 + (this->MessageFilters).ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar12 = (this->MessageFilters).ArrayNum;
  if (iVar12 == (this->MessageFilters).ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(this->MessageFilters).AllocatorInstance,
                        &(this->MessageFilters).ArrayMax);
  }
  pFVar20 = (this->MessageFilters).AllocatorInstance.Data + (longlong)iVar12 * 0x10;
  (this->MessageFilters).ArrayNum = iVar12 + 1;
  *(FMessageFilter **)pFVar20 = local_300.Object;
  *(TReferenceControllerBase<1> **)(pFVar20 + 8) =
       local_300.SharedReferenceCount.ReferenceController;
  if (local_300.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_300.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_300.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_300.SharedReferenceCount.ReferenceController);
  if ((bVar8) && (local_168.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
  }
  bVar8 = false;
  pFVar13 = ::operator_new(0x70);
  if (pFVar13 == (FMessageFilter *)0x0) {
    local_260.Object = (FMessageFilter *)0x0;
  }
  else {
    local_290 = 0;
    local_288 = 0;
    pFVar14 = ::FName::FName(local_138,"Icons.BulletPoint");
    FVar3 = *pFVar14;
    FVar15 = FAppStyle::GetAppStyleSetName();
    pFVar16 = FSlateIcon::FSlateIcon(&local_68,*(FName *)FVar15,FVar3,(FName)0x0,(FName)0x0);
    bVar8 = true;
    pFVar17 = FText::AsLocalizable_Advanced_LocText(&local_258,L"MessageLog",L"Info",L"Info");
    local_260.Object = FMessageFilter::FMessageFilter(pFVar13,pFVar17,pFVar16);
    if ((((local_260.Object != (FMessageFilter *)0x0) && ((local_260.Object)->_padding_ != 0)) &&
        ((local_260.Object)->_padding_ != 0)) &&
       ((0 < *(int *)((local_260.Object)->_padding_ + 8) &&
        (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar9)))) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  TSharedRef<FMessageFilter,1>::TSharedRef<FMessageFilter,1><FMessageFilter>(&local_2f0,&local_260);
  pTVar4 = (TSharedRef<FMessageFilter,1> *)(this->MessageFilters).AllocatorInstance.Data;
  if (((pTVar4 <= &local_2f0) && (&local_2f0 < pTVar4 + (this->MessageFilters).ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar12 = (this->MessageFilters).ArrayNum;
  if (iVar12 == (this->MessageFilters).ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(this->MessageFilters).AllocatorInstance,
                        &(this->MessageFilters).ArrayMax);
  }
  pFVar20 = (this->MessageFilters).AllocatorInstance.Data + (longlong)iVar12 * 0x10;
  (this->MessageFilters).ArrayNum = iVar12 + 1;
  *(FMessageFilter **)pFVar20 = local_2f0.Object;
  *(TReferenceControllerBase<1> **)(pFVar20 + 8) =
       local_2f0.SharedReferenceCount.ReferenceController;
  if (local_2f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f0.SharedReferenceCount.ReferenceController);
  if ((bVar8) && (local_258.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
  }
  while( true ) {
    if ((iVar22 < 0) || ((this->MessageFilters).ArrayNum <= iVar22)) {
      return;
    }
    if ((iVar22 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    pFVar20 = (this->MessageFilters).AllocatorInstance.Data;
    pTVar5 = *(TReferenceControllerBase<1> **)(pFVar20 + (longlong)iVar22 * 0x10 + 8);
    plVar6 = *(longlong **)(pFVar20 + (longlong)iVar22 * 0x10);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar6 != (longlong *)0x0) {
      this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                (**(code **)(*plVar6 + 0x18))(plVar6);
      local_2d8 = OnFilterChanged;
      uStack_2cc = local_258._12_4_;
      uStack_2d0 = 0;
      local_348.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_340.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_340.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_348,(FWriteAccessScope *)&local_1e8);
      local_1d0 = &local_340;
      puVar18 = UE::Core::Private::DelegateAllocate(0x30,&local_340);
      if (puVar18 != (undefined8 *)0x0) {
        *puVar18 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar19 = FDelegateHandle::GenerateNewID();
        puVar18[2] = uVar19;
        puVar18[4] = local_2d8;
        puVar18[5] = CONCAT44(uStack_2cc,uStack_2d0);
        *puVar18 = &
                   ___7__TBaseRawMethodDelegateInstance__0A_VFMessageLogListingViewModel____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar18[3] = this;
        if ((puVar18[4] == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InUserObject != nullptr && MethodPtr != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                               ,0x1d8,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (local_1e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_218);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_348,&local_120);
      if (((local_340.DelegateSize == 0) ||
          (local_340.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
         (cVar10 = (**(code **)(*(longlong *)local_340.DelegateAllocator + 0x38))(), cVar10 == '\0')
         ) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_120);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_120);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,true);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_348,&local_100);
        if ((local_340.DelegateSize != 0) &&
           (local_340.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (**(code **)(*(longlong *)local_340.DelegateAllocator + 0x40))
                    (local_340.DelegateAllocator,local_128);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_100);
        iVar12 = (this_00->InvocationList).ArrayNum;
        piVar1 = &(this_00->InvocationList).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(this_00->InvocationList).AllocatorInstance,piVar1);
        }
        pFVar20 = (this_00->InvocationList).AllocatorInstance.Data;
        (this_00->InvocationList).ArrayNum = iVar12 + 1;
        pFVar21 = (ForElementType<TAlignedBytes<16,16>_> *)(pFVar20 + (longlong)iVar12 * 0x10);
        *pFVar21 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(undefined4 *)(pFVar21 + 1) = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_348,(FWriteAccessScope *)&local_230);
        if (*pFVar21 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)*pFVar21);
        }
        *pFVar21 = local_340.DelegateAllocator;
        local_340.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        *(int *)(pFVar21 + 1) = local_340.DelegateSize;
        local_340.DelegateSize = 0;
        if (local_230.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_230.Accessor,&local_230);
        }
      }
      if (local_218.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_348,(FWriteAccessScope *)&local_200);
      if ((local_340.DelegateSize != 0) &&
         (local_340.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_340.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_340,0,0,0x10);
        local_340.DelegateSize = 0;
      }
      if (local_200.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_200.Accessor,&local_200);
      }
      if (local_340.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_340.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_348.AccessDetector);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    iVar22 = iVar22 + 1;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// InvertSelectedMessages @ 142c050e0

void __thiscall
FMessageLogListingViewModel::InvertSelectedMessages(FMessageLogListingViewModel *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined8 local_18;
  TReferenceControllerBase<1> *local_10;
  
  for (iVar5 = 0; (-1 < iVar5 && (iVar5 < (this->FilteredMessages).ArrayNum)); iVar5 = iVar5 + 1) {
    if (iVar5 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->FilteredMessages).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    local_18 = *(undefined8 *)pFVar4;
    local_10 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar3 = (**(code **)(this->_padding_ + 0x70))(this,&local_18);
    (**(code **)(this->_padding_ + 0x68))(this,&local_18,cVar3 == '\0');
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->SelectionChangedEvent);
  return;
}

// IsMessageSelected @ 142c05ef0

bool __thiscall
FMessageLogListingViewModel::IsMessageSelected
          (FMessageLogListingViewModel *this,TSharedRef<FTokenizedMessage,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->SelectedFilteredMessages).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (longlong)(this->SelectedFilteredMessages).ArrayNum * 0x10) {
    pFVar2 = pFVar1;
    do {
      if (*(FTokenizedMessage **)pFVar2 == param_1->Object) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 4) != -1;
      }
      pFVar2 = pFVar2 + 0x10;
    } while (pFVar2 != pFVar1 + (longlong)(this->SelectedFilteredMessages).ArrayNum * 0x10);
  }
  return false;
}

// NewPage @ 142c0a000

void __thiscall
FMessageLogListingViewModel::NewPage(FMessageLogListingViewModel *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  this->bShowPages = true;
  this->CurrentPageIndex = 0;
  if ((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) {
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
  FMessageLogListingModel::NewPage((this->MessageLogListingModel).Object,param_1,this->MaxPageCount)
  ;
  RefreshFilteredMessages(this);
  return;
}

// NextPage @ 142c0a070

void __thiscall FMessageLogListingViewModel::NextPage(FMessageLogListingViewModel *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = this->CurrentPageIndex;
  if (uVar1 == 0) {
    if (((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar1 = (((this->MessageLogListingModel).Object)->Pages).ListSize;
  }
  this->CurrentPageIndex = uVar1 - 1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->PageSelectionChangedEvent);
  RefreshFilteredMessages(this);
  return;
}

// NotifyIfAnyMessages @ 142c0a1f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageLogListingViewModel::NotifyIfAnyMessages
          (FMessageLogListingViewModel *this,FText *param_1,Type param_2,bool param_3)

{
  int *piVar1;
  atomic<int> *paVar2;
  TArray<FMessageLogListingViewModel::FOpenNotification,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<int> aVar4;
  TRefCountPtr<ITextData> TVar5;
  FScriptContainerElement *pFVar6;
  ITextData *pIVar7;
  code *pcVar8;
  TRefCountPtr<ITextData> TVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  int iVar12;
  FPage *pFVar13;
  FMessageLogListingModel *this_00;
  FMessageLogListingModel *this_01;
  FText *pFVar14;
  FTextFormat *pFVar15;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar16;
  longlong lVar17;
  FSlateNotificationManager *pFVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  Type TVar21;
  undefined1 local_res18 [8];
  int local_res20 [2];
  FText local_6e8;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_6d8
  ;
  code *local_6c8;
  undefined4 uStack_6c0;
  uint uStack_6bc;
  TSharedPtr<SNotificationItem,1> local_6b8;
  FText local_6a8;
  undefined1 local_698;
  undefined1 local_690 [8];
  ForAnyElementType FStack_688;
  ulonglong local_680;
  undefined1 local_678 [8];
  ForAnyElementType local_670;
  int local_668;
  FText local_660;
  undefined1 local_650;
  undefined1 local_648 [8];
  ForAnyElementType FStack_640;
  ulonglong local_638;
  FText local_630;
  undefined1 local_620;
  undefined1 local_618 [8];
  ForAnyElementType FStack_610;
  ulonglong local_608;
  FText local_600;
  undefined1 local_5f0;
  undefined1 local_5e8 [8];
  ForAnyElementType FStack_5e0;
  ulonglong local_5d8;
  FText local_5d0;
  undefined1 local_5c0;
  undefined1 local_5b8 [8];
  ForAnyElementType FStack_5b0;
  ulonglong local_5a8;
  FTokenizedMessage *local_5a0;
  FSharedReferencer<1> FStack_598;
  FText local_590;
  undefined1 local_580 [24];
  undefined1 local_568 [24];
  TRefCountPtr<ITextData> local_550;
  uint local_548;
  bool local_540;
  undefined1 local_538 [24];
  undefined1 local_520 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_508;
  ForAnyElementType FStack_500;
  ulonglong local_4f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4f0;
  ForAnyElementType FStack_4e8;
  ulonglong local_4e0;
  EVisibility local_4d8;
  EVisibility local_4d7;
  EVisibility local_4d6;
  EVisibility local_4d5;
  undefined1 local_4d0 [24];
  undefined1 local_4b8 [24];
  TRefCountPtr<ITextData> local_4a0;
  uint local_498;
  bool local_490;
  undefined1 local_488 [24];
  undefined1 local_470 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_458;
  ForAnyElementType FStack_450;
  ulonglong local_448;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_440;
  ForAnyElementType FStack_438;
  ulonglong local_430;
  EVisibility local_428;
  EVisibility local_427;
  EVisibility local_426;
  EVisibility local_425;
  undefined1 local_420 [4];
  undefined1 local_41c [4];
  undefined1 local_418 [4];
  undefined1 local_414 [4];
  undefined1 local_410 [4];
  undefined1 local_40c [4];
  undefined1 local_408 [4];
  undefined1 local_404 [4];
  undefined1 local_400 [8];
  undefined8 local_3f8;
  FSharedReferencer<1> local_3f0;
  FString local_3e8;
  FString local_3d8;
  FFormatArgumentValue local_3c8;
  FDestructionSentinel local_3a8;
  FDestructionSentinel local_390;
  FDestructionSentinel local_378;
  FDestructionSentinel local_360;
  FDestructionSentinel local_348;
  FDestructionSentinel local_330;
  FDestructionSentinel local_318;
  FDestructionSentinel local_300;
  FDestructionSentinel local_2e8;
  FDestructionSentinel local_2d0;
  FFormatArgumentValue local_2b8;
  FText local_298;
  code *local_288;
  longlong lStack_280;
  TSharedPtr<SNotificationItem,1> local_278;
  FText local_268;
  code *local_258;
  longlong lStack_250;
  FText local_248;
  code *local_238;
  longlong lStack_230;
  FText local_228;
  FText local_218;
  FText local_208;
  FText local_1f8;
  FText local_1e8;
  FNotificationInfo local_1d8;
  FTextFormat local_70;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_60;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_48;
  
  if (!param_3) {
    TVar21 = CriticalError;
    if (0 < (int)(param_2 - Error)) {
      TVar21 = param_2 - Error;
    }
    iVar12 = NumMessagesPresent(this,0,TVar21);
    if (iVar12 < 1) {
      return;
    }
  }
  FText::FText(&local_6e8);
  bVar11 = FText::IsEmpty(param_1);
  TVar5.Reference = local_6e8.TextData.Reference;
  if (!bVar11) {
    pIVar7 = (param_1->TextData).Reference;
    if (local_6e8.TextData.Reference != pIVar7) {
      local_6e8.TextData.Reference = pIVar7;
      if (pIVar7 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar7 + 8))(pIVar7,local_420);
      }
      if (TVar5.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar5.Reference + 0x10))(TVar5.Reference);
      }
    }
    local_6e8.Flags = param_1->Flags;
    goto LAB_142c0a62c;
  }
  if (((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar13 = FMessageLogListingModel::PageAtIndex((this->MessageLogListingModel).Object,0);
  TVar9.Reference = local_6e8.TextData.Reference;
  TVar5.Reference = (this->LogLabel).TextData.Reference;
  if ((pFVar13->Messages).ArrayNum == 0) {
    if (local_6e8.TextData.Reference != TVar5.Reference) {
      local_6e8.TextData.Reference = TVar5.Reference;
      if (TVar5.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_40c);
      }
      if (TVar9.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar9.Reference + 0x10))(TVar9.Reference);
      }
    }
    local_6e8.Flags = (this->LogLabel).Flags;
    goto LAB_142c0a62c;
  }
  local_6d8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6d8.Pairs.ArrayNum = 0;
  local_6d8.Pairs.ArrayMax = 0;
  local_3c8.Type = Text;
  local_3c8.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)TVar5.Reference;
  if (TVar5.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_res18);
  }
  local_3c8.TextValue.field0_0x0.TypedValue.Flags = (this->LogLabel).Flags;
  if ((local_3c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  ::FString::FString(&local_3e8,L"LogLabel");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_6d8,&local_3e8,&local_3c8);
  if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
  }
  if (local_3c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_3c8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  this_00 = TSharedPtr<FMessageLogListingModel,1>::operator->(&this->MessageLogListingModel);
  this_01 = TSharedPtr<FMessageLogListingModel,1>::operator->(&this->MessageLogListingModel);
  pFVar13 = FMessageLogListingModel::PageAtIndex(this_01,0);
  local_5a0 = (FTokenizedMessage *)0x0;
  FStack_598.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  iVar12 = (pFVar13->Messages).ArrayNum;
  pFVar13 = FMessageLogListingModel::PageAtIndex(this_00,0);
  uVar20 = iVar12 - 1;
  if (((int)uVar20 < 0) || ((pFVar13->Messages).ArrayNum <= (int)uVar20)) {
LAB_142c0a43b:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    TVar21 = CriticalError;
    if ((int)uVar20 < (pFVar13->Messages).ArrayNum) {
      TVar21 = ~uVar20 >> 0x1f;
    }
    if ((TVar21 == CriticalError) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar6 = (pFVar13->Messages).AllocatorInstance.Data;
    local_3f0.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)(int)uVar20 * 0x10 + 8);
    local_5a0 = *(FTokenizedMessage **)(pFVar6 + (longlong)(int)uVar20 * 0x10);
    if (local_3f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3f0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_3f0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3f8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_598,&local_3f0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3f0.ReferenceController);
    if (local_5a0 == (FTokenizedMessage *)0x0) goto LAB_142c0a43b;
  }
  pFVar14 = FTokenizedMessage::ToText(local_5a0,&local_1f8);
  local_2b8.Type = Text;
  FText::FText((FText *)&local_2b8.TextValue,pFVar14);
  if ((local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  ::FString::FString(&local_3d8,L"LastMessage");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_6d8,&local_3d8,&local_2b8);
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  if (local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_1f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_598.ReferenceController);
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_218,L"MessageLog",L"DefaultNoMessageToLastMessage",
                       L"{LogLabel}: {LastMessage}");
  pFVar15 = FTextFormat::FTextFormat(&local_70,pFVar14,Default);
  pFVar14 = FText::Format(&local_208,pFVar15,&local_6d8);
  FText::operator=(&local_6e8,pFVar14);
  if (local_208.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
  }
  if (local_218.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_6d8.Pairs.AllocatorInstance.Data,
             local_6d8.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_6d8.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_6d8.Pairs.AllocatorInstance.Data);
  }
LAB_142c0a62c:
  FNotificationInfo::FNotificationInfo(&local_1d8,&local_6e8);
  iVar12 = NumMessagesPresent(this,0,Error);
  if (iVar12 < 1) {
    uStack_6c0 = 0;
    local_6c8 = OpenMessageLog;
    lStack_280 = (ulonglong)uStack_6bc << 0x20;
    local_288 = OpenMessageLog;
    local_1d8.bFireAndForget = true;
    pTVar16 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateSP<FMessageLogListingViewModel>
                        ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_678,this,
                         (pmf_2ceabe0f *)&local_288);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1d8.Hyperlink,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar16);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_678,
               (FWriteAccessScope *)&local_2e8);
    if ((local_668 != 0) && (local_670.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_670.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_670,0,0,0x10);
      local_668 = 0;
    }
    if (local_2e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
    }
    if (local_670.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_670.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_678);
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_298,L"MessageLog",L"ShowMessageLogHyperlink",L"Show Message Log");
    FText::FText(&local_5d0,pFVar14);
    local_5c0 = 1;
    local_5a8 = 0;
    local_5b8 = (undefined1  [8])0x0;
    FStack_5b0.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&local_1d8.HyperlinkText.Value,&local_5d0);
    local_1d8.HyperlinkText.bIsSet = (bool)local_5c0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1d8.HyperlinkText.Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5b8,
               (FWriteAccessScope *)&local_3a8);
    if (((int)local_5a8 != 0) && (FStack_5b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_5b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5b0,0,0,0x10);
      local_5a8 = local_5a8 & 0xffffffff00000000;
    }
    if (local_3a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a8.Accessor,&local_3a8);
    }
    if (FStack_5b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_5b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_5b8);
    if (local_5d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5d0.TextData.Reference + 0x10))();
    }
    if (local_298.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
    }
    local_1d8.ExpireDuration = 14.0;
    local_1d8.bUseThrobber = true;
    pFVar18 = FSlateNotificationManager::Get();
    FSlateNotificationManager::AddNotification(pFVar18,&local_278,&local_1d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_278.SharedReferenceCount.ReferenceController);
  }
  else {
    pTVar3 = &this->OpenNotifications;
    local_590.TextData.Reference = local_6e8.TextData.Reference;
    if (local_6e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_6e8.TextData.Reference + 8))
                (local_6e8.TextData.Reference,local_41c);
    }
    pFVar19 = (pTVar3->AllocatorInstance).Data;
    pFVar6 = pFVar19 + (longlong)(this->OpenNotifications).ArrayNum * 0x28;
    local_590.Flags = local_6e8.Flags;
    for (; pFVar19 != pFVar6; pFVar19 = pFVar19 + 0x28) {
      iVar12 = FText::CompareTo((FText *)(pFVar19 + 0x18),&local_590,Default);
      if (iVar12 == 0) {
        if (local_590.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_590.TextData.Reference + 0x10))();
        }
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          DismissNotification(this,*(int *)pFVar19);
        }
        goto LAB_142c0a6e9;
      }
    }
    if (local_590.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_590.TextData.Reference + 0x10))(local_590.TextData.Reference);
    }
LAB_142c0a6e9:
    local_res20[0] = NextNotificationId;
    NextNotificationId = NextNotificationId + 1;
    uStack_6c0 = 0;
    local_1d8.bFireAndForget = true;
    local_6c8 = DismissNotification;
    lStack_230 = (ulonglong)uStack_6bc << 0x20;
    local_238 = DismissNotification;
    local_1d8.bUseThrobber = false;
    local_1d8.FadeOutDuration = 0.0;
    local_1d8.ExpireDuration = 15.0;
    pTVar16 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateSP<FMessageLogListingViewModel,int_&>
                        (&local_60,this,(pmf_d021734f *)&local_238,local_res20);
    pFVar14 = FText::FText(&local_248);
    FText::FText(&local_600,pFVar14);
    local_5f0 = 1;
    local_5d8 = 0;
    local_5e8 = (undefined1  [8])0x0;
    FStack_5e0.Data = (FScriptContainerElement *)0x0;
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_228,L"MessageLog",L"DismissMessageButton",L"Dismiss");
    FText::FText(&local_630,pFVar14);
    local_608 = 0;
    local_620 = 1;
    local_580._0_8_ = local_630.TextData.Reference;
    local_618 = (undefined1  [8])0x0;
    FStack_610.Data = (FScriptContainerElement *)0x0;
    if (local_630.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_630.TextData.Reference + 8))
                (local_630.TextData.Reference,local_418);
    }
    local_580._8_4_ = local_630.Flags;
    local_580[0x10] = local_620;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_568,
               (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_618);
    local_550.Reference = local_600.TextData.Reference;
    if (local_600.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_600.TextData.Reference + 8))
                (local_600.TextData.Reference,local_414);
    }
    local_548 = local_600.Flags;
    local_540 = (bool)local_5f0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_538,
               (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_5e8);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_520,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar16);
    local_4d8 = (EVisibility)EVisibility::Collapsed.Value.Value;
    local_4d7 = (EVisibility)(EVisibility)EVisibility::Collapsed.Value.Value;
    local_4d6 = (EVisibility)(EVisibility)EVisibility::Collapsed.Value.Value;
    local_4d5 = (EVisibility)EVisibility::Visible.Value.Value;
    local_508.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_500.Data = (FScriptContainerElement *)0x0;
    local_4f8 = 0;
    local_4f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_4e8.Data = (FScriptContainerElement *)0x0;
    local_4e0 = 0;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar16);
    if (*(void **)&pTVar16->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar16->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar16);
    if (((local_1d8.ButtonDetails.AllocatorInstance.Data <= (FScriptContainerElement *)local_580) &&
        ((FScriptContainerElement *)local_580 <
         local_1d8.ButtonDetails.AllocatorInstance.Data +
         (longlong)local_1d8.ButtonDetails.ArrayMax * 0xb0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (local_1d8.ButtonDetails.ArrayNum == local_1d8.ButtonDetails.ArrayMax) {
      local_1d8.ButtonDetails.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x8b0,&local_1d8.ButtonDetails.AllocatorInstance,
                      &local_1d8.ButtonDetails.ArrayMax);
    }
    lVar17 = (longlong)local_1d8.ButtonDetails.ArrayNum;
    local_1d8.ButtonDetails.ArrayNum = local_1d8.ButtonDetails.ArrayNum + 1;
    FNotificationButtonInfo::FNotificationButtonInfo
              ((FNotificationButtonInfo *)
               (local_1d8.ButtonDetails.AllocatorInstance.Data + lVar17 * 0xb0),
               (FNotificationButtonInfo *)local_580);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_4f0,(FWriteAccessScope *)&local_390);
    if (((int)local_4e0 != 0) && (FStack_4e8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_4e8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4e8,0,0,0x10);
      local_4e0 = local_4e0 & 0xffffffff00000000;
    }
    if (local_390.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_390.Accessor,&local_390);
    }
    if (FStack_4e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_4e8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4f0.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_508,(FWriteAccessScope *)&local_2d0);
    if (((int)local_4f8 != 0) && (FStack_500.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_500.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_500,0,0,0x10);
      local_4f8 = local_4f8 & 0xffffffff00000000;
    }
    if (local_2d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d0.Accessor,&local_2d0);
    }
    if (FStack_500.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_500.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_508.AccessDetector);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_520);
    if ((void *)local_520._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_520._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_520);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_538);
    if ((void *)local_538._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_538._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_538);
    if (local_550.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_550.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_568);
    if ((void *)local_568._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_568._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_568);
    if ((ITextData *)local_580._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_580._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_618,
               (FWriteAccessScope *)&local_378);
    if (((int)local_608 != 0) && (FStack_610.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_610.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_610,0,0,0x10);
      local_608 = local_608 & 0xffffffff00000000;
    }
    if (local_378.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
    }
    if (FStack_610.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_610.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_618);
    if (local_630.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_630.TextData.Reference + 0x10))();
    }
    if (local_228.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5e8,
               (FWriteAccessScope *)&local_360);
    if (((int)local_5d8 != 0) && (FStack_5e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_5e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5e0,0,0,0x10);
      local_5d8 = local_5d8 & 0xffffffff00000000;
    }
    if (local_360.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_360.Accessor,&local_360);
    }
    if (FStack_5e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_5e0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_5e8);
    if (local_600.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_600.TextData.Reference + 0x10))();
    }
    if (local_248.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
    }
    uStack_6c0 = 0;
    local_6c8 = OpenMessageLogFromNotification;
    lStack_250 = (ulonglong)uStack_6bc << 0x20;
    local_258 = OpenMessageLogFromNotification;
    pTVar16 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateSP<FMessageLogListingViewModel,int_&>
                        (&local_48,this,(pmf_d021734f *)&local_258,local_res20);
    pFVar14 = FText::FText(&local_1e8);
    FText::FText(&local_6a8,pFVar14);
    local_698 = 1;
    local_680 = 0;
    local_690 = (undefined1  [8])0x0;
    FStack_688.Data = (FScriptContainerElement *)0x0;
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_268,L"MessageLog",L"ShowMessageLogButton",L"Show Message Log");
    FText::FText(&local_660,pFVar14);
    local_638 = 0;
    local_650 = 1;
    local_4d0._0_8_ = local_660.TextData.Reference;
    local_648 = (undefined1  [8])0x0;
    FStack_640.Data = (FScriptContainerElement *)0x0;
    if (local_660.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_660.TextData.Reference + 8))
                (local_660.TextData.Reference,local_410);
    }
    local_4d0._8_4_ = local_660.Flags;
    local_4d0[0x10] = local_650;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_4b8,
               (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_648);
    local_4a0.Reference = local_6a8.TextData.Reference;
    if (local_6a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_6a8.TextData.Reference + 8))
                (local_6a8.TextData.Reference,local_400);
    }
    local_498 = local_6a8.Flags;
    local_490 = (bool)local_698;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_488,
               (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_690);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_470,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar16);
    local_428 = (EVisibility)EVisibility::Collapsed.Value.Value;
    local_427 = (EVisibility)(EVisibility)EVisibility::Collapsed.Value.Value;
    local_426 = (EVisibility)(EVisibility)EVisibility::Collapsed.Value.Value;
    local_425 = (EVisibility)EVisibility::Visible.Value.Value;
    local_458.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_450.Data = (FScriptContainerElement *)0x0;
    local_448 = 0;
    local_440.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_438.Data = (FScriptContainerElement *)0x0;
    local_430 = 0;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar16);
    if (*(void **)&pTVar16->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar16->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar16);
    if (((local_1d8.ButtonDetails.AllocatorInstance.Data <= (FScriptContainerElement *)local_4d0) &&
        ((FScriptContainerElement *)local_4d0 <
         local_1d8.ButtonDetails.AllocatorInstance.Data +
         (longlong)local_1d8.ButtonDetails.ArrayMax * 0xb0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (local_1d8.ButtonDetails.ArrayNum == local_1d8.ButtonDetails.ArrayMax) {
      local_1d8.ButtonDetails.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x8b0,&local_1d8.ButtonDetails.AllocatorInstance,
                      &local_1d8.ButtonDetails.ArrayMax);
    }
    lVar17 = (longlong)local_1d8.ButtonDetails.ArrayNum;
    local_1d8.ButtonDetails.ArrayNum = local_1d8.ButtonDetails.ArrayNum + 1;
    FNotificationButtonInfo::FNotificationButtonInfo
              ((FNotificationButtonInfo *)
               (local_1d8.ButtonDetails.AllocatorInstance.Data + lVar17 * 0xb0),
               (FNotificationButtonInfo *)local_4d0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_440,(FWriteAccessScope *)&local_348);
    if (((int)local_430 != 0) && (FStack_438.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_438.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_438,0,0,0x10);
      local_430 = local_430 & 0xffffffff00000000;
    }
    if (local_348.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
    }
    if (FStack_438.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_438.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_440.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_458,(FWriteAccessScope *)&local_330);
    if (((int)local_448 != 0) && (FStack_450.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_450.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_450,0,0,0x10);
      local_448 = local_448 & 0xffffffff00000000;
    }
    if (local_330.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_330.Accessor,&local_330);
    }
    if (FStack_450.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_450.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_458.AccessDetector);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_470);
    if ((void *)local_470._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_470._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_470);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_488);
    if ((void *)local_488._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_488._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_488);
    if (local_4a0.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_4a0.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4b8);
    if ((void *)local_4b8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_4b8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4b8);
    if ((ITextData *)local_4d0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_4d0._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_648,
               (FWriteAccessScope *)&local_318);
    if (((int)local_638 != 0) && (FStack_640.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_640.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_640,0,0,0x10);
      local_638 = local_638 & 0xffffffff00000000;
    }
    if (local_318.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
    }
    if (FStack_640.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_640.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_648);
    if (local_660.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_660.TextData.Reference + 0x10))();
    }
    if (local_268.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_690,
               (FWriteAccessScope *)&local_300);
    if (((int)local_680 != 0) && (FStack_688.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_688.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_688,0,0,0x10);
      local_680 = local_680 & 0xffffffff00000000;
    }
    if (local_300.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_300.Accessor,&local_300);
    }
    if (FStack_688.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_688.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_690);
    if (local_6a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_6a8.TextData.Reference + 0x10))();
    }
    if (local_1e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
    }
    pFVar18 = FSlateNotificationManager::Get();
    FSlateNotificationManager::AddNotification(pFVar18,&local_6b8,&local_1d8);
    if (local_6b8.Object != (SNotificationItem *)0x0) {
      if ((local_6b8.Object == (SNotificationItem *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (**(code **)(*(longlong *)local_6b8.Object + 0x280))(local_6b8.Object,3);
      iVar12 = (this->OpenNotifications).ArrayNum;
      piVar1 = &(this->OpenNotifications).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&pTVar3->AllocatorInstance,piVar1);
      }
      TVar5.Reference = local_6e8.TextData.Reference;
      lVar17 = (longlong)iVar12;
      (this->OpenNotifications).ArrayNum = iVar12 + 1;
      pFVar6 = (pTVar3->AllocatorInstance).Data;
      if (local_6e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_6e8.TextData.Reference + 8))
                  (local_6e8.TextData.Reference,local_408);
      }
      FVar10.ReferenceController = local_6b8.SharedReferenceCount.ReferenceController;
      uVar20 = local_6e8.Flags;
      if (local_6b8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
      {
        *(int *)(pFVar6 + lVar17 * 0x28) = local_res20[0];
        *(SNotificationItem **)(pFVar6 + lVar17 * 0x28 + 8) = local_6b8.Object;
        *(undefined8 *)(pFVar6 + lVar17 * 0x28 + 0x10) = 0;
      }
      else {
        LOCK();
        (local_6b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_6b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
        *(int *)(pFVar6 + lVar17 * 0x28) = local_res20[0];
        *(SNotificationItem **)(pFVar6 + lVar17 * 0x28 + 8) = local_6b8.Object;
        *(TReferenceControllerBase<1> **)(pFVar6 + lVar17 * 0x28 + 0x10) =
             local_6b8.SharedReferenceCount.ReferenceController;
        LOCK();
        (local_6b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_6b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      *(ITextData **)(pFVar6 + lVar17 * 0x28 + 0x18) = TVar5.Reference;
      if (TVar5.Reference == (ITextData *)0x0) {
        *(uint *)(pFVar6 + lVar17 * 0x28 + 0x20) = local_6e8.Flags;
      }
      else {
        (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_404);
        *(uint *)(pFVar6 + lVar17 * 0x28 + 0x20) = uVar20;
        (**(code **)((longlong)*TVar5.Reference + 0x10))(TVar5.Reference);
      }
      if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &(FVar10.ReferenceController)->WeakReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)((FVar10.ReferenceController)->_padding_ + 8))(FVar10.ReferenceController,1);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6b8.SharedReferenceCount.ReferenceController);
  }
  FNotificationInfo::~FNotificationInfo(&local_1d8);
  if (local_6e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6e8.TextData.Reference + 0x10))();
  }
  return;
}

// NumMessages @ 142c0be10

uint __thiscall FMessageLogListingViewModel::NumMessages(FMessageLogListingViewModel *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPage *pFVar4;
  
  if ((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  pFVar4 = FMessageLogListingModel::PageAtIndex
                     ((this->MessageLogListingModel).Object,this->CurrentPageIndex);
  return (pFVar4->Messages).ArrayNum;
}

// NumMessages @ 142c0be70

int __thiscall
FMessageLogListingViewModel::NumMessages(FMessageLogListingViewModel *this,Type param_1)

{
  int iVar1;
  
  iVar1 = NumMessagesPresent(this,0,param_1);
  return iVar1;
}

// NumMessagesPresent @ 142c0be80

int __thiscall
FMessageLogListingViewModel::NumMessagesPresent
          (FMessageLogListingViewModel *this,uint param_1,Type param_2)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FTokenizedMessage *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  Type TVar6;
  FPage *pFVar7;
  int iVar8;
  
  iVar5 = 0;
  if ((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  pFVar7 = FMessageLogListingModel::PageAtIndex((this->MessageLogListingModel).Object,param_1);
  iVar8 = iVar5;
  for (; (-1 < iVar5 && (iVar5 < (pFVar7->Messages).ArrayNum)); iVar5 = iVar5 + 1) {
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    pFVar1 = (pFVar7->Messages).AllocatorInstance.Data;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)iVar5 * 0x10 + 8);
    this_00 = *(FTokenizedMessage **)(pFVar1 + (longlong)iVar5 * 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    TVar6 = FTokenizedMessage::GetSeverity(this_00);
    if ((int)TVar6 <= (int)param_2) {
      iVar8 = iVar8 + 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return iVar8;
}

// OnChanged @ 142c0bfa0

void __thiscall FMessageLogListingViewModel::OnChanged(FMessageLogListingViewModel *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsRefreshing != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsRefreshing",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Presentation\\MessageLogListingViewModel.cpp"
                       ,0x3e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIsRefreshing = true;
  RefreshFilteredMessages(this);
  this->bIsRefreshing = false;
  return;
}

// OnDataChanged @ 142c0c0e0

FChangedEvent * __thiscall
FMessageLogListingViewModel::OnDataChanged(FMessageLogListingViewModel *this)

{
  return (FChangedEvent *)&this->ChangedEvent;
}

// OnFilterChanged @ 142c0dca0

void __thiscall FMessageLogListingViewModel::OnFilterChanged(FMessageLogListingViewModel *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  int iVar5;
  FPage *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FTokenizedMessage *pFStack_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)(this->FilteredMessages).AllocatorInstance.Data,
             (this->FilteredMessages).ArrayNum);
  piVar1 = &(this->FilteredMessages).ArrayMax;
  (this->FilteredMessages).ArrayNum = 0;
  if ((this->FilteredMessages).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->FilteredMessages).AllocatorInstance,0,piVar1);
  }
  if (((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar6 = FMessageLogListingModel::PageAtIndex
                     ((this->MessageLogListingModel).Object,this->CurrentPageIndex);
  iVar9 = 0;
  do {
    if ((iVar9 < 0) || ((pFVar6->Messages).ArrayNum <= iVar9)) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this->ChangedEvent);
      return;
    }
    if ((iVar9 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar8 = (pFVar6->Messages).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
    pFStack_28 = *(FTokenizedMessage **)pFVar8;
    pTStack_20 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((((this->MessageFilters).ArrayNum < 1) ||
        (TVar4 = FTokenizedMessage::GetSeverity(pFStack_28), (int)TVar4 < 0)) ||
       ((this->MessageFilters).ArrayNum <= (int)TVar4)) {
LAB_142c1fbbd:
      pFVar8 = (this->FilteredMessages).AllocatorInstance.Data;
      if (((pFVar8 <= (FScriptContainerElement *)&pFStack_28) &&
          ((FScriptContainerElement *)&pFStack_28 < pFVar8 + (longlong)*piVar1 * 0x10)) &&
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
      iVar5 = (this->FilteredMessages).ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->FilteredMessages).AllocatorInstance,piVar1);
      }
      (this->FilteredMessages).ArrayNum = iVar5 + 1;
      pFVar8 = (this->FilteredMessages).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
      *(FTokenizedMessage **)pFVar8 = pFStack_28;
      *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTStack_20;
      if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    else {
      TVar4 = FTokenizedMessage::GetSeverity(pFStack_28);
      uVar7 = 0;
      if ((int)TVar4 < (this->MessageFilters).ArrayNum) {
        uVar7 = ~TVar4 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(char *)(*(longlong *)
                     ((this->MessageFilters).AllocatorInstance.Data + (longlong)(int)TVar4 * 0x10) +
                   0x48) != '\0') goto LAB_142c1fbbd;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
    iVar9 = iVar9 + 1;
  } while( true );
}

// OnMessageTokenClicked @ 142c115c0

IMessageTokenClickedEvent * __thiscall
FMessageLogListingViewModel::OnMessageTokenClicked(FMessageLogListingViewModel *this)

{
  return (IMessageTokenClickedEvent *)&this->TokenClickedEvent;
}

// OnPageSelectionChanged @ 142c15a10

FOnPageSelectionChangedEvent * __thiscall
FMessageLogListingViewModel::OnPageSelectionChanged(FMessageLogListingViewModel *this)

{
  return (FOnPageSelectionChangedEvent *)&this->PageSelectionChangedEvent;
}

// OnSelectionChanged @ 142c173e0

FOnSelectionChangedEvent * __thiscall
FMessageLogListingViewModel::OnSelectionChanged(FMessageLogListingViewModel *this)

{
  return (FOnSelectionChangedEvent *)&this->SelectionChangedEvent;
}

// Open @ 142c18690

void __thiscall FMessageLogListingViewModel::Open(FMessageLogListingViewModel *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  IModuleInterface *pIVar4;
  undefined8 uVar5;
  FName FStackX_8;
  FName FStackX_10;
  FString FStack_18;
  
  pFVar3 = ::FName::FName(&FStackX_10,"MessageLog");
  FStackX_8 = *pFVar3;
  this_00 = FModuleManager::Get();
  bVar2 = FModuleManager::IsModuleLoaded(this_00,FStackX_8);
  if (!bVar2) {
    ::FName::ToString(&FStackX_8,&FStack_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ModuleManager.IsModuleLoaded(ModuleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                       ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pIVar4 = FModuleManager::GetModule(this_00,FStackX_8);
  pcVar1 = *(code **)((longlong)*pIVar4 + 0x60);
  uVar5 = (**(code **)(this->_padding_ + 0x98))(this);
  (*pcVar1)(pIVar4,uVar5);
  return;
}

// OpenMessageLog @ 142c186a0

void __thiscall FMessageLogListingViewModel::OpenMessageLog(FMessageLogListingViewModel *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  IModuleInterface *pIVar4;
  undefined8 uVar5;
  FName local_res8;
  FName local_res10;
  FString local_18;
  
  pFVar3 = ::FName::FName(&local_res10,"MessageLog");
  local_res8 = *pFVar3;
  this_00 = FModuleManager::Get();
  bVar2 = FModuleManager::IsModuleLoaded(this_00,local_res8);
  if (!bVar2) {
    ::FName::ToString(&local_res8,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ModuleManager.IsModuleLoaded(ModuleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                       ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pIVar4 = FModuleManager::GetModule(this_00,local_res8);
  pcVar1 = *(code **)((longlong)*pIVar4 + 0x60);
  uVar5 = (**(code **)(this->_padding_ + 0x98))(this);
  (*pcVar1)(pIVar4,uVar5);
  return;
}

// OpenMessageLogFromNotification @ 142c189b0

void __thiscall
FMessageLogListingViewModel::OpenMessageLogFromNotification
          (FMessageLogListingViewModel *this,int param_1)

{
  DismissNotification(this,param_1);
  OpenMessageLog(this);
  return;
}

// PrevPage @ 142c19610

void __thiscall FMessageLogListingViewModel::PrevPage(FMessageLogListingViewModel *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) {
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
  uVar3 = 0;
  if (this->CurrentPageIndex != (((this->MessageLogListingModel).Object)->Pages).ListSize - 1U) {
    uVar3 = this->CurrentPageIndex + 1;
  }
  this->CurrentPageIndex = uVar3;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->PageSelectionChangedEvent);
  RefreshFilteredMessages(this);
  return;
}

// RefreshFilteredMessages @ 142c1fa20

void __thiscall
FMessageLogListingViewModel::RefreshFilteredMessages(FMessageLogListingViewModel *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  int iVar5;
  FPage *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FTokenizedMessage *local_28;
  TReferenceControllerBase<1> *local_20;
  
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)(this->FilteredMessages).AllocatorInstance.Data,
             (this->FilteredMessages).ArrayNum);
  piVar1 = &(this->FilteredMessages).ArrayMax;
  (this->FilteredMessages).ArrayNum = 0;
  if ((this->FilteredMessages).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->FilteredMessages).AllocatorInstance,0,piVar1);
  }
  if (((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar6 = FMessageLogListingModel::PageAtIndex
                     ((this->MessageLogListingModel).Object,this->CurrentPageIndex);
  iVar9 = 0;
  do {
    if ((iVar9 < 0) || ((pFVar6->Messages).ArrayNum <= iVar9)) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this->ChangedEvent);
      return;
    }
    if ((iVar9 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar8 = (pFVar6->Messages).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
    local_28 = *(FTokenizedMessage **)pFVar8;
    local_20 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((((this->MessageFilters).ArrayNum < 1) ||
        (TVar4 = FTokenizedMessage::GetSeverity(local_28), (int)TVar4 < 0)) ||
       ((this->MessageFilters).ArrayNum <= (int)TVar4)) {
LAB_142c1fbbd:
      pFVar8 = (this->FilteredMessages).AllocatorInstance.Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_28) &&
          ((FScriptContainerElement *)&local_28 < pFVar8 + (longlong)*piVar1 * 0x10)) &&
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
      iVar5 = (this->FilteredMessages).ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->FilteredMessages).AllocatorInstance,piVar1);
      }
      (this->FilteredMessages).ArrayNum = iVar5 + 1;
      pFVar8 = (this->FilteredMessages).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
      *(FTokenizedMessage **)pFVar8 = local_28;
      *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_20;
      if (local_20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    else {
      TVar4 = FTokenizedMessage::GetSeverity(local_28);
      uVar7 = 0;
      if ((int)TVar4 < (this->MessageFilters).ArrayNum) {
        uVar7 = ~TVar4 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(char *)(*(longlong *)
                     ((this->MessageFilters).AllocatorInstance.Data + (longlong)(int)TVar4 * 0x10) +
                   0x48) != '\0') goto LAB_142c1fbbd;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    iVar9 = iVar9 + 1;
  } while( true );
}

// SelectMessage @ 142c26b70

void __thiscall
FMessageLogListingViewModel::SelectMessage
          (FMessageLogListingViewModel *this,TSharedRef<FTokenizedMessage,1> *param_1,bool param_2)

{
  int *piVar1;
  TSharedRef<FTokenizedMessage,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FTokenizedMessage,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  
  pTVar2 = (TSharedRef<FTokenizedMessage,1> *)
           (this->SelectedFilteredMessages).AllocatorInstance.Data;
  if (pTVar2 != pTVar2 + (this->SelectedFilteredMessages).ArrayNum) {
    pTVar7 = pTVar2;
    do {
      if (pTVar7->Object == param_1->Object) {
        iVar6 = (int)((longlong)pTVar7 - (longlong)pTVar2 >> 4);
        goto LAB_142c26bb5;
      }
      pTVar7 = pTVar7 + 1;
    } while (pTVar7 != pTVar2 + (this->SelectedFilteredMessages).ArrayNum);
  }
  iVar6 = -1;
LAB_142c26bb5:
  if (param_2) {
    if (iVar6 != -1) {
      return;
    }
    pFVar9 = (this->FilteredMessages).AllocatorInstance.Data;
    if (pFVar9 == pFVar9 + (longlong)(this->FilteredMessages).ArrayNum * 0x10) {
      return;
    }
    pFVar8 = pFVar9;
    while (*(FTokenizedMessage **)pFVar8 != param_1->Object) {
      pFVar8 = pFVar8 + 0x10;
      if (pFVar8 == pFVar9 + (longlong)(this->FilteredMessages).ArrayNum * 0x10) {
        return;
      }
    }
    if ((int)((longlong)pFVar8 - (longlong)pFVar9 >> 4) == -1) {
      return;
    }
    if (((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->SelectedFilteredMessages).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->SelectedFilteredMessages).ArrayNum;
    piVar1 = &(this->SelectedFilteredMessages).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->SelectedFilteredMessages).AllocatorInstance,piVar1);
    }
    (this->SelectedFilteredMessages).ArrayNum = iVar6 + 1;
    pFVar9 = (this->SelectedFilteredMessages).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
    *(FTokenizedMessage **)pFVar9 = param_1->Object;
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    if (iVar6 == -1) {
      return;
    }
    TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_>::Remove
              (&this->SelectedFilteredMessages,param_1);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->SelectionChangedEvent);
  return;
}

// SelectMessages @ 142c26d70

void __thiscall
FMessageLogListingViewModel::SelectMessages
          (FMessageLogListingViewModel *this,
          TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TSharedRef<FTokenizedMessage,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  
  pTVar1 = &this->SelectedFilteredMessages;
  piVar2 = &(this->SelectedFilteredMessages).ArrayNum;
  DestructItems<TSharedRef<FTokenizedMessage,1>,int>
            ((TSharedRef<FTokenizedMessage,1> *)(pTVar1->AllocatorInstance).Data,
             (this->SelectedFilteredMessages).ArrayNum);
  piVar3 = &(this->SelectedFilteredMessages).ArrayMax;
  *piVar2 = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar3);
  }
  if (pTVar1 == param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar4,&pTVar1->AllocatorInstance,piVar2,piVar3);
    ConstructItems<TSharedRef<FTokenizedMessage,1>,TSharedRef<FTokenizedMessage,1>,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10,
               (TSharedRef<FTokenizedMessage,1> *)(param_1->AllocatorInstance).Data,iVar4);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->SelectionChangedEvent);
  return;
}

// SetAllowClear @ 142c26eb0

void __thiscall
FMessageLogListingViewModel::SetAllowClear(FMessageLogListingViewModel *this,bool param_1)

{
  this->bAllowClear = param_1;
  return;
}

// SetCurrentPage @ 142c27450

void __thiscall
FMessageLogListingViewModel::SetCurrentPage(FMessageLogListingViewModel *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  this->bShowPages = true;
  if ((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) {
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
  FMessageLogListingModel::SetCurrentPage
            ((this->MessageLogListingModel).Object,param_1,this->MaxPageCount);
  this->CurrentPageIndex = 0;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->PageSelectionChangedEvent);
  RefreshFilteredMessages(this);
  return;
}

// SetCurrentPage @ 142c274d0

void __thiscall
FMessageLogListingViewModel::SetCurrentPage(FMessageLogListingViewModel *this,uint param_1)

{
  FMessageLogListingModel *this_00;
  code *pcVar1;
  bool bVar2;
  FPage *pFVar3;
  
  this->bShowPages = true;
  if (((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 != 0) &&
     (this_00 = (this->MessageLogListingModel).Object, param_1 < (uint)(this_00->Pages).ListSize)) {
    pFVar3 = FMessageLogListingModel::PageAtIndex(this_00,param_1);
    FMessageLogListingModel::SetCurrentPage(this_00,&pFVar3->Title,this_00->MaxPages);
  }
  this->CurrentPageIndex = 0;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->PageSelectionChangedEvent);
  RefreshFilteredMessages(this);
  return;
}

// SetCurrentPageIndex @ 142c27570

void __thiscall
FMessageLogListingViewModel::SetCurrentPageIndex(FMessageLogListingViewModel *this,uint param_1)

{
  this->CurrentPageIndex = param_1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->PageSelectionChangedEvent);
  RefreshFilteredMessages(this);
  return;
}

// SetDiscardDuplicates @ 142c275a0

void __thiscall
FMessageLogListingViewModel::SetDiscardDuplicates(FMessageLogListingViewModel *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = this->bDiscardDuplicates;
  this->bDiscardDuplicates = param_1;
  if ((param_1) && (bVar2 != true)) {
    if ((this->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) {
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
    FMessageLogListingModel::RemoveDuplicates((this->MessageLogListingModel).Object,0);
    RefreshFilteredMessages(this);
    return;
  }
  return;
}

// SetLabel @ 142c27650

void __thiscall
FMessageLogListingViewModel::SetLabel(FMessageLogListingViewModel *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->LogLabel).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->LogLabel).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    (this->LogLabel).Flags = param_1->Flags;
    return;
  }
  (this->LogLabel).Flags = param_1->Flags;
  return;
}

// SetMaxPageCount @ 142c276e0

void __thiscall
FMessageLogListingViewModel::SetMaxPageCount(FMessageLogListingViewModel *this,uint param_1)

{
  this->MaxPageCount = param_1;
  return;
}

// SetScrollToBottom @ 142c279f0

void __thiscall
FMessageLogListingViewModel::SetScrollToBottom(FMessageLogListingViewModel *this,bool param_1)

{
  this->bScrollToBottom = param_1;
  return;
}

// SetShowFilters @ 142c27ae0

void __thiscall
FMessageLogListingViewModel::SetShowFilters(FMessageLogListingViewModel *this,bool param_1)

{
  this->bShowFilters = param_1;
  return;
}

// SetShowPages @ 142c27af0

void __thiscall
FMessageLogListingViewModel::SetShowPages(FMessageLogListingViewModel *this,bool param_1)

{
  this->bShowPages = param_1;
  return;
}

