// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 160

// GetOp<UE::Online::FPartialUpdatePresence> @ 14edc78d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1> * __thiscall
UE::Online::TOnlineComponent<UE::Online::IPresence>::GetOp<UE::Online::FPartialUpdatePresence>
          (TOnlineComponent<UE::Online::IPresence> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1>
          *__return_storage_ptr__,Params *param_1)

{
  int iVar1;
  FOnlineServicesCommon *pFVar2;
  EOnlineServices EVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  pFVar2 = this->Services;
  ::FString::FString(&local_18,L"PartialUpdatePresence");
  pTVar4 = GetConfigSectionHeirarchy(this,&local_28,&local_18);
  if ((1 < (byte)LogOnlineServices._0_1_) && (pFVar2->bPreShutdownComplete != false)) {
    EVar3 = (**(code **)(*(longlong *)pFVar2 + 0x98))(pFVar2);
    Online::LexToString(EVar3);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FPartialUpdatePresence>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FPartialUpdatePresence>
            (&pFVar2->OpCache,__return_storage_ptr__,param_1,pTVar4);
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar1 = (this->InterfaceName).Data.ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  ::FString::AssignRange
            (&__return_storage_ptr__->Object->InterfaceName,
             (wchar_t *)(this->InterfaceName).Data.AllocatorInstance.Data,iVar5);
  return __return_storage_ptr__;
}

// ~TOnlineComponent<UE::Online::Test::ITestInterface> @ 14ee1bd60

void __thiscall
UE::Online::TOnlineComponent<UE::Online::Test::ITestInterface>::
~TOnlineComponent<UE::Online::Test::ITestInterface>
          (TOnlineComponent<UE::Online::Test::ITestInterface> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerUserSerialQueue).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerUserSerialQueue);
  FOnlineEventDelegateHandle::Unbind(&(this->SerialQueue).ContinuationDelegateHandle);
  if (*(longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder != 0) {
    plVar4 = *(longlong **)
              &(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x10
    ;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SerialQueue).InFlightOperation.SharedReferenceCount.ReferenceController);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->SerialQueue);
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExecCommands).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecCommands);
  pFVar5 = (this->InterfaceName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineComponent_Online_UE__6B_;
  return;
}

// ~TOnlineComponent<UE::Online::IAchievements> @ 14ee1be50

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IAchievements>::
~TOnlineComponent<UE::Online::IAchievements>(TOnlineComponent<UE::Online::IAchievements> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerUserSerialQueue).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerUserSerialQueue);
  FOnlineEventDelegateHandle::Unbind(&(this->SerialQueue).ContinuationDelegateHandle);
  if (*(longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder != 0) {
    plVar4 = *(longlong **)
              &(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x10
    ;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SerialQueue).InFlightOperation.SharedReferenceCount.ReferenceController);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->SerialQueue);
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExecCommands).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecCommands);
  pFVar5 = (this->InterfaceName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineComponent_Online_UE__6B_;
  return;
}

// ~TOnlineComponent<UE::Online::IAuth> @ 14ee1bf40

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IAuth>::~TOnlineComponent<UE::Online::IAuth>
          (TOnlineComponent<UE::Online::IAuth> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerUserSerialQueue).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerUserSerialQueue);
  FOnlineEventDelegateHandle::Unbind(&(this->SerialQueue).ContinuationDelegateHandle);
  if (*(longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder != 0) {
    plVar4 = *(longlong **)
              &(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x10
    ;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SerialQueue).InFlightOperation.SharedReferenceCount.ReferenceController);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->SerialQueue);
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExecCommands).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecCommands);
  pFVar5 = (this->InterfaceName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineComponent_Online_UE__6B_;
  return;
}

// ~TOnlineComponent<UE::Online::ICommerce> @ 14ee1c030

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ICommerce>::~TOnlineComponent<UE::Online::ICommerce>
          (TOnlineComponent<UE::Online::ICommerce> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerUserSerialQueue).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerUserSerialQueue);
  FOnlineEventDelegateHandle::Unbind(&(this->SerialQueue).ContinuationDelegateHandle);
  if (*(longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder != 0) {
    plVar4 = *(longlong **)
              &(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x10
    ;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SerialQueue).InFlightOperation.SharedReferenceCount.ReferenceController);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->SerialQueue);
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExecCommands).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecCommands);
  pFVar5 = (this->InterfaceName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineComponent_Online_UE__6B_;
  return;
}

// ~TOnlineComponent<UE::Online::IConnectivity> @ 14ee1c120

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IConnectivity>::
~TOnlineComponent<UE::Online::IConnectivity>(TOnlineComponent<UE::Online::IConnectivity> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerUserSerialQueue).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerUserSerialQueue);
  FOnlineEventDelegateHandle::Unbind(&(this->SerialQueue).ContinuationDelegateHandle);
  if (*(longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder != 0) {
    plVar4 = *(longlong **)
              &(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x10
    ;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SerialQueue).InFlightOperation.SharedReferenceCount.ReferenceController);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->SerialQueue);
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExecCommands).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecCommands);
  pFVar5 = (this->InterfaceName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineComponent_Online_UE__6B_;
  return;
}

// ~TOnlineComponent<UE::Online::IExternalUI> @ 14ee1c210

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IExternalUI>::~TOnlineComponent<UE::Online::IExternalUI>
          (TOnlineComponent<UE::Online::IExternalUI> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerUserSerialQueue).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerUserSerialQueue);
  FOnlineEventDelegateHandle::Unbind(&(this->SerialQueue).ContinuationDelegateHandle);
  if (*(longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder != 0) {
    plVar4 = *(longlong **)
              &(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x10
    ;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SerialQueue).InFlightOperation.SharedReferenceCount.ReferenceController);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->SerialQueue);
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExecCommands).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecCommands);
  pFVar5 = (this->InterfaceName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineComponent_Online_UE__6B_;
  return;
}

// ~TOnlineComponent<UE::Online::ILeaderboards> @ 14ee1c300

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ILeaderboards>::
~TOnlineComponent<UE::Online::ILeaderboards>(TOnlineComponent<UE::Online::ILeaderboards> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerUserSerialQueue).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerUserSerialQueue);
  FOnlineEventDelegateHandle::Unbind(&(this->SerialQueue).ContinuationDelegateHandle);
  if (*(longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder != 0) {
    plVar4 = *(longlong **)
              &(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x10
    ;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SerialQueue).InFlightOperation.SharedReferenceCount.ReferenceController);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->SerialQueue);
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExecCommands).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecCommands);
  pFVar5 = (this->InterfaceName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineComponent_Online_UE__6B_;
  this->_padding_ = (longlong)&___7ILeaderboards_Online_UE__6B_;
  return;
}

// ~TOnlineComponent<UE::Online::ILobbies> @ 14ee1c400

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ILobbies>::~TOnlineComponent<UE::Online::ILobbies>
          (TOnlineComponent<UE::Online::ILobbies> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerUserSerialQueue).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerUserSerialQueue);
  FOnlineEventDelegateHandle::Unbind(&(this->SerialQueue).ContinuationDelegateHandle);
  if (*(longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder != 0) {
    plVar4 = *(longlong **)
              &(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x10
    ;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SerialQueue).InFlightOperation.SharedReferenceCount.ReferenceController);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->SerialQueue);
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExecCommands).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecCommands);
  pFVar5 = (this->InterfaceName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineComponent_Online_UE__6B_;
  return;
}

// ~TOnlineComponent<UE::Online::IPresence> @ 14ee1c4f0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IPresence>::~TOnlineComponent<UE::Online::IPresence>
          (TOnlineComponent<UE::Online::IPresence> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerUserSerialQueue).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerUserSerialQueue);
  FOnlineEventDelegateHandle::Unbind(&(this->SerialQueue).ContinuationDelegateHandle);
  if (*(longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder != 0) {
    plVar4 = *(longlong **)
              &(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x10
    ;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SerialQueue).InFlightOperation.SharedReferenceCount.ReferenceController);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->SerialQueue);
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExecCommands).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecCommands);
  pFVar5 = (this->InterfaceName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineComponent_Online_UE__6B_;
  return;
}

// ~TOnlineComponent<UE::Online::IPrivileges> @ 14ee1c5e0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IPrivileges>::~TOnlineComponent<UE::Online::IPrivileges>
          (TOnlineComponent<UE::Online::IPrivileges> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerUserSerialQueue).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerUserSerialQueue);
  FOnlineEventDelegateHandle::Unbind(&(this->SerialQueue).ContinuationDelegateHandle);
  if (*(longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder != 0) {
    plVar4 = *(longlong **)
              &(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x10
    ;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SerialQueue).InFlightOperation.SharedReferenceCount.ReferenceController);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->SerialQueue);
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExecCommands).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecCommands);
  pFVar5 = (this->InterfaceName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineComponent_Online_UE__6B_;
  return;
}

