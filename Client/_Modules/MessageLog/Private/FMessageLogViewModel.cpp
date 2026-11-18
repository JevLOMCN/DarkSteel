// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 18

// FMessageLogViewModel @ 142bc8770

FMessageLogViewModel * __thiscall
FMessageLogViewModel::FMessageLogViewModel
          (FMessageLogViewModel *this,TSharedPtr<FMessageLogModel,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMessageLogViewModel__6B_;
  (this->MessageLogModel).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->MessageLogModel).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->NameToViewModelMap = 0;
  *(undefined8 *)&(this->NameToViewModelMap).field_0x8 = 0;
  *(undefined8 *)&(this->NameToViewModelMap).field_0x20 = 0;
  *(undefined4 *)&(this->NameToViewModelMap).field_0x28 = 0;
  *(undefined4 *)&(this->NameToViewModelMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameToViewModelMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameToViewModelMap).field_0x34 = 0;
  *(undefined8 *)&(this->NameToViewModelMap).field_0x40 = 0;
  *(undefined4 *)&(this->NameToViewModelMap).field_0x48 = 0;
  (this->ViewModelArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewModelArray).ArrayNum = 0;
  (this->ViewModelArray).ArrayMax = 0;
  (this->SelectedLogListingViewModel).Object = (FMessageLogListingViewModel *)0x0;
  (this->SelectedLogListingViewModel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->ChangedEvent = 0;
  *(undefined8 *)&(this->ChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedEvent).field_0x18 = 2;
  *(undefined8 *)&this->SelectionChangedEvent = 0;
  *(undefined8 *)&(this->SelectionChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->SelectionChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->SelectionChangedEvent).field_0x18 = 2;
  return this;
}

// ~FMessageLogViewModel @ 142bccb20

void __thiscall FMessageLogViewModel::~FMessageLogViewModel(FMessageLogViewModel *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  
  this->_padding_ = (longlong)&___7FMessageLogViewModel__6B_;
  if ((this->MessageLogModel).Object == (FMessageLogModel *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("MessageLogModel.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Presentation\\MessageLogViewModel.cpp"
                       ,0x13,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((this->MessageLogModel).Object == (FMessageLogModel *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((this->MessageLogModel).Object)->ChangedEvent,this);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SelectionChangedEvent).field_0x8,
             *(int *)&(this->SelectionChangedEvent).field_0x10);
  pvVar3 = *(void **)&(this->SelectionChangedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SelectionChangedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedEvent).field_0x8,*(int *)&(this->ChangedEvent).field_0x10);
  pvVar3 = *(void **)&(this->ChangedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectedLogListingViewModel).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<IMessageLogListing,1>,int>
            ((TSharedPtr<IMessageLogListing,1> *)(this->ViewModelArray).AllocatorInstance.Data,
             (this->ViewModelArray).ArrayNum);
  pFVar4 = (this->ViewModelArray).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->NameToViewModelMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->NameToViewModelMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameToViewModelMap);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageLogModel).SharedReferenceCount.ReferenceController);
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// operator() @ 142bcfd20

