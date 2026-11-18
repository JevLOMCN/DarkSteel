// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 16

// FCoreAsyncTaskNotificationImpl @ 141855430

/* WARNING: Enum "Type": Some values do not have unique names */

FCoreAsyncTaskNotificationImpl * __thiscall
FCoreAsyncTaskNotificationImpl::FCoreAsyncTaskNotificationImpl(FCoreAsyncTaskNotificationImpl *this)

{
  code *pcVar1;
  bool bVar2;
  FCoreAsyncTaskNotificationImpl *pFVar3;
  
  this->State = Pending;
  this->_padding_ = (longlong)&___7FCoreAsyncTaskNotificationImpl__6B_;
  FText::FText(&this->TitleText);
  FText::FText(&this->ProgressText);
  FText::FText(&this->PromptText);
  *(undefined8 *)&this->Hyperlink = 0;
  *(undefined8 *)&(this->Hyperlink).field_0x8 = 0;
  *(undefined4 *)&(this->Hyperlink).field_0x10 = 0;
  FText::FText(&this->HyperlinkText);
  this->LogCategory = (FLogCategoryBase *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SynchronizationObject,4000);
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\CoreAsyncTaskNotificationImpl.cpp"
                       ,0xc,
                       L"AsyncTaskNotification must be constructed on the game thread before being optionally passed to another thread."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCoreAsyncTaskNotificationImpl *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// ~FCoreAsyncTaskNotificationImpl @ 141857680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCoreAsyncTaskNotificationImpl::~FCoreAsyncTaskNotificationImpl
          (FCoreAsyncTaskNotificationImpl *this)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FCoreAsyncTaskNotificationImpl__6B_;
  if (this->State == Pending) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State != EAsyncTaskNotificationState::Pending",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\CoreAsyncTaskNotificationImpl.cpp"
                       ,0x11,
                       L"AsyncTaskNotification was still pending when destroyed. Missing call to SetComplete?"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SynchronizationObject);
  pIVar1 = (this->HyperlinkText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Hyperlink);
  pIVar1 = (this->PromptText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->ProgressText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->TitleText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141857710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// GetPromptAction @ 141875410

/* WARNING: Enum "Type": Some values do not have unique names */

EAsyncTaskNotificationPromptAction __thiscall
FCoreAsyncTaskNotificationImpl::GetPromptAction(FCoreAsyncTaskNotificationImpl *this)

{
  return Unattended;
}

// Initialize @ 141878970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCoreAsyncTaskNotificationImpl::Initialize
          (FCoreAsyncTaskNotificationImpl *this,FAsyncTaskNotificationConfig *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar1 = (param_1->TitleText).TextData.Reference;
    pIVar2 = (this->TitleText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->TitleText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->TitleText).Flags = (param_1->TitleText).Flags;
    pIVar1 = (param_1->ProgressText).TextData.Reference;
    pIVar2 = (this->ProgressText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->ProgressText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->ProgressText).Flags = (param_1->ProgressText).Flags;
    this->LogCategory = param_1->LogCategory;
    (**(code **)(this->_padding_ + 0x68))(this);
                    /* WARNING: Could not recover jumptable at 0x000141878a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// LogNotification @ 14187ced0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCoreAsyncTaskNotificationImpl::LogNotification(FCoreAsyncTaskNotificationImpl *this)

{
  EAsyncTaskNotificationState EVar1;
  int iVar2;
  TRefCountPtr<ITextData> TVar3;
  uint uVar4;
  bool bVar5;
  FString *pFVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  Type TVar10;
  FString local_38;
  FText local_28;
  
  TVar10 = Log;
  if (this->State == Failure) {
    TVar10 = Error;
  }
  if ((this->LogCategory != (FLogCategoryBase *)0x0) && (TVar10 <= this->LogCategory->Verbosity)) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    pFVar6 = FText::ToString(&this->TitleText);
    iVar2 = (pFVar6->Data).ArrayNum;
    iVar8 = 0;
    iVar9 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar9 = iVar8;
    }
    ::FString::AppendChars(&local_38,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar9);
    bVar5 = FText::IsEmpty(&this->ProgressText);
    if (!bVar5) {
      if (1 < local_38.Data.ArrayNum) {
        ::FString::AppendChars(&local_38,L" - ",3);
      }
      pFVar6 = FText::ToString(&this->ProgressText);
      iVar2 = (pFVar6->Data).ArrayNum;
      iVar9 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar9 = iVar8;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar9);
    }
    bVar5 = FText::IsEmpty(&this->HyperlinkText);
    if (!bVar5) {
      if (1 < local_38.Data.ArrayNum) {
        ::FString::AppendChars(&local_38,L" - ",3);
      }
      pFVar6 = FText::ToString(&this->HyperlinkText);
      iVar2 = (pFVar6->Data).ArrayNum;
      iVar9 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar9 = iVar8;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar9);
    }
    bVar5 = FText::IsEmpty(&this->PromptText);
    if (!bVar5) {
      if (1 < local_38.Data.ArrayNum) {
        ::FString::AppendChars(&local_38,L" - ",3);
      }
      pFVar6 = FText::ToString(&this->PromptText);
      iVar2 = (pFVar6->Data).ArrayNum;
      iVar9 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar9 = iVar8;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar9);
    }
    if (1 < local_38.Data.ArrayNum) {
      piVar7 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c);
      if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        FText::AsLocalizable_Advanced_LocText
                  (&PendingStateText,L"CoreAsyncTaskNotification",L"NotificationState_Pending",
                   L"Pending");
        atexit(`FCoreAsyncTaskNotificationImpl::LogNotification'::__l26::
               _dynamic_atexit_destructor_for__PendingStateText__);
        _Init_thread_footer(&::_TSS0);
      }
      if ((*piVar7 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        FText::AsLocalizable_Advanced_LocText
                  (&SuccessStateText,L"CoreAsyncTaskNotification",L"NotificationState_Success",
                   L"Success");
        atexit(`FCoreAsyncTaskNotificationImpl::LogNotification'::__l26::
               _dynamic_atexit_destructor_for__SuccessStateText__);
        _Init_thread_footer(&::_TSS1);
      }
      if ((*piVar7 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        FText::AsLocalizable_Advanced_LocText
                  (&FailureStateText,L"CoreAsyncTaskNotification",L"NotificationState_Failure",
                   L"Failure");
        atexit(`FCoreAsyncTaskNotificationImpl::LogNotification'::__l26::
               _dynamic_atexit_destructor_for__FailureStateText__);
        _Init_thread_footer(&::_TSS2);
      }
      if ((*piVar7 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
        FText::AsLocalizable_Advanced_LocText
                  (&PromptStateText,L"CoreAsyncTaskNotification",L"NotificationState_Prompt",
                   L"Prompt");
        atexit(`FCoreAsyncTaskNotificationImpl::LogNotification'::__l26::
               _dynamic_atexit_destructor_for__PromptStateText__);
        _Init_thread_footer(&::_TSS3);
      }
      local_28.TextData.Reference = PendingStateText.TextData.Reference;
      if (PendingStateText.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*PendingStateText.TextData.Reference + 8))
                  (PendingStateText.TextData.Reference);
      }
      TVar3.Reference = local_28.TextData.Reference;
      EVar1 = this->State;
      local_28.Flags = PendingStateText.Flags;
      if (EVar1 == Success) {
        uVar4 = SuccessStateText.Flags;
        if (local_28.TextData.Reference != SuccessStateText.TextData.Reference) {
          local_28.TextData.Reference = SuccessStateText.TextData.Reference;
          if (SuccessStateText.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*SuccessStateText.TextData.Reference + 8))();
          }
          uVar4 = SuccessStateText.Flags;
          if (TVar3.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
            uVar4 = SuccessStateText.Flags;
          }
        }
      }
      else if (EVar1 == Failure) {
        uVar4 = FailureStateText.Flags;
        if (local_28.TextData.Reference != FailureStateText.TextData.Reference) {
          local_28.TextData.Reference = FailureStateText.TextData.Reference;
          if (FailureStateText.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FailureStateText.TextData.Reference + 8))();
          }
          uVar4 = FailureStateText.Flags;
          if (TVar3.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
            uVar4 = FailureStateText.Flags;
          }
        }
      }
      else {
        uVar4 = local_28.Flags;
        if ((EVar1 == Prompt) &&
           (uVar4 = PromptStateText.Flags,
           local_28.TextData.Reference != PromptStateText.TextData.Reference)) {
          local_28.TextData.Reference = PromptStateText.TextData.Reference;
          if (PromptStateText.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*PromptStateText.TextData.Reference + 8))();
          }
          uVar4 = PromptStateText.Flags;
          if (TVar3.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
            uVar4 = PromptStateText.Flags;
          }
        }
      }
      local_28.Flags = uVar4;
      FText::ToString(&local_28);
      FMsg::LogfImpl((char *)0x0,0,&this->LogCategory->CategoryName,TVar10,L"[%s] %s");
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetCanCancel @ 14188f710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCoreAsyncTaskNotificationImpl::SetCanCancel
          (FCoreAsyncTaskNotificationImpl *this,TAttribute<bool> *param_1)

{
  return;
}

// SetComplete @ 14188f7c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCoreAsyncTaskNotificationImpl::SetComplete
          (FCoreAsyncTaskNotificationImpl *this,FText *param_1,FText *param_2,bool param_3)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  undefined1 local_res20 [8];
  FDestructionSentinel local_88;
  char local_70 [8];
  ITextData *local_68;
  uint local_60;
  ITextData *local_58;
  uint local_50;
  FText local_48;
  FText local_38;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  int local_18;
  
  local_68 = (param_1->TextData).Reference;
  local_70[0] = !param_3 + '\x02';
  if (local_68 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68 + 8))(local_68,local_res20);
  }
  local_58 = (param_2->TextData).Reference;
  local_60 = param_1->Flags;
  if (local_58 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58 + 8))(local_58,local_res20);
  }
  local_50 = param_2->Flags;
  FText::FText(&local_48);
  FText::FText(&local_38);
  TVar2.Reference = local_48.TextData.Reference;
  pIVar1 = (this->PromptText).TextData.Reference;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  if (local_48.TextData.Reference != pIVar1) {
    local_48.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
    }
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
  }
  TVar2.Reference = local_38.TextData.Reference;
  pIVar1 = (this->HyperlinkText).TextData.Reference;
  local_48.Flags = (this->PromptText).Flags;
  if (local_38.TextData.Reference != pIVar1) {
    local_38.TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
    }
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
    }
  }
  local_38.Flags = (this->HyperlinkText).Flags;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_28,&this->Hyperlink);
  (**(code **)(this->_padding_ + 0x40))(this,local_70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_88);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_58 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58 + 0x10))();
  }
  if (local_68 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68 + 0x10))();
  }
  return;
}

// SetComplete @ 14188f990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCoreAsyncTaskNotificationImpl::SetComplete(FCoreAsyncTaskNotificationImpl *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->State = !param_1 + Success;
    (**(code **)(this->_padding_ + 0x68))(this);
                    /* WARNING: Could not recover jumptable at 0x00014188f9de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetHyperlink @ 14188ff10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCoreAsyncTaskNotificationImpl::SetHyperlink
          (FCoreAsyncTaskNotificationImpl *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,FText *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=(&this->Hyperlink,param_1);
    pIVar1 = (param_2->TextData).Reference;
    pIVar2 = (this->HyperlinkText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->HyperlinkText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->HyperlinkText).Flags = param_2->Flags;
    (**(code **)(this->_padding_ + 0x68))(this);
                    /* WARNING: Could not recover jumptable at 0x00014188ffa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetKeepOpenOnFailure @ 141890600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCoreAsyncTaskNotificationImpl::SetKeepOpenOnFailure
          (FCoreAsyncTaskNotificationImpl *this,TAttribute<bool> *param_1)

{
  return;
}

// SetKeepOpenOnSuccess @ 141890610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCoreAsyncTaskNotificationImpl::SetKeepOpenOnSuccess
          (FCoreAsyncTaskNotificationImpl *this,TAttribute<bool> *param_1)

{
  return;
}

// SetNotificationState @ 141890640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCoreAsyncTaskNotificationImpl::SetNotificationState
          (FCoreAsyncTaskNotificationImpl *this,FAsyncNotificationStateData *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  undefined1 local_res18 [16];
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar3 = FText::IdenticalTo(&this->TitleText,&param_1->TitleText,None);
    if ((((bVar3) &&
         (bVar3 = FText::IdenticalTo(&this->ProgressText,&param_1->ProgressText,None), bVar3)) &&
        (bVar3 = FText::IdenticalTo(&this->PromptText,&param_1->PromptText,None), bVar3)) &&
       ((bVar3 = FText::IdenticalTo(&this->HyperlinkText,&param_1->HyperlinkText,None), bVar3 &&
        (this->State == param_1->State)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pIVar1 = (param_1->TitleText).TextData.Reference;
    pIVar2 = (this->TitleText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->TitleText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->TitleText).Flags = (param_1->TitleText).Flags;
    pIVar1 = (param_1->ProgressText).TextData.Reference;
    pIVar2 = (this->ProgressText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->ProgressText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->ProgressText).Flags = (param_1->ProgressText).Flags;
    pIVar1 = (param_1->PromptText).TextData.Reference;
    pIVar2 = (this->PromptText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->PromptText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->PromptText).Flags = (param_1->PromptText).Flags;
    pIVar1 = (param_1->HyperlinkText).TextData.Reference;
    pIVar2 = (this->HyperlinkText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->HyperlinkText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->HyperlinkText).Flags = (param_1->HyperlinkText).Flags;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
              (&this->Hyperlink,&param_1->Hyperlink);
    this->State = param_1->State;
    if (bVar3) {
      (**(code **)(this->_padding_ + 0x68))(this);
    }
                    /* WARNING: Could not recover jumptable at 0x000141890817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetProgressText @ 141890890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCoreAsyncTaskNotificationImpl::SetProgressText(FCoreAsyncTaskNotificationImpl *this,FText *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->ProgressText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->ProgressText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->ProgressText).Flags = param_1->Flags;
    (**(code **)(this->_padding_ + 0x68))(this);
                    /* WARNING: Could not recover jumptable at 0x000141890913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetPromptText @ 141890930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCoreAsyncTaskNotificationImpl::SetPromptText(FCoreAsyncTaskNotificationImpl *this,FText *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->PromptText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->PromptText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->PromptText).Flags = param_1->Flags;
    (**(code **)(this->_padding_ + 0x68))(this);
                    /* WARNING: Could not recover jumptable at 0x0001418909b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetTitleText @ 141891160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCoreAsyncTaskNotificationImpl::SetTitleText
          (FCoreAsyncTaskNotificationImpl *this,FText *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  FText local_28;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->TitleText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->TitleText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->TitleText).Flags = param_1->Flags;
    if (param_2) {
      pFVar3 = FText::FText(&local_28);
      FText::operator=(&this->ProgressText,pFVar3);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
    }
    (**(code **)(this->_padding_ + 0x68))(this);
                    /* WARNING: Could not recover jumptable at 0x000141891210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateNotification @ 141896460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCoreAsyncTaskNotificationImpl::UpdateNotification(FCoreAsyncTaskNotificationImpl *this)

{
  EAsyncTaskNotificationState EVar1;
  int iVar2;
  TRefCountPtr<ITextData> TVar3;
  uint uVar4;
  bool bVar5;
  FString *pFVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  Type TVar10;
  FString FStack_38;
  FText FStack_28;
  
  TVar10 = Log;
  if (this->State == Failure) {
    TVar10 = Error;
  }
  if ((this->LogCategory != (FLogCategoryBase *)0x0) && (TVar10 <= this->LogCategory->Verbosity)) {
    FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_38.Data.ArrayNum = 0;
    FStack_38.Data.ArrayMax = 0;
    pFVar6 = FText::ToString(&this->TitleText);
    iVar2 = (pFVar6->Data).ArrayNum;
    iVar8 = 0;
    iVar9 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar9 = iVar8;
    }
    ::FString::AppendChars(&FStack_38,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar9);
    bVar5 = FText::IsEmpty(&this->ProgressText);
    if (!bVar5) {
      if (1 < FStack_38.Data.ArrayNum) {
        ::FString::AppendChars(&FStack_38,L" - ",3);
      }
      pFVar6 = FText::ToString(&this->ProgressText);
      iVar2 = (pFVar6->Data).ArrayNum;
      iVar9 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar9 = iVar8;
      }
      ::FString::AppendChars(&FStack_38,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar9);
    }
    bVar5 = FText::IsEmpty(&this->HyperlinkText);
    if (!bVar5) {
      if (1 < FStack_38.Data.ArrayNum) {
        ::FString::AppendChars(&FStack_38,L" - ",3);
      }
      pFVar6 = FText::ToString(&this->HyperlinkText);
      iVar2 = (pFVar6->Data).ArrayNum;
      iVar9 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar9 = iVar8;
      }
      ::FString::AppendChars(&FStack_38,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar9);
    }
    bVar5 = FText::IsEmpty(&this->PromptText);
    if (!bVar5) {
      if (1 < FStack_38.Data.ArrayNum) {
        ::FString::AppendChars(&FStack_38,L" - ",3);
      }
      pFVar6 = FText::ToString(&this->PromptText);
      iVar2 = (pFVar6->Data).ArrayNum;
      iVar9 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar9 = iVar8;
      }
      ::FString::AppendChars(&FStack_38,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar9);
    }
    if (1 < FStack_38.Data.ArrayNum) {
      piVar7 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c);
      if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        FText::AsLocalizable_Advanced_LocText
                  (&PendingStateText,L"CoreAsyncTaskNotification",L"NotificationState_Pending",
                   L"Pending");
        atexit(`FCoreAsyncTaskNotificationImpl::LogNotification'::__l26::
               _dynamic_atexit_destructor_for__PendingStateText__);
        _Init_thread_footer(&::_TSS0);
      }
      if ((*piVar7 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        FText::AsLocalizable_Advanced_LocText
                  (&SuccessStateText,L"CoreAsyncTaskNotification",L"NotificationState_Success",
                   L"Success");
        atexit(`FCoreAsyncTaskNotificationImpl::LogNotification'::__l26::
               _dynamic_atexit_destructor_for__SuccessStateText__);
        _Init_thread_footer(&::_TSS1);
      }
      if ((*piVar7 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        FText::AsLocalizable_Advanced_LocText
                  (&FailureStateText,L"CoreAsyncTaskNotification",L"NotificationState_Failure",
                   L"Failure");
        atexit(`FCoreAsyncTaskNotificationImpl::LogNotification'::__l26::
               _dynamic_atexit_destructor_for__FailureStateText__);
        _Init_thread_footer(&::_TSS2);
      }
      if ((*piVar7 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
        FText::AsLocalizable_Advanced_LocText
                  (&PromptStateText,L"CoreAsyncTaskNotification",L"NotificationState_Prompt",
                   L"Prompt");
        atexit(`FCoreAsyncTaskNotificationImpl::LogNotification'::__l26::
               _dynamic_atexit_destructor_for__PromptStateText__);
        _Init_thread_footer(&::_TSS3);
      }
      FStack_28.TextData.Reference = PendingStateText.TextData.Reference;
      if (PendingStateText.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*PendingStateText.TextData.Reference + 8))
                  (PendingStateText.TextData.Reference);
      }
      TVar3.Reference = FStack_28.TextData.Reference;
      EVar1 = this->State;
      FStack_28.Flags = PendingStateText.Flags;
      if (EVar1 == Success) {
        uVar4 = SuccessStateText.Flags;
        if (FStack_28.TextData.Reference != SuccessStateText.TextData.Reference) {
          FStack_28.TextData.Reference = SuccessStateText.TextData.Reference;
          if (SuccessStateText.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*SuccessStateText.TextData.Reference + 8))();
          }
          uVar4 = SuccessStateText.Flags;
          if (TVar3.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
            uVar4 = SuccessStateText.Flags;
          }
        }
      }
      else if (EVar1 == Failure) {
        uVar4 = FailureStateText.Flags;
        if (FStack_28.TextData.Reference != FailureStateText.TextData.Reference) {
          FStack_28.TextData.Reference = FailureStateText.TextData.Reference;
          if (FailureStateText.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FailureStateText.TextData.Reference + 8))();
          }
          uVar4 = FailureStateText.Flags;
          if (TVar3.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
            uVar4 = FailureStateText.Flags;
          }
        }
      }
      else {
        uVar4 = FStack_28.Flags;
        if ((EVar1 == Prompt) &&
           (uVar4 = PromptStateText.Flags,
           FStack_28.TextData.Reference != PromptStateText.TextData.Reference)) {
          FStack_28.TextData.Reference = PromptStateText.TextData.Reference;
          if (PromptStateText.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*PromptStateText.TextData.Reference + 8))();
          }
          uVar4 = PromptStateText.Flags;
          if (TVar3.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
            uVar4 = PromptStateText.Flags;
          }
        }
      }
      FStack_28.Flags = uVar4;
      FText::ToString(&FStack_28);
      FMsg::LogfImpl((char *)0x0,0,&this->LogCategory->CategoryName,TVar10,L"[%s] %s");
      if (FStack_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*FStack_28.TextData.Reference + 0x10))();
      }
    }
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