// ~TOnlineComponent<UE::Online::ISessions> @ 14ee1c6d0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ISessions>::~TOnlineComponent<UE::Online::ISessions>
          (TOnlineComponent<UE::Online::ISessions> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerUserSerialQueue).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerUserSerialQueue);
  FOnlineEventDelegateHandle::Unbind(&(this->SerialQueue).ContinuationDelegateHandle);
  if (*(longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder != 0) {
    plVar4 = *(longlong **)
              &(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x10
    ;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SerialQueue).InFlightOperation.SharedReferenceCount.ReferenceController);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->SerialQueue);
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExecCommands).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecCommands);
  pFVar5 = (this->InterfaceName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineComponent_Online_UE__6B_;
  return;
}

// AsShared @ 14ee573c0

TSharedRef<UE::Online::Test::ITestInterface,1> * __thiscall
UE::Online::TOnlineComponent<UE::Online::Test::ITestInterface>::AsShared
          (TOnlineComponent<UE::Online::Test::ITestInterface> *this,
          TSharedRef<UE::Online::Test::ITestInterface,1> *__return_storage_ptr__)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<UE::Online::Test::ITestInterface,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  pTVar4 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14ee57401;
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar9 = aVar2 == aVar3;
      if (bVar9) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (TReferenceControllerBase<1> *)(this->WeakThis).Object;
  }
LAB_14ee57401:
  pTVar4 = (TReferenceControllerBase<1> *)&this->Services;
  if (this == (TOnlineComponent<UE::Online::Test::ITestInterface> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar7 != pTVar4) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineComponent.h"
                         ,0xbd,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::Test::ITestInterface,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::Test::ITestInterface,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = (ITestInterface *)pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::Test::ITestInterface,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetConfigSectionHeirarchy @ 14eed9060

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::TOnlineComponent<UE::Online::IAchievements>::GetConfigSectionHeirarchy
          (TOnlineComponent<UE::Online::IAchievements> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_68,L"OnlineServices");
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_58,L".",&this->Services->ServiceConfigName);
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_48,L".",&this->InterfaceName);
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::ConcatCF(&local_38,L".",param_1);
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar7->field_0x0 = 0;
    *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      *(int *)(pFVar7 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
                 (int *)(pFVar7 + 0xc));
      memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetConfigSectionHeirarchy @ 14eed9550

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::TOnlineComponent<UE::Online::IAuth>::GetConfigSectionHeirarchy
          (TOnlineComponent<UE::Online::IAuth> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_68,L"OnlineServices");
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_58,L".",&this->Services->ServiceConfigName);
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_48,L".",&this->InterfaceName);
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::ConcatCF(&local_38,L".",param_1);
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar7->field_0x0 = 0;
    *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      *(int *)(pFVar7 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
                 (int *)(pFVar7 + 0xc));
      memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetConfigSectionHeirarchy @ 14eed9a40

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::TOnlineComponent<UE::Online::ICommerce>::GetConfigSectionHeirarchy
          (TOnlineComponent<UE::Online::ICommerce> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_68,L"OnlineServices");
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_58,L".",&this->Services->ServiceConfigName);
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_48,L".",&this->InterfaceName);
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::ConcatCF(&local_38,L".",param_1);
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar7->field_0x0 = 0;
    *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      *(int *)(pFVar7 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
                 (int *)(pFVar7 + 0xc));
      memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetConfigSectionHeirarchy @ 14eed9f30

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::TOnlineComponent<UE::Online::IExternalUI>::GetConfigSectionHeirarchy
          (TOnlineComponent<UE::Online::IExternalUI> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_68,L"OnlineServices");
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_58,L".",&this->Services->ServiceConfigName);
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_48,L".",&this->InterfaceName);
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::ConcatCF(&local_38,L".",param_1);
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar7->field_0x0 = 0;
    *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      *(int *)(pFVar7 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
                 (int *)(pFVar7 + 0xc));
      memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetConfigSectionHeirarchy @ 14eeda420

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::TOnlineComponent<UE::Online::ILeaderboards>::GetConfigSectionHeirarchy
          (TOnlineComponent<UE::Online::ILeaderboards> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_68,L"OnlineServices");
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_58,L".",&this->Services->ServiceConfigName);
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_48,L".",&this->InterfaceName);
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::ConcatCF(&local_38,L".",param_1);
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar7->field_0x0 = 0;
    *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      *(int *)(pFVar7 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
                 (int *)(pFVar7 + 0xc));
      memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetConfigSectionHeirarchy @ 14eeda910

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::TOnlineComponent<UE::Online::ILobbies>::GetConfigSectionHeirarchy
          (TOnlineComponent<UE::Online::ILobbies> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_68,L"OnlineServices");
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_58,L".",&this->Services->ServiceConfigName);
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_48,L".",&this->InterfaceName);
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::ConcatCF(&local_38,L".",param_1);
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar7->field_0x0 = 0;
    *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      *(int *)(pFVar7 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
                 (int *)(pFVar7 + 0xc));
      memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetConfigSectionHeirarchy @ 14eedae00

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::TOnlineComponent<UE::Online::IPresence>::GetConfigSectionHeirarchy
          (TOnlineComponent<UE::Online::IPresence> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_68,L"OnlineServices");
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_58,L".",&this->Services->ServiceConfigName);
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_48,L".",&this->InterfaceName);
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::ConcatCF(&local_38,L".",param_1);
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar7->field_0x0 = 0;
    *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      *(int *)(pFVar7 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
                 (int *)(pFVar7 + 0xc));
      memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetConfigSectionHeirarchy @ 14eedb2f0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::TOnlineComponent<UE::Online::IPrivileges>::GetConfigSectionHeirarchy
          (TOnlineComponent<UE::Online::IPrivileges> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_68,L"OnlineServices");
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_58,L".",&this->Services->ServiceConfigName);
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_48,L".",&this->InterfaceName);
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::ConcatCF(&local_38,L".",param_1);
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar7->field_0x0 = 0;
    *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      *(int *)(pFVar7 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
                 (int *)(pFVar7 + 0xc));
      memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetConfigSectionHeirarchy @ 14eedb7e0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::TOnlineComponent<UE::Online::ISessions>::GetConfigSectionHeirarchy
          (TOnlineComponent<UE::Online::ISessions> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_68,L"OnlineServices");
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_58,L".",&this->Services->ServiceConfigName);
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_48,L".",&this->InterfaceName);
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::ConcatCF(&local_38,L".",param_1);
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar7->field_0x0 = 0;
    *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      *(int *)(pFVar7 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
                 (int *)(pFVar7 + 0xc));
      memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Help @ 14eee9410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Online::TOnlineComponent<UE::Online::Test::ITestInterface>::Help
          (TOnlineComponent<UE::Online::Test::ITestInterface> *this,UWorld *param_1,wchar_t *param_2
          ,FOutputDevice *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  UWorld *pUVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  wchar_t *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->ExecCommands).field_0x28;
  puVar1 = &(this->ExecCommands).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExecCommands).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14eee94bd;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (int)lVar12 + -1 + iVar15;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14eee94bd:
  uVar14 = *(uint *)&(this->ExecCommands).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar18);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ExecCommands).field_0x8 -
                       *(int *)&(this->ExecCommands).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pwVar7 = local_res18;
  pUVar6 = local_res10;
  uVar10 = *(uint *)&(this->ExecCommands).field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(this->ExecCommands).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14eee95c1;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14eee95c1:
  while( true ) {
    if (*(int *)&(this->ExecCommands).field_0x8 - *(int *)&(this->ExecCommands).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->ExecCommands)
    ;
    (**(code **)(*plVar4 + 0x10))(plVar4,pUVar6,pwVar7,param_3);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return false;
}

// Help @ 14eee9650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Online::TOnlineComponent<UE::Online::IAchievements>::Help
          (TOnlineComponent<UE::Online::IAchievements> *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  UWorld *pUVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  wchar_t *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->ExecCommands).field_0x28;
  puVar1 = &(this->ExecCommands).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExecCommands).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14eee96fd;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (int)lVar12 + -1 + iVar15;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14eee96fd:
  uVar14 = *(uint *)&(this->ExecCommands).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar18);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ExecCommands).field_0x8 -
                       *(int *)&(this->ExecCommands).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pwVar7 = local_res18;
  pUVar6 = local_res10;
  uVar10 = *(uint *)&(this->ExecCommands).field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(this->ExecCommands).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14eee9801;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14eee9801:
  while( true ) {
    if (*(int *)&(this->ExecCommands).field_0x8 - *(int *)&(this->ExecCommands).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->ExecCommands)
    ;
    (**(code **)(*plVar4 + 0x10))(plVar4,pUVar6,pwVar7,param_3);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return false;
}

