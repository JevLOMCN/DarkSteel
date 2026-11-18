// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 12

// FInstallerError @ 1432811d0

FInstallerError * __thiscall
BuildPatchServices::FInstallerError::FInstallerError(FInstallerError *this)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  this->_padding_ = (longlong)&___7FInstallerError_BuildPatchServices__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ThreadLockCs,4000);
  pwVar1 = InstallErrorPrefixes::ErrorTypeStrings[0];
  this->ErrorType = NoError;
  ::FString::FString(&this->ErrorCode,pwVar1);
  switch(this->ErrorType) {
  case NoError:
    pwVar1 = L"BuildPatchInstallShortError_NoError";
    pwVar2 = L"The operation was successful.";
    break;
  case DownloadError:
    pwVar1 = L"BuildPatchInstallShortError_DownloadError";
    pwVar2 = L"Could not download patch data. Please check your internet connection, and try again."
    ;
    break;
  case FileConstructionFail:
    pwVar1 = L"BuildPatchInstallShortError_FileConstructionFail";
    pwVar2 = L"A file corruption has occurred. Please try again.";
    break;
  case MoveFileToInstall:
    pwVar1 = L"BuildPatchInstallShortError_MoveFileToInstall";
    pwVar2 = L"A file access error has occurred. Please check your running processes.";
    break;
  case BuildVerifyFail:
    pwVar1 = L"BuildPatchInstallShortError_BuildCorrupt";
    pwVar2 = L"The installation is corrupt. Please contact support.";
    break;
  case ApplicationClosing:
    pwVar1 = L"BuildPatchInstallShortError_ApplicationClosing";
    pwVar2 = L"The application is closing.";
    break;
  case ApplicationError:
    pwVar1 = L"BuildPatchInstallShortError_ApplicationError";
    pwVar2 = L"Patching service could not start. Please contact support.";
    break;
  case UserCanceled:
    pwVar1 = L"BuildPatchInstallShortError_UserCanceled";
    pwVar2 = L"User cancelled.";
    break;
  case PrerequisiteError:
    pwVar1 = L"BuildPatchInstallShortError_PrerequisiteError";
    pwVar2 = L"The necessary prerequisites have failed to install. Please contact support.";
    break;
  case InitializationError:
    pwVar1 = L"BuildPatchInstallShortError_InitializationError";
    pwVar2 = L"The installer failed to initialize. Please contact support.";
    break;
  case PathLengthExceeded:
    pwVar1 = L"BuildPatchInstallShortError_PathLengthExceeded";
    pwVar2 = L"Maximum path length exceeded. Please specify a shorter install location.";
    break;
  case OutOfDiskSpace:
    pwVar1 = L"BuildPatchInstallShortError_OutOfDiskSpace";
    pwVar2 = L"Not enough disk space available. Please free up some disk space and try again.";
    break;
  default:
    pwVar1 = L"BuildPatchInstallShortError_InvalidOrMax";
    pwVar2 = L"An unknown error ocurred. Please contact support.";
  }
  FText::AsLocalizable_Advanced_LocText(&this->ErrorText,L"BuildPatchInstallError",pwVar1,pwVar2);
  (this->DelegateCounter).Counter = 0;
  *(undefined8 *)&(this->RegisteredDelegates).field_0x10 = 0;
  *(undefined8 *)&(this->RegisteredDelegates).field_0x18 = 0;
  *(undefined8 *)&(this->RegisteredDelegates).field_0x38 = 0;
  *(undefined8 *)&(this->RegisteredDelegates).field_0x48 = 0;
  *(undefined8 *)&this->RegisteredDelegates = 0;
  *(undefined8 *)&(this->RegisteredDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredDelegates).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredDelegates).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredDelegates).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredDelegates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredDelegates).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredDelegates).field_0x40 = 0;
  return this;
}

// ~FInstallerError @ 143288640