bool __thiscall
`FMessageLogViewModel::UpdateListingViewModelArray'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<IMessageLogListing,1> *param_1,
          TSharedPtr<IMessageLogListing,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FText *this_00;
  FText *pFVar5;
  
  if (param_1->Object == (IMessageLogListing *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_00 = (FText *)(**(code **)((longlong)*param_1->Object + 0xa8))();
  if (param_2->Object == (IMessageLogListing *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar5 = (FText *)(**(code **)((longlong)*param_2->Object + 0xa8))();
  iVar4 = FText::CompareTo(this_00,pFVar5,Default);
  return iVar4 < 1;
}

// ChangeCurrentListingViewModel @ 142bd6bb0

void __thiscall
FMessageLogViewModel::ChangeCurrentListingViewModel(FMessageLogViewModel *this,FName *param_1)

{
  FMessageLogListingViewModel *pFVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FMessageLogListingViewModel,1> *pTVar4;
  FString *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  wchar_t *pwVar7;
  FString local_38;
  FMessageLogListingViewModel *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  pwVar7 = L"";
  if (*param_1 == (FName)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LogName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Presentation\\MessageLogViewModel.cpp"
                       ,0x71,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar4 = TMapBase<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
           ::Find((TMapBase<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
                   *)&this->NameToViewModelMap,*param_1);
  if (pTVar4 == (TSharedPtr<FMessageLogListingViewModel,1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar4->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 != (FMessageLogListingViewModel *)0x0) {
      bVar3 = FPaths::FileExists(&GEditorPerProjectIni);
      if (bVar3) {
        pFVar5 = ::FName::ToString(param_1,&local_38);
        if ((pFVar5->Data).ArrayNum != 0) {
          pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
        FConfigCacheIni::SetString
                  (GConfig,L"MessageLog",L"LastLogListing",pwVar7,&GEditorPerProjectIni);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28 = (this->SelectedLogListingViewModel).Object;
      pTStack_20 = (this->SelectedLogListingViewModel).SharedReferenceCount.ReferenceController;
      (this->SelectedLogListingViewModel).Object = pFVar1;
      (this->SelectedLogListingViewModel).SharedReferenceCount.ReferenceController = pTVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_20);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this->SelectionChangedEvent);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// FindLogListingViewModel @ 142bf4cc0

TSharedPtr<FMessageLogListingViewModel,1> * __thiscall
FMessageLogViewModel::FindLogListingViewModel
          (FMessageLogViewModel *this,
          TSharedPtr<FMessageLogListingViewModel,1> *__return_storage_ptr__,FName *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FMessageLogListingViewModel,1> *pTVar4;
  
  if (*param_1 == (FName)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LogName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Presentation\\MessageLogViewModel.cpp"
                       ,0x71,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FMessageLogListingViewModel,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar4 = TMapBase<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
           ::Find((TMapBase<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
                   *)&this->NameToViewModelMap,*param_1);
  if (pTVar4 == (TSharedPtr<FMessageLogListingViewModel,1> *)0x0) {
    __return_storage_ptr__->Object = (FMessageLogListingViewModel *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = pTVar4->Object;
    pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetCurrentListingLabel @ 142bfc260

FString * __thiscall
FMessageLogViewModel::GetCurrentListingLabel
          (FMessageLogViewModel *this,FString *__return_storage_ptr__)

{
  FMessageLogListingViewModel *pFVar1;
  FText *this_00;
  FString *pFVar2;
  
  pFVar1 = (this->SelectedLogListingViewModel).Object;
  if (pFVar1 != (FMessageLogListingViewModel *)0x0) {
    this_00 = (FText *)(**(code **)(pFVar1->_padding_ + 0xa8))();
    pFVar2 = FText::ToString(this_00);
    ::FString::FString(__return_storage_ptr__,pFVar2);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCurrentListingName @ 142bfc2c0

FName __thiscall FMessageLogViewModel::GetCurrentListingName(FMessageLogViewModel *this)

{
  FMessageLogListingViewModel *pFVar1;
  undefined8 *puVar2;
  FName in_RDX;
  
  pFVar1 = (this->SelectedLogListingViewModel).Object;
  if (pFVar1 != (FMessageLogListingViewModel *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(pFVar1->_padding_ + 0x98))();
    *(undefined8 *)in_RDX = *puVar2;
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetCurrentListingViewModel @ 142bfc310

TSharedPtr<FMessageLogListingViewModel,1> * __thiscall
FMessageLogViewModel::GetCurrentListingViewModel
          (FMessageLogViewModel *this,
          TSharedPtr<FMessageLogListingViewModel,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->SelectedLogListingViewModel).Object;
  pTVar1 = (this->SelectedLogListingViewModel).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetLogListingViewModel @ 142bfd810

TSharedRef<FMessageLogListingViewModel,1> * __thiscall
FMessageLogViewModel::GetLogListingViewModel
          (FMessageLogViewModel *this,
          TSharedRef<FMessageLogListingViewModel,1> *__return_storage_ptr__,FName *param_1)

{
  FMessageLogModel *this_00;
  code *pcVar1;
  bool bVar2;
  TSharedRef<FMessageLogListingViewModel,1> *pTVar3;
  TSharedPtr<FMessageLogListingViewModel,1> *pTVar4;
  FText *pFVar5;
  FMessageLogInitializationOptions local_98;
  FMessageLogListingViewModel *local_88;
  FSharedReferencer<1> local_80;
  undefined8 local_78;
  FSharedReferencer<1> local_70;
  TSharedRef<FMessageLogListingModel,1> local_68;
  FName *local_58;
  longlong *local_50;
  TSharedRef<FMessageLogListingViewModel,1> local_48;
  FText local_38;
  
  if (*param_1 == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LogName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Presentation\\MessageLogViewModel.cpp"
                       ,0x7d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (*param_1 == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LogName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Presentation\\MessageLogViewModel.cpp"
                       ,0x71,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  pTVar4 = TMapBase<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
           ::Find((TMapBase<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
                   *)&this->NameToViewModelMap,*param_1);
  if (pTVar4 == (TSharedPtr<FMessageLogListingViewModel,1> *)0x0) {
    local_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_88 = pTVar4->Object;
    local_80.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_80.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_88 != (FMessageLogListingViewModel *)0x0) goto LAB_142bfda37;
    local_88 = (FMessageLogListingViewModel *)0x0;
  }
  local_98.bShowFilters = true;
  local_98.bShowPages = false;
  local_98.bAllowClear = true;
  local_98.bDiscardDuplicates = false;
  local_98.MaxPageCount = 0x14;
  local_98.bShowInLogWindow = true;
  local_98.bScrollToBottom = false;
  pFVar5 = FText::FText(&local_38);
  if ((this->MessageLogModel).Object == (FMessageLogModel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this_00 = (this->MessageLogModel).Object;
  if (*param_1 == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LogName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogModel.cpp"
                       ,0x3e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FMessageLogModel::RegisterOrGetLogListingModel(this_00,&local_68,param_1);
  pTVar3 = FMessageLogListingViewModel::Create(&local_48,&local_68,pFVar5,&local_98);
  local_70.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
  local_88 = pTVar3->Object;
  if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_80,&local_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  local_50 = (longlong *)&local_88;
  local_58 = param_1;
  TSet<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedPtr<FMessageLogListingViewModel,1>_const_&>_>
            ((TSet<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>,FDefaultSetAllocator>
              *)&this->NameToViewModelMap,
             (TPairInitializer<FName_const_&,TSharedPtr<FMessageLogListingViewModel,1>_const_&> *)
             &stack0x00000008,(bool *)&local_58);
  UpdateListingViewModelArray(this);
  if (local_88 == (FMessageLogListingViewModel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
LAB_142bfda37:
  __return_storage_ptr__->Object = local_88;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_80.ReferenceController;
  if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_80.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FMessageLogListingViewModel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.ReferenceController);
  return __return_storage_ptr__;
}

// GetLogListingViewModels @ 142bfdab0

TArray<TSharedPtr<IMessageLogListing,1>,TSizedDefaultAllocator<32>_> * __thiscall
FMessageLogViewModel::GetLogListingViewModels(FMessageLogViewModel *this)

{
  return &this->ViewModelArray;
}

// Initialize @ 142c04f10

void __thiscall FMessageLogViewModel::Initialize(FMessageLogViewModel *this)

{
  FMessageLogModel *pFVar1;
  code *pcVar2;
  bool bVar3;
  code *local_48;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if ((this->MessageLogModel).Object == (FMessageLogModel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MessageLogModel.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Presentation\\MessageLogViewModel.cpp"
                       ,0x19,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->MessageLogModel).Object == (FMessageLogModel *)0x0) {
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
  pFVar1 = (this->MessageLogModel).Object;
  uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
  local_48 = _vcall__16__flat______;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<FMessageLogViewModel>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_38,this,
             (pmf_095e5dfb *)&local_48);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  AddDelegateInstance<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar1->ChangedEvent,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&stack0x00000008);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  return;
}

// IsRegisteredLogListingViewModel @ 142c06400

bool __thiscall
FMessageLogViewModel::IsRegisteredLogListingViewModel(FMessageLogViewModel *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FMessageLogListingViewModel,1> *pTVar4;
  
  if (*param_1 == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LogName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Presentation\\MessageLogViewModel.cpp"
                       ,0x6b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pTVar4 = TMapBase<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
           ::Find((TMapBase<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
                   *)&this->NameToViewModelMap,*param_1);
  return pTVar4 != (TSharedPtr<FMessageLogListingViewModel,1> *)0x0;
}

// OnChanged @ 142c0c000

FChangedEvent * __thiscall FMessageLogViewModel::OnChanged(FMessageLogViewModel *this)

{
  return &this->ChangedEvent;
}

// OnSelectionChanged @ 142c173f0

FOnSelectionChangedEvent * __thiscall
FMessageLogViewModel::OnSelectionChanged(FMessageLogViewModel *this)

{
  return &this->SelectionChangedEvent;
}

// RegisterLogListingViewModel @ 142c1ff20

TSharedRef<FMessageLogListingViewModel,1> * __thiscall
FMessageLogViewModel::RegisterLogListingViewModel
          (FMessageLogViewModel *this,
          TSharedRef<FMessageLogListingViewModel,1> *__return_storage_ptr__,FName *param_1,
          FText *param_2,FMessageLogInitializationOptions *param_3)

{
  bool bVar1;
  FMessageLogModel *this_00;
  code *pcVar2;
  FMessageLogListingViewModel *this_01;
  bool bVar3;
  TSharedRef<FMessageLogListingViewModel,1> *pTVar4;
  TSharedPtr<FMessageLogListingViewModel,1> *pTVar5;
  FMessageLogListingViewModel *local_78;
  FSharedReferencer<1> FStack_70;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  TSharedRef<FMessageLogListingModel,1> local_58;
  FName *local_48;
  FMessageLogListingViewModel **local_40;
  TSharedRef<FMessageLogListingViewModel,1> local_38;
  
  if ((*param_1 == (FName)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LogName != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Presentation\\MessageLogViewModel.cpp"
                         ,0x4c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar2)();
    return pTVar4;
  }
  if ((*param_1 == (FName)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LogName != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Presentation\\MessageLogViewModel.cpp"
                         ,0x71,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar2)();
    return pTVar4;
  }
  pTVar5 = TMapBase<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
           ::Find((TMapBase<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
                   *)&this->NameToViewModelMap,*param_1);
  if (pTVar5 == (TSharedPtr<FMessageLogListingViewModel,1> *)0x0) {
    local_78 = (FMessageLogListingViewModel *)0x0;
    FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_78 = pTVar5->Object;
    FStack_70.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
    if (FStack_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_70.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_70.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_78 == (FMessageLogListingViewModel *)0x0) {
    if (((this->MessageLogModel).Object == (FMessageLogModel *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar2)();
      return pTVar4;
    }
    this_00 = (this->MessageLogModel).Object;
    if ((*param_1 == (FName)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LogName != NAME_None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Model\\MessageLogModel.cpp"
                           ,0x3e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar2)();
      return pTVar4;
    }
    FMessageLogModel::RegisterOrGetLogListingModel(this_00,&local_58,param_1);
    pTVar4 = FMessageLogListingViewModel::Create(&local_38,&local_58,param_2,param_3);
    local_60.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_78 = pTVar4->Object;
    if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_60.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_70,&local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    local_40 = &local_78;
    local_48 = param_1;
    TSet<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TSharedPtr<FMessageLogListingViewModel,1>_const_&>_>
              ((TSet<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>,FDefaultSetAllocator>
                *)&this->NameToViewModelMap,
               (TPairInitializer<FName_const_&,TSharedPtr<FMessageLogListingViewModel,1>_const_&> *)
               &stack0x00000008,(bool *)&local_48);
    UpdateListingViewModelArray(this);
  }
  else {
    if ((local_78 == (FMessageLogListingViewModel *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar2)();
      return pTVar4;
    }
    (**(code **)(local_78->_padding_ + 0xa0))();
    if ((local_78 == (FMessageLogListingViewModel *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar2)();
      return pTVar4;
    }
    local_78->bShowFilters = param_3->bShowFilters;
    if ((local_78 == (FMessageLogListingViewModel *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar2)();
      return pTVar4;
    }
    local_78->bShowPages = param_3->bShowPages;
    if ((local_78 == (FMessageLogListingViewModel *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar2)();
      return pTVar4;
    }
    this_01 = local_78;
    bVar3 = param_3->bDiscardDuplicates;
    bVar1 = local_78->bDiscardDuplicates;
    local_78->bDiscardDuplicates = bVar3;
    if ((bVar3 != false) && (bVar1 != bVar3)) {
      if (((local_78->MessageLogListingModel).Object == (FMessageLogListingModel *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar2)();
        return pTVar4;
      }
      FMessageLogListingModel::RemoveDuplicates((this_01->MessageLogListingModel).Object,0);
      FMessageLogListingViewModel::RefreshFilteredMessages(this_01);
    }
    if ((local_78 == (FMessageLogListingViewModel *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar2)();
      return pTVar4;
    }
    local_78->MaxPageCount = param_3->MaxPageCount;
  }
  if ((local_78 == (FMessageLogListingViewModel *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->Object = local_78;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FStack_70.ReferenceController
  ;
  if (FStack_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->Object == (FMessageLogListingViewModel *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TSharedRef<FMessageLogListingViewModel,1> *)(*pcVar2)();
    return pTVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  return __return_storage_ptr__;
}

// UnregisterLogListingViewModel @ 142c2a140

bool __thiscall
FMessageLogViewModel::UnregisterLogListingViewModel(FMessageLogViewModel *this,FName *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FName local_res8;
  
  if (*param_1 == (FName)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LogName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Presentation\\MessageLogViewModel.cpp"
                       ,0x65,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  FVar1 = *param_1;
  if (*(int *)&(this->NameToViewModelMap).field_0x8 !=
      *(int *)&(this->NameToViewModelMap).field_0x34) {
    local_res8 = FVar1;
    uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    iVar6 = TSet<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>,FDefaultSetAllocator>
                                 *)&this->NameToViewModelMap,FVar1.Number + uVar5,&local_res8);
    return 0 < iVar6;
  }
  return false;
}

// Update @ 142c2a1e0

void __thiscall FMessageLogViewModel::Update(FMessageLogViewModel *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->ChangedEvent);
  return;
}

// UpdateListingViewModelArray @ 142c2a200

void __thiscall FMessageLogViewModel::UpdateListingViewModelArray(FMessageLogViewModel *this)

{
  ulonglong uVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  TMap<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
  *pTVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint *puVar10;
  FIdentityFunctor local_res8 [8];
  int local_res10;
  undefined8 local_a8;
  longlong local_a0;
  TMap<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TMap<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  DestructItems<TSharedPtr<IMessageLogListing,1>,int>
            ((TSharedPtr<IMessageLogListing,1> *)(this->ViewModelArray).AllocatorInstance.Data,
             (this->ViewModelArray).ArrayNum);
  piVar2 = &(this->ViewModelArray).ArrayMax;
  (this->ViewModelArray).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ViewModelArray).AllocatorInstance,0,piVar2);
  }
  local_98 = &this->NameToViewModelMap;
  iStack_90 = 0;
  local_88 = &(this->NameToViewModelMap).field_0x10;
  local_78 = 0;
  uStack_8c = 1;
  iVar7 = *(int *)&(this->NameToViewModelMap).field_0x28;
  iStack_7c = 0;
  if (iVar7 != 0) {
    puVar10 = *(uint **)&(this->NameToViewModelMap).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)local_88;
    }
    uVar3 = *puVar10;
    while (uVar3 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_142c2a2ee;
      uVar3 = puVar10[lVar8 + 1];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar7 < iStack_7c) {
      iStack_7c = iVar7;
    }
  }
LAB_142c2a2ee:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  iStack_74 = iStack_7c;
  local_68 = local_98;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar7) {
    do {
      pTVar5 = local_68;
      lVar8 = (longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)local_68;
      if ((*(longlong *)(lVar8 + 8) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(char *)(*(longlong *)(lVar8 + 8) + 0x24) != '\0') {
        lVar8 = (longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)pTVar5;
        local_a8 = *(undefined8 *)(lVar8 + 8);
        local_a0 = *(longlong *)(lVar8 + 0x10);
        if (local_a0 != 0) {
          LOCK();
          *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
          UNLOCK();
        }
        pFVar9 = (this->ViewModelArray).AllocatorInstance.Data;
        if (((pFVar9 <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 < pFVar9 + (longlong)*piVar2 * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = (this->ViewModelArray).ArrayNum;
        if (iVar7 == *piVar2) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->ViewModelArray).AllocatorInstance,piVar2);
        }
        (this->ViewModelArray).ArrayNum = iVar7 + 1;
        pFVar9 = (this->ViewModelArray).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar9 = local_a8;
        *(longlong *)(pFVar9 + 8) = local_a0;
        local_a0 = 0;
        local_a8 = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  AlgoImpl::
  IntroSortInternal<TSharedPtr<IMessageLogListing,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<IMessageLogListing,1>,_FMessageLogViewModel::UpdateListingViewModelArray_::__l2::<lambda_1>_>_>
            ((TSharedPtr<IMessageLogListing,1> *)(this->ViewModelArray).AllocatorInstance.Data,
             (this->ViewModelArray).ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
                    /* WARNING: Could not recover jumptable at 0x000142c2a4d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this);
  return;
}