// Help @ 14eee9890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Online::TOnlineComponent<UE::Online::IAuth>::Help
          (TOnlineComponent<UE::Online::IAuth> *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  UWorld *pUVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  wchar_t *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->ExecCommands).field_0x28;
  puVar1 = &(this->ExecCommands).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExecCommands).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14eee993d;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (int)lVar12 + -1 + iVar15;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14eee993d:
  uVar14 = *(uint *)&(this->ExecCommands).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar18);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ExecCommands).field_0x8 -
                       *(int *)&(this->ExecCommands).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pwVar7 = local_res18;
  pUVar6 = local_res10;
  uVar10 = *(uint *)&(this->ExecCommands).field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(this->ExecCommands).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14eee9a41;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14eee9a41:
  while( true ) {
    if (*(int *)&(this->ExecCommands).field_0x8 - *(int *)&(this->ExecCommands).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->ExecCommands)
    ;
    (**(code **)(*plVar4 + 0x10))(plVar4,pUVar6,pwVar7,param_3);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return false;
}

// Help @ 14eee9ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Online::TOnlineComponent<UE::Online::ICommerce>::Help
          (TOnlineComponent<UE::Online::ICommerce> *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  UWorld *pUVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  wchar_t *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->ExecCommands).field_0x28;
  puVar1 = &(this->ExecCommands).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExecCommands).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14eee9b7d;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (int)lVar12 + -1 + iVar15;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14eee9b7d:
  uVar14 = *(uint *)&(this->ExecCommands).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar18);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ExecCommands).field_0x8 -
                       *(int *)&(this->ExecCommands).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pwVar7 = local_res18;
  pUVar6 = local_res10;
  uVar10 = *(uint *)&(this->ExecCommands).field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(this->ExecCommands).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14eee9c81;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14eee9c81:
  while( true ) {
    if (*(int *)&(this->ExecCommands).field_0x8 - *(int *)&(this->ExecCommands).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->ExecCommands)
    ;
    (**(code **)(*plVar4 + 0x10))(plVar4,pUVar6,pwVar7,param_3);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return false;
}

// Help @ 14eee9d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Online::TOnlineComponent<UE::Online::IConnectivity>::Help
          (TOnlineComponent<UE::Online::IConnectivity> *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  UWorld *pUVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  wchar_t *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->ExecCommands).field_0x28;
  puVar1 = &(this->ExecCommands).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExecCommands).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14eee9dbd;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (int)lVar12 + -1 + iVar15;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14eee9dbd:
  uVar14 = *(uint *)&(this->ExecCommands).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar18);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ExecCommands).field_0x8 -
                       *(int *)&(this->ExecCommands).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pwVar7 = local_res18;
  pUVar6 = local_res10;
  uVar10 = *(uint *)&(this->ExecCommands).field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(this->ExecCommands).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14eee9ec1;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14eee9ec1:
  while( true ) {
    if (*(int *)&(this->ExecCommands).field_0x8 - *(int *)&(this->ExecCommands).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->ExecCommands)
    ;
    (**(code **)(*plVar4 + 0x10))(plVar4,pUVar6,pwVar7,param_3);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return false;
}

// Help @ 14eee9f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Online::TOnlineComponent<UE::Online::IExternalUI>::Help
          (TOnlineComponent<UE::Online::IExternalUI> *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  UWorld *pUVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  wchar_t *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->ExecCommands).field_0x28;
  puVar1 = &(this->ExecCommands).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExecCommands).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14eee9ffd;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (int)lVar12 + -1 + iVar15;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14eee9ffd:
  uVar14 = *(uint *)&(this->ExecCommands).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar18);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ExecCommands).field_0x8 -
                       *(int *)&(this->ExecCommands).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pwVar7 = local_res18;
  pUVar6 = local_res10;
  uVar10 = *(uint *)&(this->ExecCommands).field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(this->ExecCommands).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14eeea101;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14eeea101:
  while( true ) {
    if (*(int *)&(this->ExecCommands).field_0x8 - *(int *)&(this->ExecCommands).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->ExecCommands)
    ;
    (**(code **)(*plVar4 + 0x10))(plVar4,pUVar6,pwVar7,param_3);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return false;
}

// Help @ 14eeea190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Online::TOnlineComponent<UE::Online::ILeaderboards>::Help
          (TOnlineComponent<UE::Online::ILeaderboards> *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  UWorld *pUVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  wchar_t *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->ExecCommands).field_0x28;
  puVar1 = &(this->ExecCommands).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExecCommands).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14eeea23d;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (int)lVar12 + -1 + iVar15;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14eeea23d:
  uVar14 = *(uint *)&(this->ExecCommands).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar18);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ExecCommands).field_0x8 -
                       *(int *)&(this->ExecCommands).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pwVar7 = local_res18;
  pUVar6 = local_res10;
  uVar10 = *(uint *)&(this->ExecCommands).field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(this->ExecCommands).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14eeea341;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14eeea341:
  while( true ) {
    if (*(int *)&(this->ExecCommands).field_0x8 - *(int *)&(this->ExecCommands).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->ExecCommands)
    ;
    (**(code **)(*plVar4 + 0x10))(plVar4,pUVar6,pwVar7,param_3);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return false;
}

// Help @ 14eeea3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Online::TOnlineComponent<UE::Online::ILobbies>::Help
          (TOnlineComponent<UE::Online::ILobbies> *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  UWorld *pUVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  wchar_t *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->ExecCommands).field_0x28;
  puVar1 = &(this->ExecCommands).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExecCommands).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14eeea47d;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (int)lVar12 + -1 + iVar15;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14eeea47d:
  uVar14 = *(uint *)&(this->ExecCommands).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar18);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ExecCommands).field_0x8 -
                       *(int *)&(this->ExecCommands).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pwVar7 = local_res18;
  pUVar6 = local_res10;
  uVar10 = *(uint *)&(this->ExecCommands).field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(this->ExecCommands).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14eeea581;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14eeea581:
  while( true ) {
    if (*(int *)&(this->ExecCommands).field_0x8 - *(int *)&(this->ExecCommands).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->ExecCommands)
    ;
    (**(code **)(*plVar4 + 0x10))(plVar4,pUVar6,pwVar7,param_3);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return false;
}

// Help @ 14eeea610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Online::TOnlineComponent<UE::Online::IPresence>::Help
          (TOnlineComponent<UE::Online::IPresence> *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  UWorld *pUVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  wchar_t *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->ExecCommands).field_0x28;
  puVar1 = &(this->ExecCommands).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExecCommands).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14eeea6bd;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (int)lVar12 + -1 + iVar15;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14eeea6bd:
  uVar14 = *(uint *)&(this->ExecCommands).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar18);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ExecCommands).field_0x8 -
                       *(int *)&(this->ExecCommands).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pwVar7 = local_res18;
  pUVar6 = local_res10;
  uVar10 = *(uint *)&(this->ExecCommands).field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(this->ExecCommands).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14eeea7c1;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14eeea7c1:
  while( true ) {
    if (*(int *)&(this->ExecCommands).field_0x8 - *(int *)&(this->ExecCommands).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->ExecCommands)
    ;
    (**(code **)(*plVar4 + 0x10))(plVar4,pUVar6,pwVar7,param_3);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return false;
}

// Help @ 14eeea850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Online::TOnlineComponent<UE::Online::IPrivileges>::Help
          (TOnlineComponent<UE::Online::IPrivileges> *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  UWorld *pUVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  wchar_t *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->ExecCommands).field_0x28;
  puVar1 = &(this->ExecCommands).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExecCommands).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14eeea8fd;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (int)lVar12 + -1 + iVar15;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14eeea8fd:
  uVar14 = *(uint *)&(this->ExecCommands).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar18);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ExecCommands).field_0x8 -
                       *(int *)&(this->ExecCommands).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pwVar7 = local_res18;
  pUVar6 = local_res10;
  uVar10 = *(uint *)&(this->ExecCommands).field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(this->ExecCommands).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14eeeaa01;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14eeeaa01:
  while( true ) {
    if (*(int *)&(this->ExecCommands).field_0x8 - *(int *)&(this->ExecCommands).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->ExecCommands)
    ;
    (**(code **)(*plVar4 + 0x10))(plVar4,pUVar6,pwVar7,param_3);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return false;
}

// Help @ 14eeeaa90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Online::TOnlineComponent<UE::Online::ISessions>::Help
          (TOnlineComponent<UE::Online::ISessions> *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  UWorld *pUVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  wchar_t *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->ExecCommands).field_0x28;
  puVar1 = &(this->ExecCommands).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExecCommands).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14eeeab3d;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (int)lVar12 + -1 + iVar15;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14eeeab3d:
  uVar14 = *(uint *)&(this->ExecCommands).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar18);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ExecCommands).field_0x8 -
                       *(int *)&(this->ExecCommands).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pwVar7 = local_res18;
  pUVar6 = local_res10;
  uVar10 = *(uint *)&(this->ExecCommands).field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(this->ExecCommands).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14eeeac41;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14eeeac41:
  while( true ) {
    if (*(int *)&(this->ExecCommands).field_0x8 - *(int *)&(this->ExecCommands).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->ExecCommands)
    ;
    (**(code **)(*plVar4 + 0x10))(plVar4,pUVar6,pwVar7,param_3);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return false;
}