void __thiscall BuildPatchServices::FInstallerError::~FInstallerError(FInstallerError *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7FInstallerError_BuildPatchServices__6B_;
  *(undefined4 *)&(this->RegisteredDelegates).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RegisteredDelegates).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TFunction<void___cdecl(void)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TFunction<void___cdecl(void)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TFunction<void___cdecl(void)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredDelegates);
  pIVar2 = (this->ErrorText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pFVar3 = (this->ErrorCode).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ThreadLockCs);
  this->_padding_ = (longlong)&___7IInstallerError_BuildPatchServices__6B_;
  return;
}

// CanRetry @ 1432c4460

bool __thiscall BuildPatchServices::FInstallerError::CanRetry(FInstallerError *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->ErrorType == FileConstructionFail) || (this->ErrorType == BuildVerifyFail)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetErrorCode @ 1432d67c0

FString * __thiscall
BuildPatchServices::FInstallerError::GetErrorCode
          (FInstallerError *this,FString *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::FString(__return_storage_ptr__,&this->ErrorCode);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetErrorText @ 1432d6870

FText * __thiscall
BuildPatchServices::FInstallerError::GetErrorText
          (FInstallerError *this,FText *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (this->ErrorText).TextData.Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = (this->ErrorText).Flags;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetErrorType @ 1432d6900

EBuildPatchInstallError __thiscall
BuildPatchServices::FInstallerError::GetErrorType(FInstallerError *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  EBuildPatchInstallError EVar1;
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar1 = this->ErrorType;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return EVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HasError @ 1432daa20

bool __thiscall BuildPatchServices::FInstallerError::HasError(FInstallerError *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  EBuildPatchInstallError EVar1;
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar1 = this->ErrorType;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return EVar1 != NoError;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsCancelled @ 1432dba70

bool __thiscall BuildPatchServices::FInstallerError::IsCancelled(FInstallerError *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->ErrorType == UserCanceled) || (this->ErrorType == ApplicationClosing)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RegisterForErrors @ 1432e6570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
BuildPatchServices::FInstallerError::RegisterForErrors
          (FInstallerError *this,TFunction<void___cdecl(void)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FThreadSafeCounter *pFVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  int local_28;
  undefined1 local_24 [4];
  int *local_20;
  TFunction<void___cdecl(void)> *local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    pFVar1 = &this->DelegateCounter;
    local_28 = pFVar1->Counter;
    pFVar1->Counter = pFVar1->Counter + 1;
    UNLOCK();
    local_28 = local_28 + 1;
    local_20 = &local_28;
    local_18 = param_1;
    TSet<TTuple<int,TFunction<void___cdecl(void)>_>,TDefaultMapHashableKeyFuncs<int,TFunction<void___cdecl(void)>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,TFunction<void___cdecl(void)>_const_&>_>
              ((TSet<TTuple<int,TFunction<void___cdecl(void)>_>,TDefaultMapHashableKeyFuncs<int,TFunction<void___cdecl(void)>,0>,FDefaultSetAllocator>
                *)&this->RegisteredDelegates,
               (TPairInitializer<int_const_&,TFunction<void___cdecl(void)>_const_&> *)local_24,
               (bool *)(local_24 + 4));
    iVar2 = local_28;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(longlong *)param_1 != 0) {
      plVar3 = (longlong *)&param_1->field_0x10;
      if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
        plVar3 = *(longlong **)&param_1->field_0x28;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Reset @ 1432eb050

void __thiscall BuildPatchServices::FInstallerError::Reset(FInstallerError *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  FText local_18;
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pwVar1 = InstallErrorPrefixes::ErrorTypeStrings[0];
  this->ErrorType = NoError;
  ::FString::operator=(&this->ErrorCode,pwVar1);
  switch(this->ErrorType) {
  case NoError:
    pwVar1 = L"BuildPatchInstallShortError_NoError";
    pwVar2 = L"The operation was successful.";
    break;
  case DownloadError:
    pwVar1 = L"BuildPatchInstallShortError_DownloadError";
    pwVar2 = L"Could not download patch data. Please check your internet connection, and try again."
    ;
    break;
  case FileConstructionFail:
    pwVar1 = L"BuildPatchInstallShortError_FileConstructionFail";
    pwVar2 = L"A file corruption has occurred. Please try again.";
    break;
  case MoveFileToInstall:
    pwVar1 = L"BuildPatchInstallShortError_MoveFileToInstall";
    pwVar2 = L"A file access error has occurred. Please check your running processes.";
    break;
  case BuildVerifyFail:
    pwVar1 = L"BuildPatchInstallShortError_BuildCorrupt";
    pwVar2 = L"The installation is corrupt. Please contact support.";
    break;
  case ApplicationClosing:
    pwVar1 = L"BuildPatchInstallShortError_ApplicationClosing";
    pwVar2 = L"The application is closing.";
    break;
  case ApplicationError:
    pwVar1 = L"BuildPatchInstallShortError_ApplicationError";
    pwVar2 = L"Patching service could not start. Please contact support.";
    break;
  case UserCanceled:
    pwVar1 = L"BuildPatchInstallShortError_UserCanceled";
    pwVar2 = L"User cancelled.";
    break;
  case PrerequisiteError:
    pwVar1 = L"BuildPatchInstallShortError_PrerequisiteError";
    pwVar2 = L"The necessary prerequisites have failed to install. Please contact support.";
    break;
  case InitializationError:
    pwVar1 = L"BuildPatchInstallShortError_InitializationError";
    pwVar2 = L"The installer failed to initialize. Please contact support.";
    break;
  case PathLengthExceeded:
    pwVar1 = L"BuildPatchInstallShortError_PathLengthExceeded";
    pwVar2 = L"Maximum path length exceeded. Please specify a shorter install location.";
    break;
  case OutOfDiskSpace:
    pwVar1 = L"BuildPatchInstallShortError_OutOfDiskSpace";
    pwVar2 = L"Not enough disk space available. Please free up some disk space and try again.";
    break;
  default:
    pwVar1 = L"BuildPatchInstallShortError_InvalidOrMax";
    pwVar2 = L"An unknown error ocurred. Please contact support.";
  }
  FText::AsLocalizable_Advanced_LocText(&local_18,L"BuildPatchInstallError",pwVar1,pwVar2);
  FText::operator=(&this->ErrorText,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432eb1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetError @ 1432ed3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FInstallerError::SetError
          (FInstallerError *this,EBuildPatchInstallError param_1,wchar_t *param_2,uint param_3,
          FText *param_4)

{
  wchar_t *pwVar1;
  code *pcVar2;
  ITextData *pIVar3;
  FText *this_00;
  char cVar4;
  size_t sVar5;
  FText *pFVar6;
  undefined8 uVar7;
  longlong *plVar8;
  TFunction<void___cdecl(void)> *pTVar9;
  ForAnyElementType FVar10;
  int iVar11;
  bool bVar12;
  TArray<TFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> local_58;
  FText local_48;
  FText local_38;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ThreadLockCs);
  cVar4 = (**(code **)(this->_padding_ + 8))(this);
  this_00 = param_4;
  if (cVar4 == '\0') {
    pwVar1 = InstallErrorPrefixes::ErrorTypeStrings[(int)param_1];
    this->ErrorType = param_1;
    ::FString::operator=(&this->ErrorCode,pwVar1);
    sVar5 = wcslen(param_2);
    ::FString::AppendChars(&this->ErrorCode,param_2,(int)sVar5);
    bVar12 = param_3 == 0;
    if (bVar12) {
      pFVar6 = (FText *)::FString::FString((FString *)&local_38,L"");
    }
    else {
      ::FString::PrintfImpl((FString *)&local_48,L"-%u");
      pFVar6 = &local_48;
    }
    iVar11 = pFVar6->Flags - 1;
    if (pFVar6->Flags == 0) {
      iVar11 = 0;
    }
    ::FString::AppendChars
              (&this->ErrorCode,
               (wchar_t *)
               (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->TextData)->
               AllocatorInstance).Data,iVar11);
    if ((bVar12) && (local_38.TextData.Reference != (ITextData *)0x0)) {
      FMemory::Free(local_38.TextData.Reference);
    }
    if ((!bVar12) && (local_48.TextData.Reference != (ITextData *)0x0)) {
      FMemory::Free(local_48.TextData.Reference);
    }
    bVar12 = FText::IsEmpty(this_00);
    bVar12 = !bVar12;
    if (bVar12) {
      pFVar6 = FText::FText(&local_38,this_00);
    }
    else {
      pFVar6 = GetStandardErrorText(&local_48,this->ErrorType);
    }
    FText::operator=(&this->ErrorText,pFVar6);
    if ((bVar12) && (local_38.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if ((!bVar12) && (local_48.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    TMapBase<int,TFunction<void___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TFunction<void___cdecl(void)>,0>_>
    ::GenerateValueArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<int,TFunction<void___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TFunction<void___cdecl(void)>,0>_>
                *)&this->RegisteredDelegates,&local_58);
    cVar4 = (**(code **)(this->_padding_ + 0x10))(this);
    if (cVar4 == '\0') {
      if ((byte)LogBuildPatchServices._0_1_ < 2) goto LAB_1432ed5f2;
      EnumToString((FString *)&local_38,&this->ErrorType);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    else {
      if ((byte)LogBuildPatchServices._0_1_ < 5) goto LAB_1432ed5f2;
      EnumToString((FString *)&local_38,&this->ErrorType);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_38.TextData.Reference);
    }
  }
LAB_1432ed5f2:
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ThreadLockCs);
  iVar11 = local_58.ArrayNum;
  pTVar9 = (TFunction<void___cdecl(void)> *)
           (local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 0x30);
  FVar10.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if (local_58.ArrayNum != iVar11) {
      `TCheckedPointerIterator<TFunction<void___cdecl(void)>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_4);
    }
    if ((TFunction<void___cdecl(void)> *)FVar10.Data == pTVar9) break;
    UE::Core::Private::Function::CheckCallable(*(void **)FVar10.Data);
    pcVar2 = *(code **)FVar10.Data;
    plVar8 = (longlong *)&((TFunction<void___cdecl(void)> *)FVar10.Data)->field_0x10;
    if (*(longlong **)&((TFunction<void___cdecl(void)> *)FVar10.Data)->field_0x28 != (longlong *)0x0
       ) {
      plVar8 = *(longlong **)&((TFunction<void___cdecl(void)> *)FVar10.Data)->field_0x28;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar2)(uVar7);
    FVar10.Data = FVar10.Data + 0x30;
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if ((TFunction<void___cdecl(void)> *)local_58.AllocatorInstance.Data !=
      (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  pIVar3 = (this_00->TextData).Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  return;
}

// UnregisterForErrors @ 1432f61d0

void __thiscall
BuildPatchServices::FInstallerError::UnregisterForErrors(FInstallerError *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int local_res8 [2];
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8[0] = param_1;
    if (*(int *)&(this->RegisteredDelegates).field_0x8 !=
        *(int *)&(this->RegisteredDelegates).field_0x34) {
      TSet<TTuple<int,TFunction<void___cdecl(void)>_>,TDefaultMapHashableKeyFuncs<int,TFunction<void___cdecl(void)>,0>,FDefaultSetAllocator>
      ::RemoveImpl<int>((TSet<TTuple<int,TFunction<void___cdecl(void)>_>,TDefaultMapHashableKeyFuncs<int,TFunction<void___cdecl(void)>,0>,FDefaultSetAllocator>
                         *)&this->RegisteredDelegates,param_1,local_res8);
    }
                    /* WARNING: Could not recover jumptable at 0x0001432f6224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

