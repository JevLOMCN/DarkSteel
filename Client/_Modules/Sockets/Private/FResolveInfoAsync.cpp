// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 6

// FResolveInfoAsync @ 14310aed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FResolveInfoAsync * __thiscall
FResolveInfoAsync::FResolveInfoAsync(FResolveInfoAsync *this,char *param_1)

{
  void *pvVar1;
  FName *pFVar2;
  TStatIdData *pTVar3;
  FName local_res8;
  
  *(undefined2 *)&(this->AsyncTask)._padding_ = 3;
  (this->Addr).Object = (FInternetAddr *)0x0;
  this->_padding_ = (longlong)&___7FResolveInfoAsync__6B_;
  (this->Addr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->AsyncTask)._padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  this->ErrorCode = 0;
  (this->AsyncTask)._padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->bShouldAbandon = 0;
  (this->AsyncTask)._padding_ =
       (longlong)&___7__FAsyncTask_VFResolveInfoAsyncWorker_FResolveInfoAsync____6B_;
  pvVar1 = ThreadLocalStoragePointer;
  (this->AsyncTask)._padding_ = 0;
  *(undefined4 *)&(this->AsyncTask)._padding_ = 0;
  (this->AsyncTask)._padding_ = 0;
  (this->AsyncTask)._padding_ = 0;
  (this->AsyncTask)._padding_ = -1;
  (this->AsyncTask)._padding_ = 0;
  (this->AsyncTask).Task.Parent = this;
  if ((*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x9d4c) <
       `public:_struct_TStatId___cdecl_FResolveInfoAsync::FResolveInfoAsyncWorker::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_FResolveInfoAsync::FResolveInfoAsyncWorker::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_FResolveInfoAsync::FResolveInfoAsyncWorker::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FResolveInfoAsyncWorker = (TStatIdData *)0x0;
    pFVar2 = ::FName::FName(&local_res8,"FResolveInfoAsyncWorker");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_FResolveInfoAsync::FResolveInfoAsyncWorker::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FResolveInfoAsyncWorker,*pFVar2,L"FResolveInfoAsyncWorker",
               "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_FResolveInfoAsync::FResolveInfoAsyncWorker::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar3 = _StatPtr_FResolveInfoAsyncWorker;
  if (_StatPtr_FResolveInfoAsyncWorker == (TStatIdData *)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"FResolveInfoAsyncWorker");
    pTVar3 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FResolveInfoAsync::FResolveInfoAsyncWorker::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FResolveInfoAsyncWorker,*pFVar2,L"FResolveInfoAsyncWorker",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  (this->AsyncTask)._padding_ = (longlong)pTVar3;
  strncpy(this->HostName,param_1,0x100);
  this->HostName[0xff] = '\0';
  return this;
}

// DoWork @ 14310ec50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FResolveInfoAsync::DoWork(FResolveInfoAsync *this)

{
  char *_Str;
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  ISocketSubsystem *pIVar2;
  size_t sVar3;
  TSharedPtr<FInternetAddr,1> *pTVar4;
  int iVar5;
  undefined1 auStack_238 [32];
  undefined2 local_218;
  undefined8 local_210;
  undefined4 local_208;
  TPairInitializer<FString_&&,TSharedPtr<FInternetAddr,1>_const_&> local_1f8;
  FSharedReferencer<1> local_1e8;
  FInternetAddr *local_1e0;
  TReferenceControllerBase<1> *local_1d8;
  void *local_1c8 [2];
  void *local_1b8;
  void *local_1a8;
  uint local_198;
  FAddressInfoResultData *local_190;
  int local_188;
  FString *local_178;
  FInternetAddr **local_170;
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_238;
  iVar5 = 0;
  local_1f8.Key = (FString *)0x0;
  pIVar2 = ISocketSubsystem::Get((FName *)&local_1f8);
  local_1f8.Key = (FString *)0x0;
  _Str = this->HostName;
  while( true ) {
    local_158._padding_ = 0;
    pcVar1 = *(code **)(pIVar2->_padding_ + 0x40);
    if (_Str == (char *)0x0) {
      local_158.Ptr = (wchar_t *)0x0;
      local_158.StringLength = 0;
    }
    else {
      sVar3 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,_Str,(int)sVar3,Yes);
    }
    local_208 = 0;
    local_210 = 0;
    local_218 = 0;
    (*pcVar1)(pIVar2,local_1c8,local_158.Ptr,0);
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
    this->ErrorCode = local_198;
    if (local_198 == 0) {
      if (0 < local_188) {
        local_1e8.ReferenceController =
             (local_190->Address).SharedReferenceCount.ReferenceController;
        local_1f8.Value = (TSharedPtr<FInternetAddr,1> *)(local_190->Address).Object;
        if (local_1e8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1e8.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_1e8.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar4 = &this->Addr;
        if (pTVar4 != (TSharedPtr<FInternetAddr,1> *)&local_1f8.Value) {
          pTVar4->Object = (FInternetAddr *)local_1f8.Value;
          local_1f8.Value = (TSharedPtr<FInternetAddr,1> *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->Addr).SharedReferenceCount,&local_1e8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1e8.ReferenceController);
        local_1e0 = pTVar4->Object;
        local_1d8 = (this->Addr).SharedReferenceCount.ReferenceController;
        if (local_1d8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_1d8->SharedReferenceCount = (atomic<int>)((int)local_1d8->SharedReferenceCount + 1);
          UNLOCK();
        }
        lpCriticalSection = &pIVar2->HostNameCacheSync;
        if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          local_178 = ::FString::FString(&local_168,_Str);
          local_170 = &local_1e0;
          TSet<TTuple<FString,TSharedPtr<FInternetAddr,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternetAddr,1>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FInternetAddr,1>_const_&>_>
                    ((TSet<TTuple<FString,TSharedPtr<FInternetAddr,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternetAddr,1>,0>,FDefaultSetAllocator>
                      *)&pIVar2->HostNameCache,&local_1f8,(bool *)&local_178);
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1d8);
          DestructItems<FAddressInfoResultData,int>(local_190,local_188);
          if (local_190 != (FAddressInfoResultData *)0x0) {
            FMemory::Free(local_190);
          }
          if (local_1a8 != (void *)0x0) {
            FMemory::Free(local_1a8);
          }
          if (local_1b8 != (void *)0x0) {
            FMemory::Free(local_1b8);
          }
          if (local_1c8[0] != (void *)0x0) {
            FMemory::Free(local_1c8[0]);
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      this->ErrorCode = 0x33;
    }
    else if ((local_198 < 0x34) &&
            ((0x9000100000000U >> ((longlong)(int)local_198 & 0x3fU) & 1) != 0)) {
      iVar5 = 3;
    }
    iVar5 = iVar5 + 1;
    DestructItems<FAddressInfoResultData,int>(local_190,local_188);
    if (local_190 != (FAddressInfoResultData *)0x0) {
      FMemory::Free(local_190);
    }
    if (local_1a8 != (void *)0x0) {
      FMemory::Free(local_1a8);
    }
    if (local_1b8 != (void *)0x0) {
      FMemory::Free(local_1b8);
    }
    if (local_1c8[0] != (void *)0x0) {
      FMemory::Free(local_1c8[0]);
    }
    if (this->ErrorCode == 0) break;
    if (2 < iVar5) {
      return;
    }
    if (this->bShouldAbandon != 0) {
      return;
    }
  }
  return;
}

// GetErrorCode @ 1431107d0

int __thiscall FResolveInfoAsync::GetErrorCode(FResolveInfoAsync *this)

{
  return this->ErrorCode;
}

// GetResolvedAddress @ 143113260

FInternetAddr * __thiscall FResolveInfoAsync::GetResolvedAddress(FResolveInfoAsync *this)

{
  code *pcVar1;
  bool bVar2;
  FInternetAddr *pFVar3;
  
  if ((this->Addr).Object != (FInternetAddr *)0x0) {
    return (this->Addr).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInternetAddr *)(*pcVar1)();
    return pFVar3;
  }
  return (this->Addr).Object;
}

// IsComplete @ 143114020

bool __thiscall FResolveInfoAsync::IsComplete(FResolveInfoAsync *this)

{
  if ((int)(this->AsyncTask)._padding_ != 0) {
    return false;
  }
  FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)&this->AsyncTask,false);
  return true;
}

// StartAsyncTask @ 143118440

void __thiscall FResolveInfoAsync::StartAsyncTask(FResolveInfoAsync *this)

{
  code *pcVar1;
  bool bVar2;
  
  FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)&this->AsyncTask);
  if ((this->AsyncTask).Task.Parent != this) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AsyncTask.GetTask().Parent == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Public\\IPAddressAsyncResolve.h"
                       ,0xa9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FAsyncTaskBase::Start
            ((FAsyncTaskBase *)&this->AsyncTask,false,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
  return;
}