// Initialize @ 14eeed1e0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::Test::ITestInterface>::Initialize
          (TOnlineComponent<UE::Online::Test::ITestInterface> *this)

{
  FOnlineServicesCommon *pFVar1;
  TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>
  local_res8;
  FString *local_18;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  **local_10;
  
  pFVar1 = this->Services;
  local_res8.Value = ::operator_new(0x10);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    local_res8.Value[1].Ptr = (IOnlineExecHandler *)this;
    (local_res8.Value)->Ptr =
         (IOnlineExecHandler *)
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_UITestInterface_Test_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  local_18 = &this->InterfaceName;
  local_10 = &local_res8.Value;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)&pFVar1->ExecCommands,&local_res8,(bool *)&local_18);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    (*(code *)*(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  (**(code **)(this->_padding_ + 0x38))(this);
                    /* WARNING: Could not recover jumptable at 0x00014eeed26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this);
  return;
}

// Initialize @ 14eeed280

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IAchievements>::Initialize
          (TOnlineComponent<UE::Online::IAchievements> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>
  local_res8;
  FWeakReferencer<1> *local_18;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  **local_10;
  
  lVar2 = this->_padding_;
  puVar1 = &this[-1].PerUserSerialQueue.field_0x48;
  local_res8.Value = ::operator_new(0x10);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    local_res8.Value[1].Ptr = (IOnlineExecHandler *)puVar1;
    (local_res8.Value)->Ptr =
         (IOnlineExecHandler *)
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VIAchievements_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  local_18 = &(this->WeakThis).WeakReferenceCount;
  local_10 = &local_res8.Value;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x130),&local_res8,(bool *)&local_18);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    (*(code *)*(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  (**(code **)(*(longlong *)puVar1 + 0x40))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014eeed31a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this);
  return;
}

// Initialize @ 14eeed330

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IAuth>::Initialize
          (TOnlineComponent<UE::Online::IAuth> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>
  local_res8;
  FWeakReferencer<1> *local_18;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  **local_10;
  
  lVar2 = this->_padding_;
  puVar1 = &this[-1].PerUserSerialQueue.field_0x48;
  local_res8.Value = ::operator_new(0x10);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    local_res8.Value[1].Ptr = (IOnlineExecHandler *)puVar1;
    (local_res8.Value)->Ptr =
         (IOnlineExecHandler *)
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VIAuth_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  local_18 = &(this->WeakThis).WeakReferenceCount;
  local_10 = &local_res8.Value;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x130),&local_res8,(bool *)&local_18);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    (*(code *)*(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  (**(code **)(*(longlong *)puVar1 + 0xa8))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014eeed3cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this);
  return;
}

// Initialize @ 14eeed3e0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ICommerce>::Initialize
          (TOnlineComponent<UE::Online::ICommerce> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>
  local_res8;
  FWeakReferencer<1> *local_18;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  **local_10;
  
  lVar2 = this->_padding_;
  puVar1 = &this[-1].PerUserSerialQueue.field_0x48;
  local_res8.Value = ::operator_new(0x10);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    local_res8.Value[1].Ptr = (IOnlineExecHandler *)puVar1;
    (local_res8.Value)->Ptr =
         (IOnlineExecHandler *)
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VICommerce_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  local_18 = &(this->WeakThis).WeakReferenceCount;
  local_10 = &local_res8.Value;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x130),&local_res8,(bool *)&local_18);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    (*(code *)*(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  (**(code **)(*(longlong *)puVar1 + 0x60))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014eeed47a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this);
  return;
}

// Initialize @ 14eeed490

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IConnectivity>::Initialize
          (TOnlineComponent<UE::Online::IConnectivity> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>
  local_res8;
  FWeakReferencer<1> *local_18;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  **local_10;
  
  lVar2 = this->_padding_;
  puVar1 = &this[-1].PerUserSerialQueue.field_0x48;
  local_res8.Value = ::operator_new(0x10);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    local_res8.Value[1].Ptr = (IOnlineExecHandler *)puVar1;
    (local_res8.Value)->Ptr =
         (IOnlineExecHandler *)
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VIConnectivity_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  local_18 = &(this->WeakThis).WeakReferenceCount;
  local_10 = &local_res8.Value;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x130),&local_res8,(bool *)&local_18);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    (*(code *)*(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  (**(code **)(*(longlong *)puVar1 + 0x10))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014eeed52a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this);
  return;
}

// Initialize @ 14eeed540

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IExternalUI>::Initialize
          (TOnlineComponent<UE::Online::IExternalUI> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>
  local_res8;
  FWeakReferencer<1> *local_18;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  **local_10;
  
  lVar2 = this->_padding_;
  puVar1 = &this[-1].PerUserSerialQueue.field_0x48;
  local_res8.Value = ::operator_new(0x10);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    local_res8.Value[1].Ptr = (IOnlineExecHandler *)puVar1;
    (local_res8.Value)->Ptr =
         (IOnlineExecHandler *)
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VIExternalUI_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  local_18 = &(this->WeakThis).WeakReferenceCount;
  local_10 = &local_res8.Value;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x130),&local_res8,(bool *)&local_18);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    (*(code *)*(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  (**(code **)(*(longlong *)puVar1 + 0x18))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014eeed5da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this);
  return;
}

// Initialize @ 14eeed5f0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ILeaderboards>::Initialize
          (TOnlineComponent<UE::Online::ILeaderboards> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>
  local_res8;
  FWeakReferencer<1> *local_18;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  **local_10;
  
  lVar2 = this->_padding_;
  puVar1 = &this[-1].PerUserSerialQueue.field_0x48;
  local_res8.Value = ::operator_new(0x10);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    local_res8.Value[1].Ptr = (IOnlineExecHandler *)puVar1;
    (local_res8.Value)->Ptr =
         (IOnlineExecHandler *)
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VILeaderboards_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  local_18 = &(this->WeakThis).WeakReferenceCount;
  local_10 = &local_res8.Value;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x130),&local_res8,(bool *)&local_18);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    (*(code *)*(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  (**(code **)(*(longlong *)puVar1 + 0x20))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014eeed68a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this);
  return;
}

// Initialize @ 14eeed6a0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ILobbies>::Initialize
          (TOnlineComponent<UE::Online::ILobbies> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>
  local_res8;
  FWeakReferencer<1> *local_18;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  **local_10;
  
  lVar2 = this->_padding_;
  puVar1 = &this[-1].PerUserSerialQueue.field_0x48;
  local_res8.Value = ::operator_new(0x10);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    local_res8.Value[1].Ptr = (IOnlineExecHandler *)puVar1;
    (local_res8.Value)->Ptr =
         (IOnlineExecHandler *)
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VILobbies_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  local_18 = &(this->WeakThis).WeakReferenceCount;
  local_10 = &local_res8.Value;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x130),&local_res8,(bool *)&local_18);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    (*(code *)*(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  (**(code **)(*(longlong *)puVar1 + 0xe0))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014eeed73d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this);
  return;
}

// Initialize @ 14eeed750

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IPresence>::Initialize
          (TOnlineComponent<UE::Online::IPresence> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>
  local_res8;
  FWeakReferencer<1> *local_18;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  **local_10;
  
  lVar2 = this->_padding_;
  puVar1 = &this[-1].PerUserSerialQueue.field_0x48;
  local_res8.Value = ::operator_new(0x10);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    local_res8.Value[1].Ptr = (IOnlineExecHandler *)puVar1;
    (local_res8.Value)->Ptr =
         (IOnlineExecHandler *)
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VIPresence_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  local_18 = &(this->WeakThis).WeakReferenceCount;
  local_10 = &local_res8.Value;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x130),&local_res8,(bool *)&local_18);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    (*(code *)*(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  (**(code **)(*(longlong *)puVar1 + 0x30))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014eeed7ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this);
  return;
}

// Initialize @ 14eeed800

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IPrivileges>::Initialize
          (TOnlineComponent<UE::Online::IPrivileges> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>
  local_res8;
  FWeakReferencer<1> *local_18;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  **local_10;
  
  lVar2 = this->_padding_;
  puVar1 = &this[-1].PerUserSerialQueue.field_0x48;
  local_res8.Value = ::operator_new(0x10);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    local_res8.Value[1].Ptr = (IOnlineExecHandler *)puVar1;
    (local_res8.Value)->Ptr =
         (IOnlineExecHandler *)
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VIPrivileges_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  local_18 = &(this->WeakThis).WeakReferenceCount;
  local_10 = &local_res8.Value;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x130),&local_res8,(bool *)&local_18);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    (*(code *)*(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  (**(code **)(*(longlong *)puVar1 + 0x10))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014eeed89a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this);
  return;
}

// Initialize @ 14eeed8b0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ISessions>::Initialize
          (TOnlineComponent<UE::Online::ISessions> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>
  local_res8;
  FWeakReferencer<1> *local_18;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  **local_10;
  
  lVar2 = this->_padding_;
  puVar1 = &this[-1].PerUserSerialQueue.field_0x48;
  local_res8.Value = ::operator_new(0x10);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    local_res8.Value[1].Ptr = (IOnlineExecHandler *)puVar1;
    (local_res8.Value)->Ptr =
         (IOnlineExecHandler *)
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VISessions_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  local_18 = &(this->WeakThis).WeakReferenceCount;
  local_10 = &local_res8.Value;
  TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_const_&,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_&&>_>
            ((TSet<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x130),&local_res8,(bool *)&local_18);
  if (local_res8.Value !=
      (TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_> *)
      0x0) {
    (*(code *)*(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  (**(code **)(*(longlong *)puVar1 + 0xd0))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014eeed94d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this);
  return;
}

// PostInitialize @ 14eef4160

void __thiscall
UE::Online::TOnlineComponent<UE::Online::Test::ITestInterface>::PostInitialize
          (TOnlineComponent<UE::Online::Test::ITestInterface> *this)

{
  return;
}

// PostInitialize @ 14eef4170

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IAchievements>::PostInitialize
          (TOnlineComponent<UE::Online::IAchievements> *this)

{
  return;
}

// PostInitialize @ 14eef4180

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IAuth>::PostInitialize
          (TOnlineComponent<UE::Online::IAuth> *this)

{
  return;
}

// PostInitialize @ 14eef4190

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ICommerce>::PostInitialize
          (TOnlineComponent<UE::Online::ICommerce> *this)

{
  return;
}

// PostInitialize @ 14eef41a0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IConnectivity>::PostInitialize
          (TOnlineComponent<UE::Online::IConnectivity> *this)

{
  return;
}

// PostInitialize @ 14eef41b0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IExternalUI>::PostInitialize
          (TOnlineComponent<UE::Online::IExternalUI> *this)

{
  return;
}

// PostInitialize @ 14eef41c0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ILeaderboards>::PostInitialize
          (TOnlineComponent<UE::Online::ILeaderboards> *this)

{
  return;
}

// PostInitialize @ 14eef41d0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ILobbies>::PostInitialize
          (TOnlineComponent<UE::Online::ILobbies> *this)

{
  return;
}

// PostInitialize @ 14eef41e0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IPresence>::PostInitialize
          (TOnlineComponent<UE::Online::IPresence> *this)

{
  return;
}

// PostInitialize @ 14eef41f0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IPrivileges>::PostInitialize
          (TOnlineComponent<UE::Online::IPrivileges> *this)

{
  return;
}

// PostInitialize @ 14eef4200

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ISessions>::PostInitialize
          (TOnlineComponent<UE::Online::ISessions> *this)

{
  return;
}

// PreShutdown @ 14eef42a0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::Test::ITestInterface>::PreShutdown
          (TOnlineComponent<UE::Online::Test::ITestInterface> *this)

{
  return;
}

// PreShutdown @ 14eef42b0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IAchievements>::PreShutdown
          (TOnlineComponent<UE::Online::IAchievements> *this)

{
  return;
}

// PreShutdown @ 14eef42c0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IAuth>::PreShutdown
          (TOnlineComponent<UE::Online::IAuth> *this)

{
  return;
}

// PreShutdown @ 14eef42d0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ICommerce>::PreShutdown
          (TOnlineComponent<UE::Online::ICommerce> *this)

{
  return;
}

// PreShutdown @ 14eef42e0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IConnectivity>::PreShutdown
          (TOnlineComponent<UE::Online::IConnectivity> *this)

{
  return;
}

// PreShutdown @ 14eef42f0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IExternalUI>::PreShutdown
          (TOnlineComponent<UE::Online::IExternalUI> *this)

{
  return;
}

// PreShutdown @ 14eef4300

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ILeaderboards>::PreShutdown
          (TOnlineComponent<UE::Online::ILeaderboards> *this)

{
  return;
}

// PreShutdown @ 14eef4310

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ILobbies>::PreShutdown
          (TOnlineComponent<UE::Online::ILobbies> *this)

{
  return;
}

// PreShutdown @ 14eef4320

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IPresence>::PreShutdown
          (TOnlineComponent<UE::Online::IPresence> *this)

{
  return;
}

// PreShutdown @ 14eef4330

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IPrivileges>::PreShutdown
          (TOnlineComponent<UE::Online::IPrivileges> *this)

{
  return;
}

// PreShutdown @ 14eef4340

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ISessions>::PreShutdown
          (TOnlineComponent<UE::Online::ISessions> *this)

{
  return;
}

// RegisterCommands @ 14eef94d0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::Test::ITestInterface>::RegisterCommands
          (TOnlineComponent<UE::Online::Test::ITestInterface> *this)

{
  return;
}

// RegisterCommands @ 14eef94e0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IAchievements>::RegisterCommands
          (TOnlineComponent<UE::Online::IAchievements> *this)

{
  return;
}

// RegisterCommands @ 14eef94f0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IAuth>::RegisterCommands
          (TOnlineComponent<UE::Online::IAuth> *this)

{
  return;
}

// RegisterCommands @ 14eef9500

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ICommerce>::RegisterCommands
          (TOnlineComponent<UE::Online::ICommerce> *this)

{
  return;
}

// RegisterCommands @ 14eef9510

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IConnectivity>::RegisterCommands
          (TOnlineComponent<UE::Online::IConnectivity> *this)

{
  return;
}

// RegisterCommands @ 14eef9520

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IExternalUI>::RegisterCommands
          (TOnlineComponent<UE::Online::IExternalUI> *this)

{
  return;
}

// RegisterCommands @ 14eef9530

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ILeaderboards>::RegisterCommands
          (TOnlineComponent<UE::Online::ILeaderboards> *this)

{
  return;
}

// RegisterCommands @ 14eef9540

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ILobbies>::RegisterCommands
          (TOnlineComponent<UE::Online::ILobbies> *this)

{
  return;
}

// RegisterCommands @ 14eef9550

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IPresence>::RegisterCommands
          (TOnlineComponent<UE::Online::IPresence> *this)

{
  return;
}

// RegisterCommands @ 14eef9560

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IPrivileges>::RegisterCommands
          (TOnlineComponent<UE::Online::IPrivileges> *this)

{
  return;
}

// RegisterCommands @ 14eef9570

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ISessions>::RegisterCommands
          (TOnlineComponent<UE::Online::ISessions> *this)

{
  return;
}

// Shutdown @ 14ef12360

void __thiscall
UE::Online::TOnlineComponent<UE::Online::Test::ITestInterface>::Shutdown
          (TOnlineComponent<UE::Online::Test::ITestInterface> *this)

{
  return;
}

// Shutdown @ 14ef12370

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IAchievements>::Shutdown
          (TOnlineComponent<UE::Online::IAchievements> *this)

{
  return;
}

// Shutdown @ 14ef12380

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IAuth>::Shutdown(TOnlineComponent<UE::Online::IAuth> *this)

{
  return;
}

// Shutdown @ 14ef12390

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ICommerce>::Shutdown
          (TOnlineComponent<UE::Online::ICommerce> *this)

{
  return;
}

// Shutdown @ 14ef123a0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IConnectivity>::Shutdown
          (TOnlineComponent<UE::Online::IConnectivity> *this)

{
  return;
}

// Shutdown @ 14ef123b0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IExternalUI>::Shutdown
          (TOnlineComponent<UE::Online::IExternalUI> *this)

{
  return;
}

// Shutdown @ 14ef123c0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ILeaderboards>::Shutdown
          (TOnlineComponent<UE::Online::ILeaderboards> *this)

{
  return;
}

// Shutdown @ 14ef123d0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ILobbies>::Shutdown
          (TOnlineComponent<UE::Online::ILobbies> *this)

{
  return;
}

// Shutdown @ 14ef123e0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IPresence>::Shutdown
          (TOnlineComponent<UE::Online::IPresence> *this)

{
  return;
}

// Shutdown @ 14ef123f0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IPrivileges>::Shutdown
          (TOnlineComponent<UE::Online::IPrivileges> *this)

{
  return;
}

// Shutdown @ 14ef12400

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ISessions>::Shutdown
          (TOnlineComponent<UE::Online::ISessions> *this)

{
  return;
}

// Tick @ 14ef151e0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::Test::ITestInterface>::Tick
          (TOnlineComponent<UE::Online::Test::ITestInterface> *this,float param_1)

{
  return;
}

// Tick @ 14ef151f0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IAchievements>::Tick
          (TOnlineComponent<UE::Online::IAchievements> *this,float param_1)

{
  return;
}

// Tick @ 14ef15200

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IAuth>::Tick
          (TOnlineComponent<UE::Online::IAuth> *this,float param_1)

{
  return;
}

// Tick @ 14ef15210

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ICommerce>::Tick
          (TOnlineComponent<UE::Online::ICommerce> *this,float param_1)

{
  return;
}

// Tick @ 14ef15220

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IConnectivity>::Tick
          (TOnlineComponent<UE::Online::IConnectivity> *this,float param_1)

{
  return;
}

// Tick @ 14ef15230

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IExternalUI>::Tick
          (TOnlineComponent<UE::Online::IExternalUI> *this,float param_1)

{
  return;
}

// Tick @ 14ef15240

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ILeaderboards>::Tick
          (TOnlineComponent<UE::Online::ILeaderboards> *this,float param_1)

{
  return;
}

// Tick @ 14ef15250

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ILobbies>::Tick
          (TOnlineComponent<UE::Online::ILobbies> *this,float param_1)

{
  return;
}

// Tick @ 14ef15260

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IPresence>::Tick
          (TOnlineComponent<UE::Online::IPresence> *this,float param_1)

{
  return;
}

// Tick @ 14ef15270

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IPrivileges>::Tick
          (TOnlineComponent<UE::Online::IPrivileges> *this,float param_1)

{
  return;
}

// Tick @ 14ef15280

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ISessions>::Tick
          (TOnlineComponent<UE::Online::ISessions> *this,float param_1)

{
  return;
}

// UpdateConfig @ 14ef32040

void __thiscall
UE::Online::TOnlineComponent<UE::Online::Test::ITestInterface>::UpdateConfig
          (TOnlineComponent<UE::Online::Test::ITestInterface> *this)

{
  return;
}

// UpdateConfig @ 14ef32050

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IAchievements>::UpdateConfig
          (TOnlineComponent<UE::Online::IAchievements> *this)

{
  return;
}

// UpdateConfig @ 14ef32060

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IAuth>::UpdateConfig
          (TOnlineComponent<UE::Online::IAuth> *this)

{
  return;
}

// UpdateConfig @ 14ef32070

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ICommerce>::UpdateConfig
          (TOnlineComponent<UE::Online::ICommerce> *this)

{
  return;
}

// UpdateConfig @ 14ef32080

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IConnectivity>::UpdateConfig
          (TOnlineComponent<UE::Online::IConnectivity> *this)

{
  return;
}

// UpdateConfig @ 14ef32090

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IExternalUI>::UpdateConfig
          (TOnlineComponent<UE::Online::IExternalUI> *this)

{
  return;
}

// UpdateConfig @ 14ef320a0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ILeaderboards>::UpdateConfig
          (TOnlineComponent<UE::Online::ILeaderboards> *this)

{
  return;
}

// UpdateConfig @ 14ef320b0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ILobbies>::UpdateConfig
          (TOnlineComponent<UE::Online::ILobbies> *this)

{
  return;
}

// UpdateConfig @ 14ef320c0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IPresence>::UpdateConfig
          (TOnlineComponent<UE::Online::IPresence> *this)

{
  return;
}

// UpdateConfig @ 14ef320d0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IPrivileges>::UpdateConfig
          (TOnlineComponent<UE::Online::IPrivileges> *this)

{
  return;
}

// UpdateConfig @ 14ef320e0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ISessions>::UpdateConfig
          (TOnlineComponent<UE::Online::ISessions> *this)

{
  return;
}

// ~TOnlineComponent<UE::Online::ISocial> @ 14ef745e0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ISocial>::~TOnlineComponent<UE::Online::ISocial>
          (TOnlineComponent<UE::Online::ISocial> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerUserSerialQueue).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerUserSerialQueue);
  FOnlineEventDelegateHandle::Unbind(&(this->SerialQueue).ContinuationDelegateHandle);
  if (*(longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder != 0) {
    plVar4 = *(longlong **)
              &(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x10
    ;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SerialQueue).InFlightOperation.SharedReferenceCount.ReferenceController);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->SerialQueue);
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExecCommands).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecCommands);
  pFVar5 = (this->InterfaceName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineComponent_Online_UE__6B_;
  return;
}

// ~TOnlineComponent<UE::Online::IStats> @ 14ef746d0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IStats>::~TOnlineComponent<UE::Online::IStats>
          (TOnlineComponent<UE::Online::IStats> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerUserSerialQueue).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerUserSerialQueue);
  FOnlineEventDelegateHandle::Unbind(&(this->SerialQueue).ContinuationDelegateHandle);
  if (*(longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder != 0) {
    plVar4 = *(longlong **)
              &(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x10
    ;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SerialQueue).InFlightOperation.SharedReferenceCount.ReferenceController);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->SerialQueue);
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExecCommands).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecCommands);
  pFVar5 = (this->InterfaceName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineComponent_Online_UE__6B_;
  return;
}

// ~TOnlineComponent<UE::Online::ITitleFile> @ 14ef747c0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ITitleFile>::~TOnlineComponent<UE::Online::ITitleFile>
          (TOnlineComponent<UE::Online::ITitleFile> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerUserSerialQueue).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerUserSerialQueue);
  FOnlineEventDelegateHandle::Unbind(&(this->SerialQueue).ContinuationDelegateHandle);
  if (*(longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder != 0) {
    plVar4 = *(longlong **)
              &(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x10
    ;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SerialQueue).InFlightOperation.SharedReferenceCount.ReferenceController);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->SerialQueue);
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExecCommands).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecCommands);
  pFVar5 = (this->InterfaceName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineComponent_Online_UE__6B_;
  return;
}

// ~TOnlineComponent<UE::Online::IUserFile> @ 14ef748b0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserFile>::~TOnlineComponent<UE::Online::IUserFile>
          (TOnlineComponent<UE::Online::IUserFile> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerUserSerialQueue).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerUserSerialQueue);
  FOnlineEventDelegateHandle::Unbind(&(this->SerialQueue).ContinuationDelegateHandle);
  if (*(longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder != 0) {
    plVar4 = *(longlong **)
              &(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x10
    ;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SerialQueue).InFlightOperation.SharedReferenceCount.ReferenceController);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->SerialQueue);
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExecCommands).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecCommands);
  pFVar5 = (this->InterfaceName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineComponent_Online_UE__6B_;
  return;
}

// ~TOnlineComponent<UE::Online::IUserInfo> @ 14ef749a0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserInfo>::~TOnlineComponent<UE::Online::IUserInfo>
          (TOnlineComponent<UE::Online::IUserInfo> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong *plVar7;
  
  *(undefined4 *)&(this->PerUserSerialQueue).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PerUserSerialQueue).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TUniquePtr<UE::Online::FOnlineAsyncOpQueueSerial,TDefaultDelete<UE::Online::FOnlineAsyncOpQueueSerial>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerUserSerialQueue);
  FOnlineEventDelegateHandle::Unbind(&(this->SerialQueue).ContinuationDelegateHandle);
  if (*(longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder != 0) {
    plVar4 = *(longlong **)
              &(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x28;
    plVar7 = (longlong *)&(this->SerialQueue).ContinuationDelegateHandle.DelegateUnbinder.field_0x10
    ;
    if (plVar4 != (longlong *)0x0) {
      plVar7 = plVar4;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SerialQueue).InFlightOperation.SharedReferenceCount.ReferenceController);
  FOnlineAsyncOpQueue::~FOnlineAsyncOpQueue((FOnlineAsyncOpQueue *)&this->SerialQueue);
  *(undefined4 *)&(this->ExecCommands).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExecCommands).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExecCommands);
  pFVar5 = (this->InterfaceName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineComponent_Online_UE__6B_;
  return;
}

// GetConfigSectionHeirarchy @ 14efaab10

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::TOnlineComponent<UE::Online::ISocial>::GetConfigSectionHeirarchy
          (TOnlineComponent<UE::Online::ISocial> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_68,L"OnlineServices");
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_58,L".",&this->Services->ServiceConfigName);
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_48,L".",&this->InterfaceName);
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::ConcatCF(&local_38,L".",param_1);
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar7->field_0x0 = 0;
    *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      *(int *)(pFVar7 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
                 (int *)(pFVar7 + 0xc));
      memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetConfigSectionHeirarchy @ 14efab000

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::TOnlineComponent<UE::Online::IStats>::GetConfigSectionHeirarchy
          (TOnlineComponent<UE::Online::IStats> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_68,L"OnlineServices");
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_58,L".",&this->Services->ServiceConfigName);
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_48,L".",&this->InterfaceName);
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::ConcatCF(&local_38,L".",param_1);
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar7->field_0x0 = 0;
    *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      *(int *)(pFVar7 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
                 (int *)(pFVar7 + 0xc));
      memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetConfigSectionHeirarchy @ 14efab4f0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::TOnlineComponent<UE::Online::ITitleFile>::GetConfigSectionHeirarchy
          (TOnlineComponent<UE::Online::ITitleFile> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_68,L"OnlineServices");
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_58,L".",&this->Services->ServiceConfigName);
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_48,L".",&this->InterfaceName);
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::ConcatCF(&local_38,L".",param_1);
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar7->field_0x0 = 0;
    *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      *(int *)(pFVar7 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
                 (int *)(pFVar7 + 0xc));
      memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetConfigSectionHeirarchy @ 14efab9e0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserFile>::GetConfigSectionHeirarchy
          (TOnlineComponent<UE::Online::IUserFile> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_68,L"OnlineServices");
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_58,L".",&this->Services->ServiceConfigName);
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_48,L".",&this->InterfaceName);
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::ConcatCF(&local_38,L".",param_1);
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar7->field_0x0 = 0;
    *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      *(int *)(pFVar7 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
                 (int *)(pFVar7 + 0xc));
      memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetConfigSectionHeirarchy @ 14efabed0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserInfo>::GetConfigSectionHeirarchy
          (TOnlineComponent<UE::Online::IUserInfo> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_68,L"OnlineServices");
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_58,L".",&this->Services->ServiceConfigName);
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::ConcatCF(&local_48,L".",&this->InterfaceName);
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar6;
    }
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  iVar3 = local_68.Data.ArrayNum;
  FVar2.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  *(undefined8 *)&pFVar7->field_0x0 = 0;
  *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    *(int *)(pFVar7 + 0xc) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
               (int *)(pFVar7 + 0xc));
    memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)iVar3 * 2);
  }
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::ConcatCF(&local_38,L".",param_1);
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar6;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined8 *)&pFVar7->field_0x0 = 0;
    *(int *)&pFVar7[8].field_0x0 = local_68.Data.ArrayNum;
    if (local_68.Data.ArrayNum == 0) {
      *(int *)(pFVar7 + 0xc) = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar7,local_68.Data.ArrayNum,
                 (int *)(pFVar7 + 0xc));
      memcpy(*(void **)&pFVar7->field_0x0,FVar2.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Help @ 14efaf2d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Online::TOnlineComponent<UE::Online::ISocial>::Help
          (TOnlineComponent<UE::Online::ISocial> *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  UWorld *pUVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  wchar_t *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->ExecCommands).field_0x28;
  puVar1 = &(this->ExecCommands).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExecCommands).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14efaf37d;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (int)lVar12 + -1 + iVar15;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14efaf37d:
  uVar14 = *(uint *)&(this->ExecCommands).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar18);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ExecCommands).field_0x8 -
                       *(int *)&(this->ExecCommands).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pwVar7 = local_res18;
  pUVar6 = local_res10;
  uVar10 = *(uint *)&(this->ExecCommands).field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(this->ExecCommands).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14efaf481;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14efaf481:
  while( true ) {
    if (*(int *)&(this->ExecCommands).field_0x8 - *(int *)&(this->ExecCommands).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->ExecCommands)
    ;
    (**(code **)(*plVar4 + 0x10))(plVar4,pUVar6,pwVar7,param_3);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return false;
}

// Help @ 14efaf510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Online::TOnlineComponent<UE::Online::IStats>::Help
          (TOnlineComponent<UE::Online::IStats> *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  UWorld *pUVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  wchar_t *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->ExecCommands).field_0x28;
  puVar1 = &(this->ExecCommands).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExecCommands).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14efaf5bd;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (int)lVar12 + -1 + iVar15;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14efaf5bd:
  uVar14 = *(uint *)&(this->ExecCommands).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar18);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ExecCommands).field_0x8 -
                       *(int *)&(this->ExecCommands).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pwVar7 = local_res18;
  pUVar6 = local_res10;
  uVar10 = *(uint *)&(this->ExecCommands).field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(this->ExecCommands).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14efaf6c1;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14efaf6c1:
  while( true ) {
    if (*(int *)&(this->ExecCommands).field_0x8 - *(int *)&(this->ExecCommands).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->ExecCommands)
    ;
    (**(code **)(*plVar4 + 0x10))(plVar4,pUVar6,pwVar7,param_3);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return false;
}

// Help @ 14efaf750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Online::TOnlineComponent<UE::Online::ITitleFile>::Help
          (TOnlineComponent<UE::Online::ITitleFile> *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  UWorld *pUVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  wchar_t *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->ExecCommands).field_0x28;
  puVar1 = &(this->ExecCommands).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExecCommands).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14efaf7fd;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (int)lVar12 + -1 + iVar15;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14efaf7fd:
  uVar14 = *(uint *)&(this->ExecCommands).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar18);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ExecCommands).field_0x8 -
                       *(int *)&(this->ExecCommands).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pwVar7 = local_res18;
  pUVar6 = local_res10;
  uVar10 = *(uint *)&(this->ExecCommands).field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(this->ExecCommands).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14efaf901;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14efaf901:
  while( true ) {
    if (*(int *)&(this->ExecCommands).field_0x8 - *(int *)&(this->ExecCommands).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->ExecCommands)
    ;
    (**(code **)(*plVar4 + 0x10))(plVar4,pUVar6,pwVar7,param_3);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return false;
}

// Help @ 14efaf990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserFile>::Help
          (TOnlineComponent<UE::Online::IUserFile> *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  UWorld *pUVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  wchar_t *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->ExecCommands).field_0x28;
  puVar1 = &(this->ExecCommands).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExecCommands).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14efafa3d;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (int)lVar12 + -1 + iVar15;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14efafa3d:
  uVar14 = *(uint *)&(this->ExecCommands).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar18);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ExecCommands).field_0x8 -
                       *(int *)&(this->ExecCommands).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pwVar7 = local_res18;
  pUVar6 = local_res10;
  uVar10 = *(uint *)&(this->ExecCommands).field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(this->ExecCommands).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14efafb41;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14efafb41:
  while( true ) {
    if (*(int *)&(this->ExecCommands).field_0x8 - *(int *)&(this->ExecCommands).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->ExecCommands)
    ;
    (**(code **)(*plVar4 + 0x10))(plVar4,pUVar6,pwVar7,param_3);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return false;
}

// Help @ 14efafbd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserInfo>::Help
          (TOnlineComponent<UE::Online::IUserInfo> *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  UWorld *pUVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  UWorld *local_res10;
  wchar_t *local_res18;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->ExecCommands).field_0x28;
  puVar1 = &(this->ExecCommands).field_0x10;
  iVar18 = 0;
  uVar10 = 1;
  iVar15 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->ExecCommands).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      iVar15 = iVar15 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14efafc7d;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (int)lVar12 + -1 + iVar15;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14efafc7d:
  uVar14 = *(uint *)&(this->ExecCommands).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar18);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ExecCommands).field_0x8 -
                       *(int *)&(this->ExecCommands).field_0x34);
  local_res10 = param_1;
  local_res18 = param_2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pwVar7 = local_res18;
  pUVar6 = local_res10;
  uVar10 = *(uint *)&(this->ExecCommands).field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(this->ExecCommands).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar18 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar18;
      uVar13 = uVar13 + 0x20;
      iVar18 = iVar18 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14efafd81;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14efafd81:
  while( true ) {
    if (*(int *)&(this->ExecCommands).field_0x8 - *(int *)&(this->ExecCommands).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar14) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              ((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this->ExecCommands)
    ;
    (**(code **)(*plVar4 + 0x10))(plVar4,pUVar6,pwVar7,param_3);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return false;
}

// Initialize @ 14efb0a30

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ISocial>::Initialize
          (TOnlineComponent<UE::Online::ISocial> *this)

{
  undefined1 *puVar1;
  FOnlineServicesCommon *this_00;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  local_res8;
  
  this_00 = (FOnlineServicesCommon *)this->_padding_;
  puVar1 = &this[-1].PerUserSerialQueue.field_0x48;
  local_res8.Ptr = ::operator_new(0x10);
  if (local_res8.Ptr != (IOnlineExecHandler *)0x0) {
    local_res8.Ptr[1] = (IOnlineExecHandler)puVar1;
    *local_res8.Ptr =
         (IOnlineExecHandler)
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VISocial_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  FOnlineServicesCommon::RegisterExecHandler
            (this_00,(FString *)&(this->WeakThis).WeakReferenceCount,&local_res8);
  if (local_res8.Ptr != (IOnlineExecHandler *)0x0) {
    (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
  }
  (**(code **)(*(longlong *)puVar1 + 0x48))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014efb0aaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this);
  return;
}

// Initialize @ 14efb0ac0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IStats>::Initialize
          (TOnlineComponent<UE::Online::IStats> *this)

{
  undefined1 *puVar1;
  FOnlineServicesCommon *this_00;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  local_res8;
  
  this_00 = (FOnlineServicesCommon *)this->_padding_;
  puVar1 = &this[-1].PerUserSerialQueue.field_0x48;
  local_res8.Ptr = ::operator_new(0x10);
  if (local_res8.Ptr != (IOnlineExecHandler *)0x0) {
    local_res8.Ptr[1] = (IOnlineExecHandler)puVar1;
    *local_res8.Ptr =
         (IOnlineExecHandler)
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VIStats_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  FOnlineServicesCommon::RegisterExecHandler
            (this_00,(FString *)&(this->WeakThis).WeakReferenceCount,&local_res8);
  if (local_res8.Ptr != (IOnlineExecHandler *)0x0) {
    (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
  }
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014efb0b3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this);
  return;
}

// Initialize @ 14efb0b50

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ITitleFile>::Initialize
          (TOnlineComponent<UE::Online::ITitleFile> *this)

{
  undefined1 *puVar1;
  FOnlineServicesCommon *this_00;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  local_res8;
  
  this_00 = (FOnlineServicesCommon *)this->_padding_;
  puVar1 = &this[-1].PerUserSerialQueue.field_0x48;
  local_res8.Ptr = ::operator_new(0x10);
  if (local_res8.Ptr != (IOnlineExecHandler *)0x0) {
    local_res8.Ptr[1] = (IOnlineExecHandler)puVar1;
    *local_res8.Ptr =
         (IOnlineExecHandler)
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VITitleFile_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  FOnlineServicesCommon::RegisterExecHandler
            (this_00,(FString *)&(this->WeakThis).WeakReferenceCount,&local_res8);
  if (local_res8.Ptr != (IOnlineExecHandler *)0x0) {
    (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
  }
  (**(code **)(*(longlong *)puVar1 + 0x18))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014efb0bcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this);
  return;
}

// Initialize @ 14efb0be0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserFile>::Initialize
          (TOnlineComponent<UE::Online::IUserFile> *this)

{
  undefined1 *puVar1;
  FOnlineServicesCommon *this_00;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  local_res8;
  
  this_00 = (FOnlineServicesCommon *)this->_padding_;
  puVar1 = &this[-1].PerUserSerialQueue.field_0x48;
  local_res8.Ptr = ::operator_new(0x10);
  if (local_res8.Ptr != (IOnlineExecHandler *)0x0) {
    local_res8.Ptr[1] = (IOnlineExecHandler)puVar1;
    *local_res8.Ptr =
         (IOnlineExecHandler)
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VIUserFile_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  FOnlineServicesCommon::RegisterExecHandler
            (this_00,(FString *)&(this->WeakThis).WeakReferenceCount,&local_res8);
  if (local_res8.Ptr != (IOnlineExecHandler *)0x0) {
    (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
  }
  (**(code **)(*(longlong *)puVar1 + 0x30))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014efb0c5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this);
  return;
}

// Initialize @ 14efb0c70

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserInfo>::Initialize
          (TOnlineComponent<UE::Online::IUserInfo> *this)

{
  undefined1 *puVar1;
  FOnlineServicesCommon *this_00;
  TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>
  local_res8;
  
  this_00 = (FOnlineServicesCommon *)this->_padding_;
  puVar1 = &this[-1].PerUserSerialQueue.field_0x48;
  local_res8.Ptr = ::operator_new(0x10);
  if (local_res8.Ptr != (IOnlineExecHandler *)0x0) {
    local_res8.Ptr[1] = (IOnlineExecHandler)puVar1;
    *local_res8.Ptr =
         (IOnlineExecHandler)
         &
         ___7__TOnlineComponentExecHandler_V__TOnlineComponent_VIUserInfo_Online_UE___Online_UE___Online_UE__6B_
    ;
  }
  FOnlineServicesCommon::RegisterExecHandler
            (this_00,(FString *)&(this->WeakThis).WeakReferenceCount,&local_res8);
  if (local_res8.Ptr != (IOnlineExecHandler *)0x0) {
    (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
  }
  (**(code **)(*(longlong *)puVar1 + 0x28))(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014efb0cef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this);
  return;
}

// PostInitialize @ 14efb1640

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ISocial>::PostInitialize
          (TOnlineComponent<UE::Online::ISocial> *this)

{
  return;
}

// PostInitialize @ 14efb1650

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IStats>::PostInitialize
          (TOnlineComponent<UE::Online::IStats> *this)

{
  return;
}

// PostInitialize @ 14efb1660

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ITitleFile>::PostInitialize
          (TOnlineComponent<UE::Online::ITitleFile> *this)

{
  return;
}

// PostInitialize @ 14efb1670

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserFile>::PostInitialize
          (TOnlineComponent<UE::Online::IUserFile> *this)

{
  return;
}

// PostInitialize @ 14efb1680

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserInfo>::PostInitialize
          (TOnlineComponent<UE::Online::IUserInfo> *this)

{
  return;
}

// PreShutdown @ 14efb1690

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ISocial>::PreShutdown
          (TOnlineComponent<UE::Online::ISocial> *this)

{
  return;
}

// PreShutdown @ 14efb16a0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IStats>::PreShutdown
          (TOnlineComponent<UE::Online::IStats> *this)

{
  return;
}

// PreShutdown @ 14efb16b0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ITitleFile>::PreShutdown
          (TOnlineComponent<UE::Online::ITitleFile> *this)

{
  return;
}

// PreShutdown @ 14efb16c0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserFile>::PreShutdown
          (TOnlineComponent<UE::Online::IUserFile> *this)

{
  return;
}

// PreShutdown @ 14efb16d0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserInfo>::PreShutdown
          (TOnlineComponent<UE::Online::IUserInfo> *this)

{
  return;
}

// RegisterCommands @ 14efb2320

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ISocial>::RegisterCommands
          (TOnlineComponent<UE::Online::ISocial> *this)

{
  return;
}

// RegisterCommands @ 14efb2330

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IStats>::RegisterCommands
          (TOnlineComponent<UE::Online::IStats> *this)

{
  return;
}

// RegisterCommands @ 14efb2340

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ITitleFile>::RegisterCommands
          (TOnlineComponent<UE::Online::ITitleFile> *this)

{
  return;
}

// RegisterCommands @ 14efb2350

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserFile>::RegisterCommands
          (TOnlineComponent<UE::Online::IUserFile> *this)

{
  return;
}

// RegisterCommands @ 14efb2360

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserInfo>::RegisterCommands
          (TOnlineComponent<UE::Online::IUserInfo> *this)

{
  return;
}

// Shutdown @ 14efba0a0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ISocial>::Shutdown
          (TOnlineComponent<UE::Online::ISocial> *this)

{
  return;
}

// Shutdown @ 14efba0b0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IStats>::Shutdown
          (TOnlineComponent<UE::Online::IStats> *this)

{
  return;
}

// Shutdown @ 14efba0c0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ITitleFile>::Shutdown
          (TOnlineComponent<UE::Online::ITitleFile> *this)

{
  return;
}

// Shutdown @ 14efba0d0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserFile>::Shutdown
          (TOnlineComponent<UE::Online::IUserFile> *this)

{
  return;
}

// Shutdown @ 14efba0e0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserInfo>::Shutdown
          (TOnlineComponent<UE::Online::IUserInfo> *this)

{
  return;
}

// Tick @ 14efba0f0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ISocial>::Tick
          (TOnlineComponent<UE::Online::ISocial> *this,float param_1)

{
  return;
}

// Tick @ 14efba100

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IStats>::Tick
          (TOnlineComponent<UE::Online::IStats> *this,float param_1)

{
  return;
}

// Tick @ 14efba110

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ITitleFile>::Tick
          (TOnlineComponent<UE::Online::ITitleFile> *this,float param_1)

{
  return;
}

// Tick @ 14efba120

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserFile>::Tick
          (TOnlineComponent<UE::Online::IUserFile> *this,float param_1)

{
  return;
}

// Tick @ 14efba130

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserInfo>::Tick
          (TOnlineComponent<UE::Online::IUserInfo> *this,float param_1)

{
  return;
}

// UpdateConfig @ 14efc3bd0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ISocial>::UpdateConfig
          (TOnlineComponent<UE::Online::ISocial> *this)

{
  return;
}

// UpdateConfig @ 14efc3be0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IStats>::UpdateConfig
          (TOnlineComponent<UE::Online::IStats> *this)

{
  return;
}

// UpdateConfig @ 14efc3bf0

void __thiscall
UE::Online::TOnlineComponent<UE::Online::ITitleFile>::UpdateConfig
          (TOnlineComponent<UE::Online::ITitleFile> *this)

{
  return;
}

// UpdateConfig @ 14efc3c00

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserFile>::UpdateConfig
          (TOnlineComponent<UE::Online::IUserFile> *this)

{
  return;
}

// UpdateConfig @ 14efc3c10

void __thiscall
UE::Online::TOnlineComponent<UE::Online::IUserInfo>::UpdateConfig
          (TOnlineComponent<UE::Online::IUserInfo> *this)

{
  return;
}

