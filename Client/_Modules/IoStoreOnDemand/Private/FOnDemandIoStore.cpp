// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 54

// <lambda_invoker_cdecl> @ 144594090

void __cdecl
`UE::IoStore::FOnDemandIoStore::InitializePostHotfix'::__l80::<lambda_1>::<lambda_invoker_cdecl>
          (FOnDemandMountResult *param_1)

{
  FScriptContainerElement *pFVar1;
  
  UE::IoStore::FOnDemandMountResult::LogResult(param_1);
  FIoStatus::~FIoStatus(&param_1->Status);
  pFVar1 = (param_1->MountId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FOnDemandIoStore @ 1445a5d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandIoStore * __thiscall
UE::IoStore::FOnDemandIoStore::FOnDemandIoStore(FOnDemandIoStore *this)

{
  TUniquePtr<UE::IoStore::FOnDemandDebugCommands,TDefaultDelete<UE::IoStore::FOnDemandDebugCommands>_>
  *pTVar1;
  int iVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FOnDemandDebugCommands *pFVar7;
  FOnDemandIoStore *pFVar8;
  FEncryptionKeyManager *pFVar9;
  FOnDemandDebugCommands *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  longlong local_78 [2];
  code *local_68;
  undefined8 uStack_60;
  FConfig local_58;
  
  pFVar10 = (FOnDemandDebugCommands *)0x0;
  local_58.Allowance.Bytes = 0x1000000;
  pTVar1 = &this->DebugCommands;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOnDemandIoStore_IoStore_UE__6B_;
  (this->HttpClient).Ptr = (FOnDemandHttpThread *)0x0;
  (this->Installer).Ptr = (FOnDemandContentInstaller *)0x0;
  (this->InstallCache).Object = (IOnDemandInstallCache *)0x0;
  (this->InstallCache).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->PackageStoreBackend).Object = (IOnDemandPackageStoreBackend *)0x0;
  (this->PackageStoreBackend).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->StreamingBackend).Object = (IOnDemandIoDispatcherBackend *)0x0;
  (this->StreamingBackend).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->HttpIoBackend).Object = (IOnDemandHttpIoDispatcherBackend *)0x0;
  (this->HttpIoBackend).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar1->Ptr = (FOnDemandDebugCommands *)0x0;
  local_58.Allowance.Ops = 0x20;
  local_58.Allowance.Seconds = 0x3c;
  (this->DiskCacheGovernor).StreamingCacheState.OpInterval = 0;
  (this->DiskCacheGovernor).StreamingCacheState.PrevCycles = 0;
  (this->DiskCacheGovernor).StreamingCacheState.RunOff = 0;
  (this->DiskCacheGovernor).StreamingCacheState.OpCount = 0;
  (this->DiskCacheGovernor).StreamingCacheState.MaxOpCount = 0;
  (this->DiskCacheGovernor).StreamingCacheState.OpAllowance = 0;
  (this->DiskCacheGovernor).StreamingCacheState.CyclesSuspended = (atomic<__int64>)0x0;
  (this->DiskCacheGovernor).StreamingCacheState.Demand.Threshold = '\x1e';
  (this->DiskCacheGovernor).StreamingCacheState.Demand.Boost = '<';
  (this->DiskCacheGovernor).StreamingCacheState.Demand.SuperBoost = 'W';
  (this->DiskCacheGovernor).StreamingCacheState.State = Waiting;
  local_58.Demand.Threshold = '\x1e';
  local_58.Demand.Boost = '<';
  local_58.Demand.SuperBoost = 'W';
  local_58.CommitBufferSize = 0;
  FDiskCacheGovernor::Configure(&(this->DiskCacheGovernor).StreamingCacheState,&local_58);
  (this->OnMountPakHandle).ID = 0;
  (this->OnServerPostForkHandle).ID = 0;
  (this->Containers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Containers).ArrayNum = 0;
  (this->Containers).ArrayMax = 0;
  *(undefined8 *)&this->PendingContainerHeaders = 0;
  *(undefined8 *)&(this->PendingContainerHeaders).field_0x8 = 0;
  *(undefined8 *)&(this->PendingContainerHeaders).field_0x20 = 0;
  *(undefined4 *)&(this->PendingContainerHeaders).field_0x28 = 0;
  *(undefined4 *)&(this->PendingContainerHeaders).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingContainerHeaders).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingContainerHeaders).field_0x34 = 0;
  *(undefined8 *)&(this->PendingContainerHeaders).field_0x40 = 0;
  *(undefined4 *)&(this->PendingContainerHeaders).field_0x48 = 0;
  (this->ContainerMutex).State = (atomic<unsigned_char>)0x0;
  (this->MountRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountRequests).ArrayNum = 0;
  (this->MountRequests).ArrayMax = 0;
  (this->RequestMutex).State = (atomic<unsigned_char>)0x0;
  this->StreamingOptions = Default;
  this->bTicking = false;
  this->bTickRequested = false;
  *(undefined8 *)&this->TickFuture = 0;
  *(undefined8 *)&(this->TickFuture).field_0x8 = 0;
  pFVar7 = ::operator_new(0x18);
  if (pFVar7 != (FOnDemandDebugCommands *)0x0) {
    pFVar7->OnDemandIoStore = this;
    (pFVar7->DynamicConsoleCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->DynamicConsoleCommands).ArrayNum = 0;
    (pFVar7->DynamicConsoleCommands).ArrayMax = 0;
    FOnDemandDebugCommands::BindConsoleCommands(pFVar7);
    pFVar10 = pFVar7;
  }
  if (pTVar1 == (TUniquePtr<UE::IoStore::FOnDemandDebugCommands,TDefaultDelete<UE::IoStore::FOnDemandDebugCommands>_>
                 *)local_78) {
    if (pFVar10 == (FOnDemandDebugCommands *)0x0) goto LAB_1445a5fde;
    pFVar11 = (pFVar10->DynamicConsoleCommands).AllocatorInstance.Data;
    iVar2 = (pFVar10->DynamicConsoleCommands).ArrayNum;
    pFVar4 = pFVar11 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pFVar10->DynamicConsoleCommands).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<IConsoleCommand_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar11 == pFVar4) break;
      uVar3 = *(undefined8 *)pFVar11;
      if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
          (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Singleton != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x4fb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FOnDemandIoStore *)(*pcVar5)();
        return pFVar8;
      }
      (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
                (IConsoleManager::Singleton,uVar3,1);
      pFVar11 = pFVar11 + 8;
    }
    pFVar4 = (pFVar10->DynamicConsoleCommands).AllocatorInstance.Data;
    pFVar7 = pFVar10;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  else {
    pFVar7 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar10;
    if (pFVar7 == (FOnDemandDebugCommands *)0x0) goto LAB_1445a5fde;
    pFVar11 = (pFVar7->DynamicConsoleCommands).AllocatorInstance.Data;
    iVar2 = (pFVar7->DynamicConsoleCommands).ArrayNum;
    pFVar4 = pFVar11 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pFVar7->DynamicConsoleCommands).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<IConsoleCommand_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar11 == pFVar4) break;
      uVar3 = *(undefined8 *)pFVar11;
      if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
          (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Singleton != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x4fb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FOnDemandIoStore *)(*pcVar5)();
        return pFVar8;
      }
      (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
                (IConsoleManager::Singleton,uVar3,1);
      pFVar11 = pFVar11 + 8;
    }
    pFVar4 = (pFVar7->DynamicConsoleCommands).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  ::operator_delete(pFVar7,0x18);
LAB_1445a5fde:
  uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
  local_68 = OnEncryptionKeyAdded;
  pFVar9 = FEncryptionKeyManager::Get();
  TMulticastDelegateRegistration<void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
  ::AddRaw<UE::IoStore::FOnDemandIoStore>
            ((TMulticastDelegateRegistration<void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
              *)&pFVar9->KeyAdded,(FOnDemandIoStore *)(local_res10 + 8),(pmf_1c1607a5 *)this);
  return this;
}

// ~FOnDemandIoStore @ 1445a93a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall UE::IoStore::FOnDemandIoStore::~FOnDemandIoStore(FOnDemandIoStore *this)

{
  int *piVar1;
  int iVar2;
  FDelegateHandle FVar3;
  longlong *plVar4;
  FOnDemandContentInstaller *pFVar5;
  FOnDemandHttpThread *pFVar6;
  FScriptContainerElement *pFVar7;
  void *pvVar8;
  FSlab *pFVar9;
  code *pcVar10;
  char cVar11;
  bool bVar12;
  FEncryptionKeyManager *pFVar13;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_01;
  FIoStatus local_18;
  
  this->_padding_ = (longlong)&___7FOnDemandIoStore_IoStore_UE__6B_;
  pFVar13 = FEncryptionKeyManager::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar13->KeyAdded,this);
  if ((this->OnMountPakHandle).ID != 0) {
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              FCoreInternalDelegates::GetOnPakMountOperation();
    FVar3.ID = (this->OnMountPakHandle).ID;
    if (FVar3.ID != 0) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance(this_00,FVar3);
    }
  }
  FVar3.ID = (this->OnServerPostForkHandle).ID;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPostFork,
               FVar3);
  }
  if (*(longlong *)&this->TickFuture != 0) {
    do {
      do {
      } while (*(longlong *)&this->TickFuture == 0);
      plVar4 = *(longlong **)(*(longlong *)&this->TickFuture + 0x60);
      cVar11 = (**(code **)(*plVar4 + 0x20))(plVar4,0xffffffff,0);
    } while (cVar11 == '\0');
  }
  pFVar5 = (this->Installer).Ptr;
  if (pFVar5 != (FOnDemandContentInstaller *)0x0) {
    (this->Installer).Ptr = (FOnDemandContentInstaller *)0x0;
    TDefaultDelete<UE::IoStore::FOnDemandContentInstaller>::operator()
              ((TDefaultDelete<UE::IoStore::FOnDemandContentInstaller> *)&this->Installer,pFVar5);
  }
  pFVar6 = (this->HttpClient).Ptr;
  if (pFVar6 != (FOnDemandHttpThread *)0x0) {
    (this->HttpClient).Ptr = (FOnDemandHttpThread *)0x0;
    FOnDemandHttpThread::~FOnDemandHttpThread(pFVar6);
    ::operator_delete(pFVar6,0x128);
  }
  bVar12 = FHttpIoDispatcher::IsInitialized();
  if (bVar12) {
    this_01 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              FHttpIoDispatcher::OnHostGroupRegistered();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_01,this);
    FHttpIoDispatcher::Shutdown(&local_18);
    FIoStatus::~FIoStatus(&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->TickFuture).field_0x8);
  DestructItems<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,int>
            ((TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *)
             (this->MountRequests).AllocatorInstance.Data,(this->MountRequests).ArrayNum);
  pFVar7 = (this->MountRequests).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  *(undefined4 *)&(this->PendingContainerHeaders).field_0x48 = 0;
  pvVar8 = *(void **)&(this->PendingContainerHeaders).field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FIoBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FIoBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FIoBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingContainerHeaders);
  DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int>
            ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)
             (this->Containers).AllocatorInstance.Data,(this->Containers).ArrayNum);
  pFVar7 = (this->Containers).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HttpIoBackend).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StreamingBackend).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PackageStoreBackend).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InstallCache).SharedReferenceCount.ReferenceController);
  pFVar5 = (this->Installer).Ptr;
  if (pFVar5 != (FOnDemandContentInstaller *)0x0) {
    FOnDemandContentInstaller::Shutdown(pFVar5);
    *(undefined4 *)&(pFVar5->PendingChunkDownloads).field_0x48 = 0;
    pvVar8 = *(void **)&(pFVar5->PendingChunkDownloads).field_0x40;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar5->PendingChunkDownloads);
    pFVar7 = (pFVar5->RunningRequests).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar7 = (pFVar5->RequestQueue).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar9 = (pFVar5->RequestAllocator).CurrentSlab;
    if ((pFVar9->Allocated != pFVar9->Freed) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentSlab->Allocated == CurrentSlab->Freed",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                            ,0x23,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    ::operator_delete((pFVar5->RequestAllocator).CurrentSlab,0x2c10);
    if (((pFVar5->InstallerPipe).TaskCount != (atomic<unsigned___int64>)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!HasWork()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                            ,0x2a,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar5->InstallerPipe).EmptyEventRef.SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar5,0xc0);
  }
  pFVar6 = (this->HttpClient).Ptr;
  if (pFVar6 != (FOnDemandHttpThread *)0x0) {
    FOnDemandHttpThread::~FOnDemandHttpThread(pFVar6);
    ::operator_delete(pFVar6,0x128);
  }
  TDefaultDelete<UE::IoStore::FOnDemandDebugCommands>::operator()
            ((TDefaultDelete<UE::IoStore::FOnDemandDebugCommands> *)&this->DebugCommands,
             (this->DebugCommands).Ptr);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// operator() @ 1445ac3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445ac699) */

TArray<FAnsiString,TSizedDefaultAllocator<32>_> * __thiscall
`UE::IoStore::FOnDemandIoStore::RegisterHostGroup'::__l2::<lambda_1>::operator()
          (void *this,TArray<FAnsiString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<FString,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  FAnsiString *pFVar6;
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FString *this_00;
  wchar_t *_Str;
  ForAnyElementType FVar9;
  FString *pFVar10;
  uint uVar11;
  undefined1 auStack_178 [32];
  FAnsiString *local_158;
  FScriptContainerElement *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  FAnsiString local_128;
  FString local_118;
  char *local_108;
  FAnsiString local_100;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  this_00 = param_1->DataPtr;
  pFVar10 = this_00 + param_1->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  do {
    if (this_00 == pFVar10) {
      return __return_storage_ptr__;
    }
    local_108 = this;
    bVar2 = ::FString::StartsWith(this_00,L"http",4,IgnoreCase);
    if (!bVar2) {
      ::FString::ConcatCF(&local_118,L"https://",this_00);
      if (this_00 != &local_118) {
        pFVar8 = (this_00->Data).AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (this_00->Data).AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
        (this_00->Data).ArrayNum = local_118.Data.ArrayNum;
        (this_00->Data).ArrayMax = local_118.Data.ArrayMax;
        local_118.Data.ArrayNum = 0;
        local_118.Data.ArrayMax = 0;
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
    if (*(char *)this == '\0') {
      ::FString::ReplaceInline(this_00,L"https",L"http",IgnoreCase);
    }
    ::FString::RemoveFromEnd(this_00,L"/",1,IgnoreCase);
    local_68.Data = (FScriptContainerElement *)0x0;
    if ((this_00->Data).ArrayNum == 0) {
      _Str = L"";
LAB_1445ac4e4:
      sVar4 = wcslen(_Str);
      local_58 = (int)sVar4;
      uVar11 = local_58 + 1;
      FVar9.Data = (FScriptContainerElement *)0x0;
      if (0x80 < uVar11) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar11,1);
        FVar9.Data = local_68.Data;
      }
      local_60 = local_e8;
      if (FVar9.Data != (FScriptContainerElement *)0x0) {
        local_60 = FVar9.Data;
      }
      pcVar5 = FGenericPlatformString::Convert<wchar_t,char>((char *)local_60,uVar11,_Str,uVar11);
      if ((pcVar5 == (char *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                             ,0x25,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TArray<FAnsiString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar7;
      }
    }
    else {
      _Str = (wchar_t *)(this_00->Data).AllocatorInstance.Data;
      if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_1445ac4e4;
      local_60 = (FScriptContainerElement *)0x0;
      local_58 = 0;
    }
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Data.ArrayNum = 0;
    local_128.Data.ArrayMax = 0;
    pFVar6 = FAnsiString::ConstructFromPtrSize(&local_100,(char *)local_60,local_58);
    if (&local_128 != pFVar6) {
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      local_128.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_128.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar8 <= (FScriptContainerElement *)&local_128) &&
       ((FScriptContainerElement *)&local_128 <
        pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      local_140 = (longlong)__return_storage_ptr__->ArrayNum;
      local_138 = 0x10;
      local_158 = &local_128;
      local_150 = pFVar8;
      local_148 = (longlong)__return_storage_ptr__->ArrayMax;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TArray<FAnsiString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar7;
      }
    }
    iVar3 = __return_storage_ptr__->ArrayNum;
    if (iVar3 == __return_storage_ptr__->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar3 + 1;
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
    *(undefined8 *)pFVar8 = 0;
    *(FScriptContainerElement **)pFVar8 = local_128.Data.AllocatorInstance.Data;
    *(int *)(pFVar8 + 8) = local_128.Data.ArrayNum;
    *(int *)(pFVar8 + 0xc) = local_128.Data.ArrayMax;
    local_128.Data.ArrayNum = 0;
    local_128.Data.ArrayMax = 0;
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    this_00 = this_00 + 1;
    this = local_108;
  } while( true );
}

// operator() @ 1445ac960

TArray<FAnsiString,TSizedDefaultAllocator<32>_> * __thiscall
`UE::IoStore::FOnDemandIoStore::SetupHostGroup'::__l2::<lambda_1>::operator()
          (void *this,TArray<FAnsiString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<FAnsiString_const_,int> *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> *pTVar4;
  FAnsiString *pFVar5;
  size_t sVar6;
  FScriptContainerElement *pFVar7;
  FAnsiString *pFVar8;
  FAnsiString local_38;
  
  pFVar5 = param_1->DataPtr;
  pFVar8 = pFVar5 + param_1->ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  while( true ) {
    if (pFVar5 == pFVar8) {
      return __return_storage_ptr__;
    }
    local_38.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    sVar6 = (size_t)local_38.Data.ArrayNum;
    pFVar7 = (pFVar5->Data).AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,pFVar7,sVar6);
    }
    FAnsiString::ToLowerInline(&local_38);
    if ((*(byte *)this & 0x10) != 0) {
      FAnsiString::ReplaceInline(&local_38,"https","http",IgnoreCase);
    }
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 <
         pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) break;
    iVar3 = __return_storage_ptr__->ArrayNum;
    if (iVar3 == __return_storage_ptr__->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    _Src.Data = local_38.Data.AllocatorInstance.Data;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar3 + 1;
    *(undefined8 *)&pFVar7->field_0x0 = 0;
    sVar6 = (size_t)local_38.Data.ArrayNum;
    *(int *)&pFVar7[8].field_0x0 = local_38.Data.ArrayNum;
    if (local_38.Data.ArrayNum == 0) {
      *(int *)(pFVar7 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_38.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_38.Data.ArrayNum,
                 (int *)(pFVar7 + 0xc));
      memcpy(*(void **)&pFVar7->field_0x0,_Src.Data,sVar6);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar5 = pFVar5 + 1;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FAnsiString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// operator() @ 1445ad2e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
`UE::IoStore::FOnDemandIoStore::Initialize'::__l5::<lambda_1>::operator()
          (void *this,EForkProcessRole param_1)

{
  FIoStatus local_28;
  FString local_18;
  
  if (param_1 == Child) {
    UE::IoStore::FOnDemandIoStore::InitializeInstallCache(*(FOnDemandIoStore **)this,&local_28);
    if (local_28.ErrorCode != Ok) {
      if (local_28.ErrorCode == Disabled) {
        if (4 < (byte)LogIoStoreOnDemand._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
          FIoStatus::~FIoStatus(&local_28);
          return;
        }
      }
      else if (1 < (byte)LogIoStoreOnDemand._0_1_) {
        FIoStatus::ToString(&local_28,&local_18);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    FIoStatus::~FIoStatus(&local_28);
  }
  return;
}

// operator() @ 1445af050

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UE::IoStore::FOnDemandIoStore::Unmount'::__l25::<lambda_2>::operator()
          (void *this,TSharedPtr<UE::IoStore::FOnDemandContainer,1> *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  TSharedPtr<UE::IoStore::FOnDemandContainer,1> *local_res8;
  FString local_38;
  wchar_t *local_28;
  undefined8 uStack_20;
  
  puVar1 = *(undefined8 **)((longlong)this + 8);
  if ((param_1->Object == (FOnDemandContainer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  local_28 = (wchar_t *)*puVar1;
  uStack_20 = puVar1[1];
  iVar9 = (param_1->Object->MountId).Data.ArrayNum;
  iVar10 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar10 = 0;
  }
  iVar9 = (int)puVar1[1];
  if (iVar9 == iVar10) {
    if ((iVar9 != 0) && (iVar10 != 0)) {
      iVar7 = iVar10;
      if (iVar9 < iVar10) {
        iVar7 = iVar9;
      }
      iVar7 = FGenericPlatformStricmp::Strnicmp
                        (local_28,(wchar_t *)(param_1->Object->MountId).Data.AllocatorInstance.Data,
                         (longlong)iVar7);
      if (iVar7 != 0) {
        return false;
      }
    }
    if (iVar9 == iVar10) {
      if ((param_1->Object == (FOnDemandContainer *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((param_1->Object->ChunkEntryReferences).ArrayNum != 0) {
        local_res8 = param_1;
        ``UE::IoStore::FOnDemandIoStore::Unmount'::__l25::<lambda_2>::operator()'::__l5::<lambda_1>
        ::operator()(&local_res8);
      }
      if (4 < (byte)LogIoStoreOnDemand._0_1_) {
        if ((param_1->Object == (FOnDemandContainer *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if ((param_1->Object == (FOnDemandContainer *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
      **(undefined1 **)((longlong)this + 0x10) = 1;
      if ((param_1->Object == (FOnDemandContainer *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      ::FString::PrintfImpl(&local_38,L"%.*s-%.*s");
      lVar2 = *(longlong *)this;
      if (*(int *)(lVar2 + 200) != *(int *)(lVar2 + 0xf4)) {
        iVar9 = local_38.Data.ArrayNum + -1;
        FVar4.Data = local_38.Data.AllocatorInstance.Data;
        if (local_38.Data.ArrayNum == 0) {
          iVar9 = 0;
          FVar4.Data = (FScriptContainerElement *)L"";
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar4.Data);
        TSet<TTuple<FString,FIoBuffer>,TDefaultMapHashableKeyFuncs<FString,FIoBuffer,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,FIoBuffer>,TDefaultMapHashableKeyFuncs<FString,FIoBuffer,0>,FDefaultSetAllocator>
                    *)(lVar2 + 0xc0),uVar8,&local_38);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      return true;
    }
  }
  return false;
}

// AddReference @ 1445b2a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoStore::AddReference
          (FOnDemandIoStore *this,TSharedPtr<UE::IoStore::FOnDemandContainer,1> *param_1,int param_2
          ,FOnDemandContentHandle *param_3)

{
  FMutex *this_00;
  uint *puVar1;
  atomic<unsigned_char> aVar2;
  FOnDemandContainer *this_01;
  code *pcVar3;
  FOnDemandChunkEntryReferences *pFVar4;
  ForElementType<unsigned_int> FVar5;
  bool bVar6;
  
  this_00 = &this->ContainerMutex;
  LOCK();
  bVar6 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    FMutex::LockSlow(this_00);
  }
  if ((param_1->Object == (FOnDemandContainer *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_01 = param_1->Object;
  if (((param_3->Handle).Object == (FOnDemandInternalContentHandle *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar4 = FOnDemandContainer::FindOrAddChunkEntryReferences(this_01,(param_3->Handle).Object);
  if (((param_2 < 0) || ((pFVar4->Indices).NumBits <= param_2)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar5 = (pFVar4->Indices).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<unsigned_int>)0x0) {
    FVar5 = (ForElementType<unsigned_int>)&pFVar4->Indices;
  }
  puVar1 = (uint *)((longlong)FVar5 +
                   (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  FOnDemandContentHandle::~FOnDemandContentHandle(param_3);
  return;
}

// CancelInstallRequest @ 1445b6620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoStore::CancelInstallRequest
          (FOnDemandIoStore *this,
          TSharedPtr<UE::IoStore::FOnDemandInternalInstallRequest,1> *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FOnDemandContentInstaller *pFVar5;
  FOnDemandInternalInstallRequest *pFVar6;
  code *pcVar7;
  bool bVar8;
  FTaskBase *this_00;
  TReferenceControllerBase<1> *pTVar9;
  
  if (param_1->Object == (FOnDemandInternalInstallRequest *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstallRequest.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.cpp"
                       ,0x826,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar5 = (this->Installer).Ptr;
  pFVar6 = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
    pTVar9 = pTVar4;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::IoStore::FOnDemandContentInstaller::CancelInstallRequest'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (this_00,L"CancelIoStoreOnDemandInstallRequest",Default,None,None);
    this_00[1]._padding_ = (longlong)pFVar5;
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::IoStore::FOnDemandContentInstaller::CancelInstallRequest'::`2'::<lambda_1>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)pFVar6;
    this_00[1]._padding_ = (longlong)pTVar4;
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
  }
  LOCK();
  paVar1 = &(pFVar5->InstallerPipe).TaskCount;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = &pFVar5->InstallerPipe;
  Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  LOCK();
  paVar2 = &this_00->RefCount;
  aVar3 = *paVar2;
  *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
  UNLOCK();
  if (aVar3 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_00->_padding_)(this_00,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// CompleteMountRequest @ 1445ba850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoStore::CompleteMountRequest
          (FOnDemandIoStore *this,FMountRequest *param_1,FOnDemandMountResult *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong lVar3;
  EOnDemandMountOptions EVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  FTSTicker *this_00;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStackY_178 [32];
  FScriptContainerElement *local_140;
  int local_138;
  int local_134;
  FIoStatus local_130;
  double local_120;
  TWeakPtr<FTSTicker::FElement,1> local_118;
  code *local_108 [2];
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong *local_e0;
  code *local_d8;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong *local_b0;
  FScriptContainerElement *local_a8;
  undefined8 local_a0;
  FIoStatus local_98;
  double local_88;
  code *local_78;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong *local_50;
  FScriptContainerElement *local_48;
  undefined8 local_40;
  FIoStatus local_38;
  double local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_108[0] = *(code **)&param_1->OnCompleted;
  if (local_108[0] != (code *)0x0) {
    EVar4 = (param_1->Args).Options;
    local_e0 = *(longlong **)&(param_1->OnCompleted).field_0x28;
    *(undefined8 *)&(param_1->OnCompleted).field_0x28 = 0;
    lVar5 = *(longlong *)&(param_1->OnCompleted).field_0x10;
    lVar6 = *(longlong *)&(param_1->OnCompleted).field_0x18;
    lVar3 = *(longlong *)&(param_1->OnCompleted).field_0x20;
    *(undefined8 *)&param_1->OnCompleted = 0;
    if ((EVar4 & CallbackOnGameThread) == 0) {
      local_140 = (param_2->MountId).Data.AllocatorInstance.Data;
      (param_2->MountId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138 = (param_2->MountId).Data.ArrayNum;
      local_134 = (param_2->MountId).Data.ArrayMax;
      (param_2->MountId).Data.ArrayNum = 0;
      (param_2->MountId).Data.ArrayMax = 0;
      local_130.ErrorMessage.Chars = (param_2->Status).ErrorMessage.Chars;
      if (local_130.ErrorMessage.Chars != (wchar_t *)0x0) {
        LOCK();
        *(int *)(local_130.ErrorMessage.Chars + -4) =
             *(int *)(local_130.ErrorMessage.Chars + -4) + 1;
        UNLOCK();
      }
      local_130.ErrorCode = (param_2->Status).ErrorCode;
      local_120 = param_2->DurationInSeconds;
      local_130.SystemErrorCode = (param_2->Status).SystemErrorCode;
      local_f8 = lVar5;
      lStack_f0 = lVar6;
      local_e8 = lVar3;
      Core::Private::Function::CheckCallable(local_108[0]);
      pcVar7 = local_108[0];
      plVar10 = &local_f8;
      if (local_e0 != (longlong *)0x0) {
        plVar10 = local_e0;
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      (*pcVar7)(uVar8,&local_140);
      FIoStatus::~FIoStatus(&local_130);
      if (local_140 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140);
      }
      if (local_108[0] == (code *)0x0) {
        return;
      }
      plVar10 = &local_f8;
      plVar9 = local_e0;
    }
    else {
      local_48 = (param_2->MountId).Data.AllocatorInstance.Data;
      (param_2->MountId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_40._0_4_ = (param_2->MountId).Data.ArrayNum;
      local_40._4_4_ = (param_2->MountId).Data.ArrayMax;
      (param_2->MountId).Data.ArrayNum = 0;
      (param_2->MountId).Data.ArrayMax = 0;
      local_38.ErrorMessage.Chars = (param_2->Status).ErrorMessage.Chars;
      if (local_38.ErrorMessage.Chars != (wchar_t *)0x0) {
        LOCK();
        *(int *)(local_38.ErrorMessage.Chars + -4) = *(int *)(local_38.ErrorMessage.Chars + -4) + 1;
        UNLOCK();
      }
      local_38.ErrorCode = (param_2->Status).ErrorCode;
      local_28 = param_2->DurationInSeconds;
      local_38.SystemErrorCode = (param_2->Status).SystemErrorCode;
      local_78 = local_108[0];
      local_68 = lVar5;
      lStack_60 = lVar6;
      local_58 = lVar3;
      local_50 = local_e0;
      this_00 = FTSTicker::GetCoreTicker();
      local_d8 = local_78;
      local_b0 = local_50;
      local_50 = (longlong *)0x0;
      local_c8 = local_68;
      lStack_c0 = lStack_60;
      local_b8 = local_58;
      if (local_78 != (code *)0x0) {
        local_78 = (code *)0x0;
      }
      local_a8 = local_48;
      local_a0._0_4_ = (int)local_40;
      local_a0._4_4_ = local_40._4_4_;
      local_48 = (void *)0x0;
      local_40 = 0;
      local_98.ErrorMessage.Chars = local_38.ErrorMessage.Chars;
      if (local_38.ErrorMessage.Chars != (wchar_t *)0x0) {
        LOCK();
        *(int *)(local_38.ErrorMessage.Chars + -4) = *(int *)(local_38.ErrorMessage.Chars + -4) + 1;
        UNLOCK();
      }
      local_98.ErrorCode = local_38.ErrorCode;
      local_98.SystemErrorCode = local_38.SystemErrorCode;
      local_88 = local_28;
      local_108[0] = (code *)0x0;
      local_e0 = FMemory::Malloc(0x70,0x10);
      *local_e0 = (longlong)
                  &Core::Private::Function::
                   TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandIoStore::CompleteMountRequest'::`8'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                   ::_vftable_;
      plVar10 = local_e0 + 2;
      *plVar10 = (longlong)local_d8;
      local_e0[7] = (longlong)local_b0;
      local_b0 = (longlong *)0x0;
      local_e0[4] = local_c8;
      local_e0[5] = lStack_c0;
      local_e0[6] = local_b8;
      if (*plVar10 != 0) {
        local_d8 = (code *)0x0;
      }
      local_e0[8] = 0;
      local_e0[8] = (longlong)local_a8;
      local_a8 = (void *)0x0;
      *(int *)(local_e0 + 9) = (int)local_a0;
      *(int *)((longlong)local_e0 + 0x4c) = local_a0._4_4_;
      local_a0 = 0;
      local_e0[10] = (longlong)local_98.ErrorMessage.Chars;
      if (local_98.ErrorMessage.Chars != (wchar_t *)0x0) {
        LOCK();
        *(int *)(local_98.ErrorMessage.Chars + -4) = *(int *)(local_98.ErrorMessage.Chars + -4) + 1;
        UNLOCK();
      }
      *(EIoErrorCode *)(local_e0 + 0xb) = local_98.ErrorCode;
      *(uint *)((longlong)local_e0 + 0x5c) = local_98.SystemErrorCode;
      local_e0[0xc] = (longlong)local_88;
      if (plVar10 != (longlong *)0x0) {
        local_108[0] = Core::Private::Function::
                       TFunctionRefCaller<`ExecuteOnGameThread<`UE::IoStore::FOnDemandIoStore::CompleteMountRequest'::__l8::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                       ::Call;
      }
      FTSTicker::AddTicker
                (this_00,&local_118,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.cpp(1479)"
                 ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_108);
      if (local_118.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_118.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_118.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_118.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_108[0] != (code *)0x0) {
        plVar10 = &local_f8;
        if (local_e0 != (longlong *)0x0) {
          plVar10 = local_e0;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      FIoStatus::~FIoStatus(&local_98);
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      if (local_d8 != (code *)0x0) {
        plVar10 = &local_c8;
        if (local_b0 != (longlong *)0x0) {
          plVar10 = local_b0;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      FIoStatus::~FIoStatus(&local_38);
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      if (local_78 == (code *)0x0) {
        return;
      }
      plVar10 = &local_68;
      plVar9 = local_50;
    }
    if (plVar9 != (longlong *)0x0) {
      plVar10 = plVar9;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// CreateContainersFromToc @ 1445bee00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::IoStore::FOnDemandIoStore::CreateContainersFromToc
          (TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2,FOnDemandToc *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4,
          TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> *param_5
          )

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong lVar11;
  TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  bool bVar13;
  atomic<int> aVar14;
  FName *pFVar15;
  TEventRef<unsigned_int> TVar16;
  ulonglong uVar17;
  TReferenceControllerBase<1> *pTVar18;
  FIoRelativeUrl FVar19;
  void *pvVar20;
  ulonglong uVar21;
  FWriteBuffer *pFVar22;
  FScriptContainerElement *pFVar23;
  int *piVar24;
  TReferenceControllerBase<1> *pTVar25;
  FName FVar26;
  TReferenceControllerBase<1> *pTVar27;
  void *pvVar28;
  undefined8 *puVar29;
  int *piVar30;
  FString *pFVar31;
  uint uVar32;
  FScriptContainerElement *pFVar33;
  ulong64 _Size;
  FString *this;
  FString *pFVar34;
  FIdentityFunctor FVar35;
  int iVar36;
  int iVar37;
  ENullTerminatedString EVar38;
  uint uVar39;
  void *pvVar40;
  FScriptContainerElement *pFVar41;
  uint uVar42;
  bool bVar43;
  undefined1 auStackY_498 [32];
  FIdentityFunctor local_448 [8];
  TReferenceControllerBase<1> *local_440;
  TReferenceControllerBase<1> *pTStack_438;
  char local_430;
  undefined1 local_42f;
  undefined1 local_42e;
  undefined1 local_42d [5];
  int local_428;
  uint local_420;
  FOnDemandToc *local_418;
  FLLMScope local_410;
  FLLMScope local_40c;
  FLLMScope local_408;
  FLLMScope local_404;
  FLLMScope local_400 [2];
  FName local_3f8;
  uint local_3f0;
  uint local_3ec;
  FScriptContainerElement *local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  FName local_3c8;
  longlong local_3b8;
  longlong local_3b0;
  TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> *local_3a8;
  FName local_3a0;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_398;
  TStringView<wchar_t> *local_390;
  undefined1 local_388 [16];
  FMemScope local_378 [2];
  FName local_368;
  int iStack_360;
  undefined4 uStack_35c;
  FName local_358;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 local_330;
  uint uStack_32c;
  FName local_328;
  undefined8 uStack_320;
  longlong local_318;
  ENullTerminatedString EStack_310;
  undefined4 uStack_30c;
  longlong local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  longlong local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  FName local_2e8;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  undefined1 local_2b8 [16];
  longlong local_2a8;
  undefined8 uStack_2a0;
  wchar_t *local_298;
  undefined8 uStack_290;
  wchar_t *local_288;
  undefined8 uStack_280;
  wchar_t *local_278;
  undefined8 uStack_270;
  wchar_t *local_268;
  undefined8 uStack_260;
  wchar_t *local_258;
  undefined8 uStack_250;
  undefined4 *local_248;
  longlong local_240;
  TLogScope<0> local_238;
  TStringBuilderBase<wchar_t> local_228;
  wchar_t local_208 [128];
  TStringConversion<TStringConvert<wchar_t,char>,128> local_108;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_498;
  uVar21 = (ulonglong)_tls_index;
  local_3a8 = param_5;
  piVar24 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8) + 0x9d4c);
  local_418 = param_3;
  local_398 = param_4;
  local_390 = param_1;
  if ((*piVar24 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&AssetClassName,L"OnDemandIoStore");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar24 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&LLMScope_Name1586,L"FileSystem/OnDemandIoStore");
    _Init_thread_footer(&::_TSS1);
  }
  FLLMScope::FLLMScope(local_400,LLMScope_Name1586,false,None,Default,true);
  FMemScope::FMemScope(local_378,&LLMScope_Name1586,true);
  local_298 = param_1->DataPtr;
  uStack_290 = *(undefined8 *)&param_1->Size;
  pFVar15 = ::FName::FName(&local_2c0,(int)*(undefined8 *)&param_1->Size,local_298,FNAME_Add);
  FLLMScope::FLLMScope(&local_404,*pFVar15,false,Assets,Default,true);
  FLLMScope::FLLMScope(&local_408,AssetClassName,false,AssetClasses,Default,true);
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_3e0 = 0;
    TVar16 = (TEventRef<unsigned_int>)&local_3e0;
  }
  else {
    local_288 = param_1->DataPtr;
    uStack_280 = *(undefined8 *)&param_1->Size;
    pFVar15 = ::FName::FName((FName *)(local_2b8 + 8),(int)*(undefined8 *)&param_1->Size,local_288,
                             FNAME_Add);
    local_358 = *pFVar15;
    TVar16 = FStringTrace::GetNameRef(&local_2e8);
  }
  uVar3 = *(undefined8 *)TVar16;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_3d8 = 0;
    TVar16 = (TEventRef<unsigned_int>)&local_3d8;
  }
  else {
    TVar16 = FStringTrace::GetNameRef(&local_2e0);
  }
  uVar4 = *(undefined8 *)TVar16;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_3d0 = 0;
    TVar16 = (TEventRef<unsigned_int>)&local_3d0;
  }
  else {
    local_278 = param_2->DataPtr;
    uStack_270 = *(undefined8 *)&param_2->Size;
    pFVar15 = ::FName::FName(&local_2d8,(int)*(undefined8 *)&param_2->Size,local_278,FNAME_Add);
    local_3a0 = *pFVar15;
    TVar16 = FStringTrace::GetNameRef(&local_2d0);
  }
  uVar5 = *(undefined8 *)TVar16;
  local_430 = '\0';
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_248);
    local_430 = '\x01';
    *local_248 = (int)uVar3;
    local_248[1] = (int)uVar4;
    local_248[2] = (int)uVar5;
    *(undefined8 *)(local_240 + 0x28) = *(undefined8 *)(local_240 + 0x20);
  }
  iVar37 = (param_3->Header).CompressionFormat.Data.ArrayNum;
  iVar36 = iVar37 + -1;
  if (iVar37 == 0) {
    iVar36 = 0;
  }
  pFVar15 = ::FName::FName(&local_2c8,iVar36,
                           (wchar_t *)
                           (param_3->Header).CompressionFormat.Data.AllocatorInstance.Data,FNAME_Add
                          );
  local_3f8 = *pFVar15;
  local_228.Base = local_208;
  local_228.CurPos = local_208;
  local_228.End = (wchar_t *)&local_108;
  local_228.bIsDynamic = false;
  local_228.bIsExternal = false;
  if (param_2->Size == 0) {
    iVar37 = (param_3->Header).ChunksDirectory.Data.ArrayNum;
    iVar36 = iVar37 + -1;
    if (iVar37 == 0) {
      iVar36 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_228,(wchar_t *)(param_3->Header).ChunksDirectory.Data.AllocatorInstance.Data,
               iVar36);
  }
  else {
    local_268 = param_2->DataPtr;
    uStack_260 = *(undefined8 *)&param_2->Size;
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_228,local_268,(int)*(undefined8 *)&param_2->Size);
  }
  if ((((int)((longlong)local_228.CurPos - (longlong)local_228.Base >> 1) != 0) &&
      (local_228.CurPos[-1] != L'/')) && (local_228.CurPos[-1] != L'\\')) {
    if (local_228.End <
        (TStringConversion<TStringConvert<wchar_t,char>,128> *)(local_228.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_228,1);
    }
    *local_228.CurPos = L'/';
    local_228.CurPos = local_228.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_228,L"chunks",6);
  pTVar10 = _UNK_150651568;
  pTVar9 = ___xmm_00000000000000000000000000000010;
  local_368 = (FName)local_228.Base;
  iStack_360 = (int)((longlong)local_228.CurPos - (longlong)local_228.Base >> 1);
  uStack_320 = CONCAT44(uStack_35c,iStack_360);
  local_328 = (FName)local_228.Base;
  local_3c8 = (FName)local_228.Base;
  local_428 = iStack_360;
  if ((0 < iStack_360) && (*local_228.Base == L'/')) {
    local_3c8 = (FName)((longlong)local_228.Base + 2);
    local_428 = iStack_360 + -1;
  }
  if ((0 < local_428) && (((wchar_t *)((longlong)local_3c8 + -2))[local_428] == L'/')) {
    local_428 = local_428 + -1;
  }
  local_3ec = (param_3->Containers).ArrayNum;
  uVar17 = (ulonglong)(int)local_3ec;
  pFVar23 = (param_3->Containers).AllocatorInstance.Data;
  uVar39 = (param_3->Header).Flags;
  local_388._8_8_ = pFVar23 + uVar17 * 0x80;
  FVar35 = local_448[0];
  local_3f0 = uVar39;
  do {
    uVar3 = local_388._8_8_;
    local_3e8 = pFVar23;
    if ((param_3->Containers).ArrayNum != (int)uVar17) {
      local_42f = 0;
      `TCheckedPointerIterator<UE::IoStore::FOnDemandTocContainerEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_42f);
    }
    if (pFVar23 == (FScriptContainerElement *)uVar3) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_228);
      if (local_430 != '\0') {
        lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8);
        if (*(char *)(lVar6 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar22 = *(FWriteBuffer **)(lVar6 + 0x20);
        if ((int)pFVar22 - *(int *)&pFVar22->Cursor < 1) {
          pFVar22 = UE::Trace::Private::Writer_NextBuffer();
        }
        *pFVar22->Cursor = '\n';
        pFVar22->Cursor = pFVar22->Cursor + 1;
        pFVar22->Committed = pFVar22->Cursor;
      }
      FLLMScope::~FLLMScope(&local_408);
      FLLMScope::~FLLMScope(&local_404);
      FMemScope::~FMemScope(local_378);
      FLLMScope::~FLLMScope(local_400);
      return;
    }
    pFVar41 = (local_398->AllocatorInstance).Data;
    pFVar33 = pFVar41 + (longlong)local_398->ArrayNum * 0x10;
    for (; pFVar41 != pFVar33; pFVar41 = pFVar41 + 0x10) {
      iVar36 = *(int *)(pFVar41 + 8);
      if (iVar36 == *(int *)(pFVar23 + 0x10)) {
        if (iVar36 < 2) goto LAB_1445c01ba;
        iVar36 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)pFVar41,*(wchar_t **)(pFVar23 + 8));
        bVar43 = iVar36 == 0;
      }
      else {
        bVar43 = iVar36 + *(int *)(pFVar23 + 0x10) == 1;
      }
      if (bVar43) goto LAB_1445c01ba;
    }
    pTVar18 = ::operator_new(0x128);
    if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
      pTVar18 = (TReferenceControllerBase<1> *)0x0;
      local_440 = pTVar9;
      pTStack_438 = pTVar10;
    }
    else {
      pTVar18->SharedReferenceCount = (atomic<int>)0x1;
      pTVar18->WeakReferenceCount = (atomic<int>)0x1;
      pTVar18->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOnDemandContainer_IoStore_UE___00_SharedPointerInternals__6B_
      ;
      memset(pTVar18 + 4,0,0xe8);
      pTVar18[1]._padding_ = 0;
      pTVar18[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[2]._padding_ = 0;
      pTVar18[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[3]._padding_ = 0;
      pTVar18[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[3].WeakReferenceCount = (atomic<int>)0x0;
      FIASHostGroup::FIASHostGroup((FIASHostGroup *)(pTVar18 + 4));
      pTVar18[5]._padding_ = 0;
      pTVar18[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[6]._padding_ = 0;
      pTVar18[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[7]._padding_ = 0;
      pTVar18[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[8]._padding_ = 0;
      pTVar18[8].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[8].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[9]._padding_ = 0;
      pTVar18[9].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[9].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[10]._padding_ = 0;
      pTVar18[10].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[10].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[0xb]._padding_ = 0;
      pTVar18[0xb].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[0xb].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[0xc]._padding_ = 0;
      pTVar18[0xc].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[0xc].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[0xd]._padding_ = 0;
      pTVar18[0xd].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[0xd].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar18[0xe]._padding_ = 0;
      pTVar18[0xe].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[0xe].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar18[0xf]._padding_ = 0;
      pTVar18[0xf].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[0xf].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[0x10]._padding_ = 0;
      pTVar18[0x10].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[0x10].WeakReferenceCount = (atomic<int>)0x0;
      pTVar18[0x11]._padding_ = -1;
      pTVar18[0x11].SharedReferenceCount = (atomic<int>)0x0;
      *(FName *)&pTVar18[0x11].WeakReferenceCount = FOnDemandHostGroup::DefaultName;
      *(undefined1 *)((longlong)&pTVar18[0x12]._padding_ + 4) = 0;
      if ((pTVar18 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar43)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
      param_3 = local_418;
      local_440 = pTVar18 + 1;
      pTStack_438 = pTVar18;
    }
    pvVar40 = (void *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar27 = local_440;
    pTVar18 = (TReferenceControllerBase<1> *)(pFVar23 + 8);
    pTVar25 = local_440 + 5;
    if (pTVar25 != pTVar18) {
      if ((void *)pTVar25->_padding_ != (void *)0x0) {
        FMemory::Free((void *)pTVar25->_padding_);
      }
      pTVar25->_padding_ = pTVar18->_padding_;
      pTVar18->_padding_ = 0;
      pTVar27[5].SharedReferenceCount = *(atomic<int> *)(pFVar23 + 0x10);
      pTVar27[5].WeakReferenceCount = *(atomic<int> *)(pFVar23 + 0x14);
      *(longlong *)(pFVar23 + 0x10) = 0;
    }
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_258 = local_390->DataPtr;
    uStack_250 = *(undefined8 *)&local_390->Size;
    ::FString::AssignRange
              ((FString *)(local_440 + 6),local_390->DataPtr,(int)*(undefined8 *)&local_390->Size);
    local_108._padding_ = 0;
    if (local_3c8 == (FName)0x0) {
      local_108.Ptr = (char *)0x0;
      local_108.StringLength = 0;
    }
    else {
      iVar36 = local_428;
      EVar38 = No;
      if ((0 < local_428) &&
         (EVar38 = No, ((wchar_t *)((longlong)local_3c8 + -2))[local_428] == L'\0')) {
        EVar38 = Yes;
        iVar36 = local_428 + -1;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::Init
                (&local_108,(wchar_t *)local_3c8,iVar36,EVar38);
    }
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FAnsiString::AssignRange((FAnsiString *)(local_440 + 7),local_108.Ptr,local_108.StringLength);
    if ((void *)local_108._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_108._padding_);
    }
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar27 = local_440;
    pTVar18 = (TReferenceControllerBase<1> *)(pFVar23 + 0x18);
    pTVar25 = local_440 + 4;
    if (pTVar25 != pTVar18) {
      if ((void *)pTVar25->_padding_ != (void *)0x0) {
        FMemory::Free((void *)pTVar25->_padding_);
      }
      pTVar25->_padding_ = pTVar18->_padding_;
      pTVar18->_padding_ = 0;
      pTVar27[4].SharedReferenceCount = *(atomic<int> *)(pFVar23 + 0x20);
      pTVar27[4].WeakReferenceCount = *(atomic<int> *)(pFVar23 + 0x24);
      *(longlong *)(pFVar23 + 0x20) = 0;
    }
    aVar14 = (atomic<int>)(param_3->Header).BlockSize;
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_440[0x10].SharedReferenceCount = aVar14;
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar27 = local_440;
    pTVar18 = (TReferenceControllerBase<1> *)(pFVar23 + 0x38);
    pTVar25 = local_440 + 9;
    if (pTVar25 != pTVar18) {
      if ((void *)pTVar25->_padding_ != (void *)0x0) {
        FMemory::Free((void *)pTVar25->_padding_);
      }
      pTVar25->_padding_ = pTVar18->_padding_;
      pTVar18->_padding_ = 0;
      pTVar27[9].SharedReferenceCount = *(atomic<int> *)(pFVar23 + 0x40);
      pTVar27[9].WeakReferenceCount = *(atomic<int> *)(pFVar23 + 0x44);
      *(longlong *)(pFVar23 + 0x40) = 0;
    }
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar27 = local_440;
    pTVar18 = (TReferenceControllerBase<1> *)(pFVar23 + 0x48);
    pTVar25 = local_440 + 10;
    if (pTVar25 != pTVar18) {
      if ((void *)pTVar25->_padding_ != (void *)0x0) {
        FMemory::Free((void *)pTVar25->_padding_);
      }
      pTVar25->_padding_ = pTVar18->_padding_;
      pTVar18->_padding_ = 0;
      pTVar27[10].SharedReferenceCount = *(atomic<int> *)(pFVar23 + 0x50);
      pTVar27[10].WeakReferenceCount = *(atomic<int> *)(pFVar23 + 0x54);
      *(longlong *)(pFVar23 + 0x50) = 0;
    }
    lVar6 = *(longlong *)pFVar23;
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_440[0x10]._padding_ = lVar6;
    iVar36 = (param_3->Header).HostGroupName.Data.ArrayNum;
    FVar26 = FOnDemandHostGroup::DefaultName;
    if (1 < iVar36) {
      pFVar15 = ::FName::FName(&local_368,iVar36 + -1,
                               (wchar_t *)
                               (param_3->Header).HostGroupName.Data.AllocatorInstance.Data,FNAME_Add
                              );
      FVar26 = *pFVar15;
    }
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    *(FName *)&local_440[0x10].WeakReferenceCount = FVar26;
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_318 = local_440[7]._padding_;
    EStack_310 = (int)local_440[7].SharedReferenceCount - Yes;
    if (local_440[7].SharedReferenceCount == (atomic<int>)0x0) {
      EStack_310 = No;
    }
    uStack_2a0 = CONCAT44(uStack_30c,EStack_310);
    local_2a8 = local_318;
    FVar19 = FIoRelativeUrl::From((TStringView<char> *)local_388);
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar18 = local_440;
    if ((TSharedString<char>)&local_440[0xf].SharedReferenceCount != FVar19.Url.Chars) {
      lVar6 = *(longlong *)&local_440[0xf].SharedReferenceCount;
      if (lVar6 != 0) {
        piVar24 = (int *)(lVar6 + -8);
        LOCK();
        iVar36 = *piVar24;
        *piVar24 = *piVar24 + -1;
        UNLOCK();
        if (iVar36 == 1) {
          FMemory::Free(piVar24);
        }
      }
      uVar3 = *(undefined8 *)FVar19.Url.Chars;
      pTVar18[0xf].SharedReferenceCount = (atomic<int>)(int)uVar3;
      pTVar18[0xf].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar3 >> 0x20);
      *(undefined8 *)FVar19.Url.Chars = 0;
    }
    if ((char *)local_388._0_8_ != (char *)0x0) {
      piVar24 = (int *)(local_388._0_8_ + -8);
      LOCK();
      iVar36 = *piVar24;
      *piVar24 = *piVar24 + -1;
      UNLOCK();
      if (iVar36 == 1) {
        FMemory::Free(piVar24);
      }
    }
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((int)local_440[8].WeakReferenceCount < 1) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,1,(ForAnyElementType *)(local_440 + 8),(int)local_440[8].SharedReferenceCount,
                 (int *)&local_440[8].WeakReferenceCount);
    }
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar18 = local_440;
    pTVar27 = local_440 + 8;
    if ((((FName *)pTVar27->_padding_ <= &local_3f8) &&
        (&local_3f8 < (FName *)pTVar27->_padding_ + (int)local_440[8].WeakReferenceCount)) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    aVar14 = pTVar18[8].SharedReferenceCount;
    if (aVar14 == pTVar18[8].WeakReferenceCount) {
      aVar14 = (atomic<int>)
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,(ForAnyElementType *)pTVar27,(int *)&pTVar18[8].WeakReferenceCount);
    }
    pTVar18[8].SharedReferenceCount = (atomic<int>)((int)aVar14 + 1);
    *(FName *)((FScriptContainerElement *)pTVar27->_padding_ + (longlong)(int)aVar14 * 8) =
         local_3f8;
    if (((byte)pFVar23[0x7c] & 2) != 0) {
      if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar43)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pbVar1 = (byte *)((longlong)&local_440[0x11]._padding_ + 4);
      *pbVar1 = *pbVar1 | 0x10;
    }
    if ((uVar39 & 1) == 0) {
      if ((uVar39 & 2) != 0) {
        if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar43)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pbVar1 = (byte *)((longlong)&local_440[0x11]._padding_ + 4);
        *pbVar1 = *pbVar1 | 4;
      }
    }
    else {
      if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar43)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pbVar1 = (byte *)((longlong)&local_440[0x11]._padding_ + 4);
      *pbVar1 = *pbVar1 | 8;
    }
    AlgoImpl::
    IntroSortInternal<UE::IoStore::FOnDemandTocEntry,int,FIdentityFunctor,TDereferenceWrapper<UE::IoStore::FOnDemandTocEntry,_UE::IoStore::FOnDemandIoStore::CreateContainersFromToc_::__l24::<lambda_1>_>_>
              (*(FOnDemandTocEntry **)(pFVar23 + 0x28),*(int *)(pFVar23 + 0x30),FVar35,
               (<lambda_1> *)local_42d);
    iVar36 = *(int *)(pFVar23 + 0x30);
    _Size = (longlong)iVar36 * 0x44;
    local_420 = iVar36;
    pvVar20 = operator_new__(_Size);
    pvVar28 = pvVar40;
    if (pvVar20 != (void *)0x0) {
      memset(pvVar20,0,_Size);
      pvVar28 = pvVar20;
    }
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar18 = local_440 + 0xc;
    if (pTVar18 != (TReferenceControllerBase<1> *)local_2b8) {
      pvVar20 = (void *)pTVar18->_padding_;
      pTVar18->_padding_ = (longlong)pvVar28;
      operator_delete__(pvVar20);
      pvVar28 = pvVar40;
    }
    operator_delete__(pvVar28);
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_308 = local_440[0xc]._padding_;
    iStack_300 = iVar36;
    if ((iVar36 < 0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_440[0xc].SharedReferenceCount = (atomic<int>)(undefined4)local_308;
    local_440[0xc].WeakReferenceCount = (atomic<int>)local_308._4_4_;
    local_440[0xd]._padding_ = CONCAT44(uStack_2fc,iStack_300);
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_2f8 = *(longlong *)&local_440[0xc].SharedReferenceCount + (longlong)iVar36 * 0xc;
    iStack_2f0 = iVar36;
    if ((iVar36 < 0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar43)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_440[0xd].SharedReferenceCount = (atomic<int>)(undefined4)local_2f8;
    local_440[0xd].WeakReferenceCount = (atomic<int>)local_2f8._4_4_;
    local_440[0xe]._padding_ = CONCAT44(uStack_2ec,iStack_2f0);
    if (0 < iVar36) {
      local_3b0 = 0;
      local_3b8 = 0;
      pvVar28 = pvVar40;
      do {
        uVar42 = (uint)pvVar28;
        uVar32 = ~uVar42 >> 0x1f;
        uVar39 = 0;
        if ((int)uVar42 < *(int *)(pFVar23 + 0x30)) {
          uVar39 = uVar32;
        }
        if ((uVar39 == 0) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar43)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        puVar29 = (undefined8 *)(*(longlong *)(pFVar23 + 0x28) + (longlong)pvVar40);
        uVar3 = *(undefined8 *)((longlong)puVar29 + 0x14);
        uVar2 = *(undefined4 *)((longlong)puVar29 + 0x1c);
        if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar43)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar18 = local_440;
        uVar39 = 0;
        if ((int)uVar42 < (int)local_440[0xd]._padding_) {
          uVar39 = uVar32;
        }
        if ((uVar39 == 0) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar43)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar11 = local_3b8;
        lVar6 = *(longlong *)&pTVar18[0xc].SharedReferenceCount;
        uStack_32c = uStack_32c & 0xffffff00;
        *(undefined8 *)(lVar6 + local_3b8) = uVar3;
        *(undefined4 *)(lVar6 + 8 + local_3b8) = uVar2;
        local_340 = *(undefined4 *)(puVar29 + 2);
        uVar3 = *puVar29;
        uVar4 = puVar29[1];
        uStack_33c = *(undefined4 *)(puVar29 + 4);
        uStack_338 = *(undefined4 *)(puVar29 + 5);
        uStack_334 = *(undefined4 *)(puVar29 + 6);
        local_330 = *(undefined4 *)((longlong)puVar29 + 0x34);
        if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar43)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar18 = local_440;
        uVar39 = 0;
        if ((int)uVar42 < (int)local_440[0xe]._padding_) {
          uVar39 = uVar32;
        }
        if ((uVar39 == 0) &&
           (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar43)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_3b8 = lVar11 + 0xc;
        lVar6 = *(longlong *)&pTVar18[0xd].SharedReferenceCount;
        pvVar28 = (void *)(ulonglong)(uVar42 + 1);
        pvVar40 = (void *)((longlong)pvVar40 + 0x38);
        *(undefined8 *)(local_3b0 + lVar6) = uVar3;
        ((undefined8 *)(local_3b0 + lVar6))[1] = uVar4;
        puVar29 = (undefined8 *)(local_3b0 + 0x10 + lVar6);
        *puVar29 = CONCAT44(uStack_33c,local_340);
        puVar29[1] = CONCAT44(uStack_334,uStack_338);
        *(ulonglong *)(local_3b0 + 0x20 + lVar6) = CONCAT44(uStack_32c,local_330);
        local_3b0 = local_3b0 + 0x28;
        pFVar23 = local_3e8;
      } while ((int)(uVar42 + 1) < (int)local_420);
    }
    local_420 = (local_418->TagSets).ArrayNum;
    uVar21 = (ulonglong)(int)local_420;
    pFVar41 = (local_418->TagSets).AllocatorInstance.Data;
    iVar36 = local_3a8->ArrayNum;
    pFVar33 = pFVar41 + uVar21 * 0x20;
    pFVar23 = pFVar41 + 0x18;
    while( true ) {
      param_3 = local_418;
      if ((local_418->TagSets).ArrayNum != (int)uVar21) {
        local_42e = 0;
        `TCheckedPointerIterator<UE::IoStore::FOnDemandTocTagSet,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_42e);
      }
      if (pFVar41 == pFVar33) break;
      iVar37 = *(int *)pFVar23;
      piVar30 = *(int **)(pFVar23 + -8);
      piVar24 = piVar30 + (longlong)iVar37 * 6;
      while( true ) {
        if (*(int *)pFVar23 != iVar37) {
          local_448[0] = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<UE::IoStore::FOnDemandTocTagSetPackageList,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_448);
        }
        if (piVar30 == piVar24) goto LAB_1445c001b;
        if (*piVar30 == iVar36) break;
        piVar30 = piVar30 + 6;
      }
      if ((local_440 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar43)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar18 = local_440;
      aVar14 = local_440[0xb].SharedReferenceCount;
      if (aVar14 == local_440[0xb].WeakReferenceCount) {
        aVar14 = (atomic<int>)
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,(ForAnyElementType *)(local_440 + 0xb),
                            (int *)&local_440[0xb].WeakReferenceCount);
      }
      pTVar18[0xb].SharedReferenceCount = (atomic<int>)((int)aVar14 + 1);
      this = (FString *)(pTVar18[0xb]._padding_ + (longlong)(int)aVar14 * 0x20);
      DefaultConstructItems<UE::IoStore::FOnDemandTagSet,int>(this,1);
      iVar37 = *(int *)(pFVar23 + -0x10) + -1;
      if (*(int *)(pFVar23 + -0x10) == 0) {
        iVar37 = 0;
      }
      ::FString::AssignRange(this,*(wchar_t **)pFVar41,iVar37);
      pFVar31 = (FString *)(piVar30 + 2);
      pFVar34 = this + 1;
      if (pFVar34 != pFVar31) {
        pFVar7 = (pFVar34->Data).AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        (pFVar34->Data).AllocatorInstance.Data = (pFVar31->Data).AllocatorInstance.Data;
        (pFVar31->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        this[1].Data.ArrayNum = piVar30[4];
        this[1].Data.ArrayMax = piVar30[5];
        piVar30[4] = 0;
        piVar30[5] = 0;
      }
LAB_1445c001b:
      uVar21 = (ulonglong)local_420;
      pFVar41 = pFVar41 + 0x20;
      pFVar23 = pFVar23 + 0x20;
    }
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_40c,Assets,Default);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_410,AssetClasses,Default);
    FVar35 = local_448[0];
    bVar43 = -1 < MetadataChannel->Enabled;
    if (bVar43) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_238);
      *(undefined8 *)(local_238._8_8_ + 0x28) = *(undefined8 *)(local_238._8_8_ + 0x20);
    }
    pTVar12 = local_3a8;
    pFVar23 = (local_3a8->AllocatorInstance).Data;
    if (((pFVar23 <= (FScriptContainerElement *)&local_440) &&
        ((FScriptContainerElement *)&local_440 < pFVar23 + (longlong)local_3a8->ArrayMax * 0x10)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar36 = pTVar12->ArrayNum;
    if (iVar36 == pTVar12->ArrayMax) {
      iVar36 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
    }
    uVar21 = (ulonglong)_tls_index;
    pFVar23 = (pTVar12->AllocatorInstance).Data + (longlong)iVar36 * 0x10;
    pTVar12->ArrayNum = iVar36 + 1;
    *(TReferenceControllerBase<1> **)pFVar23 = local_440;
    *(TReferenceControllerBase<1> **)(pFVar23 + 8) = pTStack_438;
    pTStack_438 = (TReferenceControllerBase<1> *)0x0;
    local_440 = (TReferenceControllerBase<1> *)0x0;
    if (bVar43) {
      lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8);
      if (*(char *)(lVar6 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar22 = *(FWriteBuffer **)(lVar6 + 0x20);
      if ((int)pFVar22 - *(int *)&pFVar22->Cursor < 1) {
        pFVar22 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar22->Cursor = '\n';
      pFVar22->Cursor = pFVar22->Cursor + 1;
      pFVar22->Committed = pFVar22->Cursor;
    }
    FLLMScope::~FLLMScope(&local_410);
    FLLMScope::~FLLMScope(&local_40c);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_438)
    ;
    pFVar23 = local_3e8;
    uVar39 = local_3f0;
LAB_1445c01ba:
    pFVar23 = pFVar23 + 0x80;
    uVar17 = (ulonglong)local_3ec;
  } while( true );
}

// DebugFindStreamingChunkIds @ 1445c25a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TArray<FIoChunkId,TSizedDefaultAllocator<32>_> * __thiscall
UE::IoStore::FOnDemandIoStore::DebugFindStreamingChunkIds
          (FOnDemandIoStore *this,
          TArray<FIoChunkId,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  FMutex *this_00;
  FScriptContainerElement *pFVar2;
  atomic<unsigned_char> aVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  ulonglong uVar7;
  TArray<FIoChunkId,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  undefined1 local_res18 [8];
  FScriptContainerElement *local_res20;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (0 < param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,1,param_1,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  this_00 = &this->ContainerMutex;
  LOCK();
  bVar12 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar12) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar12) {
    FMutex::LockSlow(this_00);
  }
  uVar4 = (this->Containers).ArrayNum;
  uVar7 = (ulonglong)(int)uVar4;
  pFVar11 = (this->Containers).AllocatorInstance.Data;
  pFVar10 = pFVar11 + uVar7 * 0x10;
  local_res20 = pFVar10;
  while( true ) {
    if ((this->Containers).ArrayNum != (int)uVar7) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar11 == pFVar10) break;
    if ((*(longlong *)pFVar11 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TArray<FIoChunkId,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar8;
    }
    if ((*(byte *)(*(longlong *)pFVar11 + 0x114) & 6) == 6) {
      if ((*(longlong *)pFVar11 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<FIoChunkId,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
      pFVar9 = *(FScriptContainerElement **)(*(longlong *)pFVar11 + 200);
      pFVar2 = pFVar9 + (longlong)*(int *)(*(longlong *)pFVar11 + 0xd0) * 0xc;
      pFVar10 = local_res20;
      for (; local_res20 = pFVar10, pFVar9 != pFVar2; pFVar9 = pFVar9 + 0xc) {
        pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar10 <= pFVar9) && (pFVar9 < pFVar10 + (longlong)*piVar1 * 0xc)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TArray<FIoChunkId,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar8;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10c,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
        *(undefined8 *)(pFVar10 + (longlong)iVar6 * 0xc) = *(undefined8 *)pFVar9;
        *(undefined4 *)(pFVar10 + (longlong)iVar6 * 0xc + 8) = *(undefined4 *)(pFVar9 + 8);
        if (__return_storage_ptr__->ArrayNum == param_1) goto LAB_1445c27c6;
        pFVar10 = local_res20;
      }
    }
    uVar7 = (ulonglong)uVar4;
    pFVar11 = pFVar11 + 0x10;
  }
LAB_1445c27c6:
  LOCK();
  aVar3 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return __return_storage_ptr__;
}

// Defrag @ 1445c6260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoStore::Defrag
          (FOnDemandIoStore *this,FOnDemandDefragArgs *param_1,
          TUniqueFunction<void___cdecl(UE::IoStore::FOnDemandDefragResult)> *param_2)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  EOnDemandDefragOptions EVar3;
  FOnDemandContentInstaller *this_00;
  undefined8 uVar4;
  uint uVar5;
  FRequest *pFVar6;
  bool bVar7;
  LARGE_INTEGER local_res8;
  FLLMScope local_res10 [2];
  FRequest *local_res18;
  FMemScope local_res20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name713,L"FileSystem/OnDemandIoStore");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name713,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name713,true);
  this_00 = (this->Installer).Ptr;
  LOCK();
  bVar7 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this_00->Mutex);
  }
  pFVar6 = TSingleThreadedSlabAllocator<UE::IoStore::FOnDemandContentInstaller::FRequest,32>::Alloc
                     (&this_00->RequestAllocator);
  uVar5 = FOnDemandContentInstaller::FRequest::NextSeqNo + 1;
  pFVar6->SeqNo = FOnDemandContentInstaller::FRequest::NextSeqNo;
  FOnDemandContentInstaller::FRequest::NextSeqNo = uVar5;
  pFVar6->Priority = 0;
  QueryPerformanceCounter(&local_res8);
  pFVar6->StartTimeCycles = (ulong64)local_res8;
  (pFVar6->Result).Error.bIsSet = false;
  pFVar6->bCancelled = false;
  (pFVar6->Variant).TypeIndex = '\0';
  EVar3 = param_1->Options;
  (pFVar6->Variant).field_0x10 = 0;
  *(EOnDemandDefragOptions *)&pFVar6->Variant = EVar3;
  bVar7 = (param_1->BytesToFree).bIsSet;
  (pFVar6->Variant).field_0x10 = bVar7;
  if (bVar7 != false) {
    *(ulong64 *)&(pFVar6->Variant).field_0x8 = (param_1->BytesToFree).TypedValue;
  }
  *(undefined8 *)&(pFVar6->Variant).field_0x20 = *(undefined8 *)param_2;
  *(undefined8 *)&(pFVar6->Variant).field_0x48 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar4 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(pFVar6->Variant).field_0x30 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(pFVar6->Variant).field_0x38 = uVar4;
  *(undefined8 *)&(pFVar6->Variant).field_0x40 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&(pFVar6->Variant).field_0x20 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  (pFVar6->Variant).TypeIndex = '\x03';
  local_res18 = pFVar6;
  TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>::
  HeapPush<bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)>
            (&this_00->RequestQueue,&local_res18,FOnDemandContentInstaller::RequestSortPredicate);
  LOCK();
  pFVar1 = &this_00->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  FOnDemandContentInstaller::TryExecuteNextRequest(this_00);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// DumpMountedContainersToLog @ 1445c9560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall UE::IoStore::FOnDemandIoStore::DumpMountedContainersToLog(FOnDemandIoStore *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 auStack_1a8 [32];
  int local_188;
  undefined8 local_180;
  undefined1 local_178 [8];
  FScriptContainerElement *local_170;
  FString local_168;
  TStringBuilderWithBuffer<wchar_t,128> local_158;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_158._padding_ = (longlong)local_158.StringBuffer;
  this_00 = &this->ContainerMutex;
  local_158._padding_ = (longlong)local_158.StringBuffer;
  local_158._padding_ = (longlong)local_38;
  local_158._padding_._0_2_ = 0;
  LOCK();
  bVar9 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar9) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar9) {
    FMutex::LockSlow(this_00);
  }
  if (3 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  iVar2 = (this->Containers).ArrayNum;
  pFVar7 = (this->Containers).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->Containers).ArrayNum != iVar2) {
      local_178[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_178);
    }
    if (pFVar7 == pFVar8) {
      LOCK();
      aVar1 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar1 & 2) != 0) {
        FMutex::WakeWaitingThread(this_00);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
                ((TStringBuilderBase<wchar_t> *)&local_158);
      return;
    }
    bVar9 = true;
    local_158._padding_ = local_158._padding_;
    if ((*(longlong *)pFVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(byte *)(*(longlong *)pFVar7 + 0x114) & 4) != 0) {
      if ((ulonglong)local_158._padding_ < (wchar_t *)(local_158._padding_ + 0x1c)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_158,0xe);
      }
      pvVar6 = FGenericPlatformString::Memcpy((void *)local_158._padding_,L"StreamOnDemand",0x1c);
      local_158._padding_ = (longlong)pvVar6 + 0x1c;
      bVar9 = false;
    }
    if ((*(longlong *)pFVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) break;
    if ((*(byte *)(*(longlong *)pFVar7 + 0x114) & 8) != 0) {
      if (!bVar9) {
        if ((ulonglong)local_158._padding_ < (wchar_t *)(local_158._padding_ + 4)) {
          TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_158,2);
        }
        pvVar6 = FGenericPlatformString::Memcpy((void *)local_158._padding_,L", ",4);
        local_158._padding_ = (longlong)pvVar6 + 4;
      }
      if ((ulonglong)local_158._padding_ < (wchar_t *)(local_158._padding_ + 0x1e)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_158,0xf);
      }
      pvVar6 = FGenericPlatformString::Memcpy((void *)local_158._padding_,L"InstallOnDemand",0x1e);
      local_158._padding_ = (longlong)pvVar6 + 0x1e;
      bVar9 = false;
    }
    if ((*(longlong *)pFVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(byte *)(*(longlong *)pFVar7 + 0x114) & 2) != 0) {
      if (!bVar9) {
        if ((ulonglong)local_158._padding_ < (wchar_t *)(local_158._padding_ + 4)) {
          TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_158,2);
        }
        pvVar6 = FGenericPlatformString::Memcpy((void *)local_158._padding_,L", ",4);
        local_158._padding_ = (longlong)pvVar6 + 4;
      }
      if ((ulonglong)local_158._padding_ < (wchar_t *)(local_158._padding_ + 0xe)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_158,7);
      }
      pvVar6 = FGenericPlatformString::Memcpy((void *)local_158._padding_,L"Mounted",0xe);
      local_158._padding_ = (longlong)pvVar6 + 0xe;
      bVar9 = false;
    }
    if ((*(longlong *)pFVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(byte *)(*(longlong *)pFVar7 + 0x114) & 1) != 0) {
      if (!bVar9) {
        if ((ulonglong)local_158._padding_ < (wchar_t *)(local_158._padding_ + 4)) {
          TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_158,2);
        }
        pvVar6 = FGenericPlatformString::Memcpy((void *)local_158._padding_,L", ",4);
        local_158._padding_ = (longlong)pvVar6 + 4;
      }
      if ((ulonglong)local_158._padding_ < (wchar_t *)(local_158._padding_ + 0x28)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_158,0x14);
      }
      pvVar6 = FGenericPlatformString::Memcpy
                         ((void *)local_158._padding_,L"PendingEncryptionKey",0x28);
      local_158._padding_ = (longlong)pvVar6 + 0x28;
      bVar9 = false;
    }
    if ((*(longlong *)pFVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(byte *)(*(longlong *)pFVar7 + 0x114) & 0x40) != 0) {
      if (!bVar9) {
        if ((ulonglong)local_158._padding_ < (wchar_t *)(local_158._padding_ + 4)) {
          TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_158,2);
        }
        pvVar6 = FGenericPlatformString::Memcpy((void *)local_158._padding_,L", ",4);
        local_158._padding_ = (longlong)pvVar6 + 4;
      }
      if ((ulonglong)local_158._padding_ < (wchar_t *)(local_158._padding_ + 0x20)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_158,0x10);
      }
      pvVar6 = FGenericPlatformString::Memcpy((void *)local_158._padding_,L"PendingHostGroup",0x20);
      local_158._padding_ = (longlong)pvVar6 + 0x20;
    }
    if (3 < (byte)LogIoStoreOnDemand._0_1_) {
      if ((*(longlong *)pFVar7 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar3 = *(int *)(*(longlong *)pFVar7 + 0x58);
      local_180 = *(undefined8 *)(*(longlong *)pFVar7 + 0x50);
      local_188 = iVar3 + -1;
      if (iVar3 == 0) {
        local_188 = 0;
      }
      ::FString::PrintfImpl(&local_168,L"%.*s-%.*s");
      local_170 = (FScriptContainerElement *)L"";
      if (local_168.Data.ArrayNum != 0) {
        local_170 = local_168.Data.AllocatorInstance.Data;
      }
      Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*,TStringBuilderWithBuffer<wchar_t,128>_&>
                ((FLogCategoryBase *)&LogIoStoreOnDemand,&::LOG_Static,(wchar_t **)&local_170,
                 &local_158);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
    pFVar7 = pFVar7 + 0x10;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// FlushLastAccess @ 1445ce070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoStore::FlushLastAccess
          (FOnDemandIoStore *this,
          TUniqueFunction<void___cdecl(UE::IoStore::FOnDemandFlushLastAccessResult)> *param_1)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  FOnDemandContentInstaller *this_00;
  undefined8 uVar3;
  uint uVar4;
  FRequest *pFVar5;
  bool bVar6;
  LARGE_INTEGER local_res8;
  FLLMScope local_res10 [2];
  FRequest *local_res18;
  FMemScope local_res20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1849,L"FileSystem/OnDemandIoStore");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name1849,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name1849,true);
  this_00 = (this->Installer).Ptr;
  LOCK();
  bVar6 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    FMutex::LockSlow(&this_00->Mutex);
  }
  pFVar5 = TSingleThreadedSlabAllocator<UE::IoStore::FOnDemandContentInstaller::FRequest,32>::Alloc
                     (&this_00->RequestAllocator);
  uVar4 = FOnDemandContentInstaller::FRequest::NextSeqNo + 1;
  pFVar5->SeqNo = FOnDemandContentInstaller::FRequest::NextSeqNo;
  FOnDemandContentInstaller::FRequest::NextSeqNo = uVar4;
  pFVar5->Priority = 0;
  QueryPerformanceCounter(&local_res8);
  pFVar5->StartTimeCycles = (ulong64)local_res8;
  (pFVar5->Result).Error.bIsSet = false;
  pFVar5->bCancelled = false;
  (pFVar5->Variant).TypeIndex = '\0';
  *(undefined8 *)&pFVar5->Variant = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar5->Variant).field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar3 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(pFVar5->Variant).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(pFVar5->Variant).field_0x18 = uVar3;
  *(undefined8 *)&(pFVar5->Variant).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)&pFVar5->Variant != 0) {
    *(undefined8 *)param_1 = 0;
  }
  (pFVar5->Variant).TypeIndex = '\x05';
  local_res18 = pFVar5;
  TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>::
  HeapPush<bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)>
            (&this_00->RequestQueue,&local_res18,FOnDemandContentInstaller::RequestSortPredicate);
  LOCK();
  pFVar1 = &this_00->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  FOnDemandContentInstaller::TryExecuteNextRequest(this_00);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// GetCacheUsage @ 1445d2690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445d2cde) */
/* WARNING: Removing unreachable block (ram,0x0001445d2cf0) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandCacheUsage * __thiscall
UE::IoStore::FOnDemandIoStore::GetCacheUsage
          (FOnDemandIoStore *this,FOnDemandCacheUsage *__return_storage_ptr__,
          FOnDemandGetCacheUsageArgs *param_1)

{
  TArray<UE::IoStore::FOnDemandInstallHandleCacheUsage,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  IOnDemandInstallCache *pIVar3;
  FScriptContainerElement *pFVar4;
  IOnDemandIoDispatcherBackend *pIVar5;
  code *pcVar6;
  ulong64 uVar7;
  longlong *plVar8;
  FOnDemandGetCacheUsageArgs *pFVar9;
  bool bVar10;
  int iVar11;
  ulong64 *puVar12;
  FOnDemandCacheUsage *pFVar13;
  ulong64 *puVar14;
  byte bVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  longlong lVar26;
  longlong *plVar27;
  undefined1 auStackY_208 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [3];
  uint local_1b4;
  uint local_1b0;
  FOnDemandCacheUsage *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  uint uStack_178;
  uint uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *local_170;
  undefined4 uStack_168;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  int local_150;
  int local_14c;
  longlong local_148;
  longlong local_140;
  longlong *local_138;
  FOnDemandGetCacheUsageArgs *local_130;
  FOnDemandIoStore *local_128;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  undefined1 local_f0 [40];
  FOnDemandInstallHandleCacheUsage *local_c8;
  int local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar1 = &(__return_storage_ptr__->InstallCache).ReferencedBytesByHandle;
  (__return_storage_ptr__->InstallCache).MaxSize = 0;
  piVar2 = &(__return_storage_ptr__->InstallCache).ReferencedBytesByHandle.ArrayMax;
  uVar24 = 0;
  *piVar2 = 0;
  (__return_storage_ptr__->InstallCache).TotalSize = 0;
  (__return_storage_ptr__->InstallCache).ReferencedBlockSize = 0;
  (__return_storage_ptr__->InstallCache).ReferencedSize = 0;
  (__return_storage_ptr__->InstallCache).FragmentedChunksSize = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->InstallCache).ReferencedBytesByHandle.ArrayNum = 0;
  (__return_storage_ptr__->StreamingCache).MaxSize = 0;
  (__return_storage_ptr__->StreamingCache).TotalSize = 0;
  pIVar3 = (this->InstallCache).Object;
  local_1a8 = __return_storage_ptr__;
  local_130 = param_1;
  local_128 = this;
  if (pIVar3 != (IOnDemandInstallCache *)0x0) {
    puVar12 = (ulong64 *)(**(code **)((longlong)*pIVar3 + 0xb8))(pIVar3,local_f0);
    (__return_storage_ptr__->InstallCache).MaxSize = *puVar12;
    (__return_storage_ptr__->InstallCache).TotalSize = puVar12[1];
    (__return_storage_ptr__->InstallCache).ReferencedBlockSize = puVar12[2];
    (__return_storage_ptr__->InstallCache).ReferencedSize = puVar12[3];
    (__return_storage_ptr__->InstallCache).FragmentedChunksSize = puVar12[4];
    puVar14 = puVar12 + 5;
    if (pTVar1 != (TArray<UE::IoStore::FOnDemandInstallHandleCacheUsage,TSizedDefaultAllocator<32>_>
                   *)puVar14) {
      DestructItems<UE::IoStore::FOnDemandInstallHandleCacheUsage,int>
                ((FOnDemandInstallHandleCacheUsage *)(pTVar1->AllocatorInstance).Data,
                 (__return_storage_ptr__->InstallCache).ReferencedBytesByHandle.ArrayNum);
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)*puVar14;
      *puVar14 = 0;
      (__return_storage_ptr__->InstallCache).ReferencedBytesByHandle.ArrayNum = (int)puVar12[6];
      *piVar2 = *(int *)((longlong)puVar12 + 0x34);
      puVar12[6] = 0;
    }
    DestructItems<UE::IoStore::FOnDemandInstallHandleCacheUsage,int>(local_c8,local_c0);
    if (local_c8 != (FOnDemandInstallHandleCacheUsage *)0x0) {
      FMemory::Free(local_c8);
    }
    if ((param_1->Options & (DumpHandlesToResults|DumpHandlesToLog)) != None) {
      local_a8._0_8_ = 0;
      local_a8._8_8_ = 0;
      local_88 = (uint *)0x0;
      local_80 = 0;
      local_7c = 0x80;
      local_78 = 0xffffffff;
      local_74 = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      GetReferencedContentByHandle
                (this,(TMap<UE::IoStore::FOnDemandWeakContentHandle,TArray<UE::IoStore::FOnDemandContainerChunkEntryReferences,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FOnDemandWeakContentHandle,TArray<UE::IoStore::FOnDemandContainerChunkEntryReferences,TSizedDefaultAllocator<32>_>,0>_>
                       *)local_a8);
      if ((param_1->Options & DumpHandlesToResults) != None) {
        uVar23 = local_a8._8_4_ - local_74;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if (*piVar2 < (int)uVar23) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,uVar23,&pTVar1->AllocatorInstance,
                     (__return_storage_ptr__->InstallCache).ReferencedBytesByHandle.ArrayNum,piVar2)
          ;
        }
      }
      uVar23 = local_80;
      uStack_174 = 1;
      local_160 = 0;
      uStack_164 = local_160;
      if (local_80 != 0) {
        puVar25 = (uint *)(local_a8 + 0x10);
        if (local_88 != (uint *)0x0) {
          puVar25 = local_88;
        }
        uVar20 = *puVar25;
        local_160 = 0;
        uVar24 = 0;
        while (uVar20 == 0) {
          lVar16 = (longlong)(int)uVar24;
          local_160 = local_160 + 0x20;
          uVar24 = uVar24 + 1;
          uStack_164 = local_80;
          if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
          goto LAB_1445d28c0;
          uVar20 = puVar25[lVar16 + 1];
        }
        uStack_174 = -uVar20 & uVar20;
        uVar17 = (ulonglong)uStack_174 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_150 = (int)lVar16;
        uStack_164 = (local_160 - 1) + local_150;
        if ((int)local_80 < (int)uStack_164) {
          uStack_164 = local_80;
        }
      }
LAB_1445d28c0:
      local_180 = (longlong *)local_a8;
      local_170 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
      iStack_158 = local_a8._8_4_ - local_74;
      uVar20 = local_80 & 0xffffffe0;
      uStack_168 = 0xffffffff;
      TStack_118.CurrentBitIndex = uStack_164;
      TStack_118.UnvisitedBitMask = 0xffffffff;
      TStack_118._padding_ = CONCAT44(uStack_174,uVar24);
      iVar19 = (int)local_80 >> 5;
      TStack_118._28_4_ = uStack_164;
      TStack_118.BaseBitIndex = local_160;
      uStack_f8 = CONCAT44(uStack_154,iStack_158);
      bVar15 = (byte)local_80;
      local_1b4 = local_80;
      uStack_178 = uVar24;
      uStack_15c = uStack_164;
      local_120 = local_180;
      TStack_118.Array = local_170;
      if (((int)local_80 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FOnDemandCacheUsage *)(*pcVar6)();
        return pFVar13;
      }
      if (uVar23 != local_80) {
        puVar25 = (uint *)(local_a8 + 0x10);
        if (local_88 != (uint *)0x0) {
          puVar25 = local_88;
        }
        uVar24 = -1 << (bVar15 & 0x1f) & puVar25[iVar19];
        while (uVar24 == 0) {
          lVar16 = (longlong)iVar19;
          uVar20 = uVar20 + 0x20;
          iVar19 = iVar19 + 1;
          if ((int)(((int)(local_80 - 1) >> 0x1f & 0x1fU) + (local_80 - 1)) >> 5 < iVar19) {
            local_1b4 = local_80;
            uVar23 = local_80;
            goto LAB_1445d29e0;
          }
          uVar24 = puVar25[lVar16 + 1];
        }
        uVar17 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_14c = (int)lVar16;
        uVar23 = local_14c + -1 + uVar20;
        local_1b4 = uVar23;
        if ((int)local_80 < (int)uVar23) {
          uVar23 = local_80;
          local_1b4 = local_80;
        }
      }
LAB_1445d29e0:
      while( true ) {
        plVar27 = local_120;
        if ((int)local_120[1] - *(int *)((longlong)local_120 + 0x34) != (int)uStack_f8) {
          local_1b8 = 0;
          `TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FOnDemandWeakContentHandle,TArray<UE::IoStore::FOnDemandContainerChunkEntryReferences,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b8);
        }
        lVar16 = (longlong)TStack_118.CurrentBitIndex;
        if (((TStack_118.CurrentBitIndex == uVar23) &&
            (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
           (plVar27 == (longlong *)local_a8)) break;
        local_140 = *plVar27;
        lVar22 = lVar16 * 5;
        lVar26 = 0;
        local_1b0 = *(uint *)(local_140 + 0x18 + lVar16 * 0x28);
        uVar17 = (ulonglong)(int)local_1b0;
        plVar18 = *(longlong **)(local_140 + 0x10 + lVar16 * 0x28);
        plVar27 = plVar18 + 5;
        local_138 = plVar18 + uVar17 * 6;
        local_148 = lVar22;
        while( true ) {
          plVar8 = local_138;
          lVar16 = local_140;
          local_188 = plVar18;
          if (*(int *)(local_140 + 0x18 + lVar22 * 8) != (int)uVar17) {
            local_1b7[0] = 0;
            `TCheckedPointerIterator<UE::IoStore::FOnDemandContainerChunkEntryReferences_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_1b7);
          }
          pFVar9 = local_130;
          if (plVar18 == plVar8) break;
          iVar19 = 0;
          if ((*plVar18 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            pFVar13 = (FOnDemandCacheUsage *)(*pcVar6)();
            return pFVar13;
          }
          lVar21 = *(longlong *)(*plVar18 + 0xd8);
          lVar16 = lVar21 + (longlong)*(int *)(*plVar18 + 0xe0) * 0x28;
          if (lVar21 != lVar16) {
            uVar24 = 1;
            do {
              if (((iVar19 < 0) || ((int)*plVar27 <= iVar19)) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5c6,L""), bVar10)) {
                pcVar6 = (code *)swi(3);
                pFVar13 = (FOnDemandCacheUsage *)(*pcVar6)();
                return pFVar13;
              }
              plVar18 = (longlong *)plVar27[-1];
              if (plVar18 == (longlong *)0x0) {
                plVar18 = plVar27 + -3;
              }
              iVar11 = iVar19;
              if (iVar19 < 0) {
                iVar11 = iVar19 + 0x1f;
              }
              if ((*(uint *)((longlong)plVar18 + (longlong)(iVar11 >> 5) * 4) & uVar24) != 0) {
                lVar26 = lVar26 + ((ulonglong)(*(int *)(lVar21 + 0x18) + 0xf) & 0xfffffff0);
              }
              iVar19 = iVar19 + 1;
              uVar24 = uVar24 << 1 | (uint)((int)uVar24 < 0);
              lVar21 = lVar21 + 0x28;
              lVar22 = local_148;
              plVar18 = local_188;
            } while (lVar21 != lVar16);
          }
          plVar18 = plVar18 + 6;
          plVar27 = plVar27 + 6;
          uVar17 = (ulonglong)local_1b0;
        }
        if (lVar26 != 0) {
          if (((local_130->Options & DumpHandlesToLog) != None) &&
             (3 < (byte)LogIoStoreOnDemand._0_1_)) {
            Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
          }
          pFVar13 = local_1a8;
          if ((pFVar9->Options & DumpHandlesToResults) != None) {
            local_1a0 = *(undefined8 *)(lVar16 + lVar22 * 8);
            local_198 = *(longlong *)(lVar16 + 8 + lVar22 * 8);
            if (local_198 != 0) {
              LOCK();
              *(int *)(local_198 + -8) = *(int *)(local_198 + -8) + 1;
              UNLOCK();
            }
            pFVar4 = (local_1a8->InstallCache).ReferencedBytesByHandle.AllocatorInstance.Data;
            local_190 = lVar26;
            if (((pFVar4 <= (FScriptContainerElement *)&local_1a0) &&
                ((FScriptContainerElement *)&local_1a0 <
                 pFVar4 + (longlong)(local_1a8->InstallCache).ReferencedBytesByHandle.ArrayMax *
                          0x18)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar6 = (code *)swi(3);
              pFVar13 = (FOnDemandCacheUsage *)(*pcVar6)();
              return pFVar13;
            }
            iVar19 = (pFVar13->InstallCache).ReferencedBytesByHandle.ArrayNum;
            if (iVar19 == (pFVar13->InstallCache).ReferencedBytesByHandle.ArrayMax) {
              iVar19 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&(pFVar13->InstallCache).ReferencedBytesByHandle.
                                         AllocatorInstance,
                                  &(pFVar13->InstallCache).ReferencedBytesByHandle.ArrayMax);
            }
            (pFVar13->InstallCache).ReferencedBytesByHandle.ArrayNum = iVar19 + 1;
            lVar16 = (longlong)iVar19;
            pFVar4 = (pFVar13->InstallCache).ReferencedBytesByHandle.AllocatorInstance.Data;
            *(undefined8 *)(pFVar4 + lVar16 * 0x18) = local_1a0;
            *(longlong *)(pFVar4 + lVar16 * 0x18 + 8) = local_198;
            local_198 = 0;
            *(longlong *)(pFVar4 + lVar16 * 0x18 + 0x10) = local_190;
          }
        }
        TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
        uVar23 = local_1b4;
      }
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FOnDemandWeakContentHandle,TArray<UE::IoStore::FOnDemandContainerChunkEntryReferences,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FOnDemandWeakContentHandle,TArray<UE::IoStore::FOnDemandContainerChunkEntryReferences,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FOnDemandWeakContentHandle,TArray<UE::IoStore::FOnDemandContainerChunkEntryReferences,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      this = local_128;
    }
  }
  pFVar13 = local_1a8;
  pIVar5 = (this->StreamingBackend).Object;
  if (pIVar5 != (IOnDemandIoDispatcherBackend *)0x0) {
    puVar14 = (ulong64 *)(**(code **)((longlong)*pIVar5 + 0x80))(pIVar5,local_b8);
    uVar7 = puVar14[1];
    (pFVar13->StreamingCache).MaxSize = *puVar14;
    (pFVar13->StreamingCache).TotalSize = uVar7;
  }
  return pFVar13;
}

// GetContainers @ 1445d3700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> * __thiscall
UE::IoStore::FOnDemandIoStore::GetContainers
          (FOnDemandIoStore *this,
          TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,EOnDemandContainerFlags param_1)

{
  int *piVar1;
  FMutex *this_00;
  atomic<unsigned_char> aVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = (this->Containers).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  this_00 = &this->ContainerMutex;
  LOCK();
  bVar12 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar12) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar12) {
    FMutex::LockSlow(this_00);
  }
  iVar4 = (this->Containers).ArrayNum;
  pFVar10 = (this->Containers).AllocatorInstance.Data;
  pFVar11 = pFVar10 + (longlong)iVar4 * 0x10;
  do {
    if ((this->Containers).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar11) {
      LOCK();
      aVar2 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        FMutex::WakeWaitingThread(this_00);
      }
      return __return_storage_ptr__;
    }
    if (param_1 == None) {
LAB_1445d380e:
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar9 <= pFVar10) && (pFVar10 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        pTVar8 = (TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar6)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(longlong *)pFVar9 = *(longlong *)pFVar10;
      lVar5 = *(longlong *)(pFVar10 + 8);
      *(longlong *)(pFVar9 + 8) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
    }
    else {
      if ((*(longlong *)pFVar10 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        pTVar8 = (TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar6)();
        return pTVar8;
      }
      if ((*(EOnDemandContainerFlags *)(*(longlong *)pFVar10 + 0x114) & param_1) == param_1)
      goto LAB_1445d380e;
    }
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// GetContainersAndPackagesForInstall @ 1445d3910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FIoStatus * __thiscall
UE::IoStore::FOnDemandIoStore::GetContainersAndPackagesForInstall
          (FOnDemandIoStore *this,FIoStatus *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FPackageId,TSizedDefaultAllocator<32>_> *param_3,
          TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
          *param_4,TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *param_5)

{
  wchar_t *pwVar1;
  FMutex *this_00;
  bool *pbVar2;
  atomic<unsigned_char> aVar3;
  undefined1 *puVar4;
  code *pcVar5;
  TSharedString<wchar_t> TVar6;
  TStringView<wchar_t> *pTVar7;
  TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *pTVar8;
  FScriptContainerElement *pFVar9;
  TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
  *pTVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FIoStatus *pFVar14;
  FOnDemandContainer *pFVar15;
  FIoStatusBuilder *pFVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  bool *pbVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  TSharedPtr<UE::IoStore::FOnDemandContainer,1> *this_01;
  uint *puVar24;
  longlong *plVar25;
  uint uVar26;
  undefined8 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  uint *puVar30;
  TSharedPtr<UE::IoStore::FOnDemandContainer,1> *pTVar31;
  TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
  *pTVar32;
  TBitArray<FDefaultBitArrayAllocator> *pTVar33;
  undefined8 *puVar34;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar35;
  bool bVar36;
  undefined1 auStack_768 [32];
  FScriptContainerElement *local_748;
  longlong local_740;
  undefined1 local_738;
  undefined1 local_737;
  undefined1 local_736;
  undefined1 local_735;
  undefined1 local_734;
  undefined1 local_733 [3];
  TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
  *local_730;
  uint local_728;
  TStringView<wchar_t> *local_720;
  FIoStatus *local_718;
  uint local_710;
  int local_70c;
  uint local_708;
  TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *local_700;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_6f8;
  TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
  *local_6f0;
  int iStack_6e8;
  uint uStack_6e4;
  undefined1 *local_6e0;
  undefined4 uStack_6d8;
  int iStack_6d4;
  int local_6d0;
  undefined4 uStack_6cc;
  int iStack_6c8;
  undefined4 uStack_6c4;
  longlong *local_6c0;
  FScriptContainerElement *local_6b8;
  FIoStatus local_6b0;
  FIoStatus local_6a0;
  int local_690;
  undefined4 local_68c;
  FPackageId local_688;
  int local_680;
  undefined4 local_67c;
  FPackageId local_678;
  undefined8 local_670;
  undefined8 *local_668;
  longlong local_660;
  FScriptContainerElement *local_658;
  TBitArray<FDefaultBitArrayAllocator> *local_650;
  undefined4 local_648;
  undefined1 local_644 [20];
  FString local_630;
  int local_620;
  TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
  *local_618;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_610;
  undefined8 uStack_5f0;
  TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
  *local_5e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5e0;
  undefined8 uStack_5c0;
  FScriptContainerElement *local_5b8;
  int iStack_5b0;
  undefined4 uStack_5ac;
  wchar_t *local_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  wchar_t *local_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  FScriptContainerElement *local_588;
  int iStack_580;
  undefined4 uStack_57c;
  wchar_t *local_578;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  TStringView<wchar_t> local_568;
  TStringView<wchar_t> local_558;
  TStringView<wchar_t> local_548;
  TStringView<wchar_t> local_538;
  TArrayView<FPackageId_const_,int> local_528;
  wchar_t *local_518;
  undefined8 uStack_510;
  wchar_t *local_508;
  undefined8 uStack_500;
  wchar_t *local_4f8;
  undefined8 uStack_4f0;
  undefined4 local_4cc;
  undefined4 local_4ac;
  FIoStatusBuilder local_4a8;
  FIoStatusBuilder local_278;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_768;
  local_700 = param_5;
  local_730 = param_4;
  local_720 = param_1;
  local_718 = __return_storage_ptr__;
  local_6f8 = param_2;
  TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
  ::Reset(param_4);
  this_00 = &this->ContainerMutex;
  LOCK();
  bVar36 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar36) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar36) {
    FMutex::LockSlow(this_00);
  }
  uVar19 = (this->Containers).ArrayNum;
  if ((uint)(*(int *)&(param_4->Elements).field_0x8 - *(int *)&(param_4->Elements).field_0x34) <
      uVar19) {
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)param_4,uVar19);
    if (uVar19 < 4) {
      iVar11 = 1;
    }
    else {
      uVar17 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_648 = (undefined4)lVar18;
      iVar11 = 1 << ((byte)lVar18 & 0x1f);
    }
    if ((param_4->HashSize == 0) || (param_4->HashSize < iVar11)) {
      param_4->HashSize = iVar11;
      TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
      ::Rehash(param_4);
    }
  }
  this_01 = (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)
            (this->Containers).AllocatorInstance.Data;
  iVar11 = (this->Containers).ArrayNum;
  pTVar31 = this_01 + iVar11;
  while( true ) {
    if ((this->Containers).ArrayNum != iVar11) {
      local_737 = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_737);
    }
    if (this_01 == pTVar31) break;
    if ((this_01->Object == (FOnDemandContainer *)0x0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar5 = (code *)swi(3);
      pFVar14 = (FIoStatus *)(*pcVar5)();
      return pFVar14;
    }
    if ((this_01->Object->Flags & InstallOnDemand) == None) {
LAB_1445d3b92:
      this_01 = this_01 + 1;
    }
    else {
      if ((this_01->Object == (FOnDemandContainer *)0x0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar36)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FIoStatus *)(*pcVar5)();
        return pFVar14;
      }
      pFVar15 = this_01->Object;
      if ((pFVar15->Flags & PendingEncryptionKey) != None) {
        if ((pFVar15 == (FOnDemandContainer *)0x0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar36)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FIoStatus *)(*pcVar5)();
          return pFVar14;
        }
        if (((this_01->Object->Flags & Mounted) != None) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("Container->HasAnyFlags(EOnDemandContainerFlags::Mounted) == false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.cpp"
                                ,0x752,L""), bVar36)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FIoStatus *)(*pcVar5)();
          return pFVar14;
        }
        if ((this_01->Object == (FOnDemandContainer *)0x0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar36)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FIoStatus *)(*pcVar5)();
          return pFVar14;
        }
        iVar20 = (this_01->Object->MountId).Data.ArrayNum;
        iVar13 = iVar20 + -1;
        if (iVar20 == 0) {
          iVar13 = 0;
        }
        local_518 = local_720->DataPtr;
        uStack_510 = *(undefined8 *)&local_720->Size;
        iVar20 = (int)*(undefined8 *)&local_720->Size;
        param_4 = local_730;
        if (iVar20 == iVar13) {
          if ((iVar20 != 0) && (iVar13 != 0)) {
            iVar12 = iVar13;
            if (iVar20 < iVar13) {
              iVar12 = iVar20;
            }
            iVar12 = FGenericPlatformStricmp::Strnicmp
                               (local_518,
                                (wchar_t *)(this_01->Object->MountId).Data.AllocatorInstance.Data,
                                (longlong)iVar12);
            param_4 = local_730;
            if (iVar12 != 0) goto LAB_1445d3b92;
          }
          param_4 = local_730;
          if (iVar20 == iVar13) {
            pFVar15 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->(this_01);
            if (((pFVar15->Flags & Mounted) != None) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("EnumHasAnyFlags(Container->Flags, EOnDemandContainerFlags::Mounted) == false"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.cpp"
                                    ,0x755,L""), bVar36)) {
              pcVar5 = (code *)swi(3);
              pFVar14 = (FIoStatus *)(*pcVar5)();
              return pFVar14;
            }
            pFVar16 = FIoStatusBuilder::FIoStatusBuilder(&local_4a8,PendingEncryptionKey);
            uStack_570 = 0x34;
            local_578 = L"Trying to install content from encrypted container \'";
            local_568._12_4_ = uStack_56c;
            local_568.Size = 0x34;
            local_568.DataPtr = L"Trying to install content from encrypted container \'";
            pFVar16 = FIoStatusBuilder::operator<<(pFVar16,&local_568);
            pFVar15 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->(this_01);
            local_5b8 = (pFVar15->Name).Data.AllocatorInstance.Data;
            iVar11 = (pFVar15->Name).Data.ArrayNum;
            iStack_5b0 = iVar11 + -1;
            if (iVar11 == 0) {
              iStack_5b0 = 0;
            }
            local_558._12_4_ = uStack_5ac;
            local_558.Size = iStack_5b0;
            local_558.DataPtr = (wchar_t *)local_5b8;
            pFVar16 = FIoStatusBuilder::operator<<(pFVar16,&local_558);
            uStack_5a0 = 1;
            local_5a8 = L"\'";
            local_548._12_4_ = uStack_59c;
            local_548.Size = 1;
            local_548.DataPtr = L"\'";
            pFVar16 = FIoStatusBuilder::operator<<(pFVar16,&local_548);
            FIoStatusBuilder::operator_FIoStatus(pFVar16,&local_6b0);
            FIoStatusBuilder::~FIoStatusBuilder(&local_4a8);
            pFVar14 = local_718;
            (local_718->ErrorMessage).Chars = local_6b0.ErrorMessage.Chars;
            if (local_6b0.ErrorMessage.Chars != (wchar_t *)0x0) {
              LOCK();
              *(int *)(local_6b0.ErrorMessage.Chars + -4) =
                   *(int *)(local_6b0.ErrorMessage.Chars + -4) + 1;
              UNLOCK();
            }
            local_718->ErrorCode = local_6b0.ErrorCode;
            local_718->SystemErrorCode = local_6b0.SystemErrorCode;
            FIoStatus::~FIoStatus(&local_6b0);
            LOCK();
            aVar3 = this_00->State;
            this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
            UNLOCK();
            if (((byte)aVar3 & 2) == 0) {
              return pFVar14;
            }
            FMutex::WakeWaitingThread(this_00);
            return pFVar14;
          }
        }
        goto LAB_1445d3b92;
      }
      if ((pFVar15 == (FOnDemandContainer *)0x0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar36)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FIoStatus *)(*pcVar5)();
        return pFVar14;
      }
      if (((this_01->Object->Flags & Mounted) == None) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("Container->HasAnyFlags(EOnDemandContainerFlags::Mounted)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.cpp"
                              ,0x75f,L""), bVar36)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FIoStatus *)(*pcVar5)();
        return pFVar14;
      }
      TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
      ::Emplace<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_const_&>
                (param_4,(TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_644,(bool *)this_01)
      ;
      this_01 = this_01 + 1;
    }
  }
  LOCK();
  aVar3 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  pTVar35 = local_6f8;
  pTVar32 = local_730;
  local_6f0 = param_4;
  if (local_720->Size == 0) {
    if (local_6f8->ArrayNum == 0) {
      if (param_3->ArrayNum == 0) {
        TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
        ::Reset(param_4);
        pFVar16 = FIoStatusBuilder::FIoStatusBuilder(&local_278,InvalidCode);
        uStack_590 = 0x35;
        local_598 = L"Trying to install content from all mounted containers";
        local_538._12_4_ = uStack_58c;
        local_538.Size = 0x35;
        local_538.DataPtr = L"Trying to install content from all mounted containers";
        pFVar16 = FIoStatusBuilder::operator<<(pFVar16,&local_538);
        FIoStatusBuilder::operator_FIoStatus(pFVar16,&local_6a0);
        FIoStatusBuilder::~FIoStatusBuilder(&local_278);
        pFVar14 = local_718;
        (local_718->ErrorMessage).Chars = local_6a0.ErrorMessage.Chars;
        if (local_6a0.ErrorMessage.Chars != (wchar_t *)0x0) {
          LOCK();
          *(int *)(local_6a0.ErrorMessage.Chars + -4) =
               *(int *)(local_6a0.ErrorMessage.Chars + -4) + 1;
          UNLOCK();
        }
        local_718->ErrorCode = local_6a0.ErrorCode;
        local_718->SystemErrorCode = local_6a0.SystemErrorCode;
        FIoStatus::~FIoStatus(&local_6a0);
        return pFVar14;
      }
      goto LAB_1445d3e7d;
    }
  }
  else {
LAB_1445d3e7d:
    if ((local_6f8->ArrayNum == 0) && (param_3->ArrayNum == 0)) {
      if ((local_720->Size == 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("MountId.IsEmpty() == false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.cpp"
                              ,0x770,L""), bVar36)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FIoStatus *)(*pcVar5)();
        return pFVar14;
      }
      pTVar32 = local_730;
      iVar11 = *(int *)&(param_4->Elements).field_0x28;
      local_6e0 = &(param_4->Elements).field_0x10;
      iVar20 = 0;
      uStack_6e4 = 1;
      iStack_6e8 = 0;
      iStack_6d4 = iStack_6e8;
      local_6d0 = iStack_6e8;
      if (iVar11 != 0) {
        puVar30 = *(uint **)&(param_4->Elements).field_0x20;
        if (puVar30 == (uint *)0x0) {
          puVar30 = (uint *)local_6e0;
        }
        uVar19 = *puVar30;
        local_6d0 = iVar20;
        iStack_6e8 = iVar20;
        while (uVar19 == 0) {
          lVar18 = (longlong)iStack_6e8;
          local_6d0 = local_6d0 + 0x20;
          iStack_6e8 = iStack_6e8 + 1;
          iStack_6d4 = iVar11;
          if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_6e8)
          goto LAB_1445d3f3e;
          uVar19 = puVar30[lVar18 + 1];
        }
        uStack_6e4 = -uVar19 & uVar19;
        uVar17 = (ulonglong)uStack_6e4 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_620 = (int)lVar18;
        iStack_6d4 = local_620 + -1 + local_6d0;
        if (iVar11 < iStack_6d4) {
          iStack_6d4 = iVar11;
        }
      }
LAB_1445d3f3e:
      uStack_6cc = local_4cc;
      iStack_6c8 = *(int *)&(param_4->Elements).field_0x8 - *(int *)&(param_4->Elements).field_0x34;
      puVar4 = &(local_730->Elements).field_0x10;
      uVar19 = *(uint *)&(param_4->Elements).field_0x28;
      uStack_6d8 = 0xffffffff;
      TStack_610.CurrentBitIndex = iStack_6d4;
      TStack_610.UnvisitedBitMask = 0xffffffff;
      TStack_610._padding_ = CONCAT44(uStack_6e4,iStack_6e8);
      uVar23 = uVar19 & 0xffffffe0;
      iVar11 = (int)uVar19 >> 5;
      TStack_610._28_4_ = local_4cc;
      TStack_610.BaseBitIndex = local_6d0;
      uStack_5f0 = CONCAT44(uStack_6c4,iStack_6c8);
      local_618 = param_4;
      TStack_610.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_6e0;
      if (((int)uVar19 < 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar36)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FIoStatus *)(*pcVar5)();
        return pFVar14;
      }
      uVar26 = *(uint *)&(pTVar32->Elements).field_0x28;
      if (uVar19 != uVar26) {
        puVar29 = *(undefined1 **)&(pTVar32->Elements).field_0x20;
        puVar28 = puVar4;
        if (puVar29 != (undefined1 *)0x0) {
          puVar28 = puVar29;
        }
        uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar11 * 4);
        while (uVar19 == 0) {
          lVar18 = (longlong)iVar11;
          uVar23 = uVar23 + 0x20;
          iVar11 = iVar11 + 1;
          uVar19 = uVar26;
          if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
          goto LAB_1445d4040;
          uVar19 = *(uint *)(puVar28 + lVar18 * 4 + 4);
        }
        uVar17 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_690 = (int)lVar18;
        uVar19 = local_690 + -1 + uVar23;
        if ((int)uVar26 < (int)uVar19) {
          uVar19 = uVar26;
        }
      }
LAB_1445d4040:
      do {
        pTVar10 = local_618;
        if (*(int *)&(local_618->Elements).field_0x8 - *(int *)&(local_618->Elements).field_0x34 !=
            (int)uStack_5f0) {
          local_736 = 0;
          `TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_736);
        }
        if (((TStack_610.CurrentBitIndex == uVar19) &&
            (TStack_610.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) &&
           (pTVar10 == pTVar32)) goto LAB_1445d4a5d;
        lVar18 = *(longlong *)&pTVar10->Elements;
        plVar25 = (longlong *)(lVar18 + (longlong)TStack_610.CurrentBitIndex * 0x18);
        if ((*(longlong *)(lVar18 + (longlong)TStack_610.CurrentBitIndex * 0x18) == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar36)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FIoStatus *)(*pcVar5)();
          return pFVar14;
        }
        if (*(longlong *)(*plVar25 + 0x20) != 0) {
          if ((*plVar25 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar36)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FIoStatus *)(*pcVar5)();
            return pFVar14;
          }
          iVar11 = *(int *)(*plVar25 + 0x68);
          iVar13 = iVar11 + -1;
          if (iVar11 == 0) {
            iVar13 = iVar20;
          }
          local_508 = local_720->DataPtr;
          uStack_500 = *(undefined8 *)&local_720->Size;
          iVar11 = (int)*(undefined8 *)&local_720->Size;
          if (iVar11 == iVar13) {
            if ((iVar11 != 0) && (iVar13 != 0)) {
              iVar12 = iVar13;
              if (iVar11 < iVar13) {
                iVar12 = iVar11;
              }
              iVar12 = FGenericPlatformStricmp::Strnicmp
                                 (local_508,*(wchar_t **)(*plVar25 + 0x60),(longlong)iVar12);
              if (iVar12 != 0) goto LAB_1445d4340;
            }
            if (iVar11 == iVar13) {
              if (4 < (byte)LogIoStoreOnDemand._0_1_) {
                if ((*plVar25 == 0) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar36)) {
                  pcVar5 = (code *)swi(3);
                  pFVar14 = (FIoStatus *)(*pcVar5)();
                  return pFVar14;
                }
                iVar11 = *(int *)(*plVar25 + 0x58);
                local_740 = *(longlong *)(*plVar25 + 0x50);
                iVar13 = iVar11 + -1;
                if (iVar11 == 0) {
                  iVar13 = iVar20;
                }
                local_748 = (FScriptContainerElement *)CONCAT44(local_748._4_4_,iVar13);
                ::FString::PrintfImpl((FString *)(local_644 + 4),L"%.*s-%.*s");
                if ((*plVar25 == 0) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar36)) {
                  pcVar5 = (code *)swi(3);
                  pFVar14 = (FIoStatus *)(*pcVar5)();
                  return pFVar14;
                }
                Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand)
                ;
                if ((void *)local_644._4_8_ != (void *)0x0) {
                  FMemory::Free((void *)local_644._4_8_);
                }
              }
              if ((*plVar25 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar36)) {
                pcVar5 = (code *)swi(3);
                pFVar14 = (FIoStatus *)(*pcVar5)();
                return pFVar14;
              }
              lVar18 = *plVar25;
              if ((*(longlong *)(lVar18 + 0x20) == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar36)) {
                pcVar5 = (code *)swi(3);
                pFVar14 = (FIoStatus *)(*pcVar5)();
                return pFVar14;
              }
              lVar18 = *(longlong *)(lVar18 + 0x20);
              iVar11 = *(int *)(lVar18 + 0x10);
              pbVar21 = *(bool **)(lVar18 + 8);
              if ((iVar11 < 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar36)) {
                pcVar5 = (code *)swi(3);
                pFVar14 = (FIoStatus *)(*pcVar5)();
                return pFVar14;
              }
              pTVar8 = local_700;
              uVar23 = *(int *)&(local_700->Elements).field_0x8 -
                       *(int *)&(local_700->Elements).field_0x34;
              uVar26 = iVar11 + uVar23;
              if (uVar23 < uVar26) {
                if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
                  Core::Private::OnInvalidSetNum((longlong)(int)uVar26);
                }
                TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_700,uVar26);
                if (uVar26 < 4) {
                  iVar13 = 1;
                }
                else {
                  uVar17 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
                  lVar18 = 0x3f;
                  if (uVar17 != 0) {
                    for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                    }
                  }
                  local_68c = (undefined4)lVar18;
                  iVar13 = 1 << ((byte)lVar18 & 0x1f);
                }
                if ((pTVar8->HashSize == 0) || (pTVar8->HashSize < iVar13)) {
                  pTVar8->HashSize = iVar13;
                  TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator>::Rehash
                            (pTVar8);
                }
              }
              pbVar2 = pbVar21 + (longlong)iVar11 * 8;
              pTVar32 = local_730;
              for (; local_730 = pTVar32, pbVar21 != pbVar2; pbVar21 = pbVar21 + 8) {
                TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator>::
                Emplace<FPackageId_const_&>(pTVar8,&local_688,pbVar21);
                pTVar32 = local_730;
              }
            }
          }
        }
LAB_1445d4340:
        TStack_610.UnvisitedBitMask = TStack_610.UnvisitedBitMask & ~TStack_610._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_610);
      } while( true );
    }
  }
  iVar11 = *(int *)&(param_4->Elements).field_0x28;
  local_6e0 = &(param_4->Elements).field_0x10;
  local_6d0 = 0;
  iStack_6e8 = 0;
  uStack_6e4 = 1;
  iStack_6d4 = 0;
  if (iVar11 != 0) {
    puVar30 = *(uint **)&(param_4->Elements).field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)local_6e0;
    }
    uVar19 = *puVar30;
    iStack_6e8 = 0;
    while (uVar19 == 0) {
      lVar18 = (longlong)iStack_6e8;
      local_6d0 = local_6d0 + 0x20;
      iStack_6e8 = iStack_6e8 + 1;
      iStack_6d4 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_6e8) goto LAB_1445d43ce;
      uVar19 = puVar30[lVar18 + 1];
    }
    uStack_6e4 = -uVar19 & uVar19;
    uVar17 = (ulonglong)uStack_6e4 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_688.Id._4_4_ = (int)lVar18;
    iStack_6d4 = local_6d0 + -1 + local_688.Id._4_4_;
    if (iVar11 < iStack_6d4) {
      iStack_6d4 = iVar11;
    }
  }
LAB_1445d43ce:
  uStack_6cc = local_4ac;
  iStack_6c8 = *(int *)&(param_4->Elements).field_0x8 - *(int *)&(param_4->Elements).field_0x34;
  pTVar33 = (TBitArray<FDefaultBitArrayAllocator> *)&(local_730->Elements).field_0x10;
  uVar19 = *(uint *)&(param_4->Elements).field_0x28;
  uStack_6d8 = 0xffffffff;
  TStack_5e0.CurrentBitIndex = iStack_6d4;
  TStack_5e0.UnvisitedBitMask = 0xffffffff;
  TStack_5e0._padding_ = CONCAT44(uStack_6e4,iStack_6e8);
  uVar23 = uVar19 & 0xffffffe0;
  iVar11 = (int)uVar19 >> 5;
  TStack_5e0._28_4_ = local_4ac;
  TStack_5e0.BaseBitIndex = local_6d0;
  uStack_5c0 = CONCAT44(uStack_6c4,iStack_6c8);
  local_728 = uVar19;
  local_650 = pTVar33;
  local_5e8 = param_4;
  TStack_5e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_6e0;
  if (((int)uVar19 < 0) &&
     (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar36)) {
    pcVar5 = (code *)swi(3);
    pFVar14 = (FIoStatus *)(*pcVar5)();
    return pFVar14;
  }
  uVar26 = *(uint *)&(pTVar32->Elements).field_0x28;
  if (uVar19 != uVar26) {
    puVar4 = *(undefined1 **)&(pTVar32->Elements).field_0x20;
    puVar29 = (undefined1 *)pTVar33;
    if (puVar4 != (undefined1 *)0x0) {
      puVar29 = puVar4;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar11 * 4);
    while (uVar19 == 0) {
      lVar18 = (longlong)iVar11;
      uVar23 = uVar23 + 0x20;
      iVar11 = iVar11 + 1;
      uVar19 = uVar26;
      local_728 = uVar26;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_1445d44f1;
      uVar19 = *(uint *)(puVar29 + lVar18 * 4 + 4);
    }
    uVar17 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_680 = (int)lVar18;
    uVar19 = local_680 + -1 + uVar23;
    local_728 = uVar19;
    if ((int)uVar26 < (int)uVar19) {
      uVar19 = uVar26;
      local_728 = uVar26;
    }
  }
LAB_1445d44f1:
  do {
    pTVar10 = local_5e8;
    if (*(int *)&(local_5e8->Elements).field_0x8 - *(int *)&(local_5e8->Elements).field_0x34 !=
        (int)uStack_5c0) {
      local_735 = 0;
      `TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_735);
    }
    if (((TStack_5e0.CurrentBitIndex == uVar19) && (TStack_5e0.Array == pTVar33)) &&
       (pTVar10 == pTVar32)) {
      local_588 = (param_3->AllocatorInstance).Data;
      iVar11 = param_3->ArrayNum;
      if ((iVar11 < 0) &&
         (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar36)) {
        pcVar5 = (code *)swi(3);
        pFVar14 = (FIoStatus *)(*pcVar5)();
        return pFVar14;
      }
      local_528._12_4_ = uStack_57c;
      local_528.ArrayNum = iVar11;
      local_528.DataPtr = (FPackageId *)local_588;
      iStack_580 = iVar11;
      TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator>::Append
                (local_700,&local_528);
LAB_1445d4a5d:
      TVar6.Chars = FIoStatus::Ok.ErrorMessage.Chars;
      (local_718->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
      if (TVar6.Chars != (wchar_t *)0x0) {
        LOCK();
        pwVar1 = TVar6.Chars + -4;
        *(int *)pwVar1 = *(int *)pwVar1 + 1;
        UNLOCK();
      }
      local_718->ErrorCode = FIoStatus::Ok.ErrorCode;
      local_718->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
      return local_718;
    }
    lVar18 = *(longlong *)&pTVar10->Elements;
    plVar25 = (longlong *)(lVar18 + (longlong)TStack_5e0.CurrentBitIndex * 0x18);
    local_6c0 = plVar25;
    if ((*(longlong *)(lVar18 + (longlong)TStack_5e0.CurrentBitIndex * 0x18) == 0) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar36)) {
      pcVar5 = (code *)swi(3);
      pFVar14 = (FIoStatus *)(*pcVar5)();
      return pFVar14;
    }
    pTVar7 = local_720;
    if (*(longlong *)(*plVar25 + 0x20) != 0) {
      if (local_720->Size == 0) {
LAB_1445d4612:
        pTVar8 = local_700;
        local_708 = pTVar35->ArrayNum;
        uVar17 = (ulonglong)(int)local_708;
        pFVar22 = (pTVar35->AllocatorInstance).Data;
        local_658 = pFVar22 + uVar17 * 0x10;
        while( true ) {
          pFVar9 = local_658;
          local_6b8 = pFVar22;
          if (pTVar35->ArrayNum != (int)uVar17) {
            local_734 = 0;
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_734);
          }
          pTVar32 = local_730;
          pTVar33 = local_650;
          uVar19 = local_728;
          if (pFVar22 == pFVar9) break;
          local_70c = *(int *)&(pTVar8->Elements).field_0x8 - *(int *)&(pTVar8->Elements).field_0x34
          ;
          if ((*plVar25 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar36)) {
            pcVar5 = (code *)swi(3);
            pFVar14 = (FIoStatus *)(*pcVar5)();
            return pFVar14;
          }
          local_660 = *plVar25;
          local_710 = *(uint *)(local_660 + 0xb8);
          uVar17 = (ulonglong)(int)local_710;
          puVar34 = *(undefined8 **)(local_660 + 0xb0);
          puVar27 = puVar34 + uVar17 * 4;
          local_668 = puVar27;
          while( true ) {
            if (*(int *)(local_660 + 0xb8) != (int)uVar17) {
              local_733[0] = 0;
              `TCheckedPointerIterator<UE::IoStore::FOnDemandTagSet,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_733);
            }
            if (puVar34 == puVar27) break;
            iVar11 = *(int *)(puVar34 + 1);
            if (iVar11 == *(int *)(pFVar22 + 8)) {
              if (1 < iVar11) {
                iVar11 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar34,*(wchar_t **)pFVar22);
                bVar36 = iVar11 == 0;
                goto LAB_1445d46f6;
              }
LAB_1445d4701:
              if (4 < (byte)LogIoStoreOnDemand._0_1_) {
                if ((*plVar25 == 0) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar36)) {
                  pcVar5 = (code *)swi(3);
                  pFVar14 = (FIoStatus *)(*pcVar5)();
                  return pFVar14;
                }
                iVar20 = *(int *)(*plVar25 + 0x58);
                local_740 = *(longlong *)(*plVar25 + 0x50);
                iVar11 = iVar20 + -1;
                if (iVar20 == 0) {
                  iVar11 = 0;
                }
                local_748 = (FScriptContainerElement *)CONCAT44(local_748._4_4_,iVar11);
                ::FString::PrintfImpl(&local_630,L"%.*s-%.*s");
                local_748 = (FScriptContainerElement *)L"";
                if (local_630.Data.ArrayNum != 0) {
                  local_748 = local_630.Data.AllocatorInstance.Data;
                }
                Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand)
                ;
                if (local_630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_630.Data.AllocatorInstance.Data);
                }
              }
              uVar19 = *(uint *)(puVar34 + 3);
              if ((uint)(*(int *)&(pTVar8->Elements).field_0x8 -
                        *(int *)&(pTVar8->Elements).field_0x34) < uVar19) {
                if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
                  Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
                }
                TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)pTVar8,uVar19);
                if (uVar19 < 4) {
                  iVar11 = 1;
                }
                else {
                  uVar17 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
                  lVar18 = 0x3f;
                  if (uVar17 != 0) {
                    for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                    }
                  }
                  local_67c = (undefined4)lVar18;
                  iVar11 = 1 << ((byte)lVar18 & 0x1f);
                }
                if ((pTVar8->HashSize == 0) || (pTVar8->HashSize < iVar11)) {
                  pTVar8->HashSize = iVar11;
                  TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator>::Rehash
                            (pTVar8);
                }
              }
              puVar24 = (uint *)puVar34[2];
              iVar11 = *(int *)(puVar34 + 3);
              puVar30 = puVar24 + iVar11;
              while( true ) {
                if (*(int *)(puVar34 + 3) != iVar11) {
                  local_738 = 0;
                  `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>
                  ::operator()(&local_738);
                }
                plVar25 = local_6c0;
                pFVar22 = local_6b8;
                puVar27 = local_668;
                if (puVar24 == puVar30) break;
                uVar19 = *puVar24;
                if ((*local_6c0 == 0) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar36)) {
                  pcVar5 = (code *)swi(3);
                  pFVar14 = (FIoStatus *)(*pcVar5)();
                  return pFVar14;
                }
                lVar18 = *plVar25;
                if ((*(longlong *)(lVar18 + 0x20) == 0) &&
                   (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar36)) {
                  pcVar5 = (code *)swi(3);
                  pFVar14 = (FIoStatus *)(*pcVar5)();
                  return pFVar14;
                }
                lVar18 = *(longlong *)(lVar18 + 0x20);
                if ((int)uVar19 < 0) {
                  local_748 = (FScriptContainerElement *)(ulonglong)uVar19;
                  bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IntFitsIn<OutType>(In)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                      ,0xae,
                                      L"Loss of data caused by narrowing conversion, In = %llu");
                  if (bVar36) {
                    pcVar5 = (code *)swi(3);
                    pFVar14 = (FIoStatus *)(*pcVar5)();
                    return pFVar14;
                  }
                }
                iVar20 = *(int *)(lVar18 + 0x10);
                uVar23 = 0;
                if ((int)uVar19 < iVar20) {
                  uVar23 = ~uVar19 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (local_748 = (FScriptContainerElement *)(longlong)(int)uVar19,
                   local_740 = (longlong)iVar20,
                   bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar36)) {
                  pcVar5 = (code *)swi(3);
                  pFVar14 = (FIoStatus *)(*pcVar5)();
                  return pFVar14;
                }
                local_670 = *(undefined8 *)(*(longlong *)(lVar18 + 8) + (longlong)(int)uVar19 * 8);
                TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator>::
                Emplace<FPackageId_const_&>(pTVar8,&local_678,(bool *)&local_670);
                puVar24 = puVar24 + 1;
              }
            }
            else {
              bVar36 = iVar11 + *(int *)(pFVar22 + 8) == 1;
LAB_1445d46f6:
              if (bVar36) goto LAB_1445d4701;
            }
            puVar34 = puVar34 + 4;
            uVar17 = (ulonglong)local_710;
          }
          if (4 < (byte)LogIoStoreOnDemand._0_1_) {
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
          }
          pFVar22 = pFVar22 + 0x10;
          uVar17 = (ulonglong)local_708;
          pTVar35 = local_6f8;
        }
      }
      else {
        if ((*plVar25 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar36)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FIoStatus *)(*pcVar5)();
          return pFVar14;
        }
        local_4f8 = pTVar7->DataPtr;
        uStack_4f0 = *(undefined8 *)&pTVar7->Size;
        iVar20 = *(int *)(*plVar25 + 0x68);
        iVar11 = iVar20 + -1;
        if (iVar20 == 0) {
          iVar11 = 0;
        }
        iVar20 = (int)*(undefined8 *)&pTVar7->Size;
        if (iVar20 == iVar11) {
          if ((iVar20 != 0) && (iVar11 != 0)) {
            iVar13 = iVar11;
            if (iVar20 < iVar11) {
              iVar13 = iVar20;
            }
            iVar13 = FGenericPlatformStricmp::Strnicmp
                               (local_4f8,*(wchar_t **)(*plVar25 + 0x60),(longlong)iVar13);
            if (iVar13 != 0) goto LAB_1445d49d7;
          }
          if (iVar20 == iVar11) goto LAB_1445d4612;
        }
      }
    }
LAB_1445d49d7:
    TStack_5e0.UnvisitedBitMask = TStack_5e0.UnvisitedBitMask & ~TStack_5e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5e0);
  } while( true );
}

// GetInstallSize @ 1445d50f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> * __thiscall
UE::IoStore::FOnDemandIoStore::GetInstallSize
          (FOnDemandIoStore *this,
          TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *__return_storage_ptr__,
          FOnDemandGetInstallSizeArgs *param_1)

{
  int *piVar1;
  TArray<UE::IoStore::FOnDemandChunkEntryReferences,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  atomic<unsigned_char> aVar4;
  FOnDemandContainer *pFVar5;
  FOnDemandInternalContentHandle *pFVar6;
  IOnDemandInstallCache *pIVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  FOnDemandIoStore *pFVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *pTVar14;
  ForElementType<int> FVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  FScriptContainerElement *pFVar22;
  FResolvedContainerChunks *pFVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  bool bVar28;
  undefined1 auStackY_398 [32];
  undefined1 local_347;
  undefined1 local_346;
  undefined1 local_345;
  undefined1 local_344 [4];
  uint local_340;
  undefined1 local_33c [4];
  TArray<UE::IoStore::Private::FResolvedContainerChunks,TSizedDefaultAllocator<32>_> local_338;
  ForAnyElementType local_328;
  int local_320;
  uint local_31c;
  FResolvedContainerChunks *local_318;
  uint local_310;
  FScriptContainerElement *local_308;
  longlong local_300;
  FIoStatus local_2f8;
  atomic<unsigned_char> *local_2e8;
  FOnDemandGetInstallSizeArgs *local_2e0;
  FOnDemandIoStore *local_2d8;
  FIoStatus local_2d0;
  ulonglong local_2c0;
  FResolvedContainerChunks *local_2b8;
  TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *local_2b0;
  FOnDemandContainer *local_2a8;
  TReferenceControllerBase<1> *local_2a0;
  FScriptContainerElement *local_298;
  int iStack_290;
  undefined4 uStack_28c;
  ForElementType<int> local_288;
  int iStack_280;
  undefined4 uStack_27c;
  FOnDemandInternalContentHandle *local_278;
  TReferenceControllerBase<1> *local_270;
  TStringView<wchar_t> local_268;
  undefined4 local_258;
  undefined4 uStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  undefined1 local_248 [32];
  void *local_228;
  undefined4 local_220;
  uint local_21c;
  undefined4 local_218;
  undefined4 local_214;
  ForElementType<FSetElementId> local_208;
  int local_200;
  undefined1 local_1f8 [32];
  void *local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  ForElementType<FSetElementId> local_1b8;
  int local_1b0;
  undefined1 local_1a8 [32];
  void *local_188;
  undefined4 local_180;
  uint local_17c;
  undefined4 local_178;
  undefined4 local_174;
  ForElementType<FSetElementId> local_168;
  int local_160;
  ForElementType<int> local_158;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_398;
  bVar28 = -1 < CpuChannel->Enabled;
  local_2e0 = param_1;
  local_2d8 = this;
  local_2b0 = __return_storage_ptr__;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId778,"FOnDemandIoStore::GetInstallSize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.cpp"
               ,0x30a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId778);
  }
  local_298 = (param_1->MountId).Data.AllocatorInstance.Data;
  uVar20 = 0;
  iVar13 = (param_1->MountId).Data.ArrayNum;
  local_248._0_8_ = (FScriptContainerElement *)0x0;
  local_248._8_8_ = 0;
  local_228 = (void *)0x0;
  local_220 = 0;
  iStack_290 = iVar13 + -1;
  if (iVar13 == 0) {
    iStack_290 = 0;
  }
  local_21c = 0x80;
  local_268._12_4_ = uStack_28c;
  local_268.Size = iStack_290;
  local_218 = 0xffffffff;
  local_214 = 0;
  local_208 = (ForElementType<FSetElementId>)0x0;
  local_200 = 0;
  local_1f8._0_8_ = (FScriptContainerElement *)0x0;
  local_1f8._8_8_ = 0;
  local_1d8 = (void *)0x0;
  local_1d0 = 0;
  local_1cc = 0x80;
  local_1c8 = 0xffffffff;
  local_1c4 = 0;
  local_1b8 = (ForElementType<FSetElementId>)0x0;
  local_1b0 = 0;
  local_268.DataPtr = (wchar_t *)local_298;
  GetContainersAndPackagesForInstall
            (this,&local_2f8,&local_268,&param_1->TagSets,&param_1->PackageIds,
             (TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
              *)local_248,
             (TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *)local_1f8);
  if (local_2f8.ErrorCode == Ok) {
    FIoStatus::~FIoStatus(&local_2f8);
    local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_338.ArrayNum = 0;
    local_338.ArrayMax = 0;
    local_1a8._0_8_ = (FScriptContainerElement *)0x0;
    local_1a8._8_8_ = 0;
    local_188 = (void *)0x0;
    local_180 = 0;
    local_17c = 0x80;
    local_178 = 0xffffffff;
    local_174 = 0;
    local_168 = (ForElementType<FSetElementId>)0x0;
    local_160 = 0;
    IoStore::Private::ResolveChunksToInstall
              ((TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
                *)local_248,
               (TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *)local_1f8,
               (bool)((byte)param_1->Options & 1),(bool)((byte)(param_1->Options >> 1) & 1),
               &local_338,
               (TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *)local_1a8);
    iVar13 = local_338.ArrayNum;
    if ((param_1->ContentHandle).Handle.Object == (FOnDemandInternalContentHandle *)0x0) {
      uVar18 = (ulonglong)local_338.ArrayNum;
      pFVar23 = (FResolvedContainerChunks *)(local_338.AllocatorInstance.Data + uVar18 * 0x28);
      FVar21.Data = local_338.AllocatorInstance.Data;
      while( true ) {
        if ((uint)uVar18 != iVar13) {
          `TCheckedPointerIterator<UE::IoStore::Private::FResolvedContainerChunks_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_33c);
          uVar18 = local_338._8_8_ & 0xffffffff;
        }
        if ((FResolvedContainerChunks *)FVar21.Data == pFVar23) break;
        uVar20 = uVar20 + ((FResolvedContainerChunks *)FVar21.Data)->TotalSize;
        FVar21.Data = FVar21.Data + 0x28;
      }
      FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
      *(ulonglong *)(__return_storage_ptr__->Value).Pad = uVar20;
      (__return_storage_ptr__->Value).Pad[0x10] = '\x01';
      (__return_storage_ptr__->Value).Pad[8] = '\0';
      (__return_storage_ptr__->Value).Pad[9] = '\0';
      (__return_storage_ptr__->Value).Pad[10] = '\0';
      (__return_storage_ptr__->Value).Pad[0xb] = '\0';
      (__return_storage_ptr__->Value).Pad[0xc] = '\0';
      (__return_storage_ptr__->Value).Pad[0xd] = '\0';
      (__return_storage_ptr__->Value).Pad[0xe] = '\0';
      (__return_storage_ptr__->Value).Pad[0xf] = '\0';
      local_160 = 0;
      if (local_168 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_168);
      }
      iVar13 = SUB84(local_1a8._8_8_,4);
      local_1a8._8_8_ = local_1a8._8_8_ & 0xffffffff00000000;
      if (iVar13 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_1a8,0,(int *)(local_1a8 + 0xc));
      }
      local_178 = 0xffffffff;
      local_174 = 0;
      local_180 = 0;
      if (0x80 < local_17c) {
        local_17c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10),0);
      }
      if (local_188 != (void *)0x0) {
        FMemory::Free(local_188);
      }
      if ((FScriptContainerElement *)local_1a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1a8._0_8_);
      }
      DestructItems<UE::IoStore::Private::FResolvedContainerChunks,int>
                ((FResolvedContainerChunks *)local_338.AllocatorInstance.Data,local_338.ArrayNum);
      if ((FResolvedContainerChunks *)local_338.AllocatorInstance.Data !=
          (FResolvedContainerChunks *)0x0) {
        FMemory::Free(local_338.AllocatorInstance.Data);
      }
      local_1b0 = 0;
      if (local_1b8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1b8);
      }
      iVar13 = SUB84(local_1f8._8_8_,4);
      local_1f8._8_8_ = local_1f8._8_8_ & 0xffffffff00000000;
      if (iVar13 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_1f8,0,(int *)(local_1f8 + 0xc));
      }
      local_1c8 = 0xffffffff;
      local_1c4 = 0;
      local_1d0 = 0;
      if (0x80 < local_1cc) {
        local_1cc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10),0);
      }
      if (local_1d8 != (void *)0x0) {
        FMemory::Free(local_1d8);
      }
      if ((FScriptContainerElement *)local_1f8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1f8._0_8_);
      }
      local_200 = 0;
      if (local_208 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_208);
      }
      TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_248,0,local_248._8_4_);
      iVar13 = SUB84(local_248._8_8_,4);
      local_248._8_8_ = local_248._8_8_ & 0xffffffff00000000;
      if (iVar13 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_248,0,(int *)(local_248 + 0xc));
      }
      local_218 = 0xffffffff;
      local_214 = 0;
      local_220 = 0;
      if (0x80 < local_21c) {
        local_21c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0x10),0);
      }
      if (local_228 != (void *)0x0) {
        FMemory::Free(local_228);
      }
      if ((FScriptContainerElement *)local_248._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_248._0_8_);
      }
    }
    else {
      uVar24 = (ulonglong)local_338.ArrayNum;
      local_328.Data = (FScriptContainerElement *)0x0;
      local_320 = 0;
      local_31c = 0;
      local_2b8 = (FResolvedContainerChunks *)(local_338.AllocatorInstance.Data + uVar24 * 0x28);
      local_158.SecondaryData = (ForElementType<int>)0x0;
      local_50 = 0;
      local_4c = 0x40;
      local_300 = 0;
      local_310 = local_338.ArrayNum;
      FVar21.Data = local_338.AllocatorInstance.Data;
      uVar18 = uVar24;
      uVar25 = uVar20;
      while( true ) {
        pFVar23 = local_2b8;
        uVar19 = (uint)uVar20;
        local_318 = (FResolvedContainerChunks *)FVar21.Data;
        if ((int)uVar24 != (int)uVar18) {
          local_347 = 0;
          `TCheckedPointerIterator<UE::IoStore::Private::FResolvedContainerChunks,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_347);
          uVar19 = local_31c;
        }
        __return_storage_ptr__ = local_2b0;
        if ((FResolvedContainerChunks *)FVar21.Data == pFVar23) break;
        local_2c0 = uVar25 + ((FResolvedContainerChunks *)FVar21.Data)->TotalSize;
        local_320 = 0;
        if (((int)uVar19 < 0) && (uVar19 != 0)) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_328,0,(int *)&local_31c);
        }
        local_50 = 0;
        if (local_4c < 0) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,0,&local_158,0,&local_4c);
        }
        local_2e8 = &(this->ContainerMutex).State;
        LOCK();
        bVar11 = ((FMutex *)local_2e8)->State == (atomic<unsigned_char>)0x0;
        if (bVar11) {
          ((FMutex *)local_2e8)->State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar11) {
          FMutex::LockSlow((FMutex *)local_2e8);
        }
        if (((((FResolvedContainerChunks *)FVar21.Data)->Container).Object ==
             (FOnDemandContainer *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          pTVar14 = (TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *)(*pcVar9)();
          return pTVar14;
        }
        pFVar5 = (((FResolvedContainerChunks *)FVar21.Data)->Container).Object;
        if (((param_1->ContentHandle).Handle.Object == (FOnDemandInternalContentHandle *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          pTVar14 = (TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *)(*pcVar9)();
          return pTVar14;
        }
        pFVar6 = (param_1->ContentHandle).Handle.Object;
        pTVar2 = &pFVar5->ChunkEntryReferences;
        iVar13 = (pFVar5->ChunkEntryReferences).ArrayNum;
        local_308 = (pTVar2->AllocatorInstance).Data;
        pFVar3 = local_308 + (longlong)iVar13 * 0x28;
        while( true ) {
          if ((pFVar5->ChunkEntryReferences).ArrayNum != iVar13) {
            local_346 = 0;
            `TCheckedPointerIterator<UE::IoStore::FOnDemandChunkEntryReferences,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(&local_346);
          }
          if (local_308 == pFVar3) break;
          pFVar22 = local_308;
          if (*(FOnDemandInternalContentHandle **)local_308 == pFVar6) goto LAB_1445d5953;
          local_308 = local_308 + 0x28;
        }
        iVar13 = (pFVar5->ChunkEntryReferences).ArrayNum;
        piVar1 = &(pFVar5->ChunkEntryReferences).ArrayMax;
        if (iVar13 == *piVar1) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar2->AllocatorInstance,piVar1);
        }
        (pFVar5->ChunkEntryReferences).ArrayNum = iVar13 + 1;
        pFVar22 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x28;
        DefaultConstructItems<UE::IoStore::FOnDemandChunkEntryReferences,int>(pFVar22,1);
        *(FOnDemandInternalContentHandle **)pFVar22 = pFVar6;
        TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
                  ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar22 + 8),
                   (pFVar5->ChunkEntries).ArrayNum,false);
LAB_1445d5953:
        pFVar23 = local_318;
        pFVar27 = (local_318->EntryIndices).AllocatorInstance.Data;
        iVar13 = (local_318->EntryIndices).ArrayNum;
        pFVar3 = pFVar27 + (longlong)iVar13 * 4;
        while( true ) {
          if ((pFVar23->EntryIndices).ArrayNum != iVar13) {
            local_345 = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_345);
          }
          if (pFVar27 == pFVar3) break;
          uVar19 = *(uint *)pFVar27;
          local_340 = uVar19;
          if ((((int)uVar19 < 0) || (*(int *)(pFVar22 + 0x20) <= (int)uVar19)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            pTVar14 = (TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *)(*pcVar9)();
            return pTVar14;
          }
          pFVar26 = pFVar22 + 8;
          if (*(FScriptContainerElement **)(pFVar22 + 0x18) != (FScriptContainerElement *)0x0) {
            pFVar26 = *(FScriptContainerElement **)(pFVar22 + 0x18);
          }
          uVar17 = uVar19 & 0x1f;
          if ((int)uVar19 < 0) {
            uVar19 = uVar19 + 0x1f;
          }
          if ((*(uint *)(pFVar26 + (longlong)((int)uVar19 >> 5) * 4) >> uVar17 & 1) == 0) {
            FVar15 = (ForElementType<int>)&local_158;
            if (local_158.SecondaryData != (ForElementType<int>)0x0) {
              FVar15 = local_158.SecondaryData;
            }
            if ((ulonglong)FVar15 <= &local_340) {
              FVar15 = (ForElementType<int>)&local_158;
              if (local_158.SecondaryData != (ForElementType<int>)0x0) {
                FVar15 = local_158.SecondaryData;
              }
              if ((&local_340 < (uint *)((longlong)FVar15 + (longlong)local_4c * 4)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar9 = (code *)swi(3);
                pTVar14 = (TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *)(*pcVar9)();
                return pTVar14;
              }
            }
            if (local_50 == local_4c) {
              local_50 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,&local_158,&local_4c);
            }
            lVar16 = (longlong)local_50;
            FVar15 = (ForElementType<int>)&local_158;
            if (local_158.SecondaryData != (ForElementType<int>)0x0) {
              FVar15 = local_158.SecondaryData;
            }
            local_50 = local_50 + 1;
            *(uint *)((longlong)FVar15 + lVar16 * 4) = local_340;
          }
          pFVar27 = pFVar27 + 4;
        }
        LOCK();
        aVar4 = *local_2e8;
        *local_2e8 = (atomic<unsigned_char>)((char)*local_2e8 + -1);
        UNLOCK();
        if (((byte)aVar4 & 2) != 0) {
          FMutex::WakeWaitingThread((FMutex *)local_2e8);
        }
        pFVar10 = local_2d8;
        pFVar23 = local_318;
        if (local_50 != 0) {
          if (((local_2d8->InstallCache).Object == (IOnDemandInstallCache *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            pTVar14 = (TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *)(*pcVar9)();
            return pTVar14;
          }
          iVar13 = local_50;
          pIVar7 = (pFVar10->InstallCache).Object;
          pcVar9 = *(code **)((longlong)*pIVar7 + 0x70);
          local_278 = (local_2e0->ContentHandle).Handle.Object;
          local_270 = (local_2e0->ContentHandle).Handle.SharedReferenceCount.ReferenceController;
          if (local_270 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_270->SharedReferenceCount =
                 (atomic<int>)((int)local_270->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_288 = (ForElementType<int>)&local_158;
          if (local_158.SecondaryData != (ForElementType<int>)0x0) {
            local_288 = local_158.SecondaryData;
          }
          if ((local_50 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            pTVar14 = (TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *)(*pcVar9)();
            return pTVar14;
          }
          pFVar23 = local_318;
          iStack_280 = iVar13;
          if (((local_318->Container).Object == (FOnDemandContainer *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            pTVar14 = (TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *)(*pcVar9)();
            return pTVar14;
          }
          pTVar8 = (pFVar23->Container).SharedReferenceCount.ReferenceController;
          pFVar5 = (pFVar23->Container).Object;
          if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pFVar5 == (FOnDemandContainer *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            pTVar14 = (TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *)(*pcVar9)();
            return pTVar14;
          }
          if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_258 = local_288._0_4_;
          uStack_254 = local_288._4_4_;
          iStack_250 = iStack_280;
          uStack_24c = uStack_27c;
          local_2a8 = pFVar5;
          local_2a0 = pTVar8;
          cVar12 = (*pcVar9)(pIVar7,&local_2a8,&local_258,&local_278);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2a0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar8);
          if ((4 < (byte)LogIoStoreOnDemand._0_1_) && (cVar12 == '\0')) {
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
          }
          iVar13 = local_320;
          pFVar3 = local_328.Data + (longlong)local_320 * 4;
          FVar21.Data = local_328.Data;
          while( true ) {
            if (local_320 != iVar13) {
              local_344[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_344);
            }
            if (FVar21.Data == pFVar3) break;
            uVar19 = *(uint *)FVar21.Data;
            if (((pFVar23->Container).Object == (FOnDemandContainer *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar11)) {
              pcVar9 = (code *)swi(3);
              pTVar14 = (TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *)(*pcVar9)();
              return pTVar14;
            }
            pFVar5 = (pFVar23->Container).Object;
            uVar17 = 0;
            if ((int)uVar19 < (pFVar5->ChunkEntries).ArrayNum) {
              uVar17 = ~uVar19 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              pTVar14 = (TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *)(*pcVar9)();
              return pTVar14;
            }
            local_300 = local_300 +
                        ((ulonglong)((pFVar5->ChunkEntries).DataPtr[(int)uVar19].EncodedSize + 0xf)
                        & 0xfffffff0);
            FVar21.Data = FVar21.Data + 4;
          }
        }
        uVar24 = local_338._8_8_ & 0xffffffff;
        FVar21.Data = (FScriptContainerElement *)(pFVar23 + 1);
        uVar20 = (ulonglong)local_31c;
        uVar18 = (ulonglong)local_310;
        this = local_2d8;
        param_1 = local_2e0;
        uVar25 = local_2c0;
      }
      FIoStatus::FIoStatus(&local_2b0->StatusValue);
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
      *(ulonglong *)(__return_storage_ptr__->Value).Pad = uVar25;
      (__return_storage_ptr__->Value).Pad[0x10] = '\x01';
      *(longlong *)((__return_storage_ptr__->Value).Pad + 8) = local_300;
      if (local_158.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_158.SecondaryData);
      }
      if (local_328.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data);
      }
      local_160 = 0;
      if (local_168 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_168);
      }
      TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1a8);
      DestructItems<UE::IoStore::Private::FResolvedContainerChunks,int>
                ((FResolvedContainerChunks *)local_338.AllocatorInstance.Data,local_338.ArrayNum);
      if ((FResolvedContainerChunks *)local_338.AllocatorInstance.Data !=
          (FResolvedContainerChunks *)0x0) {
        FMemory::Free(local_338.AllocatorInstance.Data);
      }
      local_1b0 = 0;
      if (local_1b8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1b8);
      }
      TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1f8);
      local_200 = 0;
      if (local_208 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_208);
      }
      TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_248);
    }
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    local_2d0.ErrorMessage.Chars = local_2f8.ErrorMessage.Chars;
    if (local_2f8.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_2f8.ErrorMessage.Chars + -4) = *(int *)(local_2f8.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_2d0.ErrorCode = local_2f8.ErrorCode;
    local_2d0.SystemErrorCode = local_2f8.SystemErrorCode;
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    if ((local_2d0.ErrorCode == Ok) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InStatus.IsOk()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                            ,0x102,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      pTVar14 = (TIoStatusOr<UE::IoStore::FOnDemandInstallSizeResult> *)(*pcVar9)();
      return pTVar14;
    }
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&local_2d0);
    FIoStatus::~FIoStatus(&local_2d0);
    FIoStatus::~FIoStatus(&local_2f8);
    local_1b0 = 0;
    if (local_1b8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1b8);
    }
    iVar13 = SUB84(local_1f8._8_8_,4);
    local_1f8._8_8_ = local_1f8._8_8_ & 0xffffffff00000000;
    if (iVar13 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_1f8,0,(int *)(local_1f8 + 0xc));
    }
    local_1c8 = 0xffffffff;
    local_1c4 = 0;
    local_1d0 = 0;
    if (0x80 < local_1cc) {
      local_1cc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10),0);
    }
    if (local_1d8 != (void *)0x0) {
      FMemory::Free(local_1d8);
    }
    if ((FScriptContainerElement *)local_1f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1f8._0_8_);
    }
    local_200 = 0;
    if (local_208 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_208);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_248,0,local_248._8_4_);
    iVar13 = SUB84(local_248._8_8_,4);
    local_248._8_8_ = local_248._8_8_ & 0xffffffff00000000;
    if (iVar13 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_248,0,(int *)(local_248 + 0xc));
    }
    local_218 = 0xffffffff;
    local_214 = 0;
    local_220 = 0;
    if (0x80 < local_21c) {
      local_21c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_248 + 0x10),0);
    }
    if (local_228 != (void *)0x0) {
      FMemory::Free(local_228);
    }
    if ((FScriptContainerElement *)local_248._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_248._0_8_);
    }
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return __return_storage_ptr__;
}

// GetInstallSizesByMountId @ 1445d5ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FIoStatus * __thiscall
UE::IoStore::FOnDemandIoStore::GetInstallSizesByMountId
          (FOnDemandIoStore *this,FIoStatus *__return_storage_ptr__,
          FOnDemandGetInstallSizeArgs *param_1,
          TMap<FString,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>_>
          *param_2)

{
  FResolvedContainerChunks *pFVar1;
  int iVar2;
  int iVar3;
  ulong64 uVar4;
  FOnDemandContainer *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FIoStatus *pFVar10;
  longlong lVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  FString *pFVar14;
  ForAnyElementType FVar15;
  bool bVar16;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1b7 [7];
  TArray<UE::IoStore::Private::FResolvedContainerChunks,TSizedDefaultAllocator<32>_> local_1b0;
  int local_1a0 [2];
  FIoStatus local_198;
  undefined8 local_188;
  FIoStatus *local_180;
  FScriptContainerElement *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  FString *local_168;
  undefined8 *local_160;
  TStringView<wchar_t> local_158;
  undefined1 local_148 [32];
  void *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  ForElementType<FSetElementId> local_108;
  int local_100;
  void *local_f8;
  undefined8 local_f0;
  TBitArray<FDefaultBitArrayAllocator> local_e8;
  undefined4 local_c8;
  undefined4 local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar16 = -1 < CpuChannel->Enabled;
  local_180 = __return_storage_ptr__;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId866,"FOnDemandIoStore::GetInstallSizesByMountId",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.cpp"
               ,0x362);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId866);
  }
  local_178 = (param_1->MountId).Data.AllocatorInstance.Data;
  iVar2 = (param_1->MountId).Data.ArrayNum;
  local_148._0_8_ = (FScriptContainerElement *)0x0;
  local_148._8_8_ = 0;
  local_128 = (void *)0x0;
  iStack_170 = iVar2 + -1;
  if (iVar2 == 0) {
    iStack_170 = 0;
  }
  local_120 = 0;
  local_158._12_4_ = uStack_16c;
  local_158.Size = iStack_170;
  local_11c = 0x80;
  local_118 = 0xffffffff;
  local_114 = 0;
  local_108 = (ForElementType<FSetElementId>)0x0;
  local_100 = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_e8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_e8.NumBits = 0;
  local_e8.MaxBits = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (ForElementType<FSetElementId>)0x0;
  local_b0 = 0;
  local_158.DataPtr = (wchar_t *)local_178;
  GetContainersAndPackagesForInstall
            (this,&local_198,&local_158,&param_1->TagSets,&param_1->PackageIds,
             (TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
              *)local_148,
             (TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *)&local_f8);
  if (local_198.ErrorCode == Ok) {
    FIoStatus::~FIoStatus(&local_198);
    local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.ArrayNum = 0;
    local_1b0.ArrayMax = 0;
    local_a8.Elements._0_8_ = 0;
    local_a8.Elements._8_8_ = 0;
    local_a8.Elements._32_8_ = 0;
    local_a8.Elements._40_4_ = 0;
    local_a8.Elements._44_4_ = 0x80;
    local_a8.Elements._48_4_ = 0xffffffff;
    local_a8.Elements._52_4_ = 0;
    local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a8.HashSize = 0;
    IoStore::Private::ResolveChunksToInstall
              ((TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
                *)local_148,
               (TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *)&local_f8,
               (bool)((byte)param_1->Options & 1),(bool)((byte)(param_1->Options >> 1) & 1),
               &local_1b0,&local_a8);
    iVar2 = local_1b0.ArrayNum;
    uVar12 = (ulonglong)local_1b0.ArrayNum;
    pFVar1 = (FResolvedContainerChunks *)(local_1b0.AllocatorInstance.Data + uVar12 * 0x28);
    FVar15.Data = local_1b0.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar12 != iVar2) {
        local_1b7[0] = 0;
        `TCheckedPointerIterator<UE::IoStore::Private::FResolvedContainerChunks,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_1b7);
      }
      __return_storage_ptr__ = local_180;
      iVar9 = 0;
      if ((FResolvedContainerChunks *)FVar15.Data == pFVar1) break;
      uVar4 = ((FResolvedContainerChunks *)FVar15.Data)->TotalSize;
      local_188 = 0;
      if (((((FResolvedContainerChunks *)FVar15.Data)->Container).Object ==
           (FOnDemandContainer *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FIoStatus *)(*pcVar6)();
        return pFVar10;
      }
      pFVar5 = (((FResolvedContainerChunks *)FVar15.Data)->Container).Object;
      pFVar14 = &pFVar5->MountId;
      iVar3 = (pFVar5->MountId).Data.ArrayNum;
      if (iVar3 == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        iVar9 = iVar3 + -1;
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar13);
      iVar9 = TSet<TTuple<FString,unsigned___int64>,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,unsigned___int64>,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>,FDefaultSetAllocator>
                          *)param_2,uVar8,pFVar14);
      if ((iVar9 == -1) || (lVar11 = (longlong)iVar9 * 0x20 + *(longlong *)param_2, lVar11 == 0)) {
        local_160 = &local_188;
        local_168 = pFVar14;
        TSet<TTuple<FString,unsigned___int64>,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TPairInitializer<FString_const_&,unsigned___int64_&&>_>
                  ((TSet<TTuple<FString,unsigned___int64>,TDefaultMapHashableKeyFuncs<FString,unsigned___int64,0>,FDefaultSetAllocator>
                    *)param_2,(uint)local_1a0,
                   (TPairInitializer<FString_const_&,unsigned___int64_&&> *)(ulonglong)uVar8,
                   (bool *)&local_168);
        lVar11 = (longlong)local_1a0[0] * 0x20 + *(longlong *)param_2;
      }
      *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + uVar4;
      FVar15.Data = FVar15.Data + 0x28;
      uVar12 = local_1b0._8_8_ & 0xffffffff;
    }
    FIoStatus::FIoStatus(local_180,Ok);
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    DestructItems<UE::IoStore::Private::FResolvedContainerChunks,int>
              ((FResolvedContainerChunks *)local_1b0.AllocatorInstance.Data,local_1b0.ArrayNum);
    if ((FResolvedContainerChunks *)local_1b0.AllocatorInstance.Data !=
        (FResolvedContainerChunks *)0x0) {
      FMemory::Free(local_1b0.AllocatorInstance.Data);
    }
    local_b0 = 0;
    if (local_b8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_b8);
    }
    TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_f8);
    local_100 = 0;
    if (local_108 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_148);
  }
  else {
    (__return_storage_ptr__->ErrorMessage).Chars = local_198.ErrorMessage.Chars;
    if (local_198.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_198.ErrorMessage.Chars + -4) = *(int *)(local_198.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    __return_storage_ptr__->ErrorCode = local_198.ErrorCode;
    __return_storage_ptr__->SystemErrorCode = local_198.SystemErrorCode;
    FIoStatus::~FIoStatus(&local_198);
    local_b0 = 0;
    if (local_b8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_b8);
    }
    uVar12 = local_f0 >> 0x20;
    local_f0 = local_f0 & 0xffffffff00000000;
    if ((int)uVar12 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&local_f8,0,(int *)((longlong)&local_f0 + 4));
    }
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_e8.NumBits = 0;
    if (0x80 < (uint)local_e8.MaxBits) {
      local_e8.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_e8,0);
    }
    if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_e8.AllocatorInstance.SecondaryData);
    }
    if (local_f8 != (void *)0x0) {
      FMemory::Free(local_f8);
    }
    local_100 = 0;
    if (local_108 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_148,0,local_148._8_4_);
    iVar2 = SUB84(local_148._8_8_,4);
    local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_148,0,(int *)(local_148 + 0xc));
    }
    local_118 = 0xffffffff;
    local_114 = 0;
    local_120 = 0;
    if (0x80 < local_11c) {
      local_11c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),0);
    }
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_148._0_8_);
    }
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetInstalledChunkInfo @ 1445d6370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandChunkInfo * __thiscall
UE::IoStore::FOnDemandIoStore::GetInstalledChunkInfo
          (FOnDemandIoStore *this,FOnDemandChunkInfo *__return_storage_ptr__,FIoChunkId *param_1,
          EIoErrorCode *param_2)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  int iVar2;
  FOnDemandContainer *pFVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  FOnDemandChunkInfo *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 local_res8 [8];
  undefined1 local_58 [4];
  uint local_54;
  longlong local_50;
  FOnDemandChunkEntry *local_48;
  
  this_00 = &this->ContainerMutex;
  LOCK();
  bVar15 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar15) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar15) {
    FMutex::LockSlow(this_00);
  }
  iVar2 = (this->Containers).ArrayNum;
  pFVar12 = (this->Containers).AllocatorInstance.Data;
  pFVar13 = pFVar12 + (longlong)iVar2 * 0x10;
  do {
    if ((this->Containers).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar13) {
      *param_2 = UnknownChunkID;
      goto LAB_1445d65fa;
    }
    if ((*(longlong *)pFVar12 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FOnDemandChunkInfo *)(*pcVar6)();
      return pFVar9;
    }
    if ((*(byte *)(*(longlong *)pFVar12 + 0x114) & 10) == 10) {
      if ((*(longlong *)pFVar12 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FOnDemandChunkInfo *)(*pcVar6)();
        return pFVar9;
      }
      pFVar3 = *(FOnDemandContainer **)pFVar12;
      uVar7 = FOnDemandContainer::FindChunkEntryIndex(pFVar3,param_1);
      if ((uVar7 != 0xffffffff) &&
         (local_48 = TArrayView<UE::IoStore::FOnDemandChunkEntry,int>::operator[]
                               (&pFVar3->ChunkEntries,uVar7), local_48 != (FOnDemandChunkEntry *)0x0
         )) break;
    }
    pFVar12 = pFVar12 + 0x10;
  } while( true );
  if ((*(longlong *)pFVar12 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FOnDemandChunkInfo *)(*pcVar6)();
    return pFVar9;
  }
  lVar4 = *(longlong *)pFVar12;
  lVar11 = *(longlong *)(lVar4 + 0xe8);
  iVar2 = *(int *)(lVar4 + 0xf0);
  plVar14 = (longlong *)(lVar11 + 0x18);
  local_50 = (longlong)iVar2 * 0x28 + lVar11;
  local_54 = uVar7 & 0x1f;
  do {
    if (*(int *)(lVar4 + 0xf0) != iVar2) {
      local_58[0] = 0;
      `TCheckedPointerIterator<UE::IoStore::FOnDemandChunkEntryReferences_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_58);
    }
    if (lVar11 == local_50) {
      *param_2 = NotInstalled;
LAB_1445d65fa:
      (__return_storage_ptr__->SharedContainer).Object = (FOnDemandContainer *)0x0;
      (__return_storage_ptr__->SharedContainer).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->Entry = &FOnDemandChunkEntry::Null;
      goto LAB_1445d660e;
    }
    if ((((int)uVar7 < 0) || ((int)plVar14[1] <= (int)uVar7)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FOnDemandChunkInfo *)(*pcVar6)();
      return pFVar9;
    }
    plVar10 = (longlong *)*plVar14;
    if (plVar10 == (longlong *)0x0) {
      plVar10 = plVar14 + -2;
    }
    uVar8 = uVar7;
    if ((int)uVar7 < 0) {
      uVar8 = uVar7 + 0x1f;
    }
    if ((*(uint *)((longlong)plVar10 + (longlong)((int)uVar8 >> 5) * 4) >> (local_54 & 0x1f) & 1) !=
        0) {
      *param_2 = Ok;
      pTVar5 = *(TReferenceControllerBase<1> **)(pFVar12 + 8);
      pFVar3 = *(FOnDemandContainer **)pFVar12;
      if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
        (__return_storage_ptr__->SharedContainer).Object = pFVar3;
        (__return_storage_ptr__->SharedContainer).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        __return_storage_ptr__->Entry = local_48;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        (__return_storage_ptr__->SharedContainer).Object = pFVar3;
        (__return_storage_ptr__->SharedContainer).SharedReferenceCount.ReferenceController = pTVar5;
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        __return_storage_ptr__->Entry = local_48;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      }
LAB_1445d660e:
      LOCK();
      aVar1 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar1 & 2) != 0) {
        FMutex::WakeWaitingThread(this_00);
      }
      return __return_storage_ptr__;
    }
    lVar11 = lVar11 + 0x28;
    plVar14 = plVar14 + 5;
  } while( true );
}

// GetReferencedContent @ 1445d6f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TBitArray<FDefaultBitArrayAllocator> * __thiscall
UE::IoStore::FOnDemandIoStore::GetReferencedContent
          (FOnDemandIoStore *this,TBitArray<FDefaultBitArrayAllocator> *__return_storage_ptr__,
          TSharedPtr<UE::IoStore::FOnDemandContainer,1> *param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  bool bVar4;
  
  this_00 = &this->ContainerMutex;
  LOCK();
  bVar4 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    FMutex::LockSlow(this_00);
  }
  if ((param_1->Object == (FOnDemandContainer *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(*pcVar2)();
    return pTVar3;
  }
  FOnDemandContainer::GetReferencedChunkEntries(param_1->Object,__return_storage_ptr__);
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return __return_storage_ptr__;
}

// GetReferencedContent @ 1445d7000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoStore::GetReferencedContent
          (FOnDemandIoStore *this,
          TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  atomic<unsigned_char> aVar1;
  int iVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  code *pcVar4;
  ForElementType<unsigned_int> *pFVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  TBitArray<FDefaultBitArrayAllocator> *pTVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  TBitArray<FDefaultBitArrayAllocator> *local_a8;
  TBitArray<FDefaultBitArrayAllocator> *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_78 [8];
  atomic<unsigned_char> *local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_70 = &(this->ContainerMutex).State;
  LOCK();
  bVar10 = ((FMutex *)local_70)->State == (atomic<unsigned_char>)0x0;
  if (bVar10) {
    ((FMutex *)local_70)->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar10) {
    FMutex::LockSlow((FMutex *)local_70);
  }
  iVar2 = (this->Containers).ArrayNum;
  pTVar9 = (TBitArray<FDefaultBitArrayAllocator> *)(this->Containers).AllocatorInstance.Data;
  pFVar5 = &pTVar9->AllocatorInstance;
  do {
    if ((this->Containers).ArrayNum != iVar2) {
      local_78[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_78);
    }
    if (pTVar9 == (TBitArray<FDefaultBitArrayAllocator> *)
                  (pFVar5->InlineData + (longlong)iVar2 * 0x10)) {
      LOCK();
      aVar1 = *local_70;
      *local_70 = (atomic<unsigned_char>)((char)*local_70 + -1);
      UNLOCK();
      if (((byte)aVar1 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)local_70);
      }
      return;
    }
    if ((*(longlong *)(pTVar9->AllocatorInstance).InlineData == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar7 = *(longlong *)(pTVar9->AllocatorInstance).InlineData;
    if ((*(byte *)(lVar7 + 0x114) & 4) == 0) {
      if ((lVar7 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar7 = *(longlong *)(pTVar9->AllocatorInstance).InlineData;
      if ((*(byte *)(lVar7 + 0x114) & 1) == 0) {
        if (param_3) {
          if ((lVar7 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar7 = *(longlong *)(pTVar9->AllocatorInstance).InlineData;
          if (*(longlong *)(lVar7 + 0x20) == 0) goto LAB_1445d7391;
        }
        if ((lVar7 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FOnDemandContainer::GetReferencedChunkEntries
                  (*(FOnDemandContainer **)(pTVar9->AllocatorInstance).InlineData,&local_68);
        if (local_68.NumBits == 0) {
          if (param_3) {
            if ((*(longlong *)(pTVar9->AllocatorInstance).InlineData == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
                      (&local_68,
                       *(int *)(*(longlong *)(pTVar9->AllocatorInstance).InlineData + 0xe0),false);
            if (local_68.NumBits != 0) goto LAB_1445d71ee;
          }
        }
        else {
LAB_1445d71ee:
          pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(param_1->AllocatorInstance).Data;
          if ((pTVar3 <= pTVar9) &&
             (pTVar9 < (TBitArray<FDefaultBitArrayAllocator> *)
                       ((pTVar3->AllocatorInstance).InlineData + (longlong)param_1->ArrayMax * 0x10)
             )) {
            local_90 = (longlong)param_1->ArrayNum;
            local_88 = 0x10;
            local_a8 = pTVar9;
            local_a0 = pTVar3;
            local_98 = (longlong)param_1->ArrayMax;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          iVar6 = param_1->ArrayNum;
          if (iVar6 == param_1->ArrayMax) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar6 + 1;
          pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
          *(undefined8 *)pFVar8 = *(undefined8 *)(pTVar9->AllocatorInstance).InlineData;
          lVar7 = *(longlong *)((pTVar9->AllocatorInstance).InlineData + 8);
          *(longlong *)(pFVar8 + 8) = lVar7;
          if (lVar7 != 0) {
            LOCK();
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
            UNLOCK();
          }
          pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(param_2->AllocatorInstance).Data;
          if ((pTVar3 <= &local_68) && (&local_68 < pTVar3 + param_2->ArrayMax)) {
            local_90 = (longlong)param_2->ArrayNum;
            local_88 = 0x20;
            local_a8 = &local_68;
            local_a0 = pTVar3;
            local_98 = (longlong)param_2->ArrayMax;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          iVar6 = param_2->ArrayNum;
          if (iVar6 == param_2->ArrayMax) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x20;
          param_2->ArrayNum = iVar6 + 1;
          *(undefined8 *)(pFVar8 + 0x10) = 0;
          if (local_68.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
            memmove(pFVar8,&local_68,0x10);
          }
          if (*(void **)(pFVar8 + 0x10) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar8 + 0x10));
          }
          *(ForElementType<unsigned_int> *)(pFVar8 + 0x10) =
               local_68.AllocatorInstance.SecondaryData;
          local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          *(int *)(pFVar8 + 0x18) = local_68.NumBits;
          *(int *)(pFVar8 + 0x1c) = local_68.MaxBits;
          local_68.NumBits = 0;
          local_68.MaxBits = 0;
        }
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
        }
      }
    }
LAB_1445d7391:
    pTVar9 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar9->AllocatorInstance).SecondaryData;
  } while( true );
}

// GetReferencedContentByHandle @ 1445d7410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445d7750) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoStore::GetReferencedContentByHandle
          (FOnDemandIoStore *this,
          TMap<UE::IoStore::FOnDemandWeakContentHandle,TArray<UE::IoStore::FOnDemandContainerChunkEntryReferences,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FOnDemandWeakContentHandle,TArray<UE::IoStore::FOnDemandContainerChunkEntryReferences,TSizedDefaultAllocator<32>_>,0>_>
          *param_1)

{
  ForAnyElementType *pFVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ForElementType<unsigned_int> _Dst;
  wchar_t *pwVar10;
  undefined1 *puVar11;
  ulong64 *puVar12;
  FScriptContainerElement *pFVar13;
  ulong64 *puVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ulong64 *puVar17;
  bool bVar18;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_a8;
  undefined1 local_a7 [3];
  int local_a4;
  uint local_a0;
  FOnDemandWeakContentHandle *local_98;
  ulong64 *local_90;
  FOnDemandIoStore *local_88;
  FScriptContainerElement *local_80;
  atomic<unsigned_char> *local_78;
  FOnDemandWeakContentHandle local_70;
  longlong local_60;
  TReferenceControllerBase<1> *local_58;
  TBitArray<FDefaultBitArrayAllocator> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_78 = &(this->ContainerMutex).State;
  LOCK();
  bVar18 = ((FMutex *)local_78)->State == (atomic<unsigned_char>)0x0;
  if (bVar18) {
    ((FMutex *)local_78)->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  local_88 = this;
  if (!bVar18) {
    FMutex::LockSlow((FMutex *)local_78);
  }
  local_a0 = (this->Containers).ArrayNum;
  uVar8 = (ulonglong)(int)local_a0;
  pFVar16 = (this->Containers).AllocatorInstance.Data;
  local_80 = pFVar16 + uVar8 * 0x10;
  do {
    pFVar13 = local_80;
    if ((this->Containers).ArrayNum != (int)uVar8) {
      local_a7[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_a7);
    }
    if (pFVar16 == pFVar13) {
      LOCK();
      aVar2 = *local_78;
      *local_78 = (atomic<unsigned_char>)((char)*local_78 + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)local_78);
      }
      return;
    }
    if ((*(longlong *)pFVar16 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *(longlong *)pFVar16;
    puVar17 = *(ulong64 **)(lVar4 + 0xe8);
    iVar3 = *(int *)(lVar4 + 0xf0);
    puVar14 = puVar17 + 4;
    local_90 = puVar17 + (longlong)iVar3 * 5;
    while( true ) {
      puVar12 = local_90;
      if (*(int *)(lVar4 + 0xf0) != iVar3) {
        local_a8 = 0;
        `TCheckedPointerIterator<UE::IoStore::FOnDemandChunkEntryReferences,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_a8);
      }
      if (puVar17 == puVar12) break;
      FOnDemandWeakContentHandle::FromUnsafeHandle(&local_70,*puVar17);
      uVar15 = (int)(local_70.HandleId >> 0x20) * 0x17 + (int)local_70.HandleId;
      if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
        puVar11 = &param_1->field_0x38;
        if (*(undefined1 **)&param_1->field_0x40 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&param_1->field_0x40;
        }
        iVar7 = *(int *)(puVar11 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & uVar15) * 4);
        if (iVar7 != -1) {
          do {
            lVar9 = *(longlong *)param_1 + (longlong)iVar7 * 0x28;
            if (*(ulong64 *)(*(longlong *)param_1 + (longlong)iVar7 * 0x28) == local_70.HandleId) {
              if (lVar9 != 0) goto LAB_1445d75c2;
              break;
            }
            iVar7 = *(int *)(lVar9 + 0x20);
          } while (iVar7 != -1);
        }
      }
      local_98 = &local_70;
      local_d8 = (longlong *)0x0;
      TSet<TTuple<UE::IoStore::FOnDemandWeakContentHandle,TArray<UE::IoStore::FOnDemandContainerChunkEntryReferences,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::IoStore::FOnDemandWeakContentHandle,TArray<UE::IoStore::FOnDemandContainerChunkEntryReferences,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<UE::IoStore::FOnDemandWeakContentHandle_const_&>_>
                ((TSet<TTuple<UE::IoStore::FOnDemandWeakContentHandle,TArray<UE::IoStore::FOnDemandContainerChunkEntryReferences,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::IoStore::FOnDemandWeakContentHandle,TArray<UE::IoStore::FOnDemandContainerChunkEntryReferences,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)param_1,(uint)&local_a4,
                 (TKeyInitializer<UE::IoStore::FOnDemandWeakContentHandle_const_&> *)
                 (ulonglong)uVar15,(bool *)&local_98);
      lVar9 = *(longlong *)param_1 + (longlong)local_a4 * 0x28;
LAB_1445d75c2:
      pFVar1 = (ForAnyElementType *)(lVar9 + 0x10);
      local_60 = *(longlong *)pFVar16;
      local_58 = *(TReferenceControllerBase<1> **)(pFVar16 + 8);
      if (local_58 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(int *)((longlong)local_58 + 8) = *(int *)((longlong)local_58 + 8) + 1;
        UNLOCK();
      }
      local_50.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_50.NumBits = 0;
      local_50.MaxBits = 0;
      uVar15 = (int)*puVar14 + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar15) {
        uVar6 = 0x80;
        if (0x80 < (int)uVar15) {
          uVar6 = uVar15;
        }
        local_50._24_8_ = (ulonglong)uVar6 << 0x20;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_50,0);
      }
      iVar7 = (int)*puVar14;
      local_50.NumBits = iVar7;
      if (iVar7 != 0) {
        puVar12 = (ulong64 *)puVar14[-1];
        if ((ulong64 *)puVar14[-1] == (ulong64 *)0x0) {
          puVar12 = puVar14 + -3;
        }
        _Dst = (ForElementType<unsigned_int>)&local_50;
        if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          _Dst = local_50.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)_Dst,puVar12,(ulonglong)(iVar7 + 0x1fU >> 5) << 2);
      }
      pFVar13 = pFVar1->Data;
      if ((pFVar13 <= (FScriptContainerElement *)&local_60) &&
         ((FScriptContainerElement *)&local_60 < pFVar13 + (longlong)*(int *)(lVar9 + 0x1c) * 0x30))
      {
        local_c0 = (longlong)*(int *)(lVar9 + 0x18);
        local_b8 = 0x30;
        local_d8 = &local_60;
        local_d0 = pFVar13;
        local_c8 = (longlong)*(int *)(lVar9 + 0x1c);
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar18) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = *(int *)(lVar9 + 0x18);
      if (iVar7 == *(int *)(lVar9 + 0x1c)) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,pFVar1,(int *)(lVar9 + 0x1c));
      }
      *(int *)(lVar9 + 0x18) = iVar7 + 1;
      pFVar13 = pFVar1->Data + (longlong)iVar7 * 0x30;
      *(longlong *)pFVar13 = local_60;
      *(TReferenceControllerBase<1> **)(pFVar13 + 8) = local_58;
      local_58 = (TReferenceControllerBase<1> *)0x0;
      local_60 = 0;
      *(undefined8 *)(pFVar13 + 0x20) = 0;
      if (local_50.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
        memmove(pFVar13 + 0x10,&local_50,0x10);
      }
      if (*(void **)(pFVar13 + 0x20) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar13 + 0x20));
      }
      *(ForElementType<unsigned_int> *)(pFVar13 + 0x20) = local_50.AllocatorInstance.SecondaryData;
      *(int *)(pFVar13 + 0x28) = local_50.NumBits;
      *(int *)(pFVar13 + 0x2c) = local_50.MaxBits;
      local_50.NumBits = 0;
      local_50.MaxBits = 0;
      local_50.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
      if (local_70.DebugName.Chars != (wchar_t *)0x0) {
        pwVar10 = local_70.DebugName.Chars + -4;
        LOCK();
        iVar7 = *(int *)pwVar10;
        *(int *)pwVar10 = *(int *)pwVar10 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          FMemory::Free(pwVar10);
        }
      }
      puVar17 = puVar17 + 5;
      puVar14 = puVar14 + 5;
    }
    pFVar16 = pFVar16 + 0x10;
    uVar8 = (ulonglong)local_a0;
    this = local_88;
  } while( true );
}

// GetStreamingChunkInfo @ 1445d89c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandChunkInfo * __thiscall
UE::IoStore::FOnDemandIoStore::GetStreamingChunkInfo
          (FOnDemandIoStore *this,FOnDemandChunkInfo *__return_storage_ptr__,FIoChunkId *param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  int iVar2;
  FOnDemandContainer *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  int iVar6;
  FOnDemandChunkInfo *pFVar7;
  FOnDemandChunkEntry *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  
  this_00 = &this->ContainerMutex;
  LOCK();
  bVar11 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar11) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar11) {
    FMutex::LockSlow(this_00);
  }
  iVar2 = (this->Containers).ArrayNum;
  pFVar9 = (this->Containers).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar2 * 0x10;
  do {
    if ((this->Containers).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar10) {
      (__return_storage_ptr__->SharedContainer).Object = (FOnDemandContainer *)0x0;
      (__return_storage_ptr__->SharedContainer).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->Entry = &FOnDemandChunkEntry::Null;
      goto LAB_1445d8b23;
    }
    if ((*(longlong *)pFVar9 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FOnDemandChunkInfo *)(*pcVar5)();
      return pFVar7;
    }
    if ((*(byte *)(*(longlong *)pFVar9 + 0x114) & 6) == 6) {
      if ((*(longlong *)pFVar9 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FOnDemandChunkInfo *)(*pcVar5)();
        return pFVar7;
      }
      pFVar3 = *(FOnDemandContainer **)pFVar9;
      iVar6 = FOnDemandContainer::FindChunkEntryIndex(pFVar3,param_1);
      if ((iVar6 != -1) &&
         (pFVar8 = TArrayView<UE::IoStore::FOnDemandChunkEntry,int>::operator[]
                             (&pFVar3->ChunkEntries,iVar6), pFVar8 != (FOnDemandChunkEntry *)0x0)) {
        pTVar4 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
        pFVar3 = *(FOnDemandContainer **)pFVar9;
        if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
          (__return_storage_ptr__->SharedContainer).Object = pFVar3;
          (__return_storage_ptr__->SharedContainer).SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          __return_storage_ptr__->Entry = pFVar8;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        else {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          (__return_storage_ptr__->SharedContainer).Object = pFVar3;
          (__return_storage_ptr__->SharedContainer).SharedReferenceCount.ReferenceController =
               pTVar4;
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          __return_storage_ptr__->Entry = pFVar8;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
        }
LAB_1445d8b23:
        LOCK();
        aVar1 = this_00->State;
        this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
        UNLOCK();
        if (((byte)aVar1 & 2) != 0) {
          FMutex::WakeWaitingThread(this_00);
        }
        return __return_storage_ptr__;
      }
    }
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// Initialize @ 1445daac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FIoStatus * __thiscall
UE::IoStore::FOnDemandIoStore::Initialize(FOnDemandIoStore *this,FIoStatus *__return_storage_ptr__)

{
  TSharedPtr<UE::IoStore::IOnDemandHttpIoDispatcherBackend,1> *pTVar1;
  TUniquePtr<UE::IoStore::FOnDemandHttpThread,TDefaultDelete<UE::IoStore::FOnDemandHttpThread>_>
  *pTVar2;
  TUniquePtr<UE::IoStore::FOnDemandContentInstaller,TDefaultDelete<UE::IoStore::FOnDemandContentInstaller>_>
  *this_00;
  IOnDemandHttpIoDispatcherBackend *pIVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  FDelegateHandle FVar7;
  wchar_t *pwVar8;
  FIasCacheConfig *pFVar9;
  TUniquePtr<UE::IoStore::IIasCache,TDefaultDelete<UE::IoStore::IIasCache>_> TVar10;
  TReferenceControllerBase<1> *pTVar11;
  FIoStatus *pFVar12;
  IIasCache IVar13;
  IIasCache IVar14;
  TMulticastDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> *this_01;
  FOnDemandHttpThread *pFVar15;
  FOnDemandHttpThread *pFVar16;
  FOnDemandContentInstaller *pFVar17;
  FOnDemandContentInstaller *pFVar18;
  ForAnyElementType FVar19;
  IIasCache IVar20;
  TUniquePtr<UE::IoStore::IIasCache,TDefaultDelete<UE::IoStore::IIasCache>_> TVar21;
  FLLMScope local_res8 [2];
  FIoStatus *local_res10;
  int local_res18;
  FOnDemandIoStore *local_res20;
  TUniquePtr<UE::IoStore::IIasCache,TDefaultDelete<UE::IoStore::IIasCache>_> local_188;
  IIasCache local_180;
  FSharedReferencer<1> local_178 [2];
  TSharedRef<IIoDispatcherBackend,1> local_168;
  TSharedPtr<UE::IHttpIoDispatcher,1> local_158;
  undefined8 *local_148;
  FIoDispatcher *local_140;
  TDefaultDelete<UE::IoStore::FOnDemandContentInstaller> local_138 [8];
  FMemScope local_130;
  FString local_128;
  FIoStatus local_118;
  FString local_108;
  FString local_f8;
  <lambda_1> local_e8;
  undefined1 local_e0 [48];
  IOnDemandInstallCache *pIStack_b0;
  FSharedReferencer<1> local_a8;
  IOnDemandPackageStoreBackend *pIStack_a0;
  FSharedReferencer<1> local_98;
  IOnDemandIoDispatcherBackend *pIStack_90;
  FSharedReferencer<1> local_88;
  FIasCacheConfig local_80;
  
  local_res10 = __return_storage_ptr__;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name237,L"FileSystem/OnDemandIoStore");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name237,false,None,Default,true);
  FMemScope::FMemScope(&local_130,&LLMScope_Name237,true);
  InitializeInstallCache(this,__return_storage_ptr__);
  if (__return_storage_ptr__->ErrorCode == PendingFork) {
    if (4 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    local_res20 = this;
    FVar7 = TMulticastDelegateRegistration<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy>
            ::AddLambda<_UE::IoStore::FOnDemandIoStore::Initialize_::__l5::<lambda_1>_>
                      (&FCoreDelegates::OnPostFork,&local_e8);
                    /* WARNING: Load size is inaccurate */
    (this->OnServerPostForkHandle).ID = *FVar7.ID;
    FIoStatus::operator=(__return_storage_ptr__,&FIoStatus::Ok);
  }
  else if ((__return_storage_ptr__->ErrorCode == Disabled) && (4 < (byte)LogIoStoreOnDemand._0_1_))
  {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  if (::GHttpIoDispatcherEnabled == false) {
    pwVar8 = FCommandLine::Get();
    bVar6 = FParse::Param(pwVar8,L"HttpIoDispatcher");
    if (bVar6) goto LAB_1445dac04;
  }
  else {
LAB_1445dac04:
    pwVar8 = FCommandLine::Get();
    bVar6 = FParse::Param(pwVar8,L"NoHttpIoDispatcher");
    if (!bVar6) {
      IVar14 = (IIasCache)0x0;
      IVar20 = (IIasCache)0x0;
      GHttpIoDispatcherEnabled = true;
      local_188.Ptr = (IIasCache *)0x0;
      pwVar8 = FCommandLine::Get();
      pFVar9 = Config::GetStreamingCacheConfig(&local_80,pwVar8);
      local_e0._40_8_ = (pFVar9->Name).DataPtr;
      pIStack_b0 = *(IOnDemandInstallCache **)&(pFVar9->Name).Size;
      local_a8.ReferenceController = (TReferenceControllerBase<1> *)pFVar9->DiskQuota;
      pIStack_a0 = *(IOnDemandPackageStoreBackend **)&pFVar9->MemoryQuota;
      local_88.ReferenceController = *(TReferenceControllerBase<1> **)&pFVar9->Demand;
      local_98.ReferenceController = *(TReferenceControllerBase<1> **)&pFVar9->JournalMagic;
      pIStack_90 = *(IOnDemandIoDispatcherBackend **)&(pFVar9->WriteRate).Ops;
      TVar21.Ptr = (IIasCache *)IVar20;
      if (local_a8.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        if (4 < (byte)LogIoStoreOnDemand._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        }
      }
      else {
        bVar6 = FPaths::HasProjectPersistentDownloadDir();
        TVar21.Ptr = (IIasCache *)IVar14;
        if (bVar6) {
          FPaths::ProjectPersistentDownloadDir(&local_128);
          FVar19.Data = (FScriptContainerElement *)L"";
          if (local_128.Data.ArrayNum != 0) {
            FVar19.Data = local_128.Data.AllocatorInstance.Data;
          }
          TVar10 = MakeIasCache((wchar_t *)&local_148,(FIasCacheConfig *)FVar19.Data,
                                (FDiskCacheGovernor *)(local_e0 + 0x28));
          if ((IIasCache *)&local_188 != TVar10.Ptr) {
            TVar21.Ptr = (IIasCache *)*TVar10.Ptr;
            *TVar10.Ptr = (IIasCache)0x0;
            local_188.Ptr = TVar21.Ptr;
          }
          if (local_148 != (undefined8 *)0x0) {
            (**(code **)*local_148)(local_148,1);
          }
          if ((2 < (byte)LogIoStoreOnDemand._0_1_) && ((IIasCache)TVar21.Ptr == (IIasCache)0x0)) {
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
          }
          if ((FIasCacheConfig *)local_128.Data.AllocatorInstance.Data != (FIasCacheConfig *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
        }
        else if (2 < (byte)LogIoStoreOnDemand._0_1_) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
          TVar21.Ptr = (IIasCache *)IVar20;
        }
      }
      pTVar11 = ::operator_new(0x120);
      if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        local_158.Object = (IHttpIoDispatcher *)0x20;
        local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar11->SharedReferenceCount = (atomic<int>)0x1;
        pTVar11->WeakReferenceCount = (atomic<int>)0x1;
        pTVar11->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFHttpDispatcher_HttpIoDispatcher_IoStore_UE___00_SharedPointerInternals__6B_
        ;
        HttpIoDispatcher::FHttpDispatcher::FHttpDispatcher
                  ((FHttpDispatcher *)(pTVar11 + 1),&local_188);
        if ((pTVar11 == (TReferenceControllerBase<1> *)0xfffffffffffffff0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar12 = (FIoStatus *)(*pcVar4)();
          return pFVar12;
        }
        IVar20 = (IIasCache)(pTVar11 + 2);
        if (pTVar11 == (TReferenceControllerBase<1> *)0xfffffffffffffff0) {
          IVar20 = IVar14;
        }
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
        TVar21.Ptr = local_188.Ptr;
        local_158.Object = (IHttpIoDispatcher *)IVar20;
        local_158.SharedReferenceCount.ReferenceController = pTVar11;
      }
      FVar5.ReferenceController = local_158.SharedReferenceCount.ReferenceController;
      FHttpIoDispatcher::Initialize(&local_118,&local_158);
      if ((local_118.ErrorCode != Ok) && (1 < (byte)LogIoStoreOnDemand._0_1_)) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
      FIoStatus::~FIoStatus(&local_118);
      local_res18 = -10;
      pwVar8 = FCommandLine::Get();
      bVar6 = FParse::Param(pwVar8,L"Ias");
      if (bVar6) {
        if (4 < (byte)LogIoStoreOnDemand._0_1_) {
          Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u_Setting_HTTP_ba_150d88dc8,
                     (FLogCategoryBase *)&LogIoStoreOnDemand);
        }
        local_res18 = 10;
      }
      IVar13 = (IIasCache)::operator_new(0x70);
      IVar20 = IVar14;
      if (IVar13 != (IIasCache)0x0) {
        *(undefined1 *)((longlong)IVar13 + 8) = 0;
        *(undefined ***)IVar13 = &___7FHttpIoDispatcherBackend_IoStore_UE__6B_;
        FOnDemandIoBackendStats::FOnDemandIoBackendStats
                  ((FOnDemandIoBackendStats *)((longlong)IVar13 + 0x10),
                   (FBackendStatus *)((longlong)IVar13 + 8));
        *(FOnDemandIoStore **)((longlong)IVar13 + 0x40) = this;
        *(undefined8 *)((longlong)IVar13 + 0x48) = 0;
        *(undefined8 *)((longlong)IVar13 + 0x50) = 0;
        *(undefined1 *)((longlong)IVar13 + 0x58) = 0;
        *(undefined8 *)((longlong)IVar13 + 0x60) = 0;
        *(undefined8 *)((longlong)IVar13 + 0x68) = 0;
        FBackendStatus::AddOrRemoveFlags
                  ((FBackendStatus *)((longlong)IVar13 + 8),HttpEnabled,true,
                   L"HTTP streaming enabled");
        ::FString::FString(&local_f8,L"true");
        ::FString::FString(&local_108,L"IAS.Enabled");
        FGenericCrashContext::SetEngineData(&local_108,&local_f8);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        FBackendStatus::AddOrRemoveFlags
                  ((FBackendStatus *)((longlong)IVar13 + 8),CacheEnabled,true,L"Cache enabled");
        IVar20 = IVar13;
      }
      local_180 = IVar20;
      IVar13 = (IIasCache)::operator_new(0x18);
      if (IVar13 != (IIasCache)0x0) {
        *(undefined4 *)((longlong)IVar13 + 8) = 1;
        *(undefined ***)IVar13 =
             &
             ___7__TReferenceControllerWithDeleter_VFHttpIoDispatcherBackend_IoStore_UE__U__DefaultDeleter_VFHttpIoDispatcherBackend_IoStore_UE___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        *(undefined4 *)((longlong)IVar13 + 0xc) = 1;
        *(IIasCache *)((longlong)IVar13 + 0x10) = IVar20;
        IVar14 = IVar13;
      }
      pTVar1 = &this->HttpIoBackend;
      local_178[0].ReferenceController = (TReferenceControllerBase<1> *)IVar14;
      if (pTVar1 != (TSharedPtr<UE::IoStore::IOnDemandHttpIoDispatcherBackend,1> *)&local_180) {
        pTVar1->Object = (IOnDemandHttpIoDispatcherBackend *)IVar20;
        local_180 = (IIasCache)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->HttpIoBackend).SharedReferenceCount,local_178);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178[0].ReferenceController);
      local_140 = FIoDispatcher::Get();
      if ((pTVar1->Object == (IOnDemandHttpIoDispatcherBackend *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FIoStatus *)(*pcVar4)();
        return pFVar12;
      }
      pTVar11 = (this->HttpIoBackend).SharedReferenceCount.ReferenceController;
      pIVar3 = pTVar1->Object;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pIVar3 == (IOnDemandHttpIoDispatcherBackend *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FIoStatus *)(*pcVar4)();
        return pFVar12;
      }
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_168.Object = (IIoDispatcherBackend *)pIVar3;
      local_168.SharedReferenceCount.ReferenceController = pTVar11;
      FIoDispatcher::Mount(local_140,&local_168,local_res18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      this_01 = FHttpIoDispatcher::OnHostGroupRegistered();
      local_168.SharedReferenceCount.ReferenceController =
           local_168.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      local_168.Object = (IIoDispatcherBackend *)OnHostGroupRegistered;
      local_e0._24_8_ = OnHostGroupRegistered;
      local_e0._32_8_ = local_168.SharedReferenceCount.ReferenceController;
      TMulticastDelegateRegistration<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy>::
      AddRaw<UE::IoStore::FOnDemandIoStore>
                ((TMulticastDelegateRegistration<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
                  *)this_01,(FOnDemandIoStore *)local_e0,(pmf_40370b56 *)this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar5.ReferenceController);
      __return_storage_ptr__ = local_res10;
      if ((IIasCache)TVar21.Ptr != (IIasCache)0x0) {
        (*(code *)**(undefined8 **)TVar21.Ptr)(TVar21.Ptr,1);
        __return_storage_ptr__ = local_res10;
      }
      goto LAB_1445db11a;
    }
  }
  GHttpIoDispatcherEnabled = false;
  pFVar15 = ::operator_new(0x128);
  pFVar16 = (FOnDemandHttpThread *)0x0;
  if (pFVar15 != (FOnDemandHttpThread *)0x0) {
    pFVar16 = FOnDemandHttpThread::FOnDemandHttpThread(pFVar15);
  }
  pTVar2 = &this->HttpClient;
  if (pTVar2 == (TUniquePtr<UE::IoStore::FOnDemandHttpThread,TDefaultDelete<UE::IoStore::FOnDemandHttpThread>_>
                 *)(local_e0 + 8)) {
LAB_1445db100:
    pFVar15 = pFVar16;
    if (pFVar15 == (FOnDemandHttpThread *)0x0) goto LAB_1445db11a;
    FOnDemandHttpThread::~FOnDemandHttpThread(pFVar15);
  }
  else {
    pFVar15 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar16;
    pFVar16 = (FOnDemandHttpThread *)0x0;
    if (pFVar15 == (FOnDemandHttpThread *)0x0) goto LAB_1445db100;
    FOnDemandHttpThread::~FOnDemandHttpThread(pFVar15);
  }
  ::operator_delete(pFVar15,0x128);
LAB_1445db11a:
  pFVar16 = (this->HttpClient).Ptr;
  pFVar17 = ::operator_new(0xc0);
  pFVar18 = (FOnDemandContentInstaller *)0x0;
  if (pFVar17 != (FOnDemandContentInstaller *)0x0) {
    pFVar18 = FOnDemandContentInstaller::FOnDemandContentInstaller(pFVar17,this,pFVar16);
  }
  this_00 = &this->Installer;
  if ((TDefaultDelete<UE::IoStore::FOnDemandContentInstaller> *)this_00 != local_138) {
    pFVar17 = this_00->Ptr;
    this_00->Ptr = pFVar18;
    TDefaultDelete<UE::IoStore::FOnDemandContentInstaller>::operator()
              ((TDefaultDelete<UE::IoStore::FOnDemandContentInstaller> *)this_00,pFVar17);
    pFVar18 = (FOnDemandContentInstaller *)0x0;
  }
  TDefaultDelete<UE::IoStore::FOnDemandContentInstaller>::operator()(local_138,pFVar18);
  FMemScope::~FMemScope(&local_130);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// InitializeInstallCache @ 1445db1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445db344) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FIoStatus * __thiscall
UE::IoStore::FOnDemandIoStore::InitializeInstallCache
          (FOnDemandIoStore *this,FIoStatus *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  int *piVar2;
  TSharedPtr<UE::IoStore::IOnDemandInstallCache,1> *pTVar3;
  atomic<int> aVar4;
  IOnDemandPackageStoreBackend *pIVar5;
  code *pcVar6;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar7;
  FIoBuffer this_00;
  FOnDemandIoStore *pFVar8;
  bool bVar9;
  atomic<int> aVar10;
  FIoStatusBuilder *pFVar11;
  wchar_t *pwVar12;
  FModuleManager *this_01;
  FName *pFVar13;
  FIndexedCacheStorageManager *pFVar14;
  ulong64 uVar15;
  FIoStatus *pFVar16;
  FString *pFVar17;
  TSharedPtr<UE::IoStore::IOnDemandInstallCache,1> *pTVar18;
  FIoDispatcher *this_02;
  FSharedReferencer<1> FVar19;
  FPackageStore *this_03;
  FBlake3Hash *pFVar20;
  TOptional<UE::UnifiedError::FError> *pTVar21;
  IOnDemandInstallCache *pIVar22;
  longlong lVar23;
  TSharedPtr<UE::IoStore::IOnDemandPackageStoreBackend,1> *pTVar24;
  longlong lVar25;
  ulong64 uVar26;
  TReferenceControllerBase<1> *pTVar27;
  int iVar28;
  TReferenceControllerBase<1> *pTVar29;
  longlong *plVar30;
  int iVar31;
  TReferenceControllerBase<1> *pTVar32;
  TReferenceControllerBase<1> *pTVar33;
  undefined1 auStackY_728 [32];
  long64 local_6f8;
  TOptional<UE::UnifiedError::FError> local_6f0;
  FIoBuffer local_6d8;
  FString local_6d0;
  FOnDemandIoStore *local_6c0;
  TReferenceControllerBase<1> *local_6b8;
  FSharedReferencer<1> FStack_6b0;
  FString local_6a8;
  FString local_698;
  undefined8 local_688;
  longlong *local_680;
  char local_678;
  undefined8 local_670;
  longlong *local_668;
  char local_660;
  FOnDemandInstallCacheConfig local_658;
  FIoStatus *local_620;
  FString local_618;
  TStringView<wchar_t> local_608;
  void *local_5f8;
  ulonglong uStack_5f0;
  wchar_t *local_5e8;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  wchar_t *local_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  TSharedRef<IIoDispatcherBackend,1> local_5c8;
  TSharedRef<IPackageStoreBackend,1> local_5b8;
  TSharedPtr<UE::IoStore::IOnDemandInstallCache,1> local_5a8;
  TMemoryView<void_const_> local_598;
  FString local_588;
  TStringView<wchar_t> local_578;
  FName local_568 [2];
  TStringView<wchar_t> local_558;
  FString local_548;
  FString local_538;
  undefined1 local_528 [16];
  void *local_518;
  int local_510 [2];
  ulong64 local_508;
  ulong64 local_500;
  double local_4f8;
  uchar local_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined4 local_4d8;
  FBlake3Hash local_4d4;
  FIoStatusBuilder local_4a8;
  FIoStatusBuilder local_278;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_728;
  local_6c0 = this;
  local_620 = __return_storage_ptr__;
  bVar9 = FForkProcessHelper::IsForkRequested();
  if ((bVar9) && (bVar9 = FForkProcessHelper::IsForkedChildProcess(), !bVar9)) {
    pFVar11 = FIoStatusBuilder::FIoStatusBuilder(&local_4a8,PendingFork);
    uStack_5d0 = 0x1e;
    local_5d8 = L"Install cache waiting for fork";
    local_558._12_4_ = uStack_5cc;
    local_558.Size = 0x1e;
    local_558.DataPtr = L"Install cache waiting for fork";
    pFVar11 = FIoStatusBuilder::operator<<(pFVar11,&local_558);
    FIoStatusBuilder::operator_FIoStatus(pFVar11,__return_storage_ptr__);
    FIoStatusBuilder::~FIoStatusBuilder(&local_4a8);
    return __return_storage_ptr__;
  }
  pwVar12 = FCommandLine::Get();
  Config::TryParseInstallCacheConfig
            ((TIoStatusOr<UE::IoStore::FOnDemandInstallCacheConfig> *)local_528,pwVar12);
  if (local_528._8_4_ != Ok) {
    (__return_storage_ptr__->ErrorMessage).Chars = (wchar_t *)local_528._0_8_;
    if ((wchar_t *)local_528._0_8_ != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_528._0_8_ + -8) = *(int *)(local_528._0_8_ + -8) + 1;
      UNLOCK();
    }
    __return_storage_ptr__->SystemErrorCode = local_528._12_4_;
    __return_storage_ptr__->ErrorCode = local_528._8_4_;
    FIoStatus::operator=((FIoStatus *)local_528,Unknown);
    if ((local_528._8_4_ == Ok) && (local_518 != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_518);
    }
    FIoStatus::~FIoStatus((FIoStatus *)local_528);
    return __return_storage_ptr__;
  }
  FIoStatus::operator=((FIoStatus *)local_528,&FIoStatus::Unknown);
  iVar28 = 0;
  local_658.RootDirectory.Data.AllocatorInstance.Data = local_518;
  lVar25 = local_500 * 2 + 0x40;
  local_658.RootDirectory.Data.ArrayNum = local_510[0];
  uVar26 = lVar25 + local_508;
  local_658.RootDirectory.Data.ArrayMax = local_510[1];
  local_658.LastAccessGranularitySeconds = local_4f8;
  local_518 = (void *)0x0;
  local_510 = (int  [2])0x0;
  local_658.DiskQuota = local_508;
  local_658.JournalMaxSize = local_500;
  local_658.bDropCache = (bool)local_4f0;
  if (uVar26 != 0) {
    this_01 = FModuleManager::Get();
    pFVar13 = ::FName::FName(local_568,L"IndexedCacheStorage");
    FModuleManager::LoadModule(this_01,*pFVar13,None);
    ::FString::FString(&local_698,L"IAD");
    pFVar14 = Experimental::FIndexedCacheStorageManager::Get();
    iVar28 = Experimental::FIndexedCacheStorageManager::GetStorageIndex(pFVar14,&local_698);
    if (0 < iVar28) {
      pFVar14 = Experimental::FIndexedCacheStorageManager::Get();
      uVar15 = Experimental::FIndexedCacheStorageManager::GetCacheEarlyStartupSize(pFVar14,iVar28);
      if (uVar15 != 0) {
        if ((uVar15 <= local_500 * 2 + 0x400040) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("EarlyStartupSize > MetaDataSize + MinimumDiskQuota",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.cpp"
                               ,0x3fe,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FIoStatus *)(*pcVar6)();
          return pFVar16;
        }
        local_658.DiskQuota = uVar15 - lVar25;
        uVar26 = uVar15;
      }
      while( true ) {
        do {
          pFVar14 = Experimental::FIndexedCacheStorageManager::Get();
          bVar9 = Experimental::FIndexedCacheStorageManager::CreateCacheStorage
                            (pFVar14,uVar26,iVar28);
        } while (!bVar9);
        pFVar14 = Experimental::FIndexedCacheStorageManager::Get();
        Experimental::FIndexedCacheStorageManager::MountCacheStorage(pFVar14,&local_6a8,iVar28);
        if (1 < local_6a8.Data.ArrayNum) break;
        if (1 < (byte)LogIoStoreOnDemand._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        }
        pFVar14 = Experimental::FIndexedCacheStorageManager::Get();
        Experimental::FIndexedCacheStorageManager::DestroyCacheStorage(pFVar14,iVar28);
        if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
        }
      }
      pFVar17 = FPaths::ProjectPersistentDownloadDir(&local_538);
      if ((pFVar17->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
      }
      pFVar17 = ::FString::Replace(&local_658.RootDirectory,&local_548,pwVar12,L"",IgnoreCase);
      ::operator/(&local_618,&local_6a8,pFVar17);
      if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_548.Data.AllocatorInstance.Data);
      }
      if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_538.Data.AllocatorInstance.Data);
      }
      iVar31 = local_618.Data.ArrayNum + -1;
      if (local_618.Data.ArrayNum == 0) {
        iVar31 = 0;
      }
      ::FString::AssignRange
                (&local_658.RootDirectory,(wchar_t *)local_618.Data.AllocatorInstance.Data,iVar31);
      if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_618.Data.AllocatorInstance.Data);
      }
      if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
      }
    }
    if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_698.Data.AllocatorInstance.Data);
    }
  }
  pTVar18 = MakeOnDemandInstallCache(&local_5a8,this,&local_658,&this->DiskCacheGovernor);
  pTVar3 = &this->InstallCache;
  if (pTVar3 != pTVar18) {
    pTVar3->Object = pTVar18->Object;
    pTVar18->Object = (IOnDemandInstallCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InstallCache).SharedReferenceCount,&pTVar18->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a8.SharedReferenceCount.ReferenceController);
  if (pTVar3->Object == (IOnDemandInstallCache *)0x0) {
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    if (0 < iVar28) {
      pFVar14 = Experimental::FIndexedCacheStorageManager::Get();
      Experimental::FIndexedCacheStorageManager::DestroyCacheStorage(pFVar14,iVar28);
    }
    pFVar11 = FIoStatusBuilder::FIoStatusBuilder(&local_278,InvalidParameter);
    uStack_5e0 = 0x22;
    local_5e8 = L"Failed to initialize install cache";
    local_578._12_4_ = uStack_5dc;
    local_578.Size = 0x22;
    local_578.DataPtr = L"Failed to initialize install cache";
    pFVar11 = FIoStatusBuilder::operator<<(pFVar11,&local_578);
    FIoStatusBuilder::operator_FIoStatus(pFVar11,__return_storage_ptr__);
    FIoStatusBuilder::~FIoStatusBuilder(&local_278);
    if (local_658.RootDirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.RootDirectory.Data.AllocatorInstance.Data);
    }
    FIoStatus::operator=((FIoStatus *)local_528,Unknown);
    if ((local_528._8_4_ == Ok) && (local_518 != (void *)0x0)) {
      FMemory::Free(local_518);
    }
    FIoStatus::~FIoStatus((FIoStatus *)local_528);
    return __return_storage_ptr__;
  }
  pwVar12 = FCommandLine::Get();
  bVar9 = FParse::Param(pwVar12,L"Iad");
  iVar28 = 5;
  if (!bVar9) {
    iVar28 = -5;
  }
  this_02 = FIoDispatcher::Get();
  if ((pTVar3->Object == (IOnDemandInstallCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FIoStatus *)(*pcVar6)();
    return pFVar16;
  }
  pTVar32 = (this->InstallCache).SharedReferenceCount.ReferenceController;
  pIVar22 = pTVar3->Object;
  if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pIVar22 == (IOnDemandInstallCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FIoStatus *)(*pcVar6)();
    return pFVar16;
  }
  if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5c8.Object = (IIoDispatcherBackend *)pIVar22;
  local_5c8.SharedReferenceCount.ReferenceController = pTVar32;
  FIoDispatcher::Mount(this_02,&local_5c8,iVar28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  pTVar32 = (TReferenceControllerBase<1> *)this->_padding_;
  pTVar33 = (TReferenceControllerBase<1> *)0x0;
  pTVar29 = pTVar32;
  pTVar27 = pTVar33;
  if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar32->SharedReferenceCount;
    do {
      pTVar29 = pTVar33;
      pTVar27 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1445db6e5;
      LOCK();
      aVar10 = pTVar32->SharedReferenceCount;
      bVar9 = aVar4 == aVar10;
      if (bVar9) {
        pTVar32->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar10 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar10;
    } while (!bVar9);
    pTVar29 = pTVar32;
    pTVar27 = (TReferenceControllerBase<1> *)this->_padding_;
  }
LAB_1445db6e5:
  pTVar32 = (TReferenceControllerBase<1> *)&pTVar27->SharedReferenceCount;
  if (pTVar27 == (TReferenceControllerBase<1> *)0x0) {
    pTVar32 = pTVar33;
  }
  if ((pTVar32 != (TReferenceControllerBase<1> *)&this->_padding_) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FIoStatus *)(*pcVar6)();
    return pFVar16;
  }
  if (pTVar27 == (TReferenceControllerBase<1> *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pFVar16 = (FIoStatus *)(*pcVar6)();
      return pFVar16;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pFVar16 = (FIoStatus *)(*pcVar6)();
      return pFVar16;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar29 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar29->WeakReferenceCount = (atomic<int>)((int)pTVar29->WeakReferenceCount + 1);
    UNLOCK();
  }
  FVar19.ReferenceController = ::operator_new(0x40);
  if (FVar19.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_6b8 = ___xmm_00000000000000000000000000000010;
    pTVar32 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar27 = pTVar29;
    FVar19.ReferenceController = _UNK_150651568;
  }
  else {
    (FVar19.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar32 = FVar19.ReferenceController + 1;
    (FVar19.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar19.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFOnDemandPackageStoreBackend_IoStore_UE___00_SharedPointerInternals__6B_
    ;
    *(TReferenceControllerBase<1> **)&FVar19.ReferenceController[1].SharedReferenceCount = pTVar27;
    FVar19.ReferenceController[1]._padding_ =
         (longlong)&___7FOnDemandPackageStoreBackend_IoStore_UE__6B_;
    FVar19.ReferenceController[2]._padding_ = (longlong)pTVar29;
    FVar19.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    FVar19.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    FVar19.ReferenceController[3]._padding_ = 0;
    *(undefined2 *)&FVar19.ReferenceController[3].SharedReferenceCount = 0x100;
    if ((pTVar32 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pFVar16 = (FIoStatus *)(*pcVar6)();
      return pFVar16;
    }
    LOCK();
    (FVar19.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar27 = pTVar33;
    pTVar33 = FVar19.ReferenceController;
    local_6b8 = pTVar32;
  }
  FStack_6b0.ReferenceController = FVar19.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar27->WeakReferenceCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar27->_padding_ + 8))(pTVar27,1);
    }
  }
  pFVar8 = local_6c0;
  pTVar24 = &local_6c0->PackageStoreBackend;
  if (pTVar24 != (TSharedPtr<UE::IoStore::IOnDemandPackageStoreBackend,1> *)&local_6b8) {
    pTVar24->Object = (IOnDemandPackageStoreBackend *)pTVar32;
    local_6b8 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(local_6c0->PackageStoreBackend).SharedReferenceCount,&FStack_6b0);
    FVar19.ReferenceController = FStack_6b0.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar19.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
  this_03 = FPackageStore::Get();
  if ((pTVar24->Object == (IOnDemandPackageStoreBackend *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FIoStatus *)(*pcVar6)();
    return pFVar16;
  }
  pTVar32 = (pFVar8->PackageStoreBackend).SharedReferenceCount.ReferenceController;
  pIVar5 = pTVar24->Object;
  if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pIVar5 == (IOnDemandPackageStoreBackend *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FIoStatus *)(*pcVar6)();
    return pFVar16;
  }
  if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5b8.Object = (IPackageStoreBackend *)pIVar5;
  local_5b8.SharedReferenceCount.ReferenceController = pTVar32;
  FPackageStore::Mount(this_03,&local_5b8,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  local_6d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6d0.Data.ArrayNum = 0;
  local_6d0.Data.ArrayMax = 0;
  pwVar12 = FCommandLine::Get();
  bVar9 = FParse::Value(pwVar12,L"-Iad.Fill=",&local_6d0,true,(wchar_t **)0x0);
  if (!bVar9) goto LAB_1445dbd3d;
  ::FString::TrimStartAndEndInline(&local_6d0);
  local_608.DataPtr = (wchar_t *)local_6d0.Data.AllocatorInstance.Data;
  local_6f8 = -1;
  local_608.Size = local_6d0.Data.ArrayNum + -1;
  if (local_6d0.Data.ArrayNum == 0) {
    local_608.Size = 0;
  }
  ::LexFromString(&local_6f8,&local_608);
  if (local_6f8 < 1) goto LAB_1445dbd3d;
  bVar9 = ::FString::EndsWith(&local_6d0,L"GB",2,IgnoreCase);
  if (bVar9) {
    local_6f8 = local_6f8 << 0x1e;
  }
  bVar9 = ::FString::EndsWith(&local_6d0,L"MB",2,IgnoreCase);
  if (bVar9) {
    local_6f8 = local_6f8 << 0x14;
  }
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  local_6f0.bIsSet = false;
  lVar25 = 1;
  if (local_6f8 < 0) {
LAB_1445dbbcc:
    pIVar22 = TSharedPtr<UE::IoStore::IOnDemandInstallCache,1>::operator->(&local_6c0->InstallCache)
    ;
    pTVar21 = (TOptional<UE::UnifiedError::FError> *)
              (**(code **)((longlong)*pIVar22 + 0xa0))(pIVar22);
    TVar7.Reference = local_6f0.TypedValue.ErrorDetails.Reference;
    if (pTVar21 != &local_6f0) {
      if (pTVar21->bIsSet == false) {
        if (local_6f0.bIsSet != false) {
          local_6f0.TypedValue.ErrorCode = 0;
          local_6f0.TypedValue.ModuleId = 0;
          if (local_6f0.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            local_6f0.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar7.Reference + 0x10))();
          }
          if (local_6f0.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*local_6f0.TypedValue.ErrorDetails.Reference + 0x10))();
          }
          local_6f0.bIsSet = false;
        }
      }
      else {
        if ((local_6f0.bIsSet != false) &&
           (local_6f0.TypedValue.ErrorCode = 0, local_6f0.TypedValue.ModuleId = 0,
           local_6f0.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
          local_6f0.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar7.Reference + 0x10))();
          if (local_6f0.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*local_6f0.TypedValue.ErrorDetails.Reference + 0x10))();
          }
        }
        UnifiedError::FError::FError(&local_6f0.TypedValue,(FError *)pTVar21);
        local_6f0.bIsSet = true;
      }
    }
    plVar30 = local_668;
    if ((local_660 != '\0') && (local_670 = 0, local_668 != (longlong *)0x0)) {
      local_668 = (longlong *)0x0;
      (**(code **)(*plVar30 + 0x10))();
      if (local_668 != (longlong *)0x0) {
        (**(code **)(*local_668 + 0x10))();
      }
    }
  }
  else {
    do {
      if (local_6f0.bIsSet != false) goto LAB_1445dbcb7;
      FIoBuffer::FIoBuffer(&local_6d8,0x40000);
      lVar23 = 0x8000;
      plVar30 = *(longlong **)local_6d8.CorePtr.Reference;
      if (plVar30 <= plVar30 + 0x8000) {
        for (; lVar23 != 0; lVar23 = lVar23 + -1) {
          *plVar30 = lVar25;
          plVar30 = plVar30 + 1;
        }
      }
      local_5f8 = *(void **)local_6d8.CorePtr.Reference;
      uStack_5f0 = (ulonglong)
                   CONCAT14(*(uchar *)((longlong)local_6d8.CorePtr.Reference + 0x18),
                            *(uint *)((longlong)local_6d8.CorePtr.Reference + 8));
      local_598.Data = local_5f8;
      local_598.Size = uStack_5f0;
      pFVar20 = FBlake3::HashBuffer(&local_4d4,&local_598);
      pFVar8 = local_6c0;
      local_4e8 = *(undefined8 *)pFVar20->Hash;
      uStack_4e0 = *(undefined8 *)(pFVar20->Hash + 8);
      local_4d8 = *(undefined4 *)(pFVar20->Hash + 0x10);
      if (((local_6c0->InstallCache).Object == (IOnDemandInstallCache *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar16 = (FIoStatus *)(*pcVar6)();
        return pFVar16;
      }
      pIVar22 = (pFVar8->InstallCache).Object;
      pTVar21 = (TOptional<UE::UnifiedError::FError> *)
                (**(code **)((longlong)*pIVar22 + 0x78))(pIVar22,&local_688,&local_6d8,&local_4e8);
      TOptional<UE::UnifiedError::FError>::operator=(&local_6f0,pTVar21);
      plVar30 = local_680;
      if ((local_678 != '\0') && (local_688 = 0, local_680 != (longlong *)0x0)) {
        local_680 = (longlong *)0x0;
        (**(code **)(*plVar30 + 0x10))();
        if (local_680 != (longlong *)0x0) {
          (**(code **)(*local_680 + 0x10))();
        }
      }
      this_00.CorePtr.Reference = local_6d8.CorePtr.Reference;
      local_6f8 = local_6f8 + -0x40000;
      lVar25 = lVar25 + 1;
      if (local_6d8.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_6d8.CorePtr.Reference);
        LOCK();
        piVar2 = (int *)((longlong)this_00.CorePtr.Reference + 0xc);
        iVar28 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar28 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)this_00.CorePtr.Reference);
          ::operator_delete((void *)this_00.CorePtr.Reference,0x20);
        }
      }
    } while (-1 < local_6f8);
    if (local_6f0.bIsSet == false) goto LAB_1445dbbcc;
  }
LAB_1445dbcb7:
  if (2 < (byte)LogIoStoreOnDemand._0_1_) {
    if (local_6f0.bIsSet == false) goto LAB_1445dbd3d;
    ::LexToString(&local_588,&local_6f0.TypedValue);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
  }
  TVar7.Reference = local_6f0.TypedValue.ErrorDetails.Reference;
  if (local_6f0.bIsSet != false) {
    local_6f0.TypedValue.ErrorCode = 0;
    local_6f0.TypedValue.ModuleId = 0;
    if (local_6f0.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_6f0.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar7.Reference + 0x10))();
    }
    if (local_6f0.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_6f0.TypedValue.ErrorDetails.Reference + 0x10))();
    }
  }
LAB_1445dbd3d:
  pFVar16 = local_620;
  FIoStatus::FIoStatus(local_620,Ok);
  if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
  }
  if (local_658.RootDirectory.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_658.RootDirectory.Data.AllocatorInstance.Data);
  }
  FIoStatus::operator=((FIoStatus *)local_528,Unknown);
  if ((local_528._8_4_ == Ok) && (local_518 != (void *)0x0)) {
    FMemory::Free(local_518);
  }
  FIoStatus::~FIoStatus((FIoStatus *)local_528);
  return pFVar16;
}

// InitializePostHotfix @ 1445dbf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445dc1bf) */
/* WARNING: Removing unreachable block (ram,0x0001445dc719) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FIoStatus * __thiscall
UE::IoStore::FOnDemandIoStore::InitializePostHotfix
          (FOnDemandIoStore *this,FIoStatus *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TSharedString<wchar_t> TVar3;
  FOnDemandInternalContentHandle *pFVar4;
  FSharedReferencer<1> FVar5;
  FOnDemandToc *pFVar6;
  TUniquePtr<UE::IoStore::FOnDemandToc,TDefaultDelete<UE::IoStore::FOnDemandToc>_> TVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FString *pFVar14;
  void *pvVar15;
  IFileManager *pIVar16;
  FIoStatusBuilder *pFVar17;
  FIoStatus *pFVar18;
  TArrayView<FString_const_,int> *pTVar19;
  wchar_t *pwVar20;
  int iVar21;
  int iVar22;
  undefined ***pppuVar23;
  longlong *plVar24;
  ulong64 uVar25;
  ForAnyElementType FVar26;
  ForAnyElementType FVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  undefined1 auStackY_9a8 [32];
  bool local_968;
  bool local_967 [7];
  FEventRef local_960;
  FOnDemandEndpointConfig local_958;
  FOnDemandToc *local_908;
  ForAnyElementType FStack_900;
  undefined8 local_8f8;
  FScriptContainerElement *local_8f0;
  undefined8 uStack_8e8;
  ForAnyElementType local_8e0;
  undefined8 local_8d8;
  FName local_8d0;
  FOnDemandHostGroup local_8c8;
  EOnDemandMountOptions local_8b8;
  FOnDemandHostGroup local_8a8;
  FIoStatus local_898;
  FIoStatus local_888;
  TOptional<UE::IoStore::FOnDemandMountArgs> local_878;
  FIoStatus local_818;
  FOnDemandInstallArgs local_808;
  char local_7b8;
  FOnDemandHostGroup local_7a8;
  FOnDemandHostGroup local_798;
  FOnDemandMountArgs local_788;
  wchar_t *local_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  FScriptContainerElement *local_718;
  int iStack_710;
  undefined4 uStack_70c;
  wchar_t *local_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  FScriptContainerElement *local_6f8;
  int iStack_6f0;
  undefined4 uStack_6ec;
  FScriptContainerElement *local_6e8;
  int iStack_6e0;
  undefined4 uStack_6dc;
  wchar_t *local_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  TArrayView<FString_const_,int> local_6c8;
  TArrayView<FString_const_,int> local_6b8;
  TArrayView<FString_const_,int> local_6a8;
  TStringView<wchar_t> local_698;
  FString local_688;
  TStringView<wchar_t> local_678;
  TStringView<wchar_t> local_668;
  TStringView<wchar_t> local_658;
  FString local_648;
  TArrayView<FString_const_,int> local_638;
  FOnDemandInternalContentHandle *local_628;
  TReferenceControllerBase<1> *pTStack_620;
  FOnDemandInstallRequest local_618;
  undefined1 local_5f0 [16];
  FOnDemandEndpointConfig local_5e0;
  undefined1 local_590 [16];
  FOnDemandHostGroup local_580;
  undefined1 local_570 [16];
  FOnDemandHostGroup local_560;
  undefined1 local_550 [16];
  FOnDemandHostGroup local_540;
  code *local_528 [2];
  undefined **local_518;
  code *local_510;
  undefined ***local_500;
  code *local_4f8 [2];
  undefined **local_4e8;
  FEventRef *local_4e0;
  undefined ***local_4d0;
  longlong local_4c8;
  longlong local_4b8 [3];
  longlong *local_4a0;
  TStringBuilderBase<wchar_t> local_498;
  wchar_t local_478 [256];
  FIoStatusBuilder local_278;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_9a8;
  local_898.ErrorMessage.Chars = (wchar_t *)this;
  local_8a8.Impl.Object = (FImpl *)FCommandLine::Get();
  Config::TryParseEndpointConfig
            ((TIoStatusOr<UE::IoStore::FOnDemandEndpointConfig> *)local_5f0,
             (wchar_t *)local_8a8.Impl.Object);
  if (local_5f0._8_4_ != Ok) {
    bVar9 = FPaths::HasProjectPersistentDownloadDir();
    if (bVar9) {
      local_498.Base = local_478;
      local_498.bIsDynamic = false;
      local_498.bIsExternal = false;
      local_498.CurPos = local_478;
      local_498.End = (wchar_t *)&local_278;
      pFVar14 = FPaths::ProjectPersistentDownloadDir(&local_688);
      iVar22 = (pFVar14->Data).ArrayNum;
      pFVar1 = (pFVar14->Data).AllocatorInstance.Data;
      iVar13 = iVar22 + -1;
      if (iVar22 == 0) {
        iVar13 = 0;
      }
      uVar25 = (ulong64)iVar13;
      if (local_498.End < (FIoStatusBuilder *)(local_498.CurPos + uVar25)) {
        TStringBuilderBase<wchar_t>::Extend(&local_498,uVar25);
      }
      if (iVar13 != 0) {
        pvVar15 = FGenericPlatformString::Memcpy(local_498.CurPos,pFVar1,uVar25 * 2);
        local_498.CurPos = (wchar_t *)(uVar25 * 2 + (longlong)pvVar15);
      }
      if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_688.Data.AllocatorInstance.Data);
      }
      if ((((int)((longlong)local_498.CurPos - (longlong)local_498.Base >> 1) != 0) &&
          (local_498.CurPos[-1] != L'/')) && (local_498.CurPos[-1] != L'\\')) {
        if (local_498.End < (FIoStatusBuilder *)(local_498.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_498,1);
        }
        *local_498.CurPos = L'/';
        local_498.CurPos = local_498.CurPos + 1;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_498,L"ias",3);
      pIVar16 = IFileManager::Get();
      pcVar2 = *(code **)((longlong)*pIVar16 + 0x58);
      if (local_498.End < (FIoStatusBuilder *)(local_498.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_498,1);
      }
      *local_498.CurPos = L'\0';
      cVar10 = (*pcVar2)(pIVar16,local_498.Base);
      if (cVar10 != '\0') {
        pcVar2 = *(code **)((longlong)*pIVar16 + 0x68);
        if (local_498.End < (FIoStatusBuilder *)(local_498.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_498,1);
        }
        *local_498.CurPos = L'\0';
        (*pcVar2)(pIVar16,local_498.Base,0,1);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_498);
    }
    (__return_storage_ptr__->ErrorMessage).Chars = (wchar_t *)local_5f0._0_8_;
    if ((wchar_t *)local_5f0._0_8_ != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_5f0._0_8_ + -8) = *(int *)(local_5f0._0_8_ + -8) + 1;
      UNLOCK();
    }
    __return_storage_ptr__->ErrorCode = local_5f0._8_4_;
    __return_storage_ptr__->SystemErrorCode = local_5f0._12_4_;
    goto LAB_1445dd246;
  }
  FIoStatus::operator=((FIoStatus *)local_5f0,&FIoStatus::Unknown);
  FVar27.Data = local_5e0.ServiceUrls.AllocatorInstance.Data;
  FVar26.Data = local_5e0.FallbackUrl.Data.AllocatorInstance.Data;
  iVar13 = local_5e0.DistributionUrl.Data.ArrayNum;
  iVar22 = local_5e0.FallbackUrl.Data.ArrayNum;
  iVar29 = local_5e0.TocFilePath.Data.ArrayNum;
  local_958.DistributionUrl.Data.ArrayMax = local_5e0.DistributionUrl.Data.ArrayMax;
  local_958.FallbackUrl.Data.ArrayMax = local_5e0.FallbackUrl.Data.ArrayMax;
  local_958.ServiceUrls.ArrayNum = local_5e0.ServiceUrls.ArrayNum;
  local_958.ServiceUrls.ArrayMax = local_5e0.ServiceUrls.ArrayMax;
  local_958.TocPath.Data.AllocatorInstance.Data = local_5e0.TocPath.Data.AllocatorInstance.Data;
  local_958.TocPath.Data.ArrayNum = local_5e0.TocPath.Data.ArrayNum;
  local_958.TocPath.Data.ArrayMax = local_5e0.TocPath.Data.ArrayMax;
  local_958.TocFilePath.Data.AllocatorInstance.Data =
       local_5e0.TocFilePath.Data.AllocatorInstance.Data;
  local_958.TocFilePath.Data.ArrayMax = local_5e0.TocFilePath.Data.ArrayMax;
  local_960.Event = (FEvent *)local_5e0.DistributionUrl.Data.AllocatorInstance.Data;
  local_958.DistributionUrl.Data.AllocatorInstance.Data =
       local_5e0.DistributionUrl.Data.AllocatorInstance.Data;
  local_5e0.DistributionUrl.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_958.DistributionUrl.Data.ArrayNum = local_5e0.DistributionUrl.Data.ArrayNum;
  local_5e0.DistributionUrl.Data.ArrayNum = 0;
  local_5e0.DistributionUrl.Data.ArrayMax = 0;
  local_958.FallbackUrl.Data.AllocatorInstance.Data =
       local_5e0.FallbackUrl.Data.AllocatorInstance.Data;
  local_5e0.FallbackUrl.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_958.FallbackUrl.Data.ArrayNum = local_5e0.FallbackUrl.Data.ArrayNum;
  local_5e0.FallbackUrl.Data.ArrayNum = 0;
  local_5e0.FallbackUrl.Data.ArrayMax = 0;
  local_958.ServiceUrls.AllocatorInstance.Data = local_5e0.ServiceUrls.AllocatorInstance.Data;
  local_5e0.ServiceUrls.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5e0.ServiceUrls.ArrayNum = 0;
  local_5e0.ServiceUrls.ArrayMax = 0;
  local_5e0.TocPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5e0.TocPath.Data.ArrayNum = 0;
  local_5e0.TocPath.Data.ArrayMax = 0;
  local_5e0.TocFilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_958.TocFilePath.Data.ArrayNum = local_5e0.TocFilePath.Data.ArrayNum;
  local_5e0.TocFilePath.Data.ArrayNum = 0;
  local_5e0.TocFilePath.Data.ArrayMax = 0;
  local_967[0] = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    `UE::IoStore::LoadDefaultHttpCertificates'::__l2::FDefaultCerts::FDefaultCerts
              (&DefaultCerts,local_967);
    atexit(`UE::IoStore::LoadDefaultHttpCertificates'::__l2::
           _dynamic_atexit_destructor_for__DefaultCerts__);
    _Init_thread_footer(&::_TSS0);
  }
  local_818.ErrorMessage.Chars = DefaultCerts.Status.ErrorMessage.Chars;
  if (DefaultCerts.Status.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(DefaultCerts.Status.ErrorMessage.Chars + -4) =
         *(int *)(DefaultCerts.Status.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  local_818.ErrorCode = DefaultCerts.Status.ErrorCode;
  local_818.SystemErrorCode = DefaultCerts.Status.SystemErrorCode;
  iVar28 = 0;
  iVar21 = 0;
  if (DefaultCerts.Status.ErrorCode == Ok) {
LAB_1445dc537:
    FIoStatus::~FIoStatus(&local_818);
    bVar9 = FHttpIoDispatcher::IsInitialized();
    TVar3.Chars = local_898.ErrorMessage.Chars;
    if (bVar9) {
LAB_1445dc5f2:
      local_968 = false;
      if (GConfig != (FConfigCacheIni *)0x0) {
        FConfigCacheIni::GetBool(GConfig,L"Ias",L"UsePerContainerTocs",&local_968,&GEngineIni);
      }
      bVar9 = FParse::Param((wchar_t *)local_8a8.Impl.Object,L"Ias.UsePerContainerTocs");
      if ((local_968 != false) || (bVar9)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (4 < (byte)LogIas._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
      }
      local_878.bIsSet = false;
      if (iVar29 < 2) {
        if ((local_958.ServiceUrls.ArrayNum != 0) && (1 < local_958.TocPath.Data.ArrayNum)) {
          pTVar19 = TArrayView<FString_const_,int>::
                    TArrayView<FString_const_,int><TArray<FString,TSizedDefaultAllocator<32>_>_&,TArray<FString,TSizedDefaultAllocator<32>_>_>
                              (&local_638,&local_958.ServiceUrls);
          local_6b8.DataPtr = pTVar19->DataPtr;
          local_6b8.ArrayNum = pTVar19->ArrayNum;
          local_6b8._12_4_ = *(undefined4 *)&pTVar19->field_0xc;
          FOnDemandHostGroup::Create
                    ((TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)local_590,&local_6b8);
          if (local_590._8_4_ != Ok) {
            (__return_storage_ptr__->ErrorMessage).Chars = (wchar_t *)local_590._0_8_;
            if ((wchar_t *)local_590._0_8_ != (wchar_t *)0x0) {
              LOCK();
              *(int *)(local_590._0_8_ + -8) = *(int *)(local_590._0_8_ + -8) + 1;
              UNLOCK();
            }
            __return_storage_ptr__->SystemErrorCode = local_590._12_4_;
            __return_storage_ptr__->ErrorCode = local_590._8_4_;
            FIoStatus::operator=((FIoStatus *)local_590,Unknown);
            if (local_590._8_4_ == Ok) {
              FOnDemandHostGroup::~FOnDemandHostGroup(&local_580);
            }
            FIoStatus::~FIoStatus((FIoStatus *)local_590);
            if (local_878.bIsSet != false) {
              FOnDemandHostGroup::~FOnDemandHostGroup(&local_878.TypedValue.HostGroup);
              if (local_878.TypedValue.FilePath.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_878.TypedValue.FilePath.Data.AllocatorInstance.Data);
              }
              if (local_878.TypedValue.TocRelativeUrl.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_878.TypedValue.TocRelativeUrl.Data.AllocatorInstance.Data);
              }
              if (local_878.TypedValue.MountId.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_878.TypedValue.MountId.Data.AllocatorInstance.Data);
              }
              TVar7.Ptr = local_878.TypedValue.Toc.Ptr;
              if (local_878.TypedValue.Toc.Ptr != (FOnDemandToc *)0x0) {
                FOnDemandToc::~FOnDemandToc(local_878.TypedValue.Toc.Ptr);
                ::operator_delete(TVar7.Ptr,0xa0);
              }
            }
            goto LAB_1445dd1ea;
          }
          local_788.Toc.Ptr = (FOnDemandToc *)0x0;
          if ((local_958.ServiceUrls.ArrayNum < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar2 = (code *)swi(3);
            pFVar18 = (FIoStatus *)(*pcVar2)();
            return pFVar18;
          }
          ::operator/(&local_788.MountId,(FString *)FVar27.Data,&local_958.TocPath);
          ::FString::FString(&local_788.TocRelativeUrl,&local_958.TocPath);
          local_788.FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_788.FilePath.Data.ArrayNum = 0;
          local_788.FilePath.Data.ArrayMax = 0;
          local_788.HostGroupName = FOnDemandHostGroup::DefaultName;
          if (local_590._8_4_ != Ok) {
            StatusOrCrash((FIoStatus *)local_590);
          }
          FIoStatus::operator=((FIoStatus *)local_590,&FIoStatus::Unknown);
          local_788.HostGroup.Impl.Object = local_580.Impl.Object;
          local_788.HostGroup.Impl.SharedReferenceCount.ReferenceController =
               local_580.Impl.SharedReferenceCount.ReferenceController;
          if (local_580.Impl.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_580.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_580.Impl.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          local_788.Options = StreamOnDemand;
          TOptional<UE::IoStore::FOnDemandMountArgs>::Emplace<UE::IoStore::FOnDemandMountArgs>
                    (&local_878,&local_788);
          FOnDemandHostGroup::~FOnDemandHostGroup(&local_788.HostGroup);
          if (local_788.FilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_788.FilePath.Data.AllocatorInstance.Data);
          }
          if (local_788.TocRelativeUrl.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             ) {
            FMemory::Free(local_788.TocRelativeUrl.Data.AllocatorInstance.Data);
          }
          if (local_788.MountId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_788.MountId.Data.AllocatorInstance.Data);
          }
          TVar7.Ptr = local_788.Toc.Ptr;
          if (local_788.Toc.Ptr != (FOnDemandToc *)0x0) {
            FOnDemandToc::~FOnDemandToc(local_788.Toc.Ptr);
            ::operator_delete(TVar7.Ptr,0xa0);
          }
          FIoStatus::operator=((FIoStatus *)local_590,Unknown);
          if (local_590._8_4_ == Ok) {
            FOnDemandHostGroup::~FOnDemandHostGroup(&local_580);
          }
          FIoStatus::~FIoStatus((FIoStatus *)local_590);
          FVar27.Data = local_958.ServiceUrls.AllocatorInstance.Data;
        }
      }
      else {
        FOnDemandHostGroup::FOnDemandHostGroup(&local_8a8);
        iVar13 = local_958.ServiceUrls.ArrayNum;
        if (local_958.ServiceUrls.ArrayNum != 0) {
          local_6f8 = FVar27.Data;
          if ((local_958.ServiceUrls.ArrayNum < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar11)) {
            pcVar2 = (code *)swi(3);
            pFVar18 = (FIoStatus *)(*pcVar2)();
            return pFVar18;
          }
          iStack_6f0 = iVar13;
          local_6c8._12_4_ = uStack_6ec;
          local_6c8.ArrayNum = iVar13;
          local_6c8.DataPtr = (FString *)local_6f8;
          FOnDemandHostGroup::Create
                    ((TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)local_550,&local_6c8);
          if (local_550._8_4_ == Ok) {
            FIoStatus::operator=((FIoStatus *)local_550,&FIoStatus::Unknown);
            FVar5.ReferenceController = local_8a8.Impl.SharedReferenceCount.ReferenceController;
            local_7a8.Impl.Object = local_540.Impl.Object;
            local_7a8.Impl.SharedReferenceCount.ReferenceController =
                 local_540.Impl.SharedReferenceCount.ReferenceController;
            if (local_540.Impl.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_540.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_540.Impl.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
              if (local_540.Impl.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_540.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_540.Impl.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
            }
            local_8a8.Impl.Object = local_540.Impl.Object;
            local_8a8.Impl.SharedReferenceCount.ReferenceController =
                 local_540.Impl.SharedReferenceCount.ReferenceController;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar5.ReferenceController);
            FOnDemandHostGroup::~FOnDemandHostGroup(&local_7a8);
          }
          FIoStatus::operator=((FIoStatus *)local_550,Unknown);
          if (local_550._8_4_ == Ok) {
            FOnDemandHostGroup::~FOnDemandHostGroup(&local_540);
          }
          FIoStatus::~FIoStatus((FIoStatus *)local_550);
        }
        if (!bVar9) {
          local_8f8 = CONCAT44(local_8f8._4_4_,iVar29);
          local_908 = (FOnDemandToc *)0x0;
          FStack_900.Data = (FScriptContainerElement *)0x0;
          if (iVar29 == 0) {
            local_8f8 = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar29,0,&FStack_900,iVar29,(int *)((longlong)&local_8f8 + 4));
            memcpy(FStack_900.Data,local_958.TocFilePath.Data.AllocatorInstance.Data,
                   (longlong)iVar29 * 2);
          }
          local_8e0.Data = (FScriptContainerElement *)0x0;
          local_8d8 = CONCAT44(local_8d8._4_4_,iVar29);
          local_8f0 = (FScriptContainerElement *)0x0;
          uStack_8e8 = 0;
          if (iVar29 == 0) {
            local_8d8 = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar29,0,&local_8e0,iVar29,(int *)((longlong)&local_8d8 + 4));
            memcpy(local_8e0.Data,local_958.TocFilePath.Data.AllocatorInstance.Data,
                   (longlong)iVar29 * 2);
          }
          local_8d0 = FOnDemandHostGroup::DefaultName;
          local_8c8.Impl.Object = local_8a8.Impl.Object;
          local_8c8.Impl.SharedReferenceCount.ReferenceController =
               local_8a8.Impl.SharedReferenceCount.ReferenceController;
          if (local_8a8.Impl.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_8a8.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_8a8.Impl.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          local_8b8 = StreamOnDemand;
          if (local_878.bIsSet != false) {
            FOnDemandMountArgs::~FOnDemandMountArgs(&local_878.TypedValue);
          }
          local_878.TypedValue.Toc.Ptr = local_908;
          local_878.TypedValue.MountId.Data.AllocatorInstance.Data = FStack_900.Data;
          local_878.TypedValue.MountId.Data.ArrayNum = (int)local_8f8;
          local_878.TypedValue.MountId.Data.ArrayMax = local_8f8._4_4_;
          local_878.TypedValue.TocRelativeUrl.Data.AllocatorInstance.Data = local_8f0;
          local_878.TypedValue.TocRelativeUrl.Data.ArrayNum = (int)uStack_8e8;
          local_878.TypedValue.TocRelativeUrl.Data.ArrayMax = uStack_8e8._4_4_;
          local_878.TypedValue.FilePath.Data.AllocatorInstance.Data = local_8e0.Data;
          local_878.TypedValue.FilePath.Data.ArrayNum = (int)local_8d8;
          local_878.TypedValue.FilePath.Data.ArrayMax = local_8d8._4_4_;
          local_878.TypedValue.HostGroupName = local_8d0;
          local_878.TypedValue.HostGroup.Impl.Object = local_8c8.Impl.Object;
          local_908 = (FOnDemandToc *)0x0;
          FStack_900.Data = (FScriptContainerElement *)0x0;
          local_8f8 = 0;
          local_8f0 = (void *)0x0;
          uStack_8e8 = 0;
          local_8e0.Data = (FScriptContainerElement *)0x0;
          local_8d8 = 0;
          if (local_8c8.Impl.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_8c8.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_8c8.Impl.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          local_878.TypedValue.Options = local_8b8;
          local_878.bIsSet = true;
          local_878.TypedValue.HostGroup.Impl.SharedReferenceCount.ReferenceController =
               local_8c8.Impl.SharedReferenceCount.ReferenceController;
          FOnDemandHostGroup::~FOnDemandHostGroup(&local_8c8);
          if (local_8e0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8e0.Data);
          }
          if (local_8f0 != (void *)0x0) {
            FMemory::Free(local_8f0);
          }
          if (FStack_900.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_900.Data);
          }
          pFVar6 = local_908;
          if (local_908 != (FOnDemandToc *)0x0) {
            FOnDemandToc::~FOnDemandToc(local_908);
            ::operator_delete(pFVar6,0xa0);
          }
        }
        FOnDemandHostGroup::~FOnDemandHostGroup(&local_8a8);
      }
      local_7b8 = '\0';
      pwVar20 = FCommandLine::Get();
      bVar9 = FParse::Param(pwVar20,L"Iad.InstallAllContent");
      iVar13 = local_958.ServiceUrls.ArrayNum;
      if (bVar9) {
        local_6e8 = FVar27.Data;
        if ((local_958.ServiceUrls.ArrayNum < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar2 = (code *)swi(3);
          pFVar18 = (FIoStatus *)(*pcVar2)();
          return pFVar18;
        }
        iStack_6e0 = iVar13;
        local_6a8._12_4_ = uStack_6dc;
        local_6a8.ArrayNum = iVar13;
        local_6a8.DataPtr = (FString *)local_6e8;
        FOnDemandHostGroup::Create
                  ((TIoStatusOr<UE::IoStore::FOnDemandHostGroup> *)local_570,&local_6a8);
        if ((local_570._8_4_ != Ok) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("HostGroup.IsOk()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.cpp"
                               ,0x1ff,L""), bVar9)) {
          pcVar2 = (code *)swi(3);
          pFVar18 = (FIoStatus *)(*pcVar2)();
          return pFVar18;
        }
        if (local_878.bIsSet != false) {
          if (local_570._8_4_ != Ok) {
            StatusOrCrash((FIoStatus *)local_570);
          }
          FIoStatus::operator=((FIoStatus *)local_570,&FIoStatus::Unknown);
          local_798.Impl.Object = local_560.Impl.Object;
          local_798.Impl.SharedReferenceCount.ReferenceController =
               local_560.Impl.SharedReferenceCount.ReferenceController;
          if (local_560.Impl.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_560.Impl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_560.Impl.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_878.bIsSet == false) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar9)) {
            pcVar2 = (code *)swi(3);
            pFVar18 = (FIoStatus *)(*pcVar2)();
            return pFVar18;
          }
          FOnDemandHostGroup::operator=(&local_878.TypedValue.HostGroup,&local_798);
          FOnDemandHostGroup::~FOnDemandHostGroup(&local_798);
          if ((local_878.bIsSet == false) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar9)) {
            pcVar2 = (code *)swi(3);
            pFVar18 = (FIoStatus *)(*pcVar2)();
            return pFVar18;
          }
          local_878.TypedValue.Options = InstallOnDemand;
          if ((local_878.bIsSet == false) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar9)) {
            pcVar2 = (code *)swi(3);
            pFVar18 = (FIoStatus *)(*pcVar2)();
            return pFVar18;
          }
          iVar13 = local_958.TocPath.Data.ArrayNum + -1;
          if (local_958.TocPath.Data.ArrayNum == 0) {
            iVar13 = iVar21;
          }
          ::FString::AssignRange
                    (&local_878.TypedValue.TocRelativeUrl,
                     (wchar_t *)local_958.TocPath.Data.AllocatorInstance.Data,iVar13);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            uStack_6d0 = 10;
            local_6d8 = L"AllContent";
            local_698._12_4_ = uStack_6cc;
            local_698.Size = 10;
            local_698.DataPtr = L"AllContent";
            FOnDemandContentHandle::Create(&ContentHandle,&local_698);
            atexit(`UE::IoStore::FOnDemandIoStore::InitializePostHotfix'::__l77::
                   _dynamic_atexit_destructor_for__ContentHandle__);
            _Init_thread_footer(&::_TSS0);
          }
          if (local_7b8 != '\0') {
            FOnDemandInstallArgs::~FOnDemandInstallArgs(&local_808);
          }
          local_808.MountId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_808.ContentHandle.Handle.Object = (FOnDemandInternalContentHandle *)0x0;
          local_808.ContentHandle.Handle.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_808.Options = None;
          local_808.Priority = 0;
          local_808.DebugName.Chars = (wchar_t *)0x0;
          local_808.MountId.Data.ArrayNum = 0;
          local_808.MountId.Data.ArrayMax = 0;
          local_808.TagSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_808.TagSets.ArrayNum = 0;
          local_808.TagSets.ArrayMax = 0;
          local_808.PackageIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_808.PackageIds.ArrayNum = 0;
          local_808.PackageIds.ArrayMax = 0;
          FOnDemandContentHandle::FOnDemandContentHandle(&local_808.ContentHandle);
          local_808.Options = None;
          local_808.Priority = 0;
          local_808.DebugName.Chars = (wchar_t *)0x0;
          local_7b8 = '\x01';
          if (local_878.bIsSet == false) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              );
            if (bVar9) {
              pcVar2 = (code *)swi(3);
              pFVar18 = (FIoStatus *)(*pcVar2)();
              return pFVar18;
            }
            if ((local_7b8 == '\0') &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar9)) {
              pcVar2 = (code *)swi(3);
              pFVar18 = (FIoStatus *)(*pcVar2)();
              return pFVar18;
            }
          }
          ::FString::operator=<FString_&,wchar_t>(&local_808.MountId,&local_878.TypedValue.MountId);
          if ((local_7b8 == '\0') &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar9)) {
            pcVar2 = (code *)swi(3);
            pFVar18 = (FIoStatus *)(*pcVar2)();
            return pFVar18;
          }
          FVar8.ReferenceController =
               local_808.ContentHandle.Handle.SharedReferenceCount.ReferenceController;
          FVar5.ReferenceController = ContentHandle.Handle.SharedReferenceCount.ReferenceController;
          pFVar4 = ContentHandle.Handle.Object;
          if (ContentHandle.Handle.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (ContentHandle.Handle.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(ContentHandle.Handle.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          local_628 = local_808.ContentHandle.Handle.Object;
          pTStack_620 = local_808.ContentHandle.Handle.SharedReferenceCount.ReferenceController;
          local_808.ContentHandle.Handle.Object = pFVar4;
          local_808.ContentHandle.Handle.SharedReferenceCount.ReferenceController =
               FVar5.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar8.ReferenceController);
        }
        FIoStatus::operator=((FIoStatus *)local_570,Unknown);
        if (local_570._8_4_ == Ok) {
          FOnDemandHostGroup::~FOnDemandHostGroup(&local_560);
        }
        FIoStatus::~FIoStatus((FIoStatus *)local_570);
      }
      if (local_878.bIsSet != false) {
        local_500 = (undefined ***)0x0;
        local_518 = &
                    ___7__TFunction_OwnedObject_P6AXUFOnDemandMountResult_IoStore_UE___Z_00_0A__Function_Private_Core_UE__6B_
        ;
        local_510 = `UE::IoStore::FOnDemandIoStore::InitializePostHotfix'::__l80::<lambda_1>::
                    <lambda_invoker_cdecl>;
        local_528[0] = Core::Private::Function::
                       TFunctionRefCaller<void_(__cdecl*)(UE::IoStore::FOnDemandMountResult),void,UE::IoStore::FOnDemandMountResult>
                       ::Call;
        (**(code **)(*(longlong *)TVar3.Chars + 0x18))(TVar3.Chars,&local_878,local_528);
        if (local_528[0] != (code *)0x0) {
          pppuVar23 = &local_518;
          if (local_500 != (undefined ***)0x0) {
            pppuVar23 = local_500;
          }
          (*(code *)(*pppuVar23)[2])();
        }
        if (local_7b8 != '\0') {
          FEventRef::FEventRef(&local_960,AutoReset);
          local_4c8 = 0;
          local_4a0 = (longlong *)0x0;
          local_4d0 = (undefined ***)0x0;
          pcVar2 = *(code **)(*(longlong *)TVar3.Chars + 0x28);
          local_4e8 = &Core::Private::Function::
                       TFunction_OwnedObject<`UE::IoStore::FOnDemandIoStore::InitializePostHotfix'::`83'::<lambda_2>,1,0>
                       ::_vftable_;
          local_4e0 = &local_960;
          local_4f8[0] = Core::Private::Function::
                         TFunctionRefCaller<`UE::IoStore::FOnDemandIoStore::InitializePostHotfix'::__l83::<lambda_2>,void,UE::IoStore::FOnDemandInstallResult>
                         ::Call;
          if ((local_7b8 == '\0') &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar9)) {
            pcVar2 = (code *)swi(3);
            pFVar18 = (FIoStatus *)(*pcVar2)();
            return pFVar18;
          }
          (*pcVar2)(TVar3.Chars,&local_618,&local_808,local_4f8);
          FOnDemandInstallRequest::~FOnDemandInstallRequest(&local_618);
          if (local_4f8[0] != (code *)0x0) {
            pppuVar23 = &local_4e8;
            if (local_4d0 != (undefined ***)0x0) {
              pppuVar23 = local_4d0;
            }
            (*(code *)(*pppuVar23)[2])();
          }
          if (local_4c8 != 0) {
            plVar24 = local_4b8;
            if (local_4a0 != (longlong *)0x0) {
              plVar24 = local_4a0;
            }
            (**(code **)(*plVar24 + 0x10))();
          }
          (**(code **)((local_960.Event)->_padding_ + 0x20))(local_960.Event,0xffffffff,0);
          FEventRef::~FEventRef(&local_960);
        }
      }
      TVar3.Chars = FIoStatus::Ok.ErrorMessage.Chars;
      (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
      if (TVar3.Chars != (wchar_t *)0x0) {
        LOCK();
        pwVar20 = TVar3.Chars + -4;
        *(int *)pwVar20 = *(int *)pwVar20 + 1;
        UNLOCK();
      }
      __return_storage_ptr__->ErrorCode = FIoStatus::Ok.ErrorCode;
      __return_storage_ptr__->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
      if (local_7b8 != '\0') {
        FOnDemandInstallArgs::~FOnDemandInstallArgs(&local_808);
      }
      if (local_878.bIsSet != false) {
        FOnDemandMountArgs::~FOnDemandMountArgs(&local_878.TypedValue);
      }
      goto LAB_1445dd1ea;
    }
    InitializeStreamingBackend
              ((FOnDemandIoStore *)local_898.ErrorMessage.Chars,&local_888,&local_958);
    if (local_888.ErrorCode == Ok) {
      FIoStatus::~FIoStatus(&local_888);
      FVar27.Data = local_958.ServiceUrls.AllocatorInstance.Data;
      iVar29 = local_958.TocFilePath.Data.ArrayNum;
      goto LAB_1445dc5f2;
    }
    (__return_storage_ptr__->ErrorMessage).Chars = local_888.ErrorMessage.Chars;
    if (local_888.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_888.ErrorMessage.Chars + -4) = *(int *)(local_888.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    __return_storage_ptr__->ErrorCode = local_888.ErrorCode;
    __return_storage_ptr__->SystemErrorCode = local_888.SystemErrorCode;
    FIoStatus::~FIoStatus(&local_888);
    if (local_958.TocFilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.TocFilePath.Data.AllocatorInstance.Data);
    }
    if (local_958.TocPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.TocPath.Data.AllocatorInstance.Data);
    }
    FVar26.Data = local_958.ServiceUrls.AllocatorInstance.Data;
    DestructItems<FString,int>
              ((FString *)local_958.ServiceUrls.AllocatorInstance.Data,
               local_958.ServiceUrls.ArrayNum);
    if (FVar26.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar26.Data);
    }
  }
  else {
    iVar12 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar12 = iVar28;
    }
    if (5 < iVar12) {
      iVar12 = 5;
    }
    iVar13 = iVar28;
    if (0 < iVar12) {
      iVar13 = iVar12;
    }
    if ((iVar13 != 5) ||
       (iVar13 = FGenericPlatformStricmp::Strnicmp(L"https",(wchar_t *)local_960.Event,5),
       iVar13 != 0)) {
      iVar13 = iVar22 + -1;
      if (iVar22 == 0) {
        iVar13 = iVar28;
      }
      if (5 < iVar13) {
        iVar13 = 5;
      }
      iVar22 = iVar21;
      if (0 < iVar13) {
        iVar22 = iVar13;
      }
      if ((iVar22 != 5) ||
         (iVar13 = FGenericPlatformStricmp::Strnicmp(L"https",(wchar_t *)FVar26.Data,5), iVar13 != 0
         )) {
        lVar30 = (longlong)local_958.ServiceUrls.ArrayNum;
        for (FVar26.Data = FVar27.Data; FVar26.Data != FVar27.Data + lVar30 * 0x10;
            FVar26.Data = FVar26.Data + 0x10) {
          iVar13 = *(int *)(FVar26.Data + 8) + -1;
          if (*(int *)(FVar26.Data + 8) == 0) {
            iVar13 = iVar21;
          }
          if (5 < iVar13) {
            iVar13 = 5;
          }
          iVar22 = iVar21;
          if (0 < iVar13) {
            iVar22 = iVar13;
          }
          if ((iVar22 == 5) &&
             (iVar13 = FGenericPlatformStricmp::Strnicmp(L"https",*(wchar_t **)FVar26.Data,5),
             iVar13 == 0)) goto LAB_1445dc407;
        }
        goto LAB_1445dc537;
      }
    }
LAB_1445dc407:
    pFVar17 = FIoStatusBuilder::FIoStatusBuilder(&local_278,ReadError);
    uStack_720 = 0x3e;
    local_728 = L"Endpoint requires TLS but certificates failed to load due to \'";
    local_678._12_4_ = uStack_71c;
    local_678.Size = 0x3e;
    local_678.DataPtr = L"Endpoint requires TLS but certificates failed to load due to \'";
    pFVar17 = FIoStatusBuilder::operator<<(pFVar17,&local_678);
    pFVar14 = FIoStatus::ToString(&local_818,&local_648);
    local_718 = (pFVar14->Data).AllocatorInstance.Data;
    iVar13 = (pFVar14->Data).ArrayNum;
    iStack_710 = iVar13 + -1;
    if (iVar13 == 0) {
      iStack_710 = iVar21;
    }
    local_668._12_4_ = uStack_70c;
    local_668.Size = iStack_710;
    local_668.DataPtr = (wchar_t *)local_718;
    pFVar17 = FIoStatusBuilder::operator<<(pFVar17,&local_668);
    uStack_700 = 1;
    local_708 = L"\'";
    local_658._12_4_ = uStack_6fc;
    local_658.Size = 1;
    local_658.DataPtr = L"\'";
    pFVar17 = FIoStatusBuilder::operator<<(pFVar17,&local_658);
    FIoStatusBuilder::operator_FIoStatus(pFVar17,&local_898);
    if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_648.Data.AllocatorInstance.Data);
    }
    FIoStatusBuilder::~FIoStatusBuilder(&local_278);
    (__return_storage_ptr__->ErrorMessage).Chars = local_898.ErrorMessage.Chars;
    if ((FOnDemandIoStore *)local_898.ErrorMessage.Chars != (FOnDemandIoStore *)0x0) {
      LOCK();
      *(int *)(local_898.ErrorMessage.Chars + -4) = *(int *)(local_898.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    __return_storage_ptr__->ErrorCode = local_898.ErrorCode;
    __return_storage_ptr__->SystemErrorCode = local_898.SystemErrorCode;
    FIoStatus::~FIoStatus(&local_898);
    FIoStatus::~FIoStatus(&local_818);
LAB_1445dd1ea:
    if (local_958.TocFilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.TocFilePath.Data.AllocatorInstance.Data);
    }
    if (local_958.TocPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.TocPath.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)FVar27.Data,local_958.ServiceUrls.ArrayNum);
    if (FVar27.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar27.Data);
    }
  }
  if (local_958.FallbackUrl.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_958.FallbackUrl.Data.AllocatorInstance.Data);
  }
  if (local_958.DistributionUrl.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_958.DistributionUrl.Data.AllocatorInstance.Data);
  }
LAB_1445dd246:
  FIoStatus::operator=((FIoStatus *)local_5f0,Unknown);
  if (local_5f0._8_4_ == Ok) {
    FOnDemandEndpointConfig::~FOnDemandEndpointConfig(&local_5e0);
  }
  FIoStatus::~FIoStatus((FIoStatus *)local_5f0);
  return __return_storage_ptr__;
}

// InitializeStreamingBackend @ 1445dd360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FIoStatus * __thiscall
UE::IoStore::FOnDemandIoStore::InitializeStreamingBackend
          (FOnDemandIoStore *this,FIoStatus *__return_storage_ptr__,FOnDemandEndpointConfig *param_1
          )

{
  TSharedPtr<UE::IoStore::IOnDemandIoDispatcherBackend,1> *pTVar1;
  FOnDemandHttpThread *pFVar2;
  IOnDemandIoDispatcherBackend *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  TSharedString<wchar_t> TVar6;
  bool bVar7;
  wchar_t *pwVar8;
  FIasCacheConfig *pFVar9;
  TUniquePtr<UE::IoStore::IIasCache,TDefaultDelete<UE::IoStore::IIasCache>_> TVar10;
  FIoStatus *pFVar11;
  FOnDemandIoBackend *this_00;
  IIasCache IVar12;
  FIoDispatcher *this_01;
  ForAnyElementType FVar13;
  IIasCache IVar14;
  TUniquePtr<UE::IoStore::IIasCache,TDefaultDelete<UE::IoStore::IIasCache>_> TVar15;
  int iVar16;
  undefined8 *local_res8;
  TRawPtrProxy<UE::IoStore::IOnDemandIoDispatcherBackend> local_res20;
  TUniquePtr<UE::IoStore::IIasCache,TDefaultDelete<UE::IoStore::IIasCache>_> local_e8;
  TSharedPtr<UE::IoStore::IOnDemandIoDispatcherBackend,1> local_e0;
  FString local_d0;
  TStringView<wchar_t> local_c0;
  TSharedRef<IIoDispatcherBackend,1> local_b0;
  FDiskCacheGovernor local_a0;
  undefined8 local_70;
  FIasCacheConfig local_68;
  
  IVar12 = (IIasCache)0x0;
  IVar14 = (IIasCache)0x0;
  local_e8.Ptr = (IIasCache *)0x0;
  pwVar8 = FCommandLine::Get();
  pFVar9 = Config::GetStreamingCacheConfig(&local_68,pwVar8);
  local_a0.StreamingCacheState.OpInterval = (long64)(pFVar9->Name).DataPtr;
  local_a0.StreamingCacheState.PrevCycles = *(long64 *)&(pFVar9->Name).Size;
  local_a0.StreamingCacheState._16_8_ = pFVar9->DiskQuota;
  local_a0.StreamingCacheState.MaxOpCount = pFVar9->MemoryQuota;
  local_a0.StreamingCacheState.OpAllowance = pFVar9->JournalQuota;
  local_70._0_1_ = (pFVar9->Demand).Threshold;
  local_70._1_1_ = (pFVar9->Demand).Boost;
  local_70._2_1_ = (pFVar9->Demand).SuperBoost;
  local_70._3_1_ = pFVar9->DropCache;
  local_70._4_4_ = *(undefined4 *)&pFVar9->field_0x34;
  local_a0.StreamingCacheState.CyclesSuspended = *(atomic<__int64> *)&pFVar9->JournalMagic;
  local_a0.StreamingCacheState._40_8_ = *(undefined8 *)&(pFVar9->WriteRate).Ops;
  TVar15.Ptr = (IIasCache *)IVar14;
  if (local_a0.StreamingCacheState._16_8_ == 0) {
    if (4 < (byte)LogIas._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
    }
  }
  else {
    bVar7 = FPaths::HasProjectPersistentDownloadDir();
    TVar15.Ptr = (IIasCache *)IVar12;
    if (bVar7) {
      FPaths::ProjectPersistentDownloadDir(&local_d0);
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_d0.Data.ArrayNum != 0) {
        FVar13.Data = local_d0.Data.AllocatorInstance.Data;
      }
      TVar10 = MakeIasCache((wchar_t *)&local_res8,(FIasCacheConfig *)FVar13.Data,&local_a0);
      if ((IIasCache *)&local_e8 != TVar10.Ptr) {
        TVar15.Ptr = (IIasCache *)*TVar10.Ptr;
        *TVar10.Ptr = (IIasCache)0x0;
        local_e8.Ptr = TVar15.Ptr;
      }
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
      if ((2 < (byte)LogIas._0_1_) && ((IIasCache)TVar15.Ptr == (IIasCache)0x0)) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
      }
      if ((FIasCacheConfig *)local_d0.Data.AllocatorInstance.Data != (FIasCacheConfig *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    else if (2 < (byte)LogIas._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
      TVar15.Ptr = (IIasCache *)IVar14;
    }
  }
  if (((this->HttpClient).Ptr == (FOnDemandHttpThread *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("HttpClient.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.cpp"
                         ,0x23f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FIoStatus *)(*pcVar5)();
    return pFVar11;
  }
  pFVar2 = (this->HttpClient).Ptr;
  this_00 = ::operator_new(0x198);
  if (this_00 != (FOnDemandIoBackend *)0x0) {
    IVar12 = (IIasCache)
             FOnDemandIoBackend::FOnDemandIoBackend(this_00,param_1,this,pFVar2,&local_e8);
    TVar15.Ptr = local_e8.Ptr;
  }
  local_res20.Object = (IOnDemandIoDispatcherBackend *)IVar12;
  TSharedPtr<UE::IoStore::IOnDemandIoDispatcherBackend,1>::
  TSharedPtr<UE::IoStore::IOnDemandIoDispatcherBackend,1><UE::IoStore::IOnDemandIoDispatcherBackend>
            (&local_e0,&local_res20);
  pTVar1 = &this->StreamingBackend;
  if (pTVar1 != &local_e0) {
    pTVar1->Object = local_e0.Object;
    local_e0.Object = (IOnDemandIoDispatcherBackend *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->StreamingBackend).SharedReferenceCount,&local_e0.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.SharedReferenceCount.ReferenceController);
  pIVar3 = pTVar1->Object;
  if (pIVar3 == (IOnDemandIoDispatcherBackend *)0x0) {
    local_c0.Size = 0x22;
    local_c0.DataPtr = L"Failed to create streaming backend";
    FIoStatus::FIoStatus(__return_storage_ptr__,InvalidParameter,&local_c0);
  }
  else {
    (**(code **)((longlong)*pIVar3 + 0x68))(pIVar3,~(char)this->StreamingOptions & 1);
    iVar16 = -10;
    pwVar8 = FCommandLine::Get();
    bVar7 = FParse::Param(pwVar8,L"Ias");
    if (bVar7) {
      if (4 < (byte)LogIas._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
      }
      iVar16 = 10;
    }
    this_01 = FIoDispatcher::Get();
    if ((pTVar1->Object == (IOnDemandIoDispatcherBackend *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FIoStatus *)(*pcVar5)();
      return pFVar11;
    }
    pIVar3 = pTVar1->Object;
    pTVar4 = (this->StreamingBackend).SharedReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar3 == (IOnDemandIoDispatcherBackend *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FIoStatus *)(*pcVar5)();
      return pFVar11;
    }
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b0.Object = (IIoDispatcherBackend *)pIVar3;
    local_b0.SharedReferenceCount.ReferenceController = pTVar4;
    FIoDispatcher::Mount(this_01,&local_b0,iVar16);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    TVar6 = FIoStatus::Ok.ErrorMessage;
    (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
    if (TVar6.Chars != (wchar_t *)0x0) {
      LOCK();
      pwVar8 = TVar6.Chars + -4;
      *(int *)pwVar8 = *(int *)pwVar8 + 1;
      UNLOCK();
    }
    __return_storage_ptr__->ErrorCode = FIoStatus::Ok.ErrorCode;
    __return_storage_ptr__->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
  }
  if ((IIasCache)TVar15.Ptr != (IIasCache)0x0) {
    (*(code *)**(undefined8 **)TVar15.Ptr)(TVar15.Ptr,1);
  }
  return __return_storage_ptr__;
}

// Install @ 1445dda00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandInstallRequest * __thiscall
UE::IoStore::FOnDemandIoStore::Install
          (FOnDemandIoStore *this,FOnDemandInstallRequest *__return_storage_ptr__,
          FOnDemandInstallArgs *param_1,
          TUniqueFunction<void___cdecl(UE::IoStore::FOnDemandInstallResult)> *param_2,
          TFunction<void___cdecl(UE::IoStore::FOnDemandInstallProgress)> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FSharedReferencer<1> FVar3;
  TWeakPtr<UE::IoStore::FOnDemandIoStore,1> *pTVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  TSharedPtr<UE::IoStore::FOnDemandInternalInstallRequest,1> local_48;
  TSharedPtr<UE::IoStore::FOnDemandInternalInstallRequest,1> local_38;
  TWeakPtr<UE::IoStore::FOnDemandIoStore,1> local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name695,L"FileSystem/OnDemandIoStore");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name695,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name695,true);
  FOnDemandContentInstaller::EnqueueInstallRequest
            ((this->Installer).Ptr,&local_48,param_1,param_2,param_3);
  FVar3.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
  local_38.Object = local_48.Object;
  local_38.SharedReferenceCount.ReferenceController =
       local_48.SharedReferenceCount.ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = TSharedFromThis<UE::IoStore::FOnDemandIoStore,1>::AsWeak
                     ((TSharedFromThis<UE::IoStore::FOnDemandIoStore,1> *)&this->_padding_,&local_28
                     );
  local_48.Object = (FOnDemandInternalInstallRequest *)pTVar4->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (pTVar4->WeakReferenceCount).ReferenceController;
  (pTVar4->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar4->Object = (FOnDemandIoStore *)0x0;
  FOnDemandInstallRequest::FOnDemandInstallRequest
            (__return_storage_ptr__,(TWeakPtr<UE::IoStore::IOnDemandIoStore,1> *)&local_48,&local_38
            );
  if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_28.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_28.WeakReferenceCount.ReferenceController,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// IsOnDemandStreamingEnabled @ 1445ddf40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall UE::IoStore::FOnDemandIoStore::IsOnDemandStreamingEnabled(FOnDemandIoStore *this)

{
  return (this->StreamingBackend).Object != (IOnDemandIoDispatcherBackend *)0x0;
}

// Mount @ 1445e24f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoStore::Mount
          (FOnDemandIoStore *this,FOnDemandMountArgs *param_1,
          TUniqueFunction<void___cdecl(UE::IoStore::FOnDemandMountResult)> *param_2)

{
  FString *pFVar1;
  FString *pFVar2;
  int *piVar3;
  FMutex *this_00;
  TArray<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  atomic<unsigned_char> aVar5;
  FOnDemandToc *this_01;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FImpl *pFVar8;
  code *pcVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  FOnDemandMountArgs *pFVar20;
  bool bVar21;
  int iVar22;
  TFuture<void> *pTVar23;
  <lambda_1> local_res10;
  FOnDemandMountArgs *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FImpl *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  undefined1 local_78 [16];
  TUniqueFunction<void___cdecl(void)> local_68;
  
  pTStack_90 = ::operator_new(0xb0);
  if (pTStack_90 == (TReferenceControllerBase<1> *)0x0) {
    local_98 = ___xmm_00000000000000000000000000000010;
    pTStack_90 = _UNK_150651568;
  }
  else {
    pTStack_90->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_90->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_90->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMountRequest_FOnDemandIoStore_IoStore_UE___00_SharedPointerInternals__6B_
    ;
    pTStack_90[5]._padding_ = 0;
    pTStack_90[5].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[5].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_90[6]._padding_ = 0;
    pTStack_90[6].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[6].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_90[7]._padding_ = 0;
    pTStack_90[7].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[7].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_90[8]._padding_ = 0;
    pTStack_90[8].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[8].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_90[9]._padding_ = 0;
    pTStack_90[9].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[9].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_90[10]._padding_ = 0;
    pTStack_90[10].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[10].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_90[1]._padding_ = 0;
    pTStack_90[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[1].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_90[2]._padding_ = 0;
    pTStack_90[2].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[2].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_90[3]._padding_ = 0;
    pTStack_90[3].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[3].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_90[4]._padding_ = 0;
    uVar19 = FOnDemandHostGroup::DefaultName.Number;
    pTStack_90[4].SharedReferenceCount =
         (atomic<int>)FOnDemandHostGroup::DefaultName.ComparisonIndex.Value;
    pTStack_90[4].WeakReferenceCount = (atomic<int>)uVar19;
    FOnDemandHostGroup::FOnDemandHostGroup((FOnDemandHostGroup *)(pTStack_90 + 5));
    *(undefined4 *)&pTStack_90[6]._padding_ = 1;
    local_98 = (FOnDemandMountArgs *)(pTStack_90 + 1);
    pTStack_90[7]._padding_ = 0;
    pTStack_90[9].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[9].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_90[10]._padding_ = 0;
    if ((local_98 == (FOnDemandMountArgs *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar21)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar20 = local_98;
  if (local_98 != param_1) {
    this_01 = (local_98->Toc).Ptr;
    (local_98->Toc).Ptr = (param_1->Toc).Ptr;
    (param_1->Toc).Ptr = (FOnDemandToc *)0x0;
    if (this_01 != (FOnDemandToc *)0x0) {
      FOnDemandToc::~FOnDemandToc(this_01);
      ::operator_delete(this_01,0xa0);
    }
  }
  pFVar1 = &param_1->MountId;
  pFVar2 = &pFVar20->MountId;
  if (pFVar2 != pFVar1) {
    pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar20->MountId).Data.ArrayNum = (param_1->MountId).Data.ArrayNum;
    (pFVar20->MountId).Data.ArrayMax = (param_1->MountId).Data.ArrayMax;
    (param_1->MountId).Data.ArrayNum = 0;
    (param_1->MountId).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->TocRelativeUrl;
  pFVar2 = &pFVar20->TocRelativeUrl;
  if (pFVar2 != pFVar1) {
    pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar20->TocRelativeUrl).Data.ArrayNum = (param_1->TocRelativeUrl).Data.ArrayNum;
    (pFVar20->TocRelativeUrl).Data.ArrayMax = (param_1->TocRelativeUrl).Data.ArrayMax;
    (param_1->TocRelativeUrl).Data.ArrayNum = 0;
    (param_1->TocRelativeUrl).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->FilePath;
  pFVar2 = &pFVar20->FilePath;
  if (pFVar2 != pFVar1) {
    pFVar6 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar20->FilePath).Data.ArrayNum = (param_1->FilePath).Data.ArrayNum;
    (pFVar20->FilePath).Data.ArrayMax = (param_1->FilePath).Data.ArrayMax;
    (param_1->FilePath).Data.ArrayNum = 0;
    (param_1->FilePath).Data.ArrayMax = 0;
  }
  pFVar20->HostGroupName = param_1->HostGroupName;
  pTVar7 = (param_1->HostGroup).Impl.SharedReferenceCount.ReferenceController;
  pFVar8 = (param_1->HostGroup).Impl.Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = (pFVar20->HostGroup).Impl.Object;
  pTStack_80 = (pFVar20->HostGroup).Impl.SharedReferenceCount.ReferenceController;
  (pFVar20->HostGroup).Impl.Object = pFVar8;
  (pFVar20->HostGroup).Impl.SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  pFVar20->Options = param_1->Options;
  uVar12 = *(undefined4 *)&param_2->field_0x8;
  uVar13 = *(undefined4 *)&param_2->field_0xc;
  pFVar6 = local_98[1].MountId.Data.AllocatorInstance.Data;
  iVar22 = local_98[1].MountId.Data.ArrayNum;
  iVar14 = local_98[1].MountId.Data.ArrayMax;
  pFVar10 = local_98[1].TocRelativeUrl.Data.AllocatorInstance.Data;
  iVar15 = local_98[1].TocRelativeUrl.Data.ArrayNum;
  iVar16 = local_98[1].TocRelativeUrl.Data.ArrayMax;
  pFVar11 = local_98[1].FilePath.Data.AllocatorInstance.Data;
  iVar17 = local_98[1].FilePath.Data.ArrayNum;
  iVar18 = local_98[1].FilePath.Data.ArrayMax;
  local_98[1].MountId.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_2;
  local_98[1].MountId.Data.ArrayNum = uVar12;
  local_98[1].MountId.Data.ArrayMax = uVar13;
  uVar12 = *(undefined4 *)&param_2->field_0x18;
  uVar13 = *(undefined4 *)&param_2->field_0x1c;
  local_98[1].TocRelativeUrl.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)&param_2->field_0x10;
  local_98[1].TocRelativeUrl.Data.ArrayNum = uVar12;
  local_98[1].TocRelativeUrl.Data.ArrayMax = uVar13;
  uVar12 = *(undefined4 *)&param_2->field_0x28;
  uVar13 = *(undefined4 *)&param_2->field_0x2c;
  local_98[1].FilePath.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)&param_2->field_0x20;
  local_98[1].FilePath.Data.ArrayNum = uVar12;
  local_98[1].FilePath.Data.ArrayMax = uVar13;
  *(FScriptContainerElement **)param_2 = pFVar6;
  *(int *)&param_2->field_0x8 = iVar22;
  *(int *)&param_2->field_0xc = iVar14;
  *(FScriptContainerElement **)&param_2->field_0x10 = pFVar10;
  *(int *)&param_2->field_0x18 = iVar15;
  *(int *)&param_2->field_0x1c = iVar16;
  *(FScriptContainerElement **)&param_2->field_0x20 = pFVar11;
  *(int *)&param_2->field_0x28 = iVar17;
  *(int *)&param_2->field_0x2c = iVar18;
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  this_00 = &this->RequestMutex;
  LOCK();
  bVar21 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar21) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar21) {
    FMutex::LockSlow(this_00);
  }
  pTVar4 = &this->MountRequests;
  pFVar6 = (pTVar4->AllocatorInstance).Data;
  if (((pFVar6 <= (FScriptContainerElement *)&local_98) &&
      ((FScriptContainerElement *)&local_98 <
       pFVar6 + (longlong)(this->MountRequests).ArrayMax * 0x10)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar21)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar22 = (this->MountRequests).ArrayNum;
  piVar3 = &(this->MountRequests).ArrayMax;
  if (iVar22 == *piVar3) {
    iVar22 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar4->AllocatorInstance,piVar3);
  }
  (this->MountRequests).ArrayNum = iVar22 + 1;
  pFVar6 = (pTVar4->AllocatorInstance).Data;
  *(FOnDemandMountArgs **)(pFVar6 + (longlong)iVar22 * 0x10) = local_98;
  *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar22 * 0x10 + 8) = pTStack_90;
  if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_90->SharedReferenceCount = (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
    UNLOCK();
  }
  LOCK();
  aVar5 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar5 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  LOCK();
  bVar21 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar21) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar21) {
    FMutex::LockSlow(this_00);
  }
  this->bTickRequested = true;
  bVar21 = this->bTicking == false;
  if (bVar21) {
    this->bTicking = true;
  }
  LOCK();
  aVar5 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar5 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  if (bVar21) {
    bVar21 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar21) && (GIOThreadPool != (FQueuedThreadPool *)0x0)) {
      local_68._0_8_ = 0;
      local_68._40_8_ = 0;
      local_res10.__this = this;
      pTVar23 = AsyncPool<_UE::IoStore::FOnDemandIoStore::TryEnterTickLoop_::__l30::<lambda_1>_>
                          ((TFuture<void> *)local_78,GIOThreadPool,&local_res10,&local_68,Low);
      if (&this->TickFuture != pTVar23) {
        *(undefined8 *)&this->TickFuture = *(undefined8 *)pTVar23;
        *(undefined8 *)pTVar23 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&(this->TickFuture).field_0x8,
                   (FSharedReferencer<1> *)&pTVar23->field_0x8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_78._8_8_);
    }
    else {
      TickLoop(this);
    }
  }
  else if (5 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  return;
}

// OnEncryptionKeyAdded @ 1445e37e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445e3f56) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoStore::OnEncryptionKeyAdded
          (FOnDemandIoStore *this,FGuid *param_1,FAESKey *param_2)

{
  TMap<FString,FIoBuffer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FIoBuffer,0>_>
  *this_00;
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  undefined8 *puVar4;
  IOnDemandPackageStoreBackend *pIVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  FEncryptionKeyManager *this_01;
  int iVar11;
  longlong lVar12;
  uchar *puVar13;
  wchar_t *pwVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStackY_158 [32];
  undefined1 local_127;
  undefined1 local_126 [6];
  FOnDemandIoStore *local_120;
  FScriptContainerElement *local_118;
  uchar local_110 [8];
  FSharedReferencer<1> local_108;
  FGuid local_100;
  FString local_f0;
  TSharedPtr<UE::IoStore::FOnDemandContainer,1> local_e0;
  void *local_c8;
  ulonglong uStack_c0;
  FOnDemandChunkInfo local_b8;
  FString local_a0;
  TMemoryView<void_const_> local_88;
  FString local_78;
  undefined1 local_68 [24];
  TReferenceControllerBase<1> *local_50;
  FIoChunkId local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  bVar18 = -1 < CpuChannel->Enabled;
  local_120 = this;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1494,"FOnDemandIoStore::OnEncryptionKeyAdded",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.cpp"
               ,0x5d6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1494);
  }
  LOCK();
  bVar19 = (this->ContainerMutex).State == (atomic<unsigned_char>)0x0;
  if (bVar19) {
    (this->ContainerMutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar19) {
    FMutex::LockSlow(&this->ContainerMutex);
  }
  iVar3 = (this->Containers).ArrayNum;
  pFVar17 = (this->Containers).AllocatorInstance.Data;
  bVar19 = false;
  pFVar16 = pFVar17 + (longlong)iVar3 * 0x10;
  local_118 = pFVar16;
  while( true ) {
    if ((this->Containers).ArrayNum != iVar3) {
      local_126[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_126);
    }
    if (pFVar17 == pFVar16) break;
    if ((*(longlong *)pFVar17 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((*(byte *)(*(longlong *)pFVar17 + 0x114) & 1) != 0) {
      local_100.A = 0;
      local_100.B = 0;
      local_100.C = 0;
      local_100.D = 0;
      if ((*(longlong *)pFVar17 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar9 = FGuid::Parse((FString *)(*(longlong *)pFVar17 + 0x40),&local_100);
      if ((!bVar9) &&
         (bVar9 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_9201750686155405852>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.cpp"
                             ,0x5e4,"FGuid::Parse(Container->EncryptionKeyGuid, KeyGuid)"), bVar9))
      {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_01 = FEncryptionKeyManager::Get();
      if ((*(longlong *)pFVar17 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar9 = FEncryptionKeyManager::TryGetKey(this_01,&local_100,*(FAESKey **)pFVar17);
      pFVar16 = local_118;
      if (bVar9) {
        if (4 < (byte)LogIoStoreOnDemand._0_1_) {
          if ((*(longlong *)pFVar17 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          ::LexToString(&local_a0,*(EOnDemandContainerFlags *)(*(longlong *)pFVar17 + 0x114));
          if ((*(longlong *)pFVar17 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((*(longlong *)pFVar17 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
          this = local_120;
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            this = local_120;
          }
        }
        if ((*(longlong *)pFVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(byte *)(*(longlong *)pFVar17 + 0x114) = *(byte *)(*(longlong *)pFVar17 + 0x114) & 0xfe;
        if ((*(longlong *)pFVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(byte *)(*(longlong *)pFVar17 + 0x114) = *(byte *)(*(longlong *)pFVar17 + 0x114) | 2;
        if ((*(longlong *)pFVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        ::FString::Empty((FString *)(*(longlong *)pFVar17 + 0x40));
        if ((*(longlong *)pFVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = 0;
        ::FString::PrintfImpl(&local_f0,L"%.*s-%.*s");
        if (local_f0.Data.ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          iVar11 = local_f0.Data.ArrayNum + -1;
          pwVar14 = (wchar_t *)local_f0.Data.AllocatorInstance.Data;
        }
        uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar14);
        this_00 = &this->PendingContainerHeaders;
        iVar11 = TSet<TTuple<FString,FIoBuffer>,TDefaultMapHashableKeyFuncs<FString,FIoBuffer,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,FIoBuffer>,TDefaultMapHashableKeyFuncs<FString,FIoBuffer,0>,FDefaultSetAllocator>
                             *)this_00,uVar10,&local_f0);
        if (iVar11 == -1) {
          lVar12 = 0;
        }
        else {
          lVar12 = (longlong)iVar11 * 0x20 + *(longlong *)&this_00->field_0x0;
        }
        plVar15 = (longlong *)(lVar12 + 0x10);
        if (lVar12 == 0) {
          plVar15 = (longlong *)0x0;
        }
        if (plVar15 != (longlong *)0x0) {
          if ((*(longlong *)pFVar17 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          CreateContainerHeaderChunkId(&local_48,(FIoContainerId *)(*(longlong *)pFVar17 + 0x100));
          local_e0.Object = *(FOnDemandContainer **)pFVar17;
          local_e0.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(pFVar17 + 8);
          if (local_e0.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          FOnDemandChunkInfo::Find(&local_b8,&local_e0,&local_48);
          if (local_b8.SharedContainer.Object == (FOnDemandContainer *)0x0) {
            bVar9 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_9201750686155405829>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.cpp"
                               ,0x5fb,"ChunkInfo.IsValid()");
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            if ((*(longlong *)pFVar17 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar4 = (undefined8 *)*plVar15;
            local_c8 = (void *)*puVar4;
            uStack_c0 = (ulonglong)CONCAT14(*(undefined1 *)(puVar4 + 3),*(undefined4 *)(puVar4 + 1))
            ;
            local_88.Data = local_c8;
            local_88.Size = uStack_c0;
            IoStore::Private::DeserializeContainerHeader
                      ((TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *)local_68,&local_b8,
                       &local_88,(bool)(*(byte *)(*(longlong *)pFVar17 + 0x114) >> 5 & 1));
            if (local_68._8_4_ == Ok) {
              FIoStatus::operator=((FIoStatus *)local_68,&FIoStatus::Unknown);
              uVar8 = local_68._16_8_;
              local_110[0] = local_68[0x10];
              local_110[1] = local_68[0x11];
              local_110[2] = local_68[0x12];
              local_110[3] = local_68[0x13];
              local_110[4] = local_68[0x14];
              local_110[5] = local_68[0x15];
              local_110[6] = local_68[0x16];
              local_110[7] = local_68[0x17];
              local_108.ReferenceController = local_50;
              local_50 = (TReferenceControllerBase<1> *)0x0;
              local_68[0x10] = '\0';
              local_68[0x11] = '\0';
              local_68[0x12] = '\0';
              local_68[0x13] = '\0';
              local_68[0x14] = '\0';
              local_68[0x15] = '\0';
              local_68[0x16] = '\0';
              local_68[0x17] = '\0';
              if ((*(longlong *)pFVar17 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar19)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar12 = *(longlong *)pFVar17;
              puVar13 = (uchar *)(lVar12 + 0x20);
              if (puVar13 != local_110) {
                *(undefined8 *)puVar13 = uVar8;
                local_110[0] = '\0';
                local_110[1] = '\0';
                local_110[2] = '\0';
                local_110[3] = '\0';
                local_110[4] = '\0';
                local_110[5] = '\0';
                local_110[6] = '\0';
                local_110[7] = '\0';
                SharedPointerInternals::FSharedReferencer<1>::operator=
                          ((FSharedReferencer<1> *)(lVar12 + 0x28),&local_108);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_108.ReferenceController);
              bVar19 = true;
            }
            else {
              bVar9 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_9201750686155405822>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.cpp"
                                 ,0x602,"Header.IsOk()");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((*(longlong *)pFVar17 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              *(byte *)(*(longlong *)pFVar17 + 0x114) =
                   *(byte *)(*(longlong *)pFVar17 + 0x114) & 0xfd;
              if (1 < (byte)LogIoStoreOnDemand._0_1_) {
                if ((*(longlong *)pFVar17 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                ::LexToString(&local_78,*(EOnDemandContainerFlags *)(*(longlong *)pFVar17 + 0x114));
                if ((*(longlong *)pFVar17 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if ((*(longlong *)pFVar17 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand)
                ;
                this = local_120;
                if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_78.Data.AllocatorInstance.Data);
                  this = local_120;
                }
              }
            }
            uVar7 = local_68._8_4_;
            FIoStatus::operator=((FIoStatus *)local_68,Unknown);
            if (uVar7 == Ok) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_50);
            }
            FIoStatus::~FIoStatus((FIoStatus *)local_68);
          }
          if (*(int *)&(this->PendingContainerHeaders).field_0x8 !=
              *(int *)&(this->PendingContainerHeaders).field_0x34) {
            TSet<TTuple<FString,FIoBuffer>,TDefaultMapHashableKeyFuncs<FString,FIoBuffer,0>,FDefaultSetAllocator>
            ::RemoveImpl<FString>
                      ((TSet<TTuple<FString,FIoBuffer>,TDefaultMapHashableKeyFuncs<FString,FIoBuffer,0>,FDefaultSetAllocator>
                        *)this_00,uVar10,&local_f0);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b8.SharedContainer.SharedReferenceCount.ReferenceController);
        }
        pFVar16 = local_118;
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          pFVar16 = local_118;
        }
      }
    }
    pFVar17 = pFVar17 + 0x10;
  }
  if (bVar19) {
    if ((this->PackageStoreBackend).Object == (IOnDemandPackageStoreBackend *)0x0) {
      local_127 = 0;
      bVar19 = `UE::IoStore::FOnDemandIoStore::OnEncryptionKeyAdded'::__l60::<lambda_1>::operator()
                         (&local_127);
      if (!bVar19) goto LAB_1445e4051;
      if (((this->PackageStoreBackend).Object == (IOnDemandPackageStoreBackend *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar19)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pIVar5 = (this->PackageStoreBackend).Object;
    (**(code **)((longlong)*pIVar5 + 0x40))(pIVar5,1);
  }
LAB_1445e4051:
  LOCK();
  pFVar1 = &this->ContainerMutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->ContainerMutex);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnHostGroupRegistered @ 1445e4510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoStore::OnHostGroupRegistered(FOnDemandIoStore *this,FName *param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  FString local_58;
  FString local_48;
  
  this_00 = &this->ContainerMutex;
  LOCK();
  bVar6 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    FMutex::LockSlow(this_00);
  }
  iVar2 = (this->Containers).ArrayNum;
  pFVar4 = (this->Containers).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar2 * 0x10;
  do {
    if ((this->Containers).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) {
      LOCK();
      aVar1 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar1 & 2) != 0) {
        FMutex::WakeWaitingThread(this_00);
      }
      return;
    }
    if ((*(longlong *)pFVar4 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(byte *)(*(longlong *)pFVar4 + 0x114) & 0x40) != 0) {
      if ((*(longlong *)pFVar4 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(FName *)(*(longlong *)pFVar4 + 0x10c) == *param_1) {
        if ((*(longlong *)pFVar4 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(byte *)(*(longlong *)pFVar4 + 0x114) = *(byte *)(*(longlong *)pFVar4 + 0x114) & 0xbf;
        if ((*(longlong *)pFVar4 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(byte *)(*(longlong *)pFVar4 + 0x114) = *(byte *)(*(longlong *)pFVar4 + 0x114) | 2;
        if (4 < (byte)LogIoStoreOnDemand._0_1_) {
          ::FName::ToString(param_1,&local_48);
          if ((*(longlong *)pFVar4 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ::LexToString(&local_58,*(EOnDemandContainerFlags *)(*(longlong *)pFVar4 + 0x114));
          if ((*(longlong *)pFVar4 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((*(longlong *)pFVar4 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    pFVar4 = pFVar4 + 0x10;
  } while( true );
}

// OnImmediateAnalytic @ 1445e5470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoStore::OnImmediateAnalytic
          (FOnDemandIoStore *this,FOnDemandImmediateAnalyticHandler *param_1)

{
  longlong *plVar1;
  byte bVar2;
  atomic<unsigned_char> aVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  
  LOCK();
  bVar11 = OnDemandImmediateAnalyticEventHandlerMutex.State == (atomic<unsigned_char>)0x0;
  if (bVar11) {
    OnDemandImmediateAnalyticEventHandlerMutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar11) {
    FMutex::LockSlow(&OnDemandImmediateAnalyticEventHandlerMutex);
  }
  uVar8 = OnDemandImmediateAnalyticEventHandler.EventHandler._24_8_;
  uVar7 = OnDemandImmediateAnalyticEventHandler.EventHandler._16_8_;
  uVar6 = OnDemandImmediateAnalyticEventHandler.EventHandler._8_8_;
  OnDemandImmediateAnalyticEventHandler.EventHandler._8_8_ =
       *(undefined8 *)&(param_1->EventHandler).field_0x8;
  uVar4 = CONCAT44(OnDemandImmediateAnalyticEventHandler.EventHandler._36_4_,
                   OnDemandImmediateAnalyticEventHandler.EventHandler._32_4_);
  uVar5 = CONCAT44(OnDemandImmediateAnalyticEventHandler.EventHandler._44_4_,
                   OnDemandImmediateAnalyticEventHandler.EventHandler._40_4_);
  OnDemandImmediateAnalyticEventHandler.EventHandler._16_8_ =
       *(undefined8 *)&(param_1->EventHandler).field_0x10;
  OnDemandImmediateAnalyticEventHandler.EventHandler._24_8_ =
       *(undefined8 *)&(param_1->EventHandler).field_0x18;
  OnDemandImmediateAnalyticEventHandler.EventHandler._32_4_ =
       *(undefined4 *)&(param_1->EventHandler).field_0x20;
  OnDemandImmediateAnalyticEventHandler.EventHandler._36_4_ =
       *(undefined4 *)&(param_1->EventHandler).field_0x24;
  OnDemandImmediateAnalyticEventHandler.EventHandler._40_4_ =
       *(undefined4 *)&(param_1->EventHandler).field_0x28;
  OnDemandImmediateAnalyticEventHandler.EventHandler._44_4_ =
       *(undefined4 *)&(param_1->EventHandler).field_0x2c;
  uVar9 = *(undefined8 *)&param_1->EventHandler;
  *(undefined8 *)&param_1->EventHandler = OnDemandImmediateAnalyticEventHandler.EventHandler._0_8_;
  OnDemandImmediateAnalyticEventHandler.EventHandler._0_8_ = uVar9;
  *(undefined8 *)&(param_1->EventHandler).field_0x8 = uVar6;
  *(undefined8 *)&(param_1->EventHandler).field_0x10 = uVar7;
  *(undefined8 *)&(param_1->EventHandler).field_0x18 = uVar8;
  *(undefined8 *)&(param_1->EventHandler).field_0x20 = uVar4;
  *(undefined8 *)&(param_1->EventHandler).field_0x28 = uVar5;
  LOCK();
  aVar3 = OnDemandImmediateAnalyticEventHandlerMutex.State + -1;
  UNLOCK();
  bVar2 = (byte)OnDemandImmediateAnalyticEventHandlerMutex.State & 2;
  OnDemandImmediateAnalyticEventHandlerMutex.State = aVar3;
  if (bVar2 != 0) {
    FMutex::WakeWaitingThread(&OnDemandImmediateAnalyticEventHandlerMutex);
  }
  if (*(longlong *)&param_1->EventHandler == 0) {
    return;
  }
  plVar1 = *(longlong **)&(param_1->EventHandler).field_0x28;
  plVar10 = (longlong *)&(param_1->EventHandler).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar10 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001445e5510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x10))();
  return;
}

// Purge @ 1445eef10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoStore::Purge
          (FOnDemandIoStore *this,FOnDemandPurgeArgs *param_1,
          TUniqueFunction<void___cdecl(UE::IoStore::FOnDemandPurgeResult)> *param_2)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  EOnDemandPurgeOptions EVar3;
  FOnDemandContentInstaller *this_00;
  undefined8 uVar4;
  uint uVar5;
  FRequest *pFVar6;
  bool bVar7;
  LARGE_INTEGER local_res8;
  FLLMScope local_res10 [2];
  FRequest *local_res18;
  FMemScope local_res20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name707,L"FileSystem/OnDemandIoStore");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name707,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name707,true);
  this_00 = (this->Installer).Ptr;
  LOCK();
  bVar7 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this_00->Mutex);
  }
  pFVar6 = TSingleThreadedSlabAllocator<UE::IoStore::FOnDemandContentInstaller::FRequest,32>::Alloc
                     (&this_00->RequestAllocator);
  uVar5 = FOnDemandContentInstaller::FRequest::NextSeqNo + 1;
  pFVar6->SeqNo = FOnDemandContentInstaller::FRequest::NextSeqNo;
  FOnDemandContentInstaller::FRequest::NextSeqNo = uVar5;
  pFVar6->Priority = 0;
  QueryPerformanceCounter(&local_res8);
  pFVar6->StartTimeCycles = (ulong64)local_res8;
  (pFVar6->Result).Error.bIsSet = false;
  pFVar6->bCancelled = false;
  (pFVar6->Variant).TypeIndex = '\0';
  EVar3 = param_1->Options;
  (pFVar6->Variant).field_0x10 = 0;
  *(EOnDemandPurgeOptions *)&pFVar6->Variant = EVar3;
  bVar7 = (param_1->BytesToPurge).bIsSet;
  (pFVar6->Variant).field_0x10 = bVar7;
  if (bVar7 != false) {
    *(ulong64 *)&(pFVar6->Variant).field_0x8 = (param_1->BytesToPurge).TypedValue;
  }
  *(undefined8 *)&(pFVar6->Variant).field_0x20 = *(undefined8 *)param_2;
  *(undefined8 *)&(pFVar6->Variant).field_0x48 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar4 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(pFVar6->Variant).field_0x30 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(pFVar6->Variant).field_0x38 = uVar4;
  *(undefined8 *)&(pFVar6->Variant).field_0x40 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&(pFVar6->Variant).field_0x20 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  (pFVar6->Variant).TypeIndex = '\x02';
  local_res18 = pFVar6;
  TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>::
  HeapPush<bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)>
            (&this_00->RequestQueue,&local_res18,FOnDemandContentInstaller::RequestSortPredicate);
  LOCK();
  pFVar1 = &this_00->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  FOnDemandContentInstaller::TryExecuteNextRequest(this_00);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// RegisterHostGroup @ 1445f2570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445f29ab) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandRegisterHostGroupResult * __thiscall
UE::IoStore::FOnDemandIoStore::RegisterHostGroup
          (FOnDemandIoStore *this,FOnDemandRegisterHostGroupResult *__return_storage_ptr__,
          FOnDemandRegisterHostGroupArgs *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  int iVar4;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar5;
  bool bVar6;
  FString *pFVar7;
  FString *pFVar8;
  FError *pFVar9;
  FOnDemandRegisterHostGroupResult *pFVar10;
  size_t sVar11;
  char *pcVar12;
  FAnsiString *pFVar13;
  FIoStatus *pFVar14;
  FHostGroupManager *pFVar15;
  FIASHostGroup *pFVar16;
  FImpl *pFVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  wchar_t *_Str;
  FSharedReferencer<1> FVar22;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8 [16];
  FIASHostGroup local_2a8;
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> local_298;
  FIoStatus local_288;
  FError local_278;
  FError local_268;
  FError local_258;
  FScriptContainerElement *local_248;
  int iStack_240;
  undefined4 uStack_23c;
  FScriptContainerElement *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  FScriptContainerElement *local_228;
  int iStack_220;
  FScriptContainerElement *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  FScriptContainerElement *local_208;
  int iStack_200;
  TArrayView<FString,int> local_1f8;
  FAnsiString local_1e8;
  TStringView<char> local_1d8;
  TArrayView<FAnsiString_const_,int> local_1c8;
  FIoStatus local_1b8;
  FIASHostGroup local_1a8;
  TStringView<char> local_198;
  TArrayView<FAnsiString_const_,int> local_188;
  FIoStatus local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FAnsiString local_128;
  FString local_118;
  FString local_108;
  undefined1 local_f8 [24];
  TReferenceControllerBase<1> *local_e0;
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  local_2b8[0] = param_1->bUseSecureHttp;
  if (param_1->HostGroupName == (FName)0x0) {
    FOnDemandHostGroup::FOnDemandHostGroup(&__return_storage_ptr__->HostGroup);
    pFVar7 = ::FString::FString(&local_168,L"Host group name cannot be empty");
    pFVar8 = ::FString::FString(&local_158,L"HostGroupName");
    pFVar9 = UnifiedError::Core::ArgumentError::MakeError(&local_278,pFVar8,pFVar7);
    UnifiedError::FError::FError(&(__return_storage_ptr__->Error).TypedValue,pFVar9);
    TVar5.Reference = local_278.ErrorDetails.Reference;
    (__return_storage_ptr__->Error).bIsSet = true;
    local_278.ErrorCode = 0;
    local_278.ModuleId = 0;
    if (local_278.ErrorDetails.Reference == (IErrorDetails *)0x0) {
      return __return_storage_ptr__;
    }
    local_278.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar5.Reference + 0x10))(TVar5.Reference);
    if (local_278.ErrorDetails.Reference == (IErrorDetails *)0x0) {
      return __return_storage_ptr__;
    }
    (**(code **)((longlong)*local_278.ErrorDetails.Reference + 0x10))
              (local_278.ErrorDetails.Reference);
    return __return_storage_ptr__;
  }
  iVar19 = (param_1->HostNames).ArrayNum;
  if (iVar19 == 0) {
    FOnDemandHostGroup::FOnDemandHostGroup(&__return_storage_ptr__->HostGroup);
    pFVar7 = ::FString::FString(&local_148,L"No host name(s) specified");
    pFVar8 = ::FString::FString(&local_138,L"HostNames");
    pFVar9 = UnifiedError::Core::ArgumentError::MakeError(&local_268,pFVar8,pFVar7);
    UnifiedError::FError::FError(&(__return_storage_ptr__->Error).TypedValue,pFVar9);
    TVar5.Reference = local_268.ErrorDetails.Reference;
    (__return_storage_ptr__->Error).bIsSet = true;
    local_268.ErrorCode = 0;
    local_268.ModuleId = 0;
    if (local_268.ErrorDetails.Reference == (IErrorDetails *)0x0) {
      return __return_storage_ptr__;
    }
    local_268.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar5.Reference + 0x10))();
    if (local_268.ErrorDetails.Reference == (IErrorDetails *)0x0) {
      return __return_storage_ptr__;
    }
    (**(code **)((longlong)*local_268.ErrorDetails.Reference + 0x10))();
    return __return_storage_ptr__;
  }
  local_248 = (param_1->HostNames).AllocatorInstance.Data;
  if ((iVar19 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FOnDemandRegisterHostGroupResult *)(*pcVar2)();
    return pFVar10;
  }
  local_1f8._12_4_ = uStack_23c;
  local_1f8.ArrayNum = iVar19;
  local_1f8.DataPtr = (FString *)local_248;
  iStack_240 = iVar19;
  `UE::IoStore::FOnDemandIoStore::RegisterHostGroup'::__l2::<lambda_1>::operator()
            (local_2b8,&local_298,&local_1f8);
  pFVar18 = (FScriptContainerElement *)0x0;
  local_58.Data = (FScriptContainerElement *)0x0;
  if ((param_1->TestUrl).Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->TestUrl).Data.AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      local_50 = (FScriptContainerElement *)0x0;
      local_48 = 0;
      goto LAB_1445f27f2;
    }
  }
  sVar11 = wcslen(_Str);
  local_48 = (int)sVar11;
  uVar21 = local_48 + 1;
  FVar20.Data = pFVar18;
  if (0x80 < uVar21) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar21,1);
    FVar20.Data = local_58.Data;
  }
  local_50 = local_d8;
  if (FVar20.Data != (FScriptContainerElement *)0x0) {
    local_50 = FVar20.Data;
  }
  pcVar12 = FGenericPlatformString::Convert<wchar_t,char>((char *)local_50,uVar21,_Str,uVar21);
  if ((pcVar12 == (char *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pFVar10 = (FOnDemandRegisterHostGroupResult *)(*pcVar2)();
    return pFVar10;
  }
LAB_1445f27f2:
  pFVar13 = FAnsiString::ConstructFromPtrSize(&local_1e8,(char *)local_50,local_48);
  iVar19 = 0;
  if (&local_128 != pFVar13) {
    pFVar18 = (pFVar13->Data).AllocatorInstance.Data;
    (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar19 = (pFVar13->Data).ArrayNum;
    (pFVar13->Data).ArrayNum = 0;
    (pFVar13->Data).ArrayMax = 0;
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  local_288.ErrorMessage.Chars = FIoStatus::Invalid.ErrorMessage.Chars;
  if (FIoStatus::Invalid.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Invalid.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Invalid.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  local_288.ErrorCode = FIoStatus::Invalid.ErrorCode;
  local_288.SystemErrorCode = FIoStatus::Invalid.SystemErrorCode;
  FIASHostGroup::FIASHostGroup(&local_2a8);
  bVar6 = FHttpIoDispatcher::IsInitialized();
  iVar4 = local_298.ArrayNum;
  if (bVar6) {
    iStack_230 = iVar19 + -1;
    if (iVar19 == 0) {
      iStack_230 = 0;
    }
    local_228 = local_298.AllocatorInstance.Data;
    local_238 = pFVar18;
    if ((local_298.ArrayNum < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FOnDemandRegisterHostGroupResult *)(*pcVar2)();
      return pFVar10;
    }
    local_1d8._12_4_ = uStack_22c;
    local_1d8.Size = iStack_230;
    iStack_220 = iVar4;
    local_1c8.DataPtr = (FAnsiString *)local_228;
    local_1d8.DataPtr = (char *)local_238;
    pFVar14 = FHttpIoDispatcher::RegisterHostGroup
                        (&local_1b8,&param_1->HostGroupName,&local_1c8,&local_1d8);
    FIoStatus::operator=(&local_288,pFVar14);
    FIoStatus::~FIoStatus(&local_1b8);
    pFVar15 = FHostGroupManager::Get();
    pFVar16 = FHostGroupManager::Find(pFVar15,&local_1a8,param_1->HostGroupName);
    FVar3.ReferenceController = local_2a8.Impl.SharedReferenceCount.ReferenceController;
    FVar22.ReferenceController = (pFVar16->Impl).SharedReferenceCount.ReferenceController;
    pFVar17 = (pFVar16->Impl).Object;
    if (FVar22.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar22.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar22.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2a8.Impl.Object = pFVar17;
    local_2a8.Impl.SharedReferenceCount.ReferenceController = FVar22.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar3.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.Impl.SharedReferenceCount.ReferenceController);
  }
  else {
    pFVar15 = FHostGroupManager::Get();
    iStack_210 = iVar19 + -1;
    if (iVar19 == 0) {
      iStack_210 = 0;
    }
    local_198._12_4_ = uStack_20c;
    local_198.Size = iStack_210;
    local_218 = pFVar18;
    local_198.DataPtr = (char *)pFVar18;
    FHostGroupManager::Register
              (pFVar15,(TIoStatusOr<UE::IoStore::FIASHostGroup> *)local_f8,param_1->HostGroupName,
               &local_198);
    if (local_f8._8_4_ == Ok) {
      FIoStatus::operator=((FIoStatus *)local_f8,&FIoStatus::Unknown);
      pTVar1 = local_e0;
      FVar22.ReferenceController = local_2a8.Impl.SharedReferenceCount.ReferenceController;
      if (local_e0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_e0->SharedReferenceCount = (atomic<int>)((int)local_e0->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        local_e0->SharedReferenceCount = (atomic<int>)((int)local_e0->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_2a8.Impl.Object = (FImpl *)local_f8._16_8_;
      local_2a8.Impl.SharedReferenceCount.ReferenceController = local_e0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar22.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      iStack_200 = local_298.ArrayNum;
      local_208 = local_298.AllocatorInstance.Data;
      if ((local_298.ArrayNum < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FOnDemandRegisterHostGroupResult *)(*pcVar2)();
        return pFVar10;
      }
      local_188.DataPtr = (FAnsiString *)local_208;
      pFVar14 = FIASHostGroup::Resolve(&local_2a8,&local_178,&local_188);
      FIoStatus::operator=(&local_288,pFVar14);
      FIoStatus::~FIoStatus(&local_178);
    }
    else {
      FIoStatus::operator=(&local_288,(FIoStatus *)local_f8);
    }
    FIoStatus::operator=((FIoStatus *)local_f8,Unknown);
    if (local_f8._8_4_ == Ok) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
    }
    FIoStatus::~FIoStatus((FIoStatus *)local_f8);
    pFVar17 = local_2a8.Impl.Object;
    FVar22.ReferenceController = local_2a8.Impl.SharedReferenceCount.ReferenceController;
  }
  if (local_288.ErrorCode == Ok) {
    if ((pFVar17 == (FImpl *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FOnDemandRegisterHostGroupResult *)(*pcVar2)();
      return pFVar10;
    }
    (__return_storage_ptr__->HostGroup).Impl.Object = (pFVar17->HostGroup).Impl.Object;
    pTVar1 = (pFVar17->HostGroup).Impl.SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->HostGroup).Impl.SharedReferenceCount.ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    (__return_storage_ptr__->Error).bIsSet = false;
  }
  else {
    FOnDemandHostGroup::FOnDemandHostGroup(&__return_storage_ptr__->HostGroup);
    pFVar7 = FIoStatus::ToString(&local_288,&local_118);
    pFVar8 = ::FString::FString(&local_108,L"Args");
    pFVar9 = UnifiedError::Core::ArgumentError::MakeError(&local_258,pFVar8,pFVar7);
    UnifiedError::FError::FError(&(__return_storage_ptr__->Error).TypedValue,pFVar9);
    TVar5.Reference = local_258.ErrorDetails.Reference;
    (__return_storage_ptr__->Error).bIsSet = true;
    local_258.ErrorCode = 0;
    local_258.ModuleId = 0;
    if (local_258.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_258.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar5.Reference + 0x10))();
      if (local_258.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_258.ErrorDetails.Reference + 0x10))();
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar22.ReferenceController);
  FIoStatus::~FIoStatus(&local_288);
  if (pFVar18 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar18);
  }
  DestructItems<FAnsiString,int>((FAnsiString *)local_298.AllocatorInstance.Data,local_298.ArrayNum)
  ;
  if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ReleaseContent @ 1445f50c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoStore::ReleaseContent
          (FOnDemandIoStore *this,FOnDemandInternalContentHandle *param_1)

{
  FMutex *pFVar1;
  undefined8 *puVar2;
  atomic<unsigned_char> aVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  IOnDemandPackageStoreBackend *pIVar7;
  IOnDemandInstallCache *pIVar8;
  code *pcVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  ForElementType<unsigned_int> FVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStackY_148 [32];
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined1 local_f5 [5];
  ForAnyElementType local_f0;
  undefined8 local_e8;
  <lambda_1> local_e0 [4];
  FLLMScope local_dc;
  FScriptContainerElement *local_d8;
  FOnDemandInternalContentHandle *local_d0;
  FMemScope local_c8 [2];
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FString local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  int local_68;
  undefined4 local_64;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_d0 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1958,L"FileSystem/OnDemandIoStore");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_dc,LLMScope_Name1958,false,None,Default,true);
  FMemScope::FMemScope(local_c8,&LLMScope_Name1958,true);
  if (5 < (byte)LogIoStoreOnDemand._0_1_) {
    ::LexToString(&local_a8,param_1);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  LOCK();
  bVar22 = (this->ContainerMutex).State == (atomic<unsigned_char>)0x0;
  if (bVar22) {
    (this->ContainerMutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar22) {
    FMutex::LockSlow(&this->ContainerMutex);
  }
  iVar4 = (this->Containers).ArrayNum;
  pFVar19 = (this->Containers).AllocatorInstance.Data;
  pFVar16 = pFVar19 + (longlong)iVar4 * 0x10;
  local_d8 = pFVar16;
LAB_1445f51f0:
  while( true ) {
    if ((this->Containers).ArrayNum != iVar4) {
      local_f7 = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_f7);
    }
    if (pFVar19 == pFVar16) break;
    if ((*(longlong *)pFVar19 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar22)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((*(byte *)(*(longlong *)pFVar19 + 0x114) & 4) == 0) {
      if ((*(longlong *)pFVar19 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar21 = *(longlong *)pFVar19;
      plVar5 = *(longlong **)(lVar21 + 0xe8);
      plVar14 = plVar5;
      if (plVar5 != plVar5 + (longlong)*(int *)(lVar21 + 0xf0) * 5) {
LAB_1445f52a0:
        if ((FOnDemandInternalContentHandle *)*plVar14 != param_1) goto code_r0x0001445f52a5;
        uVar17 = (uint)(((longlong)plVar14 - (longlong)plVar5) / 0x28);
        pFVar16 = local_d8;
        if (uVar17 != 0xffffffff) {
          if ((lVar21 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar21 = *(longlong *)pFVar19;
          uVar20 = 0;
          if ((int)uVar17 < *(int *)(lVar21 + 0xf0)) {
            uVar20 = ~uVar17 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          puVar2 = (undefined8 *)(*(longlong *)(lVar21 + 0xe8) + (longlong)(int)uVar17 * 0x28);
          local_88 = *puVar2;
          local_70 = (void *)0x0;
          if (puVar2[3] == 0) {
            memmove(local_80,puVar2 + 1,0x10);
          }
          if (local_70 != (void *)0x0) {
            FMemory::Free(local_70);
          }
          local_70 = (undefined1 *)puVar2[3];
          puVar2[3] = 0;
          local_68 = *(int *)(puVar2 + 4);
          local_64 = *(undefined4 *)((longlong)puVar2 + 0x24);
          puVar2[4] = 0;
          if ((*(longlong *)pFVar19 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar21 = *(longlong *)pFVar19;
          uVar20 = 0;
          if ((int)uVar17 < *(int *)(lVar21 + 0xf0)) {
            uVar20 = ~uVar17 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          TArray<UE::IoStore::FOnDemandChunkEntryReferences,TSizedDefaultAllocator<32>_>::
          RemoveAtSwapImpl((TArray<UE::IoStore::FOnDemandChunkEntryReferences,TSizedDefaultAllocator<32>_>
                            *)(lVar21 + 0xe8),uVar17);
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,(ForAnyElementType *)(lVar21 + 0xe8),*(int *)(lVar21 + 0xf0),
                     (int *)(lVar21 + 0xf4));
          if ((*(longlong *)pFVar19 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((local_68 != *(int *)(*(longlong *)pFVar19 + 0xe0)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RemovedRefs.Indices.Num() == Container->ChunkEntries.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.cpp"
                                  ,0x7c7,L""), bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((*(longlong *)pFVar19 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar6 = *(longlong *)pFVar19;
          local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_60.NumBits = 0;
          local_60.MaxBits = 0x80;
          iVar12 = *(int *)(lVar6 + 0xf0);
          lVar18 = *(longlong *)(lVar6 + 0xe8);
          lVar21 = lVar18 + (longlong)iVar12 * 0x28;
          while( true ) {
            if (*(int *)(lVar6 + 0xf0) != iVar12) {
              local_f6 = 0;
              `TCheckedPointerIterator<UE::IoStore::FOnDemandChunkEntryReferences_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_f6);
            }
            if (lVar18 == lVar21) break;
            if ((*(int *)(lVar18 + 0x20) != *(int *)(lVar6 + 0xe0)) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Refs.Indices.Num() == ChunkEntries.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.h"
                                    ,0xb4,L""), bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            Core::Private::
            BitwiseOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::CombineWithBitwiseOR<FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                      ((TBitArray<FDefaultBitArrayAllocator> *)(lVar18 + 8),&local_60,MaxSize,
                       local_e0);
            lVar18 = lVar18 + 0x28;
          }
          uVar17 = 0;
          if (0 < local_68) {
            uVar20 = 1;
            lVar21 = 0;
            do {
              if ((((int)uVar17 < 0) || (local_68 <= (int)uVar17)) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar22)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              puVar15 = local_80;
              if (local_70 != (undefined1 *)0x0) {
                puVar15 = local_70;
              }
              uVar11 = uVar17;
              if ((int)uVar17 < 0) {
                uVar11 = uVar17 + 0x1f;
              }
              lVar6 = (longlong)((int)uVar11 >> 5) * 4;
              if ((*(uint *)(puVar15 + lVar6) & uVar20) != 0) {
                if (local_60.NumBits != 0) {
                  if ((((int)uVar17 < 0) || (local_60.NumBits <= (int)uVar17)) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index>=0 && Index<NumBits",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x5be,L""), bVar22)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FVar13 = (ForElementType<unsigned_int>)&local_60;
                  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
                  {
                    FVar13 = local_60.AllocatorInstance.SecondaryData;
                  }
                  if ((*(uint *)(lVar6 + (longlong)FVar13) & uVar20) != 0) goto LAB_1445f5780;
                }
                if ((*(longlong *)pFVar19 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar22)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                lVar6 = *(longlong *)pFVar19;
                uVar11 = 0;
                if ((int)uVar17 < *(int *)(lVar6 + 0xe0)) {
                  uVar11 = ~uVar17 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar22)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar16 = (FScriptContainerElement *)(*(longlong *)(lVar6 + 0xd8) + lVar21);
                if (((local_f0.Data <= pFVar16) &&
                    (pFVar16 < local_f0.Data + (longlong)local_e8._4_4_ * 0x14)) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar22)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar12 = (int)local_e8;
                if ((int)local_e8 == local_e8._4_4_) {
                  iVar12 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x414,&local_f0,(int *)((longlong)&local_e8 + 4));
                }
                local_e8 = CONCAT44(local_e8._4_4_,iVar12 + 1);
                uVar10 = *(undefined8 *)(pFVar16 + 8);
                *(undefined8 *)(local_f0.Data + (longlong)iVar12 * 0x14) = *(undefined8 *)pFVar16;
                *(undefined8 *)(local_f0.Data + (longlong)iVar12 * 0x14 + 8) = uVar10;
                *(undefined4 *)(local_f0.Data + (longlong)iVar12 * 0x14 + 0x10) =
                     *(undefined4 *)(pFVar16 + 0x10);
              }
LAB_1445f5780:
              uVar17 = uVar17 + 1;
              uVar20 = uVar20 << 1 | (uint)((int)uVar20 < 0);
              lVar21 = lVar21 + 0x28;
            } while ((int)uVar17 < local_68);
          }
          if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
          }
          pFVar16 = local_d8;
          param_1 = local_d0;
          if (local_70 != (undefined1 *)0x0) {
            FMemory::Free(local_70);
            pFVar16 = local_d8;
            param_1 = local_d0;
          }
        }
      }
    }
    pFVar19 = pFVar19 + 0x10;
  }
  LOCK();
  pFVar1 = &this->ContainerMutex;
  aVar3 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->ContainerMutex);
  }
  if ((this->PackageStoreBackend).Object == (IOnDemandPackageStoreBackend *)0x0) {
    local_f5[0] = 0;
    bVar22 = `UE::IoStore::FOnDemandIoStore::ReleaseContent'::__l44::<lambda_2>::operator()
                       (local_f5);
    if (bVar22) {
      if (((this->PackageStoreBackend).Object == (IOnDemandPackageStoreBackend *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      goto LAB_1445f5830;
    }
  }
  else {
LAB_1445f5830:
    pIVar7 = (this->PackageStoreBackend).Object;
    (**(code **)((longlong)*pIVar7 + 0x40))(pIVar7,2);
  }
  if ((this->InstallCache).Object == (IOnDemandInstallCache *)0x0) {
    local_f8 = 0;
    bVar22 = `UE::IoStore::FOnDemandIoStore::ReleaseContent'::__l47::<lambda_3>::operator()
                       (&local_f8);
    if (!bVar22) goto LAB_1445f58e1;
    if (((this->InstallCache).Object == (IOnDemandInstallCache *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar22)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pIVar8 = (this->InstallCache).Object;
  iVar4 = (int)local_e8;
  pcVar9 = *(code **)((longlong)*pIVar8 + 0xb0);
  local_b8 = local_f0.Data;
  if (((int)local_e8 < 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iStack_b0 = iVar4;
  local_98 = (undefined4)local_b8;
  uStack_94 = local_b8._4_4_;
  iStack_90 = iVar4;
  uStack_8c = uStack_ac;
  (*pcVar9)(pIVar8,&local_98);
LAB_1445f58e1:
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  FMemScope::~FMemScope(local_c8);
  FLLMScope::~FLLMScope(&local_dc);
  return;
code_r0x0001445f52a5:
  plVar14 = plVar14 + 5;
  if (plVar14 == plVar5 + (longlong)*(int *)(lVar21 + 0xf0) * 5) goto code_r0x0001445f52ae;
  goto LAB_1445f52a0;
code_r0x0001445f52ae:
  pFVar19 = pFVar19 + 0x10;
  goto LAB_1445f51f0;
}

// ReportAnalytics @ 1445f7960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoStore::ReportAnalytics
          (FOnDemandIoStore *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  IOnDemandIoDispatcherBackend *pIVar1;
  
  if ((this->Installer).Ptr != (FOnDemandContentInstaller *)0x0) {
    FOnDemandContentInstallerStats::ReportAnalytics(param_1);
  }
  pIVar1 = (this->StreamingBackend).Object;
  if ((pIVar1 != (IOnDemandIoDispatcherBackend *)0x0) ||
     (pIVar1 = (IOnDemandIoDispatcherBackend *)(this->HttpIoBackend).Object,
     pIVar1 != (IOnDemandIoDispatcherBackend *)0x0)) {
    (**(code **)((longlong)*pIVar1 + 0x70))(pIVar1,param_1);
  }
  return;
}

// SetStreamingOptions @ 1445ff470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoStore::SetStreamingOptions
          (FOnDemandIoStore *this,EOnDemandStreamingOptions param_1)

{
  IOnDemandIoDispatcherBackend *pIVar1;
  IOnDemandHttpIoDispatcherBackend *pIVar2;
  
  this->StreamingOptions = param_1;
  pIVar1 = (this->StreamingBackend).Object;
  if (pIVar1 != (IOnDemandIoDispatcherBackend *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x68))
              (pIVar1,param_1 & OptionalBulkDataDisabled ^ OptionalBulkDataDisabled);
  }
  pIVar2 = (this->HttpIoBackend).Object;
  if (pIVar2 != (IOnDemandHttpIoDispatcherBackend *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x68))(pIVar2,(byte)(param_1 & OptionalBulkDataDisabled) ^ 1);
  }
  return;
}

// SetupHostGroup @ 1445ff4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445ffb35) */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FIoStatus * __cdecl
UE::IoStore::FOnDemandIoStore::SetupHostGroup
          (FIoStatus *__return_storage_ptr__,TSharedPtr<UE::IoStore::FOnDemandContainer,1> *param_1,
          FOnDemandMountArgs *param_2)

{
  int iVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  FImpl *pFVar4;
  char *pcVar5;
  code *pcVar6;
  TSharedString<wchar_t> TVar7;
  bool bVar8;
  uint uVar9;
  FIoStatus *pFVar10;
  FOnDemandContainer *pFVar11;
  TArrayView<FAnsiString_const_,int> *pTVar12;
  FAnsiString *pFVar13;
  FName *pFVar14;
  FHostGroupManager *pFVar15;
  FIASHostGroup *pFVar16;
  wchar_t *pwVar17;
  FScriptContainerElement *pFVar18;
  FOnDemandHostGroup *this;
  void *pvVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  EIoErrorCode EVar22;
  ForAnyElementType this_00;
  ulonglong uVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  ulonglong uVar26;
  undefined1 auStackY_3f8 [32];
  undefined1 local_3a8 [8];
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> local_3a0;
  EOnDemandMountOptions local_390 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_388;
  FIoStatus local_378;
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> local_368;
  FString local_358;
  FIoStatus *local_348;
  FIASHostGroup local_340;
  TArrayView<FAnsiString_const_,int> local_330;
  FScriptContainerElement *local_318;
  int iStack_310;
  undefined4 uStack_30c;
  FScriptContainerElement *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  FScriptContainerElement *local_2f8;
  int iStack_2f0;
  FScriptContainerElement *local_2e8;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  FName local_2d8;
  FString local_2d0;
  FString local_2c0;
  TArrayView<FAnsiString_const_,int> local_2a8;
  TStringView<char> local_298;
  TArrayView<FAnsiString_const_,int> local_288;
  FAnsiString local_278;
  FImpl *local_268;
  TReferenceControllerBase<1> *pTStack_260;
  FIASHostGroup local_258;
  FString local_248;
  FString local_238;
  FImpl *local_228;
  TReferenceControllerBase<1> *pTStack_220;
  FIASHostGroup local_218;
  TStringView<char> local_208;
  FAnsiString local_1f8;
  TArrayView<FAnsiString_const_,int> local_1e8;
  FAnsiString local_1d8;
  TArrayView<FAnsiString_const_,int> local_1c8;
  FString local_1b8;
  TArrayView<FAnsiString_const_,int> local_1a8;
  TArrayView<FAnsiString_const_,int> local_198;
  undefined1 local_188 [24];
  TReferenceControllerBase<1> *local_170;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  local_390[0] = param_2->Options;
  local_348 = __return_storage_ptr__;
  bVar8 = FHttpIoDispatcher::IsInitialized();
  if (bVar8) {
    if (4 < (byte)LogIoStoreOnDemand._0_1_) {
      if ((param_1->Object == (FOnDemandContainer *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FIoStatus *)(*pcVar6)();
        return pFVar10;
      }
      if (param_1->Object->HostGroupName != param_2->HostGroupName) {
        ::FName::ToString(&param_2->HostGroupName,&local_2c0);
        pFVar11 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->(param_1);
        ::FName::ToString(&pFVar11->HostGroupName,&local_2d0);
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
        }
        if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
        }
      }
    }
    FVar2 = param_2->HostGroupName;
    if ((param_1->Object == (FOnDemandContainer *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FIoStatus *)(*pcVar6)();
      return pFVar10;
    }
    param_1->Object->HostGroupName = FVar2;
    if ((param_1->Object == (FOnDemandContainer *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FIoStatus *)(*pcVar6)();
      return pFVar10;
    }
    bVar8 = FHttpIoDispatcher::IsHostGroupRegistered(&param_1->Object->HostGroupName);
    if (!bVar8) {
      bVar8 = FOnDemandHostGroup::IsEmpty(&param_2->HostGroup);
      if (!bVar8) {
        pTVar12 = FOnDemandHostGroup::Hosts(&param_2->HostGroup,&local_1a8);
        local_2a8.DataPtr = pTVar12->DataPtr;
        local_2a8.ArrayNum = pTVar12->ArrayNum;
        local_2a8._12_4_ = *(undefined4 *)&pTVar12->field_0xc;
        `UE::IoStore::FOnDemandIoStore::SetupHostGroup'::__l2::<lambda_1>::operator()
                  (local_390,&local_368,&local_2a8);
        pFVar11 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->(param_1);
        pFVar13 = FOnDemandContainer::GetTestUrl(pFVar11,&local_278);
        iStack_2f0 = local_368.ArrayNum;
        local_308 = (pFVar13->Data).AllocatorInstance.Data;
        iVar24 = (pFVar13->Data).ArrayNum;
        iStack_300 = iVar24 + -1;
        if (iVar24 == 0) {
          iStack_300 = 0;
        }
        local_2f8 = local_368.AllocatorInstance.Data;
        if ((local_368.ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FIoStatus *)(*pcVar6)();
          return pFVar10;
        }
        local_298._12_4_ = uStack_2fc;
        local_298.Size = iStack_300;
        local_288.DataPtr = (FAnsiString *)local_2f8;
        local_298.DataPtr = (char *)local_308;
        pFVar11 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->(param_1);
        FHttpIoDispatcher::RegisterHostGroup
                  (__return_storage_ptr__,&pFVar11->HostGroupName,&local_288,&local_298);
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
        }
        DestructItems<FAnsiString,int>
                  ((FAnsiString *)local_368.AllocatorInstance.Data,local_368.ArrayNum);
        if (local_368.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_368.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
LAB_1445ffa5d:
      FIoStatus::FIoStatus(__return_storage_ptr__,PendingHostGroup);
      return __return_storage_ptr__;
    }
  }
  else {
    if ((param_1->Object == (FOnDemandContainer *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FIoStatus *)(*pcVar6)();
      return pFVar10;
    }
    if (((param_1->Object->Flags & StreamOnDemand) == None) ||
       (bVar8 = ::FName::Equals(param_2->HostGroupName,L"Default"), !bVar8)) {
      if (4 < (byte)LogIoStoreOnDemand._0_1_) {
        pFVar11 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->(param_1);
        if (pFVar11->HostGroupName != param_2->HostGroupName) {
          ::FName::ToString(&param_2->HostGroupName,&local_238);
          pFVar11 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->(param_1);
          ::FName::ToString(&pFVar11->HostGroupName,&local_248);
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
        }
      }
      FVar2 = param_2->HostGroupName;
      if ((param_1->Object == (FOnDemandContainer *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FIoStatus *)(*pcVar6)();
        return pFVar10;
      }
      param_1->Object->HostGroupName = FVar2;
      pFVar15 = FHostGroupManager::Get();
      if ((param_1->Object == (FOnDemandContainer *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FIoStatus *)(*pcVar6)();
        return pFVar10;
      }
      pFVar16 = FHostGroupManager::Find(pFVar15,&local_218,param_1->Object->HostGroupName);
      if ((param_1->Object == (FOnDemandContainer *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FIoStatus *)(*pcVar6)();
        return pFVar10;
      }
      pTVar3 = (pFVar16->Impl).SharedReferenceCount.ReferenceController;
      pFVar11 = param_1->Object;
      pFVar4 = (pFVar16->Impl).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_228 = (pFVar11->HostGroup).Impl.Object;
      pTStack_220 = (pFVar11->HostGroup).Impl.SharedReferenceCount.ReferenceController;
      (pFVar11->HostGroup).Impl.Object = pFVar4;
      (pFVar11->HostGroup).Impl.SharedReferenceCount.ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_220);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_218.Impl.SharedReferenceCount.ReferenceController);
      if ((param_1->Object == (FOnDemandContainer *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FIoStatus *)(*pcVar6)();
        return pFVar10;
      }
      pFVar11 = param_1->Object;
      if (((pFVar11->HostGroup).Impl.Object == (FImpl *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FIoStatus *)(*pcVar6)();
        return pFVar10;
      }
      bVar8 = FOnDemandHostGroup::IsEmpty(&((pFVar11->HostGroup).Impl.Object)->HostGroup);
      if (bVar8) {
        bVar8 = FOnDemandHostGroup::IsEmpty(&param_2->HostGroup);
        if (!bVar8) {
          pFVar15 = FHostGroupManager::Get();
          pFVar11 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->(param_1);
          pFVar13 = FOnDemandContainer::GetTestUrl(pFVar11,&local_1f8);
          uVar23 = 0;
          local_2e8 = (pFVar13->Data).AllocatorInstance.Data;
          iVar24 = (pFVar13->Data).ArrayNum;
          uStack_2e0 = iVar24 - 1;
          if (iVar24 == 0) {
            uStack_2e0 = 0;
          }
          pFVar11 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->(param_1);
          local_208._12_4_ = uStack_2dc;
          local_208.Size = uStack_2e0;
          local_208.DataPtr = (char *)local_2e8;
          FHostGroupManager::Register
                    (pFVar15,(TIoStatusOr<UE::IoStore::FIASHostGroup> *)local_188,
                     pFVar11->HostGroupName,&local_208);
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
          if (local_188._8_4_ == Ok) {
            FIoStatus::operator=((FIoStatus *)local_188,&FIoStatus::Unknown);
            local_340.Impl.Object = (FImpl *)local_188._16_8_;
            local_340.Impl.SharedReferenceCount.ReferenceController = local_170;
            if (local_170 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_170->SharedReferenceCount =
                   (atomic<int>)((int)local_170->SharedReferenceCount + 1);
              UNLOCK();
            }
            pFVar11 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->(param_1);
            FIASHostGroup::operator=(&pFVar11->HostGroup,&local_340);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_340.Impl.SharedReferenceCount.ReferenceController);
            pTVar12 = FOnDemandHostGroup::Hosts(&param_2->HostGroup,&local_198);
            local_1e8.DataPtr = pTVar12->DataPtr;
            local_1e8.ArrayNum = pTVar12->ArrayNum;
            local_1e8._12_4_ = *(undefined4 *)&pTVar12->field_0xc;
            `UE::IoStore::FOnDemandIoStore::SetupHostGroup'::__l2::<lambda_1>::operator()
                      (local_390,&local_3a0,&local_1e8);
            pFVar11 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->(param_1);
            if (pFVar11->HostGroupName == FOnDemandHostGroup::DefaultName) {
              local_358.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_358.Data.ArrayNum = 0;
              local_358.Data.ArrayMax = 0;
              pwVar17 = FCommandLine::Get();
              bVar8 = FParse::Value(pwVar17,L"Iax.DefaultHostGroup=",&local_358,true,(wchar_t **)0x0
                                   );
              if (bVar8) {
                if (local_3a0.ArrayMax < 0) {
                  DestructItems<FAnsiString,int>
                            ((FAnsiString *)local_3a0.AllocatorInstance.Data,local_3a0.ArrayNum);
                  local_3a0.ArrayNum = 0;
                  if (local_3a0.ArrayMax != 0) {
                    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,0,&local_3a0.AllocatorInstance,0,&local_3a0.ArrayMax);
                  }
                }
                else {
                  DestructItems<FAnsiString,int>
                            ((FAnsiString *)local_3a0.AllocatorInstance.Data,local_3a0.ArrayNum);
                  local_3a0.ArrayNum = 0;
                }
                local_388.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_388.ArrayNum = 0;
                local_388.ArrayMax = 0;
                ::FString::ParseIntoArray(&local_358,&local_388,L",",true);
                iVar24 = local_388.ArrayNum;
                pFVar25 = local_388.AllocatorInstance.Data + (longlong)local_388.ArrayNum * 0x10;
                this_00.Data = local_388.AllocatorInstance.Data;
                while( true ) {
                  if (local_388.ArrayNum != iVar24) {
                    local_3a8[0] = 0;
                    `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_3a8);
                  }
                  if (this_00.Data == pFVar25) break;
                  ::FString::TrimStartAndEndInline((FString *)this_00.Data);
                  if (*(int *)(this_00.Data + 8) == 0) {
                    pwVar17 = L"";
                  }
                  else {
                    pwVar17 = *(wchar_t **)this_00.Data;
                  }
                  pFVar18 = (FScriptContainerElement *)FAnsiString::FAnsiString(&local_1d8,pwVar17);
                  if (((local_3a0.AllocatorInstance.Data <= pFVar18) &&
                      (pFVar18 < local_3a0.AllocatorInstance.Data +
                                 (longlong)local_3a0.ArrayMax * 0x10)) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    pFVar10 = (FIoStatus *)(*pcVar6)();
                    return pFVar10;
                  }
                  if (local_3a0.ArrayNum == local_3a0.ArrayMax) {
                    local_3a0.ArrayNum =
                         Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_3a0.AllocatorInstance,&local_3a0.ArrayMax);
                  }
                  iVar1 = local_3a0.ArrayNum + 1;
                  pFVar20 = local_3a0.AllocatorInstance.Data + (longlong)local_3a0.ArrayNum * 0x10;
                  *(undefined8 *)pFVar20 = 0;
                  *(undefined8 *)pFVar20 = *(undefined8 *)pFVar18;
                  *(undefined8 *)pFVar18 = 0;
                  *(int *)(pFVar20 + 8) = *(int *)(pFVar18 + 8);
                  *(int *)(pFVar20 + 0xc) = *(int *)(pFVar18 + 0xc);
                  *(undefined8 *)(pFVar18 + 8) = 0;
                  local_3a0.ArrayNum = iVar1;
                  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
                  }
                  this_00.Data = this_00.Data + 0x10;
                }
                DestructItems<FString,int>
                          ((FString *)local_388.AllocatorInstance.Data,local_388.ArrayNum);
                __return_storage_ptr__ = local_348;
                if (local_388.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_388.AllocatorInstance.Data);
                }
              }
              if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_358.Data.AllocatorInstance.Data);
              }
            }
            pFVar11 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->(param_1);
            iStack_310 = local_3a0.ArrayNum;
            local_318 = local_3a0.AllocatorInstance.Data;
            if ((local_3a0.ArrayNum < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              pFVar10 = (FIoStatus *)(*pcVar6)();
              return pFVar10;
            }
            local_1c8._12_4_ = uStack_30c;
            local_1c8.ArrayNum = iStack_310;
            local_1c8.DataPtr = (FAnsiString *)local_318;
            FIASHostGroup::Resolve(&pFVar11->HostGroup,&local_378,&local_1c8);
            if (local_378.ErrorCode == Ok) {
              FIoStatus::~FIoStatus(&local_378);
              pFVar11 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->(param_1);
              this = FIASHostGroup::GetUnderlyingHostGroup(&pFVar11->HostGroup);
              FOnDemandHostGroup::Hosts(this,&local_330);
              local_168.Base = local_148;
              local_168.CurPos = local_148;
              local_168.End = (wchar_t *)local_48;
              local_168.bIsDynamic = false;
              local_168.bIsExternal = false;
              if (4 < (byte)LogIoStoreOnDemand._0_1_) {
                pFVar11 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->(param_1);
                ::FName::ToString(&pFVar11->HostGroupName,&local_1b8);
                Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand)
                ;
                if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                }
              }
              uVar26 = uVar23;
              if (0 < local_330.ArrayNum) {
                do {
                  uVar21 = (uint)uVar23;
                  local_168.CurPos = local_168.Base;
                  uVar9 = 0;
                  if ((int)uVar21 < local_330.ArrayNum) {
                    uVar9 = ~uVar21 >> 0x1f;
                  }
                  if ((uVar9 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    pFVar10 = (FIoStatus *)(*pcVar6)();
                    return pFVar10;
                  }
                  iVar1 = *(int *)((longlong)&((local_330.DataPtr)->Data).ArrayNum + uVar26);
                  pcVar5 = *(char **)((longlong)&((local_330.DataPtr)->Data).AllocatorInstance.Data
                                     + uVar26);
                  iVar24 = iVar1 + -1;
                  if (iVar1 == 0) {
                    iVar24 = 0;
                  }
                  if (local_168.End < local_168.CurPos + iVar24) {
                    TStringBuilderBase<wchar_t>::Extend(&local_168,(longlong)iVar24);
                  }
                  if (iVar24 != 0) {
                    local_168.CurPos =
                         FGenericPlatformString::Convert<char,wchar_t>
                                   (local_168.CurPos,iVar24,pcVar5,iVar24);
                  }
                  uVar9 = FOnDemandHostGroup::PrimaryHostIndex(this);
                  if (uVar21 == uVar9) {
                    if (local_168.End < local_168.CurPos + 10) {
                      TStringBuilderBase<wchar_t>::Extend(&local_168,10);
                    }
                    pvVar19 = FGenericPlatformString::Memcpy(local_168.CurPos,L" (primary)",0x14);
                    local_168.CurPos = (wchar_t *)((longlong)pvVar19 + 0x14);
                  }
                  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
                    if (local_168.End < local_168.CurPos + 1) {
                      TStringBuilderBase<wchar_t>::Extend(&local_168,1);
                    }
                    *local_168.CurPos = L'\0';
                    Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
                  }
                  uVar23 = (ulonglong)(uVar21 + 1);
                  uVar26 = uVar26 + 0x10;
                } while ((int)(uVar21 + 1) < local_330.ArrayNum);
              }
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
              TVar7 = FIoStatus::Ok.ErrorMessage;
              (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
              if (TVar7.Chars != (wchar_t *)0x0) {
                LOCK();
                pwVar17 = TVar7.Chars + -4;
                *(int *)pwVar17 = *(int *)pwVar17 + 1;
                UNLOCK();
              }
              __return_storage_ptr__->ErrorCode = FIoStatus::Ok.ErrorCode;
              __return_storage_ptr__->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
            }
            else {
              (__return_storage_ptr__->ErrorMessage).Chars = local_378.ErrorMessage.Chars;
              if (local_378.ErrorMessage.Chars != (wchar_t *)0x0) {
                LOCK();
                *(int *)(local_378.ErrorMessage.Chars + -4) =
                     *(int *)(local_378.ErrorMessage.Chars + -4) + 1;
                UNLOCK();
              }
              __return_storage_ptr__->ErrorCode = local_378.ErrorCode;
              __return_storage_ptr__->SystemErrorCode = local_378.SystemErrorCode;
              FIoStatus::~FIoStatus(&local_378);
            }
            DestructItems<FAnsiString,int>
                      ((FAnsiString *)local_3a0.AllocatorInstance.Data,local_3a0.ArrayNum);
            EVar22 = local_188._8_4_;
            if (local_3a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3a0.AllocatorInstance.Data);
              EVar22 = local_188._8_4_;
            }
          }
          else {
            (__return_storage_ptr__->ErrorMessage).Chars = (wchar_t *)local_188._0_8_;
            if ((wchar_t *)local_188._0_8_ != (wchar_t *)0x0) {
              LOCK();
              *(int *)(local_188._0_8_ + -8) = *(int *)(local_188._0_8_ + -8) + 1;
              UNLOCK();
            }
            __return_storage_ptr__->SystemErrorCode = local_188._12_4_;
            __return_storage_ptr__->ErrorCode = local_188._8_4_;
            EVar22 = local_188._8_4_;
          }
          FIoStatus::operator=((FIoStatus *)local_188,Unknown);
          if (EVar22 == Ok) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_170);
          }
          FIoStatus::~FIoStatus((FIoStatus *)local_188);
          return __return_storage_ptr__;
        }
        goto LAB_1445ffa5d;
      }
    }
    else {
      pFVar14 = ::FName::FName(&local_2d8,"DefaultOnDemand");
      FVar2 = *pFVar14;
      pFVar11 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->(param_1);
      pFVar11->HostGroupName = FVar2;
      pFVar15 = FHostGroupManager::Get();
      pFVar11 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->(param_1);
      pFVar16 = FHostGroupManager::Find(pFVar15,&local_258,pFVar11->HostGroupName);
      pFVar11 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->(param_1);
      pTVar3 = (pFVar16->Impl).SharedReferenceCount.ReferenceController;
      pFVar4 = (pFVar16->Impl).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_268 = (pFVar11->HostGroup).Impl.Object;
      pTStack_260 = (pFVar11->HostGroup).Impl.SharedReferenceCount.ReferenceController;
      (pFVar11->HostGroup).Impl.Object = pFVar4;
      (pFVar11->HostGroup).Impl.SharedReferenceCount.ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_260);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_258.Impl.SharedReferenceCount.ReferenceController);
    }
  }
  TVar7.Chars = FIoStatus::Ok.ErrorMessage.Chars;
  (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
  if (TVar7.Chars != (wchar_t *)0x0) {
    LOCK();
    pwVar17 = TVar7.Chars + -4;
    *(int *)pwVar17 = *(int *)pwVar17 + 1;
    UNLOCK();
  }
  __return_storage_ptr__->ErrorCode = FIoStatus::Ok.ErrorCode;
  __return_storage_ptr__->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
  return __return_storage_ptr__;
}

// StartAnalyticsRecording @ 1446011f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TUniquePtr<UE::IoStore::IAnalyticsRecording,TDefaultDelete<UE::IoStore::IAnalyticsRecording>_>
__thiscall UE::IoStore::FOnDemandIoStore::StartAnalyticsRecording(FOnDemandIoStore *this)

{
  IOnDemandIoDispatcherBackend *pIVar1;
  IAnalyticsRecording *in_RDX;
  
  pIVar1 = (this->StreamingBackend).Object;
  if (pIVar1 != (IOnDemandIoDispatcherBackend *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x78))();
    return (TUniquePtr<UE::IoStore::IAnalyticsRecording,TDefaultDelete<UE::IoStore::IAnalyticsRecording>_>
            )in_RDX;
  }
  *in_RDX = (IAnalyticsRecording)0x0;
  return (TUniquePtr<UE::IoStore::IAnalyticsRecording,TDefaultDelete<UE::IoStore::IAnalyticsRecording>_>
          )in_RDX;
}

// Tick @ 144601970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall UE::IoStore::FOnDemandIoStore::Tick(FOnDemandIoStore *this)

{
  atomic<unsigned_char> aVar1;
  FMutex FVar2;
  TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *pTVar3;
  FMountRequest *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  atomic<unsigned_char> *this_00;
  int iVar12;
  int iVar13;
  TArray<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,TSizedDefaultAllocator<32>_>
  *pTVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  int iVar17;
  int iVar18;
  TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *pTVar19;
  bool bVar20;
  undefined1 local_res18 [8];
  FScriptContainerElement *local_res20;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  uint local_a8;
  TArray<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,TSizedDefaultAllocator<32>_>
  *local_a0;
  TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *local_98;
  FIoStatus local_90;
  FOnDemandMountResult local_80;
  atomic<unsigned_char> *local_58;
  TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *local_50;
  
  this_00 = &(this->RequestMutex).State;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  LOCK();
  bVar20 = ((FMutex *)this_00)->State == (atomic<unsigned_char>)0x0;
  if (bVar20) {
    ((FMutex *)this_00)->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  local_58 = this_00;
  if (!bVar20) {
    FMutex::LockSlow((FMutex *)this_00);
  }
  pTVar14 = &this->MountRequests;
  local_a0 = pTVar14;
  if ((TArray<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,TSizedDefaultAllocator<32>_>
       *)&local_b8 != pTVar14) {
    DestructItems<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,int>
              ((TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *)local_b8.Data,
               (uint)local_b0);
    iVar12 = (this->MountRequests).ArrayNum;
    pTVar19 = (TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *)
              (pTVar14->AllocatorInstance).Data;
    local_b0 = CONCAT44(local_b0._4_4_,iVar12);
    if ((iVar12 == 0) && (local_b0._4_4_ == 0)) {
      local_b0 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar12,local_b0._4_4_,&local_b8,iVar12,(int *)((longlong)&local_b0 + 4));
      ConstructItems<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,int>
                (local_b8.Data,pTVar19,iVar12);
    }
  }
  pTVar14 = local_a0;
  LOCK();
  aVar1 = ((FMutex *)this_00)->State;
  ((FMutex *)this_00)->State = (atomic<unsigned_char>)((char)((FMutex *)this_00)->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread((FMutex *)this_00);
  }
  uVar10 = (ulonglong)(int)(uint)local_b0;
  bVar20 = (uint)local_b0 != 0;
  local_a8 = (uint)local_b0;
  pTVar19 = (TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *)
            (local_b8.Data + uVar10 * 0x10);
  uVar11 = uVar10;
  FVar16.Data = local_b8.Data;
  local_50 = pTVar19;
  do {
    iVar12 = (int)uVar11;
    local_98 = (TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *)FVar16.Data;
    if ((int)uVar11 != (int)uVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
      iVar12 = (uint)local_b0;
    }
    if ((TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *)FVar16.Data == pTVar19) {
      DestructItems<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,int>
                ((TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *)local_b8.Data,iVar12)
      ;
      if ((TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *)local_b8.Data !=
          (TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *)0x0) {
        FMemory::Free(local_b8.Data);
      }
      return bVar20;
    }
    TickMountRequest(this,&local_90,
                     ((TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *)FVar16.Data)->
                     Object);
    LOCK();
    FVar2.State = *this_00;
    if (FVar2.State == (atomic<unsigned_char>)0x0) {
      *this_00 = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (FVar2.State != (atomic<unsigned_char>)0x0) {
      FMutex::LockSlow((FMutex *)this_00);
    }
    pTVar3 = (TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *)
             (pTVar14->AllocatorInstance).Data;
    if (((pTVar3 <= FVar16.Data) && (FVar16.Data < pTVar3 + pTVar14->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pTVar3 = local_98;
    lVar8 = (longlong)pTVar14->ArrayNum;
    if (pTVar14->ArrayNum != 0) {
      local_res20 = (pTVar14->AllocatorInstance).Data;
      iVar17 = 0;
      lVar15 = 0;
      bVar6 = *(FMountRequest **)local_res20 != local_98->Object;
      iVar12 = 0;
      do {
        lVar15 = lVar15 + 1;
        iVar13 = iVar12 + 1;
        if (lVar15 < lVar8) {
          pFVar9 = local_res20 + lVar15 * 0x10;
          do {
            if (bVar6 != (*(FMountRequest **)pFVar9 != pTVar3->Object)) break;
            iVar13 = iVar13 + 1;
            lVar15 = lVar15 + 1;
            pFVar9 = pFVar9 + 0x10;
          } while (lVar15 < lVar8);
        }
        iVar18 = iVar13 - iVar12;
        if (bVar6 == false) {
          DestructItems<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,int>
                    ((TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *)
                     (local_res20 + (longlong)iVar12 * 0x10),iVar18);
        }
        else {
          if (iVar17 != iVar12) {
            memmove(local_res20 + (longlong)iVar17 * 0x10,local_res20 + (longlong)iVar12 * 0x10,
                    (longlong)iVar18 << 4);
          }
          iVar17 = iVar17 + iVar18;
        }
        bVar6 = (bool)(bVar6 ^ 1);
        iVar12 = iVar13;
      } while (lVar15 < lVar8);
      local_a0->ArrayNum = iVar17;
      this_00 = local_58;
      pTVar14 = local_a0;
      FVar16.Data = (FScriptContainerElement *)local_98;
      pTVar19 = local_50;
    }
    LOCK();
    aVar1 = *this_00;
    *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      FMutex::WakeWaitingThread((FMutex *)this_00);
    }
    pFVar4 = ((TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *)FVar16.Data)->Object;
    local_80.MountId.Data.AllocatorInstance.Data =
         (pFVar4->Args).MountId.Data.AllocatorInstance.Data;
    (pFVar4->Args).MountId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.MountId.Data.ArrayNum = (pFVar4->Args).MountId.Data.ArrayNum;
    local_80.MountId.Data.ArrayMax = (pFVar4->Args).MountId.Data.ArrayMax;
    (pFVar4->Args).MountId.Data.ArrayNum = 0;
    (pFVar4->Args).MountId.Data.ArrayMax = 0;
    local_80.Status.ErrorMessage.Chars = local_90.ErrorMessage.Chars;
    if (local_90.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_90.ErrorMessage.Chars + -4) = *(int *)(local_90.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_80.Status.ErrorCode = local_90.ErrorCode;
    local_80.Status.SystemErrorCode = local_90.SystemErrorCode;
    local_80.DurationInSeconds =
         ((TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *)FVar16.Data)->Object->
         DurationInSeconds;
    CompleteMountRequest
              (this,((TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1> *)FVar16.Data)->
                    Object,&local_80);
    FIoStatus::~FIoStatus(&local_80.Status);
    if (local_80.MountId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.MountId.Data.AllocatorInstance.Data);
    }
    FIoStatus::~FIoStatus(&local_90);
    uVar11 = local_b0 & 0xffffffff;
    FVar16.Data = FVar16.Data + 0x10;
    uVar10 = (ulonglong)local_a8;
  } while( true );
}

// TickLoop @ 144601cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall UE::IoStore::FOnDemandIoStore::TickLoop(FOnDemandIoStore *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  bool bVar2;
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1162,L"FileSystem/OnDemandIoStore");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name1162,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,&LLMScope_Name1162,true);
  if (5 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  this_00 = &this->RequestMutex;
  while( true ) {
    do {
      bVar2 = Tick(this);
    } while (bVar2);
    LOCK();
    bVar2 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar2) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar2) {
      FMutex::LockSlow(this_00);
    }
    if (this->bTickRequested == false) break;
    this->bTickRequested = false;
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      FMutex::WakeWaitingThread(this_00);
    }
  }
  this->bTicking = false;
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  if (5 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<6>
              ((FStaticBasicLogRecord *)&PTR_u_Exiting_I_O_sto_150d89c40,
               (FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// TickMountRequest @ 144601e50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000144602c1f) */
/* WARNING: Removing unreachable block (ram,0x000144603887) */
/* WARNING: Removing unreachable block (ram,0x0001446026d1) */
/* WARNING: Removing unreachable block (ram,0x000144603a91) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FIoStatus * __thiscall
UE::IoStore::FOnDemandIoStore::TickMountRequest
          (FOnDemandIoStore *this,FIoStatus *__return_storage_ptr__,FMountRequest *param_1)

{
  int *piVar1;
  EOnDemandContainerFlags *pEVar2;
  FMutex *this_00;
  TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<unsigned_char> aVar4;
  int iVar5;
  TRefCountPtr<FIoBuffer::BufCore> TVar6;
  IOnDemandPackageStoreBackend *pIVar7;
  code *pcVar8;
  double dVar9;
  char *pcVar10;
  wchar_t *pwVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  FIoBuffer FVar18;
  TUniquePtr<UE::IoStore::FOnDemandToc,TDefaultDelete<UE::IoStore::FOnDemandToc>_> TVar19;
  TSharedPtr<UE::IoStore::FOnDemandContainer,1> *pTVar20;
  FOnDemandIoStore *pFVar21;
  undefined4 uVar22;
  FIoContainerHeader *pFVar23;
  int iVar24;
  ENullTerminatedString EVar25;
  int iVar26;
  FIoStatusBuilder *pFVar27;
  FIoStatus *pFVar28;
  TStringView<wchar_t> *pTVar29;
  ulonglong uVar30;
  FOnDemandToc *pFVar31;
  FOnDemandToc *pFVar32;
  TStringView<char> *pTVar33;
  void *pvVar34;
  ulonglong uVar35;
  FEncryptionKeyManager *this_01;
  FIoChunkId *pFVar36;
  FIoBuffer *pFVar37;
  FOnDemandHostGroup *this_02;
  TStringBuilderBase<char> *pTVar38;
  FOnDemandContainer *pFVar39;
  ENullTerminatedString EVar40;
  ulong64 uVar41;
  char cVar42;
  FScriptContainerElement *pFVar43;
  FSharedReferencer<1> FVar44;
  FScriptContainerElement *pFVar45;
  ForAnyElementType this_03;
  FScriptContainerElement *pFVar46;
  longlong lVar47;
  EIoErrorCode EVar48;
  uint uVar49;
  uint uVar50;
  ulonglong uVar51;
  TReferenceControllerBase<1> *pTVar52;
  bool bVar53;
  undefined1 auStackY_1b98 [32];
  bool local_1b48;
  undefined1 local_1b47 [7];
  TArray<FString,TSizedDefaultAllocator<32>_> local_1b40;
  TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> local_1b30;
  undefined1 local_1b20;
  undefined1 local_1b1f [7];
  FIoBuffer local_1b18;
  EIoErrorCode local_1b10;
  uint local_1b0c;
  FMountRequest *local_1b00;
  FIoStatus *local_1af8;
  FMountRequest *local_1af0;
  double *local_1ae8;
  FOnDemandChunkInfo local_1ae0;
  atomic<unsigned_char> *local_1ac8;
  FIoStatus local_1ac0;
  double local_1ab0;
  TUniquePtr<UE::IoStore::FOnDemandToc,TDefaultDelete<UE::IoStore::FOnDemandToc>_> local_1aa8;
  FGuid local_1aa0;
  FIoContainerHeader *local_1a90;
  FSharedReferencer<1> local_1a88;
  FIoStatus local_1a80;
  TSharedPtr<UE::IoStore::FOnDemandContainer,1> *local_1a68;
  ulonglong uStack_1a60;
  FIoStatus local_1a58;
  FIoStatus local_1a48;
  FIoBuffer local_1a38;
  FScriptContainerElement *local_1a30;
  int local_1a28;
  int local_1a24;
  FScriptContainerElement *local_1a20;
  int local_1a18;
  int local_1a14;
  FSample local_1a10;
  ulong64 local_1a08;
  uint local_1a00;
  uint local_19fc;
  int local_19f8;
  uchar local_19f4;
  uchar local_19f3;
  LARGE_INTEGER local_19f0;
  FIoChunkId *local_19e8;
  LARGE_INTEGER local_19e0;
  LARGE_INTEGER local_19d8;
  LARGE_INTEGER local_19d0;
  TPairInitializer<FString_&&,FIoBuffer_const_&> local_19c8;
  LARGE_INTEGER local_19b8;
  LARGE_INTEGER local_19b0;
  FOnDemandIoStore *local_19a8;
  TReferenceControllerBase<1> *local_19a0;
  wchar_t *local_1998;
  undefined4 uStack_1990;
  undefined4 uStack_198c;
  TStringView<wchar_t> local_1988;
  TStringView<wchar_t> local_1978;
  TStringView<wchar_t> local_1968;
  FScriptContainerElement *local_1958;
  int iStack_1950;
  undefined4 uStack_194c;
  FScriptContainerElement *local_1948;
  ENullTerminatedString EStack_1940;
  undefined4 uStack_193c;
  char *local_1938;
  int iStack_1930;
  undefined4 uStack_192c;
  wchar_t *local_1928;
  undefined4 uStack_1920;
  undefined4 uStack_191c;
  FScriptContainerElement *local_1918;
  ENullTerminatedString EStack_1910;
  undefined4 uStack_190c;
  wchar_t *local_1908;
  undefined4 uStack_1900;
  undefined4 uStack_18fc;
  char *local_18f8;
  int iStack_18f0;
  undefined4 uStack_18ec;
  FString *local_18e8;
  FIoBuffer *local_18e0;
  FString local_18d8;
  void *local_18c8;
  ulonglong uStack_18c0;
  wchar_t *local_18b8;
  undefined4 uStack_18b0;
  undefined4 uStack_18ac;
  wchar_t *local_18a8;
  undefined4 uStack_18a0;
  undefined4 uStack_189c;
  FMultiEndpointHttpClientConfig local_1898;
  FMultiEndpointHttpClientConfig local_1868;
  TStringView<wchar_t> local_1838;
  TStringView<wchar_t> local_1828;
  TStringView<wchar_t> local_1818;
  TStringView<wchar_t> local_1808;
  TStringView<char> local_17f8;
  TStringView<wchar_t> local_17e8;
  TMemoryView<void_const_> local_17d8;
  TStringView<wchar_t> local_17c8;
  TStringView<wchar_t> local_17b8;
  TStringView<wchar_t> local_17a8;
  FString local_1798;
  FString local_1788;
  TStringView<char> local_1778;
  TStringView<char> local_1768;
  TMemoryView<void_const_> local_1758;
  FString local_1748;
  TStringView<wchar_t> local_1738;
  TStringView<wchar_t> local_1728;
  undefined1 local_1718 [32];
  undefined1 local_16f8 [16];
  TStringView<wchar_t> local_16e8;
  TStringView<wchar_t> local_16d8;
  TStringView<char> local_16c8;
  char *local_16b8;
  undefined8 uStack_16b0;
  FMemoryReaderView local_16a8;
  FOnDemandToc local_15f8;
  undefined1 local_1558 [32];
  void *local_1538;
  undefined4 local_1530;
  uint local_152c;
  undefined4 local_1528;
  undefined4 local_1524;
  ForElementType<FSetElementId> local_1518;
  int local_1510;
  undefined1 local_1508 [16];
  FIoContainerHeader *local_14f8;
  TReferenceControllerBase<1> *local_14f0;
  FIoChunkId local_14e8;
  undefined1 local_14d8 [16];
  FMultiEndpointHttpClientResponse local_14c8;
  undefined1 local_1480 [16];
  FMultiEndpointHttpClientResponse local_1470;
  TIoStatusOr<UE::IoStore::FOnDemandToc> local_1428;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_1378;
  TStringBuilderBase<wchar_t> local_12d8;
  wchar_t local_12b8 [128];
  TStringBuilderBase<wchar_t> local_11b8;
  wchar_t local_1198 [512];
  TStringBuilderBase<char> local_d98;
  char local_d78 [512];
  FIoStatusBuilder local_b78;
  FIoStatusBuilder local_948;
  FIoStatusBuilder local_718;
  FIoStatusBuilder local_4e8;
  FIoStatusBuilder local_2b8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1b98;
  local_1b00 = param_1;
  local_1af8 = __return_storage_ptr__;
  local_19a8 = this;
  if (5 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  local_1b48 = false;
  cVar42 = '\0';
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    `UE::IoStore::LoadDefaultHttpCertificates'::__l2::FDefaultCerts::FDefaultCerts
              (&DefaultCerts,&local_1b48);
    atexit(`UE::IoStore::LoadDefaultHttpCertificates'::__l2::
           _dynamic_atexit_destructor_for__DefaultCerts__);
    _Init_thread_footer(&::_TSS0);
    cVar42 = local_1b48;
  }
  local_1a58.ErrorMessage.Chars = DefaultCerts.Status.ErrorMessage.Chars;
  if (DefaultCerts.Status.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(DefaultCerts.Status.ErrorMessage.Chars + -4) =
         *(int *)(DefaultCerts.Status.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  local_1a58.ErrorCode = DefaultCerts.Status.ErrorCode;
  local_1a58.SystemErrorCode = DefaultCerts.Status.SystemErrorCode;
  if (((DefaultCerts.Status.ErrorCode != Ok) && (cVar42 != '\0')) &&
     (1 < (byte)LogIoStoreOnDemand._0_1_)) {
    FIoStatus::ToString(&local_1a58,(FString *)(local_1718 + 8));
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    if ((FScriptContainerElement *)local_1718._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1718._8_8_);
    }
  }
  FIoStatus::~FIoStatus(&local_1a58);
  QueryPerformanceCounter(&local_19d0);
  dVar13 = __real_4170000000000000;
  local_1ae8 = &local_1ab0;
  local_1ab0 = (double)local_19d0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
               __real_4170000000000000;
  local_1af0 = param_1;
  if ((param_1->Args).MountId.Data.ArrayNum < 2) {
    pFVar27 = FIoStatusBuilder::FIoStatusBuilder(&local_2b8,InvalidParameter);
    uStack_1990 = 0x10;
    local_1998 = L"Invalid mount ID";
    local_16f8._8_8_ = CONCAT44(uStack_198c,0x10);
    local_16f8._0_8_ = L"Invalid mount ID";
    pFVar27 = FIoStatusBuilder::operator<<(pFVar27,(TStringView<wchar_t> *)local_16f8);
    FIoStatusBuilder::operator_FIoStatus(pFVar27,__return_storage_ptr__);
    FIoStatusBuilder::~FIoStatusBuilder(&local_2b8);
    QueryPerformanceCounter(&local_19d8);
    param_1->DurationInSeconds =
         ((double)local_19d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar13) - local_1ab0
    ;
    return __return_storage_ptr__;
  }
  EVar48 = Ok;
  local_1ac8 = &(this->ContainerMutex).State;
  local_1b40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b40.ArrayNum = 0;
  local_1b40.ArrayMax = 0;
  LOCK();
  bVar53 = ((FMutex *)local_1ac8)->State == (atomic<unsigned_char>)0x0;
  if (bVar53) {
    ((FMutex *)local_1ac8)->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar53) {
    FMutex::LockSlow((FMutex *)local_1ac8);
  }
  pFVar43 = (this->Containers).AllocatorInstance.Data;
  piVar1 = &(this->Containers).ArrayNum;
  iVar26 = *piVar1;
  pFVar45 = pFVar43 + (longlong)iVar26 * 0x10;
  while( true ) {
    if (*piVar1 != iVar26) {
      local_1b20 = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_1b20);
    }
    pFVar28 = local_1af8;
    if (pFVar43 == pFVar45) break;
    if ((*(longlong *)pFVar43 == 0) &&
       (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar53)) {
      pcVar8 = (code *)swi(3);
      pFVar28 = (FIoStatus *)(*pcVar8)();
      return pFVar28;
    }
    iVar24 = (param_1->Args).MountId.Data.ArrayNum;
    iVar5 = *(int *)(*(longlong *)pFVar43 + 0x68);
    if (iVar5 == iVar24) {
      if (1 < iVar5) {
        iVar24 = FGenericPlatformStricmp::Stricmp
                           (*(wchar_t **)(*(longlong *)pFVar43 + 0x60),
                            (wchar_t *)(param_1->Args).MountId.Data.AllocatorInstance.Data);
        bVar53 = iVar24 == 0;
        goto LAB_144602153;
      }
LAB_14460215e:
      if ((*(longlong *)pFVar43 == 0) &&
         (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar53)) {
        pcVar8 = (code *)swi(3);
        pFVar28 = (FIoStatus *)(*pcVar8)();
        return pFVar28;
      }
      pFVar46 = (FScriptContainerElement *)(*(longlong *)pFVar43 + 0x50);
      if (((local_1b40.AllocatorInstance.Data <= pFVar46) &&
          (pFVar46 < local_1b40.AllocatorInstance.Data + (longlong)local_1b40.ArrayMax * 0x10)) &&
         (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar53)) {
        pcVar8 = (code *)swi(3);
        pFVar28 = (FIoStatus *)(*pcVar8)();
        return pFVar28;
      }
      iVar24 = local_1b40.ArrayNum;
      if (local_1b40.ArrayNum == local_1b40.ArrayMax) {
        iVar24 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_1b40.AllocatorInstance,&local_1b40.ArrayMax);
      }
      local_1b40.ArrayNum = iVar24 + 1;
      ::FString::FString((FString *)(local_1b40.AllocatorInstance.Data + (longlong)iVar24 * 0x10),
                         (FString *)pFVar46);
      if ((*(longlong *)pFVar43 == 0) &&
         (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar53)) {
        pcVar8 = (code *)swi(3);
        pFVar28 = (FIoStatus *)(*pcVar8)();
        return pFVar28;
      }
      if ((*(byte *)(*(longlong *)pFVar43 + 0x114) & 1) != 0) {
        EVar48 = PendingEncryptionKey;
      }
      if ((*(longlong *)pFVar43 == 0) &&
         (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar53)) {
        pcVar8 = (code *)swi(3);
        pFVar28 = (FIoStatus *)(*pcVar8)();
        return pFVar28;
      }
      param_1 = local_1b00;
      if ((*(byte *)(*(longlong *)pFVar43 + 0x114) & 0x40) != 0) {
        EVar48 = PendingHostGroup;
      }
    }
    else {
      bVar53 = iVar5 + iVar24 == 1;
LAB_144602153:
      if (bVar53) goto LAB_14460215e;
    }
    pFVar43 = pFVar43 + 0x10;
  }
  LOCK();
  aVar4 = *local_1ac8;
  *local_1ac8 = (atomic<unsigned_char>)((char)*local_1ac8 + -1);
  UNLOCK();
  local_1b10 = EVar48;
  if (((byte)aVar4 & 2) != 0) {
    FMutex::WakeWaitingThread((FMutex *)local_1ac8);
  }
  local_1988.DataPtr = (wchar_t *)(param_1->Args).TocRelativeUrl.Data.AllocatorInstance.Data;
  pFVar32 = (FOnDemandToc *)0x0;
  iVar26 = (param_1->Args).TocRelativeUrl.Data.ArrayNum;
  local_1b30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b30.ArrayNum = 0;
  local_1b30.ArrayMax = 0;
  iVar24 = 0;
  local_1988.Size = iVar26 + -1;
  if (iVar26 == 0) {
    local_1988.Size = iVar24;
  }
  pTVar29 = FPathViews::GetExtension(&local_16e8,&local_1988,false);
  iVar26 = (param_1->Args).TocRelativeUrl.Data.ArrayNum;
  pFVar43 = (param_1->Args).TocRelativeUrl.Data.AllocatorInstance.Data;
  if (pTVar29->Size == 0) {
    local_1978.DataPtr = (wchar_t *)pFVar43;
    pTVar29 = &local_1978;
    local_1978.Size = iVar26 + -1;
    if (iVar26 == 0) {
      local_1978.Size = iVar24;
    }
  }
  else {
    local_1968.Size = iVar26 + -1;
    if (iVar26 == 0) {
      local_1968.Size = iVar24;
    }
    local_1968.DataPtr = (wchar_t *)pFVar43;
    pTVar29 = FPathViews::GetPath(&local_16d8,&local_1968);
  }
  uVar16 = _UNK_150d8e0e8;
  uVar14 = ___xmm_00000002ffffffffffffffff00000004;
  pFVar31 = (param_1->Args).Toc.Ptr;
  pwVar11 = pTVar29->DataPtr;
  uVar12._0_4_ = pTVar29->Size;
  uVar12._4_4_ = *(undefined4 *)&pTVar29->field_0xc;
  if (pFVar31 == (FOnDemandToc *)0x0) {
    EVar40 = No;
    if ((param_1->Args).FilePath.Data.ArrayNum < 2) {
      bVar53 = FOnDemandHostGroup::IsEmpty(&(param_1->Args).HostGroup);
      if ((!bVar53) && (1 < (param_1->Args).TocRelativeUrl.Data.ArrayNum)) {
        local_11b8.Base = local_1198;
        local_11b8.CurPos = local_1198;
        local_11b8.bIsDynamic = false;
        local_11b8.bIsExternal = false;
        local_11b8.End = (wchar_t *)&local_d98;
        pTVar33 = FOnDemandHostGroup::PrimaryHost(&(param_1->Args).HostGroup,&local_16c8);
        pcVar10 = pTVar33->DataPtr;
        uStack_16b0._0_4_ = pTVar33->Size;
        uStack_16b0._4_4_ = *(undefined4 *)&pTVar33->field_0xc;
        iVar26 = (int)*(undefined8 *)&pTVar33->Size;
        local_16b8 = pcVar10;
        if (local_11b8.End < (TStringBuilderBase<char> *)(local_11b8.CurPos + iVar26)) {
          TStringBuilderBase<wchar_t>::Extend(&local_11b8,(longlong)iVar26);
        }
        if (iVar26 != 0) {
          local_11b8.CurPos =
               FGenericPlatformString::Convert<char,wchar_t>
                         (local_11b8.CurPos,iVar26,pcVar10,iVar26);
        }
        iVar26 = (param_1->Args).TocRelativeUrl.Data.ArrayNum;
        EVar25 = iVar26 - Yes;
        if (iVar26 == 0) {
          EVar25 = EVar40;
        }
        if (((int)EVar25 < 1) &&
           (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                ,0x107,
                                L"String index out of bounds: Index %i from a string with a length of %i"
                               ), bVar53)) {
          pcVar8 = (code *)swi(3);
          pFVar28 = (FIoStatus *)(*pcVar8)();
          return pFVar28;
        }
        if (*(short *)(param_1->Args).TocRelativeUrl.Data.AllocatorInstance.Data != 0x2f) {
          if (local_11b8.End < (TStringBuilderBase<char> *)(local_11b8.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_11b8,1);
          }
          *local_11b8.CurPos = L'/';
          local_11b8.CurPos = local_11b8.CurPos + 1;
        }
        iVar26 = (param_1->Args).TocRelativeUrl.Data.ArrayNum;
        pFVar43 = (param_1->Args).TocRelativeUrl.Data.AllocatorInstance.Data;
        EVar25 = iVar26 - Yes;
        if (iVar26 == 0) {
          EVar25 = EVar40;
        }
        uVar41 = (ulong64)(int)EVar25;
        if (local_11b8.End < (TStringBuilderBase<char> *)(local_11b8.CurPos + uVar41)) {
          TStringBuilderBase<wchar_t>::Extend(&local_11b8,uVar41);
        }
        if (EVar25 != No) {
          pvVar34 = FGenericPlatformString::Memcpy(local_11b8.CurPos,pFVar43,uVar41 * 2);
          local_11b8.CurPos = (wchar_t *)(uVar41 * 2 + (longlong)pvVar34);
        }
        if (4 < (byte)LogIoStoreOnDemand._0_1_) {
          if (local_11b8.End < (TStringBuilderBase<char> *)(local_11b8.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_11b8,1);
          }
          *local_11b8.CurPos = L'\0';
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        }
        local_1378._padding_ = 0;
        iVar26 = (int)((longlong)local_11b8.CurPos - (longlong)local_11b8.Base >> 1);
        if (local_11b8.Base == (wchar_t *)0x0) {
          local_1378.Ptr = (char *)0x0;
          local_1378.StringLength = 0;
        }
        else {
          EVar25 = EVar40;
          if ((0 < iVar26) && (local_11b8.Base[(longlong)iVar26 + -1] == L'\0')) {
            EVar25 = Yes;
            iVar26 = iVar26 + -1;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::Init
                    (&local_1378,local_11b8.Base,iVar26,EVar25);
        }
        uVar17 = _UNK_150d8e0e8;
        uVar15 = ___xmm_00000002ffffffffffffffff00000004;
        local_17f8._12_4_ = uStack_192c;
        local_17f8.Size = local_1378.StringLength;
        ___xmm_00000002ffffffffffffffff00000004 = (int)uVar14;
        _UNK_150d8e0e4 = SUB84(uVar14,4);
        local_1898.MaxConnectionCount = ___xmm_00000002ffffffffffffffff00000004;
        local_1898.ReceiveBufferSize = _UNK_150d8e0e4;
        _UNK_150d8e0e8 = (int)uVar16;
        _UNK_150d8e0ec = SUB84(uVar16,4);
        local_1898.SendBufferSize = _UNK_150d8e0e8;
        local_1898.MaxRetryCount = _UNK_150d8e0ec;
        local_1898.TimeoutMs = 0;
        local_1898.Redirects = Follow;
        local_1898.bEnableThreadSafetyChecks = false;
        local_1898.bAllowChunkedTransfer = true;
        local_1898.bResponseBodyOnError = false;
        local_1898.LogCategory = (FLogCategoryBase *)0x0;
        local_1898.LogVerbosity = Log;
        ___xmm_00000002ffffffffffffffff00000004 = uVar15;
        _UNK_150d8e0e8 = uVar17;
        local_1938 = local_1378.Ptr;
        iStack_1930 = local_1378.StringLength;
        local_17f8.DataPtr = local_1378.Ptr;
        FMultiEndpointHttpClient::Get
                  ((TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> *)local_1480,
                   &local_17f8,&local_1898);
        if (local_1480._8_4_ != Ok) {
          pFVar27 = FIoStatusBuilder::FIoStatusBuilder(&local_b78,ReadError);
          uStack_1920 = 0x1c;
          local_1928 = L"Failed to fetch TOC from URL";
          local_17e8._12_4_ = uStack_191c;
          local_17e8.Size = 0x1c;
          local_17e8.DataPtr = L"Failed to fetch TOC from URL";
          pFVar27 = FIoStatusBuilder::operator<<(pFVar27,&local_17e8);
          FIoStatusBuilder::operator_FIoStatus(pFVar27,&local_1a48);
          FIoStatusBuilder::~FIoStatusBuilder(&local_b78);
          (pFVar28->ErrorMessage).Chars = local_1a48.ErrorMessage.Chars;
          if (local_1a48.ErrorMessage.Chars != (wchar_t *)0x0) {
            LOCK();
            *(int *)(local_1a48.ErrorMessage.Chars + -4) =
                 *(int *)(local_1a48.ErrorMessage.Chars + -4) + 1;
            UNLOCK();
          }
          pFVar28->ErrorCode = local_1a48.ErrorCode;
          pFVar28->SystemErrorCode = local_1a48.SystemErrorCode;
          FIoStatus::~FIoStatus(&local_1a48);
          FIoStatus::operator=((FIoStatus *)local_1480,Unknown);
          if (local_1480._8_4_ == Ok) {
            FMultiEndpointHttpClientResponse::~FMultiEndpointHttpClientResponse(&local_1470);
          }
          FIoStatus::~FIoStatus((FIoStatus *)local_1480);
          if ((void *)local_1378._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_1378._padding_);
          }
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_11b8);
          DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int>
                    ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)
                     local_1b30.AllocatorInstance.Data,local_1b30.ArrayNum);
          if ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_1b30.AllocatorInstance.Data !=
              (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)0x0) {
            FMemory::Free(local_1b30.AllocatorInstance.Data);
          }
          DestructItems<FString,int>
                    ((FString *)local_1b40.AllocatorInstance.Data,local_1b40.ArrayNum);
          if (local_1b40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b40.AllocatorInstance.Data);
          }
          ScopeExitSupport::
          TScopeGuard<`UE::IoStore::FOnDemandIoStore::TickMountRequest'::__l2::<lambda_1>_>::
          ~TScopeGuard<_UE::IoStore::FOnDemandIoStore::TickMountRequest_::__l2::<lambda_1>_>
                    (&local_1af0);
          return pFVar28;
        }
        local_1a68 = *(TSharedPtr<UE::IoStore::FOnDemandContainer,1> **)
                      local_1470.Body.CorePtr.Reference;
        uStack_1a60 = (ulonglong)
                      CONCAT14(*(uchar *)((longlong)local_1470.Body.CorePtr.Reference + 0x18),
                               *(uint *)((longlong)local_1470.Body.CorePtr.Reference + 8));
        local_17d8.Data = local_1a68;
        local_17d8.Size = uStack_1a60;
        FMemoryReaderView::FMemoryReaderView(&local_16a8,&local_17d8,false);
        pFVar31 = ::operator_new(0xa0);
        if (pFVar31 != (FOnDemandToc *)0x0) {
          memset(pFVar31,0,0xa0);
          pFVar32 = FOnDemandToc::FOnDemandToc(pFVar31);
        }
        param_1 = local_1b00;
        local_1aa8.Ptr = pFVar32;
        TUniquePtr<UE::IoStore::FOnDemandToc,TDefaultDelete<UE::IoStore::FOnDemandToc>_>::operator=
                  ((TUniquePtr<UE::IoStore::FOnDemandToc,TDefaultDelete<UE::IoStore::FOnDemandToc>_>
                    *)local_1b00,&local_1aa8);
        TVar19.Ptr = local_1aa8.Ptr;
        if (local_1aa8.Ptr != (FOnDemandToc *)0x0) {
          FOnDemandToc::~FOnDemandToc(local_1aa8.Ptr);
          ::operator_delete(TVar19.Ptr,0xa0);
        }
        IoStore::operator<<((FArchive *)&local_16a8,(param_1->Args).Toc.Ptr);
        if (((local_16a8._padding_._1_1_ & 2) != 0) || ((local_16a8._padding_._1_1_ & 4) != 0)) {
          pFVar32 = (param_1->Args).Toc.Ptr;
          if (pFVar32 != (FOnDemandToc *)0x0) {
            (param_1->Args).Toc.Ptr = (FOnDemandToc *)0x0;
            FOnDemandToc::~FOnDemandToc(pFVar32);
            ::operator_delete(pFVar32,0xa0);
          }
          pFVar27 = FIoStatusBuilder::FIoStatusBuilder(&local_948,ReadError);
          uStack_1900 = 0x2a;
          local_1908 = L"Failed to serialize TOC from HTTP response";
          local_17a8._12_4_ = uStack_18fc;
          local_17a8.Size = 0x2a;
          local_17a8.DataPtr = L"Failed to serialize TOC from HTTP response";
          pFVar27 = FIoStatusBuilder::operator<<(pFVar27,&local_17a8);
          FIoStatusBuilder::operator_FIoStatus(pFVar27,&local_1a80);
          FIoStatusBuilder::~FIoStatusBuilder(&local_948);
          (pFVar28->ErrorMessage).Chars = local_1a80.ErrorMessage.Chars;
          if (local_1a80.ErrorMessage.Chars != (wchar_t *)0x0) {
            LOCK();
            *(int *)(local_1a80.ErrorMessage.Chars + -4) =
                 *(int *)(local_1a80.ErrorMessage.Chars + -4) + 1;
            UNLOCK();
          }
          pFVar28->ErrorCode = local_1a80.ErrorCode;
          pFVar28->SystemErrorCode = local_1a80.SystemErrorCode;
          FIoStatus::~FIoStatus(&local_1a80);
          FArchive::~FArchive((FArchive *)&local_16a8);
          FIoStatus::operator=((FIoStatus *)local_1480,Unknown);
          if (local_1480._8_4_ == Ok) {
            FMultiEndpointHttpClientResponse::~FMultiEndpointHttpClientResponse(&local_1470);
          }
          FIoStatus::~FIoStatus((FIoStatus *)local_1480);
          if ((void *)local_1378._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_1378._padding_);
          }
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_11b8);
          DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int>
                    ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)
                     local_1b30.AllocatorInstance.Data,local_1b30.ArrayNum);
          if ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_1b30.AllocatorInstance.Data !=
              (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)0x0) {
            FMemory::Free(local_1b30.AllocatorInstance.Data);
          }
          DestructItems<FString,int>
                    ((FString *)local_1b40.AllocatorInstance.Data,local_1b40.ArrayNum);
          if (local_1b40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b40.AllocatorInstance.Data);
          }
          ScopeExitSupport::
          TScopeGuard<`UE::IoStore::FOnDemandIoStore::TickMountRequest'::__l2::<lambda_1>_>::
          ~TScopeGuard<_UE::IoStore::FOnDemandIoStore::TickMountRequest_::__l2::<lambda_1>_>
                    (&local_1af0);
          return pFVar28;
        }
        local_1918 = (param_1->Args).MountId.Data.AllocatorInstance.Data;
        iVar26 = (param_1->Args).MountId.Data.ArrayNum;
        EStack_1910 = iVar26 - Yes;
        if (iVar26 == 0) {
          EStack_1910 = EVar40;
        }
        local_17b8._12_4_ = uStack_190c;
        local_17b8.Size = EStack_1910;
        local_17c8.DataPtr = pwVar11;
        local_17c8._8_8_ = uVar12;
        local_17b8.DataPtr = (wchar_t *)local_1918;
        CreateContainersFromToc
                  (&local_17b8,&local_17c8,(param_1->Args).Toc.Ptr,&local_1b40,&local_1b30);
        FArchive::~FArchive((FArchive *)&local_16a8);
        TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse>::
        ~TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse>
                  ((TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> *)local_1480);
        if ((void *)local_1378._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_1378._padding_);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_11b8);
      }
    }
    else {
      if (4 < (byte)LogIoStoreOnDemand._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
      FOnDemandToc::LoadFromFile(&local_1428,&(param_1->Args).FilePath,false);
      if (local_1428.StatusValue.ErrorCode != Ok) {
        (pFVar28->ErrorMessage).Chars = local_1428.StatusValue.ErrorMessage.Chars;
        if (local_1428.StatusValue.ErrorMessage.Chars != (wchar_t *)0x0) {
          LOCK();
          *(int *)(local_1428.StatusValue.ErrorMessage.Chars + -4) =
               *(int *)(local_1428.StatusValue.ErrorMessage.Chars + -4) + 1;
          UNLOCK();
        }
        pFVar28->SystemErrorCode = local_1428.StatusValue.SystemErrorCode;
        pFVar28->ErrorCode = local_1428.StatusValue.ErrorCode;
        FIoStatus::operator=(&local_1428.StatusValue,Unknown);
        if (local_1428.StatusValue.ErrorCode == Ok) {
          FOnDemandToc::~FOnDemandToc((FOnDemandToc *)&local_1428.Value);
        }
        FIoStatus::~FIoStatus(&local_1428.StatusValue);
        DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int>
                  ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)
                   local_1b30.AllocatorInstance.Data,local_1b30.ArrayNum);
        if ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_1b30.AllocatorInstance.Data !=
            (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)0x0) {
          FMemory::Free(local_1b30.AllocatorInstance.Data);
        }
        DestructItems<FString,int>((FString *)local_1b40.AllocatorInstance.Data,local_1b40.ArrayNum)
        ;
        if (local_1b40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b40.AllocatorInstance.Data);
        }
        QueryPerformanceCounter(&local_19e0);
        dVar9 = (double)local_19e0.QuadPart;
        goto LAB_144604325;
      }
      FIoStatus::operator=(&local_1428.StatusValue,&FIoStatus::Unknown);
      FOnDemandToc::FOnDemandToc(&local_15f8,(FOnDemandToc *)&local_1428.Value);
      pFVar31 = ::operator_new(0xa0);
      if (pFVar31 != (FOnDemandToc *)0x0) {
        pFVar32 = FOnDemandToc::FOnDemandToc(pFVar31,&local_15f8);
      }
      if (param_1 == (FMountRequest *)local_1718) {
        if (pFVar32 != (FOnDemandToc *)0x0) {
          FOnDemandToc::~FOnDemandToc(pFVar32);
          ::operator_delete(pFVar32,0xa0);
        }
      }
      else {
        pFVar31 = (param_1->Args).Toc.Ptr;
        (local_1b00->Args).Toc.Ptr = pFVar32;
        param_1 = local_1b00;
        if (pFVar31 != (FOnDemandToc *)0x0) {
          FOnDemandToc::~FOnDemandToc(pFVar31);
          ::operator_delete(pFVar31,0xa0);
          param_1 = local_1b00;
        }
      }
      FOnDemandToc::~FOnDemandToc(&local_15f8);
      local_1948 = (param_1->Args).MountId.Data.AllocatorInstance.Data;
      iVar26 = (param_1->Args).MountId.Data.ArrayNum;
      EStack_1940 = iVar26 - Yes;
      if (iVar26 == 0) {
        EStack_1940 = EVar40;
      }
      local_1808._12_4_ = uStack_193c;
      local_1808.Size = EStack_1940;
      local_1818.DataPtr = pwVar11;
      local_1818._8_8_ = uVar12;
      local_1808.DataPtr = (wchar_t *)local_1948;
      CreateContainersFromToc
                (&local_1808,&local_1818,(param_1->Args).Toc.Ptr,&local_1b40,&local_1b30);
      FIoStatus::operator=(&local_1428.StatusValue,Unknown);
      if (local_1428.StatusValue.ErrorCode == Ok) {
        FOnDemandToc::~FOnDemandToc((FOnDemandToc *)&local_1428.Value);
      }
      FIoStatus::~FIoStatus(&local_1428.StatusValue);
    }
  }
  else {
    iVar26 = (param_1->Args).MountId.Data.ArrayNum;
    local_1958 = (param_1->Args).MountId.Data.AllocatorInstance.Data;
    iStack_1950 = iVar26 + -1;
    if (iVar26 == 0) {
      iStack_1950 = iVar24;
    }
    local_1828._12_4_ = uStack_194c;
    local_1828.Size = iStack_1950;
    local_1838.DataPtr = pwVar11;
    local_1838._8_8_ = uVar12;
    local_1828.DataPtr = (wchar_t *)local_1958;
    CreateContainersFromToc(&local_1828,&local_1838,pFVar31,&local_1b40,&local_1b30);
  }
  local_d98.Base = local_d78;
  local_d98.CurPos = local_d78;
  local_d98.End = (char *)&local_b78;
  uVar30 = (ulonglong)local_1b30.ArrayNum;
  local_d98.bIsDynamic = false;
  local_d98.bIsExternal = false;
  local_1a68 = (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)
               (local_1b30.AllocatorInstance.Data + uVar30 * 0x10);
  local_1558._0_8_ = (FScriptContainerElement *)0x0;
  local_1558._8_8_ = 0;
  local_1538 = (void *)0x0;
  local_1530 = 0;
  local_152c = 0x80;
  local_1528 = 0xffffffff;
  local_1524 = 0;
  local_1518 = (ForElementType<FSetElementId>)0x0;
  local_1510 = 0;
  local_1ac8 = (atomic<unsigned_char> *)CONCAT44(local_1ac8._4_4_,local_1b30.ArrayNum);
  uVar35 = uVar30;
  this_03.Data = local_1b30.AllocatorInstance.Data;
  while( true ) {
    pTVar20 = local_1a68;
    uVar51 = 0;
    if ((int)uVar30 != (int)uVar35) {
      local_1b1f[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_1b1f);
    }
    pFVar21 = local_19a8;
    iVar26 = 0;
    if ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data == pTVar20) break;
    if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
         (FOnDemandContainer *)0x0) &&
       (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar53)) {
      pcVar8 = (code *)swi(3);
      pFVar28 = (FIoStatus *)(*pcVar8)();
      return pFVar28;
    }
    if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object->Flags &
        (InstallOnDemand|StreamOnDemand)) == None) {
      pFVar27 = FIoStatusBuilder::FIoStatusBuilder(&local_4e8,InvalidParameter);
      uStack_18a0 = 0x59;
      local_18a8 = 
      L"Does not have either a \'StreamOnDemand\' or \'InstallOnDemand\' EOnDemandContainerFlags flag"
      ;
      local_1728._12_4_ = uStack_189c;
      local_1728.Size = 0x59;
      local_1728.DataPtr =
           L"Does not have either a \'StreamOnDemand\' or \'InstallOnDemand\' EOnDemandContainerFlags flag"
      ;
      pFVar27 = FIoStatusBuilder::operator<<(pFVar27,&local_1728);
      pFVar28 = local_1af8;
      FIoStatusBuilder::operator_FIoStatus(pFVar27,local_1af8);
      FIoStatusBuilder::~FIoStatusBuilder(&local_4e8);
      local_1510 = 0;
      if (local_1518 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1518);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FIoBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FIoBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FIoBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1558);
      TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_d98);
      DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int>
                ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_1b30.AllocatorInstance.Data,
                 local_1b30.ArrayNum);
      if ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_1b30.AllocatorInstance.Data !=
          (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)0x0) {
        FMemory::Free(local_1b30.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_1b40.AllocatorInstance.Data,local_1b40.ArrayNum);
      if (local_1b40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b40.AllocatorInstance.Data);
      }
      QueryPerformanceCounter(&local_19b0);
      dVar9 = (double)local_19b0.QuadPart;
      goto LAB_144604325;
    }
    if (((param_1->Args).Options & WithSoftReferences) != 0) {
      if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
           (FOnDemandContainer *)0x0) &&
         (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar53)) {
        pcVar8 = (code *)swi(3);
        pFVar28 = (FIoStatus *)(*pcVar8)();
        return pFVar28;
      }
      pEVar2 = &((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object->Flags;
      *pEVar2 = *pEVar2 | WithSoftReferences;
    }
    SetupHostGroup(&local_1ac0,(TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data,
                   &param_1->Args);
    pFVar28 = local_1af8;
    if (local_1ac0.ErrorCode != Ok) {
      if (local_1ac0.ErrorCode != PendingHostGroup) {
        (local_1af8->ErrorMessage).Chars = local_1ac0.ErrorMessage.Chars;
        if (local_1ac0.ErrorMessage.Chars != (wchar_t *)0x0) {
          LOCK();
          *(int *)(local_1ac0.ErrorMessage.Chars + -4) =
               *(int *)(local_1ac0.ErrorMessage.Chars + -4) + 1;
          UNLOCK();
        }
        local_1af8->ErrorCode = local_1ac0.ErrorCode;
        local_1af8->SystemErrorCode = local_1ac0.SystemErrorCode;
        FIoStatus::~FIoStatus(&local_1ac0);
        local_1510 = 0;
        if (local_1518 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1518);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FIoBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FIoBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_1558,0,local_1558._8_4_);
        bVar53 = local_1558._12_4_ != 0;
        local_1558._8_8_ = (ulonglong)(uint)local_1558._12_4_ << 0x20;
        if (bVar53) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)local_1558,0,(int *)(local_1558 + 0xc));
        }
        local_1528 = 0xffffffff;
        local_1524 = 0;
        local_1530 = 0;
        if (0x80 < local_152c) {
          local_152c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_1558 + 0x10),0);
        }
        if (local_1538 != (void *)0x0) {
          FMemory::Free(local_1538);
        }
        if ((FScriptContainerElement *)local_1558._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1558._0_8_);
        }
        TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_d98);
        DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int>
                  ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)
                   local_1b30.AllocatorInstance.Data,local_1b30.ArrayNum);
        if ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_1b30.AllocatorInstance.Data !=
            (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)0x0) {
          FMemory::Free(local_1b30.AllocatorInstance.Data);
        }
        DestructItems<FString,int>((FString *)local_1b40.AllocatorInstance.Data,local_1b40.ArrayNum)
        ;
        if (local_1b40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b40.AllocatorInstance.Data);
        }
        QueryPerformanceCounter(&local_19b8);
        dVar9 = (double)local_19b8.QuadPart;
        goto LAB_144604325;
      }
      if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
           (FOnDemandContainer *)0x0) &&
         (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar53)) {
        pcVar8 = (code *)swi(3);
        pFVar28 = (FIoStatus *)(*pcVar8)();
        return pFVar28;
      }
      local_1b10 = PendingHostGroup;
      pEVar2 = &((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object->Flags;
      *pEVar2 = *pEVar2 | Last;
      if (4 < (byte)LogIoStoreOnDemand._0_1_) {
        if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
             (FOnDemandContainer *)0x0) &&
           (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar53)) {
          pcVar8 = (code *)swi(3);
          pFVar28 = (FIoStatus *)(*pcVar8)();
          return pFVar28;
        }
        ::FName::ToString(&((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object->
                           HostGroupName,&local_1798);
        if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
             (FOnDemandContainer *)0x0) &&
           (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar53)) {
          pcVar8 = (code *)swi(3);
          pFVar28 = (FIoStatus *)(*pcVar8)();
          return pFVar28;
        }
        Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u_Deferring_conta_150d89e98,
                   (FLogCategoryBase *)&LogIoStoreOnDemand);
        if (local_1798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1798.Data.AllocatorInstance.Data);
        }
      }
    }
    FIoStatus::~FIoStatus(&local_1ac0);
    if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
         (FOnDemandContainer *)0x0) &&
       (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar53)) {
      pcVar8 = (code *)swi(3);
      pFVar28 = (FIoStatus *)(*pcVar8)();
      return pFVar28;
    }
    if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object->Flags & Encrypted)
        != None) {
      if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
           (FOnDemandContainer *)0x0) &&
         (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar53)) {
        pcVar8 = (code *)swi(3);
        pFVar28 = (FIoStatus *)(*pcVar8)();
        return pFVar28;
      }
      uVar35 = uVar51;
      do {
        if (*(int *)((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object->
                     EncryptionKey).Key + uVar35 * 4) != 0) goto LAB_14460316a;
        uVar35 = uVar35 + 1;
      } while ((longlong)uVar35 < 8);
      local_1aa0.A = 0;
      local_1aa0.B = 0;
      local_1aa0.C = 0;
      local_1aa0.D = 0;
      if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
           (FOnDemandContainer *)0x0) &&
         (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar53)) {
        pcVar8 = (code *)swi(3);
        pFVar28 = (FIoStatus *)(*pcVar8)();
        return pFVar28;
      }
      bVar53 = FGuid::Parse(&((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object
                             ->EncryptionKeyGuid,&local_1aa0);
      if ((!bVar53) &&
         (bVar53 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_9201750686155405996>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.cpp"
                              ,0x554,"FGuid::Parse(Container->EncryptionKeyGuid, KeyGuid)"), bVar53)
         ) {
        pcVar8 = (code *)swi(3);
        pFVar28 = (FIoStatus *)(*pcVar8)();
        return pFVar28;
      }
      this_01 = FEncryptionKeyManager::Get();
      if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
           (FOnDemandContainer *)0x0) &&
         (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar53)) {
        pcVar8 = (code *)swi(3);
        pFVar28 = (FIoStatus *)(*pcVar8)();
        return pFVar28;
      }
      bVar53 = FEncryptionKeyManager::TryGetKey
                         (this_01,&local_1aa0,
                          &((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object->
                           EncryptionKey);
      if (!bVar53) {
        if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
             (FOnDemandContainer *)0x0) &&
           (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar53)) {
          pcVar8 = (code *)swi(3);
          pFVar28 = (FIoStatus *)(*pcVar8)();
          return pFVar28;
        }
        local_1b10 = PendingEncryptionKey;
        pEVar2 = &((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object->Flags;
        *pEVar2 = *pEVar2 | PendingEncryptionKey;
        if (4 < (byte)LogIoStoreOnDemand._0_1_) {
          if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
               (FOnDemandContainer *)0x0) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar53)) {
            pcVar8 = (code *)swi(3);
            pFVar28 = (FIoStatus *)(*pcVar8)();
            return pFVar28;
          }
          if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
               (FOnDemandContainer *)0x0) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar53)) {
            pcVar8 = (code *)swi(3);
            pFVar28 = (FIoStatus *)(*pcVar8)();
            return pFVar28;
          }
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        }
      }
    }
LAB_14460316a:
    if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
         (FOnDemandContainer *)0x0) &&
       (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar53)) {
      pcVar8 = (code *)swi(3);
      pFVar28 = (FIoStatus *)(*pcVar8)();
      return pFVar28;
    }
    if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object->Flags &
        InstallOnDemand) == None) {
LAB_144603436:
      if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
           (FOnDemandContainer *)0x0) &&
         (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar53)) {
        pcVar8 = (code *)swi(3);
        pFVar28 = (FIoStatus *)(*pcVar8)();
        return pFVar28;
      }
      if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object->Flags &
          (Last|PendingEncryptionKey)) == None) {
        local_12d8.bIsDynamic = false;
        local_12d8.bIsExternal = false;
        local_12d8.Base = local_12b8;
        local_12d8.CurPos = local_12b8;
        local_12d8.End = (wchar_t *)&local_11b8;
        if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
             (FOnDemandContainer *)0x0) &&
           (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar53)) {
          pcVar8 = (code *)swi(3);
          pFVar28 = (FIoStatus *)(*pcVar8)();
          return pFVar28;
        }
        ::operator<<(&local_12d8,
                     ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object->Flags)
        ;
        if (4 < (byte)LogIoStoreOnDemand._0_1_) {
          if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
               (FOnDemandContainer *)0x0) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar53)) {
            pcVar8 = (code *)swi(3);
            pFVar28 = (FIoStatus *)(*pcVar8)();
            return pFVar28;
          }
          ::FName::ToString(&((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object
                             ->HostGroupName,&local_1748);
          if (local_12d8.End < (TStringBuilderBase<wchar_t> *)(local_12d8.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_12d8,1);
          }
          *local_12d8.CurPos = L'\0';
          if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
               (FOnDemandContainer *)0x0) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar53)) {
            pcVar8 = (code *)swi(3);
            pFVar28 = (FIoStatus *)(*pcVar8)();
            return pFVar28;
          }
          if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
               (FOnDemandContainer *)0x0) &&
             (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar53)) {
            pcVar8 = (code *)swi(3);
            pFVar28 = (FIoStatus *)(*pcVar8)();
            return pFVar28;
          }
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
          if (local_1748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1748.Data.AllocatorInstance.Data);
          }
        }
        if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
             (FOnDemandContainer *)0x0) &&
           (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar53)) {
          pcVar8 = (code *)swi(3);
          pFVar28 = (FIoStatus *)(*pcVar8)();
          return pFVar28;
        }
        pEVar2 = &((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object->Flags;
        *pEVar2 = *pEVar2 | Mounted;
        if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
             (FOnDemandContainer *)0x0) &&
           (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar53)) {
          pcVar8 = (code *)swi(3);
          pFVar28 = (FIoStatus *)(*pcVar8)();
          return pFVar28;
        }
        ::FString::Empty(&((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object->
                          EncryptionKeyGuid);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_12d8);
      }
    }
    else {
      if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
           (FOnDemandContainer *)0x0) &&
         (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar53)) {
        pcVar8 = (code *)swi(3);
        pFVar28 = (FIoStatus *)(*pcVar8)();
        return pFVar28;
      }
      CreateContainerHeaderChunkId
                (&local_14e8,
                 &((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object->
                  ContainerId);
      pTVar52 = (((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->
                SharedReferenceCount).ReferenceController;
      pFVar39 = ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object;
      if (pTVar52 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar52->SharedReferenceCount = (atomic<int>)((int)pTVar52->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_19a0 = pTVar52;
      if (pFVar39 == (FOnDemandContainer *)0x0) {
        bVar53 = ::FDebug::CheckVerifyFailedImpl2
                           ("Container.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandIoStore.h"
                            ,0x125,L"");
        if (bVar53) {
          pcVar8 = (code *)swi(3);
          pFVar28 = (FIoStatus *)(*pcVar8)();
          return pFVar28;
        }
        bVar53 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar53) {
          pcVar8 = (code *)swi(3);
          pFVar28 = (FIoStatus *)(*pcVar8)();
          return pFVar28;
        }
      }
      pFVar36 = (pFVar39->ChunkIds).DataPtr;
      uVar49 = (pFVar39->ChunkIds).ArrayNum;
      local_1b0c = uVar49;
      local_19e8 = pFVar36;
      if (0 < (int)uVar49) {
        do {
          uVar50 = uVar49 >> 1;
          iVar24 = uVar50 + (int)uVar51;
          iVar26 = memcmp(pFVar36 + iVar24,&local_14e8,0xc);
          if (iVar26 < 0) {
            uVar51 = (ulonglong)(iVar24 + (uVar49 & 1));
          }
          iVar26 = (int)uVar51;
          param_1 = local_1b00;
          pTVar52 = local_19a0;
          uVar49 = uVar50;
        } while (uVar50 != 0);
      }
      if (((((int)local_1b0c <= iVar26) ||
           (pFVar36 = TArrayView<FIoChunkId,int>::operator[](&pFVar39->ChunkIds,iVar26),
           *(longlong *)pFVar36->Id != local_14e8.Id._0_8_)) ||
          (*(int *)(pFVar36->Id + 8) != local_14e8.Id._8_4_)) ||
         ((iVar26 == -1 ||
          (local_1ae0.Entry =
                TArrayView<UE::IoStore::FOnDemandChunkEntry,int>::operator[]
                          (&pFVar39->ChunkEntries,iVar26),
          local_1ae0.Entry == (FOnDemandChunkEntry *)0x0)))) {
        local_1ae0.SharedContainer.Object = (FOnDemandContainer *)0x0;
        local_1ae0.SharedContainer.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1ae0.Entry = &FOnDemandChunkEntry::Null;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar52)
        ;
LAB_14460342d:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1ae0.SharedContainer.SharedReferenceCount.ReferenceController);
        goto LAB_144603436;
      }
      if (pTVar52 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar52->SharedReferenceCount = (atomic<int>)((int)pTVar52->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar52->SharedReferenceCount = (atomic<int>)((int)pTVar52->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1ae0.SharedContainer.Object = pFVar39;
      local_1ae0.SharedContainer.SharedReferenceCount.ReferenceController = pTVar52;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar52);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar52);
      if (pFVar39 == (FOnDemandContainer *)0x0) goto LAB_14460342d;
      pFVar32 = (param_1->Args).Toc.Ptr;
      pFVar43 = (pFVar32->Containers).AllocatorInstance.Data;
      pFVar45 = pFVar43 + (longlong)(pFVar32->Containers).ArrayNum * 0x80;
      for (; pFVar43 != pFVar45; pFVar43 = pFVar43 + 0x80) {
        if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
             (FOnDemandContainer *)0x0) &&
           (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar53)) {
          pcVar8 = (code *)swi(3);
          pFVar28 = (FIoStatus *)(*pcVar8)();
          return pFVar28;
        }
        if (*(ulong64 *)pFVar43 ==
            (((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object->ContainerId).
            Id) goto LAB_1446033ba;
      }
      pFVar43 = (FScriptContainerElement *)0x0;
LAB_1446033ba:
      if ((byte)LogIoStoreOnDemand._0_1_ < 2) {
        if (pFVar43 != (FScriptContainerElement *)0x0) goto LAB_144603550;
        goto LAB_14460342d;
      }
      if (pFVar43 == (FScriptContainerElement *)0x0) {
        if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
             (FOnDemandContainer *)0x0) &&
           (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar53)) {
          pcVar8 = (code *)swi(3);
          pFVar28 = (FIoStatus *)(*pcVar8)();
          return pFVar28;
        }
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        goto LAB_14460342d;
      }
LAB_144603550:
      FIoBuffer::FIoBuffer(&local_1b18);
      if (*(int *)(pFVar43 + 0x60) == 0) {
        if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
             (FOnDemandContainer *)0x0) &&
           (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar53)) {
          pcVar8 = (code *)swi(3);
          pFVar28 = (FIoStatus *)(*pcVar8)();
          return pFVar28;
        }
        if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object->Flags & Last)
            == None) {
          pFVar39 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->
                              ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data);
          bVar53 = FIASHostGroup::IsResolved(&pFVar39->HostGroup);
          if (!bVar53) {
            pFVar27 = FIoStatusBuilder::FIoStatusBuilder(&local_718,InvalidParameter);
            uStack_18b0 = 0x14;
            local_18b8 = L"No valid endpoint(s)";
            local_1738._12_4_ = uStack_18ac;
            local_1738.Size = 0x14;
            local_1738.DataPtr = L"No valid endpoint(s)";
            pFVar27 = FIoStatusBuilder::operator<<(pFVar27,&local_1738);
            pFVar28 = local_1af8;
            FIoStatusBuilder::operator_FIoStatus(pFVar27,local_1af8);
            FIoStatusBuilder::~FIoStatusBuilder(&local_718);
            goto LAB_144603f4c;
          }
          if (2 < (byte)LogIoStoreOnDemand._0_1_) {
            ::LexToString(&local_1788,&local_14e8);
            TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->
                      ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data);
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
            if (local_1788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1788.Data.AllocatorInstance.Data);
            }
          }
          pFVar39 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->
                              ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data);
          this_02 = FIASHostGroup::GetUnderlyingHostGroup(&pFVar39->HostGroup);
          FOnDemandHostGroup::PrimaryHost(this_02,&local_1778);
          uVar15 = _UNK_150d8e0e8;
          uVar12 = ___xmm_00000002ffffffffffffffff00000004;
          local_1868.TimeoutMs = 0;
          local_1868.Redirects = Follow;
          ___xmm_00000002ffffffffffffffff00000004 = (int)uVar14;
          _UNK_150d8e0e4 = SUB84(uVar14,4);
          local_1868.MaxConnectionCount = ___xmm_00000002ffffffffffffffff00000004;
          local_1868.ReceiveBufferSize = _UNK_150d8e0e4;
          _UNK_150d8e0e8 = (int)uVar16;
          _UNK_150d8e0ec = SUB84(uVar16,4);
          local_1868.SendBufferSize = _UNK_150d8e0e8;
          local_1868.MaxRetryCount = _UNK_150d8e0ec;
          local_1868.bEnableThreadSafetyChecks = false;
          local_1868.bAllowChunkedTransfer = true;
          local_1868.bResponseBodyOnError = false;
          local_1868.LogCategory = (FLogCategoryBase *)0x0;
          local_1868.LogVerbosity = Log;
          ___xmm_00000002ffffffffffffffff00000004 = uVar12;
          _UNK_150d8e0e8 = uVar15;
          pFVar39 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::
                    operator*<UE::IoStore::FOnDemandContainer>
                              ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data);
          pTVar38 = IoStore::Private::GetChunkUrl(&local_1778,pFVar39,local_1ae0.Entry,&local_d98);
          local_18f8 = pTVar38->Base;
          iStack_18f0 = *(int *)&pTVar38->CurPos - (int)local_18f8;
          local_1768._12_4_ = uStack_18ec;
          local_1768.Size = iStack_18f0;
          local_1768.DataPtr = local_18f8;
          FMultiEndpointHttpClient::Get
                    ((TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> *)local_14d8,
                     &local_1768,&local_1868);
          pFVar28 = local_1af8;
          if (local_14d8._8_4_ != Ok) {
            (local_1af8->ErrorMessage).Chars = (wchar_t *)local_14d8._0_8_;
            if ((wchar_t *)local_14d8._0_8_ != (wchar_t *)0x0) {
              LOCK();
              *(int *)(local_14d8._0_8_ + -8) = *(int *)(local_14d8._0_8_ + -8) + 1;
              UNLOCK();
            }
            local_1af8->SystemErrorCode = local_14d8._12_4_;
            local_1af8->ErrorCode = local_14d8._8_4_;
            FIoStatus::operator=((FIoStatus *)local_14d8,Unknown);
            if (local_14d8._8_4_ == Ok) {
              FMultiEndpointHttpClientResponse::~FMultiEndpointHttpClientResponse(&local_14c8);
            }
            FIoStatus::~FIoStatus((FIoStatus *)local_14d8);
            goto LAB_144603f4c;
          }
          FIoStatus::operator=((FIoStatus *)local_14d8,&FIoStatus::Unknown);
          local_1a38.CorePtr.Reference = local_14c8.Body.CorePtr.Reference;
          local_1a30 = local_14c8.Headers.AllocatorInstance.Data;
          local_1a28 = local_14c8.Headers.ArrayNum;
          local_1a24 = local_14c8.Headers.ArrayMax;
          local_1a20 = local_14c8.Reason.Data.AllocatorInstance.Data;
          local_1a18 = local_14c8.Reason.Data.ArrayNum;
          local_1a14 = local_14c8.Reason.Data.ArrayMax;
          local_1a10 = local_14c8.Sample;
          local_1a08 = local_14c8.DurationMilliseconds;
          local_1a00 = local_14c8.StatusCode;
          local_19fc = local_14c8.RetryCount;
          local_19f8 = local_14c8.HostIndex;
          local_19f4 = local_14c8.bCanceled;
          local_19f3 = local_14c8.CDNCacheStatus;
          local_14c8.Body.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
          local_14c8.Headers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_14c8.Headers.ArrayNum = 0;
          local_14c8.Headers.ArrayMax = 0;
          local_14c8.Reason.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_14c8.Reason.Data.ArrayNum = 0;
          local_14c8.Reason.Data.ArrayMax = 0;
          FIoBuffer::operator=(&local_1b18,&local_1a38);
          if (local_1a20 != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a20);
          }
          pFVar43 = local_1a30;
          DestructItems<FAnsiString,int>((FAnsiString *)local_1a30,local_1a28);
          if (pFVar43 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar43);
          }
          FVar18.CorePtr.Reference = local_1a38.CorePtr.Reference;
          if (local_1a38.CorePtr.Reference != (BufCore *)0x0) {
            FIoBuffer::BufCore::CheckRefCount((BufCore *)local_1a38.CorePtr.Reference);
            LOCK();
            piVar1 = (int *)((longlong)FVar18.CorePtr.Reference + 0xc);
            iVar26 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar26 == 1) {
              FIoBuffer::BufCore::~BufCore((BufCore *)FVar18.CorePtr.Reference);
              ::operator_delete((void *)FVar18.CorePtr.Reference,0x20);
            }
          }
          uVar22 = local_14d8._8_4_;
          FIoStatus::operator=((FIoStatus *)local_14d8,Unknown);
          if (uVar22 == Ok) {
            FMultiEndpointHttpClientResponse::~FMultiEndpointHttpClientResponse(&local_14c8);
          }
          FIoStatus::~FIoStatus((FIoStatus *)local_14d8);
          goto LAB_144603600;
        }
      }
      else {
        pFVar37 = FIoBuffer::FIoBuffer
                            ((FIoBuffer *)&local_19c8.Value,Wrap,*(void **)(pFVar43 + 0x58),
                             (longlong)*(int *)(pFVar43 + 0x60));
        FVar18.CorePtr.Reference = local_1b18.CorePtr.Reference;
        if (&local_1b18 != pFVar37) {
          TVar6.Reference = (pFVar37->CorePtr).Reference;
          (pFVar37->CorePtr).Reference = (BufCore *)0x0;
          bVar53 = local_1b18.CorePtr.Reference != (BufCore *)0x0;
          local_1b18.CorePtr.Reference =
               (TRefCountPtr<FIoBuffer::BufCore>)(TRefCountPtr<FIoBuffer::BufCore>)TVar6.Reference;
          if (bVar53) {
            FIoBuffer::BufCore::CheckRefCount((BufCore *)FVar18.CorePtr.Reference);
            LOCK();
            piVar1 = (int *)((longlong)FVar18.CorePtr.Reference + 0xc);
            iVar26 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar26 == 1) {
              FIoBuffer::BufCore::~BufCore((BufCore *)FVar18.CorePtr.Reference);
              ::operator_delete((void *)FVar18.CorePtr.Reference,0x20);
            }
          }
        }
        pFVar37 = local_19c8.Value;
        if ((BufCore *)local_19c8.Value != (BufCore *)0x0) {
          FIoBuffer::BufCore::CheckRefCount((BufCore *)local_19c8.Value);
          LOCK();
          piVar1 = (int *)((longlong)pFVar37 + 0xc);
          iVar26 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar26 == 1) {
            FIoBuffer::BufCore::~BufCore((BufCore *)pFVar37);
            ::operator_delete(pFVar37,0x20);
          }
        }
LAB_144603600:
        if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object ==
             (FOnDemandContainer *)0x0) &&
           (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar53)) {
          pcVar8 = (code *)swi(3);
          pFVar28 = (FIoStatus *)(*pcVar8)();
          return pFVar28;
        }
        if ((((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data)->Object->Flags &
            PendingEncryptionKey) == None) {
          pFVar39 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->
                              ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data);
          local_18c8 = *(void **)local_1b18.CorePtr.Reference;
          uStack_18c0 = (ulonglong)
                        CONCAT14(*(uchar *)((longlong)local_1b18.CorePtr.Reference + 0x18),
                                 *(uint *)((longlong)local_1b18.CorePtr.Reference + 8));
          local_1758.Data = local_18c8;
          local_1758.Size = uStack_18c0;
          IoStore::Private::DeserializeContainerHeader
                    ((TIoStatusOr<TSharedPtr<FIoContainerHeader,1>_> *)local_1508,&local_1ae0,
                     &local_1758,(bool)(pFVar39->Flags >> 5 & 1));
          pFVar28 = local_1af8;
          if (local_1508._8_4_ != Ok) {
            (local_1af8->ErrorMessage).Chars = (wchar_t *)local_1508._0_8_;
            if ((wchar_t *)local_1508._0_8_ != (wchar_t *)0x0) {
              LOCK();
              *(int *)(local_1508._0_8_ + -8) = *(int *)(local_1508._0_8_ + -8) + 1;
              UNLOCK();
            }
            local_1af8->SystemErrorCode = local_1508._12_4_;
            local_1af8->ErrorCode = local_1508._8_4_;
            FIoStatus::operator=((FIoStatus *)local_1508,Unknown);
            if (local_1508._8_4_ == Ok) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_14f0);
            }
            FIoStatus::~FIoStatus((FIoStatus *)local_1508);
LAB_144603f4c:
            FIoBuffer::~FIoBuffer(&local_1b18);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1ae0.SharedContainer.SharedReferenceCount.ReferenceController);
            local_1510 = 0;
            if (local_1518 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_1518);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FIoBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FIoBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_1558,0,local_1558._8_4_);
            bVar53 = local_1558._12_4_ != 0;
            local_1558._8_8_ = (ulonglong)(uint)local_1558._12_4_ << 0x20;
            if (bVar53) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,0,(ForAnyElementType *)local_1558,0,(int *)(local_1558 + 0xc));
            }
            local_1528 = 0xffffffff;
            local_1524 = 0;
            local_1530 = 0;
            if (0x80 < local_152c) {
              local_152c = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_1558 + 0x10),0);
            }
            if (local_1538 != (void *)0x0) {
              FMemory::Free(local_1538);
            }
            if ((FScriptContainerElement *)local_1558._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_1558._0_8_);
            }
            TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_d98);
            DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int>
                      ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)
                       local_1b30.AllocatorInstance.Data,local_1b30.ArrayNum);
            if ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_1b30.AllocatorInstance.Data
                != (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)0x0) {
              FMemory::Free(local_1b30.AllocatorInstance.Data);
            }
            DestructItems<FString,int>
                      ((FString *)local_1b40.AllocatorInstance.Data,local_1b40.ArrayNum);
            if (local_1b40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b40.AllocatorInstance.Data);
            }
            ScopeExitSupport::
            TScopeGuard<`UE::IoStore::FOnDemandIoStore::TickMountRequest'::__l2::<lambda_1>_>::
            ~TScopeGuard<_UE::IoStore::FOnDemandIoStore::TickMountRequest_::__l2::<lambda_1>_>
                      (&local_1af0);
            return pFVar28;
          }
          FIoStatus::operator=((FIoStatus *)local_1508,&FIoStatus::Unknown);
          FVar44.ReferenceController = local_14f0;
          pFVar23 = local_14f8;
          local_1a90 = local_14f8;
          local_1a88.ReferenceController = local_14f0;
          local_14f0 = (TReferenceControllerBase<1> *)0x0;
          local_14f8 = (FIoContainerHeader *)0x0;
          pFVar39 = TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->
                              ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data);
          if (&pFVar39->Header != (TSharedPtr<FIoContainerHeader,1> *)&local_1a90) {
            (pFVar39->Header).Object = pFVar23;
            local_1a90 = (FIoContainerHeader *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(pFVar39->Header).SharedReferenceCount,&local_1a88);
            FVar44.ReferenceController = local_1a88.ReferenceController;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar44.ReferenceController);
          uVar22 = local_1508._8_4_;
          FIoStatus::operator=((FIoStatus *)local_1508,Unknown);
          if (uVar22 == Ok) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_14f0);
          }
          FIoStatus::~FIoStatus((FIoStatus *)local_1508);
          TRefCountPtr<FIoBuffer::BufCore>::~TRefCountPtr<FIoBuffer::BufCore>(&local_1b18.CorePtr);
          goto LAB_14460342d;
        }
        if ((*(uchar *)((longlong)local_1b18.CorePtr.Reference + 0x19) & 1) == 0) {
          FIoBuffer::MakeOwned(&local_1b18);
        }
        TSharedPtr<UE::IoStore::FOnDemandContainer,1>::operator->
                  ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)this_03.Data);
        ::FString::PrintfImpl(&local_18d8,L"%.*s-%.*s");
        local_18e8 = &local_18d8;
        local_18e0 = &local_1b18;
        TSet<TTuple<FString,FIoBuffer>,TDefaultMapHashableKeyFuncs<FString,FIoBuffer,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,FIoBuffer_const_&>_>
                  ((TSet<TTuple<FString,FIoBuffer>,TDefaultMapHashableKeyFuncs<FString,FIoBuffer,0>,FDefaultSetAllocator>
                    *)local_1558,&local_19c8,(bool *)&local_18e8);
        if (local_18d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18d8.Data.AllocatorInstance.Data);
        }
      }
      TRefCountPtr<FIoBuffer::BufCore>::~TRefCountPtr<FIoBuffer::BufCore>(&local_1b18.CorePtr);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1ae0.SharedContainer.SharedReferenceCount.ReferenceController);
    }
    uVar30 = local_1b30._8_8_ & 0xffffffff;
    this_03.Data = this_03.Data + 0x10;
    uVar35 = (ulonglong)local_1ac8 & 0xffffffff;
    param_1 = local_1b00;
  }
  this_00 = &local_19a8->ContainerMutex;
  LOCK();
  bVar53 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar53) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar53) {
    FMutex::LockSlow(this_00);
  }
  pTVar3 = &pFVar21->Containers;
  if ((pTVar3 == &local_1b30) &&
     (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x986,L""), bVar53)) {
    pcVar8 = (code *)swi(3);
    pFVar28 = (FIoStatus *)(*pcVar8)();
    return pFVar28;
  }
  lVar47 = (longlong)local_1b30.ArrayNum;
  if (local_1b30.ArrayNum != 0) {
    iVar26 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,local_1b30.ArrayNum,&pTVar3->AllocatorInstance,
                        &(pFVar21->Containers).ArrayNum,&(pFVar21->Containers).ArrayMax);
    memmove((pTVar3->AllocatorInstance).Data + (longlong)iVar26 * 0x10,
            local_1b30.AllocatorInstance.Data,lVar47 << 4);
    local_1b30._8_8_ = local_1b30._8_8_ & 0xffffffff00000000;
  }
  TMap<FString,FIoBuffer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FIoBuffer,0>_>::
  Append<FDefaultSetAllocator>
            (&pFVar21->PendingContainerHeaders,
             (TMap<FString,FIoBuffer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FIoBuffer,0>_>
              *)local_1558);
  LOCK();
  aVar4 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar4 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  if ((pFVar21->PackageStoreBackend).Object == (IOnDemandPackageStoreBackend *)0x0) {
    local_1b47[0] = 0;
    bVar53 = `UE::IoStore::FOnDemandIoStore::TickMountRequest'::__l272::<lambda_3>::operator()
                       (local_1b47);
    if (bVar53) {
      if (((pFVar21->PackageStoreBackend).Object == (IOnDemandPackageStoreBackend *)0x0) &&
         (bVar53 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar53)) {
        pcVar8 = (code *)swi(3);
        pFVar28 = (FIoStatus *)(*pcVar8)();
        return pFVar28;
      }
      goto LAB_144604287;
    }
  }
  else {
LAB_144604287:
    pIVar7 = (pFVar21->PackageStoreBackend).Object;
    (**(code **)((longlong)*pIVar7 + 0x40))(pIVar7,1);
  }
  pFVar28 = local_1af8;
  FIoStatus::FIoStatus(local_1af8,local_1b10);
  local_1510 = 0;
  if (local_1518 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1518);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FIoBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FIoBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FIoBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1558);
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_d98);
  DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int>
            ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_1b30.AllocatorInstance.Data,
             local_1b30.ArrayNum);
  if ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_1b30.AllocatorInstance.Data !=
      (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)0x0) {
    FMemory::Free(local_1b30.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_1b40.AllocatorInstance.Data,local_1b40.ArrayNum);
  if (local_1b40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b40.AllocatorInstance.Data);
  }
  QueryPerformanceCounter(&local_19f0);
  dVar9 = (double)local_19f0.QuadPart;
LAB_144604325:
  local_1af0->DurationInSeconds =
       (dVar9 * FGenericPlatformTime::SecondsPerCycle + dVar13) - *local_1ae8;
  return pFVar28;
}

// TryEnterTickLoop @ 144606880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall UE::IoStore::FOnDemandIoStore::TryEnterTickLoop(FOnDemandIoStore *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  TFuture<void> *pTVar2;
  bool bVar3;
  <lambda_1> local_res8;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  this_00 = &this->RequestMutex;
  LOCK();
  bVar3 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    FMutex::LockSlow(this_00);
  }
  this->bTickRequested = true;
  bVar3 = this->bTicking == false;
  if (bVar3) {
    this->bTicking = true;
  }
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  if (bVar3) {
    bVar3 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar3) && (GIOThreadPool != (FQueuedThreadPool *)0x0)) {
      local_38._0_8_ = 0;
      local_38._40_8_ = 0;
      local_res8.__this = this;
      pTVar2 = AsyncPool<_UE::IoStore::FOnDemandIoStore::TryEnterTickLoop_::__l30::<lambda_1>_>
                         ((TFuture<void> *)local_48,GIOThreadPool,&local_res8,&local_38,Low);
      if (&this->TickFuture != pTVar2) {
        *(undefined8 *)&this->TickFuture = *(undefined8 *)pTVar2;
        *(undefined8 *)pTVar2 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&(this->TickFuture).field_0x8,
                   (FSharedReferencer<1> *)&pTVar2->field_0x8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_48._8_8_);
      return;
    }
    TickLoop(this);
  }
  else if (5 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    return;
  }
  return;
}

// Unmount @ 14460aa70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FIoStatus * __thiscall
UE::IoStore::FOnDemandIoStore::Unmount
          (FOnDemandIoStore *this,FIoStatus *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  FMutex *pFVar1;
  TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> *this_00;
  atomic<unsigned_char> aVar2;
  TSharedPtr<UE::IoStore::FOnDemandContainer,1> *pTVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  int iVar6;
  void *pvVar7;
  FIoStatusBuilder *pFVar8;
  FIoStatus *pFVar9;
  IOnDemandPackageStoreBackend *pIVar10;
  ulong64 uVar11;
  int iVar12;
  uint uVar13;
  TSharedPtr<UE::IoStore::FOnDemandContainer,1> *pTVar14;
  TSharedPtr<UE::IoStore::FOnDemandContainer,1> *pTVar15;
  uint uVar16;
  TSharedPtr<UE::IoStore::FOnDemandContainer,1> *pTVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStackY_568 [32];
  char local_528;
  undefined1 local_527 [3];
  FLLMScope local_524;
  FMemScope local_520;
  FIoStatus *local_518;
  FOnDemandIoStore *local_508;
  TStringView<wchar_t> *local_500;
  char *local_4f8;
  wchar_t *local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  <lambda_1> local_4d8;
  TStringView<wchar_t> local_4c8;
  wchar_t *local_4b8;
  undefined8 uStack_4b0;
  TStringBuilderBase<wchar_t> local_4a8;
  wchar_t local_488 [256];
  FIoStatusBuilder local_288;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_568;
  local_518 = __return_storage_ptr__;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name725,L"FileSystem/OnDemandIoStore");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_524,LLMScope_Name725,false,None,Default,true);
  FMemScope::FMemScope(&local_520,&LLMScope_Name725,true);
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    local_4a8.Base = local_488;
    local_4a8.End = local_488 + 0x100;
    iVar12 = (int)*(undefined8 *)&param_1->Size;
    uVar11 = (ulong64)iVar12;
    local_4a8.CurPos = local_488;
    pwVar5 = param_1->DataPtr;
    uStack_4b0 = *(undefined8 *)&param_1->Size;
    local_4a8.bIsDynamic = false;
    local_4a8.bIsExternal = false;
    local_4b8 = pwVar5;
    if (local_488 + 0x100 < local_488 + uVar11) {
      TStringBuilderBase<wchar_t>::Extend(&local_4a8,uVar11);
    }
    if (iVar12 != 0) {
      pvVar7 = FGenericPlatformString::Memcpy(local_4a8.CurPos,pwVar5,uVar11 * 2);
      local_4a8.CurPos = (wchar_t *)((longlong)pvVar7 + uVar11 * 2);
    }
    if (local_4a8.End < local_4a8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_4a8,1);
    }
    *local_4a8.CurPos = L'\0';
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4a8);
  }
  pFVar1 = &this->RequestMutex;
  LOCK();
  bVar19 = pFVar1->State == (atomic<unsigned_char>)0x0;
  if (bVar19) {
    pFVar1->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar19) {
    FMutex::LockSlow(pFVar1);
  }
  local_4d8.MountId.DataPtr = param_1->DataPtr;
  local_4d8.MountId.Size = param_1->Size;
  local_4d8.MountId._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar19 = Algo::
           NoneOf<TArray<TSharedRef<UE::IoStore::FOnDemandIoStore::FMountRequest,1>,TSizedDefaultAllocator<32>_>,_UE::IoStore::FOnDemandIoStore::Unmount_::__l21::<lambda_1>_>
                     (&this->MountRequests,&local_4d8);
  LOCK();
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(pFVar1);
  }
  if (bVar19) {
    pFVar1 = &this->ContainerMutex;
    LOCK();
    bVar19 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar19) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar19) {
      FMutex::LockSlow(pFVar1);
    }
    this_00 = &this->Containers;
    pTVar3 = (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)(this_00->AllocatorInstance).Data;
    local_4f8 = &local_528;
    pTVar14 = pTVar3 + (this->Containers).ArrayNum;
    local_528 = '\0';
    pTVar17 = pTVar3;
    local_508 = this;
    local_500 = param_1;
    while (pTVar17 != pTVar14) {
      bVar19 = `UE::IoStore::FOnDemandIoStore::Unmount'::__l25::<lambda_2>::operator()
                         (&local_508,pTVar17);
      if (bVar19) {
        do {
          pTVar15 = pTVar14;
          pTVar14 = pTVar15 + -1;
          if (pTVar17 == pTVar14) goto LAB_14460ad3a;
          bVar19 = `UE::IoStore::FOnDemandIoStore::Unmount'::__l25::<lambda_2>::operator()
                             (&local_508,pTVar14);
        } while (bVar19);
        pTVar17->Object = pTVar14->Object;
        pTVar14->Object = (FOnDemandContainer *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&pTVar17->SharedReferenceCount,&pTVar15[-1].SharedReferenceCount);
        pTVar17 = pTVar17 + 1;
      }
      else {
        pTVar17 = pTVar17 + 1;
      }
    }
LAB_14460ad3a:
    iVar12 = (this->Containers).ArrayNum;
    uVar18 = (longlong)pTVar17 - (longlong)pTVar3 >> 4;
    uVar16 = (uint)uVar18;
    if (iVar12 < (int)uVar16) {
      iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,uVar16 - iVar12,&this_00->AllocatorInstance,
                         &(this->Containers).ArrayNum,&(this->Containers).ArrayMax);
      memset((this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
             (longlong)(int)(uVar16 - iVar12) << 4);
    }
    else {
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar18 & 0xffffffff);
      }
      if ((int)uVar16 < iVar12) {
        uVar13 = iVar12 - uVar16;
        if (((int)(uVar13 | uVar16) < 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FIoStatus *)(*pcVar4)();
          return pFVar9;
        }
        if (uVar13 != 0) {
          TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>::
          RemoveAtImpl(this_00,uVar16,uVar13);
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this_00->AllocatorInstance,(this->Containers).ArrayNum,
                     &(this->Containers).ArrayMax);
        }
      }
    }
    if ((local_528 != '\0') &&
       (((this->PackageStoreBackend).Object != (IOnDemandPackageStoreBackend *)0x0 ||
        (bVar19 = `UE::IoStore::FOnDemandIoStore::Unmount'::__l26::<lambda_3>::operator()(local_527)
        , bVar19)))) {
      pIVar10 = TSharedPtr<UE::IoStore::IOnDemandPackageStoreBackend,1>::operator->
                          (&this->PackageStoreBackend);
      (**(code **)((longlong)*pIVar10 + 0x40))(pIVar10);
    }
    LOCK();
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(pFVar1);
    }
    FIoStatus::FIoStatus(local_518,Ok);
    FMemScope::~FMemScope(&local_520);
    FLLMScope::~FLLMScope(&local_524);
    __return_storage_ptr__ = local_518;
  }
  else {
    pFVar8 = FIoStatusBuilder::FIoStatusBuilder
                       ((FIoStatusBuilder *)(local_488 + 0x100),InvalidParameter);
    uStack_4e0 = 0x22;
    local_4e8 = L"Mount requests pending for MountId";
    local_4c8._12_4_ = uStack_4dc;
    local_4c8.Size = 0x22;
    local_4c8.DataPtr = L"Mount requests pending for MountId";
    pFVar8 = FIoStatusBuilder::operator<<(pFVar8,&local_4c8);
    FIoStatusBuilder::operator_FIoStatus(pFVar8,__return_storage_ptr__);
    FIoStatusBuilder::~FIoStatusBuilder((FIoStatusBuilder *)(local_488 + 0x100));
    FMemScope::~FMemScope(&local_520);
    FLLMScope::~FLLMScope(&local_524);
  }
  return __return_storage_ptr__;
}

// UpdateInstallRequestPriority @ 14460bdc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoStore::UpdateInstallRequestPriority
          (FOnDemandIoStore *this,
          TSharedPtr<UE::IoStore::FOnDemandInternalInstallRequest,1> *param_1,int param_2)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FOnDemandContentInstaller *pFVar5;
  FOnDemandInternalInstallRequest *pFVar6;
  FTaskBase *this_00;
  TReferenceControllerBase<1> *pTVar7;
  
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar5 = (this->Installer).Ptr;
  pFVar6 = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
    pTVar7 = pTVar4;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (this_00,L"UpdateIoStoreOnDemandInstallRequestPriority",Default,None,None);
    this_00[1]._padding_ = (longlong)pFVar5;
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority'::`2'::<lambda_1>_>
          ::_vftable_;
    this_00[1]._padding_ = (longlong)pFVar6;
    this_00[1]._padding_ = (longlong)pTVar4;
    *(int *)&this_00[1]._padding_ = param_2;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  LOCK();
  paVar1 = &(pFVar5->InstallerPipe).TaskCount;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = &pFVar5->InstallerPipe;
  Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  LOCK();
  paVar2 = &this_00->RefCount;
  aVar3 = *paVar2;
  *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
  UNLOCK();
  if (aVar3 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_00->_padding_)(this_00,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Verify @ 14460fae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandIoStore::Verify
          (FOnDemandIoStore *this,
          TUniqueFunction<void___cdecl(UE::IoStore::FOnDemandVerifyCacheResult)> *param_1)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  FOnDemandContentInstaller *this_00;
  undefined8 uVar3;
  uint uVar4;
  FRequest *pFVar5;
  bool bVar6;
  LARGE_INTEGER local_res8;
  FLLMScope local_res10 [2];
  FRequest *local_res18;
  FMemScope local_res20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name719,L"FileSystem/OnDemandIoStore");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name719,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name719,true);
  this_00 = (this->Installer).Ptr;
  LOCK();
  bVar6 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    FMutex::LockSlow(&this_00->Mutex);
  }
  pFVar5 = TSingleThreadedSlabAllocator<UE::IoStore::FOnDemandContentInstaller::FRequest,32>::Alloc
                     (&this_00->RequestAllocator);
  uVar4 = FOnDemandContentInstaller::FRequest::NextSeqNo + 1;
  pFVar5->SeqNo = FOnDemandContentInstaller::FRequest::NextSeqNo;
  FOnDemandContentInstaller::FRequest::NextSeqNo = uVar4;
  pFVar5->Priority = 0;
  QueryPerformanceCounter(&local_res8);
  pFVar5->StartTimeCycles = (ulong64)local_res8;
  (pFVar5->Result).Error.bIsSet = false;
  pFVar5->bCancelled = false;
  (pFVar5->Variant).TypeIndex = '\0';
  *(undefined8 *)&pFVar5->Variant = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar5->Variant).field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar3 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(pFVar5->Variant).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(pFVar5->Variant).field_0x18 = uVar3;
  *(undefined8 *)&(pFVar5->Variant).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)&pFVar5->Variant != 0) {
    *(undefined8 *)param_1 = 0;
  }
  (pFVar5->Variant).TypeIndex = '\x04';
  local_res18 = pFVar5;
  TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>::
  HeapPush<bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)>
            (&this_00->RequestQueue,&local_res18,FOnDemandContentInstaller::RequestSortPredicate);
  LOCK();
  pFVar1 = &this_00->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  FOnDemandContentInstaller::TryExecuteNextRequest(this_00);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// operator() @ 1504c1b70

bool __thiscall
`UE::IoStore::FOnDemandIoStore::OnEncryptionKeyAdded'::__l60::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9201750686155405805>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9201750686155405805>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504c1bb0

bool __thiscall
`UE::IoStore::FOnDemandIoStore::ReleaseContent'::__l44::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9201750686155405354>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9201750686155405354>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504c1bf0

bool __thiscall
`UE::IoStore::FOnDemandIoStore::TickMountRequest'::__l272::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9201750686155405899>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9201750686155405899>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504c1c30

bool __thiscall `UE::IoStore::FOnDemandIoStore::Unmount'::__l26::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9201750686155406593>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9201750686155406593>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504c1c70

bool __thiscall
`UE::IoStore::FOnDemandIoStore::ReleaseContent'::__l47::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9201750686155405349>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9201750686155405349>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

