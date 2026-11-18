// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 31

// ISocketSubsystem @ 14310b240

ISocketSubsystem * __thiscall ISocketSubsystem::ISocketSubsystem(ISocketSubsystem *this)

{
  this->_padding_ = (longlong)&___7ISocketSubsystem__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->HostNameCacheSync,4000);
  *(undefined8 *)&this->HostNameCache = 0;
  *(undefined8 *)&(this->HostNameCache).field_0x8 = 0;
  *(undefined8 *)&(this->HostNameCache).field_0x20 = 0;
  *(undefined4 *)&(this->HostNameCache).field_0x28 = 0;
  *(undefined4 *)&(this->HostNameCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->HostNameCache).field_0x34 = 0;
  *(undefined4 *)&(this->HostNameCache).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HostNameCache).field_0x40 = 0;
  *(undefined4 *)&(this->HostNameCache).field_0x48 = 0;
  return this;
}

// ~ISocketSubsystem @ 14310bac0

void __thiscall ISocketSubsystem::~ISocketSubsystem(ISocketSubsystem *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->HostNameCache).field_0x48 = 0;
  this->_padding_ = (longlong)&___7ISocketSubsystem__6B_;
  pvVar1 = *(void **)&(this->HostNameCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FInternetAddr,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FInternetAddr,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FInternetAddr,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HostNameCache);
                    /* WARNING: Could not recover jumptable at 0x00014310bb03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->HostNameCacheSync);
  return;
}

// AddHostNameToCache @ 14310cc20

void __thiscall
ISocketSubsystem::AddHostNameToCache
          (ISocketSubsystem *this,char *param_1,TSharedPtr<FInternetAddr,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FString *local_28;
  TSharedPtr<FInternetAddr,1> *local_20;
  FString local_18;
  
  lpCriticalSection = &this->HostNameCacheSync;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_28 = ::FString::FString(&local_18,param_1);
    local_20 = param_2;
    TSet<TTuple<FString,TSharedPtr<FInternetAddr,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternetAddr,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FInternetAddr,1>_const_&>_>
              ((TSet<TTuple<FString,TSharedPtr<FInternetAddr,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternetAddr,1>,0>,FDefaultSetAllocator>
                *)&this->HostNameCache,
               (TPairInitializer<FString_&&,TSharedPtr<FInternetAddr,1>_const_&> *)&stack0x00000008,
               (bool *)&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// BindNextPort @ 14310cde0

int __thiscall
ISocketSubsystem::BindNextPort
          (ISocketSubsystem *this,FSocket *param_1,FInternetAddr *param_2,int param_3,int param_4)

{
  FInternetAddr FVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_3) {
    do {
      cVar2 = (**(code **)(param_1->_padding_ + 0x20))(param_1,param_2);
      if (cVar2 == '\x01') {
        iVar4 = (**(code **)((longlong)*param_2 + 0x38))(param_2);
        if (iVar4 == 0) {
          iVar4 = (**(code **)(param_1->_padding_ + 0x120))(param_1);
          return iVar4;
        }
        iVar4 = (**(code **)((longlong)*param_2 + 0x38))(param_2);
        return iVar4;
      }
      iVar3 = (**(code **)((longlong)*param_2 + 0x38))();
      if (iVar3 == 0) {
        return 0;
      }
      FVar1 = *param_2;
      iVar3 = (**(code **)((longlong)FVar1 + 0x38))(param_2);
      (**(code **)((longlong)FVar1 + 0x28))(param_2,param_4 + iVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_3);
  }
  return 0;
}

// CreateInternetAddr @ 14310d9c0

TSharedRef<FInternetAddr,1> * __thiscall
ISocketSubsystem::CreateInternetAddr
          (ISocketSubsystem *this,TSharedRef<FInternetAddr,1> *__return_storage_ptr__,uint param_1,
          uint param_2)

{
  (**(code **)(this->_padding_ + 0x90))();
  (**(code **)((longlong)*__return_storage_ptr__->Object + 0x18))
            (__return_storage_ptr__->Object,param_1);
  (**(code **)((longlong)*__return_storage_ptr__->Object + 0x28))
            (__return_storage_ptr__->Object,param_2);
  return __return_storage_ptr__;
}

// CreateInternetAddr @ 14310da10

TSharedRef<FInternetAddr,1> * __thiscall
ISocketSubsystem::CreateInternetAddr
          (ISocketSubsystem *this,TSharedRef<FInternetAddr,1> *__return_storage_ptr__,FName param_1)

{
  (**(code **)(this->_padding_ + 0x90))();
  return __return_storage_ptr__;
}

// CreateRecvMulti @ 14310da40

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<FRecvMulti,TDefaultDelete<FRecvMulti>_> __thiscall
ISocketSubsystem::CreateRecvMulti
          (ISocketSubsystem *this,int param_1,int param_2,ERecvMultiFlags param_3)

{
  undefined4 in_register_00000014;
  FRecvMulti *pFVar1;
  
  pFVar1 = (FRecvMulti *)CONCAT44(in_register_00000014,param_1);
  if (2 < (byte)LogSockets._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    pFVar1->_padding_ = 0;
    return (TUniquePtr<FRecvMulti,TDefaultDelete<FRecvMulti>_>)pFVar1;
  }
  pFVar1->_padding_ = 0;
  return (TUniquePtr<FRecvMulti,TDefaultDelete<FRecvMulti>_>)pFVar1;
}

// CreateResolveInfoCached @ 14310da90

FResolveInfoCached * __thiscall
ISocketSubsystem::CreateResolveInfoCached
          (ISocketSubsystem *this,TSharedPtr<FInternetAddr,1> *param_1)

{
  TSharedPtr<FInternetAddr,1> *pTVar1;
  FInternetAddr *pFVar2;
  code *pcVar3;
  bool bVar4;
  FResolveInfoCached *pFVar5;
  undefined8 *puVar6;
  FInternetAddr *local_28;
  FSharedReferencer<1> local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pFVar5 = ::operator_new(0x18);
  if (pFVar5 == (FResolveInfoCached *)0x0) {
    pFVar5 = (FResolveInfoCached *)0x0;
  }
  else {
    if (param_1->Object == (FInternetAddr *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FResolveInfoCached *)(*pcVar3)();
        return pFVar5;
      }
    }
    pFVar2 = param_1->Object;
    pTVar1 = &pFVar5->Addr;
    pFVar5->_padding_ = (longlong)&___7FResolveInfoCached__6B_;
    pTVar1->Object = (FInternetAddr *)0x0;
    (pFVar5->Addr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    puVar6 = (undefined8 *)(**(code **)((longlong)*pFVar2 + 0xa0))(pFVar2,local_18);
    local_20.ReferenceController = (TReferenceControllerBase<1> *)puVar6[1];
    local_28 = (FInternetAddr *)*puVar6;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FInternetAddr,1> *)&local_28) {
      pTVar1->Object = local_28;
      local_28 = (FInternetAddr *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar5->Addr).SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pFVar5;
}

// CreateSocket @ 14310e0e0

FSocket * __thiscall
ISocketSubsystem::CreateSocket
          (ISocketSubsystem *this,FName *param_1,FString *param_2,ESocketProtocolFamily param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  FSocket *pFVar3;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  uVar2 = (**(code **)(lVar1 + 0x118))(this,local_res8,param_3);
  pFVar3 = (FSocket *)(**(code **)(lVar1 + 0x18))(this,param_1,param_2,uVar2);
  return pFVar3;
}

// CreateSocket @ 14310e140

FSocket * __thiscall
ISocketSubsystem::CreateSocket(ISocketSubsystem *this,FName *param_1,FString *param_2,bool param_3)

{
  FSocket *pFVar1;
  
  pFVar1 = (FSocket *)(**(code **)(this->_padding_ + 0x18))();
  return pFVar1;
}

// CreateUniqueSocket @ 14310e2e0

TUniquePtr<FSocket,FSocketDeleter> * __thiscall
ISocketSubsystem::CreateUniqueSocket
          (ISocketSubsystem *this,TUniquePtr<FSocket,FSocketDeleter> *__return_storage_ptr__,
          FName *param_1,FString *param_2,FName *param_3)

{
  FSocket *pFVar1;
  
  pFVar1 = (FSocket *)(**(code **)(this->_padding_ + 0x18))(this,param_1,param_2,param_3);
  __return_storage_ptr__->Ptr = pFVar1;
  __return_storage_ptr__->_padding_ = (longlong)this;
  return __return_storage_ptr__;
}

// CreateUniqueSocket @ 14310e330

TUniquePtr<FSocket,FSocketDeleter> * __thiscall
ISocketSubsystem::CreateUniqueSocket
          (ISocketSubsystem *this,TUniquePtr<FSocket,FSocketDeleter> *__return_storage_ptr__,
          FName *param_1,FString *param_2,bool param_3)

{
  FSocket *pFVar1;
  
  pFVar1 = (FSocket *)(**(code **)(this->_padding_ + 0x28))(this,param_1,param_2,param_3);
  __return_storage_ptr__->Ptr = pFVar1;
  __return_storage_ptr__->_padding_ = (longlong)this;
  return __return_storage_ptr__;
}

// Get @ 14310f300

ISocketSubsystem * __cdecl ISocketSubsystem::Get(FName *param_1)

{
  FName FVar1;
  ISocketSubsystem *pIVar2;
  FName *pFVar3;
  FModuleManager *this;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar3 = ::FName::FName(local_res10,"Sockets");
      FVar1 = *pFVar3;
      this = FModuleManager::Get();
      StaticSockets.SSSModule =
           (FSocketSubsystemModule *)FModuleManager::LoadModuleChecked(this,FVar1);
      atexit(`ISocketSubsystem::Get'::__l2::_dynamic_atexit_destructor_for__StaticSockets__);
      _Init_thread_footer(&::_TSS0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014310f33e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar2 = (ISocketSubsystem *)
           (**(code **)((StaticSockets.SSSModule)->_padding_ + 0x48))
                     (StaticSockets.SSSModule,*param_1);
  return pIVar2;
}

// GetAddressInfo @ 143110470

FAddressInfoResult * __thiscall
ISocketSubsystem::GetAddressInfo
          (ISocketSubsystem *this,FAddressInfoResult *__return_storage_ptr__,wchar_t *param_1,
          wchar_t *param_2,EAddressInfoFlags param_3,ESocketProtocolFamily param_4,
          ESocketType param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  puVar2 = (undefined8 *)(**(code **)(lVar1 + 0x118))(this,local_res8,param_4);
  (**(code **)(lVar1 + 0x40))(this,__return_storage_ptr__,param_1,param_2,param_3,*puVar2,param_5);
  return __return_storage_ptr__;
}

// GetAddressInfoAsync @ 143110500

void __thiscall
ISocketSubsystem::GetAddressInfoAsync
          (ISocketSubsystem *this,TFunction<void___cdecl(FAddressInfoResult)> *param_1,
          wchar_t *param_2,wchar_t *param_3,EAddressInfoFlags param_4,FName param_5,
          ESocketType param_6)

{
  FQueuedThreadPool *pFVar1;
  FAutoDeleteAsyncTask<FGetAddressInfoTask> *pFVar2;
  longlong *plVar3;
  wchar_t *local_38;
  wchar_t *local_30;
  ISocketSubsystem *local_28 [2];
  
  local_38 = param_3;
  local_30 = param_2;
  pFVar2 = ::operator_new(0xb0);
  if (pFVar2 == (FAutoDeleteAsyncTask<FGetAddressInfoTask> *)0x0) {
    pFVar2 = (FAutoDeleteAsyncTask<FGetAddressInfoTask> *)0x0;
  }
  else {
    local_28[0] = this;
    pFVar2 = FAutoDeleteAsyncTask<FGetAddressInfoTask>::
             FAutoDeleteAsyncTask<FGetAddressInfoTask><ISocketSubsystem_*,wchar_t_const_*_&,wchar_t_const_*_&,enum_EAddressInfoFlags_&,FName_const_&,enum_ESocketType_&,TFunction<void___cdecl(FAddressInfoResult)>_&>
                       (pFVar2,local_28,&local_30,&local_38,&param_4,&param_5,&param_6,param_1);
  }
  pFVar1 = GThreadPool;
  UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&pFVar2->_padding_);
  if (pFVar1 == (FQueuedThreadPool *)0x0) {
    FAutoDeleteAsyncTask<FGetAddressInfoTask>::DoWork(pFVar2);
  }
  else {
    (**(code **)((longlong)*pFVar1 + 0x18))(pFVar1,pFVar2,3);
  }
  if (*(longlong *)param_1 != 0) {
    plVar3 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// GetHostByName @ 1431107f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ESocketErrors __thiscall
ISocketSubsystem::GetHostByName(ISocketSubsystem *this,char *param_1,FInternetAddr *param_2)

{
  code *pcVar1;
  FInternetAddr *pFVar2;
  size_t sVar3;
  undefined8 uVar4;
  ESocketErrors EVar5;
  undefined1 auStack_1f8 [32];
  undefined2 local_1d8;
  void *local_1d0;
  undefined4 local_1c8;
  void *local_1b8 [2];
  void *local_1a8 [2];
  void *local_198;
  void *local_188;
  FAddressInfoResultData *local_170;
  int local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  EVar5 = SE_NO_ERROR;
  local_1b8[0] = (void *)0x0;
  local_158._padding_ = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x40);
  if (param_1 == (char *)0x0) {
    local_158.Ptr = (wchar_t *)0x0;
    local_158.StringLength = 0;
  }
  else {
    sVar3 = strlen(param_1);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,param_1,(int)sVar3,Yes);
  }
  local_1c8 = 0;
  local_1d0 = local_1b8[0];
  local_1d8 = 0;
  (*pcVar1)(this,local_1a8,local_158.Ptr,0);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_168 < 1) {
    EVar5 = SE_HOST_NOT_FOUND;
  }
  else {
    pcVar1 = *(code **)((longlong)*param_2 + 0x58);
    pFVar2 = (local_170->Address).Object;
    uVar4 = (**(code **)((longlong)*pFVar2 + 0x60))(pFVar2,local_1b8);
    (*pcVar1)(param_2,uVar4);
    if (local_1b8[0] != (void *)0x0) {
      FMemory::Free(local_1b8[0]);
    }
  }
  DestructItems<FAddressInfoResultData,int>(local_170,local_168);
  if (local_170 != (FAddressInfoResultData *)0x0) {
    FMemory::Free(local_170);
  }
  if (local_188 != (void *)0x0) {
    FMemory::Free(local_188);
  }
  if (local_198 != (void *)0x0) {
    FMemory::Free(local_198);
  }
  if (local_1a8[0] != (void *)0x0) {
    FMemory::Free(local_1a8[0]);
  }
  return EVar5;
}

// GetHostByName @ 143110970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FResolveInfo * __thiscall ISocketSubsystem::GetHostByName(ISocketSubsystem *this,char *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  FString *pFVar6;
  FResolveInfoAsync *pFVar7;
  FResolveInfoAsync *pFVar8;
  FName *pFVar9;
  TStatIdData *pTVar10;
  int iVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  FResolveInfoAsync *pFVar14;
  FName local_res8;
  undefined1 local_28 [16];
  
  lpCriticalSection = &this->HostNameCacheSync;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar6 = ::FString::FString((FString *)local_28,param_1);
    iVar5 = (pFVar6->Data).ArrayNum;
    if (iVar5 == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar14 = (FResolveInfoAsync *)0x0;
    iVar11 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar11 = 0;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar13);
    iVar5 = TSet<TTuple<FString,TSharedPtr<FInternetAddr,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternetAddr,1>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TSharedPtr<FInternetAddr,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternetAddr,1>,0>,FDefaultSetAllocator>
                        *)&this->HostNameCache,uVar4,pFVar6);
    pFVar7 = pFVar14;
    if (iVar5 != -1) {
      pFVar7 = (FResolveInfoAsync *)(*(longlong *)&this->HostNameCache + (longlong)iVar5 * 0x28);
    }
    pFVar8 = (FResolveInfoAsync *)&(pFVar7->Addr).SharedReferenceCount;
    if (pFVar7 == (FResolveInfoAsync *)0x0) {
      pFVar8 = pFVar14;
    }
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
    if (pFVar8 == (FResolveInfoAsync *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar8 = ::operator_new(0x198);
      pFVar7 = pFVar14;
      if (pFVar8 != (FResolveInfoAsync *)0x0) {
        uVar12 = (ulonglong)_tls_index;
        pFVar8->_padding_ = (longlong)&___7FResolveInfoAsync__6B_;
        (pFVar8->Addr).Object = (FInternetAddr *)0x0;
        (pFVar8->AsyncTask)._padding_ = (longlong)&___7FAsyncTaskBase__6B_;
        (pFVar8->Addr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
        ;
        (pFVar8->AsyncTask)._padding_ = (longlong)&TStatId::TStatId_NAME_None;
        (pFVar8->AsyncTask)._padding_ =
             (longlong)&___7__FAsyncTask_VFResolveInfoAsyncWorker_FResolveInfoAsync____6B_;
        pvVar3 = ThreadLocalStoragePointer;
        pFVar8->ErrorCode = 0;
        pFVar8->bShouldAbandon = 0;
        (pFVar8->AsyncTask)._padding_ = 0;
        lVar2 = *(longlong *)((longlong)pvVar3 + uVar12 * 8);
        *(undefined4 *)&(pFVar8->AsyncTask)._padding_ = 0;
        (pFVar8->AsyncTask)._padding_ = 0;
        (pFVar8->AsyncTask)._padding_ = 0;
        *(undefined2 *)&(pFVar8->AsyncTask)._padding_ = 3;
        (pFVar8->AsyncTask)._padding_ = -1;
        (pFVar8->AsyncTask)._padding_ = 0;
        (pFVar8->AsyncTask).Task.Parent = pFVar8;
        if ((*(int *)(lVar2 + 0x9d4c) <
             `public:_struct_TStatId___cdecl_FResolveInfoAsync::FResolveInfoAsyncWorker::GetStatId(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_struct_TStatId___cdecl_FResolveInfoAsync::FResolveInfoAsyncWorker::GetStatId(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_struct_TStatId___cdecl_FResolveInfoAsync::FResolveInfoAsyncWorker::GetStatId(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          _StatPtr_FResolveInfoAsyncWorker = (TStatIdData *)0x0;
          pFVar9 = ::FName::FName(&local_res8,"FResolveInfoAsyncWorker");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)
                     &`public:_struct_TStatId___cdecl_FResolveInfoAsync::FResolveInfoAsyncWorker::GetStatId(void)const___ptr64'
                      ::__l2::StatPtr_FResolveInfoAsyncWorker,*pFVar9,L"FResolveInfoAsyncWorker",
                     "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",
                     true,true,ST_int64,true,false,MCR_Invalid);
          _Init_thread_footer(&`public:_struct_TStatId___cdecl_FResolveInfoAsync::FResolveInfoAsyncWorker::GetStatId(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        pTVar10 = _StatPtr_FResolveInfoAsyncWorker;
        if (_StatPtr_FResolveInfoAsyncWorker == (TStatIdData *)0x0) {
          pFVar9 = ::FName::FName(&local_res8,"FResolveInfoAsyncWorker");
          pTVar10 = FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)
                               &`public:_struct_TStatId___cdecl_FResolveInfoAsync::FResolveInfoAsyncWorker::GetStatId(void)const___ptr64'
                                ::__l2::StatPtr_FResolveInfoAsyncWorker,*pFVar9,
                               L"FResolveInfoAsyncWorker","STATGROUP_ThreadPoolAsyncTasks",
                               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,
                               false,MCR_Invalid);
        }
        (pFVar8->AsyncTask)._padding_ = (longlong)pTVar10;
        strncpy(pFVar8->HostName,param_1,0x100);
        pFVar8->HostName[0xff] = '\0';
        pFVar7 = pFVar8;
      }
      FResolveInfoAsync::StartAsyncTask(pFVar7);
    }
    else {
      pFVar14 = (FResolveInfoAsync *)(pFVar8->Addr).Object;
      pFVar1 = (FScriptContainerElement *)pFVar8->_padding_;
      if (pFVar14 != (FResolveInfoAsync *)0x0) {
        LOCK();
        *(int *)&(pFVar14->Addr).Object = *(int *)&(pFVar14->Addr).Object + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar2 = this->_padding_;
      if (pFVar14 != (FResolveInfoAsync *)0x0) {
        LOCK();
        *(int *)&(pFVar14->Addr).Object = *(int *)&(pFVar14->Addr).Object + 1;
        UNLOCK();
      }
      local_28._0_8_ = pFVar1;
      local_28._8_8_ = pFVar14;
      pFVar7 = (FResolveInfoAsync *)(**(code **)(lVar2 + 0x30))(this,local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar14);
    return (FResolveInfo *)pFVar7;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetHostByNameFromCache @ 143110cb0

bool __thiscall
ISocketSubsystem::GetHostByNameFromCache
          (ISocketSubsystem *this,char *param_1,TSharedPtr<FInternetAddr,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  FInternetAddr *pFVar2;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  FString local_28;
  FInternetAddr *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  lpCriticalSection = &this->HostNameCacheSync;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar5 = ::FString::FString(&local_28,param_1);
  iVar4 = (pFVar5->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,TSharedPtr<FInternetAddr,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternetAddr,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSharedPtr<FInternetAddr,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternetAddr,1>,0>,FDefaultSetAllocator>
                      *)&this->HostNameCache,uVar3,pFVar5);
  puVar8 = (undefined8 *)0x0;
  if (iVar4 != -1) {
    puVar8 = (undefined8 *)(*(longlong *)&this->HostNameCache + (longlong)iVar4 * 0x28);
  }
  puVar9 = puVar8 + 2;
  if (puVar8 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (puVar9 != (undefined8 *)0x0) {
    pTVar1 = (TReferenceControllerBase<1> *)puVar9[1];
    pFVar2 = (FInternetAddr *)*puVar9;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = param_2->Object;
    pTStack_10 = (param_2->SharedReferenceCount).ReferenceController;
    param_2->Object = pFVar2;
    (param_2->SharedReferenceCount).ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return puVar9 != (undefined8 *)0x0;
}

// GetLocalAdapterAddresses @ 1431113b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ISocketSubsystem::GetLocalAdapterAddresses
          (ISocketSubsystem *this,
          TArray<TSharedPtr<FInternetAddr,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  FAddressInfoResultData *pFVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TSharedRef<FInternetAddr,1> *pTVar9;
  wchar_t *pwVar10;
  undefined1 local_res8 [8];
  ulonglong in_stack_ffffffffffffff48;
  FInternetAddr *local_98;
  TReferenceControllerBase<1> *local_90;
  wchar_t *local_88;
  undefined8 local_80;
  void *local_78 [2];
  void *local_68;
  void *local_58;
  int local_48;
  FAddressInfoResultData *local_40;
  int local_38;
  
  local_88 = (wchar_t *)0x0;
  local_80 = 0;
  if (2 < (byte)LogSockets._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
  }
  cVar4 = (**(code **)(this->_padding_ + 0x80))(this,&local_88);
  if (cVar4 == '\0') {
    bVar5 = false;
  }
  else {
    pwVar10 = L"";
    if ((int)local_80 != 0) {
      pwVar10 = local_88;
    }
    (**(code **)(this->_padding_ + 0x40))
              (this,local_78,pwVar10,0,0x89,0,in_stack_ffffffffffffff48 & 0xffffffff00000000);
    iVar3 = local_38;
    if (local_48 == 0) {
      pTVar9 = &local_40->Address;
      pFVar1 = local_40 + local_38;
      while( true ) {
        if (local_38 != iVar3) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FAddressInfoResultData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if ((FAddressInfoResultData *)((longlong)(pTVar9 + -2) + 8) == pFVar1) break;
        local_98 = pTVar9->Object;
        local_90 = (pTVar9->SharedReferenceCount).ReferenceController;
        if (local_90 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar8 = (param_1->AllocatorInstance).Data;
        if (((pFVar8 <= (FScriptContainerElement *)&local_98) &&
            ((FScriptContainerElement *)&local_98 < pFVar8 + (longlong)param_1->ArrayMax * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar7 + 1;
        pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
        *(FInternetAddr **)pFVar8 = local_98;
        *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_90;
        local_90 = (TReferenceControllerBase<1> *)0x0;
        local_98 = (FInternetAddr *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        pTVar9 = (TSharedRef<FInternetAddr,1> *)((longlong)(pTVar9 + 2) + 8);
      }
    }
    DestructItems<FAddressInfoResultData,int>(local_40,local_38);
    if (local_40 != (FAddressInfoResultData *)0x0) {
      FMemory::Free(local_40);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_78[0] != (void *)0x0) {
      FMemory::Free(local_78[0]);
    }
    bVar5 = true;
  }
  if (local_88 != (wchar_t *)0x0) {
    FMemory::Free(local_88);
  }
  return bVar5;
}

// GetLocalBindAddr @ 143111610

TSharedRef<FInternetAddr,1> * __thiscall
ISocketSubsystem::GetLocalBindAddr
          (ISocketSubsystem *this,TSharedRef<FInternetAddr,1> *__return_storage_ptr__,
          FOutputDevice *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FInternetAddr,1> *pTVar4;
  TSharedRef<FInternetAddr,1> *local_28;
  int local_20;
  FInternetAddr *local_18;
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(this->_padding_ + 0xd8))(this,&local_28);
  if (local_20 == 0) {
    (**(code **)(this->_padding_ + 0x90))(this,&local_18);
    (**(code **)((longlong)*local_18 + 0x68))();
    __return_storage_ptr__->Object = local_18;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_10;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  else {
    if ((local_20 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FInternetAddr,1> *)(*pcVar2)();
      return pTVar4;
    }
    __return_storage_ptr__->Object = local_28->Object;
    pTVar1 = (local_28->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  DestructItems<TSharedRef<FInternetAddr,1>,int>(local_28,local_20);
  if (local_28 != (TSharedRef<FInternetAddr,1> *)0x0) {
    FMemory::Free(local_28);
  }
  return __return_storage_ptr__;
}

// GetLocalBindAddresses @ 143111710

TArray<TSharedRef<FInternetAddr,1>,TSizedDefaultAllocator<32>_> * __thiscall
ISocketSubsystem::GetLocalBindAddresses
          (ISocketSubsystem *this,
          TArray<TSharedRef<FInternetAddr,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FAddressInfoResultData *pFVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TArray<TSharedRef<FInternetAddr,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  ulonglong in_stack_ffffffffffffff58;
  undefined8 local_88;
  TReferenceControllerBase<1> *local_80;
  void *local_78 [2];
  void *local_68;
  void *local_58;
  int local_48;
  FAddressInfoResultData *local_40;
  int local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x90))(this,&local_88);
  cVar4 = (**(code **)(this->_padding_ + 0xe8))(this,&local_88);
  if (cVar4 == '\0') {
    local_res10 = 0;
    (**(code **)(this->_padding_ + 0x40))
              (this,local_78,0,&u_0,0x99,0,in_stack_ffffffffffffff58 & 0xffffffff00000000);
    iVar6 = local_38;
    if (local_48 == 0) {
      pFVar9 = (FScriptContainerElement *)&local_40->Address;
      pFVar1 = local_40 + local_38;
      while( true ) {
        if (local_38 != iVar6) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FAddressInfoResultData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if ((FAddressInfoResultData *)(pFVar9 + -0x18) == pFVar1) break;
        pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar11 = pFVar10 + (longlong)__return_storage_ptr__->ArrayNum * 0x10;
        if (pFVar10 != pFVar11) {
          do {
            cVar4 = (**(code **)(**(longlong **)pFVar10 + 0x88))
                              (*(longlong **)pFVar10,*(undefined8 *)&pFVar9->field_0x0);
            if (cVar4 != '\0') goto LAB_143111995;
            pFVar10 = pFVar10 + 0x10;
          } while (pFVar10 != pFVar11);
          pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
        }
        if (((pFVar10 <= pFVar9) &&
            (pFVar9 < pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<TSharedRef<FInternetAddr,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar10 = *(undefined8 *)&pFVar9->field_0x0;
        lVar2 = *(longlong *)(pFVar9 + 8);
        *(longlong *)(pFVar10 + 8) = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
LAB_143111995:
        pFVar9 = pFVar9 + 0x28;
      }
    }
    DestructItems<FAddressInfoResultData,int>(local_40,local_38);
    if (local_40 != (FAddressInfoResultData *)0x0) {
      FMemory::Free(local_40);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_78[0] != (void *)0x0) {
      FMemory::Free(local_78[0]);
    }
  }
  else {
    pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar9 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 <
         pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<TSharedRef<FInternetAddr,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(undefined8 *)pFVar9 = local_88;
    *(TReferenceControllerBase<1> **)(pFVar9 + 8) = local_80;
    if (local_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  return __return_storage_ptr__;
}

// GetLocalHostAddr @ 143111b90

TSharedRef<FInternetAddr,1> * __thiscall
ISocketSubsystem::GetLocalHostAddr
          (ISocketSubsystem *this,TSharedRef<FInternetAddr,1> *__return_storage_ptr__,
          FOutputDevice *param_1,bool *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  FInternetAddr *pFVar4;
  undefined8 *puVar5;
  TSharedPtr<FInternetAddr,1> *local_28;
  undefined8 local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(this->_padding_ + 0x90))();
  *param_2 = false;
  cVar3 = (**(code **)(this->_padding_ + 0xe8))(this,__return_storage_ptr__);
  if (cVar3 != '\0') {
    return __return_storage_ptr__;
  }
  *param_2 = true;
  local_28 = (TSharedPtr<FInternetAddr,1> *)0x0;
  local_20 = 0;
  cVar3 = (**(code **)(this->_padding_ + 200))(this,&local_28);
  if ((cVar3 == '\0') || ((int)local_20 == 0)) {
    FOutputDevice::Log(param_1,L"Could not fetch the local adapter addresses");
    (**(code **)((longlong)*__return_storage_ptr__->Object + 0x68))();
  }
  else {
    if ((int)local_20 < 1) goto LAB_143111c54;
    pFVar4 = TSharedPtr<FInternetAddr,1>::operator->(local_28);
    puVar5 = (undefined8 *)(**(code **)((longlong)*pFVar4 + 0xa0))(pFVar4,local_18);
    pFVar4 = __return_storage_ptr__->Object;
    pTVar1 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    pTVar2 = (TReferenceControllerBase<1> *)puVar5[1];
    __return_storage_ptr__->Object = (FInternetAddr *)*puVar5;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    *puVar5 = pFVar4;
    puVar5[1] = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
LAB_143111c54:
  DestructItems<TSharedPtr<FInternetAddr,1>,int>(local_28,(int)local_20);
  if (local_28 != (TSharedPtr<FInternetAddr,1> *)0x0) {
    FMemory::Free(local_28);
  }
  return __return_storage_ptr__;
}

// GetMultihomeAddress @ 143112250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
ISocketSubsystem::GetMultihomeAddress(ISocketSubsystem *this,TSharedRef<FInternetAddr,1> *param_1)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  wchar_t *pwVar6;
  FInternetAddr *pFVar7;
  undefined1 auStackY_268 [32];
  FInternetAddr *local_238;
  TReferenceControllerBase<1> *local_230;
  FString local_228;
  wchar_t local_218 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_268;
  memset(local_218,0,0x200);
  pwVar6 = FCommandLine::Get();
  bVar4 = FParse::Value(pwVar6,L"MULTIHOME=",local_218,0x100,true,(wchar_t **)0x0);
  if (bVar4) {
    pcVar1 = *(code **)(this->_padding_ + 0x58);
    ::FString::FString(&local_228,local_218);
    (*pcVar1)(this,&local_238,&local_228);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    if (local_238 == (FInternetAddr *)0x0) {
      if (4 < (byte)LogSockets._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
      }
      bVar4 = false;
    }
    else {
      pFVar7 = local_238;
      if ((local_238 == (FInternetAddr *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), pFVar7 = local_238, bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      pTVar3 = local_230;
      if (local_230 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_230->SharedReferenceCount = (atomic<int>)((int)local_230->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar7 == (FInternetAddr *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pFVar7;
      (param_1->SharedReferenceCount).ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      bVar4 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_230);
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// GetProtocolFamilyFromName @ 143112d00

ESocketProtocolFamily __thiscall
ISocketSubsystem::GetProtocolFamilyFromName(ISocketSubsystem *this,FName *param_1)

{
  FName local_res10;
  
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  if (*param_1 == local_res10) {
    return IPv6;
  }
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
  return *param_1 == local_res10;
}

// GetProtocolNameFromFamily @ 143112e80

FName __thiscall
ISocketSubsystem::GetProtocolNameFromFamily(ISocketSubsystem *this,ESocketProtocolFamily param_1)

{
  FName FVar1;
  FName FVar2;
  undefined7 in_register_00000011;
  char in_R8B;
  
  FVar1._1_7_ = in_register_00000011;
  FVar1.ComparisonIndex.Value._0_1_ = param_1;
  if (in_R8B == '\x01') {
    FLazyName::Resolve(&FNetworkProtocolTypes::IPv4);
    return FVar1;
  }
  if (in_R8B != '\x02') {
    *(undefined8 *)CONCAT71(in_register_00000011,param_1) = 0;
    FVar2._1_7_ = in_register_00000011;
    FVar2.ComparisonIndex.Value._0_1_ = param_1;
    return FVar2;
  }
  FLazyName::Resolve(&FNetworkProtocolTypes::IPv6);
  return FVar1;
}

// GetSocketError @ 143113340

wchar_t * __thiscall ISocketSubsystem::GetSocketError(ISocketSubsystem *this,ESocketErrors param_1)

{
  if (param_1 == SE_GET_LAST_ERROR_CODE) {
    param_1 = (**(code **)(this->_padding_ + 0xb8))();
  }
  switch(param_1) {
  case SE_NO_ERROR:
    return L"SE_NO_ERROR";
  case SE_EINTR:
    return L"SE_EINTR";
  case SE_EBADF:
    return L"SE_EBADF";
  case SE_EACCES:
    return L"SE_EACCES";
  case SE_EFAULT:
    return L"SE_EFAULT";
  case SE_EINVAL:
    return L"SE_EINVAL";
  case SE_EMFILE:
    return L"SE_EMFILE";
  case SE_EWOULDBLOCK:
    return L"SE_EWOULDBLOCK";
  case SE_EINPROGRESS:
    return L"SE_EINPROGRESS";
  case SE_EALREADY:
    return L"SE_EALREADY";
  case SE_ENOTSOCK:
    return L"SE_ENOTSOCK";
  case SE_EDESTADDRREQ:
    return L"SE_EDESTADDRREQ";
  case SE_EMSGSIZE:
    return L"SE_EMSGSIZE";
  case SE_EPROTOTYPE:
    return L"SE_EPROTOTYPE";
  case SE_ENOPROTOOPT:
    return L"SE_ENOPROTOOPT";
  case SE_EPROTONOSUPPORT:
    return L"SE_EPROTONOSUPPORT";
  case SE_ESOCKTNOSUPPORT:
    return L"SE_ESOCKTNOSUPPORT";
  case SE_EOPNOTSUPP:
    return L"SE_EOPNOTSUPP";
  case SE_EPFNOSUPPORT:
    return L"SE_EPFNOSUPPORT";
  case SE_EAFNOSUPPORT:
    return L"SE_EAFNOSUPPORT";
  case SE_EADDRINUSE:
    return L"SE_EADDRINUSE";
  case SE_EADDRNOTAVAIL:
    return L"SE_EADDRNOTAVAIL";
  case SE_ENETDOWN:
    return L"SE_ENETDOWN";
  case SE_ENETUNREACH:
    return L"SE_ENETUNREACH";
  case SE_ENETRESET:
    return L"SE_ENETRESET";
  case SE_ECONNABORTED:
    return L"SE_ECONNABORTED";
  case SE_ECONNRESET:
    return L"SE_ECONNRESET";
  case SE_ENOBUFS:
    return L"SE_ENOBUFS";
  case SE_EISCONN:
    return L"SE_EISCONN";
  case SE_ENOTCONN:
    return L"SE_ENOTCONN";
  case SE_ESHUTDOWN:
    return L"SE_ESHUTDOWN";
  case SE_ETOOMANYREFS:
    return L"SE_ETOOMANYREFS";
  case SE_ETIMEDOUT:
    return L"SE_ETIMEDOUT";
  case SE_ECONNREFUSED:
    return L"SE_ECONNREFUSED";
  case SE_ELOOP:
    return L"SE_ELOOP";
  case SE_ENAMETOOLONG:
    return L"SE_ENAMETOOLONG";
  case SE_EHOSTDOWN:
    return L"SE_EHOSTDOWN";
  case SE_EHOSTUNREACH:
    return L"SE_EHOSTUNREACH";
  case SE_ENOTEMPTY:
    return L"SE_ENOTEMPTY";
  case SE_EPROCLIM:
    return L"SE_EPROCLIM";
  case SE_EUSERS:
    return L"SE_EUSERS";
  case SE_EDQUOT:
    return L"SE_EDQUOT";
  case SE_ESTALE:
    return L"SE_ESTALE";
  case SE_EREMOTE:
    return L"SE_EREMOTE";
  case SE_EDISCON:
    return L"SE_EDISCON";
  case SE_SYSNOTREADY:
    return L"SE_SYSNOTREADY";
  case SE_VERNOTSUPPORTED:
    return L"SE_VERNOTSUPPORTED";
  case SE_NOTINITIALISED:
    return L"SE_NOTINITIALISED";
  case SE_HOST_NOT_FOUND:
    return L"SE_HOST_NOT_FOUND";
  case SE_TRY_AGAIN:
    return L"SE_TRY_AGAIN";
  case SE_NO_RECOVERY:
    return L"SE_NO_RECOVERY";
  case SE_NO_DATA:
    return L"SE_NO_DATA";
  case SE_UDP_ERR_PORT_UNREACH:
    return L"SE_UDP_ERR_PORT_UNREACH";
  case SE_ADDRFAMILY:
    return L"SE_ADDRFAMILY";
  case SE_SYSTEM:
    return L"SE_SYSTEM";
  case SE_NODEV:
    return L"SE_NODEV";
  default:
    return L"Unknown Error";
  }
}

// IsRecvFromWithPktInfoSupported @ 143114080

bool __thiscall ISocketSubsystem::IsRecvFromWithPktInfoSupported(ISocketSubsystem *this)

{
  return false;
}

// IsSocketRecvMultiSupported @ 143114090

bool __thiscall ISocketSubsystem::IsSocketRecvMultiSupported(ISocketSubsystem *this)

{
  return false;
}

// RemoveHostNameFromCache @ 1431158c0

void __thiscall ISocketSubsystem::RemoveHostNameFromCache(ISocketSubsystem *this,char *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  uint uVar2;
  FString *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  lpCriticalSection = &this->HostNameCacheSync;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar3 = ::FString::FString(&local_18,param_1);
  if (*(int *)&(this->HostNameCache).field_0x8 != *(int *)&(this->HostNameCache).field_0x34) {
    iVar1 = (pFVar3->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar5 = L"";
      iVar4 = 0;
    }
    else {
      pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
    TSet<TTuple<FString,TSharedPtr<FInternetAddr,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternetAddr,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,TSharedPtr<FInternetAddr,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternetAddr,1>,0>,FDefaultSetAllocator>
                *)&this->HostNameCache,uVar2,pFVar3);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x000143115952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ShutdownAllSystems @ 143117c80

void __cdecl ISocketSubsystem::ShutdownAllSystems(void)

{
  bool bVar1;
  FModuleManager *pFVar2;
  FName *pFVar3;
  FName local_res8 [4];
  
  bVar1 = IsInGameThread();
  if (bVar1) {
    pFVar2 = FModuleManager::Get();
    pFVar3 = ::FName::FName(local_res8,L"Sockets");
    bVar1 = FModuleManager::IsModuleLoaded(pFVar2,*pFVar3);
    if (bVar1) {
      pFVar2 = FModuleManager::Get();
      pFVar3 = ::FName::FName(local_res8,L"Sockets");
      FModuleManager::UnloadModule(pFVar2,*pFVar3,true,true);
    }
  }
  return;
}

// TranslatePacketTimestamp @ 143118a20

/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall
ISocketSubsystem::TranslatePacketTimestamp
          (ISocketSubsystem *this,FPacketTimestamp *param_1,ETimestampTranslation param_2)

{
  if (2 < (byte)LogSockets._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
  }
  return 0.0;
}

